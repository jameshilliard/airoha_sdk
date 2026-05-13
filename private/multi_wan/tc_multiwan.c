/*Driver for mulif virtual device. To support multi interfaces for each PVC*/
#include <linux/rtnetlink.h>
#include <asm/uaccess.h>
#include <linux/notifier.h>
#include <linux/skbuff.h>
#include <linux/capability.h>
#include <linux/version.h>
#include <linux/rcupdate.h>
#include <linux/mm.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/rt_flash.h>
#include <linux/in.h>
#include <linux/in6.h>
#include <linux/init.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <linux/ppp_defs.h>
#include <net/arp.h>
#include <linux/if_vlan.h>
#include <linux/if_pppox.h>
#include <net/p8022.h>
#include <linux/module.h>
#include <linux/netdevice.h>
#include <net/datalink.h>
#include <net/addrconf.h>
#include <linux/proc_fs.h>
#include <asm/tc3162/tc3162.h>
#include "tc_multiwan.h"
#include "tc_multiwan_ic_dis.h"
#include "tcversion.h"
#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
#ifdef TCSUPPORT_OPENWRT
#include "../vlantag/vlan_tag_ct.h"
#else
#include "../vlan_tag_ct/vlan_tag_ct.h"
#endif
#endif 
#include <linux/libcompileoption.h>
#if KERNEL_2_6_36
#include <ecnt_hook/ecnt_hook_smux.h>
#include <ecnt_hook/ecnt_hook_fe.h>
#include <ecnt_hook/ecnt_hook_pon_mac.h>
#endif
#if  LINUX_VERSION_CODE >= KERNEL_VERSION(3,18,19)
#include <linux/ecnt_skbuff.h>
#include <linux/rcupdate.h>
#endif
#include <linux/foe_hook.h>
#include <linux/inetdevice.h>
#include <uapi/linux/igmp.h>

#if 0
#define tc_debug(x, args...) printk("TCMULIF: " x, ##args)
#else
static int mulif_tcdebug_on = 0;
#define tc_debug(x, args...) if(mulif_tcdebug_on) printk("TCMULIF: " x, ##args)
#endif

static int tag_router_wan_allow_untag = 0;

#if KERNEL_2_6_36
#define MULTI_WAN_DEV_INFO(x) ((struct multi_wan_dev_info *)netdev_priv(x))
#else
#define MULTI_WAN_DEV_INFO(x) ((struct multi_wan_dev_info *)(x->priv))
#endif

#define remove_IGMP_PPPoE_header 0x8
static int igmp_pppoe_to_ipoe_enable = 0;

static inline __be16 __vlan_proto(const struct sk_buff *skb)
{
	return vlan_eth_hdr(skb)->h_vlan_encapsulated_proto;
}

#define VDEV_NAME_PREFIX "nas"
static int match_multi_mvlan_list(struct net_device* vdev,unsigned short vid);
static int addmvlan_mulif_device(const char* vifname, unsigned short ext_mvlan);
static int delmvlan_mulif_device(const char* vifname, unsigned short ext_mvlan);
static int clear_multi_mvlan_list(struct net_device* vdev);
static int showmvlan_mulif_device(const char* vifname);
static int set_mulif_device(const char* vifname, int mode, int value);

extern wan_virtualdev_ifname wan_virtualdev_ifname_info[16];

void get_wan_index(const char *name, u8 *wan_index);

extern int (*fe_resource_mark_wan_idx_hook)( struct sk_buff *skb, u8 wan_index, u8 dir);

static PIF_MAC_TABLE pMACTableInfo = NULL;
static unsigned char g_BaseMacFlag = 0;
static unsigned char g_macoffset = -1;

static DEFINE_RWLOCK(mulif_lock);

static LIST_HEAD(mulif_origdev_list);
static struct list_head mulif_dev_dscp_list_node;
static DEFINE_SPINLOCK(mulif_dscp_dw_lock);

static unsigned char my_mac[6];
static void init_my_mac(void);

#ifdef CONFIG_TP_IMAGE
static wan_virtualdev_pppname wan_virtualdev_pppname_info[8];
#endif /* CONFIG_TP_IMAGE */

static struct mulif_origdev *mulif_find_origdev(const char *origdev_ifname)
{
	struct list_head *lh;
	struct mulif_origdev *origdev_list_node = NULL;

	read_lock(&mulif_lock);
  	list_for_each(lh, &mulif_origdev_list) 
	{
		origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
		if (!strncmp(origdev_list_node->origdev->name, origdev_ifname, IFNAMSIZ)) {
			
			read_unlock(&mulif_lock);
			return origdev_list_node;	
		}
  	}
	read_unlock(&mulif_lock);
	return NULL;
}

static struct mulif_origdev *mulif_find_virtualdev(const char *origdev_ifname, const char *virtualdev_ifname)
{
	struct list_head *lh, *lh2;
	struct mulif_origdev *origdev_list_node = NULL;
	struct mulif_virtualdev *virtualdev_list_node = NULL;

	read_lock(&mulif_lock);
  	list_for_each(lh, &mulif_origdev_list) 
	{
		origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
		if (!strncmp(origdev_list_node->origdev->name, origdev_ifname, IFNAMSIZ)) {					
		  	list_for_each(lh2, &origdev_list_node->virtualdev_list) 
			{
				virtualdev_list_node = (struct mulif_virtualdev *)list_entry(lh2, struct mulif_virtualdev, list);
				if (!strncmp(virtualdev_list_node->virtual_dev->name, virtualdev_ifname, IFNAMSIZ)) {
					
					read_unlock(&mulif_lock);
					return virtualdev_list_node;	
				}
		  	}
		}
  	}
	read_unlock(&mulif_lock);
	return NULL;
}

static struct mulif_origdev *mulif_find_create_origdev(const char *origdev_ifname)
{
	struct mulif_origdev *origdev_list_node = NULL;
	struct net_device *origdev_ptr = NULL;

	origdev_list_node = mulif_find_origdev(origdev_ifname);

	if(origdev_list_node != NULL)
		return origdev_list_node;

#if KERNEL_2_6_36
	origdev_ptr = dev_get_by_name(&init_net, origdev_ifname);
#else
	origdev_ptr = dev_get_by_name(origdev_ifname);
#endif

	if(origdev_ptr == NULL) 
		return NULL;
	
	origdev_list_node = kzalloc(sizeof(struct mulif_origdev), GFP_KERNEL);

	if(origdev_list_node == NULL){	
		dev_put(origdev_ptr);
		return NULL;
	}

	/*Init mulif_origdev parameter*/
	INIT_LIST_HEAD(&origdev_list_node->virtualdev_list);
	INIT_LIST_HEAD(&origdev_list_node->list);
	origdev_list_node->origdev = origdev_ptr;
	
	write_lock_irq(&mulif_lock);
	list_add_tail(&origdev_list_node->list, &mulif_origdev_list);
	write_unlock_irq(&mulif_lock);	
	dev_put(origdev_ptr);
	return origdev_list_node;
}

int mulif_count_vdev_of_origdev_byname(const char *origdev_ifname)
{
	struct list_head *lh;
	struct list_head *lh_vdev;
	struct mulif_origdev *origdev_list_node = NULL;
	int count = 0;

	read_lock(&mulif_lock);
  	list_for_each(lh, &mulif_origdev_list)
	{
  		origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
    	if (!strncmp(origdev_list_node->origdev->name, origdev_ifname, IFNAMSIZ)) 
		{
		    list_for_each(lh_vdev, &origdev_list_node->virtualdev_list) 
			{
				count++;
		    }
    	}
  	}
	read_unlock(&mulif_lock);
	return count;
}

int mulif_count_vdev_of_origdev_byptr(struct net_device *origdev)
{
	struct list_head *lh;
	struct list_head *lh_vdev;
	struct mulif_origdev *origdev_list_node = NULL;
	int count = 0;

	read_lock(&mulif_lock);
  	list_for_each(lh, &mulif_origdev_list) 
	{
		origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
		if (origdev_list_node->origdev == origdev) 
		{
		    list_for_each(lh_vdev, &origdev_list_node->virtualdev_list) 
			{
				count++;
		    }
		}
  	}
	read_unlock(&mulif_lock);
	return 0;
}


static int mulif_attach_virtualdev(struct net_device *virtualdev_ptr, const char *origdev_ifname, int mulif_proto)
{
	struct mulif_origdev *origdev_list_node = NULL;
	struct mulif_virtualdev *virtualdev_list_node = NULL;
	struct multi_wan_dev_info *dev_info = NULL;
	
	/* find one orig node on device list by name, then go ahead; */
	/* find fail, then creat this orig node on device list, if creat successful, then go ahead; */
	/* else return -1 */
	origdev_list_node = mulif_find_create_origdev(origdev_ifname);
	if(origdev_list_node == NULL)
		return -1;
	
	/* find one virtual node on deivce list by name, which means this node already exist, no need to attach anymore, then exit */
	/* else go ahead */
	virtualdev_list_node = mulif_find_virtualdev(origdev_ifname, virtualdev_ptr->name);
	if(virtualdev_list_node != NULL)
		return -1;
	
	/* alloc virtual node fail, then exit*/
	virtualdev_list_node = kzalloc(sizeof(struct mulif_virtualdev), GFP_KERNEL);
	if(virtualdev_list_node == NULL)
		return -1;

	/*Init mulif_virtualdev parameter*/
	virtualdev_list_node->virtual_dev = virtualdev_ptr;
	INIT_LIST_HEAD(&virtualdev_list_node->list);

	/*Update dev_info*/
	dev_info = MULTI_WAN_DEV_INFO(virtualdev_ptr);
	dev_info->proto = mulif_proto;
	dev_info->virtualdev_list_node = virtualdev_list_node;
	dev_info->origdev_list_node = origdev_list_node;
	dev_info->origdev = origdev_list_node->origdev;
	
	write_lock_irq(&mulif_lock);
	list_add_tail(&virtualdev_list_node->list, &origdev_list_node->virtualdev_list);
	write_unlock_irq(&mulif_lock);	
	
	return 0;
}

static int mulif_detach_virtualdev(struct net_device *virtualdev_ptr)
{
	struct mulif_origdev *origdev_list_node = NULL;
	struct mulif_virtualdev *virtualdev_list_node = NULL;
	struct multi_wan_dev_info *dev_info = NULL;

	if(virtualdev_ptr == NULL)
		return -1;

	clear_multi_mvlan_list(virtualdev_ptr);

	dev_info = MULTI_WAN_DEV_INFO(virtualdev_ptr);

	virtualdev_list_node = dev_info->virtualdev_list_node;
	origdev_list_node = dev_info->origdev_list_node;

	write_lock_irq(&mulif_lock);
	list_del(&virtualdev_list_node->list);
	write_unlock_irq(&mulif_lock);

	kfree(virtualdev_list_node);

	if (list_empty(&origdev_list_node->virtualdev_list)) {
		write_lock_irq(&mulif_lock);
		list_del(&origdev_list_node->list);
		write_unlock_irq(&mulif_lock);
		kfree(origdev_list_node);
        dev_info->origdev->priv_flags &= (~IFF_RSMUX);
	}

	/*Release MAC when router interface unregister */
	if((memcmp(virtualdev_ptr->dev_addr, BRIDGE_MULIF_IF_MAC, ETH_ALEN)) != 0 ) 
		mulif_release_MacAddress(virtualdev_ptr->dev_addr);
	
	dev_put(virtualdev_ptr);
	unregister_netdev(virtualdev_ptr);
	
	synchronize_net();
	return 0;
	
}

static int mulif_detach_all_virtualdev(void)
{
	struct mulif_origdev *origdev_list_node = NULL;
	struct mulif_virtualdev *virtualdev_list_node = NULL;
	struct mulif_origdev *origdev_list_node_tmp = NULL;
	struct mulif_virtualdev *virtualdev_list_nodetmp = NULL;
  	struct list_head *lh;
  	struct list_head *lh_vdev;

	//printk("\r\nmulif_detach_all_virtualdev: Begin\r\n");
	write_lock_irq(&mulif_lock);
	
  	list_for_each_entry_safe(origdev_list_node, origdev_list_node_tmp, &mulif_origdev_list, list) 
	{
  		//origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
  		if(origdev_list_node)
  		{
	  		//printk("\r\nmulif_detach_all_virtualdev: origdev_list_node %p , dev name %s\r\n", origdev_list_node, origdev_list_node->origdev->name);
	    	list_for_each_entry_safe(virtualdev_list_node, virtualdev_list_nodetmp, &origdev_list_node->virtualdev_list, list) 
			{
				//virtualdev_list_node =  (struct mulif_virtualdev *)list_entry(lh_vdev, struct mulif_virtualdev, list);
				if(virtualdev_list_node)
				{
					//printk("\r\nmulif_detach_all_virtualdev: virtualdev_list_node %p , dev name %s\r\n", virtualdev_list_node, virtualdev_list_node->virtual_dev->name);
					unregister_netdevice(virtualdev_list_node->virtual_dev);
					list_del(&virtualdev_list_node->list);
					kfree(virtualdev_list_node);
				}
	    	}
			origdev_list_node->origdev->priv_flags &= (~IFF_RSMUX);
			list_del(&origdev_list_node->list);
			kfree(origdev_list_node);
  		}
  	}
	write_unlock_irq(&mulif_lock);
	//printk("\r\nmulif_detach_all_virtualdev: End\r\n");

	return 0;

}

static int mulif_dump_all_dev(void)
{
	struct list_head *lh;
	struct list_head *lh_vdev;
	struct mulif_origdev *origdev_list_node = NULL;
	struct mulif_virtualdev *virtualdev_list_node = NULL;

	printk("\r\nmulif_dump_all_dev: Begin\r\n");
	read_lock(&mulif_lock);
  	list_for_each(lh, &mulif_origdev_list) 
	{
  		origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
		printk("\r\norig device name %s\r\n", origdev_list_node->origdev->name);
    	list_for_each(lh_vdev, &origdev_list_node->virtualdev_list) 
		{
			virtualdev_list_node =  (struct mulif_virtualdev *)list_entry(lh_vdev, struct mulif_virtualdev, list);
			printk("virtual device name %s belong with orig device %s\r\n", virtualdev_list_node->virtual_dev->name, origdev_list_node->origdev->name);
    	}
  	}
	read_unlock(&mulif_lock);
	printk("\r\nmulif_dump_all_dev: End\r\n");	
	return 0;

}

static int mulif_device_event(struct notifier_block *, unsigned long, void *);
static int mulif_ioctl_handler(void __user *);
int mulif_skb_recv(struct sk_buff *skb, struct net_device *dev, struct net_device *origdev);

#if !defined(TCSUPPORT_FTP_THROUGHPUT)
extern int (*check_vtag_hook)(void);
#endif

#if defined(TCSUPPORT_CT) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
int do_mulif_interface_unregister(char* dev_name);
#else
int check_mulif_interface_exist(struct net_device *dev);
#endif
extern int (*portbind_check_bind_lan2)(int bind_index);
#define IF_TYPE_OTHER (1<<4)
extern int (*match_multicast_vtag_check)
(struct sk_buff *skb, struct net_device *vdev);
extern int check_ppp_udp_multicast
(struct sk_buff *skb, struct net_device *vdev);
extern int __is_ip_udp(struct sk_buff *skb);

extern SMUX_Bridge_Info_Data pppoe_info_for_app;

static int wanAtmSupported;
static int wanPtmSupported;
static int wanEtherSupported;
static int wanXponSupported;
static int wanMultiServiceSupported;

static void init_wan_mode_support(void)
{
if(TCSUPPORT_WAN_ATM_VAL)
    wanAtmSupported=1;
else
    wanAtmSupported=0;

if(TCSUPPORT_WAN_PTM_VAL)
    wanPtmSupported=1;
else
    wanPtmSupported=0;

if(TCSUPPORT_WAN_ETHER_VAL || TCSUPPORT_WAN_XSI_VAL || TCSUPPORT_ACTIVE_ETHERNET_WAN_VAL)
    wanEtherSupported=1;
else
    wanEtherSupported=0;

if(TCSUPPORT_WAN_GPON_VAL||TCSUPPORT_WAN_EPON_VAL)
	wanXponSupported=1;
else
	wanXponSupported=0;

if(TCSUPPORT_MULTISERVICE_ON_WAN_VAL)
	wanMultiServiceSupported=1;
else
	wanMultiServiceSupported=0;
}


extern int (*get_vtag_hook)(struct net_device *dev, struct sk_buff *skb);
static u8	unvlan_dev_filter = 0;		/* determine if the disable vlan tag device receive the vlan packet or not, default receive */

#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
extern u32 	vtag_free_rx_cnt;
extern u32 	vtag_free_tx_cnt;
extern int (*check_vtag_ct_hook)(void);
extern int (*check_vtag_restore_ct_hook)(void);
extern int (*restore_vtag_ct_hook)(struct sk_buff **pskb);
extern int (*handle_vtag_tx_ct_hook)(struct sk_buff **pskb);
extern int (*handle_vtag_rx_ct_hook)(struct sk_buff **pskb);

extern u8 vtag_dbg_level;

int vtag_wan_ifc_select(struct sk_buff* skb, struct mulif_origdev *origdev_list_node);
#endif

#if KERNEL_2_6_36
extern int (*xpon_hgu_down_multicast_access_control_hook)(struct sk_buff* skb);
#endif

/*For mulif interface MAC init and allocate*/
unsigned long transform_mac2ulong(unsigned char *macAddress, unsigned int offset )
{
	unsigned long macValue = 0;
	
	memcpy((unsigned char *) &macValue, &macAddress[offset], MACADDR_LEN - offset);
    macValue = ntohl(macValue) >> 8;

	return macValue;
}


static void __init init_mactable_info( void )
{
	unsigned long totalSize = 0;

   	/*Allocate memory and init. Num of struct MAC_ADDR_INFO is MAX_MACADDRS_NUM+1 
	 *The size of mulif device MAC Table is MAX_MACADDRS_NUM+1. 	  
	 */
	if(TCSUPPORT_CMCC_VAL && TCSUPPORT_CPU_EN75XX_VAL)
   	    totalSize = sizeof(IF_MAC_TABLE) + ((sizeof(IF_MAC_INFO)) * MAX_MACADDRS_NUM8);
	else
   	    totalSize = sizeof(IF_MAC_TABLE) + ((sizeof(IF_MAC_INFO)) * MAX_MACADDRS_NUM);
   	pMACTableInfo = (PIF_MAC_TABLE) kmalloc( totalSize, GFP_KERNEL );
   	if( pMACTableInfo ) {
   		memset( pMACTableInfo, 0x00, totalSize );
        if(TCSUPPORT_CMCC_VAL && TCSUPPORT_CPU_EN75XX_VAL)
       	    pMACTableInfo->MACNum = MAX_MACADDRS_NUM8;
        else
            pMACTableInfo->MACNum = MAX_MACADDRS_NUM;
    	}
    	else
		printk("==>mulif err, Could not allocate memory for MAC data\n");
}


static int get_MAC_from_flash(unsigned char *mac_addr)
{
	uint8 MacAddr[] = {0x00, 0x00, 0xaa, 0xbb, 0xcc, 0xff};
	int i = 0;

#if	defined TCSUPPORT_CPU_ARMV8 
	if(get_ethaddr(MacAddr, sizeof(MacAddr)) != 0){
		printk("func:%s get ethaddr error!!!\n",__func__);

		return -1;
	}

	for (i=0; i<6; i++) {
		mac_addr[i] = MacAddr[i];
	}
#else
	for (i=0; i<6; i++) {
		mac_addr[i] = READ_FLASH_BYTE(flash_base + 0xff48 + i);
	}
#endif
	
	return 0;
}

