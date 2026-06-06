/***************************************************************
Copyright Statement:

This software/firmware and related documentation (EcoNet Software) 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to EcoNet (HK) Limited (EcoNet) and/or 
its licensors. Without the prior written permission of EcoNet and/or its licensors, 
any reproduction, modification, use or disclosure of EcoNet Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (ECONET SOFTWARE) RECEIVED FROM ECONET 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN AS IS 
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVERS SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES 
MADE TO RECEIVERS SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
ECONET'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE ECONET 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT ECONET'S SOLE OPTION, TO 
REVISE OR REPLACE THE ECONET SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO ECONET FOR SUCH 
ECONET SOFTWARE.
***************************************************************/

/************************************************************************
*                  I N C L U D E S
************************************************************************/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/spinlock.h>
#include <linux/interrupt.h>
#include <linux/signal.h>
#include <linux/sched.h>
#include <linux/mm.h>
#include <linux/init.h>
#include <linux/timer.h>
#include <linux/delay.h>
#include <linux/proc_fs.h>
#include <linux/dma-mapping.h>
#include <linux/version.h>
#include <asm/io.h>
#include <asm/tc3162/tc3162.h>
#include <asm/tc3162/ledcetrl.h>
#include <linux/skbuff.h>
#include <linux/mtd/rt_flash.h>
#include <linux/cdev.h>

#include "hsgmii_lan_proc.h"
#include "hsgmii_lan_api.h"
#include "hsgmii_lan_mac.h"
#include "hsgmii_lan_ic_dis.h"
#include "serdes.h"

#include <ecnt_hook/ecnt_hook_qdma.h>
#include <ecnt_hook/ecnt_hook_l2tp.h>
#include <ecnt_hook/ecnt_hook_fe.h>
#include <ecnt_hook/ecnt_hook_multicast.h>
#include <ecnt_hook/ecnt_hook_multicast_general.h>
#include <ecnt_hook/ecnt_hook_ether.h>


#include <ecnt_hook/ecnt_hook_hsgmii_mac_type.h>
#include <ecnt_hook/ecnt_hook_hsgmii_mac.h>


#include <linux/libcompileoption.h>
#include <ecnt_hook/ecnt_hook_bbf247.h>
#include <ecnt_hook/ecnt_hook_air_en8811.h>

#if defined(CONFIG_TP_IMAGE) && defined(TCSUPPORT_WAN_ETHER)
extern int (*wan_speed_test_hook)(struct sk_buff*);
#endif /* defined(CONFIG_TP_IMAGE) && defined(TCSUPPORT_WAN_ETHER) */

#if defined(CONFIG_TP_IMAGE)
int txratelimit = 0;
#endif /* defined(CONFIG_TP_IMAGE) */

/************************************************************************
*                  P U B L I C   D A T A
7581 gdm3 has pcie0/pcie1 hsgmii serdes
gdm4 has eth/usb hsgmii serdes

7523 gdm3 has pcie0/pcie1/usb serdes
************************************************************************/
#if 0
char *xsi_itf  = "xsi";
struct net_device *xsi_dev;
xsiAdapter_t *xsi_p = NULL;
uint8 xsiMacInitialized = 0; 
uint8 def_xsi_mac_addr[] = {0x00, 0xaa, 0xbb, 0x01, 0x23, 0x45};
static struct timer_list xsi_mac_timer;
int xsiPortState;
unsigned int LINK_MODE = PHY_XFI_10G_CONFIG;

#endif
uint HSGMII_BASE_REG[5] = {XSI_PCIE0_BASE,XSI_PCIE1_BASE, XSI_USB_BASE,XSI_AE_BASE,XSI_ETH_BASE};


#define HSGMII_LAN_PCIE0_CHNL	10
#define HSGMII_LAN_PCIE1_CHNL	11
#define HSGMII_LAN_USB_CHNL		12
#define HSGMII_LAN_ETH_CHNL		13

typedef struct{
    unsigned char fe_gdm;
    unsigned char channel;
#if SUPPORT_GDMA_CHANNEL_RETIRE
    unsigned char retire_channel;
#endif
}XSI_CONFIG_t;

XSI_CONFIG_t xsi_config_table[XSI_MAX_IDX] ={
    [XSI_PCIE0_IDX] = {   
        .fe_gdm = PCIE0_SEL_GDMA, 
        .channel = HSGMII_LAN_PCIE0_CHNL, 
#if SUPPORT_GDMA_CHANNEL_RETIRE
        .retire_channel = PCIE0_RETIRE_CHN,
#endif
    },
    [XSI_PCIE1_IDX] = {
        .fe_gdm = PCIE1_SEL_GDMA, 
        .channel = HSGMII_LAN_PCIE1_CHNL, 
#if SUPPORT_GDMA_CHANNEL_RETIRE
        .retire_channel = PCIE1_RETIRE_CHN,
#endif
    },
    [XSI_USB_IDX] = {
        .fe_gdm = USB_SEL_GDMA, 
        .channel = HSGMII_LAN_USB_CHNL, 
#if SUPPORT_GDMA_CHANNEL_RETIRE
        .retire_channel = USB_RETIRE_CHN,
#endif
    },
    [XSI_ETH_IDX] = {
        .fe_gdm = ETH_SEL_GDMA, 
        .channel = HSGMII_LAN_ETH_CHNL, 
#if SUPPORT_GDMA_CHANNEL_RETIRE
        .retire_channel = ETH_RETIRE_CHN,
#endif
    },
};
#define GET_XSI_GDM(serdes_id)            (xsi_config_table[(serdes_id)].fe_gdm)
#define GET_XSI_CHANNEL(serdes_id)        (xsi_config_table[(serdes_id)].channel)
#if SUPPORT_GDMA_CHANNEL_RETIRE
#define GET_XSI_RETIRE_CHANNEL(serdes_id) (xsi_config_table[(serdes_id)].retire_channel)
#endif

unsigned char xsi_linkstats[XSI_MAX_IDX] ={
    [XSI_PCIE0_IDX] = 0,
    [XSI_PCIE1_IDX] = 0,
    [XSI_USB_IDX] = 0,
    [XSI_ETH_IDX] = 0,
};
#define GET_XSI_LINKSTATS(serdes_id) xsi_linkstats[(serdes_id)]
#define SET_XSI_LINKSTATS(serdes_id,link_stats) (xsi_linkstats[(serdes_id)] = (link_stats))

#if SUPPORT_BOARD_SELECT
extern ECNT_EVENT_SYSTEM_SERDES_PHY_SEL_t get_serdes_phy_sel(uint8_t port_idx);
#else
extern ECNT_EVENT_SYSTEM_SERDES_PHY_SEL_t get_serdes_phy_sel(ECNT_EVENT_SYSTEM_SERDES_SEL_t port_idx);
#endif

char tmp_itf[4][8] = {0};
enum HGSMII_LAN_PORT
{
	HSGMII_USB = 0x09,
	HSGMII_PCIE0,
	HSGMII_PCIE1,
	HSGMII_ETH,
};

unchar xsi_fast_path_dir[FAST_PATH_DIR_MAX_NUM];

int ITF_NAME_LENGTH = 4;

int use_unify_eth_name = 1;

xsiAdapter_t *hsgmii_pcie0_p = NULL;
xsiAdapter_t *hsgmii_pcie1_p = NULL;
xsiAdapter_t *hsgmii_usb_p = NULL;
xsiAdapter_t *hsgmii_eth_p = NULL;


uint8 hsgmiiMacInitialized = 0; 

uint8 def_xsi_mac_addr[] = {0x00, 0xaa, 0xbb, 0x01, 0x23, 0x45};


static struct timer_list hsgmii_pcie0_mac_timer;
static struct timer_list hsgmii_pcie1_mac_timer;
static struct timer_list hsgmii_usb_mac_timer;
static struct timer_list hsgmii_eth_mac_timer;

static struct linkInfo hsgmii_eth_link_info = { 
	 .linkState = DOWN, 
	 .linkSpeed = LINK_SPEED_1G
}; 

static struct linkInfo hsgmii_usb_link_info = { 
	 .linkState = DOWN, 
	 .linkSpeed = LINK_SPEED_1G
}; 

static struct linkInfo hsgmii_pcie0_link_info = { 
	 .linkState = DOWN, 
	 .linkSpeed = LINK_SPEED_1G
}; 

static struct linkInfo hsgmii_pcie1_link_info = { 
	 .linkState = DOWN, 
	 .linkSpeed = LINK_SPEED_1G
}; 


int hsgmii_pcie0PortState;
int hsgmii_pcie1PortState;
int hsgmii_usbPortState;
int hsgmii_ethPortState;


//wait for phy code
unsigned int hsgmii_pcie0_mode = HSGMII_2p5G;
unsigned int hsgmii_pcie1_mode = HSGMII_2p5G;
unsigned int hsgmii_usb_mode = HSGMII_2p5G;
unsigned int hsgmii_eth_mode = USXGII_10G;





/************************************************************************
*                  M A C R O S
************************************************************************/
#define RxMsgW1 (curRxMsg->rxMsgW1.raw)

/************************************************************************
*                  D A T A   T Y P E S
************************************************************************/
#if defined(TCSUPPORT_TSO_ENABLE)
static int max_pkt_len = 65535;
#else
static int max_pkt_len = 2000;
#endif

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
************************************************************************/
extern int pcie0_force_dstq;
extern int pcie1_force_dstq;
extern int usb_force_dstq;
extern int eth_force_dstq;

extern int pcie0_srcport;
extern int pcie1_srcport;
extern int usb_srcport;
extern int eth_srcport;

extern int hsgmii_fast_mode_flag;

#if defined(INCLUDE_ITTIM) && defined(CONFIG_TP_IMAGE)
extern int xsi_ether_fastpath;
#endif /* INCLUDE_ITTIM  && CONFIG_TP_IMAGE */

extern unsigned int pcie0_speed;
extern unsigned int pcie1_speed;
extern unsigned int usb_speed;
extern unsigned int eth_speed;


extern char *hsgmii_pcie0_itf;
extern char *hsgmii_pcie1_itf;
extern char *hsgmii_usb_itf;
extern char *hsgmii_eth_itf;

#if SUPPORT_AS21xx_WA
extern u8 eth_linkup_wrapper_wa_flag;
extern u16 eth_linkup_wrapper_delay_time;
#endif

#if defined(CONFIG_TP_IMAGE)
char *hsgmii_eth_itf_origin = NULL;
#endif

extern struct net_device *hsgmii_pcie0_dev;
extern struct net_device *hsgmii_pcie1_dev;
extern struct net_device *hsgmii_usb_dev;
extern struct net_device *hsgmii_eth_dev;

extern int fast_path_speed_threshold;

extern int xsi_mac_api_get_phy_link_status(ECNT_HSGMII_Data_s *xsi_data);
extern int xsi_mac_api_get_phy_mode(ECNT_HSGMII_Data_s *xsi_data);
extern int xsi_mac_api_set_phy_mode(ECNT_HSGMII_Data_s *xsi_data);

extern int xsi_mac_api_logic_reset(ECNT_HSGMII_Data_s *xsi_data);
extern int xsi_mac_api_mpi_mbi_disable(ECNT_HSGMII_Data_s *xsi_data);
extern int xsi_mac_api_mpi_mbi_enable(ECNT_HSGMII_Data_s *xsi_data);
extern unsigned int get_qdma_pathmode(int hsgmii_index);

extern int (*sw_upstream_nat_rx_hook) (struct sk_buff * skb, int foe_tbl_index);
extern int (*xsi_linkst_monitor_hook)(void);
extern int (*send_to_hsgmii_hook)(struct sk_buff* skb, int hsgmii_mask);
extern int (*hwnat_clean_xsi_lan_hook)(unsigned int hsgmii_index, unsigned int channel) ;
extern int (*check_rcv_hook)(struct sk_buff *skb);

/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
************************************************************************/
static int hsgmii_pcie0_mac_start(struct net_device *dev);
static int hsgmii_pcie0_mac_open(struct net_device *dev);
static int hsgmii_pcie0_mac_close(struct net_device *dev);
static struct net_device_stats *hsgmii_pcie0_mac_stats(struct net_device *dev);
static int hsgmii_pcie0_mac_change_mtu(struct net_device *dev, int new_mtu);
static int hsgmii_pcie0_mac_set_macaddr(struct net_device *dev, void *p);



static int hsgmii_pcie1_mac_start(struct net_device *dev);
static int hsgmii_pcie1_mac_open(struct net_device *dev);
static int hsgmii_pcie1_mac_close(struct net_device *dev);
static struct net_device_stats *hsgmii_pcie1_mac_stats(struct net_device *dev);
static int hsgmii_pcie1_mac_change_mtu(struct net_device *dev, int new_mtu);
static int hsgmii_pcie1_mac_set_macaddr(struct net_device *dev, void *p);


static int hsgmii_usb_mac_start(struct net_device *dev);
static int hsgmii_usb_mac_open(struct net_device *dev);
static int hsgmii_usb_mac_close(struct net_device *dev);
static struct net_device_stats *hsgmii_usb_mac_stats(struct net_device *dev);
static int hsgmii_usb_mac_change_mtu(struct net_device *dev, int new_mtu);
static int hsgmii_usb_mac_set_macaddr(struct net_device *dev, void *p);

static int hsgmii_eth_mac_start(struct net_device *dev);
static int hsgmii_eth_mac_open(struct net_device *dev);
static int hsgmii_eth_mac_close(struct net_device *dev);
static struct net_device_stats *hsgmii_eth_mac_stats(struct net_device *dev);
static struct rtnl_link_stats64 * hsgmii_eth_mac_stats_64(struct net_device* dev, struct rtnl_link_stats64* stats);
static int hsgmii_eth_mac_change_mtu(struct net_device *dev, int new_mtu);
static int hsgmii_eth_mac_set_macaddr(struct net_device *dev, void *p);




