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
#include "H/air_eth_xsgmii_config.h"
#include <linux/init.h>
#include <linux/kernel.h>   
#include <linux/proc_fs.h>
#include <linux/uaccess.h>
#include <asm/delay.h>

#include "uapi/ecnt_event_global/ecnt_event_serdes.h"
#include <ecnt_hook/ecnt_hook_hsgmii_mac.h>


/************************************************************************
*                  STATIC VARIABLE DECLARATIONS
*************************************************************************
*/
static volatile xsgmii_base * _pxSGMII = NULL;//YT_20220622_0
static u8 xsgmii_bk = 0xff;
static int spd_sel_bk = EO_Eth_Ser_USXGMII;
static u8 ETH_BASER_Mode = 0;
static u8 debug_int_en = 0;

 
static const struct of_device_id xsgmii_table[] = {
    { .compatible = COMPATIBLE},
    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, xsgmii_table);
/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
extern	void __iomem* Get_Base(u32 base);

#if !defined(TCSUPPORT_BOARD_SELECT)
extern int get_serdes_sel(ECNT_EVENT_SYSTEM_SERDES_SEL_t sel);
#endif
/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/
void ETH_xSGMII_Ver(void){
	printk("ETH XSGMII VER = %s\n",VER);
}
EXPORT_SYMBOL(ETH_xSGMII_Ver);
static void RG_W(REG_t* rg){	
#ifdef FPGA_PLATFORM
	if ((rg->base == _pxSGMII->phya_base) || (rg->base == _pxSGMII->pma_base)){
		printk("data %x\n",rg->data.value);
		printk("base %ps, addr %x, data %x\n",rg->base,rg->addr,rg->data.value);}
	else
    {
        writel(rg->data.value, rg->base + (rg->addr - rg->base_start));
        if(dbg_print)
        {
            rg->data.value = readl(rg->base + (rg->addr - rg->base_start));
            if (rg->base == _pxSGMII->pcs1_base)printk("memwl %8x %x\n",(0x1fa75000+rg->addr),rg->data.value);
            if (rg->base == _pxSGMII->pcs2_base)printk("memwl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
            if (rg->base == _pxSGMII->an_base)printk("memwl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
            if (rg->base == _pxSGMII->ra_base)printk("memwl %8x %x\n",(0x1fa76000+rg->addr),rg->data.value);
            if (rg->base == _pxSGMII->multi_sgmii_base)printk("memwl %8x %x\n",(0x1fa74000+rg->addr),rg->data.value);   
        }
    }   
		
#else
	writel(rg->data.value, rg->base + (rg->addr - rg->base_start));
	if(aux.bit.b30)
    {
		rg->data.value = readl(rg->base + (rg->addr - rg->base_start));
		if (rg->base == _pxSGMII->pcs1_base)printk("memwl %8x %x\n",(0x1fa75000+rg->addr),rg->data.value);
		if (rg->base == _pxSGMII->pcs2_base)printk("memwl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
		if (rg->base == _pxSGMII->an_base)printk("memwl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
		if (rg->base == _pxSGMII->ra_base)printk("memwl %8x %x\n",(0x1fa76000+rg->addr),rg->data.value);
		if (rg->base == _pxSGMII->multi_sgmii_base)printk("memwl %8x %x\n",(0x1fa74000+rg->addr),rg->data.value);
#if AN7583_COMMON_PHYA == 0
		if (rg->base == _pxSGMII->phya_base)printk("memwl %8x %x\n",(0x1fa7a000+rg->addr),rg->data.value);
		if (rg->base == _pxSGMII->pma_base)printk("memwl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
#endif
	}
#endif
}

static u32 RG_R(REG_t* rg){
#ifdef FPGA_PLATFORM
	if ((rg->base != _pxSGMII->phya_base) && (rg->base != _pxSGMII->pma_base))
		return readl(rg->base + (rg->addr - rg->base_start));
	else
		return 0;
#else
    if(aux.bit.b30)
    {
        rg->data.value = readl(rg->base + (rg->addr - rg->base_start));
        if (rg->base == _pxSGMII->pcs1_base)printk("memrl %8x %x\n",(0x1fa75000+rg->addr),rg->data.value);
        if (rg->base == _pxSGMII->pcs2_base)printk("memrl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
        if (rg->base == _pxSGMII->an_base)printk("memrl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
        if (rg->base == _pxSGMII->ra_base)printk("memrl %8x %x\n",(0x1fa76000+rg->addr),rg->data.value);
        if (rg->base == _pxSGMII->multi_sgmii_base)printk("memrl %8x %x\n",(0x1fa74000+rg->addr),rg->data.value);
#if AN7583_COMMON_PHYA == 0
        if (rg->base == _pxSGMII->phya_base)printk("memrl %8x %x\n",(0x1fa7a000+rg->addr),rg->data.value);
        if (rg->base == _pxSGMII->pma_base)printk("memrl %8x %x\n",(0x1fa70000+rg->addr),rg->data.value);
#endif
    }
	return readl(rg->base + (rg->addr - rg->base_start));
#endif
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
static u8 xsgmii_chg(u8 xsgmii){
	u8 chg = OFF;
    uint8 FPGA_ON = 0;
    u32 wan_config = GET_WAN_CONF();
#ifdef FPGA_PLATFORM
	if((xsgmii_bk = 0xff)||(xsgmii != xsgmii_bk)){
		chg = ON;		
		xsgmii_bk = xsgmii;
	}
    FPGA_ON = 1;
#else
	//if((xsgmii_bk = 0xff)||(xsgmii != xsgmii_bk))
	{
		chg = ON;		
		xsgmii_bk = xsgmii;
        switch (xsgmii_bk)
        {
            case USXGMII:   spd_sel_bk = ETH_BASER_Mode? EO_Eth_Ser_5GBaseR : EO_Eth_Ser_USXGMII;break;
            case HSGMII:    spd_sel_bk = EO_Eth_Ser_HSGMII;break;
            case SGMII:     spd_sel_bk = EO_Eth_Ser_SGMII;break;
            default : spd_sel_bk = EO_Eth_Ser_USXGMII;break;
        } 

        
		SET_WAN_CONF(wan_config & 0xFEFFFFFF);//Force set WAN as XFI to avoid OLT mode select.
		
		switch (xsgmii){
			case USXGMII :
				SCU_SetModSel(1);
				break;
			case HSGMII:
			case SGMII:
				SCU_SetModSel(2);
				break;
		}
		SCU_SetModRst(SCU_GetModRst() | (SCU_RST_BIT <<SCU_MAC_RST_POS));
		SCU_SetModRst(SCU_GetModRst()& ~(SCU_RST_BIT <<SCU_MAC_RST_POS));
	}
#endif
	if(dbg_print) printk("xsgmii_chg %x\n",chg);
    if(dbg_print) printk("FPGA ON %x\n",FPGA_ON);
	return chg;
}
static void CMN_EN(u8 en){
	rg_type_t(HAL_RG_PXP_CMN_EN) RG_PXP_CMN_EN;

	RG_PXP_CMN_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CMN_EN);
	RG_PXP_CMN_EN.hal.rg_pxp_cmn_en = en;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CMN_EN,RG_PXP_CMN_EN.dat.value);
}	

static void JCPLL_LDO(u8 enable){
	rg_type_t(HAL_RG_PXP_JCPLL_SPARE_H) RG_PXP_JCPLL_SPARE_H;
	if(dbg_print) printk("JCPLL_LDO\n");
	udelay(200);
	RG_PXP_JCPLL_SPARE_H.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SPARE_H);
	RG_PXP_JCPLL_SPARE_H.hal.rg_pxp_jcpll_spare_l &= ~0x20; //turn off LDO for bg settle, enable LDO for clk working
	RG_PXP_JCPLL_SPARE_H.hal.rg_pxp_jcpll_spare_l |= (enable << 5); //turn off LDO for bg settle, enable LDO for clk working
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SPARE_H,RG_PXP_JCPLL_SPARE_H.dat.value);
}

static void JCPLL_SDM(u8 di_en,u8 ifm,u8 hren){
	rg_type_t(HAL_RG_PXP_JCPLL_RST_DLY) RG_PXP_JCPLL_RST_DLY;	
	rg_type_t(HAL_RG_PXP_JCPLL_SDM_IFM) RG_PXP_JCPLL_SDM_IFM;
	rg_type_t(HAL_RG_PXP_JCPLL_SDM_HREN) RG_PXP_JCPLL_SDM_HREN;
	if(dbg_print) printk("JCPLL_SDM\n");

	RG_PXP_JCPLL_RST_DLY.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY);
	RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_sdm_di_en = di_en;	
	RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_sdm_di_ls = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);

	RG_PXP_JCPLL_SDM_IFM.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_IFM);
	RG_PXP_JCPLL_SDM_IFM.hal.rg_pxp_jcpll_sdm_ifm = ifm;	
	RG_PXP_JCPLL_SDM_IFM.hal.rg_pxp_jcpll_sdm_mode = 0x0;
	RG_PXP_JCPLL_SDM_IFM.hal.rg_pxp_jcpll_sdm_ord = 0x3;	
	RG_PXP_JCPLL_SDM_IFM.hal.rg_pxp_jcpll_sdm_out = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_IFM,RG_PXP_JCPLL_SDM_IFM.dat.value);

	RG_PXP_JCPLL_SDM_HREN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_HREN);
	RG_PXP_JCPLL_SDM_HREN.hal.rg_pxp_jcpll_sdm_hren = hren;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_HREN,RG_PXP_JCPLL_SDM_HREN.dat.value);	
}

static void JCPLL_SSC(u8 phase_ini,u16 delta1,u16 delta,u16 period,u8 ssc_en){
	rg_type_t(HAL_RG_PXP_JCPLL_SSC_DELTA) RG_PXP_JCPLL_SSC_DELTA;	
	rg_type_t(HAL_RG_PXP_JCPLL_SSC_TRI_EN) RG_PXP_JCPLL_SSC_TRI_EN;	
	rg_type_t(HAL_RG_PXP_JCPLL_VCO_TCLVAR) RG_PXP_JCPLL_VCO_TCLVAR;
	if(dbg_print) printk("JCPLL_SSC\n");

	RG_PXP_JCPLL_SSC_DELTA.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_DELTA);
	RG_PXP_JCPLL_SSC_DELTA.hal.rg_pxp_jcpll_ssc_delta = delta;
	RG_PXP_JCPLL_SSC_DELTA.hal.rg_pxp_jcpll_ssc_period = period;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_DELTA,RG_PXP_JCPLL_SSC_DELTA.dat.value);

	
	RG_PXP_JCPLL_SSC_TRI_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_TRI_EN);
	RG_PXP_JCPLL_SSC_TRI_EN.hal.rg_pxp_jcpll_ssc_tri_en = 0x0;	
	RG_PXP_JCPLL_SSC_TRI_EN.hal.rg_pxp_jcpll_ssc_delta1 = delta1;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_TRI_EN,RG_PXP_JCPLL_SSC_TRI_EN.dat.value);

	RG_PXP_JCPLL_VCO_TCLVAR.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCO_TCLVAR);
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_ssc_phase_ini = phase_ini;	
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_vco_vcovar_bias_l = 0x0;
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_vco_tclvar = 0x0;	
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_ssc_en = ssc_en;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCO_TCLVAR,RG_PXP_JCPLL_VCO_TCLVAR.dat.value);
}


static void JCPLL_LPF(u8 ibias,u8 br,u8 bp,u8 bwr,u8 bwc){
	rg_type_t(HAL_RG_PXP_JCPLL_IB_EXT_EN) RG_PXP_JCPLL_IB_EXT_EN;	
	rg_type_t(HAL_RG_PXP_JCPLL_LPF_BR) RG_PXP_JCPLL_LPF_BR;	
	rg_type_t(HAL_RG_PXP_JCPLL_LPF_BWC) RG_PXP_JCPLL_LPF_BWC;
	if(dbg_print) printk("JCPLL_LPF\n");
	RG_PXP_JCPLL_IB_EXT_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_IB_EXT_EN);
	RG_PXP_JCPLL_IB_EXT_EN.hal.rg_pxp_jcpll_chp_ibias = ibias;
	RG_PXP_JCPLL_IB_EXT_EN.hal.rg_pxp_jcpll_chp_iofst = 0x00;
	RG_PXP_JCPLL_IB_EXT_EN.hal.rg_pxp_jcpll_lpf_shck_en = 0x00;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_IB_EXT_EN,RG_PXP_JCPLL_IB_EXT_EN.dat.value);

	
	RG_PXP_JCPLL_LPF_BR.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BR);
	RG_PXP_JCPLL_LPF_BR.hal.rg_pxp_jcpll_lpf_br = br;	
	RG_PXP_JCPLL_LPF_BR.hal.rg_pxp_jcpll_lpf_bc = 0x1F;
	RG_PXP_JCPLL_LPF_BR.hal.rg_pxp_jcpll_lpf_bp = bp;
	RG_PXP_JCPLL_LPF_BR.hal.rg_pxp_jcpll_lpf_bwr = bwr;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BR,RG_PXP_JCPLL_LPF_BR.dat.value);

	RG_PXP_JCPLL_LPF_BWC.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BWC);
	RG_PXP_JCPLL_LPF_BWC.hal.rg_pxp_jcpll_lpf_bwc = bwc;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BWC,RG_PXP_JCPLL_LPF_BWC.dat.value);
}

static void JCPLL_VCO(void){
	rg_type_t(HAL_RG_PXP_JCPLL_VCODIV) RG_PXP_JCPLL_VCODIV;	
	rg_type_t(HAL_RG_PXP_JCPLL_VCO_TCLVAR) RG_PXP_JCPLL_VCO_TCLVAR;	
	if(dbg_print) printk("JCPLL_VCO\n");
	RG_PXP_JCPLL_VCODIV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV);
	RG_PXP_JCPLL_VCODIV.hal.rg_pxp_jcpll_vco_cfix = 0x1;
	RG_PXP_JCPLL_VCODIV.hal.rg_pxp_jcpll_vco_scapwr = 0x04;
	RG_PXP_JCPLL_VCODIV.hal.rg_pxp_jcpll_vco_halflsb_en = 0x01;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV,RG_PXP_JCPLL_VCODIV.dat.value);

	
	RG_PXP_JCPLL_VCO_TCLVAR.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCO_TCLVAR);
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_vco_vcovar_bias_h = 0x3;	
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_vco_vcovar_bias_l = 0x0;
	RG_PXP_JCPLL_VCO_TCLVAR.hal.rg_pxp_jcpll_vco_tclvar = 0x5;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCO_TCLVAR,RG_PXP_JCPLL_VCO_TCLVAR.dat.value);
}

static void JCPLL_PCW(u32 pcw){	
	rg_type_t(HAL_rg_force_da_pxp_jcpll_sdm_pcw) rg_force_da_pxp_jcpll_sdm_pcw;		
	rg_type_t(HAL_rg_force_da_pxp_rx_fe_vos) rg_force_da_pxp_rx_fe_vos;	
	if(dbg_print) printk("JCPLL_PCW\n");
	rg_force_da_pxp_jcpll_sdm_pcw.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_sdm_pcw);
	rg_force_da_pxp_jcpll_sdm_pcw.hal.rg_force_da_pxp_jcpll_sdm_pcw = pcw;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_sdm_pcw,rg_force_da_pxp_jcpll_sdm_pcw.dat.value);

	rg_force_da_pxp_rx_fe_vos.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_vos);
	rg_force_da_pxp_rx_fe_vos.hal.rg_force_sel_da_pxp_jcpll_sdm_pcw = 0x01;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_vos,rg_force_da_pxp_rx_fe_vos.dat.value);
}

static void JCPLL_RSTB(u8 action){
	rg_type_t(HAL_RG_PXP_JCPLL_RST_DLY) RG_PXP_JCPLL_RST_DLY;	
	if(dbg_print) printk("JCPLL_RSTB\n");
	RG_PXP_JCPLL_RST_DLY.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY);
	RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_rst_dly = 0x04; //YT change 4
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);
	switch(action){
		case 0: //toggle			
			RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb = 0x0; //aways high
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);			
			//YT add
			udelay(200);
			RG_PXP_JCPLL_RST_DLY.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY);
			RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb = 0x1; //aways high
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);
			break;
		case 1: //once
			if(!RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb){
				RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb = 0x1; //aways high
				RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);
			}	
			
			break;
		default:
			RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb = 0x0; //aways high
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);
			
			//YT add
			udelay(200);
			RG_PXP_JCPLL_RST_DLY.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY);
			RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb = 0x1; //aways high
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);
			break;
	}	
}


static void JCPLL_DIV(u8 prediv_mode,u8 vcodiv,u8 postdiv_d5){
	rg_type_t(HAL_RG_PXP_JCPLL_MMD_PREDIV_MODE) RG_PXP_JCPLL_MMD_PREDIV_MODE;
	rg_type_t(HAL_RG_PXP_JCPLL_VCODIV) RG_PXP_JCPLL_VCODIV;
	if(dbg_print) printk("JCPLL_DIV\n");
	RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_MMD_PREDIV_MODE);
	RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.rg_pxp_jcpll_mmd_prediv_mode = prediv_mode;	
	//YT add default value 0
	RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.rg_pxp_jcpll_postdiv_d5 = postdiv_d5;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_MMD_PREDIV_MODE,RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value);

	RG_PXP_JCPLL_VCODIV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV);
	RG_PXP_JCPLL_VCODIV.hal.rg_pxp_jcpll_vcodiv = vcodiv;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV,RG_PXP_JCPLL_VCODIV.dat.value);
}

static void JCPLL_KBand(void){
	//rg_type_t(HAL_RG_PXP_JCPLL_RST_DLY) RG_PXP_JCPLL_RST_DLY;
	rg_type_t(HAL_RG_PXP_JCPLL_KBAND_KFC) RG_PXP_JCPLL_KBAND_KFC;
	rg_type_t(HAL_RG_PXP_JCPLL_LPF_BWC) RG_PXP_JCPLL_LPF_BWC;
	//rg_type_t(HAL_RG_PXP_JCPLL_MMD_PREDIV_MODE) RG_PXP_JCPLL_MMD_PREDIV_MODE;
	//rg_type_t(HAL_RG_PXP_JCPLL_VCODIV) RG_PXP_JCPLL_VCODIV;
	if(dbg_print) printk("JCPLL_KBand\n");
	//move to JCPLL_RST
	//RG_PXP_JCPLL_RST_DLY.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY);
	//RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_pll_rstb = 0x1; //aways high
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);

	RG_PXP_JCPLL_KBAND_KFC.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_KBAND_KFC);
	RG_PXP_JCPLL_KBAND_KFC.hal.rg_pxp_jcpll_kband_kfc = 0x0;
	RG_PXP_JCPLL_KBAND_KFC.hal.rg_pxp_jcpll_kband_kf = 0x3;
	RG_PXP_JCPLL_KBAND_KFC.hal.rg_pxp_jcpll_kband_ks = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_KBAND_KFC,RG_PXP_JCPLL_KBAND_KFC.dat.value);

	RG_PXP_JCPLL_LPF_BWC.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BWC);
	RG_PXP_JCPLL_LPF_BWC.hal.rg_pxp_jcpll_kband_div = 0x2;	
	RG_PXP_JCPLL_LPF_BWC.hal.rg_pxp_jcpll_kband_code = 0xE4; //it's randon value from DE 
	RG_PXP_JCPLL_LPF_BWC.hal.rg_pxp_jcpll_kband_option = 0x0; 
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BWC,RG_PXP_JCPLL_LPF_BWC.dat.value);

	//move to JCPLL_DIV
	//RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_MMD_PREDIV_MODE);
	//RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.rg_pxp_jcpll_mmd_prediv_mode = 0x0;	
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_MMD_PREDIV_MODE,RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value);

	//move to JCPLL_DIV
	//RG_PXP_JCPLL_VCODIV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV);
	//RG_PXP_JCPLL_VCODIV.hal.rg_pxp_jcpll_vcodiv = 0x0;
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV,RG_PXP_JCPLL_VCODIV.dat.value);
}

static void JCPLL_TCL(u8 kband_vref,u8 amp_gain,u8 amp_vref,u8 lpf_bw,u8 amp_en,u8 lpf_en){
	rg_type_t(HAL_RG_PXP_JCPLL_SPARE_H) RG_PXP_JCPLL_SPARE_H;
	rg_type_t(HAL_RG_PXP_JCPLL_SDM_HREN) RG_PXP_JCPLL_SDM_HREN;
	rg_type_t(HAL_RG_PXP_JCPLL_TCL_CMP_EN) RG_PXP_JCPLL_TCL_CMP_EN;
    
	if(dbg_print) printk("JCPLL_TCL\n");
	RG_PXP_JCPLL_SPARE_H.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SPARE_H);
	RG_PXP_JCPLL_SPARE_H.hal.rg_pxp_jcpll_tcl_kband_vref = kband_vref;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SPARE_H,RG_PXP_JCPLL_SPARE_H.dat.value);

	RG_PXP_JCPLL_SDM_HREN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_HREN);
	RG_PXP_JCPLL_SDM_HREN.hal.rg_pxp_jcpll_tcl_amp_gain = amp_gain;
	RG_PXP_JCPLL_SDM_HREN.hal.rg_pxp_jcpll_tcl_amp_vref = amp_vref;
	RG_PXP_JCPLL_SDM_HREN.hal.rg_pxp_jcpll_tcl_amp_en = amp_en;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_HREN,RG_PXP_JCPLL_SDM_HREN.dat.value);

	//comp_en disable, keep default value
	RG_PXP_JCPLL_TCL_CMP_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_TCL_CMP_EN);
	RG_PXP_JCPLL_TCL_CMP_EN.hal.rg_pxp_jcpll_tcl_lpf_bw = lpf_bw;	
	RG_PXP_JCPLL_TCL_CMP_EN.hal.rg_pxp_jcpll_tcl_lpf_en = lpf_en;
	//RG_PXP_JCPLL_TCL_CMP_EN.hal.rg_pxp_jcpll_tcl_cmp_vth = 0x0;
	//RG_PXP_JCPLL_TCL_CMP_EN.hal.rg_pxp_jcpll_tcl_cmp_en = cmp_en;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_TCL_CMP_EN,RG_PXP_JCPLL_TCL_CMP_EN.dat.value);
}
//static void JCPLL_KBand_EN(void){ // no use
	//rg_type_t(HAL_scan_mode) scan_mode;
	//scan_mode.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _scan_mode);
	//scan_mode.hal.rg_force_sel_da_pxp_jcpll_kband_load_en = 0x1;
	//scan_mode.hal.rg_force_da_pxp_jcpll_kband_load_en = 0x0;
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _scan_mode,scan_mode.dat.value);
//}

