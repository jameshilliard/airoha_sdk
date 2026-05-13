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
#ifndef _HSGMII_LAN_MAC_H_
#define _HSGMII_LAN_MAC_H_

/************************************************************************
*                  I N C L U D E S
*************************************************************************
*/

#include <linux/netdevice.h>
#include <linux/types.h>
#include <linux/string.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/rt_flash.h>
#include <asm/tc3162/tc3162.h>
#include <ecnt_hook/ecnt_hook_hsgmii_mac_type.h>


#include <linux/foe_hook.h>


/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
extern u8 hsgmii_lan_dbg_level;

#define driver_hsgmii_lan_hook_name    "driver_hsgmii_lan_hook"

#define XSI_TX 0
#define XSI_RX 1

#define DOWN 0
#define UP 1


typedef enum{
	SGMII_SPEED_2500M,
	SGMII_SPEED_1000M,
	SGMII_SPEED_100M,
	SGMII_SPEED_10M,
	SGMII_SPEED_UNKNOW
}sgmii_speed_type;

//7581 support speed
typedef enum{
	USXGII_10G,
	USXGII_5G,
	USXGII_2p5G,
	USXGII_1G,
	USXGII_100M,
	HSGMII_2p5G,
	SGMII_1000M,
	SGMII_100M,
	SGMII_10M,
	SPEED_UNKNOW,
}xsgmii_speed_type;

typedef enum{
	ENUM_USXGII_10G,
	ENUM_USXGII_5G,
	ENUM_USXGII_2p5G,
	ENUM_USXGII_1G,
	ENUM_USXGII_100M,
	ENUM_USXGII_UNKNOW,
}USXGMII_RATE_t;


typedef enum{
	USXGMII,
	HSGMII,
	SGMII,
}xSGMII_t;

typedef enum{
	ENUM_SGMII_1000M,
	ENUM_SGMII_100M,
	ENUM_SGMII_10M,
	ENUM_SGMII_UNKNOW,
}SGMII_RATE_t;	


typedef enum{
	ENUM_VERSION,
	ENUM_ETH_SERDES,
	ENUM_XPON_SERDES,
	ENUM_PCIE0_SERDES,
	ENUM_PCIE1_SERDES,
	ENUM_USB_SERDES,
	ENUM_UNKNOW_SERDES,
}xsgmii_serdes_inphy;	

typedef enum{
    SERDES_PCIE0_IDX = 0,
    SERDES_PCIE1_IDX = 1,
    SERDES_USB_IDX = 2,
    SERDES_AE_IDX = 3,
    SERDES_ETH_IDX = 4,
    INVALID_SERDES_ID
}Serdes_id_t;

//SPORT DEFINE
#define SPORT_QDMA_LAN          0
#define SPORT_GDMA1				1
#define SPORT_GDMA2				2
#define SPORT_GDMA3				3
#define SPORT_GDMA4				9
#define SPORT_PPE				4
#define SPORT_QDMA_WAN          5//send to CPU via QDMA
#define SPORT_QDMA_HW			6//send to CPU via QDMA HW
#define SPORT_DISCARD			7
#define SPORT_CPU				DPORT_PDMA
    
//FPORT DEFINE
#define DPORT_PDMA				0
#define DPORT_GDMA1				1
#define DPORT_GDMA2				2
#define DPORT_GDMA3				3
#define DPORT_GDMA4				9
#define DPORT_PPE				4
#define DPORT_QDMA				5//send to CPU via QDMA
#define DPORT_QDMA_HW			6//send to CPU via QDMA HW
#define DPORT_DISCARD			7
#define DPORT_CPU				DPORT_PDMA

typedef struct xsiStat_s {
    uint32 inOctets;            /* Receive Octets */
    uint32 inUnicastPkts;       /* Receive Unicast Packets */
    uint32 inMulticastPkts;     /* Receive Multicast Packets */
    uint32 inBroadcastPkts;     /* Receive Broadcast Packets */
    uint32 inErrors;            /* Receive Error Packets */
	uint32 inDrops;
    uint32 outOctets;           /* Transmit Octets */
    uint32 outUnicastPkts;      /* Transmit Unicast Packets */
    uint32 outMulticastPkts;    /* Transmit Multicast Packets */
    uint32 outBroadcastPkts;    /* Transmit Broadcast Packets */
    uint32 outErrors;           /* Transmit Error Packets */
	uint32 outDrops;
} xsiStat_t;