int hsgmii_lan_mac_rx(void *msg_p, uint msg_len, struct sk_buff *skb, uint rx_len);
int hsgmii_lan_mac_tx(struct sk_buff *skb, struct net_device *dev);
int hsgmii_lan_mac_api_rx(ECNT_HSGMII_Data_s *xsi_data);
int hsgmii_lan_mac_api_tx(ECNT_HSGMII_Data_s *xsi_data);
int hsgmii_lan_api_ingress_port_ratelimit(ECNT_HSGMII_Data_s *xsi_data);


/************************************************************************
*                  F U N C T I O N   D E F I N A T I O N
************************************************************************/

void dump_skb(struct sk_buff *skb)
{
	char tmp[80];
	char *p = skb->data;
	char *t = tmp;
	int i = 0, n = 0;

	printk("ERR skb=%08lx skb->head=%08lx \n data=%08lx len=%d mark=%08lX\n cb=%08lx \n", 
	    (uint32) skb, (uint32) skb->head, (uint32) skb->data, skb->len, skb->mark, 
	    *(unsigned long int *)(skb->cb));
    printk("skb dev %s, orig dev %s\n", skb->dev, skb->original_dev);
	for (i = 0; i < skb->len; i++) {
		t += sprintf(t, "%02x ", *p++ & 0xff);
		if ((i & 0x0f) == 0x0f) {
			printk("%04x: %s\n", n, tmp);
			n += 16;
			t = tmp;
		}
	}
	if (i & 0x0f)
		printk("%04x: %s\n", n, tmp);
	
	return;
}

void update_xsi_sw_mib(xsiAdapter_t *mib_type,struct sk_buff *skb, int direction)
{
    if (mib_type->statisticOn) {
        switch(direction){
            case XSI_RX:
                mib_type->xsiStat.inOctets += (skb->len > 64 ? skb->len : 64);
				if((skb->data[0] == 0xFF)&&(skb->data[1] == 0xFF)&&(skb->data[2] == 0xFF)
					&&(skb->data[3] == 0xFF)&&(skb->data[4] == 0xFF)&&(skb->data[5] == 0xFF))
					mib_type->xsiStat.inBroadcastPkts++;
				else if(skb->data[0]&0x01)
					mib_type->xsiStat.inMulticastPkts++;
				else
					mib_type->xsiStat.inUnicastPkts++;				
                break;
            case XSI_TX:
                mib_type->xsiStat.outOctets += (skb->len > 64 ? skb->len : 64);
            	if((skb->data[0] == 0xFF)&&(skb->data[1] == 0xFF)&&(skb->data[2] == 0xFF)
					&&(skb->data[3] == 0xFF)&&(skb->data[4] == 0xFF)&&(skb->data[5] == 0xFF))
					mib_type->xsiStat.outBroadcastPkts++;        		
                else if(skb->data[0]&0x01)
            		mib_type->xsiStat.outMulticastPkts++;
            	else
            		mib_type->xsiStat.outUnicastPkts++;
                break;
			default:
				break;
        }
    }
	return;
}


static int hsgmii_pcie0_mac_set_macaddr(struct net_device *dev, void *p)
{
	struct sockaddr *addr = p;

	if(NULL == addr)
	{
		return -ENOMEM;
	}
	
  	if (addr && !is_valid_ether_addr(addr->sa_data))
    	return(-EIO);

  	memcpy(dev->dev_addr, addr->sa_data, dev->addr_len);
    memcpy(def_xsi_mac_addr, addr->sa_data, dev->addr_len);
	
    xsi_api_set_mac(XSI_PCIE0_IDX,def_xsi_mac_addr);
	
    return 0;
}

static int hsgmii_pcie0_mac_start(struct net_device *dev)
{
    uint8 flashMacAddr[6] = {0};
    struct sockaddr addr = {0};
    uint8 i = 0;

	if(get_ethaddr(flashMacAddr, sizeof(flashMacAddr)) != 0){
		printk("func:%s get ethaddr error!!!\n",__func__);
	}

	for (i=0; i<6; i++) {
		addr.sa_data[i] = flashMacAddr[i];
	}

	   
	if (addr.sa_data[0] == 0 && addr.sa_data[1] == 0 && addr.sa_data[2] == 0 && addr.sa_data[3] == 0 && addr.sa_data[4] == 0 && addr.sa_data[5] == 0)
	{
		printk("The MAC address in flash is null!\n");
		printk("Xsi mac interface will be closed!\n");
		xsi_mac_itf_close(XSI_PCIE0_IDX);
	}

    hsgmii_pcie0_mac_set_macaddr(dev,&addr);
	
    hsgmii_pcie0_p->dev = dev;
            
    return 0;
}
static void hsgmii_pcie0_mac_monitor(unsigned long data)
{
	int preLinkState = hsgmii_pcie0_link_info.linkState;

	if (hsgmii_pcie0_p == NULL) {
		printk("%s[%d] hsgmii_pcie0_p is NULL!\n",__func__,__LINE__);
		return;
	}

	if (0 != hsgmii_get_link_info(XSI_PCIE0_IDX, &hsgmii_pcie0_link_info)) {
		printk("%s[%d]: hsgmii_get_link_info error!\n",__func__,__LINE__);
		return;
	}
	
	if ((preLinkState == DOWN) && (hsgmii_pcie0_link_info.linkState == UP)) {
		printk("%s[%d] hsgmii pcie0 link up \n",__func__,__LINE__);
	} else if ((preLinkState == UP) && (hsgmii_pcie0_link_info.linkState == DOWN)) {
		printk("%s[%d] hsgmii pcie0 link down \n",__func__,__LINE__);
	}

	/* Schedule for the next time */
	hsgmii_pcie0_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	add_timer(&hsgmii_pcie0_mac_timer);

	return;

#if 0

	if (hsgmii_pcie0_p == NULL)
		return;
	
	preLinkState = xsiPortState;
	xsiPortState = XSI_PHY_API_GET_LINK_STATUS();

	if((preLinkState == DOWN) && (xsiPortState == UP))
	{
		//XSI_PHY_API_SET_MODE(LINK_MODE);	//will set link_mode twice when power_up, qi_20181025
		xsi_mac_itf_reset(XSI_PCIE0_IDX);
	}
	if((preLinkState == UP) && (xsiPortState == DOWN))
	{
		xsi_mac_itf_close(XSI_PCIE0_IDX);
	}

	
  	mod_timer(&xsi_mac_timer,jiffies + msecs_to_jiffies(250));
	#endif
}

static int hsgmii_pcie0_mac_open(struct net_device *dev)
{
    netif_start_queue(dev);
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
	/* Schedule timer for monitoring link status and speed*/
	init_timer(&hsgmii_pcie0_mac_timer);
	hsgmii_pcie0_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	hsgmii_pcie0_mac_timer.function = hsgmii_pcie0_mac_monitor;
	hsgmii_pcie0_mac_timer.data = 0;
#else
	timer_setup(&hsgmii_pcie0_mac_timer,hsgmii_pcie0_mac_monitor,0);
	hsgmii_pcie0_mac_timer.expires = jiffies + msecs_to_jiffies(250);
#endif
	add_timer(&hsgmii_pcie0_mac_timer);

	#if 0
	init_timer(&xsi_mac_timer);
    xsi_mac_timer.expires = jiffies + msecs_to_jiffies(250);
  	xsi_mac_timer.function = hsgmii_pcie0_mac_monitor;
    xsi_mac_timer.data = 0;
    add_timer(&xsi_mac_timer);
	#endif
    return 0;
}

static int hsgmii_pcie0_mac_close(struct net_device *dev)
{ 
    netif_stop_queue(dev);
	del_timer_sync(&hsgmii_pcie0_mac_timer);	
	
	//del_timer_sync(&xsi_mac_timer);
	
    return 0;
}


static struct net_device_stats *hsgmii_pcie0_mac_stats(struct net_device *dev)
{
	struct net_device_stats *stats = NULL;
	stats = &hsgmii_pcie0_p->stats;
	
	stats->rx_packets = hsgmii_pcie0_p->xsiStat.inUnicastPkts + hsgmii_pcie0_p->xsiStat.inMulticastPkts + hsgmii_pcie0_p->xsiStat.inBroadcastPkts;
	stats->tx_packets = hsgmii_pcie0_p->xsiStat.outUnicastPkts + hsgmii_pcie0_p->xsiStat.outMulticastPkts + hsgmii_pcie0_p->xsiStat.outBroadcastPkts;
	stats->rx_bytes = hsgmii_pcie0_p->xsiStat.inOctets;
	stats->tx_bytes = hsgmii_pcie0_p->xsiStat.outOctets;;
	stats->rx_dropped = hsgmii_pcie0_p->xsiStat.inDrops;
	stats->tx_dropped = hsgmii_pcie0_p->xsiStat.outDrops;
	stats->multicast = hsgmii_pcie0_p->xsiStat.inMulticastPkts;
	stats->rx_errors = hsgmii_pcie0_p->xsiStat.inErrors;
	stats->tx_errors = hsgmii_pcie0_p->xsiStat.outErrors;
	return stats;
}



static int hsgmii_pcie0_mac_change_mtu(struct net_device *dev, int new_mtu)
{
	if (new_mtu < 68 || new_mtu > 2000)
		return -EINVAL;
	dev->mtu = new_mtu;
	return 0;
}



static int hsgmii_pcie1_mac_set_macaddr(struct net_device *dev, void *p)
{
	struct sockaddr *addr = p;
	
	if(NULL == addr)
	{
		return -ENOMEM;
	}
	
  	if (addr && !is_valid_ether_addr(addr->sa_data))
    	return(-EIO);

  	memcpy(dev->dev_addr, addr->sa_data, dev->addr_len);
    memcpy(def_xsi_mac_addr, addr->sa_data, dev->addr_len);
	
    xsi_api_set_mac(XSI_PCIE1_IDX,def_xsi_mac_addr);
	
    return 0;
}

static int hsgmii_pcie1_mac_start(struct net_device *dev)
{
    uint8 flashMacAddr[6] = {0};
    struct sockaddr addr = {0};
    uint8 i = 0;

    
	if(get_ethaddr(flashMacAddr, sizeof(flashMacAddr)) != 0){
		printk("func:%s get ethaddr error!!!\n",__func__);
	}

	for (i=0; i<6; i++) {
		addr.sa_data[i] = flashMacAddr[i];
	}

	if (addr.sa_data[0] == 0 && addr.sa_data[1] == 0 && addr.sa_data[2] == 0 && addr.sa_data[3] == 0 && addr.sa_data[4] == 0 && addr.sa_data[5] == 0)
	{
		printk("The MAC address in flash is null!\n");
		printk("Xsi mac interface will be closed!\n");
		xsi_mac_itf_close(XSI_PCIE1_IDX);
	}

    hsgmii_pcie1_mac_set_macaddr(dev,&addr);
	
    hsgmii_pcie1_p->dev = dev;
            
    return 0;
}
static void hsgmii_pcie1_mac_monitor(unsigned long data)
{
	int preLinkState = hsgmii_pcie1_link_info.linkState;
	
	if (hsgmii_pcie1_p == NULL) {
		printk("%s[%d] hsgmii_pcie1_p is NULL!\n",__func__,__LINE__);
		return;
	}

	if (0 != hsgmii_get_link_info(XSI_PCIE1_IDX, &hsgmii_pcie1_link_info)) {
		printk("%s[%d]: hsgmii_get_link_info error!\n",__func__,__LINE__);
		return;
	}
	
	if ((preLinkState == DOWN) && (hsgmii_pcie1_link_info.linkState == UP)) {
		printk("%s[%d] hsgmii pcie1 link up \n",__func__,__LINE__);
	} else if ((preLinkState == UP) && (hsgmii_pcie1_link_info.linkState == DOWN)) {
		printk("%s[%d] hsgmii pcie1 link down \n",__func__,__LINE__);
	}

	/* Schedule for the next time */
	hsgmii_pcie1_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	add_timer(&hsgmii_pcie1_mac_timer);
	
	return;

#if 0
	if (hsgmii_pcie1_p == NULL)
		return;
	
	preLinkState = xsiPortState;
	xsiPortState = XSI_PHY_API_GET_LINK_STATUS();

	if((preLinkState == DOWN) && (xsiPortState == UP))
	{
		//XSI_PHY_API_SET_MODE(LINK_MODE);	//will set link_mode twice when power_up, qi_20181025
		xsi_mac_itf_reset(XSI_PCIE0_IDX);
	}
	if((preLinkState == UP) && (xsiPortState == DOWN))
	{
		xsi_mac_itf_close(XSI_PCIE0_IDX);
	}
	
  	//mod_timer(&xsi_mac_timer,jiffies + msecs_to_jiffies(250));
#endif	
}

static int hsgmii_pcie1_mac_open(struct net_device *dev)
{
    netif_start_queue(dev);
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
	/* Schedule timer for monitoring link status and speed*/
	init_timer(&hsgmii_pcie1_mac_timer);
	hsgmii_pcie1_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	hsgmii_pcie1_mac_timer.function = hsgmii_pcie1_mac_monitor;
	hsgmii_pcie1_mac_timer.data = 0;
#else
	timer_setup(&hsgmii_pcie1_mac_timer,hsgmii_pcie1_mac_monitor,0);
	hsgmii_pcie1_mac_timer.expires = jiffies + msecs_to_jiffies(250);
#endif
	add_timer(&hsgmii_pcie1_mac_timer);
#if 0
	init_timer(&xsi_mac_timer);
    xsi_mac_timer.expires = jiffies + msecs_to_jiffies(250);
  	xsi_mac_timer.function = hsgmii_pcie1_mac_monitor;
    xsi_mac_timer.data = 0;
    add_timer(&xsi_mac_timer);
	#endif
    return 0;
}

