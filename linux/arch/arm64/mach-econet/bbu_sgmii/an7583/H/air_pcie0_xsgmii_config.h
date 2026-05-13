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

#include "ponxfi_pma_7583_hal_reg.h"
#include "ponxfi_pma_7583_reg.h"
#include "pxp_csr_ana_hal_reg.h"
#include "pxp_csr_ana_reg.h"
#include "xfi_pcs_20230411_hal_reg.h"
#include "xfi_pcs_20230411_reg.h"

#include "rate_adaption_csr_MII_RATE_ADP_hal_reg.h"
#include "rate_adaption_csr_MII_RATE_ADP_reg.h"
#include "rate_adaption_csr_XGMII_hal_reg.h"
#include "rate_adaption_csr_XGMII_reg.h"



#define USXGMII_INT_EN              			0x5f0
#define USXGMII_INT_STA_CLR         			0x5f4
#define USXGMII_INT_STA             			0x5f8
	
#define USXGMII_PCS1_BASE_OFFSET    			(RgAddr) 0x0900
#define USXGMII_PCS2_BASE_OFFSET    			(RgAddr) 0x0A00
#define SGMII_AN_BASE_OFFSET      				(RgAddr) 0x0000
#define MULTI_PHY_ANA_BASE_OFFSET   			(RgAddr) 0x0000
#define PXP_BASE_OFFSET   						(RgAddr) 0x0000
#define PMA_BASE_OFFSET   						(RgAddr) 0x0000
#define L0_PMA_BASE_OFFSET   					(RgAddr) 0xB000
#define L1_PMA_BASE_OFFSET   					(RgAddr) 0xC000

#define USXGMII_RA_BASE_OFFSET      		 	(RgAddr) 0x0000
#define USXGMII_MULTI_SGMII_BASE_OFFSET      	(RgAddr) 0x0000

#define xsgmii_table air_pcie2l_xsgmii_of_id
#define COMPATIBLE "airoha,air-pcie2l_usxgmii"
#define XSGMII_DRV air_pcie2l_xsgmii_driver
#define DESCRIPTION "pcie2l xsgmii driver"
#define NAME "air_pcie2l_xsgmii"
#define VER "AN7583.PCIE0.2024.08.06"
#define DRV PCIE2L_XSGMII_DRV
#define Enable_IRQ

#define PCIE0_INDEX 0
#define PCIE1_INDEX 1


/***Additional feature***/
//Support FPGA
#ifndef CONFIG_USE_MT7520_ASIC
	#define FPGA_PLATFORM
#endif	

//#define AN7583_FPGA
//#define FPGA_PLATFORM
#define AN7583_COMMON_PHYA 1
#define PCIE_ONE_LANE

extern void XFI_PCIE0_PCS_Reset_Release(void);
extern void XFI_PCIE0_PCS_Reset_Hold(void);

#if AN7583_COMMON_PHYA == 1
extern void pcie0_init (int bit_sel);
extern void XFI_RG_RW_test(void);
extern void pxp_plug_reset (int plug_sel , int pon_Spd);

extern u8 XFI_PCIE0_SigDet_IntEn_sta(void);
extern void XFI_PCIE0_SigDet_Int_Init(u8 en);
extern u8 XFI_PCIE0_RX_SigDet_Flag_D(void);

extern u8 XFI_PCIE0_RX_SigDet_Flag(void);
extern u32 XFI_PCIE0_SigDet_Int_sta3_read(void);
extern void XFI_PCIE0_SigDet_Int_sta3_write(u32 data);
extern u8 XFI_PCIE0_RX_CDR_LFP_L2D_sta(void);
extern u8 XFI_PCIE0_RX_RDY_Sta(void);
extern void XFI_PCIE0_RX_RDY(u8 mod,u8 sel);
extern void XFI_PCIE0_RX_CDR_LFP_L2D(u8 mod,u8 sel);
extern void XFI_PCIE0_RX_CDR_LPF_RSTB(u8 mod,u8 sel);
extern void XFI_PCIE0_Power_Down(void);
extern u8 XFI_PCIE0_RX_SigDet_OUT_Read(void);
extern void pcie_EO_Scan(uint bit_sel, uint EO_start, uint EO_end , uint PXP_Eye_Scan);
extern void pcie_phy_eyescan_test(int start_p, int sweep_r);
extern void XFI_PCIE0_TXFIR_Set(u8 cn1, u8 c0b, u8 c1, u8 c2);
extern void XFI_PCIE0_TXFIR_Get(void);
extern void XFI_PCIE0_TXFIR_Bringup_Setting(u8 cn1, u8 c0b, u8 c1, u8 c2,u8 prt);




//define_Bit Rate
#define PXP_USXGMII                    0xB    //DS(RX)_10.31252G  /  US(TX)_10.3125G
#define PXP_HSGMII                     0x11   //DS(RX)_3.125G      /  US(TX)_3.125G

#define PXP_FIRST_PLUG_IN     1
#define PXP_PLUG_IN           2
#define PXP_PLUG_OUT          3	

#endif


//Support common phy
#define RESOUCE_FROM_COMMON_MODULE
#ifdef RESOUCE_FROM_COMMON_MODULE
	#include "../../../combo_phy/en7581/ecnt_serdes_common_phy.h"
#endif

