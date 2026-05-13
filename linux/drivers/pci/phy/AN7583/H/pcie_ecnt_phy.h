/***************************************************************
Copyright Statement:

This software/firmware and related documentation (锟斤拷Airoha Software锟斤拷) 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to Airoha Limited (锟斤拷Airoha锟斤拷) and/or 
its licensors. Without the prior written permission of Airoha and/or its licensors, 
any reproduction, modification, use or disclosure of Airoha Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

Airoha Limited. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (锟斤拷AIROHA SOFTWARE锟斤拷) RECEIVED FROM AIROHA 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 锟斤拷AS IS锟斤拷 
BASIS ONLY. AIROHA EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES AIROHA PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE AIROHA SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVER锟斤拷S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN AIROHA SOFTWARE.

AIROHA SHALL NOT BE RESPONSIBLE FOR ANY AIROHA SOFTWARE RELEASES 
MADE TO RECEIVER锟斤拷S SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
AIROHA'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE AIROHA 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT AIROHA'S SOLE OPTION, TO 
REVISE OR REPLACE THE AIROHA SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO AIROHA FOR SUCH 
AIROHA SOFTWARE.
***************************************************************/
#ifndef PCIE_ECNT_PHY_H
#define PCIE_ECNT_PHY_H

/************************************************************************
*               I N C L U D E S
*************************************************************************
*/

/************************************************************************
*               D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/

#define PXP_ANA_BASE 0x1FC7F000 
#define PXP_PMA_BASE 0x1FC7E000 
#define PXP_DIG_GLB_BASE 0x1FC30000 
#define PXP_DIG_RX_BASE 0x1FC35000 
#define PXP_DIG_TRX_BASE 0x1FC33000 
#define PXP_DIG_TX_BASE 0x1FC34000 
#define PXP_TX_DA_COEF_BASE 0x1FC37000 
#define PXP_LC_TABLE_BASE 0x1FC38000 

#define QP_ANA_BASE 0x1FA5F000 
#define QP_DIG_BASE 0x1FA5A000 
#define QP_PMA_BASE 0x1FA5E000 


#define PXP_ANA_OFFSET 0xF000
#define PXP_PMA_OFFSET 0xE000
#define PXP_DIG_GLB_OFFSET 0x0
#define PXP_DIG_RX_OFFSET 0x5000
#define PXP_DIG_TRX_OFFSET 0x3000
#define PXP_DIG_TX_OFFSET 0x4000
#define PXP_TX_DA_COEF_OFFSET 0x7000
#define PXP_LC_TABLE_OFFSET 0x8000

#define QP_ANA_OFFSET 0xF000
#define QP_DIG_OFFSET 0xA000
#define QP_PMA_OFFSET 0xE000

//bit [0:0]: PXP eye scan (default off); 
//bit [1:1]: QPHY eye scan (default off); 
//bit [3:3]: LTSSM print (default on); 
//bit [5:4]: Gdump sel (default 0, none); 
//bit [28:24]: port0 LTSSM trig monitor state (default 0x0, none); 
//bit [15:11]: port1 LTSSM trig monitor state (default 0x0, none); 
//0x00110648

#if defined(TCSUPPORT_AUTOBENCH)	//SLT default enable eye scan and gdump
#define PXP_EYE_SCAN_MASK	0x200
#define QP_EYE_SCAN_MASK	0x400
#define LTSSM_PRINT_MASK	0x8
#define GDMP_MASK			0xc0
#define GDMP_SHIFT			6
#define LTSSM_TRIG0_MASK	0x1f000000
#define LTSSM_TRIG1_MASK	0x1f
#define LTSSM_TRIG1_SHIFT		11
#else
#define PXP_EYE_SCAN_MASK	0x1
#define QP_EYE_SCAN_MASK	0x2
#define LTSSM_PRINT_MASK	0x8
#define GDMP_MASK			0x30
#define GDMP_SHIFT			4
#define LTSSM_TRIG0_MASK	0x1f000000
#define LTSSM_TRIG1_MASK	0x1f
#define LTSSM_TRIG1_SHIFT		11
#endif

#define DETECT_STATE_PXP	0x01000000
#define L0_STATE_PXP			0x10000000
#define L0_STATE_QPHY		0xf

#define M_CNT 				60000 //> 50ms
#define STATE_LEN			60
#define CHECK_LEN			50 //500

#define ARRAY_MAX 			10
#define TIME_12MS 			12000
#define TIME_14MS 			14000
#define TIME_1MS 				1000


//efuse 
#define	SerDes_QP_PCIe_efuse_valid_LSB                              32 
#define	RG_QP_PCIE_TX_TERM_SEL_LSB /*[1:0]*/                        67 
#define	RG_QP_PCIE_TX_TERM_SEL_MSB /*[1:0]*/                        68 
#define	RG_QP_PCIE_RX_IMP_SEL_LSB /*[4:0]*/                         69 
#define	RG_QP_PCIE_RX_IMP_SEL_MSB /*[4:0]*/                         73 