static int hsgmii_pcie1_mac_close(struct net_device *dev)
{ 
    netif_stop_queue(dev);
	del_timer_sync(&hsgmii_pcie1_mac_timer);	
	
	//del_timer_sync(&xsi_mac_timer);
	
    return 0;
}


static struct net_device_stats *hsgmii_pcie1_mac_stats(struct net_device *dev)
{
	struct net_device_stats *stats = NULL;
	stats = &hsgmii_pcie1_p->stats;
	
	stats->rx_packets = hsgmii_pcie1_p->xsiStat.inUnicastPkts + hsgmii_pcie1_p->xsiStat.inMulticastPkts + hsgmii_pcie1_p->xsiStat.inBroadcastPkts;
	stats->tx_packets = hsgmii_pcie1_p->xsiStat.outUnicastPkts + hsgmii_pcie1_p->xsiStat.outMulticastPkts + hsgmii_pcie1_p->xsiStat.outBroadcastPkts;
	stats->rx_bytes = hsgmii_pcie1_p->xsiStat.inOctets;
	stats->tx_bytes = hsgmii_pcie1_p->xsiStat.outOctets;;
	stats->rx_dropped = hsgmii_pcie1_p->xsiStat.inDrops;
	stats->tx_dropped = hsgmii_pcie1_p->xsiStat.outDrops;
	stats->multicast = hsgmii_pcie1_p->xsiStat.inMulticastPkts;
	stats->rx_errors = hsgmii_pcie1_p->xsiStat.inErrors;
	stats->tx_errors = hsgmii_pcie1_p->xsiStat.outErrors;
	return stats;
}



static int hsgmii_pcie1_mac_change_mtu(struct net_device *dev, int new_mtu)
{
	if (new_mtu < 68 || new_mtu > 2000)
		return -EINVAL;
	dev->mtu = new_mtu;
	return 0;
}



static int hsgmii_usb_mac_set_macaddr(struct net_device *dev, void *p)
{
	struct sockaddr *addr = p;
	
	if(NULL == addr)
	{
		return -ENOMEM;
	}
	
  	if (addr && !is_valid_ether_addr(addr->sa_data))
    	return(-EIO);

  	memcpy(dev->dev_addr, addr->sa_data, dev->addr_len);
    memcpy(def_xsi_mac_addr, addr->sa_data, dev->addr_len);
	
    xsi_api_set_mac(XSI_USB_IDX,def_xsi_mac_addr);
	
    return 0;
}

static int hsgmii_usb_mac_start(struct net_device *dev)
{
    uint8 flashMacAddr[6] = {0};
    struct sockaddr addr = {0};
    uint8 i = 0;

    
	if(get_ethaddr(flashMacAddr, sizeof(flashMacAddr)) != 0){
		printk("func:%s get ethaddr error!!!\n",__func__);
	}

	for (i=0; i<6; i++) {
		addr.sa_data[i] = flashMacAddr[i];
	}
    

	if (addr.sa_data[0] == 0 && addr.sa_data[1] == 0 && addr.sa_data[2] == 0 && addr.sa_data[3] == 0 && addr.sa_data[4] == 0 && addr.sa_data[5] == 0)
	{
		printk("The MAC address in flash is null!\n");
		printk("Xsi mac interface will be closed!\n");
		xsi_mac_itf_close(XSI_USB_IDX);
	}

    hsgmii_usb_mac_set_macaddr(dev,&addr);
	
    hsgmii_usb_p->dev = dev;
            
    return 0;
}

static void hsgmii_usb_mac_monitor(unsigned long data)
{
	int preLinkState = hsgmii_usb_link_info.linkState;

	if (hsgmii_usb_p == NULL) {
		printk("%s[%d] hsgmii_usb_p is NULL!\n",__func__,__LINE__);
		return;
	}
	
	if (0 != hsgmii_get_link_info(XSI_USB_IDX, &hsgmii_usb_link_info)) {
		printk("%s[%d]: hsgmii_get_link_info error!\n",__func__,__LINE__);
		return;
	}
	
	if ((preLinkState == DOWN) && (hsgmii_usb_link_info.linkState == UP)) {
		printk("%s[%d] hsgmii usb link up \n",__func__,__LINE__);
	} else if ((preLinkState == UP) && (hsgmii_usb_link_info.linkState == DOWN)) {
		printk("%s[%d] hsgmii usb link down \n",__func__,__LINE__);
	}

	/* Schedule for the next time */
	hsgmii_usb_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	add_timer(&hsgmii_usb_mac_timer);
	
	return;

#if 0
	if (hsgmii_usb_p == NULL)
		return;
	
	preLinkState = xsiPortState;
	xsiPortState = XSI_PHY_API_GET_LINK_STATUS();

	if((preLinkState == DOWN) && (xsiPortState == UP))
	{
		//XSI_PHY_API_SET_MODE(LINK_MODE);	//will set link_mode twice when power_up, qi_20181025
		xsi_mac_itf_reset(XSI_PCIE0_IDX);
	}
	if((preLinkState == UP) && (xsiPortState == DOWN))
	{
		xsi_mac_itf_close(XSI_PCIE0_IDX);
	}
	
  	//mod_timer(&xsi_mac_timer,jiffies + msecs_to_jiffies(250));
	#endif
}

static int hsgmii_usb_mac_open(struct net_device *dev)
{
    netif_start_queue(dev);
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
	/* Schedule timer for monitoring link status and speed*/
	init_timer(&hsgmii_usb_mac_timer);
	hsgmii_usb_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	hsgmii_usb_mac_timer.function = hsgmii_usb_mac_monitor;
	hsgmii_usb_mac_timer.data = 0;
#else
	timer_setup(&hsgmii_usb_mac_timer,hsgmii_usb_mac_monitor,0);
	hsgmii_usb_mac_timer.expires = jiffies + msecs_to_jiffies(250);
#endif
	add_timer(&hsgmii_usb_mac_timer);
#if 0
	init_timer(&xsi_mac_timer);
    xsi_mac_timer.expires = jiffies + msecs_to_jiffies(250);
  	xsi_mac_timer.function = hsgmii_usb_mac_monitor;
    xsi_mac_timer.data = 0;
    add_timer(&xsi_mac_timer);
	#endif
    return 0;
}

static int hsgmii_usb_mac_close(struct net_device *dev)
{ 
    netif_stop_queue(dev);
	del_timer_sync(&hsgmii_usb_mac_timer);	
	
	//del_timer_sync(&xsi_mac_timer);
	
    return 0;
}


static struct net_device_stats *hsgmii_usb_mac_stats(struct net_device *dev)
{
	struct net_device_stats *stats = NULL;
	stats = &hsgmii_usb_p->stats;
	FE_RxCnt_t rxCnt;
	FE_TxCnt_t txCnt;
	
	memset(&rxCnt, 0, sizeof(FE_RxCnt_t));
	memset(&txCnt, 0, sizeof(FE_TxCnt_t));
	FE_API_GET_HSGMII_RX_CNT(&rxCnt, 2);//2:usb hsgmii
	FE_API_GET_HSGMII_TX_CNT(&txCnt, 2);
	
	stats->rx_packets = rxCnt.rxFrameCnt;
	stats->tx_packets = txCnt.txFrameCnt;
	stats->rx_bytes = rxCnt.rxFrameLen;
	stats->tx_bytes = txCnt.txFrameLen;
	stats->rx_dropped = rxCnt.rxDropCnt;
	stats->tx_dropped = txCnt.txDropCnt;
	stats->multicast = rxCnt.rxMulticastCnt + txCnt.txMulticastCnt;
	stats->rx_errors = hsgmii_usb_p->xsiStat.inErrors + rxCnt.rxCrcCnt + rxCnt.rxFragFameCnt + rxCnt.rxJabberFameCnt;
	stats->tx_errors = hsgmii_usb_p->xsiStat.outErrors;
	return stats;
}



static int hsgmii_usb_mac_change_mtu(struct net_device *dev, int new_mtu)
{
	if (new_mtu < 68 || new_mtu > 2000)
		return -EINVAL;
	dev->mtu = new_mtu;
	return 0;
}



static int hsgmii_eth_mac_set_macaddr(struct net_device *dev, void *p)
{
	struct sockaddr *addr = p;
	
	if(NULL == addr)
	{
		return -ENOMEM;
	}
	
  	if (addr && !is_valid_ether_addr(addr->sa_data))
    	return(-EIO);

  	memcpy(dev->dev_addr, addr->sa_data, dev->addr_len);
    memcpy(def_xsi_mac_addr, addr->sa_data, dev->addr_len);
	
    xsi_api_set_mac(XSI_ETH_IDX,def_xsi_mac_addr);
	
    return 0;
}

static int hsgmii_eth_mac_start(struct net_device *dev)
{
    uint8 flashMacAddr[6] = {0};
    struct sockaddr addr = {0};
    uint8 i = 0;

    
	if(get_ethaddr(flashMacAddr, sizeof(flashMacAddr)) != 0){
		printk("func:%s get ethaddr error!!!\n",__func__);
	}

	for (i=0; i<6; i++) {
		addr.sa_data[i] = flashMacAddr[i];
	}
    

	if (addr.sa_data[0] == 0 && addr.sa_data[1] == 0 && addr.sa_data[2] == 0 && addr.sa_data[3] == 0 && addr.sa_data[4] == 0 && addr.sa_data[5] == 0)
	{
		printk("The MAC address in flash is null!\n");
		printk("Xsi mac interface will be closed!\n");
		xsi_mac_itf_close(XSI_ETH_IDX);
	}

    hsgmii_eth_mac_set_macaddr(dev,&addr);
	
    hsgmii_eth_p->dev = dev;
            
    return 0;
}

static void hsgmii_eth_mac_monitor(unsigned long data)
{
	int preLinkState = hsgmii_eth_link_info.linkState;
	
	if (hsgmii_eth_p == NULL) {
		printk("%s[%d] hsgmii_eth_p is NULL!\n",__func__,__LINE__);
		return;
	}

	if (0 != hsgmii_get_link_info(XSI_ETH_IDX, &hsgmii_eth_link_info)) {
		printk("%s[%d]: hsgmii_get_link_info error!\n",__func__,__LINE__);
		return;
	}
	
	if ((preLinkState == DOWN) && (hsgmii_eth_link_info.linkState == UP)) {
		printk("%s[%d] hsgmii eth link up \n",__func__,__LINE__);
	} else if ((preLinkState == UP) && (hsgmii_eth_link_info.linkState == DOWN)) {
		printk("%s[%d] hsgmii eth link down \n",__func__,__LINE__);
	}

	/* Schedule for the next time */
	hsgmii_eth_mac_timer.expires = jiffies + msecs_to_jiffies(250);
  	add_timer(&hsgmii_eth_mac_timer);
	
	return;

#if 0
	if (hsgmii_eth_p == NULL)
		return;
	
	preLinkState = xsiPortState;
	xsiPortState = XSI_PHY_API_GET_LINK_STATUS();

	if((preLinkState == DOWN) && (xsiPortState == UP))
	{
		//XSI_PHY_API_SET_MODE(LINK_MODE);	//will set link_mode twice when power_up, qi_20181025
		xsi_mac_itf_reset(XSI_PCIE0_IDX);
	}
	if((preLinkState == UP) && (xsiPortState == DOWN))
	{
		xsi_mac_itf_close(XSI_PCIE0_IDX);
	}
	
  	//mod_timer(&xsi_mac_timer,jiffies + msecs_to_jiffies(250));
	#endif
}

static int hsgmii_eth_mac_open(struct net_device *dev)
{
    netif_start_queue(dev);
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
	/* Schedule timer for monitoring link status and speed*/
	init_timer(&hsgmii_eth_mac_timer);
	hsgmii_eth_mac_timer.expires = jiffies + msecs_to_jiffies(250);
	hsgmii_eth_mac_timer.function = hsgmii_eth_mac_monitor;
	hsgmii_eth_mac_timer.data = 0;
#else
	timer_setup(&hsgmii_eth_mac_timer,hsgmii_eth_mac_monitor,0);
	hsgmii_eth_mac_timer.expires = jiffies + msecs_to_jiffies(250);
#endif
	add_timer(&hsgmii_eth_mac_timer);
#if 0
	init_timer(&xsi_mac_timer);
    xsi_mac_timer.expires = jiffies + msecs_to_jiffies(250);
  	xsi_mac_timer.function = hsgmii_eth_mac_monitor;
    xsi_mac_timer.data = 0;
    add_timer(&xsi_mac_timer);
	#endif
    return 0;
}

static int hsgmii_eth_mac_close(struct net_device *dev)
{ 
    netif_stop_queue(dev);
	del_timer_sync(&hsgmii_eth_mac_timer);
	
	//del_timer_sync(&xsi_mac_timer);
	
    return 0;
}


static struct net_device_stats *hsgmii_eth_mac_stats(struct net_device *dev)
{
	struct net_device_stats *stats = NULL;
	stats = &hsgmii_eth_p->stats;
	FE_RxCnt_t rxCnt;
	FE_TxCnt_t txCnt;
	
	memset(&rxCnt, 0, sizeof(FE_RxCnt_t));
	memset(&txCnt, 0, sizeof(FE_TxCnt_t));
	FE_API_GET_HSGMII_RX_CNT(&rxCnt, 3);//3:eth hsgmii
	FE_API_GET_HSGMII_TX_CNT(&txCnt, 3);
	
