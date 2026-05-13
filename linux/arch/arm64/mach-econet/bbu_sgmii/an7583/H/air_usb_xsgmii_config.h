#ifndef _AIR_ETH_XSGMII_CONFIG_
#define _AIR_ETH_XSGMII_CONFIG_

#include "../../sgmii_globaldef.h"
#include "air_xsgmii.h"

#include "hsgmii_an_csr_hal_reg.h"
#include "hsgmii_an_csr_reg.h"
#include "hsgmii_csr_pcs_hal_reg.h"
#include "hsgmii_csr_pcs_reg.h"
#include "multi_sgmii_csr_DUMP_hal_reg.h"
#include "multi_sgmii_csr_DUMP_reg.h"
#include "multi_sgmii_csr_LED_hal_reg.h"
#include "multi_sgmii_csr_LED_reg.h"
#include "multi_sgmii_csr_RX_hal_reg.h"
#include "multi_sgmii_csr_RX_reg.h"
#include "multi_sgmii_csr_RX_RO_hal_reg.h"
#include "multi_sgmii_csr_RX_RO_reg.h"
#include "multi_sgmii_csr_TX_hal_reg.h"
#include "multi_sgmii_csr_TX_reg.h"

#include "rate_adaption_csr_MII_RATE_ADP_hal_reg.h"
#include "rate_adaption_csr_MII_RATE_ADP_reg.h"
#include "rate_adaption_csr_XGMII_hal_reg.h"
#include "rate_adaption_csr_XGMII_reg.h"

#include "qp_ana_hal_reg.h"
#include "qp_ana_reg.h"
#include "qp_dig_csr_DACTRL_hal_reg.h"
#include "qp_dig_csr_DACTRL_reg.h"
#include "qp_dig_csr_SYSTEM_hal_reg.h"
#include "qp_dig_csr_SYSTEM_reg.h"
#include "qp_pma_top_INTF_hal_reg.h"
#include "qp_pma_top_INTF_reg.h"
#include "qp_pma_top_ISR_hal_reg.h"
#include "qp_pma_top_ISR_reg.h"
#include "qp_pma_top_PLLCTRL_hal_reg.h"
#include "qp_pma_top_PLLCTRL_reg.h"
#include "qp_pma_top_RO_hal_reg.h"
#include "qp_pma_top_RO_reg.h"
#include "qp_pma_top_RXFEDIG_hal_reg.h"
#include "qp_pma_top_RXFEDIG_reg.h"
#include "qp_pma_top_RX_hal_reg.h"
#include "qp_pma_top_RX_reg.h"
#include "qp_pma_top_SYSTEM_hal_reg.h"
#include "qp_pma_top_SYSTEM_reg.h"
#include "qp_pma_top_TDC_hal_reg.h"
#include "qp_pma_top_TDC_reg.h"
#include "qp_pma_top_TX_hal_reg.h"
#include "qp_pma_top_TX_reg.h"


#define USXGMII_INT_EN              			0x5f0
#define USXGMII_INT_STA_CLR         			0x5f4
#define USXGMII_INT_STA             			0x5f8
	
#define USXGMII_PCS1_BASE_OFFSET    			(RgAddr) 0x0900
#define USXGMII_PCS2_BASE_OFFSET    			(RgAddr) 0x0A00
//#define SGMII_AN_BASE_OFFSET      				(RgAddr) 0x0000
#define USXGMII_RA_BASE_OFFSET      		 	(RgAddr) 0x0000
#define PXP_BASE_OFFSET   						(RgAddr) 0x0000
#define MULTI_PHY_ANA_BASE_OFFSET   			(RgAddr) 0x0000
#define USXGMII_MULTI_SGMII_BASE_OFFSET      	(RgAddr) 0x0000
#define PMA_BASE_OFFSET   						(RgAddr) 0x0000

#define SGMII_PCS2_BASE_OFFSET    				(RgAddr) 0x0A00 //1fax0a00
#define SGMII_AN_BASE_OFFSET      				(RgAddr) 0x0000 //1fax0000
#define SGMII_RA_BASE_OFFSET      		 		(RgAddr) 0x0000 //1fax6000
#define SGMII_MULTI_SGMII_BASE_OFFSET     (RgAddr) 0x0000 //1fax4000
#define SGMII_DIG_BASE_OFFSET      		    (RgAddr) 0x0000 //1faxa000
#define SGMII_PMA_BASE_OFFSET      		    (RgAddr) 0x0000 //1faxe000
#define SGMII_MULTI_PHY_ANA_BASE_OFFSET   (RgAddr) 0x0000 //1faxF000

#define SGMII_DIG_BASE 0x1fa6a000
#define SGMII_PMA_BASE 0x1fa6e000
#define SGMII_ANA_BASE 0x1fa6f000

#define EFUSE_VALID_LSB 34
#define EFUSE_TX_TERM_LSB 47
#define EFUSE_TX_TERM_LEN 2
#define EFUSE_RX_IMP_LSB 49
#define EFUSE_RX_IMP_LEN 5

#define xsgmii_table air_usb_xsgmii_of_id
#define COMPATIBLE "airoha,air-usb_xgmii"
#define XSGMII_DRV air_usb_xsgmii_driver
#define DESCRIPTION "usb xsgmii driver"
#define NAME "air_usb_xsgmii"
#define VER "AN7583.USB.3.2.0626"
#define DRV USB_XSGMII_DRV


/***Additional feature***/
//Support FPGA
#ifndef CONFIG_USE_MT7520_ASIC
	#define FPGA_PLATFORM
#endif	

/*
#ifndef FPGA_PLATFORM
  #define FPGA_PLATFORM
#endif
*/
//#define Enable_IRQ

//Support scu mod & rst operation
#define SCU_MOD_RST_OP
#ifdef SCU_MOD_RST_OP
	extern u32 GET_NP_SCU_SERDES_USB0_SEL(void);
	extern void SET_NP_SCU_SERDES_USB0_SEL(u32 val);
	extern u32 GET_SCU_RST_RG(void);
	extern void SET_SCU_RST_RG(u32 val);
	static u32 (*fptr_SCU_GetModSel)(void)= GET_NP_SCU_SERDES_USB0_SEL;
	static void (*fptr_SCU_SetModSel)(u32)= SET_NP_SCU_SERDES_USB0_SEL;
	static u32 (*fptr_SCU_GetModRst)(void)= GET_SCU_RST_RG;
	static void (*fptr_SCU_SetModRst)(u32)= SET_SCU_RST_RG;
	#define SCU_GetModSel (*fptr_SCU_GetModSel)
	#define SCU_SetModSel (*fptr_SCU_SetModSel)
	#define SCU_GetModRst (*fptr_SCU_GetModRst)
	#define SCU_SetModRst (*fptr_SCU_SetModRst)
	#define SCU_PHY_RST_POS 8
	#define SCU_RST_BIT 0b1
	//#define SCU_MAC_RST_POS 7
#endif
//Debug print
extern u8 dbg_print;


//control
static RGDATA_t aux = {0};
//PMA-------------------------------

//PCS-------------------------------
#define codition_int_dis (aux.bit.b1 = 1)
//MISC------------------------------


static RGDATA_t xsgmii_flag = {0};
//PMA-------------------------------

//PCS-------------------------------

//MISC------------------------------
#define XSGMII_REQ_IRQ xsgmii_flag.bit.b24
#endif
