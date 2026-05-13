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
#ifdef TCSUPPORT_CPU_AN7583
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
#include <linux/device.h>

#include <linux/gfp.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <asm/tc3162/tc3162.h>
#include <linux/delay.h>
#include <linux/proc_fs.h> //proc
#include <linux/uaccess.h> //proc

#include "ecnt_event_global/ecnt_event_serdes.h"

#include "mtk-phy_7583.h"
#include "mtk-phy_hook.h"

//#define USB_DEBUG

static int u2_port_num = 2;
static int u3_port_num = 1;
static int init_done_flag = 0;

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
int mtk_usb_phy_init(void);
int mtk_usb_PowerDown(u32 portnum);
int mtk_usb_PowerUp(u32 portnum);

extern u32 get_phy_efuse(u32 start_bit, u32 len);
extern void __iomem* Get_Base(u32 base);
void __iomem *qp_usb_comn_ana_base; /* QPHY USB Common ANA physical address */
void __iomem *qp_usb_comn_dig_base; /* QPHY USB Common DIG physical address */
void __iomem *qp_usb_comn_pma_base; /* QPHY USB Common PMA physical address */
/************************************************************************
*                  M A C R O S
*************************************************************************
*/
#ifdef USB_DEBUG
#define DEBUGk printk
#define USB_HOOK_TEST(x) ecnt_u3h_phy_PowerDown(x)

#else
#define DEBUGk(...)
#define USB_HOOK_TEST(x)
#endif

#define qp_usb_ana     0x1FA6F000
#define qp_usb_dig     0x1FA6A000
#define qp_usb_pma     0x1FA6E000

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/

struct ecnt_usb {
	struct device *dev;
	void __iomem *uphy_base;
};


/************************************************************************
*                  STATIC VARIABLE DECLARATIONS
*************************************************************************
*/

//struct ecnt_usb *ecnt_usb1 = NULL;
//struct ecnt_usb *ecnt_ssusb1 = NULL;
//struct ecnt_usb *ecnt_usb2 = NULL;
struct ecnt_usb *ecnt_usb = NULL;

static const struct of_device_id ecnt_usb_phy_of_id[] = {
    { .compatible = "econet,ecnt-usb_phy"},
    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, ecnt_usb_phy_of_id);

static const struct mtk_usb_phy_ops USB_ops = {
	.init			= mtk_usb_phy_init,
	.PowerDown		= mtk_usb_PowerDown,
	.PowerUp		= mtk_usb_PowerUp,
};

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/

/*****************************************************************
 ****  Reg   a c c e s s ********************************
 ******************************************************************/

u32 get_USB1_phy_reg(u32 reg)
{
	DEBUGk("Han:get u1 rg on %px\n", ecnt_usb->uphy_base + reg);
	return readl(ecnt_usb->uphy_base + (reg));
}

u32 get_SSUSB1_phy_reg(u32 reg) //QPHY 1fac0700 ~ 
{
	return readl(ecnt_usb->uphy_base + (reg));
}

u32 get_SSUSB1_common_phy_reg(u32 base, u32 reg) //qp 1fa6a000; 1fa6e000; 1fa6f000
{
	u32 tmp;
	switch (base)
	{
		case qp_usb_ana:
			tmp = readl(qp_usb_comn_ana_base + (reg));
			break;
		case qp_usb_dig:
			tmp = readl(qp_usb_comn_dig_base + (reg));
			break;
		case qp_usb_pma:
			tmp = readl(qp_usb_comn_pma_base + (reg));
			break;
		default :
			printk("Read SSUSB common phy base address error\n");
			tmp = 0xdeadbeef;
			break;
	}
	return tmp;
}

u32 get_USB2_phy_reg(u32 reg)
{
	return readl(ecnt_usb->uphy_base + (reg));
}

void set_USB1_phy_reg(u32 reg, u32 val)
{
	writel(val, (ecnt_usb->uphy_base + (reg)));
}

void set_SSUSB1_phy_reg(u32 reg, u32 val) //QPHY 1fac0700 ~ 
{
	writel(val, (ecnt_usb->uphy_base + (reg)));
}

void set_SSUSB1_common_phy_reg(u32 base, u32 reg, u32 val) //qp 1fa6a000; 1fa6e000; 1fa6f000
{
	switch (base)
	{
		case qp_usb_ana:
			writel(val, (qp_usb_comn_ana_base + (reg)));
			//printk("ANA Address = %x, Val = %x\n", qp_usb_comn_ana_base + (reg), val);
			break;
		case qp_usb_dig:
			writel(val, (qp_usb_comn_dig_base + (reg)));
			//printk("DIG Address = %x, Val = %x\n", qp_usb_comn_dig_base + (reg), val);
			break;
		case qp_usb_pma:
			writel(val, (qp_usb_comn_pma_base + (reg)));
			//printk("PMA Address = %x, Val = %x\n", qp_usb_comn_pma_base + (reg), val);
			break;
		default :
			printk("Write SSUSB common phy base address error\n");
			break;
	}
}

void set_USB2_phy_reg(u32 reg, u32 val)
{
	writel(val, (ecnt_usb->uphy_base + (reg)));
}
//EXPORT_SYMBOL(get_USB1_phy_reg);

u32 get_uphy_reg(u32 port,u16 reg) // lower 2 bytes of absolute address 
{
	if (reg >= 0x0700 && reg <= 0x0c64)
	{
		if (port == 1)
		{
			return get_SSUSB1_phy_reg(reg); //ecnt_ssusb1->uphy_base = 0x1fac0000
		}
		else
		{
			printk("There is no SSUSB2 to get phy RG\n");
			return 0xdeadbeef;
		}
	}
	else if(reg >= 0x0000 && reg <= 0x03FC)
	{
		if(port==2)
			return get_USB2_phy_reg(reg + 0x1000);
		else
			return get_USB1_phy_reg(reg);
	}
	return 0xdeadbeef;
}

u32 get_u3_common_phy_reg(u32 port, u32 base, u16 reg) // lower 2 bytes of absolute address 
{
	if (port == 2)
	{
		printk("There is no SSUSB2 Common PHY to get phy RG\n");
		return 0xdeadbeef;
	}
	else
	{
		return get_SSUSB1_common_phy_reg(base, reg);
	}
}