//Support scu mod & rst operation
#define SCU_MOD_RST_OP
#ifdef SCU_MOD_RST_OP
	extern u32 GET_NP_SCU_SERDES_WIFI0_SEL(void);
	extern void SET_NP_SCU_SERDES_WIFI0_SEL(u32 val);
	extern u32 GET_NP_SCU_SERDES_WIFI1_SEL(void);
	extern void SET_NP_SCU_SERDES_WIFI1_SEL(u32 val);
	extern u32 GET_PCIC(void);
	extern void SET_PCIC(u32 val);	
	extern u32 GET_SCU_RST_RG(void);
	extern u32 GET_SCU_RSTCTRL1(void);
	extern void SET_SCU_RST_RG(u32 val);
	static u32 (*fptr_SCU_GetModSel)(void)= GET_NP_SCU_SERDES_WIFI0_SEL;
	static void (*fptr_SCU_SetModSel)(u32)= SET_NP_SCU_SERDES_WIFI0_SEL;
	static u32 (*fptr_SCU_GetModSel1)(void)= GET_NP_SCU_SERDES_WIFI1_SEL;
	static void (*fptr_SCU_SetModSel1)(u32)= SET_NP_SCU_SERDES_WIFI1_SEL;
	static u32 (*fptr_SCU_GetModRst)(void)= GET_SCU_RST_RG;
	static void (*fptr_SCU_SetModRst)(u32)= SET_SCU_RST_RG;
	static u32 (*fptr_SCU_GetModRst1)(void)= GET_SCU_RSTCTRL1;	
	#define SCU_GetModSel (*fptr_SCU_GetModSel)
	#define SCU_SetModSel (*fptr_SCU_SetModSel)
	#define SCU_SetModSel1 (*fptr_SCU_SetModSel1)
	#define SCU_GetModRst (*fptr_SCU_GetModRst)
	#define SCU_SetModRst (*fptr_SCU_SetModRst)
	#define SCU_GetModRst1 (*fptr_SCU_GetModRst1)
	#define SCU_PHY_RST_POS 13
	#define SCU_MAC_RST_POS 16
        #define SCU_PHY_RST_POS1 14
        #define SCU_MAC_RST_POS1 17
	#define SCU_RST_BIT 0b1
	//#define SCU_MAC_RST_POS 7
#endif
//Debug print
extern u8 dbg_print;
extern u8 interrupt_fw_en;  //AN7583 Add - Andy240408
extern RGDATA_t api_aux;    //Align AN7581 - Andy240408
#define MAC_Polling_Print_EN api_aux.bit.b0
#define MAC_Polling_skip_rg_dump api_aux.bit.b1
//---------------------------aux---------------------------
static RGDATA_t aux = {(0b00111111<<24)|(0b11111110<<16)|(0b10101110<<8)|(0b01001101<<0)};


//PMA
#define RX_PRCal_EN aux.bit.b9
//PCS
#define PCS_SGMII_force_mode_patch_EN aux.bit.b0
#define USX_FORCE_USR_DATA aux.bit.b3
#define USX_ANTMR aux.bit.b4
#define USR_EOF 0xfd
#define USR_IDLE 0x07070707
#define USR_DATA  USR_IDLE 
//MISC
#define XSGMII_USXGMII_INT_EN aux.bit.b1
#define XSGMII_SGMII_INT_EN aux.bit.b2
#define XSGMII_Linkup_Wrapper_EN aux.bit.b5
#define XSGMII_Linkdn_Wrapper_EN aux.bit.b6
#define XSGMII_SigDet_Wrapper_EN aux.bit.b7
#define XSGMII_Linkdn_Ignone_SD_EN aux.bit.b8
#define XSGMII_SigDet_A_EN aux.bit.b10

#define XSGMII_TX_FIR_Load_Para_EN aux.bit.b11
#define TX_SWING TX_SW660mV
#define TX_TRACE_LEN TX_5_inch

#define RX_Force_FEGain_FEPeaking_EN aux.bit.b12
#define USXGMII_RX_FEGain 1
#define USXGMII_RX_FEPeaking 2
#define HSGMII_RX_FEGain 1
#define HSGMII_RX_FEPeaking 1
#define SGMII_RX_FEGain 1
#define SGMII_RX_FEPeaking 1

#define RX_Force_FEOS_EN aux.bit.b13
#define RX_PR_SEQ_NEW_EN aux.bit.b14
#define RX_CDR_RST_NEW_EN aux.bit.b15
#define RX_PRCal_REF_RESETB_HI_EN aux.bit.b16

#define XSGMII_Linkdn_after_linkup_EN aux.bit.b17
#define RX_RATE_CTRL_FLL aux.bit.b18
#define TX_EF_IMP_EN aux.bit.b19
#define RX_EF_IMP_EN aux.bit.b20
#define HIBER_OFF_EN aux.bit.b21
#define Wait_signaling_en aux.bit.b22
#define H_SGMII_HOTPLUG aux.bit.b23

#define E2_HWA_FEVOS_EN aux.bit.b24
#define E2_HWA_INJOSC_KB_EN aux.bit.b25
#define E2_SWA_REF_RST_EN aux.bit.b26


//---------------------------flag---------------------------
static RGDATA_t xsgmii_flag = {0};
//PMA
//PCS
#define linkup_sta xsgmii_flag.bit.b8
#define linkdn_sta xsgmii_flag.bit.b9
//MISC
#define XSGMII_REQ_IRQ xsgmii_flag.bit.b23//PCIE0 and PCIE1 use the same IRQ
#define SGMII_AN0 xsgmii_flag.bit.b24
#define TMR0_ON xsgmii_flag.bit.b25
#define TMR_sgmii_link_dn_cb_0 xsgmii_flag.bit.b26
#define SGMII_AN1 xsgmii_flag.bit.b27
#define TMR1_ON xsgmii_flag.bit.b28
#define TMR_sgmii_link_dn_cb_1 xsgmii_flag.bit.b29


//---------------------------dbg---------------------------
static RGDATA_t dbg ={(0b11111111<<24)|(0b11111111<<16)|(0b11111111<<8)|(0b11111111<<0)};
static u8 tFE_Gain = 1;
#endif
