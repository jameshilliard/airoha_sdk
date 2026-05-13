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
#include <linux/kernel.h>
#include <asm/io.h>
#include "ecnt_sgmii.h"
#include <ecnt_event_global/ecnt_event_system.h>

/* ***********************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************

*/
extern void SET_SSR3(u32 val);
extern u32 GET_SSR3(void);
extern u32 get_chip_scu_data(u32 reg);
extern void set_chip_scu_data(u32 reg, u32 val);

extern int sgmii_api_force_mode(sgmii_port_type port, sgmii_speed_type speed);
extern void sgmii_ver(void);


/*
*/
/*=========================================================================
**   tcephydbgcmd: register rootcommand of "ether ". 
**           call: call by femac.c/mainInit(), tc3262_gmac_init
**=========================================================================*/
static void _reg_covert_port( sgmii_port_type port_id, sgmii_reg_type reg_id, u32 *reg );
static void _reg_covert_irq( int irq, sgmii_reg_type type, u32 *reg );
static u32 cmd_ro(int irq, sgmii_reg_type type, u32 reg);
static void cmd_wo(int irq, sgmii_reg_type type, u32 reg, u32 val);
static irqreturn_t sgmii_interrupt(int irq, void *dev_id);
static void sgmii_int_register(sgmii_base *sgmii, int int_id);
static void sgmii_int_init(int irq);
static void sgmii_triphy_gain(int irq); //EN7523_YT_20211020_001
static void sgmii_init(int irq);
static int ecnt_sgmii_drv_probe(struct platform_device *pdev);
static int ecnt_sgmii_drv_remove(struct platform_device *pdev);
static int sgmii_serdes_sel(int irq);

/************************************************************************
*                  STATIC VARIABLE DECLARATIONS
*************************************************************************
*/

sgmii_port sgmiiTOP;

static const struct of_device_id ecnt_sgmii_of_id[] = {
    { .compatible = "econet,ecnt-sgmii"},
    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, ecnt_sgmii_of_id);
/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/

/* APIs */

u32 sgmii_cmd_ro(sgmii_port_type port_id, sgmii_reg_type type, u32 reg)
{
	//printk("sgmii_ex:cmd_ro in\n");
	_reg_covert_port(port_id, type, &reg);
	u32 val_t = readl(reg);
	//printk("sgmii_ex:cmd_ro:reg_t=%x, val=%x\n",reg,val_t);	
	return val_t;
}
EXPORT_SYMBOL(sgmii_cmd_ro);

