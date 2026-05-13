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
*************************************************************************
*/

#include <linux/version.h>
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/ip.h>
#include <linux/udp.h>
#include <linux/dma-mapping.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>
#include <modules/npu/npuMboxAPI.h>
#include "tr471_npu.h"


extern struct connection *conn ;	// Connection table (array)
extern int curr_conn;	// Connection table (array)
extern int host_notify_npuMbox(npuMboxInfo_t *mboxInfo);



extern struct device* get_gdmpSram_dev(void);

#if defined(TCSUPPORT_NPU_V2) && defined(TCSUPPORT_TR471_NPU_OFFLOAD)

int tr471_mbox_send(tr471_mail_data_t* data)
{
	npuMboxInfo_t mboxInfo;
	tr471_mail_data_t* in_data;
	unsigned long int pa = 0, va=0;
	struct device *dev=NULL;
	int ret=0;

	/*just only get vaild dev*/
	if ((dev=get_gdmpSram_dev())==NULL) {		
		printk("\nget_gdmpSram_dev failed\n");
		return 0;
	}
	va = (unsigned long int)dma_alloc_coherent(dev, sizeof(tr471_mail_data_t), (void *)&pa, (GFP_ATOMIC|__GFP_NOWARN|GFP_DMA));

	in_data=(tr471_mail_data_t*)va;
	memset(&mboxInfo, 0, sizeof(npuMboxInfo_t));
	memcpy(in_data, data, sizeof(tr471_mail_data_t));
	mboxInfo.core_id = CORE0;
	mboxInfo.func_id = MFUNC_TR471;
	mboxInfo.virtAddr = va; 
	mboxInfo.physAddr = pa&0xffffffff;
	mboxInfo.len = sizeof(tr471_mail_data_t);
	mboxInfo.flags.isBlockingMode = 1;
	mboxInfo.blockTimeout = 10000; /* 1000ms */ /*debug time*/
	mboxInfo.cb = NULL;
	ret = host_notify_npuMbox(&mboxInfo);
	memcpy(data, in_data, sizeof(tr471_mail_data_t));
	
	dma_free_coherent(dev, sizeof(tr471_mail_data_t), (void *)va, pa);
	return ret;
} 

int tr471_set_send_rate(int burst1, int payload1, int burst2, int payload2,int addon)
{
	tr471_mail_data_t msg;
	send_rate_t* rate;
	
	msg.func_type = FUNC_TYPE_SET_SENDRATE;
	rate = (send_rate_t*) msg.private;
	rate->burst1 = burst1;
	rate->payload1 = payload1;
	rate->burst2 = burst2;
	rate->payload2 = payload2;
	rate->addon = addon;
	return tr471_mbox_send(&msg);
}

int tr471_set_mac_addr(char* mac)
{
	tr471_mail_data_t msg;	
	msg.func_type = FUNC_TYPE_SET_MACADDR;
	memcpy(&msg.private[0], mac,12);
	return tr471_mbox_send(&msg);	
}

int tr471_set_udp_ip4(unsigned int sIPaddr, unsigned int dIPaddr, short sPort, short dPort)
{
	tr471_mail_data_t msg;
	udp_ip_t* udpip;
	
	msg.func_type = FUNC_TYPE_SET_UDPIP4;
	udpip = (udp_ip_t*) msg.private;
	udpip->dip = htonl(dIPaddr);
	udpip->sip = htonl(sIPaddr);
	udpip->dport = htons(dPort);
	udpip->sport = htons(sPort);
	return tr471_mbox_send(&msg);	
}
int tr471_set_udp_ip6(char* sIPaddr, char* dIPaddr, short sPort, short dPort)
{
	tr471_mail_data_t msg;
	udp_ip6_t* udpip;
	int i=0;
	
	msg.func_type = FUNC_TYPE_SET_UDPIP6;
	udpip = (udp_ip_t*) msg.private;
	memcpy(udpip->dip, dIPaddr, 16);
	memcpy(udpip->sip, sIPaddr, 16);
	
	printk("tr471_set_dip6:\n");
	for(i=0;i<8;i++){
		printk("%x%x:",udpip->dip[2*i],udpip->dip[2*i+1]);
	}
	printk("\n");
	printk("tr471_set_sip6:\n");
	for(i=0;i<8;i++){
		printk("%x%x:",udpip->dip[2*i],udpip->sip[2*i+1]);
	}
	
	printk("endpritnk\n");
	udpip->dport = htons(dPort);
	udpip->sport = htons(sPort);
	return tr471_mbox_send(&msg);	
}

int tr471_start_test(int dir,int ipv6_mode)
{
	tr471_mail_data_t msg;	
	msg.func_type = FUNC_TYPE_START_TEST;
	*(int*)(&msg.private[0]) = dir;
	*(int*)(&msg.private[4]) = ipv6_mode;
	return tr471_mbox_send(&msg);	
}

int tr471_stop_test(void)
{
	tr471_mail_data_t msg;	
	msg.func_type = FUNC_TYPE_STOP_TEST;
	return tr471_mbox_send(&msg);	
}

int mod_tr471_get_rxstat(rx_stat_t * buff)
{
	tr471_mail_data_t msg;
	rx_stat_t*  rxstat;
	msg.func_type = FUNC_TYPE_GET_RXSTAT;
	tr471_mbox_send(&msg);
	rxstat = (rx_stat_t*)msg.private;

	memcpy(buff,rxstat,sizeof(struct rx_stat_s));
	return 1;
}

int tr471_set_current_time(char * time,int len){
	
	tr471_mail_data_t msg;	
	msg.func_type = FUNC_TYPE_SET_TIME;
	memcpy(&msg.private[0], time,len);
	return tr471_mbox_send(&msg);	
}

int tr471_get_npu_time(char * time){
	
	tr471_mail_data_t msg;
	struct curtime*  npu_time;
	msg.func_type = FUNC_TYPE_GET_TIME;
	tr471_mbox_send(&msg);
	npu_time = (struct curtime*)msg.private;
	memcpy(time,npu_time,sizeof(struct curtime));
	
	return 1;	
}
	

#else

int tr471_mbox_send(tr471_mail_data_t* data)
{
	return 0;
} 

int tr471_set_send_rate(int burst1, int payload1, int burst2, int payload2,int addon)
{
	return 0;
}

int tr471_set_mac_addr(char* mac)
{
	return 0;
}

int tr471_set_udp_ip4(unsigned int sIPaddr, unsigned int dIPaddr, short sPort, short dPort)
{
	return 0;
}
int tr471_set_udp_ip6(char* sIPaddr, char* dIPaddr, short sPort, short dPort)
{
	return 0;
}

int tr471_start_test(int dir,int ipv6_mode)
{
	tr471_mail_data_t msg;	
	msg.func_type = FUNC_TYPE_START_TEST;
	*(int*)(&msg.private[0]) = dir;
	*(int*)(&msg.private[4]) = ipv6_mode;
	return tr471_mbox_send(&msg);	
}

int tr471_stop_test(void)
{
	return 0;
}

int mod_tr471_get_rxstat(rx_stat_t * buff)
{
	return 0;
}
int tr471_set_current_time(char * time,int len){
	return 0;	
}

int tr471_get_npu_time(char * time){
	
	return 0;	
}

#endif






