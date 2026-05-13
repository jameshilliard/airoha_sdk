/***************************************************************
Copyright Statement:

This software/firmware and related documentation (隆掳Airoha Software隆卤) 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to Airoha Limited (隆掳Airoha隆卤) and/or 
its licensors. Without the prior written permission of Airoha and/or its licensors, 
any reproduction, modification, use or disclosure of Airoha Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

Airoha Limited. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (隆掳AIROHA SOFTWARE隆卤) RECEIVED FROM AIROHA 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 隆掳AS IS隆卤 
BASIS ONLY. AIROHA EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES AIROHA PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE AIROHA SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVER隆炉S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN AIROHA SOFTWARE.

AIROHA SHALL NOT BE RESPONSIBLE FOR ANY AIROHA SOFTWARE RELEASES 
MADE TO RECEIVER隆炉S SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
AIROHA'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE AIROHA 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT AIROHA'S SOLE OPTION, TO 
REVISE OR REPLACE THE AIROHA SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO AIROHA FOR SUCH 
AIROHA SOFTWARE.
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
#include <linux/delay.h>
#include <asm/io.h>
#include "./H/pcie_ecnt_phy.h"
#include <ecnt_event_global/ecnt_event_system.h>


#include "./H/pxp_csr_ana_c_header.h"
#include "./H/ponxfi_csr_pma_c_header.h"
#include "./H/pextp_sifslv_dig_glb_p0_c_header.h"
#include "./H/pextp_sifslv_dig_ln0_rx_p0_c_header.h"
#include "./H/pextp_sifslv_dig_ln0_trx_p0_c_header.h"
#include "./H/pextp_sifslv_dig_ln0_tx_p0_c_header.h"
#include "./H/pextp_sifslv_dig_ln0_tx_da_coef_p0_c_header.h"
#include "./H/pextp_sifslv_dig_ln0_tx_lc_table_p0_c_header.h"

#include "./H/qp_ana_csr_c_header.h"
#include "./H/qp_dig_csr_c_header.h"
#include "./H/qp_pma_top_c_header.h"

#include "./H/PCIE_MAC0_c_header.h"

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
//#define IS_FPGA
#define LTSSM_PRINT 			1	//1:on; 0:off


/************************************************************************
*                  M A C R O S
*************************************************************************
*/
#define mask(bits, offset) (~((0xFFFFFFFF>>(32-bits))<<offset))


/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/
struct ecnt_pcie_phy {
	struct device *dev;
	void __iomem *pc_phy_base;
};

void __iomem *G3_ana_phy_rg_base; /* PCIEG3_PHY_PMA_PHYA physical address */
void __iomem *G3_pma_phy_rg_base; /* PCIEG3_PHY_PMA_PHYD_0 physical address */

void __iomem *QPCIe_ana_rg_base; /* QPHY_PCIe PHY analog physical address */
void __iomem *QPCIe_dig_rg_base; /* QPHY_PCIe PHY digital physical address */
void __iomem *QPCIe_pma_rg_base; /* QPHY_PCIe PHY pma physical address */

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
extern void __iomem* Get_Base(u32 base);
extern void regWrite_PCIe(u32 reg, u32 val);
extern u32 regRead_PCIe(u32 reg);
extern u32 get_phy_efuse(u32 start_bit, u32 len);
extern void gdump_7583_pcie_debug(u32 sel);
extern bool gdump_if_trigged(void);
extern void pon_Ext_T2R (int pon_Spd);
extern void pcie_Ext_T2R (int pon_Spd);
extern void Eth_Ser_Ext_T2R (int spd_sel);


/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S  (non static function in pcie-ecnt-phy.h)
*************************************************************************
*/
static void pcie_phy_init(unsigned int port_num);
static void pcie_PowerDown(unsigned int port_num);
static void pcie_PowerUp(unsigned int port_num);
static void pcie_PhyDebug(unsigned int sel);

/************************************************************************
*                  P U B L I C   D A T A
*************************************************************************
*/
struct ecnt_pcie_phy *pcie_phy = NULL;

u32 probe[CHECK_LEN];
unsigned int AEQ_cnt, OSCAL_COMPOS, FE_VOS, AEQ0_D0_OS, AEQ0_D1_OS, AEQ0_E0_OS, AEQ0_E1_OS, AEQ0_ERR0_OS, AEQ0_ERR1_OS, AEQ0_CTLE, sigdet_os;
u32 time[STATE_LEN], fll_probe_array[STATE_LEN], transition_cnt;
u32 dig_ro[20];

bool tx_det_en_flag = 0;
//unsigned int tmp1, OSCAL_COMPOS_1, FE_VOS_1, AEQ1_D0_OS, AEQ1_D1_OS, AEQ1_E0_OS, AEQ1_E1_OS, AEQ1_ERR0_OS, AEQ1_CTLE, sigdet_os_1;
//unsigned int fll_idac_1[CHECK_LEN], ro_idacf_1[CHECK_LEN], da_idac_1[CHECK_LEN], freq_1[CHECK_LEN], cor_gain_1[CHECK_LEN];


/************************************************************************
*                  P R I V A T E   D A T A
*************************************************************************
*/
static u32 debug_selector;

static const struct of_device_id ecnt_pcie_phy_of_id[] = {
    { .compatible = "econet,ecnt-pcie_phy"},
    { /* sentinel */}
};

static u32 debug_print = 0;
MODULE_DEVICE_TABLE(of, ecnt_pcie_phy_of_id);

static const struct pcie_phy_ops AN758X_ops = {
	.init		= pcie_phy_init,
	.PowerDown	= pcie_PowerDown,
	.PowerUp		= pcie_PowerUp,
	.PhyDebug	= pcie_PhyDebug,
};

/************************************************************************
*                  F U N C T I O N   D E F I N I T I O N S
*************************************************************************
*/
/*****************************************************************
 ****  Reg   a c c e s s ********************************
 ******************************************************************/

/* APIs */

static void pcie_phy_init(unsigned int port_num)
{
	printk("pcie %d phy init.\n", port_num);	
	switch(port_num)
	{
		case 0:			
			PCIe_G3_Load_Efuse();
			PCIe_G3_init();			
			break;
		case 1:
			PCIe_QPhy_Load_Efuse();
			pcie_QPhy_init();
			break;
		case 2:			
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
	}
}
static void pcie_PowerDown(unsigned int port_num)
{
	//printk("pcie %d power down.\n", port_num);
	switch(port_num)
	{
		case 0:
			PCIe_G3_Disable();
			break;
		case 1:
			PCIe_QPhy_Disable();
			break;
		case 2:			
			break;
		default:
			break;
	}
}
static void pcie_PowerUp(unsigned int port_num)
{
	printk("pcie %d power up.\n", port_num);
	switch(port_num)
	{
		case 0:
			PCIe_G3_Load_Efuse();
			PCIe_G3_init();
			break;
		case 1:
			PCIe_QPhy_Load_Efuse();
			PCIe_QPhy_Enable();
			break;
		case 2:			
			break;
		default:
			break;
	}
}

static void pcie_PhyDebug(unsigned int sel)
{		

	
	switch(sel)
{		
		case 0:
			PCIe_Link_Status_Check();
			//PCIe_LTSSM_Monitor();
			break;
		case 1:
			PCIe_G3_Tx_Compliance(1);
			break;
		case 2:						
			PCIe_G3_Tx_Compliance(2);
			break;

		case 3:
			PCIe_G3_Tx_Compliance(3);
			break;
			
		case 4:
			PCIe_G3_Clk_HighZ();
			break;
		case 5:
			PCIe_G3_Common_Debug();
			break;
		case 6:
			PCIe_QPhy_Common_Debug();
			break;
		case 7:
			PCIe_G3_Eye_Scan(0, 0);	//lane0, full plot
			break;
		case 8:
			PCIe_QPhy_RX_Eye_Scan(1, 1);	//2.5G
			break;
		case 9:
			PCIe_G3_Eye_Scan(0, 1);	//lane0, quick plot
			break;
		case 10:
			PCIe_QPhy_RX_Eye_Scan(0, 0);	//5G
			break;
		case 11:
			PCIe_G3_T2R_Loopback(1); //2.5G (gen 1) t2r loopback
			break;
		case 12:
			PCIe_G3_T2R_Loopback(2);	 //5G (gen 2) t2r loopback		
			break;
		case 13:			
			PCIe_G3_T2R_Loopback(3);	 //8G (gen 3) t2r loopback		
			break;
		case 14:
			pcie_Ext_T2R(0xb);  //10.3125G
			break;
		case 15:
			pcie_Ext_T2R(0x11); //3.125G
			break;
		case 16:
			debug_print = 1;
			break;
		case 17:
			debug_print = 0;			
			break;
		case 18:
			PCIe_G3_HEC_Tx_Detect_Rx();
			break;			
		case 19:
			PCIe_QPhy_HEC_Tx_Detect_Rx();						
			break;

		case 20:
			PCIe_G3_Rx_FLL_Monitor();
			PCIe_G3_Rx_FLL_Print();
			break;
			
		case 21:
			PCIe_G3_Rx_OS_Cal_Result(1);
			break;
		case 22:
			PCIe_G3_Rx_PCS_PIPE_Data_Monitor();
			break;		
		case 23:
			pon_Ext_T2R(7);
			break;		
		case 24:
			pon_Ext_T2R(10);
			break;		
		case 25:
			pon_Ext_T2R(9);
			break;		
		case 26:
			pon_Ext_T2R(0);
			break;		
		case 27:
			pon_Ext_T2R(1);
			break;		
		case 28:
			Eth_Ser_Ext_T2R(0xb);
			break;		
		case 29:
			Eth_Ser_Ext_T2R(0x55);
			break;		
		case 30:
			Eth_Ser_Ext_T2R(0x11);
			break;		
		case 31:
			Eth_Ser_Ext_T2R(0x10);
			break;		
		case 32:
			Eth_Ser_Ext_T2R(1);
			break;		
		case 33:
			PCIe_QPhy_2p5G_T2R(); 
			break;		
		case 34:
			PCIe_QPhy_5G_T2R();
			break;			
		default:
			break;
	}
	printk("finish pcie phy debug function: %d \n", sel);
}


/*****************************************************************
***************************** PCIe Common fucntion *****************************
 ******************************************************************/

void Reg_W(u32 Base, u32 Offset, u32 Addr, u32 Data)
{		

#ifndef IS_FPGA
	switch (Base)
	{
		case PXP_ANA_BASE:			
			writel(Data, (G3_ana_phy_rg_base + (Addr - Offset))); //.h coda file 0x---, match api "PCIE_ANA_2L" + addr			
			break;
		case PXP_PMA_BASE:			
			writel(Data, (G3_pma_phy_rg_base + (Addr - Offset))); //.h coda file 0xb---, must - 0xb000 to match  "PCIE_PMA0" + addr			
			break;
			
		case QP_ANA_BASE:			
			writel(Data, (QPCIe_ana_rg_base + (Addr - Offset))); 
			break;
		case QP_DIG_BASE:			
			writel(Data, (QPCIe_dig_rg_base + (Addr - Offset))); 
			break;
		case QP_PMA_BASE:			
			writel(Data, (QPCIe_pma_rg_base + (Addr - Offset))); 
			break;

		default :
			printk("Write PCIe G3 /QPHY base addr error !\n");
			break;
	}
	if(debug_print)	
#endif
		printk("W\t%x\t%x)\n", Base + Addr - Offset, Data);
	
}

u32 Reg_R(u32 Base, u32 Offset, u32 Addr)
{
	u32 tmp;

#ifdef IS_FPGA
	tmp = 0x0;
#else	
	switch (Base)
	{
		case PXP_ANA_BASE:
			tmp = readl(G3_ana_phy_rg_base + (Addr - Offset));
			break;
		case PXP_PMA_BASE:			
			tmp = readl(G3_pma_phy_rg_base + (Addr - Offset));			
			break;
			
		case QP_ANA_BASE:			
			tmp = readl(QPCIe_ana_rg_base + (Addr - Offset)); 
			break;
		case QP_DIG_BASE:			
			tmp = readl(QPCIe_dig_rg_base + (Addr - Offset)); 
			break;
		case QP_PMA_BASE:			
			tmp = readl(QPCIe_pma_rg_base + (Addr - Offset)); 
			break;

		default :
			printk("Read PCIe G3 /QPHY base addr error !\n");
			tmp = 0xdeadbeef;
			break;
	}

	if(debug_print)
#endif		
		printk("Reg_R(%x) \n", Base + Addr -Offset);

	return tmp;	
}

void Reg_R_then_W(u32 Addr, u32 Data, char MSB, char LSB)
{
	u32 rdata, wdata, Base, rg_adr, write_mask;
	
	Base = Addr & 0xfffff000;
	rg_adr = Addr& 0xfff;
	rdata = Reg_R(Base, 0, rg_adr);

	if((MSB == 31) &&( LSB == 0))
	{
		wdata = Data;		
	}else
	{
		write_mask = (1 << (MSB-LSB+1)) -1;
		wdata = (rdata & (~(write_mask << LSB))) | (Data << LSB);	
	}

	Reg_W(Base, 0, rg_adr, wdata);
	#if 0//FLL_DEBUG
	printk("Write addr: %08x value: %08x \n", Addr, wdata);
	#endif

}




void Check_Reg(u32 Base, u32 Offset, u32 Addr, u32 expect, char MSB, char LSB, u32 line)
{
	u32 read_back, bit_mask;

	bit_mask = (1 << (MSB -LSB + 1)) -1;
	
	if ((MSB -LSB + 1) == 32)
		read_back = Reg_R( Base,  Offset,  Addr);
	else
		read_back = (Reg_R( Base,  Offset,  Addr) >> LSB) & bit_mask;
	
	if(read_back != expect)
	{
		printk("excel: %3d, 0x%08x [%02d:%02d] = 0x%08x, expect 0x%08x !\n",line ,Base + Addr -Offset ,MSB ,LSB, read_back ,expect  );
	}else
	{
		printk("excel: %3d, 0x%08x [%02d:%02d] = 0x%08x \n",line, Base + Addr -Offset ,MSB, LSB,read_back );
	}	
}



/*****************************************************************
***************************** PCIe QPhy fuction ****************************
 ******************************************************************/


void PCIe_QPhy_Load_Efuse(void)
{
	rg_type_t(qp_pma_top_REG_INTF_CTRL_8) fw_INTF_CTRL_8;
	rg_type_t(qp_pma_top_REG_INTF_CTRL_9) fw_INTF_CTRL_9;

	int tx_term_sel_force, rx_imp_sel_force;
//*******  Load Efuse

	tx_term_sel_force = (get_phy_efuse(SerDes_QP_PCIe_efuse_valid_LSB, 1) == 1) ? get_phy_efuse(RG_QP_PCIE_TX_TERM_SEL_LSB, 2) : 0x1;
	rx_imp_sel_force = (get_phy_efuse(SerDes_QP_PCIe_efuse_valid_LSB, 1) == 1) ? get_phy_efuse(RG_QP_PCIE_RX_IMP_SEL_LSB, 5) : 0x1;

	fw_INTF_CTRL_8.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_INTF_CTRL_8);
	fw_INTF_CTRL_8.hal.rg_da_qp_tx_term_sel_force = (tx_term_sel_force == -1) ? 0x1 : tx_term_sel_force;
	fw_INTF_CTRL_8.hal.rg_da_qp_tx_term_sel_sel = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_INTF_CTRL_8, fw_INTF_CTRL_8.dat.value); //write addr: 0x1FA5E320 = 0xA0

	fw_INTF_CTRL_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_INTF_CTRL_9);
	fw_INTF_CTRL_9.hal.rg_da_qp_rx_imp_sel_force = (rx_imp_sel_force == -1) ? 0x10 : rx_imp_sel_force; 
	fw_INTF_CTRL_9.hal.rg_da_qp_rx_imp_sel_sel = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_INTF_CTRL_9, fw_INTF_CTRL_9.dat.value); //write addr: 0x1FA5E324 = 0xC0E00000

}



/***************************** Gen2 QPHY PCIe API *****************************/

void pcie_QPhy_init(void)
{
	u32 tmp;
	rg_type_t(qp_pma_top_REG_RX_CTRL_36) fw_RX_CTRL_36;
	rg_type_t(REG_RG_QP_BGR_EN) fw_RG_QP_BGR_EN;
	rg_type_t(REG_RG_QP_PLL_IPLL_DIG_PWR_SEL) fw_RG_QP_PLL_IPLL_DIG_PWR_SEL;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_4) fw_PLL_CTRL_4;
	rg_type_t(qp_dig_csr_REG_QP_CK_RST_CTRL_7) fw_QP_CK_RST_CTRL_7;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_2) fw_PLL_CTRL_2;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_3) fw_PLL_CTRL_3;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_1) fw_PLL_CTRL_1;
	rg_type_t(qp_pma_top_REG_SS_LCPLL_TDC_PCW_1) fw_SS_LCPLL_TDC_PCW_1;
	rg_type_t(qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_2) fw_SS_LCPLL_PWCTL_SETTING_2;
	rg_type_t(qp_pma_top_REG_SS_LCPLL_TDC_FLT_2) fw_SS_LCPLL_TDC_FLT_2;
	rg_type_t(REG_RG_QP_CDR_LPF_MJV_LIM) fw_RG_QP_CDR_LPF_MJV_LIM;
	rg_type_t(REG_RG_QP_RXAFE_RESERVE) fw_RG_QP_RXAFE_RESERVE;
	rg_type_t(REG_RG_QP_CDR_PR_CKREF_DIV1) fw_RG_QP_CDR_PR_CKREF_DIV1;
	rg_type_t(REG_RG_QP_CDR_FORCE_IBANDLPF_R_OFF) fw_RG_QP_CDR_FORCE_IBANDLPF_R_OFF;
	rg_type_t(REG_RG_QP_CDR_PR_KBAND_DIV_PCIE) fw_RG_QP_CDR_PR_KBAND_DIV_PCIE;
	rg_type_t(qp_pma_top_REG_RX_CTRL_46) fw_RX_CTRL_46;
	rg_type_t(qp_pma_top_REG_RX_CTRL_11) fw_RX_CTRL_11;
	rg_type_t(qp_pma_top_REG_RX_DLY_0) fw_RX_DLY_0;
	rg_type_t(qp_pma_top_REG_RX_CTRL_10) fw_RX_CTRL_10;
	rg_type_t(REG_RG_QP_PLL_SDM_ORD) fw_RG_QP_PLL_SDM_ORD;
	rg_type_t(qp_pma_top_REG_PLL_CK_CTRL_0) fw_PLL_CK_CTRL_0;
	rg_type_t(REG_RG_PCIE_CLKDRV_IMPSEL) fw_RG_PCIE_CLKDRV_IMPSEL;
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_3) fw_QP_TX_DA_CTRL_3;
	rg_type_t(qp_dig_csr_REG_QP_CK_RST_CTRL_3) fw_QP_CK_RST_CTRL_3;
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_0) fw_QP_TX_DA_CTRL_0;
	rg_type_t(REG_RG_QP_RXLBTX_EN) fw_RG_QP_RXLBTX_EN;
	rg_type_t(qp_pma_top_REG_PLL_CK_CTRL_2) fw_PLL_CK_CTRL_2;
	rg_type_t(qp_pma_top_REG_RX_CTRL_5) fw_RX_CTRL_5;
	rg_type_t(qp_pma_top_REG_RX_CTRL_6) fw_RX_CTRL_6;
	rg_type_t(qp_pma_top_REG_RX_CTRL_7) fw_RX_CTRL_7;
	rg_type_t(qp_pma_top_REG_RX_CTRL_2) fw_RX_CTRL_2;
	rg_type_t(qp_pma_top_REG_RX_CTRL_45) fw_RX_CTRL_45;
	rg_type_t(qp_pma_top_REG_RX_CTRL_50) fw_RX_CTRL_50;
	rg_type_t(REG_RG_QP_TX_MODE_16B_EN) fw_RG_QP_TX_MODE_16B_EN;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_0) fw_PON_RXFEDIG_CTRL_0;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_0) fw_PLL_CTRL_0;
	

	udelay(1);
	fw_RX_CTRL_36.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_36);
	fw_RX_CTRL_36.hal.rg_qp_pcie_usb_system = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_36, fw_RX_CTRL_36.dat.value); //write addr: 0x1FA5E6B8 = 0x41E1100

	fw_RG_QP_BGR_EN.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_BGR_EN);
	fw_RG_QP_BGR_EN.hal.RG_QP_BG_DIV = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_BGR_EN, fw_RG_QP_BGR_EN.dat.value); //write addr: 0x1FA5F030 = 0x2AA0004

	fw_RG_QP_PLL_IPLL_DIG_PWR_SEL.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_PLL_IPLL_DIG_PWR_SEL);
	fw_RG_QP_PLL_IPLL_DIG_PWR_SEL.hal.RG_QP_PLL_PREDIV = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_PLL_IPLL_DIG_PWR_SEL, fw_RG_QP_PLL_IPLL_DIG_PWR_SEL.dat.value); //write addr: 0x1FA5F03C = 0x122802A2

	fw_PLL_CTRL_4.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_4);
	fw_PLL_CTRL_4.hal.rg_da_qp_pll_icolp_en_intf = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_4, fw_PLL_CTRL_4.dat.value); //write addr: 0x1FA5E410 = 0x0

	fw_QP_CK_RST_CTRL_7.dat.value = Reg_R(QP_DIG_BASE, QP_DIG_OFFSET, _qp_dig_csr_QP_CK_RST_CTRL_7);
	fw_QP_CK_RST_CTRL_7.hal.rg_multi_phy_usb5_en = 0x0; 
	fw_QP_CK_RST_CTRL_7.hal.rg_multi_phy_usb2p5_en = 0x0; 
	fw_QP_CK_RST_CTRL_7.hal.rg_multi_phy_usb_mode_en = 0x1; 
	Reg_W(QP_DIG_BASE, QP_DIG_OFFSET, _qp_dig_csr_QP_CK_RST_CTRL_7, fw_QP_CK_RST_CTRL_7.dat.value); //write addr: 0x1FA5A340 = 0x1000000

	fw_QP_CK_RST_CTRL_7.hal.rg_multi_phy_usb5_en = 0x1; 
	fw_QP_CK_RST_CTRL_7.hal.rg_multi_phy_usb2p5_en = 0x1; 
	Reg_W(QP_DIG_BASE, QP_DIG_OFFSET, _qp_dig_csr_QP_CK_RST_CTRL_7, fw_QP_CK_RST_CTRL_7.dat.value); //write addr: 0x1FA5A340 = 0x7000000

	fw_PLL_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_2);
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_pck_sel_intf = 0x1; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_ir_intf = 0x4; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_fbksel_intf = 0x0; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_kband_prediv_intf = 0x0; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_bc_intf = 0x3; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_bpa_intf = 0x5; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_bpb_intf = 0x1; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_icoiq_en_intf = 0x1; 
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_phy_ck_en_intf = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_2, fw_PLL_CTRL_2.dat.value); //write addr: 0x1FA5E408 = 0x21444357

	fw_PLL_CTRL_4.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_4);
	fw_PLL_CTRL_4.hal.rg_da_qp_pll_sdm_hren_intf = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_4, fw_PLL_CTRL_4.dat.value); //write addr: 0x1FA5E410 = 0x8

	fw_PLL_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_2);
	fw_PLL_CTRL_2.hal.rg_da_qp_pll_sdm_ifm_intf = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_2, fw_PLL_CTRL_2.dat.value); //write addr: 0x1FA5E408 = 0x61444357

	fw_PLL_CTRL_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_3);
	fw_PLL_CTRL_3.hal.rg_da_qp_pll_ssc_delta_intf = 0x1FD; 
	fw_PLL_CTRL_3.hal.rg_da_qp_pll_ssc_period_intf = 0x19C; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_3, fw_PLL_CTRL_3.dat.value); //write addr: 0x1FA5E40C = 0x19C01FD

	fw_PLL_CTRL_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_1);
	fw_PLL_CTRL_1.hal.rg_qp_pll_ssc_en = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_1, fw_PLL_CTRL_1.dat.value); //write addr: 0x1FA5E404 = 0x5F0109C4

	fw_SS_LCPLL_TDC_PCW_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_SS_LCPLL_TDC_PCW_1);
	fw_SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x48000000; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_SS_LCPLL_TDC_PCW_1, fw_SS_LCPLL_TDC_PCW_1.dat.value); //write addr: 0x1FA5E248 = 0x48000000

	fw_SS_LCPLL_PWCTL_SETTING_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_SS_LCPLL_PWCTL_SETTING_2);
	fw_SS_LCPLL_PWCTL_SETTING_2.hal.rg_ncpo_ana_msb = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_SS_LCPLL_PWCTL_SETTING_2, fw_SS_LCPLL_PWCTL_SETTING_2.dat.value); //write addr: 0x1FA5E208 = 0x1000A

	fw_SS_LCPLL_TDC_FLT_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_SS_LCPLL_TDC_FLT_2);
	fw_SS_LCPLL_TDC_FLT_2.hal.rg_lcpll_ncpo_value = 0x48000000; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_SS_LCPLL_TDC_FLT_2, fw_SS_LCPLL_TDC_FLT_2.dat.value); //write addr: 0x1FA5E230 = 0x48000000

	fw_RG_QP_CDR_LPF_MJV_LIM.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_LPF_MJV_LIM);
	fw_RG_QP_CDR_LPF_MJV_LIM.hal.RG_QP_CDR_LPF_RATIO = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_LPF_MJV_LIM, fw_RG_QP_CDR_LPF_MJV_LIM.dat.value); //write addr: 0x1FA5F00C = 0x14

	fw_RG_QP_RXAFE_RESERVE.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_RXAFE_RESERVE);
	fw_RG_QP_RXAFE_RESERVE.hal.RG_QP_CDR_PD_10B_EN = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_RXAFE_RESERVE, fw_RG_QP_RXAFE_RESERVE.dat.value); //write addr: 0x1FA5F004 = 0xE00

	fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1);
	fw_RG_QP_CDR_PR_CKREF_DIV1.hal.RG_QP_CDR_PR_DAC_BAND = 0xC; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1, fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value); //write addr: 0x1FA5F018 = 0x4000C00

	fw_RG_QP_CDR_FORCE_IBANDLPF_R_OFF.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_FORCE_IBANDLPF_R_OFF);
	fw_RG_QP_CDR_FORCE_IBANDLPF_R_OFF.hal.RG_QP_CDR_PHYCK_RSTB = 0x0; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_FORCE_IBANDLPF_R_OFF, fw_RG_QP_CDR_FORCE_IBANDLPF_R_OFF.dat.value); //write addr: 0x1FA5F020 = 0x1020840

	fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_KBAND_DIV_PCIE);
	fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.hal.RG_QP_CDR_PR_XFICK_EN = 0x0; 
	fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.hal.RG_QP_CDR_PR_KBAND_PCIE_MODE = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_KBAND_DIV_PCIE, fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.dat.value); //write addr: 0x1FA5F01C = 0x18000059

	fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1);
	fw_RG_QP_CDR_PR_CKREF_DIV1.hal.RG_QP_CDR_PR_KBAND_DIV = 0x3; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_CKREF_DIV1, fw_RG_QP_CDR_PR_CKREF_DIV1.dat.value); //write addr: 0x1FA5F018 = 0x3000C00

	fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_KBAND_DIV_PCIE);
	fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.hal.RG_QP_CDR_PR_KBAND_DIV_PCIE = 0x19; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_CDR_PR_KBAND_DIV_PCIE, fw_RG_QP_CDR_PR_KBAND_DIV_PCIE.dat.value); //write addr: 0x1FA5F01C = 0x18000059

	fw_RX_CTRL_46.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46);
	fw_RX_CTRL_46.hal.rg_qp_pcie_usb_bypass_eq_p1_to_p0_en = 0x1; 
	fw_RX_CTRL_46.hal.rg_reback_p0_lck2ref_en = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46, fw_RX_CTRL_46.dat.value); //write addr: 0x1FA5E6E0 = 0xC360000

	fw_RX_CTRL_11.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_11);
	fw_RX_CTRL_11.hal.rg_qp_force_sigdet_5g = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_11, fw_RX_CTRL_11.dat.value); //write addr: 0x1FA5E654 = 0x2680050

	fw_RX_CTRL_36.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_36);
	fw_RX_CTRL_36.hal.rg_qp_lck2data_dly_time = 0x2; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_36, fw_RX_CTRL_36.dat.value); //write addr: 0x1FA5E6B8 = 0x4021100

	fw_RG_QP_RXAFE_RESERVE.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_RXAFE_RESERVE);
	fw_RG_QP_RXAFE_RESERVE.hal.RG_QP_CDR_PD_EDGE_DIS = 0x0; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_RXAFE_RESERVE, fw_RG_QP_RXAFE_RESERVE.dat.value); //write addr: 0x1FA5F004 = 0xA00

	fw_RX_DLY_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_DLY_0);
	fw_RX_DLY_0.hal.rg_qp_rx_pi_cal_en_h_dly = 0x10; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_DLY_0, fw_RX_DLY_0.dat.value); //write addr: 0x1FA5E614 = 0xF10

	fw_RX_CTRL_10.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_10);
	fw_RX_CTRL_10.hal.rg_qp_crsdet_rstb = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_10, fw_RX_CTRL_10.dat.value); //write addr: 0x1FA5E650 = 0x534A602

	fw_RG_QP_PLL_SDM_ORD.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_PLL_SDM_ORD);
	fw_RG_QP_PLL_SDM_ORD.hal.RG_QP_PLL_SSC_PHASE_INI = 0x1; 
	fw_RG_QP_PLL_SDM_ORD.hal.RG_QP_PLL_SSC_TRI_EN = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_PLL_SDM_ORD, fw_RG_QP_PLL_SDM_ORD.dat.value); //write addr: 0x1FA5F040 = 0x1B

	fw_PLL_CK_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CK_CTRL_0);
	fw_PLL_CK_CTRL_0.hal.rg_da_pcie_clkrx_en_intf = 0x0; 
	fw_PLL_CK_CTRL_0.hal.rg_da_pcie_clktx_en_intf = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CK_CTRL_0, fw_PLL_CK_CTRL_0.dat.value); //write addr: 0x1FA5E414 = 0x61

	fw_RG_PCIE_CLKDRV_IMPSEL.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_PCIE_CLKDRV_IMPSEL);
	fw_RG_PCIE_CLKDRV_IMPSEL.hal.RG_PCIE_CLKDRV_HZ = 0x0; 
	fw_RG_PCIE_CLKDRV_IMPSEL.hal.RG_PCIE_CLKDRV_AMP = 0x4; 
	fw_RG_PCIE_CLKDRV_IMPSEL.hal.RG_PCIE_CLKDRV_FORCEIN = 0x1; 
	fw_RG_PCIE_CLKDRV_IMPSEL.hal.RG_PCIE_CLKDRV_IMPSEL = 0x12; 
	fw_RG_PCIE_CLKDRV_IMPSEL.hal.RG_PCIE_CLKDRV_RP = 0xC; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_PCIE_CLKDRV_IMPSEL, fw_RG_PCIE_CLKDRV_IMPSEL.dat.value); //write addr: 0x1FA5F034 = 0xA8801812

	fw_QP_TX_DA_CTRL_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3);
	fw_QP_TX_DA_CTRL_3.hal.rg_tx_data_rate_sel = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3, fw_QP_TX_DA_CTRL_3.dat.value); //write addr: 0x1FA5E00C = 0x90000100

	fw_QP_CK_RST_CTRL_3.dat.value = Reg_R(QP_DIG_BASE, QP_DIG_OFFSET, _qp_dig_csr_QP_CK_RST_CTRL_3);
	fw_QP_CK_RST_CTRL_3.hal.rg_us_ck_div_sel = 0x1; 
	fw_QP_CK_RST_CTRL_3.hal.rg_ns_ck_div_sel = 0x1; 
	Reg_W(QP_DIG_BASE, QP_DIG_OFFSET, _qp_dig_csr_QP_CK_RST_CTRL_3, fw_QP_CK_RST_CTRL_3.dat.value); //write addr: 0x1FA5A30C = 0x3400000

	fw_QP_TX_DA_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_0);
	fw_QP_TX_DA_CTRL_0.hal.rg_rxdet_en_window = 0xA; 
	fw_QP_TX_DA_CTRL_0.hal.rg_rxdet_rd_wait_timer = 0x4; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_0, fw_QP_TX_DA_CTRL_0.dat.value); //write addr: 0x1FA5E000 = 0x873C40A0

	fw_RG_QP_RXLBTX_EN.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_RXLBTX_EN);
	fw_RG_QP_RXLBTX_EN.hal.RG_QP_TX_RXDET_METHOD = 0x0; 
	fw_RG_QP_RXLBTX_EN.hal.RG_QP_TX_DMEDGEGEN_EN = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_RXLBTX_EN, fw_RG_QP_RXLBTX_EN.dat.value); //write addr: 0x1FA5F02C = 0x8840010

	fw_PLL_CK_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CK_CTRL_2);
	fw_PLL_CK_CTRL_2.hal.rg_pcie_mode_pll_auto_en = 0x1; 
	fw_PLL_CK_CTRL_2.hal.rg_pcie_mode_pll_auto_on_en = 0x1; 
	fw_PLL_CK_CTRL_2.hal.rg_pcie_mode_pll_auto_off_en = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CK_CTRL_2, fw_PLL_CK_CTRL_2.dat.value); //write addr: 0x1FA5E41C = 0x7

	fw_RX_CTRL_5.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_5);
	fw_RX_CTRL_5.hal.rg_fredet_chk_cycle = 0x28; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_5, fw_RX_CTRL_5.dat.value); //write addr: 0x1FA5E63C = 0xA010

	fw_RX_CTRL_6.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_6);
	fw_RX_CTRL_6.hal.rg_fredet_golden_cycle = 0x64; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_6, fw_RX_CTRL_6.dat.value); //write addr: 0x1FA5E640 = 0x64

	fw_RX_CTRL_7.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_7);
	fw_RX_CTRL_7.hal.rg_fredet_tolerate_cycle = 0x2710; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_7, fw_RX_CTRL_7.dat.value); //write addr: 0x1FA5E644 = 0x2710

	fw_RX_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_2);
	fw_RX_CTRL_2.hal.rg_qp_rx_eq_en_h_dly = 0x9C4; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_2, fw_RX_CTRL_2.dat.value); //write addr: 0x1FA5E630 = 0x9C40000

	fw_RX_CTRL_45.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_45);
	fw_RX_CTRL_45.hal.rg_qp_eq_en_dly = 0x9C4; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_45, fw_RX_CTRL_45.dat.value); //write addr: 0x1FA5E6DC = 0x254A09C4

	fw_RX_CTRL_50.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_50);
	fw_RX_CTRL_50.hal.rg_qp_rx_eq_en_h_dly_short = 0x9C4; 
	fw_RX_CTRL_50.hal.rg_qp_eq_en_dly_short = 0x9C4; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_50, fw_RX_CTRL_50.dat.value); //write addr: 0x1FA5E6F0 = 0x13889C4

	fw_RG_QP_TX_MODE_16B_EN.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TX_MODE_16B_EN);
	tmp = fw_RG_QP_TX_MODE_16B_EN.hal.RG_QP_TX_RESERVE;
	tmp = (0x1<<8) | (tmp & (~(0x1<<8)));
	fw_RG_QP_TX_MODE_16B_EN.hal.RG_QP_TX_RESERVE = tmp;
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TX_MODE_16B_EN, fw_RG_QP_TX_MODE_16B_EN.dat.value); //write addr: 0x1FA5F028 = 0x1000000

	fw_PON_RXFEDIG_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0);
	fw_PON_RXFEDIG_CTRL_0.hal.RG_QP_EQ_RX500M_CK_SEL = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0, fw_PON_RXFEDIG_CTRL_0.dat.value); //write addr: 0x1FA5E100 = 0x2000409

	fw_PLL_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0);
	fw_PLL_CTRL_0.hal.rg_phya_auto_init = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60001


	
}

void PCIe_QPhy_Enable(void)
{
	rg_type_t(REG_RG_QP_TDC_FT_CK_EN) fw_RG_QP_TDC_FT_CK_EN;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_0) fw_PLL_CTRL_0;
	rg_type_t(qp_pma_top_REG_RX_CTRL_2) fw_RX_CTRL_2;
	
	// Power on PHYA PLL
	fw_RG_QP_TDC_FT_CK_EN.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN);
	fw_RG_QP_TDC_FT_CK_EN.hal.RG_VUSB10_ON = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN, fw_RG_QP_TDC_FT_CK_EN.dat.value); //write addr: 0x1FA5F038 = 0x80040100

	fw_PLL_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0);
	fw_PLL_CTRL_0.hal.rg_phya_pwd_mux = 0x0; 
	fw_PLL_CTRL_0.hal.rg_phya_pwd = 0x0; 	
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60000	
	
	fw_RX_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_2);
	fw_RX_CTRL_2.hal.rg_qp_rx_pwd = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_2, fw_RX_CTRL_2.dat.value); //write addr: 0x1FA5E630 = 0x94C0000

	
	pcie_QPhy_init();
}
void PCIe_QPhy_Disable(void)
{
	rg_type_t(REG_RG_QP_TDC_FT_CK_EN) fw_RG_QP_TDC_FT_CK_EN;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_0) fw_PLL_CTRL_0;
	rg_type_t(qp_pma_top_REG_RX_CTRL_2) fw_RX_CTRL_2;
	rg_type_t(qp_pma_top_REG_PLL_CK_CTRL_2) fw_PLL_CK_CTRL_2;
	
	// Power down PHYA PLL
	fw_RG_QP_TDC_FT_CK_EN.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN);
	fw_RG_QP_TDC_FT_CK_EN.hal.RG_VUSB10_ON = 0x0; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN, fw_RG_QP_TDC_FT_CK_EN.dat.value); //write addr: 0x1FA5F038 = 0x80040000

	fw_PLL_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0);
	fw_PLL_CTRL_0.hal.rg_phya_auto_init = 0x0; 
	fw_PLL_CTRL_0.hal.rg_phya_pwd_mux = 0x1; 
	fw_PLL_CTRL_0.hal.rg_phya_pwd = 0x1;	
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60006	
	
	fw_RX_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_2);
	fw_RX_CTRL_2.hal.rg_qp_rx_pwd = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_2, fw_RX_CTRL_2.dat.value); //write addr: 0x1FA5E630 = 0x894C0000

	fw_PLL_CK_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CK_CTRL_2);
	fw_PLL_CK_CTRL_2.hal.rg_pcie_mode_pll_auto_en = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CK_CTRL_2, fw_PLL_CK_CTRL_2.dat.value); //write addr: 0x1FA5E41C = 0x0
	
	
}


