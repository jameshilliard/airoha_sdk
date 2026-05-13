/*
 ***************************************************************************
 * MediaTeK Inc.
 * 4F, No. 2 Technology	5th	Rd.
 * Science-based Industrial	Park
 * Hsin-chu, Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2012, MTK.
 *
 * All rights reserved.	MediaTeK's source	code is	an unpublished work	and	the
 * use of a	copyright notice does not imply	otherwise. This	source code
 * contains	confidential trade secret material of MediaTeK Tech. Any attemp
 * or participation	in deciphering,	decoding, reverse engineering or in	any
 * way altering	the	source code	is stricitly prohibited, unless	the	prior
 * written consent of MediaTeK, Inc. is obtained.
 ***************************************************************************

	Module Name:
	vlan_tag_ct.c

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	Wanye.Lee	2013/4/17	Create
*/

#include <linux/spinlock.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>
#include <linux/proc_fs.h>
#include <linux/if_ether.h>
#include <linux/time.h>
#include <linux/version.h>
#include <linux/module.h>
#include "linux/libcompileoption.h"
#include "vlan_tag_ct.h"

#if defined(CONFIG_TP_IMAGE) && defined(INCLUDE_ITTIM)
#include <net/ip.h>
#endif
/*TCSUPPORT_LAN_VLAN || TCSUPPORT_CF_FDB_VLAN*/
#define KERNEL_2_6_36 		(LINUX_VERSION_CODE > KERNEL_VERSION(2,6,31)) && LINUX_VERSION_CODE <= KERNEL_VERSION(3, 8, 0)

#if KERNEL_2_6_36
#include "../../../../linux-2.6.36/net/bridge/br_private.h"
#include <ecnt_hook/ecnt_hook_net.h>
#include <ecnt_hook/ecnt_hook_nf.h>
#include <ecnt_hook/ecnt_hook.h>
#endif
/*END TCSUPPORT_LAN_VLAN || TCSUPPORT_CF_FDB_VLAN*/

MODULE_DESCRIPTION("VlanTag");
MODULE_LICENSE("GPL");

//those global variables are defined in module_sel.c
u8 	vtag_dbg_level = VTAG_DBG_ERROR; //vlan tag debug level
static u8 	vtag_sw = VTAG_DISABLE; //vlan tag function switch
static u8 	vtag_resotore_sw = VTAG_DISABLE; //vlan tag restore switch in route mode.
extern u32 	vtag_free_rx_cnt;
extern u32 	vtag_free_tx_cnt;
int customerTransparentMode1 = 0;
static u8	untag_mode_mc_tag_rcv = VTAG_DISABLE;

#if KERNEL_2_6_36
/*TCSUPPORT_LAN_VLAN*/					
extern struct net_bridge_fdb_entry *get_fdb_by_skb(struct sk_buff *skb);
/*END TCSUPPORT_LAN_VLAN*/
#endif

extern int (*check_vtag_ct_hook)(void);
extern int (*check_vtag_restore_ct_hook)(void);
extern int (*store_vtag_ct_hook)(struct sk_buff *skb, struct net_device *dev);
extern int (*restore_vtag_ct_hook)(struct sk_buff **pskb);
extern int (*handle_vtag_tx_ct_hook)(struct sk_buff **pskb);
extern int (*handle_vtag_rx_ct_hook)(struct sk_buff **pskb);

EXPORT_SYMBOL(vtag_dbg_level);
/*******************************************************************************************
**function name
	vtag_dbg_read_proc
**description:
	read vlan tag proc information(debug level , switch)
 **retrun 
 	0:success
 	-1:failure
**parameter:
********************************************************************************************/
static int vtag_dbg_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	printk("vlan tag dbg is %d\n", vtag_dbg_level);
	printk("vlan tag switch : %s\n", vtag_sw ? "enable" : "disable");	
	printk("vlan tag restore switch : %s\n", vtag_resotore_sw ? "enable" : "disable");
	printk("vlan tag rx free count: %d\n", vtag_free_rx_cnt);
	printk("vlan tag tx free count: %d\n", vtag_free_tx_cnt);
	printk("untag_mode_mc_tag_rcv: %d\n", untag_mode_mc_tag_rcv);
	
	return 0; 
}

/*******************************************************************************************
**function name
	vtag_dbg_write_proc
**description:
	write vlan tag value to proc (debug level , switch)
 **retrun 
 	count:string number
**parameter:
********************************************************************************************/
static int vtag_dbg_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char val_string[64]={0}, cmd[32]={0};
	u32 action = 0;

	if (count > sizeof(val_string) - 1)
		return -EINVAL;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	sscanf(val_string, "%s %x", cmd, &action) ;
	if(!strcmp(cmd, "dbglevel")){
		switch(action){
			case VTAG_DBG_NONE:
			case VTAG_DBG_ERROR:
			case VTAG_DBG_WARNING:
			case VTAG_DBG_TRACE:
				vtag_dbg_level = (u8)action;
				printk("Debug Level: %x\n", vtag_dbg_level); 
				break;
			default:
				printk("set debug Level fail:valid val-0:none,1:error,2:warning,3:trace \n");
		}
	}else if(!strcmp(cmd, "switch")){
		if(action == VTAG_DISABLE){
			vtag_sw = VTAG_DISABLE;
		}else{
			vtag_sw = VTAG_ENABLE;
		}
		printk("vlan tag switch : %s\n", vtag_sw ? "enable" : "disable"); 
	}else if(!strcmp(cmd, "restoresw")){
		if(vtag_sw == VTAG_ENABLE){
			if(action == VTAG_DISABLE){
				vtag_resotore_sw = VTAG_DISABLE;
			}else{
				vtag_resotore_sw = VTAG_ENABLE;
			}
			printk("vlan tag restore switch : %s\n", vtag_resotore_sw ? "enable" : "disable"); 
		}else{
			printk("please set vlan tag switch, then set vlan tag restore switch! \n");
		}		
	}else if(!strcmp(cmd, "StartRxFreeCnt")){
		vtag_free_rx_cnt = action;
		printk("vlan tag start rx free count is : %d\n", vtag_free_rx_cnt); 
	}else if(!strcmp(cmd, "StartTxFreeCnt")){
		vtag_free_tx_cnt = action;
		printk("vlan tag start tx free count is : %d\n", vtag_free_tx_cnt); 			
	}else if(!strcmp(cmd, "customerTransparentMode1")){
		customerTransparentMode1 = action;
		printk("%s customerTransparentMode1 Transparent Mode, untag with tag 4095\n", customerTransparentMode1?"enable":"disable");
	}else if(!strcmp(cmd, "UntagModeMcTag")){
		untag_mode_mc_tag_rcv = action;
		printk("untag_mode_mc_tag_rcv is : %d\n", untag_mode_mc_tag_rcv); 
	}

	return count;
}