typedef struct xsiAdapter_s {
    uint8  macAddr[6];
    xsiStat_t	xsiStat;
    uint8 statisticOn;
    struct net_device_stats stats;
    struct net_device   *dev;
} xsiAdapter_t;

#define XSI_MAC_STATISTIC_ON		1
#define XSI_MAC_STATISTIC_OFF		0

enum FAST_PATH_XSI
{
    FAST_PATH_DIR_XSI_PCIE0,
    FAST_PATH_DIR_XSI_PCIE1,
    FAST_PATH_DIR_XSI_USB,
    FAST_PATH_DIR_XSI_ETHER,
    FAST_PATH_DIR_XSI_PON,
    FAST_PATH_DIR_MAX_NUM,
};

#define QDMA_XSI_FAST_PATH_OFFSET 10


typedef union {
#ifdef TCSUPPORT_CPU_EN7580
	struct {
#ifdef __BIG_ENDIAN
		uint32			: 1 ;
		uint32 mic_idx	: 1 ;
		uint32 sp_tag	: 16 ;
		uint32 ico		: 1;
		uint32 uco		: 1;
		uint32 tco		: 1;
		uint32 tso		: 1;
		uint32 fast		: 1 ;
		uint32 oam		: 1 ;
		uint32 channel	: 5 ;
		uint32 queue	: 3 ;
#else
		uint32 queue	: 3 ;
		uint32 channel	: 5 ;
		uint32 oam		: 1 ;
		uint32 fast		: 1 ;
		uint32 tso		: 1;
		uint32 tco		: 1;
		uint32 uco		: 1;
		uint32 ico		: 1;
		uint32 sp_tag	: 16 ;
		uint32 mic_idx	: 1 ;
		uint32			: 1 ;
#endif
	
#ifdef __BIG_ENDIAN
			uint32 no_drop	: 1;	/*means not be dropped by QDMA*/
			uint32 mtr_g	: 7;	/*0x7f means not use meter*/
#if defined(TCSUPPORT_CPU_EN7581) || defined(TCSUPPORT_CPU_EN7523)
			uint32 fPort	: 4;
			uint32 nboq 	: 5;
			uint32			: 4;
			uint32 acnt_g1	: 5;	/*0x1F means no count*/
			uint32 acnt_g0	: 6;	/*0x3F means no count*/
#else
			uint32 fPort	: 3;
			uint32 nboq 	: 5;
			uint32			: 6;
			uint32 acnt_g1	: 5;	/*bit4=1 means no count*/
			uint32 acnt_g0	: 5;	/*0x1F means no count*/
#endif
#else
#if defined(TCSUPPORT_CPU_EN7581) || defined(TCSUPPORT_CPU_EN7523)
			uint32 acnt_g0	: 6;	/*0x3F means no count*/
			uint32 acnt_g1	: 5;	/*0x1F means no count*/
			uint32			: 4;
			uint32 nboq 	: 5;
			uint32 fPort	: 4;
#else
			uint32 acnt_g0	: 5;	/*0x1F means no count*/
			uint32 acnt_g1	: 5;	/*bit4=1 means no count*/
			uint32			: 6;
			uint32 nboq 	: 5;
			uint32 fPort	: 3;
#endif
			uint32 mtr_g	: 7;	/*0x7f means not use meter*/
			uint32 no_drop	: 1;	/*means not be dropped by QDMA*/
#endif

	} raw ;
#else
	struct {
#ifdef __BIG_ENDIAN
		uint32 rev		: 4;
		uint32 sp_tag 		: 16;
		uint32 oam			: 1;
		uint32 channel		: 8;
		uint32 queue		: 3;
#else
		uint32 queue		: 3;
		uint32 channel		: 8;
		uint32 oam			: 1;
		uint32 sp_tag		: 16;
		uint32 rev		: 4;
#endif /* __BIG_ENDIAN */
	
#ifdef __BIG_ENDIAN
		uint32 ico			: 1;
		uint32 uco			: 1;
		uint32 tco			: 1;
		uint32 tso			: 1;
		uint32 udf_pmap		: 6;
		uint32 fPort		: 3;
		uint32 vlanEn		: 1;
		uint32 vlanTpID 	: 2;
		uint32 vlanTag		: 16;
#else
		uint32 vlanTag		: 16;
		uint32 vlanTpID 	: 2;
		uint32 vlanEn		: 1;
		uint32 fPort		: 3;
		uint32 udf_pmap		: 6;
		uint32 tso			: 1;
		uint32 tco			: 1;
		uint32 uco			: 1;
		uint32 ico			: 1;
#endif /* __BIG_ENDIAN */
	} raw ;
#endif
	uint msg[2] ;
} xsiTxMsg_t ;



