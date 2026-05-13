/***************************************************************
Copyright Statement:

This software/firmware and related documentation (锟斤拷EcoNet Software锟斤拷)
are protected under relevant copyright laws. The information contained herein
is confidential and proprietary to EcoNet (HK) Limited (锟斤拷EcoNet锟斤拷) and/or
its licensors. Without the prior written permission of EcoNet and/or its licensors,
any reproduction, modification, use or disclosure of EcoNet Software, and
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS
DOCUMENTATIONS (锟斤拷ECONET SOFTWARE锟斤拷) RECEIVED FROM ECONET
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 锟斤拷AS IS锟斤拷
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE.
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
THAT IT IS RECEIVER锟斤拷S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES
MADE TO RECEIVER锟斤拷S SPECIFICATION OR CONFORMING TO A PARTICULAR
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
#include <linux/module.h>
#include <linux/types.h>
#include <linux/of_platform.h>
#include <linux/platform_device.h>
#include <linux/interrupt.h>

#include <asm/io.h>
#include <uapi/ecnt_event_global/ecnt_event_system.h>
#include "H/air_xsgmii.h"  
#include "H/air_usb_xsgmii_config.h"
#include <linux/init.h>
#include <linux/kernel.h>   
#include <linux/proc_fs.h>
#include <linux/uaccess.h>
#include <asm/delay.h>



/************************************************************************
*                  STATIC VARIABLE DECLARATIONS
*************************************************************************
*/
static volatile xsgmii_base * _pxSGMII;
 
static const struct of_device_id xsgmii_table[] = {
    { .compatible = COMPATIBLE},
    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, xsgmii_table);
/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
extern void SET_NP_SCU_SERDES_WIFI0_SEL(u32 val);
extern	void __iomem* Get_Base(u32 base);
extern u32 get_phy_efuse(u32 start_bit, u32 len);


/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/
void USB_xSGMII_Ver(void){
	printk("ETH XSGMII VER = %s\n",VER);
}
EXPORT_SYMBOL(USB_xSGMII_Ver);
static void RG_W(REG_t* rg){		
#ifdef FPGA_PLATFORM
	if (rg->base == _pxSGMII->pma_base) return;
	if (rg->base == _pxSGMII->dig_base) return;
	if (rg->base == _pxSGMII->phya_base) return;
#endif
	writel(rg->data.value, rg->base + (rg->addr - rg->base_start));
}

static u32 RG_R(REG_t* rg){
#ifdef FPGA_PLATFORM
	if (rg->base == _pxSGMII->pma_base) return 0;
	if (rg->base == _pxSGMII->dig_base) return 0;
	if (rg->base == _pxSGMII->phya_base) return 0;
#endif
	return readl(rg->base + (rg->addr - rg->base_start));
}

static void RG_W_PL(RgAddr Base,RgAddr Base_start,RgAddr Addr,u32 Data){
	REG_t rg;
	if(Base != NULL)
	{
		rg.base = Base;
		rg.base_start = ((RgAddr) Base_start);
		rg.addr = ((RgAddr) Addr);
		rg.data.value = Data;
		RG_W(&rg);
	}
	else printk("please register usxgmii!!!\n");
}
	
static u32 RG_R_PL(RgAddr Base,RgAddr Base_start,RgAddr Addr){
	REG_t rg;
	if(Base != NULL)
	{
		rg.base = Base;
		rg.base_start = ((RgAddr) Base_start);
		rg.addr = ((RgAddr) Addr);
		return RG_R(&rg);
	}
	else
	{
		printk("please register usxgmii!!!\n");
		return 0;
	}
}

static void xsgmii_chg(u8 xsgmii){
	//u8 chg = OFF;
	SCU_SetModSel(0);
	SCU_SetModRst(SCU_GetModRst() | 0x48000);
	SCU_SetModRst(SCU_GetModRst()& ~(0x48000));
}

void USB_xSGMII_Disconnect(u8 mod)
{
  #ifdef FPGA_PLATFORM
  rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1) rg_hsgmii_pcs_ctrol_1;
  rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1);
  rg_hsgmii_pcs_ctrol_1.hal.rg_sd_sig_det = !mod;
  RG_W_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);
  if(dbg_print) printk("sgmii_u0 is %s\n",mod==1?"disconnect":"connect");
  #endif
}

static void set_efuse(void){
	u32 efuse_valid = 0;
	u32 tx_term=0,rx_imp=0;
	rg_type_t(HAL_INTF_CTRL_8) rg_intf_ctrl_8;
	rg_type_t(HAL_INTF_CTRL_9) rg_intf_ctrl_9;

	efuse_valid=get_phy_efuse(EFUSE_VALID_LSB,1);
	if (efuse_valid == (u32)-1)	{
		if(dbg_print) printk("[set_efuse] valid read out error!\n");
		return;
	}
	
	if(!efuse_valid){
		if(dbg_print) printk("[set_efuse] efuse not valid!\n");
		return;
	}
	tx_term = get_phy_efuse(EFUSE_TX_TERM_LSB,EFUSE_TX_TERM_LEN);
	rx_imp = get_phy_efuse(EFUSE_RX_IMP_LSB,EFUSE_RX_IMP_LEN);
	if (tx_term == (u32)-1)	{
		if(dbg_print) printk("[set_efuse] tx read out error!\n");
		return;
	}
	rg_intf_ctrl_8.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, (RgAddr)_INTF_CTRL_8);
	rg_intf_ctrl_8.hal.rg_da_qp_tx_term_sel_sel = 1;
	rg_intf_ctrl_8.hal.rg_da_qp_tx_term_sel_force = tx_term;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, (RgAddr)_INTF_CTRL_8, rg_intf_ctrl_8.dat.value);
	if(dbg_print) printk("[set_tx_term] %x!\n",tx_term);
	
	rx_imp = get_phy_efuse(EFUSE_RX_IMP_LSB,EFUSE_RX_IMP_LEN);
	if (rx_imp == (u32)-1)	{
		if(dbg_print) printk("[set_efuse] rx read out error!\n");
		return;
	}
	rg_intf_ctrl_9.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, (RgAddr)_INTF_CTRL_9);
	rg_intf_ctrl_9.hal.rg_da_qp_rx_imp_sel_sel = 1;
	rg_intf_ctrl_9.hal.rg_da_qp_rx_imp_sel_force = rx_imp;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, (RgAddr)_INTF_CTRL_9, rg_intf_ctrl_9.dat.value);
	if(dbg_print) printk("[set_rx_imp] %x!\n",rx_imp);
}