void PCIe_QPhy_2p5G_T2R(void)
{
	printk("PCIe QPhy 2.5G T2R Start.\n");
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_1) fw_QP_TX_DA_CTRL_1;
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_3) fw_QP_TX_DA_CTRL_3;
	rg_type_t(qp_pma_top_REG_QP_TX_DETRX_TMR) fw_QP_TX_DETRX_TMR;
	rg_type_t(qp_pma_top_REG_RX_CTRL_46) fw_RX_CTRL_46;
	rg_type_t(qp_pma_top_REG_RX_CTRL_11) fw_RX_CTRL_11;
	rg_type_t(qp_pma_top_REG_QP_PMA_BIST_CTRL_0) fw_QP_PMA_BIST_CTRL_0;
	rg_type_t(qp_pma_top_REG_QP_PRBS_DBG_0) fw_QP_PRBS_DBG_0;
	rg_type_t(qp_pma_top_REG_INTF_STS_0) fw_INTF_STS_0;


	fw_QP_TX_DA_CTRL_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_1);
	fw_QP_TX_DA_CTRL_1.hal.rg_txff_redun_en = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_1, fw_QP_TX_DA_CTRL_1.dat.value); //write addr: 0x1FA5E004 = 0x0

	fw_QP_TX_DA_CTRL_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3);
	fw_QP_TX_DA_CTRL_3.hal.rg_qphy_redun_sel = 0x1; 
	fw_QP_TX_DA_CTRL_3.hal.rg_force_tphy_mode = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3, fw_QP_TX_DA_CTRL_3.dat.value); //write addr: 0x1FA5E00C = 0xC5000100

	fw_QP_TX_DETRX_TMR.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DETRX_TMR);
	fw_QP_TX_DETRX_TMR.hal.rg_force_tx_detrx_out = 0x1; 
	fw_QP_TX_DETRX_TMR.hal.rg_force_tx_detrx_out_val = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DETRX_TMR, fw_QP_TX_DETRX_TMR.dat.value); //write addr: 0x1FA5E040 = 0xFF00F000

	fw_RX_CTRL_46.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46);
	fw_RX_CTRL_46.hal.rg_qp_force_usb_pcie_power_st_sel = 0x1; 
	fw_RX_CTRL_46.hal.rg_qp_force_usb_pcie_power_st = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46, fw_RX_CTRL_46.dat.value); //write addr: 0x1FA5E6E0 = 0x360400

	fw_QP_TX_DA_CTRL_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3);
	fw_QP_TX_DA_CTRL_3.hal.rg_tx_data_test_mode = 0x1; 
	fw_QP_TX_DA_CTRL_3.hal.rg_ssusb_tx_ser_en_sel = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3, fw_QP_TX_DA_CTRL_3.dat.value); //write addr: 0x1FA5E00C = 0x45000101

	fw_RX_CTRL_11.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_11);
	fw_RX_CTRL_11.hal.rg_force_freq_lock_sel = 0x1; 
	fw_RX_CTRL_11.hal.rg_force_freq_lock = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_11, fw_RX_CTRL_11.dat.value); //write addr: 0x1FA5E654 = 0x2600053

	ndelay(200);
	fw_QP_PMA_BIST_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_PMA_BIST_CTRL_0);
	fw_QP_PMA_BIST_CTRL_0.hal.rg_bistctl_pat_tx_en = 0x1; 
	fw_QP_PMA_BIST_CTRL_0.hal.rg_bistctl_pat_rx_check_en = 0x1; 
	fw_QP_PMA_BIST_CTRL_0.hal.rg_bistctl_bit_error_rst_sel = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_PMA_BIST_CTRL_0, fw_QP_PMA_BIST_CTRL_0.dat.value); //write addr: 0x1FA5E028 = 0x10219

	udelay(1);
	fw_QP_PRBS_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_PRBS_DBG_0);
	printk("ro_bistctl_prbs_done : 0x%x;\n", fw_QP_PRBS_DBG_0.hal.ro_bistctl_prbs_done); //read addr: 0x1FA5E820 [00:00]

	udelay(1);
	fw_QP_PRBS_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_PRBS_DBG_0);
	printk("ro_bistctl_prbs_fail : 0x%x;\n", fw_QP_PRBS_DBG_0.hal.ro_bistctl_prbs_fail); //read addr: 0x1FA5E820 [01:01]

	udelay(10);
	fw_QP_PRBS_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_PRBS_DBG_0);
	printk("ro_bistctl_prbs_compare : 0x%x;\n", fw_QP_PRBS_DBG_0.hal.ro_bistctl_prbs_compare); //read addr: 0x1FA5E820 [02:02]

	udelay(10);
	fw_INTF_STS_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_0);
	printk("ro_da_qp_cdr_lck2data : 0x%x;\n", fw_INTF_STS_0.hal.ro_da_qp_cdr_lck2data); //read addr: 0x1FA5E340 [11:11]


}

void PCIe_QPhy_5G_T2R(void)
{
	printk("PCIe QPhy 5G T2R Start.\n");
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_1) fw_QP_TX_DA_CTRL_1;
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_3) fw_QP_TX_DA_CTRL_3;
	rg_type_t(qp_pma_top_REG_QP_TX_DETRX_TMR) fw_QP_TX_DETRX_TMR;
	rg_type_t(qp_pma_top_REG_RX_CTRL_46) fw_RX_CTRL_46;
	rg_type_t(qp_pma_top_REG_RX_CTRL_11) fw_RX_CTRL_11;
	rg_type_t(qp_pma_top_REG_RX_CTRL_35) fw_RX_CTRL_35;
	rg_type_t(qp_pma_top_REG_QP_PMA_BIST_CTRL_0) fw_QP_PMA_BIST_CTRL_0;
	rg_type_t(qp_pma_top_REG_QP_PRBS_DBG_0) fw_QP_PRBS_DBG_0;
	rg_type_t(qp_pma_top_REG_INTF_STS_0) fw_INTF_STS_0;


	fw_QP_TX_DA_CTRL_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_1);
	fw_QP_TX_DA_CTRL_1.hal.rg_txff_redun_en = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_1, fw_QP_TX_DA_CTRL_1.dat.value); //write addr: 0x1FA5E004 = 0x200

	fw_QP_TX_DA_CTRL_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3);
	fw_QP_TX_DA_CTRL_3.hal.rg_qphy_redun_sel = 0x0; 
	fw_QP_TX_DA_CTRL_3.hal.rg_force_tphy_mode = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3, fw_QP_TX_DA_CTRL_3.dat.value); //write addr: 0x1FA5E00C = 0xC4000100

	fw_QP_TX_DETRX_TMR.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DETRX_TMR);
	fw_QP_TX_DETRX_TMR.hal.rg_force_tx_detrx_out = 0x1; 
	fw_QP_TX_DETRX_TMR.hal.rg_force_tx_detrx_out_val = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DETRX_TMR, fw_QP_TX_DETRX_TMR.dat.value); //write addr: 0x1FA5E040 = 0xFF00F000

	fw_RX_CTRL_46.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46);
	fw_RX_CTRL_46.hal.rg_qp_force_usb_pcie_power_st_sel = 0x1; 
	fw_RX_CTRL_46.hal.rg_qp_force_usb_pcie_power_st = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46, fw_RX_CTRL_46.dat.value); //write addr: 0x1FA5E6E0 = 0x360400

	fw_QP_TX_DA_CTRL_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3);
	fw_QP_TX_DA_CTRL_3.hal.rg_tx_data_test_mode = 0x1; 
	fw_QP_TX_DA_CTRL_3.hal.rg_ssusb_tx_ser_en_sel = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_3, fw_QP_TX_DA_CTRL_3.dat.value); //write addr: 0x1FA5E00C = 0x44000101

	fw_RX_CTRL_11.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_11);
	fw_RX_CTRL_11.hal.rg_force_freq_lock_sel = 0x1; 
	fw_RX_CTRL_11.hal.rg_force_freq_lock = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_11, fw_RX_CTRL_11.dat.value); //write addr: 0x1FA5E654 = 0x2600053

	mdelay(1);
	fw_RX_CTRL_35.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_35);
	fw_RX_CTRL_35.hal.rg_qp_force_pcie_usb_speed = 0x1; 
	fw_RX_CTRL_35.hal.rg_qp_force_pcie_usb_speed_sel = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_35, fw_RX_CTRL_35.dat.value); //write addr: 0x1FA5E6B4 = 0x80407800

	fw_QP_PMA_BIST_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_PMA_BIST_CTRL_0);
	fw_QP_PMA_BIST_CTRL_0.hal.rg_bistctl_pat_tx_en = 0x1; 
	fw_QP_PMA_BIST_CTRL_0.hal.rg_bistctl_pat_rx_check_en = 0x1; 
	fw_QP_PMA_BIST_CTRL_0.hal.rg_bistctl_bit_error_rst_sel = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_PMA_BIST_CTRL_0, fw_QP_PMA_BIST_CTRL_0.dat.value); //write addr: 0x1FA5E028 = 0x10219

	mdelay(1);
	fw_QP_PRBS_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_PRBS_DBG_0);
	printk("ro_bistctl_prbs_done : 0x%x;\n", fw_QP_PRBS_DBG_0.hal.ro_bistctl_prbs_done); //read addr: 0x1FA5E820 [00:00]

	mdelay(1);
	fw_QP_PRBS_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_PRBS_DBG_0);
	printk("ro_bistctl_prbs_fail : 0x%x;\n", fw_QP_PRBS_DBG_0.hal.ro_bistctl_prbs_fail); //read addr: 0x1FA5E820 [01:01]

	mdelay(10);
	fw_QP_PRBS_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_PRBS_DBG_0);
	printk("ro_bistctl_prbs_compare : 0x%x;\n", fw_QP_PRBS_DBG_0.hal.ro_bistctl_prbs_compare); //read addr: 0x1FA5E820 [02:02]

	mdelay(10);
	fw_INTF_STS_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_0);
	printk("ro_da_qp_cdr_lck2data : 0x%x;\n", fw_INTF_STS_0.hal.ro_da_qp_cdr_lck2data); //read addr: 0x1FA5E340 [11:11]


}

void PCIe_QPhy_Tx_Detect_Rx_Monitor(void)
{
	//rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	//rg_type_t(REG_ADD_DIG_RO_RESERVE_2) fw_ADD_DIG_RO_RESERVE_2;

	u32 val[ARRAY_MAX], time[ARRAY_MAX];
	u32 val_now, val_last;	
	u32 time_cnt, array_cnt, x;
	val_last = 0; time_cnt = 0; array_cnt = 0;

	while(time_cnt < TIME_14MS)
	{
		val_now = Reg_R(0x1FA5E000, 0,  0x800);
						
		if((val_now != val_last) && (array_cnt < ARRAY_MAX))
		{
			val[array_cnt] = val_now;
			time[array_cnt] = time_cnt;
			array_cnt++;
		}						
		val_last = val_now;
		time_cnt++;
		udelay(1);
	}		

	printk("QPhy Tx_Detect_Rx monitor:\n");
	for(x=0; x<array_cnt; x++)		
		printk("%05d us, 0x1fa5e800: 0x%x\n", ( time[x] * 1170)/1000, val[x]);
		//printk("%05d us, da_rx_det_en: %d, da_tx_cm_en: %d, ad_result: %d\n", ( time[x] * 1300)/1000, (val[x] >> 6) & 0x1, (val[x] >> 7) & 0x1, (val[x] >>10) & 0x1);
}





void PCIe_QPhy_HEC_Tx_Detect_Rx(void)
{
	rg_type_t(qp_pma_top_REG_QP_TX_DA_CTRL_0) fw_QP_TX_DA_CTRL_0;
	
	fw_QP_TX_DA_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_0);
	fw_QP_TX_DA_CTRL_0.hal.rg_tx_rxdet_en = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_0, fw_QP_TX_DA_CTRL_0.dat.value); //write addr: 0x1FA5E000 = 0x873C50F0
			
	PCIe_QPhy_Tx_Detect_Rx_Monitor();

	mdelay(10);
			
	fw_QP_TX_DA_CTRL_0.hal.rg_tx_rxdet_en = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_QP_TX_DA_CTRL_0, fw_QP_TX_DA_CTRL_0.dat.value); //write addr: 0x1FA5E000 = 0x873C50F8
	
}


void PCIe_QPhy_Common_Debug(void)
{
	rg_type_t(qp_pma_top_REG_INTF_CTRL_8) fw_INTF_CTRL_8;
	rg_type_t(qp_pma_top_REG_INTF_CTRL_9) fw_INTF_CTRL_9;
	
	rg_type_t(REG_RG_QP_TDC_FT_CK_EN) fw_RG_QP_TDC_FT_CK_EN;
	rg_type_t(qp_pma_top_REG_INTF_STS_9) fw_INTF_STS_9;
	rg_type_t(qp_pma_top_REG_INTF_STS_0) fw_INTF_STS_0;
	rg_type_t(qp_pma_top_REG_QP_TX_DBG_0) fw_QP_TX_DBG_0;
	//rg_type_t(REG_PHYD_MON5) fw_PHYD_MON5;
	rg_type_t(qp_pma_top_REG_RX_CTRL_14) fw_RX_CTRL_14;
	rg_type_t(qp_pma_top_REG_RX_CTRL_29) fw_RX_CTRL_29;
	rg_type_t(qp_pma_top_REG_RX_CTRL_30) fw_RX_CTRL_30;
	rg_type_t(qp_pma_top_REG_RX_CTRL_31) fw_RX_CTRL_31;
	rg_type_t(qp_pma_top_REG_RX_CTRL_32) fw_RX_CTRL_32;
	rg_type_t(qp_pma_top_REG_RX_CTRL_33) fw_RX_CTRL_33;
	rg_type_t(qp_pma_top_REG_RX_CTRL_34) fw_RX_CTRL_34;
	rg_type_t(qp_pma_top_REG_RX_CTRL_42) fw_RX_CTRL_42;
	rg_type_t(qp_pma_top_REG_RX_CTRL_43) fw_RX_CTRL_43;
	rg_type_t(qp_pma_top_REG_RX_CTRL_44) fw_RX_CTRL_44;
	//rg_type_t(REG_PHYD_MON2) fw_PHYD_MON2;
	rg_type_t(qp_pma_top_REG_QP_TX_BIST_DBG_1) fw_QP_TX_BIST_DBG_1;
	//rg_type_t(REG_REG_DBG_MOD_SEL) fw_REG_DBG_MOD_SEL;
	//rg_type_t(REG_REG_DBG_PORT_SEL) fw_REG_DBG_PORT_SEL;

	u32 PLL_Kcode, PLL_K_done;
	void * virtAddr;

//*******  load efuse
	fw_INTF_CTRL_8.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_INTF_CTRL_8);
	fw_INTF_CTRL_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_INTF_CTRL_9);

//*******  PLL Kband code
	fw_RG_QP_TDC_FT_CK_EN.dat.value = Reg_R(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN);
	fw_RG_QP_TDC_FT_CK_EN.hal.RG_QP_PLL_DEBUG_SEL = 0x0; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN, fw_RG_QP_TDC_FT_CK_EN.dat.value); //write addr: 0x1FA5F038 = 0x80040100
	fw_INTF_STS_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_9);

	PLL_Kcode = fw_INTF_STS_9.hal.ro_ad_qp_pll_vcocal_state_intf;
	PLL_K_done = fw_INTF_STS_9.hal.ro_ad_qp_pll_vcocal_state_intf >> 7;
	
	fw_RG_QP_TDC_FT_CK_EN.hal.RG_QP_PLL_DEBUG_SEL = 0x1; 
	Reg_W(QP_ANA_BASE, QP_ANA_OFFSET, _RG_QP_TDC_FT_CK_EN, fw_RG_QP_TDC_FT_CK_EN.dat.value); //write addr: 0x1FA5F038 = 0x800C0100
	fw_INTF_STS_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_9);

	PLL_Kcode = ((PLL_Kcode<<4) |fw_INTF_STS_9.hal.ro_ad_qp_pll_vcocal_state_intf) & 0x7ff;
	
//*******  Tx enable
	fw_INTF_STS_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_0);

//*******  Tx Detect Rx
	fw_QP_TX_DBG_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_TX_DBG_0);

	//fw_PHYD_MON5.dat.value = Reg_R(_BASE, _OFFSET,  _PHYD_MON5);

//*******  Rx Dig flow
	fw_RX_CTRL_14.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_14);

//*******  LEQ : 
	fw_RX_CTRL_29.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_29);

//*******  PI: 
	fw_RX_CTRL_30.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_30);

//*******  sigdet: 
	fw_RX_CTRL_31.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_31);

//*******  saos: 
	fw_RX_CTRL_32.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_32);

//*******  eq: 
	fw_RX_CTRL_33.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_33);
	fw_RX_CTRL_34.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_34);
	fw_RX_CTRL_42.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_42);
	fw_RX_CTRL_43.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_43);

//*******  FLL K_band
	//fw_RX_CTRL_43.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_43);
	fw_RX_CTRL_44.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_44);
	//fw_PHYD_MON2.dat.value = Reg_R(_BASE, _OFFSET,  _PHYD_MON2);

//*******  Rx data
	fw_INTF_STS_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_9);
	//fw_RX_CTRL_34.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_34);
	fw_QP_TX_BIST_DBG_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_QP_TX_BIST_DBG_1);

//*******  PIPE Rx data
/*	fw_REG_DBG_MOD_SEL.dat.value = Reg_R(_BASE, _OFFSET, _REG_DBG_MOD_SEL);
	fw_REG_DBG_MOD_SEL.hal.DBG_MOD_SEL0 = 0x3; 
	fw_REG_DBG_MOD_SEL.hal.DBG_MOD_SEL1 = 0x3; 
	fw_REG_DBG_MOD_SEL.hal.DBG_MOD_SEL2 = 0x3; 
	fw_REG_DBG_MOD_SEL.hal.DBG_MOD_SEL3 = 0x3; 
	Reg_W(_BASE, _OFFSET, _REG_DBG_MOD_SEL, fw_REG_DBG_MOD_SEL.dat.value); //write addr: 0x1FA92518 = 0x3030303

	fw_REG_DBG_PORT_SEL.dat.value = Reg_R(_BASE, _OFFSET, _REG_DBG_PORT_SEL);
	fw_REG_DBG_PORT_SEL.hal.DBG_PORT_SEL0 = 0x84; 
	fw_REG_DBG_PORT_SEL.hal.DBG_PORT_SEL1 = 0x85; 
	fw_REG_DBG_PORT_SEL.hal.DBG_PORT_SEL2 = 0x86; 
	fw_REG_DBG_PORT_SEL.hal.DBG_PORT_SEL3 = 0x7; 
	Reg_W(_BASE, _OFFSET, _REG_DBG_PORT_SEL, fw_REG_DBG_PORT_SEL.dat.value); //write addr: 0x1FA9251C = 0x7868584
*/

//print
	printk(">>>>>>>>>>>>>>   Load efuse check\n");
	printk("Tx term sel : 0x%x; \n", fw_INTF_CTRL_8.hal.rg_da_qp_tx_term_sel_force); //read addr: 0x1FA5E364 [23:16]
	printk("Rx term sel : 0x%x; \n", fw_INTF_CTRL_9.hal.rg_da_qp_rx_imp_sel_force); //read addr: 0x1FA5E364 [23:16]

	printk(">>>>>>>>>>>>>>   PLL Kband code\n");
	if(PLL_K_done !=1)
		printk("PLL_K_Cplt : 0x%x; **\n", PLL_K_done); //read addr: 0x1FA5E364 [23:16]

	printk("PLL Kband : 0x%x; \n", PLL_Kcode); //read addr: 0x1FA5E364 [23:16]

	printk(">>>>>>>>>>>>>>   Tx enable\n");
	if((fw_INTF_STS_0.hal.ro_da_qp_tx_data_en) != 0x1)
		printk(" : 0x%x; **\n", fw_INTF_STS_0.hal.ro_da_qp_tx_data_en); //read addr: 0x1FA5E340 [22:22]

	printk(">>>>>>>>>>>>>>   Tx Detect Rx\n");
	if(((fw_QP_TX_DBG_0.hal.ro_qp_tx_debug1>>2) & 0x1) != 0x1)
		printk("Detect_Rx Result : 0x%x; **\n", (fw_QP_TX_DBG_0.hal.ro_qp_tx_debug1>>2) & 0x1); //read addr: 0x1FA5E800 [10:10]
	//printk("Controller Detect_Rx Result : 0x%x; \n", fw_PHYD_MON5.hal.rgs_ssusb_rxdetected); //read addr: 0x1FA959B4 [0:0]

	printk(">>>>>>>>>>>>>>   Rx Dig flow\n");
	printk("Rx cur state : 0x%x; \n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>0) & 0x7); //read addr: 0x1FA5E660 [2:0]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>3) & 0x1) != 0x1)
		printk("freq_lock : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>3) & 0x1); //read addr: 0x1FA5E660 [3:3]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>4) & 0x1) != 0x1)
		printk("freq_det_en : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>4) & 0x1); //read addr: 0x1FA5E660 [4:4]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>5) & 0x1) != 0x0)
		printk("CDR_fail_deglitch : 0x%x; ***\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>5) & 0x1); //read addr: 0x1FA5E660 [5:5]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>6) & 0x1) != 0x1)
		printk("RX_LEQOS_EN_done : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>6) & 0x1); //read addr: 0x1FA5E660 [6:6]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>7) & 0x1) != 0x1)
		printk("PR_STABLE : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug>>7) & 0x1); //read addr: 0x1FA5E660 [7:7]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>0) & 0x1) != 0x1)
		printk("RX_SAOS_EN_done : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>0) & 0x1); //read addr: 0x1FA5E660 [8:8]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>1) & 0x1) != 0x1)
		printk("PCIE_SIGDET_CAL_EN_done: 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>1) & 0x1); //read addr: 0x1FA5E660 [9:9]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>2) & 0x1) != 0x1)
		printk("sig det cal finish : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>2) & 0x1); //read addr: 0x1FA5E660 [10:10]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>3) & 0x1) != 0x0)
		printk("CDR_PWD,  start to PR/PD/RX FLOW : 0x%x; ***\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>3) & 0x1); //read addr: 0x1FA5E660 [11:11]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>4) & 0x1) != 0x0)
		printk("CDR_LCK2REF : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>4) & 0x1); //read addr: 0x1FA5E660 [12:12]
	//if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>5) & 0x1) != 0x0)
	printk("LCK2REF event (retrain +1): 0x%x; \n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>5) & 0x1); //read addr: 0x1FA5E660 [13:13]
	printk("PCS link error : 0x%x; \n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>6) & 0x1); //read addr: 0x1FA5E660 [14:14]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>7) & 0x1) != 0x1)
		printk("CDR_LPF_RSTB : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>7) & 0x1); //read addr: 0x1FA5E660 [15:15]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>0) & 0x1) != 0x1)
		printk("SSUSB_CDR_STABLE = mean EQ_RDY : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>0) & 0x1); //read addr: 0x1FA5E660 [16:16]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>1) & 0x1) != 0x0)
		printk("SSUSB_BISA_PWD = mean PLL_SATBLE : 0x%x; ***\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>1) & 0x1); //read addr: 0x1FA5E660 [17:17]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>2) & 0x1) != 0x1)
		printk("AD_SSUSB_CDR_VOCAL_CPLT (KBAND_DONE) : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>2) & 0x1); //read addr: 0x1FA5E660 [18:18]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>3) & 0x1) != 0x1)
		printk("cdr_settle_rdy_ok (dly time to settle CDR when lck2ref cnt ) : 0x%x; ***\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>3) & 0x1); //read addr: 0x1FA5E660 [19:19]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>4) & 0x1) != 0x1)
		printk("k_band_rdy_n  : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>4) & 0x1); //read addr: 0x1FA5E660 [20:20]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>5) & 0x1) != 0x1)
		printk("RX_PI_CAL_EN_done : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>5) & 0x1); //read addr: 0x1FA5E660 [21:21]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>6) & 0x1) != 0x1)
		printk("saos_rdy (all cal are done) : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>6) & 0x1); //read addr: 0x1FA5E660 [22:22]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>7) & 0x1) != 0x1)
		printk("sig_det_wait_rdy_mask (sigdet cal rdy) : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>7) & 0x1); //read addr: 0x1FA5E660 [23:23]
	printk("PCIE_SIGDET_CAL_OFFSET : 0x%x; \n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>0) & 0x1F); //read addr: 0x1FA5E660 [28:24]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>5) & 0x1) != 0x1)
		printk("RX_EQ_RDY : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>5) & 0x1); //read addr: 0x1FA5E660 [29:29]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>6) & 0x1) != 0x1)
		printk("RX_EQ_EN_done : 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>6) & 0x1); //read addr: 0x1FA5E660 [30:30]
	if(((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>7) & 0x1) != 0x1)
		printk("pwr_on_finish (1:SAOS done): 0x%x; **\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_3>>7) & 0x1); //read addr: 0x1FA5E660 [31:31]

	printk("\n>>>>>>>>>>>>>>   LEQ : \n");
	if(((fw_RX_CTRL_29.hal.qphy_rx_ctrl_debug_4>>0) & 0x1) != 0x1)
		printk("ro_debug_leqos_en_done : 0x%x; **\n", (fw_RX_CTRL_29.hal.qphy_rx_ctrl_debug_4>>0) & 0x1); //read addr: 0x1FA5E69C [0:0]
	printk("ro_debug_leqos_en_done_cnt : 0x%x; \n", (fw_RX_CTRL_29.hal.qphy_rx_ctrl_debug_4>>1) & 0xFF); //read addr: 0x1FA5E69C [8:1]
	printk("ro_leqos_en_cnt (time) : 0x%x; \n", (fw_RX_CTRL_29.hal.qphy_rx_ctrl_debug_4>>9) & 0x7FFFFF); //read addr: 0x1FA5E69C [31:9]

	printk(">>>>>>>>>>>>>>   PI: \n");
	if(((fw_RX_CTRL_30.hal.qphy_rx_ctrl_debug_5>>0) & 0x1) != 0x1)
		printk("ro_debug_pi_cal_en_done : 0x%x; **\n", (fw_RX_CTRL_30.hal.qphy_rx_ctrl_debug_5>>0) & 0x1); //read addr: 0x1FA5E6A0 [0:0]
	printk("ro_debug_pi_cal_en_done_cnt : 0x%x; \n", (fw_RX_CTRL_30.hal.qphy_rx_ctrl_debug_5>>1) & 0xFF); //read addr: 0x1FA5E6A0 [8:1]
	printk("ro_pi_en_cnt : mean pi cal  en  time : 0x%x; \n", (fw_RX_CTRL_30.hal.qphy_rx_ctrl_debug_5>>9) & 0x7FFFFF); //read addr: 0x1FA5E6A0 [31:9]

	printk(">>>>>>>>>>>>>>   sigdet: \n");
	if(((fw_RX_CTRL_31.hal.qphy_rx_ctrl_debug_6>>0) & 0x1) != 0x1)
		printk("ro_debug_sigdet_en_done : 0x%x; **\n", (fw_RX_CTRL_31.hal.qphy_rx_ctrl_debug_6>>0) & 0x1); //read addr: 0x1FA5E6A4 [0:0]
	printk("ro_debug_sigdet_en_done_cnt :  0x%x; \n", (fw_RX_CTRL_31.hal.qphy_rx_ctrl_debug_6>>1) & 0xFF); //read addr: 0x1FA5E6A4 [8:1]
	printk("ro_sigdet_en_cnt (time) : 0x%x; \n", (fw_RX_CTRL_31.hal.qphy_rx_ctrl_debug_6>>9) & 0x7FFFFF); //read addr: 0x1FA5E6A4 [31:9]

	printk(">>>>>>>>>>>>>>   saos: \n");
	if(((fw_RX_CTRL_32.hal.qphy_rx_ctrl_debug_7>>0) & 0x1) != 0x1)
		printk("ro_debug_saos_en_done : 0x%x; **\n", (fw_RX_CTRL_32.hal.qphy_rx_ctrl_debug_7>>0) & 0x1); //read addr: 0x1FA5E6A8 [0:0]
	printk("ro_debug_saos_en_done_cnt : 0x%x; \n", (fw_RX_CTRL_32.hal.qphy_rx_ctrl_debug_7>>1) & 0xFF); //read addr: 0x1FA5E6A8 [8:1]
	printk("ro_saos_en_cnt : 0x%x; \n", (fw_RX_CTRL_32.hal.qphy_rx_ctrl_debug_7>>9) & 0x7FFFFF); //read addr: 0x1FA5E6A8 [31:9]

	printk(">>>>>>>>>>>>>>   eq: \n");
	if(((fw_RX_CTRL_33.hal.qphy_rx_ctrl_debug_8>>0) & 0x1) != 0x1)
		printk("ro_debug_eq_en_done : 0x%x; **\n", (fw_RX_CTRL_33.hal.qphy_rx_ctrl_debug_8>>0) & 0x1); //read addr: 0x1FA5E6AC [0:0]
	printk("ro_debug_eq_en_done_cnt : 0x%x; \n", (fw_RX_CTRL_33.hal.qphy_rx_ctrl_debug_8>>1) & 0xFF); //read addr: 0x1FA5E6AC [8:1]
	printk("ro_eq_en_cnt : 0x%x; \n", (fw_RX_CTRL_33.hal.qphy_rx_ctrl_debug_8>>9) & 0x7FFFFF); //read addr: 0x1FA5E6AC [31:9]
	if(((fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>0) & 0x1) != 0x1)
		printk("ro_debug_lck2ref_pe_event : 0x%x; **\n", (fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>0) & 0x1); //read addr: 0x1FA5E6B0 [0:0]
	printk("ro_debug_lck2ref_pe_cnt : 0x%x; \n", (fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>1) & 0xFF); //read addr: 0x1FA5E6B0 [8:1]
	printk("ro_fredet_state : 0x%x; \n", (fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>9) & 0xF); //read addr: 0x1FA5E6B0 [12:9]
	if(((fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>13) & 0x1) != 0x0)
		printk("RX_AFE_PWD : 0x%x; **\n", (fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>13) & 0x1); //read addr: 0x1FA5E6B0 [13:13]
	if(((fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>14) & 0x1) != 0x0)
		printk("PCIE_SIGDET_CAL_EN : 0x%x; **\n", (fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>14) & 0x1); //read addr: 0x1FA5E6B0 [14:14]
	printk("CDR_LPF_KI_GAIN : 0x%x; \n", (fw_RX_CTRL_42.hal.ro_qp_reserve_5>>0) & 0x7); //read addr: 0x1FA5E6D0 [10:8]
	printk("RX_DCLEQ : 0x%x; \n", (fw_RX_CTRL_42.hal.ro_qp_reserve_5>>3) & 0xF); //read addr: 0x1FA5E6D0 [14:11]
	printk("RX_DCD0 : 0x%x; \n", (fw_RX_CTRL_42.hal.ro_qp_reserve_6>>0) & 0x3F); //read addr: 0x1FA5E6D0 [21:16]
	printk("RX_DCD1 : 0x%x; \n", (fw_RX_CTRL_42.hal.ro_qp_reserve_7>>0) & 0x3F); //read addr: 0x1FA5E6D0 [29:24]
	printk("RX_DCE0 : 0x%x; \n", (fw_RX_CTRL_43.hal.ro_qp_reserve_8>>0) & 0x3F); //read addr: 0x1FA5E6D4 [5:0]
	printk("RX_DCE1 : 0x%x; \n", (fw_RX_CTRL_43.hal.ro_qp_reserve_9>>0) & 0x3F); //read addr: 0x1FA5E6D4 [13:8]
	printk("RX_DCEYE0 : 0x%x; \n", (fw_RX_CTRL_43.hal.ro_qp_reserve_10>>0) & 0x7F); //read addr: 0x1FA5E6D4 [22:16]
	printk("RX_DCLEQOS : 0x%x; \n", (fw_RX_CTRL_43.hal.ro_qp_reserve_11>>0) & 0x1F); //read addr: 0x1FA5E6D4 [28:24]

	printk(">>>>>>>>>>>>>>   FLL K_band\n");
	printk("ro_fll_kband_idacf : 0x%x; \n", ((fw_RX_CTRL_43.hal.ro_qp_reserve_11 & 0xe0) <<3) |fw_RX_CTRL_44.hal.ro_qp_reserve_12 ); //read addr: 0x1FA5E6D4 [31:29] ; read addr: 0x1FA5E6D8 [7:0]
	//printk("ro_fll_kband_idacf[7:0] : 0x%x; \n", fw_RX_CTRL_44.hal.ro_qp_reserve_12); //read addr: 0x1FA5E6D8 [7:0]
	//if((fw_PHYD_MON2.hal.rgs_ssusb_rxpll_lock) != 0x1)
	//	printk("rgs_ssusb_rxpll_lock : 0x%x; **\n", fw_PHYD_MON2.hal.rgs_ssusb_rxpll_lock); //read addr: 0x1FA959A8 [10:10]

	printk(">>>>>>>>>>>>>>   Rx data\n");
	if((fw_INTF_STS_9.hal.ro_ad_qp_sigdet_out_intf) != 0x1)
		printk("RX signal detect : 0x%x; **\n", fw_INTF_STS_9.hal.ro_ad_qp_sigdet_out_intf); //read addr: 0x1FA5E364 [0:0]
	if(((fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>15) & 0x1) != 0x1)
		printk("PCIE_SIGDET_OUT : 0x%x; **\n", (fw_RX_CTRL_34.hal.qphy_rx_ctrl_debug_9>>15) & 0x1); //read addr: 0x1FA5E6B0 [15:15]
	printk("pcs rx data : 0x%x; \n", fw_QP_TX_BIST_DBG_1.hal.ro_pcs_bist_debug); //read addr: 0x1FA5E83C [31:0]

	printk(">>>>>>>>>>>>>>   PIPE Rx data\n");
	virtAddr = ioremap ((phys_addr_t)0x1fa92518,4);
	writel(0x03030303 ,virtAddr);
	virtAddr = ioremap ((phys_addr_t)0x1fa9251c,4);
	writel(0x7868584 ,virtAddr);
	virtAddr = ioremap ((phys_addr_t)0x1fa925f0,4);
	printk("PIPE rx data : 0x%x; \n",readl(virtAddr));
	
}

#define EQ_ARRAY_MAX 40
void QPHY_EQ_Monitor(void)
{	
	//rg_type_t(qp_pma_top_REG_RX_CTRL_42) fw_RX_CTRL_42;
	//rg_type_t(qp_pma_top_REG_RX_CTRL_33) fw_RX_CTRL_33;
	u32 val[EQ_ARRAY_MAX], val2[EQ_ARRAY_MAX], time[EQ_ARRAY_MAX];
	u32 val_now, val_last;	
	u32 val_now2, val_last2;	
	u32 time_cnt, array_cnt, x;
	val_last = 0; time_cnt = 0; array_cnt = 0;
	val_last2 = 0;

	while(time_cnt < M_CNT)
	{
		val_now = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_33);
		val_now2 = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_42);
		//fw_RX_CTRL_42.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_42);
		//fw_RX_CTRL_33.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_33);

		if(((val_now != val_last) ||(val_now2 != val_last2)) && (array_cnt < EQ_ARRAY_MAX))
		{
			val[array_cnt] = val_now;
			val2[array_cnt] = val_now2;
			time[array_cnt] = time_cnt;
			array_cnt++;
		}						
		val_last = val_now;
		val_last2 = val_now2;
		time_cnt++;
		udelay(1);
	}		

	printk("QPhy EQ monitor:\n");
	for(x=0; x<array_cnt; x++)		
		printk("%05d us, 0x1fa5e6ac: 0x%x, 0x1fa5e6d0: 0x%x\n", ( time[x] * 1170)/1000, val[x], val2[x]);
}


/************************************************************************
*     RX Eye Scan
*************************************************************************
*/

void QP_PCIE_Read_EQ(u32 port)
{
	rg_type_t(qp_pma_top_REG_RX_CTRL_14) fw_RX_CTRL_14;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_STS_3) fw_PON_RXFEDIG_STS_3;
	rg_type_t(qp_pma_top_REG_RX_CTRL_42) fw_RX_CTRL_42;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_STS_1) fw_PON_RXFEDIG_STS_1;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_STS_2) fw_PON_RXFEDIG_STS_2;

	u32 EQ_READY = 0;
	unsigned int temp = 0;

	fw_RX_CTRL_14.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_14);
	printk("EQ_READY = 0x%x;\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>0) & 0x1); //read addr: 0x1FA5E660 [16:16]
	EQ_READY = ((fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_2>>0) & 0x1); //EQ_READY
	if (EQ_READY == 1)
	{
		printk("LEQ Auto training done\n");
		fw_PON_RXFEDIG_STS_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_3);
		printk("DCLEQ = 0x%x;\n", fw_PON_RXFEDIG_STS_3.hal.RGS_SSUSB_EQ_DCLEQ); //read addr: 0x1FA5E148 [11:08]

	}

	fw_RX_CTRL_42.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_42);
	printk("ro_qp_reserve_5[6:3] = 0x%x;\n", (fw_RX_CTRL_42.hal.ro_qp_reserve_5>>3) & 0xF); //read addr: 0x1FA5E6D0 [14:11]

	fw_PON_RXFEDIG_STS_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_1);
	printk("DCDOH = 0x%x;\n", fw_PON_RXFEDIG_STS_1.hal.RGS_SSUSB_EQ_DCD0H); //read addr: 0x1FA5E140 [06:00]

	fw_PON_RXFEDIG_STS_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_1);
	printk("DCD0L = 0x%x;\n", fw_PON_RXFEDIG_STS_1.hal.RGS_SSUSB_EQ_DCD0L); //read addr: 0x1FA5E140 [14:08]

	fw_PON_RXFEDIG_STS_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_1);
	printk("DCD1H = 0x%x;\n", fw_PON_RXFEDIG_STS_1.hal.RGS_SSUSB_EQ_DCD1H); //read addr: 0x1FA5E140 [22:16]

	fw_PON_RXFEDIG_STS_1.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_1);
	printk("DCD1L = 0x%x;\n", fw_PON_RXFEDIG_STS_1.hal.RGS_SSUSB_EQ_DCD1L); //read addr: 0x1FA5E140 [30:24]

	fw_PON_RXFEDIG_STS_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_2);
	printk("DCE0 = 0x%x;\n", fw_PON_RXFEDIG_STS_2.hal.RGS_SSUSB_EQ_DCE0); //read addr: 0x1FA5E144 [06:00]

	fw_PON_RXFEDIG_STS_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_2);
	printk("DCE1 = 0x%x;\n", fw_PON_RXFEDIG_STS_2.hal.RGS_SSUSB_EQ_DCE1); //read addr: 0x1FA5E144 [14:08]

	fw_PON_RXFEDIG_STS_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_3);
	printk("DCHHL = 0x%x;\n", fw_PON_RXFEDIG_STS_3.hal.RGS_SSUSB_EQ_DCHHL); //read addr: 0x1FA5E148 [06:00]

	fw_PON_RXFEDIG_STS_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_3);
	printk("DCLHL = 0x%x;\n", fw_PON_RXFEDIG_STS_3.hal.RGS_SSUSB_EQ_DCLHL); //read addr: 0x1FA5E148 [30:24]

	fw_PON_RXFEDIG_STS_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_2);
	printk("DCEYE0 = 0x%x;\n", fw_PON_RXFEDIG_STS_2.hal.RGS_SSUSB_EQ_DCEYE0); //read addr: 0x1FA5E144 [22:16]

	fw_PON_RXFEDIG_STS_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_2);
	printk("DCEYE1 = 0x%x;\n", fw_PON_RXFEDIG_STS_2.hal.RGS_SSUSB_EQ_DCEYE1); //read addr: 0x1FA5E144 [30:24]

	fw_PON_RXFEDIG_STS_3.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_3);
	printk("DCLEQOS = 0x%x;\n", fw_PON_RXFEDIG_STS_3.hal.RGS_SSUSB_EQ_DCLEQOS); //read addr: 0x1FA5E148 [20:16]

}


u8 QP_PCIE_Get_PI_OS_Cal(u32 port, u8 en)
{
	rg_type_t(qp_pma_top_REG_RX_CTRL_9) fw_RX_CTRL_9;
	rg_type_t(qp_pma_top_REG_RX_CTRL_14) fw_RX_CTRL_14;
	rg_type_t(qp_pma_top_REG_INTF_STS_4) fw_INTF_STS_4;


	if (en == 0)
	{
		return Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_4); //PR_PIEYE
	} 
	else
	{
		fw_RX_CTRL_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_9);
		fw_RX_CTRL_9.hal.rg_force_rx_pi_cal_en_sel = 0x1; 
		fw_RX_CTRL_9.hal.rg_force_rx_pi_cal_en = 0x0; 
		Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_9, fw_RX_CTRL_9.dat.value); //write addr: 0x1FA5E64C = 0x4

		fw_RX_CTRL_9.hal.rg_force_rx_pi_cal_en = 0x1; 
		Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_9, fw_RX_CTRL_9.dat.value); //write addr: 0x1FA5E64C = 0xC
		mdelay(1);

		fw_RX_CTRL_9.hal.rg_force_rx_pi_cal_en = 0x0; 
		fw_RX_CTRL_9.hal.rg_force_rx_pi_cal_en_sel = 0x0; 
		Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_9, fw_RX_CTRL_9.dat.value); //write addr: 0x1FA5E64C = 0x0

		fw_RX_CTRL_14.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_RX_CTRL_14);
		printk("LCK2REF = 0 is LCK2DATA, plot eye: 0x%x;\n", (fw_RX_CTRL_14.hal.qphy_rx_ctrl_debug_1>>4) & 0x1); //read addr: 0x1FA5E660 [12:12]

		fw_INTF_STS_4.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_INTF_STS_4);
		printk("Read pi_os_cal : 0x%x;\n", fw_INTF_STS_4.hal.ro_da_qp_cdr_pr_pieye); //read addr: 0x1FA5E350 [22:16]

		return fw_INTF_STS_4.hal.ro_da_qp_cdr_pr_pieye; //PR_PIEYE
	}
}