static void JCPLL_EN(u8 enable){
	rg_type_t(HAL_rg_force_da_pxp_jcpll_ckout_en) rg_force_da_pxp_jcpll_ckout_en;
	if(dbg_print) printk("JCPLL_EN\n");
	rg_force_da_pxp_jcpll_ckout_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_ckout_en);
	rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_en = 1;
	rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_en = enable;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_ckout_en,rg_force_da_pxp_jcpll_ckout_en.dat.value);
}
static void JCPLL_Out(u8 enable){
	rg_type_t(HAL_rg_force_da_pxp_jcpll_ckout_en) rg_force_da_pxp_jcpll_ckout_en;
	
	if(dbg_print) printk("JCPLL_Out\n");
	//rg_type_t(HAL_RG_PXP_JCPLL_FREQ_MEAS_EN) RG_PXP_JCPLL_FREQ_MEAS_EN;
	//rg_type_t(HAL_RG_PXP_JCPLL_RST_DLY) RG_PXP_JCPLL_RST_DLY;

	rg_force_da_pxp_jcpll_ckout_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_ckout_en);
	//move to JCPLL_EN()
	//rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_en = 1;
	//rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_en = 1;
	rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_ckout_en = 1;
	rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_ckout_en = enable;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_ckout_en,rg_force_da_pxp_jcpll_ckout_en.dat.value);

	//no need
	//RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_FREQ_MEAS_EN);
	//RG_PXP_JCPLL_FREQ_MEAS_EN.hal.rg_pxp_jcpll_vco_kband_meas_en = 0x0;//don't setS
	//RG_PXP_JCPLL_FREQ_MEAS_EN.hal.rg_pxp_jcpll_freq_meas_en = 0x1;//pll lock ok if meas pll freq 
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_FREQ_MEAS_EN,RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value);

	//config in JCPLL_RST()
	//RG_PXP_JCPLL_RST_DLY.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY);
	//RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_sdm_di_ls = 0x0;
	//RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_sdm_di_en = 0x0;
	//RG_PXP_JCPLL_RST_DLY.hal.rg_pxp_jcpll_rst_dly = 0x2;
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,RG_PXP_JCPLL_RST_DLY.dat.value);
}
static void JCPLL_BringUp(u8 xsgmii){
	if(dbg_print) printk("JCPLL BringUp %x\n",xsgmii);
	JCPLL_LDO(1); //LDO follow pllen 
	JCPLL_RSTB(1); //just set high & always keep high
	JCPLL_EN(OFF);
	switch(xsgmii){
		case USXGMII:			
			JCPLL_SDM(0,0,0);
			JCPLL_SSC(0,0,0,0,0);
			JCPLL_LPF(0x18,0b01010,0x10,0x00,0x00);
			JCPLL_VCO();
			JCPLL_PCW(0x25800000);
			JCPLL_DIV(0,0,0);
			JCPLL_KBand();
			JCPLL_TCL(0xf,0x01,0b0101,0,1,1);

			JCPLL_EN(1);
			JCPLL_Out(1);
			break;
		case HSGMII:
			JCPLL_SDM(0,0,0);
			JCPLL_SSC(0,0,0,0,0);
			JCPLL_LPF(0x18,0b01010,0x10,0x00,0x00);
			JCPLL_VCO();
			JCPLL_PCW(0x25800000);
			JCPLL_DIV(0,0,0);
			JCPLL_KBand();
			JCPLL_TCL(0x10,0x01,0b0101,0,1,1);

			JCPLL_EN(1);
			JCPLL_Out(1);
			break;
		case SGMII://10.0.9
			JCPLL_SDM(0,0,0);
			JCPLL_SSC(0,0,0,0,0);
			JCPLL_LPF(0x18,0b01010,0x10,0x00,0x00);
			JCPLL_VCO();
			JCPLL_PCW(0x25800000);
			JCPLL_DIV(0,0,0);
			JCPLL_KBand();
			JCPLL_TCL(0x10,0x01,0b0101,0,1,1);
			
			JCPLL_EN(1);
			JCPLL_Out(1);
			break;
		default: //USXGMII
			JCPLL_SDM(0,0,0);
			JCPLL_SSC(0,0,0,0,0);
			JCPLL_LPF(0x18,0b01010,0x10,0x00,0x00);
			JCPLL_VCO();
			JCPLL_PCW(0x25800000);
			JCPLL_DIV(0,0,0);
			JCPLL_KBand();
			JCPLL_TCL(0xf,0x01,0b0101,0,1,1);

			JCPLL_EN(1);
			JCPLL_Out(1);
			printk("Waring!!! JCPLL xSGMII SEL NG\n");
			break;
	}
	
}
static void TXPLL_SDM(u8 di_en,u8 ifm,u8 hren){
	rg_type_t(HAL_RG_PXP_TXPLL_SDM_DI_EN) RG_PXP_TXPLL_SDM_DI_EN;
	rg_type_t(HAL_RG_PXP_TXPLL_SDM_ORD) RG_PXP_TXPLL_SDM_ORD;
	if(dbg_print) printk("TXPLL_SDM\n");
	RG_PXP_TXPLL_SDM_DI_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_EN);
	RG_PXP_TXPLL_SDM_DI_EN.hal.rg_pxp_txpll_sdm_di_en = di_en;	
	RG_PXP_TXPLL_SDM_DI_EN.hal.rg_pxp_txpll_sdm_di_ls = 0x0;	
	RG_PXP_TXPLL_SDM_DI_EN.hal.rg_pxp_txpll_sdm_ifm = ifm;	
	RG_PXP_TXPLL_SDM_DI_EN.hal.rg_pxp_txpll_sdm_mode = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_EN,RG_PXP_TXPLL_SDM_DI_EN.dat.value);

	RG_PXP_TXPLL_SDM_ORD.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD);
	RG_PXP_TXPLL_SDM_ORD.hal.rg_pxp_txpll_sdm_ord = 0x3;	
	RG_PXP_TXPLL_SDM_ORD.hal.rg_pxp_txpll_sdm_hren = hren;	
	RG_PXP_TXPLL_SDM_ORD.hal.rg_pxp_txpll_sdm_out = 0x0;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD,RG_PXP_TXPLL_SDM_ORD.dat.value);
}

static void TXPLL_SSC(void){
	rg_type_t(HAL_RG_PXP_TXPLL_SSC_DELTA1) RG_PXP_TXPLL_SSC_DELTA1;
	rg_type_t(HAL_RG_PXP_TXPLL_SSC_EN) RG_PXP_TXPLL_SSC_EN;
	rg_type_t(HAL_RG_PXP_TXPLL_SSC_PERIOD) RG_PXP_TXPLL_SSC_PERIOD;
	if(dbg_print) printk("TXPLL_SSC\n");

	RG_PXP_TXPLL_SSC_DELTA1.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_DELTA1);
	RG_PXP_TXPLL_SSC_DELTA1.hal.rg_pxp_txpll_ssc_delta = 0x0;	
	RG_PXP_TXPLL_SSC_DELTA1.hal.rg_pxp_txpll_ssc_delta1 = 0x0;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_DELTA1,RG_PXP_TXPLL_SSC_DELTA1.dat.value);

	RG_PXP_TXPLL_SSC_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_EN);
	RG_PXP_TXPLL_SSC_EN.hal.rg_pxp_txpll_ssc_tri_en = 0x0;	
	RG_PXP_TXPLL_SSC_EN.hal.rg_pxp_txpll_ssc_phase_ini = 0x0;	
	RG_PXP_TXPLL_SSC_EN.hal.rg_pxp_txpll_ssc_en = 0x0;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_EN,RG_PXP_TXPLL_SSC_EN.dat.value);

	
	RG_PXP_TXPLL_SSC_PERIOD.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_PERIOD);
	RG_PXP_TXPLL_SSC_PERIOD.hal.rg_pxp_txpll_ssc_period = 0x0;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_PERIOD,RG_PXP_TXPLL_SSC_PERIOD.dat.value);
}

static void TXPLL_LPF(u8 chp_ibias,u8 br,u8 bc,u8 bp,u8 bwr,u8 bwc){
	rg_type_t(HAL_RG_PXP_TXPLL_CHP_IBIAS) RG_PXP_TXPLL_CHP_IBIAS;
	rg_type_t(HAL_RG_PXP_TXPLL_LPF_BP) RG_PXP_TXPLL_LPF_BP;
	//rg_type_t(HAL_RG_PXP_JCPLL_FREQ_MEAS_EN) RG_PXP_JCPLL_FREQ_MEAS_EN;
	if(dbg_print) printk("TXPLL_LPF\n");
	RG_PXP_TXPLL_CHP_IBIAS.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_CHP_IBIAS);
	RG_PXP_TXPLL_CHP_IBIAS.hal.rg_pxp_txpll_chp_ibias = chp_ibias;	
	RG_PXP_TXPLL_CHP_IBIAS.hal.rg_pxp_txpll_chp_iofst = 0x0;	
	RG_PXP_TXPLL_CHP_IBIAS.hal.rg_pxp_txpll_lpf_br = br;	
	RG_PXP_TXPLL_CHP_IBIAS.hal.rg_pxp_txpll_lpf_bc = bc;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_CHP_IBIAS,RG_PXP_TXPLL_CHP_IBIAS.dat.value);

	RG_PXP_TXPLL_LPF_BP.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_LPF_BP);
	RG_PXP_TXPLL_LPF_BP.hal.rg_pxp_txpll_lpf_bp = bp;	
	RG_PXP_TXPLL_LPF_BP.hal.rg_pxp_txpll_lpf_bwr = bwr;	
	RG_PXP_TXPLL_LPF_BP.hal.rg_pxp_txpll_lpf_bwc = bwc;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_LPF_BP,RG_PXP_TXPLL_LPF_BP.dat.value);

	//check CODA!!! YT mark for default setting
	//RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_FREQ_MEAS_EN);
	//RG_PXP_JCPLL_FREQ_MEAS_EN.hal.rg_pxp_txpll_lpf_shck_en = 0x0;	
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_FREQ_MEAS_EN,RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value);
}

static void TXPLL_VCO(u8 vco_cfix){
	rg_type_t(HAL_RG_PXP_TXPLL_TCL_LPF_EN) RG_PXP_TXPLL_TCL_LPF_EN;
	rg_type_t(HAL_RG_PXP_TXPLL_VCO_HALFLSB_EN) RG_PXP_TXPLL_VCO_HALFLSB_EN;
	if(dbg_print) printk("TXPLL_VCO\n");
	RG_PXP_TXPLL_TCL_LPF_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN);
	RG_PXP_TXPLL_TCL_LPF_EN.hal.rg_pxp_txpll_vco_cfix = vco_cfix;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN,RG_PXP_TXPLL_TCL_LPF_EN.dat.value);
	
	RG_PXP_TXPLL_VCO_HALFLSB_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VCO_HALFLSB_EN);
	RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.rg_pxp_txpll_vco_halflsb_en = 1;
	RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.rg_pxp_txpll_vco_scapwr = 0x7;

	RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.rg_pxp_txpll_vco_vcovar_bias_h = 0x4;	
	RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.rg_pxp_txpll_vco_vcovar_bias_l = 0x0;	
	RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.rg_pxp_txpll_vco_tclvar = 0x4;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VCO_HALFLSB_EN,RG_PXP_TXPLL_VCO_HALFLSB_EN.dat.value);
}

static void TXPLL_PCW(u32 pcw){
	
	rg_type_t(HAL_rg_force_da_pxp_txpll_sdm_pcw) rg_force_da_pxp_txpll_sdm_pcw;
	rg_type_t(HAL_rg_force_da_pxp_cdr_pr_idac) rg_force_da_pxp_cdr_pr_idac;
	if(dbg_print) printk("TXPLL_PCW\n");
	rg_force_da_pxp_txpll_sdm_pcw.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_sdm_pcw);
	rg_force_da_pxp_txpll_sdm_pcw.hal.rg_force_da_pxp_txpll_sdm_pcw = pcw;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_sdm_pcw,rg_force_da_pxp_txpll_sdm_pcw.dat.value);

	
	rg_force_da_pxp_cdr_pr_idac.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac);
	rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_txpll_sdm_pcw = 0x1;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);
}
static void TXPLL_RSTB(u8 action){	
	rg_type_t(HAL_RG_PXP_TXPLL_REFIN_INTERNAL) RG_PXP_TXPLL_REFIN_INTERNAL;
	if(dbg_print) printk("TXPLL_RSTB\n");
	RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL);
	RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_rst_dly = 0x4; 
	RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_refin_internal = 1; 
	RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_refin_div = 0; //10.0.9
	switch(action) {
		case 0:			
			RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb = 0x0;	
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);

			udelay(200);//10.0.9
			RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb = 0x1;	
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);
			break;
		case 1:
			//if(!RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb)//10.0.9
			{
				RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb = 0x1;	
				RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);
			}	
			break;
		default:
			RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb = 0x0;	
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);

			udelay(200);//10.0.9
			RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb = 0x1;	
			RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);
			break;
	}		
}

//Coda default value = 0x01
static void TXPLL_VCOLDO_Out(void){	
	rg_type_t(HAL_RG_PXP_TXPLL_SSC_PERIOD) RG_PXP_TXPLL_SSC_PERIOD;
	if(dbg_print) printk("TXPLL_VCOLDO_Out\n");
	RG_PXP_TXPLL_SSC_PERIOD.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_PERIOD);
	RG_PXP_TXPLL_SSC_PERIOD.hal.rg_pxp_txpll_ldo_vco_out = 0x01; //0x00 > 0x01 check from kaiwen	
	RG_PXP_TXPLL_SSC_PERIOD.hal.rg_pxp_txpll_ldo_out = 0x01;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_PERIOD,RG_PXP_TXPLL_SSC_PERIOD.dat.value);
}
static void TXPLL_DIV(u8 prediv_mode,u8 vcodiv, u8 postdiv_en){
	rg_type_t(HAL_RG_PXP_TXPLL_KBAND_KS) RG_PXP_TXPLL_KBAND_KS;	
	rg_type_t(HAL_RG_PXP_TXPLL_TCL_LPF_EN)  RG_PXP_TXPLL_TCL_LPF_EN;
	if(dbg_print) printk("TXPLL_DIV\n");
	RG_PXP_TXPLL_KBAND_KS.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS);
	RG_PXP_TXPLL_KBAND_KS.hal.rg_pxp_txpll_mmd_prediv_mode = prediv_mode;	
	//YT add default value 1, set to 0
	//rg_pxp_txpll_postdiv_d256_en //10.09 no need
	RG_PXP_TXPLL_KBAND_KS.hal.rg_pxp_txpll_postdiv_en = postdiv_en;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS,RG_PXP_TXPLL_KBAND_KS.dat.value);

	RG_PXP_TXPLL_TCL_LPF_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN);
	RG_PXP_TXPLL_TCL_LPF_EN.hal.rg_pxp_txpll_vcodiv = vcodiv;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN,RG_PXP_TXPLL_TCL_LPF_EN.dat.value);
}

static void TXPLL_KBand(u8 kband_div){
	//rg_type_t(HAL_RG_PXP_TXPLL_REFIN_INTERNAL) RG_PXP_TXPLL_REFIN_INTERNAL;
	rg_type_t(HAL_RG_PXP_TXPLL_KBAND_CODE) RG_PXP_TXPLL_KBAND_CODE;
	rg_type_t(HAL_RG_PXP_TXPLL_KBAND_KS) RG_PXP_TXPLL_KBAND_KS;		
	//rg_type_t(HAL_RG_PXP_TXPLL_TCL_LPF_EN)  RG_PXP_TXPLL_TCL_LPF_EN;
	rg_type_t(HAL_RG_PXP_TXPLL_LPF_BP) RG_PXP_TXPLL_LPF_BP;
	if(dbg_print) printk("TXPLL_KBand\n");
	//move to TXPLL_RST
	//RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL);
	//RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_pll_rstb = 0x1;	
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);

	RG_PXP_TXPLL_KBAND_CODE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_CODE);
	RG_PXP_TXPLL_KBAND_CODE.hal.rg_pxp_txpll_kband_kfc = 0x0;	
	RG_PXP_TXPLL_KBAND_CODE.hal.rg_pxp_txpll_kband_kf = 0x3;	
	RG_PXP_TXPLL_KBAND_CODE.hal.rg_pxp_txpll_kband_div = kband_div;
	//kris randon value change to default value
	RG_PXP_TXPLL_KBAND_CODE.hal.rg_pxp_txpll_kband_code = 0xE4; 
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_CODE,RG_PXP_TXPLL_KBAND_CODE.dat.value);

	RG_PXP_TXPLL_KBAND_KS.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS);
	RG_PXP_TXPLL_KBAND_KS.hal.rg_pxp_txpll_kband_ks = 0x1;	
	//move to TXPLL_DIV
	//RG_PXP_TXPLL_KBAND_KS.hal.rg_pxp_txpll_mmd_prediv_mode = 0x0;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS,RG_PXP_TXPLL_KBAND_KS.dat.value);

	//move to TXPLL_DIV
	//RG_PXP_TXPLL_TCL_LPF_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN);
	//RG_PXP_TXPLL_TCL_LPF_EN.hal.rg_pxp_txpll_vcodiv = 0;	
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN,RG_PXP_TXPLL_TCL_LPF_EN.dat.value);

	RG_PXP_TXPLL_LPF_BP.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_LPF_BP);
	RG_PXP_TXPLL_LPF_BP.hal.rg_pxp_txpll_kband_option = 0x0;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_LPF_BP,RG_PXP_TXPLL_LPF_BP.dat.value);

}

static void TXPLL_TCL(u8 kband_vref,u8 amp_gain,u8 amp_vref,u8 lpf_bw,u8 lpf_en,u8 amp_en){
	rg_type_t(HAL_RG_PXP_TXPLL_TCL_KBAND_VREF) RG_PXP_TXPLL_TCL_KBAND_VREF;
	rg_type_t(HAL_RG_PXP_TXPLL_TCL_AMP_GAIN) RG_PXP_TXPLL_TCL_AMP_GAIN;
	rg_type_t(HAL_RG_PXP_TXPLL_TCL_LPF_EN) RG_PXP_TXPLL_TCL_LPF_EN;		
	rg_type_t(HAL_RG_PXP_TXPLL_SDM_ORD)  RG_PXP_TXPLL_SDM_ORD;

	if(dbg_print) printk("TXPLL_TCL\n");
	RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_KBAND_VREF);
	RG_PXP_TXPLL_TCL_KBAND_VREF.hal.rg_pxp_txpll_tcl_kband_vref = kband_vref;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_KBAND_VREF,RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value);

	RG_PXP_TXPLL_TCL_AMP_GAIN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_AMP_GAIN);
	RG_PXP_TXPLL_TCL_AMP_GAIN.hal.rg_pxp_txpll_tcl_amp_gain = amp_gain;	
	RG_PXP_TXPLL_TCL_AMP_GAIN.hal.rg_pxp_txpll_tcl_amp_vref = amp_vref;	
	//no use, keep default value
	//RG_PXP_TXPLL_TCL_AMP_GAIN.hal.rg_pxp_txpll_tcl_cmp_vth = 0x00;	
	//RG_PXP_TXPLL_TCL_AMP_GAIN.hal.rg_pxp_txpll_tcl_cmp_en = cmp_en;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_AMP_GAIN,RG_PXP_TXPLL_TCL_AMP_GAIN.dat.value);

	RG_PXP_TXPLL_TCL_LPF_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN);
	RG_PXP_TXPLL_TCL_LPF_EN.hal.rg_pxp_txpll_tcl_lpf_bw = lpf_bw;
	RG_PXP_TXPLL_TCL_LPF_EN.hal.rg_pxp_txpll_tcl_lpf_en = lpf_en;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN,RG_PXP_TXPLL_TCL_LPF_EN.dat.value);

	RG_PXP_TXPLL_SDM_ORD.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD);
	RG_PXP_TXPLL_SDM_ORD.hal.rg_pxp_txpll_tcl_amp_en = amp_en;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD,RG_PXP_TXPLL_SDM_ORD.dat.value);
	
}

//monitor setting
#if 0
static void TXPLL_VTP(void){	
	rg_type_t(HAL_RG_PXP_TXPLL_VTP_EN) RG_PXP_TXPLL_VTP_EN;
	rg_type_t(HAL_RG_PXP_TXPLL_PHY_CK1_EN) RG_PXP_TXPLL_PHY_CK1_EN;

	RG_PXP_TXPLL_VTP_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VTP_EN);
	RG_PXP_TXPLL_VTP_EN.hal.rg_pxp_txpll_ldo_vco_vtp = 0x0;
	RG_PXP_TXPLL_VTP_EN.hal.rg_pxp_txpll_ldo_vco_vtp_en = 0x0;	
	RG_PXP_TXPLL_VTP_EN.hal.rg_pxp_txpll_vtp = 0x0;	
	RG_PXP_TXPLL_VTP_EN.hal.rg_pxp_txpll_vtp_en = 0x1;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VTP_EN,RG_PXP_TXPLL_VTP_EN.dat.value);

	RG_PXP_TXPLL_PHY_CK1_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_PHY_CK1_EN);
	RG_PXP_TXPLL_PHY_CK1_EN.hal.rg_pxp_txpll_phy_ck2_en = 0x0;	
	RG_PXP_TXPLL_PHY_CK1_EN.hal.rg_pxp_txpll_phy_ck1_en = 0x1;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_PHY_CK1_EN,RG_PXP_TXPLL_PHY_CK1_EN.dat.value);

}
#endif
static void TXPLL_EN(u8 enable){
	rg_type_t(HAL_rg_force_da_pxp_txpll_ckout_en) rg_force_da_pxp_txpll_ckout_en;
	if(dbg_print) printk("TXPLL_EN\n");
	rg_force_da_pxp_txpll_ckout_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_ckout_en);
	rg_force_da_pxp_txpll_ckout_en.hal.rg_force_sel_da_pxp_txpll_en = 1;	
	rg_force_da_pxp_txpll_ckout_en.hal.rg_force_da_pxp_txpll_en = enable;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_ckout_en,rg_force_da_pxp_txpll_ckout_en.dat.value);
}

static void TXPLL_Out(u8 enable){
	rg_type_t(HAL_rg_force_da_pxp_txpll_ckout_en) rg_force_da_pxp_txpll_ckout_en;
	//rg_type_t(HAL_RG_PXP_TXPLL_REFIN_INTERNAL) RG_PXP_TXPLL_REFIN_INTERNAL;
	if(dbg_print) printk("TXPLL_Out\n");
	rg_force_da_pxp_txpll_ckout_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_ckout_en);
	rg_force_da_pxp_txpll_ckout_en.hal.rg_force_sel_da_pxp_txpll_ckout_en = 1;	
	rg_force_da_pxp_txpll_ckout_en.hal.rg_force_da_pxp_txpll_ckout_en = enable;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_ckout_en,rg_force_da_pxp_txpll_ckout_en.dat.value);


	//move to TXPLL_RST()
	//RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL);
	//RG_PXP_TXPLL_REFIN_INTERNAL.hal.rg_pxp_txpll_rst_dly = 0x2;	
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,RG_PXP_TXPLL_REFIN_INTERNAL.dat.value);
	
}
static void TXPLL_BringUp(u8 xSGMII){
	if(dbg_print) printk("TXPLL BringUp\n");
	TXPLL_VCOLDO_Out();
	TXPLL_RSTB(1);	
	TXPLL_EN(0);
	switch (xSGMII){
		case USXGMII: //10.315G		
			TXPLL_SDM(0,0,1);
			TXPLL_SSC();
			TXPLL_LPF(0x0F,0x05,0x1f,0b10,0b1011,0b11000);
			TXPLL_VCO(0b01);
			TXPLL_PCW(0x08400000);
			TXPLL_KBand(0x4);
			TXPLL_DIV(0,0,0);//10.0.9
			TXPLL_TCL(0xf,0b11,0b01011,0,1,1);
			
			TXPLL_EN(1);
			TXPLL_Out(1);
			break;
		case HSGMII: //12.5G/4
			TXPLL_SDM(0,0,0);
			TXPLL_SSC();
			TXPLL_LPF(0x0A,0x05,0x1f,0b101,0,0) ;
			TXPLL_VCO(0b00);
			TXPLL_PCW(0x0A000000);
			TXPLL_KBand(0x4); 
			TXPLL_DIV(0,1,0);//10.0.9
			TXPLL_TCL(0xf,0b11,0b01101,0,1,1);

			TXPLL_EN(1);
			TXPLL_Out(1);
			break;
		
		case SGMII:  //10G/8
			TXPLL_SDM(0,0,0);
			TXPLL_SSC();
			TXPLL_LPF(0x0F,0x05,0x1f,0b10,0b1011,0b11000);
			TXPLL_VCO(0b11);
			TXPLL_PCW(0x08000000);
			TXPLL_KBand(0x4);
			TXPLL_DIV(0,0,0); //10.0.9
			TXPLL_TCL(0xf,0b11,0b01011,0,1,1);
			
			TXPLL_EN(1);
			TXPLL_Out(1);
			break;
		default:
			TXPLL_SDM(0,0,1);
			TXPLL_SSC();
			TXPLL_LPF(0x0F,0x05,0x1f,0b10,0b1011,0b11000);
			TXPLL_VCO(0b01);
			TXPLL_PCW(0x08400000);
			TXPLL_KBand(0x4);
			TXPLL_DIV(0,0,0);
			TXPLL_TCL(0xf,0b11,0b01011,0,1,1);
			
			TXPLL_EN(1);
			TXPLL_Out(1);
			printk("waring!!! no such selection %x\n",xSGMII);
			break;
	}
}