static void xSGMII_QPHY_PMA_HSGMII(void)
{
	rg_type_t(HAL_SS_LCPLL_TDC_PCW_1) fw_SS_LCPLL_TDC_PCW_1;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_1) fw_QP_DIG_MODE_CTRL_1;
	rg_type_t(HAL_PLL_CTRL_2) fw_PLL_CTRL_2;
	rg_type_t(HAL_SS_LCPLL_TDC_FLT_2) fw_SS_LCPLL_TDC_FLT_2;
	rg_type_t(HAL_RG_QP_CDR_LPF_MJV_LIM) fw_RG_QP_CDR_LPF_MJV_LIM;
	rg_type_t(HAL_RG_QP_CDR_PR_CKREF_DIV1) fw_RG_QP_CDR_PR_CKREF_DIV1;
	rg_type_t(HAL_RG_QP_CDR_LPF_BOT_LIM) fw_RG_QP_CDR_LPF_BOT_LIM;
	rg_type_t(HAL_RX_CTRL_5) fw_RX_CTRL_5;


	fw_SS_LCPLL_TDC_PCW_1.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_PCW_1);
	fw_SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x7A000000; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_PCW_1, fw_SS_LCPLL_TDC_PCW_1.dat.value); //write addr: 0x1FA5E248 = 0x7A000000

	fw_QP_DIG_MODE_CTRL_1.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_1);
	fw_QP_DIG_MODE_CTRL_1.hal.rg_tphy_speed = 0x1; 
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_1, fw_QP_DIG_MODE_CTRL_1.dat.value); //write addr: 0x1FA5A330 = 0x7

	fw_PLL_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_2);
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_pck_sel_intf = 0x1; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_ir_intf = 0x6; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_2, fw_PLL_CTRL_2.dat.value); //write addr: 0x1FA5E408 = 0x21560305

	fw_SS_LCPLL_TDC_FLT_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_2);
	fw_SS_LCPLL_TDC_FLT_2.hal.rg_lcpll_ncpo_value = 0x7A000000; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_2, fw_SS_LCPLL_TDC_FLT_2.dat.value); //write addr: 0x1FA5E230 = 0x7A000000

	fw_RG_QP_CDR_LPF_MJV_LIM.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_MJV_LIM);
	fw_RG_QP_CDR_LPF_MJV_LIM.hal.rg_qp_cdr_lpf_ratio = 0x1; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_MJV_LIM, fw_RG_QP_CDR_LPF_MJV_LIM.dat.value); //write addr: 0x1FA5F00C = 0x14

	fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1);
	fw_RG_QP_CDR_PR_CKREF_DIV1.hal.rg_qp_cdr_pr_dac_band = 0xF; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1, fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value); //write addr: 0x1FA5F018 = 0x4000F00

	fw_RG_QP_CDR_LPF_BOT_LIM.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_BOT_LIM);
	fw_RG_QP_CDR_LPF_BOT_LIM.hal.rg_qp_cdr_lpf_kp_gain = 0x5; 
	fw_RG_QP_CDR_LPF_BOT_LIM.hal.rg_qp_cdr_lpf_ki_gain = 0x5; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_BOT_LIM, fw_RG_QP_CDR_LPF_BOT_LIM.dat.value); //write addr: 0x1FA5F008 = 0xA5560000

	fw_RX_CTRL_5.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_5);
	fw_RX_CTRL_5.hal.rg_fredet_chk_cycle = 0x10; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_5, fw_RX_CTRL_5.dat.value); //write addr: 0x1FA5E63C = 0x4010


}

static void xSGMII_QPHY_PMA_SGMII(void)
{
	rg_type_t(HAL_SS_LCPLL_TDC_PCW_1) fw_SS_LCPLL_TDC_PCW_1;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_1) fw_QP_DIG_MODE_CTRL_1;
	rg_type_t(HAL_PLL_CTRL_2) fw_PLL_CTRL_2;
	rg_type_t(HAL_SS_LCPLL_TDC_FLT_2) fw_SS_LCPLL_TDC_FLT_2;
	rg_type_t(HAL_RG_QP_CDR_LPF_MJV_LIM) fw_RG_QP_CDR_LPF_MJV_LIM;
	rg_type_t(HAL_RG_QP_CDR_PR_CKREF_DIV1) fw_RG_QP_CDR_PR_CKREF_DIV1;
	rg_type_t(HAL_RG_QP_CDR_LPF_BOT_LIM) fw_RG_QP_CDR_LPF_BOT_LIM;
	rg_type_t(HAL_RX_CTRL_5) fw_RX_CTRL_5;
	rg_type_t(HAL_RX_CTRL_27) fw_RX_CTRL_27;

	fw_RX_CTRL_27.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_27);
	fw_RX_CTRL_27.hal.rg_qp_link_erro_cnt = 0x100000;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_27, fw_RX_CTRL_27.dat.value); //write addr: 0x1FA5E694 = 0x100000


	fw_SS_LCPLL_TDC_PCW_1.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_PCW_1);
	fw_SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x48000000; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_PCW_1, fw_SS_LCPLL_TDC_PCW_1.dat.value); //write addr: 0x1FA5E248 = 0x48000000

	fw_QP_DIG_MODE_CTRL_1.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_1);
	fw_QP_DIG_MODE_CTRL_1.hal.rg_tphy_speed = 0x0; 
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_1, fw_QP_DIG_MODE_CTRL_1.dat.value); //write addr: 0x1FA5A330 = 0x7

	fw_PLL_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_2);
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_pck_sel_intf = 0x1; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_ir_intf = 0x4; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_2, fw_PLL_CTRL_2.dat.value); //write addr: 0x1FA5E408 = 0x21540305

	fw_SS_LCPLL_TDC_FLT_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_2);
	fw_SS_LCPLL_TDC_FLT_2.hal.rg_lcpll_ncpo_value = 0x48000000; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_2, fw_SS_LCPLL_TDC_FLT_2.dat.value); //write addr: 0x1FA5E230 = 0x48000000

	fw_RG_QP_CDR_LPF_MJV_LIM.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_MJV_LIM);
	fw_RG_QP_CDR_LPF_MJV_LIM.hal.rg_qp_cdr_lpf_ratio = 0x2; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_MJV_LIM, fw_RG_QP_CDR_LPF_MJV_LIM.dat.value); //write addr: 0x1FA5F00C = 0x24

	fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1);
	fw_RG_QP_CDR_PR_CKREF_DIV1.hal.rg_qp_cdr_pr_dac_band = 0xC; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1, fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value); //write addr: 0x1FA5F018 = 0x4000C00

	fw_RG_QP_CDR_LPF_BOT_LIM.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_BOT_LIM);
	fw_RG_QP_CDR_LPF_BOT_LIM.hal.rg_qp_cdr_lpf_kp_gain = 0x6; 
	fw_RG_QP_CDR_LPF_BOT_LIM.hal.rg_qp_cdr_lpf_ki_gain = 0x6; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_CDR_LPF_BOT_LIM, fw_RG_QP_CDR_LPF_BOT_LIM.dat.value); //write addr: 0x1FA5F008 = 0xA6660000

	fw_RX_CTRL_5.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_5);
	fw_RX_CTRL_5.hal.rg_fredet_chk_cycle = 0x28; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_5, fw_RX_CTRL_5.dat.value); //write addr: 0x1FA5E63C = 0xA010


}