u8 QP_PCIE_Get_DAC_OS_Cal(u32 port)
{
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_STS_7) fw_PON_RXFEDIG_STS_7;
	fw_PON_RXFEDIG_STS_7.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_7);
	printk("DAC_OS_CAL : 0x%x;\n", fw_PON_RXFEDIG_STS_7.hal.RGS_SSUSB_EQ_STATUS); //read addr: 0x1FA5E154 [23:16]
	
	return fw_PON_RXFEDIG_STS_7.hal.RGS_SSUSB_EQ_STATUS; //RGS_SSUSB_EQ_STATUS
}

void QP_PCIE_RX_Eye_Scan_Setting(u32 port, u8 osr)
{
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_8) fw_PON_RXFEDIG_CTRL_8;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_0) fw_PON_RXFEDIG_CTRL_0;
	
	u32 eye_mask = 0;

	if((osr % 2) == 0)
		eye_mask = 0x155;
	else
		eye_mask = 0x2AA;
		// eye_mask = 0xFFF;
		

	printk("eye_mask : 0x%x\n", eye_mask);

	fw_PON_RXFEDIG_CTRL_8.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_8);
	fw_PON_RXFEDIG_CTRL_8.hal.RG_QP_EQ_EYE_MASK = eye_mask; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_8, fw_PON_RXFEDIG_CTRL_8.dat.value); //write addr: 0x1FA5E120 = 0xF00002AA

	fw_PON_RXFEDIG_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0);
	fw_PON_RXFEDIG_CTRL_0.hal.RG_QP_EQ_EYE_CNT_EN = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0, fw_PON_RXFEDIG_CTRL_0.dat.value); //write addr: 0x1FA5E100 = 0x2001409

}

 
void QP_PCIE_y_code_force_sel(u32 port, u8 en)
{
	u32 tmp;
	u8 val = 0;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_12) fw_PON_RXFEDIG_CTRL_12;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_9) fw_PON_RXFEDIG_CTRL_9;

	fw_PON_RXFEDIG_CTRL_12.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_12);
	tmp = fw_PON_RXFEDIG_CTRL_12.hal.RG_QP_EQ_REV;
	// tmp = (0x0<<8) | (tmp & (~(0x1<<8)));
	tmp = (en<<8) | (tmp & (~(0x1<<8)));
	fw_PON_RXFEDIG_CTRL_12.hal.RG_QP_EQ_REV = tmp;
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_12, fw_PON_RXFEDIG_CTRL_12.dat.value); //write addr: 0x1FA5E130 = 0x380013

	if (en == 0)
		val = 0x0;
	else
		val = 0x11;

	// printk("val = 0x%x\n");

	fw_PON_RXFEDIG_CTRL_9.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_9);
	fw_PON_RXFEDIG_CTRL_9.hal.RG_QP_EQ_MON_SEL = val; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_9, fw_PON_RXFEDIG_CTRL_9.dat.value); //write addr: 0x1FA5E124 = 0x2
	mdelay(1);
}

void QP_PCIE_y_code_write(u32 port, int y)
{
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_2) fw_PON_RXFEDIG_CTRL_2;

	fw_PON_RXFEDIG_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_2);
	fw_PON_RXFEDIG_CTRL_2.hal.RG_QP_EQ_DEYE0OS_LFI = y; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_2, fw_PON_RXFEDIG_CTRL_2.dat.value); //write addr: 0x1FA5E108 = 0x400000
	mdelay(1);
}

void QP_PCIE_x_code_force_sel(u32 port, u8 en)
{
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_0) fw_PON_RXFEDIG_CTRL_0;

	fw_PON_RXFEDIG_CTRL_0.hal.RG_QP_EQ_EYE_MON_EN = en; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0, fw_PON_RXFEDIG_CTRL_0.dat.value); //write addr: 0x1FA5E100 = 0x2001409
	mdelay(1);
}

void QP_PCIE_x_code_write(u32 port, int x)
{
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_8) fw_PON_RXFEDIG_CTRL_8;

	fw_PON_RXFEDIG_CTRL_8.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_8);
	fw_PON_RXFEDIG_CTRL_8.hal.RG_QP_EQ_EYE_XOFFSET = x; 
	// printk("x = 0x%x\n",x);
	// printk("fw_PON_RXFEDIG_CTRL_8.dat.value = 0x%x\n",fw_PON_RXFEDIG_CTRL_8.dat.value);
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_8, fw_PON_RXFEDIG_CTRL_8.dat.value); //write addr: 0x1FA5E120 = 0xF00002AA
	mdelay(1);
}

u32 QP_PCIE_x_code_move(u32 port, int x, int step, u8 osr)
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
		QP_PCIE_x_code_write(port, temp);
	}

	return temp;
}

u32 QP_PCIE_Read_Error_Cnt(u32 port, int x, int y, u8 osr)
{
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_0) fw_PON_RXFEDIG_CTRL_0;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_2) fw_PON_RXFEDIG_CTRL_2;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_STS_4) fw_PON_RXFEDIG_STS_4;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_STS_5) fw_PON_RXFEDIG_STS_5;

	fw_PON_RXFEDIG_CTRL_2.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_2);
	fw_PON_RXFEDIG_CTRL_2.hal.RG_QP_EQ_DEYE0OS_LFI = y; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_2, fw_PON_RXFEDIG_CTRL_2.dat.value); //write addr: 0x1FA5E108 = 0x400000


	fw_PON_RXFEDIG_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0);
	fw_PON_RXFEDIG_CTRL_0.hal.RG_QP_EQ_EYE_CNT_EN = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0, fw_PON_RXFEDIG_CTRL_0.dat.value); //write addr: 0x1FA5E100 = 0x2001709
	mdelay(1);

	fw_PON_RXFEDIG_CTRL_0.hal.RG_QP_EQ_EYE_CNT_EN = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_0, fw_PON_RXFEDIG_CTRL_0.dat.value); //write addr: 0x1FA5E100 = 0x2001609

	// fw_PON_RXFEDIG_STS_5.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_5);
	// printk("//Code锟絇锟絖OSR锟組锟絯锟絥锟絕锟角拷锟斤拷ERRCNT : 0x%x;\n", fw_PON_RXFEDIG_STS_5.hal.RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1); //read addr: 0x1FA5E150 [19:00]

	if ((osr % 2) == 0)
		return Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_4); //RG_SSUSB_EQ_EYE_MONITOR_ERRCNT_0
	else
		return Reg_R(QP_PMA_BASE, QP_PMA_OFFSET,  _qp_pma_top_PON_RXFEDIG_STS_5); //RG_SSUSB_EQ_EYE_MONITOR_ERRCNT_1
}

void QP_PCIE_PIEYE_INIT(u32 port)
{
	printk("QP_PCIE_PIEYE_INIT.\n");
	rg_type_t(qp_pma_top_REG_RX_CTRL_46) fw_RX_CTRL_46;
	rg_type_t(qp_pma_top_REG_PON_RXFEDIG_CTRL_10) fw_PON_RXFEDIG_CTRL_10;
	rg_type_t(qp_pma_top_REG_RX_DLY_0) fw_RX_DLY_0;
	rg_type_t(qp_pma_top_REG_PLL_CTRL_0) fw_PLL_CTRL_0;

	fw_RX_CTRL_46.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46);
	fw_RX_CTRL_46.hal.rg_qp_force_usb_pcie_eye_pwd_sel = 0x1; 
	fw_RX_CTRL_46.hal.rg_qp_force_usb_pcie_eye_pwd = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_CTRL_46, fw_RX_CTRL_46.dat.value); //write addr: 0x1FA5E6E0 = 0x360010

	fw_PON_RXFEDIG_CTRL_10.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_10);
	fw_PON_RXFEDIG_CTRL_10.hal.RG_QP_EQ_PIEYE_INI = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PON_RXFEDIG_CTRL_10, fw_PON_RXFEDIG_CTRL_10.dat.value); //write addr: 0x1FA5E128 = 0x4002000

	fw_RX_DLY_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_DLY_0);
	fw_RX_DLY_0.hal.rg_qp_rx_pi_cal_en_h_dly = 0xFF; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_RX_DLY_0, fw_RX_DLY_0.dat.value); //write addr: 0x1FA5E614 = 0xFFF

	fw_PLL_CTRL_0.dat.value = Reg_R(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0);
	fw_PLL_CTRL_0.hal.rg_phya_auto_init = 0x0; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60000

	fw_PLL_CTRL_0.hal.rg_phya_auto_init = 0x1; 
	Reg_W(QP_PMA_BASE, QP_PMA_OFFSET, _qp_pma_top_PLL_CTRL_0, fw_PLL_CTRL_0.dat.value); //write addr: 0x1FA5E400 = 0x60001

}

void PCIe_QPhy_RX_Eye_Scan(u32 port, u8 interface)
{
	printk("PCIe QPhy RX Eye Scan START.\n");
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
			printk("QP_PCIE_RX_Eye_Scan Interface is not supported\n");
			break;
	}

		
	QP_PCIE_PIEYE_INIT(port);
	mdelay(10);
	
	switch(port){
		case 0: //5G
			PCIe_QPhy_5G_T2R();
			break;
		case 1: //2.5G
			PCIe_QPhy_2p5G_T2R();
			break;
		default:
			printk("QP_PCIE_RX_Eye_Scan Interface is not supported\n");
			break;
	}
	
	QP_PCIE_RX_Eye_Scan_Setting(port, osr);
	QP_PCIE_Read_EQ(port);
	QP_PCIE_x_code_force_sel(port, 0);
	QP_PCIE_y_code_force_sel(port, 0);
	pi_os_cal = QP_PCIE_Get_PI_OS_Cal(port, 1);
	dac_os_cal = QP_PCIE_Get_DAC_OS_Cal(port);

	x_code = pi_os_cal;
	printk("pi_os_cal = 0x%x\n", x_code);
	y_code = 64; //signed = -64

	QP_PCIE_x_code_write(port, x_code);
	QP_PCIE_y_code_write(port, y_code);
	QP_PCIE_x_code_force_sel(port, 1);
	QP_PCIE_y_code_force_sel(port, 1);

	printk("osr = %d\n", osr);
	printk("data start\n");
	//Move PI_Cal to -64
	for(i = 0; i < 64; i++)
	{
		x_code = QP_PCIE_x_code_move(port, x_code, -x_step, osr);
		mdelay(1);
	}

	for (i = 0; i < 128; i++)
	{
		for (j = 0; j < 128; j++) //start from -64 to 63
		{
			err_cnt = QP_PCIE_Read_Error_Cnt(port, x_code, y_code, osr);
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
			x_code = QP_PCIE_x_code_move(port, x_code, x_step, osr);
		}	
	}
}






/*****************************************************************
***************************** Gen3 PXP PCIe function *****************************
 ******************************************************************/


void PCIe_G3_Load_Efuse(void)
{
	rg_type_t(REG_RG_PXP_CMN_EN) fw_RG_PXP_CMN_EN;
	rg_type_t(REG_rg_force_da_pxp_tx_term_sel) fw_rg_force_da_pxp_tx_term_sel;
	rg_type_t(REG_RG_PXP_RX_SIGDET_NOVTH) fw_RG_PXP_RX_SIGDET_NOVTH;

	int COMMON_TRIM, tx_term_sel, RX_FE_50OHMS_SEL;
//*******  Load Efuse

	COMMON_TRIM = (get_phy_efuse(SerDes_PCIe_CMN_TRIM_valid_LSB, 1) == 1) ? get_phy_efuse(RG_PXP_PCIE_CMN_TRIM_LSB, 5) : 0x10;
	tx_term_sel = (get_phy_efuse(SerDes_PCIe_efuse_valid_LSB, 1) == 1) ? get_phy_efuse(RG_PXP_PCIE_TX0_TERM_SEL_LSB, 2) : 0x1;
	RX_FE_50OHMS_SEL = (get_phy_efuse(SerDes_PCIe_efuse_valid_LSB, 1) == 1) ? get_phy_efuse(RG_PXP_PCIE_RX0_FE_50OHMS_SEL_LSB, 2) : 0x1;

	fw_RG_PXP_CMN_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN);
	fw_RG_PXP_CMN_EN.hal.RG_PXP_CMN_TRIM = (COMMON_TRIM == -1) ? 0x10 : COMMON_TRIM;
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN, fw_RG_PXP_CMN_EN.dat.value); //write addr: 0x1FC7F000 = 0x10040000

	fw_rg_force_da_pxp_tx_term_sel.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_term_sel);
	fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_sel_da_pxp_tx_term_sel = 0x1; 
	fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_term_sel = (tx_term_sel == -1) ? 0x1 : tx_term_sel; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_term_sel, fw_rg_force_da_pxp_tx_term_sel.dat.value); //write addr: 0x1FC7E77C = 0x101

	fw_RG_PXP_RX_SIGDET_NOVTH.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH);
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_FE_50OHMS_SEL = (RX_FE_50OHMS_SEL == -1) ? 0x1 : RX_FE_50OHMS_SEL; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH, fw_RG_PXP_RX_SIGDET_NOVTH.dat.value); //write addr: 0x1FC7F114 = 0x1040000	
}


void PCIe_G3_PLL_init(void)
{
	u32 tmp;
	rg_type_t(REG_ADD_DIG_RESERVE_12) fw_ADD_DIG_RESERVE_12;
	rg_type_t(REG_ADD_DIG_RESERVE_27) fw_ADD_DIG_RESERVE_27;
	rg_type_t(REG_RG_PXP_CMN_EN) fw_RG_PXP_CMN_EN;
	rg_type_t(REG_ADD_DIG_RESERVE_34) fw_ADD_DIG_RESERVE_34;
	rg_type_t(REG_ADD_DIG_RESERVE_35) fw_ADD_DIG_RESERVE_35;
	rg_type_t(REG_RG_PCIE_CLKTX0_AMP) fw_RG_PCIE_CLKTX0_AMP;
	rg_type_t(REG_RG_PXP_PLL_MONCLK_SEL) fw_RG_PXP_PLL_MONCLK_SEL;
	rg_type_t(REG_SW_RST_SET) fw_SW_RST_SET;
	rg_type_t(REG_SS_TX_RST_B) fw_SS_TX_RST_B;
	rg_type_t(REG_ADD_DIG_RESERVE_30) fw_ADD_DIG_RESERVE_30;
	rg_type_t(REG_RG_PXP_CDR_PR_MONPR_EN) fw_RG_PXP_CDR_PR_MONPR_EN;
	rg_type_t(REG_RG_PXP_CDR_PD_PICAL_CKD8_INV) fw_RG_PXP_CDR_PD_PICAL_CKD8_INV;
	rg_type_t(REG_RG_PXP_RX_PHYCK_DIV) fw_RG_PXP_RX_PHYCK_DIV;
	rg_type_t(REG_rg_force_da_pxp_jcpll_ckout_en) fw_rg_force_da_pxp_jcpll_ckout_en;
	rg_type_t(REG_RG_PXP_JCPLL_SPARE_H) fw_RG_PXP_JCPLL_SPARE_H;
	rg_type_t(REG_RG_PXP_JCPLL_RST_DLY) fw_RG_PXP_JCPLL_RST_DLY;
	rg_type_t(REG_RG_PXP_JCPLL_SSC_DELTA) fw_RG_PXP_JCPLL_SSC_DELTA;
	rg_type_t(REG_RG_PXP_JCPLL_SSC_TRI_EN) fw_RG_PXP_JCPLL_SSC_TRI_EN;
	rg_type_t(REG_RG_PXP_JCPLL_VCO_TCLVAR) fw_RG_PXP_JCPLL_VCO_TCLVAR;
	rg_type_t(REG_RG_PXP_JCPLL_LPF_BR) fw_RG_PXP_JCPLL_LPF_BR;
	rg_type_t(REG_RG_PXP_JCPLL_LPF_BWC) fw_RG_PXP_JCPLL_LPF_BWC;
	rg_type_t(REG_RG_PXP_JCPLL_MMD_PREDIV_MODE) fw_RG_PXP_JCPLL_MMD_PREDIV_MODE;
	rg_type_t(REG_RG_PXP_JCPLL_MONCK_EN) fw_RG_PXP_JCPLL_MONCK_EN;
	rg_type_t(REG_rg_force_da_pxp_rx_fe_vos) fw_rg_force_da_pxp_rx_fe_vos;
	rg_type_t(REG_rg_force_da_pxp_jcpll_sdm_pcw) fw_rg_force_da_pxp_jcpll_sdm_pcw;
	rg_type_t(REG_RG_PXP_JCPLL_FREQ_MEAS_EN) fw_RG_PXP_JCPLL_FREQ_MEAS_EN;
	rg_type_t(REG_RG_PXP_JCPLL_IB_EXT_EN) fw_RG_PXP_JCPLL_IB_EXT_EN;
	rg_type_t(REG_RG_PXP_JCPLL_VCODIV) fw_RG_PXP_JCPLL_VCODIV;
	rg_type_t(REG_RG_PXP_JCPLL_KBAND_KFC) fw_RG_PXP_JCPLL_KBAND_KFC;
	rg_type_t(REG_scan_mode) fw_scan_mode;
	rg_type_t(REG_RG_PXP_JCPLL_SDM_HREN) fw_RG_PXP_JCPLL_SDM_HREN;
	rg_type_t(REG_RG_PXP_JCPLL_TCL_CMP_EN) fw_RG_PXP_JCPLL_TCL_CMP_EN;
	rg_type_t(REG_rg_force_da_pxp_txpll_ckout_en) fw_rg_force_da_pxp_txpll_ckout_en;
	rg_type_t(REG_RG_PXP_TXPLL_REFIN_INTERNAL) fw_RG_PXP_TXPLL_REFIN_INTERNAL;
	rg_type_t(REG_RG_PXP_TXPLL_SSC_DELTA1) fw_RG_PXP_TXPLL_SSC_DELTA1;
	rg_type_t(REG_RG_PXP_TXPLL_SSC_PERIOD) fw_RG_PXP_TXPLL_SSC_PERIOD;
	rg_type_t(REG_RG_PXP_TXPLL_CHP_IBIAS) fw_RG_PXP_TXPLL_CHP_IBIAS;
	rg_type_t(REG_RG_PXP_TXPLL_TCL_LPF_EN) fw_RG_PXP_TXPLL_TCL_LPF_EN;
	rg_type_t(REG_rg_force_da_pxp_cdr_pr_idac) fw_rg_force_da_pxp_cdr_pr_idac;
	rg_type_t(REG_rg_force_da_pxp_txpll_sdm_pcw) fw_rg_force_da_pxp_txpll_sdm_pcw;
	rg_type_t(REG_RG_PXP_TXPLL_SDM_DI_EN) fw_RG_PXP_TXPLL_SDM_DI_EN;
	rg_type_t(REG_RG_PXP_TXPLL_SSC_EN) fw_RG_PXP_TXPLL_SSC_EN;
	rg_type_t(REG_RG_PXP_TXPLL_SDM_ORD) fw_RG_PXP_TXPLL_SDM_ORD;
	rg_type_t(REG_RG_PXP_TXPLL_TCL_KBAND_VREF) fw_RG_PXP_TXPLL_TCL_KBAND_VREF;
	rg_type_t(REG_RG_PXP_TXPLL_LPF_BP) fw_RG_PXP_TXPLL_LPF_BP;
	rg_type_t(REG_RG_PXP_TXPLL_TCL_VTP_EN) fw_RG_PXP_TXPLL_TCL_VTP_EN;
	rg_type_t(REG_RG_PXP_TXPLL_KBAND_KS) fw_RG_PXP_TXPLL_KBAND_KS;
	rg_type_t(REG_RG_PXP_TXPLL_VCO_HALFLSB_EN) fw_RG_PXP_TXPLL_VCO_HALFLSB_EN;
	rg_type_t(REG_RG_PXP_TXPLL_VTP_EN) fw_RG_PXP_TXPLL_VTP_EN;
	rg_type_t(REG_RG_PXP_TXPLL_PHY_CK1_EN) fw_RG_PXP_TXPLL_PHY_CK1_EN;
	rg_type_t(REG_RG_PXP_TXPLL_KBAND_CODE) fw_RG_PXP_TXPLL_KBAND_CODE;
	rg_type_t(REG_RG_PXP_TXPLL_TCL_AMP_GAIN) fw_RG_PXP_TXPLL_TCL_AMP_GAIN;


//*******  
	fw_ADD_DIG_RESERVE_12.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_12);
	tmp = fw_ADD_DIG_RESERVE_12.hal.rg_dig_reserve_12;
	tmp = (0x1<<8) | (tmp & (~(0x1<<8)));
	fw_ADD_DIG_RESERVE_12.hal.rg_dig_reserve_12 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_12, fw_ADD_DIG_RESERVE_12.dat.value); //write addr: 0x1FC7E8B8 = 0x100	

	fw_ADD_DIG_RESERVE_27.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_27);
	tmp = fw_ADD_DIG_RESERVE_27.hal.rg_dig_reserve_27;
	tmp = (0x0<<16) | (tmp & (~(0x1<<16)));
	fw_ADD_DIG_RESERVE_27.hal.rg_dig_reserve_27 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_27, fw_ADD_DIG_RESERVE_27.dat.value); //write addr: 0x1FC7E908 = 0x100648

	//fw_RG_PXP_CMN_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN);
	//fw_RG_PXP_CMN_EN.hal.RG_PXP_CMN_TRIM = 0x10; 
	//Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN, fw_RG_PXP_CMN_EN.dat.value); //write addr: 0x1FC7F000 = 0x10040000

	fw_ADD_DIG_RESERVE_34.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_34);
	fw_ADD_DIG_RESERVE_34.hal.rg_dig_reserve_34 = 0xCCCBCCCB; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_34, fw_ADD_DIG_RESERVE_34.dat.value); //write addr: 0x1FC7E924 = 0xCCCBCCCB

	fw_ADD_DIG_RESERVE_35.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_35);
	fw_ADD_DIG_RESERVE_35.hal.rg_dig_reserve_35 = 0xCCCB; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_35, fw_ADD_DIG_RESERVE_35.dat.value); //write addr: 0x1FC7E928 = 0xCCCB

	fw_RG_PXP_CMN_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN);
	fw_RG_PXP_CMN_EN.hal.RG_PXP_CMN_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN, fw_RG_PXP_CMN_EN.dat.value); //write addr: 0x1FC7F000 = 0x10040001



//*******  clk out
	fw_RG_PCIE_CLKTX0_AMP.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PCIE_CLKTX0_AMP);
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PCIE_CLKTX0_AMP = 0x5; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PCIE_CLKTX0_OFFSET = 0x2; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PXP_PCIE_CLKTX0_HZ = 0x0; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PXP_PCIE_CLKTX0_IMP_SEL = 0x12; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PCIE_CLKTX0_SR = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PCIE_CLKTX0_AMP, fw_RG_PCIE_CLKTX0_AMP.dat.value); //write addr: 0x1FC7F098 = 0x90000205

	fw_RG_PXP_PLL_MONCLK_SEL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_PLL_MONCLK_SEL);
	fw_RG_PXP_PLL_MONCLK_SEL.hal.RG_PXP_PLL_CMN_RESERVE0 = 0xD; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_PLL_MONCLK_SEL, fw_RG_PXP_PLL_MONCLK_SEL.dat.value); //write addr: 0x1FC7F0A0 = 0x1000D09



//*******  ANA enable
	fw_SW_RST_SET.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET);
	fw_SW_RST_SET.hal.rg_sw_xfi_rxpcs_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_ref_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_rx_rst_n = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET, fw_SW_RST_SET.dat.value); //write addr: 0x1FC7E460 = 0x122

	fw_SS_TX_RST_B.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_TX_RST_B);
	fw_SS_TX_RST_B.hal.txcalib_rst_b = 0x1; 
	fw_SS_TX_RST_B.hal.tx_top_rst_b = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_TX_RST_B, fw_SS_TX_RST_B.dat.value); //write addr: 0x1FC7E260 = 0x101



//*******  RX
	udelay(1);
	fw_ADD_DIG_RESERVE_30.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_30);
	fw_ADD_DIG_RESERVE_30.hal.rg_dig_reserve_30 = 0x2A00090B; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_30, fw_ADD_DIG_RESERVE_30.dat.value); //write addr: 0x1FC7E914 = 0x2A00090B

	fw_RG_PXP_CDR_PR_MONPR_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_MONPR_EN);
	fw_RG_PXP_CDR_PR_MONPR_EN.hal.RG_PXP_CDR_PR_XFICK_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_MONPR_EN, fw_RG_PXP_CDR_PR_MONPR_EN.dat.value); //write addr: 0x1FC7F10C = 0x70604

	fw_RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PD_PICAL_CKD8_INV);
	fw_RG_PXP_CDR_PD_PICAL_CKD8_INV.hal.RG_PXP_CDR_PD_EDGE_DIS = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PD_PICAL_CKD8_INV, fw_RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value); //write addr: 0x1FC7F0DC = 0x0

	fw_RG_PXP_RX_PHYCK_DIV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV);
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_SEL = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV, fw_RG_PXP_RX_PHYCK_DIV.dat.value); //write addr: 0x1FC7F0D8 = 0x100010A



//*******  JCPLL SETTING (phase 1, NO SSC for K TXPLL)
	fw_rg_force_da_pxp_jcpll_ckout_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_ckout_en);
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_en = 0x1; 
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_ckout_en, fw_rg_force_da_pxp_jcpll_ckout_en.dat.value); //write addr: 0x1FC7E828 = 0x1000000

	fw_RG_PXP_JCPLL_SPARE_H.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SPARE_H);
	fw_RG_PXP_JCPLL_SPARE_H.hal.RG_PXP_JCPLL_SPARE_L = 0x20; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SPARE_H, fw_RG_PXP_JCPLL_SPARE_H.dat.value); //write addr: 0x1FC7F048 = 0x1020FF

	fw_RG_PXP_JCPLL_RST_DLY.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_RST_DLY);
	fw_RG_PXP_JCPLL_RST_DLY.hal.RG_PXP_JCPLL_PLL_RSTB = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_RST_DLY, fw_RG_PXP_JCPLL_RST_DLY.dat.value); //write addr: 0x1FC7F01C = 0x3000104

	fw_RG_PXP_JCPLL_SSC_DELTA.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA);
	fw_RG_PXP_JCPLL_SSC_DELTA.hal.RG_PXP_JCPLL_SSC_DELTA = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA, fw_RG_PXP_JCPLL_SSC_DELTA.dat.value); //write addr: 0x1FC7F038 = 0x31B0000

	fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN);
	fw_RG_PXP_JCPLL_SSC_TRI_EN.hal.RG_PXP_JCPLL_SSC_DELTA1 = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN, fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value); //write addr: 0x1FC7F034 = 0x1

	fw_RG_PXP_JCPLL_SSC_DELTA.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA);
	fw_RG_PXP_JCPLL_SSC_DELTA.hal.RG_PXP_JCPLL_SSC_PERIOD = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA, fw_RG_PXP_JCPLL_SSC_DELTA.dat.value); //write addr: 0x1FC7F038 = 0x0

	fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR);
	fw_RG_PXP_JCPLL_VCO_TCLVAR.hal.RG_PXP_JCPLL_SSC_PHASE_INI = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR, fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value); //write addr: 0x1FC7F030 = 0x301B

	fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN);
	fw_RG_PXP_JCPLL_SSC_TRI_EN.hal.RG_PXP_JCPLL_SSC_TRI_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN, fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value); //write addr: 0x1FC7F034 = 0x0

	fw_RG_PXP_JCPLL_LPF_BR.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BR);
	fw_RG_PXP_JCPLL_LPF_BR.hal.RG_PXP_JCPLL_LPF_BR = 0xA; 
	fw_RG_PXP_JCPLL_LPF_BR.hal.RG_PXP_JCPLL_LPF_BP = 0xC; 
	fw_RG_PXP_JCPLL_LPF_BR.hal.RG_PXP_JCPLL_LPF_BC = 0x1F; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BR, fw_RG_PXP_JCPLL_LPF_BR.dat.value); //write addr: 0x1FC7F008 = 0xC1F0A

	fw_RG_PXP_JCPLL_LPF_BWC.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BWC);
	fw_RG_PXP_JCPLL_LPF_BWC.hal.RG_PXP_JCPLL_LPF_BWC = 0x1E; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BWC, fw_RG_PXP_JCPLL_LPF_BWC.dat.value); //write addr: 0x1FC7F00C = 0x2FF001E

	fw_RG_PXP_JCPLL_LPF_BR.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BR);
	fw_RG_PXP_JCPLL_LPF_BR.hal.RG_PXP_JCPLL_LPF_BWR = 0xA; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BR, fw_RG_PXP_JCPLL_LPF_BR.dat.value); //write addr: 0x1FC7F008 = 0xA0C1F0A

	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MMD_PREDIV_MODE);
	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.RG_PXP_JCPLL_MMD_PREDIV_MODE = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MMD_PREDIV_MODE, fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value); //write addr: 0x1FC7F014 = 0x10001

	fw_RG_PXP_JCPLL_MONCK_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MONCK_EN);
	fw_RG_PXP_JCPLL_MONCK_EN.hal.RG_PXP_JCPLL_REFIN_DIV = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MONCK_EN, fw_RG_PXP_JCPLL_MONCK_EN.dat.value); //write addr: 0x1FC7F018 = 0x0

	fw_rg_force_da_pxp_rx_fe_vos.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_vos);
	fw_rg_force_da_pxp_rx_fe_vos.hal.rg_force_sel_da_pxp_jcpll_sdm_pcw = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_vos, fw_rg_force_da_pxp_rx_fe_vos.dat.value); //write addr: 0x1FC7E79C = 0x10000

	fw_rg_force_da_pxp_jcpll_sdm_pcw.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_sdm_pcw);
	fw_rg_force_da_pxp_jcpll_sdm_pcw.hal.rg_force_da_pxp_jcpll_sdm_pcw = 0x50000000; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_sdm_pcw, fw_rg_force_da_pxp_jcpll_sdm_pcw.dat.value); //write addr: 0x1FC7E800 = 0x50000000

	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MMD_PREDIV_MODE);
	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.RG_PXP_JCPLL_POSTDIV_D5 = 0x1; 
	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.RG_PXP_JCPLL_POSTDIV_D2 = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MMD_PREDIV_MODE, fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value); //write addr: 0x1FC7F014 = 0x1010001

	fw_RG_PXP_JCPLL_RST_DLY.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_RST_DLY);
	fw_RG_PXP_JCPLL_RST_DLY.hal.RG_PXP_JCPLL_RST_DLY = 0x4; 
	fw_RG_PXP_JCPLL_RST_DLY.hal.RG_PXP_JCPLL_SDM_DI_LS = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_RST_DLY, fw_RG_PXP_JCPLL_RST_DLY.dat.value); //write addr: 0x1FC7F01C = 0x104

	fw_RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_FREQ_MEAS_EN);
	fw_RG_PXP_JCPLL_FREQ_MEAS_EN.hal.RG_PXP_JCPLL_VCO_KBAND_MEAS_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_FREQ_MEAS_EN, fw_RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value); //write addr: 0x1FC7F04C = 0x10001

	fw_RG_PXP_JCPLL_IB_EXT_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_IB_EXT_EN);
	fw_RG_PXP_JCPLL_IB_EXT_EN.hal.RG_PXP_JCPLL_CHP_IOFST = 0x0; 
	fw_RG_PXP_JCPLL_IB_EXT_EN.hal.RG_PXP_JCPLL_CHP_IBIAS = 0xC; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_IB_EXT_EN, fw_RG_PXP_JCPLL_IB_EXT_EN.dat.value); //write addr: 0x1FC7F004 = 0xC0000

	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MMD_PREDIV_MODE);
	fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.hal.RG_PXP_JCPLL_MMD_PREDIV_MODE = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_MMD_PREDIV_MODE, fw_RG_PXP_JCPLL_MMD_PREDIV_MODE.dat.value); //write addr: 0x1FC7F014 = 0x1010001

	fw_RG_PXP_JCPLL_VCODIV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCODIV);
	fw_RG_PXP_JCPLL_VCODIV.hal.RG_PXP_JCPLL_VCO_HALFLSB_EN = 0x1; 
	fw_RG_PXP_JCPLL_VCODIV.hal.RG_PXP_JCPLL_VCO_CFIX = 0x1; 
	fw_RG_PXP_JCPLL_VCODIV.hal.RG_PXP_JCPLL_VCO_SCAPWR = 0x4; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCODIV, fw_RG_PXP_JCPLL_VCODIV.dat.value); //write addr: 0x1FC7F02C = 0x4010100

	fw_RG_PXP_JCPLL_IB_EXT_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_IB_EXT_EN);
	fw_RG_PXP_JCPLL_IB_EXT_EN.hal.RG_PXP_JCPLL_LPF_SHCK_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_IB_EXT_EN, fw_RG_PXP_JCPLL_IB_EXT_EN.dat.value); //write addr: 0x1FC7F004 = 0xC0000

	fw_RG_PXP_JCPLL_KBAND_KFC.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_KBAND_KFC);
	fw_RG_PXP_JCPLL_KBAND_KFC.hal.RG_PXP_JCPLL_POSTDIV_EN = 0x1; 
	fw_RG_PXP_JCPLL_KBAND_KFC.hal.RG_PXP_JCPLL_KBAND_KFC = 0x0; 
	fw_RG_PXP_JCPLL_KBAND_KFC.hal.RG_PXP_JCPLL_KBAND_KF = 0x3; 
	fw_RG_PXP_JCPLL_KBAND_KFC.hal.RG_PXP_JCPLL_KBAND_KS = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_KBAND_KFC, fw_RG_PXP_JCPLL_KBAND_KFC.dat.value); //write addr: 0x1FC7F010 = 0x1000300

	fw_RG_PXP_JCPLL_LPF_BWC.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BWC);
	fw_RG_PXP_JCPLL_LPF_BWC.hal.RG_PXP_JCPLL_KBAND_DIV = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BWC, fw_RG_PXP_JCPLL_LPF_BWC.dat.value); //write addr: 0x1FC7F00C = 0x1FF001E

	fw_scan_mode.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _scan_mode);
	fw_scan_mode.hal.rg_force_sel_da_pxp_jcpll_kband_load_en = 0x1; 
	fw_scan_mode.hal.rg_force_da_pxp_jcpll_kband_load_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _scan_mode, fw_scan_mode.dat.value); //write addr: 0x1FC7E884 = 0x100

	fw_RG_PXP_JCPLL_LPF_BWC.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BWC);
	fw_RG_PXP_JCPLL_LPF_BWC.hal.RG_PXP_JCPLL_KBAND_CODE = 0xE4; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_LPF_BWC, fw_RG_PXP_JCPLL_LPF_BWC.dat.value); //write addr: 0x1FC7F00C = 0x1E4001E

	fw_RG_PXP_JCPLL_SDM_HREN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_HREN);
	fw_RG_PXP_JCPLL_SDM_HREN.hal.RG_PXP_JCPLL_TCL_AMP_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_HREN, fw_RG_PXP_JCPLL_SDM_HREN.dat.value); //write addr: 0x1FC7F024 = 0x5010100

	fw_RG_PXP_JCPLL_TCL_CMP_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_TCL_CMP_EN);
	fw_RG_PXP_JCPLL_TCL_CMP_EN.hal.RG_PXP_JCPLL_TCL_LPF_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_TCL_CMP_EN, fw_RG_PXP_JCPLL_TCL_CMP_EN.dat.value); //write addr: 0x1FC7F028 = 0x1010400

	fw_RG_PXP_JCPLL_SPARE_H.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SPARE_H);
	fw_RG_PXP_JCPLL_SPARE_H.hal.RG_PXP_JCPLL_TCL_KBAND_VREF = 0xF; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SPARE_H, fw_RG_PXP_JCPLL_SPARE_H.dat.value); //write addr: 0x1FC7F048 = 0xF20FF

	fw_RG_PXP_JCPLL_SDM_HREN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_HREN);
	fw_RG_PXP_JCPLL_SDM_HREN.hal.RG_PXP_JCPLL_TCL_AMP_GAIN = 0x1; 
	fw_RG_PXP_JCPLL_SDM_HREN.hal.RG_PXP_JCPLL_TCL_AMP_VREF = 0x5; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_HREN, fw_RG_PXP_JCPLL_SDM_HREN.dat.value); //write addr: 0x1FC7F024 = 0x5010100

	fw_RG_PXP_JCPLL_TCL_CMP_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_TCL_CMP_EN);
	fw_RG_PXP_JCPLL_TCL_CMP_EN.hal.RG_PXP_JCPLL_TCL_LPF_BW = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_TCL_CMP_EN, fw_RG_PXP_JCPLL_TCL_CMP_EN.dat.value); //write addr: 0x1FC7F028 = 0x1010400

	fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR);
	fw_RG_PXP_JCPLL_VCO_TCLVAR.hal.RG_PXP_JCPLL_VCO_TCLVAR = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR, fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value); //write addr: 0x1FC7F030 = 0x301B

	fw_rg_force_da_pxp_jcpll_ckout_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_ckout_en);
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_ckout_en = 0x1; 
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_ckout_en = 0x1; 
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_en = 0x1; 
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_ckout_en, fw_rg_force_da_pxp_jcpll_ckout_en.dat.value); //write addr: 0x1FC7E828 = 0x1010101

	udelay(200);