#ifdef VTAG_DBG
/*******************************************************************************************
**function name
	dump_skb
**description:
	dump the packet infomation
 **retrun 
	
**parameter:
	skb:the packet information
********************************************************************************************/
static void dump_skb(struct sk_buff *skb) 
{
	char tmp[80];
	char *p;
	char *t = tmp;
	int i, n = 0;

	if(skb == NULL)
		return;
	p = skb->data;
	printk("ERR skb=%08lx data=%08lx len=%d, data_len=%d, hdr_len=%d\n", (u32)skb, (u32)skb->data, skb->len,skb->data_len, skb->hdr_len);
	for (i = 0; i < skb->len + 4; i++) {
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
#endif

/*******************************************************************************************
**function name
	 get_vtag_sw
**description:
	check if vlan tag function is enable or not
**return 
	0: vlan tag function is disable
	1: vlan tag function is enable
**parameter:
********************************************************************************************/
int get_vtag_sw(void){
	return vtag_sw;
}

/*******************************************************************************************
**function name
	 get_vtag_restore_sw
**description:
	check if vlan tag restore function in route mode is enable or not
**return 
	0: vlan tag restore function is disable
	1: vlan tag restore function is enable
**parameter:
********************************************************************************************/
int get_vtag_restore_sw(void){
	return vtag_resotore_sw;
}


/*******************************************************************************************
**function name
	 untag_mode_tx_handle
**description:
	handle vlan untag mode in tx
**return 
	0:	success
	-1:	fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int untag_mode_tx_handle(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
	struct vlan_hdr *vhdr = NULL;
	struct sk_buff *skb = NULL;

	if(pskb == NULL){
		goto end;
	}

	skb = *pskb;	
	if(skb == NULL){
		goto end;
	}
	skb = skb_unshare(skb, GFP_ATOMIC);
	if(skb == NULL){
		goto end;
	} 
	
	#ifdef TCSUPPORT_FWC_VLAN_TAG
		while(skb->protocol == htons(ETH_P_8021Q)) {
			/* remove first vlan tag */
			/* 14 is mac header */
			vhdr = (struct vlan_hdr *)(skb->data+14);			
			skb->protocol = vhdr->h_vlan_encapsulated_proto;
			/* Take off the VLAN header (4 bytes currently) */
			memmove(skb->data + VLAN_HLEN, skb->data, 12);
			skb_pull(skb, VLAN_HLEN);
		}
	#else
		if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
			/* remove first vlan tag */
			/* 14 is mac header */
			vhdr = (struct vlan_hdr *)(skb->data+14);			
			skb->protocol = vhdr->h_vlan_encapsulated_proto;
			/* Take off the VLAN header (4 bytes currently) */
			memmove(skb->data + VLAN_HLEN, skb->data, 12);
			skb_pull(skb, VLAN_HLEN);
		}else{//untag pkt
			//nothing
		}
    
	#endif
	ret = VTAG_SUCCESS;

end:
	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s,mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->name, skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}

	if(pskb != NULL){
		*pskb = skb;
	}
	
	return ret;
	
}

static inline int untag_mode_mc_tag_process(struct sk_buff *skb)
{
	unsigned char *dstAddr = NULL;
	struct vlan_hdr *vhdr = NULL;	
	u16 protocol = 0;

	if(!untag_mode_mc_tag_rcv)
		return VTAG_DROP_PKT;
	
	dstAddr = eth_hdr(skb)->h_dest;
	if((dstAddr[0] & 1) && 
		((dstAddr[0] & dstAddr[1] & dstAddr[2] & dstAddr[3] & dstAddr[4] & dstAddr[5]) != 0xff))
	{
		vhdr = (struct vlan_hdr *)(skb->data);
		protocol = vhdr->h_vlan_encapsulated_proto;
		skb_pull_rcsum(skb, VLAN_HLEN);
		memmove(skb->data - ETH_HLEN, skb->data - VLAN_ETH_HLEN, 12);
		skb->mac_header += VLAN_HLEN;
		skb->protocol = protocol;	

		return VTAG_SUCCESS;
	}

	return VTAG_DROP_PKT;
}