static void xSGMII_QPHY_PMA(u8 xsgmii){
	rg_type_t(HAL_msg_rx_lik_sts_1) fw_msg_rx_lik_sts_1;
	rg_type_t(HAL_RG_QP_BGR_EN) fw_RG_QP_BGR_EN;
	rg_type_t(HAL_QP_CK_RST_CTRL_3) fw_QP_CK_RST_CTRL_3;
	rg_type_t(HAL_QP_TX_DA_CTRL_1) fw_QP_TX_DA_CTRL_1;
	rg_type_t(HAL_QP_TX_DA_CTRL_2) fw_QP_TX_DA_CTRL_2;
	rg_type_t(HAL_PLL_CTRL_2) fw_PLL_CTRL_2;
	rg_type_t(HAL_RG_QP_PLL_IPLL_DIG_PWR_SEL) fw_RG_QP_PLL_IPLL_DIG_PWR_SEL;
	rg_type_t(HAL_PLL_CTRL_4) fw_PLL_CTRL_4;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_0) fw_QP_DIG_MODE_CTRL_0;
	rg_type_t(HAL_RG_QP_RXLBTX_EN) fw_RG_QP_RXLBTX_EN;
	rg_type_t(HAL_RG_QP_TX_MODE_16B_EN) fw_RG_QP_TX_MODE_16B_EN;
	rg_type_t(HAL_SS_LCPLL_PWCTL_SETTING_2) fw_SS_LCPLL_PWCTL_SETTING_2;
	rg_type_t(HAL_RG_QP_RXAFE_RESERVE) fw_RG_QP_RXAFE_RESERVE;
	rg_type_t(HAL_PON_RXFEDIG_CTRL_10) fw_PON_RXFEDIG_CTRL_10;
	rg_type_t(HAL_PON_RXFEDIG_CTRL_8) fw_PON_RXFEDIG_CTRL_8;
	rg_type_t(HAL_RX_CTRL_6) fw_RX_CTRL_6;
	rg_type_t(HAL_RX_CTRL_7) fw_RX_CTRL_7;
	rg_type_t(HAL_PLL_CTRL_0) fw_PLL_CTRL_0;
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) fw_rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_INTF_STS_0) fw_INTF_STS_0;
	rg_type_t(HAL_QP_TX_DA_CTRL_0) fw_QP_TX_DA_CTRL_0;
	rg_type_t(HAL_QP_TX_DBG_0) fw_QP_TX_DBG_0;
	rg_type_t(HAL_SS_LCPLL_TDC_FLT_5) fw_SS_LCPLL_TDC_FLT_5;
	rg_type_t(HAL_RX_CTRL_26) fw_RX_CTRL_26;
  rg_type_t(HAL_PON_RXFEDIG_CTRL_0) fw_PON_RXFEDIG_CTRL_0;
	u32 tmp = 0;


	fw_msg_rx_lik_sts_1.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base, SGMII_MULTI_SGMII_BASE_OFFSET, _msg_rx_lik_sts_1);
	fw_msg_rx_lik_sts_1.hal.rg_pause_sts_p1 = 0x1; 
	fw_msg_rx_lik_sts_1.hal.rg_pause_sts_p2 = 0x1; 
	RG_W_PL(_pxSGMII->multi_sgmii_base, SGMII_MULTI_SGMII_BASE_OFFSET, _msg_rx_lik_sts_1, fw_msg_rx_lik_sts_1.dat.value); //write addr: 0x1FA54518 = 0x60

	fw_RX_CTRL_26.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_26);
	fw_RX_CTRL_26.hal.rg_link_erro_en = 0x1;
	fw_RX_CTRL_26.hal.rg_qp_eq_retrain_only_en = 0x1;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_26, fw_RX_CTRL_26.dat.value); //write addr: 0x1FA5E690 = 0x6800000

	fw_RG_QP_BGR_EN.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_BGR_EN);
	fw_RG_QP_BGR_EN.hal.rg_qp_bg_div = 0x1; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_BGR_EN, fw_RG_QP_BGR_EN.dat.value); //write addr: 0x1FA5F030 = 0x2AA0004
  
  fw_PON_RXFEDIG_CTRL_0.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PON_RXFEDIG_CTRL_0);
	fw_PON_RXFEDIG_CTRL_0.hal.rg_qp_eq_rx500m_ck_sel = 0x0;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PON_RXFEDIG_CTRL_0, fw_PON_RXFEDIG_CTRL_0.dat.value); //write addr: 0x1FA5E100 = 2000409

	fw_QP_CK_RST_CTRL_3.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_CK_RST_CTRL_3);
	fw_QP_CK_RST_CTRL_3.hal.rg_ns_ck_div_sel = 0x1; 
	fw_QP_CK_RST_CTRL_3.hal.rg_us_ck_div_sel = 0x1; 
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_CK_RST_CTRL_3, fw_QP_CK_RST_CTRL_3.dat.value); //write addr: 0x1FA5A30C = 0x3400000

	fw_QP_TX_DA_CTRL_1.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _QP_TX_DA_CTRL_1);
	fw_QP_TX_DA_CTRL_1.hal.rg_force_tx_bit_inverse = 0x0; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _QP_TX_DA_CTRL_1, fw_QP_TX_DA_CTRL_1.dat.value); //write addr: 0x1FA5E004 = 0x200

	fw_QP_TX_DA_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _QP_TX_DA_CTRL_2);
	fw_QP_TX_DA_CTRL_2.hal.rg_force_tx_dem_sel = 0x1; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _QP_TX_DA_CTRL_2, fw_QP_TX_DA_CTRL_2.dat.value); //write addr: 0x1FA5E008 = 0x8400000

	fw_PLL_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_2);
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_bc_intf = 0x1; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_bpa_intf = 0x5; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_bpb_intf = 0x0; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_br_intf = 0x3; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_2, fw_PLL_CTRL_2.dat.value); //write addr: 0x1FA5E408 = 0x21170315

	fw_RG_QP_PLL_IPLL_DIG_PWR_SEL.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_PLL_IPLL_DIG_PWR_SEL);
	fw_RG_QP_PLL_IPLL_DIG_PWR_SEL.hal.rg_qp_pll_prediv = 0x1; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_PLL_IPLL_DIG_PWR_SEL, fw_RG_QP_PLL_IPLL_DIG_PWR_SEL.dat.value); //write addr: 0x1FA5F03C = 0x122802A2

	fw_PLL_CTRL_4.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_4);
	fw_PLL_CTRL_4.hal.rg_da_qp_pll_icolp_en_intf = 0x1; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_4, fw_PLL_CTRL_4.dat.value); //write addr: 0x1FA5E410 = 0x4

	fw_QP_DIG_MODE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0);
	fw_QP_DIG_MODE_CTRL_0.hal.rg_sgmii_an_en = 0x0; 
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0, fw_QP_DIG_MODE_CTRL_0.dat.value); //write addr: 0x1FA5A324 = 0x2

	fw_RG_QP_RXLBTX_EN.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_RXLBTX_EN);
	fw_RG_QP_RXLBTX_EN.hal.rg_qp_tx_dmedgegen_en = 0x1; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_RXLBTX_EN, fw_RG_QP_RXLBTX_EN.dat.value); //write addr: 0x1FA5F02C = 0xA840010

	fw_RG_QP_TX_MODE_16B_EN.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_TX_MODE_16B_EN);
	tmp = fw_RG_QP_TX_MODE_16B_EN.hal.rg_qp_tx_reserve;
	tmp = (0x1<<2) | (tmp & (~(0x1<<2)));
	tmp = (0x1<<8) | (tmp & (~(0x1<<8)));
	fw_RG_QP_TX_MODE_16B_EN.hal.rg_qp_tx_reserve = tmp;
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_TX_MODE_16B_EN, fw_RG_QP_TX_MODE_16B_EN.dat.value); //write addr: 0x1FA5F028 = 0x40000

	if (xsgmii == HSGMII) {
		xSGMII_QPHY_PMA_HSGMII();
	}else {	
		xSGMII_QPHY_PMA_SGMII();
	}

	fw_SS_LCPLL_TDC_FLT_5.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_5);
	fw_SS_LCPLL_TDC_FLT_5.hal.rg_lcpll_ncpo_chg = 0;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_5, fw_SS_LCPLL_TDC_FLT_5.dat.value);
	fw_SS_LCPLL_TDC_FLT_5.hal.rg_lcpll_ncpo_chg = 1;
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_TDC_FLT_5, fw_SS_LCPLL_TDC_FLT_5.dat.value);

	fw_SS_LCPLL_PWCTL_SETTING_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_PWCTL_SETTING_2);
	fw_SS_LCPLL_PWCTL_SETTING_2.hal.rg_ncpo_ana_msb = 0x1; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _SS_LCPLL_PWCTL_SETTING_2, fw_SS_LCPLL_PWCTL_SETTING_2.dat.value); //write addr: 0x1FA5E208 = 0x1000A

	fw_RG_QP_RXAFE_RESERVE.dat.value = RG_R_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_RXAFE_RESERVE);
	fw_RG_QP_RXAFE_RESERVE.hal.rg_qp_cdr_pd_10b_en = 0x1; 
	RG_W_PL(_pxSGMII->phya_base, SGMII_MULTI_PHY_ANA_BASE_OFFSET, _RG_QP_RXAFE_RESERVE, fw_RG_QP_RXAFE_RESERVE.dat.value); //write addr: 0x1FA5F004 = 0xE00

	fw_PON_RXFEDIG_CTRL_10.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PON_RXFEDIG_CTRL_10);
	fw_PON_RXFEDIG_CTRL_10.hal.rg_qp_eq_pieye_ini = 0x0; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PON_RXFEDIG_CTRL_10, fw_PON_RXFEDIG_CTRL_10.dat.value); //write addr: 0x1FA5E128 = 0x4002000

	fw_PON_RXFEDIG_CTRL_8.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PON_RXFEDIG_CTRL_8);
	fw_PON_RXFEDIG_CTRL_8.hal.rg_qp_eq_eye_mask = 0x2AA; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PON_RXFEDIG_CTRL_8, fw_PON_RXFEDIG_CTRL_8.dat.value); //write addr: 0x1FA5E120 = 0xF00002AA

	fw_RX_CTRL_6.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_6);
	fw_RX_CTRL_6.hal.rg_fredet_golden_cycle = 0x64; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_6, fw_RX_CTRL_6.dat.value); //write addr: 0x1FA5E640 = 0x64

	fw_RX_CTRL_7.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_7);
	fw_RX_CTRL_7.hal.rg_fredet_tolerate_cycle = 0x2710; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _RX_CTRL_7, fw_RX_CTRL_7.dat.value); //write addr: 0x1FA5E644 = 0x2710

	fw_PLL_CTRL_0.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_0);
	fw_PLL_CTRL_0.hal.rg_phya_auto_init = 0x0; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60001
	fw_PLL_CTRL_0.hal.rg_phya_auto_init = 0x1; 
	RG_W_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET, _PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60001
	udelay(100);
}	