static void RX_Path_Init(void){	
	rg_type_t(HAL_SS_LCPLL_PWCTL_SETTING_1) SS_LCPLL_PWCTL_SETTING_1;	
	rg_type_t(HAL_RX_EXTRAL_CTRL) RX_EXTRAL_CTRL;	
	rg_type_t(HAL_RG_PXP_CDR_PD_PICAL_CKD8_INV) RG_PXP_CDR_PD_PICAL_CKD8_INV;
	//rg_type_t(HAL_rg_force_da_pxp_cdr_pr_pieye_pwdb) rg_force_da_pxp_cdr_pr_pieye_pwdb;
	//rg_type_t(HAL_rg_force_da_pxp_cdr_pd_pwdb) rg_force_da_pxp_cdr_pd_pwdb;
	//rg_type_t(HAL_rg_force_da_pxp_rx_fe_pwdb) rg_force_da_pxp_rx_fe_pwdb;
	//rg_type_t(HAL_rg_force_da_pxp_rx_scan_rst_b) rg_force_da_pxp_rx_scan_rst_b;
	//rg_type_t(HAL_SS_DA_XPON_PWDB_0) SS_DA_XPON_PWDB_0;
	rg_type_t(HAL_rg_force_da_pxp_aeq_bypass) rg_force_da_pxp_aeq_bypass;
	//rg_type_t(HAL_ADD_RX_SYS_EN_SEL_0) ADD_RX_SYS_EN_SEL_0;
	rg_type_t(HAL_rg_force_da_pxp_aeq_rstb) rg_force_da_pxp_aeq_rstb;
	//rg_type_t(HAL_rg_force_da_pxp_aeq_speed) rg_force_da_pxp_aeq_speed;
	rg_type_t(HAL_RG_PXP_CDR_PR_MONPR_EN) RG_PXP_CDR_PR_MONPR_EN;
	//rg_type_t(HAL_RG_PXP_CDR_PR_BETA_DAC) RG_PXP_CDR_PR_BETA_DAC;
	//rg_type_t(HAL_RG_PXP_CDR_PR_VREG_IBAND_VAL) RG_PXP_CDR_PR_VREG_IBAND_VAL;
	//rg_type_t(HAL_RG_PXP_CDR_LPF_RATIO) RG_PXP_CDR_LPF_RATIO;
	//rg_type_t(HAL_RG_PXP_RX_PHYCK_DIV) RG_PXP_RX_PHYCK_DIV;//10.0.3 mark

//Kris sim to add
	rg_type_t(HAL_RG_PXP_AEQ_CFORCE) RG_PXP_AEQ_CFORCE;
	rg_type_t(HAL_RG_PXP_RX_OSCAL_WATCH_WNDW) RG_PXP_RX_OSCAL_WATCH_WNDW;
	rg_type_t(HAL_RX_DISB_MODE_4) RX_DISB_MODE_4;
	rg_type_t(HAL_SS_RX_FLL_5) SS_RX_FLL_5;
	rg_type_t(HAL_RG_PXP_RX_DAC_D1_BYPASS_AEQ) RG_PXP_RX_DAC_D1_BYPASS_AEQ;
	rg_type_t(HAL_RG_PXP_RX_FE_PEAKING_CTRL_MSB) RG_PXP_RX_FE_PEAKING_CTRL_MSB;

	rg_type_t(HAL_RG_PXP_RX_FE_VCM_GEN_PWDB) RG_PXP_RX_FE_VCM_GEN_PWDB;
	if(dbg_print) printk("RX_Path_Init\n");

	//V10***
	SS_RX_FLL_5.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_5);
	SS_RX_FLL_5.hal.rg_fll_idac_max = 0x3FF;
	SS_RX_FLL_5.hal.rg_fll_idac_min = 0x400;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_5,SS_RX_FLL_5.dat.value);

	RG_PXP_RX_DAC_D1_BYPASS_AEQ.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_D1_BYPASS_AEQ);
	RG_PXP_RX_DAC_D1_BYPASS_AEQ.hal.rg_pxp_rx_dac_eye_bypass_aeq = 1;
	RG_PXP_RX_DAC_D1_BYPASS_AEQ.hal.rg_pxp_rx_dac_e1_bypass_aeq = 1;
	RG_PXP_RX_DAC_D1_BYPASS_AEQ.hal.rg_pxp_rx_dac_e0_bypass_aeq = 1;	
	RG_PXP_RX_DAC_D1_BYPASS_AEQ.hal.rg_pxp_rx_dac_d1_bypass_aeq = 1;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_D1_BYPASS_AEQ,RG_PXP_RX_DAC_D1_BYPASS_AEQ.dat.value);

	RG_PXP_RX_FE_PEAKING_CTRL_MSB.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_PEAKING_CTRL_MSB);
	RG_PXP_RX_FE_PEAKING_CTRL_MSB.hal.rg_pxp_rx_dac_d0_bypass_aeq = 1;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_PEAKING_CTRL_MSB,RG_PXP_RX_FE_PEAKING_CTRL_MSB.dat.value);

	RG_PXP_RX_FE_VCM_GEN_PWDB.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_VCM_GEN_PWDB);
	RG_PXP_RX_FE_VCM_GEN_PWDB.hal.rg_pxp_rx_fe_vcm_gen_pwdb = 1;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_VCM_GEN_PWDB,RG_PXP_RX_FE_VCM_GEN_PWDB.dat.value);
	//V10&&&

	
	SS_LCPLL_PWCTL_SETTING_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_1);
	SS_LCPLL_PWCTL_SETTING_1.hal.rg_lcpll_man_pwdb = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_1,SS_LCPLL_PWCTL_SETTING_1.dat.value);

	RG_PXP_AEQ_CFORCE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_AEQ_CFORCE);
	RG_PXP_AEQ_CFORCE.hal.rg_pxp_aeq_oforce = 1<<9;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_AEQ_CFORCE,RG_PXP_AEQ_CFORCE.dat.value);
	
	RG_PXP_RX_OSCAL_WATCH_WNDW.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_OSCAL_WATCH_WNDW);
	RG_PXP_RX_OSCAL_WATCH_WNDW.hal.rg_pxp_rx_oscal_force = 0x3FF;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_OSCAL_WATCH_WNDW,RG_PXP_RX_OSCAL_WATCH_WNDW.dat.value);

	RX_DISB_MODE_4.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_4);
	RX_DISB_MODE_4.hal.rg_disb_blwc_offset = 0;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_4,RX_DISB_MODE_4.dat.value);

//&&&
	RX_EXTRAL_CTRL.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EXTRAL_CTRL);
	RX_EXTRAL_CTRL.hal.rg_disb_leq = 0x0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EXTRAL_CTRL,RX_EXTRAL_CTRL.dat.value);

	RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PD_PICAL_CKD8_INV);
	RG_PXP_CDR_PD_PICAL_CKD8_INV.hal.rg_pxp_cdr_pd_edge_dis = 0x0;	
	RG_PXP_CDR_PD_PICAL_CKD8_INV.hal.rg_pxp_cdr_pd_pical_ckd8_inv = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PD_PICAL_CKD8_INV,RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value);
#if 0 //move to pwdb
	rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pwdb = 0x1;	
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 0x1;
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pieye_pwdb = 0x1;
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pieye_pwdb = 0x1;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);

	rg_force_da_pxp_cdr_pd_pwdb.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pd_pwdb);
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_kband_rstb = 0x0;	
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pr_kband_rstb = 0x0;	
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pd_pwdb = 0x1;	
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pd_pwdb = 0x1;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pd_pwdb,rg_force_da_pxp_cdr_pd_pwdb.dat.value);

	rg_force_da_pxp_rx_fe_pwdb.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_pwdb);
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_pdoscal_en = 0x0;
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_pdoscal_en = 0x0;
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_fe_pwdb = 0x1;
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_fe_pwdb = 0x1;	
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_pwdb,rg_force_da_pxp_rx_fe_pwdb.dat.value);

	rg_force_da_pxp_rx_scan_rst_b.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_scan_rst_b);
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_sigdet_pwdb = 0x1;
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_sigdet_pwdb = 0x1;
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_scan_rst_b = 0x0;
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_scan_rst_b = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_scan_rst_b,rg_force_da_pxp_rx_scan_rst_b.dat.value);

	SS_DA_XPON_PWDB_0.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0);
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pd_pwdb = 0x1;
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pieye_pwdb = 0x1;
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x1;
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_rx_fe_pwdb = 0x1;	
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0,SS_DA_XPON_PWDB_0.dat.value);
#endif	    
	rg_force_da_pxp_aeq_bypass.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_bypass);
	rg_force_da_pxp_aeq_bypass.hal.rg_force_sel_da_pxp_aeq_ckon = 0x1;
	rg_force_da_pxp_aeq_bypass.hal.rg_force_da_pxp_aeq_ckon = 0x0; //10.0.4
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_bypass,rg_force_da_pxp_aeq_bypass.dat.value);
#if 0
	ADD_RX_SYS_EN_SEL_0.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RX_SYS_EN_SEL_0);
	ADD_RX_SYS_EN_SEL_0.hal.rg_da_rx_sys_en_sel = 0x1;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RX_SYS_EN_SEL_0,ADD_RX_SYS_EN_SEL_0.dat.value);
#endif
	rg_force_da_pxp_aeq_rstb.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_rstb);
	rg_force_da_pxp_aeq_rstb.hal.rg_force_sel_da_pxp_cdr_injck_sel = 0x1;	
	rg_force_da_pxp_aeq_rstb.hal.rg_force_da_pxp_cdr_injck_sel = 0x1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_rstb,rg_force_da_pxp_aeq_rstb.dat.value);
//---------------------------------
#if 0
	rg_force_da_pxp_aeq_speed.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_speed);
	rg_force_da_pxp_aeq_speed.hal.rg_force_sel_da_pxp_rx_osr_sel = 0x1;	
	rg_force_da_pxp_aeq_speed.hal.rg_force_da_pxp_rx_osr_sel = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_speed,rg_force_da_pxp_aeq_speed.dat.value);
#endif	
	RG_PXP_CDR_PR_MONPR_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_MONPR_EN);
	RG_PXP_CDR_PR_MONPR_EN.hal.rg_pxp_rx_dac_mon = 0x0;
	RG_PXP_CDR_PR_MONPR_EN.hal.rg_pxp_cdr_pr_xfick_en = 0x1;
	RG_PXP_CDR_PR_MONPR_EN.hal.rg_pxp_cdr_pr_monpi_en = 0x0;
	RG_PXP_CDR_PR_MONPR_EN.hal.rg_pxp_cdr_pr_monpr_en = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_MONPR_EN,RG_PXP_CDR_PR_MONPR_EN.dat.value);
#if 0	
	RG_PXP_CDR_PR_BETA_DAC.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_BETA_DAC);
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_kband_div = 0x4;
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_beta_sel = 0x1;
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_vcoadc_os = 0x8;
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_beta_dac = 0x1C;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_BETA_DAC,RG_PXP_CDR_PR_BETA_DAC.dat.value);

	RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_VREG_IBAND_VAL);
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_fbksel = 0x0;
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_dac_band = 0x1C;
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_vreg_ckbuf_val = 0x0;
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_vreg_iband_val = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_VREG_IBAND_VAL,RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value);

	RG_PXP_CDR_LPF_RATIO.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_LPF_RATIO);
	RG_PXP_CDR_LPF_RATIO.hal.rg_pxp_cdr_lpf_top_lim = 0x20000;	
	RG_PXP_CDR_LPF_RATIO.hal.rg_pxp_cdr_lpf_ratio = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_LPF_RATIO,RG_PXP_CDR_LPF_RATIO.dat.value);
#endif	

	//10.0.3 mark
	//RG_PXP_RX_PHYCK_DIV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV);
	//RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_tdc_ck_sel = 0x1;
	//RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_phyck_sel = 0x1;
	//RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_phyck_div = 0x42;
	//RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_phyck_rstb = 0x0;
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV,RG_PXP_RX_PHYCK_DIV.dat.value);

}

static void RX_OSR(u8 OSR)
{
	rg_type_t(HAL_rg_force_da_pxp_aeq_speed) rg_force_da_pxp_aeq_speed;
	rg_type_t(HAL_RG_PXP_CDR_PD_PICAL_CKD8_INV) RG_PXP_CDR_PD_PICAL_CKD8_INV;
	if(dbg_print) printk("RX_OSR\n");
	rg_force_da_pxp_aeq_speed.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_speed);
	rg_force_da_pxp_aeq_speed.hal.rg_force_sel_da_pxp_rx_osr_sel = 0x1;
	rg_force_da_pxp_aeq_speed.hal.rg_force_da_pxp_rx_osr_sel = OSR;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_speed,rg_force_da_pxp_aeq_speed.dat.value);

	
	RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PD_PICAL_CKD8_INV);
	RG_PXP_CDR_PD_PICAL_CKD8_INV.hal.rg_pxp_cdr_pd_edge_dis = OSR > 0? 1:0; //dis = 1 when osr /2~8	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PD_PICAL_CKD8_INV,RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value);
}
static void RX_CDR_xxx_Pwdb(u8 SW){	
	rg_type_t(HAL_rg_force_da_pxp_cdr_pr_pieye_pwdb) rg_force_da_pxp_cdr_pr_pieye_pwdb;
	rg_type_t(HAL_rg_force_da_pxp_cdr_pd_pwdb) rg_force_da_pxp_cdr_pd_pwdb;
	rg_type_t(HAL_rg_force_da_pxp_rx_fe_pwdb) rg_force_da_pxp_rx_fe_pwdb;
	rg_type_t(HAL_rg_force_da_pxp_rx_scan_rst_b) rg_force_da_pxp_rx_scan_rst_b;
	rg_type_t(HAL_SS_DA_XPON_PWDB_0) SS_DA_XPON_PWDB_0;	
	if(dbg_print) printk("RX_CDR_xxx_Pwdb\n");
//L0 start
	rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pwdb = 1;	
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = SW;
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pieye_pwdb = 1;
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pieye_pwdb = SW;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);

	rg_force_da_pxp_cdr_pd_pwdb.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pd_pwdb);
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_kband_rstb = 0x0;	
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pr_kband_rstb = 0x0;	
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pd_pwdb = 1;	
	rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pd_pwdb = SW;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pd_pwdb,rg_force_da_pxp_cdr_pd_pwdb.dat.value);

	rg_force_da_pxp_rx_fe_pwdb.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_pwdb);
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_pdoscal_en = 0x0; //default value ok
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_pdoscal_en = 0x0;
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_fe_pwdb = 1;
	rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_fe_pwdb = SW;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_pwdb,rg_force_da_pxp_rx_fe_pwdb.dat.value);

	rg_force_da_pxp_rx_scan_rst_b.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_scan_rst_b);
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_sigdet_pwdb = 1;
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_sigdet_pwdb = SW;
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_scan_rst_b = 0x0; //debug mode, default value ok 
	rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_scan_rst_b = 0x0; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_scan_rst_b,rg_force_da_pxp_rx_scan_rst_b.dat.value);

	SS_DA_XPON_PWDB_0.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0);
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pd_pwdb = SW;
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pieye_pwdb = SW;
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = SW;
	SS_DA_XPON_PWDB_0.hal.rg_da_xpon_rx_fe_pwdb = SW;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0,SS_DA_XPON_PWDB_0.dat.value);
}
static void RX_SYS_En(u8 on){	
	rg_type_t(HAL_ADD_RX_SYS_EN_SEL_0) ADD_RX_SYS_EN_SEL_0;
	rg_type_t(HAL_SS_LCPLL_PWCTL_SETTING_0) SS_LCPLL_PWCTL_SETTING_0;
	
	if(dbg_print) printk("RX_SYS_En\n");
	//depend on lcpllen enable
	ADD_RX_SYS_EN_SEL_0.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RX_SYS_EN_SEL_0);
	ADD_RX_SYS_EN_SEL_0.hal.rg_da_rx_sys_en_sel = on;//0x01
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RX_SYS_EN_SEL_0,ADD_RX_SYS_EN_SEL_0.dat.value);
	
	SS_LCPLL_PWCTL_SETTING_0.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0);
	SS_LCPLL_PWCTL_SETTING_0.hal.rg_sw_lcpll_en = 1; //old structure, no use
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0,SS_LCPLL_PWCTL_SETTING_0.dat.value);
}

static void CDR_LPF_RATIO(u8 ratio)
{	
	rg_type_t(HAL_RG_PXP_CDR_LPF_RATIO) RG_PXP_CDR_LPF_RATIO;
	if(dbg_print) printk("CDR_LPF_RATIO\n");
	RG_PXP_CDR_LPF_RATIO.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_LPF_RATIO);
	RG_PXP_CDR_LPF_RATIO.hal.rg_pxp_cdr_lpf_top_lim = 0x20000;	
	RG_PXP_CDR_LPF_RATIO.hal.rg_pxp_cdr_lpf_ratio = ratio;//10.0.9
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_LPF_RATIO,RG_PXP_CDR_LPF_RATIO.dat.value);
}

static void RX_Cal_En(u8 en){
	//Use default value
}

static void CDR_PR(u8 dac,u8 band)
{	
	rg_type_t(HAL_RG_PXP_CDR_PR_VREG_IBAND_VAL) RG_PXP_CDR_PR_VREG_IBAND_VAL;
	rg_type_t(HAL_RG_PXP_CDR_PR_BETA_DAC) RG_PXP_CDR_PR_BETA_DAC;
	if(dbg_print) printk("CDR_PR\n");
	RG_PXP_CDR_PR_BETA_DAC.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_BETA_DAC);
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_kband_div = 0x4;
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_beta_sel = 0x1;
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_vcoadc_os = 0x8;
	RG_PXP_CDR_PR_BETA_DAC.hal.rg_pxp_cdr_pr_beta_dac = dac;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_BETA_DAC,RG_PXP_CDR_PR_BETA_DAC.dat.value);
//V10	
	RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_VREG_IBAND_VAL);
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_fbksel = 0x0;
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_dac_band = band;
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_vreg_ckbuf_val = 0x6;
	RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.rg_pxp_cdr_pr_vreg_iband_val = 0x6;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_VREG_IBAND_VAL,RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value);
}
static void RX_BySerdes(u8 xsgmii){	
	if(dbg_print) printk("RX_BySerdes\n");
	switch(xsgmii){
		case USXGMII:
			RX_OSR(0b00);
			CDR_LPF_RATIO(0b00);
			CDR_PR(0b0001000,0b01000);
			break;
		case HSGMII:			
			RX_OSR(0b01);
			CDR_LPF_RATIO(0b01);
			CDR_PR(0b0000110,0b00110);
			break;
		case SGMII:			
			RX_OSR(0b11);
			CDR_LPF_RATIO(0b11);
			CDR_PR(0b0001000,0b01000);
			break;
		default:			
			RX_OSR(0b00);
			CDR_LPF_RATIO(0b00);
			CDR_PR(0b0001000,0b01000);
			break;
	}
}

static void RX_EYE_Mon(void){
#if 0	
	rg_type_t(HAL_RG_PXP_RX_FE_EQ_HZEN) RG_PXP_RX_FE_EQ_HZEN;
#endif
#if 0
	rg_type_t(HAL_SS_DA_XPON_PWDB_1) SS_DA_XPON_PWDB_1;
#endif
	rg_type_t(HAL_PHY_EQ_CTRL_2) PHY_EQ_CTRL_2;
	rg_type_t(HAL_RX_EYE_TOP_EYECNT_CTRL_2) RX_EYE_TOP_EYECNT_CTRL_2;
	if(dbg_print) printk("RX_EYE_Mon\n");
#if 0	
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_0) RX_CTRL_SEQUENCE_CTRL_0;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_6) RX_CTRL_SEQUENCE_CTRL_6;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_1) RX_CTRL_SEQUENCE_CTRL_1;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_4) RX_CTRL_SEQUENCE_CTRL_4;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_2) RX_CTRL_SEQUENCE_CTRL_2;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_3) RX_CTRL_SEQUENCE_CTRL_3;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_5) RX_CTRL_SEQUENCE_CTRL_5;
	rg_type_t(HAL_SS_LCPLL_PWCTL_SETTING_0) SS_LCPLL_PWCTL_SETTING_0;
	//rg_type_t(HAL_SW_RST_SET) SW_RST_SET;
#endif
#if 0	
	RG_PXP_RX_FE_EQ_HZEN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_EQ_HZEN);
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_vb_eq3_en = 0x1;
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_vb_eq2_en = 0x1;	
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_vb_eq1_en = 0x1; //CML EQ1~3	
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_eq_hzen = 0x0; //old thing, don't care	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_EQ_HZEN,RG_PXP_RX_FE_EQ_HZEN.dat.value);
#endif
#if 0	
	SS_DA_XPON_PWDB_1.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_1);
	SS_DA_XPON_PWDB_1.hal.rg_da_xpon_rx_sigdet_pwdb = 0x1;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_1,SS_DA_XPON_PWDB_1.dat.value);
#endif
	PHY_EQ_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_2);
	PHY_EQ_CTRL_2.hal.rg_eq_debug_sel = 0x0;
	PHY_EQ_CTRL_2.hal.rg_fom_num_order = 0x1; 
	PHY_EQ_CTRL_2.hal.rg_a_sel = 0x3; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_2,PHY_EQ_CTRL_2.dat.value);
	
	RX_EYE_TOP_EYECNT_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_2);
	RX_EYE_TOP_EYECNT_CTRL_2.hal.rg_data_shift = 0x0;	
	RX_EYE_TOP_EYECNT_CTRL_2.hal.rg_eyecnt_fast = 0x1; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_2,RX_EYE_TOP_EYECNT_CTRL_2.dat.value);
#if 0
	RX_CTRL_SEQUENCE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_0);
	RX_CTRL_SEQUENCE_CTRL_0.hal.rg_rx_os_start = 0x1;
	RX_CTRL_SEQUENCE_CTRL_0.hal.rg_osc_speed_opt = 0x1; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_0,RX_CTRL_SEQUENCE_CTRL_0.dat.value);

	RX_CTRL_SEQUENCE_CTRL_6.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_6);
	RX_CTRL_SEQUENCE_CTRL_6.hal.rg_rx_os_end = 0x2; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_6,RX_CTRL_SEQUENCE_CTRL_6.dat.value);

	RX_CTRL_SEQUENCE_CTRL_1.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_1);
	RX_CTRL_SEQUENCE_CTRL_1.hal.rg_rx_pical_end = 0x32;	
	RX_CTRL_SEQUENCE_CTRL_1.hal.rg_rx_pical_start = 0x2; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_1,RX_CTRL_SEQUENCE_CTRL_1.dat.value);

	RX_CTRL_SEQUENCE_CTRL_4.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_4);
	RX_CTRL_SEQUENCE_CTRL_4.hal.rg_rx_sdcal_end = 0x32;	
	RX_CTRL_SEQUENCE_CTRL_4.hal.rg_rx_sdcal_start = 0x2; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_4,RX_CTRL_SEQUENCE_CTRL_4.dat.value);

	RX_CTRL_SEQUENCE_CTRL_2.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_2);
	RX_CTRL_SEQUENCE_CTRL_2.hal.rg_rx_pdos_end = 0x32;	
	RX_CTRL_SEQUENCE_CTRL_2.hal.rg_rx_pdos_start = 0x2;
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_2,RX_CTRL_SEQUENCE_CTRL_2.dat.value);

	RX_CTRL_SEQUENCE_CTRL_3.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_3);
	RX_CTRL_SEQUENCE_CTRL_3.hal.rg_rx_feos_end = 0x32;	
	RX_CTRL_SEQUENCE_CTRL_3.hal.rg_rx_feos_start = 0x2; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_3,RX_CTRL_SEQUENCE_CTRL_3.dat.value);

	RX_CTRL_SEQUENCE_CTRL_5.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_5);
	RX_CTRL_SEQUENCE_CTRL_5.hal.rg_rx_rdy = 0xA;	
	RX_CTRL_SEQUENCE_CTRL_5.hal.rg_rx_blwc_rdy_en = 0x5; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_5,RX_CTRL_SEQUENCE_CTRL_5.dat.value);

	SS_LCPLL_PWCTL_SETTING_0.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0);
	SS_LCPLL_PWCTL_SETTING_0.hal.rg_sw_lcpll_en = 0x0; //no use
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0,SS_LCPLL_PWCTL_SETTING_0.dat.value);
#endif
#if 0
	SW_RST_SET.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET);
	SW_RST_SET.hal.rg_sw_xfi_rxpcs_rst_n = 0x1;	
	SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = 0x1; 
	SW_RST_SET.hal.rg_sw_xfi_txpcs_rst_n = 0x1; 
	SW_RST_SET.hal.rg_sw_ref_rst_n = 0x1; 
	SW_RST_SET.hal.rg_sw_allpcs_rst_n = 0x1; 
	SW_RST_SET.hal.rg_sw_pma_rst_n = 0x1; 
	SW_RST_SET.hal.rg_sw_tx_rst_n = 0x1;	
	SW_RST_SET.hal.rg_sw_rx_rst_n = 0x1; 
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET,SW_RST_SET.dat.value);
#endif	
}
static void RX_CMLEQ_EN(u8 en){	
	rg_type_t(HAL_RG_PXP_RX_FE_EQ_HZEN) RG_PXP_RX_FE_EQ_HZEN;
	if(dbg_print) printk("RX_CMLEQ_EN\n");
	RG_PXP_RX_FE_EQ_HZEN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_EQ_HZEN);
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_vb_eq3_en = en;
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_vb_eq2_en = en;	
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_vb_eq1_en = en; //CML EQ1~3	
	RG_PXP_RX_FE_EQ_HZEN.hal.rg_pxp_rx_fe_eq_hzen = 0x0; //old thing, don't care	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_EQ_HZEN,RG_PXP_RX_FE_EQ_HZEN.dat.value);
}

/*
SER rate control
00: 8 bit  (DA_XPON_RX_DATA[7:0]) /  8 bit  (DA_XFI_RX_DATA[7:0]) 
01: 10 bit  (DA_XPON_RX_DATA[9:0]) /  10 bit  (DA_XFI_RX_DATA[9:0])
10: 16 bit  (DA_XPON_RX_DATA[15:0]) / 16 bit  (DA_XFI_RX_DATA[15:0])
*/    
static void rx_rate_ctrl(u8 xsgmii){
    rg_type_t(HAL_RG_XPON_RX_RESERVED_1) RG_XPON_RX_RESERVED_1;
	if(dbg_print) printk("rx_rate_ctrl\n");
	RG_XPON_RX_RESERVED_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RG_XPON_RX_RESERVED_1);
    if (xsgmii == 0) RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0b10;
    else if (xsgmii == 1) RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0b00;
    else if (xsgmii == 2) RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0b00;
	else RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0b10;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RG_XPON_RX_RESERVED_1,RG_XPON_RX_RESERVED_1.dat.value);
}