//*******  TXPLL SETTING
	fw_rg_force_da_pxp_txpll_ckout_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_ckout_en);
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_sel_da_pxp_txpll_en = 0x1; 
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_da_pxp_txpll_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_ckout_en, fw_rg_force_da_pxp_txpll_ckout_en.dat.value); //write addr: 0x1FC7E854 = 0x1000000

	fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL);
	fw_RG_PXP_TXPLL_REFIN_INTERNAL.hal.RG_PXP_TXPLL_PLL_RSTB = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL, fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value); //write addr: 0x1FC7F064 = 0x1040001

	fw_RG_PXP_TXPLL_SSC_DELTA1.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_DELTA1);
	fw_RG_PXP_TXPLL_SSC_DELTA1.hal.RG_PXP_TXPLL_SSC_DELTA = 0x0; 
	fw_RG_PXP_TXPLL_SSC_DELTA1.hal.RG_PXP_TXPLL_SSC_DELTA1 = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_DELTA1, fw_RG_PXP_TXPLL_SSC_DELTA1.dat.value); //write addr: 0x1FC7F080 = 0x0

	fw_RG_PXP_TXPLL_SSC_PERIOD.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_PERIOD);
	fw_RG_PXP_TXPLL_SSC_PERIOD.hal.RG_PXP_TXPLL_SSC_PERIOD = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_PERIOD, fw_RG_PXP_TXPLL_SSC_PERIOD.dat.value); //write addr: 0x1FC7F084 = 0x1010000

	fw_RG_PXP_TXPLL_CHP_IBIAS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_CHP_IBIAS);
	fw_RG_PXP_TXPLL_CHP_IBIAS.hal.RG_PXP_TXPLL_CHP_IOFST = 0x1; 
	fw_RG_PXP_TXPLL_CHP_IBIAS.hal.RG_PXP_TXPLL_CHP_IBIAS = 0x2D; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_CHP_IBIAS, fw_RG_PXP_TXPLL_CHP_IBIAS.dat.value); //write addr: 0x1FC7F050 = 0x1F05012D

	fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL);
	fw_RG_PXP_TXPLL_REFIN_INTERNAL.hal.RG_PXP_TXPLL_REFIN_DIV = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL, fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value); //write addr: 0x1FC7F064 = 0x1040001

	fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN);
	fw_RG_PXP_TXPLL_TCL_LPF_EN.hal.RG_PXP_TXPLL_VCO_CFIX = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN, fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value); //write addr: 0x1FC7F074 = 0x3000001

	fw_rg_force_da_pxp_cdr_pr_idac.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_idac);
	fw_rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_txpll_sdm_pcw = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_idac, fw_rg_force_da_pxp_cdr_pr_idac.dat.value); //write addr: 0x1FC7E794 = 0x1000000

	fw_rg_force_da_pxp_txpll_sdm_pcw.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_sdm_pcw);
	fw_rg_force_da_pxp_txpll_sdm_pcw.hal.rg_force_da_pxp_txpll_sdm_pcw = 0xC800000; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_sdm_pcw, fw_rg_force_da_pxp_txpll_sdm_pcw.dat.value); //write addr: 0x1FC7E798 = 0xC800000

	fw_RG_PXP_TXPLL_SDM_DI_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_DI_EN);
	fw_RG_PXP_TXPLL_SDM_DI_EN.hal.RG_PXP_TXPLL_SDM_IFM = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_DI_EN, fw_RG_PXP_TXPLL_SDM_DI_EN.dat.value); //write addr: 0x1FC7F068 = 0x300

	fw_RG_PXP_TXPLL_SSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_EN);
	fw_RG_PXP_TXPLL_SSC_EN.hal.RG_PXP_TXPLL_SSC_PHASE_INI = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_EN, fw_RG_PXP_TXPLL_SSC_EN.dat.value); //write addr: 0x1FC7F07C = 0x10000

	fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL);
	fw_RG_PXP_TXPLL_REFIN_INTERNAL.hal.RG_PXP_TXPLL_RST_DLY = 0x4; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL, fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value); //write addr: 0x1FC7F064 = 0x1040001

	fw_RG_PXP_TXPLL_SDM_DI_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_DI_EN);
	fw_RG_PXP_TXPLL_SDM_DI_EN.hal.RG_PXP_TXPLL_SDM_DI_LS = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_DI_EN, fw_RG_PXP_TXPLL_SDM_DI_EN.dat.value); //write addr: 0x1FC7F068 = 0x0

	fw_RG_PXP_TXPLL_SDM_ORD.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_ORD);
	fw_RG_PXP_TXPLL_SDM_ORD.hal.RG_PXP_TXPLL_SDM_ORD = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_ORD, fw_RG_PXP_TXPLL_SDM_ORD.dat.value); //write addr: 0x1FC7F06C = 0x1000003

	fw_RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_KBAND_VREF);
	fw_RG_PXP_TXPLL_TCL_KBAND_VREF.hal.RG_PXP_TXPLL_VCO_KBAND_MEAS_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_KBAND_VREF, fw_RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value); //write addr: 0x1FC7F094 = 0x10010

	fw_RG_PXP_TXPLL_SSC_DELTA1.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_DELTA1);
	fw_RG_PXP_TXPLL_SSC_DELTA1.hal.RG_PXP_TXPLL_SSC_DELTA = 0x0; 
	fw_RG_PXP_TXPLL_SSC_DELTA1.hal.RG_PXP_TXPLL_SSC_DELTA1 = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_DELTA1, fw_RG_PXP_TXPLL_SSC_DELTA1.dat.value); //write addr: 0x1FC7F080 = 0x0

	fw_RG_PXP_TXPLL_LPF_BP.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_LPF_BP);
	fw_RG_PXP_TXPLL_LPF_BP.hal.RG_PXP_TXPLL_LPF_BP = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_LPF_BP, fw_RG_PXP_TXPLL_LPF_BP.dat.value); //write addr: 0x1FC7F054 = 0x1

	fw_RG_PXP_TXPLL_CHP_IBIAS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_CHP_IBIAS);
	fw_RG_PXP_TXPLL_CHP_IBIAS.hal.RG_PXP_TXPLL_LPF_BC = 0x18; 
	fw_RG_PXP_TXPLL_CHP_IBIAS.hal.RG_PXP_TXPLL_LPF_BR = 0x5; 
	fw_RG_PXP_TXPLL_CHP_IBIAS.hal.RG_PXP_TXPLL_CHP_IOFST = 0x1; 
	fw_RG_PXP_TXPLL_CHP_IBIAS.hal.RG_PXP_TXPLL_CHP_IBIAS = 0x2D; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_CHP_IBIAS, fw_RG_PXP_TXPLL_CHP_IBIAS.dat.value); //write addr: 0x1FC7F050 = 0x1805012D

	fw_RG_PXP_TXPLL_TCL_VTP_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_VTP_EN);
	fw_RG_PXP_TXPLL_TCL_VTP_EN.hal.RG_PXP_TXPLL_SPARE_L = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_VTP_EN, fw_RG_PXP_TXPLL_TCL_VTP_EN.dat.value); //write addr: 0x1FC7F090 = 0x1FF0000

	fw_RG_PXP_TXPLL_LPF_BP.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_LPF_BP);
	fw_RG_PXP_TXPLL_LPF_BP.hal.RG_PXP_TXPLL_LPF_BWC = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_LPF_BP, fw_RG_PXP_TXPLL_LPF_BP.dat.value); //write addr: 0x1FC7F054 = 0x1

	fw_RG_PXP_TXPLL_KBAND_KS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_KS);
	fw_RG_PXP_TXPLL_KBAND_KS.hal.RG_PXP_TXPLL_MMD_PREDIV_MODE = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_KS, fw_RG_PXP_TXPLL_KBAND_KS.dat.value); //write addr: 0x1FC7F05C = 0x100

	fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL);
	fw_RG_PXP_TXPLL_REFIN_INTERNAL.hal.RG_PXP_TXPLL_REFIN_DIV = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL, fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value); //write addr: 0x1FC7F064 = 0x1040001

	fw_RG_PXP_TXPLL_VCO_HALFLSB_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_VCO_HALFLSB_EN);
	fw_RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.RG_PXP_TXPLL_VCO_HALFLSB_EN = 0x1; 
	fw_RG_PXP_TXPLL_VCO_HALFLSB_EN.hal.RG_PXP_TXPLL_VCO_SCAPWR = 0x7; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_VCO_HALFLSB_EN, fw_RG_PXP_TXPLL_VCO_HALFLSB_EN.dat.value); //write addr: 0x1FC7F078 = 0x4040701

	fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN);
	fw_RG_PXP_TXPLL_TCL_LPF_EN.hal.RG_PXP_TXPLL_VCO_CFIX = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN, fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value); //write addr: 0x1FC7F074 = 0x3000001

	fw_rg_force_da_pxp_cdr_pr_idac.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_idac);
	fw_rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_txpll_sdm_pcw = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_idac, fw_rg_force_da_pxp_cdr_pr_idac.dat.value); //write addr: 0x1FC7E794 = 0x1000000

	fw_RG_PXP_TXPLL_SSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_EN);
	fw_RG_PXP_TXPLL_SSC_EN.hal.RG_PXP_TXPLL_SSC_PHASE_INI = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_EN, fw_RG_PXP_TXPLL_SSC_EN.dat.value); //write addr: 0x1FC7F07C = 0x10000

	fw_RG_PXP_TXPLL_LPF_BP.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_LPF_BP);
	fw_RG_PXP_TXPLL_LPF_BP.hal.RG_PXP_TXPLL_LPF_BWR = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_LPF_BP, fw_RG_PXP_TXPLL_LPF_BP.dat.value); //write addr: 0x1FC7F054 = 0x1

	fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL);
	fw_RG_PXP_TXPLL_REFIN_INTERNAL.hal.RG_PXP_TXPLL_REFIN_INTERNAL = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL, fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value); //write addr: 0x1FC7F064 = 0x1040001

	fw_RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_KBAND_VREF);
	fw_RG_PXP_TXPLL_TCL_KBAND_VREF.hal.RG_PXP_TXPLL_VCO_KBAND_MEAS_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_KBAND_VREF, fw_RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value); //write addr: 0x1FC7F094 = 0x10010

	fw_RG_PXP_TXPLL_VTP_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_VTP_EN);
	fw_RG_PXP_TXPLL_VTP_EN.hal.RG_PXP_TXPLL_VTP_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_VTP_EN, fw_RG_PXP_TXPLL_VTP_EN.dat.value); //write addr: 0x1FC7F088 = 0x0

	fw_RG_PXP_TXPLL_PHY_CK1_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_PHY_CK1_EN);
	fw_RG_PXP_TXPLL_PHY_CK1_EN.hal.RG_PXP_TXPLL_PHY_CK1_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_PHY_CK1_EN, fw_RG_PXP_TXPLL_PHY_CK1_EN.dat.value); //write addr: 0x1FC7F060 = 0x100

	fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL);
	fw_RG_PXP_TXPLL_REFIN_INTERNAL.hal.RG_PXP_TXPLL_REFIN_INTERNAL = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_REFIN_INTERNAL, fw_RG_PXP_TXPLL_REFIN_INTERNAL.dat.value); //write addr: 0x1FC7F064 = 0x1040001

	fw_RG_PXP_TXPLL_SSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_EN);
	fw_RG_PXP_TXPLL_SSC_EN.hal.RG_PXP_TXPLL_SSC_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SSC_EN, fw_RG_PXP_TXPLL_SSC_EN.dat.value); //write addr: 0x1FC7F07C = 0x10000

	fw_RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_FREQ_MEAS_EN);
	fw_RG_PXP_JCPLL_FREQ_MEAS_EN.hal.RG_PXP_TXPLL_LPF_SHCK_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_FREQ_MEAS_EN, fw_RG_PXP_JCPLL_FREQ_MEAS_EN.dat.value); //write addr: 0x1FC7F04C = 0x10001

	fw_RG_PXP_TXPLL_KBAND_KS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_KS);
	fw_RG_PXP_TXPLL_KBAND_KS.hal.RG_PXP_TXPLL_POSTDIV_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_KS, fw_RG_PXP_TXPLL_KBAND_KS.dat.value); //write addr: 0x1FC7F05C = 0x0

	fw_RG_PXP_TXPLL_KBAND_CODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_CODE);
	fw_RG_PXP_TXPLL_KBAND_CODE.hal.RG_PXP_TXPLL_KBAND_KFC = 0x0; 
	fw_RG_PXP_TXPLL_KBAND_CODE.hal.RG_PXP_TXPLL_KBAND_KF = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_CODE, fw_RG_PXP_TXPLL_KBAND_CODE.dat.value); //write addr: 0x1FC7F058 = 0x30003FF

	fw_RG_PXP_TXPLL_KBAND_KS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_KS);
	fw_RG_PXP_TXPLL_KBAND_KS.hal.RG_PXP_TXPLL_KBAND_KS = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_KS, fw_RG_PXP_TXPLL_KBAND_KS.dat.value); //write addr: 0x1FC7F05C = 0x1

	fw_RG_PXP_TXPLL_KBAND_CODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_CODE);
	fw_RG_PXP_TXPLL_KBAND_CODE.hal.RG_PXP_TXPLL_KBAND_DIV = 0x4; 
	fw_RG_PXP_TXPLL_KBAND_CODE.hal.RG_PXP_TXPLL_KBAND_CODE = 0xE4; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_KBAND_CODE, fw_RG_PXP_TXPLL_KBAND_CODE.dat.value); //write addr: 0x1FC7F058 = 0x30004E4

	fw_RG_PXP_TXPLL_SDM_ORD.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_ORD);
	fw_RG_PXP_TXPLL_SDM_ORD.hal.RG_PXP_TXPLL_TCL_AMP_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_SDM_ORD, fw_RG_PXP_TXPLL_SDM_ORD.dat.value); //write addr: 0x1FC7F06C = 0x1000003

	fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN);
	fw_RG_PXP_TXPLL_TCL_LPF_EN.hal.RG_PXP_TXPLL_TCL_LPF_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN, fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value); //write addr: 0x1FC7F074 = 0x3000001

	fw_RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_KBAND_VREF);
	fw_RG_PXP_TXPLL_TCL_KBAND_VREF.hal.RG_PXP_TXPLL_TCL_KBAND_VREF = 0xF; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_KBAND_VREF, fw_RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value); //write addr: 0x1FC7F094 = 0x1000F

	fw_RG_PXP_TXPLL_TCL_AMP_GAIN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_AMP_GAIN);
	fw_RG_PXP_TXPLL_TCL_AMP_GAIN.hal.RG_PXP_TXPLL_TCL_AMP_GAIN = 0x3; 
	fw_RG_PXP_TXPLL_TCL_AMP_GAIN.hal.RG_PXP_TXPLL_TCL_AMP_VREF = 0xB; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_AMP_GAIN, fw_RG_PXP_TXPLL_TCL_AMP_GAIN.dat.value); //write addr: 0x1FC7F070 = 0x4000B03

	fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN);
	fw_RG_PXP_TXPLL_TCL_LPF_EN.hal.RG_PXP_TXPLL_TCL_LPF_BW = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TXPLL_TCL_LPF_EN, fw_RG_PXP_TXPLL_TCL_LPF_EN.dat.value); //write addr: 0x1FC7F074 = 0x3000301

	fw_rg_force_da_pxp_txpll_ckout_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_ckout_en);
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_sel_da_pxp_txpll_ckout_en = 0x1; 
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_da_pxp_txpll_ckout_en = 0x1; 
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_sel_da_pxp_txpll_en = 0x1; 
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_da_pxp_txpll_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_ckout_en, fw_rg_force_da_pxp_txpll_ckout_en.dat.value); //write addr: 0x1FC7E854 = 0x1010101

	udelay(200);

}

void PCIe_G3_init(void) 
{
	u32 tmp;

	rg_type_t(REG_RG_PXP_JCPLL_SSC_DELTA) fw_RG_PXP_JCPLL_SSC_DELTA;
	rg_type_t(REG_RG_PXP_JCPLL_SSC_TRI_EN) fw_RG_PXP_JCPLL_SSC_TRI_EN;
	rg_type_t(REG_RG_PXP_JCPLL_VCO_TCLVAR) fw_RG_PXP_JCPLL_VCO_TCLVAR;
	rg_type_t(REG_RG_PXP_JCPLL_SDM_HREN) fw_RG_PXP_JCPLL_SDM_HREN;
	rg_type_t(REG_RG_PXP_JCPLL_RST_DLY) fw_RG_PXP_JCPLL_RST_DLY;
	rg_type_t(REG_RG_PXP_RX_PHYCK_DIV) fw_RG_PXP_RX_PHYCK_DIV;
	rg_type_t(REG_SW_RST_SET) fw_SW_RST_SET;
	rg_type_t(REG_RG_PXP_JCPLL_SDM_IFM) fw_RG_PXP_JCPLL_SDM_IFM;
	rg_type_t(REG_RG_PXP_CDR_PR_TDC_REF_SEL) fw_RG_PXP_CDR_PR_TDC_REF_SEL;
	rg_type_t(REG_ADD_DIG_RESERVE_32) fw_ADD_DIG_RESERVE_32;
	rg_type_t(REG_ADD_DIG_RESERVE_33) fw_ADD_DIG_RESERVE_33;
	rg_type_t(REG_RG_PXP_RX_SIGDET_NOVTH) fw_RG_PXP_RX_SIGDET_NOVTH;
	rg_type_t(REG_RG_PXP_RX_REV_0) fw_RG_PXP_RX_REV_0;
	rg_type_t(REG_RG_PXP_RX_DAC_RANGE) fw_RG_PXP_RX_DAC_RANGE;
	rg_type_t(REG_SS_RX_CAL_2) fw_SS_RX_CAL_2;
	rg_type_t(REG_RG_PXP_RX_FE_VCM_GEN_PWDB) fw_RG_PXP_RX_FE_VCM_GEN_PWDB;
	rg_type_t(REG_rg_force_da_pxp_rx_fe_gain_ctrl) fw_rg_force_da_pxp_rx_fe_gain_ctrl;
	rg_type_t(REG_RX_FORCE_MODE_0) fw_RX_FORCE_MODE_0;
	rg_type_t(REG_SS_RX_SIGDET_0) fw_SS_RX_SIGDET_0;
	rg_type_t(REG_RX_CTRL_SEQUENCE_DISB_CTRL_1) fw_RX_CTRL_SEQUENCE_DISB_CTRL_1;
	rg_type_t(REG_RX_CTRL_SEQUENCE_FORCE_CTRL_1) fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1;
	rg_type_t(REG_rg_force_da_pxp_rx_scan_rst_b) fw_rg_force_da_pxp_rx_scan_rst_b;
	rg_type_t(REG_rg_force_da_pxp_cdr_pd_pwdb) fw_rg_force_da_pxp_cdr_pd_pwdb;
	rg_type_t(REG_rg_force_da_pxp_rx_fe_pwdb) fw_rg_force_da_pxp_rx_fe_pwdb;
	rg_type_t(REG_RG_PXP_RX_FE_EQ_HZEN) fw_RG_PXP_RX_FE_EQ_HZEN;
	rg_type_t(REG_RG_PXP_CDR_PR_VREG_IBAND_VAL) fw_RG_PXP_CDR_PR_VREG_IBAND_VAL;
	rg_type_t(REG_RG_PXP_CDR_PR_CKREF_DIV) fw_RG_PXP_CDR_PR_CKREF_DIV;
	rg_type_t(REG_RG_PXP_CDR_LPF_RATIO) fw_RG_PXP_CDR_LPF_RATIO;
	rg_type_t(REG_RG_PXP_CDR_PR_BETA_DAC) fw_RG_PXP_CDR_PR_BETA_DAC;
	rg_type_t(REG_RG_PXP_TX_CKLDO_EN) fw_RG_PXP_TX_CKLDO_EN;
	rg_type_t(REG_ADD_DIG_RESERVE_40) fw_ADD_DIG_RESERVE_40;
	rg_type_t(REG_ADD_DIG_RESERVE_31) fw_ADD_DIG_RESERVE_31;
	rg_type_t(REG_ADD_DIG_RESERVE_43) fw_ADD_DIG_RESERVE_43;
	rg_type_t(REG_RG_PXP_CDR_PR_MONCK_EN) fw_RG_PXP_CDR_PR_MONCK_EN;
	rg_type_t(REG_RG_PXP_RX_OSCAL_CTLE2IOS) fw_RG_PXP_RX_OSCAL_CTLE2IOS;
	rg_type_t(REG_RG_PXP_RX_OSCAL_VGA2IOS) fw_RG_PXP_RX_OSCAL_VGA2IOS;
	rg_type_t(REG_rg_force_da_pxp_cdr_pr_fll_cor) fw_rg_force_da_pxp_cdr_pr_fll_cor;
	rg_type_t(REG_rg_force_da_pxp_cdr_pr_pieye_pwdb) fw_rg_force_da_pxp_cdr_pr_pieye_pwdb;
	rg_type_t(REG_SS_DA_XPON_PWDB_0) fw_SS_DA_XPON_PWDB_0;

	PCIe_G3_PLL_init();

//*******  SSC JCPLL SETTING
	fw_RG_PXP_JCPLL_SSC_DELTA.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA);
	fw_RG_PXP_JCPLL_SSC_DELTA.hal.RG_PXP_JCPLL_SSC_DELTA = 0x106; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA, fw_RG_PXP_JCPLL_SSC_DELTA.dat.value); //write addr: 0x1FC7F038 = 0x106

	fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN);
	fw_RG_PXP_JCPLL_SSC_TRI_EN.hal.RG_PXP_JCPLL_SSC_DELTA1 = 0x106; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN, fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value); //write addr: 0x1FC7F034 = 0x10600

	fw_RG_PXP_JCPLL_SSC_DELTA.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA);
	fw_RG_PXP_JCPLL_SSC_DELTA.hal.RG_PXP_JCPLL_SSC_PERIOD = 0x31B; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_DELTA, fw_RG_PXP_JCPLL_SSC_DELTA.dat.value); //write addr: 0x1FC7F038 = 0x31B0106

	fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR);
	fw_RG_PXP_JCPLL_VCO_TCLVAR.hal.RG_PXP_JCPLL_SSC_PHASE_INI = 0x1; 
	fw_RG_PXP_JCPLL_VCO_TCLVAR.hal.RG_PXP_JCPLL_SSC_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR, fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value); //write addr: 0x1FC7F030 = 0x3301B

	fw_RG_PXP_JCPLL_SDM_IFM.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_IFM);
	fw_RG_PXP_JCPLL_SDM_IFM.hal.RG_PXP_JCPLL_SDM_IFM = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_IFM, fw_RG_PXP_JCPLL_SDM_IFM.dat.value); //write addr: 0x1FC7F020 = 0x30001

	fw_RG_PXP_JCPLL_SDM_HREN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_HREN);
	fw_RG_PXP_JCPLL_SDM_HREN.hal.RG_PXP_JCPLL_SDM_HREN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SDM_HREN, fw_RG_PXP_JCPLL_SDM_HREN.dat.value); //write addr: 0x1FC7F024 = 0x5010101

	fw_RG_PXP_JCPLL_RST_DLY.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_RST_DLY);
	fw_RG_PXP_JCPLL_RST_DLY.hal.RG_PXP_JCPLL_SDM_DI_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_RST_DLY, fw_RG_PXP_JCPLL_RST_DLY.dat.value); //write addr: 0x1FC7F01C = 0x104

	fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN);
	fw_RG_PXP_JCPLL_SSC_TRI_EN.hal.RG_PXP_JCPLL_SSC_TRI_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_SSC_TRI_EN, fw_RG_PXP_JCPLL_SSC_TRI_EN.dat.value); //write addr: 0x1FC7F034 = 0x10601

	udelay(30);


//*******  Rx lan0 signal detect setting , add by Carl 10/4 
	fw_RG_PXP_CDR_PR_TDC_REF_SEL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_TDC_REF_SEL);
	fw_RG_PXP_CDR_PR_TDC_REF_SEL.hal.RG_PXP_CDR_PR_LDO_FORCE_ON = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_TDC_REF_SEL, fw_RG_PXP_CDR_PR_TDC_REF_SEL.dat.value); //write addr: 0x1FC7F108 = 0x10000

	udelay(10);
	fw_ADD_DIG_RESERVE_32.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_32);
	tmp = fw_ADD_DIG_RESERVE_32.hal.rg_dig_reserve_32;
	tmp = (0x18B0<<16) | (tmp & (~(0xFFFF<<16)));
	fw_ADD_DIG_RESERVE_32.hal.rg_dig_reserve_32 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_32, fw_ADD_DIG_RESERVE_32.dat.value); //write addr: 0x1FC7E91C = 0x18B00444

	fw_ADD_DIG_RESERVE_33.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_33);
	tmp = fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33;
	tmp = (0x18B0<<0) | (tmp & (~(0xFFFF<<0)));
	fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33 = tmp;
	tmp = fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33;
	tmp = (0x1030<<16) | (tmp & (~(0xFFFF<<16)));
	fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_33, fw_ADD_DIG_RESERVE_33.dat.value); //write addr: 0x1FC7E920 = 0x103018B0

	fw_RG_PXP_RX_SIGDET_NOVTH.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH);
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_SIGDET_PEAK = 0x2; 
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_SIGDET_VTH_SEL = 0x5; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH, fw_RG_PXP_RX_SIGDET_NOVTH.dat.value); //write addr: 0x1FC7F114 = 0x50200

	fw_RG_PXP_RX_REV_0.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_REV_0);
	tmp = fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1;
	tmp = (0x2<<2) | (tmp & (~(0x3<<2)));
	fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1 = tmp;
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_REV_0, fw_RG_PXP_RX_REV_0.dat.value); //write addr: 0x1FC7F0D4 = 0xCCCB1030

	fw_RG_PXP_RX_DAC_RANGE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_DAC_RANGE);
	fw_RG_PXP_RX_DAC_RANGE.hal.RG_PXP_RX_SIGDET_LPF_CTRL = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_DAC_RANGE, fw_RG_PXP_RX_DAC_RANGE.dat.value); //write addr: 0x1FC7F110 = 0x1000200

	fw_SS_RX_CAL_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_CAL_2);
	fw_SS_RX_CAL_2.hal.rg_cal_out_os = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_CAL_2, fw_SS_RX_CAL_2.dat.value); //write addr: 0x1FC7E164 = 0x0

	fw_RG_PXP_RX_FE_VCM_GEN_PWDB.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_VCM_GEN_PWDB);
	fw_RG_PXP_RX_FE_VCM_GEN_PWDB.hal.RG_PXP_RX_FE_VCM_GEN_PWDB = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_VCM_GEN_PWDB, fw_RG_PXP_RX_FE_VCM_GEN_PWDB.dat.value); //write addr: 0x1FC7F11C = 0x2000401

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl);
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_sel_da_pxp_rx_fe_gain_ctrl = 0x1; 
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_da_pxp_rx_fe_gain_ctrl = 0x3; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl, fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value); //write addr: 0x1FC7E88C = 0x103

	fw_RX_FORCE_MODE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_0);
	fw_RX_FORCE_MODE_0.hal.rg_force_da_xpon_rx_fe_gain_ctrl = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_0, fw_RX_FORCE_MODE_0.dat.value); //write addr: 0x1FC7E294 = 0x1

	fw_SS_RX_SIGDET_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_SIGDET_0);
	fw_SS_RX_SIGDET_0.hal.rg_sigdet_win_nonvld_times = 0x3; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_SIGDET_0, fw_SS_RX_SIGDET_0.dat.value); //write addr: 0x1FC7E168 = 0x3050810

	fw_RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_DISB_CTRL_1);
	fw_RX_CTRL_SEQUENCE_DISB_CTRL_1.hal.rg_disb_rx_sdcal_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_DISB_CTRL_1, fw_RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value); //write addr: 0x1FC7E10C = 0x1010100

	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_1);
	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.hal.rg_force_rx_sdcal_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_1, fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value); //write addr: 0x1FC7E114 = 0x1

	udelay(100);
	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.hal.rg_force_rx_sdcal_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_1, fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value); //write addr: 0x1FC7E114 = 0x0



//*******  RX FLOW
	fw_rg_force_da_pxp_rx_scan_rst_b.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_scan_rst_b);
	fw_rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_sigdet_pwdb = 0x1; 
	fw_rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_sigdet_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_scan_rst_b, fw_rg_force_da_pxp_rx_scan_rst_b.dat.value); //write addr: 0x1FC7E84C = 0x1010000

	fw_rg_force_da_pxp_cdr_pd_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pd_pwdb);
	fw_rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pd_pwdb = 0x1; 
	fw_rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pd_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pd_pwdb, fw_rg_force_da_pxp_cdr_pd_pwdb.dat.value); //write addr: 0x1FC7E81C = 0x101

	fw_rg_force_da_pxp_rx_fe_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_pwdb);
	fw_rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_fe_pwdb = 0x1; 
	fw_rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_fe_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_pwdb, fw_rg_force_da_pxp_rx_fe_pwdb.dat.value); //write addr: 0x1FC7E894 = 0x101

	fw_RG_PXP_RX_PHYCK_DIV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV);
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_TDC_CK_SEL = 0x1; 
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_RSTB = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV, fw_RG_PXP_RX_PHYCK_DIV.dat.value); //write addr: 0x1FC7F0D8 = 0x101010A

	fw_SW_RST_SET.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET);
	fw_SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_allpcs_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_pma_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_tx_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_rx_fifo_rst_n = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET, fw_SW_RST_SET.dat.value); //write addr: 0x1FC7E460 = 0x17F

	fw_RG_PXP_RX_FE_EQ_HZEN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_EQ_HZEN);
	fw_RG_PXP_RX_FE_EQ_HZEN.hal.RG_PXP_RX_FE_VB_EQ3_EN = 0x1; 
	fw_RG_PXP_RX_FE_EQ_HZEN.hal.RG_PXP_RX_FE_VB_EQ2_EN = 0x1; 
	fw_RG_PXP_RX_FE_EQ_HZEN.hal.RG_PXP_RX_FE_VB_EQ1_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_EQ_HZEN, fw_RG_PXP_RX_FE_EQ_HZEN.dat.value); //write addr: 0x1FC7F118 = 0x1010100

	fw_RG_PXP_RX_REV_0.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_REV_0);
	tmp = fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1;
	tmp = (0x4<<4) | (tmp & (~(0x7<<4)));
	fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1 = tmp;
	tmp = fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1;
	tmp = (0x4<<8) | (tmp & (~(0x7<<8)));
	fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1 = tmp;
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_REV_0, fw_RG_PXP_RX_REV_0.dat.value); //write addr: 0x1FC7F0D4 = 0xCCCB1030

	udelay(10);


//*******  PR setting : 8/12 mail add 
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_VREG_IBAND_VAL);
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.RG_PXP_CDR_PR_VREG_IBAND_VAL = 0x5; 
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.RG_PXP_CDR_PR_VREG_CKBUF_VAL = 0x5; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_VREG_IBAND_VAL, fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value); //write addr: 0x1FC7F0FC = 0x80505

	fw_RG_PXP_CDR_PR_CKREF_DIV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_CKREF_DIV);
	fw_RG_PXP_CDR_PR_CKREF_DIV.hal.RG_PXP_CDR_PR_CKREF_DIV = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_CKREF_DIV, fw_RG_PXP_CDR_PR_CKREF_DIV.dat.value); //write addr: 0x1FC7F100 = 0x100

	fw_RG_PXP_CDR_PR_TDC_REF_SEL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_TDC_REF_SEL);
	fw_RG_PXP_CDR_PR_TDC_REF_SEL.hal.RG_PXP_CDR_PR_CKREF_DIV1 = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_TDC_REF_SEL, fw_RG_PXP_CDR_PR_TDC_REF_SEL.dat.value); //write addr: 0x1FC7F108 = 0x10000

	fw_RG_PXP_CDR_LPF_RATIO.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_LPF_RATIO);
	fw_RG_PXP_CDR_LPF_RATIO.hal.RG_PXP_CDR_LPF_TOP_LIM = 0x20000; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_LPF_RATIO, fw_RG_PXP_CDR_LPF_RATIO.dat.value); //write addr: 0x1FC7F0E8 = 0x2000000

	fw_RG_PXP_CDR_PR_BETA_DAC.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_BETA_DAC);
	fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_BETA_SEL = 0x2; 
	fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_KBAND_DIV = 0x4; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_BETA_DAC, fw_RG_PXP_CDR_PR_BETA_DAC.dat.value); //write addr: 0x1FC7F0F8 = 0x4020808



//*******  TX FLOW
	fw_RG_PXP_TX_CKLDO_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN);
	fw_RG_PXP_TX_CKLDO_EN.hal.RG_PXP_TX_CKLDO_EN = 0x1; 
	fw_RG_PXP_TX_CKLDO_EN.hal.RG_PXP_TX_DMEDGEGEN_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN, fw_RG_PXP_TX_CKLDO_EN.dat.value); //write addr: 0x1FC7F0C4 = 0x1010401

	udelay(10);