static void xSGMII_AN_AutoSetting(u8 xsgmii,u8 mode,u8 duplx,u8 rate){
	rg_type_t(HAL_sgmii_reg_an_13) sgmii_reg_an_13;
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_0) fw_QP_DIG_MODE_CTRL_0;

#ifdef FPGA_PLATFORM
	RGDATA_t rg={0};
	if(xsgmii == USXGMII){
		rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL); 
		rg.bit.b24 = 1; //bitfile0714
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg.value); 			
	}	
#endif 

		rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);	
		rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
		rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
		rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 0;			
		rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 0;
		RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value); 
	
	if (xsgmii == SGMII){
		RG_W_PL(_pxSGMII->ra_base,SGMII_RA_BASE_OFFSET,((RgAddr)_rg_rate_adapt_ctrl_0+0x100),0);//6100=0
		
		fw_QP_DIG_MODE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0);
		fw_QP_DIG_MODE_CTRL_0.hal.rg_sgmii_an_en = 0x1; 
		RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0, fw_QP_DIG_MODE_CTRL_0.dat.value); //write addr: 0x1FA5A324 = 0x2
		/*
		rg_type_t(HAL_sgmii_reg_phya_30) sgmii_reg_phya_30;		
	    sgmii_reg_phya_30.dat.value = RG_R_PL(_pxSGMII->phya_base,SGMII_MULTI_PHY_ANA_BASE_OFFSET,(RgAddr)_sgmii_reg_phya_30);//a078=10450
	    sgmii_reg_phya_30.hal.rg_sgmii_an_enable = 1;
	    RG_W_PL(_pxSGMII->phya_base,SGMII_MULTI_PHY_ANA_BASE_OFFSET,(RgAddr)_sgmii_reg_phya_30,sgmii_reg_phya_30.dat.value);
		*/
    	
		sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
		sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x03;
		RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,sgmii_reg_an_13.dat.value);
		
		rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	
	    sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	    sgmii_reg_an0.hal.sgmii_an_enable = 1;
		sgmii_reg_an0.hal.sgmii_an_restart = 1;
	    RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value); 
			
		if (mode){
			switch (rate){
			case ENUM_SGMII_1000M :
				RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,duplx? 0x1801:0x801);
				break;
			case ENUM_SGMII_100M :
				RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,duplx? 0x1401:0x401);
				break;
			case ENUM_SGMII_10M :
				RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,duplx? 0x1001:0x001);
				break;	
			default :			
				RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,duplx? 0x1801:0x801);
				break;
			}
		}
	}
}

static void sgmii_an(u8 enable){
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;
	if(dbg_print) printk("sgmii_an %x\n",enable);
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	sgmii_reg_an0.hal.sgmii_an_enable = enable;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);
} 