void set_uphy_reg(u32 port,u16 reg, u32 val) //lower 2 bytes of absolute address 
{
	if (reg >= 0x0700 && reg <= 0x0c64)
	{
		if (port == 1)
			set_SSUSB1_phy_reg(reg, val);
		else
			printk("There is no SSUSB2 to set phy RG\n");
	}
	else if(reg >= 0x0000 && reg <= 0x03FC)
	{
		if(port==2)
			set_USB2_phy_reg(reg + 0x1000, val);
		else
			set_USB1_phy_reg(reg, val);
	}
}

void set_u3_common_phy_reg(u32 port, u32 base, u16 reg, u32 val) //lower 2 bytes of absolute address 
{

	if (port == 2)
	{
		printk("There is no SSUSB2 Common PHY to set phy RG\n");
	}
	else
	{
		set_SSUSB1_common_phy_reg(base, reg, val);
	}

}

void rw_uphy_reg(u32 port,u16 reg, u32 val, u32 mask, u32 offset)
{
	u32	data = get_uphy_reg(port,reg);
	if (data==0xdeadbeef)
		return;
	//data &=(~mask);
	//data |=(val<<offset)&mask;
	data &=~(mask<<offset);
	data |=((val&mask)<<offset);
	set_uphy_reg(port,reg,data);
}

void rw_u3_common_phy_reg(u32 port, u32 base, u16 reg, u32 val, u32 mask, u32 offset)
{
	u32	data = get_u3_common_phy_reg(port, base, reg);
	if (data == 0xdeadbeef)
		return;
	//data &=(~mask);
	//data |=(val<<offset)&mask;
	data &= ~(mask << offset);
	data |= ((val&mask) << offset);
	set_u3_common_phy_reg(port, base, reg, data);
}

EXPORT_SYMBOL(get_uphy_reg);
EXPORT_SYMBOL(set_uphy_reg);
EXPORT_SYMBOL(rw_uphy_reg);


int ECNT_USB_DRV_PROBE(void)
{
	struct resource *res = NULL;
	struct device_node *node = NULL;
	struct platform_device *pdev = NULL;

	int ret = 0;

	/* QPHY USB Common ANA physical address */
	qp_usb_comn_ana_base = Get_Base(qp_usb_ana);
	if (IS_ERR(qp_usb_comn_ana_base)) {
		printk("\nERROR(%s) qp_usb_comn_ana_base\n", __func__);
		return -1;
	}

	/* QPHY USB Commonn DIG physical address  */
	qp_usb_comn_dig_base = Get_Base(qp_usb_dig);
	if (IS_ERR(qp_usb_comn_dig_base)) {
		printk("\nERROR(%s) qp_usb_comn_dig_base\n", __func__);
		return -1;
	}

	/* QPHY USB Common PMA physical address */
	qp_usb_comn_pma_base = Get_Base(qp_usb_pma);
	if (IS_ERR(qp_usb_comn_pma_base)) {
		printk("\nERROR(%s) qp_usb_comn_pma_base\n", __func__);
		return -1;
	}

	node = of_find_node_by_path("/usb_phy@1fac0000");
	if (node == NULL) {
		printk("\nERROR(%s) node==NULL\n", __func__);
		return -1;
	}

	pdev = of_find_device_by_node(node);
	if (pdev == NULL) {
		printk("\nERROR(%s) pdev==NULL\n", __func__);
		return -1;
	}

	ecnt_usb = devm_kzalloc(&pdev->dev, sizeof(struct ecnt_usb), GFP_KERNEL);
	if (!ecnt_usb)
		return -ENOMEM;
	platform_set_drvdata(pdev, ecnt_usb);

	/* Get NP SCU address */
	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	ecnt_usb->uphy_base = devm_ioremap_resource(&pdev->dev, res);
	printk("ecnt_usb->uphy_base = %x\n", ecnt_usb->uphy_base);
	if (IS_ERR(ecnt_usb->uphy_base)) {
		printk("\nERROR(%s) ecnt_usb_base\n", __func__);
		return -1;
	}



	ecnt_usb->dev = &pdev->dev;
	mtk_usb_phy_ops_init(&USB_ops);

	return 0;
}



/* init SCU registers' base address (a.s.a.p.) before any kernel module might access it. 
 * For example, usb_init() calls "isFPGA" which will access NP SCU register. 
 * If SCU base address has not initialized before that, cpu will crash. 
 * usb_init() uses subsys_initcall to init. Although ECNT_SCU_DRV_PROBE also uses
 * the smae subsys_initcall, it's executed before usb_init(), so it's ok 
 * Note: you can check linux-4.4.115/System.map to see which initcall function will be executed first*/
subsys_initcall(ECNT_USB_DRV_PROBE);


/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/