int mulif_get_MACAddress(unsigned char *interfaceMacAddr, const char * interfaceName, int defaultGW)	
{
	int retVal = 0;
	PIF_MAC_INFO pCurMac = NULL;
    PIF_MAC_INFO pNeverUsedMac = NULL;//The mac which is free and not used before
    PIF_MAC_INFO pFreeUsedMac = NULL;//The mac which is free now but has been used before
	unsigned int neverUsedID = 0;//Table ID of the mac which is free and not used before
	unsigned int freeUsedID = 0;//Table ID of the mac which is free now but has been used before
	unsigned int i = 0;
	unsigned long tempMac = 0;
    struct net_device *device = NULL;
	int fixMacOffset = -1;
	unsigned char xpon_mode = 0;

	int MacOffset = 0;

	int MacBase = 0;

	if(1 == g_macoffset)
	{
		MacOffset = 1;
	}
	else if (0 == g_macoffset)
	{
		MacOffset = 0;
	}
	else
	{
#if KERNEL_2_6_36
	ECNT_API_XPON_MODE_GET(&xpon_mode);
	if((TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL)&&(ECNT_XPON_MAC_MODE_EPON == xpon_mode || ECNT_XPON_MAC_MODE_OFF == xpon_mode)) MacOffset = 1;
#else
	if(TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL) MacOffset = 1;
#endif
	if(TCSUPPORT_CMCC_VAL && TCSUPPORT_CPU_EN75XX_VAL)
			MacOffset = 0;
	
	if ( TCSUPPORT_CT_UBUS_VAL )
			MacOffset = 0;
	}

	if(TCSUPPORT_PON_ROSTELECOM_VAL) MacBase = 1;
	if(TCSUPPORT_CATV_GD_VAL)	MacBase = 4;

	if(pMACTableInfo == NULL)
		return -EADDRNOTAVAIL;

    /*First, get the Base MAC Address from eth0. If failed, read the MAC from flash.
     *Do this just when create the first interface. 
     */
    if(g_BaseMacFlag == 0) {
		#if KERNEL_2_6_36
		device = dev_get_by_name(&init_net,"eth0");
		#else
		device = dev_get_by_name("eth0");
		#endif
    	if(device) {
			memcpy( pMACTableInfo->baseMAC, device->dev_addr, device->addr_len );
			g_BaseMacFlag = 1;

			/* Release device refcnt */
			dev_put(device);
    	}
		else if(get_MAC_from_flash(pMACTableInfo->baseMAC) == 0 ) {
			g_BaseMacFlag = 1;
		}
		else
			return -EADDRNOTAVAIL;/* Failed to get MAC from flash */				
    }

	/*Transform the last 3 bytes to unsigned long integer and increase this integer by 1 each time */
	tempMac = transform_mac2ulong(pMACTableInfo->baseMAC, MACADDR_OFFSET);

	if(TCSUPPORT_PON_ROSTELECOM_VAL){
		if(defaultGW == 1){
			pCurMac = pMACTableInfo->ifMACAddr + MacOffset;
			tempMac = htonl((tempMac + 1) << 8);
        	memcpy( interfaceMacAddr, pMACTableInfo->baseMAC, MACADDR_OFFSET);
        	memcpy( interfaceMacAddr + MACADDR_OFFSET, (unsigned char *)&tempMac, MACADDR_LEN - MACADDR_OFFSET );
			tempMac = ntohl(tempMac);
			memcpy(pCurMac->ifName, interfaceName, MAX_IFNAME_LEN);
			pCurMac->useFlag = 1;
			pFreeUsedMac = pNeverUsedMac = NULL;
			defaultGW = 0;	
			return 0;
		}
	}
	if(TCSUPPORT_CATV_GD_VAL){
		//nas0_0 nas1_0 nas2_0 nas3_0 use fix mac
		if(strcmp("nas0_0",interfaceName)== 0)
			fixMacOffset = 0 ;
		else if (strcmp("nas0_1",interfaceName)== 0)
			fixMacOffset = 1 ;
		else if (strcmp("nas0_2",interfaceName)== 0)
			fixMacOffset = 2 ;
		else if (strcmp("nas0_3",interfaceName)== 0)
			fixMacOffset = 3 ;
		else 
			fixMacOffset = -1 ;
	
	
		if(fixMacOffset != -1){
			pCurMac = pMACTableInfo->ifMACAddr + MacOffset;
			tempMac = htonl((tempMac + fixMacOffset) << 8);
			memcpy( interfaceMacAddr, pMACTableInfo->baseMAC, MACADDR_OFFSET);
			memcpy( interfaceMacAddr + MACADDR_OFFSET, (unsigned char *)&tempMac, MACADDR_LEN - MACADDR_OFFSET );
			tempMac = ntohl(tempMac);
			memcpy(pCurMac->ifName, interfaceName, MAX_IFNAME_LEN);
			pCurMac->useFlag = 1;
			pFreeUsedMac = pNeverUsedMac = NULL;
			return 0;
		}
	
	}
   	for( i = MacOffset + MacBase, pCurMac = pMACTableInfo->ifMACAddr + MacOffset + MacBase; i < pMACTableInfo->MACNum + MacOffset; i++, pCurMac++ ) 
   	{
   		if( pCurMac->useFlag== 0 ) {//If this MAC Address is not used now   	  		
  			if( strlen(pCurMac->ifName) != 0 && memcmp(interfaceName, pCurMac->ifName, strlen(pCurMac->ifName)) == 0 ) {
     			tc_debug("\n==>mulif info, This MAC address has been used by this interface in the past. Then still allocated  to this caller\n");

				if( isEN751221 && (TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL != -1)
					&& ((tempMac & 0xf) == TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL) ){
					tempMac = htonl(((tempMac&(~0x7))|((tempMac+i)&0x7)) << 8);
				}else{
            		tempMac = htonl((tempMac + i) << 8);
				}
            	memcpy( interfaceMacAddr, pMACTableInfo->baseMAC, MACADDR_OFFSET);
            	memcpy( interfaceMacAddr + MACADDR_OFFSET, (unsigned char *)&tempMac, MACADDR_LEN - MACADDR_OFFSET );
            	tempMac = ntohl(tempMac);
				
            	pCurMac->useFlag= 1;
            	pFreeUsedMac = pNeverUsedMac = NULL;
            	break;
        	}
        	else if( strlen(pCurMac->ifName) == 0 && pNeverUsedMac == NULL ) {//new caller, Find the first MAC which was not used
        		tc_debug("\n==>mulif info, This MAC address is free and has never been used.\n");
            	pNeverUsedMac = pCurMac;
            	neverUsedID = i;
            }
            else if( strlen(pCurMac->ifName) != 0 && pFreeUsedMac == NULL ) {//Find the first MAC which was used before
               	tc_debug("\n==>mulif info, This MAC address is free but has been used before.\n");
               	pFreeUsedMac = pCurMac;
               	freeUsedID = i;
            }
         }
    }

    if( pNeverUsedMac || pFreeUsedMac ) {
        /*Use the free MAC that never been used first. If no MAC that never used was found, just used the MAC which has been used in the past*/
        if( pNeverUsedMac ) {
			/*Generate MAC and allocate it to this interface*/
			if( isEN751221 && (TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL != -1)
					&& ((tempMac & 0xf) == TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL) ){
           		tempMac = htonl(((tempMac&(~0x7))|((tempMac+neverUsedID)&0x7)) << 8);
           	}else{
           		tempMac = htonl((tempMac + neverUsedID) << 8);
           	}
           	memcpy( interfaceMacAddr, pMACTableInfo->baseMAC, MACADDR_OFFSET);
           	memcpy( interfaceMacAddr + MACADDR_OFFSET, (unsigned char *)&tempMac, MACADDR_LEN - MACADDR_OFFSET );
           	tempMac = ntohl(tempMac);

			/*Update MAC table info*/
			memcpy(pNeverUsedMac->ifName, interfaceName, MAX_IFNAME_LEN);
           	pNeverUsedMac->useFlag= 1;
        }
        else {
			/*Allocate MAC to this interface*/
			if( isEN751221 && (TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL != -1)
					&& ((tempMac & 0xf) == TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL) ){
           		tempMac = ((tempMac&(~0x7))|((tempMac+freeUsedID)&0x7)) << 8;
           	}else{
           		tempMac = htonl((tempMac + freeUsedID) << 8);
           	}
           	memcpy( interfaceMacAddr, pMACTableInfo->baseMAC, MACADDR_OFFSET);
           	memcpy( interfaceMacAddr + MACADDR_OFFSET, (unsigned char *)&tempMac, MACADDR_LEN - MACADDR_OFFSET );
           	tempMac = ntohl(tempMac);

			/*Update MAC table info*/
			memcpy(pFreeUsedMac->ifName, interfaceName, MAX_IFNAME_LEN);
           	pFreeUsedMac->useFlag= 1;
        }
    }
    else if( i == pMACTableInfo->MACNum + MacOffset)
       	retVal = -EADDRNOTAVAIL;

	return  retVal;
} /* mulif_get_MACAddress */

int mulif_release_MacAddress( unsigned char *interfaceMacAddr )
{
    int retVal = -EINVAL;
    unsigned long MACTableId = 0;
    unsigned long baseMAC = 0;
    unsigned long ifMAC = 0;
	PIF_MAC_INFO pCurMAC = NULL;
	
	int MacOffset = 0;
	
	/*Transform the last 3 bytes of MAC to unsigned long and do subtraction to get the table id*/
	baseMAC = transform_mac2ulong(pMACTableInfo->baseMAC, MACADDR_OFFSET);
	ifMAC = transform_mac2ulong(interfaceMacAddr, MACADDR_OFFSET);

	if( isEN751221 && (TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL != -1)
		&& ((baseMAC & 0xf) == TCSUPPORT_USER_DEFINE_FIRST_MAC_VAL) ){
		if( ifMAC < baseMAC ){
			MACTableId = (ifMAC+8) - baseMAC;
		}else{
			MACTableId = ifMAC - baseMAC;
		}
	}else{
		MACTableId = ifMAC - baseMAC;
	}
	
	if(TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL) MacOffset = 1;
	if(TCSUPPORT_CMCC_VAL && TCSUPPORT_CPU_EN75XX_VAL)
		MacOffset = 0;

    if( MACTableId < pMACTableInfo->MACNum + MacOffset)

    {
       	pCurMAC = &pMACTableInfo->ifMACAddr[MACTableId];
       	if( pCurMAC->useFlag== 1 ) {
			pCurMAC->useFlag= 0;
        	retVal = 0;
        }
    }

    return retVal;
} /* mulif_release_MacAddress */


static inline struct net_device_stats *mulif_dev_get_stats(struct net_device *dev)
{
#if 0//KERNEL_2_6_36
	u8 wan_index = 255;
	struct net_device_stats temp;
	struct net_device_stats *n_stats = NULL;

	if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL && TCSUPPORT_SMUX_HW_STAT_VAL)
	{
		memset(&temp, 0, sizeof(temp));
		get_wan_index(dev->name, &wan_index);   
		if((NULL != ra_sw_nat_get_wan_acntid_counter_hook) && (wan_index <=7))
		{
			ra_sw_nat_get_wan_acntid_counter_hook(wan_index, &temp);
		}

		n_stats = &(MULTI_WAN_DEV_INFO(dev)->stats);

		n_stats->rx_packets += temp.rx_packets;
		n_stats->tx_packets += temp.tx_packets;
		n_stats->rx_bytes   += temp.rx_bytes;
		n_stats->tx_bytes   += temp.tx_bytes;
	}
#endif

	return &(MULTI_WAN_DEV_INFO(dev)->stats);
}

#ifdef CONFIG_TP_IMAGE
static struct rtnl_link_stats64 * mulif_dev_get_stats_64(struct net_device* dev, struct rtnl_link_stats64* stats)
{
	u8 wan_index = 255;
	struct net_device_stats *n_stats = NULL;
	struct rtnl_link_stats64 temp;
	memset(&temp, 0 ,sizeof(struct rtnl_link_stats64));
	
	if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL && TCSUPPORT_SMUX_HW_STAT_VAL)
	{
		get_wan_index(dev->name, &wan_index);
		
		if((NULL != ra_sw_nat_get_wan_acntid_counter_hook64) && (wan_index <=7))
		{
			ra_sw_nat_get_wan_acntid_counter_hook64(wan_index, &temp);

			n_stats = &(MULTI_WAN_DEV_INFO(dev)->stats);
			stats->rx_dropped = n_stats->rx_dropped;
			stats->tx_dropped = n_stats->tx_dropped;
			stats->multicast = n_stats->multicast;
			stats->rx_errors = n_stats->rx_errors;
			stats->tx_errors = n_stats->tx_errors;
			stats->tx_bytes = n_stats->tx_bytes + temp.tx_bytes;
			stats->rx_bytes = n_stats->rx_bytes + temp.rx_bytes;
			stats->tx_packets = n_stats->tx_packets + temp.tx_packets;
			stats->rx_packets = n_stats->rx_packets + temp.rx_packets;

	#ifdef CONFIG_TP_DEV_EXTSTATS
			stats->rx_multicast_packets = temp.rx_multicast_packets;
			stats->tx_multicast_packets = temp.tx_multicast_packets;
			stats->rx_multicast_bytes = temp.rx_multicast_bytes;
			stats->tx_multicast_bytes = temp.tx_multicast_bytes;
			stats->rx_unicast_packets = temp.rx_unicast_packets;
			stats->tx_unicast_packets = temp.tx_unicast_packets;
			stats->rx_unicast_bytes = temp.rx_unicast_bytes;
			stats->tx_unicast_bytes = temp.tx_unicast_bytes;
	#endif /* CONFIG_TP_DEV_EXTSTATS */
		}
	}

	return stats;
}
#endif /* CONFIG_TP_IMAGE */


static struct notifier_block mulif_notifier_block = {
	.notifier_call = mulif_device_event,
};

#if KERNEL_2_6_36
static void get_ppp_interface_hw_stats(struct net_device *dev, struct rtnl_link_stats64 *storage)
{
	int unit = 0;
	int divisor = 0;
	int reminder = 0;
	char if_name[IFNAMSIZ];
	struct net_device *origdev;
	struct net_device_stats *n_stat;
	int len = 0;
	memset(if_name, 0, sizeof(if_name));
	if ((NULL == dev) || (NULL == storage) || (0 != strncmp(dev->name, "ppp", 3)))
	{
		return ;
	}
	len = strlen(dev->name);
	if(5 == len)
	{
		unit = ((dev->name[3] - '0') * 10 + (dev->name[4] - '0'));
	}
	else
	{
		unit = dev->name[3] - '0';
	}
	divisor  = unit / 8;
	reminder = unit % 8;
	if(TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL)
	{
		sprintf(if_name, "nas%d_%d", divisor, reminder);
	}
	else
	{
		sprintf(if_name, "nas%d", reminder);
	}
#if KERNEL_2_6_36
	origdev = dev_get_by_name(&init_net, if_name);
#else
	origdev = dev_get_by_name(if_name);
#endif
	if(NULL != origdev)
	{
		n_stat = mulif_dev_get_stats(origdev);
		storage->rx_packets = n_stat->rx_packets;
		storage->tx_packets = n_stat->tx_packets;
		storage->rx_bytes   = n_stat->rx_bytes;
		storage->tx_bytes   = n_stat->tx_bytes;
		dev_put(origdev);
	}
	return ;
}

#ifdef CONFIG_TP_IMAGE 

static wan_virtualdev_pppname * multi_wan_get_pppname_info_by_ppp_name(const char *pppInfName)
{
	int i;
	
	for(i = 0; i < sizeof(wan_virtualdev_pppname_info)/sizeof(wan_virtualdev_pppname); i++)
	{
		if(0 == strcmp(wan_virtualdev_pppname_info[i].ppp_name, pppInfName))
		{
			return &wan_virtualdev_pppname_info[i];
		}
	}

	return NULL;
}

static void multi_wan_dump_pppname_info_by_ppp_name(void)
{
	int i;
	
	for(i = 0; i < sizeof(wan_virtualdev_pppname_info)/sizeof(wan_virtualdev_pppname); i++)
	{
		if(strlen(wan_virtualdev_pppname_info[i].ppp_name))
		{
			printk("index:%d,ppp_name:%s,virtual_name:%s\n",i,wan_virtualdev_pppname_info[i].ppp_name,wan_virtualdev_pppname_info[i].virtual_name);
		}
		
	}
}

static void get_ppp_interface_hw_stats_tp(struct net_device *dev, struct rtnl_link_stats64 *storage)
{
	wan_virtualdev_pppname * p_wan_virtualdev_pppname = NULL;
	struct net_device *origdev = NULL;

	if(!dev || !storage)
		return;

	p_wan_virtualdev_pppname = multi_wan_get_pppname_info_by_ppp_name(dev->name);
	if(p_wan_virtualdev_pppname)
	{
#if KERNEL_2_6_36
		origdev = dev_get_by_name(&init_net, p_wan_virtualdev_pppname->virtual_name);
#else
		origdev = dev_get_by_name(p_wan_virtualdev_pppname->virtual_name);
#endif
		if(NULL != origdev)
		{
			mulif_dev_get_stats_64(origdev, storage);
			dev_put(origdev);
		}
	}
	
}

static int smux_clear_interface_hw_stats_tp(struct net_device *dev)
{
	wan_virtualdev_pppname * p_wan_virtualdev_pppname = NULL;
	struct net_device *origdev = NULL;
	u8 wan_index = 255;

	if(!dev)
		return SMUX_ECNT_HOOK_PROCESS_FAIL;

	if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL && TCSUPPORT_SMUX_HW_STAT_VAL)
	{
		p_wan_virtualdev_pppname = multi_wan_get_pppname_info_by_ppp_name(dev->name);
		
		if(p_wan_virtualdev_pppname)
		{
			get_wan_index(p_wan_virtualdev_pppname->virtual_name, &wan_index);
			
			if((NULL != ra_sw_nat_clear_wan_acntid_counter_hook) && (wan_index <=7))
			{
				ra_sw_nat_clear_wan_acntid_counter_hook(wan_index);
			}
		}
		else
		{
			get_wan_index(dev->name, &wan_index);
			
			if((NULL != ra_sw_nat_clear_wan_acntid_counter_hook) && (wan_index <=7))
			{
				ra_sw_nat_clear_wan_acntid_counter_hook(wan_index);
			}
		}

	}
	
	return SMUX_ECNT_HOOK_PROCESS_SUCESS;
}

	
#endif

static void get_net_device_interface_hw_stats(struct net_device *dev, struct rtnl_link_stats64 *storage)
{
	if ((NULL == dev) || (NULL == storage))
	{
		return ;
	}

	/*ppp interface */
	if(0 == strncmp(dev->name, "ppp", 3))
	{
#ifdef CONFIG_TP_IMAGE
		get_ppp_interface_hw_stats_tp(dev, storage);
#else
		get_ppp_interface_hw_stats(dev, storage);
#endif /* CONFIG_TP_IMAGE */

	}
	

	return ;
}
static int check_mulif_tci(u16 tci,u16 multicast_tci)
{
	struct list_head *lh;
	struct list_head *lh_vdev;
	struct mulif_origdev *origdev_list_node = NULL;
	struct mulif_virtualdev *virtualdev_list_node = NULL;
  	struct net_device *vdev = NULL;

	if(TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL)
	{
		read_lock(&mulif_lock);
	  	list_for_each(lh, &mulif_origdev_list) 
		{
	  		origdev_list_node = (struct mulif_origdev *)list_entry(lh, struct mulif_origdev, list);
	    	list_for_each(lh_vdev, &origdev_list_node->virtualdev_list) 
			{
				virtualdev_list_node =  (struct mulif_virtualdev *)list_entry(lh_vdev, struct mulif_virtualdev, list);
				vdev = virtualdev_list_node->virtual_dev;
				if (vdev==NULL){
					read_unlock(&mulif_lock);
					return 0;

				}

				if((vdev->multicast_tci == multicast_tci )&&(vdev->tci == tci))
				{
					read_unlock(&mulif_lock);
					return 1;
				}
			}
			
	  	}
		read_unlock(&mulif_lock);
	}
	return 0;

}

#endif

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_IGMP)
int wan_multicast_incoming(struct sk_buff* skb,struct mulif_origdev *origdev_list_node);
int wan_multicast_outgoing(struct sk_buff** pskb,struct net_device *dev);
static int wan_mvlan_write_proc(struct file *file, const char *buffer, unsigned long count, void *data);
static int wan_mvlan_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data);
int wan_is_multicast_pkt(unsigned char* dst, struct sk_buff* skb);
#endif/*TCSUPPORT_COMPILE*/

#ifdef TCSUPPORT_VLAN_TAG
 /* Determine the unvlan tag device to receive vlan tag packet or not */
 static int unvlan_dev_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
 {
	 sprintf(buf, "Unvlan device filter function is %s\n", unvlan_dev_filter?"Enable":"Disable");
	 int len = strlen(buf);
	 if (len <= off+count)
		 *eof = 1;
	 *start = buf + off;
	 len -= off;
	 if (len>count)
		 len = count;
	 if (len<0)
		 len = 0;
 
	 return len;
 }
 
 static int unvlan_dev_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
 {
	 char vtag_sw[2];
	 int len;
 
	 if (count > 2)
		 len = 2;
	 else
		 len = count;
 
	 memset(vtag_sw, 0, sizeof(vtag_sw));
	 if (copy_from_user(vtag_sw, buffer, len))
		 return -EFAULT;
 
	 vtag_sw[1] = '\0';
	 if (!strcmp(vtag_sw, "1"))
		 unvlan_dev_filter = 1;
	 else
		 unvlan_dev_filter = 0;
 
	 return len;
 }
 

#endif

static __u16 gLanVlanMin = 0;
static __u16 gLanVlanMax = 4095;

static int lan_vlan_range_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
    if(TCSUPPORT_LAN_VLAN_RANGE_VAL){
        sprintf(buf, "%hu %hu\n", gLanVlanMin, gLanVlanMax);
        int len = strlen(buf);
        if (len <= off+count)
         *eof = 1;
        *start = buf + off;
        len -= off;
        if (len>count)
         len = count;
        if (len<0)
         len = 0;

        return len;
    }else{
        return 0;
    }
}

static int lan_vlan_range_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
    if(TCSUPPORT_LAN_VLAN_RANGE_VAL){
        char buf[16] = {0};
        int len = count > 15 ? 15: count;

        if (copy_from_user(buf, buffer, len))
                return -EFAULT;

        sscanf(buf, "%hu %hu", &gLanVlanMin, &gLanVlanMax);

        gLanVlanMin &= 0x0FFF;
        gLanVlanMax &= 0x0FFF;

        if(gLanVlanMin > gLanVlanMax){
                gLanVlanMin = 0;
                gLanVlanMax = 4095;
        }

        return len;
    }else{
        return 0;
    }
}
 static __u16 simulation_vlan = 0;
 
 static int simulation_vlan_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
 {
		 sprintf(buf, "%hu\n", simulation_vlan);
		 int len = strlen(buf);
		 if (len <= off+count)
		  *eof = 1;
		 *start = buf + off;
		 len -= off;
		 if (len>count)
		  len = count;
		 if (len<0)
		  len = 0;
 
		 return len;
 }
 
 static int simulation_vlan_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
 {
		 char buf[16] = {0};
		 int len = count > 15 ? 15: count;
 
		 if (copy_from_user(buf, buffer, len))
				 return -EFAULT;
 
		 sscanf(buf, "%hu", &simulation_vlan);
 
		 return len;
 }

  static int mulif_debug_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
 {
		 sprintf(buf, "%d\n", mulif_tcdebug_on);
		 int len = strlen(buf);
		 if (len <= off+count)
		  *eof = 1;
		 *start = buf + off;
		 len -= off;
		 if (len>count)
		  len = count;
		 if (len<0)
		  len = 0;
 
		 return len;
 }
 
 static int mulif_debug_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
 {
		 char buf[16] = {0};
		 int len = count > 15 ? 15: count;
 
		 if (copy_from_user(buf, buffer, len))
				 return -EFAULT;
 
		 sscanf(buf, "%d", &mulif_tcdebug_on);
 
		 return len;
 }

   static int mulif_tag_router_wan_allow_untag_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
 {
		 sprintf(buf, "%d\n", tag_router_wan_allow_untag);
		 int len = strlen(buf);
		 if (len <= off+count)
		  *eof = 1;
		 *start = buf + off;
		 len -= off;
		 if (len>count)
		  len = count;
		 if (len<0)
		  len = 0;
 
		 return len;
 }
 
 static int mulif_tag_router_wan_allow_untag_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
 {
		 char buf[16] = {0};
		 int len = count > 15 ? 15: count;
 
		 if (copy_from_user(buf, buffer, len))
				 return -EFAULT;
 
		 sscanf(buf, "%d", &tag_router_wan_allow_untag);
 
		 return len;
 }

#ifdef CONFIG_TP_IMAGE

static int multi_wan_ppp_l2_mapping_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char pppIntfName[16] = {0};
	char virdevIntfName[16] = {0};
	char buf[128] = {0};
	wan_virtualdev_pppname * p_wan_virtualdev_pppname;
	int len = count > 128 ? 128: count;
	int i;

	if (copy_from_user(buf, buffer, len))
		return -EFAULT;

	sscanf(buf, "%16s %16s", &pppIntfName, &virdevIntfName);

	p_wan_virtualdev_pppname = multi_wan_get_pppname_info_by_ppp_name(pppIntfName);

	if(p_wan_virtualdev_pppname)
	{
		strncpy(p_wan_virtualdev_pppname->virtual_name, virdevIntfName, sizeof(p_wan_virtualdev_pppname->virtual_name));
		p_wan_virtualdev_pppname->valid = 1;
	}
	else
	{
		p_wan_virtualdev_pppname = multi_wan_get_pppname_info_by_ppp_name("");
		if(p_wan_virtualdev_pppname)
		{
			strncpy(p_wan_virtualdev_pppname->ppp_name, pppIntfName, sizeof(p_wan_virtualdev_pppname->ppp_name));
			strncpy(p_wan_virtualdev_pppname->virtual_name, virdevIntfName, sizeof(p_wan_virtualdev_pppname->virtual_name));
			p_wan_virtualdev_pppname->valid = 1;
		}
		else
		{
			printk("wan_virtualdev_pppname_info is FULL, cannot record\n");
		}
	}
	
	

	return len;
 }

