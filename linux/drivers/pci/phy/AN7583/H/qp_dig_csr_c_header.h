#ifndef __qp_dig_csr_REGS_H__
#define __qp_dig_csr_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- qp_dig_csr Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD RG_QP_RX_IMPCALIB_EN      : 1;
        FIELD RG_PCIE_REFCK_DIV4        : 1;
        FIELD RG_PCIE_DEVICE            : 1;
        FIELD rsv_3                     : 1;
        FIELD RG_QP_XTAL_EXT_EN         : 2;
        FIELD RG_PCIE_CLKRX_EN          : 1;
        FIELD RG_QP_SCAN_MODE           : 1;
        FIELD RG_PCIE_CKDET_EN          : 1;
        FIELD rsv_9                     : 3;
        FIELD RG_QP_PLL_FBKSEL          : 2;
        FIELD rsv_14                    : 1;
        FIELD RG_QP_PLL_LOAD_EN         : 1;
        FIELD RG_QP_PLL_BP              : 4;
        FIELD RG_QP_PLL_IR              : 4;
        FIELD RG_QP_PLL_BR              : 3;
        FIELD rsv_27                    : 1;
        FIELD RG_QP_PLL_IC              : 4;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_0, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_0;

typedef struct
{
    

        FIELD RG_QP_PLL_DIVEN           : 3;
        FIELD rsv_3                     : 1;
        FIELD RG_QP_PLL_BC              : 2;
        FIELD rsv_6                     : 2;
        FIELD RG_QP_PLL_PREDIV          : 2;
        FIELD RG_QP_PLL_REFCKDIV        : 1;
        FIELD rsv_11                    : 1;
        FIELD RG_QP_RXDET_EN            : 1;
        FIELD RG_QP_TX_DEM              : 2;
        FIELD rsv_15                    : 9;
        FIELD RG_QP_TX_IMPCALIB_EN      : 1;
        FIELD rsv_25                    : 3;
        FIELD RG_QP_CDR_BPB             : 3;
        FIELD rsv_31                    : 1;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_1, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_1;

typedef struct
{
    

        FIELD RG_QP_CDR_BPA             : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_QP_CDR_FBDIV           : 7;
        FIELD rsv_15                    : 1;
        FIELD RG_QP_CDR_TCADJ           : 6;
        FIELD rsv_22                    : 2;
        FIELD RG_QP_CDR_PI_MODE         : 1;
        FIELD RG_QP_CDR_PI_PWD          : 1;
        FIELD RG_QP_LFPS_PWD            : 1;
        FIELD rsv_27                    : 1;
        FIELD RG_QP_EQ_RSTEP2           : 2;
        FIELD RG_QP_EQ_RSTEP1           : 2;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_2, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_2;

typedef struct
{
    

        FIELD RG_QP_LFPS_DEGLITCH       : 2;
        FIELD RG_QP_RX_P1_ENTRY         : 1;
        FIELD RG_QP_RX_P3_ENTRY         : 1;
        FIELD rsv_4                     : 12;
        FIELD RG_QP_RX_HZ               : 1;
        FIELD rsv_17                    : 3;
        FIELD RG_PCIE_CRSDET_OFST       : 4;
        FIELD RG_PCIE_CRSDET_RSTB       : 1;
        FIELD RG_PCIE_CRSDET_EN         : 1;
        FIELD RG_PCIE_CLKTX_EN          : 1;
        FIELD RG_QP_SYSPLL_FBDIV_CHG    : 1;
        FIELD rsv_28                    : 4;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_3, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_3;

typedef struct
{
    

        FIELD RG_QP_PLL_FBKDIV          : 9;
        FIELD rsv_9                     : 23;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_4, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_4;

typedef struct
{
    

        FIELD RG_FORCE_RX_LEQOS_EN      : 1;
        FIELD RG_FORCE_PLL_BAND         : 1;
        FIELD RG_FORCE_CDR_BAND         : 1;
        FIELD RG_FORCE_PLL_BIAS_LPF_EN  : 1;
        FIELD RG_FORCE_PLL_SSC_EN       : 1;
        FIELD RG_FORCE_PLL_AUTOK_VCO    : 1;
        FIELD RG_FORCE_PLL_PWD          : 1;
        FIELD RG_FORCE_SYSPLL_PWD       : 1;
        FIELD RG_FORCE_XTAL_RX_PWD      : 1;
        FIELD RG_FORCE_PLL_BIAS_PWD     : 1;
        FIELD RG_FORCE_BG_LPF_EN        : 1;
        FIELD RG_FORCE_BIASIMR_PWD      : 1;
        FIELD RG_FORCE_BIAS_PWD         : 1;
        FIELD RG_FORCE_RX_SAOSC_EN      : 1;
        FIELD RG_FORCE_TX_LFPS_EN       : 1;
        FIELD RG_FORCE_TX_LFPS          : 1;
        FIELD RG_FORCE_TX_DRV_EN        : 1;
        FIELD RG_FORCE_RX_PI_CAL_EN     : 1;
        FIELD RG_FORCE_SIGDET_CAL_OFFSET : 1;
        FIELD RG_FORCE_SIGDET_CAL_EN    : 1;
        FIELD RG_FORCE_SIGDET_EN        : 1;
        FIELD RG_FORCE_TX_SER_EN        : 1;
        FIELD RG_FORCE_TX_EIDLE_LP_EN   : 1;
        FIELD RG_FORCE_TX_DATA_EN       : 1;
        FIELD RG_FORCE_RX_AFE_PWD       : 1;
        FIELD RG_FORCE_RX_CMPWD         : 1;
        FIELD RG_FORCE_CDR_LCK2REF      : 1;
        FIELD RG_FORCE_CDR_AUTOK_VCO    : 1;
        FIELD RG_FORCE_CDR_PWD          : 1;
        FIELD RG_FORCE_SYSPLL_SDM_ISO_EN : 1;
        FIELD RG_FORCE_SYSPLL_SDM_PWR_ON : 1;
        FIELD RG_FORCE_CDR_PI0          : 1;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_5, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_5;

typedef struct
{
    

        FIELD RG_FORCE_CDR_PI90         : 1;
        FIELD RG_FORCE_PLL_SSC_DELTA1   : 1;
        FIELD RG_FORCE_PLL_SSC_DELTA    : 1;
        FIELD RG_FORCE_PLL_SSC_PRD      : 1;
        FIELD RG_FORCE_SYSPLL_FBDIV     : 1;
        FIELD RG_FORCE_SYSPLL_RESERVE   : 1;
        FIELD RG_FORCE_SYSPLL_PREDIV    : 1;
        FIELD RG_FORCE_IDRV_0DB         : 1;
        FIELD RG_FORCE_IDRV_3P5DB       : 1;
        FIELD RG_FORCE_IDEM_3P5DB       : 1;
        FIELD RG_FORCE_IDRV_6DB         : 1;
        FIELD RG_FORCE_IDEM_6DB         : 1;
        FIELD RG_FORCE_TX_BIASI         : 1;
        FIELD RG_FORCE_TX_BIASI_EN      : 1;
        FIELD RG_FORCE_TX_EIDLE_CM      : 1;
        FIELD RG_FORCE_CDR_BIR          : 1;
        FIELD RG_FORCE_CDR_BIC          : 1;
        FIELD RG_FORCE_CDR_BC           : 1;
        FIELD RG_FORCE_CDR_BR           : 1;
        FIELD RG_FORCE_CDR_KVSEL        : 1;
        FIELD RG_FORCE_RX_CDR_STABLE    : 1;
        FIELD RG_FORCE_RX_SAOSC_RST     : 1;
        FIELD RG_FORCE_RX_EQ_RST        : 1;
        FIELD RG_FORCE_RX_EQ_EN         : 1;
        FIELD RG_FORCE_TX_IMP_SEL       : 1;
        FIELD RG_FORCE_RX_IMP_SEL       : 1;
        FIELD RG_FORCE_IEXT_INTR_CTRL   : 1;
        FIELD rsv_27                    : 5;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_6, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_6;

typedef struct
{
    

        FIELD RG_QP_PLL_BAND            : 11;
        FIELD rsv_11                    : 1;
        FIELD RG_QP_RX_LEQOS_EN         : 1;
        FIELD rsv_13                    : 3;
        FIELD RG_QP_CDR_BAND            : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_PLL_BIAS_LPF_EN     : 1;
        FIELD RG_QP_PLL_SSC_EN          : 1;
        FIELD RG_QP_PLL_AUTOK_VCO       : 1;
        FIELD RG_QP_PLL_PWD             : 1;
        FIELD RG_QP_SYSPLL_PWD          : 1;
        FIELD RG_QP_XTAL_RX_PWD         : 1;
        FIELD RG_QP_PLL_BIAS_PWD        : 1;
        FIELD RG_QP_BG_LPF_EN           : 1;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_7, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_7;

typedef struct
{
    

        FIELD RG_QP_BIASIMR_PWD         : 1;
        FIELD RG_QP_BIAS_PWD            : 1;
        FIELD RG_QP_RX_SAOSC_EN         : 1;
        FIELD RG_QP_TX_LFPS_EN          : 1;
        FIELD RG_QP_TX_LFPS             : 1;
        FIELD RG_QP_TX_DRV_EN           : 1;
        FIELD RG_QP_RX_PI_CAL_EN        : 1;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_SIGDET_CAL_OFFSET   : 5;
        FIELD RG_PCIE_SIGDET_CAL_EN     : 1;
        FIELD RG_PCIE_SIGDET_EN         : 1;
        FIELD RG_QP_TX_SER_EN           : 1;
        FIELD RG_QP_TX_EIDLE_LP_EN      : 1;
        FIELD RG_QP_TX_DATA_EN          : 1;
        FIELD RG_QP_RX_AFE_PWD          : 1;
        FIELD RG_QP_RX_CMPWD            : 1;
        FIELD RG_QP_CDR_LCK2REF         : 1;
        FIELD RG_QP_CDR_AUTOK_VCO       : 1;
        FIELD RG_QP_CDR_PWD             : 1;
        FIELD RG_QP_SYSPLL_SDM_ISO_EN   : 1;
        FIELD RG_QP_SYSPLL_SDM_PWR_ON   : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_8, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_8;

typedef struct
{
    

        FIELD RG_QP_CDR_PI0             : 7;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_CDR_PI90            : 7;
        FIELD rsv_15                    : 17;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_9, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_9;

typedef struct
{
    

        FIELD RG_QP_PLL_SSC_DELTA1      : 16;
        FIELD RG_QP_PLL_SSC_DELTA       : 16;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_10, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_10;

typedef struct
{
    

        FIELD RG_QP_SYSPLL_FBDIV        : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_11, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_11;

typedef struct
{
    

        FIELD rsv_0                     : 16;
        FIELD RG_QP_IDRV_0DB            : 6;
        FIELD rsv_22                    : 2;
        FIELD RG_QP_IDRV_3P5DB          : 6;
        FIELD rsv_30                    : 2;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_12, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_12;

typedef struct
{
    

        FIELD RG_QP_IDEM_3P5DB          : 6;
        FIELD rsv_6                     : 2;
        FIELD RG_QP_IDRV_6DB            : 6;
        FIELD rsv_14                    : 2;
        FIELD RG_QP_IDEM_6DB            : 6;
        FIELD rsv_22                    : 2;
        FIELD RG_QP_TX_BIASI            : 3;
        FIELD rsv_27                    : 1;
        FIELD RG_QP_TX_BIASI_EN         : 1;
        FIELD rsv_29                    : 3;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_13, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_13;

typedef struct
{
    

        FIELD RG_QP_TX_EIDLE_CM         : 4;
        FIELD RG_QP_CDR_BIR             : 1;
        FIELD RG_QP_RX_CDR_STABLE       : 1;
        FIELD RG_QP_RX_SAOSC_RST        : 1;
        FIELD RG_QP_RX_EQ_RST           : 1;
        FIELD RG_QP_RX_EQ_EN            : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_QP_TX_IMP_SEL          : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_QP_RX_IMP_SEL          : 5;
        FIELD rsv_29                    : 3;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_14, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_14;

typedef struct
{
    

        FIELD rsv_0                     : 8;
        FIELD RG_QP_CDR_BIRLTR          : 5;
        FIELD rsv_13                    : 3;
        FIELD RG_QP_CDR_BIRLTD0         : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_QP_CDR_BIRLTD1         : 5;
        FIELD rsv_29                    : 3;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_15, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_15;

typedef struct
{
    

        FIELD RG_QP_CDR_BICLTR          : 4;
        FIELD RG_QP_CDR_BICLTD0         : 4;
        FIELD RG_QP_CDR_BICLTD1         : 4;
        FIELD rsv_12                    : 4;
        FIELD RG_QP_CDR_BCLTR           : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_QP_CDR_BCLTD0          : 5;
        FIELD rsv_29                    : 3;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_16, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_16;

typedef struct
{
    

        FIELD RG_QP_CDR_BCLTD1          : 5;
        FIELD rsv_5                     : 3;
        FIELD RG_QP_CDR_BRLTR           : 3;
        FIELD rsv_11                    : 1;
        FIELD RG_QP_CDR_BRLTD0          : 3;
        FIELD rsv_15                    : 1;
        FIELD RG_QP_CDR_BRLTD1          : 3;
        FIELD RG_QP_CDR_KVSELLTR        : 1;
        FIELD RG_QP_CDR_KVSELLTD0       : 1;
        FIELD RG_QP_CDR_KVSELLTD1       : 1;
        FIELD rsv_22                    : 10;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_17, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_17;

typedef struct
{
    

        FIELD RG_FORCE_QP_PLL_BPA       : 1;
        FIELD RG_FORCE_QP_PLL_BPB       : 1;
        FIELD rsv_2                     : 30;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_18, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_18;

typedef struct
{
    

        FIELD RG_QP_PLL_BPA             : 4;
        FIELD RG_QP_PLL_BPB             : 2;
        FIELD rsv_6                     : 26;
    
    
} qp_dig_csr_REG_QP_DIG_DA_CTRL_19, *Pqp_dig_csr_REG_QP_DIG_DA_CTRL_19;

typedef struct
{
    

        FIELD rg_force_sgmii_tx_clk_en  : 1;
        FIELD rg_force_sgmii_rx_clk_en  : 1;
        FIELD rg_force_qsgmii_tx_clk_en : 1;
        FIELD rg_force_qsgmii_rx_clk_en : 1;
        FIELD rg_force_hsgmii_tx_clk_en : 1;
        FIELD rg_force_hsgmii_rx_clk_en : 1;
        FIELD rg_force_baser_tx_clk_en  : 1;
        FIELD rg_force_baser_rx_clk_en  : 1;
        FIELD rg_force_phy_ref_clk_en   : 1;
        FIELD rg_ck_mode_force_sel      : 1;
        FIELD rg_sgmii_tx_clk_inv       : 1;
        FIELD rg_sgmii_rx_clk_inv       : 1;
        FIELD rg_qsgmii_tx_clk_inv      : 1;
        FIELD rg_qsgmii_rx_clk_inv      : 1;
        FIELD rg_hsgmii_tx_clk_inv      : 1;
        FIELD rg_hsgmii_rx_clk_inv      : 1;
        FIELD rg_baser_tx_clk_inv       : 1;
        FIELD rg_baser_rx_clk_inv       : 1;
        FIELD rg_phy_ref_clk_inv        : 1;
        FIELD rg_baser_tx_macphy_clk_inv : 1;
        FIELD rg_baser_rx_macphy_clk_inv : 1;
        FIELD rg_force_mac0_sgmii_tx_ck_mode_sel : 1;
        FIELD rg_force_mac0_qsgmii_tx_ck_mode_sel : 1;
        FIELD rg_force_mac1_qsgmii_tx_ck_mode_sel : 1;
        FIELD rg_force_mac2_qsgmii_tx_ck_mode_sel : 1;
        FIELD rg_force_mac3_qsgmii_tx_ck_mode_sel : 1;
        FIELD rg_force_mac0_sgmii_rx_ck_mode_sel : 1;
        FIELD rg_force_mac0_qsgmii_rx_ck_mode_sel : 1;
        FIELD rg_force_mac1_qsgmii_rx_ck_mode_sel : 1;
        FIELD rg_force_mac2_qsgmii_rx_ck_mode_sel : 1;
        FIELD rg_force_mac3_qsgmii_rx_ck_mode_sel : 1;
        FIELD rg_rx_data_path_sel       : 1;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_0, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_0;

typedef struct
{
    

        FIELD rg_force_pma_tx_osr_norm_ck_en : 1;
        FIELD rg_force_pma_tx_ck_en     : 1;
        FIELD rg_force_pma_tx_div2_ck_en : 1;
        FIELD rg_force_pcs_tx_ck_en     : 1;
        FIELD rg_force_o_mac_tx_div_ck_en : 1;
        FIELD rg_force_pma_rx_ck_en     : 1;
        FIELD rg_force_pma_rx_div2_ck_en : 1;
        FIELD rg_force_pcs_rx_ck_en     : 1;
        FIELD rg_force_o_mac_rx_div_ck_en : 1;
        FIELD rg_force_pma_tx_osr_short_ck_en : 1;
        FIELD rg_force_pma_tx_norm_ck_en : 1;
        FIELD rsv_11                    : 1;
        FIELD rg_force_pma_tx_ck_0      : 1;
        FIELD rg_force_pma_tx_ck_1      : 1;
        FIELD rg_force_pma_tx_div2_ck_0 : 1;
        FIELD rg_force_pma_tx_div2_ck_1 : 1;
        FIELD rg_force_pcs_tx_ck_0      : 1;
        FIELD rg_force_pcs_tx_ck_1      : 1;
        FIELD rg_force_o_mac_tx_div_ck_0 : 1;
        FIELD rg_force_o_mac_tx_div_ck_1 : 1;
        FIELD rg_force_o_mac_tx_div_ck_2 : 1;
        FIELD rg_force_pma_rx_ck_0      : 1;
        FIELD rg_force_pma_rx_ck_1      : 1;
        FIELD rg_force_pma_rx_div2_ck_0 : 1;
        FIELD rg_force_pma_rx_div2_ck_1 : 1;
        FIELD rg_force_pcs_rx_ck_0      : 1;
        FIELD rg_force_pcs_rx_ck_1      : 1;
        FIELD rg_force_o_mac_rx_div_ck_0 : 1;
        FIELD rg_force_o_mac_rx_div_ck_1 : 1;
        FIELD rg_force_o_mac_rx_div_ck_2 : 1;
        FIELD rsv_30                    : 2;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_1, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_1;

typedef struct
{
    

        FIELD rg_ck_mode_force          : 2;
        FIELD rg_force_mac0_sgmii_tx_ck_mode : 2;
        FIELD rg_force_mac0_qsgmii_tx_ck_mode : 2;
        FIELD rg_force_mac1_qsgmii_tx_ck_mode : 2;
        FIELD rg_force_mac2_qsgmii_tx_ck_mode : 2;
        FIELD rg_force_mac3_qsgmii_tx_ck_mode : 2;
        FIELD rg_force_mac0_sgmii_rx_ck_mode : 2;
        FIELD rg_force_mac0_qsgmii_rx_ck_mode : 2;
        FIELD rg_force_mac1_qsgmii_rx_ck_mode : 2;
        FIELD rg_force_mac2_qsgmii_rx_ck_mode : 2;
        FIELD rg_force_mac3_qsgmii_rx_ck_mode : 2;
        FIELD rsv_22                    : 10;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_2, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_2;

typedef struct
{
    

        FIELD rg_force_pma_rx_eq_ck_en  : 1;
        FIELD rg_force_tdc_ftck_en      : 1;
        FIELD rg_force_tdc_sync_ck_en   : 1;
        FIELD rg_force_cdr_pr_fll_dig_clk_en : 1;
        FIELD rg_force_cdr_pr_fbk_ck_en : 1;
        FIELD rsv_5                     : 11;
        FIELD rg_tdc_ftck_inv           : 1;
        FIELD rg_tdc_sync_ck_inv        : 1;
        FIELD rg_cdr_pr_fll_dig_clk_inv : 1;
        FIELD rg_cdr_pr_fbk_ck_inv      : 1;
        FIELD rg_pll_dig_fbk_ck_inv     : 1;
        FIELD rg_pll_dig_ref_ck_inv     : 1;
        FIELD rg_ns_clk_z_inv           : 1;
        FIELD rg_pma_tx_osr_short_ck_inv : 1;
        FIELD rg_us_ck_div_sel          : 1;
        FIELD rg_ns_ck_div_sel          : 1;
        FIELD rsv_26                    : 6;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_3, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_3;

typedef struct
{
    

        FIELD rg_pma_rx_eq_ck_reset_n   : 1;
        FIELD rg_ns_ck_reset_n          : 1;
        FIELD rg_us_ck_reset_n          : 1;
        FIELD rg_pma_tx_osr_short_ck_reset_n : 1;
        FIELD rg_baser_pma_tx_ck_reset_n : 1;
        FIELD rg_baser_pma_rx_ck_reset_n : 1;
        FIELD rg_ad_qp_tdc_ftck_reset_n : 1;
        FIELD rg_ad_qp_tdc_sync_ck_reset_n : 1;
        FIELD rg_ad_qp_cdr_pr_fll_dig_clk_reset_n : 1;
        FIELD rg_ad_qp_cdr_pr_fbk_ck_reset_n : 1;
        FIELD rg_baser_pma_tx_div2_ck_reset_n : 1;
        FIELD rg_baser_pma_rx_div2_ck_reset_n : 1;
        FIELD rg_baser_pcs_tx_ck_reset_n : 1;
        FIELD rg_baser_pcs_rx_ck_reset_n : 1;
        FIELD rg_xfi_pcs_tx_gb_fifo_wr_reset_n : 1;
        FIELD rg_xfi_pcs_tx_gb_fifo_rd_reset_n : 1;
        FIELD rg_xfi_pcs_rx_gb_fifo_wr_reset_n : 1;
        FIELD rg_xfi_pcs_rx_gb_fifo_rd_reset_n : 1;
        FIELD rg_xfi_pcs_gb_lb_fifo_wr_reset_n : 1;
        FIELD rg_xfi_pcs_gb_lb_fifo_rd_reset_n : 1;
        FIELD rg_xfi_rx_bist_err_cnt_reset_n : 1;
        FIELD rg_pma_tx_osr_norm_ck_reset_n : 1;
        FIELD rg_ad_qp_rx_lfps_reset_n  : 1;
        FIELD rg_ssusb_eq_rx250m_ck_scan_reset_n : 1;
        FIELD rg_ad_qp_pll_dig_fbk_ck_reset_n : 1;
        FIELD rg_ad_qp_pll_dig_ref_ck_reset_n : 1;
        FIELD rsv_26                    : 6;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_4, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_4;

typedef struct
{
    

        FIELD rg_l2ref_ne_cnt           : 5;
        FIELD rg_force_l2ref_done       : 1;
        FIELD rg_force_l2ref_done_sel   : 1;
        FIELD rsv_7                     : 25;
    
    
} qp_dig_csr_REG_QP_SYS_CTRL_0, *Pqp_dig_csr_REG_QP_SYS_CTRL_0;

typedef struct
{
    

        FIELD rg_force_pma_tx_osr_norm_ck_0 : 1;
        FIELD rg_force_pma_tx_osr_norm_ck_1 : 1;
        FIELD rg_force_pma_tx_osr_norm_ck_2 : 1;
        FIELD rg_force_pma_tx_osr_norm_ck_3 : 1;
        FIELD rsv_4                     : 4;
        FIELD rg_force_pma_rx_eq_ck_0   : 1;
        FIELD rg_force_pma_rx_eq_ck_1   : 1;
        FIELD rg_force_pma_rx_eq_ck_2   : 1;
        FIELD rg_force_pma_rx_eq_ck_3   : 1;
        FIELD rg_force_pma_tx_norm_ck_0 : 1;
        FIELD rg_force_pma_tx_norm_ck_1 : 1;
        FIELD rg_force_pma_tx_norm_ck_2 : 1;
        FIELD rg_force_pma_tx_norm_ck_3 : 1;
        FIELD rsv_16                    : 15;
        FIELD rg_multi_phy_usb_en       : 1;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_5, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_5;

typedef struct
{
    

        FIELD rg_sgmii_tx_ck_en_force_sel : 1;
        FIELD rg_sgmii_rx_ck_en_force_sel : 1;
        FIELD rg_qsgmii_tx_ck_en_force_sel : 1;
        FIELD rg_qsgmii_rx_ck_en_force_sel : 1;
        FIELD rg_hsgmii_tx_ck_en_force_sel : 1;
        FIELD rg_hsgmii_rx_ck_en_force_sel : 1;
        FIELD rg_baser_tx_ck_en_force_sel : 1;
        FIELD rg_baser_rx_ck_en_force_sel : 1;
        FIELD rsv_8                     : 2;
        FIELD rg_phy_ref_ck_en_force_sel : 1;
        FIELD rg_tdc_ftck_ck_en_force_sel : 1;
        FIELD rg_tdc_sync_ck_en_force_sel : 1;
        FIELD rg_cdr_pr_fll_dig_ck_en_force_sel : 1;
        FIELD rg_cdr_pr_fbk_ck_en_force_sel : 1;
        FIELD rg_pma_tx_osr_short_ck_en_force_sel : 1;
        FIELD rg_pll_dig_fbk_ck_en_force_sel : 1;
        FIELD rg_pll_dig_ref_ck_en_force_sel : 1;
        FIELD rsv_18                    : 14;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_6, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_6;

typedef struct
{
    

        FIELD rg_sgmii_an_en            : 1;
        FIELD rg_qsgmii_an_en           : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_sgmii_mode             : 2;
        FIELD rg_qsgmii0_mode           : 2;
        FIELD rg_qsgmii1_mode           : 2;
        FIELD rg_qsgmii2_mode           : 2;
        FIELD rg_qsgmii3_mode           : 2;
        FIELD rsv_14                    : 10;
        FIELD rg_rx_er_phy_mode         : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_dig_csr_REG_QP_DIG_MODE_CTRL_0, *Pqp_dig_csr_REG_QP_DIG_MODE_CTRL_0;

typedef struct
{
    

        FIELD rg_pma_rx_ck_reset_n      : 1;
        FIELD rg_pma_rx_div2_ck_reset_n : 1;
        FIELD rg_pcs_rx_ck_reset_n      : 1;
        FIELD rg_o_mac_rx_div_ck_reset_n : 1;
        FIELD rg_pma_tx_ck_reset_n      : 1;
        FIELD rg_pma_tx_div2_ck_reset_n : 1;
        FIELD rg_pcs_tx_ck_reset_n      : 1;
        FIELD rg_o_mac_tx_div_ck_reset_n : 1;
        FIELD rg_100fx_rx_ck_reset_n    : 1;
        FIELD rg_100fx_tx_ck_reset_n    : 1;
        FIELD rsv_10                    : 6;
        FIELD rg_rate_adapt_fifo_rx_reset_n : 1;
        FIELD rg_rate_adapt_fifo_tx_reset_n : 1;
        FIELD rg_rate_adapt_fifo_rxpma_reset_n : 1;
        FIELD rg_hsgmii_fifo_rx_reset_n : 1;
        FIELD rg_eq_rx_reset_n          : 1;
        FIELD rg_pma_tx_norm_ck_reset_n : 1;
        FIELD rg_pma_rx_eq_qsgmii_ck_reset_n : 1;
        FIELD rg_pma_rx_qsgmii_ck_reset_n : 1;
        FIELD rg_pma_tx_norm_qsgmii_ck_reset_n : 1;
        FIELD rg_pma_tx_qsgmii_ck_reset_n : 1;
        FIELD rg_ck_gen_bypass_an       : 1;
        FIELD rsv_27                    : 5;
    
    
} qp_dig_csr_REG_QP_DIG_CK_CTRL_0, *Pqp_dig_csr_REG_QP_DIG_CK_CTRL_0;

typedef struct
{
    

        FIELD rg_hsgmii_async_fifo_wclear : 1;
        FIELD rg_hsgmii_async_fifo_rclear : 1;
        FIELD rg_hsgmii_async_fifo_r_threshold : 5;
        FIELD rg_hsgmii_async_fifo_w_threshold : 5;
        FIELD rg_hsgmii_async_fifo_full_cnt_clear : 1;
        FIELD rg_hsgmii_async_fifo_afull_cnt_clear : 1;
        FIELD rg_hsgmii_async_fifo_empty_cnt_clear : 1;
        FIELD rg_hsgmii_async_fifo_aempty_cnt_clear : 1;
        FIELD rg_hsgmii_async_fifo_read_enable_and : 1;
        FIELD rg_hsgmii_async_fifo_write_enable_and : 1;
        FIELD rg_hsgmii_async_fifo_read_enable_or : 1;
        FIELD rg_hsgmii_async_fifo_write_enable_or : 1;
        FIELD rsv_20                    : 12;
    
    
} qp_dig_csr_REG_QP_DIG_AFIFO_CTRL_0, *Pqp_dig_csr_REG_QP_DIG_AFIFO_CTRL_0;

typedef struct
{
    

        FIELD RG_TPHY_MODE              : 2;
        FIELD RG_TPHY_SPEED             : 2;
        FIELD rg_xtal_sel_20m_25m       : 1;
        FIELD RG_XTAL_SEL               : 1;
        FIELD rsv_6                     : 2;
        FIELD rg_sgmii_mode_force       : 2;
        FIELD rg_ssusb_hsgmii_sel       : 1;
        FIELD rg_ssusb_ip_sw_rst        : 1;
        FIELD rg_qsgmii_test_mode       : 1;
        FIELD rsv_13                    : 19;
    
    
} qp_dig_csr_REG_QP_DIG_MODE_CTRL_1, *Pqp_dig_csr_REG_QP_DIG_MODE_CTRL_1;

typedef struct
{
    

        FIELD rg_tx_short_fifo_dis      : 1;
        FIELD rg_tx_short_fifo_en       : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_hsgmii_tx_short_fifo_wclear : 1;
        FIELD rg_hsgmii_tx_short_fifo_rclear : 1;
        FIELD rsv_6                     : 10;
        FIELD rg_hsgmii_tx_short_fifo_r_threshold : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_hsgmii_tx_short_fifo_w_threshold : 5;
        FIELD rsv_29                    : 3;
    
    
} qp_dig_csr_REG_QP_DIG_AFIFO_CTRL_1, *Pqp_dig_csr_REG_QP_DIG_AFIFO_CTRL_1;

typedef struct
{
    

        FIELD rg_multi_phy_r2t_lpbk_en  : 1;
        FIELD rg_multi_phy_lpbk_async_fifo_wclear : 1;
        FIELD rg_multi_phy_lpbk_async_fifo_rclear : 1;
        FIELD rg_multi_phy_lpbk_async_fifo_full_cnt_clear : 1;
        FIELD rg_multi_phy_lpbk_async_fifo_afull_cnt_clear : 1;
        FIELD rg_multi_phy_lpbk_async_fifo_empty_cnt_clear : 1;
        FIELD rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear : 1;
        FIELD rsv_7                     : 9;
        FIELD rg_multi_phy_lpbk_async_fifo_w_threshold : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_multi_phy_lpbk_async_fifo_r_threshold : 5;
        FIELD rsv_29                    : 3;
    
    
} qp_dig_csr_REG_QP_DIG_AFIFO_CTRL_2, *Pqp_dig_csr_REG_QP_DIG_AFIFO_CTRL_2;

typedef struct
{
    

        FIELD rg_efuse_tphy_rx_imp_sel  : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_efuse_tphy_tx_imp_sel  : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_efuse_tphy_iext_intr_ctrl : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_efuse_tphy_auto_load_valid : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_dig_csr_REG_QP_DIG_EFUSE_CTRL, *Pqp_dig_csr_REG_QP_DIG_EFUSE_CTRL;

typedef struct
{
    

        FIELD rg_usb5_tx_clk_inv        : 1;
        FIELD rg_usb5_rx_clk_inv        : 1;
        FIELD rg_usb2p5_tx_clk_inv      : 1;
        FIELD rg_usb2p5_rx_clk_inv      : 1;
        FIELD rsv_4                     : 4;
        FIELD rg_usb5_phy_tx_ck_en_force_sel : 1;
        FIELD rg_usb5_phy_rx_ck_en_force_sel : 1;
        FIELD rg_usb2p5_phy_tx_ck_en_force_sel : 1;
        FIELD rg_usb2p5_phy_rx_ck_en_force_sel : 1;
        FIELD rsv_12                    : 4;
        FIELD rg_force_usb5_tx_clk_en   : 1;
        FIELD rg_force_usb5_rx_clk_en   : 1;
        FIELD rg_force_usb2p5_tx_clk_en : 1;
        FIELD rg_force_usb2p5_rx_clk_en : 1;
        FIELD rg_force_pll_dig_fbk_ck_en : 1;
        FIELD rg_force_pll_dig_ref_ck_en : 1;
        FIELD rsv_22                    : 2;
        FIELD rg_multi_phy_usb_mode_en  : 1;
        FIELD rg_multi_phy_usb5_en      : 1;
        FIELD rg_multi_phy_usb2p5_en    : 1;
        FIELD rg_pma_tx_osr_norm_usb_mode_sel : 1;
        FIELD rg_pma_tx_norm_usb_mode_sel : 1;
        FIELD rg_pma_rx_eq_usb_mode_sel : 1;
        FIELD rsv_30                    : 2;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_7, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_7;

typedef struct
{
    

        FIELD rg_pll_stable_inv         : 1;
        FIELD rg_force_pll_stable_sel   : 1;
        FIELD rg_force_pll_stable       : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_cdr_stable_inv         : 1;
        FIELD rg_force_cdr_stable_sel   : 1;
        FIELD rg_force_cdr_stable       : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_force_hsgmii_phy_rst_n_sel : 1;
        FIELD rg_force_hsgmii_phy_rst_n : 1;
        FIELD rsv_10                    : 22;
    
    
} qp_dig_csr_REG_QP_CK_RST_CTRL_8, *Pqp_dig_csr_REG_QP_CK_RST_CTRL_8;

// ----------------- qp_dig_csr  Grouping Definitions -------------------
// ----------------- qp_dig_csr Register Definition -------------------
#if 0
typedef volatile 
{
    qp_dig_csr_REG_QP_DIG_DA_CTRL_0 QP_DIG_DA_CTRL_0; // A000
    qp_dig_csr_REG_QP_DIG_DA_CTRL_1 QP_DIG_DA_CTRL_1; // A004
    qp_dig_csr_REG_QP_DIG_DA_CTRL_2 QP_DIG_DA_CTRL_2; // A008
    qp_dig_csr_REG_QP_DIG_DA_CTRL_3 QP_DIG_DA_CTRL_3; // A00C
    qp_dig_csr_REG_QP_DIG_DA_CTRL_4 QP_DIG_DA_CTRL_4; // A010
    qp_dig_csr_REG_QP_DIG_DA_CTRL_5 QP_DIG_DA_CTRL_5; // A014
    qp_dig_csr_REG_QP_DIG_DA_CTRL_6 QP_DIG_DA_CTRL_6; // A018
    qp_dig_csr_REG_QP_DIG_DA_CTRL_7 QP_DIG_DA_CTRL_7; // A01C
    qp_dig_csr_REG_QP_DIG_DA_CTRL_8 QP_DIG_DA_CTRL_8; // A020
    qp_dig_csr_REG_QP_DIG_DA_CTRL_9 QP_DIG_DA_CTRL_9; // A024
    qp_dig_csr_REG_QP_DIG_DA_CTRL_10 QP_DIG_DA_CTRL_10; // A028
    qp_dig_csr_REG_QP_DIG_DA_CTRL_11 QP_DIG_DA_CTRL_11; // A02C
    qp_dig_csr_REG_QP_DIG_DA_CTRL_12 QP_DIG_DA_CTRL_12; // A030
    qp_dig_csr_REG_QP_DIG_DA_CTRL_13 QP_DIG_DA_CTRL_13; // A034
    qp_dig_csr_REG_QP_DIG_DA_CTRL_14 QP_DIG_DA_CTRL_14; // A038
    qp_dig_csr_REG_QP_DIG_DA_CTRL_15 QP_DIG_DA_CTRL_15; // A03C
    qp_dig_csr_REG_QP_DIG_DA_CTRL_16 QP_DIG_DA_CTRL_16; // A040
    qp_dig_csr_REG_QP_DIG_DA_CTRL_17 QP_DIG_DA_CTRL_17; // A044
    qp_dig_csr_REG_QP_DIG_DA_CTRL_18 QP_DIG_DA_CTRL_18; // A048
    qp_dig_csr_REG_QP_DIG_DA_CTRL_19 QP_DIG_DA_CTRL_19; // A04C
    UINT32                          rsv_A050[172];    // A050..A2FC
    qp_dig_csr_REG_QP_CK_RST_CTRL_0 QP_CK_RST_CTRL_0; // A300
    qp_dig_csr_REG_QP_CK_RST_CTRL_1 QP_CK_RST_CTRL_1; // A304
    qp_dig_csr_REG_QP_CK_RST_CTRL_2 QP_CK_RST_CTRL_2; // A308
    qp_dig_csr_REG_QP_CK_RST_CTRL_3 QP_CK_RST_CTRL_3; // A30C
    qp_dig_csr_REG_QP_CK_RST_CTRL_4 QP_CK_RST_CTRL_4; // A310
    qp_dig_csr_REG_QP_SYS_CTRL_0    QP_SYS_CTRL_0;    // A314
    UINT32                          rsv_A318;         // A318
    qp_dig_csr_REG_QP_CK_RST_CTRL_5 QP_CK_RST_CTRL_5; // A31C
    qp_dig_csr_REG_QP_CK_RST_CTRL_6 QP_CK_RST_CTRL_6; // A320
    qp_dig_csr_REG_QP_DIG_MODE_CTRL_0 QP_DIG_MODE_CTRL_0; // A324
    qp_dig_csr_REG_QP_DIG_CK_CTRL_0 QP_DIG_CK_CTRL_0; // A328
    qp_dig_csr_REG_QP_DIG_AFIFO_CTRL_0 QP_DIG_AFIFO_CTRL_0; // A32C
    qp_dig_csr_REG_QP_DIG_MODE_CTRL_1 QP_DIG_MODE_CTRL_1; // A330
    qp_dig_csr_REG_QP_DIG_AFIFO_CTRL_1 QP_DIG_AFIFO_CTRL_1; // A334
    qp_dig_csr_REG_QP_DIG_AFIFO_CTRL_2 QP_DIG_AFIFO_CTRL_2; // A338
    qp_dig_csr_REG_QP_DIG_EFUSE_CTRL QP_DIG_EFUSE_CTRL; // A33C
    qp_dig_csr_REG_QP_CK_RST_CTRL_7 QP_CK_RST_CTRL_7; // A340
    qp_dig_csr_REG_QP_CK_RST_CTRL_8 QP_CK_RST_CTRL_8; // A344
}qp_dig_csr_REGS, *Pqp_dig_csr_REGS;

// ---------- qp_dig_csr Enum Definitions      ----------
// ---------- qp_dig_csr C Macro Definitions   ----------
extern Pqp_dig_csr_REGS g_qp_dig_csr_BASE;

#define qp_dig_csr_BASE                                        (g_qp_dig_csr_BASE)
#endif

#define _qp_dig_csr_QP_DIG_DA_CTRL_0		0xA000
#define _qp_dig_csr_QP_DIG_DA_CTRL_1		0xA004
#define _qp_dig_csr_QP_DIG_DA_CTRL_2		0xA008
#define _qp_dig_csr_QP_DIG_DA_CTRL_3		0xA00C
#define _qp_dig_csr_QP_DIG_DA_CTRL_4		0xA010
#define _qp_dig_csr_QP_DIG_DA_CTRL_5		0xA014
#define _qp_dig_csr_QP_DIG_DA_CTRL_6		0xA018
#define _qp_dig_csr_QP_DIG_DA_CTRL_7		0xA01C
#define _qp_dig_csr_QP_DIG_DA_CTRL_8		0xA020
#define _qp_dig_csr_QP_DIG_DA_CTRL_9		0xA024
#define _qp_dig_csr_QP_DIG_DA_CTRL_10		0xA028
#define _qp_dig_csr_QP_DIG_DA_CTRL_11		0xA02C
#define _qp_dig_csr_QP_DIG_DA_CTRL_12		0xA030
#define _qp_dig_csr_QP_DIG_DA_CTRL_13		0xA034
#define _qp_dig_csr_QP_DIG_DA_CTRL_14		0xA038
#define _qp_dig_csr_QP_DIG_DA_CTRL_15		0xA03C
#define _qp_dig_csr_QP_DIG_DA_CTRL_16		0xA040
#define _qp_dig_csr_QP_DIG_DA_CTRL_17		0xA044
#define _qp_dig_csr_QP_DIG_DA_CTRL_18		0xA048
#define _qp_dig_csr_QP_DIG_DA_CTRL_19		0xA04C
#define _qp_dig_csr_QP_CK_RST_CTRL_0		0xA300
#define _qp_dig_csr_QP_CK_RST_CTRL_1		0xA304
#define _qp_dig_csr_QP_CK_RST_CTRL_2		0xA308
#define _qp_dig_csr_QP_CK_RST_CTRL_3		0xA30C
#define _qp_dig_csr_QP_CK_RST_CTRL_4		0xA310
#define _qp_dig_csr_QP_SYS_CTRL_0		0xA314
#define _qp_dig_csr_QP_CK_RST_CTRL_5		0xA31C
#define _qp_dig_csr_QP_CK_RST_CTRL_6		0xA320
#define _qp_dig_csr_QP_DIG_MODE_CTRL_0		0xA324
#define _qp_dig_csr_QP_DIG_CK_CTRL_0		0xA328
#define _qp_dig_csr_QP_DIG_AFIFO_CTRL_0		0xA32C
#define _qp_dig_csr_QP_DIG_MODE_CTRL_1		0xA330
#define _qp_dig_csr_QP_DIG_AFIFO_CTRL_1		0xA334
#define _qp_dig_csr_QP_DIG_AFIFO_CTRL_2		0xA338
#define _qp_dig_csr_QP_DIG_EFUSE_CTRL		0xA33C
#define _qp_dig_csr_QP_CK_RST_CTRL_7		0xA340
#define _qp_dig_csr_QP_CK_RST_CTRL_8		0xA344

#endif


#define QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IC                      REG_FLD(4, 28)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BR                      REG_FLD(3, 24)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IR                      REG_FLD(4, 20)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BP                      REG_FLD(4, 16)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_LOAD_EN                 REG_FLD(1, 15)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_FBKSEL                  REG_FLD(2, 12)
#define QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CKDET_EN                  REG_FLD(1, 8)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_SCAN_MODE                   REG_FLD(1, 7)
#define QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CLKRX_EN                  REG_FLD(1, 6)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_XTAL_EXT_EN                 REG_FLD(2, 4)
#define QP_DIG_DA_CTRL_0_FLD_RG_PCIE_DEVICE                    REG_FLD(1, 2)
#define QP_DIG_DA_CTRL_0_FLD_RG_PCIE_REFCK_DIV4                REG_FLD(1, 1)
#define QP_DIG_DA_CTRL_0_FLD_RG_QP_RX_IMPCALIB_EN              REG_FLD(1, 0)

#define QP_DIG_DA_CTRL_1_FLD_RG_QP_CDR_BPB                     REG_FLD(3, 28)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_IMPCALIB_EN              REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_DEM                      REG_FLD(2, 13)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_RXDET_EN                    REG_FLD(1, 12)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_REFCKDIV                REG_FLD(1, 10)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_PREDIV                  REG_FLD(2, 8)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_BC                      REG_FLD(2, 4)
#define QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_DIVEN                   REG_FLD(3, 0)

#define QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP1                   REG_FLD(2, 30)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP2                   REG_FLD(2, 28)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_LFPS_PWD                    REG_FLD(1, 26)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_PWD                  REG_FLD(1, 25)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_MODE                 REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_TCADJ                   REG_FLD(6, 16)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_FBDIV                   REG_FLD(7, 8)
#define QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_BPA                     REG_FLD(2, 0)

#define QP_DIG_DA_CTRL_3_FLD_RG_QP_SYSPLL_FBDIV_CHG            REG_FLD(1, 27)
#define QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CLKTX_EN                  REG_FLD(1, 26)
#define QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_EN                 REG_FLD(1, 25)
#define QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_RSTB               REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_OFST               REG_FLD(4, 20)
#define QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_HZ                       REG_FLD(1, 16)
#define QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P3_ENTRY                 REG_FLD(1, 3)
#define QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P1_ENTRY                 REG_FLD(1, 2)
#define QP_DIG_DA_CTRL_3_FLD_RG_QP_LFPS_DEGLITCH               REG_FLD(2, 0)

#define QP_DIG_DA_CTRL_4_FLD_RG_QP_PLL_FBKDIV                  REG_FLD(9, 0)

#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PI0                  REG_FLD(1, 31)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_PWR_ON        REG_FLD(1, 30)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_ISO_EN        REG_FLD(1, 29)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PWD                  REG_FLD(1, 28)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_AUTOK_VCO            REG_FLD(1, 27)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_LCK2REF              REG_FLD(1, 26)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_CMPWD                 REG_FLD(1, 25)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_AFE_PWD               REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DATA_EN               REG_FLD(1, 23)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_EIDLE_LP_EN           REG_FLD(1, 22)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_SER_EN                REG_FLD(1, 21)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_EN                REG_FLD(1, 20)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_EN            REG_FLD(1, 19)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_OFFSET        REG_FLD(1, 18)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_PI_CAL_EN             REG_FLD(1, 17)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DRV_EN                REG_FLD(1, 16)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS                  REG_FLD(1, 15)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS_EN               REG_FLD(1, 14)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_SAOSC_EN              REG_FLD(1, 13)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIAS_PWD                 REG_FLD(1, 12)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIASIMR_PWD              REG_FLD(1, 11)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BG_LPF_EN                REG_FLD(1, 10)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_PWD             REG_FLD(1, 9)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_XTAL_RX_PWD              REG_FLD(1, 8)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_PWD               REG_FLD(1, 7)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_PWD                  REG_FLD(1, 6)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_AUTOK_VCO            REG_FLD(1, 5)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_SSC_EN               REG_FLD(1, 4)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_LPF_EN          REG_FLD(1, 3)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_BAND                 REG_FLD(1, 2)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BAND                 REG_FLD(1, 1)
#define QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_LEQOS_EN              REG_FLD(1, 0)

#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IEXT_INTR_CTRL           REG_FLD(1, 26)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_IMP_SEL               REG_FLD(1, 25)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_IMP_SEL               REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_EN                 REG_FLD(1, 23)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_RST                REG_FLD(1, 22)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_SAOSC_RST             REG_FLD(1, 21)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_CDR_STABLE            REG_FLD(1, 20)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_KVSEL                REG_FLD(1, 19)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BR                   REG_FLD(1, 18)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BC                   REG_FLD(1, 17)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIC                  REG_FLD(1, 16)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIR                  REG_FLD(1, 15)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_EIDLE_CM              REG_FLD(1, 14)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI_EN              REG_FLD(1, 13)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI                 REG_FLD(1, 12)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_6DB                 REG_FLD(1, 11)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_6DB                 REG_FLD(1, 10)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_3P5DB               REG_FLD(1, 9)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_3P5DB               REG_FLD(1, 8)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_0DB                 REG_FLD(1, 7)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_PREDIV            REG_FLD(1, 6)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_RESERVE           REG_FLD(1, 5)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_FBDIV             REG_FLD(1, 4)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_PRD              REG_FLD(1, 3)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA            REG_FLD(1, 2)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA1           REG_FLD(1, 1)
#define QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_PI90                 REG_FLD(1, 0)

#define QP_DIG_DA_CTRL_7_FLD_RG_QP_BG_LPF_EN                   REG_FLD(1, 31)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_PWD                REG_FLD(1, 30)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_XTAL_RX_PWD                 REG_FLD(1, 29)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_SYSPLL_PWD                  REG_FLD(1, 28)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_PWD                     REG_FLD(1, 27)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_AUTOK_VCO               REG_FLD(1, 26)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_SSC_EN                  REG_FLD(1, 25)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_LPF_EN             REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_CDR_BAND                    REG_FLD(7, 16)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_RX_LEQOS_EN                 REG_FLD(1, 12)
#define QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BAND                    REG_FLD(11, 0)

#define QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_PWR_ON           REG_FLD(1, 24)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_ISO_EN           REG_FLD(1, 23)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_PWD                     REG_FLD(1, 22)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_AUTOK_VCO               REG_FLD(1, 21)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_LCK2REF                 REG_FLD(1, 20)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_CMPWD                    REG_FLD(1, 19)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_AFE_PWD                  REG_FLD(1, 18)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DATA_EN                  REG_FLD(1, 17)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_EIDLE_LP_EN              REG_FLD(1, 16)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_SER_EN                   REG_FLD(1, 15)
#define QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_EN                 REG_FLD(1, 14)
#define QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_CAL_EN             REG_FLD(1, 13)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_SIGDET_CAL_OFFSET           REG_FLD(5, 8)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_PI_CAL_EN                REG_FLD(1, 6)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DRV_EN                   REG_FLD(1, 5)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS                     REG_FLD(1, 4)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS_EN                  REG_FLD(1, 3)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_SAOSC_EN                 REG_FLD(1, 2)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_BIAS_PWD                    REG_FLD(1, 1)
#define QP_DIG_DA_CTRL_8_FLD_RG_QP_BIASIMR_PWD                 REG_FLD(1, 0)

#define QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI90                    REG_FLD(7, 8)
#define QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI0                     REG_FLD(7, 0)

#define QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA              REG_FLD(16, 16)
#define QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA1             REG_FLD(16, 0)

#define QP_DIG_DA_CTRL_11_FLD_RG_QP_SYSPLL_FBDIV               REG_FLD(31, 0)

#define QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_3P5DB                 REG_FLD(6, 24)
#define QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_0DB                   REG_FLD(6, 16)

#define QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI_EN                REG_FLD(1, 28)
#define QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI                   REG_FLD(3, 24)
#define QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_6DB                   REG_FLD(6, 16)
#define QP_DIG_DA_CTRL_13_FLD_RG_QP_IDRV_6DB                   REG_FLD(6, 8)
#define QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_3P5DB                 REG_FLD(6, 0)

#define QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_IMP_SEL                 REG_FLD(5, 24)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_IMP_SEL                 REG_FLD(5, 16)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_EN                   REG_FLD(1, 8)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_RST                  REG_FLD(1, 7)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_SAOSC_RST               REG_FLD(1, 6)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_CDR_STABLE              REG_FLD(1, 5)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_CDR_BIR                    REG_FLD(1, 4)
#define QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_EIDLE_CM                REG_FLD(4, 0)

#define QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD1                REG_FLD(5, 24)
#define QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD0                REG_FLD(5, 16)
#define QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTR                 REG_FLD(5, 8)

#define QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTD0                 REG_FLD(5, 24)
#define QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTR                  REG_FLD(5, 16)
#define QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD1                REG_FLD(4, 8)
#define QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD0                REG_FLD(4, 4)
#define QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTR                 REG_FLD(4, 0)

#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD1              REG_FLD(1, 21)
#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD0              REG_FLD(1, 20)
#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTR               REG_FLD(1, 19)
#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD1                 REG_FLD(3, 16)
#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD0                 REG_FLD(3, 12)
#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTR                  REG_FLD(3, 8)
#define QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BCLTD1                 REG_FLD(5, 0)

#define QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPB              REG_FLD(1, 1)
#define QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPA              REG_FLD(1, 0)

#define QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPB                    REG_FLD(2, 4)
#define QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPA                    REG_FLD(4, 0)

#define QP_CK_RST_CTRL_0_FLD_rg_rx_data_path_sel               REG_FLD(1, 31)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_rx_ck_mode_sel REG_FLD(1, 30)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_rx_ck_mode_sel REG_FLD(1, 29)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_rx_ck_mode_sel REG_FLD(1, 28)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_rx_ck_mode_sel REG_FLD(1, 27)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_rx_ck_mode_sel REG_FLD(1, 26)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_tx_ck_mode_sel REG_FLD(1, 25)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_tx_ck_mode_sel REG_FLD(1, 24)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_tx_ck_mode_sel REG_FLD(1, 23)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_tx_ck_mode_sel REG_FLD(1, 22)
#define QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_tx_ck_mode_sel REG_FLD(1, 21)
#define QP_CK_RST_CTRL_0_FLD_rg_baser_rx_macphy_clk_inv        REG_FLD(1, 20)
#define QP_CK_RST_CTRL_0_FLD_rg_baser_tx_macphy_clk_inv        REG_FLD(1, 19)
#define QP_CK_RST_CTRL_0_FLD_rg_phy_ref_clk_inv                REG_FLD(1, 18)
#define QP_CK_RST_CTRL_0_FLD_rg_baser_rx_clk_inv               REG_FLD(1, 17)
#define QP_CK_RST_CTRL_0_FLD_rg_baser_tx_clk_inv               REG_FLD(1, 16)
#define QP_CK_RST_CTRL_0_FLD_rg_hsgmii_rx_clk_inv              REG_FLD(1, 15)
#define QP_CK_RST_CTRL_0_FLD_rg_hsgmii_tx_clk_inv              REG_FLD(1, 14)
#define QP_CK_RST_CTRL_0_FLD_rg_qsgmii_rx_clk_inv              REG_FLD(1, 13)
#define QP_CK_RST_CTRL_0_FLD_rg_qsgmii_tx_clk_inv              REG_FLD(1, 12)
#define QP_CK_RST_CTRL_0_FLD_rg_sgmii_rx_clk_inv               REG_FLD(1, 11)
#define QP_CK_RST_CTRL_0_FLD_rg_sgmii_tx_clk_inv               REG_FLD(1, 10)
#define QP_CK_RST_CTRL_0_FLD_rg_ck_mode_force_sel              REG_FLD(1, 9)
#define QP_CK_RST_CTRL_0_FLD_rg_force_phy_ref_clk_en           REG_FLD(1, 8)
#define QP_CK_RST_CTRL_0_FLD_rg_force_baser_rx_clk_en          REG_FLD(1, 7)
#define QP_CK_RST_CTRL_0_FLD_rg_force_baser_tx_clk_en          REG_FLD(1, 6)
#define QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_rx_clk_en         REG_FLD(1, 5)
#define QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_tx_clk_en         REG_FLD(1, 4)
#define QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_rx_clk_en         REG_FLD(1, 3)
#define QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_tx_clk_en         REG_FLD(1, 2)
#define QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_rx_clk_en          REG_FLD(1, 1)
#define QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_tx_clk_en          REG_FLD(1, 0)

#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_2        REG_FLD(1, 29)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_1        REG_FLD(1, 28)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_0        REG_FLD(1, 27)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_1              REG_FLD(1, 26)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_0              REG_FLD(1, 25)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_1         REG_FLD(1, 24)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_0         REG_FLD(1, 23)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_1              REG_FLD(1, 22)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_0              REG_FLD(1, 21)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_2        REG_FLD(1, 20)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_1        REG_FLD(1, 19)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_0        REG_FLD(1, 18)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_1              REG_FLD(1, 17)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_0              REG_FLD(1, 16)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_1         REG_FLD(1, 15)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_0         REG_FLD(1, 14)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_1              REG_FLD(1, 13)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_0              REG_FLD(1, 12)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_norm_ck_en        REG_FLD(1, 10)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_short_ck_en   REG_FLD(1, 9)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_en       REG_FLD(1, 8)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_en             REG_FLD(1, 7)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_en        REG_FLD(1, 6)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_en             REG_FLD(1, 5)
#define QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_en       REG_FLD(1, 4)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_en             REG_FLD(1, 3)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_en        REG_FLD(1, 2)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_en             REG_FLD(1, 1)
#define QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_norm_ck_en    REG_FLD(1, 0)

#define QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_rx_ck_mode   REG_FLD(2, 20)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_rx_ck_mode   REG_FLD(2, 18)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_rx_ck_mode   REG_FLD(2, 16)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_rx_ck_mode   REG_FLD(2, 14)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_rx_ck_mode    REG_FLD(2, 12)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_tx_ck_mode   REG_FLD(2, 10)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_tx_ck_mode   REG_FLD(2, 8)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_tx_ck_mode   REG_FLD(2, 6)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_tx_ck_mode   REG_FLD(2, 4)
#define QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_tx_ck_mode    REG_FLD(2, 2)
#define QP_CK_RST_CTRL_2_FLD_rg_ck_mode_force                  REG_FLD(2, 0)

#define QP_CK_RST_CTRL_3_FLD_rg_ns_ck_div_sel                  REG_FLD(1, 25)
#define QP_CK_RST_CTRL_3_FLD_rg_us_ck_div_sel                  REG_FLD(1, 24)
#define QP_CK_RST_CTRL_3_FLD_rg_pma_tx_osr_short_ck_inv        REG_FLD(1, 23)
#define QP_CK_RST_CTRL_3_FLD_rg_ns_clk_z_inv                   REG_FLD(1, 22)
#define QP_CK_RST_CTRL_3_FLD_rg_pll_dig_ref_ck_inv             REG_FLD(1, 21)
#define QP_CK_RST_CTRL_3_FLD_rg_pll_dig_fbk_ck_inv             REG_FLD(1, 20)
#define QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fbk_ck_inv              REG_FLD(1, 19)
#define QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fll_dig_clk_inv         REG_FLD(1, 18)
#define QP_CK_RST_CTRL_3_FLD_rg_tdc_sync_ck_inv                REG_FLD(1, 17)
#define QP_CK_RST_CTRL_3_FLD_rg_tdc_ftck_inv                   REG_FLD(1, 16)
#define QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fbk_ck_en         REG_FLD(1, 4)
#define QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fll_dig_clk_en    REG_FLD(1, 3)
#define QP_CK_RST_CTRL_3_FLD_rg_force_tdc_sync_ck_en           REG_FLD(1, 2)
#define QP_CK_RST_CTRL_3_FLD_rg_force_tdc_ftck_en              REG_FLD(1, 1)
#define QP_CK_RST_CTRL_3_FLD_rg_force_pma_rx_eq_ck_en          REG_FLD(1, 0)

#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_ref_ck_reset_n   REG_FLD(1, 25)
#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_fbk_ck_reset_n   REG_FLD(1, 24)
#define QP_CK_RST_CTRL_4_FLD_rg_ssusb_eq_rx250m_ck_scan_reset_n REG_FLD(1, 23)
#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_rx_lfps_reset_n          REG_FLD(1, 22)
#define QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_norm_ck_reset_n     REG_FLD(1, 21)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_rx_bist_err_cnt_reset_n    REG_FLD(1, 20)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_rd_reset_n  REG_FLD(1, 19)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_wr_reset_n  REG_FLD(1, 18)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_rd_reset_n  REG_FLD(1, 17)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_wr_reset_n  REG_FLD(1, 16)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_rd_reset_n  REG_FLD(1, 15)
#define QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_wr_reset_n  REG_FLD(1, 14)
#define QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_rx_ck_reset_n        REG_FLD(1, 13)
#define QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_tx_ck_reset_n        REG_FLD(1, 12)
#define QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_div2_ck_reset_n   REG_FLD(1, 11)
#define QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_div2_ck_reset_n   REG_FLD(1, 10)
#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fbk_ck_reset_n    REG_FLD(1, 9)
#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n REG_FLD(1, 8)
#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_sync_ck_reset_n      REG_FLD(1, 7)
#define QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_ftck_reset_n         REG_FLD(1, 6)
#define QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_ck_reset_n        REG_FLD(1, 5)
#define QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_ck_reset_n        REG_FLD(1, 4)
#define QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_short_ck_reset_n    REG_FLD(1, 3)
#define QP_CK_RST_CTRL_4_FLD_rg_us_ck_reset_n                  REG_FLD(1, 2)
#define QP_CK_RST_CTRL_4_FLD_rg_ns_ck_reset_n                  REG_FLD(1, 1)
#define QP_CK_RST_CTRL_4_FLD_rg_pma_rx_eq_ck_reset_n           REG_FLD(1, 0)

#define QP_SYS_CTRL_0_FLD_rg_force_l2ref_done_sel              REG_FLD(1, 6)
#define QP_SYS_CTRL_0_FLD_rg_force_l2ref_done                  REG_FLD(1, 5)
#define QP_SYS_CTRL_0_FLD_rg_l2ref_ne_cnt                      REG_FLD(5, 0)

#define QP_CK_RST_CTRL_5_FLD_rg_multi_phy_usb_en               REG_FLD(1, 31)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_3         REG_FLD(1, 15)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_2         REG_FLD(1, 14)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_1         REG_FLD(1, 13)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_0         REG_FLD(1, 12)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_3           REG_FLD(1, 11)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_2           REG_FLD(1, 10)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_1           REG_FLD(1, 9)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_0           REG_FLD(1, 8)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_3     REG_FLD(1, 3)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_2     REG_FLD(1, 2)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_1     REG_FLD(1, 1)
#define QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_0     REG_FLD(1, 0)

#define QP_CK_RST_CTRL_6_FLD_rg_pll_dig_ref_ck_en_force_sel    REG_FLD(1, 17)
#define QP_CK_RST_CTRL_6_FLD_rg_pll_dig_fbk_ck_en_force_sel    REG_FLD(1, 16)
#define QP_CK_RST_CTRL_6_FLD_rg_pma_tx_osr_short_ck_en_force_sel REG_FLD(1, 15)
#define QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fbk_ck_en_force_sel     REG_FLD(1, 14)
#define QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fll_dig_ck_en_force_sel REG_FLD(1, 13)
#define QP_CK_RST_CTRL_6_FLD_rg_tdc_sync_ck_en_force_sel       REG_FLD(1, 12)
#define QP_CK_RST_CTRL_6_FLD_rg_tdc_ftck_ck_en_force_sel       REG_FLD(1, 11)
#define QP_CK_RST_CTRL_6_FLD_rg_phy_ref_ck_en_force_sel        REG_FLD(1, 10)
#define QP_CK_RST_CTRL_6_FLD_rg_baser_rx_ck_en_force_sel       REG_FLD(1, 7)
#define QP_CK_RST_CTRL_6_FLD_rg_baser_tx_ck_en_force_sel       REG_FLD(1, 6)
#define QP_CK_RST_CTRL_6_FLD_rg_hsgmii_rx_ck_en_force_sel      REG_FLD(1, 5)
#define QP_CK_RST_CTRL_6_FLD_rg_hsgmii_tx_ck_en_force_sel      REG_FLD(1, 4)
#define QP_CK_RST_CTRL_6_FLD_rg_qsgmii_rx_ck_en_force_sel      REG_FLD(1, 3)
#define QP_CK_RST_CTRL_6_FLD_rg_qsgmii_tx_ck_en_force_sel      REG_FLD(1, 2)
#define QP_CK_RST_CTRL_6_FLD_rg_sgmii_rx_ck_en_force_sel       REG_FLD(1, 1)
#define QP_CK_RST_CTRL_6_FLD_rg_sgmii_tx_ck_en_force_sel       REG_FLD(1, 0)

#define QP_DIG_MODE_CTRL_0_FLD_rg_rx_er_phy_mode               REG_FLD(1, 24)
#define QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii3_mode                 REG_FLD(2, 12)
#define QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii2_mode                 REG_FLD(2, 10)
#define QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii1_mode                 REG_FLD(2, 8)
#define QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii0_mode                 REG_FLD(2, 6)
#define QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_mode                   REG_FLD(2, 4)
#define QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii_an_en                 REG_FLD(1, 1)
#define QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_an_en                  REG_FLD(1, 0)

#define QP_DIG_CK_CTRL_0_FLD_rg_ck_gen_bypass_an               REG_FLD(1, 26)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_qsgmii_ck_reset_n       REG_FLD(1, 25)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_qsgmii_ck_reset_n  REG_FLD(1, 24)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_qsgmii_ck_reset_n       REG_FLD(1, 23)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_eq_qsgmii_ck_reset_n    REG_FLD(1, 22)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_ck_reset_n         REG_FLD(1, 21)
#define QP_DIG_CK_CTRL_0_FLD_rg_eq_rx_reset_n                  REG_FLD(1, 20)
#define QP_DIG_CK_CTRL_0_FLD_rg_hsgmii_fifo_rx_reset_n         REG_FLD(1, 19)
#define QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rxpma_reset_n  REG_FLD(1, 18)
#define QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_tx_reset_n     REG_FLD(1, 17)
#define QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rx_reset_n     REG_FLD(1, 16)
#define QP_DIG_CK_CTRL_0_FLD_rg_100fx_tx_ck_reset_n            REG_FLD(1, 9)
#define QP_DIG_CK_CTRL_0_FLD_rg_100fx_rx_ck_reset_n            REG_FLD(1, 8)
#define QP_DIG_CK_CTRL_0_FLD_rg_o_mac_tx_div_ck_reset_n        REG_FLD(1, 7)
#define QP_DIG_CK_CTRL_0_FLD_rg_pcs_tx_ck_reset_n              REG_FLD(1, 6)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_div2_ck_reset_n         REG_FLD(1, 5)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_ck_reset_n              REG_FLD(1, 4)
#define QP_DIG_CK_CTRL_0_FLD_rg_o_mac_rx_div_ck_reset_n        REG_FLD(1, 3)
#define QP_DIG_CK_CTRL_0_FLD_rg_pcs_rx_ck_reset_n              REG_FLD(1, 2)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_div2_ck_reset_n         REG_FLD(1, 1)
#define QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_ck_reset_n              REG_FLD(1, 0)

#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_or REG_FLD(1, 19)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_or REG_FLD(1, 18)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_and REG_FLD(1, 17)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_and REG_FLD(1, 16)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_aempty_cnt_clear REG_FLD(1, 15)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_empty_cnt_clear REG_FLD(1, 14)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_afull_cnt_clear REG_FLD(1, 13)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_full_cnt_clear REG_FLD(1, 12)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_w_threshold REG_FLD(5, 7)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_r_threshold REG_FLD(5, 2)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_rclear    REG_FLD(1, 1)
#define QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_wclear    REG_FLD(1, 0)

#define QP_DIG_MODE_CTRL_1_FLD_rg_qsgmii_test_mode             REG_FLD(1, 12)
#define QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_ip_sw_rst              REG_FLD(1, 11)
#define QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_hsgmii_sel             REG_FLD(1, 10)
#define QP_DIG_MODE_CTRL_1_FLD_rg_sgmii_mode_force             REG_FLD(2, 8)
#define QP_DIG_MODE_CTRL_1_FLD_RG_XTAL_SEL                     REG_FLD(1, 5)
#define QP_DIG_MODE_CTRL_1_FLD_rg_xtal_sel_20m_25m             REG_FLD(1, 4)
#define QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_SPEED                   REG_FLD(2, 2)
#define QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_MODE                    REG_FLD(2, 0)

#define QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_w_threshold REG_FLD(5, 24)
#define QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_r_threshold REG_FLD(5, 16)
#define QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_rclear REG_FLD(1, 5)
#define QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_wclear REG_FLD(1, 4)
#define QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_en            REG_FLD(1, 1)
#define QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_dis           REG_FLD(1, 0)

#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_r_threshold REG_FLD(5, 24)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_w_threshold REG_FLD(5, 16)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear REG_FLD(1, 6)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear REG_FLD(1, 5)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear REG_FLD(1, 4)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_full_cnt_clear REG_FLD(1, 3)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_rclear REG_FLD(1, 2)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_wclear REG_FLD(1, 1)
#define QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_r2t_lpbk_en       REG_FLD(1, 0)

#define QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_auto_load_valid    REG_FLD(1, 24)
#define QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_iext_intr_ctrl     REG_FLD(6, 16)
#define QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_tx_imp_sel         REG_FLD(5, 8)
#define QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_rx_imp_sel         REG_FLD(5, 0)

#define QP_CK_RST_CTRL_7_FLD_rg_pma_rx_eq_usb_mode_sel         REG_FLD(1, 29)
#define QP_CK_RST_CTRL_7_FLD_rg_pma_tx_norm_usb_mode_sel       REG_FLD(1, 28)
#define QP_CK_RST_CTRL_7_FLD_rg_pma_tx_osr_norm_usb_mode_sel   REG_FLD(1, 27)
#define QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb2p5_en            REG_FLD(1, 26)
#define QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb5_en              REG_FLD(1, 25)
#define QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb_mode_en          REG_FLD(1, 24)
#define QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_ref_ck_en        REG_FLD(1, 21)
#define QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_fbk_ck_en        REG_FLD(1, 20)
#define QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_rx_clk_en         REG_FLD(1, 19)
#define QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_tx_clk_en         REG_FLD(1, 18)
#define QP_CK_RST_CTRL_7_FLD_rg_force_usb5_rx_clk_en           REG_FLD(1, 17)
#define QP_CK_RST_CTRL_7_FLD_rg_force_usb5_tx_clk_en           REG_FLD(1, 16)
#define QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_rx_ck_en_force_sel  REG_FLD(1, 11)
#define QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_tx_ck_en_force_sel  REG_FLD(1, 10)
#define QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_rx_ck_en_force_sel    REG_FLD(1, 9)
#define QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_tx_ck_en_force_sel    REG_FLD(1, 8)
#define QP_CK_RST_CTRL_7_FLD_rg_usb2p5_rx_clk_inv              REG_FLD(1, 3)
#define QP_CK_RST_CTRL_7_FLD_rg_usb2p5_tx_clk_inv              REG_FLD(1, 2)
#define QP_CK_RST_CTRL_7_FLD_rg_usb5_rx_clk_inv                REG_FLD(1, 1)
#define QP_CK_RST_CTRL_7_FLD_rg_usb5_tx_clk_inv                REG_FLD(1, 0)

#define QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n         REG_FLD(1, 9)
#define QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n_sel     REG_FLD(1, 8)
#define QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable               REG_FLD(1, 6)
#define QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable_sel           REG_FLD(1, 5)
#define QP_CK_RST_CTRL_8_FLD_rg_cdr_stable_inv                 REG_FLD(1, 4)
#define QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable               REG_FLD(1, 2)
#define QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable_sel           REG_FLD(1, 1)
#define QP_CK_RST_CTRL_8_FLD_rg_pll_stable_inv                 REG_FLD(1, 0)

#define QP_DIG_DA_CTRL_0_GET_RG_QP_PLL_IC(reg32)               REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IC, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_PLL_BR(reg32)               REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BR, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_PLL_IR(reg32)               REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IR, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_PLL_BP(reg32)               REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BP, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_PLL_LOAD_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_LOAD_EN, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_PLL_FBKSEL(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_FBKSEL, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_PCIE_CKDET_EN(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CKDET_EN, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_SCAN_MODE(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_SCAN_MODE, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_PCIE_CLKRX_EN(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CLKRX_EN, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_XTAL_EXT_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_XTAL_EXT_EN, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_PCIE_DEVICE(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_DEVICE, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_PCIE_REFCK_DIV4(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_REFCK_DIV4, (reg32))
#define QP_DIG_DA_CTRL_0_GET_RG_QP_RX_IMPCALIB_EN(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_0_FLD_RG_QP_RX_IMPCALIB_EN, (reg32))

#define QP_DIG_DA_CTRL_1_GET_RG_QP_CDR_BPB(reg32)              REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_CDR_BPB, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_TX_IMPCALIB_EN(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_IMPCALIB_EN, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_TX_DEM(reg32)               REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_DEM, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_RXDET_EN(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_RXDET_EN, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_PLL_REFCKDIV(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_REFCKDIV, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_PLL_PREDIV(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_PREDIV, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_PLL_BC(reg32)               REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_BC, (reg32))
#define QP_DIG_DA_CTRL_1_GET_RG_QP_PLL_DIVEN(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_DIVEN, (reg32))

#define QP_DIG_DA_CTRL_2_GET_RG_QP_EQ_RSTEP1(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP1, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_EQ_RSTEP2(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP2, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_LFPS_PWD(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_LFPS_PWD, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_CDR_PI_PWD(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_PWD, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_CDR_PI_MODE(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_MODE, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_CDR_TCADJ(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_TCADJ, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_CDR_FBDIV(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_FBDIV, (reg32))
#define QP_DIG_DA_CTRL_2_GET_RG_QP_CDR_BPA(reg32)              REG_FLD_GET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_BPA, (reg32))

#define QP_DIG_DA_CTRL_3_GET_RG_QP_SYSPLL_FBDIV_CHG(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_QP_SYSPLL_FBDIV_CHG, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_PCIE_CLKTX_EN(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CLKTX_EN, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_PCIE_CRSDET_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_EN, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_PCIE_CRSDET_RSTB(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_RSTB, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_PCIE_CRSDET_OFST(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_OFST, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_QP_RX_HZ(reg32)                REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_HZ, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_QP_RX_P3_ENTRY(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P3_ENTRY, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_QP_RX_P1_ENTRY(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P1_ENTRY, (reg32))
#define QP_DIG_DA_CTRL_3_GET_RG_QP_LFPS_DEGLITCH(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_3_FLD_RG_QP_LFPS_DEGLITCH, (reg32))

#define QP_DIG_DA_CTRL_4_GET_RG_QP_PLL_FBKDIV(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_4_FLD_RG_QP_PLL_FBKDIV, (reg32))

#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_CDR_PI0(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PI0, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_SYSPLL_SDM_PWR_ON(reg32) REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_PWR_ON, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_SYSPLL_SDM_ISO_EN(reg32) REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_ISO_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_CDR_PWD(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_CDR_AUTOK_VCO(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_AUTOK_VCO, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_CDR_LCK2REF(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_LCK2REF, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_RX_CMPWD(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_CMPWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_RX_AFE_PWD(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_AFE_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_TX_DATA_EN(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DATA_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_TX_EIDLE_LP_EN(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_EIDLE_LP_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_TX_SER_EN(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_SER_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_SIGDET_EN(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_SIGDET_CAL_EN(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_SIGDET_CAL_OFFSET(reg32) REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_OFFSET, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_RX_PI_CAL_EN(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_PI_CAL_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_TX_DRV_EN(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DRV_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_TX_LFPS(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_TX_LFPS_EN(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_RX_SAOSC_EN(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_SAOSC_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_BIAS_PWD(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIAS_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_BIASIMR_PWD(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIASIMR_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_BG_LPF_EN(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BG_LPF_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_PLL_BIAS_PWD(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_XTAL_RX_PWD(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_XTAL_RX_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_SYSPLL_PWD(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_PLL_PWD(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_PWD, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_PLL_AUTOK_VCO(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_AUTOK_VCO, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_PLL_SSC_EN(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_SSC_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_PLL_BIAS_LPF_EN(reg32)   REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_LPF_EN, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_CDR_BAND(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_BAND, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_PLL_BAND(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BAND, (reg32))
#define QP_DIG_DA_CTRL_5_GET_RG_FORCE_RX_LEQOS_EN(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_LEQOS_EN, (reg32))

#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_IEXT_INTR_CTRL(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IEXT_INTR_CTRL, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_RX_IMP_SEL(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_IMP_SEL, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_TX_IMP_SEL(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_IMP_SEL, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_RX_EQ_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_EN, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_RX_EQ_RST(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_RST, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_RX_SAOSC_RST(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_SAOSC_RST, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_RX_CDR_STABLE(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_CDR_STABLE, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_CDR_KVSEL(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_KVSEL, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_CDR_BR(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BR, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_CDR_BC(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BC, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_CDR_BIC(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIC, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_CDR_BIR(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIR, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_TX_EIDLE_CM(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_EIDLE_CM, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_TX_BIASI_EN(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI_EN, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_TX_BIASI(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_IDEM_6DB(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_6DB, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_IDRV_6DB(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_6DB, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_IDEM_3P5DB(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_3P5DB, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_IDRV_3P5DB(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_3P5DB, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_IDRV_0DB(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_0DB, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_SYSPLL_PREDIV(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_PREDIV, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_SYSPLL_RESERVE(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_RESERVE, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_SYSPLL_FBDIV(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_FBDIV, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_PLL_SSC_PRD(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_PRD, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_PLL_SSC_DELTA(reg32)     REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_PLL_SSC_DELTA1(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA1, (reg32))
#define QP_DIG_DA_CTRL_6_GET_RG_FORCE_CDR_PI90(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_PI90, (reg32))

#define QP_DIG_DA_CTRL_7_GET_RG_QP_BG_LPF_EN(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_BG_LPF_EN, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_PLL_BIAS_PWD(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_PWD, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_XTAL_RX_PWD(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_XTAL_RX_PWD, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_SYSPLL_PWD(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_SYSPLL_PWD, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_PLL_PWD(reg32)              REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_PWD, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_PLL_AUTOK_VCO(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_AUTOK_VCO, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_PLL_SSC_EN(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_SSC_EN, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_PLL_BIAS_LPF_EN(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_LPF_EN, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_CDR_BAND(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_CDR_BAND, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_RX_LEQOS_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_RX_LEQOS_EN, (reg32))
#define QP_DIG_DA_CTRL_7_GET_RG_QP_PLL_BAND(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BAND, (reg32))

#define QP_DIG_DA_CTRL_8_GET_RG_QP_SYSPLL_SDM_PWR_ON(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_PWR_ON, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_SYSPLL_SDM_ISO_EN(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_ISO_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_CDR_PWD(reg32)              REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_PWD, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_CDR_AUTOK_VCO(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_AUTOK_VCO, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_CDR_LCK2REF(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_LCK2REF, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_RX_CMPWD(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_CMPWD, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_RX_AFE_PWD(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_AFE_PWD, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_TX_DATA_EN(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DATA_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_TX_EIDLE_LP_EN(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_EIDLE_LP_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_TX_SER_EN(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_SER_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_PCIE_SIGDET_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_PCIE_SIGDET_CAL_EN(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_CAL_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_SIGDET_CAL_OFFSET(reg32)    REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_SIGDET_CAL_OFFSET, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_RX_PI_CAL_EN(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_PI_CAL_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_TX_DRV_EN(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DRV_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_TX_LFPS(reg32)              REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_TX_LFPS_EN(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_RX_SAOSC_EN(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_SAOSC_EN, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_BIAS_PWD(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_BIAS_PWD, (reg32))
#define QP_DIG_DA_CTRL_8_GET_RG_QP_BIASIMR_PWD(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_8_FLD_RG_QP_BIASIMR_PWD, (reg32))

#define QP_DIG_DA_CTRL_9_GET_RG_QP_CDR_PI90(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI90, (reg32))
#define QP_DIG_DA_CTRL_9_GET_RG_QP_CDR_PI0(reg32)              REG_FLD_GET(QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI0, (reg32))

#define QP_DIG_DA_CTRL_10_GET_RG_QP_PLL_SSC_DELTA(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA, (reg32))
#define QP_DIG_DA_CTRL_10_GET_RG_QP_PLL_SSC_DELTA1(reg32)      REG_FLD_GET(QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA1, (reg32))

#define QP_DIG_DA_CTRL_11_GET_RG_QP_SYSPLL_FBDIV(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_11_FLD_RG_QP_SYSPLL_FBDIV, (reg32))

#define QP_DIG_DA_CTRL_12_GET_RG_QP_IDRV_3P5DB(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_3P5DB, (reg32))
#define QP_DIG_DA_CTRL_12_GET_RG_QP_IDRV_0DB(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_0DB, (reg32))

#define QP_DIG_DA_CTRL_13_GET_RG_QP_TX_BIASI_EN(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI_EN, (reg32))
#define QP_DIG_DA_CTRL_13_GET_RG_QP_TX_BIASI(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI, (reg32))
#define QP_DIG_DA_CTRL_13_GET_RG_QP_IDEM_6DB(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_6DB, (reg32))
#define QP_DIG_DA_CTRL_13_GET_RG_QP_IDRV_6DB(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDRV_6DB, (reg32))
#define QP_DIG_DA_CTRL_13_GET_RG_QP_IDEM_3P5DB(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_3P5DB, (reg32))

#define QP_DIG_DA_CTRL_14_GET_RG_QP_RX_IMP_SEL(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_IMP_SEL, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_TX_IMP_SEL(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_IMP_SEL, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_RX_EQ_EN(reg32)            REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_EN, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_RX_EQ_RST(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_RST, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_RX_SAOSC_RST(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_SAOSC_RST, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_RX_CDR_STABLE(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_CDR_STABLE, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_CDR_BIR(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_CDR_BIR, (reg32))
#define QP_DIG_DA_CTRL_14_GET_RG_QP_TX_EIDLE_CM(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_EIDLE_CM, (reg32))

#define QP_DIG_DA_CTRL_15_GET_RG_QP_CDR_BIRLTD1(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD1, (reg32))
#define QP_DIG_DA_CTRL_15_GET_RG_QP_CDR_BIRLTD0(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD0, (reg32))
#define QP_DIG_DA_CTRL_15_GET_RG_QP_CDR_BIRLTR(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTR, (reg32))

#define QP_DIG_DA_CTRL_16_GET_RG_QP_CDR_BCLTD0(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTD0, (reg32))
#define QP_DIG_DA_CTRL_16_GET_RG_QP_CDR_BCLTR(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTR, (reg32))
#define QP_DIG_DA_CTRL_16_GET_RG_QP_CDR_BICLTD1(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD1, (reg32))
#define QP_DIG_DA_CTRL_16_GET_RG_QP_CDR_BICLTD0(reg32)         REG_FLD_GET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD0, (reg32))
#define QP_DIG_DA_CTRL_16_GET_RG_QP_CDR_BICLTR(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTR, (reg32))

#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_KVSELLTD1(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD1, (reg32))
#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_KVSELLTD0(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD0, (reg32))
#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_KVSELLTR(reg32)        REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTR, (reg32))
#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_BRLTD1(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD1, (reg32))
#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_BRLTD0(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD0, (reg32))
#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_BRLTR(reg32)           REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTR, (reg32))
#define QP_DIG_DA_CTRL_17_GET_RG_QP_CDR_BCLTD1(reg32)          REG_FLD_GET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BCLTD1, (reg32))

#define QP_DIG_DA_CTRL_18_GET_RG_FORCE_QP_PLL_BPB(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPB, (reg32))
#define QP_DIG_DA_CTRL_18_GET_RG_FORCE_QP_PLL_BPA(reg32)       REG_FLD_GET(QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPA, (reg32))

#define QP_DIG_DA_CTRL_19_GET_RG_QP_PLL_BPB(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPB, (reg32))
#define QP_DIG_DA_CTRL_19_GET_RG_QP_PLL_BPA(reg32)             REG_FLD_GET(QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPA, (reg32))

#define QP_CK_RST_CTRL_0_GET_rg_rx_data_path_sel(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_rx_data_path_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac3_qsgmii_rx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_rx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac2_qsgmii_rx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_rx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac1_qsgmii_rx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_rx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac0_qsgmii_rx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_rx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac0_sgmii_rx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_rx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac3_qsgmii_tx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_tx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac2_qsgmii_tx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_tx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac1_qsgmii_tx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_tx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac0_qsgmii_tx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_tx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_mac0_sgmii_tx_ck_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_tx_ck_mode_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_baser_rx_macphy_clk_inv(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_baser_rx_macphy_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_baser_tx_macphy_clk_inv(reg32) REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_baser_tx_macphy_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_phy_ref_clk_inv(reg32)         REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_phy_ref_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_baser_rx_clk_inv(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_baser_rx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_baser_tx_clk_inv(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_baser_tx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_hsgmii_rx_clk_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_hsgmii_rx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_hsgmii_tx_clk_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_hsgmii_tx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_qsgmii_rx_clk_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_qsgmii_rx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_qsgmii_tx_clk_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_qsgmii_tx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_sgmii_rx_clk_inv(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_sgmii_rx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_sgmii_tx_clk_inv(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_sgmii_tx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_ck_mode_force_sel(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_ck_mode_force_sel, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_phy_ref_clk_en(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_phy_ref_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_baser_rx_clk_en(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_baser_rx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_baser_tx_clk_en(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_baser_tx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_hsgmii_rx_clk_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_rx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_hsgmii_tx_clk_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_tx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_qsgmii_rx_clk_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_rx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_qsgmii_tx_clk_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_tx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_sgmii_rx_clk_en(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_rx_clk_en, (reg32))
#define QP_CK_RST_CTRL_0_GET_rg_force_sgmii_tx_clk_en(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_tx_clk_en, (reg32))

#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_rx_div_ck_2(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_2, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_rx_div_ck_1(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_rx_div_ck_0(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pcs_rx_ck_1(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pcs_rx_ck_0(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_rx_div2_ck_1(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_rx_div2_ck_0(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_rx_ck_1(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_rx_ck_0(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_tx_div_ck_2(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_2, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_tx_div_ck_1(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_tx_div_ck_0(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pcs_tx_ck_1(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pcs_tx_ck_0(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_div2_ck_1(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_div2_ck_0(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_ck_1(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_1, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_ck_0(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_0, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_norm_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_norm_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_osr_short_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_short_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_rx_div_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pcs_rx_ck_en(reg32)      REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_rx_div2_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_rx_ck_en(reg32)      REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_o_mac_tx_div_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pcs_tx_ck_en(reg32)      REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_div2_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_ck_en(reg32)      REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_en, (reg32))
#define QP_CK_RST_CTRL_1_GET_rg_force_pma_tx_osr_norm_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_norm_ck_en, (reg32))

#define QP_CK_RST_CTRL_2_GET_rg_force_mac3_qsgmii_rx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_rx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac2_qsgmii_rx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_rx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac1_qsgmii_rx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_rx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac0_qsgmii_rx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_rx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac0_sgmii_rx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_rx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac3_qsgmii_tx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_tx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac2_qsgmii_tx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_tx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac1_qsgmii_tx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_tx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac0_qsgmii_tx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_tx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_force_mac0_sgmii_tx_ck_mode(reg32) REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_tx_ck_mode, (reg32))
#define QP_CK_RST_CTRL_2_GET_rg_ck_mode_force(reg32)           REG_FLD_GET(QP_CK_RST_CTRL_2_FLD_rg_ck_mode_force, (reg32))

#define QP_CK_RST_CTRL_3_GET_rg_ns_ck_div_sel(reg32)           REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_ns_ck_div_sel, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_us_ck_div_sel(reg32)           REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_us_ck_div_sel, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_pma_tx_osr_short_ck_inv(reg32) REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_pma_tx_osr_short_ck_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_ns_clk_z_inv(reg32)            REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_ns_clk_z_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_pll_dig_ref_ck_inv(reg32)      REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_pll_dig_ref_ck_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_pll_dig_fbk_ck_inv(reg32)      REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_pll_dig_fbk_ck_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_cdr_pr_fbk_ck_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fbk_ck_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_cdr_pr_fll_dig_clk_inv(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fll_dig_clk_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_tdc_sync_ck_inv(reg32)         REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_tdc_sync_ck_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_tdc_ftck_inv(reg32)            REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_tdc_ftck_inv, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_force_cdr_pr_fbk_ck_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fbk_ck_en, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_force_cdr_pr_fll_dig_clk_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fll_dig_clk_en, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_force_tdc_sync_ck_en(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_force_tdc_sync_ck_en, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_force_tdc_ftck_en(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_force_tdc_ftck_en, (reg32))
#define QP_CK_RST_CTRL_3_GET_rg_force_pma_rx_eq_ck_en(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_3_FLD_rg_force_pma_rx_eq_ck_en, (reg32))

#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_pll_dig_ref_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_ref_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_pll_dig_fbk_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_fbk_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ssusb_eq_rx250m_ck_scan_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ssusb_eq_rx250m_ck_scan_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_rx_lfps_reset_n(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_rx_lfps_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_pma_tx_osr_norm_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_norm_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_rx_bist_err_cnt_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_rx_bist_err_cnt_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_pcs_gb_lb_fifo_rd_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_rd_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_pcs_gb_lb_fifo_wr_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_wr_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_pcs_rx_gb_fifo_rd_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_rd_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_pcs_rx_gb_fifo_wr_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_wr_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_pcs_tx_gb_fifo_rd_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_rd_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_xfi_pcs_tx_gb_fifo_wr_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_wr_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_baser_pcs_rx_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_rx_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_baser_pcs_tx_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_tx_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_baser_pma_rx_div2_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_div2_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_baser_pma_tx_div2_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_div2_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_cdr_pr_fbk_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fbk_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_tdc_sync_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_sync_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ad_qp_tdc_ftck_reset_n(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_ftck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_baser_pma_rx_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_baser_pma_tx_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_pma_tx_osr_short_ck_reset_n(reg32) REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_short_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_us_ck_reset_n(reg32)           REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_us_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_ns_ck_reset_n(reg32)           REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_ns_ck_reset_n, (reg32))
#define QP_CK_RST_CTRL_4_GET_rg_pma_rx_eq_ck_reset_n(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_4_FLD_rg_pma_rx_eq_ck_reset_n, (reg32))

#define QP_SYS_CTRL_0_GET_rg_force_l2ref_done_sel(reg32)       REG_FLD_GET(QP_SYS_CTRL_0_FLD_rg_force_l2ref_done_sel, (reg32))
#define QP_SYS_CTRL_0_GET_rg_force_l2ref_done(reg32)           REG_FLD_GET(QP_SYS_CTRL_0_FLD_rg_force_l2ref_done, (reg32))
#define QP_SYS_CTRL_0_GET_rg_l2ref_ne_cnt(reg32)               REG_FLD_GET(QP_SYS_CTRL_0_FLD_rg_l2ref_ne_cnt, (reg32))

#define QP_CK_RST_CTRL_5_GET_rg_multi_phy_usb_en(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_multi_phy_usb_en, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_norm_ck_3(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_3, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_norm_ck_2(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_2, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_norm_ck_1(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_1, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_norm_ck_0(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_0, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_rx_eq_ck_3(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_3, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_rx_eq_ck_2(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_2, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_rx_eq_ck_1(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_1, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_rx_eq_ck_0(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_0, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_osr_norm_ck_3(reg32) REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_3, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_osr_norm_ck_2(reg32) REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_2, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_osr_norm_ck_1(reg32) REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_1, (reg32))
#define QP_CK_RST_CTRL_5_GET_rg_force_pma_tx_osr_norm_ck_0(reg32) REG_FLD_GET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_0, (reg32))

#define QP_CK_RST_CTRL_6_GET_rg_pll_dig_ref_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_pll_dig_ref_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_pll_dig_fbk_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_pll_dig_fbk_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_pma_tx_osr_short_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_pma_tx_osr_short_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_cdr_pr_fbk_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fbk_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_cdr_pr_fll_dig_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fll_dig_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_tdc_sync_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_tdc_sync_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_tdc_ftck_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_tdc_ftck_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_phy_ref_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_phy_ref_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_baser_rx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_baser_rx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_baser_tx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_baser_tx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_hsgmii_rx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_hsgmii_rx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_hsgmii_tx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_hsgmii_tx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_qsgmii_rx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_qsgmii_rx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_qsgmii_tx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_qsgmii_tx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_sgmii_rx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_sgmii_rx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_6_GET_rg_sgmii_tx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_6_FLD_rg_sgmii_tx_ck_en_force_sel, (reg32))

#define QP_DIG_MODE_CTRL_0_GET_rg_rx_er_phy_mode(reg32)        REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_rx_er_phy_mode, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_qsgmii3_mode(reg32)          REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii3_mode, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_qsgmii2_mode(reg32)          REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii2_mode, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_qsgmii1_mode(reg32)          REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii1_mode, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_qsgmii0_mode(reg32)          REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii0_mode, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_sgmii_mode(reg32)            REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_mode, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_qsgmii_an_en(reg32)          REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii_an_en, (reg32))
#define QP_DIG_MODE_CTRL_0_GET_rg_sgmii_an_en(reg32)           REG_FLD_GET(QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_an_en, (reg32))

#define QP_DIG_CK_CTRL_0_GET_rg_ck_gen_bypass_an(reg32)        REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_ck_gen_bypass_an, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_tx_qsgmii_ck_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_qsgmii_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_tx_norm_qsgmii_ck_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_qsgmii_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_rx_qsgmii_ck_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_qsgmii_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_rx_eq_qsgmii_ck_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_eq_qsgmii_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_tx_norm_ck_reset_n(reg32)  REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_eq_rx_reset_n(reg32)           REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_eq_rx_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_hsgmii_fifo_rx_reset_n(reg32)  REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_hsgmii_fifo_rx_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_rate_adapt_fifo_rxpma_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rxpma_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_rate_adapt_fifo_tx_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_tx_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_rate_adapt_fifo_rx_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rx_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_100fx_tx_ck_reset_n(reg32)     REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_100fx_tx_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_100fx_rx_ck_reset_n(reg32)     REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_100fx_rx_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_o_mac_tx_div_ck_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_o_mac_tx_div_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pcs_tx_ck_reset_n(reg32)       REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pcs_tx_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_tx_div2_ck_reset_n(reg32)  REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_div2_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_tx_ck_reset_n(reg32)       REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_o_mac_rx_div_ck_reset_n(reg32) REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_o_mac_rx_div_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pcs_rx_ck_reset_n(reg32)       REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pcs_rx_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_rx_div2_ck_reset_n(reg32)  REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_div2_ck_reset_n, (reg32))
#define QP_DIG_CK_CTRL_0_GET_rg_pma_rx_ck_reset_n(reg32)       REG_FLD_GET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_ck_reset_n, (reg32))

#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_write_enable_or(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_or, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_read_enable_or(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_or, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_write_enable_and(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_and, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_read_enable_and(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_and, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_aempty_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_aempty_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_empty_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_empty_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_afull_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_afull_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_full_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_full_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_w_threshold(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_w_threshold, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_r_threshold(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_r_threshold, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_rclear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_rclear, (reg32))
#define QP_DIG_AFIFO_CTRL_0_GET_rg_hsgmii_async_fifo_wclear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_wclear, (reg32))

#define QP_DIG_MODE_CTRL_1_GET_rg_qsgmii_test_mode(reg32)      REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_rg_qsgmii_test_mode, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_rg_ssusb_ip_sw_rst(reg32)       REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_ip_sw_rst, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_rg_ssusb_hsgmii_sel(reg32)      REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_hsgmii_sel, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_rg_sgmii_mode_force(reg32)      REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_rg_sgmii_mode_force, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_RG_XTAL_SEL(reg32)              REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_RG_XTAL_SEL, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_rg_xtal_sel_20m_25m(reg32)      REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_rg_xtal_sel_20m_25m, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_RG_TPHY_SPEED(reg32)            REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_SPEED, (reg32))
#define QP_DIG_MODE_CTRL_1_GET_RG_TPHY_MODE(reg32)             REG_FLD_GET(QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_MODE, (reg32))

#define QP_DIG_AFIFO_CTRL_1_GET_rg_hsgmii_tx_short_fifo_w_threshold(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_w_threshold, (reg32))
#define QP_DIG_AFIFO_CTRL_1_GET_rg_hsgmii_tx_short_fifo_r_threshold(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_r_threshold, (reg32))
#define QP_DIG_AFIFO_CTRL_1_GET_rg_hsgmii_tx_short_fifo_rclear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_rclear, (reg32))
#define QP_DIG_AFIFO_CTRL_1_GET_rg_hsgmii_tx_short_fifo_wclear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_wclear, (reg32))
#define QP_DIG_AFIFO_CTRL_1_GET_rg_tx_short_fifo_en(reg32)     REG_FLD_GET(QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_en, (reg32))
#define QP_DIG_AFIFO_CTRL_1_GET_rg_tx_short_fifo_dis(reg32)    REG_FLD_GET(QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_dis, (reg32))

#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_r_threshold(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_r_threshold, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_w_threshold(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_w_threshold, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_full_cnt_clear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_full_cnt_clear, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_rclear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_rclear, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_lpbk_async_fifo_wclear(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_wclear, (reg32))
#define QP_DIG_AFIFO_CTRL_2_GET_rg_multi_phy_r2t_lpbk_en(reg32) REG_FLD_GET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_r2t_lpbk_en, (reg32))

#define QP_DIG_EFUSE_CTRL_GET_rg_efuse_tphy_auto_load_valid(reg32) REG_FLD_GET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_auto_load_valid, (reg32))
#define QP_DIG_EFUSE_CTRL_GET_rg_efuse_tphy_iext_intr_ctrl(reg32) REG_FLD_GET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_iext_intr_ctrl, (reg32))
#define QP_DIG_EFUSE_CTRL_GET_rg_efuse_tphy_tx_imp_sel(reg32)  REG_FLD_GET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_tx_imp_sel, (reg32))
#define QP_DIG_EFUSE_CTRL_GET_rg_efuse_tphy_rx_imp_sel(reg32)  REG_FLD_GET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_rx_imp_sel, (reg32))

#define QP_CK_RST_CTRL_7_GET_rg_pma_rx_eq_usb_mode_sel(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_pma_rx_eq_usb_mode_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_pma_tx_norm_usb_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_pma_tx_norm_usb_mode_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_pma_tx_osr_norm_usb_mode_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_pma_tx_osr_norm_usb_mode_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_multi_phy_usb2p5_en(reg32)     REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb2p5_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_multi_phy_usb5_en(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb5_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_multi_phy_usb_mode_en(reg32)   REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb_mode_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_force_pll_dig_ref_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_ref_ck_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_force_pll_dig_fbk_ck_en(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_fbk_ck_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_force_usb2p5_rx_clk_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_rx_clk_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_force_usb2p5_tx_clk_en(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_tx_clk_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_force_usb5_rx_clk_en(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_force_usb5_rx_clk_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_force_usb5_tx_clk_en(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_force_usb5_tx_clk_en, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb2p5_phy_rx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_rx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb2p5_phy_tx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_tx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb5_phy_rx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_rx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb5_phy_tx_ck_en_force_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_tx_ck_en_force_sel, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb2p5_rx_clk_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_rx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb2p5_tx_clk_inv(reg32)       REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_tx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb5_rx_clk_inv(reg32)         REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb5_rx_clk_inv, (reg32))
#define QP_CK_RST_CTRL_7_GET_rg_usb5_tx_clk_inv(reg32)         REG_FLD_GET(QP_CK_RST_CTRL_7_FLD_rg_usb5_tx_clk_inv, (reg32))

#define QP_CK_RST_CTRL_8_GET_rg_force_hsgmii_phy_rst_n(reg32)  REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_force_hsgmii_phy_rst_n_sel(reg32) REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n_sel, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_force_cdr_stable(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_force_cdr_stable_sel(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable_sel, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_cdr_stable_inv(reg32)          REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_cdr_stable_inv, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_force_pll_stable(reg32)        REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_force_pll_stable_sel(reg32)    REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable_sel, (reg32))
#define QP_CK_RST_CTRL_8_GET_rg_pll_stable_inv(reg32)          REG_FLD_GET(QP_CK_RST_CTRL_8_FLD_rg_pll_stable_inv, (reg32))

#define QP_DIG_DA_CTRL_0_SET_RG_QP_PLL_IC(reg32, val)          REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IC, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_PLL_BR(reg32, val)          REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BR, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_PLL_IR(reg32, val)          REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IR, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_PLL_BP(reg32, val)          REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BP, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_PLL_LOAD_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_LOAD_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_PLL_FBKSEL(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_FBKSEL, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_PCIE_CKDET_EN(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CKDET_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_SCAN_MODE(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_SCAN_MODE, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_PCIE_CLKRX_EN(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CLKRX_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_XTAL_EXT_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_XTAL_EXT_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_PCIE_DEVICE(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_DEVICE, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_PCIE_REFCK_DIV4(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_REFCK_DIV4, (reg32), (val))
#define QP_DIG_DA_CTRL_0_SET_RG_QP_RX_IMPCALIB_EN(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_0_FLD_RG_QP_RX_IMPCALIB_EN, (reg32), (val))

#define QP_DIG_DA_CTRL_1_SET_RG_QP_CDR_BPB(reg32, val)         REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_CDR_BPB, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_TX_IMPCALIB_EN(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_IMPCALIB_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_TX_DEM(reg32, val)          REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_DEM, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_RXDET_EN(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_RXDET_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_PLL_REFCKDIV(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_REFCKDIV, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_PLL_PREDIV(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_PREDIV, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_PLL_BC(reg32, val)          REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_BC, (reg32), (val))
#define QP_DIG_DA_CTRL_1_SET_RG_QP_PLL_DIVEN(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_DIVEN, (reg32), (val))

#define QP_DIG_DA_CTRL_2_SET_RG_QP_EQ_RSTEP1(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP1, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_EQ_RSTEP2(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP2, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_LFPS_PWD(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_LFPS_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_CDR_PI_PWD(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_CDR_PI_MODE(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_MODE, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_CDR_TCADJ(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_TCADJ, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_CDR_FBDIV(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_FBDIV, (reg32), (val))
#define QP_DIG_DA_CTRL_2_SET_RG_QP_CDR_BPA(reg32, val)         REG_FLD_SET(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_BPA, (reg32), (val))

#define QP_DIG_DA_CTRL_3_SET_RG_QP_SYSPLL_FBDIV_CHG(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_QP_SYSPLL_FBDIV_CHG, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_PCIE_CLKTX_EN(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CLKTX_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_PCIE_CRSDET_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_PCIE_CRSDET_RSTB(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_RSTB, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_PCIE_CRSDET_OFST(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_OFST, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_QP_RX_HZ(reg32, val)           REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_HZ, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_QP_RX_P3_ENTRY(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P3_ENTRY, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_QP_RX_P1_ENTRY(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P1_ENTRY, (reg32), (val))
#define QP_DIG_DA_CTRL_3_SET_RG_QP_LFPS_DEGLITCH(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_3_FLD_RG_QP_LFPS_DEGLITCH, (reg32), (val))

#define QP_DIG_DA_CTRL_4_SET_RG_QP_PLL_FBKDIV(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_4_FLD_RG_QP_PLL_FBKDIV, (reg32), (val))

#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_CDR_PI0(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PI0, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_SYSPLL_SDM_PWR_ON(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_PWR_ON, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_SYSPLL_SDM_ISO_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_ISO_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_CDR_PWD(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_CDR_AUTOK_VCO(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_AUTOK_VCO, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_CDR_LCK2REF(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_LCK2REF, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_RX_CMPWD(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_CMPWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_RX_AFE_PWD(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_AFE_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_TX_DATA_EN(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DATA_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_TX_EIDLE_LP_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_EIDLE_LP_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_TX_SER_EN(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_SER_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_SIGDET_EN(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_SIGDET_CAL_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_SIGDET_CAL_OFFSET(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_OFFSET, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_RX_PI_CAL_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_PI_CAL_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_TX_DRV_EN(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DRV_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_TX_LFPS(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_TX_LFPS_EN(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_RX_SAOSC_EN(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_SAOSC_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_BIAS_PWD(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIAS_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_BIASIMR_PWD(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIASIMR_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_BG_LPF_EN(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BG_LPF_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_PLL_BIAS_PWD(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_XTAL_RX_PWD(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_XTAL_RX_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_SYSPLL_PWD(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_PLL_PWD(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_PLL_AUTOK_VCO(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_AUTOK_VCO, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_PLL_SSC_EN(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_SSC_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_PLL_BIAS_LPF_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_LPF_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_CDR_BAND(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_BAND, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_PLL_BAND(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BAND, (reg32), (val))
#define QP_DIG_DA_CTRL_5_SET_RG_FORCE_RX_LEQOS_EN(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_LEQOS_EN, (reg32), (val))

#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_IEXT_INTR_CTRL(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IEXT_INTR_CTRL, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_RX_IMP_SEL(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_IMP_SEL, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_TX_IMP_SEL(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_IMP_SEL, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_RX_EQ_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_RX_EQ_RST(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_RST, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_RX_SAOSC_RST(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_SAOSC_RST, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_RX_CDR_STABLE(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_CDR_STABLE, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_CDR_KVSEL(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_KVSEL, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_CDR_BR(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BR, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_CDR_BC(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BC, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_CDR_BIC(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIC, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_CDR_BIR(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIR, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_TX_EIDLE_CM(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_EIDLE_CM, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_TX_BIASI_EN(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_TX_BIASI(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_IDEM_6DB(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_6DB, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_IDRV_6DB(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_6DB, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_IDEM_3P5DB(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_3P5DB, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_IDRV_3P5DB(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_3P5DB, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_IDRV_0DB(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_0DB, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_SYSPLL_PREDIV(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_PREDIV, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_SYSPLL_RESERVE(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_RESERVE, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_SYSPLL_FBDIV(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_FBDIV, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_PLL_SSC_PRD(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_PRD, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_PLL_SSC_DELTA(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_PLL_SSC_DELTA1(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA1, (reg32), (val))
#define QP_DIG_DA_CTRL_6_SET_RG_FORCE_CDR_PI90(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_PI90, (reg32), (val))

#define QP_DIG_DA_CTRL_7_SET_RG_QP_BG_LPF_EN(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_BG_LPF_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_PLL_BIAS_PWD(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_XTAL_RX_PWD(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_XTAL_RX_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_SYSPLL_PWD(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_SYSPLL_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_PLL_PWD(reg32, val)         REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_PLL_AUTOK_VCO(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_AUTOK_VCO, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_PLL_SSC_EN(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_SSC_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_PLL_BIAS_LPF_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_LPF_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_CDR_BAND(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_CDR_BAND, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_RX_LEQOS_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_RX_LEQOS_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_7_SET_RG_QP_PLL_BAND(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BAND, (reg32), (val))

#define QP_DIG_DA_CTRL_8_SET_RG_QP_SYSPLL_SDM_PWR_ON(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_PWR_ON, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_SYSPLL_SDM_ISO_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_ISO_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_CDR_PWD(reg32, val)         REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_CDR_AUTOK_VCO(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_AUTOK_VCO, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_CDR_LCK2REF(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_LCK2REF, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_RX_CMPWD(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_CMPWD, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_RX_AFE_PWD(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_AFE_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_TX_DATA_EN(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DATA_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_TX_EIDLE_LP_EN(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_EIDLE_LP_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_TX_SER_EN(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_SER_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_PCIE_SIGDET_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_PCIE_SIGDET_CAL_EN(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_CAL_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_SIGDET_CAL_OFFSET(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_SIGDET_CAL_OFFSET, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_RX_PI_CAL_EN(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_PI_CAL_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_TX_DRV_EN(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DRV_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_TX_LFPS(reg32, val)         REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_TX_LFPS_EN(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_RX_SAOSC_EN(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_SAOSC_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_BIAS_PWD(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_BIAS_PWD, (reg32), (val))
#define QP_DIG_DA_CTRL_8_SET_RG_QP_BIASIMR_PWD(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_8_FLD_RG_QP_BIASIMR_PWD, (reg32), (val))

#define QP_DIG_DA_CTRL_9_SET_RG_QP_CDR_PI90(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI90, (reg32), (val))
#define QP_DIG_DA_CTRL_9_SET_RG_QP_CDR_PI0(reg32, val)         REG_FLD_SET(QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI0, (reg32), (val))

#define QP_DIG_DA_CTRL_10_SET_RG_QP_PLL_SSC_DELTA(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA, (reg32), (val))
#define QP_DIG_DA_CTRL_10_SET_RG_QP_PLL_SSC_DELTA1(reg32, val) REG_FLD_SET(QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA1, (reg32), (val))

#define QP_DIG_DA_CTRL_11_SET_RG_QP_SYSPLL_FBDIV(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_11_FLD_RG_QP_SYSPLL_FBDIV, (reg32), (val))

#define QP_DIG_DA_CTRL_12_SET_RG_QP_IDRV_3P5DB(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_3P5DB, (reg32), (val))
#define QP_DIG_DA_CTRL_12_SET_RG_QP_IDRV_0DB(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_0DB, (reg32), (val))

#define QP_DIG_DA_CTRL_13_SET_RG_QP_TX_BIASI_EN(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_13_SET_RG_QP_TX_BIASI(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI, (reg32), (val))
#define QP_DIG_DA_CTRL_13_SET_RG_QP_IDEM_6DB(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_6DB, (reg32), (val))
#define QP_DIG_DA_CTRL_13_SET_RG_QP_IDRV_6DB(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDRV_6DB, (reg32), (val))
#define QP_DIG_DA_CTRL_13_SET_RG_QP_IDEM_3P5DB(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_3P5DB, (reg32), (val))

#define QP_DIG_DA_CTRL_14_SET_RG_QP_RX_IMP_SEL(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_IMP_SEL, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_TX_IMP_SEL(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_IMP_SEL, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_RX_EQ_EN(reg32, val)       REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_EN, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_RX_EQ_RST(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_RST, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_RX_SAOSC_RST(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_SAOSC_RST, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_RX_CDR_STABLE(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_CDR_STABLE, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_CDR_BIR(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_CDR_BIR, (reg32), (val))
#define QP_DIG_DA_CTRL_14_SET_RG_QP_TX_EIDLE_CM(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_EIDLE_CM, (reg32), (val))

#define QP_DIG_DA_CTRL_15_SET_RG_QP_CDR_BIRLTD1(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD1, (reg32), (val))
#define QP_DIG_DA_CTRL_15_SET_RG_QP_CDR_BIRLTD0(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD0, (reg32), (val))
#define QP_DIG_DA_CTRL_15_SET_RG_QP_CDR_BIRLTR(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTR, (reg32), (val))

#define QP_DIG_DA_CTRL_16_SET_RG_QP_CDR_BCLTD0(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTD0, (reg32), (val))
#define QP_DIG_DA_CTRL_16_SET_RG_QP_CDR_BCLTR(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTR, (reg32), (val))
#define QP_DIG_DA_CTRL_16_SET_RG_QP_CDR_BICLTD1(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD1, (reg32), (val))
#define QP_DIG_DA_CTRL_16_SET_RG_QP_CDR_BICLTD0(reg32, val)    REG_FLD_SET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD0, (reg32), (val))
#define QP_DIG_DA_CTRL_16_SET_RG_QP_CDR_BICLTR(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTR, (reg32), (val))

#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_KVSELLTD1(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD1, (reg32), (val))
#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_KVSELLTD0(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD0, (reg32), (val))
#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_KVSELLTR(reg32, val)   REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTR, (reg32), (val))
#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_BRLTD1(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD1, (reg32), (val))
#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_BRLTD0(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD0, (reg32), (val))
#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_BRLTR(reg32, val)      REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTR, (reg32), (val))
#define QP_DIG_DA_CTRL_17_SET_RG_QP_CDR_BCLTD1(reg32, val)     REG_FLD_SET(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BCLTD1, (reg32), (val))

#define QP_DIG_DA_CTRL_18_SET_RG_FORCE_QP_PLL_BPB(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPB, (reg32), (val))
#define QP_DIG_DA_CTRL_18_SET_RG_FORCE_QP_PLL_BPA(reg32, val)  REG_FLD_SET(QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPA, (reg32), (val))

#define QP_DIG_DA_CTRL_19_SET_RG_QP_PLL_BPB(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPB, (reg32), (val))
#define QP_DIG_DA_CTRL_19_SET_RG_QP_PLL_BPA(reg32, val)        REG_FLD_SET(QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPA, (reg32), (val))

#define QP_CK_RST_CTRL_0_SET_rg_rx_data_path_sel(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_rx_data_path_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac3_qsgmii_rx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_rx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac2_qsgmii_rx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_rx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac1_qsgmii_rx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_rx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac0_qsgmii_rx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_rx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac0_sgmii_rx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_rx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac3_qsgmii_tx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_tx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac2_qsgmii_tx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_tx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac1_qsgmii_tx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_tx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac0_qsgmii_tx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_tx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_mac0_sgmii_tx_ck_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_tx_ck_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_baser_rx_macphy_clk_inv(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_baser_rx_macphy_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_baser_tx_macphy_clk_inv(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_baser_tx_macphy_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_phy_ref_clk_inv(reg32, val)    REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_phy_ref_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_baser_rx_clk_inv(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_baser_rx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_baser_tx_clk_inv(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_baser_tx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_hsgmii_rx_clk_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_hsgmii_rx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_hsgmii_tx_clk_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_hsgmii_tx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_qsgmii_rx_clk_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_qsgmii_rx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_qsgmii_tx_clk_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_qsgmii_tx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_sgmii_rx_clk_inv(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_sgmii_rx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_sgmii_tx_clk_inv(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_sgmii_tx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_ck_mode_force_sel(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_ck_mode_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_phy_ref_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_phy_ref_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_baser_rx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_baser_rx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_baser_tx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_baser_tx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_hsgmii_rx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_rx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_hsgmii_tx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_tx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_qsgmii_rx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_rx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_qsgmii_tx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_tx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_sgmii_rx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_rx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_0_SET_rg_force_sgmii_tx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_tx_clk_en, (reg32), (val))

#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_rx_div_ck_2(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_2, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_rx_div_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_rx_div_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pcs_rx_ck_1(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pcs_rx_ck_0(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_rx_div2_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_rx_div2_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_rx_ck_1(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_rx_ck_0(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_tx_div_ck_2(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_2, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_tx_div_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_tx_div_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pcs_tx_ck_1(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pcs_tx_ck_0(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_div2_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_div2_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_ck_1(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_ck_0(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_norm_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_norm_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_osr_short_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_short_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_rx_div_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pcs_rx_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_rx_div2_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_rx_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_o_mac_tx_div_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pcs_tx_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_div2_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_1_SET_rg_force_pma_tx_osr_norm_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_norm_ck_en, (reg32), (val))

#define QP_CK_RST_CTRL_2_SET_rg_force_mac3_qsgmii_rx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_rx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac2_qsgmii_rx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_rx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac1_qsgmii_rx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_rx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac0_qsgmii_rx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_rx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac0_sgmii_rx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_rx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac3_qsgmii_tx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_tx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac2_qsgmii_tx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_tx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac1_qsgmii_tx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_tx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac0_qsgmii_tx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_tx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_force_mac0_sgmii_tx_ck_mode(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_tx_ck_mode, (reg32), (val))
#define QP_CK_RST_CTRL_2_SET_rg_ck_mode_force(reg32, val)      REG_FLD_SET(QP_CK_RST_CTRL_2_FLD_rg_ck_mode_force, (reg32), (val))

#define QP_CK_RST_CTRL_3_SET_rg_ns_ck_div_sel(reg32, val)      REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_ns_ck_div_sel, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_us_ck_div_sel(reg32, val)      REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_us_ck_div_sel, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_pma_tx_osr_short_ck_inv(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_pma_tx_osr_short_ck_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_ns_clk_z_inv(reg32, val)       REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_ns_clk_z_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_pll_dig_ref_ck_inv(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_pll_dig_ref_ck_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_pll_dig_fbk_ck_inv(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_pll_dig_fbk_ck_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_cdr_pr_fbk_ck_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fbk_ck_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_cdr_pr_fll_dig_clk_inv(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fll_dig_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_tdc_sync_ck_inv(reg32, val)    REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_tdc_sync_ck_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_tdc_ftck_inv(reg32, val)       REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_tdc_ftck_inv, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_force_cdr_pr_fbk_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fbk_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_force_cdr_pr_fll_dig_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fll_dig_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_force_tdc_sync_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_force_tdc_sync_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_force_tdc_ftck_en(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_force_tdc_ftck_en, (reg32), (val))
#define QP_CK_RST_CTRL_3_SET_rg_force_pma_rx_eq_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_3_FLD_rg_force_pma_rx_eq_ck_en, (reg32), (val))

#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_pll_dig_ref_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_ref_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_pll_dig_fbk_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_fbk_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ssusb_eq_rx250m_ck_scan_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ssusb_eq_rx250m_ck_scan_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_rx_lfps_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_rx_lfps_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_pma_tx_osr_norm_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_norm_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_rx_bist_err_cnt_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_rx_bist_err_cnt_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_pcs_gb_lb_fifo_rd_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_rd_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_pcs_gb_lb_fifo_wr_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_wr_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_pcs_rx_gb_fifo_rd_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_rd_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_pcs_rx_gb_fifo_wr_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_wr_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_pcs_tx_gb_fifo_rd_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_rd_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_xfi_pcs_tx_gb_fifo_wr_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_wr_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_baser_pcs_rx_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_rx_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_baser_pcs_tx_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_tx_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_baser_pma_rx_div2_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_div2_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_baser_pma_tx_div2_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_div2_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_cdr_pr_fbk_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fbk_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_tdc_sync_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_sync_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ad_qp_tdc_ftck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_ftck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_baser_pma_rx_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_baser_pma_tx_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_pma_tx_osr_short_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_short_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_us_ck_reset_n(reg32, val)      REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_us_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_ns_ck_reset_n(reg32, val)      REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_ns_ck_reset_n, (reg32), (val))
#define QP_CK_RST_CTRL_4_SET_rg_pma_rx_eq_ck_reset_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_4_FLD_rg_pma_rx_eq_ck_reset_n, (reg32), (val))

#define QP_SYS_CTRL_0_SET_rg_force_l2ref_done_sel(reg32, val)  REG_FLD_SET(QP_SYS_CTRL_0_FLD_rg_force_l2ref_done_sel, (reg32), (val))
#define QP_SYS_CTRL_0_SET_rg_force_l2ref_done(reg32, val)      REG_FLD_SET(QP_SYS_CTRL_0_FLD_rg_force_l2ref_done, (reg32), (val))
#define QP_SYS_CTRL_0_SET_rg_l2ref_ne_cnt(reg32, val)          REG_FLD_SET(QP_SYS_CTRL_0_FLD_rg_l2ref_ne_cnt, (reg32), (val))

#define QP_CK_RST_CTRL_5_SET_rg_multi_phy_usb_en(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_multi_phy_usb_en, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_norm_ck_3(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_3, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_norm_ck_2(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_2, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_norm_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_norm_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_rx_eq_ck_3(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_3, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_rx_eq_ck_2(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_2, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_rx_eq_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_rx_eq_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_0, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_osr_norm_ck_3(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_3, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_osr_norm_ck_2(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_2, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_osr_norm_ck_1(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_1, (reg32), (val))
#define QP_CK_RST_CTRL_5_SET_rg_force_pma_tx_osr_norm_ck_0(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_0, (reg32), (val))

#define QP_CK_RST_CTRL_6_SET_rg_pll_dig_ref_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_pll_dig_ref_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_pll_dig_fbk_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_pll_dig_fbk_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_pma_tx_osr_short_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_pma_tx_osr_short_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_cdr_pr_fbk_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fbk_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_cdr_pr_fll_dig_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fll_dig_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_tdc_sync_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_tdc_sync_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_tdc_ftck_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_tdc_ftck_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_phy_ref_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_phy_ref_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_baser_rx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_baser_rx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_baser_tx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_baser_tx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_hsgmii_rx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_hsgmii_rx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_hsgmii_tx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_hsgmii_tx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_qsgmii_rx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_qsgmii_rx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_qsgmii_tx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_qsgmii_tx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_sgmii_rx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_sgmii_rx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_6_SET_rg_sgmii_tx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_6_FLD_rg_sgmii_tx_ck_en_force_sel, (reg32), (val))

#define QP_DIG_MODE_CTRL_0_SET_rg_rx_er_phy_mode(reg32, val)   REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_rx_er_phy_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_qsgmii3_mode(reg32, val)     REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii3_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_qsgmii2_mode(reg32, val)     REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii2_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_qsgmii1_mode(reg32, val)     REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii1_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_qsgmii0_mode(reg32, val)     REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii0_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_sgmii_mode(reg32, val)       REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_qsgmii_an_en(reg32, val)     REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii_an_en, (reg32), (val))
#define QP_DIG_MODE_CTRL_0_SET_rg_sgmii_an_en(reg32, val)      REG_FLD_SET(QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_an_en, (reg32), (val))

#define QP_DIG_CK_CTRL_0_SET_rg_ck_gen_bypass_an(reg32, val)   REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_ck_gen_bypass_an, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_tx_qsgmii_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_qsgmii_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_tx_norm_qsgmii_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_qsgmii_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_rx_qsgmii_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_qsgmii_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_rx_eq_qsgmii_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_eq_qsgmii_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_tx_norm_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_eq_rx_reset_n(reg32, val)      REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_eq_rx_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_hsgmii_fifo_rx_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_hsgmii_fifo_rx_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_rate_adapt_fifo_rxpma_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rxpma_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_rate_adapt_fifo_tx_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_tx_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_rate_adapt_fifo_rx_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rx_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_100fx_tx_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_100fx_tx_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_100fx_rx_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_100fx_rx_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_o_mac_tx_div_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_o_mac_tx_div_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pcs_tx_ck_reset_n(reg32, val)  REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pcs_tx_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_tx_div2_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_div2_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_tx_ck_reset_n(reg32, val)  REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_o_mac_rx_div_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_o_mac_rx_div_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pcs_rx_ck_reset_n(reg32, val)  REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pcs_rx_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_rx_div2_ck_reset_n(reg32, val) REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_div2_ck_reset_n, (reg32), (val))
#define QP_DIG_CK_CTRL_0_SET_rg_pma_rx_ck_reset_n(reg32, val)  REG_FLD_SET(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_ck_reset_n, (reg32), (val))

#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_write_enable_or(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_or, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_read_enable_or(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_or, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_write_enable_and(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_and, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_read_enable_and(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_and, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_aempty_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_aempty_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_empty_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_empty_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_afull_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_afull_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_full_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_full_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_w_threshold(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_w_threshold, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_r_threshold(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_r_threshold, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_rclear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_rclear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_0_SET_rg_hsgmii_async_fifo_wclear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_wclear, (reg32), (val))

#define QP_DIG_MODE_CTRL_1_SET_rg_qsgmii_test_mode(reg32, val) REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_rg_qsgmii_test_mode, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_rg_ssusb_ip_sw_rst(reg32, val)  REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_ip_sw_rst, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_rg_ssusb_hsgmii_sel(reg32, val) REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_hsgmii_sel, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_rg_sgmii_mode_force(reg32, val) REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_rg_sgmii_mode_force, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_RG_XTAL_SEL(reg32, val)         REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_RG_XTAL_SEL, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_rg_xtal_sel_20m_25m(reg32, val) REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_rg_xtal_sel_20m_25m, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_RG_TPHY_SPEED(reg32, val)       REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_SPEED, (reg32), (val))
#define QP_DIG_MODE_CTRL_1_SET_RG_TPHY_MODE(reg32, val)        REG_FLD_SET(QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_MODE, (reg32), (val))

#define QP_DIG_AFIFO_CTRL_1_SET_rg_hsgmii_tx_short_fifo_w_threshold(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_w_threshold, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_1_SET_rg_hsgmii_tx_short_fifo_r_threshold(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_r_threshold, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_1_SET_rg_hsgmii_tx_short_fifo_rclear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_rclear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_1_SET_rg_hsgmii_tx_short_fifo_wclear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_wclear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_1_SET_rg_tx_short_fifo_en(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_en, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_1_SET_rg_tx_short_fifo_dis(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_dis, (reg32), (val))

#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_r_threshold(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_r_threshold, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_w_threshold(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_w_threshold, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_full_cnt_clear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_full_cnt_clear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_rclear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_rclear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_lpbk_async_fifo_wclear(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_wclear, (reg32), (val))
#define QP_DIG_AFIFO_CTRL_2_SET_rg_multi_phy_r2t_lpbk_en(reg32, val) REG_FLD_SET(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_r2t_lpbk_en, (reg32), (val))

#define QP_DIG_EFUSE_CTRL_SET_rg_efuse_tphy_auto_load_valid(reg32, val) REG_FLD_SET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_auto_load_valid, (reg32), (val))
#define QP_DIG_EFUSE_CTRL_SET_rg_efuse_tphy_iext_intr_ctrl(reg32, val) REG_FLD_SET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_iext_intr_ctrl, (reg32), (val))
#define QP_DIG_EFUSE_CTRL_SET_rg_efuse_tphy_tx_imp_sel(reg32, val) REG_FLD_SET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_tx_imp_sel, (reg32), (val))
#define QP_DIG_EFUSE_CTRL_SET_rg_efuse_tphy_rx_imp_sel(reg32, val) REG_FLD_SET(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_rx_imp_sel, (reg32), (val))

#define QP_CK_RST_CTRL_7_SET_rg_pma_rx_eq_usb_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_pma_rx_eq_usb_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_pma_tx_norm_usb_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_pma_tx_norm_usb_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_pma_tx_osr_norm_usb_mode_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_pma_tx_osr_norm_usb_mode_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_multi_phy_usb2p5_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb2p5_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_multi_phy_usb5_en(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb5_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_multi_phy_usb_mode_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb_mode_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_force_pll_dig_ref_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_ref_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_force_pll_dig_fbk_ck_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_fbk_ck_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_force_usb2p5_rx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_rx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_force_usb2p5_tx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_tx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_force_usb5_rx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_force_usb5_rx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_force_usb5_tx_clk_en(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_force_usb5_tx_clk_en, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb2p5_phy_rx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_rx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb2p5_phy_tx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_tx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb5_phy_rx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_rx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb5_phy_tx_ck_en_force_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_tx_ck_en_force_sel, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb2p5_rx_clk_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_rx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb2p5_tx_clk_inv(reg32, val)  REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_tx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb5_rx_clk_inv(reg32, val)    REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb5_rx_clk_inv, (reg32), (val))
#define QP_CK_RST_CTRL_7_SET_rg_usb5_tx_clk_inv(reg32, val)    REG_FLD_SET(QP_CK_RST_CTRL_7_FLD_rg_usb5_tx_clk_inv, (reg32), (val))

#define QP_CK_RST_CTRL_8_SET_rg_force_hsgmii_phy_rst_n(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_force_hsgmii_phy_rst_n_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n_sel, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_force_cdr_stable(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_force_cdr_stable_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable_sel, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_cdr_stable_inv(reg32, val)     REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_cdr_stable_inv, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_force_pll_stable(reg32, val)   REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_force_pll_stable_sel(reg32, val) REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable_sel, (reg32), (val))
#define QP_CK_RST_CTRL_8_SET_rg_pll_stable_inv(reg32, val)     REG_FLD_SET(QP_CK_RST_CTRL_8_FLD_rg_pll_stable_inv, (reg32), (val))

#define QP_DIG_DA_CTRL_0_VAL_RG_QP_PLL_IC(val)                 REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IC, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_PLL_BR(val)                 REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BR, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_PLL_IR(val)                 REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_IR, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_PLL_BP(val)                 REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_BP, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_PLL_LOAD_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_LOAD_EN, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_PLL_FBKSEL(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_PLL_FBKSEL, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_PCIE_CKDET_EN(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CKDET_EN, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_SCAN_MODE(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_SCAN_MODE, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_PCIE_CLKRX_EN(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_CLKRX_EN, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_XTAL_EXT_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_XTAL_EXT_EN, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_PCIE_DEVICE(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_DEVICE, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_PCIE_REFCK_DIV4(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_PCIE_REFCK_DIV4, (val))
#define QP_DIG_DA_CTRL_0_VAL_RG_QP_RX_IMPCALIB_EN(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_0_FLD_RG_QP_RX_IMPCALIB_EN, (val))

#define QP_DIG_DA_CTRL_1_VAL_RG_QP_CDR_BPB(val)                REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_CDR_BPB, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_TX_IMPCALIB_EN(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_IMPCALIB_EN, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_TX_DEM(val)                 REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_TX_DEM, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_RXDET_EN(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_RXDET_EN, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_PLL_REFCKDIV(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_REFCKDIV, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_PLL_PREDIV(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_PREDIV, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_PLL_BC(val)                 REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_BC, (val))
#define QP_DIG_DA_CTRL_1_VAL_RG_QP_PLL_DIVEN(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_1_FLD_RG_QP_PLL_DIVEN, (val))

#define QP_DIG_DA_CTRL_2_VAL_RG_QP_EQ_RSTEP1(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP1, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_EQ_RSTEP2(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_EQ_RSTEP2, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_LFPS_PWD(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_LFPS_PWD, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_CDR_PI_PWD(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_PWD, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_CDR_PI_MODE(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_PI_MODE, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_CDR_TCADJ(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_TCADJ, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_CDR_FBDIV(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_FBDIV, (val))
#define QP_DIG_DA_CTRL_2_VAL_RG_QP_CDR_BPA(val)                REG_FLD_VAL(QP_DIG_DA_CTRL_2_FLD_RG_QP_CDR_BPA, (val))

#define QP_DIG_DA_CTRL_3_VAL_RG_QP_SYSPLL_FBDIV_CHG(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_QP_SYSPLL_FBDIV_CHG, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_PCIE_CLKTX_EN(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CLKTX_EN, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_PCIE_CRSDET_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_EN, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_PCIE_CRSDET_RSTB(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_RSTB, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_PCIE_CRSDET_OFST(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_PCIE_CRSDET_OFST, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_QP_RX_HZ(val)                  REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_HZ, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_QP_RX_P3_ENTRY(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P3_ENTRY, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_QP_RX_P1_ENTRY(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_QP_RX_P1_ENTRY, (val))
#define QP_DIG_DA_CTRL_3_VAL_RG_QP_LFPS_DEGLITCH(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_3_FLD_RG_QP_LFPS_DEGLITCH, (val))

#define QP_DIG_DA_CTRL_4_VAL_RG_QP_PLL_FBKDIV(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_4_FLD_RG_QP_PLL_FBKDIV, (val))

#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_CDR_PI0(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PI0, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_SYSPLL_SDM_PWR_ON(val)   REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_PWR_ON, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_SYSPLL_SDM_ISO_EN(val)   REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_SDM_ISO_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_CDR_PWD(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_CDR_AUTOK_VCO(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_AUTOK_VCO, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_CDR_LCK2REF(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_LCK2REF, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_RX_CMPWD(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_CMPWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_RX_AFE_PWD(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_AFE_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_TX_DATA_EN(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DATA_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_TX_EIDLE_LP_EN(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_EIDLE_LP_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_TX_SER_EN(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_SER_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_SIGDET_EN(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_SIGDET_CAL_EN(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_SIGDET_CAL_OFFSET(val)   REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SIGDET_CAL_OFFSET, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_RX_PI_CAL_EN(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_PI_CAL_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_TX_DRV_EN(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_DRV_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_TX_LFPS(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_TX_LFPS_EN(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_TX_LFPS_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_RX_SAOSC_EN(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_SAOSC_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_BIAS_PWD(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIAS_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_BIASIMR_PWD(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BIASIMR_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_BG_LPF_EN(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_BG_LPF_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_PLL_BIAS_PWD(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_XTAL_RX_PWD(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_XTAL_RX_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_SYSPLL_PWD(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_SYSPLL_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_PLL_PWD(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_PWD, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_PLL_AUTOK_VCO(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_AUTOK_VCO, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_PLL_SSC_EN(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_SSC_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_PLL_BIAS_LPF_EN(val)     REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BIAS_LPF_EN, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_CDR_BAND(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_CDR_BAND, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_PLL_BAND(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_PLL_BAND, (val))
#define QP_DIG_DA_CTRL_5_VAL_RG_FORCE_RX_LEQOS_EN(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_5_FLD_RG_FORCE_RX_LEQOS_EN, (val))

#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_IEXT_INTR_CTRL(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IEXT_INTR_CTRL, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_RX_IMP_SEL(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_IMP_SEL, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_TX_IMP_SEL(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_IMP_SEL, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_RX_EQ_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_EN, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_RX_EQ_RST(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_EQ_RST, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_RX_SAOSC_RST(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_SAOSC_RST, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_RX_CDR_STABLE(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_RX_CDR_STABLE, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_CDR_KVSEL(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_KVSEL, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_CDR_BR(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BR, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_CDR_BC(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BC, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_CDR_BIC(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIC, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_CDR_BIR(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_BIR, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_TX_EIDLE_CM(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_EIDLE_CM, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_TX_BIASI_EN(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI_EN, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_TX_BIASI(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_TX_BIASI, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_IDEM_6DB(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_6DB, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_IDRV_6DB(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_6DB, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_IDEM_3P5DB(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDEM_3P5DB, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_IDRV_3P5DB(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_3P5DB, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_IDRV_0DB(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_IDRV_0DB, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_SYSPLL_PREDIV(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_PREDIV, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_SYSPLL_RESERVE(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_RESERVE, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_SYSPLL_FBDIV(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_SYSPLL_FBDIV, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_PLL_SSC_PRD(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_PRD, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_PLL_SSC_DELTA(val)       REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_PLL_SSC_DELTA1(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_PLL_SSC_DELTA1, (val))
#define QP_DIG_DA_CTRL_6_VAL_RG_FORCE_CDR_PI90(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_6_FLD_RG_FORCE_CDR_PI90, (val))

#define QP_DIG_DA_CTRL_7_VAL_RG_QP_BG_LPF_EN(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_BG_LPF_EN, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_PLL_BIAS_PWD(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_PWD, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_XTAL_RX_PWD(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_XTAL_RX_PWD, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_SYSPLL_PWD(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_SYSPLL_PWD, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_PLL_PWD(val)                REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_PWD, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_PLL_AUTOK_VCO(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_AUTOK_VCO, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_PLL_SSC_EN(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_SSC_EN, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_PLL_BIAS_LPF_EN(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BIAS_LPF_EN, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_CDR_BAND(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_CDR_BAND, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_RX_LEQOS_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_RX_LEQOS_EN, (val))
#define QP_DIG_DA_CTRL_7_VAL_RG_QP_PLL_BAND(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_7_FLD_RG_QP_PLL_BAND, (val))

#define QP_DIG_DA_CTRL_8_VAL_RG_QP_SYSPLL_SDM_PWR_ON(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_PWR_ON, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_SYSPLL_SDM_ISO_EN(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_SYSPLL_SDM_ISO_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_CDR_PWD(val)                REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_PWD, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_CDR_AUTOK_VCO(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_AUTOK_VCO, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_CDR_LCK2REF(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_CDR_LCK2REF, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_RX_CMPWD(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_CMPWD, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_RX_AFE_PWD(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_AFE_PWD, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_TX_DATA_EN(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DATA_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_TX_EIDLE_LP_EN(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_EIDLE_LP_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_TX_SER_EN(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_SER_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_PCIE_SIGDET_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_PCIE_SIGDET_CAL_EN(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_PCIE_SIGDET_CAL_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_SIGDET_CAL_OFFSET(val)      REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_SIGDET_CAL_OFFSET, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_RX_PI_CAL_EN(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_PI_CAL_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_TX_DRV_EN(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_DRV_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_TX_LFPS(val)                REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_TX_LFPS_EN(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_TX_LFPS_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_RX_SAOSC_EN(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_RX_SAOSC_EN, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_BIAS_PWD(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_BIAS_PWD, (val))
#define QP_DIG_DA_CTRL_8_VAL_RG_QP_BIASIMR_PWD(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_8_FLD_RG_QP_BIASIMR_PWD, (val))

#define QP_DIG_DA_CTRL_9_VAL_RG_QP_CDR_PI90(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI90, (val))
#define QP_DIG_DA_CTRL_9_VAL_RG_QP_CDR_PI0(val)                REG_FLD_VAL(QP_DIG_DA_CTRL_9_FLD_RG_QP_CDR_PI0, (val))

#define QP_DIG_DA_CTRL_10_VAL_RG_QP_PLL_SSC_DELTA(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA, (val))
#define QP_DIG_DA_CTRL_10_VAL_RG_QP_PLL_SSC_DELTA1(val)        REG_FLD_VAL(QP_DIG_DA_CTRL_10_FLD_RG_QP_PLL_SSC_DELTA1, (val))

#define QP_DIG_DA_CTRL_11_VAL_RG_QP_SYSPLL_FBDIV(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_11_FLD_RG_QP_SYSPLL_FBDIV, (val))

#define QP_DIG_DA_CTRL_12_VAL_RG_QP_IDRV_3P5DB(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_3P5DB, (val))
#define QP_DIG_DA_CTRL_12_VAL_RG_QP_IDRV_0DB(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_12_FLD_RG_QP_IDRV_0DB, (val))

#define QP_DIG_DA_CTRL_13_VAL_RG_QP_TX_BIASI_EN(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI_EN, (val))
#define QP_DIG_DA_CTRL_13_VAL_RG_QP_TX_BIASI(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_13_FLD_RG_QP_TX_BIASI, (val))
#define QP_DIG_DA_CTRL_13_VAL_RG_QP_IDEM_6DB(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_6DB, (val))
#define QP_DIG_DA_CTRL_13_VAL_RG_QP_IDRV_6DB(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDRV_6DB, (val))
#define QP_DIG_DA_CTRL_13_VAL_RG_QP_IDEM_3P5DB(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_13_FLD_RG_QP_IDEM_3P5DB, (val))

#define QP_DIG_DA_CTRL_14_VAL_RG_QP_RX_IMP_SEL(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_IMP_SEL, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_TX_IMP_SEL(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_IMP_SEL, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_RX_EQ_EN(val)              REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_EN, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_RX_EQ_RST(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_EQ_RST, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_RX_SAOSC_RST(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_SAOSC_RST, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_RX_CDR_STABLE(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_RX_CDR_STABLE, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_CDR_BIR(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_CDR_BIR, (val))
#define QP_DIG_DA_CTRL_14_VAL_RG_QP_TX_EIDLE_CM(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_14_FLD_RG_QP_TX_EIDLE_CM, (val))

#define QP_DIG_DA_CTRL_15_VAL_RG_QP_CDR_BIRLTD1(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD1, (val))
#define QP_DIG_DA_CTRL_15_VAL_RG_QP_CDR_BIRLTD0(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTD0, (val))
#define QP_DIG_DA_CTRL_15_VAL_RG_QP_CDR_BIRLTR(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_15_FLD_RG_QP_CDR_BIRLTR, (val))

#define QP_DIG_DA_CTRL_16_VAL_RG_QP_CDR_BCLTD0(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTD0, (val))
#define QP_DIG_DA_CTRL_16_VAL_RG_QP_CDR_BCLTR(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BCLTR, (val))
#define QP_DIG_DA_CTRL_16_VAL_RG_QP_CDR_BICLTD1(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD1, (val))
#define QP_DIG_DA_CTRL_16_VAL_RG_QP_CDR_BICLTD0(val)           REG_FLD_VAL(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTD0, (val))
#define QP_DIG_DA_CTRL_16_VAL_RG_QP_CDR_BICLTR(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_16_FLD_RG_QP_CDR_BICLTR, (val))

#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_KVSELLTD1(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD1, (val))
#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_KVSELLTD0(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTD0, (val))
#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_KVSELLTR(val)          REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_KVSELLTR, (val))
#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_BRLTD1(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD1, (val))
#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_BRLTD0(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTD0, (val))
#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_BRLTR(val)             REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BRLTR, (val))
#define QP_DIG_DA_CTRL_17_VAL_RG_QP_CDR_BCLTD1(val)            REG_FLD_VAL(QP_DIG_DA_CTRL_17_FLD_RG_QP_CDR_BCLTD1, (val))

#define QP_DIG_DA_CTRL_18_VAL_RG_FORCE_QP_PLL_BPB(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPB, (val))
#define QP_DIG_DA_CTRL_18_VAL_RG_FORCE_QP_PLL_BPA(val)         REG_FLD_VAL(QP_DIG_DA_CTRL_18_FLD_RG_FORCE_QP_PLL_BPA, (val))

#define QP_DIG_DA_CTRL_19_VAL_RG_QP_PLL_BPB(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPB, (val))
#define QP_DIG_DA_CTRL_19_VAL_RG_QP_PLL_BPA(val)               REG_FLD_VAL(QP_DIG_DA_CTRL_19_FLD_RG_QP_PLL_BPA, (val))

#define QP_CK_RST_CTRL_0_VAL_rg_rx_data_path_sel(val)          REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_rx_data_path_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac3_qsgmii_rx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_rx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac2_qsgmii_rx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_rx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac1_qsgmii_rx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_rx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac0_qsgmii_rx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_rx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac0_sgmii_rx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_rx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac3_qsgmii_tx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac3_qsgmii_tx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac2_qsgmii_tx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac2_qsgmii_tx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac1_qsgmii_tx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac1_qsgmii_tx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac0_qsgmii_tx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_qsgmii_tx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_mac0_sgmii_tx_ck_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_mac0_sgmii_tx_ck_mode_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_baser_rx_macphy_clk_inv(val)   REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_baser_rx_macphy_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_baser_tx_macphy_clk_inv(val)   REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_baser_tx_macphy_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_phy_ref_clk_inv(val)           REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_phy_ref_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_baser_rx_clk_inv(val)          REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_baser_rx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_baser_tx_clk_inv(val)          REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_baser_tx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_hsgmii_rx_clk_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_hsgmii_rx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_hsgmii_tx_clk_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_hsgmii_tx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_qsgmii_rx_clk_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_qsgmii_rx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_qsgmii_tx_clk_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_qsgmii_tx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_sgmii_rx_clk_inv(val)          REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_sgmii_rx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_sgmii_tx_clk_inv(val)          REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_sgmii_tx_clk_inv, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_ck_mode_force_sel(val)         REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_ck_mode_force_sel, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_phy_ref_clk_en(val)      REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_phy_ref_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_baser_rx_clk_en(val)     REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_baser_rx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_baser_tx_clk_en(val)     REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_baser_tx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_hsgmii_rx_clk_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_rx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_hsgmii_tx_clk_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_hsgmii_tx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_qsgmii_rx_clk_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_rx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_qsgmii_tx_clk_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_qsgmii_tx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_sgmii_rx_clk_en(val)     REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_rx_clk_en, (val))
#define QP_CK_RST_CTRL_0_VAL_rg_force_sgmii_tx_clk_en(val)     REG_FLD_VAL(QP_CK_RST_CTRL_0_FLD_rg_force_sgmii_tx_clk_en, (val))

#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_rx_div_ck_2(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_2, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_rx_div_ck_1(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_rx_div_ck_0(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pcs_rx_ck_1(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pcs_rx_ck_0(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_rx_div2_ck_1(val)    REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_rx_div2_ck_0(val)    REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_rx_ck_1(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_rx_ck_0(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_tx_div_ck_2(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_2, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_tx_div_ck_1(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_tx_div_ck_0(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pcs_tx_ck_1(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pcs_tx_ck_0(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_div2_ck_1(val)    REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_div2_ck_0(val)    REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_ck_1(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_1, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_ck_0(val)         REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_0, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_norm_ck_en(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_norm_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_osr_short_ck_en(val) REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_short_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_rx_div_ck_en(val)  REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_rx_div_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pcs_rx_ck_en(val)        REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_rx_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_rx_div2_ck_en(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_div2_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_rx_ck_en(val)        REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_rx_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_o_mac_tx_div_ck_en(val)  REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_o_mac_tx_div_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pcs_tx_ck_en(val)        REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pcs_tx_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_div2_ck_en(val)   REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_div2_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_ck_en(val)        REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_ck_en, (val))
#define QP_CK_RST_CTRL_1_VAL_rg_force_pma_tx_osr_norm_ck_en(val) REG_FLD_VAL(QP_CK_RST_CTRL_1_FLD_rg_force_pma_tx_osr_norm_ck_en, (val))

#define QP_CK_RST_CTRL_2_VAL_rg_force_mac3_qsgmii_rx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_rx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac2_qsgmii_rx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_rx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac1_qsgmii_rx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_rx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac0_qsgmii_rx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_rx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac0_sgmii_rx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_rx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac3_qsgmii_tx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac3_qsgmii_tx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac2_qsgmii_tx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac2_qsgmii_tx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac1_qsgmii_tx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac1_qsgmii_tx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac0_qsgmii_tx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_qsgmii_tx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_force_mac0_sgmii_tx_ck_mode(val) REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_force_mac0_sgmii_tx_ck_mode, (val))
#define QP_CK_RST_CTRL_2_VAL_rg_ck_mode_force(val)             REG_FLD_VAL(QP_CK_RST_CTRL_2_FLD_rg_ck_mode_force, (val))

#define QP_CK_RST_CTRL_3_VAL_rg_ns_ck_div_sel(val)             REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_ns_ck_div_sel, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_us_ck_div_sel(val)             REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_us_ck_div_sel, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_pma_tx_osr_short_ck_inv(val)   REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_pma_tx_osr_short_ck_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_ns_clk_z_inv(val)              REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_ns_clk_z_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_pll_dig_ref_ck_inv(val)        REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_pll_dig_ref_ck_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_pll_dig_fbk_ck_inv(val)        REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_pll_dig_fbk_ck_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_cdr_pr_fbk_ck_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fbk_ck_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_cdr_pr_fll_dig_clk_inv(val)    REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_cdr_pr_fll_dig_clk_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_tdc_sync_ck_inv(val)           REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_tdc_sync_ck_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_tdc_ftck_inv(val)              REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_tdc_ftck_inv, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_force_cdr_pr_fbk_ck_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fbk_ck_en, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_force_cdr_pr_fll_dig_clk_en(val) REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_force_cdr_pr_fll_dig_clk_en, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_force_tdc_sync_ck_en(val)      REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_force_tdc_sync_ck_en, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_force_tdc_ftck_en(val)         REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_force_tdc_ftck_en, (val))
#define QP_CK_RST_CTRL_3_VAL_rg_force_pma_rx_eq_ck_en(val)     REG_FLD_VAL(QP_CK_RST_CTRL_3_FLD_rg_force_pma_rx_eq_ck_en, (val))

#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_pll_dig_ref_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_ref_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_pll_dig_fbk_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_pll_dig_fbk_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ssusb_eq_rx250m_ck_scan_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ssusb_eq_rx250m_ck_scan_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_rx_lfps_reset_n(val)     REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_rx_lfps_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_pma_tx_osr_norm_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_norm_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_rx_bist_err_cnt_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_rx_bist_err_cnt_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_pcs_gb_lb_fifo_rd_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_rd_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_pcs_gb_lb_fifo_wr_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_gb_lb_fifo_wr_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_pcs_rx_gb_fifo_rd_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_rd_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_pcs_rx_gb_fifo_wr_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_rx_gb_fifo_wr_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_pcs_tx_gb_fifo_rd_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_rd_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_xfi_pcs_tx_gb_fifo_wr_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_xfi_pcs_tx_gb_fifo_wr_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_baser_pcs_rx_ck_reset_n(val)   REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_rx_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_baser_pcs_tx_ck_reset_n(val)   REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_baser_pcs_tx_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_baser_pma_rx_div2_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_div2_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_baser_pma_tx_div2_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_div2_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_cdr_pr_fbk_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fbk_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_cdr_pr_fll_dig_clk_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_tdc_sync_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_sync_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ad_qp_tdc_ftck_reset_n(val)    REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ad_qp_tdc_ftck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_baser_pma_rx_ck_reset_n(val)   REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_rx_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_baser_pma_tx_ck_reset_n(val)   REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_baser_pma_tx_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_pma_tx_osr_short_ck_reset_n(val) REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_pma_tx_osr_short_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_us_ck_reset_n(val)             REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_us_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_ns_ck_reset_n(val)             REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_ns_ck_reset_n, (val))
#define QP_CK_RST_CTRL_4_VAL_rg_pma_rx_eq_ck_reset_n(val)      REG_FLD_VAL(QP_CK_RST_CTRL_4_FLD_rg_pma_rx_eq_ck_reset_n, (val))

#define QP_SYS_CTRL_0_VAL_rg_force_l2ref_done_sel(val)         REG_FLD_VAL(QP_SYS_CTRL_0_FLD_rg_force_l2ref_done_sel, (val))
#define QP_SYS_CTRL_0_VAL_rg_force_l2ref_done(val)             REG_FLD_VAL(QP_SYS_CTRL_0_FLD_rg_force_l2ref_done, (val))
#define QP_SYS_CTRL_0_VAL_rg_l2ref_ne_cnt(val)                 REG_FLD_VAL(QP_SYS_CTRL_0_FLD_rg_l2ref_ne_cnt, (val))

#define QP_CK_RST_CTRL_5_VAL_rg_multi_phy_usb_en(val)          REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_multi_phy_usb_en, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_norm_ck_3(val)    REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_3, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_norm_ck_2(val)    REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_2, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_norm_ck_1(val)    REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_1, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_norm_ck_0(val)    REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_norm_ck_0, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_rx_eq_ck_3(val)      REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_3, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_rx_eq_ck_2(val)      REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_2, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_rx_eq_ck_1(val)      REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_1, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_rx_eq_ck_0(val)      REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_rx_eq_ck_0, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_osr_norm_ck_3(val) REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_3, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_osr_norm_ck_2(val) REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_2, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_osr_norm_ck_1(val) REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_1, (val))
#define QP_CK_RST_CTRL_5_VAL_rg_force_pma_tx_osr_norm_ck_0(val) REG_FLD_VAL(QP_CK_RST_CTRL_5_FLD_rg_force_pma_tx_osr_norm_ck_0, (val))

#define QP_CK_RST_CTRL_6_VAL_rg_pll_dig_ref_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_pll_dig_ref_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_pll_dig_fbk_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_pll_dig_fbk_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_pma_tx_osr_short_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_pma_tx_osr_short_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_cdr_pr_fbk_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fbk_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_cdr_pr_fll_dig_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_cdr_pr_fll_dig_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_tdc_sync_ck_en_force_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_tdc_sync_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_tdc_ftck_ck_en_force_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_tdc_ftck_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_phy_ref_ck_en_force_sel(val)   REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_phy_ref_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_baser_rx_ck_en_force_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_baser_rx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_baser_tx_ck_en_force_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_baser_tx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_hsgmii_rx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_hsgmii_rx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_hsgmii_tx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_hsgmii_tx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_qsgmii_rx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_qsgmii_rx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_qsgmii_tx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_qsgmii_tx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_sgmii_rx_ck_en_force_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_sgmii_rx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_6_VAL_rg_sgmii_tx_ck_en_force_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_6_FLD_rg_sgmii_tx_ck_en_force_sel, (val))

#define QP_DIG_MODE_CTRL_0_VAL_rg_rx_er_phy_mode(val)          REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_rx_er_phy_mode, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_qsgmii3_mode(val)            REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii3_mode, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_qsgmii2_mode(val)            REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii2_mode, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_qsgmii1_mode(val)            REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii1_mode, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_qsgmii0_mode(val)            REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii0_mode, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_sgmii_mode(val)              REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_mode, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_qsgmii_an_en(val)            REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_qsgmii_an_en, (val))
#define QP_DIG_MODE_CTRL_0_VAL_rg_sgmii_an_en(val)             REG_FLD_VAL(QP_DIG_MODE_CTRL_0_FLD_rg_sgmii_an_en, (val))

#define QP_DIG_CK_CTRL_0_VAL_rg_ck_gen_bypass_an(val)          REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_ck_gen_bypass_an, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_tx_qsgmii_ck_reset_n(val)  REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_qsgmii_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_tx_norm_qsgmii_ck_reset_n(val) REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_qsgmii_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_rx_qsgmii_ck_reset_n(val)  REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_qsgmii_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_rx_eq_qsgmii_ck_reset_n(val) REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_eq_qsgmii_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_tx_norm_ck_reset_n(val)    REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_norm_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_eq_rx_reset_n(val)             REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_eq_rx_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_hsgmii_fifo_rx_reset_n(val)    REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_hsgmii_fifo_rx_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_rate_adapt_fifo_rxpma_reset_n(val) REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rxpma_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_rate_adapt_fifo_tx_reset_n(val) REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_tx_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_rate_adapt_fifo_rx_reset_n(val) REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_rate_adapt_fifo_rx_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_100fx_tx_ck_reset_n(val)       REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_100fx_tx_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_100fx_rx_ck_reset_n(val)       REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_100fx_rx_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_o_mac_tx_div_ck_reset_n(val)   REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_o_mac_tx_div_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pcs_tx_ck_reset_n(val)         REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pcs_tx_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_tx_div2_ck_reset_n(val)    REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_div2_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_tx_ck_reset_n(val)         REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_tx_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_o_mac_rx_div_ck_reset_n(val)   REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_o_mac_rx_div_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pcs_rx_ck_reset_n(val)         REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pcs_rx_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_rx_div2_ck_reset_n(val)    REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_div2_ck_reset_n, (val))
#define QP_DIG_CK_CTRL_0_VAL_rg_pma_rx_ck_reset_n(val)         REG_FLD_VAL(QP_DIG_CK_CTRL_0_FLD_rg_pma_rx_ck_reset_n, (val))

#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_write_enable_or(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_or, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_read_enable_or(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_or, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_write_enable_and(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_write_enable_and, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_read_enable_and(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_read_enable_and, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_aempty_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_aempty_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_empty_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_empty_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_afull_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_afull_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_full_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_full_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_w_threshold(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_w_threshold, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_r_threshold(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_r_threshold, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_rclear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_rclear, (val))
#define QP_DIG_AFIFO_CTRL_0_VAL_rg_hsgmii_async_fifo_wclear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_0_FLD_rg_hsgmii_async_fifo_wclear, (val))

#define QP_DIG_MODE_CTRL_1_VAL_rg_qsgmii_test_mode(val)        REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_rg_qsgmii_test_mode, (val))
#define QP_DIG_MODE_CTRL_1_VAL_rg_ssusb_ip_sw_rst(val)         REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_ip_sw_rst, (val))
#define QP_DIG_MODE_CTRL_1_VAL_rg_ssusb_hsgmii_sel(val)        REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_rg_ssusb_hsgmii_sel, (val))
#define QP_DIG_MODE_CTRL_1_VAL_rg_sgmii_mode_force(val)        REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_rg_sgmii_mode_force, (val))
#define QP_DIG_MODE_CTRL_1_VAL_RG_XTAL_SEL(val)                REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_RG_XTAL_SEL, (val))
#define QP_DIG_MODE_CTRL_1_VAL_rg_xtal_sel_20m_25m(val)        REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_rg_xtal_sel_20m_25m, (val))
#define QP_DIG_MODE_CTRL_1_VAL_RG_TPHY_SPEED(val)              REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_SPEED, (val))
#define QP_DIG_MODE_CTRL_1_VAL_RG_TPHY_MODE(val)               REG_FLD_VAL(QP_DIG_MODE_CTRL_1_FLD_RG_TPHY_MODE, (val))

#define QP_DIG_AFIFO_CTRL_1_VAL_rg_hsgmii_tx_short_fifo_w_threshold(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_w_threshold, (val))
#define QP_DIG_AFIFO_CTRL_1_VAL_rg_hsgmii_tx_short_fifo_r_threshold(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_r_threshold, (val))
#define QP_DIG_AFIFO_CTRL_1_VAL_rg_hsgmii_tx_short_fifo_rclear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_rclear, (val))
#define QP_DIG_AFIFO_CTRL_1_VAL_rg_hsgmii_tx_short_fifo_wclear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_1_FLD_rg_hsgmii_tx_short_fifo_wclear, (val))
#define QP_DIG_AFIFO_CTRL_1_VAL_rg_tx_short_fifo_en(val)       REG_FLD_VAL(QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_en, (val))
#define QP_DIG_AFIFO_CTRL_1_VAL_rg_tx_short_fifo_dis(val)      REG_FLD_VAL(QP_DIG_AFIFO_CTRL_1_FLD_rg_tx_short_fifo_dis, (val))

#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_r_threshold(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_r_threshold, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_w_threshold(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_w_threshold, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_aempty_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_empty_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_afull_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_full_cnt_clear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_full_cnt_clear, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_rclear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_rclear, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_lpbk_async_fifo_wclear(val) REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_lpbk_async_fifo_wclear, (val))
#define QP_DIG_AFIFO_CTRL_2_VAL_rg_multi_phy_r2t_lpbk_en(val)  REG_FLD_VAL(QP_DIG_AFIFO_CTRL_2_FLD_rg_multi_phy_r2t_lpbk_en, (val))

#define QP_DIG_EFUSE_CTRL_VAL_rg_efuse_tphy_auto_load_valid(val) REG_FLD_VAL(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_auto_load_valid, (val))
#define QP_DIG_EFUSE_CTRL_VAL_rg_efuse_tphy_iext_intr_ctrl(val) REG_FLD_VAL(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_iext_intr_ctrl, (val))
#define QP_DIG_EFUSE_CTRL_VAL_rg_efuse_tphy_tx_imp_sel(val)    REG_FLD_VAL(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_tx_imp_sel, (val))
#define QP_DIG_EFUSE_CTRL_VAL_rg_efuse_tphy_rx_imp_sel(val)    REG_FLD_VAL(QP_DIG_EFUSE_CTRL_FLD_rg_efuse_tphy_rx_imp_sel, (val))

#define QP_CK_RST_CTRL_7_VAL_rg_pma_rx_eq_usb_mode_sel(val)    REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_pma_rx_eq_usb_mode_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_pma_tx_norm_usb_mode_sel(val)  REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_pma_tx_norm_usb_mode_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_pma_tx_osr_norm_usb_mode_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_pma_tx_osr_norm_usb_mode_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_multi_phy_usb2p5_en(val)       REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb2p5_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_multi_phy_usb5_en(val)         REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb5_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_multi_phy_usb_mode_en(val)     REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_multi_phy_usb_mode_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_force_pll_dig_ref_ck_en(val)   REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_ref_ck_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_force_pll_dig_fbk_ck_en(val)   REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_force_pll_dig_fbk_ck_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_force_usb2p5_rx_clk_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_rx_clk_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_force_usb2p5_tx_clk_en(val)    REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_force_usb2p5_tx_clk_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_force_usb5_rx_clk_en(val)      REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_force_usb5_rx_clk_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_force_usb5_tx_clk_en(val)      REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_force_usb5_tx_clk_en, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb2p5_phy_rx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_rx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb2p5_phy_tx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_phy_tx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb5_phy_rx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_rx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb5_phy_tx_ck_en_force_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb5_phy_tx_ck_en_force_sel, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb2p5_rx_clk_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_rx_clk_inv, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb2p5_tx_clk_inv(val)         REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb2p5_tx_clk_inv, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb5_rx_clk_inv(val)           REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb5_rx_clk_inv, (val))
#define QP_CK_RST_CTRL_7_VAL_rg_usb5_tx_clk_inv(val)           REG_FLD_VAL(QP_CK_RST_CTRL_7_FLD_rg_usb5_tx_clk_inv, (val))

#define QP_CK_RST_CTRL_8_VAL_rg_force_hsgmii_phy_rst_n(val)    REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_force_hsgmii_phy_rst_n_sel(val) REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_force_hsgmii_phy_rst_n_sel, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_force_cdr_stable(val)          REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_force_cdr_stable_sel(val)      REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_force_cdr_stable_sel, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_cdr_stable_inv(val)            REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_cdr_stable_inv, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_force_pll_stable(val)          REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_force_pll_stable_sel(val)      REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_force_pll_stable_sel, (val))
#define QP_CK_RST_CTRL_8_VAL_rg_pll_stable_inv(val)            REG_FLD_VAL(QP_CK_RST_CTRL_8_FLD_rg_pll_stable_inv, (val))

#ifdef __cplusplus
}
#endif

#endif // __qp_dig_csr_REGS_H__