void sgmii_cmd_wo(sgmii_port_type port_id, sgmii_reg_type type, u32 reg, u32 val)
{	
	//printk("sgmii_ex:cmd_wo in\n");
	_reg_covert_port(port_id, type, &reg);
	
	//printk("sgmii_ex:cmd_wo:reg_t=%x, val=%x\n",reg,val);	
	writel(val, reg);
 
}
EXPORT_SYMBOL(sgmii_cmd_wo);
/**/
/*****************************************************************
 ****  N P    S C U    a c c e s s ********************************
 ******************************************************************/
 static int sgmii_serdes_sel(int irq)
{
	printk("sgmii: sgmii_serdes_sel\n");
	
	//get port ----------------------------------
	u32 SSR3_mask_dis, SSR3_mask_en, SCU_mask_phy_dis, SCU_mask_phy_en, SCU_mask_fe_dis, SCU_mask_fe_en, SCU_ctrl;
	sgmii_port *sgmii_top= &sgmiiTOP;
	int serdes_ret, power_ret;
	sgmii_port_type port_id;
	if(sgmii_top->pcie0.irq != NULL && irq == sgmii_top->pcie0.irq){
		printk("sgmii: pcie0: ");
#ifdef TCSUPPORT_CPU_EN7581
		/* ToDO */
#else
		serdes_ret = get_serdes_interface_sel(ECNT_EVENT_PCIE0_HSGMII);
		power_ret = serdes_ret | get_serdes_interface_sel(ECNT_EVENT_PCIE1_HSGMII);
#endif
		SSR3_mask_en= 0x7FFFFFFF;
		SSR3_mask_dis = 0x80000000;
		SCU_ctrl = 0;
		SCU_mask_phy_en = 0x800000;
		SCU_mask_phy_dis = 0xFF7FFFFF;
		SCU_mask_fe_en = 0x80000;
		SCU_mask_fe_dis = 0xFFF7FFFF;
	}
	else if(sgmii_top->pcie1.irq != NULL && irq == sgmii_top->pcie1.irq){
		printk("sgmii: pcie1: ");
#ifdef TCSUPPORT_CPU_EN7581
		/* ToDO */
#else
		serdes_ret = get_serdes_interface_sel(ECNT_EVENT_PCIE1_HSGMII);
		power_ret = serdes_ret | get_serdes_interface_sel(ECNT_EVENT_PCIE0_HSGMII);
#endif
		SSR3_mask_en = 0xBFFFFFFF;
		SSR3_mask_dis = 0x40000000;
		SCU_ctrl = 1;
		SCU_mask_phy_en = 0x800000;
		SCU_mask_phy_dis = 0xFF7FFFFF;
		SCU_mask_fe_en = 0x80000;
		SCU_mask_fe_dis = 0xFFF7FFFF;
	}
	else if(sgmii_top->usb0.irq != NULL && irq == sgmii_top->usb0.irq){
		printk("sgmii: usb0: ");
#ifdef TCSUPPORT_CPU_EN7581
		/* ToDO */
#else
		serdes_ret = get_serdes_interface_sel(ECNT_EVENT_USB3_HSGMII);
#endif
		power_ret = serdes_ret;
		SSR3_mask_en = 0xDFFFFFFF;
		SSR3_mask_dis = 0x20000000;
		SCU_ctrl = 1;
		SCU_mask_phy_en = 0x400000;
		SCU_mask_phy_dis = 0xFFBFFFFF;
		SCU_mask_fe_en = 0x40000;
		SCU_mask_fe_dis = 0xFFFBFFFF;
	}
	else{
		printk("sgmii: unknow_port: ");
		return -1;
		//PON
		//		SCU_mask_en = 0x4000;
		//SCU_mask_dis = 0xFFFFBFFF;
	}
	
	
	//config port ----------------------------------------
	u32 val_default = 0;
	if(serdes_ret == 1){
		printk("enable!\n");
		
		//enable hsgmii mode
		val_default = GET_SSR3();
		SET_SSR3(val_default & SSR3_mask_en);
		
		//val_default = get_chip_scu_data(0x1e4);
		//set_chip_scu_data(0x1e4, val_default | SCU_mask_phy_en);
		//val_default = get_chip_scu_data(0x1e8);
		//set_chip_scu_data(0x1e8, val_default | SCU_mask_fe_en);
		
		//release rst_hsgmii_clk
		//cmd_wo(irq, SGMII_REG_PHYA, SGMII_REG_PHYA_81, 0x0);
	}
	else if(serdes_ret == 0){
		printk("close!\n");
		//close hsgmii mode
		//val_default = GET_SSR3();
		//SET_SSR3(val_default | SSR3_mask_dis);
		
		//power_save => close hsgmii (pcie1 master, pcie0 slaver)
		if(SCU_ctrl == 1 && power_ret==0)
		{
			//rst_hsgmii_clk
			cmd_wo(irq, SGMII_REG_PHYA, SGMII_REG_PHYA_81, 0x3fff000);
			
			val_default = get_chip_scu_data(0x1e4);
			set_chip_scu_data(0x1e4, val_default & SCU_mask_phy_dis);
			val_default = get_chip_scu_data(0x1e8);
			set_chip_scu_data(0x1e8, val_default & SCU_mask_fe_dis);
		}
		
		
		
	}
	else{
		printk("ret error!\n");
	}
	
	printk("sgmii: sgmii_serdes_sel: exit!\n");
	return serdes_ret;
	
}
 
 
 static void _reg_covert_port( sgmii_port_type port_id, sgmii_reg_type reg_id, u32 *reg )
{
	//printk("sgmii: covert:inin!\n");
	
	sgmii_port *sgmii_top= &sgmiiTOP;
   	sgmii_base *sgmii = NULL;
	
	//get port
	switch(port_id)
	{
		case SGMII_PORT_PCIE0:
			sgmii = &sgmii_top->pcie0;;
			break;
		case SGMII_PORT_PCIE1:
			sgmii = &sgmii_top->pcie1;
			break;
		case SGMII_PORT_USB0:
			sgmii = &sgmii_top->usb0;
			break;
		default:
			printk("sgmii: port type error\n");
			break;
	}
	
	
	//get base
	switch(reg_id)
	{
		case SGMII_REG_PCS1:
			*reg = sgmii->pcs1_base+((*reg) - PCS1_BASE_OFFSET);
			break;
		case SGMII_REG_PCS2:
			
			*reg = sgmii->pcs2_base+((*reg) - PCS2_BASE_OFFSET);
			break;
		case SGMII_REG_AN:
			*reg = sgmii->an_base+((*reg) - AN_BASE_OFFSET);
			break;
		case SGMII_REG_RATEADAPT:
			*reg = sgmii->ra_base+((*reg) - RATEADAPT_BASE_OFFSET);
			break;
		case SGMII_REG_PHYA:
			*reg = sgmii->phya_base+((*reg) - PHYA_BASE_OFFSET);
			break;
		default:
			printk("sgmii: reg type error\n");
			break;
	}
	//printk("sgmii: covert:exit!\n");
	
}