/*******************************************************************************************
**function name
	 untag_mode_rx_handle
**description:
	handle vlan untag mode in rx
**return 
	0:	success
	-1:	fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int untag_mode_rx_handle(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
	struct vlan_hdr *vhdr = NULL;
	struct sk_buff *skb = NULL;

	if(pskb == NULL){
		goto end;
	}

	skb = *pskb;
	if(skb == NULL){
		goto end;
	}
	if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
		ret = untag_mode_mc_tag_process(skb);
	}else{ 
		ret = VTAG_SUCCESS;
	}
	
	
end:
	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s,mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->name, skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}

	if(pskb != NULL){
		*pskb = skb;
	}
	return ret;
	
}

/*******************************************************************************************
**function name
	 transparent_mode_tx_handle
**description:
	handle vlan transparent mode in tx
**return 
	0:	success
	-1:	fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int transparent_mode_tx_handle(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
//	struct vlan_hdr *vhdr = NULL;
	struct sk_buff *skb = NULL;
	struct net_device *net_dev = NULL;
	u16 veth_TCI = 4095;

	if(pskb == NULL){
		goto end;
	}

	skb = *pskb;
	
	if(skb == NULL){
		goto end;
	}

	
	if(customerTransparentMode1)
	{
		net_dev = skb->dev;
		if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
			//tag pkt transparent
		}else{//untag pkt
			/*insert vlan tag */
			skb = __vlan_put_tag(skb, veth_TCI);
			if(skb){
				skb->dev = net_dev;
			}else{
				goto end;
			}
		}
	}

	ret = VTAG_SUCCESS;
end:
	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s,mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->name, skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}
	if(pskb != NULL){
		*pskb = skb;
	}
	return ret;
	
}
/*******************************************************************************************
**function name
	 transparent_mode_rx_handle
**description:
	handle vlan transparent mode in rx
**return 
	0:	success
	-1:	fail
**parameter:
	skb: the packet information
********************************************************************************************/
int transparent_mode_rx_handle(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
//	struct vlan_hdr *vhdr = NULL;
	struct sk_buff *skb = NULL;

	if(pskb == NULL){
		goto end;
	}

	skb = *pskb;
	if(skb == NULL){
		goto end;
	}
	
	ret = VTAG_SUCCESS;
end:
	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s,mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->name, skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}
	if(pskb != NULL){
		*pskb = skb;
	}
	return ret;
	
}

/*******************************************************************************************
**function name
	 tag_mode_tx_handle
**description:
	handle vlan tag mode in tx
**return 
	0:	success
	-1:	fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int tag_mode_tx_handle(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
	struct vlan_hdr *vhdr = NULL;
	u16 veth_TCI = 0;
	struct net_device *net_dev = NULL;
	u16 protocol = 0;	
	struct sk_buff *skb = NULL;
#ifdef TR143
	u8 pbit = 0;
#endif
#if defined(CONFIG_TP_IMAGE) && defined(INCLUDE_ITTIM)
	struct iphdr *iph = NULL;
	u8 nas_dev_pbit = 0;
	u8 pkt_dscp = 0;
#endif /*defined(CONFIG_TP_IMAGE) && defined(INCLUDE_SPEC_XGB430v_PRO)*/
	if(pskb == NULL){
		goto end;
	}

	skb = *pskb;	
	if(skb == NULL){
		goto end;
	}

	/*get tci from net_device*/
	net_dev = skb->dev;
	if(net_dev == NULL){
		goto end;
	}

	skb = skb_unshare(skb, GFP_ATOMIC);
	if(skb == NULL){
		goto end;
	}
#if defined(CONFIG_TP_IMAGE) && defined(INCLUDE_ITTIM)
	iph = ip_hdr(skb);
#endif 
	
	veth_TCI = net_dev->tci;
#if defined(CONFIG_TP_IMAGE) && defined(INCLUDE_ITTIM)
	/*TIM REQUIREMENT
	"In a VLAN model, the CPE must mark the CoS 802.1Q PCP bits on upstream egress WAN traffic on the basis of the DSCP according to the following schema: 
	 1.DSCP = 0x28 (hex) = 40 (dec) -> CoS = 5
	 2.DSCP = 0x18 (hex) = 24 (dec) -> CoS = 3
	 3.All the others DSCP values -> CoS = 0"

	*/
	nas_dev_pbit = (veth_TCI & VLAN_PRIO_MASK) >> VLAN_PRIO_SHIFT;
	pkt_dscp = ((iph->tos) & TOS_DSCP_MASK) >>TOS_DSCP_SHIFT;

	if(0 == nas_dev_pbit) //only change pbit when wan connection pbit is 0
	{
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s tag_mode_tx_handle,pbit is %d,now will remark it according dscp \n ",skb->dev->name,nas_dev_pbit);
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s tag_mode_tx_handle,iph->tos is 0x%x,dscp is 0x%x \n ",skb->dev->name,iph->tos,pkt_dscp);
		//DSCP = 0x28 (hex) = 40 (dec) -> CoS = 5
		if( 0x28==pkt_dscp)
		{
			VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s tag_mode_tx_handle,dscp is 0x%x,now will set pbit as 5 \n ",skb->dev->name,pkt_dscp);
			veth_TCI |= (5 << VLAN_PRIO_SHIFT) & VLAN_PRIO_MASK;
		}
		else if( 0x18==pkt_dscp)//DSCP = 0x18 (hex) = 24 (dec) -> CoS = 3
		{
			VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s tag_mode_tx_handle,dscp is 0x%x,now will set pbit as 3 \n ",skb->dev->name,pkt_dscp);
			veth_TCI |= (3 << VLAN_PRIO_SHIFT) & VLAN_PRIO_MASK;
		}
		else//All the others DSCP values -> CoS = 0
		{
			VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s tag_mode_tx_handle,dscp is 0x%x,now will set pbit as 0 \n ",skb->dev->name,pkt_dscp);
			veth_TCI &= 0X1FFF;
		}
		
	}
	else
	{
		VTAG_PRINT(VTAG_DBG_ERROR,"---dev=%s tag_mode_tx_handle,nas_dev_pbit is %d,donot remark the pbit\n",nas_dev_pbit);
		//veth_TCI &= 0X1FFF;
	}