static int u3phy_config(u32 port){

	//Digital CLK trigger reverse
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x100, 0, RG_QP_EQ_RX500M_CK_SEL_MASK, RG_QP_EQ_RX500M_CK_SEL_OFST);
	//RX USB PCIE enable
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6B8, 1, qp_pcie_usb_system_mask, qp_pcie_usb_system_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x600, 0, qp_roc_ck_en_mask, qp_roc_ck_en_ofst);

	//50MHz XTAL
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x030, 1, RG_QP_CHPEN_MASK, RG_QP_CHPEN_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x030, 1, RG_QP_BG_DIV_MASK, RG_QP_BG_DIV_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x03C, 1, RG_QP_PLL_PREDIV_MASK, RG_QP_PLL_PREDIV_OFST);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x410, 0, qp_pll_icolp_en_intf_mask, qp_pll_icolp_en_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x340, 0, multi_phy_usb5_en_mask, multi_phy_usb5_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x340, 0, multi_phy_usb2p5_en_mask, multi_phy_usb2p5_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x340, 1, multi_phy_usb_mode_en_mask, multi_phy_usb_mode_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x340, 1, multi_phy_usb5_en_mask, multi_phy_usb5_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x340, 1, multi_phy_usb2p5_en_mask, multi_phy_usb2p5_en_ofst);

	//PLL RG
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 1, qp_pll_pck_sel_intf_mask, qp_pll_pck_sel_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 4, qp_pll_ir_intf_mask, qp_pll_ir_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 0, qp_pll_fbksel_intf_mask, qp_pll_fbksel_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 0, qp_pll_kband_prediv_intf_mask, qp_pll_kband_prediv_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 3, qp_pll_bc_intf_mask, qp_pll_bc_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 5, qp_pll_bpa_intf_mask, qp_pll_bpa_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 1, qp_pll_bpb_intf_mask, qp_pll_bpb_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 1, qp_pll_icoiq_en_intf_mask, qp_pll_icoiq_en_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 1, qp_pll_phy_ck_en_intf_mask, qp_pll_phy_ck_en_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x410, 1, qp_pll_sdm_hren_intf_mask, qp_pll_sdm_hren_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x408, 1, qp_pll_sdm_ifm_intf_mask, qp_pll_sdm_ifm_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x40C, 0x21E, qp_pll_ssc_delta_intf_mask, qp_pll_ssc_delta_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x40C, 0x18C, qp_pll_ssc_period_intf_mask, qp_pll_ssc_period_intf_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x404, 1, qp_pll_ssc_en_mask, qp_pll_ssc_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x248, 0x48000000, lcpll_pon_hrdds_pcw_ncpo_gpon_mask, lcpll_pon_hrdds_pcw_ncpo_gpon_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x208, 1, ncpo_ana_msb_mask, ncpo_ana_msb_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x230, 0x48000000, lcpll_ncpo_value_mask, lcpll_ncpo_value_ofst);

	//RX RG 5G
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x00C, 0, QP_CDR_LPF_RATIO_MASK, QP_CDR_LPF_RATIO_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x004, 1, QP_CDR_PD_10B_EN_MASK, QP_CDR_PD_10B_EN_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x018, 0x0C, QP_CDR_PR_DAC_BAND_MASK, QP_CDR_PR_DAC_BAND_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x020, 0, QP_CDR_PHYCK_RSTB_MASK, QP_CDR_PHYCK_RSTB_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x01C, 0, QP_CDR_PR_XFICK_EN_MASK, QP_CDR_PR_XFICK_EN_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x01C, 1, QP_CDR_PR_KBAND_PCIE_MODE_MASK, QP_CDR_PR_KBAND_PCIE_MODE_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x018, 3, QP_CDR_PR_KBAND_DIV_MASK, QP_CDR_PR_KBAND_DIV_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x01C, 0x19, QP_CDR_PR_KBAND_DIV_PCIE_MASK, QP_CDR_PR_KBAND_DIV_PCIE_OFST);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 1, reback_p0_lck2ref_en_mask, reback_p0_lck2ref_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6EC, 0x1F0, lfps_finish_time_mask, lfps_finish_time_ofst);

	//EQ all
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6F0, 0, p3_to_p0_do_eq_usb_mask, p3_to_p0_do_eq_usb_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6F0, 0, p2_to_p0_do_eq_usb_mask, p2_to_p0_do_eq_usb_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6F0, 0, p1_to_p0_do_eq_usb_mask, p1_to_p0_do_eq_usb_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 1, qp_pcie_usb_bypass_eq_p3_to_p0_en_mask, qp_pcie_usb_bypass_eq_p3_to_p0_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 1, qp_pcie_usb_bypass_eq_p2_to_p0_en_mask, qp_pcie_usb_bypass_eq_p2_to_p0_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 1, qp_pcie_usb_bypass_eq_p1_to_p0_en_mask, qp_pcie_usb_bypass_eq_p1_to_p0_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6C0, 0, qp_reserve_7_bit7_mask, qp_reserve_7_bit7_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x654, 1, qp_force_sigdet_5g_mask, qp_force_sigdet_5g_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6B8, 2, qp_lck2data_dly_time_0_7_mask, qp_lck2data_dly_time_0_7_ofst);

	//PI CAL
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x614, 0x10, qp_rx_pi_cal_en_h_dly_mask, qp_rx_pi_cal_en_h_dly_ofst);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x040, 1, QP_PLL_SSC_PHASE_INI_MASK, QP_PLL_SSC_PHASE_INI_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x040, 1, QP_PLL_SSC_TRI_EN_MASK, QP_PLL_SSC_TRI_EN_OFST);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x00C, 0, tx_data_rate_sel_mask, tx_data_rate_sel_ofst);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x004, 0, QP_CDR_PD_EDGE_DIS_MASK, QP_CDR_PD_EDGE_DIS_OFST);

	//Common Setting
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x30C, 1, us_ck_div_sel_mask, us_ck_div_sel_ofst);
	rw_u3_common_phy_reg(port, qp_usb_dig, 0x30C, 1, ns_ck_div_sel_mask, ns_ck_div_sel_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x000, 0x0A, rxdet_en_window_mask, rxdet_en_window_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x000, 4, rxdet_rd_wait_timer_mask, rxdet_rd_wait_timer_ofst);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x02C, 0, QP_TX_RXDET_METHOD_MASK, QP_TX_RXDET_METHOD_OFST);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x02C, 1, QP_TX_DMEDGEGEN_EN_MASK, QP_TX_DMEDGEGEN_EN_OFST);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x41C, 1, pcie_mode_pll_auto_en_mask, pcie_mode_pll_auto_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x41C, 1, pcie_mode_pll_auto_on_en_mask, pcie_mode_pll_auto_on_en_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x41C, 1, pcie_mode_pll_auto_off_en_mask, pcie_mode_pll_auto_off_en_ofst);

	//RX Speed Up
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x63C, 0x28, rg_fredet_chk_cycle_mask, rg_fredet_chk_cycle_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x640, 0x64, rg_fredet_golden_cycle_mask, rg_fredet_golden_cycle_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x644, 0x2710, rg_fredet_tolerate_cycle_mask, rg_fredet_tolerate_cycle_ofst);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x630, 0x9C4, rg_qp_rx_eq_en_h_dly_mask, rg_qp_rx_eq_en_h_dly_ofst); //20240429 Kris debug to add EQ training
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6DC, 0x9C4, rg_qp_eq_en_dly_mask, rg_qp_eq_en_dly_ofst); //20240429 Kris debug to add Lck2Data -> EQ delay timing
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6F0, 0x9C4, rg_qp_rx_eq_en_h_dly_short_mask, rg_qp_rx_eq_en_h_dly_short_ofst); //20240429 Kris debug to add EQ training
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6F0, 0x9C4, rg_qp_eq_en_dly_short_mask, rg_qp_eq_en_dly_short_ofst); //20240429 Kris debug to add Lck2Data -> EQ delay timing
	
	//TCL avoid LT noise impact add 20240612
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x028, 1, RG_QP_TX_RESERVE_8_MASK, RG_QP_TX_RESERVE_8_OFST);

	//PLL auto init
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x400, 1, phya_auto_init_mask, phya_auto_init_ofst);


	return 0;
}
int u2phy_config(void){
    
    int port=1;
	
    for (port=1;port<=u2_port_num;port++)
    {
		//U2 init
		rw_uphy_reg(port, RG_USB20_BC11_SW_EN_ADDR, 0, RG_USB20_BC11_SW_MASK, RG_USB20_BC11_SW_EN_OFST);
        mdelay(1);    
        DEBUGk("USB20_INTR_CTRL_P%d 0x1fad0304 [23:19]:0x%x \n",port,  (get_uphy_reg(port,0x0304)>>19)&0x1f);
        rw_uphy_reg(port,RG_USBPHYACR4_ADDR,6,RG_USB20_FS_CR_MASK,RG_USB20_FS_CR_OFST);
        rw_uphy_reg(port,RG_USBPHYACR4_ADDR,2,RG_USB20_FS_SR_MASK,RG_USB20_FS_SR_OFST);
		rw_uphy_reg(port,RG_USBPHYACR6_ADDR,8,RG_USB20_SQTH_MASK,RG_USB20_SQTH_OFST);
		rw_uphy_reg(port,RG_USBPHYACR6_ADDR,9,RG_USB20_DISCTH_MASK,RG_USB20_DISCTH_OFST);
    }
    return 0;
}