	stats->rx_packets = rxCnt.rxFrameCnt;
	stats->tx_packets = txCnt.txFrameCnt;
	stats->rx_bytes = rxCnt.rxFrameLen;
	stats->tx_bytes = txCnt.txFrameLen;
	stats->rx_dropped = rxCnt.rxDropCnt;
	stats->tx_dropped = txCnt.txDropCnt;
//	stats->multicast = rxCnt.rxMulticastCnt + txCnt.txMulticastCnt;
	stats->multicast = rxCnt.rxMulticastCnt;
	stats->rx_errors = hsgmii_eth_p->xsiStat.inErrors + rxCnt.rxCrcCnt + rxCnt.rxFragFameCnt + rxCnt.rxJabberFameCnt;
	stats->tx_errors = hsgmii_eth_p->xsiStat.outErrors;
	return stats;
}



static struct rtnl_link_stats64 * hsgmii_eth_mac_stats_64(struct net_device* dev, struct rtnl_link_stats64* stats)
{
	FE_RxCnt_t rxCnt;
	FE_TxCnt_t txCnt;
	
	memset(&rxCnt, 0, sizeof(FE_RxCnt_t));
	memset(&txCnt, 0, sizeof(FE_TxCnt_t));
	FE_API_GET_HSGMII_RX_CNT(&rxCnt, 3);//3:eth hsgmii
	FE_API_GET_HSGMII_TX_CNT(&txCnt, 3);
	
	stats->rx_packets = rxCnt.rxFrameCnt;
	stats->tx_packets = txCnt.txFrameCnt;
	stats->rx_bytes = rxCnt.rxFrameLen;
	stats->tx_bytes = txCnt.txFrameLen;
	stats->rx_dropped = rxCnt.rxDropCnt;
	stats->tx_dropped = txCnt.txDropCnt;
//	stats->multicast = rxCnt.rxMulticastCnt + txCnt.txMulticastCnt;
	stats->multicast = rxCnt.rxMulticastCnt;
	stats->rx_errors = hsgmii_eth_p->xsiStat.inErrors + rxCnt.rxCrcCnt + rxCnt.rxFragFameCnt + rxCnt.rxJabberFameCnt;
	stats->tx_errors = hsgmii_eth_p->xsiStat.outErrors;
	return stats;
}


static int hsgmii_eth_mac_change_mtu(struct net_device *dev, int new_mtu)
{
	if (new_mtu < 68 || new_mtu > 2000)
		return -EINVAL;
	dev->mtu = new_mtu;
	return 0;
}


int hsgmii_lan_mac_api_tx(ECNT_HSGMII_Data_s *xsi_data)
{ 
	struct sk_buff *skb = NULL;
	struct net_device *dev = NULL;
	
	if(xsi_data){
		skb = xsi_data->xsi_private.tx_info.skb;
		dev = xsi_data->xsi_private.tx_info.dev;
		if(dev == NULL)
		{
			dev_kfree_skb_any(skb);
			return 0;
		}
    	hsgmii_lan_mac_tx(skb,dev);  
	}
	
    return 0;
}

int hsgmii_mac_api_set_srcport(void)
{
	pcie0_srcport = HSGMII_LAN_PCIE0_SRCPORT;
	pcie1_srcport = HSGMII_LAN_PCIE1_SRCPORT;
	usb_srcport = HSGMII_LAN_USB_SRCPORT;
	eth_srcport = HSGMII_LAN_ETH_SRCPORT;
	return 0;
}

int hsgmii_lan_mac_api_rx(ECNT_HSGMII_Data_s *xsi_data)
{ 
	void *msg_p = NULL;
	uint msg_len = 0;
	struct sk_buff *skb = NULL;
	uint rx_len = 0;
	if(xsi_data){
		
		msg_p = xsi_data->xsi_private.rx_info.msg_p;
		msg_len = xsi_data->xsi_private.rx_info.msg_len;
		skb = xsi_data->xsi_private.rx_info.skb;
		rx_len = xsi_data->xsi_private.rx_info.rx_len;

    	hsgmii_lan_mac_rx(msg_p,msg_len,skb,rx_len);  
	}
	
    return 0;
}

int hsgmii_lan_set_dstq_mode(int hsgmii_index)
{ 
	int ds_to_qdma = 1, linkrate = 0;

	if(hsgmii_index == XSI_PCIE0_IDX)
	{
		if((get_qdmainit() & (1<<15)) || (pcie0_force_dstq == 1))       /*To Gdma*/	
			ds_to_qdma =0;
		else                            /*To Qdma*/
			ds_to_qdma =1;
	}
	else if(hsgmii_index == XSI_PCIE1_IDX)
	{
		if(get_qdmainit() & (1<<16) || (pcie1_force_dstq == 1))       /*To Gdma*/
			ds_to_qdma =0;
		else                            /*To Qdma*/
			ds_to_qdma =1;
	}
	else if(hsgmii_index == XSI_USB_IDX)
	{
		if(get_qdmainit() & (1<<17) || (usb_force_dstq == 1))       /*To Gdma*/
			ds_to_qdma =0;
		else                            /*To Qdma*/
			ds_to_qdma =1;
	}
	else if(hsgmii_index == XSI_ETH_IDX)
	{
		if(get_qdmainit() & (1<<18) || (eth_force_dstq == 1))       /*To Gdma*/
			ds_to_qdma =0;
		else                            /*To Qdma*/
			ds_to_qdma =1;
	}
	else
	{
		printk("%s[%d]: error hsgmii_index = %d\n",__FUNCTION__,__LINE__,hsgmii_index);
	}

	
    return ds_to_qdma;
}

static int hsgmii_lan_set_fast(int hsgmii_index)
{
	int fast = 0, link_speed = LINK_SPEED_1G;

	switch (hsgmii_index) {
		case XSI_ETH_IDX:
			link_speed = hsgmii_eth_link_info.linkSpeed;
			break;
		case XSI_USB_IDX:
			link_speed = hsgmii_usb_link_info.linkSpeed;
			break;
		case XSI_PCIE0_IDX:
			link_speed = hsgmii_pcie0_link_info.linkSpeed;
			break;
		case XSI_PCIE1_IDX:
			link_speed = hsgmii_pcie1_link_info.linkSpeed;
			break;
		default:	
			printk("%s[%d]: error hsgmii_index = %d\n",__func__,__LINE__,hsgmii_index);
			break;	
	}

	/* fast_path_speed_threshold -- 0: 10m,  1: 100m,  2: 1g,  3: 2.5g, 4: 5g, 5: 10g */
	if (link_speed >= fast_path_speed_threshold) {
		/* fast path */
		fast = 1;
	} else {
		/* slow path */
		fast = 0;
	}

	return fast;
}

int send_to_hsgmii(struct sk_buff *skb, int hsgmii_mask)
{	
	struct sk_buff *skb_usb = NULL, *skb_pcie0 = NULL, *skb_pcie1 = NULL, *skb_eth = NULL;
	
	/* 0x10:serdes_usb,  0x20:serdes_pcie0,  0x40:serdes_pcie1,  0x80:serdes_eth */
	if(hsgmii_mask & 0x10)
	{
		if(hsgmii_usb_dev && (skb_usb = skb_copy(skb, GFP_ATOMIC)))
			hsgmii_lan_mac_tx(skb_usb, hsgmii_usb_dev);
	}

	if(hsgmii_mask & 0x20)
	{
		if(hsgmii_pcie0_dev && (skb_pcie0 = skb_copy(skb, GFP_ATOMIC)))
			hsgmii_lan_mac_tx(skb_pcie0, hsgmii_pcie0_dev);
	}

	if(hsgmii_mask & 0x40)
	{
		if(hsgmii_pcie1_dev && (skb_pcie1 = skb_copy(skb, GFP_ATOMIC)))
			hsgmii_lan_mac_tx(skb_pcie1, hsgmii_pcie1_dev);
	}

	if(hsgmii_mask & 0x80)
	{
		if(hsgmii_eth_dev && (skb_eth = skb_copy(skb, GFP_ATOMIC)))
			hsgmii_lan_mac_tx(skb_eth, hsgmii_eth_dev);
	}
		
	return NETDEV_TX_OK;	
}

static inline unsigned int hsgmii_get_link_speed(int hsgmii_index)	
{
	if(hsgmii_index == XSI_PCIE0_IDX)
		return pcie0_speed;
	else if(hsgmii_index == XSI_PCIE1_IDX)
		return pcie1_speed;
	else if(hsgmii_index == XSI_USB_IDX)
		return usb_speed;

	return eth_speed;
}

static inline int hsgmii_is_link_speed_greater_than(int hsgmii_index, unsigned int speed_idx)
{
	return hsgmii_get_link_speed(hsgmii_index) < speed_idx;
}

static inline int hsgmii_is_link_speed_equel_to(int hsgmii_index, unsigned int speed_idx)
{
	return hsgmii_get_link_speed(hsgmii_index) == speed_idx;
}

static unsigned int hsgmii_path_choose(int hsgmii_index)
{
	int hsgmii_to_qdma_index = 0, fast = 0;
	//1:auto mode,need check linkrate; 0:force mode, depends on fast_xfi
	switch (hsgmii_index)
	{
		case XSI_PCIE0_IDX:
			hsgmii_to_qdma_index = FAST_PATH_DIR_XSI_PCIE0;
			break;
		case XSI_PCIE1_IDX:
			hsgmii_to_qdma_index = FAST_PATH_DIR_XSI_PCIE1;
			break;
		case XSI_USB_IDX:
			hsgmii_to_qdma_index = FAST_PATH_DIR_XSI_USB;
			break;
		case XSI_ETH_IDX:
			hsgmii_to_qdma_index = FAST_PATH_DIR_XSI_ETHER;
			break;
		default:
			printk("hsgmii_lan index should be 0 1 2 4\n");
			break;
	}
	if(get_qdma_pathmode(hsgmii_to_qdma_index))
	{		
		// check linkrate, go through fast path if larger than fast_path_speed_threshold
		if(hsgmii_is_link_speed_greater_than(hsgmii_index, fast_path_speed_threshold))
			fast = 1;
		else
			fast = 0;
	}
	else
	{
		fast = xsi_fast_path_dir[hsgmii_to_qdma_index];
	}

	return fast;

}