static void _reg_covert_irq( int irq, sgmii_reg_type type, u32 *reg )
{
	//printk("sgmii: covert:inin!\n");
	
	sgmii_port *sgmii_top= &sgmiiTOP;
   	sgmii_base *sgmii = NULL;
	
	//get port
	if(sgmii_top->pcie0.irq != NULL && irq == sgmii_top->pcie0.irq){
		//printk("sgmii:p0\n");
		sgmii = &sgmii_top->pcie0;
	}
	else if(sgmii_top->pcie1.irq != NULL && irq == sgmii_top->pcie1.irq){
		//printk("sgmii:p1\n");
		sgmii = &sgmii_top->pcie1;
	}
	else if(sgmii_top->usb0.irq != NULL && irq == sgmii_top->usb0.irq){
		//printk("sgmii:u0\n");
		sgmii = &sgmii_top->usb0;
	}
	else{
		printk("sgmii:reg_covert: irq error!\n");
	}
	
	//get base
	switch(type)
	{
		case SGMII_REG_PCS1:
			*reg = sgmii->pcs1_base+((*reg) - PCS1_BASE_OFFSET);
			break;
		case SGMII_REG_PCS2:
			*reg = sgmii->pcs2_base+((*reg) - PCS2_BASE_OFFSET);
			break;
		case SGMII_REG_AN:
			*reg = sgmii->an_base+((*reg) - AN_BASE_OFFSET);
			break;
		case SGMII_REG_RATEADAPT:
			*reg = sgmii->ra_base+((*reg) - RATEADAPT_BASE_OFFSET);
			break;
		case SGMII_REG_PHYA:
			*reg = sgmii->phya_base+((*reg) - PHYA_BASE_OFFSET);
			break;
		default:
			printk("sgmii: type error\n");
			break;
	}
	//printk("sgmii: covert:exit!\n");

}


static u32 cmd_ro(int irq, sgmii_reg_type type, u32 reg)
{
	//u32 reg_t = reg;
	_reg_covert_irq(irq, type, &reg);
	
	uint32 val_t = readl(reg);
	
	printk("sgmii:cmd_ro:reg_t=%x, val=%x\n",reg,val_t);	
	return val_t;
}