static int multi_wan_ppp_l2_mapping_read_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	multi_wan_dump_pppname_info_by_ppp_name();
	return 0;
}
#endif /* CONFIG_TP_IMAGE */
 

static int igmp_pppoe_to_ipoe_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	if(TCSUPPORT_CT_IGMP_PPPOE_TO_IPOE_VAL) {
		sprintf(buf, "%d\n", igmp_pppoe_to_ipoe_enable);
		int len = strlen(buf);
		if (len <= off+count)
			*eof = 1;
		*start = buf + off;
		len -= off;
		if (len>count)
			len = count;
		if (len<0)
			len = 0;

		return len;
	} else {
		return 0;
	}
}
 
static int igmp_pppoe_to_ipoe_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char buf[16] = {0};
	int len = count > 15 ? 15: count;

	if(TCSUPPORT_CT_IGMP_PPPOE_TO_IPOE_VAL) {
		if (copy_from_user(buf, buffer, len))
			return -EFAULT;

		sscanf(buf, "%d", &igmp_pppoe_to_ipoe_enable);

		return len;
	} else {
		return 0;
	}
}

#ifdef CONFIG_TP_IMAGE
int mulif_get_stats64_by_dev(struct net_device *dev, struct rtnl_link_stats64 *stats64)
{
	read_lock(&mulif_lock);
	get_net_device_interface_hw_stats(dev,stats64);
	read_unlock(&mulif_lock);
	
	return SMUX_ECNT_HOOK_PROCESS_SUCESS;
}
#endif /* CONFIG_TP_IMAGE */

#if KERNEL_2_6_36
 int mulif_get_dev_by_source_mac(struct sk_buff *skb, struct net_device **dev)
 {
	 struct net_device *vdev;
	 struct list_head *lh;
	 unsigned char *srcMacAddr;
	 unsigned char *desMacAddr;
	 struct mulif_origdev * origdev_list_node = NULL;
	 struct mulif_virtualdev * virtualdev_list_node = NULL;
	 struct multi_wan_dev_info *dev_info;

	 if(skb == NULL )
	 {
		 printk("skb == NULL\n");
		 return SMUX_ECNT_HOOK_PROCESS_FAIL;
	 }
	 
	 origdev_list_node = mulif_find_origdev(skb->dev->name);
	 if( origdev_list_node == NULL) {
		 return SMUX_ECNT_HOOK_PROCESS_FAIL;
	 }
	 
	 srcMacAddr = eth_hdr(skb)->h_source;
	 if(srcMacAddr == NULL)
	 {
		 printk("mulif_skb_recv: src Addr == NULL\n");
		 return SMUX_ECNT_HOOK_PROCESS_FAIL;	  
	 }

	#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_FWC_ENV)
	 FHWC_MARK_BRIDGE_PKT(skb);
	#endif/*TCSUPPORT_COMPILE*/
	 read_lock(&mulif_lock);
	 list_for_each(lh, &origdev_list_node->virtualdev_list)
	 {
		 virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
		 if (virtualdev_list_node==NULL){
			 read_unlock(&mulif_lock);
			 return SMUX_ECNT_HOOK_PROCESS_FAIL;
		 }
		  
		 vdev = virtualdev_list_node->virtual_dev;
		 if (vdev==NULL){
			 read_unlock(&mulif_lock);
			 return SMUX_ECNT_HOOK_PROCESS_FAIL;
		 }
		  
		 dev_info = MULTI_WAN_DEV_INFO(vdev);
 	
		 if(vdev->dev_addr == NULL )
		 {
			 printk("%s %d vdev->dev_addr name %s is NULL \n",__FUNCTION__,__LINE__,vdev->name);
			 read_unlock(&mulif_lock);
			 return SMUX_ECNT_HOOK_PROCESS_FAIL;
		 }
		 
		 if (memcmp(srcMacAddr, vdev->dev_addr, ETH_ALEN) == 0) 
		 {
			*dev = vdev;
        	#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_FWC_ENV)
			FHWC_MARK_ROUTE_PKT(skb);
        	#endif/*TCSUPPORT_COMPILE*/
			break;
		 }
	 }
	 read_unlock(&mulif_lock);
	 return SMUX_ECNT_HOOK_PROCESS_SUCESS;
 }
  
 static void tc_smux_get_api_dispatch(smux_api_data_t * api_data)
 {
	 struct sk_buff *skb = NULL;
	 struct net_device **dev = NULL;
	 switch(api_data->cmd_id)
	 {
		 case SMUX_GET_DEV_BY_SRC_MAC:
			 skb = api_data->smux_dev_by_mac->skb; 
			 dev = api_data->smux_dev_by_mac->dev;
			 api_data->ret = mulif_get_dev_by_source_mac(skb,dev);
			 break;
#ifdef CONFIG_TP_IMAGE
		 case SMUX_GET_STATS64_BY_DEV:
			 api_data->ret = mulif_get_stats64_by_dev(api_data->smux_stats64_by_dev->dev,api_data->smux_stats64_by_dev->stats64);
			 break;
#endif /* CONFIG_TP_IMAGE */
		 default:
			 dump_stack();
			 printk("unknown command id!\n");
			 api_data->ret = SMUX_NO_API;
			 break;  
	 }
 }
  
static void tc_smux_set_api_dispatch(smux_api_data_t * api_data)
{
#ifdef CONFIG_TP_IMAGE
	switch(api_data->cmd_id)
	{
		case SMUX_CLEAR_STATS64_BY_DEV:
			api_data->ret = smux_clear_interface_hw_stats_tp(api_data->smux_stats64_by_dev->dev);
			break;
		default:
			dump_stack();
			printk("unknown command id!\n");
			api_data->ret = SMUX_NO_API;
			break;
	}
#endif /* CONFIG_TP_IMAGE */
}
  
 int tc_smux_api_dispatch(struct ecnt_data *in_data)
 {
	  smux_api_data_t * api_data = (smux_api_data_t *)in_data;
	  switch(api_data->api_type) 
	  {
		  case SMUX_API_TYPE_GET:
			   tc_smux_get_api_dispatch(api_data);
			   break;
 
		  case SMUX_API_TYPE_SET:
			   tc_smux_set_api_dispatch(api_data);
			   break;
 
		  default:
			   dump_stack();
			   printk("unknown api_data->api_type: %d\n", api_data->api_type);
			   api_data->ret = SMUX_NO_API;
			   break;
	  }
 
	 return ECNT_RETURN;
 }
   
   
 struct ecnt_hook_ops smux_api_dispatch_hook_ops = {
	 .name = "tc_smux_api_dispatch",
	 .hookfn = tc_smux_api_dispatch,
	 .is_execute = 1,
	 .maintype = ECNT_SMUX,
	 .subtype =  ECNT_SMUX_API,
	 .priority	 = 1,
 };
#endif
 /*Initialize mulif driver*/
static int __init mulif_dev_init(void)
{
#ifdef TCSUPPORT_VLAN_TAG
	struct proc_dir_entry *unvlan_dev_proc = NULL;
#endif
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_IGMP)
	struct proc_dir_entry *wan_mvlan_proc = NULL;
#endif/*TCSUPPORT_COMPILE*/

    struct proc_dir_entry *lan_vlan_range_proc = NULL;

	struct proc_dir_entry *simulation_vlan_proc = NULL;
	struct proc_dir_entry *mulif_proc = NULL;
	struct proc_dir_entry *igmp_pppoe_to_ipoe_proc = NULL;
	printk("\r\ntc_multiwan version: %s.\n", MODULE_VERSION_TCSMUX);
  	/* Register us to receive netdevice events */
  	register_netdevice_notifier(&mulif_notifier_block);

	/* Init hook pointer */
  	smux_ioctl_set(mulif_ioctl_handler);
  	rcu_assign_pointer(smux_pkt_recv_hook, mulif_skb_recv); 
#if defined(TCSUPPORT_CT) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
	rcu_assign_pointer(do_mulif_interface_unregister_hook, do_mulif_interface_unregister);
	if ( TCSUPPORT_CT_PON_SC_VAL )
		rcu_assign_pointer(match_multicast_vtag_check, match_multicast_vtag);
#else
  	rcu_assign_pointer(check_smuxIf_exist_hook, check_mulif_interface_exist);
#endif

#if KERNEL_2_6_36
	rcu_assign_pointer(check_mulif_tci_hook,check_mulif_tci);

    if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL && TCSUPPORT_SMUX_HW_STAT_VAL)
    {
        rcu_assign_pointer(get_net_device_interface_hw_stats_hook, get_net_device_interface_hw_stats);
    }
#endif
	rcu_assign_pointer(mulif_get_dev_by_source_mac_hook, mulif_get_dev_by_source_mac);

	init_wan_mode_support();

#ifdef TCSUPPORT_VLAN_TAG
	/* untag vlan filter function */
	unvlan_dev_proc = create_proc_entry("tc3162/unvlan_dev_filter", 0, NULL);
	unvlan_dev_proc->read_proc = unvlan_dev_read_proc;
	unvlan_dev_proc->write_proc = unvlan_dev_write_proc;
#endif	

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_IGMP)
	wan_mvlan_proc = create_proc_entry("tc3162/wan_mvlan", 0, NULL);
	wan_mvlan_proc->read_proc = wan_mvlan_read_proc;
	wan_mvlan_proc->write_proc = wan_mvlan_write_proc;
#endif/*TCSUPPORT_COMPILE*/

if (TCSUPPORT_LAN_VLAN_RANGE_VAL){
    lan_vlan_range_proc = create_proc_entry("tc3162/lan_vlan_range", 0, NULL);
	lan_vlan_range_proc->read_proc = lan_vlan_range_read_proc;
	lan_vlan_range_proc->write_proc = lan_vlan_range_write_proc;
}
	
	if(TCSUPPORT_XPON_HAL_API_EXT_VAL)
	{
		simulation_vlan_proc = create_proc_entry("tc3162/simulation_vlan",0,NULL);
		simulation_vlan_proc->read_proc = simulation_vlan_read_proc;
		simulation_vlan_proc->write_proc = simulation_vlan_write_proc;
	}

	mulif_proc = create_proc_entry("tc3162/mulif_tcdebug",0,NULL);
	mulif_proc->read_proc = mulif_debug_read_proc;
	mulif_proc->write_proc = mulif_debug_write_proc;

	if(TCSUPPORT_CT_IGMP_PPPOE_TO_IPOE_VAL)
	{
		igmp_pppoe_to_ipoe_proc = create_proc_entry("tc3162/igmp_pppoe_to_ipoe",0,NULL);
		igmp_pppoe_to_ipoe_proc->read_proc = igmp_pppoe_to_ipoe_read_proc;
		igmp_pppoe_to_ipoe_proc->write_proc = igmp_pppoe_to_ipoe_write_proc;
	}
	
	mulif_proc = create_proc_entry("tc3162/mulif_tag_router_allow_untag",0,NULL);
	mulif_proc->read_proc = mulif_tag_router_wan_allow_untag_read_proc;
	mulif_proc->write_proc = mulif_tag_router_wan_allow_untag_write_proc;

#ifdef CONFIG_TP_IMAGE
	mulif_proc = create_proc_entry("tc3162/multi_wan_ppp_l2_mapping",0,NULL);
	mulif_proc->read_proc = multi_wan_ppp_l2_mapping_read_proc;
	mulif_proc->write_proc = multi_wan_ppp_l2_mapping_write_proc;

	memset(wan_virtualdev_pppname_info, 0, sizeof(wan_virtualdev_pppname_info));
#endif /* CONFIG_TP_IMAGE */

	/* Init MAC table for assigning mulif interface MAC */
  	init_mactable_info();
#if KERNEL_2_6_36
    if (ECNT_REGISTER_SUCCESS != ecnt_register_hook(&smux_api_dispatch_hook_ops) ){
        panic("Register hook function failed! %s:%d", __FUNCTION__, __LINE__);
    }
#endif
	init_my_mac();
 	INIT_LIST_HEAD(&mulif_dev_dscp_list_node);
  	return 0;
} /* mulif_dev_init */

 /*clean up all the mulif devices*/
static void __exit mulif_cleanup_devices(void)
{
	rtnl_lock();
	mulif_detach_all_virtualdev();
	rtnl_unlock();
#if KERNEL_2_6_36	
	ecnt_unregister_hook(&smux_api_dispatch_hook_ops);
#endif
} /* mulif_cleanup_devices */


  /*Remove mulif driver*/
static void __exit mulif_cleanup_module(void)
{

  	/*Set hook pointer as NULL*/
 	rcu_assign_pointer(smux_pkt_recv_hook, NULL);
#if defined(TCSUPPORT_CT) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
	rcu_assign_pointer(do_mulif_interface_unregister_hook, NULL);
	if ( TCSUPPORT_CT_PON_SC_VAL )
		rcu_assign_pointer(match_multicast_vtag_check, NULL);
#else
    	rcu_assign_pointer(check_smuxIf_exist_hook, NULL);
#endif

#if KERNEL_2_6_36
    rcu_assign_pointer(check_mulif_tci_hook, NULL);
    if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL && TCSUPPORT_SMUX_HW_STAT_VAL)
    {
        rcu_assign_pointer(get_net_device_interface_hw_stats_hook, NULL);
    }
#endif
	rcu_assign_pointer(mulif_get_dev_by_source_mac_hook, NULL);

  	smux_ioctl_set(NULL);
 
  	/* Un-register us from receiving netdevice events */
  	unregister_netdevice_notifier(&mulif_notifier_block);
#ifdef TCSUPPORT_VLAN_TAG
 	 remove_proc_entry("tc3162/unvlan_dev_filter", 0);
#endif	 
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_IGMP)
	remove_proc_entry("tc3162/wan_mvlan", 0);
#endif/*TCSUPPORT_COMPILE*/
if (TCSUPPORT_LAN_VLAN_RANGE_VAL){
        remove_proc_entry("tc3162/lan_vlan_range", 0);
}
	
	if(TCSUPPORT_XPON_HAL_API_EXT_VAL)
		remove_proc_entry("tc3162/simulation_vlan",0);
		
		remove_proc_entry("tc3162/mulif_tcdebug",0);
		
		remove_proc_entry("tc3162/mulif_tag_router_allow_untag",0);
		
	if(TCSUPPORT_CT_IGMP_PPPOE_TO_IPOE_VAL)
		remove_proc_entry("tc3162/igmp_pppoe_to_ipoe",0);
  	mulif_cleanup_devices();
  	synchronize_net();

  	/*Free MAC table memory*/
  	if( pMACTableInfo )
  		kfree(pMACTableInfo);
} /* mulif_cleanup_module */

module_init(mulif_dev_init);
module_exit(mulif_cleanup_module);

#if defined(TCSUPPORT_CT) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
/*Unregister interfaces by PVC device name*/
int do_mulif_interface_unregister(char* dev_name)
{  
	char ifName[32] =  {0};
	int i = 0;

	if(dev_name == NULL)
		return -1;

	/*Unregister all the interfaces belong to this pvc device*/
	for(i=0; i<MAX_INTERFACENUM_EACH_PVC; i++) {
		memset(ifName, 0, sizeof(ifName));
		sprintf(ifName, IF_NAME_FORMAT, dev_name, i);
		//printk("\n-----unregister dev %s------\n", ifName);
		
		unregister_mulif_device(ifName);
	}
		
	return 0;
}
#else
/*Check the mulif interfaces num of PVC dev*/
int check_mulif_interface_exist(struct net_device *dev)
{  
	if(dev == NULL)
		return 0;

	return mulif_count_vdev_of_origdev_byptr(dev);	
}
#endif
#if KERNEL_2_6_36
/*TCSUPPORT_VLAN_PASSTHROUGH*/
extern int (*check_vlan_range_hook)(struct net_device *dev, struct sk_buff *skb);
/*END TCSUPPORT_VLAN_PASSTHROUGH*/
#endif
 static int simulation_down_vlan_handle(struct sk_buff* skb)
 {
	 struct vlan_hdr *vhdr = NULL;
	 u16 vlan_id = 0;
 
	 if(htons(ETH_P_8021Q) == skb->protocol)
	 {
		vhdr = (struct vlan_hdr *)skb->data;
		vlan_id = ntohs(vhdr->h_vlan_TCI)&VLAN_VID_MASK;

		if(simulation_vlan != vlan_id)
			return -1;

		skb->protocol = vhdr->h_vlan_encapsulated_proto;
		/* Take off the VLAN header (4 bytes currently) */
		skb_pull_rcsum(skb, VLAN_HLEN);
	 }
	 else
	 	return -1;
  
	 return 0;
 }

void get_wan_index(const char *name, u8 *wan_index)
{
    u8 wan_index_num = -1;
    u8 i = 0;
    char wan_index_info[8] = {-1,-1,-1,-1,-1,-1,-1,-1};
    
    if(name[0] != 'n')
        return;
#ifndef CONFIG_TP_IMAGE
    if(TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL)
        wan_index_num = (name[3] - '0') * 8 + (name[5] - '0');
    else
#endif /* CONFIG_TP_IMAGE */
        wan_index_num = (name[3] - '0') * 8;
    
    if(get_wan_index_info_hook){
        get_wan_index_info_hook(wan_index_info);
    }

    for(i = 0; i < 8; i++){
        if(wan_index_info[i] == wan_index_num){
            *wan_index = i;
            break;
        }
    }
    return;
}

void mulif_set_wan_ppe_acnt_id(struct sk_buff *skb, u8 dir)
{
    u8 wan_index = -1;

    if(skb == NULL)
        return;

    if(TCSUPPORT_ACCOUNT_METER_V2_VAL){
    	FE_API_GET_WAN_ITF_INDEX(skb, &wan_index);
    	if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL){
    		if(ra_sw_nat_set_wan_acntid_hook){
    			ra_sw_nat_set_wan_acntid_hook(skb, wan_index, dir);
    		}
    	}
    	return;
    }

    get_wan_index(skb->dev->name, &wan_index);
    #if KERNEL_2_6_36
    if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL){
        if(ra_sw_nat_set_wan_acntid_hook){
            ra_sw_nat_set_wan_acntid_hook(skb, wan_index, dir);
        }
    }
	    //for wan ratelimit meter
	if(SUPPORT_WAN_RATELIMIT_METER){
		if(fe_resource_mark_wan_idx_hook)
			fe_resource_mark_wan_idx_hook(skb, wan_index, dir);
	}else {
		if(ra_sw_nat_set_wan_meterid_hook)
			ra_sw_nat_set_wan_meterid_hook(skb, wan_index);
	}
    #endif
    return;
}

static int mulif_check_pppoe(struct multi_wan_dev_info *dev_info,struct sk_buff *skb)
{
	if((MULIF_PPPOE_PROTO != dev_info->proto)&&(MULIF_PPPOE_BI_PROTO != dev_info->proto))
		return 0;

	if((htons(ETH_P_PPP_DISC) == skb->protocol)||(htons(ETH_P_PPP_SES) == skb->protocol))
		return 0;

	if(htons(ETH_P_8021Q) == skb->protocol)
	{
		if((__vlan_proto(skb) == htons(ETH_P_PPP_DISC))||(__vlan_proto(skb) == htons(ETH_P_PPP_SES)))
			return 0;
	}
	
	return 1;
}

#define ADD_VIRTUALDEV_WAN 1
#define DEL_VIRTUALDEV_WAN 2
 void set_virtualdev_ifname_in_arrray(char *name, int action)
 {
 	int i = 0 ;
	struct multi_wan_dev_info *dev_info;
  	struct net_device *vdev;

#if KERNEL_2_6_36
	vdev = dev_get_by_name(&init_net,name);
#else
  	vdev = dev_get_by_name(name);
#endif	
	dev_info = MULTI_WAN_DEV_INFO(vdev);

	for(i = 0; i < 16; i++){
		if(action == ADD_VIRTUALDEV_WAN){
			if(wan_virtualdev_ifname_info[i].valid == 0){
				if(strlen(name) > 15)
					 break;
				memcpy(wan_virtualdev_ifname_info[i].virtual_name, name, strlen(name));
				memcpy(wan_virtualdev_ifname_info[i].dev_name, dev_info->origdev->name, strlen(dev_info->origdev->name));
				wan_virtualdev_ifname_info[i].valid = 1;
				break;
			}		 
		}else if(action == DEL_VIRTUALDEV_WAN){   
			 if(strncmp(wan_virtualdev_ifname_info[i].virtual_name, name, 16) == 0){
			 	 memset(wan_virtualdev_ifname_info[i].virtual_name, 0, sizeof(wan_virtualdev_ifname_info[i].virtual_name));				 
				 memset(wan_virtualdev_ifname_info[i].dev_name, 0, sizeof(wan_virtualdev_ifname_info[i].dev_name));					 
				 wan_virtualdev_ifname_info[i].valid = 0;
				 break;
			 }
		}else
			 break;
	 }
	for(i = 0; i < 16; i++){
		if(wan_virtualdev_ifname_info[i].valid == 1)
			 printk("set_virtualdev_ifname_in_arrray,1360,wan[%d]:virtualdev_name=%s dev_name=%s\n",i,
			 wan_virtualdev_ifname_info[i].virtual_name,
			 wan_virtualdev_ifname_info[i].dev_name);
	}
	 printk("\n");
	 dev_put(vdev);
 }

 /*Transfer the packets from PVC orig device to mulif virtual device.
   *Replace the dev vlaue in skb from orig dev to mulif virtual dev.
   *And then transform the packet by netif_rx.
   */