//*******  PR / RX mode setting, divider, etc
	fw_ADD_DIG_RESERVE_40.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_40);
	fw_ADD_DIG_RESERVE_40.hal.rg_dig_reserve_40 = 0x804000; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_40, fw_ADD_DIG_RESERVE_40.dat.value); //write addr: 0x1FC7E93C = 0x804000

	fw_ADD_DIG_RESERVE_31.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_31);
	tmp = fw_ADD_DIG_RESERVE_31.hal.rg_dig_reserve_31;
	tmp = (0x5<<0) | (tmp & (~(0x1F<<0)));
	fw_ADD_DIG_RESERVE_31.hal.rg_dig_reserve_31 = tmp;
	tmp = fw_ADD_DIG_RESERVE_31.hal.rg_dig_reserve_31;
	tmp = (0x5<<8) | (tmp & (~(0x1F<<8)));
	fw_ADD_DIG_RESERVE_31.hal.rg_dig_reserve_31 = tmp;
	tmp = fw_ADD_DIG_RESERVE_31.hal.rg_dig_reserve_31;
	tmp = (0x5<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_31.hal.rg_dig_reserve_31 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_31, fw_ADD_DIG_RESERVE_31.dat.value); //write addr: 0x1FC7E918 = 0x15050505

	fw_ADD_DIG_RESERVE_43.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_43);
	tmp = fw_ADD_DIG_RESERVE_43.hal.rg_dig_reserve_43;
	tmp = (0x7<<8) | (tmp & (~(0x7<<8)));
	fw_ADD_DIG_RESERVE_43.hal.rg_dig_reserve_43 = tmp;
	tmp = fw_ADD_DIG_RESERVE_43.hal.rg_dig_reserve_43;
	tmp = (0x7<<12) | (tmp & (~(0x7<<12)));
	fw_ADD_DIG_RESERVE_43.hal.rg_dig_reserve_43 = tmp;
	tmp = fw_ADD_DIG_RESERVE_43.hal.rg_dig_reserve_43;
	tmp = (0x7<<16) | (tmp & (~(0x7<<16)));
	fw_ADD_DIG_RESERVE_43.hal.rg_dig_reserve_43 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_43, fw_ADD_DIG_RESERVE_43.dat.value); //write addr: 0x1FC7E948 = 0x15077700

	fw_RG_PXP_CDR_PR_MONCK_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_MONCK_EN);
	fw_RG_PXP_CDR_PR_MONCK_EN.hal.RG_PXP_CDR_PR_MONCK_EN = 0x0; 
	fw_RG_PXP_CDR_PR_MONCK_EN.hal.RG_PXP_CDR_PR_RESERVE0 = 0x2; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_MONCK_EN, fw_RG_PXP_CDR_PR_MONCK_EN.dat.value); //write addr: 0x1FC7F104 = 0xF020000

	fw_RG_PXP_RX_OSCAL_CTLE2IOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_OSCAL_CTLE2IOS);
	fw_RG_PXP_RX_OSCAL_CTLE2IOS.hal.RG_PXP_RX_OSCAL_VGA1IOS = 0x19; 
	fw_RG_PXP_RX_OSCAL_CTLE2IOS.hal.RG_PXP_RX_OSCAL_VGA1VOS = 0x19; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_OSCAL_CTLE2IOS, fw_RG_PXP_RX_OSCAL_CTLE2IOS.dat.value); //write addr: 0x1FC7F128 = 0x19190000

	fw_RG_PXP_RX_OSCAL_VGA2IOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_OSCAL_VGA2IOS);
	fw_RG_PXP_RX_OSCAL_VGA2IOS.hal.RG_PXP_RX_OSCAL_VGA2IOS = 0x14; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_OSCAL_VGA2IOS, fw_RG_PXP_RX_OSCAL_VGA2IOS.dat.value); //write addr: 0x1FC7F12C = 0x7000014

	//for eye scan, remove if not used for power saving
	if(PCIe_EYE_SCAN_ON(0))
	{
		fw_rg_force_da_pxp_cdr_pr_fll_cor.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_fll_cor);
		fw_rg_force_da_pxp_cdr_pr_fll_cor.hal.rg_force_da_pxp_rx_dac_eye = 0x0; 
		fw_rg_force_da_pxp_cdr_pr_fll_cor.hal.rg_force_sel_da_pxp_rx_dac_eye = 0x1; 
		Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_fll_cor, fw_rg_force_da_pxp_cdr_pr_fll_cor.dat.value); //write addr: 0x1FC7E790 = 0x1000000

		fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb);
		fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pieye_pwdb = 0x1; 
		fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pieye_pwdb = 0x1; 
		Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb, fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value); //write addr: 0x1FC7E824 = 0x101
	}

	fw_SS_DA_XPON_PWDB_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0);
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0, fw_SS_DA_XPON_PWDB_0.dat.value); //write addr: 0x1FC7E34C = 0x0

	udelay(10);
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0, fw_SS_DA_XPON_PWDB_0.dat.value); //write addr: 0x1FC7E34C = 0x100

	udelay(100);



}

void PCIe_G3_T2R_Loopback(char gen_speed)
{
	u32 tmp, val;
	
	rg_type_t(REG_RG_PXP_CDR_PR_TDC_REF_SEL) fw_RG_PXP_CDR_PR_TDC_REF_SEL;
	rg_type_t(REG_ADD_DIG_RESERVE_32) fw_ADD_DIG_RESERVE_32;
	rg_type_t(REG_ADD_DIG_RESERVE_33) fw_ADD_DIG_RESERVE_33;
	rg_type_t(REG_RG_PXP_RX_SIGDET_NOVTH) fw_RG_PXP_RX_SIGDET_NOVTH;
	rg_type_t(REG_RG_PXP_RX_REV_0) fw_RG_PXP_RX_REV_0;
	rg_type_t(REG_RG_PXP_RX_DAC_RANGE) fw_RG_PXP_RX_DAC_RANGE;
	rg_type_t(REG_SS_RX_CAL_2) fw_SS_RX_CAL_2;
	rg_type_t(REG_RG_PXP_RX_FE_VCM_GEN_PWDB) fw_RG_PXP_RX_FE_VCM_GEN_PWDB;
	rg_type_t(REG_rg_force_da_pxp_rx_fe_gain_ctrl) fw_rg_force_da_pxp_rx_fe_gain_ctrl;
	rg_type_t(REG_RX_FORCE_MODE_0) fw_RX_FORCE_MODE_0;
	rg_type_t(REG_SS_RX_SIGDET_0) fw_SS_RX_SIGDET_0;
	rg_type_t(REG_RX_CTRL_SEQUENCE_DISB_CTRL_1) fw_RX_CTRL_SEQUENCE_DISB_CTRL_1;
	rg_type_t(REG_RX_CTRL_SEQUENCE_FORCE_CTRL_1) fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1;
	rg_type_t(REG_rg_force_da_pxp_tx_ck_en) fw_rg_force_da_pxp_tx_ck_en;
	rg_type_t(REG_rg_force_da_pxp_tx_hsdata_en) fw_rg_force_da_pxp_tx_hsdata_en;
	rg_type_t(REG_rg_force_da_pxp_tx_acjtag_en) fw_rg_force_da_pxp_tx_acjtag_en;
	rg_type_t(REG_rg_force_da_pxp_tx_term_sel) fw_rg_force_da_pxp_tx_term_sel;
	rg_type_t(REG_rg_force_da_pxp_tx_rate_ctrl) fw_rg_force_da_pxp_tx_rate_ctrl;
	rg_type_t(REG_rg_force_da_pxp_tx_fir_c0b) fw_rg_force_da_pxp_tx_fir_c0b;
	rg_type_t(REG_rg_force_da_pxp_tx_fir_c1) fw_rg_force_da_pxp_tx_fir_c1;
	rg_type_t(REG_RG_PXP_TX_CKLDO_EN) fw_RG_PXP_TX_CKLDO_EN;
	rg_type_t(REG_SS_TX_RST_B) fw_SS_TX_RST_B;
	rg_type_t(REG_RX_DISB_MODE_8) fw_RX_DISB_MODE_8;
	rg_type_t(REG_RX_EXTRAL_CTRL) fw_RX_EXTRAL_CTRL;
	rg_type_t(REG_RG_PXP_CDR_PD_PICAL_CKD8_INV) fw_RG_PXP_CDR_PD_PICAL_CKD8_INV;
	rg_type_t(REG_rg_force_da_pxp_cdr_pr_pieye_pwdb) fw_rg_force_da_pxp_cdr_pr_pieye_pwdb;
	rg_type_t(REG_rg_force_da_pxp_cdr_pd_pwdb) fw_rg_force_da_pxp_cdr_pd_pwdb;
	rg_type_t(REG_rg_force_da_pxp_rx_fe_pwdb) fw_rg_force_da_pxp_rx_fe_pwdb;
	rg_type_t(REG_rg_force_da_pxp_rx_scan_rst_b) fw_rg_force_da_pxp_rx_scan_rst_b;
	rg_type_t(REG_SS_DA_XPON_PWDB_0) fw_SS_DA_XPON_PWDB_0;
	rg_type_t(REG_RG_PXP_RX_BUSBIT_SEL) fw_RG_PXP_RX_BUSBIT_SEL;
	rg_type_t(REG_RG_PXP_RX_FE_EQ_HZEN) fw_RG_PXP_RX_FE_EQ_HZEN;
	rg_type_t(REG_ADD_DIG_RESERVE_25) fw_ADD_DIG_RESERVE_25;
	rg_type_t(REG_rg_force_da_pxp_rx_oscal_en) fw_rg_force_da_pxp_rx_oscal_en;
	rg_type_t(REG_rg_force_da_pxp_aeq_rstb) fw_rg_force_da_pxp_aeq_rstb;
	rg_type_t(REG_rg_force_da_pxp_jcpll_sdm_scan_rstb) fw_rg_force_da_pxp_jcpll_sdm_scan_rstb;
	rg_type_t(REG_rg_force_da_pxp_aeq_bypass) fw_rg_force_da_pxp_aeq_bypass;
	rg_type_t(REG_ADD_RX_SYS_EN_SEL_0) fw_ADD_RX_SYS_EN_SEL_0;
	rg_type_t(REG_rg_force_da_pxp_aeq_speed) fw_rg_force_da_pxp_aeq_speed;
	rg_type_t(REG_RG_PXP_CDR_PR_MONPR_EN) fw_RG_PXP_CDR_PR_MONPR_EN;
	rg_type_t(REG_RG_PXP_CDR_PR_BETA_DAC) fw_RG_PXP_CDR_PR_BETA_DAC;
	rg_type_t(REG_RG_PXP_CDR_PR_VREG_IBAND_VAL) fw_RG_PXP_CDR_PR_VREG_IBAND_VAL;
	rg_type_t(REG_RG_PXP_RX_PHYCK_DIV) fw_RG_PXP_RX_PHYCK_DIV;
	rg_type_t(REG_RG_PXP_CDR_LPF_RATIO) fw_RG_PXP_CDR_LPF_RATIO;
	rg_type_t(REG_SS_RX_FLL_0) fw_SS_RX_FLL_0;
	rg_type_t(REG_SS_RX_FLL_1) fw_SS_RX_FLL_1;
	rg_type_t(REG_SS_RX_FLL_2) fw_SS_RX_FLL_2;
	rg_type_t(REG_RX_DISB_MODE_4) fw_RX_DISB_MODE_4;
	rg_type_t(REG_SS_LCPLL_PWCTL_SETTING_0) fw_SS_LCPLL_PWCTL_SETTING_0;
	rg_type_t(REG_rg_force_da_pxp_cdr_lpf_lck2data) fw_rg_force_da_pxp_cdr_lpf_lck2data;
	rg_type_t(REG_rg_force_da_pxp_aeq_en) fw_rg_force_da_pxp_aeq_en;
	rg_type_t(REG_SW_RST_SET) fw_SW_RST_SET;
	rg_type_t(REG_SS_LCPLL_PWCTL_SETTING_1) fw_SS_LCPLL_PWCTL_SETTING_1;
	rg_type_t(REG_xpon_tx_rate_ctrl) fw_xpon_tx_rate_ctrl;
	rg_type_t(REG_RG_XPON_RX_RESERVED_1) fw_RG_XPON_RX_RESERVED_1;
	rg_type_t(REG_ADD_XPON_MODE_1) fw_ADD_XPON_MODE_1;
	rg_type_t(REG_BISTCTL_PRBS_FAIL_THRESHOLD) fw_BISTCTL_PRBS_FAIL_THRESHOLD;
	rg_type_t(REG_BISTCTL_PRBS_INITIAL_SEED) fw_BISTCTL_PRBS_INITIAL_SEED;
	rg_type_t(REG_BISTCTL_CONTROL) fw_BISTCTL_CONTROL;
	rg_type_t(REG_ADD_DIG_RESERVE_24) fw_ADD_DIG_RESERVE_24;
	rg_type_t(REG_BISTCTL_PRBS_EVENT) fw_BISTCTL_PRBS_EVENT;

	//reset MAC controller
	regWrite_PCIe(0x1FB00834, 0x4000000);

	PCIe_G3_PLL_init();

//*******  Rx lan0 signal detect setting , add by Carl 10/4 
	fw_RG_PXP_CDR_PR_TDC_REF_SEL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_TDC_REF_SEL);
	fw_RG_PXP_CDR_PR_TDC_REF_SEL.hal.RG_PXP_CDR_PR_LDO_FORCE_ON = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_TDC_REF_SEL, fw_RG_PXP_CDR_PR_TDC_REF_SEL.dat.value); //write addr: 0x1FC7F108 = 0x10000

	udelay(10);
	fw_ADD_DIG_RESERVE_32.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_32);
	tmp = fw_ADD_DIG_RESERVE_32.hal.rg_dig_reserve_32;
	tmp = (0x18B0<<16) | (tmp & (~(0xFFFF<<16)));
	fw_ADD_DIG_RESERVE_32.hal.rg_dig_reserve_32 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_32, fw_ADD_DIG_RESERVE_32.dat.value); //write addr: 0x1FC7E91C = 0x18B00444

	fw_ADD_DIG_RESERVE_33.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_33);
	tmp = fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33;
	tmp = (0x18B0<<0) | (tmp & (~(0xFFFF<<0)));
	fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33 = tmp;
	tmp = fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33;
	tmp = (0x1030<<16) | (tmp & (~(0xFFFF<<16)));
	fw_ADD_DIG_RESERVE_33.hal.rg_dig_reserve_33 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_33, fw_ADD_DIG_RESERVE_33.dat.value); //write addr: 0x1FC7E920 = 0x103018B0

	fw_RG_PXP_RX_SIGDET_NOVTH.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH);
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_SIGDET_PEAK = 0x2; 
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_SIGDET_VTH_SEL = 0x5; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH, fw_RG_PXP_RX_SIGDET_NOVTH.dat.value); //write addr: 0x1FC7F114 = 0x1050200

	fw_RG_PXP_RX_REV_0.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_REV_0);
	tmp = fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1;
	tmp = (0x2<<2) | (tmp & (~(0x3<<2)));
	fw_RG_PXP_RX_REV_0.hal.RG_PXP_RX_REV_1 = tmp;
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_REV_0, fw_RG_PXP_RX_REV_0.dat.value); //write addr: 0x1FC7F0D4 = 0xCCCB1030

	fw_RG_PXP_RX_DAC_RANGE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_DAC_RANGE);
	fw_RG_PXP_RX_DAC_RANGE.hal.RG_PXP_RX_SIGDET_LPF_CTRL = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_DAC_RANGE, fw_RG_PXP_RX_DAC_RANGE.dat.value); //write addr: 0x1FC7F110 = 0x1000200

	fw_SS_RX_CAL_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_CAL_2);
	fw_SS_RX_CAL_2.hal.rg_cal_out_os = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_CAL_2, fw_SS_RX_CAL_2.dat.value); //write addr: 0x1FC7E164 = 0x0

	fw_RG_PXP_RX_FE_VCM_GEN_PWDB.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_VCM_GEN_PWDB);
	fw_RG_PXP_RX_FE_VCM_GEN_PWDB.hal.RG_PXP_RX_FE_VCM_GEN_PWDB = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_VCM_GEN_PWDB, fw_RG_PXP_RX_FE_VCM_GEN_PWDB.dat.value); //write addr: 0x1FC7F11C = 0x2000401

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl);
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_sel_da_pxp_rx_fe_gain_ctrl = 0x1; 
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_da_pxp_rx_fe_gain_ctrl = 0x3; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl, fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value); //write addr: 0x1FC7E88C = 0x103

	fw_RX_FORCE_MODE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_0);
	fw_RX_FORCE_MODE_0.hal.rg_force_da_xpon_rx_fe_gain_ctrl = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_0, fw_RX_FORCE_MODE_0.dat.value); //write addr: 0x1FC7E294 = 0x1

	fw_SS_RX_SIGDET_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_SIGDET_0);
	fw_SS_RX_SIGDET_0.hal.rg_sigdet_win_nonvld_times = 0x3; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_SIGDET_0, fw_SS_RX_SIGDET_0.dat.value); //write addr: 0x1FC7E168 = 0x3050810

	fw_RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_DISB_CTRL_1);
	fw_RX_CTRL_SEQUENCE_DISB_CTRL_1.hal.rg_disb_rx_sdcal_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_DISB_CTRL_1, fw_RX_CTRL_SEQUENCE_DISB_CTRL_1.dat.value); //write addr: 0x1FC7E10C = 0x1010100

	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_1);
	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.hal.rg_force_rx_sdcal_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_1, fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value); //write addr: 0x1FC7E114 = 0x1

	udelay(100);
	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.hal.rg_force_rx_sdcal_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_1, fw_RX_CTRL_SEQUENCE_FORCE_CTRL_1.dat.value); //write addr: 0x1FC7E114 = 0x0

//*******  RX FLOW
	fw_SW_RST_SET.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET);
	fw_SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_allpcs_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_pma_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_tx_rst_n = 0x1; 
	fw_SW_RST_SET.hal.rg_sw_rx_fifo_rst_n = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET, fw_SW_RST_SET.dat.value); //write addr: 0x1FC7E460 = 0x17F

	udelay(10);


//*******    // Force Tx output, add 4/27
	fw_rg_force_da_pxp_tx_ck_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_ck_en);
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_sel_da_pxp_tx_ck_en = 0x1; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_da_pxp_tx_ck_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_ck_en, fw_rg_force_da_pxp_tx_ck_en.dat.value); //write addr: 0x1FC7E878 = 0x101

	fw_rg_force_da_pxp_tx_hsdata_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_hsdata_en);
	fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_da_pxp_tx_data_en = 0x1; 
	fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_sel_da_pxp_tx_data_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_hsdata_en, fw_rg_force_da_pxp_tx_hsdata_en.dat.value); //write addr: 0x1FC7E87C = 0x1010000


	mdelay(50);


//*******    // Enable Tx Flow when TXPLL stable
	fw_rg_force_da_pxp_tx_acjtag_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_acjtag_en);
	fw_rg_force_da_pxp_tx_acjtag_en.hal.rg_force_sel_da_pxp_tx_ckin_sel = 0x1; 
	switch(gen_speed)
	{
		case 1:
			fw_rg_force_da_pxp_tx_acjtag_en.hal.rg_force_da_pxp_tx_ckin_sel = 0x1; 						
			break;
		case 2:
			fw_rg_force_da_pxp_tx_acjtag_en.hal.rg_force_da_pxp_tx_ckin_sel = 0x1; 			
			break;
		case 3:
			fw_rg_force_da_pxp_tx_acjtag_en.hal.rg_force_da_pxp_tx_ckin_sel = 0x0; 			
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}
 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_acjtag_en, fw_rg_force_da_pxp_tx_acjtag_en.dat.value); //write addr: 0x1FC7E874 = 0x1000000



//*******    //DA_PXP_TX_CKIN_DIVISOR
	fw_rg_force_da_pxp_tx_term_sel.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_term_sel);
	fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_sel_da_pxp_tx_ckin_divisor = 0x1; 
	switch(gen_speed)
	{
		case 1:
			fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_ckin_divisor = 0x3; 
			break;
		case 2:
			fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_ckin_divisor = 0x4; 
			break;
		case 3:
			fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_ckin_divisor = 0x5; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}		Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_term_sel, fw_rg_force_da_pxp_tx_term_sel.dat.value); //write addr: 0x1FC7E77C = 0x1050101

	fw_rg_force_da_pxp_tx_rate_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl);
	fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_tx_rate_ctrl = 0x1; 
	switch(gen_speed)
	{
		case 1:
			fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_tx_rate_ctrl = 0x1; 
			break;
		case 2:
			fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_tx_rate_ctrl = 0x1; 
			break;
		case 3:
			fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_tx_rate_ctrl = 0x2; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}		
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl, fw_rg_force_da_pxp_tx_rate_ctrl.dat.value); //write addr: 0x1FC7E784 = 0x102

//Tx FIR
	fw_rg_force_da_pxp_tx_fir_c0b.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_fir_c0b);
	fw_rg_force_da_pxp_tx_fir_c0b.hal.rg_force_sel_da_pxp_tx_fir_c0b = 0x1; 
	fw_rg_force_da_pxp_tx_fir_c0b.hal.rg_force_da_pxp_tx_fir_c0b = 0x6; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_fir_c0b, fw_rg_force_da_pxp_tx_fir_c0b.dat.value); //write addr: 0x1FC7E778 = 0x106

	fw_rg_force_da_pxp_tx_fir_c1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_fir_c1);
	fw_rg_force_da_pxp_tx_fir_c1.hal.rg_force_sel_da_pxp_tx_fir_c1 = 0x1; 
	fw_rg_force_da_pxp_tx_fir_c1.hal.rg_force_da_pxp_tx_fir_c1 = 0x8; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_fir_c1, fw_rg_force_da_pxp_tx_fir_c1.dat.value); //write addr: 0x1FC7E780 = 0x108

	fw_RG_PXP_TX_CKLDO_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN);
	fw_RG_PXP_TX_CKLDO_EN.hal.RG_PXP_TX_CKLDO_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN, fw_RG_PXP_TX_CKLDO_EN.dat.value); //write addr: 0x1FC7F0C4 = 0x10401

	fw_SS_TX_RST_B.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_TX_RST_B);
	fw_SS_TX_RST_B.hal.txcalib_rst_b = 0x1; 
	fw_SS_TX_RST_B.hal.tx_top_rst_b = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_TX_RST_B, fw_SS_TX_RST_B.dat.value); //write addr: 0x1FC7E260 = 0x101

//Tx bist pattern
	fw_BISTCTL_PRBS_FAIL_THRESHOLD.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_PRBS_FAIL_THRESHOLD);
	fw_BISTCTL_PRBS_FAIL_THRESHOLD.hal.rg_bistctl_prbs_fail_threshold = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_PRBS_FAIL_THRESHOLD, fw_BISTCTL_PRBS_FAIL_THRESHOLD.dat.value); //write addr: 0x1FC7E230 = 0x1

	fw_BISTCTL_PRBS_INITIAL_SEED.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_PRBS_INITIAL_SEED);
	fw_BISTCTL_PRBS_INITIAL_SEED.hal.bistctl_prbs_init_seed = 0xFF1FD53; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_PRBS_INITIAL_SEED, fw_BISTCTL_PRBS_INITIAL_SEED.dat.value); //write addr: 0x1FC7E224 = 0xFF1FD53

	fw_BISTCTL_CONTROL.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_CONTROL);
	fw_BISTCTL_CONTROL.hal.rg_bistctl_io_data_inv = 0x0; 
	fw_BISTCTL_CONTROL.hal.rg_bistctl_pat_tx_en = 0x1; 
	fw_BISTCTL_CONTROL.hal.rg_bistctl_pat_sel = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_CONTROL, fw_BISTCTL_CONTROL.dat.value); //write addr: 0x1FC7E210 = 0x101

	fw_ADD_XPON_MODE_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_XPON_MODE_1);
	fw_ADD_XPON_MODE_1.hal.rg_tx_bist_gen_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_XPON_MODE_1, fw_ADD_XPON_MODE_1.dat.value); //write addr: 0x1FC7E414 = 0x10000

	fw_RG_PXP_RX_DAC_RANGE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_DAC_RANGE);
	fw_RG_PXP_RX_DAC_RANGE.hal.RG_PXP_RX_SIGDET_LPF_CTRL = 0x3; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_DAC_RANGE, fw_RG_PXP_RX_DAC_RANGE.dat.value); //write addr: 0x1FC7F110 = 0x3000200

	fw_RG_PXP_RX_SIGDET_NOVTH.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH);
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_SIGDET_VTH_SEL = 0x2; 
	fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_SIGDET_PEAK = 0x2; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH, fw_RG_PXP_RX_SIGDET_NOVTH.dat.value); //write addr: 0x1FC7F114 = 0x1020200


//*******    // Rx Clock Setting
	udelay(50);
	fw_RX_DISB_MODE_8.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_8);
	fw_RX_DISB_MODE_8.hal.rg_disb_fbck_lock = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_8, fw_RX_DISB_MODE_8.dat.value); //write addr: 0x1FC7E33C = 0x1010100

	fw_RX_EXTRAL_CTRL.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EXTRAL_CTRL);
	fw_RX_EXTRAL_CTRL.hal.rg_disb_leq = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EXTRAL_CTRL, fw_RX_EXTRAL_CTRL.dat.value); //write addr: 0x1FC7E48C = 0x1000202

	fw_RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PD_PICAL_CKD8_INV);
	fw_RG_PXP_CDR_PD_PICAL_CKD8_INV.hal.RG_PXP_CDR_PD_EDGE_DIS = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PD_PICAL_CKD8_INV, fw_RG_PXP_CDR_PD_PICAL_CKD8_INV.dat.value); //write addr: 0x1FC7F0DC = 0x0

	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb);
	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pwdb = 0x1; 
	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb, fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value); //write addr: 0x1FC7E824 = 0x1000000

	ndelay(100);
	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb, fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value); //write addr: 0x1FC7E824 = 0x1010000

	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pieye_pwdb = 0x1; 
	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pieye_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb, fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value); //write addr: 0x1FC7E824 = 0x1010101

	fw_rg_force_da_pxp_cdr_pd_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pd_pwdb);
	fw_rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_kband_rstb = 0x0; 
	fw_rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pr_kband_rstb = 0x0; 
	fw_rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_sel_da_pxp_cdr_pd_pwdb = 0x1; 
	fw_rg_force_da_pxp_cdr_pd_pwdb.hal.rg_force_da_pxp_cdr_pd_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pd_pwdb, fw_rg_force_da_pxp_cdr_pd_pwdb.dat.value); //write addr: 0x1FC7E81C = 0x101

	fw_rg_force_da_pxp_rx_fe_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_pwdb);
	fw_rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_pdoscal_en = 0x0; 
	fw_rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_pdoscal_en = 0x0; 
	fw_rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_sel_da_pxp_rx_fe_pwdb = 0x1; 
	fw_rg_force_da_pxp_rx_fe_pwdb.hal.rg_force_da_pxp_rx_fe_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_pwdb, fw_rg_force_da_pxp_rx_fe_pwdb.dat.value); //write addr: 0x1FC7E894 = 0x101

	fw_rg_force_da_pxp_rx_scan_rst_b.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_scan_rst_b);
	fw_rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_sigdet_pwdb = 0x1; 
	fw_rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_sigdet_pwdb = 0x1; 
	fw_rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_sel_da_pxp_rx_scan_rst_b = 0x0; 
	fw_rg_force_da_pxp_rx_scan_rst_b.hal.rg_force_da_pxp_rx_scan_rst_b = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_scan_rst_b, fw_rg_force_da_pxp_rx_scan_rst_b.dat.value); //write addr: 0x1FC7E84C = 0x1010000

	fw_SS_DA_XPON_PWDB_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0);
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pd_pwdb = 0x1; 
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pieye_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0, fw_SS_DA_XPON_PWDB_0.dat.value); //write addr: 0x1FC7E34C = 0x1010000

	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0, fw_SS_DA_XPON_PWDB_0.dat.value); //write addr: 0x1FC7E34C = 0x1010000

	udelay(10);
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0, fw_SS_DA_XPON_PWDB_0.dat.value); //write addr: 0x1FC7E34C = 0x1010100

	udelay(100);
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x1; 
	fw_SS_DA_XPON_PWDB_0.hal.rg_da_xpon_rx_fe_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_DA_XPON_PWDB_0, fw_SS_DA_XPON_PWDB_0.dat.value); //write addr: 0x1FC7E34C = 0x1010101

	fw_RG_PXP_RX_BUSBIT_SEL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_BUSBIT_SEL);
	fw_RG_PXP_RX_BUSBIT_SEL.hal.RG_PXP_RX_PHY_CK_SEL_FORCE = 0x0; 
	fw_RG_PXP_RX_BUSBIT_SEL.hal.RG_PXP_RX_PHY_CK_SEL = 0x0; 
	fw_RG_PXP_RX_BUSBIT_SEL.hal.RG_PXP_RX_BUSBIT_SEL_FORCE = 0x0; 
	fw_RG_PXP_RX_BUSBIT_SEL.hal.RG_PXP_RX_BUSBIT_SEL = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_BUSBIT_SEL, fw_RG_PXP_RX_BUSBIT_SEL.dat.value); //write addr: 0x1FC7F0CC = 0x0

	fw_RG_PXP_RX_FE_EQ_HZEN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_EQ_HZEN);
	fw_RG_PXP_RX_FE_EQ_HZEN.hal.RG_PXP_RX_FE_VB_EQ3_EN = 0x1; 
	fw_RG_PXP_RX_FE_EQ_HZEN.hal.RG_PXP_RX_FE_VB_EQ2_EN = 0x1; 
	fw_RG_PXP_RX_FE_EQ_HZEN.hal.RG_PXP_RX_FE_VB_EQ1_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_FE_EQ_HZEN, fw_RG_PXP_RX_FE_EQ_HZEN.dat.value); //write addr: 0x1FC7F118 = 0x1010100

	fw_ADD_DIG_RESERVE_25.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_25);
	tmp = fw_ADD_DIG_RESERVE_25.hal.rg_dig_reserve_25;
	tmp = (0x1<<7) | (tmp & (~(0x1<<7)));
	tmp = (0x1<<3) | (tmp & (~(0x1<<3)));
	switch(gen_speed)
	{
		case 1:
			tmp = (0x0<<4) | (tmp & (~(0x7<<4)));
			tmp = (0x0<<0) | (tmp & (~(0x7<<0)));
			break;
		case 2:
			tmp = (0x1<<4) | (tmp & (~(0x7<<4)));
			tmp = (0x1<<0) | (tmp & (~(0x7<<0)));
			break;
		case 3:
			tmp = (0x2<<4) | (tmp & (~(0x7<<4)));
			tmp = (0x2<<0) | (tmp & (~(0x7<<0)));
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}		
	fw_ADD_DIG_RESERVE_25.hal.rg_dig_reserve_25 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_25, fw_ADD_DIG_RESERVE_25.dat.value); //write addr: 0x1FC7E900 = 0xAA

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl);
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_sel_da_pxp_rx_fe_gain_ctrl = 0x1; 
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_da_pxp_rx_fe_gain_ctrl = 0x3; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl, fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value); //write addr: 0x1FC7E88C = 0x103

	fw_rg_force_da_pxp_rx_oscal_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en);
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_sel_da_pxp_rx_oscal_rstb = 0x1; 
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_da_pxp_rx_oscal_rstb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en, fw_rg_force_da_pxp_rx_oscal_en.dat.value); //write addr: 0x1FC7E840 = 0x1000000

	ndelay(100);
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_da_pxp_rx_oscal_rstb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en, fw_rg_force_da_pxp_rx_oscal_en.dat.value); //write addr: 0x1FC7E840 = 0x1010000

	fw_rg_force_da_pxp_aeq_rstb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_rstb);
	fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_sel_da_pxp_cdr_injck_sel = 0x1; 
	switch(gen_speed)
	{
		case 1:
			fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_da_pxp_cdr_injck_sel = 0x1; 
			break;
		case 2:
			fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_da_pxp_cdr_injck_sel = 0x1; 
			break;
		case 3:
			fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_da_pxp_cdr_injck_sel = 0x0; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}		
	fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_sel_da_pxp_aeq_rstb = 0x1; 
	fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_da_pxp_aeq_rstb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_rstb, fw_rg_force_da_pxp_aeq_rstb.dat.value); //write addr: 0x1FC7E814 = 0x1000100

	ndelay(100);
	fw_rg_force_da_pxp_aeq_rstb.hal.rg_force_da_pxp_aeq_rstb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_rstb, fw_rg_force_da_pxp_aeq_rstb.dat.value); //write addr: 0x1FC7E814 = 0x1000101

	ndelay(100);
	fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_sdm_scan_rstb);
	fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.hal.rg_force_sel_da_pxp_rx_oscal_ckon = 0x1; 
	fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.hal.rg_force_da_pxp_rx_oscal_ckon = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_sdm_scan_rstb, fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.dat.value); //write addr: 0x1FC7E83C = 0x1010000

	ndelay(300);
	fw_rg_force_da_pxp_rx_oscal_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en);
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_sel_da_pxp_rx_oscal_en = 0x1; 
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_da_pxp_rx_oscal_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en, fw_rg_force_da_pxp_rx_oscal_en.dat.value); //write addr: 0x1FC7E840 = 0x1010101

	udelay(10);
	fw_rg_force_da_pxp_aeq_bypass.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_bypass);
	fw_rg_force_da_pxp_aeq_bypass.hal.rg_force_sel_da_pxp_aeq_ckon = 0x1; 
	fw_rg_force_da_pxp_aeq_bypass.hal.rg_force_da_pxp_aeq_ckon = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_bypass, fw_rg_force_da_pxp_aeq_bypass.dat.value); //write addr: 0x1FC7E80C = 0x1010000

	ndelay(2100);
	fw_rg_force_da_pxp_rx_oscal_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en);
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_sel_da_pxp_rx_oscal_en = 0x1; 
	fw_rg_force_da_pxp_rx_oscal_en.hal.rg_force_da_pxp_rx_oscal_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_oscal_en, fw_rg_force_da_pxp_rx_oscal_en.dat.value); //write addr: 0x1FC7E840 = 0x1010100

	ndelay(30);
	fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_sdm_scan_rstb);
	fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.hal.rg_force_sel_da_pxp_rx_oscal_ckon = 0x1; 
	fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.hal.rg_force_da_pxp_rx_oscal_ckon = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_sdm_scan_rstb, fw_rg_force_da_pxp_jcpll_sdm_scan_rstb.dat.value); //write addr: 0x1FC7E83C = 0x1000000

	fw_ADD_RX_SYS_EN_SEL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_RX_SYS_EN_SEL_0);
	fw_ADD_RX_SYS_EN_SEL_0.hal.rg_da_rx_sys_en_sel = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_RX_SYS_EN_SEL_0, fw_ADD_RX_SYS_EN_SEL_0.dat.value); //write addr: 0x1FC7E38C = 0x1

	fw_rg_force_da_pxp_aeq_speed.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_speed);
	fw_rg_force_da_pxp_aeq_speed.hal.rg_force_sel_da_pxp_rx_osr_sel = 0x1; 
	switch(gen_speed)
	{
		case 1:
			fw_rg_force_da_pxp_aeq_speed.hal.rg_force_da_pxp_rx_osr_sel = 0x2; 
			break;
		case 2:
			fw_rg_force_da_pxp_aeq_speed.hal.rg_force_da_pxp_rx_osr_sel = 0x1; 
			break;
		case 3:
			fw_rg_force_da_pxp_aeq_speed.hal.rg_force_da_pxp_rx_osr_sel = 0x0; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}		
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_speed, fw_rg_force_da_pxp_aeq_speed.dat.value); //write addr: 0x1FC7E76C = 0x1000000

	fw_RG_PXP_CDR_PR_MONPR_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_MONPR_EN);
	fw_RG_PXP_CDR_PR_MONPR_EN.hal.RG_PXP_RX_DAC_MON = 0x0; 
	fw_RG_PXP_CDR_PR_MONPR_EN.hal.RG_PXP_CDR_PR_XFICK_EN = 0x1; 
	fw_RG_PXP_CDR_PR_MONPR_EN.hal.RG_PXP_CDR_PR_MONPI_EN = 0x0; 
	fw_RG_PXP_CDR_PR_MONPR_EN.hal.RG_PXP_CDR_PR_MONPR_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_MONPR_EN, fw_RG_PXP_CDR_PR_MONPR_EN.dat.value); //write addr: 0x1FC7F10C = 0x70604

	fw_RG_PXP_CDR_PR_BETA_DAC.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_BETA_DAC);
	fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_KBAND_DIV = 0x4; 
	fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_BETA_SEL = 0x1; 
	fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_VCOADC_OS = 0x8; 
	switch(gen_speed)
	{
		case 1:
			fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_BETA_DAC = 0x8; 
			break;
		case 2:
			fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_BETA_DAC = 0x8; 
			break;
		case 3:
			fw_RG_PXP_CDR_PR_BETA_DAC.hal.RG_PXP_CDR_PR_BETA_DAC = 0x6; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}			
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_BETA_DAC, fw_RG_PXP_CDR_PR_BETA_DAC.dat.value); //write addr: 0x1FC7F0F8 = 0x4010806

	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_VREG_IBAND_VAL);
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.RG_PXP_CDR_PR_FBKSEL = 0x0; 
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.RG_PXP_CDR_PR_DAC_BAND = 0x8; 
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.RG_PXP_CDR_PR_VREG_CKBUF_VAL = 0x0; 
	fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.hal.RG_PXP_CDR_PR_VREG_IBAND_VAL = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_PR_VREG_IBAND_VAL, fw_RG_PXP_CDR_PR_VREG_IBAND_VAL.dat.value); //write addr: 0x1FC7F0FC = 0x80000

	fw_RG_PXP_RX_PHYCK_DIV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV);
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_TDC_CK_SEL = 0x1; 
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_RSTB = 0x1; 
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_SEL = 0x1; 
	switch(gen_speed)
	{
		case 1:
			fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_DIV = 0xB; 
			break;
		case 2:
			fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_DIV = 0xB; 
			break;
		case 3:
			fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_DIV = 0x9; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}			
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV, fw_RG_PXP_RX_PHYCK_DIV.dat.value); //write addr: 0x1FC7F0D8 = 0x1010109

	fw_RG_PXP_CDR_LPF_RATIO.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_LPF_RATIO);
	fw_RG_PXP_CDR_LPF_RATIO.hal.RG_PXP_CDR_LPF_TOP_LIM = 0x20000; 
	switch(gen_speed)
	{
		case 1:
			fw_RG_PXP_CDR_LPF_RATIO.hal.RG_PXP_CDR_LPF_RATIO = 0x2; 
			break;
		case 2:
			fw_RG_PXP_CDR_LPF_RATIO.hal.RG_PXP_CDR_LPF_RATIO = 0x1; 
			break;
		case 3:
			fw_RG_PXP_CDR_LPF_RATIO.hal.RG_PXP_CDR_LPF_RATIO = 0x0; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}			
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_LPF_RATIO, fw_RG_PXP_CDR_LPF_RATIO.dat.value); //write addr: 0x1FC7F0E8 = 0x2000000

	fw_SS_RX_FLL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_0);
	fw_SS_RX_FLL_0.hal.rg_kband_kfc = 0x1; 
	fw_SS_RX_FLL_0.hal.rg_fpkdiv = 0xA5; 
	fw_SS_RX_FLL_0.hal.rg_kband_prediv = 0x4; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_0, fw_SS_RX_FLL_0.dat.value); //write addr: 0x1FC7E170 = 0x100A504

	fw_SS_RX_FLL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_1);
	fw_SS_RX_FLL_1.hal.rg_symbol_wd = 0x4; 
	fw_SS_RX_FLL_1.hal.rg_settle_time_sel = 0x3; 
	fw_SS_RX_FLL_1.hal.rg_ipath_idac = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_1, fw_SS_RX_FLL_1.dat.value); //write addr: 0x1FC7E174 = 0x4030000

	fw_SS_RX_FLL_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_2);
	fw_SS_RX_FLL_2.hal.rg_debug_sel = 0x0; 
	fw_SS_RX_FLL_2.hal.rg_ck_rate = 0x0; 
	fw_SS_RX_FLL_2.hal.rg_amp = 0x4; 
	fw_SS_RX_FLL_2.hal.rg_prbs_sel = 0x3; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_2, fw_SS_RX_FLL_2.dat.value); //write addr: 0x1FC7E178 = 0x403

	fw_RX_DISB_MODE_4.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_4);
	fw_RX_DISB_MODE_4.hal.rg_disb_blwc_offset = 0x0; 
	fw_RX_DISB_MODE_4.hal.rg_disb_xpon_rx_sigdet_out = 0x1; 
	fw_RX_DISB_MODE_4.hal.rg_disb_rx_dac_e1 = 0x1; 
	fw_RX_DISB_MODE_4.hal.rg_disb_rx_dac_e0 = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_4, fw_RX_DISB_MODE_4.dat.value); //write addr: 0x1FC7E320 = 0x10101

	fw_SS_LCPLL_PWCTL_SETTING_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_LCPLL_PWCTL_SETTING_0);
	fw_SS_LCPLL_PWCTL_SETTING_0.hal.rg_sw_lcpll_en = 0x1; 
	fw_SS_LCPLL_PWCTL_SETTING_0.hal.rg_lcpll_en_inv = 0x0; 
	fw_SS_LCPLL_PWCTL_SETTING_0.hal.rg_lcpll_hw_ctrl_mode = 0x0; 
	fw_SS_LCPLL_PWCTL_SETTING_0.hal.rg_lcpll_force_on = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_LCPLL_PWCTL_SETTING_0, fw_SS_LCPLL_PWCTL_SETTING_0.dat.value); //write addr: 0x1FC7E000 = 0x1000000

	udelay(120);
	fw_rg_force_da_pxp_cdr_lpf_lck2data.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_lpf_lck2data);
	fw_rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_rstb = 0x1; 
	fw_rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_da_pxp_cdr_lpf_rstb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_lpf_lck2data, fw_rg_force_da_pxp_cdr_lpf_lck2data.dat.value); //write addr: 0x1FC7E818 = 0x1010000

	ndelay(100);
	fw_rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_lck2data = 0x1; 
	fw_rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_da_pxp_cdr_lpf_lck2data = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_lpf_lck2data, fw_rg_force_da_pxp_cdr_lpf_lck2data.dat.value); //write addr: 0x1FC7E818 = 0x1010101

	ndelay(4100);
	fw_rg_force_da_pxp_aeq_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_en);
	fw_rg_force_da_pxp_aeq_en.hal.rg_force_sel_da_pxp_aeq_en = 0x1; 
	fw_rg_force_da_pxp_aeq_en.hal.rg_force_da_pxp_aeq_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_aeq_en, fw_rg_force_da_pxp_aeq_en.dat.value); //write addr: 0x1FC7E808 = 0x101



	ndelay(20);
	fw_SS_LCPLL_PWCTL_SETTING_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_LCPLL_PWCTL_SETTING_1);
	fw_SS_LCPLL_PWCTL_SETTING_1.hal.rg_lcpll_ck_stb_timer = 0x1; 
	fw_SS_LCPLL_PWCTL_SETTING_1.hal.rg_lcpll_pcw_man_load_timer = 0x10; 
	fw_SS_LCPLL_PWCTL_SETTING_1.hal.rg_lcpll_en_timer = 0xA; 
	fw_SS_LCPLL_PWCTL_SETTING_1.hal.rg_lcpll_man_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_LCPLL_PWCTL_SETTING_1, fw_SS_LCPLL_PWCTL_SETTING_1.dat.value); //write addr: 0x1FC7E004 = 0x1100A01

	fw_ADD_XPON_MODE_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_XPON_MODE_1);
	fw_ADD_XPON_MODE_1.hal.rg_xfi_rx_mode = 0x0; 
	fw_ADD_XPON_MODE_1.hal.rg_xfi_tx_mode = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_XPON_MODE_1, fw_ADD_XPON_MODE_1.dat.value); //write addr: 0x1FC7E414 = 0x10000