static void RX_REV(void){
    rg_type_t(HAL_RG_PXP_RX_REV_0) RG_PXP_RX_REV_0;
	if(dbg_print) printk("RX_REV\n");
	
	RG_PXP_RX_REV_0.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_REV_0);

    RG_PXP_RX_REV_0.hal.rg_pxp_rx_rev_1 &= ~(0x03<<2);
    RG_PXP_RX_REV_0.hal.rg_pxp_rx_rev_1 |= 0b00<<2;
    RG_PXP_RX_REV_0.hal.rg_pxp_rx_rev_1 &= ~(0x07<<4);
    RG_PXP_RX_REV_0.hal.rg_pxp_rx_rev_1 |= 0b100<<4;
    RG_PXP_RX_REV_0.hal.rg_pxp_rx_rev_1 &= ~(0x07<<8);
    RG_PXP_RX_REV_0.hal.rg_pxp_rx_rev_1 |= 0b100<<4;
    
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_REV_0,RG_PXP_RX_REV_0.dat.value);
}
static void RX_SigDet(void){
    rg_type_t(HAL_RG_PXP_RX_SIGDET_NOVTH) RG_PXP_RX_SIGDET_NOVTH;
	rg_type_t(HAL_RG_PXP_RX_DAC_RANGE) RG_PXP_RX_DAC_RANGE;
	if(dbg_print) printk("RX_SigDet\n");
	RG_PXP_RX_SIGDET_NOVTH.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_SIGDET_NOVTH);
	RG_PXP_RX_DAC_RANGE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_RANGE);


    RG_PXP_RX_SIGDET_NOVTH.hal.rg_pxp_rx_sigdet_peak = 0b10;
    RG_PXP_RX_SIGDET_NOVTH.hal.rg_pxp_rx_sigdet_vth_sel = 0b00010;
    
    RG_PXP_RX_DAC_RANGE.hal.rg_pxp_rx_sigdet_lpf_ctrl = 0b11;
	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_SIGDET_NOVTH,RG_PXP_RX_SIGDET_NOVTH.dat.value);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_RANGE,RG_PXP_RX_DAC_RANGE.dat.value); 
}    
    
static void RX_CDR_PR(u8 xsgmii){
    rg_type_t(HAL_RG_PXP_CDR_PR_MONPR_EN) RG_PXP_CDR_PR_MONPR_EN;
	u8 cap_en,buf_in_sr;
	if(dbg_print) printk("RX_CDR_PR\n");
	
	RG_PXP_CDR_PR_MONPR_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_MONPR_EN);

    if (xsgmii == 0){
        cap_en = 0b0;
        buf_in_sr = 0b111;
	}	
    else if (xsgmii == 1){
        cap_en = 0b1;
        buf_in_sr = 0b110;
	}	
    else if (xsgmii == 2){
        cap_en = 0b0;
        buf_in_sr = 0b111;
	}	
    else{    
        cap_en = 0b0;
        buf_in_sr = 0b111;
	}	
        
    RG_PXP_CDR_PR_MONPR_EN.hal.rg_pxp_cdr_pr_cap_en = cap_en;
    RG_PXP_CDR_PR_MONPR_EN.hal.rg_pxp_cdr_pr_buf_in_sr = buf_in_sr;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_MONPR_EN,RG_PXP_CDR_PR_MONPR_EN.dat.value); 
}
    
static void PXP_RX_PHYCK(u8 xsgmii){ //10.0.3
    rg_type_t(HAL_RG_PXP_RX_PHYCK_DIV) RG_PXP_RX_PHYCK_DIV;
	rg_type_t(HAL_RG_PXP_RX_BUSBIT_SEL) RG_PXP_RX_BUSBIT_SEL;
	u8 phyck_div,phyck_sel;
	if(dbg_print) printk("PXP_RX_PHYCK\n");
	RG_PXP_RX_PHYCK_DIV.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV);
	RG_PXP_RX_BUSBIT_SEL.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_BUSBIT_SEL);

    
    if (xsgmii == 0){
        phyck_div = 0b01000010;
        phyck_sel = 0b10;
	}	
    else if (xsgmii == 1){
        phyck_div = 0b00001011;
        phyck_sel = 0b01;
	}	
    else if (xsgmii == 2){
        phyck_div = 0b00101001;
        phyck_sel = 0b01;
	}	
    else{    
        phyck_div = 0b01000010;
        phyck_sel = 0b10;
    }
	
    RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_tdc_ck_sel = 0x0;
    RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_phyck_sel = phyck_sel;
    RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_phyck_div = phyck_div;
    RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_phyck_rstb = 0x1;
    
    RG_PXP_RX_BUSBIT_SEL.hal.rg_pxp_rx_phy_ck_sel_force = 1;
    RG_PXP_RX_BUSBIT_SEL.hal.rg_pxp_rx_phy_ck_sel = 0; 
    
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV,RG_PXP_RX_PHYCK_DIV.dat.value);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_BUSBIT_SEL,RG_PXP_RX_BUSBIT_SEL.dat.value);
}    

static void RX_FLL_PR_FMeter(u8 bypass){ //10.0.9
    rg_type_t(HAL_RX_DISB_MODE_8) RX_DISB_MODE_8;
	rg_type_t(HAL_RX_FORCE_MODE_9) RX_FORCE_MODE_9;
	rg_type_t(HAL_PLL_TDC_FREQDET_0) PLL_TDC_FREQDET_0;
	rg_type_t(HAL_PLL_TDC_FREQDET_1) PLL_TDC_FREQDET_1;
	rg_type_t(HAL_PLL_TDC_FREQDET_3) PLL_TDC_FREQDET_3;
	if(dbg_print) printk("RX_FLL_PR_FMeter\n");

    if (bypass == 1){
		
		RX_DISB_MODE_8.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_8);
		RX_FORCE_MODE_9.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_9);

        RX_DISB_MODE_8.hal.rg_disb_fbck_lock = 0 ;//dis meter
        RX_FORCE_MODE_9.hal.rg_force_fbck_lock = 1 ;//rdy
        
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_8,RX_DISB_MODE_8.dat.value);
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_9,RX_FORCE_MODE_9.dat.value);	
	}	
    else{
		
		PLL_TDC_FREQDET_0.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_0);
		PLL_TDC_FREQDET_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_1);
		PLL_TDC_FREQDET_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_3);
		
        PLL_TDC_FREQDET_0.hal.rg_pll_lock_cyclecnt = 1;
        PLL_TDC_FREQDET_1.hal.rg_pll_lock_target_beg = 0;
        PLL_TDC_FREQDET_1.hal.rg_pll_lock_target_end = 0xFFFF;
        PLL_TDC_FREQDET_3.hal.rg_pll_lock_lockth = 1;

		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_0,PLL_TDC_FREQDET_0.dat.value);
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_1,PLL_TDC_FREQDET_1.dat.value);
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_3,PLL_TDC_FREQDET_3.dat.value);	
	}
}
	
static void RX_SigDet_Pwdb(u8 b_on){	
	rg_type_t(HAL_SS_DA_XPON_PWDB_1) SS_DA_XPON_PWDB_1;
	if(dbg_print) printk("RX_SigDet_Pwdb\n");
#if 1 //move to fun rx_sigdet_pwdb
	SS_DA_XPON_PWDB_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_1);
	SS_DA_XPON_PWDB_1.hal.rg_da_xpon_rx_sigdet_pwdb = b_on;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_1,SS_DA_XPON_PWDB_1.dat.value);
#endif
}

static void RX_Rdy_TimeOut(void){
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_5) RX_CTRL_SEQUENCE_CTRL_5;
	if(dbg_print) printk("RX_Rdy_TimeOut\n");
	RX_CTRL_SEQUENCE_CTRL_5.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_5);
	RX_CTRL_SEQUENCE_CTRL_5.hal.rg_rx_rdy = 0xA;	
	RX_CTRL_SEQUENCE_CTRL_5.hal.rg_rx_blwc_rdy_en = 0x5; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_5,RX_CTRL_SEQUENCE_CTRL_5.dat.value);
}

static void RX_CalBoundry_Init(void){
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_0) RX_CTRL_SEQUENCE_CTRL_0;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_6) RX_CTRL_SEQUENCE_CTRL_6;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_1) RX_CTRL_SEQUENCE_CTRL_1;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_4) RX_CTRL_SEQUENCE_CTRL_4;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_2) RX_CTRL_SEQUENCE_CTRL_2;
	rg_type_t(HAL_RX_CTRL_SEQUENCE_CTRL_3) RX_CTRL_SEQUENCE_CTRL_3;
	
	if(dbg_print) printk("RX_CalBoundry_Init\n");
	
#if 1 //use default  value for cal. start and end move to RX calbration init
	RX_CTRL_SEQUENCE_CTRL_0.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_0);
	RX_CTRL_SEQUENCE_CTRL_0.hal.rg_rx_os_start = 0x1;
	RX_CTRL_SEQUENCE_CTRL_0.hal.rg_osc_speed_opt = 0x1; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_0,RX_CTRL_SEQUENCE_CTRL_0.dat.value);

	RX_CTRL_SEQUENCE_CTRL_6.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_6);
	RX_CTRL_SEQUENCE_CTRL_6.hal.rg_rx_os_end = 0x2; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_6,RX_CTRL_SEQUENCE_CTRL_6.dat.value);
	RX_CTRL_SEQUENCE_CTRL_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_1);
	RX_CTRL_SEQUENCE_CTRL_1.hal.rg_rx_pical_end = 0x32; 
	RX_CTRL_SEQUENCE_CTRL_1.hal.rg_rx_pical_start = 0x2; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_1,RX_CTRL_SEQUENCE_CTRL_1.dat.value);
	
	RX_CTRL_SEQUENCE_CTRL_4.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_4);
	RX_CTRL_SEQUENCE_CTRL_4.hal.rg_rx_sdcal_end = 0x32; 
	RX_CTRL_SEQUENCE_CTRL_4.hal.rg_rx_sdcal_start = 0x2; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_4,RX_CTRL_SEQUENCE_CTRL_4.dat.value);
	
	RX_CTRL_SEQUENCE_CTRL_2.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_2);
	RX_CTRL_SEQUENCE_CTRL_2.hal.rg_rx_pdos_end = 0x32;	
	RX_CTRL_SEQUENCE_CTRL_2.hal.rg_rx_pdos_start = 0x2;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_2,RX_CTRL_SEQUENCE_CTRL_2.dat.value);
	
	RX_CTRL_SEQUENCE_CTRL_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_3);
	RX_CTRL_SEQUENCE_CTRL_3.hal.rg_rx_feos_end = 0x32;	
	RX_CTRL_SEQUENCE_CTRL_3.hal.rg_rx_feos_start = 0x2; 
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_3,RX_CTRL_SEQUENCE_CTRL_3.dat.value);
#endif
}

static void RX_IMP(u8 sel){
	rg_type_t(HAL_RG_PXP_RX_SIGDET_NOVTH) RG_PXP_RX_SIGDET_NOVTH;
	if(dbg_print) printk("RX_IMP %x\n",sel);
	RG_PXP_RX_SIGDET_NOVTH.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_SIGDET_NOVTH);
	RG_PXP_RX_SIGDET_NOVTH.hal.rg_pxp_rx_fe_50ohms_sel = sel;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_SIGDET_NOVTH,RG_PXP_RX_SIGDET_NOVTH.dat.value);
}

static u8 RX_PRCal(u8 xsgmii)
{
	rg_type_t(HAL_RG_PXP_CDR_PR_INJ_MODE) RG_PXP_CDR_PR_INJ_MODE;
	rg_type_t(HAL_rg_force_da_pxp_cdr_pr_lpf_c_en) rg_force_da_pxp_cdr_pr_lpf_c_en;
	rg_type_t(HAL_rg_force_da_pxp_cdr_pr_idac) rg_force_da_pxp_cdr_pr_idac;
	rg_type_t(HAL_rg_force_da_pxp_cdr_pr_pieye_pwdb) rg_force_da_pxp_cdr_pr_pieye_pwdb;
	rg_type_t(HAL_SS_RX_FLL_b) SS_RX_FLL_b;	
	rg_type_t(HAL_SS_RX_FLL_1) SS_RX_FLL_1;
	rg_type_t(HAL_RO_RX_FREQDET) RO_RX_FREQDET;	
	rg_type_t(HAL_SS_RX_FREQ_DET_2) SS_RX_FREQ_DET_2;
	rg_type_t(HAL_SS_RX_FREQ_DET_1) SS_RX_FREQ_DET_1;
	rg_type_t(HAL_SS_RX_FREQ_DET_4) SS_RX_FREQ_DET_4;	
	rg_type_t(HAL_SS_RX_FREQ_DET_3) SS_RX_FREQ_DET_3;
	rg_type_t(HAL_SW_RST_SET) SW_RST_SET; 	

  	uint PrCal_Serach = 0 , RO_FL_Out = 0 , FL_Out_target = 0x9EDF ;
  	uint pr_idac = 0  , RO_pr_idac = 0;
  	int  cdr_pr_idac_tmp = 0, RO_state_freqdet = 0, turn_pr_idac_bit_position = 0;
	int RO_FL_Out_diff = 0, RO_FL_Out_diff_tmp = 0xffff; 
	u16 lock_cyclecnt,unlock_cyclecnt;

	if(dbg_print) printk("RX_PRCal %x\n",xsgmii);
	SW_RST_SET.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET);
	SW_RST_SET.hal.rg_sw_ref_rst_n = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET,SW_RST_SET.dat.value);

	switch(xsgmii)
  	{
		case USXGMII:   //DS_10.3125G  /  US_1.25G
	   		FL_Out_target = 0x9EDF;
			lock_cyclecnt = 32767;
			unlock_cyclecnt = 32767;
			break;
	
		case HSGMII: //DS_9.95328G  /  US_9.95328G 
	   		FL_Out_target = 0xA000;
			lock_cyclecnt = 20000;
			unlock_cyclecnt = 20000;
			break;  

		case SGMII: //DS_1.25G      /  US_1.25G 
	   		FL_Out_target = 0xA3D6;
			lock_cyclecnt = 32767;
			unlock_cyclecnt = 32767;
			break;  	
	
		default:
			break;	
  	}
	
	SS_RX_FREQ_DET_2.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_2);
	SS_RX_FREQ_DET_2.hal.rg_lock_target_beg = FL_Out_target - 100;
	SS_RX_FREQ_DET_2.hal.rg_lock_target_end = FL_Out_target + 100;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_2,SS_RX_FREQ_DET_2.dat.value);

	SS_RX_FREQ_DET_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_1);
	SS_RX_FREQ_DET_1.hal.rg_lock_cyclecnt = lock_cyclecnt;
	SS_RX_FREQ_DET_1.hal.rg_unlock_cyclecnt = unlock_cyclecnt;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_1,SS_RX_FREQ_DET_1.dat.value);
		
	SS_RX_FREQ_DET_4.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4);
	SS_RX_FREQ_DET_4.hal.rg_lock_lockth = 3;	
	SS_RX_FREQ_DET_4.hal.rg_unlockth = 3;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);

	SS_RX_FREQ_DET_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_3);
	SS_RX_FREQ_DET_3.hal.rg_unlock_target_beg = FL_Out_target - 100;
	SS_RX_FREQ_DET_3.hal.rg_unlock_target_end = FL_Out_target + 100;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_3,SS_RX_FREQ_DET_3.dat.value);

	RG_PXP_CDR_PR_INJ_MODE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_INJ_MODE);
	RG_PXP_CDR_PR_INJ_MODE.hal.rg_pxp_cdr_pr_inj_force_off = 1;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_INJ_MODE,RG_PXP_CDR_PR_INJ_MODE.dat.value);


	rg_force_da_pxp_cdr_pr_lpf_c_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_lpf_c_en);
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_da_pxp_cdr_pr_lpf_c_en = 0;	  
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_sel_da_pxp_cdr_pr_lpf_c_en = 1;
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_da_pxp_cdr_pr_lpf_r_en = 1;
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_sel_da_pxp_cdr_pr_lpf_r_en = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_lpf_c_en,rg_force_da_pxp_cdr_pr_lpf_c_en.dat.value);

	rg_force_da_pxp_cdr_pr_idac.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac);
	rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_cdr_pr_idac = 1;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);


	rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pwdb = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 0;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);

	for (PrCal_Serach = 1; PrCal_Serach < 8 ; PrCal_Serach++)
  	{		
		rg_force_da_pxp_cdr_pr_idac.hal.rg_force_da_pxp_cdr_pr_idac = PrCal_Serach<<8;
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);

	 	SS_RX_FREQ_DET_4.hal.rg_freqlock_det_en = 0x00;
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);
		
	 	SS_RX_FREQ_DET_4.hal.rg_freqlock_det_en = 0x03;
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);

	 	udelay(5000);
	 	RO_RX_FREQDET.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RO_RX_FREQDET);		
		RO_FL_Out = RO_RX_FREQDET.hal.ro_fl_out;
		rg_force_da_pxp_cdr_pr_idac.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac);
		RO_pr_idac = rg_force_da_pxp_cdr_pr_idac.hal.rg_force_da_pxp_cdr_pr_idac;
	 	if(dbg_print) printk("pr_idac = 0x%x ,RO_FL_Out = 0x%x\n" ,RO_pr_idac , RO_FL_Out);

		//abs
		if (RO_FL_Out > FL_Out_target) RO_FL_Out_diff = RO_FL_Out - FL_Out_target;
		else if (RO_FL_Out < FL_Out_target) RO_FL_Out_diff = FL_Out_target - RO_FL_Out;
		else RO_FL_Out_diff = 0;
			
	 	if(RO_FL_Out > FL_Out_target)
	 	{        
			RO_FL_Out_diff_tmp = RO_FL_Out_diff;
			cdr_pr_idac_tmp = (PrCal_Serach<<8);
		 	if(dbg_print) printk("cdr_pr_idac_tmp = 0x%x\n",cdr_pr_idac_tmp);		 
	 	}
  	}

  	for (turn_pr_idac_bit_position = 7; turn_pr_idac_bit_position > -1 ; turn_pr_idac_bit_position--)
  	{
		pr_idac = cdr_pr_idac_tmp |(0x1<<turn_pr_idac_bit_position); 
		rg_force_da_pxp_cdr_pr_idac.hal.rg_force_da_pxp_cdr_pr_idac = pr_idac;
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);

		SS_RX_FREQ_DET_4.hal.rg_freqlock_det_en = 0x0;
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);

		SS_RX_FREQ_DET_4.hal.rg_freqlock_det_en = 0x03;
		RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);
		
		udelay(5000);	  
	    
		RO_RX_FREQDET.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RO_RX_FREQDET);	  
		RO_FL_Out = RO_RX_FREQDET.hal.ro_fl_out;

		if(dbg_print) printk("pr_idac = 0x%x ,RO_FL_Out = 0x%x\n",pr_idac,RO_FL_Out);

		if(RO_FL_Out < FL_Out_target)
		{
	        pr_idac &= ~(0x1<<turn_pr_idac_bit_position);
			cdr_pr_idac_tmp = pr_idac;
			if(dbg_print) printk("cdr_pr_idac_tmp = 0x%x\n",cdr_pr_idac_tmp);
		}
		else
		{
			cdr_pr_idac_tmp = pr_idac;
			if(dbg_print)printk("cdr_pr_idac_tmp = 0x%x\n",cdr_pr_idac_tmp);
		}   
	  
  	}
	
	rg_force_da_pxp_cdr_pr_idac.dat.value = cdr_pr_idac_tmp;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);
	if(dbg_print) printk("sel_cdr_pr_idac = 0x%x\n",cdr_pr_idac_tmp);


	SS_RX_FREQ_DET_4.hal.rg_freqlock_det_en = 0x00;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);

	SS_RX_FREQ_DET_4.hal.rg_freqlock_det_en = 0x03;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,SS_RX_FREQ_DET_4.dat.value);

  	udelay(5000);
	RO_RX_FREQDET.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RO_RX_FREQDET);	  
  	RO_state_freqdet = RO_RX_FREQDET.hal.ro_fbck_lock; 

	if(dbg_print) printk("RO_state_freqdet = 0x%x\n",RO_state_freqdet);


   //Load_Band
	RG_PXP_CDR_PR_INJ_MODE.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_INJ_MODE);
	rg_force_da_pxp_cdr_pr_lpf_c_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_lpf_c_en);
	rg_force_da_pxp_cdr_pr_idac.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac);
	SS_RX_FLL_b.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_b);
	SS_RX_FLL_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_1);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb);

   	RG_PXP_CDR_PR_INJ_MODE.hal.rg_pxp_cdr_pr_inj_force_off = 0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_INJ_MODE,RG_PXP_CDR_PR_INJ_MODE.dat.value);

	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_da_pxp_cdr_pr_lpf_c_en = 0;	
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_sel_da_pxp_cdr_pr_lpf_c_en = 0;
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_da_pxp_cdr_pr_lpf_r_en = 1;
	rg_force_da_pxp_cdr_pr_lpf_c_en.hal.rg_force_sel_da_pxp_cdr_pr_lpf_r_en = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_lpf_c_en,rg_force_da_pxp_cdr_pr_lpf_c_en.dat.value);
	
	rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_cdr_pr_idac = 0;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);

	SS_RX_FLL_b.hal.rg_load_en = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_b,SS_RX_FLL_b.dat.value);
	SS_RX_FLL_1.hal.rg_ipath_idac = cdr_pr_idac_tmp;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_1,SS_RX_FLL_1.dat.value);
	

	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 0;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);	
	rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pwdb = 0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value);

	SW_RST_SET.hal.rg_sw_ref_rst_n = 0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET,SW_RST_SET.dat.value);
	return RO_state_freqdet;
}

static void RX_CDR_LFP_L2D(u8 mod,u8 sel){
	rg_type_t(HAL_rg_force_da_pxp_cdr_lpf_lck2data) rg_force_da_pxp_cdr_lpf_lck2data;	
	rg_force_da_pxp_cdr_lpf_lck2data.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data);

	//rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_lck2data = 1;	
	rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_lck2data = mod;
	rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_da_pxp_cdr_lpf_lck2data = sel;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data,rg_force_da_pxp_cdr_lpf_lck2data.dat.value);
}


static void RX_CDR_LPF_RSTB(u8 mod,u8 sel){
	rg_type_t(HAL_rg_force_da_pxp_cdr_lpf_lck2data) rg_force_da_pxp_cdr_lpf_lck2data;	
	rg_force_da_pxp_cdr_lpf_lck2data.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data);

	//rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_rstb = 1;
	rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_rstb = mod;
	rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_da_pxp_cdr_lpf_rstb = sel;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data,rg_force_da_pxp_cdr_lpf_lck2data.dat.value);
}


static void RX_CDR_RST(void){
	RX_CDR_LFP_L2D(1,0);
	RX_CDR_LPF_RSTB(1,0);
	udelay(700);
	RX_CDR_LPF_RSTB(1,1);
	udelay(100);
	RX_CDR_LFP_L2D(1,1);

	//switch to auto
	RX_CDR_LPF_RSTB(0,1);
	RX_CDR_LFP_L2D(0,1);
}

static void RX_PR_CAL_SEQ(u8 xsgmii){//new
	if(dbg_print) printk("RX_PR_CAL_SEQ %x\n",xsgmii);
	if (!RX_PRCal_EN) return 0;
	RX_CDR_LFP_L2D(1,0);
	RX_PRCal(xsgmii);
	RX_CDR_LPF_RSTB(1,0);
	udelay(700);
	RX_CDR_LPF_RSTB(1,1);
	udelay(100);
	RX_CDR_LFP_L2D(1,1);

	
	//switch to auto
	//udelay(700);
	RX_CDR_LPF_RSTB(0,1);
	//udelay(100);
	RX_CDR_LFP_L2D(0,1);
}

static void RX_INIT(u8 xsgmii){
	if(dbg_print) printk("RX_INIT\n");
	rx_rate_ctrl(xsgmii); //10.0.2
	RX_Path_Init();
	RX_IMP(0b01);
	RX_FLL_PR_FMeter(0);//10.0.6
	RX_REV();//10.0.4
	RX_Rdy_TimeOut();
	RX_CalBoundry_Init();	
	RX_BySerdes(xsgmii);	
	RX_EYE_Mon();
	
	//calibration start
	RX_SYS_En(ON);
	udelay(500);
	
	RX_FLL_PR_FMeter(1);//10.0.6	
	RX_Cal_En(ON);      //It's Empty? Andy20230809 Note
	RX_CMLEQ_EN(ON);
	RX_CDR_PR(xsgmii); //10.0.2
	RX_CDR_xxx_Pwdb(B_ON);
	RX_SigDet();
	RX_SigDet_Pwdb(B_ON);
	//udelay(100);
	
	PXP_RX_PHYCK(xsgmii);
	udelay(100);
}

static void RX_BringUp(u8 xsgmii){		
	if(dbg_print) printk("RX BringUp %x\n",xsgmii);
	RX_INIT(xsgmii);
	RX_CDR_xxx_Pwdb(B_OFF);
	RX_SigDet_Pwdb(B_OFF);
}	