int mulif_skb_recv(struct sk_buff *skb, struct net_device *dev, struct net_device *origdev)
{
  	struct sk_buff *skb_tmp;
 	struct list_head *lh;
  	unsigned char *dstMacAddr;
  	struct multi_wan_dev_info *dev_info = NULL;
  	struct net_device *vdev;
  	int isMulifWanRxDone = 0;
#if KERNEL_2_6_36
/*TCSUPPORT_VLAN_PASSTHROUGH*/
        int passthroughSendDone=0;
/*END TCSUPPORT_VLAN_PASSTHROUGH*/
#endif
	unsigned char no_vlanTag = 0;
	unsigned char is_vlanpkt = 0;

	struct mulif_origdev * origdev_list_node = NULL;
	struct mulif_virtualdev * virtualdev_list_node = NULL;
	struct mulif_virtualdev * virtualdev_list_node_first = NULL;

	if(skb == NULL)
		return 0;

  	if(dev == NULL) {
  		dev_kfree_skb(skb);
    		return 0;
  	}
#ifdef TCSUPPORT_VLAN_TAG
	if (skb->protocol == htons(ETH_P_8021Q))
		is_vlanpkt = 1;
	else
		is_vlanpkt = 0;
#endif

	if(eth_hdr(skb) == NULL)
	{
  		dev_kfree_skb(skb);
		printk("mulif_skb_recv: eth_hdr(skb) == NULL\n");
    		return 0;	
	}

	/*Get skb destination MAC*/
  	dstMacAddr = eth_hdr(skb)->h_dest;

	if(dstMacAddr == NULL)
	{
  		dev_kfree_skb(skb);
		printk("mulif_skb_recv: dstAddr == NULL\n");
    		return 0;	
	}

	origdev_list_node = mulif_find_origdev(dev->name);
	if( origdev_list_node == NULL) {
		if(is_multicast_ether_addr(dstMacAddr)&&!is_broadcast_ether_addr(dstMacAddr))
			wan_multicast_drop(skb);
		else
			dev_kfree_skb(skb);
		return 0;
	}

#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
	if (check_vtag_ct_hook && (check_vtag_ct_hook() == VTAG_ENABLE)){
		read_lock(&mulif_lock);

		if(vtag_wan_ifc_select(skb,origdev_list_node) != VTAG_SUCCESS){
			VTAG_PRINT(VTAG_DBG_ERROR,"->mvtag_wan_ifc_select fail, dropping packe on RX dev %s\n", dev->name); 		
		}

		read_unlock(&mulif_lock);
		return 0;
	}
#endif
	
  	read_lock(&mulif_lock);
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_IGMP)
	if (wan_multicast_incoming(skb, origdev_list_node)>0)
	{
		 read_unlock(&mulif_lock);
		return 0;
	}
#endif/*TCSUPPORT_COMPILE*/
    /* If is multicast or broadcast packets, then send it to all interfaces of this group */
  	if ((dstMacAddr[0] & 1) &&!TCSUPPORT_XPON_HAL_API_EXT_VAL){
			virtualdev_list_node_first = NULL;
			list_for_each(lh, &origdev_list_node->virtualdev_list)
			{
				virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
				if (virtualdev_list_node==NULL){
   					dev_kfree_skb(skb);
				  	read_unlock(&mulif_lock);
					return 0;
				}
      			if(virtualdev_list_node_first == NULL) {
					virtualdev_list_node_first = virtualdev_list_node;
					continue;
      			}

				vdev = virtualdev_list_node->virtual_dev;
				if (vdev==NULL){
   					dev_kfree_skb(skb);
				  	read_unlock(&mulif_lock);
					return 0;
				}
				dev_info = MULTI_WAN_DEV_INFO(vdev);
	
				if ((wanMultiServiceSupported && (wanPtmSupported || wanEtherSupported)) || wanXponSupported){
					#ifdef TCSUPPORT_VLAN_TAG
					#if !defined(TCSUPPORT_FTP_THROUGHPUT)
					if (check_vtag_hook && (check_vtag_hook()) == 1) 
					#endif
						if (get_vtag_hook){
							if (-1 == get_vtag_hook(vdev, skb)){
								continue;
							}
							if(skb->vlan_tags[0] == 0 && is_vlanpkt){		/* This device doesn't enable Vlan Tag */
								if(unvlan_dev_filter){
									continue;
								}
							}
						}	
					#endif	
				}
      			if(mulif_check_pppoe(dev_info,skb)) {
           			tc_debug("==>mulif info, non-PPPOE packet dropped on RX dev %s\n", vdev->name);
      			}
      			else {
        			dev_info->stats.rx_packets++;
        			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
        			skb_tmp = skb_copy(skb, GFP_ATOMIC);
				if(skb_tmp == NULL) 
				{
					printk("\r\n------mulif_skb_recv:skb_copy return NULL!-------");
					dev_kfree_skb(skb);
				  	read_unlock(&mulif_lock);
					return 0;
				} 
        			skb_tmp->dev = vdev;
        			skb_tmp->pkt_type = PACKET_HOST;
			#ifdef TCSUPPORT_VLAN_TAG
			  		skb_tmp->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
			#endif
        			mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
        			netif_receive_skb(skb_tmp);
      			}
    		}
			if ((wanMultiServiceSupported && (wanPtmSupported || wanEtherSupported)) || wanXponSupported){
				if (virtualdev_list_node_first == NULL){
   					dev_kfree_skb(skb);
				  	read_unlock(&mulif_lock);
					return 0;
				}

				vdev = virtualdev_list_node_first->virtual_dev;
				dev_info = MULTI_WAN_DEV_INFO(vdev);

				if (vdev==NULL){
   					dev_kfree_skb(skb);
				  	read_unlock(&mulif_lock);
					return 0;
				}

				#ifdef TCSUPPORT_VLAN_TAG
				#if !defined(TCSUPPORT_FTP_THROUGHPUT)
				if (check_vtag_hook && (check_vtag_hook()) == 1)
				#endif
				{
					if (get_vtag_hook && (-1==get_vtag_hook(vdev, skb))) {
        		 			tc_debug("==>mulif info, non-vlan matched packet dropped on RX dev %s\n", vdev->name);
						dev_kfree_skb(skb);
						read_unlock(&mulif_lock);
						return 0;
					} 
					else if(skb->vlan_tags[0] == 0 &&is_vlanpkt){		/* This device doesn't enable Vlan Tag */
						if(unvlan_dev_filter){
							tc_debug("==>mulif info, non-vlan matched packet dropped on RX dev %s\n", vdev->name);
							dev_kfree_skb(skb);
							read_unlock(&mulif_lock);
							return 0;
						}
					}
				}
				#endif	
			}	
            else{
                vdev = virtualdev_list_node_first->virtual_dev;
                dev_info = MULTI_WAN_DEV_INFO(vdev);
            }

    		if( mulif_check_pppoe(dev_info,skb)) {
     			tc_debug("==>mulif info, non-PPPOE packet dropped on RX dev %s\n", vdev->name);
     			dev_kfree_skb(skb);
				read_unlock(&mulif_lock);
				return 0;
    		}
    		else {
      			dev_info->stats.rx_packets++;
      			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
				skb->dev = virtualdev_list_node_first->virtual_dev;
      			skb->pkt_type = PACKET_HOST;
      			mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
				if(TCSUPPORT_VLAN_TAG_VAL)
				{
					skb->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
				}
      			netif_receive_skb(skb);
    		}			
    		isMulifWanRxDone = 1;
  	}
  	else {/* Routing traffic, just send the packet to the interface who's MAC is the same as the packet's dst MAC */
			list_for_each(lh, &origdev_list_node->virtualdev_list)
			{
				virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
				if (virtualdev_list_node==NULL){
					dev_kfree_skb(skb);
					read_unlock(&mulif_lock);
					return 0;
				}

				vdev = virtualdev_list_node->virtual_dev;
				if (vdev==NULL){
					dev_kfree_skb(skb);
					read_unlock(&mulif_lock);
					return 0;
				}
				dev_info = MULTI_WAN_DEV_INFO(vdev);

      			if (memcmp(dstMacAddr, vdev->dev_addr, ETH_ALEN) == 0) {
					#if KERNEL_2_6_36
					skb->bridge_flag = ROUTE_INTERFACE;	
					#endif
					if ((wanMultiServiceSupported && (wanPtmSupported || wanEtherSupported)) || wanXponSupported) {
						#ifdef TCSUPPORT_VLAN_TAG
						if (get_vtag_hook && (-1==get_vtag_hook(vdev, skb))) {
							if(TCSUPPORT_MULIF_WAN_SAME_MAC_VAL)
								continue;
							else
							{
    	    	 			tc_debug("==>mulif info, non-vlan matched packet dropped on RX dev %s\n", vdev->name);
        	 				dev_kfree_skb(skb);
							isMulifWanRxDone = 1;	
						  	read_unlock(&mulif_lock);
							return 0;
							}
						} 	
						#endif				
					}	

					if((-1 == simulation_down_vlan_handle(skb))&&TCSUPPORT_XPON_HAL_API_EXT_VAL)
					{
						dev_kfree_skb(skb);
						isMulifWanRxDone = 1;	
					  	read_unlock(&mulif_lock);
						return 0;
					}
					
        			if(mulif_check_pppoe(dev_info,skb)) {
           					tc_debug("==>mulif info, non-PPPOE packet dropped on RX dev %s\n", vdev->name);
           					dev_kfree_skb(skb);
						read_unlock(&mulif_lock);
						return 0;
        			}
        			else {
          				skb->dev = vdev;
          				dev_info->stats.rx_packets++;
          				dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
	  					skb->pkt_type = PACKET_HOST;
          				mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
					if(TCSUPPORT_VLAN_TAG_VAL)
						skb->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
          				netif_receive_skb(skb);
        			}
        			isMulifWanRxDone = 1;
        			break;
      			}
    		}
  	}

	if((isMulifWanRxDone != 1)&&TCSUPPORT_XPON_HAL_API_EXT_VAL)
	{
		#if KERNEL_2_6_36
		skb->mark |= DOWNSTREAM_SIMULATION_MASK;
		#endif
		netif_rx(skb);
		isMulifWanRxDone = 1;
	}
  	else if(isMulifWanRxDone != 1) {
  		/* Bridging traffic */
		list_for_each(lh, &origdev_list_node->virtualdev_list)
   		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
			if (virtualdev_list_node==NULL){
				dev_kfree_skb(skb);
				read_unlock(&mulif_lock);
				return 0;
			}

			vdev = virtualdev_list_node->virtual_dev;
			if (vdev==NULL){
				dev_kfree_skb(skb);
				read_unlock(&mulif_lock);
				return 0;
			}
			dev_info = MULTI_WAN_DEV_INFO(vdev);

      			if (vdev->promiscuity) {
					if ((wanMultiServiceSupported && (wanPtmSupported || wanEtherSupported)) || wanXponSupported){
						#ifdef TCSUPPORT_VLAN_TAG
						#if !defined(TCSUPPORT_FTP_THROUGHPUT)
						if (check_vtag_hook && (check_vtag_hook()) == 1){ 
						#endif
					#if 0
							if (get_vtag_hook && (-1==get_vtag_hook(vdev, skb))) {

								dev_kfree_skb(skb);
								isMulifWanRxDone = 1;
								read_unlock(&mulif_lock);
								return 0;
							} 
					#endif
#if KERNEL_2_6_36
if(TCSUPPORT_VLAN_PASSTHROUGH_VAL)
{
							if(get_vtag_hook){
						switch(get_vtag_hook(vdev, skb)){
							// packet vid match dev vid
							case 1:
								goto Send_Packet;
							// dev is untag or pass through mode
							case 0:
								break;
							// packet vid no match dev vid
							case -1:
									continue;
						}
						if(skb->vlan_tags[0] == 0){		/* This device doesn't active Vlan Tag */

							if(check_vlan_range_hook){
								switch(check_vlan_range_hook(vdev,skb)){
									case 1:
									// untag dev
									no_vlanTag = 1;
									skb->dev = vdev;
									continue;
									case 0:
									// passthrough mode ,vlan range is match
										break;
									case -1:
									// passthrough mode, vlan range is not match
										continue;
								}
							}
                                    /* Use the unvlan tag device to receive vlan pkt */
							if(!unvlan_dev_filter && !isMulifWanRxDone){
                                        //printk("bridge unvlan tag %s find!\n",vdev);
                                		dev_info->stats.rx_packets++;
                                		dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
								skb_tmp = skb_copy(skb, GFP_ATOMIC);
								if(skb_tmp == NULL) 
                                        {
                                            dev_kfree_skb(skb);
									skb = NULL;
                                            read_unlock(&mulif_lock);
                                            return 0;
								        }
								skb_tmp->dev = vdev;
								skb_tmp->pkt_type = PACKET_HOST;
								if(TCSUPPORT_VLAN_TAG_VAL)
								{
									skb_tmp->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
								}
                                passthroughSendDone = 1;
								mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
								netif_receive_skb(skb_tmp);
							}
							continue;
						}else{
							continue;
								}
}
}
else
{
#endif
							if(get_vtag_hook){
								if(-1 == get_vtag_hook(vdev, skb))
									continue;
								else if(skb->vlan_tags[0] == 0 && is_vlanpkt){		/* This device doesn't active Vlan Tag */
									no_vlanTag = 1;
									skb->dev = vdev;
									continue;
								}
							}
#if KERNEL_2_6_36
}
#endif

						#if !defined(TCSUPPORT_FTP_THROUGHPUT)
						}
						#endif
						#endif				
					}
Send_Packet:				
        			skb->dev = vdev;
        			dev_info->stats.rx_packets++;
        			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
        			skb->pkt_type = PACKET_HOST;
        			mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
					if(TCSUPPORT_VLAN_TAG_VAL)
					{
						skb->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
					}
        			netif_receive_skb(skb);
        			isMulifWanRxDone = 1;
        			break;
      			}
    		}
		/* Use the unvlan tag device to receive vlan pkt */
		if(TCSUPPORT_VLAN_TAG_VAL){
			if((!unvlan_dev_filter && no_vlanTag && !isMulifWanRxDone)
#if KERNEL_2_6_36			
	        &&( !TCSUPPORT_VLAN_PASSTHROUGH_VAL || !passthroughSendDone )
#endif
			){
				dev_info->stats.rx_packets++;
	        		dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
	        		skb->pkt_type = PACKET_HOST;
	        		mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
					skb->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
	        		netif_receive_skb(skb);
	        		isMulifWanRxDone = 1;
			}
		}
  	}
  	read_unlock(&mulif_lock);

  	if(isMulifWanRxDone != 1) {
  		tc_debug("==>mulif info, dropping packet that has wrong dest. on RX dev %s\n", dev->name);
    	dev_kfree_skb(skb);
  	}

  	return 0;
} /* mulif_skb_recv */


#if  LINUX_VERSION_CODE >= KERNEL_VERSION(3,18,19)
int isVoipWan(struct net_device *dev)
{
	return 0;
}
int isTR069Wan(struct net_device *dev)
{
	return 0;
}
#else
extern int isVoipWan(struct net_device *dev);
extern int isTR069Wan(struct net_device *dev);
#endif


#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)


 /*Return 2, IPv6
 Return 1, IPv4
 Return 0, Not care*/
 int checkipcp_ipv6cp (struct sk_buff *skb)
 {
	 unsigned char *cp = NULL;
	 unsigned short etherType = 0;
	 unsigned short pppProtocol = 0;
	 /* set ppp & dhcp packet to highest prioty */
	 cp = (unsigned char*)skb_mac_header(skb);

	 if(!cp)
	 	return 0;
	 
	 cp += 12;
	 etherType = ntohs(*(u16*)cp);
	 cp += 2;
 
	 if (etherType == 0x8100) {
		 /*skip 802.1q tag field*/
		 cp += 2;
		 /*re-parse ether type*/
		 etherType = ntohs(*(uint16 *) cp);
		 /* skip ether type */
		 cp += 2;
	 }
 
 	 /*Skip second vlan header*/
	 if (etherType == 0x8100) {
		 /*skip 802.1q tag field*/
		 cp += 2;
		 /*re-parse ether type*/
		 etherType = ntohs(*(uint16 *) cp);
		 /* skip ether type */
		 cp += 2;
	 }
	 
	 if (etherType == 0x8864) {
		 /* skip pppoe head */
		 cp += 6;					 /* 6: PPPoE header 2: PPP protocol */
		 /* get ppp protocol */
		 pppProtocol = ntohs(*(u16 *) cp);
		 if ( (pppProtocol == 0x8057) || (pppProtocol == 0x0057) ) {
			 return 2;/*PPP IPv6CP Packet || PPP IPv6 Packet*/
		 }
		 else if(pppProtocol == 0x0021) {
			 return 1;/*PPP IPv4 Packet*/
		 }
		 else
		 {
			 return 0;
		 }
	 } 
	 else if(etherType == 0x86dd) /*IPv6*/
	 {
		return 2;
	 }
	 else if(etherType == 0x0800) /*IPv4*/
	 {
		return 1;
	 }
	 else if(etherType == 0x0806) /*ARP*/
	 {
		return 1;
	 }
	 return 0;
 }

int drop_ipcp_ipv6cp(struct sk_buff *skb, struct net_device *dev)
{
	/*Bridge ipversion Handle*/
	if(dev->promiscuity && dev->ipversion)
	{
		unsigned char ipversion = dev->ipversion; //Bridge_ipversion;//(dev->bind_type & 0xC0) >> 6;/*1, IPv4 Only, 2 IPv6 only*/
		VTAG_PRINT(VTAG_DBG_WARNING,"Dev name is %s, ipversion is %d\r\n", dev->name, ipversion);
		if(ipversion == 1)
		{
			if(checkipcp_ipv6cp(skb) == 2)
			{
				VTAG_PRINT(VTAG_DBG_WARNING,"Dev is ipv4 only, drop IPv6 ppp packet\r\n");
				return -1;
			}
		}
		else if(ipversion == 2)
		{
			if(checkipcp_ipv6cp(skb) == 1)
			{
				VTAG_PRINT(VTAG_DBG_WARNING,"Dev is ipv6 only, drop IP packet\r\n");
				return -1;
			}
			
		}
		else
		{
		
		}
				
	}
	return 0;
}
#endif

 /*Transfer packets from mulif virtual device to PVC orig device.
   *Replace the dev vlaue in skb from mulif virtual dev to orig dev .
   *And then xmit the packet by dev_queue_xmit. 
   */
static int simulation_up_vlan_handle(struct sk_buff **pskb)
{
	u16 proto = 0;
	struct sk_buff *skb = NULL;

	skb = skb_unshare(*pskb, GFP_ATOMIC);
	if (!skb)
	{
		*pskb = NULL;
		return -ENOMEM;
	}
	*pskb = skb;
	
	proto = *((u16*)(skb->data+12));

	/*remove original vlan tag*/
	while(htons(ETH_P_8021Q) == proto)
	{
		memmove(skb->data + VLAN_HLEN, skb->data, 12);
		skb_pull(skb, VLAN_HLEN);

		proto = *((u16*)(skb->data+12));
	}

	/*add simulation vlan tag*/
	vlan_put_tag(skb,simulation_vlan);

	return 0;
}

static void init_my_mac(void)
{
	struct net_device *device = NULL;

#if KERNEL_2_6_36
	device = dev_get_by_name(&init_net,"eth0");
#else
	device = dev_get_by_name("eth0");
#endif
	if(device) {
		memcpy(my_mac, device->dev_addr, device->addr_len);

		/* Release device refcnt */
		dev_put(device);
	}
	else
	{
		get_MAC_from_flash(my_mac);
	}
}

int is_ipv4_multicast_data(struct sk_buff *skb)
{
	unsigned char *cp = skb->data;
	unsigned short etherType = 0;
	struct iphdr* iph = NULL;

	if(!is_broadcast_ether_addr(eth_hdr(skb)->h_dest) && is_multicast_ether_addr(eth_hdr(skb)->h_dest))
	{
		cp += 12;
		etherType = *(u16*)cp;
		cp += 2;

		if( (etherType == htons(ETH_P_8021Q)) || (etherType == htons(ETH_P_QinQ_88a8)) || (etherType == htons(ETH_P_QinQ_9100)) )
		{
			/*skip 802.1q tag field*/
			cp += 2;
			/*re-parse ether type*/
			etherType = *(uint16 *) cp;
			/* skip ether type */
			cp += 2;
		}
		
		/*Skip second vlan header*/
		if( (etherType == htons(ETH_P_8021Q)) || (etherType == htons(ETH_P_QinQ_88a8)) || (etherType == htons(ETH_P_QinQ_9100)) )
		{
			/*skip 802.1q tag field*/
			cp += 2;
			/*re-parse ether type*/
			etherType = *(uint16 *) cp;
			/* skip ether type */
			cp += 2;
		}

		iph = (struct iphdr* )(cp);
		if(etherType == htons(ETH_P_IP))
		{
			if((iph->protocol == 0x11) && skb->orig_dev &&
				((skb->orig_dev->name[0] == 'e' || skb->orig_dev->name[0] == 'r' || skb->orig_dev->name[0] == 'n')))
				return 1;
		}
	}

	return 0;
}

static int is_local_out_flood(struct sk_buff* skb)
{	
  	struct multi_wan_dev_info *dev_info = NULL;
	int i;

	if(skb->dev)
		dev_info = MULTI_WAN_DEV_INFO(skb->dev);

	if(!dev_info)
		return 0;

	if(MULIF_BRIDGE_PROTO != dev_info->proto)
		return 0;
		
	for (i=0; i<6; i++) 
	{
		if(skb->data[6+i] != my_mac[i])
			return 0;
	}

	return 1;
}