static void hsgmii_an(u8 enable){
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;
	if(dbg_print) printk("sgmii_an %x\n",enable);
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	sgmii_reg_an0.hal.sgmii_an_enable = enable;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);
}

static void hsgmii_init(void){
	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1) rg_hsgmii_pcs_ctrol_1;	
	rg_type_t(HAL_QP_DIG_MODE_CTRL_1) qp_dig_mode_ctrl_1;
	if(dbg_print) printk("hsgmii_init start\n");
	
	qp_dig_mode_ctrl_1.dat.value = RG_R_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_MODE_CTRL_1);
	qp_dig_mode_ctrl_1.hal.rg_tphy_mode = 0b11;
	qp_dig_mode_ctrl_1.hal.rg_tphy_speed = 0b01;
	RG_W_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_MODE_CTRL_1,qp_dig_mode_ctrl_1.dat.value);

	rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1);
	rg_hsgmii_pcs_ctrol_1.hal.rg_an_enable = 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_gmii_txclk_ena = 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_rx_clk_ena= 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sgmii_1us_timer = 0x9c;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sd_sig_det = 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sgmii_ena = 1;	
	RG_W_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);
	if(dbg_print) printk("hsgmii_init exit\n"); 
}

static void sgmii_init(void){
	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1) rg_hsgmii_pcs_ctrol_1;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_1) qp_dig_mode_ctrl_1;
	if(dbg_print) printk("sgmii_init start\n");

	qp_dig_mode_ctrl_1.dat.value = RG_R_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_MODE_CTRL_1);
	qp_dig_mode_ctrl_1.hal.rg_tphy_mode = 0b11;
	qp_dig_mode_ctrl_1.hal.rg_tphy_speed = 0b00;
	RG_W_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_MODE_CTRL_1,qp_dig_mode_ctrl_1.dat.value);
	
	rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1);
	rg_hsgmii_pcs_ctrol_1.hal.rg_an_enable = 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_gmii_txclk_ena = 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_rx_clk_ena= 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sgmii_1us_timer = 0x9c;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sd_sig_det = 1;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sgmii_ena = 1;	
	RG_W_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);
	
	if(dbg_print) printk("sgmii_init exit\n");
}
static void xsgmii_init(u8 xsgmii){
	if(dbg_print) printk("xsgmii_init\n");
	set_efuse();
	xSGMII_QPHY_PMA(xsgmii);
	switch (xsgmii){
		case HSGMII:
			hsgmii_init();
			break;
		case SGMII:
			sgmii_init();
			break;
		default:
			sgmii_init();
			break;
	}
}

static void HGMII_2p5G(void){

	rg_type_t(HAL_rg_rate_adapt_ctrl_11) ra_ctl_11;
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	RGDATA_t rg={0};	
	if(dbg_print) printk("HSGMII_2.5G\n");

	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);	
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 0;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 0;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 1;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value); 
		
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,SGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 0;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 0;
	RG_W_PL(_pxSGMII->ra_base,SGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);
  
  
	rg_type_t(HAL_sgmii_reg_an0) sgmii_reg_an0;	
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	sgmii_reg_an0.hal.sgmii_reset_phy = 1;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);

	if(dbg_print) printk("HSGMII_2.5 exit\n");
}

static void SGMII_1G(void){

	RGDATA_t rg={0};	
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_0) fw_QP_DIG_MODE_CTRL_0;
	if(dbg_print) printk("SGMII_1G\n");
			
	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);	
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 0;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 0;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 1;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value); 

	rg_type_t(HAL_rg_an_sgmii_mode_force) rg_an_sgmii_mode_force;
	rg_an_sgmii_mode_force.dat.value = RG_R_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_an_sgmii_mode_force);
	rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode_sel = 1;
	rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode = 0x0;
	RG_W_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_an_sgmii_mode_force,rg_an_sgmii_mode_force.dat.value);

	
	fw_QP_DIG_MODE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0);
	fw_QP_DIG_MODE_CTRL_0.hal.rg_sgmii_an_en = 0x1; 
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0, fw_QP_DIG_MODE_CTRL_0.dat.value); //write addr: 0x1FA5A324 = 0x2
	
	RG_W_PL(_pxSGMII->ra_base,SGMII_RA_BASE_OFFSET,((RgAddr)_rg_rate_adapt_ctrl_0+0x100),0);//6100=0
	
	rg_type_t(HAL_sgmii_reg_an_13) sgmii_reg_an_13;
	sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
	sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x03;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,sgmii_reg_an_13.dat.value);	//ref RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,0x31120003);
	//john add^^^
}
static void SGMII_100M(void){
	RGDATA_t rg={0};	
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_0) fw_QP_DIG_MODE_CTRL_0;
	if(dbg_print) printk("SGMII_100M\n");

	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);	
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 0;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 0;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value); 

	if(dbg_print) printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
	
	//john add---
	rg_type_t(HAL_rg_an_sgmii_mode_force) rg_an_sgmii_mode_force;
	rg_an_sgmii_mode_force.dat.value = RG_R_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_an_sgmii_mode_force);
	rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode_sel = 1;
	rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode = 0x1;
	RG_W_PL(_pxSGMII->pcs2_base,SGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_an_sgmii_mode_force,rg_an_sgmii_mode_force.dat.value);

	fw_QP_DIG_MODE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0);
	fw_QP_DIG_MODE_CTRL_0.hal.rg_sgmii_an_en = 0x1;
	fw_QP_DIG_MODE_CTRL_0.hal.rg_sgmii_mode = 0x1;
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0, fw_QP_DIG_MODE_CTRL_0.dat.value); //write addr: 0x1FA5A324 = 0x2
	
	RG_W_PL(_pxSGMII->ra_base,SGMII_RA_BASE_OFFSET,((RgAddr)_rg_rate_adapt_ctrl_0+0x100),0);//6100=0

	rg_type_t(HAL_sgmii_reg_an_13) sgmii_reg_an_13;
	sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
	sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x05;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,sgmii_reg_an_13.dat.value);	//ref RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,0x31120003);
	//john add^^^	
}

#ifdef SUPPORT_10M
static void SGMII_10M(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_QP_DIG_MODE_CTRL_0) fw_QP_DIG_MODE_CTRL_0;
	RGDATA_t rg={0};	
	if(dbg_print) printk("SGMII_10M\n");

	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);	
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 0;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 0;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value); 
		
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 1;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 10;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);

	fw_QP_DIG_MODE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0);
	fw_QP_DIG_MODE_CTRL_0.hal.rg_sgmii_mode = 0x2;
	RG_W_PL(_pxSGMII->dig_base, SGMII_DIG_BASE_OFFSET, _QP_DIG_MODE_CTRL_0, fw_QP_DIG_MODE_CTRL_0.dat.value); //write addr: 0x1FA5A324 = 0x2
	
	if(dbg_print){
	  printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
  	printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
  	printk("_rg_rate_adapt_ctrl_11 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11));
  	printk("SGMII_10M exit\n");
  }
}
#endif 