static void RSTB(u8 sel,u8 val){
	rg_type_t(HAL_SW_RST_SET) SW_RST_SET; 	
	SW_RST_SET.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET);

		switch(sel){
			case eALLPCS:
				SW_RST_SET.hal.rg_sw_allpcs_rst_n = val; 
				break;
			case eRXPCS:
				SW_RST_SET.hal.rg_sw_xfi_rxpcs_rst_n = val;	
				break;
			case eTXPCS:			
				SW_RST_SET.hal.rg_sw_xfi_txpcs_rst_n = val; 
				break;
			case eTXFIFO:
				SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = val; 
				break;
			case eREF:			
				SW_RST_SET.hal.rg_sw_ref_rst_n = val; 
				break;
			case ePMA:			
				SW_RST_SET.hal.rg_sw_pma_rst_n = val; 
				break;	
			case eRX:			
				SW_RST_SET.hal.rg_sw_rx_rst_n = val; 			
				break;	
			case eTX:			
				SW_RST_SET.hal.rg_sw_tx_rst_n = val;	
				break;
			case eM1:
				SW_RST_SET.hal.rg_sw_xfi_rxpcs_rst_n = val;
				SW_RST_SET.hal.rg_sw_rx_fifo_rst_n = val;	 //10.0.8			
				SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = val; 
				SW_RST_SET.hal.rg_sw_xfi_txpcs_rst_n = val; 
				SW_RST_SET.hal.rg_sw_ref_rst_n = 1; 
				SW_RST_SET.hal.rg_sw_allpcs_rst_n = val; 
				SW_RST_SET.hal.rg_sw_pma_rst_n = val; 
				SW_RST_SET.hal.rg_sw_tx_rst_n = val;	
				SW_RST_SET.hal.rg_sw_rx_rst_n = val; 			

				SW_RST_SET.hal.rg_sw_xfi_rxpcs_bist_rst_n = val;
		 		SW_RST_SET.hal.rg_sw_hsg_txpcs_rst_n = val;
 				SW_RST_SET.hal.rg_sw_hsg_rxpcs_rst_n = val;
				break;	
			default:
				SW_RST_SET.hal.rg_sw_xfi_rxpcs_rst_n = val;	
				SW_RST_SET.hal.rg_sw_rx_fifo_rst_n = val;	 //10.0.8
				SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = val; 
				SW_RST_SET.hal.rg_sw_xfi_txpcs_rst_n = val; 
				SW_RST_SET.hal.rg_sw_ref_rst_n = 1; 
				SW_RST_SET.hal.rg_sw_allpcs_rst_n = val; 
				SW_RST_SET.hal.rg_sw_pma_rst_n = val; 
				SW_RST_SET.hal.rg_sw_tx_rst_n = val;	
				SW_RST_SET.hal.rg_sw_rx_rst_n = val; 			

				SW_RST_SET.hal.rg_sw_xfi_rxpcs_bist_rst_n = val;
		 		SW_RST_SET.hal.rg_sw_hsg_txpcs_rst_n = val;
 				SW_RST_SET.hal.rg_sw_hsg_rxpcs_rst_n = val;
				break;
		}
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET,SW_RST_SET.dat.value);	
}	

static void TX_CONFIG(u8 ckin_sel,u8 ckin_divisor,u8 rate_ctrl){	
	rg_type_t(HAL_rg_force_da_pxp_tx_acjtag_en) rg_force_da_pxp_tx_acjtag_en;
	rg_type_t(HAL_rg_force_da_pxp_tx_term_sel) rg_force_da_pxp_tx_term_sel;
	rg_type_t(HAL_rg_force_da_pxp_tx_rate_ctrl) rg_force_da_pxp_tx_rate_ctrl;	
	//rg_type_t(HAL_RG_PXP_CMN_EN) RG_PXP_CMN_EN;
	rg_type_t(HAL_RG_PXP_TX_CKLDO_EN) RG_PXP_TX_CKLDO_EN;
	if(dbg_print) printk("TX_CONFIG\n");
	//rg_type_t(HAL_SS_TX_RST_B) SS_TX_RST_B;
//V11
	RG_PXP_TX_CKLDO_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX_CKLDO_EN);
	RG_PXP_TX_CKLDO_EN.hal.rg_pxp_tx_dmedgegen_en = 0x1;		
	RG_PXP_TX_CKLDO_EN.hal.rg_pxp_tx_ckldo_en = 0x1;	
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX_CKLDO_EN,RG_PXP_TX_CKLDO_EN.dat.value);

//Kris//V10	
	//RG_PXP_CMN_EN.dat.value = RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CMN_EN);
	//RG_PXP_CMN_EN.hal.rg_pxp_cmn_en = 0x1;	
	//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CMN_EN,RG_PXP_CMN_EN.dat.value);
	udelay(1);
	
	rg_force_da_pxp_tx_acjtag_en.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_acjtag_en);
	rg_force_da_pxp_tx_acjtag_en.hal.rg_force_sel_da_pxp_tx_ckin_sel = 0x1;
	rg_force_da_pxp_tx_acjtag_en.hal.rg_force_da_pxp_tx_ckin_sel = ckin_sel;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_acjtag_en,rg_force_da_pxp_tx_acjtag_en.dat.value);

	rg_force_da_pxp_tx_term_sel.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_term_sel);
	rg_force_da_pxp_tx_term_sel.hal.rg_force_sel_da_pxp_tx_term_sel = 1;
    rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_term_sel = 0b01;
	rg_force_da_pxp_tx_term_sel.hal.rg_force_sel_da_pxp_tx_ckin_divisor = 0x1;
	rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_ckin_divisor = ckin_divisor;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_term_sel,rg_force_da_pxp_tx_term_sel.dat.value);

	rg_force_da_pxp_tx_rate_ctrl.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_rate_ctrl);
	rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_tx_rate_ctrl = 0x1;
	rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_tx_rate_ctrl = rate_ctrl;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_rate_ctrl,rg_force_da_pxp_tx_rate_ctrl.dat.value);
#if 0 //move to void static TX_RSTB(u8 b_on){
 	SS_TX_RST_B.dat.value = RG_R_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_TX_RST_B);
	SS_TX_RST_B.hal.txcalib_rst_b = 0x1;
	SS_TX_RST_B.hal.tx_top_rst_b = 0x1;	
	RG_W_PL(_pxSGMII->phya_base,PMA_BASE_OFFSET,(RgAddr) _SS_TX_RST_B,SS_TX_RST_B.dat.value);
#endif
}
void static TX_FIR(u8 cn1,u8 c0b,u8 c1,u8 c2){
	rg_type_t(HAL_rg_force_da_pxp_tx_fir_c0b) rg_force_da_pxp_tx_fir_c0b;	
	rg_type_t(HAL_rg_force_da_pxp_tx_fir_c1) rg_force_da_pxp_tx_fir_c1;
	if(dbg_print) printk("TX_FIR\n");
	rg_force_da_pxp_tx_fir_c0b.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c0b);
	rg_force_da_pxp_tx_fir_c0b.hal.rg_force_sel_da_pxp_tx_fir_cn1 = 1;
	rg_force_da_pxp_tx_fir_c0b.hal.rg_force_sel_da_pxp_tx_fir_c0b = 1;	
	rg_force_da_pxp_tx_fir_c0b.hal.rg_force_da_pxp_tx_fir_cn1 = cn1;
	rg_force_da_pxp_tx_fir_c0b.hal.rg_force_da_pxp_tx_fir_c0b = c0b;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c0b,rg_force_da_pxp_tx_fir_c0b.dat.value);

	
	rg_force_da_pxp_tx_fir_c1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c1);
	rg_force_da_pxp_tx_fir_c1.hal.rg_force_sel_da_pxp_tx_fir_c1 = 1;
	rg_force_da_pxp_tx_fir_c1.hal.rg_force_sel_da_pxp_tx_fir_c2 = 0;	
	rg_force_da_pxp_tx_fir_c1.hal.rg_force_da_pxp_tx_fir_c1 = c1;
	rg_force_da_pxp_tx_fir_c1.hal.rg_force_da_pxp_tx_fir_c2 = c2;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c1,rg_force_da_pxp_tx_fir_c1.dat.value);
}
void static TX_RSTB(u8 b_on){
	
	rg_type_t(HAL_SS_TX_RST_B) SS_TX_RST_B;
	if(dbg_print) printk("TX_RSTB\n");
 	SS_TX_RST_B.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_TX_RST_B);
	SS_TX_RST_B.hal.txcalib_rst_b = b_on;
	SS_TX_RST_B.hal.tx_top_rst_b = b_on;	
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_TX_RST_B,SS_TX_RST_B.dat.value);
}

static void tx_rate_ctrl(u8 xsgmii){
    rg_type_t(HAL_xpon_tx_rate_ctrl) xpon_tx_rate_ctrl;
	if(dbg_print) printk("tx_rate_ctrl %x\n",xsgmii);
    xpon_tx_rate_ctrl.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _xpon_tx_rate_ctrl);

    if (xsgmii == 0) xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0b10;
    else if (xsgmii == 1) xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0b01;
    else if (xsgmii == 2) xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0b01;
    else xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0b10;
    
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _xpon_tx_rate_ctrl,xpon_tx_rate_ctrl.dat.value);
}

static void TX_BringUp(u8 xsgmii){
	if(dbg_print) printk("TX BringUp %x\n",xsgmii);
	tx_rate_ctrl(xsgmii);
	switch (xsgmii){
		case USXGMII:
			TX_CONFIG(1,0b101,0b10);
			TX_FIR(0,0,0,0);
			break;
		case HSGMII:
			TX_CONFIG(1,0b100,0b01);
			TX_FIR(0,0,0,0);
			break;
		case SGMII:
			TX_CONFIG(1,0b010,0b01);
			TX_FIR(0,10,0,0);
			break;
		default:
			printk("warring!!! no such selection %x\n",xsgmii);
			printk("please input 0 or 1 or 2\n");
			TX_CONFIG(1,0b101,0b10);
			TX_FIR(0,0,0,0);
			break;			
	}	
	TX_RSTB(B_OFF);
}

static void PLL_BringUp(u8 xsgmii){
	JCPLL_BringUp(xsgmii);
	//JCPLL_RSTB(0);
	udelay(200); //10.0.9
	TXPLL_BringUp(xsgmii);
	//TXPLL_RSTB(0);
	udelay(200); //10.0.9
}
static void Phya_BringUp(u8 xsgmii){
	TX_BringUp(xsgmii);	
	RX_BringUp(xsgmii);
	udelay(100);//10.0.9	
	RX_PR_CAL_SEQ(xsgmii);	
	RSTB(eM1,B_ON);
	udelay(100);//10.0.9	
	RSTB(eM1,B_OFF);	
	udelay(100);
}
static void xSGMII_AN_AutoSetting(u8 xsgmii,u8 mode,u8 duplx,u8 rate){
	rg_type_t(HAL_sgmii_reg_an_13) sgmii_reg_an_13;
	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_6) rg_hsgmii_pcs_ctrol_6;
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;	
    rg_type_t(HAL_sgmii_reg_an_force_cl37) sgmii_reg_an_force_cl37;
    rg_type_t(HAL_sgmii_reg_an_11) sgmii_reg_an_11;
    rg_type_t(HAL_sgmii_reg_an_4) sgmii_reg_an_4;
    

    
#ifdef FPGA_PLATFORM
	RGDATA_t rg={0};
    //Remove by Andy 20230817 due to DE suggestion
	if(dbg_print) printk("xSGMII_AN_AutoSetting( %x,%x,%x,%x)\n",xsgmii, mode, duplx, rate); 
    /*
    if(xsgmii == USXGMII){
		rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)FPGA_STS_CTRL); 
		rg.bit.b24 = 1; //bitfile0714
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)FPGA_STS_CTRL,rg.value); 			
	}
	*/	
#endif 
	if(dbg_print) printk("xSGMII_AN_AutoSetting\n");
	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);	
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
    rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 0;			
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 0;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value); 
	//if(dbg_print)printk("Write 0x1fa76000 0x%x\n",rg_rate_adapt_ctrl_0.dat.value);
    
	if (xsgmii == SGMII)
    {
#ifndef AN7583_FPGA
		sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
		sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x03;
		RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,sgmii_reg_an_13.dat.value);

		rg_hsgmii_pcs_ctrol_6.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_6);	
		rg_hsgmii_pcs_ctrol_6.hal.rg_sgmii_tx_enable = 1;
		rg_hsgmii_pcs_ctrol_6.hal.rg_sgmii_force_rateadapt = 1;
		rg_hsgmii_pcs_ctrol_6.hal.rg_sgmii_mode2_en = 1;
		rg_hsgmii_pcs_ctrol_6.hal.rg_sgmii_mac_mode = mode;
		RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_6,rg_hsgmii_pcs_ctrol_6.dat.value);	
			
		if (mode)
        {
			switch (rate)
            {
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
#else


        //1fa70060
        sgmii_reg_an_force_cl37.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_force_cl37);
        sgmii_reg_an_force_cl37.hal.rg_force_an_done= 0x01;
        RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_force_cl37,sgmii_reg_an_force_cl37.dat.value);

        //1fa70010
        sgmii_reg_an_4.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4);
        printk("memrl 1fa70010 0x%x\n",sgmii_reg_an_4.dat.value);
        sgmii_reg_an_4.hal.sgmii_dev_ability_0 = 1;
        sgmii_reg_an_4.hal.sgmii_dev_ability_1 = 0;
        sgmii_reg_an_4.hal.sgmii_dev_ability_2 = 0;
        sgmii_reg_an_4.hal.sgmii_dev_ability_3 = 0;
        sgmii_reg_an_4.hal.sgmii_dev_ability_13_4 = 0x40;
        sgmii_reg_an_4.hal.sgmii_an_ack = 0;
        sgmii_reg_an_4.hal.sgmii_dev_ability_15 = 1;
        RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,sgmii_reg_an_4.dat.value);


        //1fa70034
        sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
        printk("memrl 1fa70034 0x%x\n",sgmii_reg_an_13.dat.value);
        sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x0b;
        RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,sgmii_reg_an_13.dat.value);

        //1fa7002c
        sgmii_reg_an_11.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_11);
        sgmii_reg_an_11.hal.sgmii_link_timer = 0x50;
        RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_11,sgmii_reg_an_11.dat.value);

        //1fa76100
	    rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)0x100);
        rg.value = 0;
	    RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)0x100,rg.value);

#endif
	}
}
static void usxgmii_pcs_an_ctrl7(u8 an,u8 rate){ //update
	RGDATA_t rg={0};
	if(dbg_print) printk("usxgmii_pcs_an_ctrl7\n");
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_7);
	if (!an){
		rg.bit.b12 = 1;
		rg.value &= ~(0b111 << 8);
		rg.value |= rate << 8;
	}
	else{ //default value for AN disable & force mode
		rg.bit.b12 = 0;
		rg.value &= ~(0b111 << 8);
	}
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_7,rg.value);
}
static u8 USXGMII_AN_Sta(void){
	RGDATA_t rg={0}; 
	if(dbg_print) printk("USXGMII_AN_Sta\n");
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6);
	rg.bit.b0 = 1;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6,rg.value);
	rg.bit.b0 = 0;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6,rg.value);
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_ro_usxgmii_an_stats_2);	
	if(dbg_print) printk("USXGMII_AN_Sta %x\n",rg.bit.b24);
	return rg.bit.b24;
}

static u8 USXGMII_AN_Timer_Sta(void){	
	RGDATA_t rg={0}; 
	if(dbg_print) printk("USXGMII_AN_Sta\n");
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6);
	rg.bit.b0 = 1;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6,rg.value);
	rg.bit.b0 = 0;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6,rg.value);

	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_ro_usxgmii_an_stats_2);	
	rg.value &= 0x1fffff;
	if(dbg_print) printk("USXGMII_AN_Sta %x\n",rg.value);
	return rg.value;
}

static u32 USXGMII_AN_ReStart_Timer(u16 timeout){	
	RGDATA_t rg={0}; 
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_2,timeout & 0x7ff);
	
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_2);	
	if(dbg_print) printk("USXGMII_AN_ReStart_Timer %x\n",rg.value);
	return rg.value;
}

static u32 USXGMII_AN_Complete_Timer(u16 timeout){	
	RGDATA_t rg={0}; 
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_3,timeout & 0x7ff);
	
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_3);	
	if(dbg_print) printk("USXGMII_AN_Complete_Timer %x\n",rg.value);
	return rg.value;
}

static u32 USXGMII_AN_Idle_Timer(u16 timeout){	
	RGDATA_t rg={0}; 
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_4,timeout & 0x7ff);
	
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_4);	
	if(dbg_print) printk("USXGMII_AN_Idle_Timer %x\n",rg.value);
	return rg.value;
}

static void BASER_RA_Setting(u8 enable)
{
    rg_type_t(HAL_rg_usxgmii_an_control_7) rg_usxgmii_an_control_7;

    //AN7583 Add for USXGMII AN change speed
    rg_usxgmii_an_control_7.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_7);
    rg_usxgmii_an_control_7.hal.rg_xfi_mode_tx_sel = enable;
    rg_usxgmii_an_control_7.hal.rg_xfi_mode_rx_sel = enable;
    RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_7,rg_usxgmii_an_control_7.dat.value); 

}
    

static void usxgmii_an(u8 enable)
{	
    rg_type_t(HAL_rg_usxgmii_an_control_7) rg_usxgmii_an_control_7;
	RGDATA_t rg={0}; 
    
	if(USX_ANTMR){
		USXGMII_AN_ReStart_Timer(0x7b*10);
		USXGMII_AN_Complete_Timer(0x7b*10);//1.6ms * 10
		USXGMII_AN_Idle_Timer(0x7b);
        if(dbg_print) printk("UXSGMII_AN_TMR_%s\n",enable?"ENABLE" : "DISABEL");
	}	
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_0);
	rg.bit.b0 = enable;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_0,rg.value);	
    if(dbg_print) printk("UXSGMII_AN_%s\n",enable?"ENABLE" : "DISABEL");

    //AN7583 Add for USXGMII AN change speed
    rg_usxgmii_an_control_7.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_7);
    rg_usxgmii_an_control_7.hal.rg_xfi_mode_tx_sel = enable;
    rg_usxgmii_an_control_7.hal.rg_xfi_mode_rx_sel = enable;
    RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_7,rg_usxgmii_an_control_7.dat.value);    
   
    
     //dev ability //move to  10G~100M function
#if 0
		rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_1) & ~(6<<8); 
		rg.value |= 6<<8;
		RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_1,rg.value);
#endif

		//move to 10G~100M
#if 0		
		rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
		rg.bit.b8 = 0; //10G =1
		RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,rg.value);
#endif
	if(dbg_print) printk("_rg_usxgmii_an_control_0 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_0));
	if(dbg_print) printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
}

#ifdef FPGA_PLATFORM
static u8 fpga_clk_for_usxgmii_rate(u8 rate){
	RGDATA_t rg={0};
	if(dbg_print) printk("fpga_clk_for_usxgmii_rate %x\n",rate);
	rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL); 
	
#if 0 //chk LP rate
		rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6);
		rg.bit.b0 = 1;
		RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6,rg.value);		
		rg.bit.b0 = 0;
		RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6,rg.value);
#endif	
	
	switch (rate){
		case ENUM_USXGII_2p5G :
		case ENUM_USXGII_100M :
			rg.bit.b28 = 1;
			break;
		default :
			rg.bit.b28 = 0;			
			break;
	}
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg.value);				
	return(u8)rg.bit.b28;
}
#endif

static void sgmii_an(u8 enable){
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	
	if(dbg_print) printk("sgmii_an %x\n",enable);
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	sgmii_reg_an0.hal.sgmii_an_enable = enable;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);
    SGMII_AN = enable;
} 

static void hsgmii_an(u8 enable){
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	
	if(dbg_print) printk("sgmii_an %x\n",enable);
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	sgmii_reg_an0.hal.sgmii_an_enable = enable;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);
    SGMII_AN = enable;
}

void ETH_usxgmii_an_control_6_toggle(void)
{
    if(dbg_print) printk("0x1fa75c1c toggle\n");
    //Triger for usxgmii_stats_0
	rg_type_t(HAL_rg_usxgmii_an_control_6) rg_usxgmii_an_control_6;	
    //5C1C
	rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 1;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
 	rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 0;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);   

}

static void usxgmii_init(void)
{
	RGDATA_t rg;	
    rg_type_t(HAL_rg_rtl_modified) rg_rtl_modified;

    
	if(dbg_print) printk("usxgmii_init\n");
	rg_rtl_modified.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_rtl_modified); 
    rg_rtl_modified.hal.rg_modified_rx_gb_out_vld = 0;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_rtl_modified,rg_rtl_modified.dat.value);	

    if(aux.bit.b31 == 1)
    {
        rg_rtl_modified.dat.value = 0;
        RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_rtl_modified,rg_rtl_modified.dat.value);

    }
    	
	rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x100); 
	rg.bit.b28 = 1;
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x100,rg.value);	
	if(dbg_print) printk("1fa74100 0x%x\n",RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET, (RgAddr)0x100));
}

static void hsgmii_init(void){

	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1) rg_hsgmii_pcs_ctrol_1;	
	RGDATA_t rg;	
	//if(dbg_print) printk("usxgmii_init\n");   //Andy 20230807 Remove
#ifdef AN7583_FPGA
    rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18); 
    if(dbg_print) printk("0x1fa74018 0x%x\n",rg.value); 
    rg.bit.b2 = 1;
    RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18,rg.value);  

#else
	//PCS2
	rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1);
	rg_hsgmii_pcs_ctrol_1.hal.rg_tbi_10b_mode = 1;//bit 30
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);

	//Multi Sgmii
	rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18); 
	rg.bit.b2 = 1;
	rg.bit.b4 = 1;
	rg.bit.b5 = 1;
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18,rg.value);		
#endif
	if(dbg_print) printk("hsgmii_init\n");
}
static void sgmii_init(void){
	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1) rg_hsgmii_pcs_ctrol_1;
	rg_type_t(HAL_rg_rate_adapt_ctrl_6) rg_rate_adapt_ctrl_6;
	rg_type_t(HAL_rg_rate_adapt_ctrl_8) rg_rate_adapt_ctrl_8;
	RGDATA_t rg;	 

#ifndef AN7583_FPGA 

    //This bit is set as 0 in AN7583_FPGA
	rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1);
	rg_hsgmii_pcs_ctrol_1.hal.rg_tbi_10b_mode = 1;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);

    //set as 0x14 in AN7583_FPGA
 	rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18); 
	rg.bit.b2 = 1;
	rg.bit.b4 = 0;//[5:4] 2'b10 -> 1G, 2b'01 ->100M, 2b'00 ->10M
	rg.bit.b5 = 1;
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18,rg.value);

    //not set in AN7583_FPGA    
    rg_rate_adapt_ctrl_6.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_6);
	rg_rate_adapt_ctrl_6.dat.value = 0x07070707;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_6,rg_rate_adapt_ctrl_6.dat.value);

    //not set in AN7583_FPGA  
	rg_rate_adapt_ctrl_8.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_8);
	rg_rate_adapt_ctrl_8.hal.rg_rate_adapt_rx_afifo_dout_c = 0xff;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_8,rg_rate_adapt_ctrl_8.dat.value);
    if(dbg_print) printk("sgmii_init\n");
    
#endif	




}
static void xsgmii_init(u8 xsgmii){
	if(dbg_print) printk("xsgmii_init\n");
	switch (xsgmii){
		case 0:
			usxgmii_init();
			break;
		case 1:
			hsgmii_init();
			break;
		case 2:
			sgmii_init();
			break;
		default:
			usxgmii_init();
			break;
	}
}


static void USXGMII_10G(void)
{	
	rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;	
	rg_type_t(HAL_rg_usxgmii_an_control_1)rg_usxgmii_an_control_1;	
	RGDATA_t rg={0};	
	if(dbg_print) printk("USXGMII_10G\n");
	
	rg_usxgmii_an_control_1.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_1) & ~(6<<8); 
	rg_usxgmii_an_control_1.hal.rg_an_ability &= 0xf0ff;
	rg_usxgmii_an_control_1.hal.rg_an_ability |= 6<8;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_1,rg_usxgmii_an_control_1.dat.value);

	rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg.bit.b0 = 1;
	rg.bit.b4 = 1;
	rg.bit.b26 = 1;	
	rg.bit.b27 = 1;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg.value);
	
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 1;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 0;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);

	if(dbg_print) printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_11 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11));
	if(dbg_print) printk("USXGMII_10G exit\n");
	
}

static void USXGMII_5G(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;
	RGDATA_t rg={0};	
	if(dbg_print) printk("USXGMII_5G\n");
		
	rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg.bit.b0 = 1;
	rg.bit.b4 = 1;	
#ifndef FPGA_PLATFORM
    rg.bit.b26 = 0; 
	rg.bit.b27 = 0;	
#endif
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg.value);
	
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 1;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 1;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);

	if(dbg_print) printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_11 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11));
	if(dbg_print) printk("USXGMII_5G exit\n");
}

static void USXGMII_2p5G(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;
	RGDATA_t rg={0};	
	if(dbg_print) printk("USXGMII_2.5G\n");
			
	rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg.bit.b0 = 1;
	rg.bit.b4 = 1;	
#ifndef FPGA_PLATFORM
	rg.bit.b26 = 0; 
	rg.bit.b27 = 0; 
#endif
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg.value);
		
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 1;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 2;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);
	
	if(dbg_print) printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_11 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11));
	if(dbg_print) printk("USXGMII_2.5G exit\n");

}

static void USXGMII_1G(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;
	RGDATA_t rg={0};	
	if(dbg_print) printk("USXGMII_1G\n");
			
	rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg.bit.b0 = 1;
	rg.bit.b4 = 1;	
#ifndef FPGA_PLATFORM
	rg.bit.b26 = 0; 
	rg.bit.b27 = 0; 
#endif
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg.value);
		
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 1;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 4;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);
	
	if(dbg_print) printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_11 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11));
	if(dbg_print) printk("USXGMII_1G exit\n");
}