static void cmd_wo(int irq, sgmii_reg_type type, u32 reg, u32 val)
{	
	//u32 reg_t = reg;
	_reg_covert_irq(irq, type, &reg);
	
	printk("sgmii:cmd_wo:reg_t=%x, val=%x\n",reg,val);	
	writel(val, reg);

 
}
static void sgmii_triphy_gain(int irq)//EN7523_YT_20211020_001
{
	HAL_RG_TOP rg;
	uint32 data_t = cmd_ro(irq, SGMII_REG_PHYA, SGMII_REG_PHYA_6);
	rg.phya.sgmii_reg_phya_6 = &data_t;
	rg.phya.sgmii_reg_phya_6->rg_force_idrv_0db = 1;
	cmd_wo(irq, SGMII_REG_PHYA, SGMII_REG_PHYA_6, data_t);

	data_t = cmd_ro(irq, SGMII_REG_PHYA, SGMII_REG_PHYA_9);
	rg.phya.sgmii_reg_phya_9 = &data_t;
	rg.phya.sgmii_reg_phya_9->rg_ssusb_idrv_0db = 0b011101;
	cmd_wo(irq, SGMII_REG_PHYA, SGMII_REG_PHYA_9, data_t);  
}

static void sgmii_init(int irq)
{

	printk("sgmii: init\n");
	
	int ret_sel = sgmii_serdes_sel(irq);
	if(ret_sel == 1)
	{
		sgmii_triphy_gain(irq);//EN7523_YT_20211020_001
		sgmii_int_init(irq);
	}
	
	printk("sgmii: init_exit\n");
	//writel(0x402, sgmii->pcs2_base + 0x020);
}

static void sgmii_int_init(int irq)
{

	printk("sgmii: int_init called\n");
	//enable lof & phyrdy int
	HAL_RG_TOP rg;
	
	uint32 data_t = 0x00000000;
	rg.pcs2.rg_hsgmii_mode_interrupt = &data_t;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_done_int                  =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_done_int             =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_cl37_timerdone_int        =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_loss_int             =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_done_int_clear            =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_done_int_clear       =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_loss_int_clear       =0x0;
	cmd_wo(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_MODE_INTERRUPT, data_t);
	printk("sgmii: sync_int exit\n");
	//writel(0x402, sgmii->pcs2_base + 0x020);
}


static void sgmii_int_register(sgmii_base *sgmii, int int_id)
{
	printk("sgmii:int_register: inin!\n");
	/* register irq */
	sgmii_port *sgmii_top = &sgmiiTOP;
	sgmii_base *sgmii_base = NULL;
	/* register sgmii_port */
	switch(int_id)
	{
		case SGMII_PORT_PCIE0:
			sgmii_base = &sgmii_top->pcie0;
			break;
		
		case SGMII_PORT_PCIE1:
			sgmii_base = &sgmii_top->pcie1;
			break;
		
		case SGMII_PORT_USB0:
			sgmii_base = &sgmii_top->usb0;
			break;
		
		default:
			printk("sgmii:int_register: error!");
		break;
	}
	
	sgmii_base->dev       = sgmii->dev;
	sgmii_base->pcs1_base = sgmii->pcs1_base;
	sgmii_base->pcs2_base = sgmii->pcs2_base;
	sgmii_base->an_base   = sgmii->an_base;
	sgmii_base->ra_base   = sgmii->ra_base;
	sgmii_base->phya_base   = sgmii->phya_base;
	sgmii_base->irq       = sgmii->irq;
	printk("sgmii:sgmii->pcs1_base= %x\n",sgmii->pcs1_base);
	printk("sgmii:sgmii->pcs2_base= %x\n",sgmii->pcs2_base);
	printk("sgmii:sgmii->an_base=   %x\n",sgmii->an_base);
	printk("sgmii:sgmii->ra_base=   %x\n",sgmii->ra_base);
	printk("sgmii:sgmii->phya_base=   %x\n",sgmii->phya_base);
	printk("sgmii:int_register: exit!\n");
}