int u2_slew_rate_cal(void)
{
	int i=0;
	int j=0;
	int fgRet = 0;
	int u4FmOut = 0;	
	int u4Tmp = 0;

	for(j=1;j<=u2_port_num;j++)
	{
		printk(KERN_ERR "port %d u2_slew_rate_cal_7583\n",j);
		// => RG_USB20_HSTX_SRCAL_EN = 1
		// enable HS TX SR calibration
		rw_uphy_reg(j,RG_USB20_HSTX_SRCAL_EN_ADDR,0x1,RG_USB20_HSTX_SRCAL_EN,RG_USB20_HSTX_SRCAL_EN_OFST);
		mdelay(1);	
		DEBUGk("RG_USB20_HSTX_SRCAL_EN(%x): %x\n",RG_USB20_HSTX_SRCAL_EN_ADDR+0x1000*j ,get_uphy_reg(j,RG_USB20_HSTX_SRCAL_EN_ADDR+0x1000*j));
		
		// => RG_FRCK_EN = 1    
		// Enable free run clock
		rw_uphy_reg(j,RG_FRCK_EN_ADDR,0x1,RG_FRCK_EN,RG_FRCK_EN_OFST);
		DEBUGk("RG_FRCK_EN(%x): %x\n",RG_FRCK_EN_ADDR ,get_uphy_reg(j,RG_FRCK_EN_ADDR));

		// => RG_MONCLK_SEL = 0x0/0x1 for port0/port1
		// Setting MONCLK_SEL
		rw_uphy_reg(j,RG_MONCLK_SEL_ADDR,j,RG_MONCLK_SEL,RG_MONCLK_SEL_OFST);
		DEBUGk("RG_MONCLK_SEL_ADDR(%x): %x\n",RG_MONCLK_SEL_ADDR ,get_uphy_reg(j,RG_MONCLK_SEL_ADDR));

		// => RG_CYCLECNT = 0x400
		// Setting cyclecnt = 0x400
		rw_uphy_reg(j,RG_CYCLECNT_ADDR,0x400,RG_CYCLECNT,RG_CYCLECNT_OFST);
		DEBUGk("RG_CYCLECNT(%x): %x\n",RG_CYCLECNT_ADDR ,get_uphy_reg(j,RG_CYCLECNT_ADDR));
		
		// => RG_FREQDET_EN = 1
		// Enable frequency meter
		rw_uphy_reg(j,RG_FREQDET_EN_ADDR,0x1,RG_FREQDET_EN,RG_FREQDET_EN_OFST);
		DEBUGk("RG_FREQDET_EN(%x): %x\n",RG_FREQDET_EN_ADDR ,get_uphy_reg(j,RG_FREQDET_EN_ADDR));
		// wait for FM detection done, set 10ms timeout
		for(i=0; i<10; i++){
			u4FmOut = get_uphy_reg(j,FM_OUT_ADDR);
			// check if FM detection done 
			if (u4FmOut != 0)
			{
				// => u4FmOut = USB_FM_OUT
				// read FM_OUT
				printk(KERN_ERR "FM_OUT value = %d(0x%08X)\n", u4FmOut, u4FmOut);
				fgRet = 0;
				DEBUGk(KERN_ERR "FM detection done! loop = %d\n", i);
				break;
			}

			fgRet = 1;
			mdelay(1);
		}
		// => RG_FREQDET_EN = 0
		// disable frequency meter
		rw_uphy_reg(j,RG_FREQDET_EN_ADDR,0x0,RG_FREQDET_EN,RG_FREQDET_EN_OFST);
		DEBUGk("RG_CYCLECNT(%x): %x\n", RG_FREQDET_EN_ADDR, get_uphy_reg(j,RG_FREQDET_EN_ADDR));
		// => RG_FRCK_EN = 0
		// disable free run clock
		rw_uphy_reg(j,RG_FRCK_EN_ADDR,0x0,RG_FRCK_EN,RG_FRCK_EN_OFST);
		DEBUGk("RG_FRCK_EN_ADDR(%x): %x\n", RG_FRCK_EN_ADDR, get_uphy_reg(j,RG_FRCK_EN_ADDR));

		// => RG_USB20_HSTX_SRCAL_EN = 0
		// disable HS TX SR calibration
		rw_uphy_reg(j,RG_USB20_HSTX_SRCAL_EN_ADDR,0x0,RG_USB20_HSTX_SRCAL_EN,RG_USB20_HSTX_SRCAL_EN_OFST);
		mdelay(1);
		DEBUGk("RG_USB20_HSTX_SRCAL_EN_ADDR(%x): %x\n", RG_USB20_HSTX_SRCAL_EN_ADDR+0x1000*j, get_uphy_reg(j,RG_USB20_HSTX_SRCAL_EN_ADDR+0x1000*j));

		// In case not K success, use measured value
		if(u4FmOut == 0){
			rw_uphy_reg(j,RG_USB20_HSTX_SRCTRL_ADDR,HSTX_SRCTRL_MEASURE,RG_USB20_HSTX_SRCTRL,RG_USB20_HSTX_SRCTRL_OFST);
			fgRet = 1;
			printk(KERN_ERR "Use default SR calibration value \n");
		}
		else{
			// set reg = (1024/FM_OUT) * REF_CK * U2_SR_COEF (round to the nearest digits)
			u4Tmp = (((1024 * REF_CK * U2_SR_COEF) / u4FmOut) + 500) / 1000; 
			printk(KERN_ERR "SR calibration value = %d\n", (u8)u4Tmp);
			rw_uphy_reg(j,RG_USB20_HSTX_SRCTRL_ADDR,(u4Tmp&0x7),RG_USB20_HSTX_SRCTRL,RG_USB20_HSTX_SRCTRL_OFST);
		}
	}
	return fgRet;
}