int cheak_and_get_pppoe_info(struct sk_buff *skb, struct net_device *dev)
{
	unsigned char *cp = NULL;
	unsigned short etherType = 0;
	unsigned short pppProtocol = 0;
	unsigned int src_ip = 0;
	unsigned int dst_ip = 0;
	unsigned char src_mac[ETH_ALEN];
	unsigned char dst_mac[ETH_ALEN];
	struct iphdr *iph = NULL;
	struct ethhdr *eth = NULL;
	unsigned short pppSessionID = 0;  
	struct pppoe_hdr *ppph = NULL;
	unsigned int ipcp_len = 0;
	unsigned int cp_offset = 0;

	cp = skb->data;

	eth = (struct ethhdr *)(cp);
	memcpy(dst_mac, eth->h_dest, ETH_ALEN);
	memcpy(src_mac, eth->h_source, ETH_ALEN);
	
	cp += 12;
	etherType = *(u16*)cp;
	cp += 2;
	
	if( (etherType == htons(ETH_P_8021Q)) || (etherType == htons(ETH_P_QinQ_88a8)) || (etherType == htons(ETH_P_QinQ_9100)) )
	{
		/*skip 802.1q tag field*/
		cp += 2;
		/*re-parse ether type*/
		etherType = *(uint16 *) cp;
		/* skip ether type */
		cp += 2;
	}
	
	/*Skip second vlan header*/
	if( (etherType == htons(ETH_P_8021Q)) || (etherType == htons(ETH_P_QinQ_88a8)) || (etherType == htons(ETH_P_QinQ_9100)) )
	{
		/*skip 802.1q tag field*/
		cp += 2;
		/*re-parse ether type*/
		etherType = *(uint16 *) cp;
		/* skip ether type */
		cp += 2;
	}

	 if (etherType == htons(ETH_P_PPP_SES)) {
	 	/* no need update when all info update done. */
		if ( 1 == pppoe_info_for_app.valid
			&& 1 == pppoe_info_for_app.dns_valid )
			return 0;
		
	 	ppph = (struct pppoe_hdr*)(cp) ;
		pppSessionID = ntohs(ppph->sid);
		 /* skip pppoe head */
		 cp = (unsigned char *)(ppph + 1) ;				 /* 6: PPPoE header 2: PPP protocol */
		 /* get ppp protocol */
		 pppProtocol = ntohs(*(u16 *) cp);
		/* skip ppp protocol*/
		 cp += 2;

		 if((pppProtocol == 0x0021) && (pppoe_info_for_app.valid == 0)) { /* IPv4 */
			iph = (struct iphdr* )(cp);
			src_ip = ntohl(iph->saddr) ;
			dst_ip = ntohl(iph->daddr) ;

			pppoe_info_for_app.valid = 1;
			pppoe_info_for_app.dst_ip = dst_ip;
			pppoe_info_for_app.src_ip = src_ip;
			pppoe_info_for_app.sessionID = pppSessionID;
			memcpy(pppoe_info_for_app.dmac_add, dst_mac, ETH_ALEN);
			memcpy(pppoe_info_for_app.smac_add, src_mac, ETH_ALEN);
			memcpy(pppoe_info_for_app.ifname, dev->name, IFNAMSIZ);
		 } else if((pppProtocol == 0x8021) && (*cp == 0x01) && (pppoe_info_for_app.dns_valid == 0)) { /* IPCP Configuration Request */
		 	/* skip Code & Identifier */
		 	cp += 2;
		 	ipcp_len = ntohs(*(u16 *) cp);
			/* skip Lengh */
		 	cp += 2;
			for(cp_offset = 0; cp_offset < (ipcp_len-4); ){
				if(*(cp + cp_offset) == 0x81){ /* Primary DNS */
					pppoe_info_for_app.pri_dns = ntohl(*(u32 *) (cp + cp_offset + 2));
				} else if(*(cp + cp_offset) == 0x83){  /* Secondary DNS */
					pppoe_info_for_app.snd_dns = ntohl(*(u32 *) (cp + cp_offset + 2));
				}
				cp_offset += *(cp + cp_offset + 1);
			}
			if(pppoe_info_for_app.pri_dns > 0){
				pppoe_info_for_app.dns_valid = 1;
			}
			
		 }
	 } 
	 else if ( htons(ETH_P_PPP_DISC) == etherType )
	 {
	 	/* no need check when ppp is not up. */
		if ( 0 == pppoe_info_for_app.valid )
			return 0;
		ppph = (struct pppoe_hdr*)(cp) ;
		pppSessionID = ntohs(ppph->sid);

		/* Code: Active Discovery Terminate (PADT) (0xa7) */
		if ( (0xa7 == ppph->code)
			&& (pppSessionID == pppoe_info_for_app.sessionID) )
		{
			memset(&pppoe_info_for_app, 0, sizeof(pppoe_info_for_app));
		}
	 }
	 else 
	 {
		return 1;
	 }

	return 0;
}


#define IPV4 1
#define IPV6_P 2
static int is_PPPoE_IGMP_packet(struct sk_buff* skb, uint16 * flag)
{
	struct ethhdr * ether_hdr;
    struct vlan_hdr * vlanhdr;
    struct pppoe_hdr * ppp_hdr;
    struct iphdr * iph;
    struct ipv6hdr * ip6h;
    struct icmp6hdr * icmp6h;
    uint8 * data=0;
    uint16 proto=0;

	ether_hdr = (struct ethhdr *)(skb->data);
    data = skb->data;
    
	if (ether_hdr->h_proto == htons(ETH_P_8021Q)){
        data += (ETH_HLEN + VLAN_HLEN);
        /* 1 vlan layer */
        vlanhdr = (struct vlan_ethhdr*)(skb->data + ETH_HLEN);
        
        if(vlanhdr->h_vlan_encapsulated_proto == htons(ETH_P_8021Q)){
            /* 2 vlan layer */
            vlanhdr = (struct vlan_ethhdr*)(skb->data + ETH_HLEN + VLAN_HLEN);
            data += VLAN_HLEN;
        }
        if(vlanhdr->h_vlan_encapsulated_proto != htons(ETH_P_PPP_SES)){
            return FALSE;
        }
        /* pppoe header */
        data = data + sizeof(struct pppoe_hdr);
        proto = *(uint16 *)data;
        if(proto == htons(PPP_IP)){
            *flag = IPV4;
            iph = (struct iphdr *)(data+2);
            data +=2;
        }else if(proto == htons(PPP_IPV6)){
            *flag = IPV6_P;
            ip6h = (struct ipv6hdr *)(data+2);
            data += 2;
        }else
			return FALSE;
        	
    }else if(ether_hdr->h_proto == htons(ETH_P_PPP_SES)){
        data += ETH_HLEN;
        /* pppoe header */
        data = data + sizeof(struct pppoe_hdr);
        proto = *(uint16*)data;
        
        if(proto == htons(PPP_IP)){
            *flag = IPV4;
            iph = (struct iphdr *)(data+2);
            data +=2;

        }else if(proto == htons(PPP_IPV6)){
            *flag = IPV6_P;
            ip6h = (struct ipv6hdr *)(data+2);
            data += 2;
        }else
			return FALSE;
    }else {
        return FALSE;
    }

    if((*flag == IPV4) && (iph->protocol == IPPROTO_IGMP)){
        return (data - skb->data - 8);  // before PPPoE header
    }else if((*flag == IPV6_P) && (ip6h->nexthdr == IPPROTO_ICMPV6)){
        icmp6h = data + sizeof(struct ipv6hdr);
        switch(icmp6h->icmp6_type){
            case ICMPV6_MGM_QUERY:
            case ICMPV6_MGM_REPORT:
            case ICMPV6_MGM_REDUCTION:
            case ICMPV6_MLD2_REPORT:
                return (data - skb->data - 8);  // before PPPoE header
        }   
    }

    return FALSE;
    
}

void remove_PPPoE_header(struct sk_buff* skb, uint16 off_set, uint16 flag)
{
    struct ethhdr * ether_hdr;
    struct iphdr * iph;
    struct ipv6hdr * ip6h;

    memmove(skb->data + 8, skb->data, off_set);
    skb_pull(skb, 8);
	
    if(flag == IPV4){
        *(uint16 *)(skb->data + off_set - 2) = htons(ETH_P_IP);
        iph = (struct iphdr *)(skb->data + off_set);		
        ether_hdr = (struct ethhdr *)(skb->data);
        ether_hdr->h_dest[0]=01;
        ether_hdr->h_dest[1]=00;
        ether_hdr->h_dest[2]=0x5E;
        ether_hdr->h_dest[3]=(iph->daddr>>8) & 0xFF;
        ether_hdr->h_dest[4]=(iph->daddr>>16) & 0xFF;
        ether_hdr->h_dest[5]=(iph->daddr>>24) & 0xFF;
    }else{
        *(uint16 *)(skb->data + off_set - 2) = htons(ETH_P_IPV6);
        ip6h = (struct ipv6hdr *)(skb->data + off_set);
        ether_hdr = (struct ethhdr *)(skb->data);
        ether_hdr->h_dest[0]=33;
        ether_hdr->h_dest[1]=33;
        memcpy(&ether_hdr->h_dest[2], ip6h->daddr.in6_u.u6_addr32[3], 4);
    }
    
    return ;
}

int mulif_dev_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
{
	struct net_device_stats *stats;
	struct multi_wan_dev_info *dev_info = NULL;
	__u16 vid;
	uint16 off_set, flag;

	int ret = 0;
    
	if(skb == NULL || dev == NULL)
		return 0;

	stats = mulif_dev_get_stats(dev);

	if(TCSUPPORT_XPON_HAL_API_EXT_VAL && !TCSUPPORT_CF_UNIFIED_PLATFORM_VAL)
	{
		ret = simulation_up_vlan_handle(&skb);
		if (ret < 0)
		{
			return 0;
		}
	}
	
#if  LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,36)
if((TCSUPPORT_GPON_MAPPING_VAL || TCSUPPORT_PON_VLAN_VAL) && TCSUPPORT_PON_IP_HOST_VAL){
	/* set bridge/route flag to skb */
	if (isVoipWan(dev)) {
		skb->pon_vlan_flag |= PON_PKT_VOIP_TX;
	}

	if(isTR069Wan(dev)){
		skb->pon_vlan_flag |= PON_PKT_TR69_TX;
	}
}
#endif

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_IGMP)
	ret = wan_multicast_outgoing(&skb,dev);
	if (ret < 0)
	{
		return 0;
	}
#endif/*TCSUPPORT_COMPILE*/ 

#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
	if(drop_ipcp_ipv6cp(skb, dev) == -1)
	{
		kfree_skb(skb);
		VTAG_PRINT(VTAG_DBG_WARNING,"mulif_dev_hard_start_xmit: Dev name is %s ipversion is %02x, drop packet\r\n", dev->name, dev->ipversion);
		return 0;
	}
	
	if (check_vtag_ct_hook && (check_vtag_ct_hook() == VTAG_ENABLE)){
  		/*restore vlan tag to packet*/
		if((check_vtag_restore_ct_hook && (check_vtag_restore_ct_hook() == VTAG_ENABLE))
			&& (skb != NULL) && (skb->dev != NULL)
			&& (skb->dev->name[0] == 'n')
			&& restore_vtag_ct_hook){ 	
			if(restore_vtag_ct_hook(&skb) != VTAG_SUCCESS){
				if(skb != NULL){
					kfree_skb(skb);
					vtag_free_tx_cnt++;				
				}
				return 0;
			}
		}

		/*handle vlan tag in downstream pakcet*/
		if(handle_vtag_tx_ct_hook){
			if(handle_vtag_tx_ct_hook(&skb) != VTAG_SUCCESS){
				VTAG_PRINT(VTAG_DBG_ERROR,"handle_vtag fail in upstream!");
				if(skb != NULL){
					kfree_skb(skb);
					vtag_free_tx_cnt++;
					skb = NULL;
				}
				return 0;
			}
		}
	}	
#endif

	if(TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL){
		if(is_ipv4_multicast_data(skb))
		{
			kfree_skb(skb);
			skb = NULL;
			return 0;
		}

	}
	
	if(!TCSUPPORT_MESH_ETHETWAN_PORT_ONBOARDING_VAL && is_local_out_flood(skb))
	{
		kfree_skb(skb);
		skb = NULL;
		return 0;
	}

	stats->tx_packets++; 
	stats->tx_bytes += skb->len;

	if(igmp_pppoe_to_ipoe_enable) {
		dev_info = MULTI_WAN_DEV_INFO(skb->dev);
		if(dev_info){
			if(dev_info->mode & MC_PPP_TO_IP){
 				off_set =is_PPPoE_IGMP_packet(skb, &flag);
				if(off_set){
					remove_PPPoE_header(skb, off_set, flag);
				}				
			}
		}
	}

	mulif_set_wan_ppe_acnt_id(skb, UPSTREAM_ONLY);
	skb->dev = MULTI_WAN_DEV_INFO(dev)->origdev;

	if(skb->dev == NULL) {
		printk("\n==>mulif err, orig device is NULL\n");
		return 0;
	}
	
if (TCSUPPORT_LAN_VLAN_RANGE_VAL){
    if(!skb->dev->promiscuity && skb->lan_vlan_tci_valid){ // router mode && have tag
            vid = skb->lan_vlan_tci & 0x0FFF;
            if(vid > gLanVlanMax || vid < gLanVlanMin){
                    kfree_skb(skb);
                    skb = NULL;
                    return 0;
            }
  	}
}

	if(TCSUPPORT_CT_JOYME4_VAL){
		if((MULTI_WAN_DEV_INFO(dev)->proto == MULIF_BRIDGE_PROTO)){	
			cheak_and_get_pppoe_info(skb,dev);
		}
	}

  	dev_queue_xmit(skb);

  	return 0;
} /* mulif_dev_hard_start_xmit */

int mulif_dev_open(struct net_device *vdev)
{
  	struct net_device *origdev; 

	if(vdev == NULL )
		return 0;

	origdev = MULTI_WAN_DEV_INFO(vdev)->origdev;

	if(origdev == NULL)
		return 0;
	
  	if (!(origdev->flags & IFF_UP))
  		return -ENETDOWN;

  	return 0;
} /* mulif_dev_open */

int mulif_dev_stop(struct net_device *dev)
{
	//if(dev !=  NULL)
	//	netif_stop_queue(dev);
	
	return 0;
} /* mulif_dev_stop */

int mulif_dev_set_mac_address(struct net_device *dev, void *sock_mac_addr)
{
  	int flags;
  	struct sockaddr *sock_addr = (struct sockaddr *)(sock_mac_addr);

	if(dev == NULL)
		return 0;

  	if (netif_running(dev))
  		return -EBUSY;

  	memcpy(dev->dev_addr, sock_addr->sa_data, dev->addr_len);

	if(0 == memcmp(MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev->dev_addr, dev->dev_addr, dev->addr_len))
	{
		tc_debug("==>mulif info, MULIF (%s):device(%s) has same MAC\n",dev->name, MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev->name);
		return 0;
	}

	if(MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev->flags & IFF_PROMISC)
	{
		tc_debug("==>mulif info, MULIF (%s):device (%s) in promiscious mode.\n",
    			dev->name, MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev->name);
		return 0;
	}
	
	flags = MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev->flags;	
	flags |= IFF_PROMISC;
	dev_set_promiscuity(MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev, 1);
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0) 
	dev_change_flags(MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev, flags);
#else
	dev_change_flags(MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev, flags, NULL);
#endif
	tc_debug("==>mulif info, MULIF (%s):  Setting device (%s) to promiscious mode.\n",
    			dev->name, MULTI_WAN_DEV_INFO(dev)->origdev_list_node->origdev->name);

  	return 0;
} /* mulif_dev_set_mac_address */

int mulif_dev_ioctl(struct net_device *vdev, struct ifreq *ifr, int cmd)
{
  	struct ifreq ifr_req;
  	int ret = -EOPNOTSUPP;
  	struct net_device *origdev; 

	if(vdev == NULL )
		return ret;

	origdev = MULTI_WAN_DEV_INFO(vdev)->origdev;

	if(origdev == NULL)
		return ret;
	
  	strncpy(ifr_req.ifr_name, origdev->name, IFNAMSIZ-1);
  	ifr_req.ifr_ifru = ifr->ifr_ifru;

  	switch(cmd) {
  		case SIOCGMIIPHY:
   		case SIOCGMIIREG:
   		case SIOCSMIIREG:
			if(!netif_device_present(origdev))
				return ret;
			
			#if KERNEL_2_6_36
   			if (origdev->netdev_ops->ndo_do_ioctl)
				ret = origdev->netdev_ops->ndo_do_ioctl(origdev, &ifr_req, cmd);
			#else
   			if (origdev->do_ioctl)
				ret = origdev->do_ioctl(origdev, &ifr_req, cmd);
			#endif
  		break;

  		case SIOCETHTOOL:
			#if KERNEL_2_6_36
			ret = dev_ethtool(&init_net, &ifr_req);
			#else
   			ret = dev_ethtool(&ifr_req);
			#endif
   			if (!ret)
       				ifr->ifr_ifru = ifr_req.ifr_ifru;
  	}

  	return ret;
} /* mulif_dev_ioctl */

int mulif_dev_change_mtu(struct net_device *vdev, int newmtu)
{
  	struct net_device *origdev; 
	
	if(vdev == NULL )
		return 0;
	
	origdev = MULTI_WAN_DEV_INFO(vdev)->origdev;

	if(origdev == NULL)
		return -ERANGE;
  	
  	if (origdev->mtu < newmtu)
  		return -ERANGE;

  	vdev->mtu = newmtu;
  	return 0;
}

#if KERNEL_2_6_36
 static const struct net_device_ops mulif_netdev_ops = {
	 .ndo_open				 = mulif_dev_open,
	 .ndo_stop				 = mulif_dev_stop,
	 .ndo_get_stats 		 = mulif_dev_get_stats,
#ifdef CONFIG_TP_IMAGE
	 .ndo_get_stats64        = mulif_dev_get_stats_64,
#endif /* CONFIG_TP_IMAGE */
	 .ndo_do_ioctl			 = mulif_dev_ioctl,
	 .ndo_change_mtu		 = mulif_dev_change_mtu,
	 .ndo_set_mac_address	 = mulif_dev_set_mac_address,
	 .ndo_start_xmit = mulif_dev_hard_start_xmit,
 };
#endif

 /*mulif device setup*/
static void mulif_setup(struct net_device *new_virtual_dev)
{
#if  LINUX_VERSION_CODE < KERNEL_VERSION(3,18,19)
	SET_MODULE_OWNER(new_virtual_dev);
#endif	
  	new_virtual_dev->tx_queue_len = 0;
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0) 
	new_virtual_dev->destructor = free_netdev;
#else
	new_virtual_dev->priv_destructor = free_netdev;
#endif

#if KERNEL_2_6_36
		new_virtual_dev->netdev_ops=&mulif_netdev_ops;
#else
		/* set up method calls */
		new_virtual_dev->change_mtu = mulif_dev_change_mtu;
		new_virtual_dev->get_stats = mulif_dev_get_stats;
		new_virtual_dev->open = mulif_dev_open;
		new_virtual_dev->stop = mulif_dev_stop;
		new_virtual_dev->set_mac_address = mulif_dev_set_mac_address;
		new_virtual_dev->do_ioctl = mulif_dev_ioctl;
#endif

#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
  	new_virtual_dev->priv_flags |= IFF_OSMUX;
#else
	new_virtual_dev->dev_flags |= IFF_OSMUX;
#endif
} /* mulif_setup */

static void mulif_transfer_operstate(const struct net_device *origdev, 
                                    struct net_device *virtualdev)
{
	if (origdev->operstate == IF_OPER_DORMANT)
    	netif_dormant_on(virtualdev);
  	else
    	netif_dormant_off(virtualdev);

  	if (netif_carrier_ok(origdev)) {
    	if (!netif_carrier_ok(virtualdev))
    		netif_carrier_on(virtualdev);
  	} 
	else {
    	if (netif_carrier_ok(virtualdev))
    		netif_carrier_off(virtualdev);
  	}

} /* mulif_transfer_operstate */

 /*Register mulif device*/
 #if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
static struct net_device *register_mulif_device(const char *origdev_ifname, const char *virtualdev_ifname, int defaultGW, int mulif_proto, struct mulif_ioctl_vtag_s vtag,unsigned char* mac_address)
#else
static struct net_device *register_mulif_device(const char *origdev_ifname, const char *virtualdev_ifname, int defaultGW, int mulif_proto,unsigned char* mac_address)
#endif
{
  	struct net_device *virtualdev = NULL;
  	struct multi_wan_dev_info *vdev_info = NULL;
	int ret = -1;
  	struct net_device *origdev = NULL; 
	int i = 0;
	struct multi_wan_dscp_dw_args* mul_dscp_info = NULL;
#if KERNEL_2_6_36
	origdev = dev_get_by_name(&init_net,origdev_ifname);
#else
  	origdev = dev_get_by_name(origdev_ifname);
#endif
  	if (!origdev) {
    		goto VIRTUALDEV_REGISTER_FAILED;
  	}

  	if (!(origdev->flags & IFF_UP)) {
    		goto VIRTUALDEV_REGISTER_FAILED;
  	}

#if  LINUX_VERSION_CODE >= KERNEL_VERSION(3,18,19)
	virtualdev = alloc_netdev(sizeof(struct multi_wan_dev_info), virtualdev_ifname, NET_NAME_USER,mulif_setup);
#else	
  	virtualdev = alloc_netdev(sizeof(struct multi_wan_dev_info), virtualdev_ifname, mulif_setup);
#endif  	
  	if (virtualdev == NULL) {
    		printk("==>mulif err, netdev alloc failure\n");
    		goto VIRTUALDEV_REGISTER_FAILED;
  	}

  	ether_setup(virtualdev);
#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
	virtualdev->vlan_mode = vtag.vlan_mode;
	virtualdev->tci = vtag.tci;
	
	#ifdef TCSUPPORT_FWC_VLAN_TAG
		virtualdev->tci_sec = vtag.tci_sec;
		virtualdev->vlan_map = vtag.vlan_map;
	#endif

	virtualdev->multicast_tci = vtag.multicast_tci;
	virtualdev->ipversion = 0x0;
#endif

#if KERNEL_2_6_36
	INIT_LIST_HEAD(&virtualdev->ext_mvlan_list);
#endif
	
  	virtualdev->flags &= ~IFF_UP;
  	virtualdev->flags &= ~IFF_MULTICAST;
  	virtualdev->state = (origdev->state & ((1<<__LINK_STATE_NOCARRIER) | (1<<__LINK_STATE_DORMANT))) 
						| (1<<__LINK_STATE_PRESENT);

  	virtualdev->mtu = origdev->mtu;
  	virtualdev->type = origdev->type;
  	virtualdev->hard_header_len = origdev->hard_header_len;
	#if !KERNEL_2_6_36
  	virtualdev->hard_start_xmit = mulif_dev_hard_start_xmit;
	#endif
	
  	origdev->priv_flags |= IFF_RSMUX;

	ret = mulif_attach_virtualdev(virtualdev, origdev_ifname, mulif_proto);
	if(ret == -1)
	{
		goto VIRTUALDEV_REGISTER_FAILED;
	}
	
  	/* Assign MAC for new interface*/
  	if(virtualdev) {
		if ((wanMultiServiceSupported && (wanPtmSupported || wanEtherSupported)) || wanXponSupported){
    		if(TCSUPPORT_XPON_HAL_API_EXT_VAL)
    		{
    			for(i = 0;i < 6;i++)
    				virtualdev->dev_addr[i] = mac_address[i];

    			ret = 0;
    		}
    		else
    	      	{
    	      		virtualdev->dev_addr[0] = 0xff;
    	       		ret = mulif_get_MACAddress(virtualdev->dev_addr, virtualdev_ifname ,defaultGW);
    		}
			/*If assign MAC fail*/
      	 	if( (ret != 0) || (virtualdev->dev_addr[0] & 0x01) == 0x01 ) {
				printk( " ==>mulif err, Unable to assign MAC address from MAC table.  Using the default address.\n" );
      			memcpy( virtualdev->dev_addr, BRIDGE_MULIF_IF_MAC, ETH_ALEN );
       		}
		} else {
	  		if(mulif_proto == MULIF_BRIDGE_PROTO) {  /* Assign default MAC "FE:FF:FF:FF:FF:FF" to bridge interface */
   				memcpy( virtualdev->dev_addr, BRIDGE_MULIF_IF_MAC, ETH_ALEN );
   			}
    		else { /* Generate new MAC base on br0 MAC and assign to route interface */
	      		virtualdev->dev_addr[0] = 0xff;
	       		ret = mulif_get_MACAddress(virtualdev->dev_addr, virtualdev_ifname, defaultGW);
				/*If assign MAC fail*/
   		 		if( (ret != 0) || (virtualdev->dev_addr[0] & 0x01) == 0x01 ) {
					printk( " ==>mulif err, Unable to assign MAC address from MAC table.  Using the default address.\n" );
	   				memcpy( virtualdev->dev_addr, BRIDGE_MULIF_IF_MAC, ETH_ALEN );
       			}
    		}
  		}
	}	

	if(mulif_proto == MULIF_BRIDGE_PROTO || mulif_proto == MULIF_IPOE_BI_PROTO || mulif_proto == MULIF_PPPOE_BI_PROTO) 
	{
		virtualdev->promiscuity = 1;
		if (mulif_proto == MULIF_IPOE_BI_PROTO)
			virtualdev->flags |= IFF_MULTICAST;
	}
	else if(mulif_proto == MULIF_IPOE_PROTO) 
	{
		virtualdev->flags |= IFF_MULTICAST;
	}

	if (register_netdev(virtualdev)) 
	{
		printk("==>mulif err, register_netdev failed\n");
		free_netdev(virtualdev);
	}
	else 
	{
		mulif_transfer_operstate(origdev, virtualdev);
		set_virtualdev_ifname_in_arrray(virtualdev_ifname, ADD_VIRTUALDEV_WAN);
	}
	mul_dscp_info = (struct multi_wan_dscp_dw_args*)kmalloc(sizeof(struct multi_wan_dscp_dw_args), GFP_ATOMIC);

	if(unlikely(NULL == mul_dscp_info))
	{
		printk("==>mulif err add dscp info failed\n");
	}
	else
	{
		spin_lock(&mulif_dscp_dw_lock);
		strncpy(mul_dscp_info->ifname, virtualdev->name, IFNAMSIZ-1);
		mul_dscp_info->flag = 0;
		list_add_tail(&mul_dscp_info->list,&mulif_dev_dscp_list_node);
		spin_unlock(&mulif_dscp_dw_lock);
	}
	

	dev_put(origdev);
	return virtualdev;

VIRTUALDEV_REGISTER_FAILED:
	if(virtualdev)
		free_netdev(virtualdev);

	if(origdev){
		dev_put(origdev);
	}
	return NULL;
} /* register_mulif_device */


 /*unregister mulif device*/