#endif /*defined(CONFIG_TP_IMAGE) && defined(INCLUDE_ITTIM)*/
#ifdef TR143

	pbit = (skb->vlan_tag_flag & 0x0F00) >> 8;

	if ( pbit )
	{
		if ( 0x0F == pbit )
			pbit = 0;
		veth_TCI &= (0x1FFF); // remove old pbit
		veth_TCI |= (pbit << 13);
	}
#endif
	if (  TAG_UNPIT_VTAG_MODE == net_dev->vlan_mode
			&& 1 == skb->lan_vlan_tci_valid )
	{
		/* use pit from lan packect. */
		veth_TCI &= (0x1FFF); /* remove old pbit */
		veth_TCI |= (skb->lan_vlan_tci & 0xe000);
	}

	#ifdef TCSUPPORT_FWC_VLAN_TAG
	
		while(skb->protocol == htons(ETH_P_8021Q)) {
			/* remove first vlan tag */
			/* 14 is mac header */
			vhdr = (struct vlan_hdr *)(skb->data+14);			
			skb->protocol = vhdr->h_vlan_encapsulated_proto;
			/* Take off the VLAN header (4 bytes currently) */
			memmove(skb->data + VLAN_HLEN, skb->data, 12);
			skb_pull(skb, VLAN_HLEN);
		}
		if(net_dev->vlan_map & (1<<VLAN_SECOND_OFFSET)) {
			veth_TCI = net_dev->tci_sec;
			skb = __vlan_put_tag(skb, veth_TCI);
			if(skb){
				skb->dev = net_dev;
			}else{
				goto end;
			}

		}
		
		if(net_dev->vlan_map & (1<<VLAN_FIREST_OFFSET)) {
			veth_TCI = net_dev->tci;
			skb = __vlan_put_tag(skb, veth_TCI);
			if(skb){
				skb->dev = net_dev;
			}else{
				goto end;
			}
			
		}
	#else
		if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
			/*modify vlan tag*/
			vhdr = (struct vlan_hdr *)(skb->data+14);	
			vhdr->h_vlan_TCI = htons(veth_TCI);
		}else{//untag pkt
			/*insert vlan tag */
			skb = __vlan_put_tag(skb, veth_TCI);
			if(skb){
				skb->dev = net_dev;
			}else{
				goto end;
			}
		}
	#endif
	ret = VTAG_SUCCESS;
	
end:
	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s,mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->name, skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}
	if(pskb != NULL){
		*pskb = skb;
	}

	return ret;
	
}
/*******************************************************************************************
**function name
	 tag_mode_rx_handle
**description:
	handle vlan tag mode in rx
**return 
	0:	success
	-1:	fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int tag_mode_rx_handle(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
	struct vlan_hdr *vhdr = NULL;
	u16 veth_TCI = 0;
	struct net_device *net_dev = NULL;
	u16 protocol = 0;
	struct sk_buff *skb = NULL;

	if(pskb == NULL){
		goto end;
	}

	skb = *pskb;	
	if(skb == NULL){
		goto end;
	}

	/*get tci from net_device*/
	net_dev = skb->dev;
	if(net_dev == NULL){
		goto end;
	}

	skb = skb_unshare(skb, GFP_ATOMIC);
	if(skb == NULL){
		goto end;
	}

	#ifdef TCSUPPORT_FWC_VLAN_TAG
		if(net_dev->vlan_map &(1<<VLAN_FIREST_OFFSET))
		{
			if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
				/* remove first vlan tag */ 	
				vhdr = (struct vlan_hdr *)(skb->data);
				protocol = vhdr->h_vlan_encapsulated_proto;
				/* Take off the VLAN header (4 bytes currently) */
				skb_pull_rcsum(skb, VLAN_HLEN);
				if (skb == NULL) {
					goto end;
				}
				memmove(skb->data - ETH_HLEN,
					skb->data - VLAN_ETH_HLEN, 12);
				skb->mac_header += VLAN_HLEN;
				skb->dev = net_dev;
				skb->protocol = protocol;

				
				ret = VTAG_SUCCESS;
			}else{//untag pkt
				ret = VTAG_DROP_PKT;
				goto end;
			}		
		}
		if(net_dev->vlan_map &(1<<VLAN_SECOND_OFFSET))
		{
			ret = VTAG_DROP_PKT;
			if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
				/* remove first vlan tag */ 	
				vhdr = (struct vlan_hdr *)(skb->data);
				protocol = vhdr->h_vlan_encapsulated_proto;
				/* Take off the VLAN header (4 bytes currently) */
				skb_pull_rcsum(skb, VLAN_HLEN);
				if (skb == NULL) {
					goto end;
				}
				memmove(skb->data - ETH_HLEN,
					skb->data - VLAN_ETH_HLEN, 12);
				skb->mac_header += VLAN_HLEN;
				skb->dev = net_dev;
				skb->protocol = protocol;
				
				
				ret = VTAG_SUCCESS;
			}else{//untag pkt
				ret = VTAG_DROP_PKT;
				goto end;
			}		
		}
	#else
		if(skb->protocol == htons(ETH_P_8021Q)){//tag pkt
			/* remove first vlan tag */ 	
			vhdr = (struct vlan_hdr *)(skb->data);
			if(TCSUPPORT_CT_VLAN_BIND_VAL){
				/* save rx vlan pbit in skb->bind_pbit*/
				skb->vlan_tag_flag &= ~(0xF00);
				skb->vlan_tag_flag |= (htons(vhdr->h_vlan_TCI)>>13)<<9;
				VTAG_PRINT(VTAG_DBG_TRACE,"h_vlan_TCI is %x, skb->vlan_tag_flag is %x\n ",vhdr->h_vlan_TCI,skb->vlan_tag_flag);
				if(htons(ETH_P_IPV6) == vhdr->h_vlan_encapsulated_proto )
					skb->vlan_tags[0] = (htons(vhdr->h_vlan_TCI))&(0xfff);
			} 
			protocol = vhdr->h_vlan_encapsulated_proto;
			/* Take off the VLAN header (4 bytes currently) */
			skb_pull_rcsum(skb, VLAN_HLEN);
			/*if (skb == NULL) {
				goto end;
			}*/	
			memmove(skb->data - ETH_HLEN,
				skb->data - VLAN_ETH_HLEN, 12);
			skb->mac_header += VLAN_HLEN;
			skb->dev = net_dev;
			skb->protocol = protocol;
			

			ret = VTAG_SUCCESS;
		}else{//untag pkt
			ret = VTAG_DROP_PKT;
		}	
	#endif