int mtk_usb_phy_init(void)
{
	int ret = -1;
	int proc_ret = -1;
	u32 serdes_sel=-1;
	DEBUGk("USB init\n");
	if(init_done_flag){
		return 1;
	}
	if(isAN7583){
		printk(KERN_ERR "USB driver version: 7583.6.20240619\n");
        u2_port_num = 2;

		Read_SSUSB_EFUSE();

		serdes_sel = get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_USB1);
		printk("U3 serdes sel : %d\n", serdes_sel);
		if (serdes_sel == ECNT_EVENT_SERDES_USB1_USB30)
		{
			ret = u3phy_config(1);
			printk("Bring U3 Port 1 init\n");
		}
		else
		{
			printk("Bypass U3 Port 1 init\n");
		}
			
        u2phy_config();
		u2_slew_rate_cal();
		printk("USB PHY Init Complete\n");
		mdelay(1);	
	}else{
		printk(KERN_ERR "**Unknown chip ID for USB driver**\n");
		ret = -1;
	}	

	init_done_flag = 1;

	if ((proc_ret = phy_debug_init()) != 0)  //Proc init
	{
		printk("USB proc initalization fail\n");
	}

	return ret;	
}

int mtk_usb_PowerDown(u32 portnum)
{
	/*portnum :0 for all port,  1 for port1U3, 2 for port1U2, 3 for port2U2, */
	u32 port=1;
    //printk("Performing mtk_usb_PowerDown(%d).\n",portnum);
    switch(portnum)
    {
        case 0:
            //U3
            for (port=1;port<=u3_port_num;port++)
            {
				U3PHY_PowerDown(port);
                mdelay(1);
            }
            //U2
            for (port=1;port<=u2_port_num;port++)
            {
				U2PHY_PowerDown(port);
                mdelay(1);
            }
            break;
        case 1:
			U3PHY_PowerDown(1);
            break;
        case 2:
			U2PHY_PowerDown(1);
            break;
        case 3:
			U2PHY_PowerDown(2);
            break;
        default :
            printk("mtk_usb_PowerDown(%d). arg error\n",portnum);
            return -1;
            break;
    }
	/*do something*/
    mdelay(1);
	return 0;
}
int mtk_usb_PowerUp(u32 portnum)
{
	/*portnum :0 for all port,  1 for port1U3, 2 for port1U2, 3 for port2U2, */
    u32 port=1;
	u8 ret = 0;
	printk("Performing mtk_usb_PowerUp(%d).\n",portnum);
	switch(portnum)
    {
        case 0:
            //U3
            for (port=1;port<=u3_port_num;port++)
            {
				U3PHY_PowerOn(port);
                mdelay(1);
				ret = u3phy_config(1);
            }
            //U2
			for (port = 1; port <= u2_port_num; port++)
			{
				U2PHY_PowerOn(port);
				mdelay(1);
			}
            u2phy_config();
            break;
        case 1:
			U3PHY_PowerOn(1);
			mdelay(1);
			ret = u3phy_config(1);
            break;
        case 2:
			U2PHY_PowerOn(1);
			u2phy_config();
            break;
        case 3:
			U2PHY_PowerOn(2);
			u2phy_config();
            break;
        default :
            printk("mtk_usb_PowerUp(%d). arg error\n",portnum);
            return -1;
            break;
    }
    mdelay(1);
	/*do something*/
	return 0;
}

void U2PHY_PowerDown(u32 port)
{
	/*==========Port, ADDR, Value, Mask, OFST============*/
	rw_uphy_reg(port, 0x31C, 0x1, 0x1, 12); //RG_USB20_PUPD_BIST_EN
	rw_uphy_reg(port, 0x368, 0x1, 0x1, 2);  //RG_TERMSEL
	rw_uphy_reg(port, 0x368, 0x1, 0x1, 17); //force_termsel
	rw_uphy_reg(port, 0x31C, 0x0, 0x1, 18); //RG_USB20_TMODE_FS_LS_TX_EN
	rw_uphy_reg(port, 0x31C, 0x1, 0x1, 19); //RG_USB20_USB11_TMODE_EN
	rw_uphy_reg(port, 0x368, 0x1, 0x1, 18); //force_suspendm
	rw_uphy_reg(port, 0x314, 0x0, 0x1, 28); //RG_USB_DISC_FIT_EN
	rw_uphy_reg(port, 0x318, 0x3, 0x3, 9);  //RG_USB20_HSRX_BIAS_EN_SEL[1:0]
	rw_uphy_reg(port, 0x368, 0x1, 0x3, 4);  //RG_XCVR_SEL
	rw_uphy_reg(port, 0x368, 0x1, 0x1, 19); //force_xcvrsel
	rw_uphy_reg(port, 0x31C, 0x2, 0x3, 24); //RG_USB20_HSTX_I_EN_MODE
	rw_uphy_reg(port, 0x308, 0x0, 0x1, 17); //RG_SIFSLV_MAC_BANDGAP_EN
	rw_uphy_reg(port, 0x318, 0x1, 0x1, 23); //RG_USB20_BC11_SW_EN

}