static int unregister_mulif_device(const char* virtualdev_ifname)
{
  	struct net_device *virtualdev = NULL;
	u8 wan_index = -1;
	struct multi_wan_dscp_dw_args *dscp_p;
    
#if KERNEL_2_6_36
	virtualdev = dev_get_by_name(&init_net,virtualdev_ifname);
#else
  	virtualdev = dev_get_by_name(virtualdev_ifname);
#endif
	if(virtualdev == NULL)
	{		
		printk("==>mulif err, netdev unregister failure\n");
		return -1;
	}
	spin_lock(&mulif_dscp_dw_lock);
	list_for_each_entry(dscp_p, &mulif_dev_dscp_list_node ,list)
	{
		if(!strncmp(dscp_p->ifname,virtualdev_ifname,IFNAMSIZ-1))
		{
			list_del(&dscp_p->list);
			kfree((void *)dscp_p);
			dscp_p = NULL;
			break;
		}			
	}
	spin_unlock(&mulif_dscp_dw_lock);

#ifdef CONFIG_TP_IMAGE
	if(TCSUPPORT_HWNAT_WAN_ACCOUNT_VAL && TCSUPPORT_SMUX_HW_STAT_VAL)
	{
		get_wan_index(virtualdev_ifname, &wan_index);
		
		if((NULL != ra_sw_nat_clear_wan_acntid_counter_hook) && (wan_index <=7) && wan_index >= 0)
		{
			ra_sw_nat_clear_wan_acntid_counter_hook(wan_index);
		}
	}
#endif /* CONFIG_TP_IMAGE */
	set_virtualdev_ifname_in_arrray(virtualdev_ifname, DEL_VIRTUALDEV_WAN);
	return mulif_detach_virtualdev(virtualdev);
} /* unregister_mulif_device */

#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
static int setipversion_mulif_device(const char* vifname, int ipversion)
{
  	struct net_device *vdev = NULL;
  	struct net_device *origdev = NULL;
  	int ret;
  	struct multi_wan_dev_info *dev_info;
  	ret = -EINVAL;
#if KERNEL_2_6_36
	vdev = dev_get_by_name(&init_net,vifname);
#else
  	vdev = dev_get_by_name(vifname);
#endif
 	if(vdev != NULL) {
		vdev->ipversion = ipversion;
		printk("\n==>setipversion_mulif_device device name is %s, ipversion is %02x\n", vdev->name, vdev->ipversion);
		dev_put(vdev);
   		ret = 0;
  	}

  	return ret;
} /* unregister_mulif_device */
#endif

static int mulif_device_event(struct notifier_block *unused, unsigned long event, void *ptr)
{
  	int flags;
  	struct list_head *lh;
  	struct list_head *lhp;
  	struct multi_wan_dev_info *dev_info;
#if LINUX_VERSION_CODE > KERNEL_VERSION(3,18,19)
    struct net_device *origdev = netdev_notifier_info_to_dev(ptr);
#else
  	struct net_device *origdev = ptr;
#endif

	struct mulif_origdev * origdev_list_node = NULL;
	struct mulif_virtualdev * virtualdev_list_node = NULL;
	origdev_list_node = mulif_find_origdev(origdev->name);
 	if (origdev_list_node == NULL)
    		goto out;	

  	switch (event) {
    	case NETDEV_CHANGE:
      		/* Propagate PVC device state to mulif devices */
      		read_lock(&mulif_lock);
			
		list_for_each(lh, &origdev_list_node->virtualdev_list)
		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
			if(virtualdev_list_node) {
				mulif_transfer_operstate(origdev, virtualdev_list_node->virtual_dev);
			}

		}

      		read_unlock(&mulif_lock);
      		break;

    	case NETDEV_DOWN:
      		/* Put all mulif devices for this dev in the down state too.*/
      		read_lock(&mulif_lock);
			
		list_for_each(lh, &origdev_list_node->virtualdev_list)
		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
			if(virtualdev_list_node) 
			{
					flags = virtualdev_list_node->virtual_dev->flags;
					if (!(flags & IFF_UP))
						continue;
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0) 
					dev_change_flags(virtualdev_list_node->virtual_dev, flags & ~IFF_UP);
#else
					dev_change_flags(virtualdev_list_node->virtual_dev, flags & ~IFF_UP, NULL);
#endif
			}

		}

      		read_unlock(&mulif_lock);
      		break;

    	case NETDEV_UP:
		/* Put all mulif devices for this dev in the up state too.  */
      		read_lock(&mulif_lock);
		
		list_for_each(lh, &origdev_list_node->virtualdev_list)
		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
			if(virtualdev_list_node) 
			{
				flags = virtualdev_list_node->virtual_dev->flags;
				if (flags & IFF_UP)
					continue;
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0) 
				dev_change_flags(virtualdev_list_node->virtual_dev, flags & IFF_UP);
#else
				dev_change_flags(virtualdev_list_node->virtual_dev, flags & IFF_UP, NULL);
#endif
			}

		}

      		read_unlock(&mulif_lock);
      		break;

    	case NETDEV_UNREGISTER:
      		/* Delete all mulif devices for this dev. */
			
		list_for_each_safe(lh, lhp, &origdev_list_node->virtualdev_list)
		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
			if(virtualdev_list_node) 
			{
				unregister_mulif_device(virtualdev_list_node->virtual_dev->name);
			}
		}

      		break;
  	}

out:
  	return NOTIFY_DONE;
} /* mulif_device_event */


 /* socket ioctl handler for mulifctl cmd*/
static int mulif_ioctl_handler(void __user *arg)
{
  	int ret = 0;
  	struct multi_wan_ioctl_args args;
	struct multi_wan_dscp_dw_args* dscpargs = NULL;

  	if (copy_from_user(&args, arg, sizeof(struct multi_wan_ioctl_args)))
    		return -EFAULT;

  	args.pvcname[IFNAMSIZ-1] = 0;
  	args.ifname[IFNAMSIZ-1] = 0;

  	switch (args.cmd) {
    		case MULIF_ADDIF_CMD:
      			if (!capable(CAP_NET_ADMIN))
        			return -EPERM;
#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
			if(register_mulif_device(args.pvcname, args.ifname, args.defaultGW, args.proto, args.vtag,args.mac_address))
#else
      			if(register_mulif_device(args.pvcname, args.ifname, args.defaultGW, args.proto,args.mac_address)) 
#endif
{
        			ret = 0;
      			} 
				else {
        			ret = -EINVAL;
      			}
      			break;

    		case MULIF_REMIF_CMD:
      			if (!capable(CAP_NET_ADMIN))
        			return -EPERM;
      			ret = unregister_mulif_device(args.ifname);
      			break;
#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)
			case MULIF_SETIFIPVERSION_CMD:
      			if (!capable(CAP_NET_ADMIN))
        			return -EPERM;
				printk("mulif_ioctl_handler: set ipversion dev name is %s , ipversion is %02x\r\n", args.ifname, args.proto);
      			ret = setipversion_mulif_device(args.ifname, args.proto);
				break;
#endif
		case MULIF_ADDMVLAN_CMD:
			if (!capable(CAP_NET_ADMIN))
        				return -EPERM;
			ret = addmvlan_mulif_device(args.ifname,args.ext_mvlan);
				break;
		case MULIF_DELMVLAN_CMD:
			if (!capable(CAP_NET_ADMIN))
        				return -EPERM;
			ret = delmvlan_mulif_device(args.ifname,args.ext_mvlan);
				break;
		case MULIF_SHOWMVLAN_CMD:
			if (!capable(CAP_NET_ADMIN))
        				return -EPERM;
			ret = showmvlan_mulif_device(args.ifname);
				break;
		case MULIF_SETOFFSET_CMD:
			if (!capable(CAP_NET_ADMIN))
        				return -EPERM;
			g_macoffset = args.mac_offset;
				break;
		case MULIF_SET_CMD:
			if (!capable(CAP_NET_ADMIN))
				return -EPERM;
			ret = set_mulif_device(args.ifname, args.mode, args.value);
				break;
		case MULIF_SETDSCP_DW_CMD:
			spin_lock(&mulif_dscp_dw_lock);
			list_for_each_entry(dscpargs, &mulif_dev_dscp_list_node ,list)
			{
				if(!strncmp(dscpargs->ifname,args.ifname,IFNAMSIZ))
				{
					dscpargs->flag = args.dscp_dw_flag;
					dscpargs->dscp_info = args.dscp_dw_info;
					break;
				}
					
			}
			spin_unlock(&mulif_dscp_dw_lock);
				break;
    		default:
      			printk("%s: Unknown MULIF CMD: %x \n",	__FUNCTION__, args.cmd);
      			return -EINVAL;
  	}

  	return ret;
} /* mulif_ioctl_handler */

//////////////////////////////////////////////////////////////////////////////
typedef struct WanMVlan_s
{
	char devname[12];
	int mvid;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
	int mvid1;
#endif/*TCSUPPORT_COMPILE*/
}WanMVlan_t;
static WanMVlan_t wan_mvlan[]=
{
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
	{"nas0",-1,-1},{"nas1",-1,-1},
	{"nas2",-1,-1},{"nas3",-1,-1},
	{"nas4",-1,-1},{"nas5",-1,-1},
	{"nas6",-1,-1},{"nas7",-1,-1},
#else/*TCSUPPORT_COMPILE*/
	{"nas0",-1},{"nas1",-1},
	{"nas2",-1},{"nas3",-1},
	{"nas4",-1},{"nas5",-1},
	{"nas6",-1},{"nas7",-1},
#endif/*TCSUPPORT_COMPILE*/
};
static int wan_mvlan_enable = 1;
#ifdef TCSUPPORT_RA_HWNAT
extern int (*wan_mvlan_change_hook)(void);
extern int (*wan_multicast_drop_hook)(struct sk_buff *skb);
extern int (*ra_sw_nat_hook_drop_packet) (struct sk_buff * skb);
#else
static int (*wan_mvlan_change_hook)(void) = NULL;
static int (*wan_multicast_drop_hook)(struct sk_buff *skb) = NULL;
static int (*ra_sw_nat_hook_drop_packet) (struct sk_buff * skb) = NULL;
#endif


static void dump_skb(struct sk_buff *skb, uint pktLen) 
{
	unchar n, *p = (unchar *)skb->data ;
	int i ;

	for(i=0 ; i<pktLen ; i++) {
		n = i & 0x0f ;
		
		if(n == 0x00) 		printk(" \n%.4x: ", i) ;
		else if(n == 0x08) 	printk(" ") ;

		printk("%.2x ", *p++) ; 
	}
	printk("\n") ;
}

#define PROTOCOL_ICMPV6  0x3a
#define NDISC_ROUTER_SOLICITATION	133
#define NDISC_ROUTER_ADVERTISEMENT	134
#define NDISC_NEIGHBOUR_SOLICITATION	135
#define NDISC_NEIGHBOUR_ADVERTISEMENT	136
#define NDISC_REDIRECT			137

int isIPv6NDISCPacket(struct sk_buff* skb)
{
	unsigned int ethtype;
	unsigned char* buff = NULL;
	struct ipv6hdr* ipv6 = NULL;
	int ip_type = -1;
	int icmpv6_type = -1;

	if ((vlan_eth_hdr(skb)->h_vlan_proto == htons(ETH_P_8021Q))
		|| (vlan_eth_hdr(skb)->h_vlan_proto == htons(ETH_P_QinQ_88a8)))
	{
		ethtype = vlan_eth_hdr(skb)->h_vlan_encapsulated_proto;
		buff = skb->data + 4;
	}	
	else
	{
		ethtype = eth_hdr(skb)->h_proto;
		buff = skb->data;
	}

	if (ethtype == ETH_P_IPV6)
	{
		ipv6 = (struct ipv6hdr*)(buff);
		ip_type = ipv6->nexthdr;
		icmpv6_type = *(buff + 40);
	
		if (ip_type == PROTOCOL_ICMPV6)
		{
			//printk("\n icmpv6_type = %d \n", icmpv6_type);
			switch (icmpv6_type)
			{
				case NDISC_ROUTER_SOLICITATION:
				case NDISC_ROUTER_ADVERTISEMENT:
				case NDISC_NEIGHBOUR_SOLICITATION:
				case NDISC_NEIGHBOUR_ADVERTISEMENT:
				case NDISC_REDIRECT:
					return 1;
				default :
					return 0;	
			}
		}
	}

	return 0;
}

/*for joyme4 downstream dscp replace*/
static inline int ipv4SetDscp(struct iphdr *iph,u_int8_t dscp)
{
	iph->tos &= 0x03;
	iph->tos |= (dscp<<2);
	iph->check = 0;
	iph->check = ip_fast_csum((u8 *)iph, iph->ihl);

	return 0;
}

static inline int ipv6SetDscp(struct ipv6hdr *ipv6h,u_int8_t dscp)
{
	(*(u16 *) ipv6h) &= htons(0xf03f);
	(*(u16 *) ipv6h) |= htons(dscp<<6);

	return 0;
}

static int setSkbDscp(struct sk_buff** pskb,u_int8_t dscp)
{
	u_int16_t eth_type = 0;
	u_int8_t* buff = NULL;
	u_int16_t* tmp = NULL;
	u_int16_t pppoe_proto;

	*pskb = skb_unshare(*pskb, GFP_ATOMIC);
	if (!*pskb)
	{
		return -ENOMEM;
	}
	
	buff = (*pskb)->data;

	if((*pskb)->protocol == htons(ETH_P_8021Q))
	{
		buff += 2; //skip 2 byte 
	
		tmp = (u16 *)buff;
		if(*tmp == htons(ETH_P_8021Q))
		{
			buff += 4;//only support 2layer vlan
		}
		eth_type = *(u16*)buff;

		if((eth_type != htons(ETH_P_PPP_SES))&&(eth_type != htons(ETH_P_IP))&&(eth_type != htons(ETH_P_IPV6)))
			return -1;

		buff += 2; // skip ether type

		if (eth_type == htons(ETH_P_PPP_SES))
		{
			buff+= sizeof(struct pppoe_hdr);
			pppoe_proto = *(u_int16_t*)buff;

			buff += 2; // skip ppp header

			if (pppoe_proto == htons(PPP_IP))
				eth_type = htons(ETH_P_IP);
			else if (pppoe_proto == htons(PPP_IPV6))
				eth_type = htons(ETH_P_IPV6);
		}

		if (eth_type == htons(ETH_P_IP)){
			struct iphdr *iph = (struct iphdr*)buff;

			if (iph->version != 4)
				return -1;
			
			return ipv4SetDscp(iph,dscp); 
		}
		else if (eth_type == htons(ETH_P_IPV6)){
			struct ipv6hdr *ip6hdr = (struct ipv6hdr*)buff;
			if (ip6hdr->version != 6)
				return -1;

			return ipv6SetDscp(ip6hdr,dscp);	
		}
	}
	else if ((*pskb)->protocol == htons(ETH_P_IP) || (*pskb)->protocol == htons(ETH_P_PPP_SES) || (*pskb)->protocol == htons(ETH_P_IPV6))
	{
		if ((*pskb)->protocol == htons(ETH_P_PPP_SES))
		{
			buff+= sizeof(struct pppoe_hdr);
			pppoe_proto = *(u_int16_t*)buff;

			buff += 2; // skip ppp header

			if (pppoe_proto == htons(PPP_IP))
				eth_type = htons(ETH_P_IP);
			else if (pppoe_proto == htons(PPP_IPV6))
				eth_type = htons(ETH_P_IPV6);
		}

		if ((*pskb)->protocol == htons(ETH_P_IP) || eth_type == htons(ETH_P_IP)){
			struct iphdr *iph = (struct iphdr*)buff;

			if (iph->version != 4)
				return -1;
			
			return ipv4SetDscp(iph,dscp); 
		}
		else if ((*pskb)->protocol == htons(ETH_P_IPV6) || eth_type == htons(ETH_P_IPV6)){
			struct ipv6hdr *ip6hdr = (struct ipv6hdr*)buff;
			if (ip6hdr->version != 6)
				return -1;

			return ipv6SetDscp(ip6hdr,dscp);	
		}
	}
	return -1;
}
/*for joyme4 downstream dscp replace*/

int wan_is_multicast_pkt(unsigned char* dst, struct sk_buff* skb)
{
	unsigned char mac[3] = {0x01,0x00,0x5e};
	
	if (memcmp(dst,mac,3)==0)
		return 1;

	if (dst[0]==0x33 && dst[1] == 0x33)
	{
		if ((skb != NULL) && (isIPv6NDISCPacket(skb)))
			return 0;
		else
			return 1;
	}

	return 0;
}

static int wan_get_vid(char* name)
{
	int cnt = sizeof(wan_mvlan) / sizeof(WanMVlan_t);
	int i;
	int sLen = 0;
	char name_tmp[IFNAMSIZ] = {0};
	
	if(NULL == name)
	{
		return 0;
	}

	sLen = strlen(name); 

	/* save dev->name to tmp */
	if (IFNAMSIZ > sLen)
	{
		strncpy(name_tmp,name,sLen);
	}
	
	/* etherwan nas10_x mapped to existed nasx */
	if (sLen > 4)
	{ 
		sprintf(name_tmp,"%s%c",VDEV_NAME_PREFIX,name_tmp[sLen-1]);
	} 
	
	for(i=0; i<cnt; i++) 
	{ 
		if(memcmp(name_tmp,wan_mvlan[i].devname,5)==0)
			return wan_mvlan[i].mvid;
	}
	return 0;
}
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
static int wan_get_mvid1(char* name)
{
	int cnt = sizeof(wan_mvlan) / sizeof(WanMVlan_t);
	int i;

	for(i=0;i<cnt;i++)
	{
		if (memcmp(name,wan_mvlan[i].devname,5)==0)
			return wan_mvlan[i].mvid1;
	}
	return 0;
}
#endif/*TCSUPPORT_COMPILE*/

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
static int wan_set_vid(char* name,int vid, int mvid1)
#else/*TCSUPPORT_COMPILE*/
static int wan_set_vid(char* name,int vid)
#endif/*TCSUPPORT_COMPILE*/

{
	int cnt = sizeof(wan_mvlan) / sizeof(WanMVlan_t);
	int i,flag = 0;
	int sLen = 0;
	char name_tmp[IFNAMSIZ] = {0};
	
	if(NULL == name)
	{
		return 0;
	}

	sLen = strlen(name); 
	
	if (IFNAMSIZ > sLen)
	{
		strncpy(name_tmp,name,sLen);
	}
	
	/* etherwan nas10_x mapped to existed nasx */
	if (sLen > 4)
	{ 
		sprintf(name_tmp,"%s%c",VDEV_NAME_PREFIX,name_tmp[sLen-1]);
	}

	for(i=0;i<cnt;i++)
	{
		if (memcmp(name_tmp,wan_mvlan[i].devname,5)==0)
		{
			if (wan_mvlan[i].mvid != vid)
				flag = 1;
			wan_mvlan[i].mvid = vid;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
			wan_mvlan[i].mvid1 = mvid1;
#endif/*TCSUPPORT_COMPILE*/
			break;
		}
	}
	if (flag && wan_mvlan_change_hook != NULL)
	{
		wan_mvlan_change_hook();
	}
	return 0;
}



int wan_multicast_drop(struct sk_buff* skb)
{
	if (wan_mvlan_enable &0x04)
		printk("\n======>wan_multicast_drop()");
	
	if (wan_multicast_drop_hook)
		wan_multicast_drop_hook(skb);
	else if (ra_sw_nat_hook_drop_packet)
	{		
		ra_sw_nat_hook_drop_packet(skb);
		dev_kfree_skb(skb);	
	}
	else 
		dev_kfree_skb(skb);
	return 0;
}


int wan_get_index(char* name)
{
	int cnt = sizeof(wan_mvlan) / sizeof(WanMVlan_t);
	int i;

    if((TCSUPPORT_CT_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL) && igmp_pppoe_to_ipoe_enable){
        /*  nas X_Y, index for ppp is X*8+Y  */
        if(name[0]== 'n' && name[4] == '_'){
            i = (name[3]-'0')*8 + (name[5]-'0');
            return i;
        }
    }else{ 
    	for(i=0;i<cnt;i++)
    	{
    		if (memcmp(name,wan_mvlan[i].devname,5)==0)
    		{
    			return i;
    		}
    	}
    }
	return -1;
}
#if  LINUX_VERSION_CODE >= KERNEL_VERSION(3,18,19)
extern int ip_check_mc_rcu(struct in_device *in_dev, __be32 mc_addr, __be32 src_addr, u16 proto);
#else
extern int ip_check_mc(struct in_device *in_dev, __be32 mc_addr, __be32 src_addr, u16 proto);
#endif