end:
	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---dev=%s,mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->name, skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}
	if(pskb != NULL){
		*pskb = skb;
	}

	return ret;
	
}

/*******************************************************************************************
**function name
	store_vtag_to_skb
**description:
	remove vlan tag when packet is coming
	only used in routing mode, it is called by vlan_skb_recv
	if the packet is Q-in-Q, the two vlan tag will be 
	stored into skb->vlan_tag.
**return 
	0: 	success
	1:	fail
**parameter:
	skb:the packet information
	orig_dev: orignal device
********************************************************************************************/
int store_vtag_to_skb(struct sk_buff *skb, struct net_device *orig_dev){
	struct vlan_hdr *vhdr = NULL;
	u16 proto;
	int ret = VTAG_FAIL;
	
	if(skb == NULL || orig_dev == NULL){
		goto end;
	}

	/*get vlan header*/
	vhdr = (struct vlan_hdr *)(skb->data);
	if(vhdr == NULL){
		goto end;
	}

	VTAG_PRINT(VTAG_DBG_TRACE, "dev_name=%s \n", orig_dev->name);

	/*store vlan tag to skb */
	if((orig_dev->name[0] == 'b') || (orig_dev->name[0] == 'n')){
		proto = vhdr->h_vlan_encapsulated_proto;
		skb->protocol = proto;
		
		if(!(skb->vlan_tag_flag & VLAN_PACKET)) {
			skb->vlan_tags[0] = ntohs(vhdr->h_vlan_TCI); 
			skb->vlan_tag_flag |= VLAN_PACKET;
		}else if(!(skb->vlan_tag_flag & VLAN_2TAGS_PACKET)) {
			skb->vlan_tags[1] = ntohs(vhdr->h_vlan_TCI);
			skb->vlan_tag_flag |= VLAN_2TAGS_PACKET;
		}
#if 0
		/* Take off the VLAN header (4 bytes currently) */
		skb_pull_rcsum(skb, VLAN_HLEN);
		skb->dev = orig_dev;
#endif
		/* routing mode packet */
		skb->vlan_tag_flag |= ROUTING_MODE_PACKET;
	}else{
		goto end;
	}


	VTAG_PRINT(VTAG_DBG_TRACE, "---dev=%s vlan_tags[0]=%x vlan_tags[1]=%x vlan_tag_flag=%x---\n", 
		orig_dev->name, skb->vlan_tags[0], skb->vlan_tags[1], skb->vlan_tag_flag);

#ifdef VTAG_DBG
		if (vtag_dbg_level >= VTAG_DBG_TRACE){
			dump_skb(skb);
		}
#endif

	ret = VTAG_SUCCESS;
end:

	if(skb!=NULL && skb->dev!=NULL){
		VTAG_PRINT(VTAG_DBG_TRACE,"---mode=%d, protocol=0x%02x, tci=0x%02x, multci=0x%02x, ret=%02x \n",
			skb->dev->vlan_mode, skb->protocol, skb->dev->tci, skb->dev->multicast_tci, ret);
	}
	return ret;
}

/*******************************************************************************************
**function name
	 restore_vtag_to_skb
**description:
	restore vlan tag in route mode
**return 
	0:	success
	-1:	fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int restore_vtag_to_skb(struct sk_buff **pskb){
	struct sk_buff *skb = NULL;
	struct net_device *out_dev = NULL;
	u16 veth_TCI = 0;
	int ret = VTAG_FAIL;

	VTAG_PRINT(VTAG_DBG_TRACE, "--\n");

	if(pskb == NULL){
		goto end;
	}
	
	skb = *pskb;
	if(skb == NULL){
		goto end;
	}

	out_dev = skb->dev;
	if(out_dev == NULL){
		goto end;
	}
	
	/*only support route mode for restore vlan tag*/
	if (!(skb->vlan_tag_flag & ROUTING_MODE_PACKET)){
		ret = VTAG_SUCCESS;
		goto end;
	}

	/*this function only needs to be performed once*/
	if (skb->vlan_tag_flag & VLAN_TAG_INSERT_FLAG){
		ret = VTAG_SUCCESS;
		goto end;
	}
	
	/* only check eth0.x, rax, usbx, nasx */
	if ((out_dev->name[0] == 'e') ||
		(out_dev->name[0] == 'r') ||
		(out_dev->name[0] == 'u') ||
		(out_dev->name[0] == 'n')) 
		skb->vlan_tag_flag |= VLAN_TAG_INSERT_FLAG;
	else{
		ret = VTAG_SUCCESS;
		goto end;
	}

	/* ipoa, no mac header, don't should insert vlan tag */
	if (out_dev->name[0] == 'n' && (skb->data == skb->network_header)) {		
		ret = VTAG_SUCCESS;
		goto end;
	}
	