//*******  TX_DATA_IS_BIST
	fw_RG_XPON_RX_RESERVED_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RG_XPON_RX_RESERVED_1);
	switch(gen_speed)
	{
		case 1:
			fw_RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0x0; 
			break;
		case 2:
			fw_RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0x0; 
			break;
		case 3:
			fw_RG_XPON_RX_RESERVED_1.hal.rg_xpon_rx_rate_ctrl = 0x2; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}			
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RG_XPON_RX_RESERVED_1, fw_RG_XPON_RX_RESERVED_1.dat.value); //write addr: 0x1FC7E374 = 0x2

	fw_xpon_tx_rate_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _xpon_tx_rate_ctrl);
	switch(gen_speed)
	{
		case 1:
			fw_xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0x1; 
			break;
		case 2:
			fw_xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0x1; 
			break;
		case 3:
			fw_xpon_tx_rate_ctrl.hal.rg_pon_tx_rate_ctrl = 0x2; 
			break;
		default:
			printk("error! input speed parameter must be  1/2/3\n");
			break;
	}			
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _xpon_tx_rate_ctrl, fw_xpon_tx_rate_ctrl.dat.value); //write addr: 0x1FC7E580 = 0x2



//*******  PCIEG3 port NEW SW RESET
	udelay(40);
	fw_ADD_DIG_RESERVE_24.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_24);
	tmp = fw_ADD_DIG_RESERVE_24.hal.rg_dig_reserve_24;
	tmp = (0x1<<12) | (tmp & (~(0x1<<12)));
	fw_ADD_DIG_RESERVE_24.hal.rg_dig_reserve_24 = tmp;
	tmp = fw_ADD_DIG_RESERVE_24.hal.rg_dig_reserve_24;
	tmp = (0x1<<8) | (tmp & (~(0x1<<8)));
	fw_ADD_DIG_RESERVE_24.hal.rg_dig_reserve_24 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_24, fw_ADD_DIG_RESERVE_24.dat.value); //write addr: 0x1FC7E8FC = 0x1103

	fw_BISTCTL_CONTROL.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_CONTROL);
	fw_BISTCTL_CONTROL.hal.rg_bistctl_pat_rx_check_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_CONTROL, fw_BISTCTL_CONTROL.dat.value); //write addr: 0x1FC7E210 = 0x101

	udelay(10);

	fw_BISTCTL_CONTROL.hal.rg_bistctl_pat_rx_check_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _BISTCTL_CONTROL, fw_BISTCTL_CONTROL.dat.value); //write addr: 0x1FC7E210 = 0x10101

	mdelay(10);
	fw_BISTCTL_PRBS_EVENT.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _BISTCTL_PRBS_EVENT);
	val = fw_BISTCTL_PRBS_EVENT.hal.ro_bistctl_prbs_compare; //read addr: 0x1FC7E228 [00:00]
	printk("ro_bistctl_prbs_compare : 0x%x; \n", val);

	fw_BISTCTL_PRBS_EVENT.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _BISTCTL_PRBS_EVENT);
	val = fw_BISTCTL_PRBS_EVENT.hal.ro_bistctl_prbs_fail; //read addr: 0x1FC7E228 [08:08]
	printk("ro_bistctl_prbs_fail : 0x%x; \n", val);

	fw_BISTCTL_PRBS_EVENT.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _BISTCTL_PRBS_EVENT);
	val = fw_BISTCTL_PRBS_EVENT.hal.ro_bistctl_prbs_done; //read addr: 0x1FC7E228 [16:16]
	printk("ro_bistctl_prbs_done : 0x%x; \n", val);

}
	

void PCIe_G3_Disable(void)
{
	
	rg_type_t(REG_RG_PXP_RX_PHYCK_DIV) fw_RG_PXP_RX_PHYCK_DIV;
	rg_type_t(REG_SW_RST_SET) fw_SW_RST_SET;
	rg_type_t(REG_SS_TX_RST_B) fw_SS_TX_RST_B;
	rg_type_t(REG_rg_force_da_pxp_txpll_ckout_en) fw_rg_force_da_pxp_txpll_ckout_en;
	rg_type_t(REG_rg_force_da_pxp_jcpll_ckout_en) fw_rg_force_da_pxp_jcpll_ckout_en;
	rg_type_t(REG_RG_PXP_JCPLL_VCO_TCLVAR) fw_RG_PXP_JCPLL_VCO_TCLVAR;


	fw_RG_PXP_RX_PHYCK_DIV.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV);
	fw_RG_PXP_RX_PHYCK_DIV.hal.RG_PXP_RX_PHYCK_RSTB = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_PHYCK_DIV, fw_RG_PXP_RX_PHYCK_DIV.dat.value); //write addr: 0x1FC7F0D8 = 0x100000A

	fw_SW_RST_SET.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET);
	fw_SW_RST_SET.hal.rg_sw_tx_fifo_rst_n = 0x0; 
	fw_SW_RST_SET.hal.rg_sw_allpcs_rst_n = 0x0; 
	fw_SW_RST_SET.hal.rg_sw_pma_rst_n = 0x0; 
	fw_SW_RST_SET.hal.rg_sw_tx_rst_n = 0x0; 
	fw_SW_RST_SET.hal.rg_sw_rx_fifo_rst_n = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET, fw_SW_RST_SET.dat.value); //write addr: 0x1FC7E460 = 0x0

	fw_SW_RST_SET.hal.rg_sw_xfi_rxpcs_rst_n = 0x0; 
	fw_SW_RST_SET.hal.rg_sw_ref_rst_n = 0x0; 
	fw_SW_RST_SET.hal.rg_sw_rx_rst_n = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SW_RST_SET, fw_SW_RST_SET.dat.value); //write addr: 0x1FC7E460 = 0x0

	fw_SS_TX_RST_B.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_TX_RST_B);
	fw_SS_TX_RST_B.hal.txcalib_rst_b = 0x0; 
	fw_SS_TX_RST_B.hal.tx_top_rst_b = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_TX_RST_B, fw_SS_TX_RST_B.dat.value); //write addr: 0x1FC7E260 = 0x0

	fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR);
	fw_RG_PXP_JCPLL_VCO_TCLVAR.hal.RG_PXP_JCPLL_SSC_PHASE_INI = 0x0; 
	fw_RG_PXP_JCPLL_VCO_TCLVAR.hal.RG_PXP_JCPLL_SSC_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_JCPLL_VCO_TCLVAR, fw_RG_PXP_JCPLL_VCO_TCLVAR.dat.value); //write addr: 0x1FC7F030 = 0x301B

	fw_rg_force_da_pxp_txpll_ckout_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_ckout_en);
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_sel_da_pxp_txpll_en = 0x1; 
	fw_rg_force_da_pxp_txpll_ckout_en.hal.rg_force_da_pxp_txpll_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_txpll_ckout_en, fw_rg_force_da_pxp_txpll_ckout_en.dat.value); //write addr: 0x1FC7E854 = 0x1000000

	fw_rg_force_da_pxp_jcpll_ckout_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_ckout_en);
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_sel_da_pxp_jcpll_en = 0x1; 
	fw_rg_force_da_pxp_jcpll_ckout_en.hal.rg_force_da_pxp_jcpll_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_jcpll_ckout_en, fw_rg_force_da_pxp_jcpll_ckout_en.dat.value); //write addr: 0x1FC7E828 = 0x1000000


}



uint PCIe_eyescan_moveX(uint EYE_X_HW, uint EYE_Y_HW, int Ovr_sel, char lane){

	u32 lane_offset_dig;
	rg_type_t(REG_rg_force_da_pxp_tx_rate_ctrl) fw_rg_force_da_pxp_tx_rate_ctrl;
	
	int i;

	if (lane == 1)
		lane_offset_dig = 0x1000;
	else
		lane_offset_dig = 0;
	
          
       for (i = 0; i < Ovr_sel; i++)
       {
	// X index
	       
	//IO_SPHYA_REG_BITS(EN7581_XPON_PMA_rg_force_da_pxp_tx_rate_ctrl, 22, 16, EYE_X_HW); //rg_force_da_pxp_cdr_pr_pieye
	//IO_SPHYA_REG_BITS(EN7581_XPON_PMA_rg_force_da_pxp_tx_rate_ctrl, 24, 24, 0x1);      //rg_force_sel_da_pxp_cdr_pr_pieye
	 fw_rg_force_da_pxp_tx_rate_ctrl.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl);
	 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_cdr_pr_pieye = EYE_X_HW; //X
	 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_cdr_pr_pieye = 0x1; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl, fw_rg_force_da_pxp_tx_rate_ctrl.dat.value); // write addr: 0x1FC7E784 = 0x1000000


	EYE_X_HW++;
       }
    return EYE_X_HW;

}



int PCIe_eyescan_countPoint(uint EYE_X_FW, uint EYE_Y_FW, char lane){
	uint eyecnt = 0;																			
	int eyecnt_rdy = 0;	

	rg_type_t(REG_RX_EYE_TOP_EYECNT_CTRL_1) fw_RX_EYE_TOP_EYECNT_CTRL_1;
	rg_type_t(REG_RX_DISB_MODE_7) fw_RX_DISB_MODE_7;
	rg_type_t(REG_RX_FORCE_MODE_8) fw_RX_FORCE_MODE_8;
	rg_type_t(REG_rg_force_da_pxp_tx_rate_ctrl) fw_rg_force_da_pxp_tx_rate_ctrl;
	rg_type_t(REG_rg_force_da_pxp_cdr_pr_fll_cor) fw_rg_force_da_pxp_cdr_pr_fll_cor;
	rg_type_t(REG_RX_DEBUG_0) fw_RX_DEBUG_0;
	rg_type_t(REG_RX_TORGS_DEBUG_4) fw_RX_TORGS_DEBUG_4;
	rg_type_t(REG_RX_TORGS_DEBUG_7) fw_RX_TORGS_DEBUG_7;
	 
	 fw_rg_force_da_pxp_tx_rate_ctrl.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl);
	 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_cdr_pr_pieye = EYE_X_FW; //X
	 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_cdr_pr_pieye = 0x1; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl, fw_rg_force_da_pxp_tx_rate_ctrl.dat.value); // write addr: 0x1FC7E784 = 0x1000000

	 
	 // Y index
	 fw_rg_force_da_pxp_cdr_pr_fll_cor.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_fll_cor);
	 fw_rg_force_da_pxp_cdr_pr_fll_cor.hal.rg_force_da_pxp_rx_dac_eye = EYE_Y_FW; //Y
	 fw_rg_force_da_pxp_cdr_pr_fll_cor.hal.rg_force_sel_da_pxp_rx_dac_eye = 0x1; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_fll_cor, fw_rg_force_da_pxp_cdr_pr_fll_cor.dat.value); // write addr: 0x1FC7E790 = 0x1000000



	 // EYE cnt enable 

	 fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_init_b = 0x0; 
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_force_eyedur_init_b = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); // write addr: 0x1FC7E084 = 0x1

			 

	 fw_RX_DISB_MODE_7.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_7);
	 fw_RX_DISB_MODE_7.hal.rg_disb_eyecnt_rx_rst_b = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_7, fw_RX_DISB_MODE_7.dat.value); // write addr: 0x1FC7E338 = 0x10101

	 fw_RX_FORCE_MODE_8.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_8);
	 fw_RX_FORCE_MODE_8.hal.rg_force_eyecnt_rx_rst_b = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_8, fw_RX_FORCE_MODE_8.dat.value); // write addr: 0x1FC7E32C = 0x0
	 

	 fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_en = 0x0; 
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_force_eyedur_en = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); // write addr: 0x1FC7E084 = 0x0
	 

	 fw_RX_FORCE_MODE_8.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_8);
	 fw_RX_FORCE_MODE_8.hal.rg_force_eyecnt_rx_rst_b = 0x1; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_8, fw_RX_FORCE_MODE_8.dat.value); // write addr: 0x1FC7E32C = 0x1000000

	 fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_force_eyedur_init_b = 0x1; 
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_force_eyedur_en = 0x1; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); // write addr: 0x1FC7E084 = 0x1010000	 
	
	 mdelay(1);

	 fw_RX_DEBUG_0.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0);
	 fw_RX_DEBUG_0.hal.rg_ro_toggle = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_RX_DEBUG_0.dat.value); // write addr: 0x1FC7E20C = 0xFFFF

	 udelay(100);
	 fw_RX_DEBUG_0.hal.rg_ro_toggle = 0x1; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_RX_DEBUG_0.dat.value); // write addr: 0x1FC7E20C = 0x100FFFF


	 fw_RX_TORGS_DEBUG_4.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_TORGS_DEBUG_4);
	 eyecnt_rdy = fw_RX_TORGS_DEBUG_4.hal.eyecnt_rdy; //read addr: 0x1FC7E244 [24:24]

	 
	 if (eyecnt_rdy == 1)   // if eyecnt_rdy
	 {
		 //eyecnt = IO_GPHYA_REG_BITS(EN7581_XPON_PMA_RX_TORGS_DEBUG_7, 19, 0);  //eyecnt
		 fw_RX_TORGS_DEBUG_7.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_TORGS_DEBUG_7);
		 eyecnt= fw_RX_TORGS_DEBUG_7.hal.eyecnt; 
	 }
	 else
	 {
	     printk("eyecnt_rdy = %d \n", eyecnt_rdy);
	 }
																			
	return eyecnt;					


}


void PCIe_eye_setting(char lane)
{
	u32 lane_offset_dig;

	rg_type_t(REG_RG_PXP_CDR_LPF_RATIO) fw_RG_PXP_CDR_LPF_RATIO;
	rg_type_t(REG_RX_EYE_TOP_EYECNT_CTRL_0) fw_RX_EYE_TOP_EYECNT_CTRL_0;
	rg_type_t(REG_RX_EYE_TOP_EYEINDEX_CTRL_0) fw_RX_EYE_TOP_EYEINDEX_CTRL_0;
	rg_type_t(REG_RX_EYE_TOP_EYEINDEX_CTRL_1) fw_RX_EYE_TOP_EYEINDEX_CTRL_1;
	rg_type_t(REG_RX_EYE_TOP_EYECNT_CTRL_2) fw_RX_EYE_TOP_EYECNT_CTRL_2;
	rg_type_t(REG_RX_EYE_TOP_EYEINDEX_CTRL_2) fw_RX_EYE_TOP_EYEINDEX_CTRL_2;
	rg_type_t(REG_RX_EYE_TOP_EYEINDEX_CTRL_3) fw_RX_EYE_TOP_EYEINDEX_CTRL_3;
	rg_type_t(REG_RX_EYE_TOP_EYEOPENING_CTRL_0) fw_RX_EYE_TOP_EYEOPENING_CTRL_0;
	rg_type_t(REG_RX_EYE_TOP_EYEOPENING_CTRL_1) fw_RX_EYE_TOP_EYEOPENING_CTRL_1;
	rg_type_t(REG_PHY_EQ_CTRL_1) fw_PHY_EQ_CTRL_1;
	rg_type_t(REG_PHY_EQ_CTRL_2) fw_PHY_EQ_CTRL_2;

	if (lane == 1)
	{
	}
	else
	{
		lane_offset_dig = 0;

		fw_RG_PXP_CDR_LPF_RATIO.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_LPF_RATIO);
		fw_RG_PXP_CDR_LPF_RATIO.hal.RG_PXP_CDR_LPF_RATIO = 0x0; 
		Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CDR_LPF_RATIO, fw_RG_PXP_CDR_LPF_RATIO.dat.value); //write addr: 0x1FC7F0E8 = 0x2000000

	}

	fw_RX_EYE_TOP_EYECNT_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_0);
	fw_RX_EYE_TOP_EYECNT_CTRL_0.hal.rg_eye_mask = 0xFF; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_0, fw_RX_EYE_TOP_EYECNT_CTRL_0.dat.value); //write addr: 0x1FC7E080 = 0xFF000000

	fw_RX_EYE_TOP_EYEINDEX_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_0);
	fw_RX_EYE_TOP_EYEINDEX_CTRL_0.hal.rg_x_min = 0x1C0; 
	fw_RX_EYE_TOP_EYEINDEX_CTRL_0.hal.rg_x_max = 0x234; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_0, fw_RX_EYE_TOP_EYEINDEX_CTRL_0.dat.value); //write addr: 0x1FC7E068 = 0x23401C0

	//fw_RX_EYE_TOP_EYEINDEX_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_1);
	//fw_RX_EYE_TOP_EYEINDEX_CTRL_1.hal.rg_y_min = 0x40; 
	//fw_RX_EYE_TOP_EYEINDEX_CTRL_1.hal.rg_y_max = 0x30; 
	//Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_1, fw_RX_EYE_TOP_EYEINDEX_CTRL_1.dat.value); //write addr: 0x1FC7E06C = 0x3040

	fw_RX_EYE_TOP_EYECNT_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_0);
	fw_RX_EYE_TOP_EYECNT_CTRL_0.hal.rg_cntlen = 0xF8; 
	fw_RX_EYE_TOP_EYECNT_CTRL_0.hal.rg_cntforever = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_0, fw_RX_EYE_TOP_EYECNT_CTRL_0.dat.value); //write addr: 0x1FC7E080 = 0xFF0000F8

	fw_RX_EYE_TOP_EYECNT_CTRL_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_2);
	fw_RX_EYE_TOP_EYECNT_CTRL_2.hal.rg_data_shift = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_2, fw_RX_EYE_TOP_EYECNT_CTRL_2.dat.value); //write addr: 0x1FC7E088 = 0x0

	fw_RX_EYE_TOP_EYEINDEX_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_1);
	fw_RX_EYE_TOP_EYEINDEX_CTRL_1.hal.rg_index_mode = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_1, fw_RX_EYE_TOP_EYEINDEX_CTRL_1.dat.value); //write addr: 0x1FC7E06C = 0x3040

	fw_RX_EYE_TOP_EYEINDEX_CTRL_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_2);
	fw_RX_EYE_TOP_EYEINDEX_CTRL_2.hal.rg_eyedur = 0xFFF8; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_2, fw_RX_EYE_TOP_EYEINDEX_CTRL_2.dat.value); //write addr: 0x1FC7E070 = 0xFFF8

	fw_RX_EYE_TOP_EYEINDEX_CTRL_3.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_3);
	fw_RX_EYE_TOP_EYEINDEX_CTRL_3.hal.rg_eye_nextpts_sel = 0x0; 
	fw_RX_EYE_TOP_EYEINDEX_CTRL_3.hal.rg_eye_nextpts_toggle = 0x0; 
	fw_RX_EYE_TOP_EYEINDEX_CTRL_3.hal.rg_eye_nextpts = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEINDEX_CTRL_3, fw_RX_EYE_TOP_EYEINDEX_CTRL_3.dat.value); //write addr: 0x1FC7E074 = 0x10000

	fw_RX_EYE_TOP_EYEOPENING_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEOPENING_CTRL_0);
	fw_RX_EYE_TOP_EYEOPENING_CTRL_0.hal.rg_eyecnt_hth = 0x4; 
	fw_RX_EYE_TOP_EYEOPENING_CTRL_0.hal.rg_eyecnt_vth = 0x4; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEOPENING_CTRL_0, fw_RX_EYE_TOP_EYEOPENING_CTRL_0.dat.value); //write addr: 0x1FC7E078 = 0x404

	fw_RX_EYE_TOP_EYEOPENING_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEOPENING_CTRL_1);
	fw_RX_EYE_TOP_EYEOPENING_CTRL_1.hal.rg_eo_hth = 0x4; 
	fw_RX_EYE_TOP_EYEOPENING_CTRL_1.hal.rg_eo_vth = 0x4; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYEOPENING_CTRL_1, fw_RX_EYE_TOP_EYEOPENING_CTRL_1.dat.value); //write addr: 0x1FC7E07C = 0x40004

	fw_PHY_EQ_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_1);
	fw_PHY_EQ_CTRL_1.hal.rg_heo_emphasis = 0x0; 
	fw_PHY_EQ_CTRL_1.hal.rg_a_lgain = 0x0; 
	fw_PHY_EQ_CTRL_1.hal.rg_a_mgain = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_1, fw_PHY_EQ_CTRL_1.dat.value); //write addr: 0x1FC7E11C = 0x0

	fw_PHY_EQ_CTRL_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_2);
	fw_PHY_EQ_CTRL_2.hal.rg_a_sel = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_2, fw_PHY_EQ_CTRL_2.dat.value); //write addr: 0x1FC7E120 = 0x500

	fw_PHY_EQ_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_1);
	fw_PHY_EQ_CTRL_1.hal.rg_b_zero_sel = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_1, fw_PHY_EQ_CTRL_1.dat.value); //write addr: 0x1FC7E11C = 0x0
	
}


void PCIe_eye_Cal(char lane)
{
	rg_type_t(REG_rg_force_da_pxp_tx_rate_ctrl) fw_rg_force_da_pxp_tx_rate_ctrl;
	rg_type_t(REG_rg_force_da_pxp_cdr_pr_fll_cor) fw_rg_force_da_pxp_cdr_pr_fll_cor;
	rg_type_t(REG_PHY_EQ_CTRL_0) fw_PHY_EQ_CTRL_0;
	rg_type_t(REG_SS_RX_PI_CAL) fw_SS_RX_PI_CAL;
	rg_type_t(REG_RX_RESET_0) fw_RX_RESET_0;
	rg_type_t(REG_RX_DISB_MODE_6) fw_RX_DISB_MODE_6;
	rg_type_t(REG_RX_FORCE_MODE_7) fw_RX_FORCE_MODE_7;
	rg_type_t(REG_RX_DISB_MODE_5) fw_RX_DISB_MODE_5;
	rg_type_t(REG_RX_FORCE_MODE_6) fw_RX_FORCE_MODE_6;
	rg_type_t(REG_RX_CTRL_SEQUENCE_DISB_CTRL_0) fw_RX_CTRL_SEQUENCE_DISB_CTRL_0;
	rg_type_t(REG_RX_CTRL_SEQUENCE_FORCE_CTRL_0) fw_RX_CTRL_SEQUENCE_FORCE_CTRL_0;
	rg_type_t(REG_RX_DISB_MODE_3) fw_RX_DISB_MODE_3;
	rg_type_t(REG_RX_FORCE_MODE_3) fw_RX_FORCE_MODE_3;

	fw_rg_force_da_pxp_tx_rate_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl);
	fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_cdr_pr_pieye = 0x0; 
	fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_cdr_pr_pieye = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl, fw_rg_force_da_pxp_tx_rate_ctrl.dat.value); //write addr: 0x1FC7E784 = 0x0

	fw_rg_force_da_pxp_cdr_pr_fll_cor.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_fll_cor);
	fw_rg_force_da_pxp_cdr_pr_fll_cor.hal.rg_force_da_pxp_rx_dac_eye = 0x0; 
	fw_rg_force_da_pxp_cdr_pr_fll_cor.hal.rg_force_sel_da_pxp_rx_dac_eye = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_fll_cor, fw_rg_force_da_pxp_cdr_pr_fll_cor.dat.value); //write addr: 0x1FC7E790 = 0x1000000

	fw_PHY_EQ_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_0);
	fw_PHY_EQ_CTRL_0.hal.rg_eq_en_delay = 0x80; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _PHY_EQ_CTRL_0, fw_PHY_EQ_CTRL_0.dat.value); //write addr: 0x1FC7E118 = 0xA000A80

	fw_SS_RX_PI_CAL.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_PI_CAL);
	fw_SS_RX_PI_CAL.hal.rg_kpgain = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_PI_CAL, fw_SS_RX_PI_CAL.dat.value); //write addr: 0x1FC7E15C = 0x100

	fw_RX_RESET_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_RESET_0);
	fw_RX_RESET_0.hal.rg_eq_pi_cal_rst_b = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_RESET_0, fw_RX_RESET_0.dat.value); //write addr: 0x1FC7E204 = 0x1000101

	fw_RX_DISB_MODE_6.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_6);
	fw_RX_DISB_MODE_6.hal.rg_disb_rx_and_pical_rstb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_6, fw_RX_DISB_MODE_6.dat.value); //write addr: 0x1FC7E334 = 0x1010001

	fw_RX_FORCE_MODE_7.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_7);
	fw_RX_FORCE_MODE_7.hal.rg_force_rx_and_pical_rstb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_7, fw_RX_FORCE_MODE_7.dat.value); //write addr: 0x1FC7E328 = 0x0

	fw_RX_DISB_MODE_6.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_6);
	fw_RX_DISB_MODE_6.hal.rg_disb_ref_and_pical_rstb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_6, fw_RX_DISB_MODE_6.dat.value); //write addr: 0x1FC7E334 = 0x1010000

	fw_RX_FORCE_MODE_7.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_7);
	fw_RX_FORCE_MODE_7.hal.rg_force_ref_and_pical_rstb = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_7, fw_RX_FORCE_MODE_7.dat.value); //write addr: 0x1FC7E328 = 0x0

	//fw_RX_DISB_MODE_8.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_8);
	//fw_RX_DISB_MODE_8.hal.rg_disb_eye_reset_plu_o = 0x0; 
	//Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_8, fw_RX_DISB_MODE_8.dat.value); //write addr: 0x1FC7E33C = 0x1010001

	//fw_RX_FORCE_MODE_9.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_9);
	//fw_RX_FORCE_MODE_9.hal.rg_force_eye_reset_plu_o = 0x0; 
	//Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_9, fw_RX_FORCE_MODE_9.dat.value); //write addr: 0x1FC7E330 = 0x0

	//fw_RX_DISB_MODE_8.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_8);
	//fw_RX_DISB_MODE_8.hal.rg_disb_eye_top_en = 0x0; 
	//Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_8, fw_RX_DISB_MODE_8.dat.value); //write addr: 0x1FC7E33C = 0x1000001

	//fw_RX_FORCE_MODE_9.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_9);
	//fw_RX_FORCE_MODE_9.hal.rg_force_eye_top_en = 0x0; 
	//g_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_9, fw_RX_FORCE_MODE_9.dat.value); //write addr: 0x1FC7E330 = 0x0

	fw_RX_DISB_MODE_5.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_5);
	fw_RX_DISB_MODE_5.hal.rg_disb_rx_or_pical_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_5, fw_RX_DISB_MODE_5.dat.value); //write addr: 0x1FC7E324 = 0x10101

	fw_RX_FORCE_MODE_6.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_6);
	fw_RX_FORCE_MODE_6.hal.rg_force_rx_or_pical_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_6, fw_RX_FORCE_MODE_6.dat.value); //write addr: 0x1FC7E318 = 0x0

	fw_RX_CTRL_SEQUENCE_DISB_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_DISB_CTRL_0);
	fw_RX_CTRL_SEQUENCE_DISB_CTRL_0.hal.rg_disb_rx_pical_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_DISB_CTRL_0, fw_RX_CTRL_SEQUENCE_DISB_CTRL_0.dat.value); //write addr: 0x1FC7E108 = 0x1010001

	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_0);
	fw_RX_CTRL_SEQUENCE_FORCE_CTRL_0.hal.rg_force_rx_pical_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_CTRL_SEQUENCE_FORCE_CTRL_0, fw_RX_CTRL_SEQUENCE_FORCE_CTRL_0.dat.value); //write addr: 0x1FC7E110 = 0x0

	fw_RX_RESET_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_RESET_0);
	fw_RX_RESET_0.hal.rg_eq_pi_cal_rst_b = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_RESET_0, fw_RX_RESET_0.dat.value); //write addr: 0x1FC7E204 = 0x1010101

	fw_RX_FORCE_MODE_7.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_7);
	fw_RX_FORCE_MODE_7.hal.rg_force_rx_and_pical_rstb = 0x1; 
	fw_RX_FORCE_MODE_7.hal.rg_force_ref_and_pical_rstb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_7, fw_RX_FORCE_MODE_7.dat.value); //write addr: 0x1FC7E328 = 0x101

	fw_RX_FORCE_MODE_6.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_6);
	fw_RX_FORCE_MODE_6.hal.rg_force_rx_or_pical_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_6, fw_RX_FORCE_MODE_6.dat.value); //write addr: 0x1FC7E318 = 0x100

	udelay(1000);
	fw_RX_FORCE_MODE_6.hal.rg_force_rx_or_pical_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_6, fw_RX_FORCE_MODE_6.dat.value); //write addr: 0x1FC7E318 = 0x0

	fw_RX_DISB_MODE_3.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_3);
	fw_RX_DISB_MODE_3.hal.rg_disb_eq_pi_cal_rdy = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_3, fw_RX_DISB_MODE_3.dat.value); //write addr: 0x1FC7E31C = 0x1010100

	fw_RX_FORCE_MODE_3.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_3);
	fw_RX_FORCE_MODE_3.hal.rg_force_eq_pi_cal_rdy = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_3, fw_RX_FORCE_MODE_3.dat.value); //write addr: 0x1FC7E30C = 0x1


}