int wan_should_delivery(struct sk_buff* skb,struct multi_wan_dev_info *dev_info)
{
	struct net_device *vdev = dev_info->virtualdev_list_node->virtual_dev;	
	int proto = dev_info->proto;
	int idx = 0;
	unsigned short ethtype;
	char name[6];
	char* buff = NULL;
	struct iphdr*  ip = NULL;
	struct ipv6hdr* ipv6 = NULL;
	struct in_device* in_dev = NULL;
	int ret;
	int flag = 0;
	__u8 nexthdr;	
	int offset;
	__be16 frag_off;

	if (vdev == NULL)
		return 0;
	
	if (proto == MULIF_BRIDGE_PROTO)
		return 1;

	if (proto == MULIF_PPPOE_PROTO || proto == MULIF_PPPOE_BI_PROTO)
	{
#ifdef	CONFIG_TP_IPV6_PASSTHROUGH
		if (vdev && (vdev->priv_flags & IFF_IP6_BR))
		{
			return 1;
		}
#endif /*CONFIG_TP_IPV6_PASSTHROUGH*/
		if ((idx = wan_get_index(vdev->name)) < 0)
			return 0;
		sprintf(name,"ppp%d",idx);
		#if KERNEL_2_6_36
		vdev = dev_get_by_name(&init_net,name);
		#else
		vdev = dev_get_by_name(name);
		#endif
		if (vdev == NULL)
			return 0;

		flag = 1;
	}
	
	if (vlan_eth_hdr(skb)->h_vlan_proto == htons(ETH_P_8021Q))
	{
		ethtype = vlan_eth_hdr(skb)->h_vlan_encapsulated_proto;
		buff = skb->data + 4;
	}	
	else
	{
		ethtype = eth_hdr(skb)->h_proto;
		buff = skb->data;
	}
	
	if(ethtype == htons(ETH_P_IP))
	{
		ip = (struct iphdr*)(buff);
		in_dev = (struct in_device*)vdev->ip_ptr;
		if(flag == 1){
			dev_put(vdev);
		}
		
		if (in_dev==NULL)
			return 0;
#if  LINUX_VERSION_CODE >= KERNEL_VERSION(3,18,19)
		rcu_read_lock();
		ret = ip_check_mc_rcu(in_dev,ip->daddr,ip->saddr,ip->protocol);
		rcu_read_unlock();
		return ret;
#else
		return ip_check_mc(in_dev,ip->daddr,0,ip->protocol);
#endif
	}
#if CONFIG_IPV6
	else if (ethtype == htons(ETH_P_IPV6))
	{
		
		if(flag == 1){
			dev_put(vdev);
		}
		ipv6 = (struct ipv6hdr*)(buff);

		nexthdr = ipv6->nexthdr;
		offset = ipv6_skip_exthdr(skb, sizeof(struct ipv6hdr),
							  &nexthdr, &frag_off);
		if (offset >= 0)
		{
			if(IPPROTO_ICMPV6 == nexthdr)
			{
				struct icmp6hdr *icmphdr;
				icmphdr = (struct icmp6hdr *)((unsigned char *)ipv6 + offset);
				if(icmphdr->icmp6_type != ICMPV6_MGM_QUERY)
					return 2;
			}
		}
#if 0
		return ipv6_chk_mcast_addr(vdev,&(ipv6->daddr),NULL);
#else
		/* IPv6 multicast group will not be added to mc_list, so above function will don't find daddr in mc_list. evan.jiang 2015/11/25 */
		return ipv6_addr_is_multicast(&(ipv6->daddr));
#endif
	}
#endif	
	if(flag == 1){
		dev_put(vdev);
	}
	return 1;
}

int wan_multicast_incoming(struct sk_buff* skb,struct mulif_origdev *origdev_list_node)
{
	int vid = -1;
	struct multi_wan_dev_info *dev_info;
	struct net_device *vdev;
	struct sk_buff* skb2;
	int mvid;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
	int mvid1;
#endif/*TCSUPPORT_COMPILE*/
	int flag = 0;
	struct mulif_virtualdev *virtualdev_list_node = NULL;
	int ret = -1;

	if (wan_mvlan_enable &0x04)
	{
		//printk("\n=====>wan_multicast_incoming():mac = %x ,data = %x", eth_hdr(skb), skb->data);
		dump_skb(skb,skb->len);
	}

	if ((wan_mvlan_enable&0x1)==0)
		return 0;
	
	if (wan_is_multicast_pkt(eth_hdr(skb)->h_dest, skb)==0)
		return 0;

	#if KERNEL_2_6_36
	if(TCSUPPORT_XPON_IGMP_CHT_VAL&&xpon_hgu_down_multicast_access_control_hook)
	{
		ret = xpon_hgu_down_multicast_access_control_hook(skb);
		if(-1 == ret)
		{
			wan_multicast_drop(skb);
			return 1;
		}
	}
	#endif
	
	if (vlan_eth_hdr(skb)->h_vlan_proto == htons(ETH_P_8021Q))
		vid = vlan_eth_hdr(skb)->h_vlan_TCI & 0xfff;
	
	list_for_each_entry(virtualdev_list_node, &origdev_list_node->virtualdev_list, list)
	{
		if (virtualdev_list_node == NULL)
		{
			dev_kfree_skb(skb);
			return 1;
		}

		vdev = virtualdev_list_node->virtual_dev;
		if (vdev==NULL)
		{
			dev_kfree_skb(skb);
			return 1;
		}

		dev_info = MULTI_WAN_DEV_INFO(vdev);
		
		mvid = wan_get_vid(vdev->name);
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
		mvid1 = wan_get_mvid1(vdev->name);
		if ((mvid == vid) || (mvid1 == vid))
#else/*TCSUPPORT_COMPILE*/
		if ((mvid == vid)||TCSUPPORT_XPON_IGMP_CHT_VAL||match_multi_mvlan_list(vdev,vid)||(mvid == -1))
#endif/*TCSUPPORT_COMPILE*/
		{
			if (wan_should_delivery(skb,dev_info)==0)
				continue;
			
			dev_info->stats.rx_packets++;
			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 

			skb2 = skb_copy(skb, GFP_ATOMIC);
			if(skb2 == NULL) 
			{
				dev_kfree_skb(skb);
				return 1;
			}

			skb2->dev = dev_info->virtualdev_list_node->virtual_dev; 

                if(vid >= 0)
			{
				skb2->protocol =  vlan_eth_hdr(skb2)->h_vlan_encapsulated_proto;
				skb_pull(skb2, VLAN_HLEN);
				memmove(skb2->data - ETH_HLEN,skb2->data - VLAN_ETH_HLEN, 12);
				skb2->mac_header += VLAN_HLEN;
			}
			
			if (wan_mvlan_enable&0x4)
				dump_skb(skb2,skb2->len);
			
			flag = 1;
			if(TCSUPPORT_VLAN_TAG_VAL){
				skb2->vlan_tag_flag |= VLAN_TAG_FROM_INDEV;
			}
			mulif_set_wan_ppe_acnt_id(skb2, DOWNSTREAM_ONLY);
			netif_receive_skb(skb2);
		}
	}
	if (flag==1)	
		dev_kfree_skb(skb);
	else
		wan_multicast_drop(skb);
	
	return 1;
}


int wan_multicast_outgoing(struct sk_buff** pskb,struct net_device *dev)
{
	int mvid;
	struct vlan_ethhdr * veth_hdr;
	struct sk_buff *skb = NULL;
	skb = *pskb;

	if (wan_mvlan_enable&0x4)
	{
		printk("\n======>wan_multicast_outgoing()");
		dump_skb(skb,skb->len);
	}

	if((wan_mvlan_enable & 0x2)==0)
		return 0;
	/* Outgoing will not check Ipv6 Ra packet, so set parameter to NULL */
	if (wan_is_multicast_pkt(skb->data, NULL)==0)
		return 0;

	mvid = wan_get_vid(dev->name);
	veth_hdr = (struct vlan_ethhdr *)(skb->data);
	if (veth_hdr->h_vlan_proto == htons(ETH_P_8021Q))
	{
		skb = skb_unshare(skb, GFP_ATOMIC);
		if (!skb)
		{
			return -ENOMEM;
		}
		*pskb = skb;
		veth_hdr = (struct vlan_ethhdr *)(skb->data);
		
		skb->protocol =  veth_hdr->h_vlan_encapsulated_proto;
		memmove(skb->data + VLAN_HLEN, skb->data, 12);
		skb_pull(skb, VLAN_HLEN);
#if 0	
		if (mvid >0)
		{
			vlan_eth_hdr(skb)->h_vlan_TCI = mvid;
		}
		else
		{
			skb->protocol =  vlan_eth_hdr(skb)->h_vlan_encapsulated_proto;
			memmove(skb->data + VLAN_HLEN, skb->data, 12);
			skb_pull(skb, VLAN_HLEN);
		}
	}
	else
	{
		if (mvid >0)
		{
			__vlan_put_tag(skb,mvid);
		}
#endif	
	}
	
	if (wan_mvlan_enable&0x4)
		dump_skb(skb,skb->len);
	return 0;
}

static int wan_mvlan_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	int len = 0;
	int i;
	int cnt = sizeof(wan_mvlan) /sizeof(WanMVlan_t);

	mulif_dump_all_dev();
	
	len = sprintf(buf,"enable = %d\n",wan_mvlan_enable);

	for(i=0;i<cnt;i++)
	{
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
		len += sprintf(buf+len,"name = %s  mvid = %d  mvid1 = %d \n",wan_mvlan[i].devname,wan_mvlan[i].mvid,wan_mvlan[i].mvid1);
#else/*TCSUPPORT_COMPILE*/
		len += sprintf(buf+len,"name = %s  mvid = %d \n",wan_mvlan[i].devname,wan_mvlan[i].mvid);
#endif/*TCSUPPORT_COMPILE*/
	}

	if (len < off + count)
		*eof = 1;

	len -= off;
	*start = buf + off;
	if(len > count)
		len = count;
	 if(len < 0)
	 	len = 0;

	 return len;
}


static int wan_mvlan_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char buff[32],cmd[8];
	int len,flag ;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
	int mvlan1;
#endif/*TCSUPPORT_COMPILE*/

	if (count >= (sizeof(buff) - 1))
		len = sizeof(buff) - 1;
	else
		len = count;

	memset(buff,0,32);
	memset(cmd,0,8);
	if (copy_from_user(buff, buffer, len))
		return -EFAULT;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
	sscanf(buff,"%8s %d %d",cmd,&flag, &mvlan1);
	if((mvlan1 < -1) || (mvlan1 > 4095))
		mvlan1 = -1;
#else/*TCSUPPORT_COMPILE*/
	sscanf(buff,"%8s %d",cmd,&flag);
#endif/*TCSUPPORT_COMPILE*/
	if(memcmp(cmd,"enable",6)==0)
		wan_mvlan_enable = flag;
	else
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CG_DS_ADD_TAG)
		wan_set_vid(cmd,flag,mvlan1);
#else/*TCSUPPORT_COMPILE*/
		wan_set_vid(cmd,flag);
#endif/*TCSUPPORT_COMPILE*/
	return len;
}

/////////////////////////////////////////////////////////////////////////////

static DEFINE_SPINLOCK(multi_mvlan_lock);

static int add_multi_mvlan_list(struct net_device* vdev,unsigned short ext_mvlan)
{
	#if KERNEL_2_6_36
	struct multi_mvlan_s* entry = NULL;
	struct multi_mvlan_s* tmp= NULL;
	struct multi_mvlan_s* mvlan = NULL;
	
	spin_lock(&multi_mvlan_lock);
	list_for_each_entry_safe(entry,tmp,&vdev->ext_mvlan_list,list)
	{
		if(entry->ext_mvlan == ext_mvlan)
		{
			spin_unlock(&multi_mvlan_lock);
			return 0;
		}
	}
	mvlan = (struct multi_mvlan_s*) kzalloc(sizeof(struct multi_mvlan_s), GFP_KERNEL);
	if(mvlan)
	{
		mvlan->ext_mvlan = ext_mvlan;
		list_add(&mvlan->list,&vdev->ext_mvlan_list);
	}
	spin_unlock(&multi_mvlan_lock);
	#endif

	return 0;
}

static int del_multi_mvlan_list(struct net_device* vdev,unsigned short ext_mvlan)
{
	#if KERNEL_2_6_36
	struct multi_mvlan_s* entry = NULL;
	struct multi_mvlan_s* tmp= NULL;
	
	spin_lock(&multi_mvlan_lock);
	list_for_each_entry_safe(entry,tmp,&vdev->ext_mvlan_list,list)
	{
		if(entry->ext_mvlan == ext_mvlan)
		{
			list_del(&entry->list);
			kfree(entry);
			entry = NULL;
			break;
		}
	}

	spin_unlock(&multi_mvlan_lock);
	#endif

	return 0;
}

static int clear_multi_mvlan_list(struct net_device* vdev)
{
	#if KERNEL_2_6_36
	struct multi_mvlan_s* entry = NULL;
	struct multi_mvlan_s* tmp= NULL;
	
	spin_lock(&multi_mvlan_lock);
	list_for_each_entry_safe(entry,tmp,&vdev->ext_mvlan_list,list)
	{
		list_del(&entry->list);
		kfree(entry);
		entry = NULL;
	}

	spin_unlock(&multi_mvlan_lock);
	#endif

	return 0;
}


static int show_multi_mvlan_list(struct net_device* vdev)
{
	#if KERNEL_2_6_36
	struct multi_mvlan_s* entry = NULL;
	struct multi_mvlan_s* tmp= NULL;
	int i = 0;
	int cnt = sizeof(wan_mvlan) / sizeof(WanMVlan_t);

	if(TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL)
		printk("mulitcast_tci:%d\n",vdev->multicast_tci);
	else
	{
		for(i=0;i<cnt;i++)
		{
			if (!strcmp(vdev->name,wan_mvlan[i].devname))
				printk("mvid:%d\n",wan_mvlan[i].mvid);
		}
	}
	printk("ext_vlan list:");
	spin_lock(&multi_mvlan_lock);
	list_for_each_entry_safe(entry,tmp,&vdev->ext_mvlan_list,list)
	{
		printk("%d ",entry->ext_mvlan);
	}
	printk("\n");
	spin_unlock(&multi_mvlan_lock);
	#endif

	return 0;
}

static int match_multi_mvlan_list(struct net_device* vdev,unsigned short vid)
{
	#if KERNEL_2_6_36
	struct multi_mvlan_s* entry = NULL;
	struct multi_mvlan_s* tmp= NULL;
	
	spin_lock(&multi_mvlan_lock);
	list_for_each_entry_safe(entry,tmp,&vdev->ext_mvlan_list,list)
	{
		if(entry->ext_mvlan == vid)
		{
			spin_unlock(&multi_mvlan_lock);
			return 1;
		}
	}

	spin_unlock(&multi_mvlan_lock);
	#endif

	return 0;
}


static int addmvlan_mulif_device(const char* vifname, unsigned short ext_mvlan)
{
	struct net_device *vdev = NULL;
  	struct net_device *origdev = NULL;
  	struct multi_wan_dev_info *dev_info;
#if KERNEL_2_6_36
	vdev = dev_get_by_name(&init_net,vifname);
#else
  	vdev = dev_get_by_name(vifname);
#endif
 	if(vdev != NULL) {
		dev_put(vdev);
		add_multi_mvlan_list(vdev,ext_mvlan);
 	}

  	return 0;
}

static int delmvlan_mulif_device(const char* vifname, unsigned short ext_mvlan)
{
	struct net_device *vdev = NULL;
  	struct net_device *origdev = NULL;
  	struct multi_wan_dev_info *dev_info;
#if KERNEL_2_6_36
	vdev = dev_get_by_name(&init_net,vifname);
#else
  	vdev = dev_get_by_name(vifname);
#endif
 	if(vdev != NULL) {
		dev_put(vdev);
		del_multi_mvlan_list(vdev,ext_mvlan);
 	}
  	return 0;
}

static int showmvlan_mulif_device(const char* vifname)
{
	struct net_device *vdev = NULL;
  	struct net_device *origdev = NULL;
  	struct multi_wan_dev_info *dev_info;
#if KERNEL_2_6_36
	vdev = dev_get_by_name(&init_net,vifname);
#else
  	vdev = dev_get_by_name(vifname);
#endif
 	if(vdev != NULL){ 
		show_multi_mvlan_list(vdev);
		dev_put(vdev);
	}

  	return 0;
}

static int set_mulif_device(const char* vifname, int mode, int value)
{
	struct net_device *vdev = NULL;
	struct net_device *real_dev = NULL;
	struct multi_wan_dev_info *dev_info;
#if KERNEL_2_6_36
	vdev = dev_get_by_name(&init_net,vifname);
#else
	vdev = dev_get_by_name(vifname);
#endif
    
	if(vdev == NULL){ 
		return 0;
	}
	dev_info = MULTI_WAN_DEV_INFO(vdev);

	switch(mode){
		case MULTICAST_PPP_to_IP_CMD:
			if(value)
				dev_info->mode |= MC_PPP_TO_IP;
			else
				dev_info->mode &= ~MC_PPP_TO_IP;
	}
	dev_put(vdev);
	return 0;
}

#if defined(TCSUPPORT_CT_VLAN_TAG) || defined(TCSUPPORT_OPENWRT_MULTI_WAN)

/*******************************************************************************************
**function name
	 match_vtag
**description:
	macth vlan mode and vlan tag with pkt vlan tag in downstream
**return 
	0:	success match
	-1:	fail
**parameter:
	skb: the packet information
	vdev: virtual net device
********************************************************************************************/
static inline int match_vtag(struct sk_buff *skb, struct net_device *vdev){
	int ret = VTAG_FAIL;
	struct vlan_hdr *vhdr = NULL;
	u16 pkt_tci = 0;
	u16 vdev_tci = 0;

	if(skb == NULL || vdev == NULL){
		goto end;
	}
	
	switch(vdev->vlan_mode){
		case UNTAG_VTAG_MODE:
			if(skb->protocol != htons(ETH_P_8021Q)){//untag pkt, match
				ret = VTAG_SUCCESS;
			}
			break;
		case TRANSPARENT_VTAG_MODE:
			ret = VTAG_SUCCESS;//match
			break;
		case TAG_VTAG_MODE:
		case TAG_UNPIT_VTAG_MODE:
			if(skb->protocol != htons(ETH_P_8021Q)){//untag pkt, not match
				break;
			}
			
			#ifdef  TCSUPPORT_FWC_VLAN_TAG
				if(vdev->vlan_map & (1<<VLAN_FIREST_OFFSET)) {
					vhdr = (struct vlan_hdr *)(skb->data);
					pkt_tci = 0;
					vdev_tci = 0;
					pkt_tci = (ntohs(vhdr->h_vlan_TCI) & VTAG_TCI_MASK);
					vdev_tci = (vdev->tci & VTAG_TCI_MASK);			
					if(VTAG_GET_VID(pkt_tci) == VTAG_GET_VID(vdev_tci))
					{// match
						ret = VTAG_SUCCESS;
					}else {
						break;
					}
				}
				if(vdev->vlan_map & (1<<VLAN_SECOND_OFFSET)) {

					ret = VTAG_FAIL;
					if(vhdr->h_vlan_encapsulated_proto != htons(ETH_P_8021Q))
						break;
					vhdr = (struct vlan_hdr *)(skb->data + sizeof(struct vlan_hdr));
					pkt_tci = (ntohs(vhdr->h_vlan_TCI) &VTAG_TCI_MASK);
					vdev_tci = (vdev->tci & VTAG_TCI_MASK);	
					
					if(VTAG_GET_VID(pkt_tci) == VTAG_GET_VID(vdev_tci))
					{// match
						ret = VTAG_SUCCESS;
							
					}else {
						break;
					}
				}
			#else
				vhdr = (struct vlan_hdr *)(skb->data);
				pkt_tci = (ntohs(vhdr->h_vlan_TCI) & VTAG_TCI_MASK);
				vdev_tci = (vdev->tci & VTAG_TCI_MASK);			
				if(VTAG_GET_VID(pkt_tci) == VTAG_GET_VID(vdev_tci))
				{// match
					ret = VTAG_SUCCESS;
				}
			
			#endif
			break;
		default:
			break;
	}
	
	
end:
		
	if(skb!=NULL && vdev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"->mode=%d,tci=0x%02x, multci=0x%02x, skb->protocol=0x%02x,pkt_tci=0x%02x,vdev_tci=0x%02x,ret=%02x \n",vdev->vlan_mode,vdev->tci,vdev->multicast_tci, skb->protocol,pkt_tci,vdev_tci,ret);
	}

	
	return ret;
}

/*******************************************************************************************
**function name
	 match_multicast_vtag
**description:
	macth multicast vlan in vlan tag packet in downstream
**return 
	0:	success match
	-1:	fail
**parameter:
	skb: the packet information
	vdev: virtual net device
********************************************************************************************/
static inline int match_multicast_vtag(struct sk_buff *skb, struct net_device *vdev){
	int ret = VTAG_FAIL;
	struct vlan_hdr *vhdr = NULL;
	u16 pkt_vid = 0;
	u16 vdev_multicast_vid = 0;

	if(skb == NULL || vdev == NULL){
		goto end;
	}

	if(skb->protocol != htons(ETH_P_8021Q)){//untag pkt
		goto end;
	}
			
	vhdr = (struct vlan_hdr *)(skb->data);
	pkt_vid = VTAG_GET_VID(ntohs(vhdr->h_vlan_TCI));

	if(vdev->multicast_tci == VTAG_DISABLE_MULTICAST_VLAN){//don't support multicast vlan in this virtural device
		if(TCSUPPORT_PON_ROSTELECOM_VAL)
			ret = VTAG_SUCCESS;
		goto end;
	}	
	vdev_multicast_vid = VTAG_GET_VID(vdev->multicast_tci);
	if(pkt_vid == vdev_multicast_vid){ //match
		ret = VTAG_SUCCESS;
	}
	else if(match_multi_mvlan_list(vdev,pkt_vid))
		ret = VTAG_SUCCESS;
	
end:
		
	if(skb!=NULL && vdev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"->mode=%d,tci=0x%02x, multci=0x%02x, skb->protocol=0x%02x,pkt_vid=0x%02x,ret=%02x \n",vdev->vlan_mode,vdev->tci,vdev->multicast_tci, skb->protocol,pkt_vid,ret);
	}
	return ret;
}