void U2PHY_PowerOn(u32 port)
{
	/*==========Port, ADDR, Value, Mask, OFST============*/
	rw_uphy_reg(port, 0x318, 0x0, 0x1, 23); //RG_USB20_BC11_SW_EN
	rw_uphy_reg(port, 0x308, 0x1, 0x1, 17); //RG_SIFSLV_MAC_BANDGAP_EN
	rw_uphy_reg(port, 0x31C, 0x0, 0x3, 24); //RG_USB20_HSTX_I_EN_MODE
	rw_uphy_reg(port, 0x368, 0x0, 0x1, 19); //force_xcvrsel
	rw_uphy_reg(port, 0x368, 0x0, 0x3, 4);  //RG_XCVR_SEL
	rw_uphy_reg(port, 0x318, 0x2, 0x3, 9);  //RG_USB20_HSRX_BIAS_EN_SEL[1:0]
	rw_uphy_reg(port, 0x314, 0x1, 0x1, 28); //RG_USB_DISC_FIT_EN
	rw_uphy_reg(port, 0x368, 0x0, 0x1, 18); //force_suspendm
	rw_uphy_reg(port, 0x31C, 0x0, 0x1, 19); //RG_USB20_USB11_TMODE_EN
	rw_uphy_reg(port, 0x31C, 0x1, 0x1, 18); //RG_USB20_TMODE_FS_LS_TX_EN
	rw_uphy_reg(port, 0x368, 0x0, 0x1, 17); //force_termsel
	rw_uphy_reg(port, 0x368, 0x0, 0x1, 2);  //RG_TERMSEL
	rw_uphy_reg(port, 0x31C, 0x0, 0x1, 12); //RG_USB20_PUPD_BIST_EN
}

void U3PHY_PowerDown(u32 port)
{
	/*==========Port, ADDR, Value, Mask, OFST============*/
	rw_uphy_reg(port, 0x80C, 0x1, 0x1, 29); //force_ssusb_ip_sw_rst
	mdelay(1);
	rw_uphy_reg(port, 0x80C, 0x1, 0x1, 31); //reg_ssusb_ip_sw_rst
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x314, 0x1, 0x1, 4); //rg_da_qp_rx_hz_force
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x314, 0x1, 0x1, 5); //rg_da_qp_rx_hz_sel
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x038, 0x0, 0x1, 8); //RG_VUSB10_ON
}

void U3PHY_PowerOn(u32 port)
{
	int ret = -1;

	/*==========Port, ADDR, Value, Mask, OFST============*/
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x038, 0x1, 0x1, 8); //RG_VUSB10_ON
	mdelay(1);
	rw_uphy_reg(port, 0x80C, 0x0, 0x1, 31); //reg_ssusb_ip_sw_rst
	mdelay(1);
	rw_uphy_reg(port, 0x80C, 0x0, 0x1, 29); //force_ssusb_ip_sw_rst
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x314, 0x0, 0x1, 4); //rg_da_qp_rx_hz_force
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x314, 0x0, 0x1, 5); //rg_da_qp_rx_hz_sel

}

/************************************************************************
*     P R O C - Declared Function
*************************************************************************
*/
static struct proc_dir_entry *phy_proc_dir = NULL, *phy_proc = NULL;


static int phy_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char val_string[64], cmd[64];
	int value1 = 0, value2 = 0, value3 = 0;

	memset(val_string, 0, (sizeof(char) * 64));
	memset(cmd, 0, (sizeof(char) * 64));

	if (count > sizeof(val_string) - 1)
		return -EINVAL;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	sscanf(val_string, "%s %d %d %d", cmd, &value1, &value2, &value3);

	if (!strcmp(cmd, "EyeScan")) //command => echo EyeScan 1 0 > /proc/usb_phy/debug
	{
		RX_Eye_Scan(value1, value2); //(port, interface) port = 1/2; interface = 0(5G)/1(2.5G)/2(3.125G)/3(1.25G)
	}
	else if (!strcmp(cmd, "USB_PowerDown"))
	{
		mtk_usb_PowerDown(value1);
	}
	else if (!strcmp(cmd, "USB_PowerUp"))
	{
		mtk_usb_PowerUp(value1);
	}

	return count;
}

int phy_debug_init(void)
{
	int ret = -1;
	/* create proc node */
	phy_proc_dir = proc_mkdir("usb_phy", NULL);
	if (phy_proc_dir) {
		phy_proc = create_proc_entry("debug", 0, phy_proc_dir);
		if (phy_proc) {
			phy_proc->write_proc = phy_write_proc;
			//phy_proc->read_proc = phy_read_proc;
			return 0;
		}
	}

	return ret;
}

int phy_debug_deinit(void)
{
	if (phy_proc) {
		remove_proc_entry("debug", phy_proc_dir);
	}

	return 0;
}

/************************************************************************
*     RX Eye Scan
*************************************************************************
*/
u32 read_u3_common_phy_bit(u32 port, u32 base, u16 reg, u32 mask, u32 offset)
{
	u32	data = get_u3_common_phy_reg(port, base, reg);
	if (data == 0xdeadbeef)
		return data;

	return ((data >> offset) & mask);
}

void QP_SSUSB_T2R(u32 port)
{
	u32 temp = 0;

	rw_u3_common_phy_reg(port, qp_usb_pma, 0x300, 0x1, 0x1, 20); //tx_cmdet_force
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x300, 0x1, 0x1, 21); //tx_cmdet_sel
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x690, 0x1, 0x1, 12); //prbs_case
	mdelay(1);
	//to make power_st in P0
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 0x1, 0x1, 10); //pcie_power_st_sel
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 0x0, 0x3, 11); //pcie_power_st
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x000, 0x0, 0xF, 12); //rd_wait_time
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_ana, 0x004, 0x0, 0x1, 10); //CDR_PD_EDGE_DIS
	mdelay(1);

	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6C0, 0x3, 0x3, 22); //qp_reserve_6[7:6]
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x65C, 0x1, 0x1, 29); //qp_reserve_3[5:5]
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x040, 0x1, 0x1, 14); //force_tx_detrx_out
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x040, 0x1, 0x1, 15); //force_tx_detrx_out_val
	mdelay(1);
	//TX test mode
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x00C, 0x1, 0x1, 0); //tx_data_test_mode
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x00C, 0x0, 0x1, 31); //ssusb_tx_ser_en_sel
	mdelay(1);
	//RX Speed up
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x654, 0x1, 0x1, 0); //force_freq_lock_sel
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x654, 0x1, 0x1, 1); //force_freq_lock
	mdelay(1);
	//trigger PRBS EN
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x028, 0x1, 0x1, 3); //bistctl_pat_tx_en
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x028, 0x1, 0x1, 4); //bistctl_pat_rx_check_en
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x028, 0x0, 0x1, 5); //bistctl_bit_error_rst_sel
	mdelay(1);

	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x820, 0x1, 0); //ro_bistctl_prbs_done
	printk("PRBS DONE = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x820, 0x1, 1); //ro_bistctl_prbs_fail
	printk("PRBS FAIL = 0x%x\n", temp);

}