void PCIe_G3_Eye_Scan(char lane, char quick_flag)
{
	u32 pical_data_out, tmp, zero_start, zero_end;
	u32 ro_dac_eye, eye_offset = 0;
	u32 lane_offset_dig;
	u32 y_cnt[130];
	u32 zero_cnt = 0;
	//u32 val;

	int EYE_X_FW, EYE_Y_FW=0;
	uint EYE_X_HW, EYE_Y_HW=0;            
	uint eyecnt = 0;
	int i,j,k,m = 0;

	int start_p = 0;//start: left move (40)
	int sweep_r = 0; //then sweep right (80)

	int Start_Point = start_p;
	int Sweep_Range = sweep_r;
	int Ovr; 	//need to modify for different RX Rate

	rg_type_t(REG_rg_force_da_pxp_cdr_pr_pieye_pwdb) fw_rg_force_da_pxp_cdr_pr_pieye_pwdb;
	rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	rg_type_t(REG_ADD_DIG_RO_RESERVE_2) fw_ADD_DIG_RO_RESERVE_2;	
	rg_type_t(REG_RX_EYE_TOP_EYECNT_CTRL_1) fw_RX_EYE_TOP_EYECNT_CTRL_1;
	rg_type_t(REG_RX_DISB_MODE_7) fw_RX_DISB_MODE_7;
	rg_type_t(REG_RX_FORCE_MODE_8) fw_RX_FORCE_MODE_8;	
	rg_type_t(REG_RX_DEBUG_0) fw_RX_DEBUG_0;
	rg_type_t(REG_ADD_RO_RX2ANA_1) fw_ADD_RO_RX2ANA_1;
	rg_type_t(REG_RX_TORGS_DEBUG_2) fw_RX_TORGS_DEBUG_2;
	//rg_type_t(REG_RGS_PXP_RX_OSCAL_FE_VOS) fw_RGS_PXP_RX_OSCAL_FE_VOS;
	//rg_type_t(REG_RGS_PXP_AEQ_SAOSC_EN) fw_RGS_PXP_AEQ_SAOSC_EN;
	//rg_type_t(REG_RGS_PXP_AEQ_E1_OS) fw_RGS_PXP_AEQ_E1_OS;
	//rg_type_t(REG_RGS_PXP_AEQ_CTLE) fw_RGS_PXP_AEQ_CTLE;
	rg_type_t(REG_rg_force_da_pxp_tx_rate_ctrl) fw_rg_force_da_pxp_tx_rate_ctrl;

	if (lane == 1)
	{

	}
	else
	{
		PCIe_G3_Rx_OS_Cal_Result(1);
		/*
		fw_RGS_PXP_RX_OSCAL_FE_VOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_RX_OSCAL_FE_VOS);
		val = fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_COMPOS; //read addr: 0x1FC7F15C [13:08]
		printk("RGS_PXP_RX_OSCAL_COMPOS : 0x%x\n", val);

		fw_RGS_PXP_RX_OSCAL_FE_VOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_RX_OSCAL_FE_VOS);
		val = fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_FE_VOS; //read addr: 0x1FC7F15C [05:00]
		printk("RGS_PXP_RX_OSCAL_FE_VOS : 0x%x\n", val);

		fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
		val = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D0_OS; //read addr: 0x1FC7F16C [14:08]
		printk("RGS_PXP_AEQ_D0_OS : 0x%x\n", val);

		fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
		val = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D1_OS; //read addr: 0x1FC7F16C [22:16]
		printk("RGS_PXP_AEQ_D1_OS : 0x%x\n", val);

		fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
		val = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_E0_OS; //read addr: 0x1FC7F16C [30:24]
		printk("RGS_PXP_AEQ_E0_OS : 0x%x\n", val);

		fw_RGS_PXP_AEQ_E1_OS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_E1_OS);
		val = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_E1_OS; //read addr: 0x1FC7F170 [06:00]
		printk("RGS_PXP_AEQ_E1_OS : 0x%x\n", val);

		fw_RGS_PXP_AEQ_E1_OS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_E1_OS);
		val = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_ERR0_OS; //read addr: 0x1FC7F170 [22:16]
		printk("RGS_PXP_AEQ_ERR0_OS : 0x%x\n", val);

		fw_RGS_PXP_AEQ_CTLE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_CTLE);
		val = fw_RGS_PXP_AEQ_CTLE.hal.RGS_PXP_AEQ_CTLE; //read addr: 0x1FC7F168 [04:00]
		printk("RGS_PXP_AEQ_CTLE : 0x%x\n", val);
		*/
		
		lane_offset_dig = 0;
		//Reg_R_then_W(0x1fa5b360, 0x5, 20, 16);
		fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);		
		tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
		tmp = (0x5<<16) | (tmp & (~(0x1F<<16)));		
		fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0= tmp;
		Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[20:16] = 0x5

	}

	//Reg_R_then_W( 0x1fa5b360, 0x5, 20, 16);
	//tmp = Reg_R( 0x1fa5b000, 0, 0x380) & 0x3;
	fw_ADD_DIG_RO_RESERVE_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);
	tmp = fw_ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 & 0x3; //read addr: 0x1FC7E380 [31:00]

	switch (tmp)
	{
		case 0:	//8G
			Ovr = 1;
			//Reg_R_then_W( 0x1fa5b360, 0x0, 10, 8);
			tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
			tmp = (0x0<<8) | (tmp & (~(0x7<<8)));		
			fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
			Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[10:8] = 0x0			
			break;
			
		case 1:	//5G
			Ovr = 2;	
			//Reg_R_then_W( 0x1fa5b360, 0x3, 10, 8);
			tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
			tmp = (0x3<<8) | (tmp & (~(0x7<<8)));		
			fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
			Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[10:8] = 0x3						
			break;
			
		case 2:	//2.5G
			Ovr = 4;		
			//Reg_R_then_W( 0x1fa5b360, 0x3, 10, 8);
			tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
			tmp = (0x3<<8) | (tmp & (~(0x7<<8)));		
			fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
			Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[10:8] = 0x3			
			break;
			
		default :
			
			break;
	}

	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb);
	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_da_pxp_cdr_pr_pieye_pwdb = 0x1; 
	fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.hal.rg_force_sel_da_pxp_cdr_pr_pieye_pwdb = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_cdr_pr_pieye_pwdb, fw_rg_force_da_pxp_cdr_pr_pieye_pwdb.dat.value); //write addr: 0x1FC7E824 = 0x101

	PCIe_eye_setting(lane);

	fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_init_b = 0x0; 
	fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_force_eyedur_init_b = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); //write addr: 0x1FC7E084 = 0x1

	fw_RX_DISB_MODE_7.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_7);
	fw_RX_DISB_MODE_7.hal.rg_disb_eyecnt_rx_rst_b = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DISB_MODE_7, fw_RX_DISB_MODE_7.dat.value); //write addr: 0x1FC7E338 = 0x10101

	fw_RX_FORCE_MODE_8.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_8);
	fw_RX_FORCE_MODE_8.hal.rg_force_eyecnt_rx_rst_b = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_FORCE_MODE_8, fw_RX_FORCE_MODE_8.dat.value); //write addr: 0x1FC7E32C = 0x0

	fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_init_b = 0x1; 
	fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_force_eyedur_init_b = 0x1; 
	fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); //write addr: 0x1FC7E084 = 0x1000101
		
	PCIe_eye_Cal(lane);
					   

	fw_RX_DEBUG_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0);
	fw_RX_DEBUG_0.hal.rg_ro_toggle = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_RX_DEBUG_0.dat.value); //write addr: 0x1FC7E20C = 0xFFFF

	udelay(100);
	fw_RX_DEBUG_0.hal.rg_ro_toggle = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_RX_DEBUG_0.dat.value); //write addr: 0x1FC7E20C = 0x100FFFF

	fw_ADD_RO_RX2ANA_1.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_RO_RX2ANA_1);
	ro_dac_eye = fw_ADD_RO_RX2ANA_1.hal.ro_rx_dac_eye; //excel 69 read addr: 0x1FC7E424 [06:00]
	printk("ro_rx_dac_eye : 0x%x\n", ro_dac_eye);

	fw_RX_TORGS_DEBUG_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _RX_TORGS_DEBUG_2);
	pical_data_out = fw_RX_TORGS_DEBUG_2.hal.ro_pi_cal_data_out; //excel 70 read addr: 0x1FC7E23C [22:16]
	printk("ro_pi_cal_data_out : 0x%x\n", pical_data_out);


	 fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_init_b = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); // write addr: 0x1FC7E084 = 0x1
	
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1);
	 fw_RX_EYE_TOP_EYECNT_CTRL_1.hal.rg_disb_eyedur_en = 0x0; 
	 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_EYE_TOP_EYECNT_CTRL_1, fw_RX_EYE_TOP_EYECNT_CTRL_1.dat.value); // write addr: 0x1FC7E084 = 0x0

	printk("data start\n");	

	EYE_X_HW = pical_data_out;
	EYE_X_FW = EYE_X_HW;

	if(quick_flag == 0)
	{

		Start_Point = 50;//start: left move 50
		Sweep_Range = 130; //then sweep right 130

		ro_dac_eye = eye_offset + ro_dac_eye;		
		//EYE_X_HW = 0;
	    	EYE_Y_HW = eye_offset + ro_dac_eye;

		//EYE_Y_HW = 64;	
		EYE_Y_HW = 64 + ro_dac_eye;	
		EYE_Y_FW = -64; 

		//printk("Yoffset = %d \n", ro_dac_eye);
		//printk("pical_data_out = %d \n", pical_data_out);		 
					   	
		for (i = 0; i < Start_Point*Ovr; i++){

			 fw_rg_force_da_pxp_tx_rate_ctrl.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl);
			 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_cdr_pr_pieye = EYE_X_HW; //X_start=pical_data_out
			 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_cdr_pr_pieye = 0x1; 
			 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl, fw_rg_force_da_pxp_tx_rate_ctrl.dat.value); // write addr: 0x1FC7E784 = 0x1000000

			EYE_X_HW--;
			EYE_X_FW--;				
		}	
		
		//snack sequence sweep full eye scan																							  
		for (k = 0; k < (Sweep_Range/2) ; k++)																							  
		{	
			for (i = 0; i < 65; i++)																									  
			{																															  		
				eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW, lane);
				//printk("%d	%d %d \n", eyecnt, EYE_X_FW, EYE_Y_FW);
				printk("%07d ", eyecnt);
				m++;
				if((m%16)==0)
				 	printk("z\n");
					 	  
				EYE_Y_HW++; 																											  
				EYE_Y_FW++; 																											  
			}																															  
			EYE_Y_HW = 1;																												  
			EYE_Y_FW = 1;

			//ssleep(1);
																																			  
			for (j = 0; j < 63; j++)																									  
			{																															  
				eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW, lane);																				  
				//printk("%d	%d %d \n", eyecnt, EYE_X_FW, EYE_Y_FW);	  
				printk("%07d ", eyecnt);	
				m++;
				if((m%16)==0)
				 	printk("z\n");
				
				EYE_Y_HW++; 																											  
				EYE_Y_FW++; 																											  
			}			

			//ssleep(1); 
			printk("EYE_X_HW=%x\n",EYE_X_HW );	
			msleep(100);
			
			EYE_X_HW = PCIe_eyescan_moveX(EYE_X_FW, EYE_Y_FW, Ovr, lane);																					  
			EYE_X_FW = EYE_X_FW + Ovr;																									  
																																		  
			EYE_Y_HW--; 																												  
			EYE_Y_FW--; 																												  
																																		  
			for (j = 0; j < 63; j++)																									  
			{																															  
				eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW, lane);
				y_cnt[EYE_Y_HW] = eyecnt;
				//printk("%d	%d %d \n", eyecnt, EYE_X_FW, EYE_Y_FW);	 	  
				EYE_Y_HW--; 																											  
				EYE_Y_FW--; 																											  
			}																															  
			EYE_Y_HW = 128; 																											  
			EYE_Y_FW = 0;

			//ssleep(1);
																																		  
			for (i = 0; i < 65; i++)																									  
			{																															  
				eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW, lane);	
				y_cnt[EYE_Y_HW%128] = eyecnt;
				//printk("%d	%d %d \n", eyecnt, EYE_X_FW, EYE_Y_FW);	  	  
				EYE_Y_HW--; 																											  
				EYE_Y_FW--; 																											  
			}	

			for (i = 64; i < (64+128); i++)																									  
			{
				printk("%07d ", y_cnt[i%128] );
				m++;
				if((m%16)==0)
				 	printk("z\n");
			}		
			m = 0;

			printk("EYE_X_HW=%x\n",EYE_X_HW );	
			msleep(100);
			
			EYE_X_HW = PCIe_eyescan_moveX(EYE_X_FW, EYE_Y_FW, Ovr, lane);																					  
			EYE_X_FW = EYE_X_FW + Ovr;																									  
																																		  
			EYE_Y_HW++; 																												  
			EYE_Y_FW++; 		
			
		}																																  
																																		  
		//last time bottom-up sweep Y index 																							  
		for (i = 0; i < 65; i++)																										  
		{																																  
			eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW, lane);																				  
			//printk("%d	%d %d \n", eyecnt, EYE_X_FW, EYE_Y_FW);	 				  
			printk("%07d ", eyecnt);
			m++;
			if((m%16)==0)
			 	printk("z\n");
			
			EYE_Y_HW++; 																												  
			EYE_Y_FW++; 																												  
		}			
		EYE_Y_HW = 1;																													  
		EYE_Y_FW = 1;																													  
		for (j = 0; j < 63; j++)																										  
		{																																  
			eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW, lane);																				  
			//printk("%d	%d %d \n", eyecnt, EYE_X_FW, EYE_Y_FW);	 	
			printk("%07d ", eyecnt);
			m++;
			if((m%16)==0)
			 	printk("z\n");
			
			EYE_Y_HW++; 																												  
			EYE_Y_FW++; 																												  
		}

		printk("EYE_X_HW=%x\n",EYE_X_HW );	
	}else //==========================Quick eye scan
	{
		start_p = 45;//start: left move 40
		sweep_r = 95; //then sweep right 90

		printk("scan Y\n");	
		zero_start = 64; //count eye Y center point
		zero_end = 64;

		for (EYE_Y_HW = 64; EYE_Y_HW< (64+128); EYE_Y_HW++)																									  
		{																															  
			eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, EYE_Y_HW&0x7f,  lane);		
			if(eyecnt == 0)
			{
				if(zero_cnt == 0) //first time cnt=0, record Y 
					zero_start = EYE_Y_HW;

				if(EYE_Y_HW == (63+128)) //when offset error, zero area not apear at center
					zero_end = 63+128;
				
				zero_cnt++;
				
			}else if((zero_start >64)&&(zero_end == 64)) //after cnt=0, first time cnt !=0, record Y 
			{
				zero_end = EYE_Y_HW;
				//printk("zero_end:%d",zero_end);
			}
			
			printk("%x ", (eyecnt!=0));	
			 																														  
		}

		printk("\neye Height = %d \nscan X\n", zero_cnt);
		
		ro_dac_eye = (zero_start + zero_end)>>1 ; //get middle of eye center point of Y

		//printk("zero_start:%d, zero_end: %d, ro_dac_eye : %d\n",zero_start, zero_end, ro_dac_eye);

		zero_cnt = 0;

		//move X 
		for (i = 0; i < start_p*Ovr; i++){
		
			 fw_rg_force_da_pxp_tx_rate_ctrl.dat.value = Reg_R( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl);
			 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_da_pxp_cdr_pr_pieye = EYE_X_HW; //X_start=pical_data_out
			 fw_rg_force_da_pxp_tx_rate_ctrl.hal.rg_force_sel_da_pxp_cdr_pr_pieye = 0x1; 
			 Reg_W( PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rate_ctrl, fw_rg_force_da_pxp_tx_rate_ctrl.dat.value); // write addr: 0x1FC7E784 = 0x1000000

			EYE_X_HW--;
			EYE_X_FW--;
				
		}	
		
		for (k = 0; k< sweep_r; k++)																									  
		{																															  
			eyecnt =PCIe_eyescan_countPoint(EYE_X_HW, ro_dac_eye&0x7f,  lane);		
			EYE_X_HW = PCIe_eyescan_moveX(EYE_X_FW, EYE_Y_FW, Ovr, lane);																					  
			EYE_X_FW = EYE_X_FW + Ovr;		
			
			if(eyecnt == 0)
				zero_cnt++;
	
			printk("%x ", (eyecnt!=0));																														  
		}

		printk("\neye Width = %d \n", zero_cnt);
			
	}

}



void PCIe_G3_Wait_Debug_Condition(void)
{
	//u32  best_peaking_ctrl, best_heo, x_range,pi_os, aeq_ctle;
	//int x, y,flag;
	u32 tmp;	
	rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	rg_type_t(REG_ADD_DIG_RO_RESERVE_2) fw_ADD_DIG_RO_RESERVE_2;
		
#if 1 //AEQ done
	AEQ_cnt = 0;
	//Reg_W(0x1fa5b000, 0, 0x360, 0x70000);
	fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x7<<16) | (tmp & (~(0x1F<<16)));		
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[20:16] = 7

	fw_ADD_DIG_RO_RESERVE_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);
	tmp = fw_ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2; //read addr: 0x1FC7E380 [31:00]

	while((((Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2) >> 8) & 0x1) != 0 ) && (AEQ_cnt < M_CNT)){AEQ_cnt++;}  //wait AEQ reset
	AEQ_cnt = 0;
	while((((Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2) >> 8) & 0x1) == 0 ) && (AEQ_cnt < M_CNT)){AEQ_cnt++;}   //wait AEQ_done
	
	while((((Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2) >> 2) & 0x1) != 0 ) && (AEQ_cnt < M_CNT)){AEQ_cnt++;}  //after enter speed, wait lck2data	

#endif

}

void Get_PCIe_Debug_Selector(u32 port) 
{
	rg_type_t(REG_ADD_DIG_RESERVE_27) fw_ADD_DIG_RESERVE_27;
	
	switch(port)
	{
		case 0:	
#ifdef IS_FPGA
	debug_selector = 0x110658; //test GDMP_Config and LTSSM_mon
#else
	//get debug selector
	fw_ADD_DIG_RESERVE_27.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RESERVE_27);
	debug_selector = fw_ADD_DIG_RESERVE_27.hal.rg_dig_reserve_27; //read addr: 0x1FC7E908 [31:00]
#endif	
			fw_ADD_DIG_RESERVE_27.dat.value = 0x110648; //write back to default value
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_ADD_DIG_RESERVE_27.dat.value); 
			break;			
		case 1:
			//only one time in port0
			break;
	}
}
EXPORT_SYMBOL(Get_PCIe_Debug_Selector);



bool PCIe_EYE_SCAN_ON(u32 port)
{

	if (port == 0)
	{
		if ((debug_selector & PXP_EYE_SCAN_MASK) == PXP_EYE_SCAN_MASK)
			return 1;
		else
			return 0;
	}else
	{
		if ((debug_selector & QP_EYE_SCAN_MASK) == QP_EYE_SCAN_MASK)
			return 1;
		else
			return 0;		
	}
}	

bool PCIe_GDMP_Config(u32 port)
{
	u32 tmp;
	//void * virtAddr;
	tmp = (debug_selector & GDMP_MASK) >> GDMP_SHIFT;

	switch(tmp)
	{
		case 0:
			return 0;
			break;
			
		case 1:
			if(port == 0)
			{
			regWrite_PCIe(0x1fb00080, 0x6400d);
			regWrite_PCIe(0x1fc28070, 0x1f);
			regWrite_PCIe(0x1fc20168, 0x32230100);
			regWrite_PCIe(0x1fc20164, 0x4280811a);
				//gdmp cfg				
				gdump_7583_pcie_debug(1); 
			}

			break;
		case 2:
			//mac 1 marked, 1fa9xxxx and 1fa92xxx not yet registered in dts file
			//regWrite_PCIe(0x1fa90070, 0xf);
			//regWrite_PCIe(0x1fa92518, 0x1030303);
			//regWrite_PCIe(0x1fa9251c, 0x434200);
			//virtAddr = ioremap ((phys_addr_t)0x1fa90070,4);
			//writel(0xf ,virtAddr);
			//virtAddr = ioremap ((phys_addr_t)0x1fa92518,4);
			//writel(0x1030303 ,virtAddr);
			//virtAddr = ioremap ((phys_addr_t)0x1fa9251c,4);
			//writel(0x434200 ,virtAddr);
			break;
			
		default:
			break;			
	}
	
				
	return 1;
}
EXPORT_SYMBOL(PCIe_GDMP_Config);


bool PCIe_LTSSM_Print_On()
{
	if ((debug_selector & LTSSM_PRINT_MASK) == LTSSM_PRINT_MASK)
		return 1;
	else
		return 0;		
}

void PCIe_G3_Rx_OS_Cal_Result(bool print_flag )
{

	rg_type_t(REG_rg_force_da_pxp_rx_fe_gain_ctrl) fw_rg_force_da_pxp_rx_fe_gain_ctrl;
	rg_type_t(REG_RGS_PXP_RX_OSCAL_FE_VOS) fw_RGS_PXP_RX_OSCAL_FE_VOS;
	rg_type_t(REG_RGS_PXP_AEQ_SAOSC_EN) fw_RGS_PXP_AEQ_SAOSC_EN;
	rg_type_t(REG_RGS_PXP_AEQ_E1_OS) fw_RGS_PXP_AEQ_E1_OS;
	rg_type_t(REG_RGS_PXP_AEQ_CTLE) fw_RGS_PXP_AEQ_CTLE;


	//*******   RX check parameter

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl);
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_sel_da_pxp_rx_sigdet_os = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl, fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value); //write addr: 0x1FC7E88C = 0x1000103
	
	fw_RGS_PXP_RX_OSCAL_FE_VOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_RX_OSCAL_FE_VOS);
	OSCAL_COMPOS = fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_COMPOS; //read addr: 0x1FC7F15C [13:08]

	//fw_RGS_PXP_RX_OSCAL_FE_VOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_RX_OSCAL_FE_VOS);
	FE_VOS = fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_FE_VOS; //read addr: 0x1FC7F15C [05:00]

	fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
	AEQ0_D0_OS = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D0_OS; //read addr: 0x1FC7F16C [14:08]

	//fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
	AEQ0_D1_OS = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D1_OS; //read addr: 0x1FC7F16C [22:16]

	//fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
	AEQ0_E0_OS = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_E0_OS; //read addr: 0x1FC7F16C [30:24]

	fw_RGS_PXP_AEQ_E1_OS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_E1_OS);
	AEQ0_E1_OS = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_E1_OS; //read addr: 0x1FC7F170 [06:00]

	//fw_RGS_PXP_AEQ_E1_OS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_E1_OS);
	AEQ0_ERR0_OS = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_ERR0_OS; //read addr: 0x1FC7F170 [22:16]
	AEQ0_ERR1_OS = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_ERR1_OS; //read addr: 0x1FC7F170 [30:24]

	fw_RGS_PXP_AEQ_CTLE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_CTLE);
	AEQ0_CTLE = fw_RGS_PXP_AEQ_CTLE.hal.RGS_PXP_AEQ_CTLE; //read addr: 0x1FC7F168 [04:00]

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _rg_force_da_pxp_rx_fe_gain_ctrl);
	sigdet_os = fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_da_pxp_rx_sigdet_os; //read addr: 0x1FC7E88C [20:16]

	if(print_flag)
	{
		printk("RGS_PXP_RX0_OSCAL_COMPOS : 0x%x\n", OSCAL_COMPOS);
		printk("RGS_PXP_RX0_OSCAL_FE_VOS : 0x%x\n", FE_VOS);
		printk("RGS_PXP_AEQ0_D0_OS : 0x%x\n", AEQ0_D0_OS);
		printk("RGS_PXP_AEQ0_D1_OS : 0x%x\n", AEQ0_D1_OS);
		printk("RGS_PXP_AEQ0_E0_OS : 0x%x\n", AEQ0_E0_OS);
		printk("RGS_PXP_AEQ0_E1_OS : 0x%x\n", AEQ0_E1_OS);
		printk("RGS_PXP_AEQ0_ERR0_OS : 0x%x\n", AEQ0_ERR0_OS);
		printk("RGS_PXP_AEQ0_ERR1_OS : 0x%x\n", AEQ0_ERR1_OS);
		printk("RGS_PXP_AEQ0_CTLE : 0x%x\n", AEQ0_CTLE);
		printk("rg_force_da_pxp_rx_sigdet_os : 0x%x\n", sigdet_os);		
	}
	
}

void PCIe_G3_Rx_FLL_Monitor(void)
{	
	u32 fll_probe, fll_probe_last, monitor_cnt;

	transition_cnt = 0, monitor_cnt = 0;

	//*******   RX check parameter
	//PCIe_G3_Rx_OS_Cal_Result(0); //0: no print

 
	//*******  monitor FLL
	while(monitor_cnt <  M_CNT) // monitor about 50ms, every read/write action in while loop affact 1 tick time.
	{
		fll_probe = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_5);
		
		if((fll_probe != fll_probe_last) && (transition_cnt < STATE_LEN))
		{
			fll_probe_array [transition_cnt] = fll_probe;
			time [transition_cnt] = monitor_cnt;
			transition_cnt++;
		}
		fll_probe_last = fll_probe;
		monitor_cnt++;		
		udelay(1);
	}


}

void PCIe_G3_Rx_FLL_Print(void)
{
	rg_type_t(REG_ADD_DIG_RO_RESERVE_5) fw_ADD_DIG_RO_RESERVE_5;
	u32 tmp,x;
	tmp = 0;
	/*
	//printk("wait AEQ done cnt : %x\n", AEQ_cnt);
	printk("RGS_PXP_RX0_OSCAL_COMPOS : %x\n", OSCAL_COMPOS);
	printk("RGS_PXP_RX0_OSCAL_FE_VOS : %x\n", FE_VOS);
	printk("RGS_PXP_AEQ0_D0_OS : %x\n", AEQ0_D0_OS);
	printk("RGS_PXP_AEQ0_D1_OS : %x\n", AEQ0_D1_OS);
	printk("RGS_PXP_AEQ0_E0_OS : %x\n", AEQ0_E0_OS);
	printk("RGS_PXP_AEQ0_E1_OS : %x\n", AEQ0_E1_OS);
	printk("RGS_PXP_AEQ0_ERR0_OS : %x\n", AEQ0_ERR0_OS);
	printk("RGS_PXP_AEQ0_CTLE : %x\n", AEQ0_CTLE);
	printk("rg_force_da_pxp_rx_sigdet_os : %x\n", sigdet_os);
	*/
	fw_ADD_DIG_RO_RESERVE_5.dat.value = fll_probe_array[0];
	printk("fll_kband : 0x%x \n", (fw_ADD_DIG_RO_RESERVE_5.hal.ro_dig_reserve_5>>0) & 0x7FF);//read addr: 0x1FC7E8C4 [10:00]
	
	for(x=0; x < transition_cnt; x++)
	{
		fw_ADD_DIG_RO_RESERVE_5.dat.value = fll_probe_array[x];
		printk("after %05d us, Rx_fll_idac = 0x%03x \n", time[x], (fw_ADD_DIG_RO_RESERVE_5.hal.ro_dig_reserve_5>>16) & 0x7FF);	
	}
	
}

void PCIe_G3_Common_Debug(void)
{
	rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	rg_type_t(REG_RGS_PXP_JCPLL_KBAND_CODE) fw_RGS_PXP_JCPLL_KBAND_CODE;
	rg_type_t(REG_RGS_PXP_TXPLL_KBAND_CODE) fw_RGS_PXP_TXPLL_KBAND_CODE;
	rg_type_t(REG_RGS_PXP_RX_OSCAL_FE_VOS) fw_RGS_PXP_RX_OSCAL_FE_VOS;
	rg_type_t(REG_RGS_PXP_AEQ_SAOSC_EN) fw_RGS_PXP_AEQ_SAOSC_EN;
	rg_type_t(REG_RGS_PXP_AEQ_E1_OS) fw_RGS_PXP_AEQ_E1_OS;
	rg_type_t(REG_RGS_PXP_AEQ_CTLE) fw_RGS_PXP_AEQ_CTLE;
	rg_type_t(REG_rg_force_da_pxp_rx_fe_gain_ctrl) fw_rg_force_da_pxp_rx_fe_gain_ctrl;
	rg_type_t(REG_ADD_DIG_RESERVE_27) fw_ADD_DIG_RESERVE_27;
	rg_type_t(REG_ADD_DIG_RO_RESERVE_5) fw_ADD_DIG_RO_RESERVE_5;
	rg_type_t(REG_RX_DEBUG_0) fw_RX_DEBUG_0;
	rg_type_t(REG_SS_RX_FLL_6) fw_SS_RX_FLL_6;
	//rg_type_t(REG_SS_RX_FLL_9) fw_SS_RX_FLL_9;
	//rg_type_t(REG_SS_RX_FLL_a) fw_SS_RX_FLL_a;
	rg_type_t(REG_RX_TORGS_DEBUG_12) fw_RX_TORGS_DEBUG_12;
	rg_type_t(pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_CC) fw_PEXTP_DIG_LN_TRX_CC;
	rg_type_t(REG_RG_PXP_CMN_EN) fw_RG_PXP_CMN_EN;
	rg_type_t(REG_rg_force_da_pxp_tx_term_sel) fw_rg_force_da_pxp_tx_term_sel;
	rg_type_t(REG_RG_PXP_RX_SIGDET_NOVTH) fw_RG_PXP_RX_SIGDET_NOVTH;
	
	u32 tmp, PIPE_rx_data;
	u32 ro_pll_probe1, ro_rx_probe0, ro_rx_probe3, ro_rx_probe7, ro_tx_probe1, ro_tx_probe0, ro_rx_probe4, ro_rx_probe5, ro_probe13, ro_probe18, ro_probe14, ro_probe15;

//*******  Load Efuse checking

	fw_RG_PXP_CMN_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_CMN_EN);
	fw_rg_force_da_pxp_tx_term_sel.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_term_sel);
	fw_RG_PXP_RX_SIGDET_NOVTH.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_RX_SIGDET_NOVTH);

//*******  PLL K done & Kband_code

	fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x9<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[20:16] = 0x9
	ro_pll_probe1 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


	fw_RGS_PXP_JCPLL_KBAND_CODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_JCPLL_KBAND_CODE);
	//val = fw_RGS_PXP_JCPLL_KBAND_CODE.hal.RGS_PXP_JCPLL_KBAND_CODE; //read addr: 0x1FC7F0AC [7:0]

	fw_RGS_PXP_TXPLL_KBAND_CODE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_TXPLL_KBAND_CODE);
	//val = fw_RGS_PXP_TXPLL_KBAND_CODE.hal.RGS_PXP_TXPLL_KBAND_CODE; //read addr: 0x1FC7F0B0 [7:0]

//*******  RX CDR flow
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x0<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x0
	ro_rx_probe0 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


//*******  RX OS cal flow
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x3<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x30000
	ro_rx_probe3 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


//*******  RX AEQ flow
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x7<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x70000
	ro_rx_probe7 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


//*******  RX OS & AEQ K val
	fw_RGS_PXP_RX_OSCAL_FE_VOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_RX_OSCAL_FE_VOS);
	//val = fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_COMPOS; //read addr: 0x1FC7F15C [13:8]

	//fw_RGS_PXP_RX_OSCAL_FE_VOS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_RX_OSCAL_FE_VOS);
	//val = fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_FE_VOS; //read addr: 0x1FC7F15C [5:0]

	fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
	//val = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D0_OS; //read addr: 0x1FC7F16C [14:8]

	//fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
	//val = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D1_OS; //read addr: 0x1FC7F16C [22:16]

	//fw_RGS_PXP_AEQ_SAOSC_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_SAOSC_EN);
	//val = fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_E0_OS; //read addr: 0x1FC7F16C [30:24]

	fw_RGS_PXP_AEQ_E1_OS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_E1_OS);
	//val = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_E1_OS; //read addr: 0x1FC7F170 [06:00]

	//fw_RGS_PXP_AEQ_E1_OS.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_E1_OS);
	//val = fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_ERR0_OS; //read addr: 0x1FC7F170 [22:16]

	fw_RGS_PXP_AEQ_CTLE.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET,  _RGS_PXP_AEQ_CTLE);
	//val = fw_RGS_PXP_AEQ_CTLE.hal.RGS_PXP_AEQ_CTLE; //read addr: 0x1FC7F168 [04:00]

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl);
	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_sel_da_pxp_rx_sigdet_os = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl, fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value); //write addr: 0x1FC7E88C = 0x1000000

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _rg_force_da_pxp_rx_fe_gain_ctrl);
	//val = fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_da_pxp_rx_sigdet_os; //read addr: 0x1FC7E88C [20:16]

	fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_sel_da_pxp_rx_sigdet_os = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_rx_fe_gain_ctrl, fw_rg_force_da_pxp_rx_fe_gain_ctrl.dat.value); //write addr: 0x1FC7E88C = 0x1000000



//*******  CDR FLL status & K_band
	fw_ADD_DIG_RESERVE_27.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RESERVE_27);
	//val = (fw_ADD_DIG_RESERVE_27.hal.rg_dig_reserve_27>>16) & 0x1; //read addr: 0x1FC7E908 [16:16]

	fw_ADD_DIG_RO_RESERVE_5.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_5);
	//val = (fw_ADD_DIG_RO_RESERVE_5.hal.ro_dig_reserve_5>>0) & 0x7FF; //read addr: 0x1FC7E8C4 [10:00]

	//fw_ADD_DIG_RO_RESERVE_5.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_5);
	//val = (fw_ADD_DIG_RO_RESERVE_5.hal.ro_dig_reserve_5>>16) & 0x7FF; //read addr: 0x1FC7E8C4 [26:16]

	fw_RX_DEBUG_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0);
	fw_RX_DEBUG_0.hal.rg_ro_toggle = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_RX_DEBUG_0.dat.value); //write addr: 0x1FC7E20C = 0xFFFF
	udelay(100);
	
	fw_RX_DEBUG_0.hal.rg_ro_toggle = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _RX_DEBUG_0, fw_RX_DEBUG_0.dat.value); //write addr: 0x1FC7E20C = 0x100FFFF

	fw_SS_RX_FLL_6.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_6);
	fw_SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_3_latch_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_6, fw_SS_RX_FLL_6.dat.value); //write addr: 0x1FC7E188 = 0x10000
	udelay(100);

	fw_SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_3_latch_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _SS_RX_FLL_6, fw_SS_RX_FLL_6.dat.value); //write addr: 0x1FC7E188 = 0x0
/*
	fw_SS_RX_FLL_9.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _SS_RX_FLL_9);
	val = fw_SS_RX_FLL_9.hal.ro_fll_idac; //read addr: 0x1FC7E194 [10:0]
	printk("ro_fll_idac : 0x%x \n", val);

	fw_SS_RX_FLL_9.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _SS_RX_FLL_9);
	val = fw_SS_RX_FLL_9.hal.ro_idacf; //read addr: 0x1FC7E194 [26:16]
	printk("ro_idacf : 0x%x \n", val);

	fw_SS_RX_FLL_a.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _SS_RX_FLL_a);
	val = fw_SS_RX_FLL_a.hal.ro_da_idac; //read addr: 0x1FC7E198 [10:0]
	printk("ro_da_idac : 0x%x \n", val);
*/
	fw_RX_TORGS_DEBUG_12.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _RX_TORGS_DEBUG_12);
	//val = fw_RX_TORGS_DEBUG_12.hal.ro_kband_done; //read addr: 0x1FC7E54C [24:24]

	fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x1<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x10000
	ro_tx_probe1 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


//*******  TX enable
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0xB<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0xB0000
	ro_tx_probe0 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


//*******  RX data
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x4<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x40000
	ro_rx_probe4 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);

	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x5<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x50000
	ro_rx_probe5 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);

	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0xD<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0xD0000
	ro_probe13 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);

	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x12<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0x120000
	ro_probe18 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);


//*******  PIPE
	if(((regRead_PCIe(0x1FB00834) >> 26) & 0x1) == 0)
	{
	//fw_PEXTP_DIG_LN_TRX_CC.dat.value = Reg_R(PXP_DIG_TRX_BASE, PXP_DIG_TRX_OFFSET,  _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_CC);
	fw_PEXTP_DIG_LN_TRX_CC.dat.value = regRead_PCIe(0x1FC330CC);
	//val = fw_PEXTP_DIG_LN_TRX_CC.hal.rgs_xtp_ln_pipe_rx_elec_idle; //read addr: 0x1FC330CC [14:14]
	//printk("rgs_xtp_ln_pipe_rx_elec_idle (1FC330CC[14:14]) : 0x%x \n", val);

	//fw_PEXTP_DIG_LN_TRX_CC.dat.value = Reg_R(PXP_DIG_TRX_BASE, PXP_DIG_TRX_OFFSET,  _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_CC);
		//val = fw_PEXTP_DIG_LN_TRX_CC.hal.rgs_xtp_ln_pipe_rx_status; //read addr: 0x1FC330CC [18:16]

	//fw_PEXTP_DIG_LN_TRX_CC.dat.value = Reg_R(PXP_DIG_TRX_BASE, PXP_DIG_TRX_OFFSET,  _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_CC);
		//val = fw_PEXTP_DIG_LN_TRX_CC.hal.rgs_xtp_ln_pipe_rx_valid; //read addr: 0x1FC330CC [19:19]

	//Debug_en = 0x1;
	regWrite_PCIe(0x1FC20168, 0x100);	//write addr: 0x1FC20168 = 0x100

	//read PCIE_debug_monitor	
		PIPE_rx_data = regRead_PCIe(0x1FC2002C);
	}else
	{
		fw_PEXTP_DIG_LN_TRX_CC.dat.value = 0xdeadbeef;
		PIPE_rx_data = 0xdeadbeef;
	}

//*******  traffic
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0xE<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0xE0000
	ro_probe14 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);

	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0xF<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360 = 0xD0000
	ro_probe15 = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);