static inline int check_vtag(struct net_device *vdev){
	int ret = 0;
	
	switch(vdev->vlan_mode){
		case UNTAG_VTAG_MODE:
			ret = 1;
			break;
		case TRANSPARENT_VTAG_MODE:
			ret = 2;
			break;
		case TAG_VTAG_MODE:
		case TAG_UNPIT_VTAG_MODE:
			ret = 3;
			break;
		default:
			break;
	}

	return ret;
}

/*******************************************************************************************
**function name
	 igmp_query_src_abnormal_handle
**description:
	HW OLT send igmp query with src ip 192.168.1.1, ONU would not send igmp report. 
**parameter:
	skb: the packet information
********************************************************************************************/
static int igmp_query_src_abnormal_handle(struct sk_buff *skb)
{
	struct iphdr *iph = NULL;
	struct igmphdr *igmph = NULL;
	
	if (unlikely(!skb))
		return 0;

	if ( htons(ETH_P_IP) == skb->protocol )
		iph = (struct iphdr *)(skb_mac_header(skb) + ETH_HLEN);
	else if( ( htons(ETH_P_8021Q) == skb->protocol )
			&& ( htons(ETH_P_IP) == __vlan_proto(skb) ) )
		iph = (struct iphdr *)(skb_mac_header(skb) + VLAN_ETH_HLEN);
	else
		return 0;

	if (!iph || (IPPROTO_IGMP != iph->protocol))
		return 0;

	igmph = (unsigned char*)iph + iph->ihl*4;
	if(igmph->type != IGMP_HOST_MEMBERSHIP_QUERY)
		return 0;

	if(iph->saddr != htonl(0xc0a80101))
		return 0;

	iph->saddr = htonl(0x0101c0a8);
	ip_send_check(iph);

	return 1;
}

void change_to_ppp_dev(struct sk_buff* skb2, struct net_device *vdev, struct multi_wan_dev_info *dev_info)
{
    int idx = 0;
    char name[6];
    struct net_device *vdev_tmp = NULL;
    if (dev_info->proto == MULIF_PPPOE_PROTO || dev_info->proto == MULIF_PPPOE_BI_PROTO)
    {
        if ((idx = wan_get_index(vdev->name)) < 0)
            return 0;
        sprintf(name,"ppp%d",idx);

#if KERNEL_2_6_36
        vdev_tmp = dev_get_by_name(&init_net,name);
#else
        vdev_tmp = dev_get_by_name(name);
#endif
        if (vdev_tmp && (skb2->protocol == htons(ETH_P_IP))){
            skb2->dev = vdev_tmp; 
            VTAG_PRINT(VTAG_DBG_TRACE,"change to pppe1 dev %s %x!", vdev_tmp->name, skb2->protocol);
        }else{
            VTAG_PRINT(VTAG_DBG_TRACE,"skb->protocol: %x", skb2->protocol);
        }

		if(vdev_tmp)
			dev_put(vdev_tmp);
    }
    return ;
}
/*******************************************************************************************
**function name
	vtag_wan_ifc_select
**description:
	according to the vlan tag, select wan vitural interface
 **retrun 
 	0: success
 	-1: failure
**parameter:
	skb: packet information
	grp: smux group 
********************************************************************************************/
int vtag_wan_ifc_select(struct sk_buff* skb, struct mulif_origdev *origdev_list_node)
{
	int ret = VTAG_FAIL;
	int dscp_rt = VTAG_FAIL;
  	unsigned char *dstAddr = NULL;
  	struct sk_buff *skb2 = NULL;
  	struct multi_wan_dev_info *dev_info = NULL;
 	struct list_head *lh = NULL;
  	struct net_device *vdev = NULL;
	struct net_device *vdev_tmp = NULL;
  	int isTxDone = VTAG_SELE_IFC_FAIL;
	int tag_flag[4] = {0,0,0,0};
	int temp_value = 0;
	int idx = 0;
	char name[6];
	struct mulif_virtualdev *virtualdev_list_node = NULL;
	struct multi_wan_dscp_dw_args* muldscp_list_node = NULL;
	int tmp_ret = 0;
		
	if(skb == NULL || origdev_list_node == NULL){
		goto end;
	}	

	/*Get skb destination MAC*/
  	dstAddr = eth_hdr(skb)->h_dest;
	if(dstAddr == NULL){  		
		VTAG_PRINT(VTAG_DBG_ERROR,"dstAddr == NULL\n");
		goto end;
	}

	if (dstAddr[0] & 1) {/*handle multicast and broadcast packet*/
		/*match multicast vid for vlan multicat packet*/
		if((skb->protocol == htons(ETH_P_8021Q))
			&& ((dstAddr[0] & dstAddr[1] & dstAddr[2] & dstAddr[3] & dstAddr[4] & dstAddr[5]) != 0xff)){

			list_for_each(lh, &origdev_list_node->virtualdev_list)
			{
				virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);

				vdev = virtualdev_list_node->virtual_dev;
				if (vdev==NULL){
					goto end;
				}
				dev_info = MULTI_WAN_DEV_INFO(vdev);

				if(match_multicast_vtag(skb, vdev) == VTAG_SUCCESS){
					tmp_ret = wan_should_delivery(skb,dev_info);
					if((tmp_ret == 0) || (tmp_ret == 2))
						continue;
						
					dev_info->stats.rx_packets++;
					dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
					skb2 = skb_copy(skb, GFP_ATOMIC);
					if(skb2 == NULL){
						VTAG_PRINT(VTAG_DBG_ERROR,"\r\n------mulif_skb_recv:skb_copy fail!-------");
						goto end;
					} 
					skb2->dev = vdev;
					skb2->pkt_type = PACKET_HOST;
					/*handle vlan tag in downstream pakcet*/
					if(handle_vtag_rx_ct_hook){
						if(handle_vtag_rx_ct_hook(&skb2) != VTAG_SUCCESS){
							VTAG_PRINT(VTAG_DBG_ERROR,"handle_vtag(multicast) fail in downstream!");
							if(skb2 != NULL){
								dev_kfree_skb(skb2);
								vtag_free_rx_cnt++;
								skb2 = NULL;
							}
							continue;
						}
					}
					if(igmp_pppoe_to_ipoe_enable) {
						if(dev_info->mode & MC_PPP_TO_IP){
							/* downstream mc packet, forward to ppp dev for mclist*/
							change_to_ppp_dev(skb2, vdev, dev_info);
						}
					}
                                
                    			mulif_set_wan_ppe_acnt_id(skb2, DOWNSTREAM_ONLY);
					if(TCSUPPORT_CT_JOYME4_VAL)
						igmp_query_src_abnormal_handle(skb2);
					
					netif_receive_skb(skb2);
					VTAG_PRINT(VTAG_DBG_TRACE,"->multicast downstream ok!, dev=%s, mode=0x%02x, tci=0x%02x, multci=0x%02x \n", 
						vdev->name, vdev->vlan_mode,vdev->tci, vdev->multicast_tci);			
					isTxDone = VTAG_SELE_IFC_SUCCESS;
				}
    		}
		}

		/*find match multicast virtual device*/
		if(isTxDone == VTAG_SELE_IFC_SUCCESS){
			ret = VTAG_SUCCESS;
			VTAG_PRINT(VTAG_DBG_TRACE,"->mulicast and find free skb! \n");
			dev_kfree_skb(skb);
			skb = NULL;
			goto end;
		}

		/*handle broadcat and others multicat packet*/
		list_for_each(lh, &origdev_list_node->virtualdev_list)
   		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);
            
			vdev = virtualdev_list_node->virtual_dev;
			if (vdev==NULL){
				goto end;
			}
			dev_info = MULTI_WAN_DEV_INFO(vdev);
		
			if (((dev_info->proto == MULIF_PPPOE_PROTO) || (dev_info->proto == MULIF_PPPOE_BI_PROTO)) &&
			#ifdef	CONFIG_TP_IPV6_PASSTHROUGH
	 			(!(vdev->priv_flags & IFF_IP6_BR)) &&
			#endif	/*CONFIG_TP_IPV6_PASSTHROUGH*/
				(skb->protocol != htons(ETH_P_8021Q)) &&
	 			(skb->protocol != htons(ETH_P_PPP_DISC)) && 
	 			(skb->protocol != htons(ETH_P_PPP_SES))){
   				VTAG_PRINT(VTAG_DBG_TRACE,"==>mulif info, non-PPPOE packet dropped(fail) on RX dev %s\n",vdev->name);
			}else{
				if ( TCSUPPORT_CT_PON_SC_VAL
					/* ignore broadcat */
					&& ( 0xff != (dstAddr[0] & dstAddr[1] & dstAddr[2]
						& dstAddr[3] & dstAddr[4] & dstAddr[5]) )
					/* must be OTHER wan */
					&& (vdev->bind_type & IF_TYPE_OTHER)
					/* bind LAN2 */
					&& ( portbind_check_bind_lan2
						&& portbind_check_bind_lan2(vdev->bind_index))
					&& 1 == __is_ip_udp(skb) )
				{
					continue;
				}

				if(match_vtag(skb, vdev) == VTAG_SUCCESS){

					if( ((dstAddr[0] & dstAddr[1] & dstAddr[2] & dstAddr[3] & dstAddr[4] & dstAddr[5]) != 0xff)
						&&(wan_should_delivery(skb,dev_info)==0))
						continue;

					dev_info->stats.rx_packets++;
        			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
        			skb2 = skb_copy(skb, GFP_ATOMIC);
					if(skb2 == NULL){
						VTAG_PRINT(VTAG_DBG_ERROR,"\r\n------mulif_skb_recv:skb_copy fail!-------");
						goto end;
					} 
        			skb2->dev = vdev;
        			skb2->pkt_type = PACKET_HOST;
					/*handle vlan tag in downstream pakcet*/
					if(handle_vtag_rx_ct_hook){
						if(handle_vtag_rx_ct_hook(&skb2) != VTAG_SUCCESS){
							VTAG_PRINT(VTAG_DBG_ERROR,"handle_vtag(broadcast) fail in downstream!");
							if(skb2 != NULL){
								dev_kfree_skb(skb2);
								vtag_free_rx_cnt++;
								skb2 = NULL;
							}
							continue;
						}
					}
        			if(igmp_pppoe_to_ipoe_enable) {
        				if(dev_info->mode & MC_PPP_TO_IP){
        					change_to_ppp_dev(skb2, vdev, dev_info);
        				}
        			}
                    mulif_set_wan_ppe_acnt_id(skb2, DOWNSTREAM_ONLY);
					
					if(TCSUPPORT_CT_JOYME4_VAL)
						igmp_query_src_abnormal_handle(skb2);
					
        			netif_receive_skb(skb2);
					VTAG_PRINT(VTAG_DBG_TRACE,"->broadcast downstream ok!, dev=%s, mode=0x%02x, tci=0x%02x, multci=0x%02x \n", 
						vdev->name, vdev->vlan_mode,vdev->tci, vdev->multicast_tci);
					isTxDone = VTAG_SELE_IFC_SUCCESS;
                    if(TCSUPPORT_CF_UNIFIED_PLATFORM_VAL && vdev->promiscuity){
                        skb->mark |= DOWNSTREAM_SIMULATION_MASK;
                        VTAG_PRINT(VTAG_DBG_TRACE,"->broadcast downstream selected by bridge interface.\n");
                    }
				}
			}
		}

        if(TCSUPPORT_CF_UNIFIED_PLATFORM_VAL){
            if(skb != NULL && skb->protocol != htons(ETH_P_8021Q) && !(skb->mark & DOWNSTREAM_SIMULATION_MASK)
                && ((dstAddr[0] & dstAddr[1] & dstAddr[2] & dstAddr[3] & dstAddr[4] & dstAddr[5]) == 0xff)){                
                skb2 = skb_copy(skb, GFP_ATOMIC);
                if(skb2 == NULL){
					VTAG_PRINT(VTAG_DBG_ERROR,"\r\n------mulif_skb_recv:skb_copy fail!-------");
					goto end;
                } 
        #if KERNEL_2_6_36
    	        skb2->mark |= DOWNSTREAM_SIMULATION_MASK;
        #endif
    	        netif_rx(skb2);
                VTAG_PRINT(VTAG_DBG_TRACE,"->%s receive copied untag broadcast downstream\n", skb2->dev->name);
            }
        }

		/*find match broadcat and others multicat packet*/
		if(isTxDone == VTAG_SELE_IFC_SUCCESS){
			ret = VTAG_SUCCESS;
		}else{
			vtag_free_rx_cnt++;
		}
		
		if(skb != NULL){
			if((VTAG_SUCCESS != ret)&&((dstAddr[0] & dstAddr[1] & dstAddr[2] & dstAddr[3] & dstAddr[4] & dstAddr[5]) != 0xff))
			{
				VTAG_PRINT(VTAG_DBG_TRACE,"->multicast downstream drop rule! \n");
				wan_multicast_drop(skb);
			}
			else
			{
				VTAG_PRINT(VTAG_DBG_TRACE,"->broadcast downstream kfree skb! \n");
				dev_kfree_skb(skb);
			}
			skb = NULL;
		}
		goto end;
	}else {
		/* Routing traffic, just send the packet to the interface who's MAC and vlan tag is the same as the packe t's dst MAC and vlan tag */
		list_for_each(lh, &origdev_list_node->virtualdev_list)
		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);

			vdev = virtualdev_list_node->virtual_dev;
			if (vdev==NULL){
				goto end;
			}
			dev_info = MULTI_WAN_DEV_INFO(vdev);

			if (memcmp(dstAddr, vdev->dev_addr, ETH_ALEN) == 0){
				if(TCSUPPORT_MULIF_WAN_SAME_MAC_VAL){
					if(match_vtag(skb, vdev) != VTAG_SUCCESS)
						continue;
				}
				#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_FWC_ENV)
                FHWC_MARK_ROUTE_PKT(skb);
				#endif/*TCSUPPORT_COMPILE*/
                #if KERNEL_2_6_36
                skb->bridge_flag = ROUTE_INTERFACE;
                #endif
    			if(((dev_info->proto == MULIF_PPPOE_PROTO) || (dev_info->proto == MULIF_PPPOE_BI_PROTO)) &&
       				(skb->protocol != htons(ETH_P_PPP_DISC)) && 
					(skb->protocol != htons(ETH_P_8021Q)) &&
       				(skb->protocol != htons(ETH_P_PPP_SES))) {
       				
       				tc_debug("==>mulif info, non-PPPOE packet dropped on RX dev %s\n", vdev->name);
       				goto end;
    			}else{
    				/* drop it when multicast vlan id unmatch. */
    				if ( TCSUPPORT_CT_PON_SC_VAL
						/* must be OTHER wan */
						&& (vdev->bind_type & IF_TYPE_OTHER)
						/* bind LAN2 */
						&& ( portbind_check_bind_lan2
							&& portbind_check_bind_lan2(vdev->bind_index))
						&& -1 == check_ppp_udp_multicast(skb, vdev) )
    				{
						goto end;
    				}

        			if((match_vtag(skb, vdev) == VTAG_SUCCESS)||((skb->protocol != htons(ETH_P_8021Q))&&tag_router_wan_allow_untag)){
						list_for_each_entry(muldscp_list_node, &mulif_dev_dscp_list_node, list)
						{
							if(strncmp(muldscp_list_node->ifname, vdev->name, IFNAMSIZ-1))
								continue;

							if(muldscp_list_node->flag)
							{
								dscp_rt = setSkbDscp(&skb, muldscp_list_node->dscp_info);
								if((-ENOMEM) == dscp_rt )
								{
									VTAG_PRINT(VTAG_DBG_ERROR,"->NO memmory,set dscp failed dscp_info is %d \n",muldscp_list_node->dscp_info);
									goto end;
								}
								else if(dscp_rt != VTAG_SUCCESS)
								{
									VTAG_PRINT(VTAG_DBG_ERROR,"->Unconfirm pkt,set dscp failed dscp_info is %d \n",muldscp_list_node->dscp_info);
								}
								break;
							}
						}
          				skb->dev = vdev;
          				dev_info->stats.rx_packets++;
          				dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
		  				skb->pkt_type = PACKET_HOST;
						/*handle vlan tag in downstream pakcet*/
						if(handle_vtag_rx_ct_hook&&(skb->protocol == htons(ETH_P_8021Q))){
							if(handle_vtag_rx_ct_hook(&skb) != VTAG_SUCCESS){
								VTAG_PRINT(VTAG_DBG_ERROR,"handle_vtag(route) fail in downstream!");
								goto end;
							}
						}
                        mulif_set_wan_ppe_acnt_id(skb, DOWNSTREAM_ONLY);
          				netif_receive_skb(skb);
						VTAG_PRINT(VTAG_DBG_TRACE,"->route downstream ok!, dev=%s, mode=0x%02x, tci=0x%02x, multci=0x%02x \n", 
						vdev->name, vdev->vlan_mode,vdev->tci, vdev->multicast_tci);
						
						isTxDone = VTAG_SELE_IFC_SUCCESS;
						break;
        			}
    			}
    			
  			}
#ifdef	CONFIG_TP_IPV6_PASSTHROUGH
			else
			{
				/* add by banxiaochun 2023-03-08, for ipv6 passthrough.*/
				if (skb && (htons(ETH_P_IPV6) == skb->protocol || htons(ETH_P_8021Q) == skb->protocol) &&
					vdev && (vdev->priv_flags & IFF_IP6_BR))
				{
					skb->dev = vdev;
					dev_info->stats.rx_packets++;
          			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN;
					if (handle_vtag_rx_ct_hook && (htons(ETH_P_8021Q) == skb->protocol))
					{
						if (handle_vtag_rx_ct_hook(&skb) != VTAG_SUCCESS)
						{
							VTAG_PRINT(VTAG_DBG_ERROR, "handle_vtag(route) fail in downstream!");
							goto end;
						}
					}
					netif_receive_skb(skb);
					isTxDone = VTAG_SELE_IFC_SUCCESS;
					break;
				}
			}
#endif	/*CONFIG_TP_IPV6_PASSTHROUGH*/
    	}
		if(isTxDone == VTAG_SELE_IFC_SUCCESS){
			ret = VTAG_SUCCESS;
			goto end;
		}
		
	}

	memset(tag_flag,0,sizeof(tag_flag));
	/* Bridging traffic */
		list_for_each(lh, &origdev_list_node->virtualdev_list)
		{
			virtualdev_list_node = list_entry(lh, struct mulif_virtualdev, list);

			vdev = virtualdev_list_node->virtual_dev;
			if (vdev==NULL){
				goto end;
			}
			dev_info = MULTI_WAN_DEV_INFO(vdev);

		if (vdev->promiscuity){
			/* drop it when multicast vlan id unmatch. */
			if ( TCSUPPORT_CT_PON_SC_VAL
				/* must be OTHER wan */
				&& (vdev->bind_type & IF_TYPE_OTHER)
				/* bind LAN2 */
				&& ( portbind_check_bind_lan2
					&& portbind_check_bind_lan2(vdev->bind_index))
				&& -1 == check_ppp_udp_multicast(skb, vdev) )
			{
				continue;
			}

			if(match_vtag(skb, vdev) == VTAG_SUCCESS){

				if(drop_ipcp_ipv6cp(skb, vdev) == -1)
				{
					VTAG_PRINT(VTAG_DBG_WARNING,"vtag_wan_ifc_select: Dev name is %s ipversion is %02x, not receive packet\r\n", vdev->name, vdev->ipversion);
					continue;
				}
				
				temp_value = check_vtag(vdev);
				if(temp_value && (tag_flag[temp_value] == temp_value))
				{
					continue;
				}
				else{
					tag_flag[temp_value] = temp_value;
				}
				dev_info->stats.rx_packets++;
    			dev_info->stats.rx_bytes += skb->len + ETH_HLEN + VLAN_HLEN; 
    			skb2 = skb_copy(skb, GFP_ATOMIC);
				if(skb2 == NULL){
					VTAG_PRINT(VTAG_DBG_ERROR,"\r\n------mulif_skb_recv:skb_copy fail!-------");
					goto end;
				} 
    			skb2->dev = vdev;
    			skb2->pkt_type = PACKET_HOST;
				/*handle vlan tag in downstream pakcet*/
				if(handle_vtag_rx_ct_hook){
					if(handle_vtag_rx_ct_hook(&skb2) != VTAG_SUCCESS){
						VTAG_PRINT(VTAG_DBG_ERROR,"handle_vtag(bridge) fail in downstream!");
						if(skb2 != NULL){
							VTAG_PRINT(VTAG_DBG_TRACE,"->bridge downstream  handle_vtag_rx_ct_hook fail! \n");
							dev_kfree_skb(skb2);
							vtag_free_rx_cnt++;
							skb2 = NULL;
						}
						continue;
					}
				}
                mulif_set_wan_ppe_acnt_id(skb2, DOWNSTREAM_ONLY);
    			netif_receive_skb(skb2);
				VTAG_PRINT(VTAG_DBG_TRACE,"->bridge downstream ok!, dev=%s, mode=0x%02x, tci=0x%02x, multci=0x%02x \n", 
						vdev->name, vdev->vlan_mode,vdev->tci, vdev->multicast_tci);
				
				isTxDone = VTAG_SELE_IFC_SUCCESS;				
			}
		}
	}

	if(isTxDone == VTAG_SELE_IFC_SUCCESS){
		ret = VTAG_SUCCESS;
	}else{
        if(TCSUPPORT_CF_UNIFIED_PLATFORM_VAL){
            if(skb!=NULL && skb->protocol != htons(ETH_P_8021Q)){
                skb2 = skb_copy(skb, GFP_ATOMIC);
				if(skb2 == NULL){
					VTAG_PRINT(VTAG_DBG_ERROR,"\r\n------mulif_skb_recv:skb_copy fail!-------");
					goto end;
				} 
        #if KERNEL_2_6_36
		        skb2->mark |= DOWNSTREAM_SIMULATION_MASK;
        #endif
		        netif_rx(skb2);
                VTAG_PRINT(VTAG_DBG_TRACE,"%s receive unknown untag unicast packet \n", skb2->dev->name);
            }
        }
		vtag_free_rx_cnt++;
	}
	if(skb != NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"->bridge downstream kfree skb! \n");
		dev_kfree_skb(skb);
		skb = NULL;	
	}
	
end:
	if(ret != VTAG_SUCCESS){
		if(skb != NULL){
			vtag_free_rx_cnt++;
			dev_kfree_skb(skb);
		}
	}
	return ret;
}

#endif

MODULE_DESCRIPTION("tcsmux");
MODULE_LICENSE("GPL");