#ifdef VTAG_DBG
	if (vtag_dbg_level >= VTAG_DBG_TRACE){
		VTAG_PRINT(VTAG_DBG_TRACE,"restore_1 \n");
		dump_skb(skb);
	}
#endif

	skb = skb_unshare(skb, GFP_ATOMIC);
	if(skb == NULL){
		goto end;
	}

	/*restore vlan tag to skb data*/
	/* insert the second vlan tag from skb->vlan_tags[1] */	
	if (skb->vlan_tag_flag & VLAN_2TAGS_PACKET) {
		veth_TCI = skb->vlan_tags[1];
		skb = __vlan_put_tag(skb, veth_TCI);
		if (skb)
			skb->dev = out_dev;
	}
	if (skb == NULL){
		goto end;
	}

	/* insert first vlan tag from skb->vlan_tags[0] */
	if (skb->vlan_tag_flag & VLAN_PACKET) {
		veth_TCI = skb->vlan_tags[0];
		skb = __vlan_put_tag(skb, veth_TCI);
		if (skb)
			skb->dev = out_dev;
	}

	if (skb == NULL){
		goto end;
	}
	
	
	ret = VTAG_SUCCESS;
end:
	if(skb!=NULL && out_dev!=NULL){
		#ifdef VTAG_DBG
			if (vtag_dbg_level >= VTAG_DBG_TRACE){
				VTAG_PRINT(VTAG_DBG_TRACE,"restore_2 \n");
				dump_skb(skb);
			}
		#endif
		VTAG_PRINT(VTAG_DBG_TRACE, "--dev=%s  dev_mode=0x%2x dev_tci=0x%2x vlan_tags[0]=0x%2x vlan_tags[1]=0x%2x vlan_tag_flag=0x%2x, ret=0x%2x--\n",
				out_dev->name, out_dev->vlan_mode, out_dev->tci, skb->vlan_tags[0], skb->vlan_tags[1], skb->vlan_tag_flag, ret);
	}
	if(pskb != NULL){
		*pskb = skb;
	}

	return ret;
}

/*******************************************************************************************
**function name
	 handle_vtag_tx
**description:
	 according to the vlan mode, handle vlan tag in upstream
**return 
	0:	success
	-1: fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int handle_vtag_tx(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
	struct net_device *net_dev = NULL;
	struct sk_buff *skb = NULL;

	if(pskb == NULL){
		goto end;
	}
	skb = *pskb;
	if(skb == NULL){
		goto end;
	}

	net_dev = skb->dev;
	if(net_dev == NULL){
		goto end;
	}
	
	switch(net_dev->vlan_mode){
		case UNTAG_VTAG_MODE:
			ret = untag_mode_tx_handle(pskb);
			break;
		case TRANSPARENT_VTAG_MODE:
			ret = transparent_mode_tx_handle(pskb);
			break;
		case TAG_VTAG_MODE:
		case TAG_UNPIT_VTAG_MODE:
			ret = tag_mode_tx_handle(pskb);
			break;
		default:
			VTAG_PRINT(VTAG_DBG_ERROR,"vlan_mode=%d,fail \n",net_dev->vlan_mode);
			goto end;
	}

end:
	VTAG_PRINT(VTAG_DBG_TRACE, "-- ret=%d \n",ret);
	return ret;
	
}
/*******************************************************************************************
**function name
	 handle_vtag_rx
**description:
	 according to the vlan mode, handle vlan tag in downstream
**return 
	0:	success
	-1: fail
**parameter:
	pskb: the packet information
********************************************************************************************/
int handle_vtag_rx(struct sk_buff **pskb){
	int ret = VTAG_FAIL;
	struct net_device *net_dev = NULL;
	struct sk_buff *skb = NULL;

	if(pskb == NULL){
		goto end;
	}
	skb = *pskb;
	if(skb == NULL){
		goto end;
	}	

	net_dev = skb->dev;
	if(net_dev == NULL){
		goto end;
	}
	
	switch(net_dev->vlan_mode){
		case UNTAG_VTAG_MODE:
			ret = untag_mode_rx_handle(pskb);
			break;
		case TRANSPARENT_VTAG_MODE:
			ret = transparent_mode_rx_handle(pskb);
			break;
		case TAG_VTAG_MODE:
		case TAG_UNPIT_VTAG_MODE:
			ret = tag_mode_rx_handle(pskb);
			break;
		default:
			VTAG_PRINT(VTAG_DBG_ERROR,"vlan_mode=%d,fail \n",net_dev->vlan_mode);
			goto end;
	}

end:
	VTAG_PRINT(VTAG_DBG_TRACE, "-- ret=%d \n",ret);
	return ret;
	
}
#if KERNEL_2_6_36
ecnt_ret_val ecnt_lan_vlan_fdb_create(struct ecnt_data *in_data){
	struct net_data_s *net_data = (struct net_data_s *)in_data;
	struct net_bridge_fdb_entry *fdb = net_data->br_fdb_data.fdb;
	struct sk_buff *skb = NULL;
	unsigned short vlan_id = 0;
	unsigned char vlan_layer = 0;

	if(net_data->pskb == NULL)
		return ECNT_CONTINUE;
	
	skb = *(net_data->pskb);
	if(skb == NULL)
		return ECNT_CONTINUE;


	if(skb != NULL)
	{				
		if(skb->protocol == 0x8100)
		{
			vlan_layer = 1;
			vlan_id = ((*(skb->data) << 8) + *(skb->data + 1));
		}

		fdb->vlan_id = vlan_id;
		fdb->vlan_layer = vlan_layer;
		
	}

	return ECNT_CONTINUE;
}

