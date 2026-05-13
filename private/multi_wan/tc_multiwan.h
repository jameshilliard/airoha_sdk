#ifndef _TC_MULIF_H_
#define _TC_MULIF_H_

#include <linux/netdevice.h>
#include <linux/skbuff.h>
#include <linux/version.h>

#define KERNEL_2_6_36 		(LINUX_VERSION_CODE > KERNEL_VERSION(2,6,31))

#define MAX_MACADDRS_NUM			32
#define MAX_MACADDRS_NUM8			8
#define MACADDR_LEN           		6
#define MACADDR_OFFSET	    		3
#define MAX_IFNAME_LEN		    	20
#if defined(TCSUPPORT_CT) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
#define MAX_INTERFACENUM_EACH_PVC	8
#define IF_NAME_FORMAT			"%s_%d"		/*e.g. nas0_1*/
#endif

/*The defaule MAC assiged to bridging mode mulif interface*/
#define BRIDGE_MULIF_IF_MAC	"\xFE\xFF\xFF\xFF\xFF\xFF"

#define TRUE 1
#define FALSE 0

#ifdef ETH_P_QinQ_88a8
#undef ETH_P_QinQ_88a8
#define ETH_P_QinQ_88a8	0x88a8  
#else
#define ETH_P_QinQ_88a8	0x88a8 
#endif

/* For mulif interface MAC info. */
typedef struct
{
    char ifName[MAX_IFNAME_LEN];	
    char useFlag;
    char reserverd[3];
} IF_MAC_INFO, *PIF_MAC_INFO;

/* For mulif  MAC table info. */
typedef struct
{
    unsigned long MACNum;
    unsigned char baseMAC[MACADDR_LEN];
    IF_MAC_INFO ifMACAddr[1];
} IF_MAC_TABLE, *PIF_MAC_TABLE;

struct mulif_origdev {
	struct net_device	*origdev;
	struct list_head	virtualdev_list;
  	struct list_head	list;	
};

struct mulif_virtualdev {
	struct net_device	*virtual_dev;
  	struct list_head	list;	
};

#define MC_PPP_TO_IP (1<<0)

struct multi_wan_dev_info {
  	struct net_device *origdev;
  	struct net_device_stats stats; 
  	int    proto;
	struct mulif_virtualdev *virtualdev_list_node;
	struct mulif_origdev *origdev_list_node;
	int mode;
};

enum multi_wan_proto_types {
	MULIF_PPPOE_PROTO,/*PPPoE Mode*/
  	MULIF_IPOE_PROTO,/*IPoE Mode*/
	MULIF_PPPOE_BI_PROTO,/*PPPoE Mode with bridge interface on*/
  	MULIF_IPOE_BI_PROTO,/*IPoE Mode with bridge interface on*/  	
  	MULIF_BRIDGE_PROTO,/*Bridge Mode*/
  	MULIF_PROTO_NUM,/*Protocol num*/
};

enum multi_wan_ioctl_cmds {
	MULIF_ADDIF_CMD,/*add  interface*/
  	MULIF_REMIF_CMD,/*delete interface*/
  	MULIF_SETIFIPVERSION_CMD, /*Set interface ipversion*/
  	MULIF_ADDMVLAN_CMD, /*add mvlan*/
  	MULIF_DELMVLAN_CMD,/*del mvlan*/
  	MULIF_SHOWMVLAN_CMD,/*show mvlan*/
  	MULIF_SETOFFSET_CMD,/*set offset */ 
  	MULIF_SETDSCP_DW_CMD,/*set down dscp remark value*/
	MULIF_SET_CMD,/*set multicast mode*/
  	MULIF_CMD_NUM,/*cmd num*/
};

enum multicast_ioctl_cmds {
	MULTICAST_PPP_to_IP_CMD,/*add  interface*/
  	MULTICAST_CMD_NUM,/*cmd num*/
};

struct multi_mvlan_s{
	struct list_head list;
	unsigned short ext_mvlan;
};

struct mulif_ioctl_vtag_s{
	u8	vlan_mode;
	u16 tci;
	#ifdef TCSUPPORT_FWC_VLAN_TAG
	unsigned short tci_sec;
	unsigned char  vlan_map;
	#endif
	u16 multicast_tci;
};

struct multi_wan_dscp_dw_args{
	char ifname[IFNAMSIZ];
	char flag;
	unsigned char dscp_info;
	struct list_head list;
};
struct multi_wan_ioctl_args {
	int cmd; /* Value should be one of the multi_wan_ioctl_cmds enum defined above. */
  	int  proto;/* Value should be one of the multi_wan_proto_types enum defined above. */
  	char pvcname[IFNAMSIZ]; /* real device PVC name */
  	char ifname[IFNAMSIZ];	/*virtual device interface name*/
	struct mulif_ioctl_vtag_s	vtag;
	unsigned char mac_address[6];
	unsigned short ext_mvlan;
	int defaultGW;
	unsigned char mac_offset;
	char dscp_dw_flag;
	unsigned char dscp_dw_info;
	int mode;
	int value;
};

#ifdef CONFIG_TP_IMAGE

typedef struct {
    char virtual_name[16];
	char ppp_name[16];
	char valid;
}wan_virtualdev_pppname;

#endif /* CONFIG_TP_IMAGE */

extern void smux_ioctl_set(int (*hook)(void __user *));

extern void (*get_wan_index_info_hook)(char* wan_index);

#if KERNEL_2_6_36
extern int (*check_mulif_tci_hook)(u16 tci,u16 multicast_tci);
extern void (*get_net_device_interface_hw_stats_hook)(struct net_device *dev, struct rtnl_link_stats64 *storage);
#endif

extern int (*smux_pkt_recv_hook)(struct sk_buff *skb, struct net_device *dev, struct net_device *rdev);

#if defined(TCSUPPORT_CT) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
extern int (*do_mulif_interface_unregister_hook)(char* dev_name);
static int unregister_mulif_device(const char* vifname);
static inline int match_multicast_vtag(struct sk_buff *skb, struct net_device *vdev);
#else
extern int (*check_smuxIf_exist_hook)(struct net_device *dev);

int mulif_release_MacAddress( unsigned char *interfaceMacAddr );

#endif
extern int (*mulif_get_dev_by_source_mac_hook)(struct sk_buff *skb, struct net_device **dev);

extern unsigned long flash_base;

#endif /* _TC_MULIF_H_ */