void Read_EQ(u32 port)
{
	u32 LEQ_STOP = 0;
	unsigned int temp = 0;

	LEQ_STOP = read_u3_common_phy_bit(port, qp_usb_pma, 0x13C, 0x01, 1); //LEQ_STOP
	if (LEQ_STOP == 1)
	{
		printk("LEQ Auto training done\n");
		temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x148, 0x0F, 8); //DCLEQ
		printk("DCLEQ = 0x%x\n", temp);
	}

	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x6D0, 0x0F, 11); //ro_qp_reserve_5[6:3]
	printk("ro_qp_reserve_5[6:3] = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x140, 0x7F, 0); //DCD0H
	printk("DCDOH = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x140, 0x7F, 8); //DCD0L
	printk("DCDOL = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x140, 0x7F, 16); //DCD1H
	printk("DCD1H = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x140, 0x7F, 24); //DCD1L
	printk("DCD1L = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x144, 0x7F, 0); //DCE0
	printk("DCE0 = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x144, 0x7F, 8); //DCE1
	printk("DCE1 = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x148, 0x7F, 0); //DCHHL
	printk("DCHHL = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x148, 0x7F, 24); //DCLHL
	printk("DCLHL = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x144, 0x7F, 16); //DCEYE0
	printk("DCEYE0 = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x144, 0x7F, 24); //DCEYE1
	printk("DCEYE1 = 0x%x\n", temp);
	temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x148, 0x1F, 16); //DCLEQOS
	printk("DCLEQOS = 0x%x\n", temp);

}

u32 Get_PI_OS_Cal(u32 port, u8 en)
{
	u32 temp = 0;

	if (en == 0)
	{
		return read_u3_common_phy_bit(port, qp_usb_pma, 0x350, 0x7F, 16); //PR_PIEYE
	} 
	else
	{
		rw_u3_common_phy_reg(port, qp_usb_pma, 0x64C, 0x1, 0x1, 2); //RG_FORCE_RX_PI_CAL_EN_SEL
		rw_u3_common_phy_reg(port, qp_usb_pma, 0x64C, 0x0, 0x1, 3); //RG_FORCE_RX_PI_CAL_EN
		rw_u3_common_phy_reg(port, qp_usb_pma, 0x64C, 0x1, 0x1, 3); //RG_FORCE_RX_PI_CAL_EN
		mdelay(1);
		rw_u3_common_phy_reg(port, qp_usb_pma, 0x64C, 0x0, 0x1, 3); //RG_FORCE_RX_PI_CAL_EN
		rw_u3_common_phy_reg(port, qp_usb_pma, 0x64C, 0x0, 0x1, 2); //RG_FORCE_RX_PI_CAL_EN_SEL

		temp = read_u3_common_phy_bit(port, qp_usb_pma, 0x660, 0x1, 12); //QPHY_RX_CTRL_DEBUG_1[4] = LCK2REF
		printk("LCK2REF = 0x%x\n", temp);

		return read_u3_common_phy_bit(port, qp_usb_pma, 0x350, 0x7F, 16); //PR_PIEYE
	}
}

u32 Get_DAC_OS_Cal(u32 port)
{
	return read_u3_common_phy_bit(port, qp_usb_pma, 0x154, 0xFF, 16); //RGS_SSUSB_EQ_STATUS
}

void RX_Eye_Scan_Setting(u32 port, u8 osr)
{
	u32 eye_mask = 0;

	if((osr % 2) == 0)
		eye_mask = 0x155;
	else
		eye_mask = 0x2AA;

	rw_u3_common_phy_reg(port, qp_usb_pma, 0x120, eye_mask, 0x3FF, 0); //RG_QP_EQ_EYE_MASK
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x100, 0x0, 0x1, 8); //RG_QP_EQ_EYE_CNT_EN
}

 
void y_code_force_sel(u32 port, u8 en)
{
	u8 val = 0;
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x130, en, 0x1, 24); //RG_QP_EQ_REV (DAC value forece sel) 

	if (en == 0)
		val = 0x0;
	else
		val = 0x11;
	
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x124, val, 0x1F, 16); //RG_QP_EQ_MON_SEL
	mdelay(1);
}

void y_code_write(u32 port, int y)
{
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x108, y, 0x7F, 16); //RG_QP_EQ_DEYE0OS_LFI
	mdelay(1);
}

void x_code_force_sel(u32 port, u8 en)
{
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x100, en, 0x1, 9); //RG_QP_EQ_EYE_MON_EN
	mdelay(1);
}

void x_code_write(u32 port, int x)
{
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x120, x, 0x7F, 16); //RG_QP_EQ_EYE_XOFFSET
	mdelay(1);
}

u32 x_code_move(u32 port, int x, int step, u8 osr)
{
	u8 i = 0;
	int temp = 0;

	for (i = 0; i < osr; i++)
	{
		x = x + step;
		if (x > 127)
			x = x - 128;
		else if (x < 0)
			x = x + 128;
		
		temp = x;
		x_code_write(port, temp);
	}

	return temp;
}

u32 Read_Error_Cnt(u32 port, int x, int y, u8 osr)
{
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x108, y, 0x7F, 16); //RG_QP_EQ_DEYE0OS_LFI
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x100, 0x01, 0x1, 8); //RG_QP_EQ_EYE_CNT_EN
	mdelay(1);
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x100, 0x00, 0x1, 8); //RG_QP_EQ_EYE_CNT_EN

	if ((osr % 2) == 0)
		return read_u3_common_phy_bit(port, qp_usb_pma, 0x14C, 0xFFFFF, 0); //RG_SSUSB_EQ_EYE_MONITOR_ERRCNT_0
	else
		return read_u3_common_phy_bit(port, qp_usb_pma, 0x150, 0xFFFFF, 0); //RG_SSUSB_EQ_EYE_MONITOR_ERRCNT_1
}