ecnt_ret_val ecnt_lan_vlan_fdb_update(struct ecnt_data *in_data){
	struct net_data_s *net_data = (struct net_data_s *)in_data;
	struct net_bridge_fdb_entry *fdb = net_data->br_fdb_data.fdb;
	struct sk_buff *skb = NULL;
	unsigned short vlan_id = 0;
	unsigned char vlan_layer = 0;

	if(net_data->pskb == NULL)
		return ECNT_CONTINUE;
	
	skb = *(net_data->pskb);
	if(skb == NULL)
		return ECNT_CONTINUE;
			
	if(skb->protocol == 0x8100)
	{
		vlan_layer = 1;
		vlan_id = ((*(skb->data) << 8) + *(skb->data + 1));
	}

	fdb->vlan_id = vlan_id;
	fdb->vlan_layer = vlan_layer;				

	return ECNT_CONTINUE;
}


ecnt_ret_val ecnt_lan_vlan_dev_xmit(struct ecnt_data *in_data){
	struct net_data_s *net_data = (struct net_data_s *)in_data;
	struct sk_buff *skb = NULL;
	struct net_device *in_dev = NULL ;
	int vid = -1;
	struct net_device *out_dev = NULL;
	unsigned char *dest_mac = NULL;    
	if(net_data->pskb == NULL)
		return ECNT_CONTINUE;
	
	skb = *(net_data->pskb);
	if(skb == NULL)
		return ECNT_CONTINUE;
	
	out_dev = skb->dev;
	dest_mac = skb->data;

    int isPktFromWan = 0;
    if(TCSUPPORT_CMCC_VAL)
        isPktFromWan = ((skb->original_dev != NULL)&&(skb->original_dev->name[0] == 'n'));
    
	if(strncmp(skb->dev->name, "eth0.", 5) == 0 || skb->dev->name[0] == 'r'){
		if (skb->nfct != NULL && skb->nfct->tci_valid){            
            if(!isPktFromWan){
			   
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
			   if (!skb_make_writable(skb,skb->len))
#else
			   if (!skb_ensure_writable(skb,skb->len))
#endif		   
				{
				return ECNT_RETURN;
			}
				
			    /*for router send to lan according to nf_conntrack*/
			    //printk("%s:%d, get here, skb->nfct->tci: %hX\n", __FUNCTION__, __LINE__, skb->nfct->tci);
			    skb = __vlan_put_tag(skb, skb->nfct->tci);
			    if(skb == NULL)
				    return ECNT_RETURN;
		    }
		}
		else{
			if((!TCSUPPORT_CMCC_VAL) && (skb->original_dev != NULL) && (skb->original_dev->name[0] == 'n'))
			{	
				struct net_bridge_fdb_entry *dst_fdb=NULL;

				/*packet from wan to LAN*/
				dst_fdb = get_fdb_by_skb(skb);
				if((dst_fdb != NULL) && (dst_fdb->vlan_layer != 0)) 
				{
					
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
					   if (!skb_make_writable(skb,skb->len))
#else
					   if (!skb_ensure_writable(skb,skb->len))
#endif		   
						{
							return ECNT_RETURN;
						}
				
					//printk("\r\nlan_vlan_func_proc:--wan to lan--dst_fdb->vlan_id = %d, dst_fdb->vlan_layer = %d,!\r\n",dst_fdb->vlan_id,dst_fdb->vlan_layer);
					skb = __vlan_put_tag(skb, dst_fdb->vlan_id); 
					if(skb == NULL)
						return ECNT_RETURN;								
				}	
			}
			else if((skb->original_dev == NULL))
			{
				struct net_bridge_fdb_entry *dst_fdb=NULL;

				/*packet from CPE to LAN*/
				dst_fdb = get_fdb_by_skb(skb);
				if((dst_fdb != NULL) && (dst_fdb->vlan_layer != 0)) 
				{
					
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,15,0)
					   if (!skb_make_writable(skb,skb->len))
#else
					   if (!skb_ensure_writable(skb,skb->len))
#endif		   			
						{
							return ECNT_RETURN;
						}

					//printk("\r\nlan_vlan_func_proc:--CPE to LAN--dst_fdb->vlan_id = %d, dst_fdb->vlan_layer = %d,!\r\n",dst_fdb->vlan_id,dst_fdb->vlan_layer);
					skb = __vlan_put_tag(skb, dst_fdb->vlan_id);
					if(skb == NULL)
						return ECNT_RETURN;	
				}	
			}
		}
	}

	return ECNT_CONTINUE;
}

ecnt_ret_val lan_vlan_nf_track_core_hook(struct ecnt_data *in_data)
{
	struct ecnt_nf_track_s *net_data = (struct ecnt_nf_track_s *)in_data;
	struct nf_conn *ct = NULL;
	struct sk_buff *skb = NULL;

	rcu_read_lock();
	ct =  net_data->ct;
	skb =  net_data->skb;

	if((ct == NULL) || (skb == NULL))
		return ECNT_CONTINUE;
		
	ct->ct_general.tci_valid = 0;
	ct->ct_general.tci = 0;
	if ((skb->vlan_tag_flag & (VLAN_PACKET | ROUTING_MODE_PACKET) == (VLAN_PACKET | ROUTING_MODE_PACKET))
		&& (skb->lan_vlan_tci_valid)) {
		
		ct->ct_general.tci_valid = skb->lan_vlan_tci_valid;
		ct->ct_general.tci = skb->lan_vlan_tci;
	}
	rcu_read_unlock();

	return ECNT_CONTINUE;
}


