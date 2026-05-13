/* FILE NAME:  en8811.c
 *
 * PURPOSE:
 *      This driver is for Airoha MDIO bus controller.
 *      It can handle multiple PHYs of AN8811.
 *
 * NOTES:
 *   Version 2.0 is compatibel with 1.x.
 *   It need to use the global varible from mdio_arht.
 *
 */
/************************************************************************
*                       I N C L U D E S                                 *
*************************************************************************
*/
#include <linux/module.h>
#include <net/sock.h>
#include <linux/netlink.h>

#include <linux/delay.h>
#include <linux/printk.h>
#include <linux/proc_fs.h>
#include <linux/phy.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <asm/tc3162/tc3162.h>
#include <linux/module.h>
#include <linux/gpio.h>
#include <linux/gpio/consumer.h>
#include <linux/gpio/driver.h>


#include "air_en8811h.h"
#include "air_en8811h_api.h"

#include "ecnt_event_global/ecnt_event_system.h"
/************************************************************************
*           D A T A   D E C L A R A T I O N S                           *
*************************************************************************
*/
struct arht_mdio_priv {
	struct mii_bus *mii_bus;
};
extern struct arht_mdio_priv *mdio_priv_p;


typedef struct _wan_phy_data{
    struct phy_device *phy_dev;
    uint8_t phy_addr;
    uint32_t  phy_id;
    uint8_t phy_status;
}Wan_phy_data_t;

typedef struct _wan_pon_data{
    uint8_t link;
	uint32_t gpio_id;
}Wan_pon_data_t;

typedef struct _ewan_data{
    struct mii_bus *mii_bus;
    Wan_phy_data_t phy_data;
	Wan_pon_data_t pon_data;
}Wan_data_t; 


typedef enum
{
    WANDETECT_LOG_OFF = 0,
    WANDETECT_LOG_ERROR,
    WANDETECT_LOG_WARNING,
    WANDETECT_LOG_INFO,
    WANDETECT_LOG_DBG,
    WANDETECT_LOG_DUMP_DATA, 
    WANDETECT_LOG_MAX_LEVEL
} WANDETECT_LOG_LEVEL;

int debuglevel = WANDETECT_LOG_ERROR;
#define WANDETECT_LOG(Level,fmt,args...)          \
{                                   \
    if (Level <= debuglevel)        \
    {                               \
        printk("WANDETECT@ [%s:%u]==="fmt,__func__,__LINE__,##args);\
    }                               \
}


Wan_data_t *wan_p;

#define WANDETECT_TRUE 1
#define WANDETECT_FALSE 0


uint8_t init_wan_data_priv(Wan_data_t *wan_p)
{
    WANDETECT_LOG(WANDETECT_LOG_DBG,"Enter \n");

	int phyAddr = INCLUDE_WAN_SERDES_EWAN_PHY_ADDR;
	
	struct phy_device *phydev = mdiobus_get_phy(wan_p->mii_bus, phyAddr);
    WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"phydev[%hhu] = %p\n", phyAddr, phydev);
    if(phydev){
		wan_p->phy_data.phy_dev = phydev;
		wan_p->phy_data.phy_addr = phydev->mdio.addr;
    	wan_p->phy_data.phy_id = phydev->phy_id;
    }
	else {
		return WANDETECT_FALSE;
	}
		
    return WANDETECT_TRUE;
}



typedef struct{
	unsigned int phylink;
	unsigned int ponlink;
}WAN_DETECT_INFO;

WAN_DETECT_INFO wan_detect_info;


#define NETLINK_WANDECT 23

struct sock *nl_sk = NULL;
void send_to_user(WAN_DETECT_INFO *message) {
    struct sk_buff *skb;
    struct nlmsghdr *nlh;
    int len = sizeof(WAN_DETECT_INFO);

    skb = nlmsg_new(NLMSG_SPACE(len), GFP_KERNEL);
    if (!skb) {
        printk(KERN_ERR "Failed to allocate skb\n");
        return;
    }

    nlh = nlmsg_put(skb, 0, 0, NLMSG_DONE, len, 0);
    strncpy(nlmsg_data(nlh), message, len);

	int ret = netlink_broadcast(nl_sk, skb, 0, 1, GFP_ATOMIC);

	printk("netlink ret:%d",ret);
	
}