void PIEYE_INIT(u32 port)
{
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 1, 0x1, 4); //rg_qp_force_usb_pcie_eye_pwd_sel
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x6E0, 0, 0x1, 5); //rg_qp_force_usb_pcie_eye_pwd
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x128, 0, 0x7F, 16); //RG_QP_EQ_PIEYE_INI
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x614, 0xFF, 0xFF, 0); //qp_rx_pi_cal_en_h_dly
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x400, 0, phya_auto_init_mask, phya_auto_init_ofst); //rg_phya_auto_init
	rw_u3_common_phy_reg(port, qp_usb_pma, 0x400, 1, phya_auto_init_mask, phya_auto_init_ofst); //rg_phya_auto_init
}

void RX_Eye_Scan(u32 port, u8 interface)
{
	u8 osr = 0, i = 0, j = 0;
	u32 pi_os_cal = 0, dac_os_cal = 0, err_cnt = 0;
	int x_step = 1, y_step = 1, x_code = 0, y_code = 0;
	
	switch(interface)
	{
		case 0: //5G
			osr = 1;
			break;
		case 1: //2.5G
			osr = 2;
			break;
		case 2: //3.125G
			osr = 2;
			break;
		case 3: //1.25G
			osr = 4;
			break;
		default:
			printk("RX_Eye_Scan Interface is not supported\n");
			break;
	}

	PIEYE_INIT(port);
	mdelay(1);
	QP_SSUSB_T2R(port);
	RX_Eye_Scan_Setting(port, osr);
	Read_EQ(port);
	x_code_force_sel(port, 0);
	y_code_force_sel(port, 0);
	pi_os_cal = Get_PI_OS_Cal(port, 1);
	dac_os_cal = Get_DAC_OS_Cal(port);

	x_code = pi_os_cal;
	printk("pi_os_cal = %d\n", x_code);
	y_code = 64; //signed = -64

	x_code_write(port, x_code);
	y_code_write(port, y_code);
	x_code_force_sel(port, 1);
	y_code_force_sel(port, 1);

	printk("osr = %d\n", osr);
	printk("data start\n");
	//Move PI_Cal to -64
	for(i = 0; i < 64; i++)
	{
		x_code = x_code_move(port, x_code, -x_step, osr);
		mdelay(1);
	}

	for (i = 0; i < 128; i++)
	{
		for (j = 0; j < 128; j++) //start from -64 to 63
		{
			err_cnt = Read_Error_Cnt(port, x_code, y_code, osr);
			printk("%03d ", err_cnt);
			if (((j + 1) % 32) == 0)
				printk("z\n");
			
			if (j != 127) //prepare to reverse y
			{
				y_code = y_code + y_step;
				if (y_code > 127)
					y_code = y_code - 128; //y_code = 64 -> -64, y_code = 65 -> -63, y_code = 127 -> -1
				else if (y_code < 0)
					y_code = y_code + 128;
			}
		}
		printk("x=%d\n", x_code);
		schedule();

		if (i != 127)
		{
			y_step = -y_step;
			x_code = x_code_move(port, x_code, x_step, osr);
		}	
	}
}

/************************************************************************
*     Read SSUSB Efuse
*************************************************************************
*/
void Read_SSUSB_EFUSE(void)
{
	u32 USB_efuse_vaild = 0, SSUSB_TX_TERM_SEL = 0, SSUSB_RX_IMP_SEL = 0, USB20_P0_INTR_CTRL = 0, USB20_P1_INTR_CTRL = 0;

	USB_efuse_vaild = get_phy_efuse(SerDes_USB_efuse_valid_LSB, 3); //[34:36]
	printk("USB efuse vaild = 0x%x\n", USB_efuse_vaild);

	if ((USB_efuse_vaild & 0x03) == 0x03) //Port 0 and Port 1
	{
		SSUSB_TX_TERM_SEL = get_phy_efuse(DA_QP_SSUSB_TX_TERM_SEL_LSB, 2); //[47:48]
		SSUSB_RX_IMP_SEL = get_phy_efuse(DA_QP_SSUSB_TX_TERM_SEL_LSB, 5);  //[49:53]
		USB20_P0_INTR_CTRL = get_phy_efuse(RG_USB20_P0_INTR_CTRL_LSB, 5);  //[89:93]
		USB20_P1_INTR_CTRL = get_phy_efuse(RG_USB20_P1_INTR_CTRL_LSB, 5);  //[94:98]

		printk("SSUSB_TX_TERM_SEL = 0x%x\n", SSUSB_TX_TERM_SEL);
		printk("SSUSB_RX_IMP_SEL = 0x%x\n", SSUSB_RX_IMP_SEL);
		printk("USB20_P0_INTR_CTRL = 0x%x\n", USB20_P0_INTR_CTRL);
		printk("USB20_P1_INTR_CTRL = 0x%x\n", USB20_P1_INTR_CTRL);

		if (SSUSB_TX_TERM_SEL != 0xFFFFFFFF)
		{
			rw_u3_common_phy_reg(1, qp_usb_pma, 0x320, 0x1, 0x1, 7); //rg_da_qp_tx_term_sel_sel
			rw_u3_common_phy_reg(1, qp_usb_pma, 0x320, SSUSB_TX_TERM_SEL, 0x3, 5); //rg_da_qp_tx_term_sel_force
		}

		if (SSUSB_RX_IMP_SEL != 0xFFFFFFFF)
		{
			rw_u3_common_phy_reg(1, qp_usb_pma, 0x324, 0x1, 0x1, 31);   //rg_da_qp_rx_imp_sel_sel
			rw_u3_common_phy_reg(1, qp_usb_pma, 0x324, SSUSB_RX_IMP_SEL, 0x1F, 26);  //rg_da_qp_rx_imp_sel_force
		}

		if (USB20_P0_INTR_CTRL != 0xFFFFFFFF)
		{
			rw_uphy_reg(1, 0x0304, USB20_P0_INTR_CTRL, 0x1F, 19); //RG_USB20_INTR_CAL
		}

		if (USB20_P1_INTR_CTRL != 0xFFFFFFFF)
		{
			rw_uphy_reg(2, 0x0304, USB20_P1_INTR_CTRL, 0x1F, 19); //RG_USB20_INTR_CAL
		}
		printk("Read USB efuse vaild\n");
	}
	else
	{
		printk("Read USB efuse invaild\n");
	}
}


#endif
