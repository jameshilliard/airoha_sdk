#ifndef _HSGMII_LAN_IC_DIS_H
#define _HSGMII_LAN_IC_DIS_H

/************************************************************************
*                  I N C L U D E S
*************************************************************************
*/
#include <asm/tc3162/tc3162.h>


/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
extern u32 GET_PDIDR(void);

#define SERDES_EOF				    (isEN7581 && (1 == GET_PDIDR()))	    /*7581_E1 serdes EOF*/
#define FC_FRAG_ERR				    (isEN7581 && (1 == GET_PDIDR()))	    /*7581_E1 serdes EOF*/
#define XSI_RST_ERR				    (isEN7581 || isAN7583)	   	   

#define SUPPORT_USB_PCIE_ETH_IN_GDMA3		(isEN7523)
#define SUPPORT_USB_ETH_IN_GDMA4			(isEN7581 || isAN7552)
#define SUPPORT_USB_PCIE_IN_GDMA4			(isAN7583)
#define SUPPORT_ETH_IN_GDMA3				(isAN7583)
#define SUPPORT_GDMA4 						(isEN7581 || isAN7552 || isAN7583)

#define SUPPORT_TX_TOTAL_RATELIMIT			(isAN7583)
#define SUPPORT_MAC_EEE						(isAN7583)
#define SUPPORT_MAC_RESET_SEPRATION         (isAN7583)

#if defined(TCSUPPORT_CPU_AN7583)
#define SUPPORT_GDMA_CHANNEL_RETIRE 1
#else
#define SUPPORT_GDMA_CHANNEL_RETIRE 0
#endif

#if defined(TCSUPPORT_CPU_AN7583)
#include "xsi_reg_7583.h"
#elif defined(TCSUPPORT_CPU_EN7581) || defined(TCSUPPORT_CPU_AN7552)
#include "xsi_reg_7581.h"
#endif

#define SUPPORT_MINIOLT_IN_GDMA3         (isAN7583)

#if defined(TCSUPPORT_CPU_AN7583)
#define SUPPORT_XSI_EXACT_LINK_STATUS  1
#else
#define SUPPORT_XSI_EXACT_LINK_STATUS  0
#endif

#if defined(TCSUPPORT_CPU_AN7583)
#define SUPPORT_BOARD_SELECT 1
#else
#define SUPPORT_BOARD_SELECT 0
#endif

#if defined(TCSUPPORT_CPU_AN7583)
#define SUPPORT_QDMA_AUTOPATH 1
#else
#define SUPPORT_QDMA_AUTOPATH 0
#endif

#if defined(TCSUPPORT_CPU_AN7583)
#define SUPPORT_AS21xx_WA 1
#else
#define SUPPORT_AS21xx_WA 0
#endif

#if defined(TCSUPPORT_ETHER_AS21XX)
#define SUPPORT_AS21xx 1
#else
#define SUPPORT_AS21xx 0
#endif

#define SUPPORT_FAST_PATH               (isEN7580 || isEN7581 || isAN7583)              /* Support fast path accelerate */

#endif