struct ecnt_hook_ops ecnt_lan_vlan_fdb_create_op = {
	.name = "ecnt_lan_vlan_fdb_create",
	.is_execute = 1,
	.hookfn = ecnt_lan_vlan_fdb_create,
	.maintype = ECNT_NET_BR_FDB,
	.subtype = ECNT_BR_FDB_CREATE,
	.priority = 1
};


struct ecnt_hook_ops ecnt_lan_vlan_fdb_update_op = {
	.name = "ecnt_lan_vlan_fdb_update",
	.is_execute = 1,
	.hookfn = ecnt_lan_vlan_fdb_update,
	.maintype = ECNT_NET_BR_FDB,
	.subtype = ECNT_BR_FDB_UPDATE,
	.priority = 1
};

struct ecnt_hook_ops ecnt_lan_vlan_dev_xmit_op = {
	.name = "ecnt_lan_vlan_dev_xmit",
	.is_execute = 1,
	.hookfn = ecnt_lan_vlan_dev_xmit,
	.maintype = ECNT_NET_CORE_DEV,
	.subtype	= ECNT_DEV_QUE_XMIT,
	.priority = 1
};

struct ecnt_hook_ops ecnt_lan_vlan_nf_track_core_op = {
	.name = "lan_vlan_nf_track_core_hook",
	.is_execute = 1,
	.hookfn = lan_vlan_nf_track_core_hook,
	.maintype = ECNT_NF_TRACK_CORE,
	.subtype	= ECNT_NF_TRACK_INIT_FREE,
	.priority = 1
};


/*init function of lan vlan*/
int lanVlanFuncInit(void){

	ecnt_register_hook(&ecnt_lan_vlan_fdb_create_op);
	ecnt_register_hook(&ecnt_lan_vlan_fdb_update_op);
    if(TCSUPPORT_LAN_VLAN_VAL){
	    ecnt_register_hook(&ecnt_lan_vlan_dev_xmit_op);
	    ecnt_register_hook(&ecnt_lan_vlan_nf_track_core_op);
	}

	return 0;
}

/*deinit function of lan vlan*/
void lanVlanFuncDeInit(void){

	ecnt_unregister_hook(&ecnt_lan_vlan_fdb_create_op);
	ecnt_unregister_hook(&ecnt_lan_vlan_fdb_update_op);
    if(TCSUPPORT_LAN_VLAN_VAL){
	    ecnt_unregister_hook(&ecnt_lan_vlan_dev_xmit_op);
	    ecnt_unregister_hook(&ecnt_lan_vlan_nf_track_core_op);
	}
	return;
}
#endif

/*******************************************************************************************
**function name
	 vtag_drv_init
**description:
	 vlan tag module init
**return 
	0:	success
	-1: fail
**parameter:
********************************************************************************************/
static int __init vtag_drv_init(void){
	struct proc_dir_entry *dbg_proc;

	printk("%s\n", __FUNCTION__);

	vtag_dbg_level = VTAG_DBG_NONE;
	vtag_sw = VTAG_ENABLE; //vlan tag function switch
	
	if(TCSUPPORT_CMCC_VAL)
		vtag_resotore_sw = VTAG_ENABLE; 
	else
		vtag_resotore_sw = VTAG_DISABLE; //vlan tag restore switch in route mode.

	vtag_free_rx_cnt = 0;
	vtag_free_tx_cnt = 0;
	/* enable or disable vlan tag dbg function */
	dbg_proc = create_proc_entry("tc3162/vlan_tag_dbg", 0, NULL);
	dbg_proc->read_proc = vtag_dbg_read_proc;
	dbg_proc->write_proc = vtag_dbg_write_proc;

	/* init the vlan hook */
	rcu_assign_pointer(check_vtag_ct_hook, get_vtag_sw);
	rcu_assign_pointer(check_vtag_restore_ct_hook, get_vtag_restore_sw);	
	rcu_assign_pointer(store_vtag_ct_hook, store_vtag_to_skb);	
	rcu_assign_pointer(restore_vtag_ct_hook, restore_vtag_to_skb);
	rcu_assign_pointer(handle_vtag_tx_ct_hook, handle_vtag_tx); 
	rcu_assign_pointer(handle_vtag_rx_ct_hook, handle_vtag_rx);
	
#if KERNEL_2_6_36
    if(TCSUPPORT_LAN_VLAN_VAL || TCSUPPORT_CF_FDB_VLAN_VAL)
	{
		/*init function of lan vlan*/
		lanVlanFuncInit();
	}
#endif
	
	return 0;
}

/*******************************************************************************************
**function name
	 vtag_drv_exit
**description:
	vlan tag module exit
**return 	
**parameter:
********************************************************************************************/
static void __exit vtag_drv_exit(void)
{
	printk("%s\n", __FUNCTION__);
	remove_proc_entry("tc3162/vlan_tag_dbg", 0);
	
	rcu_assign_pointer(check_vtag_ct_hook, NULL);
	rcu_assign_pointer(check_vtag_restore_ct_hook, NULL);
	rcu_assign_pointer(store_vtag_ct_hook, NULL);
	rcu_assign_pointer(restore_vtag_ct_hook, NULL);
	rcu_assign_pointer(handle_vtag_tx_ct_hook, NULL);
	rcu_assign_pointer(handle_vtag_rx_ct_hook, NULL);

#if KERNEL_2_6_36
    if(TCSUPPORT_LAN_VLAN_VAL || TCSUPPORT_CF_FDB_VLAN_VAL)
	{
		/*deinit function of lan vlan*/
		lanVlanFuncDeInit();
	}
#endif
	return;
}

module_init(vtag_drv_init);
module_exit(vtag_drv_exit);