static void sgmii_rate_api(u8 rate){
	if(dbg_print) printk("sgmii_rate_api rate %x\n",rate);
	switch (rate){
		case ENUM_SGMII_1000M :
			SGMII_1G();
			break;
		case ENUM_SGMII_100M :
			SGMII_100M();
			break;
#ifdef SUPPORT_10M			
		case ENUM_SGMII_10M :
			SGMII_10M();
			break;
#endif			
		default :			
			SGMII_1G();
			break;			
	}
}

static void hsgmii_rate_api(void){
	if(dbg_print) printk("hsgmii\n");
	HGMII_2p5G();
}

static void xSGMII_Rate_API(u8 xsgmii,u8 rate){
	switch (xsgmii){
		case HSGMII:
			hsgmii_rate_api();
			break;
		case SGMII:
			sgmii_rate_api(rate);
			break;
		default :
			hsgmii_rate_api();	
			break;			
	}
}

static void xSGMII_AN_API(u8 xsgmii,u8 an){
	if(dbg_print) printk("xSGMII_AN_API %x, enable : %x\n",xsgmii,an);
	switch (xsgmii){		
		case HSGMII :
			hsgmii_an(0);
			break;
		case SGMII :
			sgmii_an(an);
			break;
		default :
			hsgmii_an(0);
                        break;	
	}	
}

static void xSGMII_AN_workaround(void)
{
	rg_type_t(HAL_QP_DIG_CK_CTRL_0) qp_dig_ck_ctrl_0;
	qp_dig_ck_ctrl_0.dat.value = RG_R_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_CK_CTRL_0);
	qp_dig_ck_ctrl_0.hal.rg_pma_tx_div2_ck_reset_n = 0;
	udelay(1);
	RG_W_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_CK_CTRL_0,qp_dig_ck_ctrl_0.dat.value);
	qp_dig_ck_ctrl_0.hal.rg_pma_tx_div2_ck_reset_n = 1;
	RG_W_PL(_pxSGMII->dig_base,SGMII_DIG_BASE_OFFSET,(RgAddr)_QP_DIG_CK_CTRL_0,qp_dig_ck_ctrl_0.dat.value);
}

static u32 xSGMII_Link_STS(u8 xsgmii){
	RGDATA_t rg = {0x00},sts ={0x00};	
	switch (xsgmii){
		case USXGMII :
			printk("not support USXGMII\n");
			break;
		case HSGMII :
		case SGMII :
			rg.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_state_2);
			sts.bit.b0 = rg.bit.b5;//sync
			sts.bit.b1 = rg.bit.b0;//an
			break;
		default :			
			printk("cmd error!!!\n");
			break;	
	}
	return sts.value;
}	