#define	SerDes_PCIe_efuse_valid_LSB                                 31 
#define	SerDes_PCIe_CMN_TRIM_valid_LSB                                 33 
#define	RG_PXP_PCIE_CMN_TRIM_LSB /*[4:0]*/                          103
#define	RG_PXP_PCIE_CMN_TRIM_MSB /*[4:0]*/                          107
#define	RG_PXP_PCIE_TX0_TERM_SEL_LSB /*[1:0]*/                      108
#define	RG_PXP_PCIE_TX0_TERM_SEL_MSB /*[1:0]*/                      109
#define	RG_PXP_PCIE_RX0_FE_50OHMS_SEL_LSB /*[1:0]*/                 110
#define	RG_PXP_PCIE_RX0_FE_50OHMS_SEL_MSB /*[1:0]*/                 111
#define	RG_PXP_PCIE_TX1_TERM_SEL_LSB /*[1:0]*/                      112
#define	RG_PXP_PCIE_TX1_TERM_SEL_MSB /*[1:0]*/                      113
#define	RG_PXP_PCIE_RX1_FE_50OHMS_SEL_LSB /*[1:0]*/                 114
#define	RG_PXP_PCIE_RX1_FE_50OHMS_SEL_MSB /*[1:0]*/                 115


/************************************************************************
*               M A C R O S
*************************************************************************
*/

/************************************************************************
*               D A T A   T Y P E S
*************************************************************************
*/
typedef unsigned int        u32;
#define uint32 u32

struct BIT {
	u32 b0:1;
	u32 b1:1;
	u32 b2:1;
	u32 b3:1;
	u32 b4:1;
	u32 b5:1;
	u32 b6:1;
	u32 b7:1;

	u32 b8:1;
	u32 b9:1;
	u32 b10:1;
	u32 b11:1;
	u32 b12:1;
	u32 b13:1;
	u32 b14:1;
	u32 b15:1;

	u32 b16:1;
	u32 b17:1;
	u32 b18:1;
	u32 b19:1;
	u32 b20:1;
	u32 b21:1;
	u32 b22:1;
	u32 b23:1;

	u32 b24:1;
	u32 b25:1;
	u32 b26:1;
	u32 b27:1;
	u32 b28:1;
	u32 b29:1;
	u32 b30:1;
	u32 b31:1;
};


typedef union {
	u32 value;
	struct BIT bit;
}RGDATA_t;	

typedef struct {
	u32  base;
	u32  base_start;
	u32  addr;
	RGDATA_t data;
}REG_t;

typedef struct {
	u32 detect_time;
	u32 while_loop_time;
}detect_rx_time;


/************************************************************************
*               D A T A   D E C L A R A T I O N S
*************************************************************************
*/
struct pcie_phy_ops {
	void (*init)(unsigned int port_num);
	void (*PowerDown)(unsigned int port_num);
	void (*PowerUp)(unsigned int port_num);
	void (*PhyDebug)(unsigned int sel);
};

#define rg_type_t(type)\
		union type##_t {\
		type hal;\
		RGDATA_t dat;\
		}

/************************************************************************
*               F U N C T I O N   D E C L A R A T I O N S
                I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/
int pcie_phy_ops_init(const struct pcie_phy_ops *ops_ptr);


u32 Reg_R(u32 Base, u32 Offset, u32 Addr);
void Reg_W(u32 Base, u32 Offset, u32 Addr, u32 Data);


void PCIe_QPhy_Load_Efuse(void);
void pcie_QPhy_init(void);
void PCIe_QPhy_Enable(void);
void PCIe_QPhy_Disable(void);
void PCIe_QPhy_Tx_Detect_Rx_Monitor(void);
void PCIe_QPhy_HEC_Tx_Detect_Rx(void);
void PCIe_QPhy_Common_Debug(void);

void PCIe_G3_Load_Efuse(void);
void PCIe_G3_init(void);
void PCIe_G3_Eye_Scan(char lane, char quick_flag);
void PCIe_G3_Disable(void);
void PCIe_G3_Wait_Debug_Condition(void);
void PCIe_G3_Rx_FLL_Monitor(void);
void PCIe_G3_Rx_FLL_Print(void);
void PCIe_G3_Rx_OS_Cal_Result(bool print_flag );
void PCIe_G3_Reg_Val_Check(void);
void PCIe_G3_Relink_Set(void);
void PCIe_G3_Rx_PCS_PIPE_Data_Monitor(void);
void PCIe_G3_Tx_Detect_Rx_Monitor(void);
void PCIe_G3_Common_Debug(void);
void PCIe_G3_T2R_Loopback(char gen_speed);
void PCIe_G3_Tx_Compliance(u32 speed);
void PCIe_G3_Clk_HighZ(void);
void PCIe_G3_HEC_Tx_Detect_Rx(void);
detect_rx_time PCIe_G3_Tx_Detect_Rx_Time(void);


void Get_PCIe_Debug_Selector(u32 port) ;
void PCIe_LTSSM_Monitor(void);
void PCIe_LTSSM_Monitor_Port(u32 port);
void PCIe_Link_Status_Check(void);
void PCIe_Link_Status_Check_Port(u32 port);
bool PCIe_EYE_SCAN_ON(u32 port);
bool PCIe_GDMP_Config(u32 port);
bool PCIe_LTSSM_Print_On(void);
void PCIe_SLT_Err_Msg(u32 port);



#endif /* PCIE_ECNT_PHY_H */