int init_netlink(void)
{
    nl_sk = netlink_kernel_create(&init_net, NETLINK_WANDECT, NULL);
    if (!nl_sk) {
        printk(KERN_ALERT "Error creating socket.\n");
        return -10;
    }
    return 0;
}



static struct timer_list ewanLinkSt_timer;
static struct timer_list ponLinkSt_timer;


extern int set_serdes(int port_idx, ECNT_EVENT_SYSTEM_SERDES_PHY_SEL_t phy_sel, ECNT_EVENT_SYSTEM_SERDES_ETHER_TYPE_SEL_t ether_type, uint8_t if_sel);


#if 0

static void ewanLinkSt_monitor(TIMER_FUN_PAAM data)
{
	int ret = 0;

	struct phy_device* en8811_phy_dev = wan_p->phy_data.phy_dev;

    if(en8811_phy_dev == NULL){
        WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"en8811_phy_dev is error! \n");
        goto set_timer;
    }
	
	
    ret = en8811h_read_status(en8811_phy_dev);
    if(ret < 0){
        WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"en8811h_read_status ret is error! \n");
        goto set_timer;
    }

	WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"en8811_phy_dev->speed:%d,link:%d \n",en8811_phy_dev->speed,en8811_phy_dev->link);

	if(wan_p->phy_data.phy_status == 0 && en8811_phy_dev->link == 1)
	{
		wan_p->phy_data.phy_status = 1;
		wan_detect_info.phylink = 1;
		//send_to_user(&wan_detect_info);
		WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"phylink:%d \n", wan_detect_info.phylink);
		//if(en8811_phy_dev->drv && en8811_phy_dev->drv->soft_reset)
		//		en8811_phy_dev->drv->soft_reset(en8811_phy_dev);
		//set_serdes_aewan();
	}
set_timer:
	ewanLinkSt_timer.expires = jiffies + msecs_to_jiffies(1000);
  	add_timer(&ewanLinkSt_timer);
}


static void ponLinkSt_monitor(TIMER_FUN_PAAM data)
{

	int pon_phy_los = 1; 
	
	pon_phy_los =gpioGetOnoff(34);
	WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"los = %d\r\n",pon_phy_los);	

	if(wan_p->pon_data.link == 0 && pon_phy_los == 0)
	{
		wan_p->pon_data.link = 1;
		/* notify cos */
		wan_detect_info.ponlink = 1;
		//send_to_user(&wan_detect_info);
		//set_serdes_pon();
	}


	WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"los = %d\r\n",pon_phy_los);
	
	ponLinkSt_timer.expires = jiffies + msecs_to_jiffies(1000);
  	add_timer(&ponLinkSt_timer);
}
#endif /* 0 */

int phylink_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
    int len = 0;

	struct phy_device* en8811_phy_dev = wan_p->phy_data.phy_dev;

    if(en8811_phy_dev == NULL){
        WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"en8811_phy_dev is error! \n");
        return 0;
    }
	
	
    int ret = en8811h_read_status(en8811_phy_dev);
    if(ret < 0){
        WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"en8811h_read_status ret is error! \n");
        return 0;
    }

	WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"en8811_phy_dev->speed:%d,link:%d \n",en8811_phy_dev->speed,en8811_phy_dev->link);


    len += sprintf(buf,"%d\n",en8811_phy_dev->link);

    return len;
}