static void xSGMII_Dbg_Status(u8 xsgmii)
{
  RGDATA_t sts;
  sts.value=xSGMII_Link_STS(xsgmii);
  printk("sync : %d\t an : %d\n",sts.bit.b0,sts.bit.b1);
}
static void xSGMII_Dbg_RA_Cnt(void)
{
  rg_type_t(HAL_rg_rate_adapt_ctrl_11) rg_rate_adapt_ctrl_11;
  rg_rate_adapt_ctrl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
  rg_rate_adapt_ctrl_11.hal.rg_rate_adapt_rd_toggle=1;
  RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,rg_rate_adapt_ctrl_11.dat.value);
  udelay(1);
  rg_rate_adapt_ctrl_11.hal.rg_rate_adapt_rd_toggle=0;
  RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,rg_rate_adapt_ctrl_11.dat.value);
  udelay(1);
  printk("TX XFI SOP Count 6034 : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_1)); 
  printk("TX XFI EOP Count 6038 : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_2));
  printk("TX MAC SOP Count 603C : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_3));
  printk("TX MAC EOP Count 6040 : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_4));
  printk("RX XFI SOP Count 6044 : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_5));
  printk("RX XFI EOP Count 6048 : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_6));
  printk("RX MAC SOP Count 604C : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_7));
  printk("RX MAC EOP Count 6050 : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_8));
}
static void xSGMII_Dbg_RA_Cnt_Clr(void)
{
	rg_type_t(HAL_rg_rate_adapt_ctrl_2) rg_rate_adapt_ctrl_2;
	rg_rate_adapt_ctrl_2.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_2);	
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_xfi_sop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_xfi_eop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_mac_sop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_mac_eop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_xfi_sop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_xfi_eop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_mac_sop_cnt_clr = 0x01;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_mac_eop_cnt_clr = 0x01;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_2,rg_rate_adapt_ctrl_2.dat.value);
	udelay(1);
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_xfi_sop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_xfi_eop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_mac_sop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_tx_mac_eop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_xfi_sop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_xfi_eop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_mac_sop_cnt_clr = 0x00;
	rg_rate_adapt_ctrl_2.hal.rg_rate_adapt_rx_mac_eop_cnt_clr = 0x00;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_2,rg_rate_adapt_ctrl_2.dat.value);
}
static void xSGMII_Dbg_PCS_Cnt(void)
{
  rg_type_t(HAL_sgmii_reg_an_21) sgmii_reg_an_21;
  sgmii_reg_an_21.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_21);
  sgmii_reg_an_21.hal.sgmii_pcs_dec_error_cnt_read_latch = 1;
  RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_21,sgmii_reg_an_21.dat.value);
  
  printk("fb_in 0B20 : 0x%x\tfb_out 0B40 : 0x%x\n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_1),RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_8));
  printk("fd_in 0B28 : 0x%x\tfd_out 0B44 : 0x%x\n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_2),RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_9));
  printk("fe_in 0B2C : 0x%x\tfe_out 0B48 : 0x%x\n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_3),RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_10));
  printk("id_in 0B30 : 0x%x\tid_out 0B4C : 0x%x\n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_4),RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_11));
  printk("seq_in 0B34 : 0x%x\tseq_out 0B50 : 0x%x\n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_5),RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_12));
  printk("fbo_in 0B38 : 0x%x\tfdo_in 0B3C : 0x%x\n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_6),RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_gpii_state_7));
  printk("decode error_in 0030 : 0x%x\n",RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_12));
}

static void xSGMII_Dbg_PCS_Cnt_Clr(void)
{
	#ifdef FPGA_PLATFORM
  rg_type_t(HAL_FPGA_STS_CTRL) rg_FPGA_STS_CTRL;
  rg_FPGA_STS_CTRL.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,SGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL);
  rg_FPGA_STS_CTRL.dat.value|=0x660;
  RG_W_PL(_pxSGMII->multi_sgmii_base,SGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg_FPGA_STS_CTRL.dat.value);
  rg_FPGA_STS_CTRL.dat.value&=~(0x660);
  RG_W_PL(_pxSGMII->multi_sgmii_base,SGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg_FPGA_STS_CTRL.dat.value);  
  #endif
}

static void xSGMII_Dbg_API(u8 xsgmii,u8 mod,u8 an, u8 rate)
{
  switch(an)
  {
    case 0:
      //RX_CDR_RST();
      break;
    case 1:
      //RX_PR_CAL_SEQ(xsgmii);
      break;
    case 2:
      //RX_BringUp(xsgmii);
      //udelay(100);//10.0.9  
      //RX_PR_CAL_SEQ(xsgmii);    
      //RSTB(eM1,B_ON);
      //udelay(100);//10.0.9  
      //RSTB(eM1,B_OFF);  
      //udelay(100);
      break;
    case 3:
      if(rate == 2){//RA Count Clear on Read
        xSGMII_Dbg_Status(xsgmii);
        xSGMII_Dbg_PCS_Cnt();
        xSGMII_Dbg_RA_Cnt();
        xSGMII_Dbg_RA_Cnt_Clr();
        xSGMII_Dbg_PCS_Cnt_Clr();
        printk("xSGMII_Dbg_Cnt_Clr\n");
      }
      else if(rate == 1){//RA Count Clear
        xSGMII_Dbg_RA_Cnt_Clr();
        xSGMII_Dbg_PCS_Cnt_Clr();
        printk("xSGMII_Dbg_Cnt_Clr\n");
      }
      else{
        xSGMII_Dbg_Status(xsgmii);
        xSGMII_Dbg_PCS_Cnt();
        xSGMII_Dbg_RA_Cnt();
      }
      break;
    case 255://no use
      //xSGMII_Solution(0,xsgmii,mod,an,rate);//10.0.12
      break;
  }
}

static void xSGMII_Power_Down(u8 powerDown)
{
	rg_type_t(HAL_PLL_CTRL_0) rg_pll_ctrl_0;
	rg_type_t(HAL_RX_CTRL_2) rg_rx_ctrl_2;
	rg_pll_ctrl_0.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET,(RgAddr)_PLL_CTRL_0);	
	rg_rx_ctrl_2.dat.value = RG_R_PL(_pxSGMII->pma_base, SGMII_PMA_BASE_OFFSET,(RgAddr)_RX_CTRL_2);
	if (powerDown)
	{
		rg_pll_ctrl_0.hal.rg_phya_pwd_mux = 1;
		rg_pll_ctrl_0.hal.rg_phya_pwd = 1;
		rg_rx_ctrl_2.hal.rg_qp_rx_pwd = 1;
	}
	else
	{
		rg_pll_ctrl_0.hal.rg_phya_pwd_mux = 0;
		rg_pll_ctrl_0.hal.rg_phya_pwd = 0;
		rg_rx_ctrl_2.hal.rg_qp_rx_pwd = 0;
	}
	RG_W_PL(_pxSGMII->pma_base,SGMII_PMA_BASE_OFFSET,(RgAddr)_PLL_CTRL_0,rg_pll_ctrl_0.dat.value);
	RG_W_PL(_pxSGMII->pma_base,SGMII_PMA_BASE_OFFSET,(RgAddr)_RX_CTRL_2,rg_rx_ctrl_2.dat.value);
	udelay(5);
	if(dbg_print) printk("sgmii_u0 is power %s\n",powerDown==1?"down":"on");
}

#ifdef Enable_IRQ
static irqreturn_t xsgmii_interrupt(int irq, void *dev_id){
	rg_type_t(HAL_rg_hsgmii_mode_interrupt) rg_hsgmii_mode_interrupt;
	rg_type_t(HAL_rg_hsgmii_pcs_int_state) rg_hsgmii_pcs_int_state;
	rg_type_t(HAL_rg_rate_adapt_ctrl_1) rg_rate_adapt_ctrl_1;
	
	if(dbg_print) {
		printk("usb xsgmii: an_int called\n");
		printk("usb xsgmii: irq=%d\n",irq);
	}	

	rg_hsgmii_pcs_int_state.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_int_state);	
	if (rg_hsgmii_pcs_int_state.hal.ro_hsgmii_mode2_an_done) 
	{
		;
	}
	
	rg_hsgmii_mode_interrupt.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt);
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int				  =0x1;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int			  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int		  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int 				  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int_clear			  =0x1;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int_clear 	  =0x1;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x1;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int_clear			  =0x1;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,rg_hsgmii_mode_interrupt.dat.value);
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int				  =0x1;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int			  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int		  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int 				  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int_clear			  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int_clear 	  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int_clear			  =0x0;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,rg_hsgmii_mode_interrupt.dat.value);
	return IRQ_HANDLED;
}

static void xsgmii_interrupt_init(u8 disable){
	rg_type_t(HAL_rg_hsgmii_mode_interrupt) rg_hsgmii_mode_interrupt;		
	rg_type_t(HAL_INTERRUPT_EN_0) rg_INTERRUPT_EN_0;
	rg_type_t(HAL_multi_sgmii_reg_interrupt_sel) rg_multi_sgmii_reg_interrupt_sel;

	if(dbg_print) printk("xsgmii: int_init called and disable = %x\n",disable);
	if(_pxSGMII->irq < 0){
		printk("ETH IRQ NG\n");
		return _pxSGMII->irq;
	}	
	rg_hsgmii_mode_interrupt.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt);
	rg_INTERRUPT_EN_0.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) INTERRUPT_EN_0);
	rg_multi_sgmii_reg_interrupt_sel.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) multi_sgmii_reg_interrupt_sel);	

	if(disable){
		rg_INTERRUPT_EN_0.hal.rg_pcs_int_en_0 = 0;		
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) INTERRUPT_EN_0, rg_INTERRUPT_EN_0.dat.value);
		return;
	}
	else{
		rg_INTERRUPT_EN_0.hal.rg_pcs_int_en_0 = 1;
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) INTERRUPT_EN_0, rg_INTERRUPT_EN_0.dat.value);
	}
	
	if((XSGMII_REQ_IRQ == 0)){		
		XSGMII_REQ_IRQ = 1;
		if(request_irq(_pxSGMII->irq, xsgmii_interrupt, 0, "eth_usxgmii", _pxSGMII->dev)){
			printk("\n request_irq() (irq number: %d) NG\n", _pxSGMII->irq);
			XSGMII_REQ_IRQ = 0;
			return _pxSGMII->irq;
		}
		else{
		  if(dbg_print) printk("\n request_irq() (irq number: %d) OK \n", _pxSGMII->irq);
		}
	
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int				   =0x1;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int			   =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int 	   =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int			   =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int_clear 		   =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int_clear	   =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int_clear	   =0x0;
		RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,rg_hsgmii_mode_interrupt.dat.value);


		rg_multi_sgmii_reg_interrupt_sel.hal.rg_hsgmii_pcs_int = 1;
		//rg_multi_sgmii_reg_interrupt_sel.hal.rg_hsgmii_phy_int = 1;
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) multi_sgmii_reg_interrupt_sel, rg_multi_sgmii_reg_interrupt_sel.dat.value);
	}
	rg_INTERRUPT_EN_0.dat.value = 0;
	rg_INTERRUPT_EN_0.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) INTERRUPT_EN_0);
	if(dbg_print) {
		printk("xsgmii: sync_int exit %x\n",XSGMII_REQ_IRQ);
	}	
}
#endif