static void USXGMII_100M(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;
	RGDATA_t rg={0};	
	if(dbg_print) printk("USXGMII_100M\n");
			
	rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg.bit.b0 = 1;
	rg.bit.b4 = 1;
#ifndef FPGA_PLATFORM
	rg.bit.b26 = 0; 
	rg.bit.b27 = 0; 
#endif
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg.value);
		
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
	ra_ctl_11.hal.rg_force_rate_adapt_mode_en = 1;
	ra_ctl_11.hal.rg_force_rate_adapt_mode = 6;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);
	
	if(dbg_print) printk("_rg_usxgmii_an_control_1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, (RgAddr)_rg_usxgmii_an_control_1));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_0 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0));
	if(dbg_print) printk("_rg_rate_adapt_ctrl_11 %x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11));
	if(dbg_print) printk("USXGMII_100M exit\n");
}

static void HGMII_2p5G(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	if(dbg_print) printk("HGMII_2.5G\n");

	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 1;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value);
	if(dbg_print) printk("HSGMII_2.5 exit\n");
}

static void SGMII_1G(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	
	RGDATA_t rg;	

#ifdef AN7583_FPGA
    rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL); 
    rg.bit.b28 = 0;
    rg.bit.b29 = 0;
    rg.bit.b24 = 1;
    if(dbg_print) printk("0x1fa40%x  0x%x\n",_FPGA_STS_CTRL,rg.value);
    RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg.value); 
#endif
    
	if(dbg_print) printk("SGMII_1G\n");
	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
    rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 1;
    rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 1;

	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value);
			
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	//if(!sgmii_reg_an0.hal.sgmii_an_enable) //v10.0.11
	{
		//Multi Sgmii
#ifdef AN7583_FPGA

        rg.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)0xa24); 
        rg.bit.b0 = 1;
        rg.bit.b4 = 0;  
        rg.bit.b5 = 0;
        RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)0xa24,rg.value);                
#endif

		rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18); 
#ifndef AN7583_FPGA 
		rg.bit.b2 = 1;
	    rg.bit.b4 = 0;	
		rg.bit.b5 = 1;
#else
        rg.bit.b2 = 1;
        rg.bit.b4 = 1;  
        rg.bit.b5 = 0;
#endif
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18,rg.value);	


	}	
	if(dbg_print) printk("SGMII_1G exit\n");
}
static void SGMII_100M(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	
	RGDATA_t rg;	
    if(dbg_print) printk("SGMII_100M\n");
#ifdef AN7583_FPGA
        rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL); 
        rg.bit.b28 = 0;
        rg.bit.b29 = 1;
        rg.bit.b24 = 1;
        if(dbg_print) printk("0x1fa40%x  0x%x\n",_FPGA_STS_CTRL,rg.value);
        RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg.value); 
#endif

	
	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 0; //v10.0.11
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 0; //v10.0.11
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value);
			
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	//if(!sgmii_reg_an0.hal.sgmii_an_enable)//v10.0.11
	{

		if (PCS_SGMII_force_mode_patch_EN == 1)//AN7583 FPGA must open this setting
        {
			rg.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)0xa24); 
			rg.bit.b0 = 1;
			rg.bit.b4 = 1;	
			rg.bit.b5 = 0;
			RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)0xa24,rg.value);		
		}
		//Multi Sgmii
		rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18); 
		rg.bit.b2 = 1;
	    rg.bit.b4 = 1;	
		rg.bit.b5 = 0;
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18,rg.value);		
	}	
	if(dbg_print) printk("SGMII_100M exit\n");
}
static void SGMII_10M(void){
	rg_type_t(HAL_rg_rate_adapt_ctrl_0) rg_rate_adapt_ctrl_0;
	rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	
	RGDATA_t rg;	
	if(dbg_print) printk("SGMII_10M\n");
#ifdef AN7583_FPGA
    rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL); 
    rg.bit.b28 = 1;
    rg.bit.b29 = 1;
    rg.bit.b24 = 1;
    if(dbg_print) printk("0x1fa40%x  0x%x\n",_FPGA_STS_CTRL,rg.value);
    RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg.value); 
#endif

	rg_rate_adapt_ctrl_0.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0);
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_en = 1;
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_tx_bypass = 0;//v10.0.11
	rg_rate_adapt_ctrl_0.hal.rg_rate_adapt_rx_bypass = 0;//v10.0.11
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_0,rg_rate_adapt_ctrl_0.dat.value);
			
	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	//if(!sgmii_reg_an0.hal.sgmii_an_enable)//v10.0.11
	{
		if (PCS_SGMII_force_mode_patch_EN  == 1)//AN7583 FPGA must open this setting
        {
			rg.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)0xa24); 
			rg.bit.b0 = 1;
			rg.bit.b4 = 0;	
			rg.bit.b5 = 1;
			RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)0xa24,rg.value);		
		}	

		//Multi Sgmii
		rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18); 
		rg.bit.b2 = 1;
		rg.bit.b4 = 0;
		rg.bit.b5 = 0;
		RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)0x18,rg.value);		
	}	
	if(dbg_print) printk("SGMII_10M exit\n");
}


static void SGMII_RA_XGMII(u8 RA_XGMII){	
	RGDATA_t rg;
	rg.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)0x100);
	switch(RA_XGMII){
		case 1:
			rg.value = 0;
			break;
		case 2:
			rg.bit.b28 = 1;
			rg.bit.b31 = 1;
			break;
		default:
			break;
	}	
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)0x100,rg.value);
}
static void Solution0(u8 xsgmii,u8 mod,u8 an, u8 rate){ //sgmii force mode
	rg_type_t(HAL_sgmii_reg_an_13) sgmii_reg_an_13;
	rg_type_t(HAL_rg_an_sgmii_mode_force) rg_an_sgmii_mode_force;
	if((xsgmii == SGMII)&&(mod == 0))
    {
		if(dbg_print) printk("Solution0\n");
		sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
		rg_an_sgmii_mode_force.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_an_sgmii_mode_force);
		rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode_sel = 1;
		switch (rate){
			case ENUM_SGMII_1000M :
				sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x29;
				rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode = 0b00;
			break;
		case ENUM_SGMII_100M :
				sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x25;				
				rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode = 0b01;
			break;
		case ENUM_SGMII_10M :
				sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x21;				
				rg_an_sgmii_mode_force.hal.rg_force_cur_sgmii_mode = 0b10;
			break;	
    }
#ifndef AN7583_FPGA        
		RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,sgmii_reg_an_13.dat.value);		
#endif
		RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_an_sgmii_mode_force,rg_an_sgmii_mode_force.dat.value);
	}		
}

static void Solution1(u8 xsgmii,u8 mod,u8 an, u8 rate)
{ //reset rx fifo with thr
#ifndef AN7583_FPGA
    rg_type_t(HAL_rg_rate_adapt_ctrl_1) rg_rate_adapt_ctrl_1;
	u32 tmp = 0;
	if((xsgmii == SGMII)&&(mod == 0)&&(an == 1)){
		if(dbg_print) printk("Solution1\n");
		rg_rate_adapt_ctrl_1.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_1);
		tmp = rg_rate_adapt_ctrl_1.dat.value;
		rg_rate_adapt_ctrl_1.hal.rg_rate_adapt_rx_afifo_wr_thr = 0;
		rg_rate_adapt_ctrl_1.hal.rg_rate_adapt_rx_afifo_rd_thr = 0;	
		RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_1,rg_rate_adapt_ctrl_1.dat.value);		
		udelay(5);
		RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_1,tmp);		
	}	
#endif
}

static void xsgmii_force_data(u8 xsgmii,u8 mod,u8 an, u8 rate){
	rg_type_t(HAL_rg_user_define_sel) rg_user_define_sel;	
	rg_type_t(HAL_rg_user_define_xgmii_control) rg_user_define_xgmii_control;
	rg_type_t(HAL_rg_user_define_xgmii_data_lsb) rg_user_define_xgmii_data_lsb;

	switch(xsgmii){
		case USXGMII:
			switch(rate){
				case 0:
					rg_user_define_xgmii_data_lsb.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_xgmii_data_lsb);			
					if(rg_user_define_xgmii_data_lsb.hal.rg_user_define_rxd_lsb != USR_DATA){
						rg_user_define_xgmii_data_lsb.hal.rg_user_define_rxd_lsb = USR_DATA;
						RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_xgmii_data_lsb,rg_user_define_xgmii_data_lsb.dat.value);
					}
					
						rg_user_define_xgmii_control.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_xgmii_control);
					if(rg_user_define_xgmii_control.hal.rg_user_define_rxc != 0xff){
						rg_user_define_xgmii_control.hal.rg_user_define_rxc = 0xff;				
						RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_xgmii_control,rg_user_define_xgmii_control.dat.value);				
					}
					
					rg_user_define_sel.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_sel);
					rg_user_define_sel.hal.rg_user_define_sel = an;
					RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_sel,rg_user_define_sel.dat.value);
                    rg_user_define_sel.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_sel);
                    if(dbg_print)printk("_rg_user_define_sel = %x",rg_user_define_sel.dat.value);
					break;
				case 1:					
					rg_user_define_sel.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_sel);
					rg_user_define_sel.hal.rg_user_define_sel = an;
					RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_user_define_sel,rg_user_define_sel.dat.value);
					break;
			}
			break;
		case HSGMII:	
		case SGMII:
			break;
	}
}

static void Set_1000BASE_X_AN(u8 xsgmii){	
	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1)   rg_hsgmii_pcs_ctrol_1;	
    rg_type_t(HAL_rg_hsgmii_pcs_ctrol_3)   rg_hsgmii_pcs_ctrol_3;	
	rg_type_t(HAL_rg_hsgmii_pcs_ctrol_6)   rg_hsgmii_pcs_ctrol_6;	
    rg_type_t(HAL_sgmii_reg_an_force_cl37) rg_sgmii_reg_an_force_cl37;
	rg_type_t(HAL_sgmii_reg_an_13)         rg_sgmii_reg_an_13;
    rg_type_t(HAL_sgmii_reg_an0)sgmii_reg_an0;	    

    printk("1000BASE-X AN Mode Enable\n");
	  
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,0x1a0);  
	  
	rg_sgmii_reg_an_13.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13);
	rg_sgmii_reg_an_13.hal.sgmii_if_mode_5_0 = 0x22;//0x2;//0x22; //??	
//	rg_sgmii_reg_an_13.hal.sgmii_remote_fault_dis =1;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_13,rg_sgmii_reg_an_13.dat.value);  

    RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_4,0x0020);		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1);
	//rg_hsgmii_pcs_ctrol_1.hal.rg_tbi_10b_mode = 0;
	rg_hsgmii_pcs_ctrol_1.hal.rg_sgmii_send_an_error_en = 1;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);
	  
	rg_sgmii_reg_an_force_cl37.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_force_cl37);
	rg_sgmii_reg_an_force_cl37.hal.rg_force_an_done =1;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an_force_cl37,rg_sgmii_reg_an_force_cl37.dat.value );
	  
	  
	rg_hsgmii_pcs_ctrol_3.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_3);
	rg_hsgmii_pcs_ctrol_3.hal.rg_link_ststime = 0x98968;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_3,rg_hsgmii_pcs_ctrol_3.dat.value);
	  
	rg_hsgmii_pcs_ctrol_6.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_6);
	rg_hsgmii_pcs_ctrol_6.hal.rg_sgmii_spd_force_1000 = 1;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_6,rg_hsgmii_pcs_ctrol_6.dat.value);
	  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	sgmii_reg_an0.dat.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr)_sgmii_reg_an0);
	sgmii_reg_an0.hal.sgmii_an_enable = 1;
	sgmii_reg_an0.hal.sgmii_an_restart = 1;
	sgmii_reg_an0.hal.sgmii_reset_phy = 1;
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);
	udelay(3);
	sgmii_reg_an0.hal.sgmii_an_restart = 0;
	sgmii_reg_an0.hal.sgmii_reset_phy = 0;		
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,sgmii_reg_an0.dat.value);
}

static void xSGMII_Solution(u8 number,u8 xsgmii,u8 mod,u8 an, u8 rate){	
	if(dbg_print) printk("xSGMII_Solution : %x\n",number);
	switch(number){
		case 0:
			Solution0(xsgmii,mod,an,rate);
			break;
		case 1:
			Solution1(xsgmii,mod,an,rate);
			break;	
	}
}



static void usxgmii_rate_api(u8 rate){
	if(dbg_print) printk("usxgmii_rate_api rate %x : ",rate);
	
#ifdef	FPGA_PLATFORM	
	fpga_clk_for_usxgmii_rate(rate);
#endif

	switch (rate){
		case ENUM_USXGII_10G :
			if(dbg_print) printk("10G"); 
			USXGMII_10G();
			break;
		case ENUM_USXGII_5G :
			if(dbg_print) printk("5G"); 
			USXGMII_5G();
			break;
		case ENUM_USXGII_2p5G :
			if(dbg_print) printk("2.5G"); 
			USXGMII_2p5G();
			break;
		case ENUM_USXGII_1G :
			if(dbg_print) printk("1G"); 
			USXGMII_1G();
			break;
		case ENUM_USXGII_100M :
			if(dbg_print) printk("100M"); 
			USXGMII_100M();
			break;
			
		default :
			if(dbg_print) printk("10G"); 
			USXGMII_10G();
			break;			
	}
	if(dbg_print) printk("\n");
}	
	
static void sgmii_rate_api(u8 rate){
	if(dbg_print) printk("sgmii_rate_api rate %x\n",rate);
	switch (rate){
		case ENUM_SGMII_1000M :
			SGMII_1G();
			break;
		case ENUM_SGMII_100M :
			SGMII_100M();
			break;
		case ENUM_SGMII_10M :
			SGMII_10M();
			break;	
		default :			
			SGMII_1G();
			break;			
	}
}	

static void hsgmii_rate_api(void){
	if(dbg_print) printk("hsgmii\n");
	HGMII_2p5G();
}

void ETH_xSGMII_Disconnect(u8 mod ,u8 rate)
{
#ifdef FPGA_PLATFORM
    rg_type_t(HAL_rg_hsgmii_pcs_ctrol_1) rg_hsgmii_pcs_ctrol_1;
    RGDATA_t rg;
    switch(rate)
    {
        case USXGMII:
        rg.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL); 
        rg.bit.b22 = mod;
        RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr)_FPGA_STS_CTRL,rg.value);
		printk("xSGMII_ETH is %s\n",mod==1?"Disconnect":"Connect");           
          break;
        case HSGMII: //HSGMII
        case SGMII: //SGMII
          rg_hsgmii_pcs_ctrol_1.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1);
          rg_hsgmii_pcs_ctrol_1.hal.rg_sd_sig_det = !mod;
          RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr)_rg_hsgmii_pcs_ctrol_1,rg_hsgmii_pcs_ctrol_1.dat.value);
          printk("xSGMII_ETH is %s\n",mod==1?"Disconnect":"Connect");  
          break;
        default :
            printk("Not support in this Mode\n"); 
            break;
    }
#endif
}


static void AN_ReStart(u8 xsgmii){
	rg_type_t(HAL_ro_usxgmii_an_stats_0) ro_usxgmii_an_stats_0;	
	rg_type_t(HAL_rg_usxgmii_an_control_6) rg_usxgmii_an_control_6;
	RGDATA_t rg;
	//u16 loop;	
	if(dbg_print) printk("AN_ReStart\n");
	switch (xsgmii){
		case USXGMII :
			rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_0);
			if(dbg_print) printk("AN_ReStart1 %x\n",rg.value);

			if(!rg.bit.b0)break; //AN disable
			
			rg_usxgmii_an_control_6.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6);
			rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 1;
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
			if(dbg_print) printk("AN_ReStart1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c));
			udelay(3);
			rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 0;
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
			if(dbg_print) printk("AN_ReStart1 %x\n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c));

#ifdef	FPGA_PLATFORM	 			
			ro_usxgmii_an_stats_0.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
			if(dbg_print) printk("AN_ReStart3 %x\n",ro_usxgmii_an_stats_0.hal.ro_cur_usxgmii_mode);
			if((ro_usxgmii_an_stats_0.hal.ro_cur_usxgmii_mode == 0x04) ||(ro_usxgmii_an_stats_0.hal.ro_cur_usxgmii_mode == 0x02))fpga_clk_for_usxgmii_rate(ENUM_USXGII_2p5G);
			else fpga_clk_for_usxgmii_rate(ENUM_USXGII_10G);	
#endif		
			break;
		case HSGMII:
		case SGMII:
			rg.value = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0);
			if(!rg.bit.b12) break;
			else{				
				rg.bit.b9 = 1;			
				RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,rg.value);
				udelay(3);
				rg.bit.b9 = 0;			
				RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,rg.value);			
			}
			break;
		default :			
			printk("AN parameter error!!!\n");
			break;			
	}
	

}	

static void xSGMII_Rate_API(u8 xsgmii,u8 rate)
{
	switch (xsgmii){
		case USXGMII :
			usxgmii_rate_api(rate);
			break;
		case HSGMII:
			hsgmii_rate_api();
			break;
		case SGMII:
			sgmii_rate_api(rate);
			break;
		default :			
			USXGMII_10G();
			break;			
	}
}

static void xSGMII_AN_API(u8 xsgmii,u8 an){
	if(dbg_print) printk("xSGMII_AN_API %x, enable : %x\n",xsgmii,an);
	switch (xsgmii){
		case USXGMII :
			usxgmii_an(an);
			break;
		case HSGMII :
			if(an) SGMII_RA_XGMII(1);
			hsgmii_an(an); //v10.0.11
			break;
		case SGMII :
			if(an) SGMII_RA_XGMII(1);
			sgmii_an(an);
			break;
		default :			
			usxgmii_an(0);
			sgmii_an(0);
			break;			
	}	
}
static void xSGMII_PD(u8 PD){
	RGDATA_t rg = {0x00};
	if(dbg_print)printk("xSGMII_PD\n");
	RSTB(eM1,PD);
}	

static u32 usxgmii_link_sts(void){
	RGDATA_t rg = {0x00};
	rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6);
	rg.bit.b0 = 1;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg.value);
	rg.bit.b0 = 0;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg.value);
	
	return RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
}


static u32 sgmii_link_sts(RgAddr multi_sgmii){
	RGDATA_t rg = {0x00};	
	return RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) multi_sgmii);
}	

static u32 xSGMII_Link_STS(u8 xsgmii){
    RGDATA_t rg = {0x00},sts ={0x00};	
    
	switch (xsgmii){
		case USXGMII :
            if (XSGMII_USXGMII_INT_EN && XSGMII_REQ_IRQ)
            {
               rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
               if (linkdn_sta ==1)
                  sts.bit.b0 =0;
               else    
                  sts.bit.b0 = rg.bit.b12;//sync
               if (MAC_Polling_Print_EN) printk("Interrup flag =%x\n",sts.bit.b0);                     
            }
            else 
            {
               sts.bit.b0 = XFI_ETH_RX_SigDet_OUT_Read();//XSGMII_SigDet_A_EN? XFI_ETH_RX_SigDet_Flag(): XFI_ETH_RX_SigDet_Flag_D();//Sigdet
               if (MAC_Polling_Print_EN) printk("Sigdet =%x\n",sts.bit.b0);
            }
			rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_2);
			sts.bit.b1 = rg.bit.b24;//an
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
	//if (MAC_Polling_Print_EN) printk("0x%x\n",sts.value); 
	return sts.value;
}	

void ETH_Test(u8 mod,u8 an, u8 rate){
	#if 0
	switch (mod){
	case 0:
		break;
	case 1:
		xsgmii_init(0);
		break;
	case 2:
		xSGMII_AN_API(0,1);
		break;
	case 3:		
		AN_ReStart(0);
		break;
	case 4:
		break;
	}	
	#endif
    //Triger for usxgmii_stats_0
	rg_type_t(HAL_rg_rate_adapt_ctrl_11) rg_rate_adapt_ctrl_11;		
    //602C
	rg_rate_adapt_ctrl_11.hal.rg_rate_adapt_rd_toggle = 1;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11,rg_rate_adapt_ctrl_11.dat.value);
 	rg_rate_adapt_ctrl_11.hal.rg_rate_adapt_rd_toggle = 0;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11,rg_rate_adapt_ctrl_11.dat.value);   

    
    printk("TX XFI SOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_1)); 
    printk("TX XFI EOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_2));
    printk("TX MAC SOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_3));
    printk("TX MAC EOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_4));
    printk("RX XFI SOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_5));
    printk("RX XFI EOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_6));
    printk("RX MAC SOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_7));
    printk("RX MAC EOP Count : 0x%x\n",RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _ro_rate_adapt_sts_8));
}
EXPORT_SYMBOL(ETH_Test);

void ETH_RG_RW_API(u8 R,RgAddr rg,u32 data){
	if(R)printk("ETH_RG_RW : R addr %p data%x\n",rg, RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET, rg));
}
EXPORT_SYMBOL(ETH_RG_RW_API);
static void ETH_Int_Status(u8 sta_num)
{
	rg_type_t(HAL_xfi_pcs_int_sta_0) rg_xfi_pcs_int_sta_0; 	 
	rg_type_t(HAL_xfi_pcs_int_sta_1) rg_xfi_pcs_int_sta_1; 	 
	rg_type_t(HAL_xfi_pcs_int_sta_2) rg_xfi_pcs_int_sta_2; 	 
	rg_type_t(HAL_xfi_pcs_int_sta_3) rg_xfi_pcs_int_sta_3; 	 
	rg_type_t(HAL_xfi_pcs_int_sta_4) rg_xfi_pcs_int_sta_4; 	
    u8 sta_start,sta_end,i;
    if(sta_num == 5)
    {
        sta_start = 0;
        sta_end = 5;
    }
    else
    {
        sta_start = sta_num;
        sta_end = sta_num +1;
    }

    for (i=sta_start;i<sta_end;i++)
    {
        switch(i)
        {
            case 0 : 
                rg_xfi_pcs_int_sta_0.dat.value =  RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_0);
                printk("XFI PCS Int Status 0 = 0x%x\n",rg_xfi_pcs_int_sta_0.dat.value );
                printk("PCS TX FSM Int S = %d\n",rg_xfi_pcs_int_sta_0.hal.t_type_s_int );
                printk("PCS TX FSM Int C = %d\n",rg_xfi_pcs_int_sta_0.hal.t_type_c_int );
                printk("PCS TX FSM Int D = %d\n",rg_xfi_pcs_int_sta_0.hal.t_type_d_int );
                printk("PCS TX FSM Int T = %d\n",rg_xfi_pcs_int_sta_0.hal.t_type_t_int );
                RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_0,0x01010101); //Write 1 Clear
                break;
            case 1 : 
                rg_xfi_pcs_int_sta_1.dat.value =  RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_1);
                printk("XFI PCS Int Status 1 = 0x%x\n",rg_xfi_pcs_int_sta_1.dat.value );
                printk("PCS TX FSM Int E        = %d\n",rg_xfi_pcs_int_sta_1.hal.t_type_e_int );//0
                printk("PCS TX FSM Int LI       = %d\n",rg_xfi_pcs_int_sta_1.hal.t_type_li_int );//4//
                printk("PCS TX FSM Int ENC ERR  = %d\n",rg_xfi_pcs_int_sta_1.hal.txpcs_fsm_enc_err_int );//8
                printk("PCS TX FSM Int ENC LI   = %d\n\n",rg_xfi_pcs_int_sta_1.hal.txpcs_fsm_enc_li_int );//12
                printk("PCS RX FSM Int S = %d\n",rg_xfi_pcs_int_sta_1.hal.r_type_s_int );//16
                printk("PCS RX FSM Int C = %d\n",rg_xfi_pcs_int_sta_1.hal.r_type_c_int );//24
                RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_1,0x01011111); //Write 1 Clear    
                break; 
            case 2 : 
                rg_xfi_pcs_int_sta_2.dat.value =  RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2);
                printk("XFI PCS Int Status 2 = 0x%x\n",rg_xfi_pcs_int_sta_2.dat.value );
                printk("PCS RX FSM Int D = %d\n",rg_xfi_pcs_int_sta_2.hal.r_type_d_int );//0
                printk("PCS RX FSM Int T = %d\n",rg_xfi_pcs_int_sta_2.hal.r_type_t_int );//8
                printk("PCS RX FSM Int E        = %d\n",rg_xfi_pcs_int_sta_2.hal.r_type_e_int );//16
                printk("PCS RX FSM Int LI       = %d\n",rg_xfi_pcs_int_sta_2.hal.r_type_li_int );//20
                printk("PCS RX FSM Int DEC ERR  = %d\n",rg_xfi_pcs_int_sta_2.hal.rxpcs_fsm_dec_err_int );//24
                printk("PCS RX FSM Int DEC LI   = %d\n\n",rg_xfi_pcs_int_sta_2.hal.rxpcs_fsm_dec_li_int );//28
                RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2,0x11110101); //Write 1 Clear    
                break;
            case 3 : 
                rg_xfi_pcs_int_sta_3.dat.value =  RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3);
                printk("XFI PCS Int Status 3 = 0x%x\n",rg_xfi_pcs_int_sta_3.dat.value );
                printk("PCS HiBER           = %d\n",rg_xfi_pcs_int_sta_3.hal.hi_ber_st_int );//0
                printk("PCS AN DONE         = %d\n",rg_xfi_pcs_int_sta_3.hal.an_done_st_int );//4//
                printk("PCS LINK_UP ST      = %d\n",rg_xfi_pcs_int_sta_3.hal.link_up_st_int );//8
                printk("PCS BLOCK LOCK      = %d\n",rg_xfi_pcs_int_sta_3.hal.rx_block_lock_st_int );//16
                printk("PCS FAIL SYNC XOR   = %d\n",rg_xfi_pcs_int_sta_3.hal.fail_sync_xor_st_int );//24
                RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3,0x01010111); //Write 1 Clear    
                break;
            case 4 : 
                rg_xfi_pcs_int_sta_4.dat.value =  RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4);
                printk("XFI PCS Int Status 4 = 0x%x\n",rg_xfi_pcs_int_sta_4.dat.value );
                printk("PCS LINK_DOWN ST = %d\n",rg_xfi_pcs_int_sta_4.hal.link_down_st_int );//0
                RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4,0x1); //Write 1 Clear    
                break;
			default : break;
        }
    }


}