//print
	
	printk("*******  Load Efuse checking\n");
	printk("PXP_CMN_TRIM : 0x%x \n", fw_RG_PXP_CMN_EN.hal.RG_PXP_CMN_TRIM);//read addr: 0x1FC7F000[28:24]
	printk("tx_term : 0x%x \n", fw_rg_force_da_pxp_tx_term_sel.hal.rg_force_da_pxp_tx_term_sel);//read addr: 0x1FC7E77C[2:0]
	printk("RX_FE_50OHMS : 0x%x \n", fw_RG_PXP_RX_SIGDET_NOVTH.hal.RG_PXP_RX_FE_50OHMS_SEL);//read addr: 0x1FC7F114[25:24]

	printk("*******  PLL K done & Kband_code\n");
	//read addr: 0x1FC7E380 [2:2]
	if(((ro_pll_probe1>>2) & 0x1) != 0x1)
		printk("ad_pxp_jcpll_kband_cplt_scan : 0x%x **\n", (ro_pll_probe1>>2) & 0x1);

	//read addr: 0x1FC7E380 [3:3]
	if(((ro_pll_probe1>>3) & 0x1) != 0x1)
		printk("ad_pxp_txpll_kband_cplt_scan : 0x%x  **\n", (ro_pll_probe1>>3) & 0x1);

	//read addr: 0x1FC7E380 [11:4]
	printk("rgs_pxp_jcpll_kband_code_scan : 0x%x \n", (ro_pll_probe1>>4) & 0xff);
	//read addr: 0x1FC7E380 [19:12]
	printk("rgs_pxp_txpll_kband_code_scan : 0x%x \n", (ro_pll_probe1>>12) & 0xff);
	printk("RGS_PXP_JCPLL_KBAND_CODE : 0x%x \n", fw_RGS_PXP_JCPLL_KBAND_CODE.hal.RGS_PXP_JCPLL_KBAND_CODE);//read addr: 0x1FC7F0AC [7:0]
	printk("RGS_PXP_TXPLL_KBAND_CODE : 0x%x \n", fw_RGS_PXP_TXPLL_KBAND_CODE.hal.RGS_PXP_TXPLL_KBAND_CODE);//read addr: 0x1FC7F0B0 [7:0]

	printk("*******  RX CDR flow\n");
	//read addr: 0x1FC7E380 [00:00]
	if(((ro_rx_probe0>>0) & 0x1) != 0x1)
		printk("ad_pxp_cdr_pd_pical_dir_scan : 0x%x  *\n", (ro_rx_probe0>>0) & 0x1);

	//read addr: 0x1FC7E380 [01:01]
	if(((ro_rx_probe0>>1) & 0x1) != 0x1)
		printk("ad_pxp_cdr_lpf_rstb : 0x%x  **\n", (ro_rx_probe0>>1) & 0x1);

	//read addr: 0x1FC7E380 [02:02]
	if(((ro_rx_probe0>>2) & 0x1) != 0x1)
		printk("ad_pxp_cdr_lpf_lck2data : 0x%x  **\n", (ro_rx_probe0>>2) & 0x1);

	printk("*******  RX OS cal flow\n");
	//read addr: 0x1FC7E380 [07:00]
	printk("ad_pxp_rx_dbg : 0x%x \n", (ro_rx_probe3>>0) & 0xff);
	//read addr: 0x1FC7E380 [08:08]
	if(((ro_rx_probe3>>8) & 0x1) != 0x1)
		printk("ad_pxp_rx_sigdet_out : 0x%x , Rx not detect signal input **\n", (ro_rx_probe3>>8) & 0x1);

	//read addr: 0x1FC7E380 [13:09]
	printk("ad_pxp_rx_sigdet_os : 0x%x \n", (ro_rx_probe3>>9) & 0x1f);
	//read addr: 0x1FC7E380 [15:15]
	if(((ro_rx_probe3>>15) & 0x1) != 0x1)
		printk("ad_pxp_rx_sigdet_cal_dir : 0x%x  *\n", (ro_rx_probe3>>15) & 0x1);

	//read addr: 0x1FC7E380 [20:20]
	if(((ro_rx_probe3>>20) & 0x1) != 0x1)
		printk("ad_pxp_rx_oscal_done : 0x%x  **\n", (ro_rx_probe3>>20) & 0x1);

	//read addr: 0x1FC7E380 [24:21]
	if(((ro_rx_probe3>>21) & 0x1) != 0x1)
		printk("ad_pxp_rx_oscal_state : 0x%x  **\n", (ro_rx_probe3>>21) & 0x1);

	printk("*******  RX AEQ flow\n");
	//read addr: 0x1FC7E380 [07:00]
	printk("da_pxp_aeq_state : 0x%x \n", (ro_rx_probe7>>0) & 0xff);

	//read addr: 0x1FC7E380 [08:08]
	if(((ro_rx_probe7>>8) & 0x1) != 0x1)
		printk("da_pxp_aeq_done : 0x%x  **\n", (ro_rx_probe7>>8) & 0x1);

	//read addr: 0x1FC7E380 [10:10]
	if(((ro_rx_probe7>>10) & 0x1) != 0x1)
		printk("da_pxp_aeq_en : 0x%x  **\n", (ro_rx_probe7>>10) & 0x1);

	//read addr: 0x1FC7E380 [11:11]
	if(((ro_rx_probe7>>11) & 0x1) != 0x1)
		printk("da_pxp_aeq_ckon : 0x%x  **\n", (ro_rx_probe7>>11) & 0x1);

	//read addr: 0x1FC7E380 [16:12]
	printk("rgs_pxp_aeq_ctle : 0x%x \n", (ro_rx_probe7>>12) & 0x1f);

	printk("*******  RX OS & AEQ K val\n");
	printk("RGS_PXP_RX_OSCAL_COMPOS : 0x%x \n", fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_COMPOS);//read addr: 0x1FC7F15C [13:8]
	printk("RGS_PXP_RX_OSCAL_FE_VOS : 0x%x \n", fw_RGS_PXP_RX_OSCAL_FE_VOS.hal.RGS_PXP_RX_OSCAL_FE_VOS);//read addr: 0x1FC7F15C [5:0]
	printk("RGS_PXP_AEQ_D0_OS : 0x%x \n", fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D0_OS);//read addr: 0x1FC7F16C [14:8]
	printk("RGS_PXP_AEQ_D1_OS : 0x%x \n", fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_D1_OS);//read addr: 0x1FC7F16C [22:16]
	printk("RGS_PXP_AEQ_E0_OS : 0x%x \n", fw_RGS_PXP_AEQ_SAOSC_EN.hal.RGS_PXP_AEQ_E0_OS);//read addr: 0x1FC7F16C [30:24]
	printk("RGS_PXP_AEQ_E1_OS : 0x%x \n", fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_E1_OS);//read addr: 0x1FC7F170 [06:00]
	printk("RGS_PXP_AEQ_ERR0_OS : 0x%x \n", fw_RGS_PXP_AEQ_E1_OS.hal.RGS_PXP_AEQ_ERR0_OS); //read addr: 0x1FC7F170 [22:16]
	printk("RGS_PXP_AEQ_CTLE : 0x%x \n", fw_RGS_PXP_AEQ_CTLE.hal.RGS_PXP_AEQ_CTLE);//read addr: 0x1FC7F168 [04:00]
	printk("rg_force_da_pxp_rx_sigdet_os : 0x%x \n", fw_rg_force_da_pxp_rx_fe_gain_ctrl.hal.rg_force_da_pxp_rx_sigdet_os);//read addr: 0x1FC7E88C [20:16]

	printk("*******  CDR FLL status & K_band\n");
	printk("rg_dig_reserve_27[16] : 0x%x (0:HW K, 1:FW K)\n", (fw_ADD_DIG_RESERVE_27.hal.rg_dig_reserve_27>>16) & 0x1);//read addr: 0x1FC7E908 [16:16]
	printk("fll_kband : 0x%x \n", (fw_ADD_DIG_RO_RESERVE_5.hal.ro_dig_reserve_5>>0) & 0x7FF);//read addr: 0x1FC7E8C4 [10:00]
	printk("Rx fll idac: 0x%x \n", (fw_ADD_DIG_RO_RESERVE_5.hal.ro_dig_reserve_5>>16) & 0x7FF);//read addr: 0x1FC7E8C4 [26:16]
	
	if(fw_RX_TORGS_DEBUG_12.hal.ro_kband_done != 0x1)
		printk("ro_kband_done : 0x%x **\n", fw_RX_TORGS_DEBUG_12.hal.ro_kband_done);//read addr: 0x1FC7E54C [24:24]
	
	//read addr: 0x1FC7E380 [29:19]
	printk("ad_pxp_cdr_pr_idac : 0x%x \n", (ro_tx_probe1>>19) & 0x7ff);

	printk("*******  TX enable\n");
	//read addr: 0x1FC7E380 [8:8]
	if(((ro_tx_probe0>>8) & 0x1) != 0x1)
		printk("da_pxp_tx_data_en_buf : 0x%x  **\n", (ro_tx_probe0>>8) & 0x1);
	
	printk("*******  RX data\n");
	//read addr: 0x1FC7E380 [06:00]
	printk("ad_pxp_rx_dac : 0x%x \n", (ro_rx_probe4>>0) & 0x7f);
	//read addr: 0x1FC7E380 [13:07]
	printk("ad_pxp_rx_dac_d1 : 0x%x \n", (ro_rx_probe4>>7) & 0x3f);
	//read addr: 0x1FC7E380 [20:14]
	printk("ad_pxp_rx_dac_e0 : 0x%x \n", (ro_rx_probe4>>14) & 0x7f);
	//read addr: 0x1FC7E380 [27:21]
	printk("ad_pxp_rx_dac_e1 : 0x%x \n", (ro_rx_probe4>>21) & 0x7f);
	//read addr: 0x1FC7E380 [11:05]
	printk("da_pxp_rx_dac_eye : 0x%x \n", (ro_rx_probe5>>5) & 0x7f);
	//read addr: 0x1FC7E380 [19:18]
	printk("da_pxp_rx_fe_gain_ctrl : 0x%x \n", (ro_rx_probe5>>18) & 0x3);
	//read addr: 0x1FC7E380 [15:0]
	printk("rx_debug_bus : 0x%x \n", (ro_probe13>>0) & 0xffff);

	//read addr: 0x1FC7E380 [16:16]
	if(((ro_probe13>>16) & 0x1) != 0x1)
		printk("rx_cal_rdy : 0x%x  --\n", (ro_probe13>>16) & 0x1);

	//read addr: 0x1FC7E380 [26:26]
	if(((ro_probe13>>26) & 0x1) != 0x1)
		printk("lcpll_ledck_out_mon : 0x%x  --\n", (ro_probe13>>26) & 0x1);
	//read addr: 0x1FC7E380 [0:0]
	printk("ref_ck_probe : 0x%x; \n", (ro_probe18>>0) & 0x1);

	//read addr: 0x1FC7E380 [1:1]
	if(((ro_probe18>>1) & 0x1) != 0x1)
		printk("ref_rst_n : 0x%x;  --\n", (ro_probe18>>1) & 0x1);

	//read addr: 0x1FC7E380 [2:2]
	printk("ad_pxp_rx_clk_probe : 0x%x; \n", (ro_probe18>>2) & 0x1);

	//read addr: 0x1FC7E380 [8:8]
	if(((ro_probe18>>8) & 0x1) != 0x1)
		printk("rx_pcs_rdy : 0x%x;  --\n", (ro_probe18>>8) & 0x1);

	//read addr: 0x1FC7E380 [24:09]
	printk("rx_pcs_data : 0x%x; \n", (ro_probe18>>9) & 0xffff);
	printk("*******  PIPE\n");
	printk("rgs_xtp_ln_pipe_rx_status: 0x%x \n", fw_PEXTP_DIG_LN_TRX_CC.hal.rgs_xtp_ln_pipe_rx_status);//read addr: 0x1FC330CC [18:16]
	printk("rgs_xtp_ln_pipe_rx_valid: 0x%x \n", fw_PEXTP_DIG_LN_TRX_CC.hal.rgs_xtp_ln_pipe_rx_valid);//read addr: 0x1FC330CC [19:19]
	printk("PIPE rx data : 0x%x; \n", PIPE_rx_data);//read addr: 0x1FC2002C [31:00]

	printk("*******  traffic\n");
	
	//read addr: 0x1FC7E380 [27:24]
	if(((ro_probe14>>24) & 0xf) != 0x0)
		printk("rx_fifo_empty_cnt : 0x%x  --\n", (ro_probe14>>24) & 0xf);

	//read addr: 0x1FC7E380 [31:28]
	if(((ro_probe14>>28) & 0xf) != 0x0)
		printk("rx_fifo_full_cnt : 0x%x  --\n", (ro_probe14>>28) & 0xf);
	//read addr: 0x1FC7E380 [03:00]
	if(((ro_probe15>>0) & 0xf) != 0x0)
		printk("tx_fifo_empty_cnt : 0x%x  **\n", (ro_probe15>>0) & 0xf);

	//read addr: 0x1FC7E380 [07:04]
	if(((ro_probe15>>4) & 0xf) != 0x0)
		printk("tx_fifo_full_cnt : 0x%x  **\n", (ro_probe15>>4) & 0xf);
	
}
EXPORT_SYMBOL(PCIe_G3_Common_Debug);


void PCIe_G3_Rx_PCS_PIPE_Data_Monitor(void)
	{
	rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	//rg_type_t(REG_ADD_DIG_RO_RESERVE_2) fw_ADD_DIG_RO_RESERVE_2;	
	u32 pcs_val[32], pipe_data[32];
	u32 x, tmp;
			
	//Reg_W(0x1fa5b000, 0, 0x360, 0x120000); //pcs
	fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0x12<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[20:16] = 0x12

	//Debug_en = 0x1;
	regWrite_PCIe(0x1FC20168, 0x100);	//write addr: 0x1FC20168 = 0x100

	tmp = 0;
	while ((((Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2) >> 8) & 0x1) == 0) && (tmp < TIME_1MS))
	{
		tmp++;
		udelay(1);
	}		

	printk("wait %d us for pcs ready\n", tmp);		
	for(x=0;x<32;x++)
	{
		pcs_val[x] = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);
		pipe_data[x] = regRead_PCIe(0x1FC2002C);		//read PCIE_debug_monitor	
	}

	
	for(x=0;x<32;x++)
		printk("rx_pcs_rdy: %d, pcs input data: %4x, PIPE data: %4x\n", (pcs_val[x] >> 8) & 0x1, (pcs_val[x] >> 9) & 0xffff, pipe_data[x] & 0xffff);		

}

detect_rx_time PCIe_G3_Tx_Detect_Rx_Time(void)
{
	detect_rx_time report;	
	rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	//rg_type_t(REG_ADD_DIG_RO_RESERVE_2) fw_ADD_DIG_RO_RESERVE_2;	
	u32 val_now, tmp;	
	u32 time_cnt, tx_en_time;
	

	time_cnt = 0; tx_en_time = 0;
	report.detect_time = 0;
	report.while_loop_time = 0;

	fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0xb<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;	
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[20:16] = 0xb
	//Reg_W(0x1fa5b000, 0, 0x360, 0xb0000);	

	while(time_cnt < TIME_1MS)
	{
		val_now = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);		
		
		if(((val_now & 0x40) == 0x40)  && (tx_det_en_flag == 0)) //tx_det_en = 1
		{
			tx_en_time = time_cnt ;
			tx_det_en_flag = 1;
			
		}else if((tx_det_en_flag == 1) && ((val_now & 0x400) == 0x0)) //after tx_det_en = 1, tx drive hit threshod will let 380[10] 1 -> 0	
		{
			report.detect_time = time_cnt - tx_en_time;
			report.while_loop_time = time_cnt;
			return report;
		}
		udelay(1);
		time_cnt++;
	}
	
	if (tx_det_en_flag == 0)
	{
		report.detect_time = 0;
		report.while_loop_time = time_cnt;
	}

	return report;
}

void PCIe_G3_Tx_Detect_Rx_Monitor(void)
{
	rg_type_t(REG_ADD_DIG_RESERVE_0) fw_ADD_DIG_RESERVE_0;
	//rg_type_t(REG_ADD_DIG_RO_RESERVE_2) fw_ADD_DIG_RO_RESERVE_2;

	u32 val[ARRAY_MAX], time[ARRAY_MAX];
	u32 val_now, val_last;	
	u32 time_cnt, array_cnt, x, tmp;
	val_last = 0; time_cnt = 0; array_cnt = 0;

	fw_ADD_DIG_RESERVE_0.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0);
	tmp = fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0;
	tmp = (0xb<<16) | (tmp & (~(0x1F<<16)));
	fw_ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 = tmp;	
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _ADD_DIG_RESERVE_0, fw_ADD_DIG_RESERVE_0.dat.value); //write addr: 0x1FC7E360[20:16] = 0xb
	//Reg_W(0x1fa5b000, 0, 0x360, 0xb0000);	

	while(time_cnt < TIME_14MS)
	{
		//fw_ADD_DIG_RO_RESERVE_2.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);
		//val_now = fw_ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 & 0x4c0; //read addr: 0x1FC7E380 focus [10] [7] [6]	
		val_now = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET,  _ADD_DIG_RO_RESERVE_2);
						
		if((val_now != val_last) && (array_cnt < ARRAY_MAX))
		{
			val[array_cnt] = val_now;
			time[array_cnt] = time_cnt;
			array_cnt++;
		}						
		val_last = val_now;
		time_cnt++;
		udelay(1);
	}		

	printk("Tx_Detect_Rx monitor:\n");
	for(x=0; x<array_cnt; x++)		
		printk("%05d us, da_rx_det_en: %d, da_tx_cm_en: %d, ad_result: %d\n", ( time[x] * 1170)/1000, (val[x] >> 6) & 0x1, (val[x] >> 7) & 0x1, (val[x] >>10) & 0x1);
}


void PCIe_SLT_Err_Msg(u32 port)
{
	switch(port)
	{
		case 0: //port 0	
			PCIe_G3_Common_Debug();
			PCIe_G3_Rx_FLL_Monitor();
			PCIe_G3_Rx_FLL_Print();	
			PCIe_G3_Eye_Scan(0, 1);
			PCIe_G3_Eye_Scan(0, 1);
			break;
		case 1:
			PCIe_QPhy_Common_Debug();
			break;
	}
}
EXPORT_SYMBOL(PCIe_SLT_Err_Msg);

void  PCIe0_debug_msg(u32 state)
{
	

	if( (state & 0x2) ==0) //rx term not detected 
	{
		printk("port0 LTSSM_Detect debug message:\n");		
		PCIe_G3_Tx_Detect_Rx_Monitor();				

	}else if( (state & 0x4) ==0) //POLLING but not CONFIG
	{
		printk("port0 LTSSM_Polling debug message:\n");		
		PCIe_G3_Rx_PCS_PIPE_Data_Monitor();
	}
		
	PCIe_G3_Common_Debug();
}

void  PCIe1_debug_msg(u32 state)
{
	
	switch(state)
	{
		case 0: //
			
			break;
			
		case 2: //
			break;
	}		

	PCIe_QPhy_Common_Debug();
}


void  LTSSM_trig0_Action(u32 state)
{
	
	switch(state)
	{
		case 0x0b000000: //recovery
			PCIe_G3_Rx_FLL_Monitor();
			PCIe_G3_Common_Debug();	
			PCIe_G3_Rx_FLL_Print();
			break;
			
		case 0x02000000: //polling
			PCIe_G3_Rx_FLL_Monitor();
			PCIe_G3_Common_Debug();	
			PCIe_G3_Rx_FLL_Print();
			break;
	}		
}


void  LTSSM_trig1_Action(u32 state)
{
	
	switch(state)
	{
		case 0x1:
			break;
			
		case 0x2:			
			QPHY_EQ_Monitor();
			break;
	}		
}

void PCIe_LTSSM_Monitor()
{
	u32 time0[STATE_LEN], time1[STATE_LEN], ltssm0[STATE_LEN], ltssm1[STATE_LEN];
	u32 ltssm0_cnt, ltssm1_cnt, gdmp_trig_cnt, trig_flag0, trig_flag1, trig_ltssm0, trig_ltssm1;
	u32 ltssm0_now, ltssm0_last, ltssm1_now, ltssm1_last, x, monitor_cnt;
	bool gdmp_trigged_flag;
	void * virtAddr;
	detect_rx_time txdetrx_time;
	
	trig_flag0 = 0; trig_flag1 = 0;
	ltssm0_cnt = 0; ltssm1_cnt = 0;
	ltssm0_last = 0; ltssm1_last = 0;	
	monitor_cnt = 0;
	gdmp_trigged_flag = 0;
	gdmp_trig_cnt = 0;
	tx_det_en_flag = 0;
	
	trig_ltssm0 = (debug_selector & LTSSM_TRIG0_MASK);
	trig_ltssm0 = (trig_ltssm0 == 0) ? ~trig_ltssm0 : trig_ltssm0;	//0 not trig
	trig_ltssm1 = (debug_selector>>LTSSM_TRIG1_SHIFT) & LTSSM_TRIG1_MASK;
	trig_ltssm1 = (trig_ltssm1 == 0) ? ~trig_ltssm1 : trig_ltssm1;	//0 not trig
	
	while(monitor_cnt <  M_CNT) // monitor about 50ms, every read/write action in while loop affact 1 tick time.
	{		
		ltssm0_now = regRead_PCIe(0x1fc20150) & LTSSM_TRIG0_MASK;		
		//ltssm1_now = regRead_PCIe(0x1fa92804) & LTSSM_TRIG1_MASK;
		virtAddr = ioremap ((phys_addr_t)0x1fa92804,4);	
		ltssm1_now = readl(virtAddr) & LTSSM_TRIG1_MASK;

		if((ltssm0_now != ltssm0_last) && (ltssm0_cnt < STATE_LEN))
		{
			ltssm0[ltssm0_cnt] = ltssm0_now;
			time0[ltssm0_cnt] = monitor_cnt;
			ltssm0_cnt++;
		}

		if((ltssm1_now != ltssm1_last) && (ltssm1_cnt < STATE_LEN))
		{
			ltssm1[ltssm1_cnt] = ltssm1_now;
			time1[ltssm1_cnt] = monitor_cnt;
			ltssm1_cnt++;
		}		
				
		//get tx detect rx function time: how long tx drive hit threshold.
		if ((ltssm0_now == DETECT_STATE_PXP) && (tx_det_en_flag == 0))
		{
			txdetrx_time = PCIe_G3_Tx_Detect_Rx_Time();
			monitor_cnt = monitor_cnt + txdetrx_time.while_loop_time;
		}

				
		if (ltssm0_now == trig_ltssm0)
		{
			trig_flag0 = 1;
			break;
		}
		
		if (ltssm1_now == trig_ltssm1)
		{
			trig_flag1 = 1;
			break;
		}

		if((gdmp_trigged_flag == 0) && (gdump_if_trigged() == 1)) //recorde gdmp trigged time point
		{
			gdmp_trigged_flag = 1;
			gdmp_trig_cnt = monitor_cnt;
		}

		ltssm0_last = ltssm0_now;
		ltssm1_last = ltssm1_now;
		monitor_cnt++;
		
		//for delay 2us
		x = 300;
		while(x>0)
			x--;		
	}

	//set LTSSM trig monitor state and LTSSM trigged, then do debug action
	if(trig_flag0 == 1)		
		LTSSM_trig0_Action(trig_ltssm0);
	else if(trig_flag1 == 1)
		LTSSM_trig1_Action(trig_ltssm1);

	
	if(PCIe_LTSSM_Print_On() == LTSSM_PRINT)
	{
		if(tx_det_en_flag == 1)
		printk("port 0 Tx detect Rx time: %dus\n", txdetrx_time.detect_time);
		for(x=0; x<ltssm0_cnt; x++)
		{
			printk("%06dus, port 0: 0x%x\n", time0[x]*2, ltssm0[x] >> 24);
		}
		printk("port 1\n");
		for(x=0; x<ltssm1_cnt; x++)
		{
			printk("%06dus, port 1: 0x%x\n", time1[x]*2, ltssm1[x]);
		}

		if(gdmp_trigged_flag == 1)
			printk("gdmp trigged time: %05dus\n", gdmp_trig_cnt*2);

	//if not linkup after M_CNT, report debug message
		if((monitor_cnt == M_CNT) && (ltssm0_now!= L0_STATE_PXP))
		PCIe0_debug_msg(regRead_PCIe(0x1fc20150));
		else if((monitor_cnt == M_CNT) && (ltssm1_now!= L0_STATE_QPHY))
		PCIe1_debug_msg(0xdeadbeef);
	}
}
EXPORT_SYMBOL(PCIe_LTSSM_Monitor);


void PCIe_LTSSM_Monitor_Port(u32 port)
{
	u32 time[STATE_LEN], ltssm[STATE_LEN];
	u32 ltssm_cnt, gdmp_trig_cnt, trig_flag, trig_ltssm;
	u32 ltssm_now, ltssm_last, x, monitor_cnt;
	bool gdmp_trigged_flag;
	detect_rx_time txdetrx_time;
	void * virtAddr;

	trig_flag = 0;
	ltssm_cnt = 0; 
	ltssm_last = 0; 
	monitor_cnt = 0;
	gdmp_trigged_flag = 0;
	gdmp_trig_cnt = 0;
	tx_det_en_flag = 0;

	switch (port)
	{
		case 0:
			trig_ltssm = (debug_selector & LTSSM_TRIG0_MASK);
			trig_ltssm = (trig_ltssm == 0) ? ~trig_ltssm : trig_ltssm;	//0 not trig
			break;
		case 1:
			trig_ltssm = (debug_selector>>LTSSM_TRIG1_SHIFT) & LTSSM_TRIG1_MASK;
			trig_ltssm = (trig_ltssm == 0) ? ~trig_ltssm : trig_ltssm;	//0 not trig
			break;
		default:
			break;
	}
	
	while(monitor_cnt <  M_CNT) // monitor about 50ms, every read/write action in while loop affact 1 tick time.
	{		

		switch (port)
		{
			case 0:
				ltssm_now = regRead_PCIe(0x1fc20150) & LTSSM_TRIG0_MASK;		
				break;
			case 1:
				//ltssm_now = regRead_PCIe(0x1fa92804) & LTSSM_TRIG1_MASK;
				virtAddr = ioremap ((phys_addr_t)0x1fa92804,4);	
				ltssm_now = readl(virtAddr) & LTSSM_TRIG1_MASK;

				break;
			default:
				break;
}

		if((ltssm_now != ltssm_last) && (ltssm_cnt < STATE_LEN))
		{
			ltssm[ltssm_cnt] = ltssm_now;
			time[ltssm_cnt] = monitor_cnt;
			ltssm_cnt++;
		}


		if (port == 0)
		{
			//get tx detect rx function time: how long tx drive hit threshold.
			if ((ltssm_now == DETECT_STATE_PXP) && (tx_det_en_flag == 0))
			{
				txdetrx_time = PCIe_G3_Tx_Detect_Rx_Time();
				monitor_cnt = monitor_cnt + txdetrx_time.while_loop_time;
			}
		}

				
		if (ltssm_now == trig_ltssm)
		{
			trig_flag = 1;
			break;
		}
		

		if((gdmp_trigged_flag == 0) && (gdump_if_trigged() == 1)) //recorde gdmp trigged time point
		{
			gdmp_trigged_flag = 1;
			gdmp_trig_cnt = monitor_cnt;
		}

		ltssm_last = ltssm_now;
		monitor_cnt++;
		
		udelay(1);
	}

	//set LTSSM trig monitor state and LTSSM trigged, then do debug action
	if(trig_flag == 1)		
		switch (port)
		{
			case 0:
				LTSSM_trig0_Action(trig_ltssm);
				break;
			case 1:
				LTSSM_trig1_Action(trig_ltssm);
				break;
			default:
				break;			
		}

		
	
	if(PCIe_LTSSM_Print_On() == LTSSM_PRINT)
	{
		if((port == 0)&&(tx_det_en_flag == 1))
			printk("port %d Tx detect Rx time: %dus\n", port, (txdetrx_time.detect_time * 1133)/1000);
		
		for(x=0; x<ltssm_cnt; x++)
		{
			switch (port)
			{
				case 0:
					printk("%06dus, port %d: 0x%x\n", ( time[x] * 1170)/1000, port, ltssm[x] >> 24);
					break;
				case 1:
					printk("%06dus, port 1: 0x%x\n",  time[x]*3, ltssm[x]);
					break;
				default:
					break;
			}
			
		}


		if(gdmp_trigged_flag == 1)
			printk("gdmp trigged time: %05dus\n", gdmp_trig_cnt);	

		//if not linkup after M_CNT, report debug message
		if((monitor_cnt == M_CNT) )
			switch(port)
			{
				case 0:
					if(ltssm_now!= L0_STATE_PXP)
						PCIe0_debug_msg(regRead_PCIe(0x1fc20150));
					break;
				case 1:
					if(ltssm_now!= L0_STATE_QPHY)
						PCIe1_debug_msg(0xdeadbeef);
					break;
			}			
	}
}
EXPORT_SYMBOL(PCIe_LTSSM_Monitor_Port);

void PCIe_Link_Status_Check(void) 
{
	void * virtAddr;
	u32 tmp, tmp1;

	if(PCIe_LTSSM_Print_On() == LTSSM_PRINT)
	{
	//port 0
		printk("debug check port0: 1fc20154 = 0x%x , 1fc20150 = %x, 1fc20018 = %x \n", regRead_PCIe(0x1fc20154), regRead_PCIe(0x1fc20150), regRead_PCIe(0x1fc20018) );
	
	//port 1	
	virtAddr = ioremap ((phys_addr_t)0x1fa90050,4);	
	tmp = readl(virtAddr);
	virtAddr = ioremap ((phys_addr_t)0x1fa9006c,4);
	tmp1 = readl(virtAddr);
		printk("debug check port1: 0x1fa90050 = 0x%x , 0x1fa9006c = %x \n\n", tmp , tmp1 );
}
}

void PCIe_Link_Status_Check_Port(u32 port) 
{

	void * virtAddr;
	u32 tmp, tmp1;
	
	if(PCIe_LTSSM_Print_On() == LTSSM_PRINT)
		switch(port)
		{
			case 0: //port 0				
				tmp = regRead_PCIe(0x1fc20154);
				printk("debug check port0: 1fc20154 = 0x%x , 1fc20150 = %x, 1fc20018 = %x \n\n", tmp, regRead_PCIe(0x1fc20150), regRead_PCIe(0x1fc20018) );

				if((tmp&0xff0000) != 0)
					PCIe_SLT_Err_Msg(0);
				break;
			case 1: //port 1
				//printk("debug check port1: 0x1fa90050 = 0x%x , 0x1fa92804 = %x \n", regRead_PCIe(0x1fa90050) , regRead_PCIe(0x1fa9006c) );	
				virtAddr = ioremap ((phys_addr_t)0x1fa90050,4);	
				tmp = readl(virtAddr);
				virtAddr = ioremap ((phys_addr_t)0x1fa9006c,4);
				tmp1 = readl(virtAddr);
				printk("debug check port1: 0x1fa90050 = 0x%x , 0x1fa9006c = %x \n\n", tmp , tmp1 );

				virtAddr = ioremap ((phys_addr_t)0x1fa90064,4);
				tmp1 = readl(virtAddr);
				if((readl(virtAddr)&0xffff) != 0)
					PCIe_SLT_Err_Msg(1);
				break;
}
}
EXPORT_SYMBOL(PCIe_Link_Status_Check_Port);


void PCIe_G3_Tx_Compliance(u32 speed) 
{
	//rg_type_t(REG_RSTCTRL1) fw_RSTCTRL1;
	rg_type_t(REG_RG_PXP_TX_CKLDO_EN) fw_RG_PXP_TX_CKLDO_EN;
	rg_type_t(REG_PCIE_CONF_LINK2_CTL_STS) fw_PCIE_CONF_LINK2_CTL_STS;

//*******  compliance pattern
	//fw_RSTCTRL1.hal.rst_ctrl_sw = 0x4000000; 
	regWrite_PCIe(0x1FB00834, 0x4000000);

	fw_RG_PXP_TX_CKLDO_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN);
	fw_RG_PXP_TX_CKLDO_EN.hal.RG_PXP_TX_CKLDO_EN = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN, fw_RG_PXP_TX_CKLDO_EN.dat.value); //write addr: 0x1FC7F0C4 = 0x10400

	mdelay(10);

	//fw_RSTCTRL1.hal.rst_ctrl_sw = 0x0; 
	regWrite_PCIe(0x1FB00834, 0x0);

	fw_PCIE_CONF_LINK2_CTL_STS.dat.value = regRead_PCIe(0x1FC210B0);
	switch(speed)
	{
		case 1:
			fw_PCIE_CONF_LINK2_CTL_STS.hal.Lcr2_Link_Speed = 0x1; 
			break;
		case 2:
			fw_PCIE_CONF_LINK2_CTL_STS.hal.Lcr2_Link_Speed = 0x2; 
			break;
		case 3:
			fw_PCIE_CONF_LINK2_CTL_STS.hal.Lcr2_Link_Speed = 0x3; 
			break;
	}
	fw_PCIE_CONF_LINK2_CTL_STS.hal.Lcr2_Compliance = 0x1; 
	fw_PCIE_CONF_LINK2_CTL_STS.hal.Lcr2_Comp_Preset = 0x7; //7 or 4  
	regWrite_PCIe(0x1FC210B0, fw_PCIE_CONF_LINK2_CTL_STS.dat.value);

	mdelay(10);

	fw_RG_PXP_TX_CKLDO_EN.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN);
	fw_RG_PXP_TX_CKLDO_EN.hal.RG_PXP_TX_CKLDO_EN = 0x1; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_TX_CKLDO_EN, fw_RG_PXP_TX_CKLDO_EN.dat.value); //write addr: 0x1FC7F0C4 = 0x10401
	
}

void PCIe_G3_Clk_HighZ(void) 
{
	rg_type_t(REG_RG_PCIE_CLKTX0_AMP) fw_RG_PCIE_CLKTX0_AMP;	
	rg_type_t(REG_RG_PXP_PLL_MONCLK_SEL) fw_RG_PXP_PLL_MONCLK_SEL;
	
//*******  clk internal R
	fw_RG_PCIE_CLKTX0_AMP.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PCIE_CLKTX0_AMP);
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PCIE_CLKTX0_AMP = 0x7; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PCIE_CLKTX0_OFFSET = 0x0; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PXP_PCIE_CLKTX0_HZ = 0x1; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PXP_PCIE_CLKTX0_IMP_SEL = 0x0; 
	fw_RG_PCIE_CLKTX0_AMP.hal.RG_PCIE_CLKTX0_SR = 0x0; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PCIE_CLKTX0_AMP, fw_RG_PCIE_CLKTX0_AMP.dat.value); //write addr: 0x1FC7F098 = 0x4000007

	fw_RG_PXP_PLL_MONCLK_SEL.dat.value = Reg_R(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_PLL_MONCLK_SEL);
	fw_RG_PXP_PLL_MONCLK_SEL.hal.RG_PXP_PLL_CMN_RESERVE0 = 0xD; 
	Reg_W(PXP_ANA_BASE, PXP_ANA_OFFSET, _RG_PXP_PLL_MONCLK_SEL, fw_RG_PXP_PLL_MONCLK_SEL.dat.value); //write addr: 0x1FC7F0A0 = 0x1000D09	
}


void PCIe_G3_HEC_Tx_Detect_Rx(void)
{
	rg_type_t(REG_rg_force_da_pxp_tx_hsdata_en) fw_rg_force_da_pxp_tx_hsdata_en;
	rg_type_t(REG_rg_force_da_pxp_tx_rxdet_en) fw_rg_force_da_pxp_tx_rxdet_en;
	rg_type_t(REG_rg_force_da_pxp_tx_ck_en) fw_rg_force_da_pxp_tx_ck_en;
	
	fw_rg_force_da_pxp_tx_ck_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_ck_en);
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_sel_da_pxp_tx_cm_en = 0x1; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_da_pxp_tx_cm_en = 0x1; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_sel_da_pxp_tx_ck_en = 0x1; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_da_pxp_tx_ck_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_ck_en, fw_rg_force_da_pxp_tx_ck_en.dat.value); //write addr: 0x1FC7E878 = 0x1010100
	
	fw_rg_force_da_pxp_tx_hsdata_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_hsdata_en);
	fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_sel_da_pxp_tx_data_en = 0x1; 
	//fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_da_pxp_tx_data_en = 0x0; 
	//fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_sel_da_pxp_tx_hsdata_en = 0x0; 
	//fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_da_pxp_tx_hsdata_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_hsdata_en, fw_rg_force_da_pxp_tx_hsdata_en.dat.value); //write addr: 0x1FC7E87C = 0x1000000

	fw_rg_force_da_pxp_tx_rxdet_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rxdet_en);
	fw_rg_force_da_pxp_tx_rxdet_en.hal.rg_force_sel_da_pxp_tx_rxdet_en = 0x1; 
	fw_rg_force_da_pxp_tx_rxdet_en.hal.rg_force_da_pxp_tx_rxdet_en = 0x1; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rxdet_en, fw_rg_force_da_pxp_tx_rxdet_en.dat.value); //write addr: 0x1FC7E880 = 0x101						
	
	PCIe_G3_Tx_Detect_Rx_Monitor();

	fw_rg_force_da_pxp_tx_rxdet_en.hal.rg_force_sel_da_pxp_tx_rxdet_en = 0x0; 
	fw_rg_force_da_pxp_tx_rxdet_en.hal.rg_force_da_pxp_tx_rxdet_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_rxdet_en, fw_rg_force_da_pxp_tx_rxdet_en.dat.value); //write addr: 0x1FC7E880 = 0x0			
	fw_rg_force_da_pxp_tx_hsdata_en.hal.rg_force_sel_da_pxp_tx_data_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_hsdata_en, fw_rg_force_da_pxp_tx_hsdata_en.dat.value); //write addr: 0x1FC7E87C = 0x0
	
	fw_rg_force_da_pxp_tx_ck_en.dat.value = Reg_R(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_ck_en);
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_sel_da_pxp_tx_cm_en = 0x0; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_da_pxp_tx_cm_en = 0x0; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_sel_da_pxp_tx_ck_en = 0x0; 
	fw_rg_force_da_pxp_tx_ck_en.hal.rg_force_da_pxp_tx_ck_en = 0x0; 
	Reg_W(PXP_PMA_BASE, PXP_PMA_OFFSET, _rg_force_da_pxp_tx_ck_en, fw_rg_force_da_pxp_tx_ck_en.dat.value); //write addr: 0x1FC7E878 = 0x1010100
	
}

void PCIe_G3_Relink_Set(void)
{
}
static int pcie_phy_drv_probe(struct platform_device *pdev)
{
    
	printk("PCIe phy driver version: 7583.1.20240730\n QPHY SSC\n");	

	/* PCIEG3_PHY_PMA_PHYA physical address */
	G3_ana_phy_rg_base = Get_Base(PXP_ANA_BASE);
	if (IS_ERR(G3_ana_phy_rg_base)) {
	    printk("\nERROR(%s) G3_ana_phy_rg_base\n", __func__);
		return -1;
	}
    
	/* PCIEG3_PHY_PMA_PHYD physical address  */
	G3_pma_phy_rg_base = Get_Base(PXP_PMA_BASE);
	if (IS_ERR(G3_pma_phy_rg_base)) {
	    printk("\nERROR(%s) G3_pma_phy_rg_base\n", __func__);
		return -1;
	}

	
	/* QPHY_PCIe PHY analog physical address */
	QPCIe_ana_rg_base = Get_Base(QP_ANA_BASE);
	if (IS_ERR(QPCIe_ana_rg_base)) {
	    printk("\nERROR(%s) QPCIe_ana_rg_base\n", __func__);
		return -1;
	}

	/* QPHY_PCIe PHY digital physical address */
	QPCIe_dig_rg_base = Get_Base(QP_DIG_BASE);
	if (IS_ERR(QPCIe_dig_rg_base)) {
	    printk("\nERROR(%s) QPCIe_dig_rg_base\n", __func__);
		return -1;
	}

	/* QPHY_PCIe PHY pma physical address */
	QPCIe_pma_rg_base = Get_Base(QP_PMA_BASE);
	if (IS_ERR(QPCIe_pma_rg_base)) {
	    printk("\nERROR(%s) QPCIe_pma_rg_base\n", __func__);
		return -1;
	}
		
#if 0
	struct resource *res = NULL;
    if (!pdev->dev.of_node) {
        dev_err(&pdev->dev, "No pcie_phy DT node found");
        return -EINVAL;
    }

    pcie_phy = devm_kzalloc(&pdev->dev, sizeof(struct ecnt_pcie_phy), GFP_KERNEL);
    if (!pcie_phy)
        return -ENOMEM;

    platform_set_drvdata(pdev, pcie_phy);

    /* get pcie gen3 base address */
    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    pcie_phy->pc_phy_base = devm_ioremap_resource(&pdev->dev, res);
    if (IS_ERR(pcie_phy->pc_phy_base))
        return PTR_ERR(pcie_phy->pc_phy_base);

    pcie_phy->dev = &pdev->dev;	
#endif
	pcie_phy_ops_init(&AN758X_ops);
	
	//YMC pretest
	//pcie_phy_init(1);
	//pcie_phy_init(2);
	
	printk("PCIe_phy_drv_probe finish\n");	
	return 0;
}
static int pcie_phy_drv_remove(struct platform_device *pdev)
{
    return 0;
}

/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/
static struct platform_driver pcie_phy_driver = {
    .probe = pcie_phy_drv_probe,
    .remove = pcie_phy_drv_remove,
    .driver = {
	    .name = "ecnt-pcie_phy",
	    .of_match_table = ecnt_pcie_phy_of_id
    },
};
builtin_platform_driver(pcie_phy_driver);


//MODULE_DESCRIPTION("EcoNet pcie phy Driver");