typedef union
{
	struct {
#ifdef __BIG_ENDIAN
		uint32 				:1;
		uint32 no_mic		:1;
		uint32 sp_tag		:16;
		uint32 longf 		:1;
		uint32 runtf		:1;
		uint32 crcer		:1;
		uint32 soe			:1;
		uint32 ptp			:1;
		uint32 oam			:1;
		uint32 channel		:5;
		uint32 hop_flags	:3;
#else
		uint32 hop_flags	:3;
		uint32 channel		:5;
		uint32 oam			:1;
		uint32 ptp			:1;
		uint32 soe			:1;
		uint32 crcer		:1;
		uint32 runtf		:1;
		uint32 longf 		:1;
		uint32 sp_tag		:16;
		uint32 no_mic		:1;
		uint32 				:1;
#endif
	}raw;
    uint32 word;
} rxMsgWord0_t;

typedef union
{
    struct {
#ifdef __BIG_ENDIAN
        uint32 dei			:1;
        uint32 ip6			:1;
        uint32 ip4			:1;
        uint32 ip4f         :1;
        uint32 l4vld        :1;
        uint32 l4f          :1;
        uint32 sport        :5;
        uint32 crsn         :5;
        uint32 ppe_entry    :16;
#else
        uint32 ppe_entry    :16;
        uint32 crsn         :5;
        uint32 sport        :5;
        uint32 l4f          :1;
        uint32 l4vld        :1;
        uint32 ip4f         :1;
        uint32 ip4			:1;
        uint32 ip6			:1;
        uint32 dei			:1;
#endif
    }raw;
    uint32 word;
} rxMsgWord1_t;

typedef union
{
	struct {
#ifdef __BIG_ENDIAN
		uint32 sw_udf		:8;
		uint32 				:7;
		uint32 ifc_id		:9;
		uint32 ifc_hit		:1;
		uint32 l2_len		:7;
#else
		uint32 l2_len		:7;
		uint32 ifc_hit		:1;
		uint32 ifc_id		:9;
		uint32				:7;
		uint32 sw_udf		:8;
#endif
    }raw;
    uint32 word;
} rxMsgWord2_t;

typedef union
{
	uint32  resv;
} rxMsgWord3_t;


typedef struct xsiRxMsg_s
{
        rxMsgWord0_t rxMsgW0;
        rxMsgWord1_t rxMsgW1;
        rxMsgWord2_t rxMsgW2;
        rxMsgWord3_t rxMsgW3;
} xsiRxMsg_t;



typedef enum {
	XSI_DBG_ERR,
	XSI_DBG_ST,
	XSI_DBG_WARN,
	XSI_DBG_MSG
} XSI_DebugLevel_t ;

#ifdef XSI_DEBUG
	#define XSI_MSG(level, F, B...)	{ \
											if(hsgmii_lan_dbg_level >= level) 	\
												printk("%s [%d]: " F, strrchr(__FILE__, '/')+1, __LINE__, ##B) ; \
										}
	#define XSI_ERR(F, B...)			printk("%s [%d]: " F, strrchr(__FILE__, '/')+1, __LINE__, ##B)
	#define XSI_LOG(F, B...)			printk("%s [%d]: " F, strrchr(__FILE__, '/')+1, __LINE__, ##B)
#else
	#define XSI_MSG(level, F, B...)			
	#define XSI_ERR(F,B...)			printk(F, ##B) ; 
	#define XSI_LOG(F,B...)			printk(F, ##B) ; 
#endif

#define read_reg_word(reg) 		regRead32(reg)
#define write_reg_word(reg, wdata) 	regWrite32(reg, wdata)

#ifdef CONFIG_TP_IMAGE
int xsi_ratelimit_set_tp(int txratelimit);
#endif /* CONFIG_TP_IMAGE */


#endif