#ifdef Enable_IRQ

#if AN7583_COMMON_PHYA == 0
static u8 RX_SigDet_Flag(void)
{
	RGDATA_t rg;	
	u8 i,cnt = 0;		
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,0x30000);	
	for (i=0;i<=5;i++){		
		rg.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RO_RESERVE_2);
		cnt += rg.bit.b8;
	}
	if(dbg_print)printk("RX_SigDet_Flag, cnt %x\n",cnt);
	
	return cnt >= 4? 1:0;  
}

static u8 RX_SigDet_Flag_D(void){
	rg_type_t(HAL_XPON_INT_EN_3) XPON_INT_EN_3;		
	rg_type_t(HAL_SS_RX_SIGDET_1) SS_RX_SIGDET_1;		
	rg_type_t(HAL_XPON_INT_STA_3) XPON_INT_STA_3;
	rg_type_t(HAL_RX_RESET_1) RX_RESET_1;	

	XPON_INT_EN_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3);	
	XPON_INT_EN_3.hal.rg_rx_sigdet_int_en = 0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3,XPON_INT_EN_3.dat.value);	

	SS_RX_SIGDET_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1);	
	SS_RX_SIGDET_1.hal.rg_sigdet_en = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1,SS_RX_SIGDET_1.dat.value);

	RX_RESET_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1);	
	RX_RESET_1.hal.rg_sigdet_rst_b = 0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1,RX_RESET_1.dat.value);
	
	RX_RESET_1.hal.rg_sigdet_rst_b = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1,RX_RESET_1.dat.value);

	XPON_INT_STA_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3);	
	XPON_INT_STA_3.hal.rx_sigdet_int = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3,XPON_INT_STA_3.dat.value);	
	udelay(50);	
	XPON_INT_STA_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3);	

	SS_RX_SIGDET_1.hal.rg_sigdet_en = 0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1,SS_RX_SIGDET_1.dat.value);
	
	if(dbg_print)printk("RX_SigDet_Flag_D %x\n",XPON_INT_STA_3.hal.rx_sigdet_int);
	return XPON_INT_STA_3.hal.rx_sigdet_int;  
}

static void SigDet_Int_Init(u8 en){
	rg_type_t(HAL_XPON_INT_EN_3) XPON_INT_EN_3;		
	rg_type_t(HAL_SS_RX_SIGDET_1) SS_RX_SIGDET_1;		
	rg_type_t(HAL_XPON_INT_STA_3) XPON_INT_STA_3;	
	rg_type_t(HAL_RX_RESET_1) RX_RESET_1;	

	if(dbg_print)printk("SigDet_Int_Init, en %x\n",en);

	XPON_INT_STA_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3);	
	XPON_INT_STA_3.hal.rx_sigdet_int = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3,XPON_INT_STA_3.dat.value);	

	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3,0x0);
    
	XPON_INT_EN_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3);	
	XPON_INT_EN_3.hal.rg_rx_sigdet_int_en = en;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3,XPON_INT_EN_3.dat.value);	

	SS_RX_SIGDET_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1);	
	SS_RX_SIGDET_1.hal.rg_sigdet_en = en;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1,SS_RX_SIGDET_1.dat.value);	

	RX_RESET_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1);	
	RX_RESET_1.hal.rg_sigdet_rst_b = 0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1,RX_RESET_1.dat.value);
	
	RX_RESET_1.hal.rg_sigdet_rst_b = 1;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1,RX_RESET_1.dat.value);
}
static u8 SigDet_IntEn_sta(void){
	rg_type_t(HAL_XPON_INT_EN_3) XPON_INT_EN_3;	
	XPON_INT_EN_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3);
	return (u8) XPON_INT_EN_3.hal.rg_rx_sigdet_int_en;
}

static u8 RX_CDR_LFP_L2D_sta(void){
	rg_type_t(HAL_rg_force_da_pxp_cdr_lpf_lck2data) rg_force_da_pxp_cdr_lpf_lck2data;
	u8 sta; 
	rg_force_da_pxp_cdr_lpf_lck2data.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data);
	sta = rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_lck2data ;	
	if(dbg_print) printk("RX_CDR_LFP_L2D_sta %x\n",sta);
	return sta;
}

static u8 RX_RDY_Sta(void){
	rg_type_t(HAL_RX_CTRL_SEQUENCE_DISB_CTRL_1) RX_CTRL_SEQUENCE_DISB_CTRL_1;	
	RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_1);
	if(dbg_print) printk("RX_RDY_Sta %x \n",RX_CTRL_SEQUENCE_DISB_CTRL_1.hal.rg_disb_rx_rdy);
	return RX_CTRL_SEQUENCE_DISB_CTRL_1.hal.rg_disb_rx_rdy;
}

static void RX_RDY(u8 mod,u8 sel){
	rg_type_t(HAL_RX_CTRL_SEQUENCE_DISB_CTRL_1) RX_CTRL_SEQUENCE_DISB_CTRL_1;	
	rg_type_t(HAL_RX_CTRL_SEQUENCE_FORCE_CTRL_1) RX_CTRL_SEQUENCE_FORCE_CTRL_1;
	if(dbg_print) printk("RX_RDY %x, sel %x\n",mod,sel);
	RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_1);
	RX_CTRL_SEQUENCE_DISB_CTRL_1.hal.rg_disb_rx_rdy = mod;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_1,RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value);


	RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_FORCE_CTRL_1);
	RX_CTRL_SEQUENCE_FORCE_CTRL_1.hal.rg_force_rx_rdy = sel;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_FORCE_CTRL_1,RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value);
}
#endif

static void MAC_Linkup_Wrapper(void){
    if(dbg_print) printk("MAC_Linkup_Wrapper\n");
	//extern MAC function  
	eth_linkup_wrapper_wa_flag = 1;
}
static void MAC_Linkdn_Wrapper(void){
	if(dbg_print) printk("MAC_Linkdn_Wrapper\n");
	//extern MAC function  
	XSI_MAC_LOGIC_RESET(ETH_INDEX);

}
static void MAC_SigDet_Wrapper(void){
	if(dbg_print) printk("MAC_SigDet_Wrapper\n");
	//extern MAC function  

}
static void TMR_OFF(void){	

	if(dbg_print)printk("TMR_OFF\n");	
	TMR_ON = 0;
	mod_timer(&TMR,jiffies + 1*HZ/TMR_DIV); 		
	if(del_timer(&TMR))printk("del timer of an active timer\n");	
	else printk("del timer of an inactive timer\n");	
	TMR_CNT=0;
	
}
static u8 XFI_ETH_RX_SigDet_Flag_Out(void)
{
	u8 i,cnt = 0;		
	for (i=0;i<=5;i++)
    {            
		cnt += XFI_ETH_RX_SigDet_OUT_Read();
	}
	if(dbg_print)printk("RX_SigDet_Flag, cnt %x\n",cnt);
	
	return cnt >= 4? 1:0; 
}

static void TMR_SGMII_LINKDN_CB(void){
	
	rg_type_t(HAL_rg_hsgmii_pcs_state_2) rg_hsgmii_pcs_state_2;
	rg_type_t(HAL_msg_rx_sts_15) rg_msg_rx_sts_15;
    u8 dbg_print_temp;
	u8 link_status = 0;
    
    dbg_print_temp = dbg_print ;
    dbg_print =0;
	rg_hsgmii_pcs_state_2.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_state_2);
	rg_msg_rx_sts_15.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _msg_rx_sts_15);
	link_status = XFI_ETH_RX_SigDet_Flag_Out()& rg_hsgmii_pcs_state_2.hal.ro_rx_sync & rg_msg_rx_sts_15.hal.ro_lnk_sts_p0;
    dbg_print = dbg_print_temp;
    if(aux.bit.b29) printk("PMA Sig = %d, ro_rx_sync = %d, ro_lnk_sts_p0 = %d\n",XFI_ETH_RX_SigDet_Flag_Out(),rg_hsgmii_pcs_state_2.hal.ro_rx_sync,rg_msg_rx_sts_15.hal.ro_lnk_sts_p0);
	if(!link_status && !TMR_sgmii_link_dn_cb){
		TMR_sgmii_link_dn_cb = 1;
		if(dbg_print)printk("---------------TMR_SGMII_LINKDN_CB *** ---------------\n");
		else printk("---------------TMR_SGMII_LINKDN_CB work ---------------\n");
		#if 1//ndef TEST
		//RX_RDY(0,0);
		XFI_ETH_RX_CDR_LFP_L2D(1,0);			
		XFI_ETH_SigDet_Int_Init(1);		
		#endif
		if(dbg_print)printk("---------------TMR_SGMII_LINKDN_CB &&& ---------------\n");
	}
	if(link_status) TMR_sgmii_link_dn_cb=0;
	
}
static void TMR_CB(struct timer_list *t){
	
	TMR_SGMII_LINKDN_CB();
	mod_timer(&TMR,jiffies + 1*HZ/TMR_DIV); 		
	TMR_CNT++;
	//if(aux.bit.b29) printk("TMR_CNT = %d\n",TMR_CNT);
}

static void TMR_INI(void){
	
	int flag = 0;	
	if(dbg_print && !TMR_ON) printk("TMR_ON \n");
	TMR_ON = 1;
	timer_setup(&TMR, &TMR_CB,flag);	
	TMR.expires = jiffies + 1 *HZ/TMR_DIV;    	
	add_timer(&TMR);	
	TMR_CNT=1;
	
}
static u8 SigDet_isr(void){	
	rg_type_t(HAL_XPON_INT_STA_3) XPON_INT_STA_3;		
	u8 sd_int = 0;
	if(XFI_ETH_SigDet_IntEn_sta()){
		XPON_INT_STA_3.dat.value = XFI_ETH_SigDet_Int_sta3_read();	
		if(dbg_print)printk("rx_sigdet_int %x\n",XPON_INT_STA_3.hal.rx_sigdet_int);
	
		if(XPON_INT_STA_3.hal.rx_sigdet_int)
		{			
			sd_int = 1;
			if(dbg_print)printk("---------------rx_sigdet_int isr *** ---------------\n");
			else printk("---------------rx_sigdet_int work ---------------\n");
			if(XFI_ETH_RX_CDR_LFP_L2D_sta()== 1) XFI_ETH_RX_CDR_RST();
			if(XFI_ETH_RX_RDY_Sta()== 0) XFI_ETH_RX_RDY(1,0);
			XFI_ETH_SigDet_Int_Init(0);
			if(dbg_print)printk("---------------rx_sigdet_int isr &&&---------------\n");				
		}
		
		XFI_ETH_SigDet_Int_sta3_write(XPON_INT_STA_3.dat.value);
		if(dbg_print){
            XPON_INT_STA_3.dat.value = XFI_ETH_SigDet_Int_sta3_read(); 
			printk("_XPON_INT_STA_3 %x\n",XPON_INT_STA_3.dat.value);
		}
	}
	return sd_int;
}

static u8 sgmii_an_isr(void){
	rg_type_t(HAL_rg_hsgmii_mode_interrupt) rg_hsgmii_mode_interrupt;
	rg_type_t(HAL_rg_hsgmii_pcs_int_state) rg_hsgmii_pcs_int_state;
	rg_type_t(HAL_rg_rate_adapt_ctrl_1) rg_rate_adapt_ctrl_1;
	u8 an_done = 0;
	if(dbg_print)printk("eth sgmii_an_isr\n");

	rg_hsgmii_pcs_int_state.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_int_state);	
	rg_hsgmii_mode_interrupt.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt);

	if (rg_hsgmii_pcs_int_state.hal.ro_hsgmii_mode2_an_done){
		if(dbg_print) printk("ETH SGMII AN DONE INT\n");
		an_done = 1;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int			      =0x1;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int			  =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int		  =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int 				  =0x0;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int_clear			  =0x1;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int_clear 	  =0x1;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x1;
		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int_clear			  =0x1;
			RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,rg_hsgmii_mode_interrupt.dat.value);
		
		rg_rate_adapt_ctrl_1.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1);
		rg_rate_adapt_ctrl_1.hal.rg_rate_adapt_rx_afifo_wr_thr = 0;
		rg_rate_adapt_ctrl_1.hal.rg_rate_adapt_rx_afifo_rd_thr = 0;
		RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,rg_rate_adapt_ctrl_1.dat.value);		
		udelay(1);
		rg_rate_adapt_ctrl_1.hal.rg_rate_adapt_rx_afifo_wr_thr = 0xf;
		rg_rate_adapt_ctrl_1.hal.rg_rate_adapt_rx_afifo_rd_thr = 0x5;
		RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,rg_rate_adapt_ctrl_1.dat.value);
	}	
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int				  =0x1;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int			  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int		  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int 				  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int_clear			  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int_clear 	  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x0;
	rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int_clear			  =0x0;
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,rg_hsgmii_mode_interrupt.dat.value);
	return an_done;
}

static void sgmii_isr(void){
    if(H_SGMII_HOTPLUG){
        if(SigDet_isr())return; 
    }   
    if(SGMII_AN){
        if(sgmii_an_isr())return;
    }
}

static void xSGMII_Wait_LSSignaling(u8 xsgmii){
    u8 signal;
    u16 sync;
    sync =(u16) RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
   	signal = XFI_ETH_RX_SigDet_OUT_Read();//XSGMII_SigDet_A_EN? XFI_ETH_RX_SigDet_Flag(): RX_SigDet_Flag_D();	
    if(dbg_print)printk("Wait_signaling %x\n",xsgmii);
    if ((xsgmii == USXGMII)&&(Wait_signaling_en)&&(XSGMII_USXGMII_INT_EN))
    {
        if(dbg_print) 
            printk("---------------xSGMII_Wait_LSSignaling *** ---------------\n");
        if((0x100d != sync) || !(signal) )
            //||((0x100d != sync) && XSGMII_Linkdn_Ignone_SD_EN)
            //||(!linkup_sta && !(signal) && XSGMII_Linkdn_after_linkup_EN))
        {
		   linkdn_sta = 1;
		   if(USX_FORCE_USR_DATA)xsgmii_force_data(0,8,1,0);
		   XFI_ETH_RX_RDY(0,0);
		   XFI_ETH_RX_CDR_LFP_L2D(1,0);			
		   XFI_ETH_SigDet_Int_Init(1);
		   if(XSGMII_Linkdn_Wrapper_EN)MAC_Linkdn_Wrapper();
      	}
     	else 
        {  
           linkdn_sta = 0;         
        }
	    if(dbg_print)printk("usxgmii linkup_sta=%x,linkdn_sta=%x\n",linkup_sta,linkdn_sta);
	    if(dbg_print)printk("---------------xSGMII_Wait_LSSignaling &&& ---------------\n");
     }
}


void XFI_ETH_RX_CDR_RST(void)
{
    if(dbg_print) printk("RX_CDR_RST\n");

#ifndef FPGA_PLATFORM
#if AN7583_COMMON_PHYA == 1
	XFI_ETH_RX_CDR_LFP_L2D(1,0);
	XFI_ETH_RX_CDR_LPF_RSTB(1,0);
	udelay(700);
	XFI_ETH_RX_CDR_LPF_RSTB(1,1);
	udelay(100);
	XFI_ETH_RX_CDR_LFP_L2D(1,1);

	//switch to auto
	XFI_ETH_RX_CDR_LPF_RSTB(0,1);
	XFI_ETH_RX_CDR_LFP_L2D(0,1);
#endif
#endif
}

static void usxgmii_isr(void){	
	rg_type_t(HAL_xfi_pcs_int_sta_2) rg_xfi_pcs_int_sta_2; 	 
	rg_type_t(HAL_xfi_pcs_int_sta_3) rg_xfi_pcs_int_sta_3; 	 
	rg_type_t(HAL_xfi_pcs_int_sta_4) rg_xfi_pcs_int_sta_4; 	

	rg_type_t(HAL_rg_xfi_pcs_int_ctrl_2) rg_xfi_pcs_int_ctrl_2;    
	rg_type_t(HAL_rg_xfi_pcs_int_ctrl_3) rg_xfi_pcs_int_ctrl_3;	
	rg_type_t(HAL_rg_xfi_pcs_int_ctrl_4) rg_xfi_pcs_int_ctrl_4;

	rg_type_t(HAL_XPON_INT_EN_3) XPON_INT_EN_3;	
	rg_type_t(HAL_XPON_INT_STA_3) XPON_INT_STA_3;
    u8 i=0,sig_det_out=0,sig_det_accum=0;
#if AN7583_COMMON_PHYA == 1
	u8 signal = XSGMII_SigDet_A_EN? XFI_ETH_RX_SigDet_Flag(): XFI_ETH_RX_SigDet_Flag_D();
    u16 sync = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
    u8 sd_int = 0;

    if(dbg_print)printk("eth xsgmii: usxgmii_isr signal %x, sync %x\n",signal,sync);
    //Signal Detect Interrupt
    if(XFI_ETH_SigDet_IntEn_sta())
    {
        XPON_INT_STA_3.dat.value = XFI_ETH_SigDet_Int_sta3_read();    
        if(dbg_print)printk("rx_sigdet_int %x\n",XPON_INT_STA_3.hal.rx_sigdet_int);

        if(XPON_INT_STA_3.hal.rx_sigdet_int)
        {           
            sd_int = 1;
            if(dbg_print)printk("---------------rx_sigdet_int isr *** ---------------\n");
            if(XFI_ETH_RX_CDR_LFP_L2D_sta()== 1) XFI_ETH_RX_CDR_RST();
            if(XFI_ETH_RX_RDY_Sta()== 0) XFI_ETH_RX_RDY(1,0);
            //Eth_Ser_plug_reset (XFI_PLUG_IN , spd_sel_bk);
            XFI_ETH_SigDet_Int_Init(0);
            if(XSGMII_SigDet_Wrapper_EN) MAC_SigDet_Wrapper();
        }
        XFI_ETH_SigDet_Int_sta3_write(XPON_INT_STA_3.dat.value);
        if(dbg_print){
            XPON_INT_STA_3.dat.value = XFI_ETH_SigDet_Int_sta3_read();    
            printk("_XPON_INT_STA_3 %x\n",XPON_INT_STA_3.dat.value);
        }
        if(dbg_print)printk("---------------rx_sigdet_int isr &&&---------------\n");
        
        if(sd_int){
            sd_int = 0;
            return;
        }
    }   


#else
    u8 signal = XSGMII_SigDet_A_EN? RX_SigDet_Flag(): RX_SigDet_Flag_D();
    u16 sync = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
    u8 sd_int = 0;

    if(dbg_print)printk("eth xsgmii: usxgmii_isr signal %x, sync %x\n",signal,sync);
    //Signal Detect Interrupt
    if(SigDet_IntEn_sta())
    {
        XPON_INT_STA_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3);    
        if(dbg_print)printk("rx_sigdet_int %x\n",XPON_INT_STA_3.hal.rx_sigdet_int);

        if(XPON_INT_STA_3.hal.rx_sigdet_int)
        {           
            sd_int = 1;
            if(dbg_print)printk("---------------rx_sigdet_int isr *** ---------------\n");
            if(RX_CDR_LFP_L2D_sta()== 1) RX_CDR_RST();
            if(RX_RDY_Sta()== 0) RX_RDY(1,0);
            SigDet_Int_Init(0);
            if(XSGMII_SigDet_Wrapper_EN) MAC_SigDet_Wrapper();
        }
        
        RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3,XPON_INT_STA_3.dat.value);  
        if(dbg_print){
            XPON_INT_STA_3.dat.value = RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3);    
            printk("_XPON_INT_STA_3 %x\n",XPON_INT_STA_3.dat.value);
        }
        if(dbg_print)printk("---------------rx_sigdet_int isr &&&---------------\n");
        
        if(sd_int){
            sd_int = 0;
            return;
        }
    }

#endif


//Linkup int	
	rg_xfi_pcs_int_sta_2.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2);	 
	rg_xfi_pcs_int_sta_3.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3);	 
	rg_xfi_pcs_int_sta_4.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4);	
	if(dbg_print)printk("Interrupt sta rg_xfi_pcs_int_sta_2= %x,rg_xfi_pcs_int_sta_3= %x,rg_xfi_pcs_int_sta_4= %x\n",rg_xfi_pcs_int_sta_2.dat.value,rg_xfi_pcs_int_sta_3.dat.value,rg_xfi_pcs_int_sta_4.dat.value);

	if(dbg_print)printk("link_up_st_int %x\n",rg_xfi_pcs_int_sta_3.hal.link_up_st_int);
	if(rg_xfi_pcs_int_sta_3.hal.link_up_st_int)	
    {
		if(dbg_print)printk("---------------link_up_st_int isr *** ---------------\n");
		
        //signal = XSGMII_SigDet_A_EN? XFI_ETH_RX_SigDet_Flag(): XFI_ETH_RX_SigDet_Flag_D();

        sig_det_accum = 0;
        for(i=0;i<100;i++)
        {
            sig_det_out = XFI_ETH_RX_SigDet_OUT_Read();
            sync = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
            sig_det_accum += sig_det_out;
            //if(dbg_print)printk("sig_det_out = %d, sync = %x\n",sig_det_out,sync);
        }
        if(dbg_print)printk("sig_det_accum = %d\n",sig_det_accum);
        if(sig_det_accum >95) signal=1;
        else signal=0;

        if(dbg_print)printk("signal = %x\n",signal);
        sync = 0;
		if(signal) sync = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
		if(dbg_print)printk("link_up_st_int sync = %x\n",sync);
		if((0x100d == sync) && signal) 
        {
			if(XSGMII_Linkup_Wrapper_EN) 
            {
                MAC_Linkup_Wrapper();
            }
            else
            {
                if(USX_FORCE_USR_DATA) xsgmii_force_data(0,8,0,0);
            }
			linkup_sta = 1;		
		}	
		else linkup_sta = 0;
		if(dbg_print)printk("---------------link_up_st_int isr &&& ---------------\n");
	}
	else linkup_sta = 0;

//Linkdn int		
	if(dbg_print)printk("link_down_st_int %x\n",rg_xfi_pcs_int_sta_4.hal.link_down_st_int);
	if(rg_xfi_pcs_int_sta_4.hal.link_down_st_int){
		if(dbg_print)printk("---------------link_down_st_int isr *** ---------------\n");
		if(((0x100d != sync) && !signal )||((0x100d != sync) && XSGMII_Linkdn_Ignone_SD_EN)||(!linkup_sta && !signal && XSGMII_Linkdn_after_linkup_EN)){
			linkdn_sta = 1;
			if(USX_FORCE_USR_DATA)xsgmii_force_data(0,8,1,0);
#if AN7583_COMMON_PHYA == 1
            XFI_ETH_RX_RDY(0,0);
            XFI_ETH_RX_CDR_LFP_L2D(1,0);                       
            //Eth_Ser_plug_reset (XFI_PLUG_OUT , spd_sel_bk);
            udelay(2000);
			XFI_ETH_SigDet_Int_Init(1);
#else
			RX_RDY(0,0);
			RX_CDR_LFP_L2D(1,0);			
			#if 0
				TMR_INI();
			#else
				SigDet_Int_Init(1);
			#endif
#endif
			if(XSGMII_Linkdn_Wrapper_EN)MAC_Linkdn_Wrapper();
		}
		else linkdn_sta = 0;
		if(dbg_print)printk("---------------link_down_st_int isr &&& ---------------\n");
	}
	else linkdn_sta = 0;
		
	if(dbg_print)printk("usxgmii linkup_sta=%x,linkdn_sta=%x\n",linkup_sta,linkdn_sta);

    //Clear all interrupt state flag
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2,0x1010101);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3,0x1010101);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4,0x1);
	
	if(dbg_print){
		rg_xfi_pcs_int_sta_2.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2);	 
		rg_xfi_pcs_int_sta_3.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3);	 
		rg_xfi_pcs_int_sta_4.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4);	
		printk("After clear, rg_xfi_pcs_int_sta_2= %x,rg_xfi_pcs_int_sta_3= %x,rg_xfi_pcs_int_sta_4= %x\n",rg_xfi_pcs_int_sta_2.dat.value,rg_xfi_pcs_int_sta_3.dat.value,rg_xfi_pcs_int_sta_4.dat.value);
	}
	
}