u32 USB_xSGMII_API(u8 xsgmii,u8 mod,u8 an, u8 rate){		
	u32 data=0;
	if (mod < 2){
		#ifndef FPGA_PLATFORM
		xsgmii_chg(xsgmii);
		#endif
		printk("USB_xSGMII_API xsgmii=%x,mod = %x,an=%x,rate=%x\n",xsgmii,mod,an,rate);
		xsgmii_init(xsgmii);
		#ifdef Enable_IRQ
		xsgmii_interrupt_init(codition_int_dis);
		#endif
	}

	switch(mod){
		case 0: 
			if(dbg_print) printk("force mode\n");
			xSGMII_AN_API(xsgmii,an);
			xSGMII_Rate_API(xsgmii,rate);
			break;
		case 1:
			if(dbg_print) printk("AN mode\n");
			xSGMII_AN_API(xsgmii,1);
			xSGMII_AN_AutoSetting(xsgmii,0,1,rate); // MAC mode
			xSGMII_AN_workaround();
			break;
		case 2:
			data = xSGMII_Link_STS(xsgmii);
			if(dbg_print) printk("xsgmii status = %d\n",data);
			break;
		case 253:
			xSGMII_Power_Down(an);
			break;
		case 254:
			USB_xSGMII_Disconnect(an);
			break;
		case 255:
		  printk("xSGMII_Dbg\n");
		  xSGMII_Dbg_API( xsgmii, mod, an, rate);
		  break;
		default:
			printk("xsgmii mod error!!!\n");
			data = 0xff;
			break;
	}
	return data;
}
EXPORT_SYMBOL(USB_xSGMII_API);


/* APIs */
static void xsgmii_drv_init(void)
{
#ifdef FPGA_PLATFORM	
		return;
#endif
	if(dbg_print){
	  printk("xsgmii_init: start\n");
  	//xsgmii_int_init();
  	printk("eth_usxgmii_fpga\n");
  	printk("usxgmii: sgmii_serdes_sel: exit!\n");
  }
}

static int xsgmii_drv_probe(struct platform_device *pdev)
{
    const char *int_name;
    struct resource *res = NULL;
    int ret,int_id;
	xsgmii_base * _pxSGMII_Tmp = NULL;

	
	printk("USB xsgmii_drv_probe\n");
    if (!pdev->dev.of_node) {
        dev_err(&pdev->dev, "No eth_usxgmii DT node found");
        return -EINVAL;
    }

    _pxSGMII_Tmp = devm_kzalloc(&pdev->dev, sizeof(xsgmii_base), GFP_KERNEL);
    if (!_pxSGMII_Tmp)
        return -ENOMEM;

    platform_set_drvdata(pdev, _pxSGMII_Tmp);
	_pxSGMII = _pxSGMII_Tmp;
	

	/* get pcs2 base address */	
	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
   	_pxSGMII->pcs2_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(_pxSGMII->pcs2_base)){
	   return PTR_ERR(_pxSGMII->pcs2_base);
   	}

	/* get AN base address */
	res = platform_get_resource(pdev, IORESOURCE_MEM, 1);
   	_pxSGMII->an_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(_pxSGMII->an_base))
	   return PTR_ERR(_pxSGMII->an_base);

	/* get RA base address */
	res = platform_get_resource(pdev, IORESOURCE_MEM, 2);
   	_pxSGMII->ra_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(_pxSGMII->ra_base))
	   return PTR_ERR(_pxSGMII->ra_base);

	/* Multi SGMII */
	res = platform_get_resource(pdev, IORESOURCE_MEM, 3);
	_pxSGMII->multi_sgmii_base = devm_ioremap_resource(&pdev->dev, res);
	if (IS_ERR(_pxSGMII->multi_sgmii_base))
		return PTR_ERR(_pxSGMII->multi_sgmii_base);
	
	/* get digital system base address */
	_pxSGMII->dig_base = Get_Base(SGMII_DIG_BASE);
	if (IS_ERR(_pxSGMII->phya_base))
		return PTR_ERR(_pxSGMII->phya_base);
		
	/* get pma base address */
	_pxSGMII->pma_base = Get_Base(SGMII_PMA_BASE);
	if (IS_ERR(_pxSGMII->phya_base))
		return PTR_ERR(_pxSGMII->phya_base);
		
	/* get phya base address */
	_pxSGMII->phya_base = Get_Base(SGMII_ANA_BASE);
	if (IS_ERR(_pxSGMII->phya_base))
		return PTR_ERR(_pxSGMII->phya_base);

	//int_name
	ret = of_property_read_string(pdev->dev.of_node, "int_name", &int_name);
	if(ret < 0)	printk("sgmii get propert error!");
	else printk("sgmii:int_name: %s\n",int_name);

	//int_id
	ret = of_property_read_u32(pdev->dev.of_node, "int_id", &int_id);
	if(ret<0) printk("sgmii get propert error!\n");
	else printk("sgmii:int_id: %d\n",int_id);
	
#ifdef Enable_IRQ
	/* get irq num */
		_pxSGMII->irq = platform_get_irq(pdev, 0);
		if(_pxSGMII->irq <= 0) {
			printk("\n get eth_xsgmii irq number failed\n");
			return _pxSGMII->irq;
		}else printk("irq = %x\n",_pxSGMII->irq);
		//int_name
#endif


	#if 1
	//printk("usb_xsgmii->pcs1_base= %lx\n", (unsigned long)_pxSGMII->pcs1_base);
	printk("usb_xsgmii->pcs2_base= %pS\n", _pxSGMII->pcs2_base);
	printk("usb_xsgmii->an_base=   %pS\n", _pxSGMII->an_base);
	printk("usb_xsgmii->ra_base=   %pS\n", _pxSGMII->ra_base);
	printk("usb_xsgmii->multi_sgmii_base=   %pS\n", _pxSGMII->multi_sgmii_base);
	printk("usb_xsgmii->dig_base=   %pS\n", _pxSGMII->dig_base);
	printk("usb_xsgmii->pma_sgmii_base=   %pS\n", _pxSGMII->pma_base);
	printk("usb_xsgmii->phya_base=   %pS\n", _pxSGMII->phya_base);
	#endif


	if(_pxSGMII == NULL)printk("USB xsgmii drv probe ng\n");
	else xsgmii_drv_init();

	return 0;
}
static int xsgmii_drv_remove(struct platform_device *pdev)
{
    return 0;
}

/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/
static struct platform_driver DRV = {
    .probe = xsgmii_drv_probe,
    .remove = xsgmii_drv_remove,
    .driver = {
	    .name = NAME,
	    .of_match_table = xsgmii_table
    },
};
module_platform_driver(DRV);
MODULE_DESCRIPTION(DESCRIPTION);