int ponlink_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
#define GPIO_GPON_LOS    36

    int len = 0;
	int pon_phy_los = 1; 

	int ret = gpio_request(GPIO_GPON_LOS, "gpio_get");
	if(ret)
	{
		WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"ret:%d\n",ret);
		return 0; // Request failed
	}
	
	pon_phy_los = gpio_get_value(GPIO_GPON_LOS);
	gpio_free(GPIO_GPON_LOS);
	
	WANDETECT_LOG(WANDETECT_LOG_DUMP_DATA,"los = %d\n",pon_phy_los);	

	wan_p->pon_data.link = pon_phy_los == 0 ? 1 : 0;
	

    len += sprintf(buf,"%d\n",wan_p->pon_data.link);

    return len;
}


int __init wan_detect_module_init(void)
{
    int ret = WANDETECT_FALSE;
    struct mii_bus *mdio_mii_bus = NULL;


    /*Create and save bus pointer to global variable */
    wan_p = (Wan_data_t*)kmalloc(sizeof(Wan_data_t),  GFP_KERNEL);
	if (wan_p != NULL)
	{
		memset(wan_p, 0, sizeof(Wan_data_t));
		WANDETECT_LOG(WANDETECT_LOG_DBG,"Memory allocation successful, size = %ld\n",sizeof(Wan_data_t));
	}
	else{
		WANDETECT_LOG(WANDETECT_LOG_ERROR,"Memory allocation failed, size = %ld\n",sizeof(Wan_data_t));
		return WANDETECT_FALSE;
	}
    if (wan_p == NULL) {
        WANDETECT_LOG(WANDETECT_LOG_ERROR,"Failed to allocate memory for Wan_data_t\n");
        return -ENOMEM;
    }

    if(mdio_priv_p){
        mdio_mii_bus = mdio_priv_p->mii_bus;
    }
    else{
        kfree(wan_p);
        wan_p = NULL;
        return -EFAULT;
    }

    if(mdio_mii_bus){
        wan_p->mii_bus = mdio_mii_bus;
    }
    else{
        kfree(wan_p);
        wan_p = NULL;
        return -EFAULT;
    }

	memset(&wan_detect_info, 0, sizeof(WAN_DETECT_INFO));
	//init_netlink();

	

    ret = init_wan_data_priv(wan_p);
    if(ret == WANDETECT_FALSE){
        kfree(wan_p);
        wan_p = NULL;
        pr_err("Failed to initialize data structure!\n");
        return ret;
    }

	/* disable power save */
	air_mii_cl45_write(wan_p->phy_data.phy_dev, 0x1e, 0x3e, 0x0);

	
#if 0
    timer_setup(&ewanLinkSt_timer, ewanLinkSt_monitor, 0);
    ewanLinkSt_timer.expires = jiffies + msecs_to_jiffies(1000);
    add_timer(&ewanLinkSt_timer);


    timer_setup(&ponLinkSt_timer, ponLinkSt_monitor, 0);
    ponLinkSt_timer.expires = jiffies + msecs_to_jiffies(1000);
    add_timer(&ponLinkSt_timer);
#endif


	struct proc_dir_entry* wan_detect_proc;

	wan_detect_proc = create_proc_entry("wan_detect_phylink",0, NULL);	
	if(wan_detect_proc) 
    {
    	wan_detect_proc->read_proc = phylink_read_proc;
	}
	
	wan_detect_proc = create_proc_entry("wan_detect_ponlink",0, NULL);	
	if(wan_detect_proc) 
    {
    	wan_detect_proc->read_proc = ponlink_read_proc;
	}
	
	

    pr_info("wan_detect module init ok!\n");
    return 0;
}

void __exit wan_detect_module_exit(void)
{
	remove_proc_entry("wan_detect_phylink", 0);
	remove_proc_entry("wan_detect_ponlink", 0);
    //del_timer(&ewanLinkSt_timer);
	//del_timer(&ponLinkSt_timer);
    //netlink_kernel_release(nl_sk);

    kfree(wan_p);
    wan_p = NULL;
	
    pr_info("wan_detect module exit ok!\n");
}
MODULE_LICENSE("GPL");

module_init(wan_detect_module_init);
module_exit(wan_detect_module_exit);