static irqreturn_t xsgmii_interrupt(int irq, void *dev_id){
	if(dbg_print) printk("---------------eth xsgmii_isr:%x, irq=%d---------------\n",xsgmii_bk,irq);
	switch(xsgmii_bk){
		case USXGMII:
			usxgmii_isr();
			break;
        case HSGMII :
		case SGMII :
			sgmii_isr();
			break;	
	}	
	return IRQ_HANDLED;
}

static void usxgmii_pcs_int_init(u8 en){
	
	rg_type_t(HAL_rg_xfi_pcs_int_ctrl_2) rg_xfi_pcs_int_ctrl_2;    
	rg_type_t(HAL_rg_xfi_pcs_int_ctrl_3) rg_xfi_pcs_int_ctrl_3;	
	rg_type_t(HAL_rg_xfi_pcs_int_ctrl_4) rg_xfi_pcs_int_ctrl_4;

	if(dbg_print)printk("USXGMII_PCS_Interrupt %s\n",en?"Enable":"Disable");

    //Clear all intterupt setting
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_0,0x00); 				
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_1,0x00); 				
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_2,0x00); 				
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_3,0x00); 	
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4,0x00);

    //Clear all interrupt state flag. 
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2,0x1010101);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3,0x1010101);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4,0x1);
	
    //Read interrupt setting.
	rg_xfi_pcs_int_ctrl_2.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_2);	
	rg_xfi_pcs_int_ctrl_3.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_3);	
	rg_xfi_pcs_int_ctrl_4.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4);				

    //Only Set the Link Up and Link Down interrupt based on "en".
	rg_xfi_pcs_int_ctrl_2.hal.rg_r_type_e_int_en =0;			
	rg_xfi_pcs_int_ctrl_2.hal.rg_rxpcs_fsm_dec_err_int_en =0;	
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_2,rg_xfi_pcs_int_ctrl_2.dat.value);					
	rg_xfi_pcs_int_ctrl_3.hal.rg_hi_ber_st_int_en=0;	
	rg_xfi_pcs_int_ctrl_3.hal.rg_link_up_st_int_en=en;		
	rg_xfi_pcs_int_ctrl_3.hal.rg_rx_block_lock_st_int_en=0;
	rg_xfi_pcs_int_ctrl_3.hal.rg_fail_sync_xor_st_int_en=0;
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_3,rg_xfi_pcs_int_ctrl_3.dat.value);		
	rg_xfi_pcs_int_ctrl_4.hal.rg_link_down_st_int_en=en; 
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4,rg_xfi_pcs_int_ctrl_4.dat.value);
}

static void xsgmii_interrupt_init(u8 xsgmii){
	rg_type_t(HAL_rg_hsgmii_mode_interrupt) rg_hsgmii_mode_interrupt;		
	rg_type_t(HAL_INTERRUPT_EN_0) rg_INTERRUPT_EN_0;
	rg_type_t(HAL_multi_sgmii_reg_interrupt_sel) rg_multi_sgmii_reg_interrupt_sel;
	u8 en = 0;

	switch (xsgmii)
    {
		case USXGMII:
			en = XSGMII_USXGMII_INT_EN;
			usxgmii_pcs_int_init(en);
			break;
		case HSGMII:
			en = H_SGMII_HOTPLUG;
            if(dbg_print) printk("HSGMII_Interrupt_Init %s\n",en? "Enable":"Disable");
            if(dbg_print) printk("TMR_ON = %d, H_SGMII_HOTPLUG = %d\n",TMR_ON,H_SGMII_HOTPLUG);
            if(!TMR_ON && H_SGMII_HOTPLUG)TMR_INI();
			break;
		case SGMII:		
			en = XSGMII_SGMII_INT_EN;
            if(dbg_print)printk("SGMII_Interrupt_Init %s\n",en? "Enable" : "Disable");
	        rg_INTERRUPT_EN_0.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _INTERRUPT_EN_0);
			rg_INTERRUPT_EN_0.hal.rg_pcs_int_en_0 = en;		
		    RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _INTERRUPT_EN_0, rg_INTERRUPT_EN_0.dat.value);
            if(!TMR_ON && H_SGMII_HOTPLUG)TMR_INI();
            break;
	}
	
	if((!en)||(_pxSGMII->irq < 0)){
		if(! en)printk("xsgmii %x int enable 0\n",xsgmii);
		if(_pxSGMII->irq < 0)printk("_pxSGMII->irq NG\n");
		return;
	}
	else if(dbg_print)printk("xsgmii %x,int enable %x\n",xsgmii,en);

	
	if((XSGMII_REQ_IRQ == 0))
    {       
		XSGMII_REQ_IRQ = 1;
		if(request_irq(_pxSGMII->irq, xsgmii_interrupt, 0,xsgmii==0? "eth_usxgmii":"eth_sgmii", _pxSGMII->dev)){
			printk("\n request_irq() (irq number: %d) NG\n", _pxSGMII->irq);
			XSGMII_REQ_IRQ = 0;
			return _pxSGMII->irq;
		}
		else if(dbg_print) printk("\n request_irq() (irq number: %d) OK \n", _pxSGMII->irq);
	}
	
	switch(xsgmii){
		case USXGMII:
			if(dbg_print)printk("usxgmii int enable\n");
			break;
		case SGMII:
			rg_hsgmii_mode_interrupt.dat.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt);
    		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int				    =0x1;
    		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int			    =0x0;
    		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int 	        =0x0;
    		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int			            =0x0;
    		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_done_int_clear 		        =0x0;
    		rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_rx_sync_done_int_clear	        =0x0;
            rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_cl37_timerdone_int_clear    =0x0;
            rg_hsgmii_mode_interrupt.hal.rg_hsgmii_mode2_an_mis_int_clear               =0x0;
            RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,rg_hsgmii_mode_interrupt.dat.value);

        	#if 1
            rg_multi_sgmii_reg_interrupt_sel.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _multi_sgmii_reg_interrupt_sel);    
            rg_multi_sgmii_reg_interrupt_sel.hal.rg_hsgmii_pcs_int = 1;
            //rg_multi_sgmii_reg_interrupt_sel.hal.rg_hsgmii_phy_int = 1;
            RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _multi_sgmii_reg_interrupt_sel, rg_multi_sgmii_reg_interrupt_sel.dat.value);
        	#endif
            rg_INTERRUPT_EN_0.dat.value = 0;
            rg_INTERRUPT_EN_0.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _INTERRUPT_EN_0);
            if(dbg_print) 
            {
                printk("rg_INTERRUPT_EN_0 %x\n",rg_INTERRUPT_EN_0.dat.value);
                printk("xsgmii: sync_int exit %x\n",XSGMII_REQ_IRQ);
            }   
            break;
    }

    
}
static void xsgmii_free_irq(void){
	if(XSGMII_REQ_IRQ){
		printk("xsgmii_free_irq\n");
		free_irq(_pxSGMII->irq,_pxSGMII->dev);						
		XSGMII_REQ_IRQ = 0;
	}
}

#endif



static void xSGMII_Dbg_Status(u8 xsgmii){
	rg_type_t(HAL_msg_rx_sts_15) rg_msg_rx_sts_15;
	rg_type_t(HAL_ro_usxgmii_an_stats_0)ro_usxgmii_an_stats_0;
	RGDATA_t rg;
	switch (xsgmii){
		case USXGMII:			
			rg.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x930);
			printk("Sync Status 5930 : %x\n",rg.value);
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x01);
            udelay(10);
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x00);
			udelay(10);
			ro_usxgmii_an_stats_0.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
            //printk("sys memrl 5c10");
			printk("Cur_Usxgmii_Mode %x,Partner ability %x\n",ro_usxgmii_an_stats_0.hal.ro_cur_usxgmii_mode,ro_usxgmii_an_stats_0.hal.ro_partner_ability);

            break;
        case HSGMII:
        case SGMII:
			rg.value = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xb04);
			printk("Sync Status 0B04 : %x\n",rg.value);
			rg_msg_rx_sts_15.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) _msg_rx_sts_15);
			printk("Link status %x,Link spd %x\n",rg_msg_rx_sts_15.hal.ro_lnk_sts_p0,rg_msg_rx_sts_15.hal.ro_speed_sts_p0);
			break;			
	}
}
static void xSGMII_Dbg_RA_Cnt(void){
    
    rg_type_t(HAL_rg_rate_adapt_ctrl_11)ra_ctl_11;
	ra_ctl_11.dat.value = RG_R_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr)_rg_rate_adapt_ctrl_11);
    ra_ctl_11.hal.rg_rate_adapt_rd_toggle = 1;
    RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);
    udelay(200);
    ra_ctl_11.hal.rg_rate_adapt_rd_toggle = 0;
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11,ra_ctl_11.dat.value);
    
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
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_2,0x3333);
    udelay(200);
	RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_2,0x0);   
}
static void xSGMII_Power_Down(u8 powerDown)
{
#ifndef FPGA_PLATFORM
#if AN7583_COMMON_PHYA == 1
        if(powerDown == 1)
        {
            XFI_ETH_Power_Down();
            XFI_ETH_PCS_Reset_Hold();
        }

#endif
#endif

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



static void xSGMII_Dbg(u8 xsgmii,u8 mod,u8 an, u8 rate){
	switch(an){
		case 0:
			XFI_ETH_RX_CDR_RST();
			break;
		case 1:
			RX_PR_CAL_SEQ(xsgmii);
			break;
		case 2:
			RX_BringUp(xsgmii);
			udelay(100);//10.0.9	
			RX_PR_CAL_SEQ(xsgmii);	
			RSTB(eM1,B_ON);
			udelay(100);//10.0.9	
			RSTB(eM1,B_OFF);	
			udelay(100);
			break;
		case 3:
            if(rate == 2)
            {
                //RA Count Clear on Read
                xSGMII_Dbg_Status(xsgmii);
                xSGMII_Dbg_RA_Cnt();
                xSGMII_Dbg_RA_Cnt_Clr();
                if(xsgmii != USXGMII)
                {
                    xSGMII_Dbg_PCS_Cnt();
                }
            }
            else if(rate == 1)
            {
                //RA Count Clear
                xSGMII_Dbg_RA_Cnt_Clr();
            }
            else
            {
                xSGMII_Dbg_Status(xsgmii);
                xSGMII_Dbg_RA_Cnt();
                if(xsgmii != USXGMII)
                {
                    xSGMII_Dbg_PCS_Cnt();
                }

            }

			break;
		case 4 :
			ETH_Int_Status(rate);
			break;
		case 5 : 
            printk("XFI_EO_Scan, spd_sel_bk = %x\n\n",spd_sel_bk);
            XFI_EO_Scan(spd_sel_bk,0,7,rate);
            break;
        case 6 :
            debug_int_en = rate;

		case 255://no use
			xSGMII_Solution(0,xsgmii,mod,an,rate);//10.0.12
			break;
	}
}

u32 ETH_xSGMII_API(u8 xsgmii,u8 mod,u8 an, u8 rate){
	u32 data = 0x00;
    int spd_sel = 0;
    
	if(MAC_Polling_Print_EN) printk("ETH_xSGMII_API xsgmii=%x,mod = %x,an=%x,rate=%x\n",xsgmii,mod,an,rate);
    
    if((xsgmii == USXGMII)&&(mod==0)&&(an==0)&&(rate==1))
    {
        ETH_BASER_Mode = 1;
        rate = 0;
        printk("5G-BASER Mode Enable\n");
        
    }	
    
	if (mod < 2)
	{	
	    xsgmii_free_irq();
		if(TMR_ON)TMR_OFF();
	    xsgmii_chg(xsgmii);
#ifndef FPGA_PLATFORM
    #if AN7583_COMMON_PHYA == 1
        switch (xsgmii)
        {
            case USXGMII:   spd_sel = ETH_BASER_Mode? EO_Eth_Ser_5GBaseR : EO_Eth_Ser_USXGMII;break;
            case HSGMII:    spd_sel = EO_Eth_Ser_HSGMII;break;
            case SGMII:     spd_sel = EO_Eth_Ser_SGMII;break;
            default : spd_sel = EO_Eth_Ser_USXGMII;break;
        } 
        printk("ETH %s %s Mode PHY Init\n",(xsgmii==2)?"1G":(xsgmii? "2.5G":"10G"),(mod==1)?"AN":((an==1)? "Force AN":"Force"));
        XFI_Init (spd_sel);
        Eth_Ser_plug_reset (XFI_FIRST_PLUG_IN , spd_sel);
    #else
        //Oringinal  
		CMN_EN(1);
		PLL_BringUp(xsgmii);
		Phya_BringUp(xsgmii);
	#endif
#endif
        XFI_ETH_PCS_Reset_Release(spd_sel);
		xSGMII_Solution(0,xsgmii,mod,an,rate);
		xsgmii_init(xsgmii);
#ifndef FPGA_PLATFORM
		xsgmii_interrupt_init(xsgmii); 
#endif	
	}	
	
	switch(mod){
		case 0: 
			if(dbg_print) printk("Force mode\n");
			xSGMII_AN_API(xsgmii,an);
			xSGMII_Rate_API(xsgmii,rate);
			if((xsgmii == USXGMII) && (ETH_BASER_Mode == 0))
                usxgmii_pcs_an_ctrl7(an,rate); //update 5C20
            else if(ETH_BASER_Mode==1)
                BASER_RA_Setting(1);
            
			if(an)AN_ReStart(xsgmii);
			xSGMII_Solution(1,xsgmii,mod,an,rate);//10.0.12
			xSGMII_Wait_LSSignaling(xsgmii);
			break;
		case 1:
			if(dbg_print) printk("AN mode\n");
			xSGMII_AN_API(xsgmii,1);			
			xSGMII_AN_AutoSetting(xsgmii,0,1,rate); // MAC mode
		    if ((xsgmii ==SGMII) && (an ==2))Set_1000BASE_X_AN(xsgmii);   		
            xSGMII_Wait_LSSignaling(xsgmii);
			break;
		case 2:
			if(MAC_Polling_Print_EN) printk("xsgmii status\n");
			data = xSGMII_Link_STS(xsgmii);
			break;
		case 3 ://update
			if(MAC_Polling_Print_EN) printk("usxgmii status\n");
			data = usxgmii_link_sts();
			switch (an){
				case 0:
					break;
				case 1:
					data = (data >> 28) & 0x07 ; //c mode
					break;	
				case 2:
					data &= 0x00ff ; //p ability
					break;
				default :
					data = 0xffffffff;
					break;					
			}	
			if(MAC_Polling_Print_EN)printk("sgmii_link_sts cur mod %x,value %x\n",an,data);
			break;
		case 4 ://update
			if(MAC_Polling_Print_EN) printk("sgmii status\n");
			switch (an){
				case 0:
					data = sgmii_link_sts(_msg_rx_sts_15);
					break;
				case 1:
					data = sgmii_link_sts(_msg_rx_sts_16);
					break;	
				case 2:
					data = sgmii_link_sts(_msg_rx_sts_17);
					break;
				case 3:
					data = sgmii_link_sts(_msg_rx_sts_18);
					break;
				case 4:
					data = sgmii_link_sts(_msg_rx_sts_19);
					break;
				default :
					data = 0xffffffff;
					break;					
			}
			if(MAC_Polling_Print_EN)printk("sgmii_link_sts sel %x,value %x\n",an,data);
			break;
		case 5: //update
			xSGMII_PD(an);
			break;
		case 6: //update
			RSTB(an,rate);
			break;
		case 7:
			if(rate) aux.value |= 1<<an;
			else aux.value &= ~(1<<an);
			if(dbg_print) printk("eth aux = %x\n",aux.value);
			break;
		case 8:
			xsgmii_force_data(xsgmii,mod,an,rate);
			break;
        case 9:         
            XFI_ETH_TXFIR_Set(0,an,rate,0);
            break;
        case 10:    
            XFI_ETH_TXFIR_Set(1,an,rate,0);
            break;
        case 247 :
            eth_linkup_wrapper_delay_time = rate * 20;
            printk("ETH Total Delay Time = %d msec\n",rate*20);
        case 248 :
            if(rate == 0)
            {
                XSI_MAC_LOGIC_RESET(ETH_INDEX);
                RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_2,0x3333);
                udelay(200);
                RG_W_PL(_pxSGMII->ra_base,USXGMII_RA_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_2,0x0); 
                
                if(USX_FORCE_USR_DATA) xsgmii_force_data(0,8,0,0);
                eth_linkup_wrapper_wa_flag = 0;
				if(dbg_print) printk("ETH Linkup Wrapper Finished\n");
            }
            break;
        case 249 :
            XFI_phy_eyescan_test(spd_sel_bk, an, rate);
            break;
        case 250:    
            XFI_ETH_TXFIR_Get();
            break; 
        case 251:    
            XFI_ETH_TXFIR_Bringup_Setting(0,an,rate,0,dbg_print);
            break;            
        case 252:    
            XFI_ETH_TXFIR_Bringup_Setting(1,an,rate,0,dbg_print);
            break;
		case 253:
			xSGMII_Power_Down(an);
			break;
		case 254:
			ETH_xSGMII_Disconnect(an,xsgmii);
			break;    
		case 255:
			if(dbg_print) printk("xSGMII_Dbg %x,%x,%x,%x\n",xsgmii, mod, an, rate);
			xSGMII_Dbg( xsgmii, mod, an, rate);
			break;
		default:
			printk("xsgmii mod error!!!\n");
			data = 0xff;
			break;
	}
	return data;
}
EXPORT_SYMBOL(ETH_xSGMII_API);


/* APIs */
static void xsgmii_drv_init(void)
{
	printk("xsgmii_init: start\n");
	//xsgmii_int_init();
	printk("eth_usxgmii_fpga\n");
	printk("usxgmii: sgmii_serdes_sel: exit!\n");
}


#ifdef UNUSED_FUN
static u8 usxgmii_link_pattner_ability(void){
	rg_type_t(HAL_ro_usxgmii_an_stats_0)rgHAL_ro_usxgmii_an_stats_0;
	rgHAL_ro_usxgmii_an_stats_0.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr)_rg_usxgmii_an_control_6);
	printk("PL speed %x\n",rgHAL_ro_usxgmii_an_stats_0.hal.ro_cur_usxgmii_mode);
	return (u8)rgHAL_ro_usxgmii_an_stats_0.hal.ro_cur_usxgmii_mode;
}

static u8 usxgmii_linkup(void){
	u8 sts = 0;
	rg_type_t(HAL_xfi_pcs_int_sta_3) xfi_pcs_int_sta_3;
	xfi_pcs_int_sta_3.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3);
	if (xfi_pcs_int_sta_3.hal.link_up_st_int){
		sts = (u8) xfi_pcs_int_sta_3.hal.link_up_st_int;
		xfi_pcs_int_sta_3.hal.link_up_st_int = 1;
		printk("xfi_pcs_int_sta_3 %x\n",xfi_pcs_int_sta_3.dat.value);
	}
	return sts;
}

static u8 usxgmii_an_done(void){
	u8 sts = 0;
	rg_type_t(HAL_xfi_pcs_int_sta_3) xfi_pcs_int_sta_3;
	xfi_pcs_int_sta_3.dat.value = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3);
	if (xfi_pcs_int_sta_3.hal.link_up_st_int){
		sts = (u8) xfi_pcs_int_sta_3.hal.link_up_st_int;
		xfi_pcs_int_sta_3.hal.link_up_st_int = 1;
		if(dbg_print) printk("xfi_pcs_int_sta_3 %x\n",xfi_pcs_int_sta_3.dat.value);
	}
	return sts;
}	
#endif
static void xsgmii_get_base(xsgmii_base * _pxSGMII_Tmp)
{
#ifdef RESOUCE_FROM_COMMON_MODULE
	_pxSGMII->phya_base = Get_Base(0x1fa7f000);
	_pxSGMII->pma_base = Get_Base(0x1fa7e000);

	if (_pxSGMII->phya_base == 0) _pxSGMII->phya_base = NULL;
	if (_pxSGMII->pma_base == 0) _pxSGMII->pma_base = NULL;
#endif	
}

static int xsgmii_drv_probe(struct platform_device *pdev)
{
    const char *int_name;
    struct resource *res = NULL;
    int ret,int_id,region=0;
	xsgmii_base * _pxSGMII_Tmp = NULL;
	
	printk("ETH xsgmii_drv_probe\n");
    if (!pdev->dev.of_node) {
        dev_err(&pdev->dev, "No eth_usxgmii DT node found");
        return -EINVAL;
    }
	//int_id
	ret = of_property_read_u32(pdev->dev.of_node, "int_id", &int_id);
	if(ret<0) printk("sgmii get propert error!\n");
	else printk("sgmii:int_id: %d\n",int_id);

    _pxSGMII_Tmp = devm_kzalloc(&pdev->dev, sizeof(xsgmii_base), GFP_KERNEL);
    if (!_pxSGMII_Tmp)
        return -ENOMEM;

    platform_set_drvdata(pdev, _pxSGMII_Tmp);
	
	printk("ETH Serdes xsgmii_get_base \n");
	_pxSGMII = _pxSGMII_Tmp;//AN7583 move to here to avoid COMMON PHYA block
#if AN7583_COMMON_PHYA == 0
	xsgmii_get_base(_pxSGMII_Tmp);
#endif
	/* get pcs1 base address */
    res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
    _pxSGMII->pcs1_base = devm_ioremap_resource(&pdev->dev, res);
    if (IS_ERR(_pxSGMII->pcs1_base)){
	    printk("pcs1_base ng\n");	
        return PTR_ERR(_pxSGMII->pcs1_base);
    }
	
	/* get pcs2 base address */
	res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
   	_pxSGMII->pcs2_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(_pxSGMII->pcs2_base)){
	   printk("pcs2_base ng\n");	
	   return PTR_ERR(_pxSGMII->pcs2_base);
   	}
	
	/* get AN base address */
	res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
   	_pxSGMII->an_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(_pxSGMII->an_base))
	   return PTR_ERR(_pxSGMII->an_base);
	
	/* get RA base address */
	res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
   	_pxSGMII->ra_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(_pxSGMII->ra_base))
	   return PTR_ERR(_pxSGMII->ra_base);
	   
#if AN7583_COMMON_PHYA == 0
	/* get phya base address */
#ifndef RESOUCE_FROM_COMMON_MODULE
	res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
	_pxSGMII->phya_base = devm_ioremap_resource(&pdev->dev, res);
#endif
	if (IS_ERR(_pxSGMII->phya_base))
		return PTR_ERR(_pxSGMII->phya_base);
#endif
	
	/* Multi SGMII */
	res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
	_pxSGMII->multi_sgmii_base = devm_ioremap_resource(&pdev->dev, res);

	if (IS_ERR(_pxSGMII->multi_sgmii_base))
		return PTR_ERR(_pxSGMII->multi_sgmii_base);
	
#if AN7583_COMMON_PHYA == 0
	/* PMA */
#ifndef RESOUCE_FROM_COMMON_MODULE	
	res = platform_get_resource(pdev, IORESOURCE_MEM, region++);
	_pxSGMII->pma_base = devm_ioremap_resource(&pdev->dev, res);
#endif
	if (IS_ERR(_pxSGMII->pma_base))
		return PTR_ERR(_pxSGMII->pma_base);
#endif
	_pxSGMII->dev = &pdev->dev;
	
	//int_name
	ret = of_property_read_string(pdev->dev.of_node, "int_name", &int_name);
	if(ret < 0)	printk("sgmii get propert error!");
	else printk("sgmii:int_name: %s\n",int_name);
	
#ifdef Enable_IRQ
	/* get irq num */
	_pxSGMII->irq = platform_get_irq(pdev, 0);
	if(_pxSGMII->irq <= 0) {
		printk("\n get eth_xsgmii irq number failed\n");
		return _pxSGMII->irq;
	}else printk("irq = %x\n",_pxSGMII->irq);
	
#if 0 //move to interrupt init
	/* request irq */
	ret = request_irq(_pxSGMII->irq, xsgmii_interrupt, 0, int_name, &pdev->dev);
	if(ret) {
		printk("\n request_irq() (irq number: %d) failed (ret: %d)\n", _pxSGMII->irq, ret);
		return (ret);
	}else printk("\n request_irq() (irq number: %d) OK (ret: %d)\n", _pxSGMII->irq, ret);
#endif
#endif

	#if 1
	printk("ETH_xsgmii region= %x,%x,%x\n", region,sizeof(void __iomem*),sizeof(long));
	printk("ETH_xsgmii->pcs1_base= %pS\n", _pxSGMII->pcs1_base);
	printk("ETH_xsgmii->pcs2_base= %pS\n", _pxSGMII->pcs2_base);
	printk("ETH_xsgmii->an_base=   %pS\n", _pxSGMII->an_base);
	printk("ETH_xsgmii->ra_base=   %pS\n", _pxSGMII->ra_base);
	printk("ETH_xsgmii->multi_sgmii_base=   %pS\n", _pxSGMII->multi_sgmii_base);
	#endif

	if(_pxSGMII == NULL)printk("ETH xsgmii drv probe ng\n");
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