int hsgmii_lan_mac_tx(struct sk_buff *skb, struct net_device *dev)
{
	xsiTxMsg_t xsiTxMsg = {0};
	int error = 0, hsgmii_index = 0;
	int tsid = 0x7f;
	int acnt1 = 0x1f;
	int acnt0 = 0x1f;
	struct port_info xsi_info = {0};
	struct port_info *qdma_info = NULL;
	xsiAdapter_t *hsgmii_p = NULL;
	unchar nbq = 0, channel = 0, fport = 0;
	int magic = 0;

	if(SUPPORT_USB_PCIE_IN_GDMA4){
		if( strncmp(dev->name, hsgmii_pcie0_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_PCIE0_IDX;
			hsgmii_p = hsgmii_pcie0_p;
			nbq = 0;
			channel = HSGMII_LAN_PCIE0_CHNL;
			fport = DPORT_GDMA4;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if( strncmp(dev->name, hsgmii_pcie1_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_PCIE1_IDX;
			hsgmii_p = hsgmii_pcie1_p;
			nbq = 0;
			channel = HSGMII_LAN_PCIE1_CHNL;
			fport = DPORT_GDMA4;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if ( strncmp(dev->name, hsgmii_usb_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_USB_IDX;
			hsgmii_p = hsgmii_usb_p;
			nbq = 1;
			channel = HSGMII_LAN_USB_CHNL;
			fport = DPORT_GDMA4;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if ( strncmp(dev->name, hsgmii_eth_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_ETH_IDX;
			hsgmii_p = hsgmii_eth_p;
			nbq = 0;
			channel = HSGMII_LAN_ETH_CHNL;
			fport = DPORT_GDMA3;
			magic = FOE_MAGIC_XSI;
		}else{
			XSI_MSG(XSI_DBG_ERR,"dev name is not in hsgmii range:%s\n", dev->name);
			dev_kfree_skb_any(skb);
			return NETDEV_TX_OK;
		}		
	}else if(SUPPORT_USB_ETH_IN_GDMA4){
		if( strncmp(dev->name, hsgmii_pcie0_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_PCIE0_IDX;
			hsgmii_p = hsgmii_pcie0_p;
			nbq = 4;
			channel = HSGMII_LAN_PCIE0_CHNL;
			fport = DPORT_GDMA3;
			magic = FOE_MAGIC_XSI;
		}else if( strncmp(dev->name, hsgmii_pcie1_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_PCIE1_IDX;
			hsgmii_p = hsgmii_pcie1_p;
			nbq = 5;
			channel = HSGMII_LAN_PCIE1_CHNL;
			fport = DPORT_GDMA3;
			magic = FOE_MAGIC_XSI;
		}else if ( strncmp(dev->name, hsgmii_usb_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_USB_IDX;
			hsgmii_p = hsgmii_usb_p;
			nbq = 1;
			channel = HSGMII_LAN_USB_CHNL;
			fport = DPORT_GDMA4;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if ( strncmp(dev->name, hsgmii_eth_itf, ITF_NAME_LENGTH) == 0 ){
			hsgmii_index = XSI_ETH_IDX;
			hsgmii_p = hsgmii_eth_p;
			nbq = 0;
#if defined(INCLUDE_ITTIM) && defined(CONFIG_TP_IMAGE)
#define VLAN_VID_MASK			0x0fff	/* VLAN Identifier */
#define EWAN_VID				6
#define HSGMII_LAN_ETH_CHNL6	6
			if (EWAN_VID == ((skb->vlan_tci) & VLAN_VID_MASK))
			{
				/* EWAN MODE : upstream : channel 6; downstram: channel 13 */
				channel = HSGMII_LAN_ETH_CHNL6;
			}
			else
#endif /* defined(INCLUDE_ITTIM) && defined(CONFIG_TP_IMAGE) */
			{
				channel = HSGMII_LAN_ETH_CHNL;
			}

			fport = DPORT_GDMA4;
			magic = FOE_MAGIC_XSI_GDM4;
		}else{
			XSI_MSG(XSI_DBG_ERR,"dev name is not in hsgmii range:%s\n", dev->name);
			dev_kfree_skb_any(skb);
			return NETDEV_TX_OK;
		}	
	}else{
		printk("error, not support hsgmii_lan port \n");
	}

#ifndef LOOPBACK_SUPPORT_JUMBO
	if (skb->len > max_pkt_len)
	{
		XSI_MSG(XSI_DBG_ERR,"skb length too large skb->len:%d, max_pkt_len:%d\n", skb->len, max_pkt_len);
		dev_kfree_skb_any(skb);
		hsgmii_p->xsiStat.outErrors++;
		hsgmii_p->xsiStat.outDrops++;
		return NETDEV_TX_OK;
	}
#endif

	/* Pad packets shorter than the Ethernet minimum frame size. */
	if (unlikely(skb->len < ETH_ZLEN)) {
		if (skb_padto(skb, ETH_ZLEN)) {
			hsgmii_p->xsiStat.outErrors++;
			hsgmii_p->xsiStat.outDrops++;
			return NETDEV_TX_OK;
		}
		skb_put(skb, ETH_ZLEN - skb->len);
	}

	update_xsi_sw_mib(hsgmii_p, skb, XSI_TX);


	memset(&xsi_info, 0, sizeof(struct port_info));
	FE_API_GET_METER_IDX(skb, DOWN_STREAM, &tsid, 0);
	xsi_info.tsid = tsid;   
	xsi_info.txq = 0;
	xsi_info.nbq = nbq;
	xsi_info.magic = magic;
	xsi_info.channel = channel;/*qdma lan chnl 10-12,for hsgmii pcie0/1 usb*/
	

	xsi_info.ds_to_qdma = hsgmii_lan_set_dstq_mode(hsgmii_index);

	if (xsi_info.ds_to_qdma) {
#if SUPPORT_QDMA_AUTOPATH
		xsi_info.fast = hsgmii_path_choose(hsgmii_index);
#else
		xsi_info.fast = hsgmii_lan_set_fast(hsgmii_index);
#endif
	} else { 
		xsi_info.fast = 0;
	}
	//#define SKB_FROM_WIFI_BIT (1<<15), defined in skb
	if(skb->mark2 & SKB_FROM_WIFI_BIT){ //means skb from wifi ,set in hostadpt
		xsi_info.udf = SKB_FROM_WIFI; // means skb from wifi, set here , use in hw_nat;
		if(hsgmii_is_link_speed_equel_to(hsgmii_index, USXGII_2p5G)){// check linkrate == 2.5Gbps
			xsi_info.fast = 0;
		}
		else{
			xsi_info.fast = 1;
		}
	}	
	memset(&xsiTxMsg, 0, sizeof(xsiTxMsg_t));
	xsiTxMsg.raw.mtr_g = tsid;
	xsiTxMsg.raw.fPort = fport;
	xsiTxMsg.raw.channel = xsi_info.channel;
	FE_API_GET_ACNT1_IDX(skb, DOWN_STREAM, &acnt1);
	FE_API_GET_ACNT0_IDX(skb, DOWN_STREAM, &acnt0);
	xsiTxMsg.raw.acnt_g1 = acnt1;
	xsiTxMsg.raw.acnt_g0 = acnt0;

    xsiTxMsg.raw.nboq = nbq;

	qdma_info = &xsi_info;

#if 0
	if (hsgmii_fast_mode_flag) {
		qdma_info->fast = 1;
	} else {
		qdma_info->fast = 0;
	}
#endif
	XSI_MSG(XSI_DBG_MSG,"xsiTxMsg.raw.channel=%d fport=%d sp_tag=%x nbq=%d\n",xsiTxMsg.raw.channel,xsiTxMsg.raw.fPort,xsiTxMsg.raw.sp_tag,xsiTxMsg.raw.nboq);
	XSI_MSG(XSI_DBG_MSG,"xsi_info.txq=%d eth_macSTagEn=%d magic=%d ds_to_qdma=%d channel=%d fast=%d\n",xsi_info.txq,xsi_info.eth_macSTagEn,xsi_info.magic,xsi_info.ds_to_qdma,xsi_info.channel,xsi_info.fast);

	error = QDMA_API_TRANSMIT_PACKETS(ECNT_QDMA_LAN,skb,xsiTxMsg.msg[0], xsiTxMsg.msg[1], qdma_info);
	if(unlikely(error)){
		dev_kfree_skb_any(skb);
		hsgmii_p->xsiStat.outErrors++;
		hsgmii_p->xsiStat.outDrops++;
		return NETDEV_TX_OK;
	}
	
	return NETDEV_TX_OK;

}




static const struct net_device_ops hsgmii_pcie0_netdev_ops = {
    .ndo_init               = hsgmii_pcie0_mac_start,
	.ndo_open				= hsgmii_pcie0_mac_open,
	.ndo_stop				= hsgmii_pcie0_mac_close,
	.ndo_start_xmit 		= hsgmii_lan_mac_tx,
    .ndo_get_stats          = hsgmii_pcie0_mac_stats,
	.ndo_change_mtu			= hsgmii_pcie0_mac_change_mtu,
	.ndo_set_mac_address    = hsgmii_pcie0_mac_set_macaddr,
	.ndo_validate_addr      = eth_validate_addr,
};


static const struct net_device_ops hsgmii_pcie1_netdev_ops = {
    .ndo_init               = hsgmii_pcie1_mac_start,
	.ndo_open				= hsgmii_pcie1_mac_open,
	.ndo_stop				= hsgmii_pcie1_mac_close,
	.ndo_start_xmit 		= hsgmii_lan_mac_tx,
    .ndo_get_stats          = hsgmii_pcie1_mac_stats,
	.ndo_change_mtu			= hsgmii_pcie1_mac_change_mtu,
	.ndo_set_mac_address    = hsgmii_pcie1_mac_set_macaddr,
	.ndo_validate_addr      = eth_validate_addr,
};


static const struct net_device_ops hsgmii_usb_netdev_ops = {
    .ndo_init               = hsgmii_usb_mac_start,
	.ndo_open				= hsgmii_usb_mac_open,
	.ndo_stop				= hsgmii_usb_mac_close,
	.ndo_start_xmit 		= hsgmii_lan_mac_tx,
    .ndo_get_stats          = hsgmii_usb_mac_stats,
	.ndo_change_mtu			= hsgmii_usb_mac_change_mtu,
	.ndo_set_mac_address    = hsgmii_usb_mac_set_macaddr,
	.ndo_validate_addr      = eth_validate_addr,
};

static const struct net_device_ops hsgmii_eth_netdev_ops = {
    .ndo_init               = hsgmii_eth_mac_start,
	.ndo_open				= hsgmii_eth_mac_open,
	.ndo_stop				= hsgmii_eth_mac_close,
	.ndo_start_xmit 		= hsgmii_lan_mac_tx,
    .ndo_get_stats          = hsgmii_eth_mac_stats,
    .ndo_get_stats64        = hsgmii_eth_mac_stats_64,
	.ndo_change_mtu			= hsgmii_eth_mac_change_mtu,
	.ndo_set_mac_address    = hsgmii_eth_mac_set_macaddr,
	.ndo_validate_addr      = eth_validate_addr,
};







/* ------------------ ECNT_Hook ------------------ */
/* Warning: same sequence with enum 'XSI_HookFunction_t' */
hsgmii_api_op_t
hsgmii_lan_operation[]=
{
    hsgmii_lan_mac_api_rx,
	xsi_mac_api_get_phy_link_status,
	xsi_mac_api_get_phy_mode,
	xsi_mac_api_set_phy_mode,
	xsi_mac_api_logic_reset,
	hsgmii_lan_mac_api_tx,
	hsgmii_lan_api_ingress_port_ratelimit,
	xsi_mac_api_mpi_mbi_disable,
	xsi_mac_api_mpi_mbi_enable,
};



/************************************************************************
*                  P R I V A T E   D A T A
*************************************************************************
*/
ecnt_ret_val ecnt_hsgmii_lan_hook(struct ecnt_data *indata)
{
	ECNT_HSGMII_Data_s *xsi_data = (ECNT_HSGMII_Data_s *)indata ;
    
	if(xsi_data->function_id >= HSGMII_LAN_FUNCTION_MAX_NUM) {
		return ECNT_HOOK_ERROR;
	}
	xsi_data->retValue = hsgmii_lan_operation[xsi_data->function_id](xsi_data) ;
	
	return ECNT_CONTINUE;
}

struct ecnt_hook_ops ecnt_driver_hsgmii_lan_op = {
    .name = driver_hsgmii_lan_hook_name,
    .hookfn = ecnt_hsgmii_lan_hook,
    .maintype = ECNT_HSGMII_LAN_MAC,
    .is_execute = 1,
    .subtype = ECNT_DRIVER_API,
    .priority = 1
};

/************************************************************************
    Funtcion:       xsi_mac_rx
    Description:
    Calls:
    Called by:      eth_rx
    Input:
    Output:
    Return:
    Others:
************************************************************************/
int hsgmii_lan_mac_rx(void *msg_p, uint msg_len, struct sk_buff *skb, uint rx_len)
{

	xsiRxMsg_t *curRxMsg = NULL;
	unchar srcport= 0;
	xsiAdapter_t *hsgmii_p = NULL;
	struct net_device *hsgmii_dev = NULL;
	int magic = 0;

	XSI_MSG(XSI_DBG_MSG, "RX enter\n");

	curRxMsg = (xsiRxMsg_t*) msg_p;	

	srcport = curRxMsg->rxMsgW1.raw.sport;
	
	if(SUPPORT_USB_PCIE_IN_GDMA4){
		/*PCIE0 and PCIE1 are mutually exclusive, only choose one*/
		if((srcport == HSGMII_LAN_PCIE0_SRCPORT) && PCIE0_VALID){
			hsgmii_p = hsgmii_pcie0_p;
			hsgmii_dev = hsgmii_pcie0_dev;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if((srcport == HSGMII_LAN_PCIE1_SRCPORT) && PCIE1_VALID){
			hsgmii_p = hsgmii_pcie1_p;
			hsgmii_dev = hsgmii_pcie1_dev;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if(srcport == HSGMII_LAN_USB_SRCPORT){
			hsgmii_p = hsgmii_usb_p;
			hsgmii_dev = hsgmii_usb_dev;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if(srcport == HSGMII_LAN_ETH_SRCPORT){
			hsgmii_p = hsgmii_eth_p;
			hsgmii_dev = hsgmii_eth_dev;
			magic = FOE_MAGIC_XSI;
		}
	}else if(SUPPORT_USB_ETH_IN_GDMA4){
		if(srcport == HSGMII_LAN_PCIE0_SRCPORT){
			hsgmii_p = hsgmii_pcie0_p;
			hsgmii_dev = hsgmii_pcie0_dev;
			magic = FOE_MAGIC_XSI;
		}else if(srcport == HSGMII_LAN_PCIE1_SRCPORT){
			hsgmii_p = hsgmii_pcie1_p;
			hsgmii_dev = hsgmii_pcie1_dev;
			magic = FOE_MAGIC_XSI;
		}else if(srcport == HSGMII_LAN_USB_SRCPORT){
			hsgmii_p = hsgmii_usb_p;
			hsgmii_dev = hsgmii_usb_dev;
			magic = FOE_MAGIC_XSI_GDM4;
		}else if(srcport == HSGMII_LAN_ETH_SRCPORT){
			hsgmii_p = hsgmii_eth_p;
			hsgmii_dev = hsgmii_eth_dev;
			magic = FOE_MAGIC_XSI_GDM4;
		}
	}else{
		printk("error, not support hsgmii_lan port \n");
	}

	if (NULL == hsgmii_dev || NULL == hsgmii_p)
	{
		return -ENOMEM;
	}

    /**************** check packet len *****************/ 
	if (unlikely((rx_len < 52) || (rx_len > max_pkt_len)))
	{
        hsgmii_p->xsiStat.inErrors++;
		hsgmii_p->xsiStat.inDrops++;
        dev_kfree_skb_any(skb);
        return 1;
    }
    skb_put(skb, rx_len);

    /**************** check rx msg *****************/
    
	
	if (likely(ra_sw_nat_hook_rxinfo))
		ra_sw_nat_hook_rxinfo(skb, magic, (char*)&curRxMsg->rxMsgW1, sizeof(rxMsgWord1_t));

	/**************** check rx msg *****************/ 
	if( unlikely(RxMsgW1.ip4f)){
		hsgmii_p->xsiStat.inErrors++;
		printk("IP checksum error \n");
		}
	if( unlikely(RxMsgW1.l4f)){
		hsgmii_p->xsiStat.inErrors++;
		printk("TCP/UDP checksum error \n");
	}
            
	if ((RxMsgW1.ip4 || RxMsgW1.ip6) && (!RxMsgW1.ip4f && !RxMsgW1.l4f)){
		skb->ip_summed = CHECKSUM_UNNECESSARY;
	}else{
		skb->ip_summed = CHECKSUM_NONE;
	}

	/**************** Count the MIB-II *****************/
	{
		update_xsi_sw_mib(hsgmii_p, skb, XSI_RX);
		skb->dev = hsgmii_dev;
	}

    //xsi_virtual_itf_rx(skb);

#ifdef TCSUPPORT_CT_LOOPDETECT
	if(check_rcv_hook && check_rcv_hook(skb)){
		return 1;
	}
#endif

    /**************** Layer 2 packet handle *****************/
    skb->protocol = eth_type_trans(skb, skb->dev);
    skb->dev->last_rx = jiffies;   

#if defined(CONFIG_TP_IMAGE) && defined(TCSUPPORT_WAN_ETHER)
    if(wan_speed_test_hook)
    {
        if(wan_speed_test_hook(skb) == 0)
        {
            return 0;
        }
    }
#endif /* defined(CONFIG_TP_IMAGE) && defined(TCSUPPORT_WAN_ETHER) */
	
#ifdef TCSUPPORT_RA_HWNAT
    if (ecnt_l2tp_api_rx_handle(skb) > 0)
    {
	   return 0;
    }
    
    if (ra_sw_nat_hook_rx) {
        if (ra_sw_nat_hook_rx(skb) == 0) {
            return 0;
        }
    }
#endif


#ifdef TCSUPPORT_TLS
	if(!FE_API_TLS_FORWARD(skb,FE_TLS_FORWARD_UPSTREAM))
		return 0;
#endif

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_XPON_HAL_API_EXT) || defined(TCSUPPORT_XPON_HAL_API)
    PPE_API_TRAFFIC_CLASSIFY(skb) ;
#endif/*TCSUPPORT_COMPILE*/

#if defined(TCSUPPORT_SWNAT)
	if(sw_upstream_nat_rx_hook){
		if(sw_upstream_nat_rx_hook(skb, 0)){
			return 0;
		}
	}
#endif

	if(0 == ECNT_HOOK_MULTICAST_DATA_HANLDE(skb))
	{
		dev_kfree_skb_any(skb);
		return 1;
	}
	if(ECNT_CONTINUE == ECNT_API_BBF247_PKT_US_HANDLE(skb)){
		//pkt has been forward by bbf247
	}
	else{
    	netif_receive_skb(skb);
	}

	return 0;
}


int hsgmii_lan_api_ingress_port_ratelimit(ECNT_HSGMII_Data_s *xsi_data)
{
	uint hsgmii_index = 0;
	uint type = 0;
	uint rate = 0;
	uint mode = 0;

	hsgmii_index = xsi_data->hsgmii_index;
	type = 3;//HSGMII_RX_TOTAL_RATE
	rate = xsi_data->xsi_private.rate_cfg.rate;
	mode = xsi_data->xsi_private.rate_cfg.mode;
	
	xsi_mac_set_ratelimit(hsgmii_index, type, rate, mode);

	return 0;
}

int hsgmmii_lan_channel_retire(uint hsgmii_index, FE_Gdma_Sel_t GDM_SEL, unchar channel)
{
	unsigned int reg_val = 0;

	ETHER_API_GET_FLOW_CONTROL(6, &reg_val);
	ETHER_API_SET_FLOW_CONTROL(6, 0);                        
	xsiSetTxmbiDisable(hsgmii_index);
	printk("%s:%d do channel retire for GDMA%d\n",__FUNCTION__,__LINE__, GDM_SEL+1);
	xsimaclogicrst(hsgmii_index);
	xsimaclogicrstenable(hsgmii_index);
	if(channel == 32)
		FE_API_SET_CHANNEL_RETIRE_ALL(GDM_SEL, channel);	
	else		
		FE_API_SET_CHANNEL_RETIRE_ONE(GDM_SEL, channel);
	xsiSetTxmbiEnable(hsgmii_index);
	ETHER_API_SET_FLOW_CONTROL(6, reg_val);

	return 0;

}
static void xsi_dev_check_linkstate(struct net_device *dev, int linkstate)
{
	static int hsgmii_lan_not_ready_count=0;
		if(dev) {
			if(linkstate&&(dev->state==2 || dev->state==3)&& (hsgmii_lan_not_ready_count<2)&&
			(get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_ETHER) == ECNT_EVENT_SERDES_PHY_E)){
				netif_carrier_off(dev);
				netif_carrier_on(dev);
				hsgmii_lan_not_ready_count++;
			}
			if(linkstate){
				if(!netif_carrier_ok(dev))
					netif_carrier_on(dev);
			} else{
				if(netif_carrier_ok(dev))
					netif_carrier_off(dev);
			}
		}
			
	return;
}

/*
1. notify kernel when plugin-in or plugin-out cabel, if support get exact rate.
2. when find xfi port link state change from up to down, then:
  2.1 clean hwnat entry if support get exact rate.
  2.2 do channel retire if set SUPPORT_GDMA_CHANNEL_RETIRE.
*/
void xsi_handle_link_stats(struct net_device *dev, unsigned int hsgmii_index)
{
    unsigned int link_stats = 0;
    unsigned int stats_mask = 0x1;
    FE_Gdma_Sel_t gdm_idx;
    unsigned int xsi_retire_channle, xsi_channel;

    if(hsgmii_index >= XSI_MAX_IDX){
        return;
    }

    link_stats = stats_mask & xsi_get_xsgmii_serdes_linkstats(hsgmii_index);
    
    xsi_dev_check_linkstate(dev,link_stats);

    if(link_stats != (GET_XSI_LINKSTATS(hsgmii_index)) && (link_stats == DOWN))
    {
        xsi_channel = GET_XSI_CHANNEL(hsgmii_index);
        if(hwnat_clean_xsi_lan_hook){
            hwnat_clean_xsi_lan_hook(hsgmii_index, xsi_channel);
        }
#if SUPPORT_GDMA_CHANNEL_RETIRE
        gdm_idx = GET_XSI_GDM(hsgmii_index);
        xsi_retire_channle = GET_XSI_RETIRE_CHANNEL(hsgmii_index);
        hsgmmii_lan_channel_retire(hsgmii_index, gdm_idx, xsi_retire_channle);
#endif
    }

    SET_XSI_LINKSTATS(hsgmii_index,link_stats);
}


void xsi_handle_sfp_link_stats(struct net_device *dev, unsigned int hsgmii_index)
{
    unsigned int link_stats = 0;
    if(hsgmii_index >= XSI_MAX_IDX){
        return;
    }
    link_stats = xsi_get_xsgmii_sfp_linkstatus(hsgmii_index);
    xsi_dev_check_linkstate(dev,link_stats);

}


int xsi_LinkSt_monitor(void)
{
	int rateValue[6] = {10000, 5000, 2500, 1000, 100, 10};	/* unit: mbps */
	int speed[4] = {0, 0, 0, 0};
	QDMA_TxRateLimitSet_T txRateLimitSet;
	memset(&txRateLimitSet, 0, sizeof(QDMA_TxRateLimitSet_T));

	//xsgmii_get_linkrate_api need ENB provide
	if(PCIE0_LAN_VALID)
	{
		speed[0] = xsi_get_xsgmii_serdes_linkrate(XSI_PCIE0_IDX);
		if(pcie0_speed != speed[0])
		{
			txRateLimitSet.chnlRateLimitEn = 1;	
			txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_PCIE0_CHNL);
			txRateLimitSet.rateLimitValue = (rateValue[speed[0]] * 1000 + 70); 	/* unit: kbps */
			if(speed[0] == 0 || hsgmii_lan_set_fast(XSI_PCIE0_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
			{
				txRateLimitSet.chnlRateLimitEn = 0;	
				txRateLimitSet.rateLimitValue = 0;
			}
			QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
			
			pcie0_speed = speed[0];

			//usxgmii mode disable rx frag & use fe frag
			if(SERDES_EOF)
			{
				if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI1) ==ECNT_EVENT_SERDES_WIFI1_USXGMII)
				{
					xsiSetRxFragLen(XSI_PCIE0_IDX,31);
					xsi_mac_api_set_rx_frag(XSI_PCIE0_IDX);
				}
				else{
					xsi_mac_set_rx_frag_len(XSI_PCIE0_IDX,4);
				}
			}
			//E1 disable tx frag & use fe frag
			if(FC_FRAG_ERR)
			{
				xsiSetTxFragLen(XSI_PCIE0_IDX,31);
				xsi_mac_api_set_tx_frag(XSI_PCIE0_IDX);
			}
			else
			{
				xsi_mac_set_tx_frag_len(XSI_PCIE0_IDX,4);
			}
			
			XSI_MSG(XSI_DBG_MSG,"%s:%d pcie0_speed=%d\n",__FUNCTION__,__LINE__,pcie0_speed);
		}
        if((get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_WIFI1) == ECNT_EVENT_SERDES_PHY_AN8811)
            || SUPPORT_XSI_EXACT_LINK_STATUS)
        {
            xsi_handle_link_stats(hsgmii_pcie0_dev,XSI_PCIE0_IDX);
        }
	}
	if(PCIE1_LAN_VALID)
	{
		speed[1] = xsi_get_xsgmii_serdes_linkrate(XSI_PCIE1_IDX);
		if(pcie1_speed != speed[1])
		{
			txRateLimitSet.chnlRateLimitEn = 1;	
			txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_PCIE1_CHNL);
			txRateLimitSet.rateLimitValue = (rateValue[speed[1]] * 1000 + 70); 	/* unit: kbps */
			if(speed[1] == 0 || hsgmii_lan_set_fast(XSI_PCIE1_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
			{
				txRateLimitSet.chnlRateLimitEn = 0;
				txRateLimitSet.rateLimitValue = 0;
			}
			QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
			
			pcie1_speed = speed[1];

			//usxgmii mode disable rx frag & use fe frag
			if(SERDES_EOF)
			{
				if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI2) ==ECNT_EVENT_SERDES_WIFI2_USXGMII)
				{
					xsiSetRxFragLen(XSI_PCIE1_IDX,31);
					xsi_mac_api_set_rx_frag(XSI_PCIE1_IDX);
				}
				else{
					xsi_mac_set_rx_frag_len(XSI_PCIE1_IDX,4);
				}
			}
			//E1 disable tx frag & use fe frag
			if(FC_FRAG_ERR)
			{
				xsiSetTxFragLen(XSI_PCIE1_IDX,31);
				xsi_mac_api_set_tx_frag(XSI_PCIE1_IDX);
			}
			else
			{
				xsi_mac_set_tx_frag_len(XSI_PCIE1_IDX,4);
			}
			XSI_MSG(XSI_DBG_MSG,"%s:%d pcie1_speed=%d\n",__FUNCTION__,__LINE__,pcie1_speed);
		}

        if((get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_WIFI2) == ECNT_EVENT_SERDES_PHY_AN8811)
            || SUPPORT_XSI_EXACT_LINK_STATUS)
        {
            xsi_handle_link_stats(hsgmii_pcie1_dev,XSI_PCIE1_IDX);
        }

	}
	if(USB_LAN_VALID)
	{
		speed[2] = xsi_get_xsgmii_serdes_linkrate(XSI_USB_IDX);
		if(usb_speed != speed[2])
		{
			txRateLimitSet.chnlRateLimitEn = 1;	
			txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_USB_CHNL);
			txRateLimitSet.rateLimitValue = (rateValue[speed[2]] * 1000 + 70); 	/* unit: kbps */
			if(speed[2] == 0 || hsgmii_lan_set_fast(XSI_USB_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
			{
				txRateLimitSet.chnlRateLimitEn = 0;	
				txRateLimitSet.rateLimitValue = 0;
			}
			QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
			
			usb_speed = speed[2];
			XSI_MSG(XSI_DBG_MSG,"%s:%d usb_speed=%d\n",__FUNCTION__,__LINE__,usb_speed);
		}
		//E1 disable rx frag & use fe frag
		if(SERDES_EOF)
		{
			xsiSetRxFragLen(XSI_USB_IDX,31);
			xsi_mac_api_set_rx_frag(XSI_USB_IDX);
		}
		else{
			xsi_mac_set_rx_frag_len(XSI_USB_IDX,4);
		}
		//E1 disable tx frag & use fe frag
		if(FC_FRAG_ERR)
		{
			xsiSetTxFragLen(XSI_USB_IDX,31);
			xsi_mac_api_set_tx_frag(XSI_USB_IDX);
		}
		else
		{
			xsi_mac_set_tx_frag_len(XSI_USB_IDX,4);
		}

        if((get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_USB1) == ECNT_EVENT_SERDES_PHY_AN8811)
            || SUPPORT_XSI_EXACT_LINK_STATUS)
        {
            xsi_handle_link_stats(hsgmii_usb_dev,XSI_USB_IDX);
        }
    }
	if(ETH_LAN_VALID)
	{
#if SUPPORT_AS21xx_WA
		if(get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_ETHER) == ECNT_EVENT_SERDES_PHY_F)
		{
			if(eth_linkup_wrapper_wa_flag ==1)
			{
				printk("linkup_wrapper_wa  mdelay 2000 \n");
				mdelay(eth_linkup_wrapper_delay_time);
				xsgmii_api(1,0,248,0,0);
			}
		}
#endif
		speed[3] = xsi_get_xsgmii_serdes_linkrate(XSI_ETH_IDX);
		if(eth_speed != speed[3])
		{
			txRateLimitSet.chnlRateLimitEn = 1;	
			txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_ETH_CHNL);
			txRateLimitSet.rateLimitValue = (rateValue[speed[3]] * 1000 + 70); 	/* unit: kbps */
			if(speed[3] == 0 || hsgmii_lan_set_fast(XSI_ETH_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
			{
				txRateLimitSet.chnlRateLimitEn = 0;	
				txRateLimitSet.rateLimitValue = 0;
			}
#ifdef CONFIG_TP_IMAGE
			/* we use txratelimit to set ewan qos,so we don't want to recover here */
			if(txratelimit == 0)
#endif /* CONFIG_TP_IMAGE */
				QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
			
			eth_speed = speed[3];
			//usxgmii mode disable rx frag & use fe frag
			if(SERDES_EOF)
			{
				if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_ETHER) ==ECNT_EVENT_SERDES_ETHER_USXGMII)
				{
					xsiSetRxFragLen(XSI_ETH_IDX,31);
					xsi_mac_api_set_rx_frag(XSI_ETH_IDX);
				}
				else{
					xsi_mac_set_rx_frag_len(XSI_ETH_IDX,4);
				}
			}
			//E1 disable tx frag & use fe frag
			if(FC_FRAG_ERR)
			{
				xsiSetTxFragLen(XSI_ETH_IDX,31);
				xsi_mac_api_set_tx_frag(XSI_ETH_IDX);
			}
			else
			{
				xsi_mac_set_tx_frag_len(XSI_ETH_IDX,4);
			}
			XSI_MSG(XSI_DBG_MSG,"%s:%d eth_speed=%d\n",__FUNCTION__,__LINE__,eth_speed);
		}

        if((get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_ETHER) == ECNT_EVENT_SERDES_PHY_AN8811)
            || SUPPORT_XSI_EXACT_LINK_STATUS)
        {
            xsi_handle_link_stats(hsgmii_eth_dev,XSI_ETH_IDX);
        }
		else if((get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_ETHER) == ECNT_EVENT_SERDES_PHY_E) && (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_ETHER) ==ECNT_EVENT_SERDES_ETHER_USXGMII))
		{
			xsi_handle_sfp_link_stats(hsgmii_eth_dev,XSI_ETH_IDX);
		}
	}

	return 0;
}

int xsi_ratelimit_init(void)
{
	int rateValue[6] = {10000, 5000, 2500, 1000, 100, 10};	/* unit: mbps */
	QDMA_TxRateLimitSet_T txRateLimitSet;

	memset(&txRateLimitSet, 0, sizeof(QDMA_TxRateLimitSet_T));

	if(PCIE0_LAN_VALID)
	{
		pcie0_speed = xsi_get_xsgmii_serdes_linkrate(XSI_PCIE0_IDX);
		txRateLimitSet.chnlRateLimitEn = 1;	
		txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_PCIE0_CHNL);
		txRateLimitSet.rateLimitValue = (rateValue[pcie0_speed] * 1000 + 70); 	/* unit: kbps */
		if(pcie0_speed == 0|| hsgmii_lan_set_fast(XSI_PCIE0_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
		{
			txRateLimitSet.chnlRateLimitEn = 0;	
			txRateLimitSet.rateLimitValue = 0;
		}
		QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
	}
	if(PCIE1_LAN_VALID)
	{
		pcie1_speed = xsi_get_xsgmii_serdes_linkrate(XSI_PCIE1_IDX);
		txRateLimitSet.chnlRateLimitEn = 1;	
		txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_PCIE1_CHNL);
		txRateLimitSet.rateLimitValue = (rateValue[pcie1_speed] * 1000 + 70); 	/* unit: kbps */
		if(pcie1_speed == 0|| hsgmii_lan_set_fast(XSI_PCIE1_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
		{
			txRateLimitSet.chnlRateLimitEn = 0;	
			txRateLimitSet.rateLimitValue = 0;
		}
		QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
	}
	if(USB_LAN_VALID)
	{
		usb_speed = xsi_get_xsgmii_serdes_linkrate(XSI_USB_IDX);
		txRateLimitSet.chnlRateLimitEn = 1;	
		txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_USB_CHNL);
		txRateLimitSet.rateLimitValue = (rateValue[usb_speed] * 1000 + 70); 	/* unit: kbps */
		if(usb_speed == 0 || hsgmii_lan_set_fast(XSI_USB_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
		{
			txRateLimitSet.chnlRateLimitEn = 0;	
			txRateLimitSet.rateLimitValue = 0;
		}
		QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
	}
	if(ETH_LAN_VALID)
	{
		eth_speed = xsi_get_xsgmii_serdes_linkrate(XSI_ETH_IDX);
		txRateLimitSet.chnlRateLimitEn = 1;	
		txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_ETH_CHNL);
		txRateLimitSet.rateLimitValue = (rateValue[eth_speed] * 1000 + 70); 	/* unit: kbps */
		if(eth_speed == 0 || hsgmii_lan_set_fast(XSI_ETH_IDX) || xsi_fast_path_dir[FAST_PATH_DIR_XSI_ETHER])
		{
			txRateLimitSet.chnlRateLimitEn = 0;	
			txRateLimitSet.rateLimitValue = 0;
		}
		QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
	}

	return 0;
}

#ifdef CONFIG_TP_IMAGE
int xsi_ratelimit_set_tp(int txratelimit)
{
	QDMA_TxRateLimitSet_T txRateLimitSet;

	memset(&txRateLimitSet, 0, sizeof(QDMA_TxRateLimitSet_T));

	if(0 == txratelimit)
	{
		/* reinit ratelimit */
		xsi_ratelimit_init();
	}
	else if(txratelimit < 0)
	{
		/* disable ratelimit */
		if(ETH_LAN_VALID)
		{
			
			txRateLimitSet.chnlRateLimitEn = 0; 
			txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_ETH_CHNL);
			txRateLimitSet.rateLimitValue = 0;	/* unit: kbps */
			QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
		}
		
	}
	else if(txratelimit > 0)
	{
		if(ETH_LAN_VALID)
		{
			
			txRateLimitSet.chnlRateLimitEn = 1; 
			txRateLimitSet.chnlIdx = QDMA_API_GET_CHANNEL_CFG(ECNT_QDMA_LAN, HSGMII_LAN_ETH_CHNL);
			txRateLimitSet.rateLimitValue = txratelimit;	/* unit: kbps */
			QDMA_API_SET_TX_RATELIMIT(ECNT_QDMA_LAN, &txRateLimitSet);
		}
	}

	return 0;
}
#endif /* CONFIG_TP_IMAGE */
static int xsi_dev_register(void)
{
	struct net_device *dev;
	int err = 0;
	int i = 0;

	if(use_unify_eth_name)
	{
		for(i;i<HWNAT_LAN_IF_MAXNUM;i++){		
			if(!check_lanport_type(i))			
				continue;		
			else {
				switch(get_lan_info(i))
				{
					case HSGMII_USB:
						sprintf(tmp_itf[0],"eth0.%d",i+1);
						hsgmii_usb_itf = tmp_itf[0];
						break;
					case HSGMII_PCIE0:
						sprintf(tmp_itf[1],"eth0.%d",i+1);
						hsgmii_pcie0_itf = tmp_itf[1];
						break;
					case HSGMII_PCIE1:
						sprintf(tmp_itf[2],"eth0.%d",i+1);
						hsgmii_pcie1_itf = tmp_itf[2];
						break;
					case HSGMII_ETH:
						sprintf(tmp_itf[3],"eth0.%d",i+1);
#if defined(CONFIG_TP_IMAGE)
						/* save origin pointer */
						hsgmii_eth_itf_origin = hsgmii_eth_itf;
#endif
						hsgmii_eth_itf = tmp_itf[3];
						break;
				}
			}		
		}
		ITF_NAME_LENGTH = 6;
	}
	else
	{
		hsgmii_pcie0_itf = "eth2";
		hsgmii_pcie1_itf = "eth3";
		hsgmii_usb_itf = "eth1";
		hsgmii_eth_itf = "eth4";
		ITF_NAME_LENGTH = 4;
	}

	if(PCIE0_VALID){
		dev = alloc_netdev(sizeof(xsiAdapter_t), hsgmii_pcie0_itf, NET_NAME_USER, ether_setup);

		if (!dev){
	        XSI_MSG(XSI_DBG_ERR,"alloc_netdev fail!\n");
			return -ENOMEM;
	    }
			
		hsgmii_pcie0_dev = dev;
		hsgmii_pcie0_p = netdev_priv(dev);
		
		dev->netdev_ops = &hsgmii_pcie0_netdev_ops;
		XSI_MSG(XSI_DBG_MSG,"xsi_dev = %p\n",hsgmii_pcie0_dev);

		err = register_netdev(dev);
	    if (err)
		{
			printk(KERN_INFO "%s(): register hsgmii_pcie0_itf netdev fail! \n", __FUNCTION__);
			return err;
		}

	}

	if(PCIE1_VALID){
		dev = alloc_netdev(sizeof(xsiAdapter_t), hsgmii_pcie1_itf, NET_NAME_USER, ether_setup);

		if (!dev){
	        XSI_MSG(XSI_DBG_ERR,"alloc_netdev fail!\n");
			return -ENOMEM;
	    }
			
		hsgmii_pcie1_dev = dev;
		hsgmii_pcie1_p = netdev_priv(dev);
		
		dev->netdev_ops = &hsgmii_pcie1_netdev_ops;
		XSI_MSG(XSI_DBG_MSG,"xsi_dev = %p\n",hsgmii_pcie1_dev);

		err = register_netdev(dev);
	    if (err)
		{
			printk(KERN_INFO "%s(): register hsgmii_pcie1_itf netdev fail!\n", __FUNCTION__);
			return err;
		}

	}

	if(USB_VALID){
		dev = alloc_netdev(sizeof(xsiAdapter_t), hsgmii_usb_itf, NET_NAME_USER, ether_setup);

		if (!dev){
	        XSI_MSG(XSI_DBG_ERR,"alloc_netdev fail!\n");
			return -ENOMEM;
	    }
			
		hsgmii_usb_dev = dev;
		hsgmii_usb_p = netdev_priv(dev);
		
		dev->netdev_ops = &hsgmii_usb_netdev_ops;
		XSI_MSG(XSI_DBG_MSG,"xsi_dev = %p\n",hsgmii_usb_dev);

		err = register_netdev(dev);
	    if (err)
		{
			printk(KERN_INFO "%s(): register usb netdev fail!", __FUNCTION__);
			return err;
		}

	}

	
	if(ETH_VALID){
		dev = alloc_netdev(sizeof(xsiAdapter_t), hsgmii_eth_itf, NET_NAME_USER, ether_setup);

		if (!dev){
	        XSI_MSG(XSI_DBG_ERR,"alloc_netdev fail!\n");
			return -ENOMEM;
	    }
			
		hsgmii_eth_dev = dev;
		hsgmii_eth_p = netdev_priv(dev);
		
		dev->netdev_ops = &hsgmii_eth_netdev_ops;
		XSI_MSG(XSI_DBG_MSG,"xsi_dev = %p\n",hsgmii_eth_dev);

		err = register_netdev(dev);
	    if (err)
		{
			printk(KERN_INFO "%s(): register usb netdev fail!", __FUNCTION__);
			return err;
		}

#ifdef CONFIG_TP_IMAGE
		/* initial state is off */
		//netif_carrier_off(hsgmii_eth_dev);
#endif /* CONFIG_TP_IMAGE */
	}
	
	
	return 0;

}



static int xsi_dev_unregister(void)
{
	struct net_device *dev;

	if(PCIE0_VALID){
		unregister_netdev(hsgmii_pcie0_dev);
		free_netdev(hsgmii_pcie0_dev);
	}

	if(PCIE1_VALID){
		unregister_netdev(hsgmii_pcie1_dev);
		free_netdev(hsgmii_pcie1_dev);

	}

	if(USB_VALID){
		unregister_netdev(hsgmii_usb_dev);
		free_netdev(hsgmii_usb_dev);

	}

	if(ETH_VALID){
		unregister_netdev(hsgmii_eth_dev);
		free_netdev(hsgmii_eth_dev);

	}
	
	return 0;

}

static irqreturn_t hsgmii_eth_mac_isr(int irq, void *dev_id)
{
	printk("Detect eth mac eee interrupt.\n");
	return IRQ_HANDLED;
}

static irqreturn_t hsgmii_usb_pcie_mac_isr(int irq, void *dev_id)
{
	printk("Detect usb or pcie mac eee interrupt.\n");
	return IRQ_HANDLED;
}

static int xsi_mac_eee_irq_init(void)
{
	struct device *dev = NULL;
	
	if((dev=get_xsi_dev()) == NULL){
		printk("Get device failed.\n") ; 
		return 0 ;
	}
	
	if(request_irq(get_xsi_mac_eee_irq(0), hsgmii_eth_mac_isr, 0, "hsgmii_eth_mac_isr", dev) != 0) {
		printk("Request the XSI interrupt service routine fail, irq:%d.\n", get_xsi_mac_eee_irq(0)) ;
		return -ENODEV ;
	}

	if(request_irq(get_xsi_mac_eee_irq(2), hsgmii_usb_pcie_mac_isr, 0, "hsgmii_usb_pcie_mac_isr", dev) != 0) {
		printk("Request the XSI interrupt service routine fail, irq:%d.\n", get_xsi_mac_eee_irq(2)) ;
		return -ENODEV ;
	}

	return 0;
}

int xsi_mac_init(void)
{
	uint32 i = 0;
	QDMA_MulticastFportCfg_T multicastFportCfg = {0};
	ECNT_HSGMII_Data_s xsi_data ={0};
    printk("xsi mac driver init \n");
	if (hsgmiiMacInitialized)
		return 0;
	
	/*setting xsi phy*/
	if(PCIE0_VALID){
		xsi_data.hsgmii_index = XSI_PCIE0_IDX;
		FE_API_SET_GDMA_DISABLE(XSI_PCIE0_IDX);//close gdm3 before open napi.

		xsi_mac_itf_reset(XSI_PCIE0_IDX);
		hsgmii_pcie0_p->statisticOn = XSI_MAC_STATISTIC_ON;

		xsi_mac_set_mpi_mbi_disable(XSI_PCIE0_IDX);
		mdelay(1);
		//mac reset
		if (SUPPORT_MAC_RESET_SEPRATION)
			xsi_mac_api_reset(XSI_PCIE0_IDX);
		else
			xsi_mac_api_logic_reset(&xsi_data);
		//mac protect
		xsi_mac_set_mpi_mbi_disable(XSI_PCIE0_IDX);
		mdelay(1);
		xsi_mac_set_ipg(XSI_PCIE0_IDX, 10);

		//E1 disable tx frag & use fe frag
		if(FC_FRAG_ERR)
		{
			xsiSetTxFragLen(XSI_PCIE0_IDX,31);
			xsi_mac_api_set_tx_frag(XSI_PCIE0_IDX);
		}
		else
		{
			xsi_mac_set_tx_frag_len(XSI_PCIE0_IDX,4);
		}
		//usxgmii mode disable rx frag & use fe frag
		if((SERDES_EOF) && (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI1) ==ECNT_EVENT_SERDES_WIFI1_USXGMII))
		{
			xsiSetRxFragLen(XSI_PCIE0_IDX,31);
			xsi_mac_api_set_rx_frag(XSI_PCIE0_IDX);
		}
		else{
			xsi_mac_set_rx_frag_len(XSI_PCIE0_IDX,4);
		}
		
		xsi_mac_set_mpi_mbi_enable(XSI_PCIE0_IDX);
		xsiSetTxFcEnable(XSI_PCIE0_IDX);
		xsiSetRxFcEnable(XSI_PCIE0_IDX);
		
		for ( i = 0; i < 6; i++ )
			hsgmii_pcie0_p->macAddr[i] = def_xsi_mac_addr[i];
	}

	if(PCIE1_VALID){
		xsi_data.hsgmii_index = XSI_PCIE1_IDX;
		FE_API_SET_GDMA_DISABLE(XSI_PCIE1_IDX);//close gdm3 before open napi.


		xsi_mac_itf_reset(XSI_PCIE1_IDX);
		hsgmii_pcie1_p->statisticOn = XSI_MAC_STATISTIC_ON;
		
		xsi_mac_set_mpi_mbi_disable(XSI_PCIE1_IDX);
		mdelay(1);
		//mac reset
		if (SUPPORT_MAC_RESET_SEPRATION)
			xsi_mac_api_reset(XSI_PCIE1_IDX);
		else
			xsi_mac_api_logic_reset(&xsi_data);
		//mac protect
		xsi_mac_set_mpi_mbi_disable(XSI_PCIE1_IDX);
		mdelay(1);
		xsi_mac_set_ipg(XSI_PCIE1_IDX, 10);

		//E1 disable tx frag & use fe frag
		if(FC_FRAG_ERR)
		{
			xsiSetTxFragLen(XSI_PCIE1_IDX,31);
			xsi_mac_api_set_tx_frag(XSI_PCIE1_IDX);
		}
		else
		{
			xsi_mac_set_tx_frag_len(XSI_PCIE1_IDX,4);
		}
		//usxgmii mode disable rx frag & use fe frag
		if((SERDES_EOF) && (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI2) ==ECNT_EVENT_SERDES_WIFI2_USXGMII))
		{
			xsiSetRxFragLen(XSI_PCIE1_IDX,31);
			xsi_mac_api_set_rx_frag(XSI_PCIE1_IDX);
		}
		else{
			xsi_mac_set_rx_frag_len(XSI_PCIE1_IDX,4);
		}
		
		xsi_mac_set_mpi_mbi_enable(XSI_PCIE1_IDX);
		xsiSetTxFcEnable(XSI_PCIE1_IDX);
		xsiSetRxFcEnable(XSI_PCIE1_IDX);
		
		for ( i = 0; i < 6; i++ )
			hsgmii_pcie1_p->macAddr[i] = def_xsi_mac_addr[i];
		multicastFportCfg.chnlIdx = HSGMII_LAN_PCIE1_CHNL;

		if(SUPPORT_USB_PCIE_IN_GDMA4){
			multicastFportCfg.fport = ((DPORT_GDMA4<<5)|5);
		}else{
			multicastFportCfg.fport = ((DPORT_GDMA3<<5)|5);		
		}
		
		QDMA_API_SET_MULTICAST_FPORT_CFG(ECNT_QDMA_LAN, &multicastFportCfg);
	}
	
	if(ETH_VALID){
		
		xsi_data.hsgmii_index = XSI_ETH_IDX;
		FE_API_SET_GDMA_DISABLE(XSI_ETH_IDX);//close gdm4 before open napi.

		xsi_mac_itf_reset(XSI_ETH_IDX);
		hsgmii_eth_p->statisticOn = XSI_MAC_STATISTIC_ON;
		
		//fe protect
		xsi_mac_set_mpi_mbi_disable(XSI_ETH_IDX);
		xsi_mac_set_frag_disable(XSI_ETH_IDX);
		mdelay(1);
		//fe gdm4 arbiter reset
		//FE_API_SET_MBI_ARB_RST(FE_GDM_SEL_GDMA4);
		xsiClearAllCnt(XSI_ETH_IDX);
		//mac  reset
		if (SUPPORT_MAC_RESET_SEPRATION)
			xsi_mac_api_reset(XSI_ETH_IDX);
		else
			xsi_mac_api_logic_reset(&xsi_data);
		//mac protect
		xsi_mac_set_mpi_mbi_disable(XSI_ETH_IDX);
		mdelay(1);
		xsi_mac_set_ipg(XSI_ETH_IDX, 10);

		//E1 disable tx frag & use fe frag
		if(FC_FRAG_ERR)
		{
			xsiSetTxFragLen(XSI_ETH_IDX,31);
			xsi_mac_api_set_tx_frag(XSI_ETH_IDX);
		}
		else
		{
			xsi_mac_set_tx_frag_len(XSI_ETH_IDX,4);
		}
		//usxgmii mode disable rx frag & use fe frag
		if((SERDES_EOF) && (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_ETHER) ==ECNT_EVENT_SERDES_ETHER_USXGMII))
		{
			xsiSetRxFragLen(XSI_ETH_IDX,31);
			xsi_mac_api_set_rx_frag(XSI_ETH_IDX);
		}
		else{
			xsi_mac_set_rx_frag_len(XSI_ETH_IDX,4);
		}
		
		xsi_mac_set_mpi_mbi_enable(XSI_ETH_IDX);
		xsiSetTxFcEnable(XSI_ETH_IDX);
		xsiSetRxFcEnable(XSI_ETH_IDX);

		for ( i = 0; i < 6; i++ )
			hsgmii_eth_p->macAddr[i] = def_xsi_mac_addr[i];
		multicastFportCfg.chnlIdx = HSGMII_LAN_ETH_CHNL;
		if(SUPPORT_USB_ETH_IN_GDMA4){
			multicastFportCfg.fport = ((DPORT_GDMA4<<5)|0);
		}else if(SUPPORT_ETH_IN_GDMA3){
			multicastFportCfg.fport = ((DPORT_GDMA3<<5)|0);		
		}
		QDMA_API_SET_MULTICAST_FPORT_CFG(ECNT_QDMA_LAN, &multicastFportCfg);
	}

	if(USB_VALID){
		xsi_data.hsgmii_index = XSI_USB_IDX;
		FE_API_SET_GDMA_DISABLE(XSI_USB_IDX);//close gdm4 before open napi.

		xsi_mac_itf_reset(XSI_USB_IDX);
		hsgmii_usb_p->statisticOn = XSI_MAC_STATISTIC_ON;
		
		xsi_mac_set_mpi_mbi_disable(XSI_USB_IDX);
		mdelay(1);
		//mac reset
		if (SUPPORT_MAC_RESET_SEPRATION)
			xsi_mac_api_reset(XSI_USB_IDX);
		else
			xsi_mac_api_logic_reset(&xsi_data);
		//mac protect
		xsi_mac_set_mpi_mbi_disable(XSI_USB_IDX);
		mdelay(1);
		xsi_mac_set_ipg(XSI_USB_IDX, 10);
		
		//disable rx/tx frag & use fe frag
		if(FC_FRAG_ERR)
		{
			xsiSetTxFragLen(XSI_USB_IDX,31);	
			xsi_mac_api_set_tx_frag(XSI_USB_IDX);
		}
		else{			
			xsi_mac_set_tx_frag_len(XSI_USB_IDX,4);
		}
		if(SERDES_EOF)
		{
			xsiSetRxFragLen(XSI_USB_IDX,31);
			xsi_mac_api_set_rx_frag(XSI_USB_IDX);
		}
		else{
			xsi_mac_set_rx_frag_len(XSI_USB_IDX,4);
		}
		
		xsi_mac_set_mpi_mbi_enable(XSI_USB_IDX);
		xsiSetTxFcEnable(XSI_USB_IDX);
		xsiSetRxFcEnable(XSI_USB_IDX);

		for ( i = 0; i < 6; i++ )
			hsgmii_usb_p->macAddr[i] = def_xsi_mac_addr[i];
		multicastFportCfg.chnlIdx = HSGMII_LAN_USB_CHNL;
		multicastFportCfg.fport = ((DPORT_GDMA4<<5)|1);
		QDMA_API_SET_MULTICAST_FPORT_CFG(ECNT_QDMA_LAN, &multicastFportCfg);
	}


    FE_API_SET_CRC_STRIP(FE_GDM_SEL_GDMA3, FE_ENABLE);
    FE_API_SET_PACKET_LENGTH(FE_GDM_SEL_GDMA3, 0x7d0, 0x3c);

	FE_API_SET_CRC_STRIP(FE_GDM_SEL_GDMA4, FE_ENABLE);
    FE_API_SET_PACKET_LENGTH(FE_GDM_SEL_GDMA4, 0x7d0, 0x3c);
	
	hsgmii_mac_api_set_srcport();
    
	hsgmiiMacInitialized = 1;
	printk("xsi mac driver init OK  \n");
	return 0;
}

static inline void disable_channel_offset(void)
{
    //on AN7583, the offset is added to the channel value of the packet set to gdm3 by default.
    // gdm3 is reused by eth serdes and miniOLT on 7583.
    if(ETH_VALID && SUPPORT_MINIOLT_IN_GDMA3){
        FE_API_SET_QBI_FTTR_CHN_DISABLE();
    }
}

static int __init xsi_mac_module_init(void)
{

    int err = 0, i = 0;
	unsigned int flashQdmaInit = 0;
	// for hsgmii power saving 

	#if 0
	if(PCIE0_VALID)
		xsiSetMpdmDisable(XSI_PCIE0_IDX);
	else
		xsiSetMpdmEnable(XSI_PCIE0_IDX);
	if(PCIE1_VALID)
		xsiSetMpdmDisable(XSI_PCIE1_IDX);
	else
		xsiSetMpdmEnable(XSI_PCIE1_IDX);
	if(USB_VALID)
		xsiSetMpdmDisable(XSI_USB_IDX);
	else
		xsiSetMpdmEnable(XSI_USB_IDX);
	if(PON_VALID)
		xsiSetMpdmDisable(XSI_AE_IDX);
	else
		xsiSetMpdmEnable(XSI_AE_IDX);

	if(ETH_VALID)
		xsiSetMpdmDisable(XSI_ETH_IDX);
	else
		xsiSetMpdmEnable(XSI_ETH_IDX);
		
	#endif

	flashQdmaInit = get_qdmainit();
	for(i = FAST_PATH_DIR_XSI_PCIE0;i < FAST_PATH_DIR_MAX_NUM;i++)
	{
	    xsi_fast_path_dir[i] = (flashQdmaInit>>(i+QDMA_XSI_FAST_PATH_OFFSET))&1;

#if defined(INCLUDE_ITTIM) && defined(CONFIG_TP_IMAGE)
		if (FAST_PATH_DIR_XSI_ETHER == i)
		{
			xsi_ether_fastpath = xsi_fast_path_dir[i];
			printk("fastPath(%d)\n", xsi_fast_path_dir[i]);
		}
#endif /* defined(INCLUDE_ITTIM) && defined(CONFIG_TP_IMAGE) */
	}
	
	if( PCIE0_VALID || PCIE1_VALID || USB_VALID || ETH_VALID)
	{
		serdes_init();
        disable_channel_offset();
	    err = xsi_dev_register();
	    if(err)
	        return err;

	    hsgmii_lan_proc_init();

		if(ecnt_register_hook(&ecnt_driver_hsgmii_lan_op)) {
			return -ENODEV ;
	    }

		xsi_ratelimit_init();
		xsi_mac_init();
		xsi_linkst_monitor_hook = xsi_LinkSt_monitor;
		rcu_assign_pointer(send_to_hsgmii_hook, send_to_hsgmii);
	}

	if(SUPPORT_MAC_EEE)
	{
		xsi_mac_eee_irq_init();
	}
	
    return 0;
}
#if defined(CONFIG_TP_IMAGE)
static void _recover_origin_pointer(void)
{
	/* recover origin point */
	if(hsgmii_eth_itf_origin != NULL);
		hsgmii_eth_itf = hsgmii_eth_itf_origin;

}
#endif
static void __exit xsi_mac_module_exit(void)
{
	if( PCIE0_VALID || PCIE1_VALID || USB_VALID || ETH_VALID)
	{
		xsi_dev_unregister();
		
		hsgmii_lan_proc_exit();

		
		ecnt_unregister_hook(&ecnt_driver_hsgmii_lan_op);

		xsi_linkst_monitor_hook = NULL;
		rcu_assign_pointer(send_to_hsgmii_hook, NULL);
#if defined(CONFIG_TP_IMAGE)
		_recover_origin_pointer();
#endif
	}	

	return;
}

module_init(xsi_mac_module_init);
module_exit(xsi_mac_module_exit);
//module_param(xsi_itf, charp, S_IRUGO);
//module_param(LINK_MODE, uint, 0);
module_param(hsgmii_pcie0_itf, charp, S_IRUGO);
module_param(hsgmii_pcie1_itf, charp, S_IRUGO);
module_param(hsgmii_usb_itf, charp, S_IRUGO);
module_param(hsgmii_eth_itf, charp, S_IRUGO);

module_param(hsgmii_pcie0_mode, uint, 0);
module_param(hsgmii_pcie1_mode, uint, 0);
module_param(hsgmii_usb_mode, uint, 0);
module_param(hsgmii_eth_mode, uint, 0);
module_param(use_unify_eth_name, int, S_IRUGO);




MODULE_LICENSE("Proprietary");