static irqreturn_t sgmii_interrupt(int irq, void *dev_id)
{

	printk("sgmii: an_int called\n");
	printk("sgmii: irq=%d\n",irq);

	HAL_RG_TOP rg;
	uint32 data_t;
	
	/* clear int */
	data_t = 0x00000000;
	rg.pcs2.rg_hsgmii_mode_interrupt = &data_t;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_done_int                  =0x1;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_done_int             =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_cl37_timerdone_int        =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_loss_int             =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_done_int_clear            =0x1;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_done_int_clear       =0x1;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x1;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_loss_int_clear       =0x1;
	cmd_wo(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_MODE_INTERRUPT, data_t);
        
	/* set int */
	data_t = 0x00000000;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_done_int                  =0x1;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_done_int             =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_cl37_timerdone_int        =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_loss_int             =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_done_int_clear            =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_done_int_clear       =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_an_cl37_timerdone_int_clear  =0x0;
	rg.pcs2.rg_hsgmii_mode_interrupt->rg_hsgmii_mode2_rx_sync_loss_int_clear       =0x0;
	cmd_wo(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_MODE_INTERRUPT, data_t);
	
	/* get an */
	printk("sgmii:set_rateadapt\n");
	data_t = cmd_ro(irq, SGMII_REG_AN, SGMII_REG_AN_5);
	printk("sgmii: get_an_dump=%x\n",data_t);
	uint32 speed_t = (data_t >> 10) & 0x3;	//get speed bit:11_10 
	printk("sgmii:speed=%d\n",speed_t);
	
	
	/* rateadapt set */
	data_t = 0x00000000;
	rg.ra.rg_rate_adapt_ctrl_0 = &data_t;
	rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_tx_en					=0x1;
	rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_rx_en					=0x1;
	rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_tx_usxgmii_pch_mode	=0x1;
	rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_rx_usxgmii_pch_mode	=0x1;
	switch(speed_t)
	{
		case 0x0: //10M
			printk("sgmii:10M\n");
			cmd_wo(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_PCS_CTROL_6, 0xb);
			rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_tx_bypass		=0x0;
			rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_rx_bypass		=0x0;
			break;
		case 0x1: //100M
			printk("sgmii:100M\n");
			cmd_wo(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_PCS_CTROL_6, 0x7);
			rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_tx_bypass		=0x0;
			rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_rx_bypass		=0x0;
			break;
		case 0x2: //1G
			printk("sgmii:1G\n");
			cmd_wo(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_PCS_CTROL_6, 0x3);
			rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_tx_bypass		=0x1;
			rg.ra.rg_rate_adapt_ctrl_0->rg_rate_adapt_rx_bypass		=0x1;
			break;
		default:
			printk("sgmii:int_an=%d, error!",speed_t);
			break;
	}
	cmd_wo(irq, SGMII_REG_RATEADAPT, SGMII_RG_RATE_ADAPT_CTRL_0, data_t);
	data_t = cmd_ro(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_PCS_CTROL_6);
	data_t = cmd_ro(irq, SGMII_REG_RATEADAPT, SGMII_RG_RATE_ADAPT_CTRL_0);
	
	
	/* read interrupt */
	data_t = cmd_ro(irq, SGMII_REG_PCS2, SGMII_RG_HSGMII_PCS_INT_STATE);
	rg.pcs2.rg_hsgmii_pcs_int_state = &data_t;
	
	printk("sgmii:interrupt\n");
	printk("sgmii: an_done        =%x\n", rg.pcs2.rg_hsgmii_pcs_int_state->ro_hsgmii_mode2_an_done);
	printk("sgmii: rx_sync        =%x\n", rg.pcs2.rg_hsgmii_pcs_int_state->ro_hsgmii_mode2_rx_sync);
	printk("sgmii: cl37_timerdone =%x\n", rg.pcs2.rg_hsgmii_pcs_int_state->ro_hsgmii_mode2_an_cl37_timerdone_int);
	printk("sgmii: rx_sync_loss   =%x\n", rg.pcs2.rg_hsgmii_pcs_int_state->ro_hsgmii_mode2_rx_sync_loss);
	
	printk("sgmii: an_int exit\n");
	return IRQ_HANDLED;
}


static int ecnt_sgmii_drv_probe(struct platform_device *pdev)
{
	
	sgmii_base *sgmii = NULL;
	struct resource *res = NULL;
    sgmii_ver();
    printk("sgmii probe init\n");

    if (!pdev->dev.of_node) {
        dev_err(&pdev->dev, "No sgmii DT node found\n");
        return -EINVAL;
    }

    sgmii = devm_kzalloc(&pdev->dev, sizeof(*sgmii), GFP_KERNEL);
    if (!sgmii)
        return -ENOMEM;

    platform_set_drvdata(pdev, sgmii);

    /* get pcs1 base address */
    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    sgmii->pcs1_base = devm_ioremap_resource(&pdev->dev, res);
    if (IS_ERR(sgmii->pcs1_base))
        return PTR_ERR(sgmii->pcs1_base);
    	
    /* get pcs2 base address */	
	res = platform_get_resource(pdev, IORESOURCE_MEM, 1);
   	sgmii->pcs2_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(sgmii->pcs2_base))
	   return PTR_ERR(sgmii->pcs2_base);

	/* get AN base address */	
	res = platform_get_resource(pdev, IORESOURCE_MEM, 2);
   	sgmii->an_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(sgmii->an_base))
	   return PTR_ERR(sgmii->an_base);

	/* get RA base address */	
	res = platform_get_resource(pdev, IORESOURCE_MEM, 3);
   	sgmii->ra_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(sgmii->ra_base))
	   return PTR_ERR(sgmii->ra_base);
	
	/* get PHYA base address */	
	res = platform_get_resource(pdev, IORESOURCE_MEM, 4);
   	sgmii->phya_base = devm_ioremap_resource(&pdev->dev, res);
   	if (IS_ERR(sgmii->phya_base))
	   return PTR_ERR(sgmii->phya_base);
	
    sgmii->dev = &pdev->dev;

	/* get irq num */
	sgmii->irq = platform_get_irq(pdev, 0);
	if(sgmii->irq <= 0) {
		printk("\n get sgmii irq number failed\n");
		return sgmii->irq;
	}
	
	/* get property */
    int ret;
	
	//int_name
	const char *int_name;
	ret = of_property_read_string(pdev->dev.of_node, "int_name", &int_name);
	if(ret<0)
		printk("sgmii get propert error!");
	printk("sgmii:int_name: %s\n",int_name);

	//int_id
	uint32 int_id;
	ret = of_property_read_u32(pdev->dev.of_node, "int_id", &int_id);
	if(ret<0)
		printk("sgmii get propert error!\n");
	printk("sgmii:int_id: %d\n",int_id);
	
	
	/* request irq */
	ret = request_irq(sgmii->irq, sgmii_interrupt, 0, int_name, &pdev->dev);
	if(ret) {
		printk("\n request_irq() (irq number: %d) failed (ret: %d)\n", sgmii->irq, ret);
		return (ret);
	}
	
	/* register sgmii */
	sgmii_int_register(sgmii, int_id);
	
	/* init irq */
	//sgmii_int_init(sgmii->irq);
	sgmii_init(sgmii->irq);
	
    printk("sgmii probe init exit\n");
    return 0;
}


static int ecnt_sgmii_drv_remove(struct platform_device *pdev)
{
    return 0;
}




/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/
static struct platform_driver ecnt_sgmii_driver = {
    .probe = ecnt_sgmii_drv_probe,
    .remove = ecnt_sgmii_drv_remove,
    .driver = {
	    .name = "ecnt-sgmii",
	    .of_match_table = ecnt_sgmii_of_id
    },
};
module_platform_driver(ecnt_sgmii_driver);


MODULE_DESCRIPTION("EcoNet SGMII Driver");

