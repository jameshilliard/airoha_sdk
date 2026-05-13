#ifndef __qp_pma_top_REGS_H__
#define __qp_pma_top_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- qp_pma_top Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_fval_tx_eidle_lp_off   : 1;
        FIELD rg_force_rx_det_ctrl      : 1;
        FIELD rg_fval_rx_det_en         : 1;
        FIELD rg_tx_rxdet_en            : 1;
        FIELD rg_rxdet_en_window        : 6;
        FIELD rg_force_qp_tx_reserve    : 1;
        FIELD rg_rxdet_mask_clr         : 1;
        FIELD rg_rxdet_rd_wait_timer    : 4;
        FIELD rg_impcalib_en            : 1;
        FIELD rg_force_tx_calib_en      : 1;
        FIELD rg_termcal_vsel_timer     : 6;
        FIELD rg_tx_termcal_count       : 3;
        FIELD rg_fval_tx_impcalib_en    : 1;
        FIELD rg_fval_tx_term_sel       : 2;
        FIELD rg_fval_tx_term_vref_sel  : 1;
        FIELD rg_ssusb_tx_eidle_sel     : 1;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_0, *Pqp_pma_top_REG_QP_TX_DA_CTRL_0;

typedef struct
{
    

        FIELD rg_force_tx_lfps_ctrl     : 1;
        FIELD rg_fval_tx_lfps_en        : 1;
        FIELD rg_fval_tx_lfps           : 1;
        FIELD rg_tx_ser_en_ps_mode      : 1;
        FIELD rg_tfifo_rst              : 1;
        FIELD rg_force_tx_bit_reverse   : 1;
        FIELD rg_tfifo_bypass           : 1;
        FIELD rg_force_tx_bit_inverse   : 1;
        FIELD rg_force_tx_data_ctrl     : 1;
        FIELD rg_txff_redun_en          : 1;
        FIELD rg_fval_tx_ser_en         : 1;
        FIELD rg_fval_tx_data_en        : 1;
        FIELD rg_fval_tx_data           : 20;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_1, *Pqp_pma_top_REG_QP_TX_DA_CTRL_1;

typedef struct
{
    

        FIELD rg_force_tx_dem           : 1;
        FIELD rg_tx_fir_cn1             : 3;
        FIELD rg_tx_fir_c0b             : 6;
        FIELD rg_tx_fir_c1              : 5;
        FIELD rsv_15                    : 1;
        FIELD rg_tx_fir_c2              : 5;
        FIELD rg_da_qp_tx_dem           : 2;
        FIELD rg_da_qp_tx_drv_en        : 1;
        FIELD rg_qp_tx_dem_sel          : 2;
        FIELD rsv_26                    : 1;
        FIELD rg_force_tx_dem_sel       : 1;
        FIELD rg_qp_tx_dem_mode         : 4;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_2, *Pqp_pma_top_REG_QP_TX_DA_CTRL_2;

typedef struct
{
    

        FIELD rg_tx_data_test_mode      : 1;
        FIELD rg_test_tx_lfps_en        : 1;
        FIELD rg_test_tx_data_en        : 1;
        FIELD rg_test_tx_cp8            : 1;
        FIELD rg_test_tx_lfps_type      : 3;
        FIELD rsv_7                     : 1;
        FIELD rg_test_tx_data_count     : 9;
        FIELD rsv_17                    : 7;
        FIELD rg_qphy_redun_sel         : 2;
        FIELD rg_force_tphy_mode        : 1;
        FIELD rsv_27                    : 1;
        FIELD rg_tx_data_rate_sel       : 3;
        FIELD rg_ssusb_tx_ser_en_sel    : 1;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_3, *Pqp_pma_top_REG_QP_TX_DA_CTRL_3;

typedef struct
{
    

        FIELD rg_test_tx_patt_sel       : 3;
        FIELD rg_test_tx_add_id_en      : 1;
        FIELD rg_bist_add_error_en      : 1;
        FIELD rg_test_rx_bist_en        : 1;
        FIELD rg_lock_rx20b_inv         : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_bist_error_patt        : 20;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_4, *Pqp_pma_top_REG_QP_TX_DA_CTRL_4;

typedef struct
{
    

        FIELD rg_test_tx_patt0          : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_5, *Pqp_pma_top_REG_QP_TX_DA_CTRL_5;

typedef struct
{
    

        FIELD rg_test_tx_patt1          : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_6, *Pqp_pma_top_REG_QP_TX_DA_CTRL_6;

typedef struct
{
    

        FIELD rg_test_tx_patt2          : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_7, *Pqp_pma_top_REG_QP_TX_DA_CTRL_7;

typedef struct
{
    

        FIELD rg_test_tx_patt3          : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_8, *Pqp_pma_top_REG_QP_TX_DA_CTRL_8;

typedef struct
{
    

        FIELD rg_test_tseq_mode         : 1;
        FIELD rg_r2tlb_mode             : 1;
        FIELD rg_t2rlb_int_en           : 1;
        FIELD rg_t2rlb_fiforst          : 1;
        FIELD rg_r2tlb_bypass           : 1;
        FIELD rg_r2tlb_fiforst          : 1;
        FIELD rsv_6                     : 2;
        FIELD rg_r2t_data_en_dly        : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_test_tseq_cnt          : 16;
    
    
} qp_pma_top_REG_QP_TX_DA_CTRL_9, *Pqp_pma_top_REG_QP_TX_DA_CTRL_9;

typedef struct
{
    

        FIELD rg_bistctl_pat_sel        : 3;
        FIELD rg_bistctl_pat_tx_en      : 1;
        FIELD rg_bistctl_pat_rx_check_en : 1;
        FIELD rg_bistctl_bit_error_rst_sel : 1;
        FIELD rg_bistctl_io_data_inv    : 2;
        FIELD rg_bistctl_prbs_check_cnt : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_bistctl_prbs_fail_threshold : 16;
    
    
} qp_pma_top_REG_QP_PMA_BIST_CTRL_0, *Pqp_pma_top_REG_QP_PMA_BIST_CTRL_0;

typedef struct
{
    

        FIELD rg_bistctl_prbs_init_seed : 32;
    
    
} qp_pma_top_REG_QP_PMA_BIST_CTRL_1, *Pqp_pma_top_REG_QP_PMA_BIST_CTRL_1;

typedef struct
{
    

        FIELD rg_bistctl_align_pattern  : 32;
    
    
} qp_pma_top_REG_QP_PMA_BIST_CTRL_2, *Pqp_pma_top_REG_QP_PMA_BIST_CTRL_2;

typedef struct
{
    

        FIELD rg_bist_tx_data_pollution : 20;
        FIELD rsv_20                    : 4;
        FIELD rg_bist_tx_data_pollution_latch : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_QP_PMA_BIST_CTRL_3, *Pqp_pma_top_REG_QP_PMA_BIST_CTRL_3;

typedef struct
{
    

        FIELD rg_bistctl_prbs_check_timer : 24;
        FIELD rsv_24                    : 8;
    
    
} qp_pma_top_REG_QP_PMA_BIST_CTRL_4, *Pqp_pma_top_REG_QP_PMA_BIST_CTRL_4;

typedef struct
{
    

        FIELD rg_rxlfps_mon_en          : 1;
        FIELD rg_rxlfps_pwd             : 1;
        FIELD rg_rxlfps_deglitch        : 2;
        FIELD rg_ssusb_rxlfps_ovf       : 5;
        FIELD rg_ssusb_rxlfps_udf       : 5;
        FIELD rsv_14                    : 2;
        FIELD rg_ssusb_rxlfps_upb       : 5;
        FIELD rg_ssusb_rxlfps_lob       : 5;
        FIELD rsv_26                    : 1;
        FIELD rg_ssusb_lfps_sel         : 1;
        FIELD rsv_28                    : 3;
        FIELD rg_rxlfps_p3_entry        : 1;
    
    
} qp_pma_top_REG_QP_RX_LFPS_CTRL_0, *Pqp_pma_top_REG_QP_RX_LFPS_CTRL_0;

typedef struct
{
    

        FIELD rg_tx_detrx_wait_timer    : 14;
        FIELD rg_force_tx_detrx_out     : 1;
        FIELD rg_force_tx_detrx_out_val : 1;
        FIELD rg_tx_reserved_bit        : 16;
    
    
} qp_pma_top_REG_QP_TX_DETRX_TMR, *Pqp_pma_top_REG_QP_TX_DETRX_TMR;

typedef struct
{
    

        FIELD RG_QP_EQ_ALGRTHM_SEL      : 1;
        FIELD RG_QP_EQ_CHK_EYE_H        : 1;
        FIELD RG_QP_EQ_DFEXEN_SEL       : 1;
        FIELD RG_QP_EQ_DFEX_DIS         : 1;
        FIELD RG_QP_EQ_DFEX_EN          : 1;
        FIELD RG_QP_EQ_DFEX_RST         : 1;
        FIELD RG_QP_EQ_DFEYEN_STOP_DIS  : 1;
        FIELD RG_QP_EQ_DFE_TOG          : 1;
        FIELD RG_QP_EQ_EYE_CNT_EN       : 1;
        FIELD RG_QP_EQ_EYE_MON_EN       : 1;
        FIELD RG_QP_EQ_GATED_RXD_B      : 1;
        FIELD RG_QP_EQ_PILPO_ROUT       : 1;
        FIELD RG_QP_EQ_RX500M_CK_SEL    : 1;
        FIELD RG_QP_EQ_STOPTIME         : 1;
        FIELD RG_QP_EQ_TRI_DET_EN       : 1;
        FIELD RG_SSUSB_FORCE_RX_FR_MODE : 1;
        FIELD RG_SSUSB_RX_FR_MODE       : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_SSUSB_RX_DFE_EN        : 1;
        FIELD RG_SSUSB_RX_DFE_RST       : 1;
        FIELD rsv_26                    : 6;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_0, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_0;

typedef struct
{
    

        FIELD RG_QP_EQ_DD0HOS_LFI       : 7;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_EQ_DD0LOS_LFI       : 7;
        FIELD rsv_15                    : 1;
        FIELD RG_QP_EQ_DD1HOS_LFI       : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_DD1LOS_LFI       : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_1, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_1;

typedef struct
{
    

        FIELD RG_QP_EQ_DE0OS_LFI        : 7;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_EQ_DE1OS_LFI        : 7;
        FIELD rsv_15                    : 1;
        FIELD RG_QP_EQ_DEYE0OS_LFI      : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_DEYE1OS_LFI      : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_2, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_2;

typedef struct
{
    

        FIELD RG_QP_EQ_DFEXEN_DUR       : 3;
        FIELD rsv_3                     : 1;
        FIELD RG_QP_EQ_DFEX_LF_SEL      : 3;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_EQ_DFEYEN_DUR       : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_QP_EQ_DHHLOS_LFI       : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_DHHL_LFI         : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_3, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_3;

typedef struct
{
    

        FIELD RG_QP_EQ_DHHL_LF_SEL      : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_QP_EQ_DLEQOS_LFI       : 5;
        FIELD rsv_13                    : 3;
        FIELD RG_QP_EQ_DLEQ_LFI_GEN1    : 4;
        FIELD rsv_20                    : 4;
        FIELD RG_QP_EQ_DLEQ_LFI_GEN2    : 4;
        FIELD RG_QP_EQ_DLEQ_LFI_GEN3    : 4;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_4, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_4;

typedef struct
{
    

        FIELD RG_QP_EQ_DLEQ_LFI_GEN4    : 4;
        FIELD RG_QP_EQ_DLEQ_LF_SEL      : 3;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_EQ_DLHLOS_LFI       : 7;
        FIELD rsv_15                    : 1;
        FIELD RG_QP_EQ_DLHL_LFI         : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_DLHL_LF_SEL      : 3;
        FIELD rsv_27                    : 1;
        FIELD RG_QP_EQ_DSAOS_LF_SEL     : 3;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_5, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_5;

typedef struct
{
    

        FIELD RG_QP_EQ_EYE0_Y           : 7;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_EQ_EYE1_Y           : 7;
        FIELD rsv_15                    : 17;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_6, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_6;

typedef struct
{
    

        FIELD RG_QP_EQ_EYE_CNT          : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_7, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_7;

typedef struct
{
    

        FIELD RG_QP_EQ_EYE_MASK         : 10;
        FIELD rsv_10                    : 6;
        FIELD RG_QP_EQ_EYE_XOFFSET      : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_ISIFLAG_SEL      : 2;
        FIELD rsv_26                    : 2;
        FIELD RG_QP_EQ_LEQMAX           : 4;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_8, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_8;

typedef struct
{
    

        FIELD RG_QP_EQ_LEQOSC_DLYCNT    : 3;
        FIELD rsv_3                     : 1;
        FIELD RG_QP_EQ_LEQ_SHIFT        : 3;
        FIELD rsv_7                     : 1;
        FIELD RG_QP_EQ_LEQ_STOP_TO      : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_QP_EQ_MON_SEL          : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_QP_EQ_PI0_INI          : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_9, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_9;

typedef struct
{
    

        FIELD RG_QP_EQ_PI90CK_SEL       : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_QP_EQ_PI90_INI         : 7;
        FIELD rsv_15                    : 1;
        FIELD RG_QP_EQ_PIEYE_INI        : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_PI_KPGAIN        : 3;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_10, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_10;

typedef struct
{
    

        FIELD RG_QP_EQ_RESERVED         : 32;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_11, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_11;

typedef struct
{
    

        FIELD RG_QP_EQ_REV_1            : 16;
        FIELD RG_QP_EQ_REV              : 16;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_12, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_12;

typedef struct
{
    

        FIELD RG_QP_EQ_SD_CNT0          : 6;
        FIELD rsv_6                     : 2;
        FIELD RG_QP_EQ_SD_CNT1          : 6;
        FIELD rsv_14                    : 2;
        FIELD RG_QP_EQ_SIGDET           : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_QP_EQ_STARTTIME        : 2;
        FIELD rsv_26                    : 6;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_13, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_13;

typedef struct
{
    

        FIELD RG_QP_EQ_TRI_DET_TH       : 7;
        FIELD rsv_7                     : 25;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_14, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_14;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_EYE_CNT_RDY  : 1;
        FIELD RGS_SSUSB_EQ_LEQ_STOP     : 1;
        FIELD rsv_2                     : 30;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_0, *Pqp_pma_top_REG_PON_RXFEDIG_STS_0;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_DCD0H        : 7;
        FIELD rsv_7                     : 1;
        FIELD RGS_SSUSB_EQ_DCD0L        : 7;
        FIELD rsv_15                    : 1;
        FIELD RGS_SSUSB_EQ_DCD1H        : 7;
        FIELD rsv_23                    : 1;
        FIELD RGS_SSUSB_EQ_DCD1L        : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_1, *Pqp_pma_top_REG_PON_RXFEDIG_STS_1;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_DCE0         : 7;
        FIELD rsv_7                     : 1;
        FIELD RGS_SSUSB_EQ_DCE1         : 7;
        FIELD rsv_15                    : 1;
        FIELD RGS_SSUSB_EQ_DCEYE0       : 7;
        FIELD rsv_23                    : 1;
        FIELD RGS_SSUSB_EQ_DCEYE1       : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_2, *Pqp_pma_top_REG_PON_RXFEDIG_STS_2;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_DCHHL        : 7;
        FIELD rsv_7                     : 1;
        FIELD RGS_SSUSB_EQ_DCLEQ        : 4;
        FIELD rsv_12                    : 4;
        FIELD RGS_SSUSB_EQ_DCLEQOS      : 5;
        FIELD rsv_21                    : 3;
        FIELD RGS_SSUSB_EQ_DCLHL        : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_3, *Pqp_pma_top_REG_PON_RXFEDIG_STS_3;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_4, *Pqp_pma_top_REG_PON_RXFEDIG_STS_4;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_5, *Pqp_pma_top_REG_PON_RXFEDIG_STS_5;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_PILPO        : 7;
        FIELD rsv_7                     : 9;
        FIELD RGS_SSUSB_EQ_STATUS       : 8;
        FIELD rsv_24                    : 8;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_7, *Pqp_pma_top_REG_PON_RXFEDIG_STS_7;

typedef struct
{
    

        FIELD RGS_SSUSB_EQ_PROBE_OUT    : 8;
        FIELD RGS_SSUSB_RX_SD_OUT       : 1;
        FIELD rsv_9                     : 23;
    
    
} qp_pma_top_REG_PON_RXFEDIG_STS_8, *Pqp_pma_top_REG_PON_RXFEDIG_STS_8;

typedef struct
{
    

        FIELD RG_PQ_FEDIG_SPEED         : 2;
        FIELD RG_PQ_FEDIG_MODE          : 2;
        FIELD rsv_4                     : 28;
    
    
} qp_pma_top_REG_PON_RXFEDIG_CTRL_15, *Pqp_pma_top_REG_PON_RXFEDIG_CTRL_15;

typedef struct
{
    

        FIELD rg_lcpll_force_on         : 1;
        FIELD rg_ncpo_det_en            : 1;
        FIELD rg_ncpo_los_hold_en       : 1;
        FIELD rsv_3                     : 5;
        FIELD rg_lcpll_hw_ctrl_mode     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_en_inv           : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_sw_lcpll_en            : 1;
        FIELD rg_tdc_lck2ref_sel        : 1;
        FIELD rsv_26                    : 2;
        FIELD rg_tdc_ck_en_and_los      : 1;
        FIELD rg_tdc_los_inv            : 1;
        FIELD rg_int_los_inv            : 1;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_0, *Pqp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_0;

typedef struct
{
    

        FIELD rg_lcpll_man_pwdb         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_en_timer         : 8;
        FIELD rg_lcpll_pcw_man_load_timer : 8;
        FIELD rg_lcpll_ck_stb_timer     : 8;
    
    
} qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_1, *Pqp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_1;

typedef struct
{
    

        FIELD rg_tdc_ck_stb_timer       : 8;
        FIELD rg_tdc_mst_en             : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_ncpo_ana_msb           : 2;
        FIELD rsv_18                    : 14;
    
    
} qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_2, *Pqp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_2;

typedef struct
{
    

        FIELD rg_lcpll_ledck_div        : 4;
        FIELD rsv_4                     : 28;
    
    
} qp_pma_top_REG_SS_LCPLL_PWCTL_DBG_SETTING, *Pqp_pma_top_REG_SS_LCPLL_PWCTL_DBG_SETTING;

typedef struct
{
    

        FIELD rg_lcpll_tdc_dig_pwdb     : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_dpma_autopw_en   : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_dpma_dds1_pwdb   : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_dpma_dds1_iso_disable : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PW_0, *Pqp_pma_top_REG_SS_LCPLL_TDC_PW_0;

typedef struct
{
    

        FIELD rg_lcpll_dpma_dds1_iso_disable_dly : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_dpma_dds1_rstb_dly : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_lcpll_dpma_dds1_rstb   : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_dpma_dds1_pcw_ncpo_chg : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PW_1, *Pqp_pma_top_REG_SS_LCPLL_TDC_PW_1;

typedef struct
{
    

        FIELD rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_dpma_dds1_ncpo_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_dpma_dds1_ncpo_en_dly : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_lcpll_dpma_txpll1_ddsfbk_en : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PW_2, *Pqp_pma_top_REG_SS_LCPLL_TDC_PW_2;

typedef struct
{
    

        FIELD rg_lcpll_dpma_txpll1_ddsfbk_en_dly : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_tdc_cal_trig     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_tdc_cal_trig_dly : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_lcpll_tdc_cal          : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PW_3, *Pqp_pma_top_REG_SS_LCPLL_TDC_PW_3;

typedef struct
{
    

        FIELD rg_lcpll_tdc_cal_bw       : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_tdc_cal_offset   : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_tdc_en           : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdc_sigdet_cg    : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PW_4, *Pqp_pma_top_REG_SS_LCPLL_TDC_PW_4;

typedef struct
{
    

        FIELD rg_lcpll_tdc_en_mux       : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_tdc_autoen       : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_autok_tdc        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdc_sync_in_mode : 1;
        FIELD rg_ncpo_start_dly_en      : 1;
        FIELD rg_tdc_start_cnt_clr      : 1;
        FIELD rsv_27                    : 1;
        FIELD rg_tdc_start_cnt          : 4;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PW_5, *Pqp_pma_top_REG_SS_LCPLL_TDC_PW_5;

typedef struct
{
    

        FIELD rg_lcpll_pon_rx_cdr_divtdc : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_lcpll_ki               : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_lcpll_tdc_offset       : 11;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_0, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_0;

typedef struct
{
    

        FIELD rg_lcpll_gpon_sel         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_a_tdc            : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_lcpll_tdc_gain         : 11;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_1, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_1;

typedef struct
{
    

        FIELD rg_lcpll_ncpo_value       : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_2, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_2;

typedef struct
{
    

        FIELD rg_lcpll_ncpo_shift       : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_ncpo_load        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_ncpo_hold        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdc_swrst        : 1;
        FIELD rsv_25                    : 3;
        FIELD rg_sdm_upd                : 1;
        FIELD rg_sdm_upd_disb           : 1;
        FIELD rsv_30                    : 2;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_3, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_3;

typedef struct
{
    

        FIELD rg_lcpll_tdcen_rst_dlf    : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_tdc_rst          : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_tdcen_chk_lck2ref : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdcen_wait_lck2ref : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_4, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_4;

typedef struct
{
    

        FIELD rg_lcpll_tdc_waitlck_pre_dly : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_tdc_waitlck_pos_dly : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_lcpll_tdc_autopw_ncpo  : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_ncpo_chg         : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_5, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_5;

typedef struct
{
    

        FIELD rg_lcpll_ncpo_chg_mask    : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_lcpll_ncpo_chg_delay   : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_lcpll_dlf_mult_en      : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdc_pcw_sub1en   : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_6, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_6;

typedef struct
{
    

        FIELD rg_lcpll_tdcck_inv_en     : 1;
        FIELD rsv_1                     : 31;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_FLT_7, *Pqp_pma_top_REG_SS_LCPLL_TDC_FLT_7;

typedef struct
{
    

        FIELD rg_lcpll_pon_hrdds_pcw_ncpo_gpon : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PCW_1, *Pqp_pma_top_REG_SS_LCPLL_TDC_PCW_1;

typedef struct
{
    

        FIELD rg_lcpll_pon_hrdds_pcw_ncpo_epon : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_PCW_2, *Pqp_pma_top_REG_SS_LCPLL_TDC_PCW_2;

typedef struct
{
    

        FIELD ro_lcpll_tdc_tdcpw_st     : 4;
        FIELD rsv_4                     : 4;
        FIELD ro_lcpll_tdc_st           : 5;
        FIELD rsv_13                    : 3;
        FIELD ro_lcpll_tdc_dig          : 12;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_RO_1, *Pqp_pma_top_REG_SS_LCPLL_TDC_RO_1;

typedef struct
{
    

        FIELD ro_lcpll_tdc_dlf_gain     : 20;
        FIELD ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg : 1;
        FIELD ro_lcpll_tdc_dpma_dds1_ncpo_en : 1;
        FIELD ro_lcpll_tdc_dpma_dds1_rstb : 1;
        FIELD ro_lcpll_tdc_dpma_dds1_iso_disable : 1;
        FIELD ro_lcpll_tdc_dpma_dds1_pwdb : 1;
        FIELD ro_lcpll_tdc_en_lck2ref_rst : 1;
        FIELD ro_lcpll_tdc_dpma_rx_ck_stb : 1;
        FIELD ro_lcpll_tdc_dpma_tdc_en  : 1;
        FIELD ro_lcpll_tdc_dpma_tdc_cal_bw : 1;
        FIELD ro_lcpll_tdc_dpma_tdc_cal_offset : 1;
        FIELD ro_lcpll_tdc_dpma_txpll1_ddsfbk_en : 1;
        FIELD ro_lcpll_tdc_dpma_tdc_ck_stb : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_RO_2, *Pqp_pma_top_REG_SS_LCPLL_TDC_RO_2;

typedef struct
{
    

        FIELD ro_lcpll_tdc_offset       : 11;
        FIELD ro_lcpll_tdc_cal_done     : 1;
        FIELD ro_lcpll_tdc_en           : 1;
        FIELD ro_lcpll_tdc_decode       : 3;
        FIELD ro_lcpll_tdc_gain         : 11;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_RO_3, *Pqp_pma_top_REG_SS_LCPLL_TDC_RO_3;

typedef struct
{
    

        FIELD ro_lcpll_tdc_dpma_dds1_pcw_ncpo : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_RO_4, *Pqp_pma_top_REG_SS_LCPLL_TDC_RO_4;

typedef struct
{
    

        FIELD ro_lcpll_tdc_dpma_tdc_leadlag : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_lcpll_tdc_dpma_tdc_d   : 8;
        FIELD ro_lcpll_tdc_dpma_tdc_c   : 8;
        FIELD rsv_24                    : 8;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_RO_5, *Pqp_pma_top_REG_SS_LCPLL_TDC_RO_5;

typedef struct
{
    

        FIELD rg_lcpll_ki_hold          : 1;
        FIELD rsv_1                     : 31;
    
    
} qp_pma_top_REG_SS_LCPLL_TDC_CTRL_0, *Pqp_pma_top_REG_SS_LCPLL_TDC_CTRL_0;

typedef struct
{
    

        FIELD eee_lcpll_hold            : 1;
        FIELD rsv_1                     : 7;
        FIELD tdc_sync_pcw_ncpo_chg     : 1;
        FIELD rsv_9                     : 23;
    
    
} qp_pma_top_REG_SS_LCPLL_0, *Pqp_pma_top_REG_SS_LCPLL_0;

typedef struct
{
    

        FIELD tdc_sync_pcw_ncpo         : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_SS_LCPLL_1, *Pqp_pma_top_REG_SS_LCPLL_1;

typedef struct
{
    

        FIELD flagl_sel                 : 8;
        FIELD flagh_sel                 : 8;
        FIELD lcpll_top_flagl_en        : 1;
        FIELD rsv_17                    : 7;
        FIELD lcpll_top_flagh_en        : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_SS_LCPLL_2, *Pqp_pma_top_REG_SS_LCPLL_2;

typedef struct
{
    

        FIELD ro_dlf_gain_new           : 8;
        FIELD ro_dlf_gain_rund_new      : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_TDC_DLF_GAIN_STATUS, *Pqp_pma_top_REG_TDC_DLF_GAIN_STATUS;

typedef struct
{
    

        FIELD ro_dlf_gain_new_org       : 20;
        FIELD rsv_20                    : 4;
        FIELD rg_dlf_mode_sel           : 1;
        FIELD rsv_25                    : 6;
        FIELD rg_dlf_gain_latch         : 1;
    
    
} qp_pma_top_REG_TDC_DLF_MODE_SETTING, *Pqp_pma_top_REG_TDC_DLF_MODE_SETTING;

typedef struct
{
    

        FIELD rg_tdc_ncpo_hold_release_time : 16;
        FIELD rg_tdc_los_hold_mux       : 1;
        FIELD rsv_17                    : 3;
        FIELD rg_ncpo_toggle            : 1;
        FIELD rsv_21                    : 3;
        FIELD rg_ncpo_hold_en           : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_TDC_HOLD_CTRL_0, *Pqp_pma_top_REG_TDC_HOLD_CTRL_0;

typedef struct
{
    

        FIELD rg_ncpo_up_thred          : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_TDC_HOLD_CTRL_1, *Pqp_pma_top_REG_TDC_HOLD_CTRL_1;

typedef struct
{
    

        FIELD rg_ncpo_dwn_thred         : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_TDC_HOLD_CTRL_2, *Pqp_pma_top_REG_TDC_HOLD_CTRL_2;

typedef struct
{
    

        FIELD ro_ncpo_output            : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_TDC_HOLD_STATUS_0, *Pqp_pma_top_REG_TDC_HOLD_STATUS_0;

typedef struct
{
    

        FIELD ro_ncpo_max_output        : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_TDC_HOLD_STATUS_1, *Pqp_pma_top_REG_TDC_HOLD_STATUS_1;

typedef struct
{
    

        FIELD ro_ncpo_min_output        : 31;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_TDC_HOLD_STATUS_2, *Pqp_pma_top_REG_TDC_HOLD_STATUS_2;

typedef struct
{
    

        FIELD rg_ncpo_clr               : 1;
        FIELD rg_ncpo_flag_clr          : 1;
        FIELD rsv_2                     : 30;
    
    
} qp_pma_top_REG_TDC_CLR_0, *Pqp_pma_top_REG_TDC_CLR_0;

typedef struct
{
    

        FIELD rg_ad_qp_sigdet_out_force : 1;
        FIELD rg_ad_qp_sigdet_out_sel   : 1;
        FIELD rg_ad_qp_sigdet_cal_out_force : 1;
        FIELD rg_ad_qp_sigdet_cal_out_sel : 1;
        FIELD rg_ad_qp_rx_lfps_force    : 1;
        FIELD rg_ad_qp_rx_lfps_sel      : 1;
        FIELD rg_ad_qp_crsdet_out_force : 1;
        FIELD rg_ad_qp_crsdet_out_sel   : 1;
        FIELD rg_ad_qp_crsdet_lthout_force : 1;
        FIELD rg_ad_qp_crsdet_lthout_sel : 1;
        FIELD rg_ad_qp_cdr_pi_pderr_force : 1;
        FIELD rg_ad_qp_cdr_pi_pderr_sel : 1;
        FIELD rg_ad_qp_cdr_lpf_oneshot_trig_force : 1;
        FIELD rg_ad_qp_cdr_lpf_oneshot_trig_sel : 1;
        FIELD rg_ad_qp_cdr_pr_fll_dig_rstb_force : 1;
        FIELD rg_ad_qp_cdr_pr_fll_dig_rstb_sel : 1;
        FIELD rg_ad_qp_cdr_pr_vco_overspeed_force : 1;
        FIELD rg_ad_qp_cdr_pr_vco_overspeed_sel : 1;
        FIELD rg_ad_qp_termcal_dir_force : 1;
        FIELD rg_ad_qp_termcal_dir_sel  : 1;
        FIELD rg_ad_qp_tx_cmdet_force   : 1;
        FIELD rg_ad_qp_tx_cmdet_sel     : 1;
        FIELD rg_ad_pcie_ckdet_out_force : 1;
        FIELD rg_ad_pcie_ckdet_out_sel  : 1;
        FIELD rg_ad_qp_pll_vcocal_cplt_force : 1;
        FIELD rg_ad_qp_pll_vcocal_cplt_sel : 1;
        FIELD rg_ad_qp_pll_ssc_dir_force : 1;
        FIELD rg_ad_qp_pll_ssc_dir_sel  : 1;
        FIELD rg_ad_qp_pll_ssc_en_force : 1;
        FIELD rg_ad_qp_pll_ssc_en_sel   : 1;
        FIELD rg_ad_qp_tdc_leadlag_force : 1;
        FIELD rg_ad_qp_tdc_leadlag_sel  : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_0, *Pqp_pma_top_REG_INTF_CTRL_0;

typedef struct
{
    

        FIELD rg_ad_qp_pll_vcocal_state_force : 8;
        FIELD rg_ad_qp_pll_vcocal_state_sel : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_ad_qp_tdc_c_force      : 8;
        FIELD rg_ad_qp_tdc_c_sel        : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_INTF_CTRL_1, *Pqp_pma_top_REG_INTF_CTRL_1;

typedef struct
{
    

        FIELD rg_ad_qp_tdc_d_force      : 8;
        FIELD rg_ad_qp_tdc_d_sel        : 1;
        FIELD rsv_9                     : 23;
    
    
} qp_pma_top_REG_INTF_CTRL_2, *Pqp_pma_top_REG_INTF_CTRL_2;

typedef struct
{
    

        FIELD rg_ad_qp_cdr_lpf_snapshotvalue_force : 19;
        FIELD rg_ad_qp_cdr_lpf_snapshotvalue_sel : 1;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_INTF_CTRL_3, *Pqp_pma_top_REG_INTF_CTRL_3;

typedef struct
{
    

        FIELD rg_ad_qp_cdr_pr_adc_force : 20;
        FIELD rg_ad_qp_cdr_pr_adc_sel   : 1;
        FIELD rsv_21                    : 11;
    
    
} qp_pma_top_REG_INTF_CTRL_4, *Pqp_pma_top_REG_INTF_CTRL_4;

typedef struct
{
    

        FIELD rg_da_qp_lfps_pwd_force   : 1;
        FIELD rg_da_qp_lfps_pwd_sel     : 1;
        FIELD rg_da_qp_rx_afe_pwd_force : 1;
        FIELD rg_da_qp_rx_afe_pwd_sel   : 1;
        FIELD rg_da_qp_rx_hz_force      : 1;
        FIELD rg_da_qp_rx_hz_sel        : 1;
        FIELD rg_da_qp_rx_p3_entry_force : 1;
        FIELD rg_da_qp_rx_p3_entry_sel  : 1;
        FIELD rg_da_qp_sigdet_en_force  : 1;
        FIELD rg_da_qp_sigdet_en_sel    : 1;
        FIELD rg_da_qp_sigdet_cal_en_force : 1;
        FIELD rg_da_qp_sigdet_cal_en_sel : 1;
        FIELD rg_da_qp_crsdet_en_force  : 1;
        FIELD rg_da_qp_crsdet_en_sel    : 1;
        FIELD rg_da_qp_rx_saosc_en_force : 1;
        FIELD rg_da_qp_rx_saosc_en_sel  : 1;
        FIELD rg_da_qp_crsdet_rstb_force : 1;
        FIELD rg_da_qp_crsdet_rstb_sel  : 1;
        FIELD rg_da_qp_rx_scan_force    : 1;
        FIELD rg_da_qp_rx_scan_sel      : 1;
        FIELD rg_da_qp_cdr_lpf_rstb_force : 1;
        FIELD rg_da_qp_cdr_lpf_rstb_sel : 1;
        FIELD rg_da_qp_cdr_lck2data_force : 1;
        FIELD rg_da_qp_cdr_lck2data_sel : 1;
        FIELD rg_da_qp_cdr_pr_pwdb_force : 1;
        FIELD rg_da_qp_cdr_pr_pwdb_sel  : 1;
        FIELD rg_da_qp_cdr_pr_kband_rstb_force : 1;
        FIELD rg_da_qp_cdr_pr_kband_rstb_sel : 1;
        FIELD rg_da_qp_cdr_pr_lpf_c_en_force : 1;
        FIELD rg_da_qp_cdr_pr_lpf_c_en_sel : 1;
        FIELD rg_da_qp_cdr_pr_lpf_r_en_force : 1;
        FIELD rg_da_qp_cdr_pr_lpf_r_en_sel : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_5, *Pqp_pma_top_REG_INTF_CTRL_5;

typedef struct
{
    

        FIELD rg_da_qp_cdr_pr_pieye_pwdb_force : 1;
        FIELD rg_da_qp_cdr_pr_pieye_pwdb_sel : 1;
        FIELD rg_da_qp_cdr_pd_pwdb_force : 1;
        FIELD rg_da_qp_cdr_pd_pwdb_sel  : 1;
        FIELD rg_da_qp_tx_term_vref_sel_force : 1;
        FIELD rg_da_qp_tx_term_vref_sel_sel : 1;
        FIELD rg_da_qp_tx_drv_en_force  : 1;
        FIELD rg_da_qp_tx_drv_en_sel    : 1;
        FIELD rg_da_qp_tx_impcalib_en_force : 1;
        FIELD rg_da_qp_tx_impcalib_en_sel : 1;
        FIELD rg_da_qp_rxdet_en_force   : 1;
        FIELD rg_da_qp_rxdet_en_sel     : 1;
        FIELD rg_da_qp_tx_data_en_force : 1;
        FIELD rg_da_qp_tx_data_en_sel   : 1;
        FIELD rg_da_qp_tx_ser_en_force  : 1;
        FIELD rg_da_qp_tx_ser_en_sel    : 1;
        FIELD rg_da_qp_tx_eidle_lp_en_force : 1;
        FIELD rg_da_qp_tx_eidle_lp_en_sel : 1;
        FIELD rg_da_qp_tx_lfps_en_force : 1;
        FIELD rg_da_qp_tx_lfps_en_sel   : 1;
        FIELD rg_da_qp_tx_lfps_force    : 1;
        FIELD rg_da_qp_tx_lfps_sel      : 1;
        FIELD rg_da_qp_bias_en_force    : 1;
        FIELD rg_da_qp_bias_en_sel      : 1;
        FIELD rg_da_qp_bg_lpf_en_force  : 1;
        FIELD rg_da_qp_bg_lpf_en_sel    : 1;
        FIELD rg_da_pcie_clkrx_en_force : 1;
        FIELD rg_da_pcie_clkrx_en_sel   : 1;
        FIELD rg_da_pcie_clktx_en_force : 1;
        FIELD rg_da_pcie_clktx_en_sel   : 1;
        FIELD rg_da_qp_xtal_rx_en_force : 1;
        FIELD rg_da_qp_xtal_rx_en_sel   : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_6, *Pqp_pma_top_REG_INTF_CTRL_6;

typedef struct
{
    

        FIELD rg_da_pcie_ckdet_en_force : 1;
        FIELD rg_da_pcie_ckdet_en_sel   : 1;
        FIELD rg_da_qp_pll_sdm_di_en_force : 1;
        FIELD rg_da_qp_pll_sdm_di_en_sel : 1;
        FIELD rg_da_qp_pll_en_force     : 1;
        FIELD rg_da_qp_pll_en_sel       : 1;
        FIELD rg_da_qp_pll_icoiq_en_force : 1;
        FIELD rg_da_qp_pll_icoiq_en_sel : 1;
        FIELD rg_da_qp_pll_pck_sel_force : 1;
        FIELD rg_da_qp_pll_pck_sel_sel  : 1;
        FIELD rg_da_qp_pll_pfd_offset_en_force : 1;
        FIELD rg_da_qp_pll_pfd_offset_en_sel : 1;
        FIELD rg_da_qp_pll_phy_ck_en_force : 1;
        FIELD rg_da_qp_pll_phy_ck_en_sel : 1;
        FIELD rg_da_qp_pll_postdiv_en_force : 1;
        FIELD rg_da_qp_pll_postdiv_en_sel : 1;
        FIELD rg_da_qp_pll_rico_sel_force : 1;
        FIELD rg_da_qp_pll_rico_sel_sel : 1;
        FIELD rg_da_qp_pll_sdm_chg_force : 1;
        FIELD rg_da_qp_pll_sdm_chg_sel  : 1;
        FIELD rg_da_qp_pll_sdm_ifm_force : 1;
        FIELD rg_da_qp_pll_sdm_ifm_sel  : 1;
        FIELD rg_da_qp_pll_ssc_en_force : 1;
        FIELD rg_da_qp_pll_ssc_en_sel   : 1;
        FIELD rg_da_qp_pll_icolp_en_force : 1;
        FIELD rg_da_qp_pll_icolp_en_sel : 1;
        FIELD rg_da_qp_pll_tdc_txck_sel_force : 1;
        FIELD rg_da_qp_pll_tdc_txck_sel_sel : 1;
        FIELD rg_da_qp_tdc_cal_bw_force : 1;
        FIELD rg_da_qp_tdc_cal_bw_sel   : 1;
        FIELD rg_da_qp_tdc_cal_offset_force : 1;
        FIELD rg_da_qp_tdc_cal_offset_sel : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_7, *Pqp_pma_top_REG_INTF_CTRL_7;

typedef struct
{
    

        FIELD rg_da_qp_tdc_en_force     : 1;
        FIELD rg_da_qp_tdc_en_sel       : 1;
        FIELD rg_da_qp_lfps_deglitch_force : 2;
        FIELD rg_da_qp_lfps_deglitch_sel : 1;
        FIELD rg_da_qp_tx_term_sel_force : 2;
        FIELD rg_da_qp_tx_term_sel_sel  : 1;
        FIELD rg_da_qp_tx_dem_force     : 2;
        FIELD rg_da_qp_tx_dem_sel       : 1;
        FIELD rg_da_qp_xtal_ext_en_force : 2;
        FIELD rg_da_qp_xtal_ext_en_sel  : 1;
        FIELD rg_da_qp_pll_bc_force     : 2;
        FIELD rg_da_qp_pll_bc_sel       : 1;
        FIELD rg_da_qp_pll_bpb_force    : 2;
        FIELD rg_da_qp_pll_bpb_sel      : 1;
        FIELD rg_da_qp_pll_fbksel_force : 2;
        FIELD rg_da_qp_pll_fbksel_sel   : 1;
        FIELD rg_da_qp_pll_kband_prediv_force : 2;
        FIELD rg_da_qp_pll_kband_prediv_sel : 1;
        FIELD rg_da_qp_pll_pfd_offset_force : 2;
        FIELD rg_da_qp_pll_pfd_offset_sel : 1;
        FIELD rg_da_qp_pll_sdm_hren_force : 2;
        FIELD rg_da_qp_pll_sdm_hren_sel : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_8, *Pqp_pma_top_REG_INTF_CTRL_8;

typedef struct
{
    

        FIELD rg_da_qp_pll_ssc_dir_dly_force : 2;
        FIELD rg_da_qp_pll_ssc_dir_dly_sel : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_da_qp_tx_fir_cn1_force : 3;
        FIELD rg_da_qp_tx_fir_cn1_sel   : 1;
        FIELD rg_da_qp_pll_bpa_force    : 3;
        FIELD rg_da_qp_pll_bpa_sel      : 1;
        FIELD rg_da_qp_pll_br_force     : 3;
        FIELD rg_da_qp_pll_br_sel       : 1;
        FIELD rg_da_qp_rx_dcleq_force   : 4;
        FIELD rg_da_qp_rx_dcleq_sel     : 1;
        FIELD rg_da_qp_pll_ir_force     : 4;
        FIELD rg_da_qp_pll_ir_sel       : 1;
        FIELD rg_da_qp_rx_imp_sel_force : 5;
        FIELD rg_da_qp_rx_imp_sel_sel   : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_9, *Pqp_pma_top_REG_INTF_CTRL_9;

typedef struct
{
    

        FIELD rg_da_qp_sigdet_cal_offset_force : 5;
        FIELD rg_da_qp_sigdet_cal_offset_sel : 1;
        FIELD rsv_6                     : 2;
        FIELD rg_da_qp_cdr_pr_fll_cor_force : 5;
        FIELD rg_da_qp_cdr_pr_fll_cor_sel : 1;
        FIELD rsv_14                    : 2;
        FIELD rg_da_qp_tx_fir_c1_force  : 5;
        FIELD rg_da_qp_tx_fir_c1_sel    : 1;
        FIELD rsv_22                    : 2;
        FIELD rg_da_qp_tx_fir_c2_force  : 5;
        FIELD rg_da_qp_tx_fir_c2_sel    : 1;
        FIELD rsv_30                    : 2;
    
    
} qp_pma_top_REG_INTF_CTRL_10, *Pqp_pma_top_REG_INTF_CTRL_10;

typedef struct
{
    

        FIELD rg_da_qp_tx_fir_c0b_force : 6;
        FIELD rg_da_qp_tx_fir_c0b_sel   : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_da_qp_cdr_pr_pieye_force : 7;
        FIELD rg_da_qp_cdr_pr_pieye_sel : 1;
        FIELD rg_da_qp_cdr_pr_idac_force : 11;
        FIELD rg_da_qp_cdr_pr_idac_sel  : 1;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_INTF_CTRL_11, *Pqp_pma_top_REG_INTF_CTRL_11;

typedef struct
{
    

        FIELD rg_da_qp_pll_ssc_delta_force : 16;
        FIELD rg_da_qp_pll_ssc_delta_sel : 1;
        FIELD rsv_17                    : 15;
    
    
} qp_pma_top_REG_INTF_CTRL_12, *Pqp_pma_top_REG_INTF_CTRL_12;

typedef struct
{
    

        FIELD rg_da_qp_pll_ssc_period_force : 16;
        FIELD rg_da_qp_pll_ssc_period_sel : 1;
        FIELD rsv_17                    : 15;
    
    
} qp_pma_top_REG_INTF_CTRL_13, *Pqp_pma_top_REG_INTF_CTRL_13;

typedef struct
{
    

        FIELD rg_da_qp_pll_sdm_pcw_force_31_0 : 32;
    
    
} qp_pma_top_REG_INTF_CTRL_14, *Pqp_pma_top_REG_INTF_CTRL_14;

typedef struct
{
    

        FIELD rg_da_qp_tx_data_force    : 20;
        FIELD rsv_20                    : 4;
        FIELD rg_da_qp_tx_data_sel      : 1;
        FIELD rsv_25                    : 3;
        FIELD rg_da_qp_pll_sdm_pcw_force_33_32 : 2;
        FIELD rsv_30                    : 1;
        FIELD rg_da_qp_pll_sdm_pcw_sel  : 1;
    
    
} qp_pma_top_REG_INTF_CTRL_15, *Pqp_pma_top_REG_INTF_CTRL_15;

typedef struct
{
    

        FIELD ro_da_qp_lfps_pwd         : 1;
        FIELD ro_da_qp_rx_afe_pwd       : 1;
        FIELD ro_da_qp_rx_hz            : 1;
        FIELD ro_da_qp_rx_p3_entry      : 1;
        FIELD ro_da_qp_sigdet_en        : 1;
        FIELD ro_da_qp_sigdet_cal_en    : 1;
        FIELD ro_da_qp_crsdet_en        : 1;
        FIELD ro_da_qp_rx_saosc_en      : 1;
        FIELD ro_da_qp_crsdet_rstb      : 1;
        FIELD ro_da_qp_rx_scan          : 1;
        FIELD ro_da_qp_cdr_lpf_rstb     : 1;
        FIELD ro_da_qp_cdr_lck2data     : 1;
        FIELD ro_da_qp_cdr_pr_pwdb      : 1;
        FIELD ro_da_qp_cdr_pr_kband_rstb : 1;
        FIELD ro_da_qp_cdr_pr_lpf_c_en  : 1;
        FIELD ro_da_qp_cdr_pr_lpf_r_en  : 1;
        FIELD ro_da_qp_cdr_pr_pieye_pwdb : 1;
        FIELD ro_da_qp_cdr_pd_pwdb      : 1;
        FIELD ro_da_qp_tx_term_vref_sel : 1;
        FIELD ro_da_qp_tx_drv_en        : 1;
        FIELD ro_da_qp_tx_impcalib_en   : 1;
        FIELD ro_da_qp_rxdet_en         : 1;
        FIELD ro_da_qp_tx_data_en       : 1;
        FIELD ro_da_qp_tx_ser_en        : 1;
        FIELD ro_da_qp_tx_eidle_lp_en   : 1;
        FIELD ro_da_qp_tx_lfps_en       : 1;
        FIELD ro_da_qp_tx_lfps          : 1;
        FIELD ro_da_qp_bias_en          : 1;
        FIELD ro_da_qp_bg_lpf_en        : 1;
        FIELD ro_da_pcie_clkrx_en       : 1;
        FIELD ro_da_pcie_clktx_en       : 1;
        FIELD ro_da_qp_xtal_rx_en       : 1;
    
    
} qp_pma_top_REG_INTF_STS_0, *Pqp_pma_top_REG_INTF_STS_0;

typedef struct
{
    

        FIELD ro_da_pcie_ckdet_en       : 1;
        FIELD ro_da_qp_pll_sdm_di_en    : 1;
        FIELD ro_da_qp_pll_en           : 1;
        FIELD ro_da_qp_pll_icoiq_en     : 1;
        FIELD ro_da_qp_pll_pck_sel      : 1;
        FIELD ro_da_qp_pll_pfd_offset_en : 1;
        FIELD ro_da_qp_pll_phy_ck_en    : 1;
        FIELD ro_da_qp_pll_postdiv_en   : 1;
        FIELD ro_da_qp_pll_rico_sel     : 1;
        FIELD ro_da_qp_pll_sdm_chg      : 1;
        FIELD ro_da_qp_pll_sdm_ifm      : 1;
        FIELD ro_da_qp_pll_ssc_en       : 1;
        FIELD ro_da_qp_pll_icolp_en     : 1;
        FIELD ro_da_qp_pll_tdc_txck_sel : 1;
        FIELD ro_da_qp_tdc_cal_bw       : 1;
        FIELD ro_da_qp_tdc_cal_offset   : 1;
        FIELD ro_da_qp_tdc_en           : 1;
        FIELD rsv_17                    : 1;
        FIELD ro_da_qp_lfps_deglitch    : 2;
        FIELD ro_da_qp_tx_term_sel      : 2;
        FIELD ro_da_qp_tx_dem           : 2;
        FIELD ro_da_qp_xtal_ext_en      : 2;
        FIELD ro_da_qp_pll_bc           : 2;
        FIELD ro_da_qp_pll_bpb          : 2;
        FIELD ro_da_qp_pll_fbksel       : 2;
    
    
} qp_pma_top_REG_INTF_STS_1, *Pqp_pma_top_REG_INTF_STS_1;

typedef struct
{
    

        FIELD ro_da_qp_pll_kband_prediv : 2;
        FIELD ro_da_qp_pll_pfd_offset   : 2;
        FIELD ro_da_qp_pll_sdm_hren     : 2;
        FIELD ro_da_qp_pll_ssc_dir_dly  : 2;
        FIELD ro_da_qp_tx_fir_cn1       : 3;
        FIELD rsv_11                    : 1;
        FIELD ro_da_qp_pll_bpa          : 3;
        FIELD rsv_15                    : 1;
        FIELD ro_da_qp_pll_br           : 3;
        FIELD rsv_19                    : 1;
        FIELD ro_da_qp_rx_dcleq         : 4;
        FIELD ro_da_qp_pll_ir           : 4;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_INTF_STS_2, *Pqp_pma_top_REG_INTF_STS_2;

typedef struct
{
    

        FIELD ro_da_qp_rx_imp_sel       : 5;
        FIELD rsv_5                     : 3;
        FIELD ro_da_qp_sigdet_cal_offset : 5;
        FIELD rsv_13                    : 3;
        FIELD ro_da_qp_cdr_pr_fll_cor   : 5;
        FIELD rsv_21                    : 3;
        FIELD ro_da_qp_tx_fir_c1        : 5;
        FIELD rsv_29                    : 3;
    
    
} qp_pma_top_REG_INTF_STS_3, *Pqp_pma_top_REG_INTF_STS_3;

typedef struct
{
    

        FIELD ro_da_qp_tx_fir_c2        : 5;
        FIELD rsv_5                     : 3;
        FIELD ro_da_qp_tx_fir_c0b       : 6;
        FIELD rsv_14                    : 2;
        FIELD ro_da_qp_cdr_pr_pieye     : 7;
        FIELD rsv_23                    : 9;
    
    
} qp_pma_top_REG_INTF_STS_4, *Pqp_pma_top_REG_INTF_STS_4;

typedef struct
{
    

        FIELD ro_da_qp_cdr_pr_idac      : 11;
        FIELD rsv_11                    : 21;
    
    
} qp_pma_top_REG_INTF_STS_5, *Pqp_pma_top_REG_INTF_STS_5;

typedef struct
{
    

        FIELD ro_da_qp_pll_ssc_delta    : 16;
        FIELD ro_da_qp_pll_ssc_period   : 16;
    
    
} qp_pma_top_REG_INTF_STS_6, *Pqp_pma_top_REG_INTF_STS_6;

typedef struct
{
    

        FIELD ro_da_qp_tx_data          : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_INTF_STS_7, *Pqp_pma_top_REG_INTF_STS_7;

typedef struct
{
    

        FIELD ro_da_qp_pll_sdm_pcw_31_0 : 32;
    
    
} qp_pma_top_REG_INTF_STS_8, *Pqp_pma_top_REG_INTF_STS_8;

typedef struct
{
    

        FIELD ro_ad_qp_sigdet_out_intf  : 1;
        FIELD ro_ad_qp_sigdet_cal_out_intf : 1;
        FIELD ro_ad_qp_rx_lfps_intf     : 1;
        FIELD ro_ad_qp_crsdet_out_intf  : 1;
        FIELD ro_ad_qp_crsdet_lthout_intf : 1;
        FIELD ro_ad_qp_cdr_pi_pderr_intf : 1;
        FIELD ro_ad_qp_cdr_lpf_oneshot_trig_intf : 1;
        FIELD ro_ad_qp_cdr_pr_fll_dig_rstb_intf : 1;
        FIELD ro_ad_qp_cdr_pr_vco_overspeed_intf : 1;
        FIELD ro_ad_qp_termcal_dir_intf : 1;
        FIELD ro_ad_qp_tx_cmdet_intf    : 1;
        FIELD ro_ad_pcie_ckdet_out_intf : 1;
        FIELD ro_ad_qp_pll_ssc_dir_intf : 1;
        FIELD ro_ad_qp_pll_ssc_en_intf  : 1;
        FIELD ro_ad_qp_tdc_leadlag_intf : 1;
        FIELD rsv_15                    : 1;
        FIELD ro_ad_qp_pll_vcocal_state_intf : 8;
        FIELD ro_ad_qp_tdc_c_intf       : 8;
    
    
} qp_pma_top_REG_INTF_STS_9, *Pqp_pma_top_REG_INTF_STS_9;

typedef struct
{
    

        FIELD ro_ad_qp_tdc_d_intf       : 8;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_INTF_STS_10, *Pqp_pma_top_REG_INTF_STS_10;

typedef struct
{
    

        FIELD ro_ad_qp_cdr_lpf_snapshotvalue_intf : 19;
        FIELD rsv_19                    : 13;
    
    
} qp_pma_top_REG_INTF_STS_11, *Pqp_pma_top_REG_INTF_STS_11;

typedef struct
{
    

        FIELD ro_ad_qp_cdr_pr_adc_intf  : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_INTF_STS_12, *Pqp_pma_top_REG_INTF_STS_12;

typedef struct
{
    

        FIELD rg_phya_auto_init         : 1;
        FIELD rg_phya_pwd_mux           : 1;
        FIELD rg_phya_pwd               : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_tx_disable_mux         : 1;
        FIELD rg_tx_disable             : 1;
        FIELD rg_rx_pwd_mux             : 1;
        FIELD rg_rx_pwd                 : 1;
        FIELD rg_force_da_pll_en        : 1;
        FIELD rg_da_pll_en              : 1;
        FIELD rg_da_pll_en_mux          : 1;
        FIELD rsv_11                    : 5;
        FIELD rg_da_pll_en_dly_cnt      : 8;
        FIELD rsv_24                    : 8;
    
    
} qp_pma_top_REG_PLL_CTRL_0, *Pqp_pma_top_REG_PLL_CTRL_0;

typedef struct
{
    

        FIELD rg_lpf_en_to_ssc_dly_cnt  : 16;
        FIELD rg_bias_pwd_to_bg_lpf_en_dly : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_syspll_pwd_to_syspll_ready_dly : 4;
        FIELD rg_pll_autok_vco_to_pll_bias_lpf_en_dly : 2;
        FIELD rg_qp_pll_ssc_en          : 1;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PLL_CTRL_1, *Pqp_pma_top_REG_PLL_CTRL_1;

typedef struct
{
    

        FIELD rg_da_qp_pll_bc_intf      : 2;
        FIELD rg_da_qp_pll_bpa_intf     : 3;
        FIELD rsv_5                     : 1;
        FIELD rg_da_qp_pll_bpb_intf     : 2;
        FIELD rg_da_qp_pll_br_intf      : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_da_qp_pll_fbksel_intf  : 2;
        FIELD rg_da_qp_pll_icoiq_en_intf : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_da_qp_pll_ir_intf      : 4;
        FIELD rg_da_qp_pll_kband_prediv_intf : 2;
        FIELD rg_da_qp_pll_pck_sel_intf : 1;
        FIELD rsv_23                    : 1;
        FIELD rg_da_qp_pll_pfd_offset_intf : 2;
        FIELD rg_da_qp_pll_pfd_offset_en_intf : 1;
        FIELD rg_da_qp_pll_phy_ck_en_intf : 1;
        FIELD rg_da_qp_pll_postdiv_en_intf : 1;
        FIELD rg_da_qp_pll_rico_sel_intf : 1;
        FIELD rg_da_qp_pll_sdm_ifm_intf : 1;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_PLL_CTRL_2, *Pqp_pma_top_REG_PLL_CTRL_2;

typedef struct
{
    

        FIELD rg_da_qp_pll_ssc_delta_intf : 16;
        FIELD rg_da_qp_pll_ssc_period_intf : 16;
    
    
} qp_pma_top_REG_PLL_CTRL_3, *Pqp_pma_top_REG_PLL_CTRL_3;

typedef struct
{
    

        FIELD rg_da_qp_pll_ssc_dir_dly_intf : 2;
        FIELD rg_da_qp_pll_icolp_en_intf : 1;
        FIELD rg_da_qp_pll_sdm_hren_intf : 2;
        FIELD rsv_5                     : 27;
    
    
} qp_pma_top_REG_PLL_CTRL_4, *Pqp_pma_top_REG_PLL_CTRL_4;

typedef struct
{
    

        FIELD rg_da_qp_xtal_ext_en_intf : 2;
        FIELD rsv_2                     : 2;
        FIELD rg_da_pcie_clkrx_en_intf  : 1;
        FIELD rg_da_pcie_clktx_en_intf  : 1;
        FIELD rg_da_qp_xtal_rx_en_intf  : 1;
        FIELD rg_da_pcie_ckdet_en_intf  : 1;
        FIELD rg_da_qp_pll_sdm_di_en_intf : 1;
        FIELD rg_da_qp_pll_tdc_txck_sel_intf : 1;
        FIELD rsv_10                    : 22;
    
    
} qp_pma_top_REG_PLL_CK_CTRL_0, *Pqp_pma_top_REG_PLL_CK_CTRL_0;

typedef struct
{
    

        FIELD rg_pll_stabel_cnt         : 8;
        FIELD rg_pll_cplt_stabel_cnt    : 8;
        FIELD rg_pll_cplt_force_on      : 1;
        FIELD rg_pll_cplt_force_off     : 1;
        FIELD rg_pll_force_stable       : 1;
        FIELD rg_pll_force_unstable     : 1;
        FIELD rg_pll_stable_source_sel  : 1;
        FIELD rsv_21                    : 11;
    
    
} qp_pma_top_REG_PLL_CK_CTRL_1, *Pqp_pma_top_REG_PLL_CK_CTRL_1;

typedef struct
{
    

        FIELD rg_pcie_mode_pll_auto_en  : 1;
        FIELD rg_pcie_mode_pll_auto_on_en : 1;
        FIELD rg_pcie_mode_pll_auto_off_en : 1;
        FIELD rsv_3                     : 29;
    
    
} qp_pma_top_REG_PLL_CK_CTRL_2, *Pqp_pma_top_REG_PLL_CK_CTRL_2;

typedef struct
{
    

        FIELD rg_qp_pma_top_int_en      : 1;
        FIELD rsv_1                     : 3;
        FIELD rg_qp_gdump_sel           : 4;
        FIELD rg_freq_meter_rtl_modified : 1;
        FIELD rsv_9                     : 23;
    
    
} qp_pma_top_REG_SYS_CTRL_0, *Pqp_pma_top_REG_SYS_CTRL_0;

typedef struct
{
    

        FIELD rg_tx_short_fifo_r_thresold : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_tx_short_fifo_w_thresold : 5;
        FIELD rsv_13                    : 2;
        FIELD rg_tx_short_fifo_disb     : 1;
        FIELD rg_force_rg_vusb10_on_sel : 1;
        FIELD rsv_17                    : 15;
    
    
} qp_pma_top_REG_SYS_CTRL_1, *Pqp_pma_top_REG_SYS_CTRL_1;

typedef struct
{
    

        FIELD ro_tx_short_fifo_full     : 1;
        FIELD ro_tx_short_fifo_empty    : 1;
        FIELD rsv_2                     : 30;
    
    
} qp_pma_top_REG_QP_SYS_0, *Pqp_pma_top_REG_QP_SYS_0;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_0 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_0 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_0 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_0, *Pqp_pma_top_REG_FT_CTRL_0;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_1 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_1 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_1 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_1, *Pqp_pma_top_REG_FT_CTRL_1;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_2 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_2 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_2 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_2, *Pqp_pma_top_REG_FT_CTRL_2;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_3 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_3 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_3 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_3, *Pqp_pma_top_REG_FT_CTRL_3;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_4 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_4 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_4 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_4, *Pqp_pma_top_REG_FT_CTRL_4;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_5 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_5 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_5 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_5, *Pqp_pma_top_REG_FT_CTRL_5;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_6 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_6 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_6 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_6, *Pqp_pma_top_REG_FT_CTRL_6;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_7 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_7 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_7 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_7, *Pqp_pma_top_REG_FT_CTRL_7;

typedef struct
{
    

        FIELD rg_ft_freq_meter_freq_det_en_8 : 1;
        FIELD rg_ft_freq_meter_clear_unlck_cnt_8 : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_ft_freq_meter_relck_num_8 : 4;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_FT_CTRL_8, *Pqp_pma_top_REG_FT_CTRL_8;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_0 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_9, *Pqp_pma_top_REG_FT_CTRL_9;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_1 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_10, *Pqp_pma_top_REG_FT_CTRL_10;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_2 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_11, *Pqp_pma_top_REG_FT_CTRL_11;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_3 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_12, *Pqp_pma_top_REG_FT_CTRL_12;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_4 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_13, *Pqp_pma_top_REG_FT_CTRL_13;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_5 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_14, *Pqp_pma_top_REG_FT_CTRL_14;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_6 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_15, *Pqp_pma_top_REG_FT_CTRL_15;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_7 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_16, *Pqp_pma_top_REG_FT_CTRL_16;

typedef struct
{
    

        FIELD rg_ft_freq_meter_chk_cycle_8 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_17, *Pqp_pma_top_REG_FT_CTRL_17;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_0 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_18, *Pqp_pma_top_REG_FT_CTRL_18;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_1 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_19, *Pqp_pma_top_REG_FT_CTRL_19;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_2 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_20, *Pqp_pma_top_REG_FT_CTRL_20;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_3 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_21, *Pqp_pma_top_REG_FT_CTRL_21;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_4 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_22, *Pqp_pma_top_REG_FT_CTRL_22;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_5 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_23, *Pqp_pma_top_REG_FT_CTRL_23;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_6 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_24, *Pqp_pma_top_REG_FT_CTRL_24;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_7 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_25, *Pqp_pma_top_REG_FT_CTRL_25;

typedef struct
{
    

        FIELD rg_ft_freq_meter_golden_cycle_8 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_26, *Pqp_pma_top_REG_FT_CTRL_26;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_0 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_27, *Pqp_pma_top_REG_FT_CTRL_27;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_1 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_28, *Pqp_pma_top_REG_FT_CTRL_28;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_2 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_29, *Pqp_pma_top_REG_FT_CTRL_29;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_3 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_30, *Pqp_pma_top_REG_FT_CTRL_30;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_4 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_31, *Pqp_pma_top_REG_FT_CTRL_31;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_5 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_32, *Pqp_pma_top_REG_FT_CTRL_32;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_6 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_33, *Pqp_pma_top_REG_FT_CTRL_33;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_7 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_34, *Pqp_pma_top_REG_FT_CTRL_34;

typedef struct
{
    

        FIELD rg_ft_freq_meter_tolerate_cycle_8 : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_FT_CTRL_35, *Pqp_pma_top_REG_FT_CTRL_35;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_0 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_0 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_0 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_0, *Pqp_pma_top_REG_FT_STATUS_0;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_1 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_1 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_1 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_1, *Pqp_pma_top_REG_FT_STATUS_1;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_2 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_2 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_2 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_2, *Pqp_pma_top_REG_FT_STATUS_2;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_3 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_3 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_3 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_3, *Pqp_pma_top_REG_FT_STATUS_3;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_4 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_4 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_4 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_4, *Pqp_pma_top_REG_FT_STATUS_4;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_5 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_5 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_5 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_5, *Pqp_pma_top_REG_FT_STATUS_5;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_6 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_6 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_6 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_6, *Pqp_pma_top_REG_FT_STATUS_6;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_7 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_7 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_7 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_7, *Pqp_pma_top_REG_FT_STATUS_7;

typedef struct
{
    

        FIELD ro_ft_freq_meter_freq_lock_8 : 1;
        FIELD rsv_1                     : 3;
        FIELD ro_ft_freq_meter_freq_state_8 : 4;
        FIELD ro_ft_freq_meter_unlck_cnt_8 : 8;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_FT_STATUS_8, *Pqp_pma_top_REG_FT_STATUS_8;

typedef struct
{
    

        FIELD rg_qp_rx_hz               : 1;
        FIELD rg_qp_roc_ck_en           : 1;
        FIELD rg_qp_ad_sleep_en         : 1;
        FIELD rg_qp_prbs_sel            : 3;
        FIELD rsv_6                     : 2;
        FIELD rg_qp_amp                 : 3;
        FIELD rg_qp_speed_sel           : 1;
        FIELD rg_qp_speed_sel_1         : 1;
        FIELD rsv_13                    : 19;
    
    
} qp_pma_top_REG_RX_SYS_CTRL_0, *Pqp_pma_top_REG_RX_SYS_CTRL_0;

typedef struct
{
    

        FIELD rg_qp_fll_dig_pro         : 1;
        FIELD rg_qp_icdr_kband_done_force : 1;
        FIELD rg_qp_icdr_kband_done_force_en : 1;
        FIELD rg_qp_fll_dig_rstb_force  : 1;
        FIELD rg_qp_fll_dig_rst_force_en : 1;
        FIELD rg_qp_fll_cor             : 1;
        FIELD rg_qp_fll_repli           : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_qp_debug_sel           : 3;
        FIELD rg_qp_ro_fll_1_latch_en   : 1;
        FIELD rg_qp_ro_fll_2_latch_en   : 1;
        FIELD rg_qp_ro_fll_3_latch_en   : 1;
        FIELD rg_qp_ro_fll_4_latch_en   : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_qp_load_en             : 1;
        FIELD rg_qp_ipath_idac          : 11;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_FLL_CTRL_0, *Pqp_pma_top_REG_FLL_CTRL_0;

typedef struct
{
    

        FIELD rg_qp_fll_idac_max        : 11;
        FIELD rsv_11                    : 5;
        FIELD rg_qp_fll_idac_min        : 11;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_FLL_CTRL_1, *Pqp_pma_top_REG_FLL_CTRL_1;

typedef struct
{
    

        FIELD rg_qp_settle_time_sel     : 3;
        FIELD rg_qp_symbol_wd           : 3;
        FIELD rg_qp_ck_rate             : 3;
        FIELD rg_qp_kband_prediv        : 3;
        FIELD rsv_12                    : 4;
        FIELD rg_qp_fbkdiv              : 11;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_FLL_CTRL_2, *Pqp_pma_top_REG_FLL_CTRL_2;

typedef struct
{
    

        FIELD rg_qp_fll_idac_repli      : 11;
        FIELD rsv_11                    : 21;
    
    
} qp_pma_top_REG_FLL_CTRL_3, *Pqp_pma_top_REG_FLL_CTRL_3;

typedef struct
{
    

        FIELD rg_qp_rx_pi_cal_en_h_dly  : 8;
        FIELD rg_qp_rx_saosc_en_h_dly   : 6;
        FIELD rsv_14                    : 18;
    
    
} qp_pma_top_REG_RX_DLY_0, *Pqp_pma_top_REG_RX_DLY_0;

typedef struct
{
    

        FIELD rg_qp_sig_det_h_thres     : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_qp_sig_det_l_thres     : 10;
        FIELD rsv_26                    : 6;
    
    
} qp_pma_top_REG_RX_DLY_1, *Pqp_pma_top_REG_RX_DLY_1;

typedef struct
{
    

        FIELD rg_qp_rx_afifo_adj        : 6;
        FIELD rg_qp_rx_asic_uses_ff     : 1;
        FIELD rg_qp_rx_data_inv         : 1;
        FIELD rg_qp_pma_rx_fifo_rd_dly  : 4;
        FIELD rg_qp_pma_rx_fifo_wr_clr  : 1;
        FIELD rg_qp_pma_rx_fifo_rd_clr  : 1;
        FIELD rsv_14                    : 2;
        FIELD rg_qp_pma_rx_fifo_wr_thr  : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_qp_pma_rx_fifo_rd_thr  : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_RX_AFIFO, *Pqp_pma_top_REG_RX_AFIFO;

typedef struct
{
    

        FIELD rg_qp_power_on            : 1;
        FIELD rg_qp_impcal_out          : 1;
        FIELD rg_qp_impcal_en           : 1;
        FIELD rg_qp_force_impcal_en     : 1;
        FIELD rg_qp_force_impsel        : 1;
        FIELD rg_qp_impcal_cycnt        : 10;
        FIELD rg_qp_impcal_stbcyc       : 5;
        FIELD rg_qp_impcal_calcyc       : 6;
        FIELD rsv_26                    : 6;
    
    
} qp_pma_top_REG_IMP_CTRL_0, *Pqp_pma_top_REG_IMP_CTRL_0;

typedef struct
{
    

        FIELD rg_qp_fix_impsel          : 5;
        FIELD rg_qp_imp_bias            : 4;
        FIELD rg_qp_rx_imp_sel          : 5;
        FIELD rg_qp_impcal_cal          : 5;
        FIELD rg_qp_prb_out             : 8;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_IMP_CTRL_1, *Pqp_pma_top_REG_IMP_CTRL_1;

typedef struct
{
    

        FIELD rg_qp_cdr_vcocal_state    : 7;
        FIELD rg_qp_cdr_vcocal_fail     : 1;
        FIELD rg_qp_rosc_coarse_sel     : 4;
        FIELD rg_qp_rosc_fine           : 4;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_RX_CTRL_UNUSE_0, *Pqp_pma_top_REG_RX_CTRL_UNUSE_0;

typedef struct
{
    

        FIELD rg_qp_cdr_bw_sel_dly      : 4;
        FIELD rg_qp_cdr_re_calib        : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_qp_cdr_settle_dly      : 11;
        FIELD rsv_19                    : 5;
        FIELD rg_qp_freq_det_en_wait_dly : 4;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_RX_CTRL_1, *Pqp_pma_top_REG_RX_CTRL_1;

typedef struct
{
    

        FIELD rg_qp_freq_det_frc        : 1;
        FIELD rg_qp_freq_det_frc_en     : 1;
        FIELD rg_qp_lpf_window_sel      : 2;
        FIELD rg_qp_phya_pwd            : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_qp_ppm_thres           : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_qp_rx_eq_en_h_dly      : 13;
        FIELD rsv_29                    : 2;
        FIELD rg_qp_rx_pwd              : 1;
    
    
} qp_pma_top_REG_RX_CTRL_2, *Pqp_pma_top_REG_RX_CTRL_2;

typedef struct
{
    

        FIELD rg_qp_sig_det_wait_dly    : 16;
        FIELD rg_qp_sigdet_wait_cond    : 1;
        FIELD rg_qp_sigdet_wait_force   : 1;
        FIELD rg_qp_speed_chg           : 1;
        FIELD rsv_19                    : 5;
        FIELD rg_qp_cdr_band_fail       : 7;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_RX_CTRL_3, *Pqp_pma_top_REG_RX_CTRL_3;

typedef struct
{
    

        FIELD rg_rx_settle_rdy_time     : 8;
        FIELD rg_rx_pi_cal_en_start_time : 8;
        FIELD rg_bias_dir               : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_pcie_sig_cal_en_time_sel : 1;
        FIELD rsv_25                    : 4;
        FIELD rg_qp_kband_kfc           : 2;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_RX_CTRL_4, *Pqp_pma_top_REG_RX_CTRL_4;

typedef struct
{
    

        FIELD rg_qp_impcal_cyccnt       : 10;
        FIELD rg_fredet_chk_cycle       : 20;
        FIELD rsv_30                    : 2;
    
    
} qp_pma_top_REG_RX_CTRL_5, *Pqp_pma_top_REG_RX_CTRL_5;

typedef struct
{
    

        FIELD rg_fredet_golden_cycle    : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_RX_CTRL_6, *Pqp_pma_top_REG_RX_CTRL_6;

typedef struct
{
    

        FIELD rg_fredet_tolerate_cycle  : 20;
        FIELD rsv_20                    : 4;
        FIELD rg_fredet_relck_num       : 4;
        FIELD rg_fredet_clear_unlck_cnt : 1;
        FIELD rsv_29                    : 3;
    
    
} qp_pma_top_REG_RX_CTRL_7, *Pqp_pma_top_REG_RX_CTRL_7;

typedef struct
{
    

        FIELD rg_da_qp_leqos_en_time    : 15;
        FIELD rsv_15                    : 1;
        FIELD rg_da_qp_saosc_done_time  : 12;
        FIELD rsv_28                    : 4;
    
    
} qp_pma_top_REG_RX_CTRL_8, *Pqp_pma_top_REG_RX_CTRL_8;

typedef struct
{
    

        FIELD rg_force_cdr_pd_pwdb_sel  : 1;
        FIELD rg_force_cdr_pd_pwdb      : 1;
        FIELD rg_force_rx_pi_cal_en_sel : 1;
        FIELD rg_force_rx_pi_cal_en     : 1;
        FIELD rg_force_rx_data_rstb_sel : 1;
        FIELD rg_force_rx_data_rstb     : 1;
        FIELD rg_force_dfe_rst_sel      : 1;
        FIELD rg_force_dfe_rst          : 1;
        FIELD rg_force_rx_sigdet_en_sel : 1;
        FIELD rg_force_rx_sigdet_en     : 1;
        FIELD rg_force_dfe_en_sel       : 1;
        FIELD rg_force_dfe_en           : 1;
        FIELD rg_force_cdr_stable_sel   : 1;
        FIELD rg_force_cdr_stable       : 1;
        FIELD rg_force_cdr_lpf_rstb_sel : 1;
        FIELD rg_force_cdr_lpf_rstb     : 1;
        FIELD rg_force_cdr_lck2ref_sel  : 1;
        FIELD rg_force_cdr_lck2ref      : 1;
        FIELD rg_force_rx_saos_en_sel   : 1;
        FIELD rg_force_rx_saos_en       : 1;
        FIELD rg_force_sigdet_cal_out_bypass_ana_sel : 1;
        FIELD rg_force_sigdet_cal_out_bypass_ana : 1;
        FIELD rg_force_sigdet_out_bypass_ana_sel : 1;
        FIELD rg_force_sigdet_out_bypass_ana : 1;
        FIELD rg_force_cdr_kband_done_bypass_ana_sel : 1;
        FIELD rg_force_cdr_kband_done_bypass_ana : 1;
        FIELD rg_force_bias_pwd_sel     : 1;
        FIELD rg_force_bias_pwd         : 1;
        FIELD rg_force_pll_stable_sel   : 1;
        FIELD rg_force_pll_stable       : 1;
        FIELD rsv_30                    : 2;
    
    
} qp_pma_top_REG_RX_CTRL_9, *Pqp_pma_top_REG_RX_CTRL_9;

typedef struct
{
    

        FIELD rg_qp_crsdet_en           : 1;
        FIELD rg_qp_crsdet_rstb         : 1;
        FIELD rg_qp_rx_scan             : 1;
        FIELD rg_force_eq_en_sel        : 1;
        FIELD rg_force_eq_en            : 1;
        FIELD rg_force_cdr_lck2ref_pre_sel : 1;
        FIELD rg_force_cdr_lck2ref_pre  : 1;
        FIELD rg_qp_cdr_settle_rdy_cnt_pre_time : 11;
        FIELD rg_qp_cdr_settle_rdy_cnt_time : 11;
        FIELD rg_force_cdr_settle_ok_sel : 1;
        FIELD rg_force_cdr_settle_ok    : 1;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_RX_CTRL_10, *Pqp_pma_top_REG_RX_CTRL_10;

typedef struct
{
    

        FIELD rg_force_freq_lock_sel    : 1;
        FIELD rg_force_freq_lock        : 1;
        FIELD rg_force_saos_rdy_sel     : 1;
        FIELD rg_force_saos_rdy         : 1;
        FIELD rg_qp_eq_rstep1           : 2;
        FIELD rg_qp_eq_rstep2           : 2;
        FIELD rg_qp_force_eq_rdy_sel    : 1;
        FIELD rg_qp_force_eq_rdy        : 1;
        FIELD rg_qp_force_speed_sel     : 1;
        FIELD rg_qp_force_eq_en_sel     : 1;
        FIELD rg_qp_force_eq_en         : 1;
        FIELD rg_qp_rx_dcleq_intf       : 4;
        FIELD rg_qp_force_sigdet_sel    : 1;
        FIELD rg_qp_force_sigdet        : 1;
        FIELD rg_qp_force_sigdet_5g     : 1;
        FIELD rg_qp_force_sigdet_10g    : 1;
        FIELD rg_qp_sigdet_cal_sample_time : 5;
        FIELD rsv_26                    : 6;
    
    
} qp_pma_top_REG_RX_CTRL_11, *Pqp_pma_top_REG_RX_CTRL_11;

typedef struct
{
    

        FIELD rg_sigdet_en              : 1;
        FIELD rg_sigdet_win_size        : 8;
        FIELD rg_sigdet_vld_time        : 8;
        FIELD rg_sigdet_win_vld_times   : 5;
        FIELD rg_sigdet_win_nonvld_times : 5;
        FIELD rsv_27                    : 5;
    
    
} qp_pma_top_REG_RX_CTRL_12, *Pqp_pma_top_REG_RX_CTRL_12;

typedef struct
{
    

        FIELD rg_qp_reserve_0           : 8;
        FIELD rg_qp_reserve_1           : 8;
        FIELD rg_qp_reserve_2           : 8;
        FIELD rg_qp_reserve_3           : 8;
    
    
} qp_pma_top_REG_RX_CTRL_13, *Pqp_pma_top_REG_RX_CTRL_13;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug        : 8;
        FIELD qphy_rx_ctrl_debug_1      : 8;
        FIELD qphy_rx_ctrl_debug_2      : 8;
        FIELD qphy_rx_ctrl_debug_3      : 8;
    
    
} qp_pma_top_REG_RX_CTRL_14, *Pqp_pma_top_REG_RX_CTRL_14;

typedef struct
{
    

        FIELD ro_adc_freq               : 20;
        FIELD ro_fll_idac               : 11;
        FIELD rsv_31                    : 1;
    
    
} qp_pma_top_REG_RX_CTRL_15, *Pqp_pma_top_REG_RX_CTRL_15;

typedef struct
{
    

        FIELD ro_cor_gain               : 32;
    
    
} qp_pma_top_REG_RX_CTRL_16, *Pqp_pma_top_REG_RX_CTRL_16;

typedef struct
{
    

        FIELD ro_idacf                  : 11;
        FIELD rsv_11                    : 4;
        FIELD ro_da_idac                : 11;
        FIELD rsv_26                    : 6;
    
    
} qp_pma_top_REG_RX_CTRL_17, *Pqp_pma_top_REG_RX_CTRL_17;

typedef struct
{
    

        FIELD ro_fll_idac_repli         : 11;
        FIELD rsv_11                    : 21;
    
    
} qp_pma_top_REG_RX_CTRL_18, *Pqp_pma_top_REG_RX_CTRL_18;

typedef struct
{
    

        FIELD ro_adc_freq_inv_output    : 21;
        FIELD rsv_21                    : 11;
    
    
} qp_pma_top_REG_RX_CTRL_19, *Pqp_pma_top_REG_RX_CTRL_19;

typedef struct
{
    

        FIELD ro_adc_freq_output        : 20;
        FIELD rsv_20                    : 12;
    
    
} qp_pma_top_REG_RX_CTRL_20, *Pqp_pma_top_REG_RX_CTRL_20;

typedef struct
{
    

        FIELD ro_cor_integ_output       : 32;
    
    
} qp_pma_top_REG_RX_CTRL_21, *Pqp_pma_top_REG_RX_CTRL_21;

typedef struct
{
    

        FIELD ro_cor_integ_inv_output   : 32;
    
    
} qp_pma_top_REG_RX_CTRL_22, *Pqp_pma_top_REG_RX_CTRL_22;

typedef struct
{
    

        FIELD ro_cor_gain_output_0      : 16;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_RX_CTRL_23, *Pqp_pma_top_REG_RX_CTRL_23;

typedef struct
{
    

        FIELD ro_cor_gain_output_1      : 17;
        FIELD rsv_17                    : 15;
    
    
} qp_pma_top_REG_RX_CTRL_24, *Pqp_pma_top_REG_RX_CTRL_24;

typedef struct
{
    

        FIELD rg_force_pr_stable_sel    : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_pr_stable        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_sigdet_10g_force_en    : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_qp_sigdet_force_en     : 1;
        FIELD rsv_25                    : 6;
        FIELD rg_qp_sigdet_force        : 1;
    
    
} qp_pma_top_REG_RX_CTRL_25, *Pqp_pma_top_REG_RX_CTRL_25;

typedef struct
{
    

        FIELD rg_qp_sig_linkdown_sel    : 1;
        FIELD rg_qp_force_sigdet_ln     : 1;
        FIELD rg_qp_force_sigdet_lp     : 1;
        FIELD rg_qp_bypass_cdr_settle_ok : 1;
        FIELD rg_qp_bypass_sig_det_wait_rdy_mask : 1;
        FIELD rg_qp_bypass_freq_lock    : 1;
        FIELD rg_qp_bypass_saos_rdy     : 1;
        FIELD rg_qp_bypass_cdr_settle_sig_det : 1;
        FIELD rg_qp_bypass_cdr_settle_freq_lock : 1;
        FIELD rg_qp_bypass_sig_det_freq_lock : 1;
        FIELD rg_qp_bypass_ok_sig_det_freq_lock : 1;
        FIELD rg_qp_add_pcs_link        : 1;
        FIELD rg_qp_prbs_case           : 1;
        FIELD rg_qp_bypass_cdr_settle_ok_relink : 1;
        FIELD rg_qp_bypass_sig_det_wait_rdy_mask_relink : 1;
        FIELD rg_qp_bypass_freq_lock_relink : 1;
        FIELD rg_qp_bypass_saos_rdy_relink : 1;
        FIELD rg_qp_bypass_cdr_settle_sig_det_relink : 1;
        FIELD rg_qp_bypass_cdr_settle_freq_lock_relink : 1;
        FIELD rg_qp_bypass_sig_det_freq_lock_relink : 1;
        FIELD rg_qp_bypass_ok_sig_det_freq_lock_relink : 1;
        FIELD rg_force_cdr_lck2ref_pre_relink_sel : 1;
        FIELD rg_force_cdr_lck2ref_pre_relink : 1;
        FIELD rg_link_erro_en           : 1;
        FIELD rg_link_ne_en             : 1;
        FIELD rg_qp_fifo_rstb_hw_en     : 1;
        FIELD rg_qp_eq_retrain_only_en  : 1;
        FIELD rg_qp_retrain_all_en      : 1;
        FIELD rg_qp_saos_rdy_clr_by_lck2ref : 1;
        FIELD rsv_29                    : 3;
    
    
} qp_pma_top_REG_RX_CTRL_26, *Pqp_pma_top_REG_RX_CTRL_26;

typedef struct
{
    

        FIELD rg_qp_link_erro_cnt       : 32;
    
    
} qp_pma_top_REG_RX_CTRL_27, *Pqp_pma_top_REG_RX_CTRL_27;

typedef struct
{
    

        FIELD rg_qp_debug_sel_0         : 1;
        FIELD rg_qp_debug_sel_1         : 1;
        FIELD rg_qp_debug_sel_2         : 1;
        FIELD rg_qp_debug_sel_3         : 1;
        FIELD rg_qp_debug_sel_4         : 1;
        FIELD rg_qp_debug_sel_5         : 1;
        FIELD rg_qp_debug_sel_6         : 1;
        FIELD rsv_7                     : 25;
    
    
} qp_pma_top_REG_RX_CTRL_28, *Pqp_pma_top_REG_RX_CTRL_28;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug_4      : 32;
    
    
} qp_pma_top_REG_RX_CTRL_29, *Pqp_pma_top_REG_RX_CTRL_29;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug_5      : 32;
    
    
} qp_pma_top_REG_RX_CTRL_30, *Pqp_pma_top_REG_RX_CTRL_30;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug_6      : 32;
    
    
} qp_pma_top_REG_RX_CTRL_31, *Pqp_pma_top_REG_RX_CTRL_31;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug_7      : 32;
    
    
} qp_pma_top_REG_RX_CTRL_32, *Pqp_pma_top_REG_RX_CTRL_32;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug_8      : 32;
    
    
} qp_pma_top_REG_RX_CTRL_33, *Pqp_pma_top_REG_RX_CTRL_33;

typedef struct
{
    

        FIELD qphy_rx_ctrl_debug_9      : 32;
    
    
} qp_pma_top_REG_RX_CTRL_34, *Pqp_pma_top_REG_RX_CTRL_34;

typedef struct
{
    

        FIELD rg_qp_force_pr_vco_en     : 1;
        FIELD rg_qp_force_auto_vco_en   : 1;
        FIELD rg_qp_force_pi_spd_chg_en : 1;
        FIELD rg_qp_force_pi_cal_done_sel : 1;
        FIELD rg_qp_force_pi_cal_done   : 1;
        FIELD rg_qp_force_sig_det_cal_done_sel : 1;
        FIELD rg_qp_force_sig_det_cal_done : 1;
        FIELD rg_qp_force_ssusb_rx_saosc_rst_sel : 1;
        FIELD rg_qp_force_ssusb_rx_saosc_rst : 1;
        FIELD rg_qp_force_k_band_reset_sel : 1;
        FIELD rg_qp_pcie_speed_change_dly_time : 10;
        FIELD rg_qp_force_speed_change  : 1;
        FIELD rg_qp_force_speed_change_sel : 1;
        FIELD rg_qp_force_pcie_usb_speed : 2;
        FIELD rg_qp_force_rx_path_rdy_sel : 1;
        FIELD rg_qp_force_rx_path_rdy   : 1;
        FIELD rg_qp_force_rx_pr_pd_pwd_sel : 1;
        FIELD rg_qp_force_rx_pr_pd_pwd  : 1;
        FIELD rg_qp_force_cdr_set_dly_clear : 1;
        FIELD rg_qp_force_cdr_pwd_sel   : 1;
        FIELD rg_qp_force_cdr_pwd       : 1;
        FIELD rg_qp_force_pcie_usb_speed_sel : 1;
    
    
} qp_pma_top_REG_RX_CTRL_35, *Pqp_pma_top_REG_RX_CTRL_35;

typedef struct
{
    

        FIELD rg_qp_force_speed_chg_all_re_en : 1;
        FIELD rg_qp_pcie_usb_sol_1      : 1;
        FIELD rg_qp_force_pcie_mode_sel : 1;
        FIELD rg_qp_force_pcie_mode     : 1;
        FIELD rg_qp_force_spd_chg_all   : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_qp_force_rx_path_rdy_time : 8;
        FIELD rg_qp_lck2data_dly_time   : 10;
        FIELD rg_qp_pcie_usb_system     : 1;
        FIELD rg_qp_force_sigdet_or     : 1;
        FIELD rg_qp_force_sigdet_and    : 1;
        FIELD rg_qp_force_sigdet_usb    : 1;
        FIELD rg_qp_force_usb_mode_sel  : 1;
        FIELD rg_qp_force_usb_mode      : 1;
    
    
} qp_pma_top_REG_RX_CTRL_36, *Pqp_pma_top_REG_RX_CTRL_36;

typedef struct
{
    

        FIELD rg_qp_reserve_16          : 8;
        FIELD rg_qp_reserve_17          : 8;
        FIELD rg_qp_reserve_18          : 8;
        FIELD rg_qp_reserve_19          : 8;
    
    
} qp_pma_top_REG_RX_CTRL_37, *Pqp_pma_top_REG_RX_CTRL_37;

typedef struct
{
    

        FIELD rg_qp_reserve_4           : 8;
        FIELD rg_qp_reserve_5           : 8;
        FIELD rg_qp_reserve_6           : 8;
        FIELD rg_qp_reserve_7           : 8;
    
    
} qp_pma_top_REG_RX_CTRL_38, *Pqp_pma_top_REG_RX_CTRL_38;

typedef struct
{
    

        FIELD rg_qp_reserve_8           : 8;
        FIELD rg_qp_reserve_9           : 8;
        FIELD rg_qp_reserve_10          : 8;
        FIELD rg_qp_reserve_11          : 8;
    
    
} qp_pma_top_REG_RX_CTRL_39, *Pqp_pma_top_REG_RX_CTRL_39;

typedef struct
{
    

        FIELD rg_qp_reserve_12          : 8;
        FIELD rg_qp_reserve_13          : 8;
        FIELD rg_qp_reserve_14          : 8;
        FIELD rg_qp_reserve_15          : 8;
    
    
} qp_pma_top_REG_RX_CTRL_40, *Pqp_pma_top_REG_RX_CTRL_40;

typedef struct
{
    

        FIELD ro_qp_reserve_0           : 8;
        FIELD ro_qp_reserve_1           : 8;
        FIELD ro_qp_reserve_2           : 8;
        FIELD ro_qp_reserve_3           : 8;
    
    
} qp_pma_top_REG_RX_CTRL_41, *Pqp_pma_top_REG_RX_CTRL_41;

typedef struct
{
    

        FIELD ro_qp_reserve_4           : 8;
        FIELD ro_qp_reserve_5           : 8;
        FIELD ro_qp_reserve_6           : 8;
        FIELD ro_qp_reserve_7           : 8;
    
    
} qp_pma_top_REG_RX_CTRL_42, *Pqp_pma_top_REG_RX_CTRL_42;

typedef struct
{
    

        FIELD ro_qp_reserve_8           : 8;
        FIELD ro_qp_reserve_9           : 8;
        FIELD ro_qp_reserve_10          : 8;
        FIELD ro_qp_reserve_11          : 8;
    
    
} qp_pma_top_REG_RX_CTRL_43, *Pqp_pma_top_REG_RX_CTRL_43;

typedef struct
{
    

        FIELD ro_qp_reserve_12          : 8;
        FIELD ro_qp_reserve_13          : 8;
        FIELD ro_qp_reserve_14          : 8;
        FIELD ro_qp_reserve_15          : 8;
    
    
} qp_pma_top_REG_RX_CTRL_44, *Pqp_pma_top_REG_RX_CTRL_44;

typedef struct
{
    

        FIELD rg_qp_eq_en_dly           : 13;
        FIELD rg_qp_force_eq_dly_en_sel : 1;
        FIELD rg_qp_force_eq_dly_en     : 1;
        FIELD rg_qp_sgmii_eq_train_sel  : 1;
        FIELD rg_qp_force_pcie_cdr_lpf_kp_gain_en : 1;
        FIELD rg_qp_pcie_gen1_cdr_lpf_kp_gain : 3;
        FIELD rg_qp_pcie_gen2_cdr_lpf_kp_gain : 3;
        FIELD rg_qp_force_pcie_cdr_lpf_ki_gain_en : 1;
        FIELD rg_qp_pcie_gen1_cdr_lpf_ki_gain : 3;
        FIELD rg_qp_pcie_gen2_cdr_lpf_ki_gain : 3;
        FIELD rsv_30                    : 2;
    
    
} qp_pma_top_REG_RX_CTRL_45, *Pqp_pma_top_REG_RX_CTRL_45;

typedef struct
{
    

        FIELD rg_qp_force_usb_pcie_pd_pwd_sel : 1;
        FIELD rg_qp_force_usb_pcie_pd_pwd : 1;
        FIELD rg_qp_force_usb_pcie_pr_pwd_sel : 1;
        FIELD rg_qp_force_usb_pcie_pr_pwd : 1;
        FIELD rg_qp_force_usb_pcie_eye_pwd_sel : 1;
        FIELD rg_qp_force_usb_pcie_eye_pwd : 1;
        FIELD rg_qp_force_usb_pcie_afe_pwd_sel : 1;
        FIELD rg_qp_force_usb_pcie_afe_pwd : 1;
        FIELD rg_qp_force_usb_pcie_sigdet_en_sel : 1;
        FIELD rg_qp_force_usb_pcie_sigdet_en : 1;
        FIELD rg_qp_force_usb_pcie_power_st_sel : 1;
        FIELD rg_qp_force_usb_pcie_power_st : 2;
        FIELD rg_qp_fre_lock_sel        : 1;
        FIELD rg_qp_force_power_st_change_sel : 1;
        FIELD rg_qp_force_power_st_change : 1;
        FIELD rg_qp_force_pcie_cdr_pr_kband_div_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_pr_kband_div : 3;
        FIELD rg_qp_pcie_gen1_cdr_pr_kband_div : 3;
        FIELD rg_force_usb_sig_clr      : 1;
        FIELD rg_qp_force_last_lfps_finish_sel : 1;
        FIELD rg_qp_force_last_lfps_finish : 1;
        FIELD rg_reback_p0_lck2ref_en   : 1;
        FIELD rg_qp_pcie_usb_bypass_eq_p1_to_p0_en : 1;
        FIELD rg_qp_pcie_usb_bypass_eq_p2_to_p0_en : 1;
        FIELD rg_qp_pcie_usb_bypass_eq_p3_to_p0_en : 1;
        FIELD rsv_30                    : 2;
    
    
} qp_pma_top_REG_RX_CTRL_46, *Pqp_pma_top_REG_RX_CTRL_46;

typedef struct
{
    

        FIELD rg_qp_force_pcie_cdr_lpf_ratio_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_lpf_ratio : 2;
        FIELD rg_qp_pcie_gen1_cdr_lpf_ratio : 2;
        FIELD rg_qp_force_pcie_cdr_pr_beta_sel_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_pr_beta_sel : 4;
        FIELD rg_qp_pcie_gen1_cdr_pr_beta_sel : 4;
        FIELD rg_qp_force_pcie_cdr_pr_buf_in_sr_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_pr_buf_in_sr : 3;
        FIELD rg_qp_pcie_gen1_cdr_pr_buf_in_sr : 3;
        FIELD rg_qp_force_pcie_cdr_pr_dac_band_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_pr_dac_band : 5;
        FIELD rg_qp_pcie_gen1_cdr_pr_dac_band : 5;
    
    
} qp_pma_top_REG_RX_CTRL_47, *Pqp_pma_top_REG_RX_CTRL_47;

typedef struct
{
    

        FIELD rg_qp_force_pcie_cdr_pr_kband_div_pcie_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_pr_kband_div_pcie : 6;
        FIELD rg_qp_pcie_gen1_cdr_pr_kband_div_pcie : 6;
        FIELD rg_qp_force_pcie_cdr_phyck_div_en : 1;
        FIELD rg_qp_pcie_gen2_cdr_phyck_div : 7;
        FIELD rg_qp_pcie_gen1_cdr_phyck_div : 7;
        FIELD rg_qp_force_rosc_rstb     : 1;
        FIELD rg_qp_force_rosc_rstb_sel : 1;
        FIELD rg_qp_force_pcie_crsdet_en : 1;
        FIELD rg_qp_force_pcie_crsdet_en_sel : 1;
    
    
} qp_pma_top_REG_RX_CTRL_48, *Pqp_pma_top_REG_RX_CTRL_48;

typedef struct
{
    

        FIELD ro_power_st_l11_l12       : 1;
        FIELD ro_power_st_l2            : 1;
        FIELD ro_ssusb_qp_powerdown     : 2;
        FIELD ro_pcie_mode              : 1;
        FIELD ro_usb_mode               : 1;
        FIELD rg_qp_crsdet_rst_time     : 3;
        FIELD rg_force_crsdet_lthout_sel : 1;
        FIELD rg_force_crsdet_lthout    : 1;
        FIELD rg_force_signal_beacon_out_sel : 1;
        FIELD rg_force_ad_crsdet_out_sel : 1;
        FIELD rg_force_ad_crsdet_out    : 1;
        FIELD rg_force_signal_crsdet_lthout_sel : 1;
        FIELD rg_force_signal_crsdet_out_sel : 1;
        FIELD rg_lfps_detect_num        : 4;
        FIELD rg_force_last_lfps_finish_latch_clr : 1;
        FIELD rg_lfps_finish_time       : 11;
    
    
} qp_pma_top_REG_RX_CTRL_49, *Pqp_pma_top_REG_RX_CTRL_49;

typedef struct
{
    

        FIELD rg_qp_rx_eq_en_h_dly_short : 13;
        FIELD rg_qp_eq_en_dly_short     : 13;
        FIELD rg_p1_to_p0_do_eq_usb     : 1;
        FIELD rg_p2_to_p0_do_eq_usb     : 1;
        FIELD rg_p3_to_p0_do_eq_usb     : 1;
        FIELD rsv_29                    : 3;
    
    
} qp_pma_top_REG_RX_CTRL_50, *Pqp_pma_top_REG_RX_CTRL_50;

typedef struct
{
    

        FIELD trans_rogue_onu_int       : 1;
        FIELD rsv_1                     : 7;
        FIELD un_stb_saos_rdy_int       : 1;
        FIELD rsv_9                     : 7;
        FIELD phyrdy_int                : 1;
        FIELD rsv_17                    : 7;
        FIELD trans_sd_fail_int         : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_0, *Pqp_pma_top_REG_ISR_CTRL_0;

typedef struct
{
    

        FIELD un_stb_eq_rdy_int         : 1;
        FIELD rsv_1                     : 7;
        FIELD trans_fault_int           : 1;
        FIELD rsv_9                     : 7;
        FIELD un_stb_rx_rdy_int         : 1;
        FIELD rsv_17                    : 7;
        FIELD trans_los_int             : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_1, *Pqp_pma_top_REG_ISR_CTRL_1;

typedef struct
{
    

        FIELD pma_tx_afifo_empty_int    : 1;
        FIELD rsv_1                     : 7;
        FIELD pma_tx_afifo_full_int     : 1;
        FIELD rsv_9                     : 7;
        FIELD pma_rx_afifo_empty_int    : 1;
        FIELD rsv_17                    : 7;
        FIELD pma_rx_afifo_full_int     : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_2, *Pqp_pma_top_REG_ISR_CTRL_2;

typedef struct
{
    

        FIELD tx_freqdet_unlock_int     : 1;
        FIELD rsv_1                     : 7;
        FIELD rx_freqdet_unlock_int     : 1;
        FIELD rsv_9                     : 7;
        FIELD rx_sigdet_int             : 1;
        FIELD rsv_17                    : 7;
        FIELD trans_laser_on_int        : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_3, *Pqp_pma_top_REG_ISR_CTRL_3;

typedef struct
{
    

        FIELD rg_trans_rogue_onu_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_un_stb_saos_rdy_int_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_phyrdy_int_en          : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_sd_fail_int_en   : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_EN_0, *Pqp_pma_top_REG_ISR_CTRL_EN_0;

typedef struct
{
    

        FIELD rg_un_stb_eq_rdy_int_en   : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_trans_fault_int_en     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_un_stb_rx_rdy_int_en   : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_los_int_en       : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_EN_1, *Pqp_pma_top_REG_ISR_CTRL_EN_1;

typedef struct
{
    

        FIELD rg_pma_tx_afifo_empty_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_pma_tx_afifo_full_int_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_pma_rx_afifo_empty_int_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_pma_rx_afifo_full_int_en : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_CTRL_EN_2, *Pqp_pma_top_REG_ISR_CTRL_EN_2;

typedef struct
{
    

        FIELD rg_tx_freqdet_unlock_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_rx_freqdet_unlock_int_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_rx_sigdet_int_en       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_laser_on_int_en  : 1;
        FIELD rsv_25                    : 6;
        FIELD rg_trans_sd_fail_cnt_clr  : 1;
    
    
} qp_pma_top_REG_ISR_CTRL_EN_3, *Pqp_pma_top_REG_ISR_CTRL_EN_3;

typedef struct
{
    

        FIELD rg_trans_tx_sd_inv        : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_trans_tx_sd_pro        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_trans_rx_los_pro       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_tx_fault_pro     : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_SETTING_0, *Pqp_pma_top_REG_ISR_SETTING_0;

typedef struct
{
    

        FIELD rg_trans_rx_laser_on_pro  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_ftcal_low              : 8;
        FIELD rg_ftcal_high             : 8;
        FIELD rg_pma_show_probe_en      : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_SETTING_1, *Pqp_pma_top_REG_ISR_SETTING_1;

typedef struct
{
    

        FIELD rg_pma_tx_afifo_reach_th  : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_pma_rx_afifo_reach_th  : 7;
        FIELD rsv_15                    : 1;
        FIELD rg_trans_sd_fail_cnt      : 16;
    
    
} qp_pma_top_REG_ISR_SETTING_2, *Pqp_pma_top_REG_ISR_SETTING_2;

typedef struct
{
    

        FIELD rg_tx_dly_en              : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_trans_burst_inv        : 1;
        FIELD rg_trans_tx_data_inv      : 1;
        FIELD rg_trans_rx_data_inv      : 1;
        FIELD rsv_11                    : 5;
        FIELD rg_trans_rx_sd_inv        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_tx_fault_inv     : 1;
        FIELD rsv_25                    : 7;
    
    
} qp_pma_top_REG_ISR_SETTING_3, *Pqp_pma_top_REG_ISR_SETTING_3;

typedef struct
{
    

        FIELD un_stb_sdos_rdy_int       : 1;
        FIELD rsv_1                     : 7;
        FIELD un_stb_leq_rdy_int        : 1;
        FIELD rsv_9                     : 7;
        FIELD un_stb_pi_rdy_int         : 1;
        FIELD rsv_17                    : 7;
        FIELD DA_SSUSB_CDR_LCK2REF_int  : 1;
        FIELD rsv_25                    : 6;
        FIELD DA_SSUSB_CDR_LCK2DATA_int : 1;
    
    
} qp_pma_top_REG_ISR_CTRL_5, *Pqp_pma_top_REG_ISR_CTRL_5;

typedef struct
{
    

        FIELD rg_un_stb_sdos_rdy_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_un_stb_leq_rdy_int_en  : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_un_stb_pi_rdy_int_en   : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lck2ref_to_lck2data_en : 1;
        FIELD rsv_25                    : 6;
        FIELD rg_lck2data_to_lck2ref_en : 1;
    
    
} qp_pma_top_REG_ISR_CTRL_EN_5, *Pqp_pma_top_REG_ISR_CTRL_EN_5;

typedef struct
{
    

        FIELD link_erro_int             : 1;
        FIELD stb_leq_rdy_int           : 1;
        FIELD stb_saos_rdy_int          : 1;
        FIELD stb_sdos_rdy_int          : 1;
        FIELD rx_freqdet_lock_int       : 1;
        FIELD stb_pi_rdy_int            : 1;
        FIELD stb_eq_rdy_int            : 1;
        FIELD rsv_7                     : 25;
    
    
} qp_pma_top_REG_ISR_CTRL_6, *Pqp_pma_top_REG_ISR_CTRL_6;

typedef struct
{
    

        FIELD rg_link_erro_int_en       : 1;
        FIELD rg_stb_leq_rdy_int_en     : 1;
        FIELD rg_stb_saos_rdy_int_en    : 1;
        FIELD rg_stb_sdos_rdy_int_en    : 1;
        FIELD rg_rx_freqdet_lock_int_en : 1;
        FIELD rg_stb_pi_rdy_int_en      : 1;
        FIELD rg_stb_eq_rdy_int_en      : 1;
        FIELD rsv_7                     : 25;
    
    
} qp_pma_top_REG_ISR_CTRL_EN_6, *Pqp_pma_top_REG_ISR_CTRL_EN_6;

typedef struct
{
    

        FIELD ro_qp_tx_debug0           : 8;
        FIELD ro_qp_tx_debug1           : 8;
        FIELD ro_qp_tx_debug2           : 8;
        FIELD ro_qp_tx_debug3           : 8;
    
    
} qp_pma_top_REG_QP_TX_DBG_0, *Pqp_pma_top_REG_QP_TX_DBG_0;

typedef struct
{
    

        FIELD ro_qp_tx_debug4           : 8;
        FIELD ro_qp_tx_debug5           : 8;
        FIELD ro_qp_tx_debug6           : 8;
        FIELD ro_qp_tx_debug7           : 8;
    
    
} qp_pma_top_REG_QP_TX_DBG_1, *Pqp_pma_top_REG_QP_TX_DBG_1;

typedef struct
{
    

        FIELD ro_rx_lfps_debug0         : 8;
        FIELD ro_rx_lfps_debug1         : 8;
        FIELD ro_rx_lfps_debug2         : 8;
        FIELD ro_rx_lfps_debug3         : 8;
    
    
} qp_pma_top_REG_QP_LFPS_DBG_0, *Pqp_pma_top_REG_QP_LFPS_DBG_0;

typedef struct
{
    

        FIELD ro_rx_lfps_debug4         : 8;
        FIELD ro_rx_lfps_debug5         : 8;
        FIELD ro_rx_lfps_debug6         : 8;
        FIELD ro_rx_lfps_debug7         : 8;
    
    
} qp_pma_top_REG_QP_LFPS_DBG_1, *Pqp_pma_top_REG_QP_LFPS_DBG_1;

typedef struct
{
    

        FIELD ro_rx_lfps_debug8         : 8;
        FIELD rsv_8                     : 24;
    
    
} qp_pma_top_REG_QP_LFPS_DBG_2, *Pqp_pma_top_REG_QP_LFPS_DBG_2;

typedef struct
{
    

        FIELD ro_bistctl_prbs_done      : 1;
        FIELD ro_bistctl_prbs_fail      : 1;
        FIELD ro_bistctl_prbs_compare   : 1;
        FIELD rsv_3                     : 13;
        FIELD ro_bistctl_prbs_err_cnt   : 16;
    
    
} qp_pma_top_REG_QP_PRBS_DBG_0, *Pqp_pma_top_REG_QP_PRBS_DBG_0;

typedef struct
{
    

        FIELD ro_bistctl_prbs_bit_err_fw_using : 16;
        FIELD rsv_16                    : 16;
    
    
} qp_pma_top_REG_QP_PRBS_DBG_1, *Pqp_pma_top_REG_QP_PRBS_DBG_1;

typedef struct
{
    

        FIELD ro_bistctl_prbs_bit_err_period_num : 24;
        FIELD rsv_24                    : 8;
    
    
} qp_pma_top_REG_QP_PRBS_DBG_2, *Pqp_pma_top_REG_QP_PRBS_DBG_2;

typedef struct
{
    

        FIELD ro_prbs_bist_debug_0      : 8;
        FIELD ro_prbs_bist_debug_1      : 8;
        FIELD ro_prbs_bist_debug_2      : 8;
        FIELD ro_prbs_bist_debug_3      : 8;
    
    
} qp_pma_top_REG_QP_PRBS_DBG_3, *Pqp_pma_top_REG_QP_PRBS_DBG_3;

typedef struct
{
    

        FIELD ro_prbs_bist_debug_4      : 8;
        FIELD ro_prbs_bist_debug_5      : 8;
        FIELD ro_prbs_bist_debug_6      : 8;
        FIELD ro_prbs_bist_debug_7      : 8;
    
    
} qp_pma_top_REG_QP_PRBS_DBG_4, *Pqp_pma_top_REG_QP_PRBS_DBG_4;

typedef struct
{
    

        FIELD ro_prbs_bist_debug_8      : 8;
        FIELD ro_prbs_bist_debug_9      : 8;
        FIELD ro_prbs_bist_debug_10     : 8;
        FIELD rsv_24                    : 8;
    
    
} qp_pma_top_REG_QP_PRBS_DBG_5, *Pqp_pma_top_REG_QP_PRBS_DBG_5;

typedef struct
{
    

        FIELD ro_bist_error_cnt         : 9;
        FIELD rsv_9                     : 7;
        FIELD ro_bist_chk_done          : 1;
        FIELD ro_bist_len_error         : 1;
        FIELD ro_bist_status            : 1;
        FIELD rsv_19                    : 13;
    
    
} qp_pma_top_REG_QP_TX_BIST_DBG_0, *Pqp_pma_top_REG_QP_TX_BIST_DBG_0;

typedef struct
{
    

        FIELD ro_pcs_bist_debug         : 32;
    
    
} qp_pma_top_REG_QP_TX_BIST_DBG_1, *Pqp_pma_top_REG_QP_TX_BIST_DBG_1;

typedef struct
{
    

        FIELD ro_r2t_afifo_debug        : 32;
    
    
} qp_pma_top_REG_QP_R2T_AFIFO_DBG, *Pqp_pma_top_REG_QP_R2T_AFIFO_DBG;

typedef struct
{
    

        FIELD ro_t2r_afifo_debug        : 32;
    
    
} qp_pma_top_REG_QP_T2R_AFIFO_DBG, *Pqp_pma_top_REG_QP_T2R_AFIFO_DBG;

// ----------------- qp_pma_top  Grouping Definitions -------------------
// ----------------- qp_pma_top Register Definition -------------------
#if 0
typedef volatile 
{
    qp_pma_top_REG_QP_TX_DA_CTRL_0  QP_TX_DA_CTRL_0;  // E000
    qp_pma_top_REG_QP_TX_DA_CTRL_1  QP_TX_DA_CTRL_1;  // E004
    qp_pma_top_REG_QP_TX_DA_CTRL_2  QP_TX_DA_CTRL_2;  // E008
    qp_pma_top_REG_QP_TX_DA_CTRL_3  QP_TX_DA_CTRL_3;  // E00C
    qp_pma_top_REG_QP_TX_DA_CTRL_4  QP_TX_DA_CTRL_4;  // E010
    qp_pma_top_REG_QP_TX_DA_CTRL_5  QP_TX_DA_CTRL_5;  // E014
    qp_pma_top_REG_QP_TX_DA_CTRL_6  QP_TX_DA_CTRL_6;  // E018
    qp_pma_top_REG_QP_TX_DA_CTRL_7  QP_TX_DA_CTRL_7;  // E01C
    qp_pma_top_REG_QP_TX_DA_CTRL_8  QP_TX_DA_CTRL_8;  // E020
    qp_pma_top_REG_QP_TX_DA_CTRL_9  QP_TX_DA_CTRL_9;  // E024
    qp_pma_top_REG_QP_PMA_BIST_CTRL_0 QP_PMA_BIST_CTRL_0; // E028
    qp_pma_top_REG_QP_PMA_BIST_CTRL_1 QP_PMA_BIST_CTRL_1; // E02C
    qp_pma_top_REG_QP_PMA_BIST_CTRL_2 QP_PMA_BIST_CTRL_2; // E030
    qp_pma_top_REG_QP_PMA_BIST_CTRL_3 QP_PMA_BIST_CTRL_3; // E034
    qp_pma_top_REG_QP_PMA_BIST_CTRL_4 QP_PMA_BIST_CTRL_4; // E038
    qp_pma_top_REG_QP_RX_LFPS_CTRL_0 QP_RX_LFPS_CTRL_0; // E03C
    qp_pma_top_REG_QP_TX_DETRX_TMR  QP_TX_DETRX_TMR;  // E040
    UINT32                          rsv_E044[47];     // E044..E0FC
    qp_pma_top_REG_PON_RXFEDIG_CTRL_0 PON_RXFEDIG_CTRL_0; // E100
    qp_pma_top_REG_PON_RXFEDIG_CTRL_1 PON_RXFEDIG_CTRL_1; // E104
    qp_pma_top_REG_PON_RXFEDIG_CTRL_2 PON_RXFEDIG_CTRL_2; // E108
    qp_pma_top_REG_PON_RXFEDIG_CTRL_3 PON_RXFEDIG_CTRL_3; // E10C
    qp_pma_top_REG_PON_RXFEDIG_CTRL_4 PON_RXFEDIG_CTRL_4; // E110
    qp_pma_top_REG_PON_RXFEDIG_CTRL_5 PON_RXFEDIG_CTRL_5; // E114
    qp_pma_top_REG_PON_RXFEDIG_CTRL_6 PON_RXFEDIG_CTRL_6; // E118
    qp_pma_top_REG_PON_RXFEDIG_CTRL_7 PON_RXFEDIG_CTRL_7; // E11C
    qp_pma_top_REG_PON_RXFEDIG_CTRL_8 PON_RXFEDIG_CTRL_8; // E120
    qp_pma_top_REG_PON_RXFEDIG_CTRL_9 PON_RXFEDIG_CTRL_9; // E124
    qp_pma_top_REG_PON_RXFEDIG_CTRL_10 PON_RXFEDIG_CTRL_10; // E128
    qp_pma_top_REG_PON_RXFEDIG_CTRL_11 PON_RXFEDIG_CTRL_11; // E12C
    qp_pma_top_REG_PON_RXFEDIG_CTRL_12 PON_RXFEDIG_CTRL_12; // E130
    qp_pma_top_REG_PON_RXFEDIG_CTRL_13 PON_RXFEDIG_CTRL_13; // E134
    qp_pma_top_REG_PON_RXFEDIG_CTRL_14 PON_RXFEDIG_CTRL_14; // E138
    qp_pma_top_REG_PON_RXFEDIG_STS_0 PON_RXFEDIG_STS_0; // E13C
    qp_pma_top_REG_PON_RXFEDIG_STS_1 PON_RXFEDIG_STS_1; // E140
    qp_pma_top_REG_PON_RXFEDIG_STS_2 PON_RXFEDIG_STS_2; // E144
    qp_pma_top_REG_PON_RXFEDIG_STS_3 PON_RXFEDIG_STS_3; // E148
    qp_pma_top_REG_PON_RXFEDIG_STS_4 PON_RXFEDIG_STS_4; // E14C
    qp_pma_top_REG_PON_RXFEDIG_STS_5 PON_RXFEDIG_STS_5; // E150
    qp_pma_top_REG_PON_RXFEDIG_STS_7 PON_RXFEDIG_STS_7; // E154
    qp_pma_top_REG_PON_RXFEDIG_STS_8 PON_RXFEDIG_STS_8; // E158
    qp_pma_top_REG_PON_RXFEDIG_CTRL_15 PON_RXFEDIG_CTRL_15; // E15C
    UINT32                          rsv_E160[40];     // E160..E1FC
    qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_0 SS_LCPLL_PWCTL_SETTING_0; // E200
    qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_1 SS_LCPLL_PWCTL_SETTING_1; // E204
    qp_pma_top_REG_SS_LCPLL_PWCTL_SETTING_2 SS_LCPLL_PWCTL_SETTING_2; // E208
    qp_pma_top_REG_SS_LCPLL_PWCTL_DBG_SETTING SS_LCPLL_PWCTL_DBG_SETTING; // E20C
    qp_pma_top_REG_SS_LCPLL_TDC_PW_0 SS_LCPLL_TDC_PW_0; // E210
    qp_pma_top_REG_SS_LCPLL_TDC_PW_1 SS_LCPLL_TDC_PW_1; // E214
    qp_pma_top_REG_SS_LCPLL_TDC_PW_2 SS_LCPLL_TDC_PW_2; // E218
    qp_pma_top_REG_SS_LCPLL_TDC_PW_3 SS_LCPLL_TDC_PW_3; // E21C
    qp_pma_top_REG_SS_LCPLL_TDC_PW_4 SS_LCPLL_TDC_PW_4; // E220
    qp_pma_top_REG_SS_LCPLL_TDC_PW_5 SS_LCPLL_TDC_PW_5; // E224
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_0 SS_LCPLL_TDC_FLT_0; // E228
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_1 SS_LCPLL_TDC_FLT_1; // E22C
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_2 SS_LCPLL_TDC_FLT_2; // E230
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_3 SS_LCPLL_TDC_FLT_3; // E234
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_4 SS_LCPLL_TDC_FLT_4; // E238
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_5 SS_LCPLL_TDC_FLT_5; // E23C
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_6 SS_LCPLL_TDC_FLT_6; // E240
    qp_pma_top_REG_SS_LCPLL_TDC_FLT_7 SS_LCPLL_TDC_FLT_7; // E244
    qp_pma_top_REG_SS_LCPLL_TDC_PCW_1 SS_LCPLL_TDC_PCW_1; // E248
    qp_pma_top_REG_SS_LCPLL_TDC_PCW_2 SS_LCPLL_TDC_PCW_2; // E24C
    qp_pma_top_REG_SS_LCPLL_TDC_RO_1 SS_LCPLL_TDC_RO_1; // E250
    qp_pma_top_REG_SS_LCPLL_TDC_RO_2 SS_LCPLL_TDC_RO_2; // E254
    qp_pma_top_REG_SS_LCPLL_TDC_RO_3 SS_LCPLL_TDC_RO_3; // E258
    qp_pma_top_REG_SS_LCPLL_TDC_RO_4 SS_LCPLL_TDC_RO_4; // E25C
    qp_pma_top_REG_SS_LCPLL_TDC_RO_5 SS_LCPLL_TDC_RO_5; // E260
    qp_pma_top_REG_SS_LCPLL_TDC_CTRL_0 SS_LCPLL_TDC_CTRL_0; // E264
    qp_pma_top_REG_SS_LCPLL_0       SS_LCPLL_0;       // E268
    qp_pma_top_REG_SS_LCPLL_1       SS_LCPLL_1;       // E26C
    qp_pma_top_REG_SS_LCPLL_2       SS_LCPLL_2;       // E270
    qp_pma_top_REG_TDC_DLF_GAIN_STATUS TDC_DLF_GAIN_STATUS; // E274
    qp_pma_top_REG_TDC_DLF_MODE_SETTING TDC_DLF_MODE_SETTING; // E278
    qp_pma_top_REG_TDC_HOLD_CTRL_0  TDC_HOLD_CTRL_0;  // E27C
    qp_pma_top_REG_TDC_HOLD_CTRL_1  TDC_HOLD_CTRL_1;  // E280
    qp_pma_top_REG_TDC_HOLD_CTRL_2  TDC_HOLD_CTRL_2;  // E284
    qp_pma_top_REG_TDC_HOLD_STATUS_0 TDC_HOLD_STATUS_0; // E288
    qp_pma_top_REG_TDC_HOLD_STATUS_1 TDC_HOLD_STATUS_1; // E28C
    qp_pma_top_REG_TDC_HOLD_STATUS_2 TDC_HOLD_STATUS_2; // E290
    qp_pma_top_REG_TDC_CLR_0        TDC_CLR_0;        // E294
    UINT32                          rsv_E298[26];     // E298..E2FC
    qp_pma_top_REG_INTF_CTRL_0      INTF_CTRL_0;      // E300
    qp_pma_top_REG_INTF_CTRL_1      INTF_CTRL_1;      // E304
    qp_pma_top_REG_INTF_CTRL_2      INTF_CTRL_2;      // E308
    qp_pma_top_REG_INTF_CTRL_3      INTF_CTRL_3;      // E30C
    qp_pma_top_REG_INTF_CTRL_4      INTF_CTRL_4;      // E310
    qp_pma_top_REG_INTF_CTRL_5      INTF_CTRL_5;      // E314
    qp_pma_top_REG_INTF_CTRL_6      INTF_CTRL_6;      // E318
    qp_pma_top_REG_INTF_CTRL_7      INTF_CTRL_7;      // E31C
    qp_pma_top_REG_INTF_CTRL_8      INTF_CTRL_8;      // E320
    qp_pma_top_REG_INTF_CTRL_9      INTF_CTRL_9;      // E324
    qp_pma_top_REG_INTF_CTRL_10     INTF_CTRL_10;     // E328
    qp_pma_top_REG_INTF_CTRL_11     INTF_CTRL_11;     // E32C
    qp_pma_top_REG_INTF_CTRL_12     INTF_CTRL_12;     // E330
    qp_pma_top_REG_INTF_CTRL_13     INTF_CTRL_13;     // E334
    qp_pma_top_REG_INTF_CTRL_14     INTF_CTRL_14;     // E338
    qp_pma_top_REG_INTF_CTRL_15     INTF_CTRL_15;     // E33C
    qp_pma_top_REG_INTF_STS_0       INTF_STS_0;       // E340
    qp_pma_top_REG_INTF_STS_1       INTF_STS_1;       // E344
    qp_pma_top_REG_INTF_STS_2       INTF_STS_2;       // E348
    qp_pma_top_REG_INTF_STS_3       INTF_STS_3;       // E34C
    qp_pma_top_REG_INTF_STS_4       INTF_STS_4;       // E350
    qp_pma_top_REG_INTF_STS_5       INTF_STS_5;       // E354
    qp_pma_top_REG_INTF_STS_6       INTF_STS_6;       // E358
    qp_pma_top_REG_INTF_STS_7       INTF_STS_7;       // E35C
    qp_pma_top_REG_INTF_STS_8       INTF_STS_8;       // E360
    qp_pma_top_REG_INTF_STS_9       INTF_STS_9;       // E364
    qp_pma_top_REG_INTF_STS_10      INTF_STS_10;      // E368
    qp_pma_top_REG_INTF_STS_11      INTF_STS_11;      // E36C
    qp_pma_top_REG_INTF_STS_12      INTF_STS_12;      // E370
    UINT32                          rsv_E374[35];     // E374..E3FC
    qp_pma_top_REG_PLL_CTRL_0       PLL_CTRL_0;       // E400
    qp_pma_top_REG_PLL_CTRL_1       PLL_CTRL_1;       // E404
    qp_pma_top_REG_PLL_CTRL_2       PLL_CTRL_2;       // E408
    qp_pma_top_REG_PLL_CTRL_3       PLL_CTRL_3;       // E40C
    qp_pma_top_REG_PLL_CTRL_4       PLL_CTRL_4;       // E410
    qp_pma_top_REG_PLL_CK_CTRL_0    PLL_CK_CTRL_0;    // E414
    qp_pma_top_REG_PLL_CK_CTRL_1    PLL_CK_CTRL_1;    // E418
    qp_pma_top_REG_PLL_CK_CTRL_2    PLL_CK_CTRL_2;    // E41C
    UINT32                          rsv_E420[56];     // E420..E4FC
    qp_pma_top_REG_SYS_CTRL_0       SYS_CTRL_0;       // E500
    qp_pma_top_REG_SYS_CTRL_1       SYS_CTRL_1;       // E504
    qp_pma_top_REG_QP_SYS_0         QP_SYS_0;         // E508
    qp_pma_top_REG_FT_CTRL_0        FT_CTRL_0;        // E50C
    qp_pma_top_REG_FT_CTRL_1        FT_CTRL_1;        // E510
    qp_pma_top_REG_FT_CTRL_2        FT_CTRL_2;        // E514
    qp_pma_top_REG_FT_CTRL_3        FT_CTRL_3;        // E518
    qp_pma_top_REG_FT_CTRL_4        FT_CTRL_4;        // E51C
    qp_pma_top_REG_FT_CTRL_5        FT_CTRL_5;        // E520
    qp_pma_top_REG_FT_CTRL_6        FT_CTRL_6;        // E524
    qp_pma_top_REG_FT_CTRL_7        FT_CTRL_7;        // E528
    qp_pma_top_REG_FT_CTRL_8        FT_CTRL_8;        // E52C
    qp_pma_top_REG_FT_CTRL_9        FT_CTRL_9;        // E530
    qp_pma_top_REG_FT_CTRL_10       FT_CTRL_10;       // E534
    qp_pma_top_REG_FT_CTRL_11       FT_CTRL_11;       // E538
    qp_pma_top_REG_FT_CTRL_12       FT_CTRL_12;       // E53C
    qp_pma_top_REG_FT_CTRL_13       FT_CTRL_13;       // E540
    qp_pma_top_REG_FT_CTRL_14       FT_CTRL_14;       // E544
    qp_pma_top_REG_FT_CTRL_15       FT_CTRL_15;       // E548
    qp_pma_top_REG_FT_CTRL_16       FT_CTRL_16;       // E54C
    qp_pma_top_REG_FT_CTRL_17       FT_CTRL_17;       // E550
    qp_pma_top_REG_FT_CTRL_18       FT_CTRL_18;       // E554
    qp_pma_top_REG_FT_CTRL_19       FT_CTRL_19;       // E558
    qp_pma_top_REG_FT_CTRL_20       FT_CTRL_20;       // E55C
    qp_pma_top_REG_FT_CTRL_21       FT_CTRL_21;       // E560
    qp_pma_top_REG_FT_CTRL_22       FT_CTRL_22;       // E564
    qp_pma_top_REG_FT_CTRL_23       FT_CTRL_23;       // E568
    qp_pma_top_REG_FT_CTRL_24       FT_CTRL_24;       // E56C
    qp_pma_top_REG_FT_CTRL_25       FT_CTRL_25;       // E570
    qp_pma_top_REG_FT_CTRL_26       FT_CTRL_26;       // E574
    qp_pma_top_REG_FT_CTRL_27       FT_CTRL_27;       // E578
    qp_pma_top_REG_FT_CTRL_28       FT_CTRL_28;       // E57C
    qp_pma_top_REG_FT_CTRL_29       FT_CTRL_29;       // E580
    qp_pma_top_REG_FT_CTRL_30       FT_CTRL_30;       // E584
    qp_pma_top_REG_FT_CTRL_31       FT_CTRL_31;       // E588
    qp_pma_top_REG_FT_CTRL_32       FT_CTRL_32;       // E58C
    qp_pma_top_REG_FT_CTRL_33       FT_CTRL_33;       // E590
    qp_pma_top_REG_FT_CTRL_34       FT_CTRL_34;       // E594
    qp_pma_top_REG_FT_CTRL_35       FT_CTRL_35;       // E598
    UINT32                          rsv_E59C;         // E59C
    qp_pma_top_REG_FT_STATUS_0      FT_STATUS_0;      // E5A0
    qp_pma_top_REG_FT_STATUS_1      FT_STATUS_1;      // E5A4
    qp_pma_top_REG_FT_STATUS_2      FT_STATUS_2;      // E5A8
    qp_pma_top_REG_FT_STATUS_3      FT_STATUS_3;      // E5AC
    qp_pma_top_REG_FT_STATUS_4      FT_STATUS_4;      // E5B0
    qp_pma_top_REG_FT_STATUS_5      FT_STATUS_5;      // E5B4
    qp_pma_top_REG_FT_STATUS_6      FT_STATUS_6;      // E5B8
    qp_pma_top_REG_FT_STATUS_7      FT_STATUS_7;      // E5BC
    qp_pma_top_REG_FT_STATUS_8      FT_STATUS_8;      // E5C0
    UINT32                          rsv_E5C4[15];     // E5C4..E5FC
    qp_pma_top_REG_RX_SYS_CTRL_0    RX_SYS_CTRL_0;    // E600
    qp_pma_top_REG_FLL_CTRL_0       FLL_CTRL_0;       // E604
    qp_pma_top_REG_FLL_CTRL_1       FLL_CTRL_1;       // E608
    qp_pma_top_REG_FLL_CTRL_2       FLL_CTRL_2;       // E60C
    qp_pma_top_REG_FLL_CTRL_3       FLL_CTRL_3;       // E610
    qp_pma_top_REG_RX_DLY_0         RX_DLY_0;         // E614
    qp_pma_top_REG_RX_DLY_1         RX_DLY_1;         // E618
    qp_pma_top_REG_RX_AFIFO         RX_AFIFO;         // E61C
    qp_pma_top_REG_IMP_CTRL_0       IMP_CTRL_0;       // E620
    qp_pma_top_REG_IMP_CTRL_1       IMP_CTRL_1;       // E624
    qp_pma_top_REG_RX_CTRL_UNUSE_0  RX_CTRL_UNUSE_0;  // E628
    qp_pma_top_REG_RX_CTRL_1        RX_CTRL_1;        // E62C
    qp_pma_top_REG_RX_CTRL_2        RX_CTRL_2;        // E630
    qp_pma_top_REG_RX_CTRL_3        RX_CTRL_3;        // E634
    qp_pma_top_REG_RX_CTRL_4        RX_CTRL_4;        // E638
    qp_pma_top_REG_RX_CTRL_5        RX_CTRL_5;        // E63C
    qp_pma_top_REG_RX_CTRL_6        RX_CTRL_6;        // E640
    qp_pma_top_REG_RX_CTRL_7        RX_CTRL_7;        // E644
    qp_pma_top_REG_RX_CTRL_8        RX_CTRL_8;        // E648
    qp_pma_top_REG_RX_CTRL_9        RX_CTRL_9;        // E64C
    qp_pma_top_REG_RX_CTRL_10       RX_CTRL_10;       // E650
    qp_pma_top_REG_RX_CTRL_11       RX_CTRL_11;       // E654
    qp_pma_top_REG_RX_CTRL_12       RX_CTRL_12;       // E658
    qp_pma_top_REG_RX_CTRL_13       RX_CTRL_13;       // E65C
    qp_pma_top_REG_RX_CTRL_14       RX_CTRL_14;       // E660
    qp_pma_top_REG_RX_CTRL_15       RX_CTRL_15;       // E664
    qp_pma_top_REG_RX_CTRL_16       RX_CTRL_16;       // E668
    qp_pma_top_REG_RX_CTRL_17       RX_CTRL_17;       // E66C
    qp_pma_top_REG_RX_CTRL_18       RX_CTRL_18;       // E670
    qp_pma_top_REG_RX_CTRL_19       RX_CTRL_19;       // E674
    qp_pma_top_REG_RX_CTRL_20       RX_CTRL_20;       // E678
    qp_pma_top_REG_RX_CTRL_21       RX_CTRL_21;       // E67C
    qp_pma_top_REG_RX_CTRL_22       RX_CTRL_22;       // E680
    qp_pma_top_REG_RX_CTRL_23       RX_CTRL_23;       // E684
    qp_pma_top_REG_RX_CTRL_24       RX_CTRL_24;       // E688
    qp_pma_top_REG_RX_CTRL_25       RX_CTRL_25;       // E68C
    qp_pma_top_REG_RX_CTRL_26       RX_CTRL_26;       // E690
    qp_pma_top_REG_RX_CTRL_27       RX_CTRL_27;       // E694
    qp_pma_top_REG_RX_CTRL_28       RX_CTRL_28;       // E698
    qp_pma_top_REG_RX_CTRL_29       RX_CTRL_29;       // E69C
    qp_pma_top_REG_RX_CTRL_30       RX_CTRL_30;       // E6A0
    qp_pma_top_REG_RX_CTRL_31       RX_CTRL_31;       // E6A4
    qp_pma_top_REG_RX_CTRL_32       RX_CTRL_32;       // E6A8
    qp_pma_top_REG_RX_CTRL_33       RX_CTRL_33;       // E6AC
    qp_pma_top_REG_RX_CTRL_34       RX_CTRL_34;       // E6B0
    qp_pma_top_REG_RX_CTRL_35       RX_CTRL_35;       // E6B4
    qp_pma_top_REG_RX_CTRL_36       RX_CTRL_36;       // E6B8
    qp_pma_top_REG_RX_CTRL_37       RX_CTRL_37;       // E6BC
    qp_pma_top_REG_RX_CTRL_38       RX_CTRL_38;       // E6C0
    qp_pma_top_REG_RX_CTRL_39       RX_CTRL_39;       // E6C4
    qp_pma_top_REG_RX_CTRL_40       RX_CTRL_40;       // E6C8
    qp_pma_top_REG_RX_CTRL_41       RX_CTRL_41;       // E6CC
    qp_pma_top_REG_RX_CTRL_42       RX_CTRL_42;       // E6D0
    qp_pma_top_REG_RX_CTRL_43       RX_CTRL_43;       // E6D4
    qp_pma_top_REG_RX_CTRL_44       RX_CTRL_44;       // E6D8
    qp_pma_top_REG_RX_CTRL_45       RX_CTRL_45;       // E6DC
    qp_pma_top_REG_RX_CTRL_46       RX_CTRL_46;       // E6E0
    qp_pma_top_REG_RX_CTRL_47       RX_CTRL_47;       // E6E4
    qp_pma_top_REG_RX_CTRL_48       RX_CTRL_48;       // E6E8
    qp_pma_top_REG_RX_CTRL_49       RX_CTRL_49;       // E6EC
    qp_pma_top_REG_RX_CTRL_50       RX_CTRL_50;       // E6F0
    UINT32                          rsv_E6F4[3];      // E6F4..E6FC
    qp_pma_top_REG_ISR_CTRL_0       ISR_CTRL_0;       // E700
    qp_pma_top_REG_ISR_CTRL_1       ISR_CTRL_1;       // E704
    qp_pma_top_REG_ISR_CTRL_2       ISR_CTRL_2;       // E708
    qp_pma_top_REG_ISR_CTRL_3       ISR_CTRL_3;       // E70C
    qp_pma_top_REG_ISR_CTRL_EN_0    ISR_CTRL_EN_0;    // E710
    qp_pma_top_REG_ISR_CTRL_EN_1    ISR_CTRL_EN_1;    // E714
    qp_pma_top_REG_ISR_CTRL_EN_2    ISR_CTRL_EN_2;    // E718
    qp_pma_top_REG_ISR_CTRL_EN_3    ISR_CTRL_EN_3;    // E71C
    qp_pma_top_REG_ISR_SETTING_0    ISR_SETTING_0;    // E720
    qp_pma_top_REG_ISR_SETTING_1    ISR_SETTING_1;    // E724
    qp_pma_top_REG_ISR_SETTING_2    ISR_SETTING_2;    // E728
    qp_pma_top_REG_ISR_SETTING_3    ISR_SETTING_3;    // E72C
    qp_pma_top_REG_ISR_CTRL_5       ISR_CTRL_5;       // E730
    qp_pma_top_REG_ISR_CTRL_EN_5    ISR_CTRL_EN_5;    // E734
    qp_pma_top_REG_ISR_CTRL_6       ISR_CTRL_6;       // E738
    qp_pma_top_REG_ISR_CTRL_EN_6    ISR_CTRL_EN_6;    // E73C
    UINT32                          rsv_E740[48];     // E740..E7FC
    qp_pma_top_REG_QP_TX_DBG_0      QP_TX_DBG_0;      // E800
    qp_pma_top_REG_QP_TX_DBG_1      QP_TX_DBG_1;      // E804
    qp_pma_top_REG_QP_LFPS_DBG_0    QP_LFPS_DBG_0;    // E808
    qp_pma_top_REG_QP_LFPS_DBG_1    QP_LFPS_DBG_1;    // E80C
    qp_pma_top_REG_QP_LFPS_DBG_2    QP_LFPS_DBG_2;    // E810
    UINT32                          rsv_E814[3];      // E814..E81C
    qp_pma_top_REG_QP_PRBS_DBG_0    QP_PRBS_DBG_0;    // E820
    qp_pma_top_REG_QP_PRBS_DBG_1    QP_PRBS_DBG_1;    // E824
    qp_pma_top_REG_QP_PRBS_DBG_2    QP_PRBS_DBG_2;    // E828
    qp_pma_top_REG_QP_PRBS_DBG_3    QP_PRBS_DBG_3;    // E82C
    qp_pma_top_REG_QP_PRBS_DBG_4    QP_PRBS_DBG_4;    // E830
    qp_pma_top_REG_QP_PRBS_DBG_5    QP_PRBS_DBG_5;    // E834
    qp_pma_top_REG_QP_TX_BIST_DBG_0 QP_TX_BIST_DBG_0; // E838
    qp_pma_top_REG_QP_TX_BIST_DBG_1 QP_TX_BIST_DBG_1; // E83C
    qp_pma_top_REG_QP_R2T_AFIFO_DBG QP_R2T_AFIFO_DBG; // E840
    qp_pma_top_REG_QP_T2R_AFIFO_DBG QP_T2R_AFIFO_DBG; // E844
}qp_pma_top_REGS, *Pqp_pma_top_REGS;

// ---------- qp_pma_top Enum Definitions      ----------
// ---------- qp_pma_top C Macro Definitions   ----------
extern Pqp_pma_top_REGS g_qp_pma_top_BASE;

#define qp_pma_top_BASE                                        (g_qp_pma_top_BASE)
#endif

#define _qp_pma_top_QP_TX_DA_CTRL_0		0xE000
#define _qp_pma_top_QP_TX_DA_CTRL_1		0xE004
#define _qp_pma_top_QP_TX_DA_CTRL_2		0xE008
#define _qp_pma_top_QP_TX_DA_CTRL_3		0xE00C
#define _qp_pma_top_QP_TX_DA_CTRL_4		0xE010
#define _qp_pma_top_QP_TX_DA_CTRL_5		0xE014
#define _qp_pma_top_QP_TX_DA_CTRL_6		0xE018
#define _qp_pma_top_QP_TX_DA_CTRL_7		0xE01C
#define _qp_pma_top_QP_TX_DA_CTRL_8		0xE020
#define _qp_pma_top_QP_TX_DA_CTRL_9		0xE024
#define _qp_pma_top_QP_PMA_BIST_CTRL_0		0xE028
#define _qp_pma_top_QP_PMA_BIST_CTRL_1		0xE02C
#define _qp_pma_top_QP_PMA_BIST_CTRL_2		0xE030
#define _qp_pma_top_QP_PMA_BIST_CTRL_3		0xE034
#define _qp_pma_top_QP_PMA_BIST_CTRL_4		0xE038
#define _qp_pma_top_QP_RX_LFPS_CTRL_0		0xE03C
#define _qp_pma_top_QP_TX_DETRX_TMR		0xE040
#define _qp_pma_top_PON_RXFEDIG_CTRL_0		0xE100
#define _qp_pma_top_PON_RXFEDIG_CTRL_1		0xE104
#define _qp_pma_top_PON_RXFEDIG_CTRL_2		0xE108
#define _qp_pma_top_PON_RXFEDIG_CTRL_3		0xE10C
#define _qp_pma_top_PON_RXFEDIG_CTRL_4		0xE110
#define _qp_pma_top_PON_RXFEDIG_CTRL_5		0xE114
#define _qp_pma_top_PON_RXFEDIG_CTRL_6		0xE118
#define _qp_pma_top_PON_RXFEDIG_CTRL_7		0xE11C
#define _qp_pma_top_PON_RXFEDIG_CTRL_8		0xE120
#define _qp_pma_top_PON_RXFEDIG_CTRL_9		0xE124
#define _qp_pma_top_PON_RXFEDIG_CTRL_10		0xE128
#define _qp_pma_top_PON_RXFEDIG_CTRL_11		0xE12C
#define _qp_pma_top_PON_RXFEDIG_CTRL_12		0xE130
#define _qp_pma_top_PON_RXFEDIG_CTRL_13		0xE134
#define _qp_pma_top_PON_RXFEDIG_CTRL_14		0xE138
#define _qp_pma_top_PON_RXFEDIG_STS_0		0xE13C
#define _qp_pma_top_PON_RXFEDIG_STS_1		0xE140
#define _qp_pma_top_PON_RXFEDIG_STS_2		0xE144
#define _qp_pma_top_PON_RXFEDIG_STS_3		0xE148
#define _qp_pma_top_PON_RXFEDIG_STS_4		0xE14C
#define _qp_pma_top_PON_RXFEDIG_STS_5		0xE150
#define _qp_pma_top_PON_RXFEDIG_STS_7		0xE154
#define _qp_pma_top_PON_RXFEDIG_STS_8		0xE158
#define _qp_pma_top_PON_RXFEDIG_CTRL_15		0xE15C
#define _qp_pma_top_SS_LCPLL_PWCTL_SETTING_0		0xE200
#define _qp_pma_top_SS_LCPLL_PWCTL_SETTING_1		0xE204
#define _qp_pma_top_SS_LCPLL_PWCTL_SETTING_2		0xE208
#define _qp_pma_top_SS_LCPLL_PWCTL_DBG_SETTING		0xE20C
#define _qp_pma_top_SS_LCPLL_TDC_PW_0		0xE210
#define _qp_pma_top_SS_LCPLL_TDC_PW_1		0xE214
#define _qp_pma_top_SS_LCPLL_TDC_PW_2		0xE218
#define _qp_pma_top_SS_LCPLL_TDC_PW_3		0xE21C
#define _qp_pma_top_SS_LCPLL_TDC_PW_4		0xE220
#define _qp_pma_top_SS_LCPLL_TDC_PW_5		0xE224
#define _qp_pma_top_SS_LCPLL_TDC_FLT_0		0xE228
#define _qp_pma_top_SS_LCPLL_TDC_FLT_1		0xE22C
#define _qp_pma_top_SS_LCPLL_TDC_FLT_2		0xE230
#define _qp_pma_top_SS_LCPLL_TDC_FLT_3		0xE234
#define _qp_pma_top_SS_LCPLL_TDC_FLT_4		0xE238
#define _qp_pma_top_SS_LCPLL_TDC_FLT_5		0xE23C
#define _qp_pma_top_SS_LCPLL_TDC_FLT_6		0xE240
#define _qp_pma_top_SS_LCPLL_TDC_FLT_7		0xE244
#define _qp_pma_top_SS_LCPLL_TDC_PCW_1		0xE248
#define _qp_pma_top_SS_LCPLL_TDC_PCW_2		0xE24C
#define _qp_pma_top_SS_LCPLL_TDC_RO_1		0xE250
#define _qp_pma_top_SS_LCPLL_TDC_RO_2		0xE254
#define _qp_pma_top_SS_LCPLL_TDC_RO_3		0xE258
#define _qp_pma_top_SS_LCPLL_TDC_RO_4		0xE25C
#define _qp_pma_top_SS_LCPLL_TDC_RO_5		0xE260
#define _qp_pma_top_SS_LCPLL_TDC_CTRL_0		0xE264
#define _qp_pma_top_SS_LCPLL_0		0xE268
#define _qp_pma_top_SS_LCPLL_1		0xE26C
#define _qp_pma_top_SS_LCPLL_2		0xE270
#define _qp_pma_top_TDC_DLF_GAIN_STATUS		0xE274
#define _qp_pma_top_TDC_DLF_MODE_SETTING		0xE278
#define _qp_pma_top_TDC_HOLD_CTRL_0		0xE27C
#define _qp_pma_top_TDC_HOLD_CTRL_1		0xE280
#define _qp_pma_top_TDC_HOLD_CTRL_2		0xE284
#define _qp_pma_top_TDC_HOLD_STATUS_0		0xE288
#define _qp_pma_top_TDC_HOLD_STATUS_1		0xE28C
#define _qp_pma_top_TDC_HOLD_STATUS_2		0xE290
#define _qp_pma_top_TDC_CLR_0		0xE294
#define _qp_pma_top_INTF_CTRL_0		0xE300
#define _qp_pma_top_INTF_CTRL_1		0xE304
#define _qp_pma_top_INTF_CTRL_2		0xE308
#define _qp_pma_top_INTF_CTRL_3		0xE30C
#define _qp_pma_top_INTF_CTRL_4		0xE310
#define _qp_pma_top_INTF_CTRL_5		0xE314
#define _qp_pma_top_INTF_CTRL_6		0xE318
#define _qp_pma_top_INTF_CTRL_7		0xE31C
#define _qp_pma_top_INTF_CTRL_8		0xE320
#define _qp_pma_top_INTF_CTRL_9		0xE324
#define _qp_pma_top_INTF_CTRL_10		0xE328
#define _qp_pma_top_INTF_CTRL_11		0xE32C
#define _qp_pma_top_INTF_CTRL_12		0xE330
#define _qp_pma_top_INTF_CTRL_13		0xE334
#define _qp_pma_top_INTF_CTRL_14		0xE338
#define _qp_pma_top_INTF_CTRL_15		0xE33C
#define _qp_pma_top_INTF_STS_0		0xE340
#define _qp_pma_top_INTF_STS_1		0xE344
#define _qp_pma_top_INTF_STS_2		0xE348
#define _qp_pma_top_INTF_STS_3		0xE34C
#define _qp_pma_top_INTF_STS_4		0xE350
#define _qp_pma_top_INTF_STS_5		0xE354
#define _qp_pma_top_INTF_STS_6		0xE358
#define _qp_pma_top_INTF_STS_7		0xE35C
#define _qp_pma_top_INTF_STS_8		0xE360
#define _qp_pma_top_INTF_STS_9		0xE364
#define _qp_pma_top_INTF_STS_10		0xE368
#define _qp_pma_top_INTF_STS_11		0xE36C
#define _qp_pma_top_INTF_STS_12		0xE370
#define _qp_pma_top_PLL_CTRL_0		0xE400
#define _qp_pma_top_PLL_CTRL_1		0xE404
#define _qp_pma_top_PLL_CTRL_2		0xE408
#define _qp_pma_top_PLL_CTRL_3		0xE40C
#define _qp_pma_top_PLL_CTRL_4		0xE410
#define _qp_pma_top_PLL_CK_CTRL_0		0xE414
#define _qp_pma_top_PLL_CK_CTRL_1		0xE418
#define _qp_pma_top_PLL_CK_CTRL_2		0xE41C
#define _qp_pma_top_SYS_CTRL_0		0xE500
#define _qp_pma_top_SYS_CTRL_1		0xE504
#define _qp_pma_top_QP_SYS_0		0xE508
#define _qp_pma_top_FT_CTRL_0		0xE50C
#define _qp_pma_top_FT_CTRL_1		0xE510
#define _qp_pma_top_FT_CTRL_2		0xE514
#define _qp_pma_top_FT_CTRL_3		0xE518
#define _qp_pma_top_FT_CTRL_4		0xE51C
#define _qp_pma_top_FT_CTRL_5		0xE520
#define _qp_pma_top_FT_CTRL_6		0xE524
#define _qp_pma_top_FT_CTRL_7		0xE528
#define _qp_pma_top_FT_CTRL_8		0xE52C
#define _qp_pma_top_FT_CTRL_9		0xE530
#define _qp_pma_top_FT_CTRL_10		0xE534
#define _qp_pma_top_FT_CTRL_11		0xE538
#define _qp_pma_top_FT_CTRL_12		0xE53C
#define _qp_pma_top_FT_CTRL_13		0xE540
#define _qp_pma_top_FT_CTRL_14		0xE544
#define _qp_pma_top_FT_CTRL_15		0xE548
#define _qp_pma_top_FT_CTRL_16		0xE54C
#define _qp_pma_top_FT_CTRL_17		0xE550
#define _qp_pma_top_FT_CTRL_18		0xE554
#define _qp_pma_top_FT_CTRL_19		0xE558
#define _qp_pma_top_FT_CTRL_20		0xE55C
#define _qp_pma_top_FT_CTRL_21		0xE560
#define _qp_pma_top_FT_CTRL_22		0xE564
#define _qp_pma_top_FT_CTRL_23		0xE568
#define _qp_pma_top_FT_CTRL_24		0xE56C
#define _qp_pma_top_FT_CTRL_25		0xE570
#define _qp_pma_top_FT_CTRL_26		0xE574
#define _qp_pma_top_FT_CTRL_27		0xE578
#define _qp_pma_top_FT_CTRL_28		0xE57C
#define _qp_pma_top_FT_CTRL_29		0xE580
#define _qp_pma_top_FT_CTRL_30		0xE584
#define _qp_pma_top_FT_CTRL_31		0xE588
#define _qp_pma_top_FT_CTRL_32		0xE58C
#define _qp_pma_top_FT_CTRL_33		0xE590
#define _qp_pma_top_FT_CTRL_34		0xE594
#define _qp_pma_top_FT_CTRL_35		0xE598
#define _qp_pma_top_FT_STATUS_0		0xE5A0
#define _qp_pma_top_FT_STATUS_1		0xE5A4
#define _qp_pma_top_FT_STATUS_2		0xE5A8
#define _qp_pma_top_FT_STATUS_3		0xE5AC
#define _qp_pma_top_FT_STATUS_4		0xE5B0
#define _qp_pma_top_FT_STATUS_5		0xE5B4
#define _qp_pma_top_FT_STATUS_6		0xE5B8
#define _qp_pma_top_FT_STATUS_7		0xE5BC
#define _qp_pma_top_FT_STATUS_8		0xE5C0
#define _qp_pma_top_RX_SYS_CTRL_0		0xE600
#define _qp_pma_top_FLL_CTRL_0		0xE604
#define _qp_pma_top_FLL_CTRL_1		0xE608
#define _qp_pma_top_FLL_CTRL_2		0xE60C
#define _qp_pma_top_FLL_CTRL_3		0xE610
#define _qp_pma_top_RX_DLY_0		0xE614
#define _qp_pma_top_RX_DLY_1		0xE618
#define _qp_pma_top_RX_AFIFO		0xE61C
#define _qp_pma_top_IMP_CTRL_0		0xE620
#define _qp_pma_top_IMP_CTRL_1		0xE624
#define _qp_pma_top_RX_CTRL_UNUSE_0		0xE628
#define _qp_pma_top_RX_CTRL_1		0xE62C
#define _qp_pma_top_RX_CTRL_2		0xE630
#define _qp_pma_top_RX_CTRL_3		0xE634
#define _qp_pma_top_RX_CTRL_4		0xE638
#define _qp_pma_top_RX_CTRL_5		0xE63C
#define _qp_pma_top_RX_CTRL_6		0xE640
#define _qp_pma_top_RX_CTRL_7		0xE644
#define _qp_pma_top_RX_CTRL_8		0xE648
#define _qp_pma_top_RX_CTRL_9		0xE64C
#define _qp_pma_top_RX_CTRL_10		0xE650
#define _qp_pma_top_RX_CTRL_11		0xE654
#define _qp_pma_top_RX_CTRL_12		0xE658
#define _qp_pma_top_RX_CTRL_13		0xE65C
#define _qp_pma_top_RX_CTRL_14		0xE660
#define _qp_pma_top_RX_CTRL_15		0xE664
#define _qp_pma_top_RX_CTRL_16		0xE668
#define _qp_pma_top_RX_CTRL_17		0xE66C
#define _qp_pma_top_RX_CTRL_18		0xE670
#define _qp_pma_top_RX_CTRL_19		0xE674
#define _qp_pma_top_RX_CTRL_20		0xE678
#define _qp_pma_top_RX_CTRL_21		0xE67C
#define _qp_pma_top_RX_CTRL_22		0xE680
#define _qp_pma_top_RX_CTRL_23		0xE684
#define _qp_pma_top_RX_CTRL_24		0xE688
#define _qp_pma_top_RX_CTRL_25		0xE68C
#define _qp_pma_top_RX_CTRL_26		0xE690
#define _qp_pma_top_RX_CTRL_27		0xE694
#define _qp_pma_top_RX_CTRL_28		0xE698
#define _qp_pma_top_RX_CTRL_29		0xE69C
#define _qp_pma_top_RX_CTRL_30		0xE6A0
#define _qp_pma_top_RX_CTRL_31		0xE6A4
#define _qp_pma_top_RX_CTRL_32		0xE6A8
#define _qp_pma_top_RX_CTRL_33		0xE6AC
#define _qp_pma_top_RX_CTRL_34		0xE6B0
#define _qp_pma_top_RX_CTRL_35		0xE6B4
#define _qp_pma_top_RX_CTRL_36		0xE6B8
#define _qp_pma_top_RX_CTRL_37		0xE6BC
#define _qp_pma_top_RX_CTRL_38		0xE6C0
#define _qp_pma_top_RX_CTRL_39		0xE6C4
#define _qp_pma_top_RX_CTRL_40		0xE6C8
#define _qp_pma_top_RX_CTRL_41		0xE6CC
#define _qp_pma_top_RX_CTRL_42		0xE6D0
#define _qp_pma_top_RX_CTRL_43		0xE6D4
#define _qp_pma_top_RX_CTRL_44		0xE6D8
#define _qp_pma_top_RX_CTRL_45		0xE6DC
#define _qp_pma_top_RX_CTRL_46		0xE6E0
#define _qp_pma_top_RX_CTRL_47		0xE6E4
#define _qp_pma_top_RX_CTRL_48		0xE6E8
#define _qp_pma_top_RX_CTRL_49		0xE6EC
#define _qp_pma_top_RX_CTRL_50		0xE6F0
#define _qp_pma_top_ISR_CTRL_0		0xE700
#define _qp_pma_top_ISR_CTRL_1		0xE704
#define _qp_pma_top_ISR_CTRL_2		0xE708
#define _qp_pma_top_ISR_CTRL_3		0xE70C
#define _qp_pma_top_ISR_CTRL_EN_0		0xE710
#define _qp_pma_top_ISR_CTRL_EN_1		0xE714
#define _qp_pma_top_ISR_CTRL_EN_2		0xE718
#define _qp_pma_top_ISR_CTRL_EN_3		0xE71C
#define _qp_pma_top_ISR_SETTING_0		0xE720
#define _qp_pma_top_ISR_SETTING_1		0xE724
#define _qp_pma_top_ISR_SETTING_2		0xE728
#define _qp_pma_top_ISR_SETTING_3		0xE72C
#define _qp_pma_top_ISR_CTRL_5		0xE730
#define _qp_pma_top_ISR_CTRL_EN_5		0xE734
#define _qp_pma_top_ISR_CTRL_6		0xE738
#define _qp_pma_top_ISR_CTRL_EN_6		0xE73C
#define _qp_pma_top_QP_TX_DBG_0		0xE800
#define _qp_pma_top_QP_TX_DBG_1		0xE804
#define _qp_pma_top_QP_LFPS_DBG_0		0xE808
#define _qp_pma_top_QP_LFPS_DBG_1		0xE80C
#define _qp_pma_top_QP_LFPS_DBG_2		0xE810
#define _qp_pma_top_QP_PRBS_DBG_0		0xE820
#define _qp_pma_top_QP_PRBS_DBG_1		0xE824
#define _qp_pma_top_QP_PRBS_DBG_2		0xE828
#define _qp_pma_top_QP_PRBS_DBG_3		0xE82C
#define _qp_pma_top_QP_PRBS_DBG_4		0xE830
#define _qp_pma_top_QP_PRBS_DBG_5		0xE834
#define _qp_pma_top_QP_TX_BIST_DBG_0		0xE838
#define _qp_pma_top_QP_TX_BIST_DBG_1		0xE83C
#define _qp_pma_top_QP_R2T_AFIFO_DBG		0xE840
#define _qp_pma_top_QP_T2R_AFIFO_DBG		0xE844

#endif

#if 0
#define QP_TX_DA_CTRL_0_FLD_rg_ssusb_tx_eidle_sel              REG_FLD(1, 31)
#define QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_vref_sel           REG_FLD(1, 30)
#define QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_sel                REG_FLD(2, 28)
#define QP_TX_DA_CTRL_0_FLD_rg_fval_tx_impcalib_en             REG_FLD(1, 27)
#define QP_TX_DA_CTRL_0_FLD_rg_tx_termcal_count                REG_FLD(3, 24)
#define QP_TX_DA_CTRL_0_FLD_rg_termcal_vsel_timer              REG_FLD(6, 18)
#define QP_TX_DA_CTRL_0_FLD_rg_force_tx_calib_en               REG_FLD(1, 17)
#define QP_TX_DA_CTRL_0_FLD_rg_impcalib_en                     REG_FLD(1, 16)
#define QP_TX_DA_CTRL_0_FLD_rg_rxdet_rd_wait_timer             REG_FLD(4, 12)
#define QP_TX_DA_CTRL_0_FLD_rg_rxdet_mask_clr                  REG_FLD(1, 11)
#define QP_TX_DA_CTRL_0_FLD_rg_force_qp_tx_reserve             REG_FLD(1, 10)
#define QP_TX_DA_CTRL_0_FLD_rg_rxdet_en_window                 REG_FLD(6, 4)
#define QP_TX_DA_CTRL_0_FLD_rg_tx_rxdet_en                     REG_FLD(1, 3)
#define QP_TX_DA_CTRL_0_FLD_rg_fval_rx_det_en                  REG_FLD(1, 2)
#define QP_TX_DA_CTRL_0_FLD_rg_force_rx_det_ctrl               REG_FLD(1, 1)
#define QP_TX_DA_CTRL_0_FLD_rg_fval_tx_eidle_lp_off            REG_FLD(1, 0)

#define QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data                    REG_FLD(20, 12)
#define QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data_en                 REG_FLD(1, 11)
#define QP_TX_DA_CTRL_1_FLD_rg_fval_tx_ser_en                  REG_FLD(1, 10)
#define QP_TX_DA_CTRL_1_FLD_rg_txff_redun_en                   REG_FLD(1, 9)
#define QP_TX_DA_CTRL_1_FLD_rg_force_tx_data_ctrl              REG_FLD(1, 8)
#define QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_inverse            REG_FLD(1, 7)
#define QP_TX_DA_CTRL_1_FLD_rg_tfifo_bypass                    REG_FLD(1, 6)
#define QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_reverse            REG_FLD(1, 5)
#define QP_TX_DA_CTRL_1_FLD_rg_tfifo_rst                       REG_FLD(1, 4)
#define QP_TX_DA_CTRL_1_FLD_rg_tx_ser_en_ps_mode               REG_FLD(1, 3)
#define QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps                    REG_FLD(1, 2)
#define QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps_en                 REG_FLD(1, 1)
#define QP_TX_DA_CTRL_1_FLD_rg_force_tx_lfps_ctrl              REG_FLD(1, 0)

#define QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_mode                  REG_FLD(4, 28)
#define QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem_sel                REG_FLD(1, 27)
#define QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_sel                   REG_FLD(2, 24)
#define QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_drv_en                 REG_FLD(1, 23)
#define QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_dem                    REG_FLD(2, 21)
#define QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c2                       REG_FLD(5, 16)
#define QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c1                       REG_FLD(5, 10)
#define QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c0b                      REG_FLD(6, 4)
#define QP_TX_DA_CTRL_2_FLD_rg_tx_fir_cn1                      REG_FLD(3, 1)
#define QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem                    REG_FLD(1, 0)

#define QP_TX_DA_CTRL_3_FLD_rg_ssusb_tx_ser_en_sel             REG_FLD(1, 31)
#define QP_TX_DA_CTRL_3_FLD_rg_tx_data_rate_sel                REG_FLD(3, 28)
#define QP_TX_DA_CTRL_3_FLD_rg_force_tphy_mode                 REG_FLD(1, 26)
#define QP_TX_DA_CTRL_3_FLD_rg_qphy_redun_sel                  REG_FLD(2, 24)
#define QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_count              REG_FLD(9, 8)
#define QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_type               REG_FLD(3, 4)
#define QP_TX_DA_CTRL_3_FLD_rg_test_tx_cp8                     REG_FLD(1, 3)
#define QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_en                 REG_FLD(1, 2)
#define QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_en                 REG_FLD(1, 1)
#define QP_TX_DA_CTRL_3_FLD_rg_tx_data_test_mode               REG_FLD(1, 0)

#define QP_TX_DA_CTRL_4_FLD_rg_bist_error_patt                 REG_FLD(20, 8)
#define QP_TX_DA_CTRL_4_FLD_rg_lock_rx20b_inv                  REG_FLD(1, 6)
#define QP_TX_DA_CTRL_4_FLD_rg_test_rx_bist_en                 REG_FLD(1, 5)
#define QP_TX_DA_CTRL_4_FLD_rg_bist_add_error_en               REG_FLD(1, 4)
#define QP_TX_DA_CTRL_4_FLD_rg_test_tx_add_id_en               REG_FLD(1, 3)
#define QP_TX_DA_CTRL_4_FLD_rg_test_tx_patt_sel                REG_FLD(3, 0)

#define QP_TX_DA_CTRL_5_FLD_rg_test_tx_patt0                   REG_FLD(20, 0)

#define QP_TX_DA_CTRL_6_FLD_rg_test_tx_patt1                   REG_FLD(20, 0)

#define QP_TX_DA_CTRL_7_FLD_rg_test_tx_patt2                   REG_FLD(20, 0)

#define QP_TX_DA_CTRL_8_FLD_rg_test_tx_patt3                   REG_FLD(20, 0)

#define QP_TX_DA_CTRL_9_FLD_rg_test_tseq_cnt                   REG_FLD(16, 16)
#define QP_TX_DA_CTRL_9_FLD_rg_r2t_data_en_dly                 REG_FLD(4, 8)
#define QP_TX_DA_CTRL_9_FLD_rg_r2tlb_fiforst                   REG_FLD(1, 5)
#define QP_TX_DA_CTRL_9_FLD_rg_r2tlb_bypass                    REG_FLD(1, 4)
#define QP_TX_DA_CTRL_9_FLD_rg_t2rlb_fiforst                   REG_FLD(1, 3)
#define QP_TX_DA_CTRL_9_FLD_rg_t2rlb_int_en                    REG_FLD(1, 2)
#define QP_TX_DA_CTRL_9_FLD_rg_r2tlb_mode                      REG_FLD(1, 1)
#define QP_TX_DA_CTRL_9_FLD_rg_test_tseq_mode                  REG_FLD(1, 0)

#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_fail_threshold  REG_FLD(16, 16)
#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_check_cnt       REG_FLD(2, 8)
#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_io_data_inv          REG_FLD(2, 6)
#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_bit_error_rst_sel    REG_FLD(1, 5)
#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_rx_check_en      REG_FLD(1, 4)
#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_tx_en            REG_FLD(1, 3)
#define QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_sel              REG_FLD(3, 0)

#define QP_PMA_BIST_CTRL_1_FLD_rg_bistctl_prbs_init_seed       REG_FLD(32, 0)

#define QP_PMA_BIST_CTRL_2_FLD_rg_bistctl_align_pattern        REG_FLD(32, 0)

#define QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution_latch REG_FLD(1, 24)
#define QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution       REG_FLD(20, 0)

#define QP_PMA_BIST_CTRL_4_FLD_rg_bistctl_prbs_check_timer     REG_FLD(24, 0)

#define QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_p3_entry               REG_FLD(1, 31)
#define QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_lfps_sel                REG_FLD(1, 27)
#define QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_lob              REG_FLD(5, 21)
#define QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_upb              REG_FLD(5, 16)
#define QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_udf              REG_FLD(5, 9)
#define QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_ovf              REG_FLD(5, 4)
#define QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_deglitch               REG_FLD(2, 2)
#define QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_pwd                    REG_FLD(1, 1)
#define QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_mon_en                 REG_FLD(1, 0)

#define QP_TX_DETRX_TMR_FLD_rg_tx_reserved_bit                 REG_FLD(16, 16)
#define QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out_val          REG_FLD(1, 15)
#define QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out              REG_FLD(1, 14)
#define QP_TX_DETRX_TMR_FLD_rg_tx_detrx_wait_timer             REG_FLD(14, 0)

#define PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_RST             REG_FLD(1, 25)
#define PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_EN              REG_FLD(1, 24)
#define PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_FR_MODE             REG_FLD(1, 16)
#define PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_FORCE_RX_FR_MODE       REG_FLD(1, 15)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_TRI_DET_EN             REG_FLD(1, 14)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_STOPTIME               REG_FLD(1, 13)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_RX500M_CK_SEL          REG_FLD(1, 12)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_PILPO_ROUT             REG_FLD(1, 11)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_GATED_RXD_B            REG_FLD(1, 10)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_MON_EN             REG_FLD(1, 9)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_CNT_EN             REG_FLD(1, 8)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFE_TOG                REG_FLD(1, 7)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEYEN_STOP_DIS        REG_FLD(1, 6)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_RST               REG_FLD(1, 5)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_EN                REG_FLD(1, 4)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_DIS               REG_FLD(1, 3)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEXEN_SEL             REG_FLD(1, 2)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_CHK_EYE_H              REG_FLD(1, 1)
#define PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_ALGRTHM_SEL            REG_FLD(1, 0)

#define PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1LOS_LFI             REG_FLD(7, 24)
#define PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1HOS_LFI             REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0LOS_LFI             REG_FLD(7, 8)
#define PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0HOS_LFI             REG_FLD(7, 0)

#define PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE1OS_LFI            REG_FLD(7, 24)
#define PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE0OS_LFI            REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE1OS_LFI              REG_FLD(7, 8)
#define PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE0OS_LFI              REG_FLD(7, 0)

#define PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHL_LFI               REG_FLD(7, 24)
#define PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHLOS_LFI             REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEYEN_DUR             REG_FLD(3, 8)
#define PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEX_LF_SEL            REG_FLD(3, 4)
#define PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEXEN_DUR             REG_FLD(3, 0)

#define PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN3          REG_FLD(4, 28)
#define PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN2          REG_FLD(4, 24)
#define PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN1          REG_FLD(4, 16)
#define PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQOS_LFI             REG_FLD(5, 8)
#define PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DHHL_LF_SEL            REG_FLD(3, 0)

#define PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DSAOS_LF_SEL           REG_FLD(3, 28)
#define PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LF_SEL            REG_FLD(3, 24)
#define PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LFI               REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHLOS_LFI             REG_FLD(7, 8)
#define PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LF_SEL            REG_FLD(3, 4)
#define PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LFI_GEN4          REG_FLD(4, 0)

#define PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE1_Y                 REG_FLD(7, 8)
#define PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE0_Y                 REG_FLD(7, 0)

#define PON_RXFEDIG_CTRL_7_FLD_RG_QP_EQ_EYE_CNT                REG_FLD(20, 0)

#define PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_LEQMAX                 REG_FLD(4, 28)
#define PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_ISIFLAG_SEL            REG_FLD(2, 24)
#define PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_XOFFSET            REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_MASK               REG_FLD(10, 0)

#define PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_PI0_INI                REG_FLD(7, 24)
#define PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_MON_SEL                REG_FLD(5, 16)
#define PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_STOP_TO            REG_FLD(2, 8)
#define PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_SHIFT              REG_FLD(3, 4)
#define PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQOSC_DLYCNT          REG_FLD(3, 0)

#define PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI_KPGAIN             REG_FLD(3, 24)
#define PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PIEYE_INI             REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90_INI              REG_FLD(7, 8)
#define PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90CK_SEL            REG_FLD(2, 0)

#define PON_RXFEDIG_CTRL_11_FLD_RG_QP_EQ_RESERVED              REG_FLD(32, 0)

#define PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV                   REG_FLD(16, 16)
#define PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV_1                 REG_FLD(16, 0)

#define PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_STARTTIME             REG_FLD(2, 24)
#define PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SIGDET                REG_FLD(7, 16)
#define PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT1               REG_FLD(6, 8)
#define PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT0               REG_FLD(6, 0)

#define PON_RXFEDIG_CTRL_14_FLD_RG_QP_EQ_TRI_DET_TH            REG_FLD(7, 0)

#define PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_LEQ_STOP            REG_FLD(1, 1)
#define PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_EYE_CNT_RDY         REG_FLD(1, 0)

#define PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1L               REG_FLD(7, 24)
#define PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1H               REG_FLD(7, 16)
#define PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0L               REG_FLD(7, 8)
#define PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0H               REG_FLD(7, 0)

#define PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE1              REG_FLD(7, 24)
#define PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE0              REG_FLD(7, 16)
#define PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE1                REG_FLD(7, 8)
#define PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE0                REG_FLD(7, 0)

#define PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLHL               REG_FLD(7, 24)
#define PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQOS             REG_FLD(5, 16)
#define PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQ               REG_FLD(4, 8)
#define PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCHHL               REG_FLD(7, 0)

#define PON_RXFEDIG_STS_4_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0 REG_FLD(20, 0)

#define PON_RXFEDIG_STS_5_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1 REG_FLD(20, 0)

#define PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_STATUS              REG_FLD(8, 16)
#define PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_PILPO               REG_FLD(7, 0)

#define PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_RX_SD_OUT              REG_FLD(1, 8)
#define PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_EQ_PROBE_OUT           REG_FLD(8, 0)

#define PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_MODE               REG_FLD(2, 2)
#define PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_SPEED              REG_FLD(2, 0)

#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_int_los_inv            REG_FLD(1, 30)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_los_inv            REG_FLD(1, 29)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_ck_en_and_los      REG_FLD(1, 28)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_lck2ref_sel        REG_FLD(1, 25)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en            REG_FLD(1, 24)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv           REG_FLD(1, 16)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode     REG_FLD(1, 8)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_los_hold_en       REG_FLD(1, 2)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_det_en            REG_FLD(1, 1)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on         REG_FLD(1, 0)

#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer     REG_FLD(8, 24)
#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer REG_FLD(8, 16)
#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer         REG_FLD(8, 8)
#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb         REG_FLD(1, 0)

#define SS_LCPLL_PWCTL_SETTING_2_FLD_rg_ncpo_ana_msb           REG_FLD(2, 16)
#define SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_mst_en             REG_FLD(1, 8)
#define SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_ck_stb_timer       REG_FLD(8, 0)

#define SS_LCPLL_PWCTL_DBG_SETTING_FLD_rg_lcpll_ledck_div      REG_FLD(4, 0)

#define SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_iso_disable   REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_pwdb          REG_FLD(1, 16)
#define SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_autopw_en          REG_FLD(1, 8)
#define SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_tdc_dig_pwdb            REG_FLD(1, 0)

#define SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg  REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb          REG_FLD(1, 16)
#define SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb_dly      REG_FLD(2, 8)
#define SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_iso_disable_dly REG_FLD(2, 0)

#define SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en   REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en_dly   REG_FLD(2, 16)
#define SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en       REG_FLD(1, 8)
#define SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly REG_FLD(2, 0)

#define SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal                 REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig_dly        REG_FLD(3, 16)
#define SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig            REG_FLD(1, 8)
#define SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en_dly REG_FLD(2, 0)

#define SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_sigdet_cg           REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_en                  REG_FLD(1, 16)
#define SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_offset          REG_FLD(1, 8)
#define SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_bw              REG_FLD(1, 0)

#define SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt                 REG_FLD(4, 28)
#define SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt_clr             REG_FLD(1, 26)
#define SS_LCPLL_TDC_PW_5_FLD_rg_ncpo_start_dly_en             REG_FLD(1, 25)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_sync_in_mode        REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_autok_tdc               REG_FLD(1, 16)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_autoen              REG_FLD(1, 8)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_en_mux              REG_FLD(1, 0)

#define SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_tdc_offset             REG_FLD(11, 16)
#define SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_ki                     REG_FLD(3, 8)
#define SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_pon_rx_cdr_divtdc      REG_FLD(3, 0)

#define SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_tdc_gain               REG_FLD(11, 16)
#define SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_a_tdc                  REG_FLD(4, 8)
#define SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_gpon_sel               REG_FLD(1, 0)

#define SS_LCPLL_TDC_FLT_2_FLD_rg_lcpll_ncpo_value             REG_FLD(31, 0)

#define SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd_disb                 REG_FLD(1, 29)
#define SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd                      REG_FLD(1, 28)
#define SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_tdc_swrst              REG_FLD(1, 24)
#define SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_hold              REG_FLD(1, 16)
#define SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_load              REG_FLD(1, 8)
#define SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_shift             REG_FLD(2, 0)

#define SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_wait_lck2ref     REG_FLD(1, 24)
#define SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_chk_lck2ref      REG_FLD(1, 16)
#define SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdc_rst                REG_FLD(1, 8)
#define SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_rst_dlf          REG_FLD(1, 0)

#define SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_ncpo_chg               REG_FLD(1, 24)
#define SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_autopw_ncpo        REG_FLD(1, 16)
#define SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pos_dly    REG_FLD(3, 8)
#define SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pre_dly    REG_FLD(2, 0)

#define SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_tdc_pcw_sub1en         REG_FLD(1, 24)
#define SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_dlf_mult_en            REG_FLD(1, 16)
#define SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_delay         REG_FLD(2, 8)
#define SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_mask          REG_FLD(5, 0)

#define SS_LCPLL_TDC_FLT_7_FLD_rg_lcpll_tdcck_inv_en           REG_FLD(1, 0)

#define SS_LCPLL_TDC_PCW_1_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_gpon REG_FLD(31, 0)

#define SS_LCPLL_TDC_PCW_2_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_epon REG_FLD(31, 0)

#define SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_dig                 REG_FLD(12, 16)
#define SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_st                  REG_FLD(5, 8)
#define SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_tdcpw_st            REG_FLD(4, 0)

#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_ck_stb     REG_FLD(1, 31)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en REG_FLD(1, 30)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_offset REG_FLD(1, 29)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_bw     REG_FLD(1, 28)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_en         REG_FLD(1, 27)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_rx_ck_stb      REG_FLD(1, 26)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_en_lck2ref_rst      REG_FLD(1, 25)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pwdb      REG_FLD(1, 24)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_iso_disable REG_FLD(1, 23)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_rstb      REG_FLD(1, 22)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_ncpo_en   REG_FLD(1, 21)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg REG_FLD(1, 20)
#define SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dlf_gain            REG_FLD(20, 0)

#define SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_gain                REG_FLD(11, 16)
#define SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_decode              REG_FLD(3, 13)
#define SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_en                  REG_FLD(1, 12)
#define SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_cal_done            REG_FLD(1, 11)
#define SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_offset              REG_FLD(11, 0)

#define SS_LCPLL_TDC_RO_4_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo  REG_FLD(31, 0)

#define SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_c          REG_FLD(8, 16)
#define SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_d          REG_FLD(8, 8)
#define SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_leadlag    REG_FLD(1, 0)

#define SS_LCPLL_TDC_CTRL_0_FLD_rg_lcpll_ki_hold               REG_FLD(1, 0)

#define SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg                   REG_FLD(1, 8)
#define SS_LCPLL_0_FLD_eee_lcpll_hold                          REG_FLD(1, 0)

#define SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo                       REG_FLD(31, 0)

#define SS_LCPLL_2_FLD_lcpll_top_flagh_en                      REG_FLD(1, 24)
#define SS_LCPLL_2_FLD_lcpll_top_flagl_en                      REG_FLD(1, 16)
#define SS_LCPLL_2_FLD_flagh_sel                               REG_FLD(8, 8)
#define SS_LCPLL_2_FLD_flagl_sel                               REG_FLD(8, 0)

#define TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new           REG_FLD(8, 8)
#define TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new                REG_FLD(8, 0)

#define TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch             REG_FLD(1, 31)
#define TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel               REG_FLD(1, 24)
#define TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org           REG_FLD(20, 0)

#define TDC_HOLD_CTRL_0_FLD_rg_ncpo_hold_en                    REG_FLD(1, 24)
#define TDC_HOLD_CTRL_0_FLD_rg_ncpo_toggle                     REG_FLD(1, 20)
#define TDC_HOLD_CTRL_0_FLD_rg_tdc_los_hold_mux                REG_FLD(1, 16)
#define TDC_HOLD_CTRL_0_FLD_rg_tdc_ncpo_hold_release_time      REG_FLD(16, 0)

#define TDC_HOLD_CTRL_1_FLD_rg_ncpo_up_thred                   REG_FLD(31, 0)

#define TDC_HOLD_CTRL_2_FLD_rg_ncpo_dwn_thred                  REG_FLD(31, 0)

#define TDC_HOLD_STATUS_0_FLD_ro_ncpo_output                   REG_FLD(31, 0)

#define TDC_HOLD_STATUS_1_FLD_ro_ncpo_max_output               REG_FLD(31, 0)

#define TDC_HOLD_STATUS_2_FLD_ro_ncpo_min_output               REG_FLD(31, 0)

#define TDC_CLR_0_FLD_rg_ncpo_flag_clr                         REG_FLD(1, 1)
#define TDC_CLR_0_FLD_rg_ncpo_clr                              REG_FLD(1, 0)

#define INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_sel               REG_FLD(1, 31)
#define INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_force             REG_FLD(1, 30)
#define INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_sel                REG_FLD(1, 29)
#define INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_force              REG_FLD(1, 28)
#define INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_sel               REG_FLD(1, 27)
#define INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_force             REG_FLD(1, 26)
#define INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_sel           REG_FLD(1, 25)
#define INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_force         REG_FLD(1, 24)
#define INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_sel               REG_FLD(1, 23)
#define INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_force             REG_FLD(1, 22)
#define INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_sel                  REG_FLD(1, 21)
#define INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_force                REG_FLD(1, 20)
#define INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_sel               REG_FLD(1, 19)
#define INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_force             REG_FLD(1, 18)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_sel      REG_FLD(1, 17)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_force    REG_FLD(1, 16)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_sel       REG_FLD(1, 15)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_force     REG_FLD(1, 14)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_sel      REG_FLD(1, 13)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_force    REG_FLD(1, 12)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_sel              REG_FLD(1, 11)
#define INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_force            REG_FLD(1, 10)
#define INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_sel             REG_FLD(1, 9)
#define INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_force           REG_FLD(1, 8)
#define INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_sel                REG_FLD(1, 7)
#define INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_force              REG_FLD(1, 6)
#define INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_sel                   REG_FLD(1, 5)
#define INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_force                 REG_FLD(1, 4)
#define INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_sel            REG_FLD(1, 3)
#define INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_force          REG_FLD(1, 2)
#define INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_sel                REG_FLD(1, 1)
#define INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_force              REG_FLD(1, 0)

#define INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_sel                     REG_FLD(1, 24)
#define INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_force                   REG_FLD(8, 16)
#define INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_sel          REG_FLD(1, 8)
#define INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_force        REG_FLD(8, 0)

#define INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_sel                     REG_FLD(1, 8)
#define INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_force                   REG_FLD(8, 0)

#define INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_sel     REG_FLD(1, 19)
#define INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_force   REG_FLD(19, 0)

#define INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_sel                REG_FLD(1, 20)
#define INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_force              REG_FLD(20, 0)

#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_sel           REG_FLD(1, 31)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_force         REG_FLD(1, 30)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_sel           REG_FLD(1, 29)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_force         REG_FLD(1, 28)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_sel         REG_FLD(1, 27)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_force       REG_FLD(1, 26)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_sel               REG_FLD(1, 25)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_force             REG_FLD(1, 24)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_sel              REG_FLD(1, 23)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_force            REG_FLD(1, 22)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_sel              REG_FLD(1, 21)
#define INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_force            REG_FLD(1, 20)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_scan_sel                   REG_FLD(1, 19)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_scan_force                 REG_FLD(1, 18)
#define INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_sel               REG_FLD(1, 17)
#define INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_force             REG_FLD(1, 16)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_sel               REG_FLD(1, 15)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_force             REG_FLD(1, 14)
#define INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_sel                 REG_FLD(1, 13)
#define INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_force               REG_FLD(1, 12)
#define INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_sel             REG_FLD(1, 11)
#define INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_force           REG_FLD(1, 10)
#define INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_sel                 REG_FLD(1, 9)
#define INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_force               REG_FLD(1, 8)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_sel               REG_FLD(1, 7)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_force             REG_FLD(1, 6)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_hz_sel                     REG_FLD(1, 5)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_hz_force                   REG_FLD(1, 4)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_sel                REG_FLD(1, 3)
#define INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_force              REG_FLD(1, 2)
#define INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_sel                  REG_FLD(1, 1)
#define INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_force                REG_FLD(1, 0)

#define INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_sel                REG_FLD(1, 31)
#define INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_force              REG_FLD(1, 30)
#define INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_sel                REG_FLD(1, 29)
#define INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_force              REG_FLD(1, 28)
#define INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_sel                REG_FLD(1, 27)
#define INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_force              REG_FLD(1, 26)
#define INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_sel                 REG_FLD(1, 25)
#define INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_force               REG_FLD(1, 24)
#define INTF_CTRL_6_FLD_rg_da_qp_bias_en_sel                   REG_FLD(1, 23)
#define INTF_CTRL_6_FLD_rg_da_qp_bias_en_force                 REG_FLD(1, 22)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_sel                   REG_FLD(1, 21)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_force                 REG_FLD(1, 20)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_sel                REG_FLD(1, 19)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_force              REG_FLD(1, 18)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_sel            REG_FLD(1, 17)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_force          REG_FLD(1, 16)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_sel                 REG_FLD(1, 15)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_force               REG_FLD(1, 14)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_sel                REG_FLD(1, 13)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_force              REG_FLD(1, 12)
#define INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_sel                  REG_FLD(1, 11)
#define INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_force                REG_FLD(1, 10)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_sel            REG_FLD(1, 9)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_force          REG_FLD(1, 8)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_sel                 REG_FLD(1, 7)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_force               REG_FLD(1, 6)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_sel          REG_FLD(1, 5)
#define INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_force        REG_FLD(1, 4)
#define INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_sel               REG_FLD(1, 3)
#define INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_force             REG_FLD(1, 2)
#define INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_sel         REG_FLD(1, 1)
#define INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_force       REG_FLD(1, 0)

#define INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_sel            REG_FLD(1, 31)
#define INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_force          REG_FLD(1, 30)
#define INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_sel                REG_FLD(1, 29)
#define INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_force              REG_FLD(1, 28)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_sel          REG_FLD(1, 27)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_force        REG_FLD(1, 26)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_sel              REG_FLD(1, 25)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_force            REG_FLD(1, 24)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_sel                REG_FLD(1, 23)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_force              REG_FLD(1, 22)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_sel               REG_FLD(1, 21)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_force             REG_FLD(1, 20)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_sel               REG_FLD(1, 19)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_force             REG_FLD(1, 18)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_sel              REG_FLD(1, 17)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_force            REG_FLD(1, 16)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_sel            REG_FLD(1, 15)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_force          REG_FLD(1, 14)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_sel             REG_FLD(1, 13)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_force           REG_FLD(1, 12)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_sel         REG_FLD(1, 11)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_force       REG_FLD(1, 10)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_sel               REG_FLD(1, 9)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_force             REG_FLD(1, 8)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_sel              REG_FLD(1, 7)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_force            REG_FLD(1, 6)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_en_sel                    REG_FLD(1, 5)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_en_force                  REG_FLD(1, 4)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_sel             REG_FLD(1, 3)
#define INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_force           REG_FLD(1, 2)
#define INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_sel                REG_FLD(1, 1)
#define INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_force              REG_FLD(1, 0)

#define INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_sel              REG_FLD(1, 31)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_force            REG_FLD(2, 29)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_sel            REG_FLD(1, 28)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_force          REG_FLD(2, 26)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_sel          REG_FLD(1, 25)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_force        REG_FLD(2, 23)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_sel                REG_FLD(1, 22)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_force              REG_FLD(2, 20)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_sel                   REG_FLD(1, 19)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_force                 REG_FLD(2, 17)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_bc_sel                    REG_FLD(1, 16)
#define INTF_CTRL_8_FLD_rg_da_qp_pll_bc_force                  REG_FLD(2, 14)
#define INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_sel               REG_FLD(1, 13)
#define INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_force             REG_FLD(2, 11)
#define INTF_CTRL_8_FLD_rg_da_qp_tx_dem_sel                    REG_FLD(1, 10)
#define INTF_CTRL_8_FLD_rg_da_qp_tx_dem_force                  REG_FLD(2, 8)
#define INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_sel               REG_FLD(1, 7)
#define INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_force             REG_FLD(2, 5)
#define INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_sel             REG_FLD(1, 4)
#define INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_force           REG_FLD(2, 2)
#define INTF_CTRL_8_FLD_rg_da_qp_tdc_en_sel                    REG_FLD(1, 1)
#define INTF_CTRL_8_FLD_rg_da_qp_tdc_en_force                  REG_FLD(1, 0)

#define INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_sel                REG_FLD(1, 31)
#define INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_force              REG_FLD(5, 26)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_ir_sel                    REG_FLD(1, 25)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_ir_force                  REG_FLD(4, 21)
#define INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_sel                  REG_FLD(1, 20)
#define INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_force                REG_FLD(4, 16)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_br_sel                    REG_FLD(1, 15)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_br_force                  REG_FLD(3, 12)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_sel                   REG_FLD(1, 11)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_force                 REG_FLD(3, 8)
#define INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_sel                REG_FLD(1, 7)
#define INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_force              REG_FLD(3, 4)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_sel           REG_FLD(1, 2)
#define INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_force         REG_FLD(2, 0)

#define INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_sel                REG_FLD(1, 29)
#define INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_force              REG_FLD(5, 24)
#define INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_sel                REG_FLD(1, 21)
#define INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_force              REG_FLD(5, 16)
#define INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_sel           REG_FLD(1, 13)
#define INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_force         REG_FLD(5, 8)
#define INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_sel        REG_FLD(1, 5)
#define INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_force      REG_FLD(5, 0)

#define INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_sel              REG_FLD(1, 27)
#define INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_force            REG_FLD(11, 16)
#define INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_sel             REG_FLD(1, 15)
#define INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_force           REG_FLD(7, 8)
#define INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_sel               REG_FLD(1, 6)
#define INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_force             REG_FLD(6, 0)

#define INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_sel            REG_FLD(1, 16)
#define INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_force          REG_FLD(16, 0)

#define INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_sel           REG_FLD(1, 16)
#define INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_force         REG_FLD(16, 0)

#define INTF_CTRL_14_FLD_rg_da_qp_pll_sdm_pcw_force_31_0       REG_FLD(32, 0)

#define INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_sel              REG_FLD(1, 31)
#define INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_force_33_32      REG_FLD(2, 28)
#define INTF_CTRL_15_FLD_rg_da_qp_tx_data_sel                  REG_FLD(1, 24)
#define INTF_CTRL_15_FLD_rg_da_qp_tx_data_force                REG_FLD(20, 0)

#define INTF_STS_0_FLD_ro_da_qp_xtal_rx_en                     REG_FLD(1, 31)
#define INTF_STS_0_FLD_ro_da_pcie_clktx_en                     REG_FLD(1, 30)
#define INTF_STS_0_FLD_ro_da_pcie_clkrx_en                     REG_FLD(1, 29)
#define INTF_STS_0_FLD_ro_da_qp_bg_lpf_en                      REG_FLD(1, 28)
#define INTF_STS_0_FLD_ro_da_qp_bias_en                        REG_FLD(1, 27)
#define INTF_STS_0_FLD_ro_da_qp_tx_lfps                        REG_FLD(1, 26)
#define INTF_STS_0_FLD_ro_da_qp_tx_lfps_en                     REG_FLD(1, 25)
#define INTF_STS_0_FLD_ro_da_qp_tx_eidle_lp_en                 REG_FLD(1, 24)
#define INTF_STS_0_FLD_ro_da_qp_tx_ser_en                      REG_FLD(1, 23)
#define INTF_STS_0_FLD_ro_da_qp_tx_data_en                     REG_FLD(1, 22)
#define INTF_STS_0_FLD_ro_da_qp_rxdet_en                       REG_FLD(1, 21)
#define INTF_STS_0_FLD_ro_da_qp_tx_impcalib_en                 REG_FLD(1, 20)
#define INTF_STS_0_FLD_ro_da_qp_tx_drv_en                      REG_FLD(1, 19)
#define INTF_STS_0_FLD_ro_da_qp_tx_term_vref_sel               REG_FLD(1, 18)
#define INTF_STS_0_FLD_ro_da_qp_cdr_pd_pwdb                    REG_FLD(1, 17)
#define INTF_STS_0_FLD_ro_da_qp_cdr_pr_pieye_pwdb              REG_FLD(1, 16)
#define INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_r_en                REG_FLD(1, 15)
#define INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_c_en                REG_FLD(1, 14)
#define INTF_STS_0_FLD_ro_da_qp_cdr_pr_kband_rstb              REG_FLD(1, 13)
#define INTF_STS_0_FLD_ro_da_qp_cdr_pr_pwdb                    REG_FLD(1, 12)
#define INTF_STS_0_FLD_ro_da_qp_cdr_lck2data                   REG_FLD(1, 11)
#define INTF_STS_0_FLD_ro_da_qp_cdr_lpf_rstb                   REG_FLD(1, 10)
#define INTF_STS_0_FLD_ro_da_qp_rx_scan                        REG_FLD(1, 9)
#define INTF_STS_0_FLD_ro_da_qp_crsdet_rstb                    REG_FLD(1, 8)
#define INTF_STS_0_FLD_ro_da_qp_rx_saosc_en                    REG_FLD(1, 7)
#define INTF_STS_0_FLD_ro_da_qp_crsdet_en                      REG_FLD(1, 6)
#define INTF_STS_0_FLD_ro_da_qp_sigdet_cal_en                  REG_FLD(1, 5)
#define INTF_STS_0_FLD_ro_da_qp_sigdet_en                      REG_FLD(1, 4)
#define INTF_STS_0_FLD_ro_da_qp_rx_p3_entry                    REG_FLD(1, 3)
#define INTF_STS_0_FLD_ro_da_qp_rx_hz                          REG_FLD(1, 2)
#define INTF_STS_0_FLD_ro_da_qp_rx_afe_pwd                     REG_FLD(1, 1)
#define INTF_STS_0_FLD_ro_da_qp_lfps_pwd                       REG_FLD(1, 0)

#define INTF_STS_1_FLD_ro_da_qp_pll_fbksel                     REG_FLD(2, 30)
#define INTF_STS_1_FLD_ro_da_qp_pll_bpb                        REG_FLD(2, 28)
#define INTF_STS_1_FLD_ro_da_qp_pll_bc                         REG_FLD(2, 26)
#define INTF_STS_1_FLD_ro_da_qp_xtal_ext_en                    REG_FLD(2, 24)
#define INTF_STS_1_FLD_ro_da_qp_tx_dem                         REG_FLD(2, 22)
#define INTF_STS_1_FLD_ro_da_qp_tx_term_sel                    REG_FLD(2, 20)
#define INTF_STS_1_FLD_ro_da_qp_lfps_deglitch                  REG_FLD(2, 18)
#define INTF_STS_1_FLD_ro_da_qp_tdc_en                         REG_FLD(1, 16)
#define INTF_STS_1_FLD_ro_da_qp_tdc_cal_offset                 REG_FLD(1, 15)
#define INTF_STS_1_FLD_ro_da_qp_tdc_cal_bw                     REG_FLD(1, 14)
#define INTF_STS_1_FLD_ro_da_qp_pll_tdc_txck_sel               REG_FLD(1, 13)
#define INTF_STS_1_FLD_ro_da_qp_pll_icolp_en                   REG_FLD(1, 12)
#define INTF_STS_1_FLD_ro_da_qp_pll_ssc_en                     REG_FLD(1, 11)
#define INTF_STS_1_FLD_ro_da_qp_pll_sdm_ifm                    REG_FLD(1, 10)
#define INTF_STS_1_FLD_ro_da_qp_pll_sdm_chg                    REG_FLD(1, 9)
#define INTF_STS_1_FLD_ro_da_qp_pll_rico_sel                   REG_FLD(1, 8)
#define INTF_STS_1_FLD_ro_da_qp_pll_postdiv_en                 REG_FLD(1, 7)
#define INTF_STS_1_FLD_ro_da_qp_pll_phy_ck_en                  REG_FLD(1, 6)
#define INTF_STS_1_FLD_ro_da_qp_pll_pfd_offset_en              REG_FLD(1, 5)
#define INTF_STS_1_FLD_ro_da_qp_pll_pck_sel                    REG_FLD(1, 4)
#define INTF_STS_1_FLD_ro_da_qp_pll_icoiq_en                   REG_FLD(1, 3)
#define INTF_STS_1_FLD_ro_da_qp_pll_en                         REG_FLD(1, 2)
#define INTF_STS_1_FLD_ro_da_qp_pll_sdm_di_en                  REG_FLD(1, 1)
#define INTF_STS_1_FLD_ro_da_pcie_ckdet_en                     REG_FLD(1, 0)

#define INTF_STS_2_FLD_ro_da_qp_pll_ir                         REG_FLD(4, 24)
#define INTF_STS_2_FLD_ro_da_qp_rx_dcleq                       REG_FLD(4, 20)
#define INTF_STS_2_FLD_ro_da_qp_pll_br                         REG_FLD(3, 16)
#define INTF_STS_2_FLD_ro_da_qp_pll_bpa                        REG_FLD(3, 12)
#define INTF_STS_2_FLD_ro_da_qp_tx_fir_cn1                     REG_FLD(3, 8)
#define INTF_STS_2_FLD_ro_da_qp_pll_ssc_dir_dly                REG_FLD(2, 6)
#define INTF_STS_2_FLD_ro_da_qp_pll_sdm_hren                   REG_FLD(2, 4)
#define INTF_STS_2_FLD_ro_da_qp_pll_pfd_offset                 REG_FLD(2, 2)
#define INTF_STS_2_FLD_ro_da_qp_pll_kband_prediv               REG_FLD(2, 0)

#define INTF_STS_3_FLD_ro_da_qp_tx_fir_c1                      REG_FLD(5, 24)
#define INTF_STS_3_FLD_ro_da_qp_cdr_pr_fll_cor                 REG_FLD(5, 16)
#define INTF_STS_3_FLD_ro_da_qp_sigdet_cal_offset              REG_FLD(5, 8)
#define INTF_STS_3_FLD_ro_da_qp_rx_imp_sel                     REG_FLD(5, 0)

#define INTF_STS_4_FLD_ro_da_qp_cdr_pr_pieye                   REG_FLD(7, 16)
#define INTF_STS_4_FLD_ro_da_qp_tx_fir_c0b                     REG_FLD(6, 8)
#define INTF_STS_4_FLD_ro_da_qp_tx_fir_c2                      REG_FLD(5, 0)

#define INTF_STS_5_FLD_ro_da_qp_cdr_pr_idac                    REG_FLD(11, 0)

#define INTF_STS_6_FLD_ro_da_qp_pll_ssc_period                 REG_FLD(16, 16)
#define INTF_STS_6_FLD_ro_da_qp_pll_ssc_delta                  REG_FLD(16, 0)

#define INTF_STS_7_FLD_ro_da_qp_tx_data                        REG_FLD(20, 0)

#define INTF_STS_8_FLD_ro_da_qp_pll_sdm_pcw_31_0               REG_FLD(32, 0)

#define INTF_STS_9_FLD_ro_ad_qp_tdc_c_intf                     REG_FLD(8, 24)
#define INTF_STS_9_FLD_ro_ad_qp_pll_vcocal_state_intf          REG_FLD(8, 16)
#define INTF_STS_9_FLD_ro_ad_qp_tdc_leadlag_intf               REG_FLD(1, 14)
#define INTF_STS_9_FLD_ro_ad_qp_pll_ssc_en_intf                REG_FLD(1, 13)
#define INTF_STS_9_FLD_ro_ad_qp_pll_ssc_dir_intf               REG_FLD(1, 12)
#define INTF_STS_9_FLD_ro_ad_pcie_ckdet_out_intf               REG_FLD(1, 11)
#define INTF_STS_9_FLD_ro_ad_qp_tx_cmdet_intf                  REG_FLD(1, 10)
#define INTF_STS_9_FLD_ro_ad_qp_termcal_dir_intf               REG_FLD(1, 9)
#define INTF_STS_9_FLD_ro_ad_qp_cdr_pr_vco_overspeed_intf      REG_FLD(1, 8)
#define INTF_STS_9_FLD_ro_ad_qp_cdr_pr_fll_dig_rstb_intf       REG_FLD(1, 7)
#define INTF_STS_9_FLD_ro_ad_qp_cdr_lpf_oneshot_trig_intf      REG_FLD(1, 6)
#define INTF_STS_9_FLD_ro_ad_qp_cdr_pi_pderr_intf              REG_FLD(1, 5)
#define INTF_STS_9_FLD_ro_ad_qp_crsdet_lthout_intf             REG_FLD(1, 4)
#define INTF_STS_9_FLD_ro_ad_qp_crsdet_out_intf                REG_FLD(1, 3)
#define INTF_STS_9_FLD_ro_ad_qp_rx_lfps_intf                   REG_FLD(1, 2)
#define INTF_STS_9_FLD_ro_ad_qp_sigdet_cal_out_intf            REG_FLD(1, 1)
#define INTF_STS_9_FLD_ro_ad_qp_sigdet_out_intf                REG_FLD(1, 0)

#define INTF_STS_10_FLD_ro_ad_qp_tdc_d_intf                    REG_FLD(8, 0)

#define INTF_STS_11_FLD_ro_ad_qp_cdr_lpf_snapshotvalue_intf    REG_FLD(19, 0)

#define INTF_STS_12_FLD_ro_ad_qp_cdr_pr_adc_intf               REG_FLD(20, 0)

#define PLL_CTRL_0_FLD_rg_da_pll_en_dly_cnt                    REG_FLD(8, 16)
#define PLL_CTRL_0_FLD_rg_da_pll_en_mux                        REG_FLD(1, 10)
#define PLL_CTRL_0_FLD_rg_da_pll_en                            REG_FLD(1, 9)
#define PLL_CTRL_0_FLD_rg_force_da_pll_en                      REG_FLD(1, 8)
#define PLL_CTRL_0_FLD_rg_rx_pwd                               REG_FLD(1, 7)
#define PLL_CTRL_0_FLD_rg_rx_pwd_mux                           REG_FLD(1, 6)
#define PLL_CTRL_0_FLD_rg_tx_disable                           REG_FLD(1, 5)
#define PLL_CTRL_0_FLD_rg_tx_disable_mux                       REG_FLD(1, 4)
#define PLL_CTRL_0_FLD_rg_phya_pwd                             REG_FLD(1, 2)
#define PLL_CTRL_0_FLD_rg_phya_pwd_mux                         REG_FLD(1, 1)
#define PLL_CTRL_0_FLD_rg_phya_auto_init                       REG_FLD(1, 0)

#define PLL_CTRL_1_FLD_rg_qp_pll_ssc_en                        REG_FLD(1, 30)
#define PLL_CTRL_1_FLD_rg_pll_autok_vco_to_pll_bias_lpf_en_dly REG_FLD(2, 28)
#define PLL_CTRL_1_FLD_rg_syspll_pwd_to_syspll_ready_dly       REG_FLD(4, 24)
#define PLL_CTRL_1_FLD_rg_bias_pwd_to_bg_lpf_en_dly            REG_FLD(5, 16)
#define PLL_CTRL_1_FLD_rg_lpf_en_to_ssc_dly_cnt                REG_FLD(16, 0)

#define PLL_CTRL_2_FLD_rg_da_qp_pll_sdm_ifm_intf               REG_FLD(1, 30)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_rico_sel_intf              REG_FLD(1, 29)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_postdiv_en_intf            REG_FLD(1, 28)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_phy_ck_en_intf             REG_FLD(1, 27)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_en_intf         REG_FLD(1, 26)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_intf            REG_FLD(2, 24)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_pck_sel_intf               REG_FLD(1, 22)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_kband_prediv_intf          REG_FLD(2, 20)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_ir_intf                    REG_FLD(4, 16)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_icoiq_en_intf              REG_FLD(1, 14)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_fbksel_intf                REG_FLD(2, 12)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_br_intf                    REG_FLD(3, 8)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_bpb_intf                   REG_FLD(2, 6)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_bpa_intf                   REG_FLD(3, 2)
#define PLL_CTRL_2_FLD_rg_da_qp_pll_bc_intf                    REG_FLD(2, 0)

#define PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_period_intf            REG_FLD(16, 16)
#define PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_delta_intf             REG_FLD(16, 0)

#define PLL_CTRL_4_FLD_rg_da_qp_pll_sdm_hren_intf              REG_FLD(2, 3)
#define PLL_CTRL_4_FLD_rg_da_qp_pll_icolp_en_intf              REG_FLD(1, 2)
#define PLL_CTRL_4_FLD_rg_da_qp_pll_ssc_dir_dly_intf           REG_FLD(2, 0)

#define PLL_CK_CTRL_0_FLD_rg_da_qp_pll_tdc_txck_sel_intf       REG_FLD(1, 9)
#define PLL_CK_CTRL_0_FLD_rg_da_qp_pll_sdm_di_en_intf          REG_FLD(1, 8)
#define PLL_CK_CTRL_0_FLD_rg_da_pcie_ckdet_en_intf             REG_FLD(1, 7)
#define PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_rx_en_intf             REG_FLD(1, 6)
#define PLL_CK_CTRL_0_FLD_rg_da_pcie_clktx_en_intf             REG_FLD(1, 5)
#define PLL_CK_CTRL_0_FLD_rg_da_pcie_clkrx_en_intf             REG_FLD(1, 4)
#define PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_ext_en_intf            REG_FLD(2, 0)

#define PLL_CK_CTRL_1_FLD_rg_pll_stable_source_sel             REG_FLD(1, 20)
#define PLL_CK_CTRL_1_FLD_rg_pll_force_unstable                REG_FLD(1, 19)
#define PLL_CK_CTRL_1_FLD_rg_pll_force_stable                  REG_FLD(1, 18)
#define PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_off                REG_FLD(1, 17)
#define PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_on                 REG_FLD(1, 16)
#define PLL_CK_CTRL_1_FLD_rg_pll_cplt_stabel_cnt               REG_FLD(8, 8)
#define PLL_CK_CTRL_1_FLD_rg_pll_stabel_cnt                    REG_FLD(8, 0)

#define PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_off_en         REG_FLD(1, 2)
#define PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_on_en          REG_FLD(1, 1)
#define PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_en             REG_FLD(1, 0)

#define SYS_CTRL_0_FLD_rg_freq_meter_rtl_modified              REG_FLD(1, 8)
#define SYS_CTRL_0_FLD_rg_qp_gdump_sel                         REG_FLD(4, 4)
#define SYS_CTRL_0_FLD_rg_qp_pma_top_int_en                    REG_FLD(1, 0)

#define SYS_CTRL_1_FLD_rg_force_rg_vusb10_on_sel               REG_FLD(1, 16)
#define SYS_CTRL_1_FLD_rg_tx_short_fifo_disb                   REG_FLD(1, 15)
#define SYS_CTRL_1_FLD_rg_tx_short_fifo_w_thresold             REG_FLD(5, 8)
#define SYS_CTRL_1_FLD_rg_tx_short_fifo_r_thresold             REG_FLD(5, 0)

#define QP_SYS_0_FLD_ro_tx_short_fifo_empty                    REG_FLD(1, 1)
#define QP_SYS_0_FLD_ro_tx_short_fifo_full                     REG_FLD(1, 0)

#define FT_CTRL_0_FLD_rg_ft_freq_meter_relck_num_0             REG_FLD(4, 4)
#define FT_CTRL_0_FLD_rg_ft_freq_meter_clear_unlck_cnt_0       REG_FLD(1, 1)
#define FT_CTRL_0_FLD_rg_ft_freq_meter_freq_det_en_0           REG_FLD(1, 0)

#define FT_CTRL_1_FLD_rg_ft_freq_meter_relck_num_1             REG_FLD(4, 4)
#define FT_CTRL_1_FLD_rg_ft_freq_meter_clear_unlck_cnt_1       REG_FLD(1, 1)
#define FT_CTRL_1_FLD_rg_ft_freq_meter_freq_det_en_1           REG_FLD(1, 0)

#define FT_CTRL_2_FLD_rg_ft_freq_meter_relck_num_2             REG_FLD(4, 4)
#define FT_CTRL_2_FLD_rg_ft_freq_meter_clear_unlck_cnt_2       REG_FLD(1, 1)
#define FT_CTRL_2_FLD_rg_ft_freq_meter_freq_det_en_2           REG_FLD(1, 0)

#define FT_CTRL_3_FLD_rg_ft_freq_meter_relck_num_3             REG_FLD(4, 4)
#define FT_CTRL_3_FLD_rg_ft_freq_meter_clear_unlck_cnt_3       REG_FLD(1, 1)
#define FT_CTRL_3_FLD_rg_ft_freq_meter_freq_det_en_3           REG_FLD(1, 0)

#define FT_CTRL_4_FLD_rg_ft_freq_meter_relck_num_4             REG_FLD(4, 4)
#define FT_CTRL_4_FLD_rg_ft_freq_meter_clear_unlck_cnt_4       REG_FLD(1, 1)
#define FT_CTRL_4_FLD_rg_ft_freq_meter_freq_det_en_4           REG_FLD(1, 0)

#define FT_CTRL_5_FLD_rg_ft_freq_meter_relck_num_5             REG_FLD(4, 4)
#define FT_CTRL_5_FLD_rg_ft_freq_meter_clear_unlck_cnt_5       REG_FLD(1, 1)
#define FT_CTRL_5_FLD_rg_ft_freq_meter_freq_det_en_5           REG_FLD(1, 0)

#define FT_CTRL_6_FLD_rg_ft_freq_meter_relck_num_6             REG_FLD(4, 4)
#define FT_CTRL_6_FLD_rg_ft_freq_meter_clear_unlck_cnt_6       REG_FLD(1, 1)
#define FT_CTRL_6_FLD_rg_ft_freq_meter_freq_det_en_6           REG_FLD(1, 0)

#define FT_CTRL_7_FLD_rg_ft_freq_meter_relck_num_7             REG_FLD(4, 4)
#define FT_CTRL_7_FLD_rg_ft_freq_meter_clear_unlck_cnt_7       REG_FLD(1, 1)
#define FT_CTRL_7_FLD_rg_ft_freq_meter_freq_det_en_7           REG_FLD(1, 0)

#define FT_CTRL_8_FLD_rg_ft_freq_meter_relck_num_8             REG_FLD(4, 4)
#define FT_CTRL_8_FLD_rg_ft_freq_meter_clear_unlck_cnt_8       REG_FLD(1, 1)
#define FT_CTRL_8_FLD_rg_ft_freq_meter_freq_det_en_8           REG_FLD(1, 0)

#define FT_CTRL_9_FLD_rg_ft_freq_meter_chk_cycle_0             REG_FLD(20, 0)

#define FT_CTRL_10_FLD_rg_ft_freq_meter_chk_cycle_1            REG_FLD(20, 0)

#define FT_CTRL_11_FLD_rg_ft_freq_meter_chk_cycle_2            REG_FLD(20, 0)

#define FT_CTRL_12_FLD_rg_ft_freq_meter_chk_cycle_3            REG_FLD(20, 0)

#define FT_CTRL_13_FLD_rg_ft_freq_meter_chk_cycle_4            REG_FLD(20, 0)

#define FT_CTRL_14_FLD_rg_ft_freq_meter_chk_cycle_5            REG_FLD(20, 0)

#define FT_CTRL_15_FLD_rg_ft_freq_meter_chk_cycle_6            REG_FLD(20, 0)

#define FT_CTRL_16_FLD_rg_ft_freq_meter_chk_cycle_7            REG_FLD(20, 0)

#define FT_CTRL_17_FLD_rg_ft_freq_meter_chk_cycle_8            REG_FLD(20, 0)

#define FT_CTRL_18_FLD_rg_ft_freq_meter_golden_cycle_0         REG_FLD(20, 0)

#define FT_CTRL_19_FLD_rg_ft_freq_meter_golden_cycle_1         REG_FLD(20, 0)

#define FT_CTRL_20_FLD_rg_ft_freq_meter_golden_cycle_2         REG_FLD(20, 0)

#define FT_CTRL_21_FLD_rg_ft_freq_meter_golden_cycle_3         REG_FLD(20, 0)

#define FT_CTRL_22_FLD_rg_ft_freq_meter_golden_cycle_4         REG_FLD(20, 0)

#define FT_CTRL_23_FLD_rg_ft_freq_meter_golden_cycle_5         REG_FLD(20, 0)

#define FT_CTRL_24_FLD_rg_ft_freq_meter_golden_cycle_6         REG_FLD(20, 0)

#define FT_CTRL_25_FLD_rg_ft_freq_meter_golden_cycle_7         REG_FLD(20, 0)

#define FT_CTRL_26_FLD_rg_ft_freq_meter_golden_cycle_8         REG_FLD(20, 0)

#define FT_CTRL_27_FLD_rg_ft_freq_meter_tolerate_cycle_0       REG_FLD(20, 0)

#define FT_CTRL_28_FLD_rg_ft_freq_meter_tolerate_cycle_1       REG_FLD(20, 0)

#define FT_CTRL_29_FLD_rg_ft_freq_meter_tolerate_cycle_2       REG_FLD(20, 0)

#define FT_CTRL_30_FLD_rg_ft_freq_meter_tolerate_cycle_3       REG_FLD(20, 0)

#define FT_CTRL_31_FLD_rg_ft_freq_meter_tolerate_cycle_4       REG_FLD(20, 0)

#define FT_CTRL_32_FLD_rg_ft_freq_meter_tolerate_cycle_5       REG_FLD(20, 0)

#define FT_CTRL_33_FLD_rg_ft_freq_meter_tolerate_cycle_6       REG_FLD(20, 0)

#define FT_CTRL_34_FLD_rg_ft_freq_meter_tolerate_cycle_7       REG_FLD(20, 0)

#define FT_CTRL_35_FLD_rg_ft_freq_meter_tolerate_cycle_8       REG_FLD(20, 0)

#define FT_STATUS_0_FLD_ro_ft_freq_meter_unlck_cnt_0           REG_FLD(8, 8)
#define FT_STATUS_0_FLD_ro_ft_freq_meter_freq_state_0          REG_FLD(4, 4)
#define FT_STATUS_0_FLD_ro_ft_freq_meter_freq_lock_0           REG_FLD(1, 0)

#define FT_STATUS_1_FLD_ro_ft_freq_meter_unlck_cnt_1           REG_FLD(8, 8)
#define FT_STATUS_1_FLD_ro_ft_freq_meter_freq_state_1          REG_FLD(4, 4)
#define FT_STATUS_1_FLD_ro_ft_freq_meter_freq_lock_1           REG_FLD(1, 0)

#define FT_STATUS_2_FLD_ro_ft_freq_meter_unlck_cnt_2           REG_FLD(8, 8)
#define FT_STATUS_2_FLD_ro_ft_freq_meter_freq_state_2          REG_FLD(4, 4)
#define FT_STATUS_2_FLD_ro_ft_freq_meter_freq_lock_2           REG_FLD(1, 0)

#define FT_STATUS_3_FLD_ro_ft_freq_meter_unlck_cnt_3           REG_FLD(8, 8)
#define FT_STATUS_3_FLD_ro_ft_freq_meter_freq_state_3          REG_FLD(4, 4)
#define FT_STATUS_3_FLD_ro_ft_freq_meter_freq_lock_3           REG_FLD(1, 0)

#define FT_STATUS_4_FLD_ro_ft_freq_meter_unlck_cnt_4           REG_FLD(8, 8)
#define FT_STATUS_4_FLD_ro_ft_freq_meter_freq_state_4          REG_FLD(4, 4)
#define FT_STATUS_4_FLD_ro_ft_freq_meter_freq_lock_4           REG_FLD(1, 0)

#define FT_STATUS_5_FLD_ro_ft_freq_meter_unlck_cnt_5           REG_FLD(8, 8)
#define FT_STATUS_5_FLD_ro_ft_freq_meter_freq_state_5          REG_FLD(4, 4)
#define FT_STATUS_5_FLD_ro_ft_freq_meter_freq_lock_5           REG_FLD(1, 0)

#define FT_STATUS_6_FLD_ro_ft_freq_meter_unlck_cnt_6           REG_FLD(8, 8)
#define FT_STATUS_6_FLD_ro_ft_freq_meter_freq_state_6          REG_FLD(4, 4)
#define FT_STATUS_6_FLD_ro_ft_freq_meter_freq_lock_6           REG_FLD(1, 0)

#define FT_STATUS_7_FLD_ro_ft_freq_meter_unlck_cnt_7           REG_FLD(8, 8)
#define FT_STATUS_7_FLD_ro_ft_freq_meter_freq_state_7          REG_FLD(4, 4)
#define FT_STATUS_7_FLD_ro_ft_freq_meter_freq_lock_7           REG_FLD(1, 0)

#define FT_STATUS_8_FLD_ro_ft_freq_meter_unlck_cnt_8           REG_FLD(8, 8)
#define FT_STATUS_8_FLD_ro_ft_freq_meter_freq_state_8          REG_FLD(4, 4)
#define FT_STATUS_8_FLD_ro_ft_freq_meter_freq_lock_8           REG_FLD(1, 0)

#define RX_SYS_CTRL_0_FLD_rg_qp_speed_sel_1                    REG_FLD(1, 12)
#define RX_SYS_CTRL_0_FLD_rg_qp_speed_sel                      REG_FLD(1, 11)
#define RX_SYS_CTRL_0_FLD_rg_qp_amp                            REG_FLD(3, 8)
#define RX_SYS_CTRL_0_FLD_rg_qp_prbs_sel                       REG_FLD(3, 3)
#define RX_SYS_CTRL_0_FLD_rg_qp_ad_sleep_en                    REG_FLD(1, 2)
#define RX_SYS_CTRL_0_FLD_rg_qp_roc_ck_en                      REG_FLD(1, 1)
#define RX_SYS_CTRL_0_FLD_rg_qp_rx_hz                          REG_FLD(1, 0)

#define FLL_CTRL_0_FLD_rg_qp_ipath_idac                        REG_FLD(11, 17)
#define FLL_CTRL_0_FLD_rg_qp_load_en                           REG_FLD(1, 16)
#define FLL_CTRL_0_FLD_rg_qp_ro_fll_4_latch_en                 REG_FLD(1, 14)
#define FLL_CTRL_0_FLD_rg_qp_ro_fll_3_latch_en                 REG_FLD(1, 13)
#define FLL_CTRL_0_FLD_rg_qp_ro_fll_2_latch_en                 REG_FLD(1, 12)
#define FLL_CTRL_0_FLD_rg_qp_ro_fll_1_latch_en                 REG_FLD(1, 11)
#define FLL_CTRL_0_FLD_rg_qp_debug_sel                         REG_FLD(3, 8)
#define FLL_CTRL_0_FLD_rg_qp_fll_repli                         REG_FLD(1, 6)
#define FLL_CTRL_0_FLD_rg_qp_fll_cor                           REG_FLD(1, 5)
#define FLL_CTRL_0_FLD_rg_qp_fll_dig_rst_force_en              REG_FLD(1, 4)
#define FLL_CTRL_0_FLD_rg_qp_fll_dig_rstb_force                REG_FLD(1, 3)
#define FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force_en          REG_FLD(1, 2)
#define FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force             REG_FLD(1, 1)
#define FLL_CTRL_0_FLD_rg_qp_fll_dig_pro                       REG_FLD(1, 0)

#define FLL_CTRL_1_FLD_rg_qp_fll_idac_min                      REG_FLD(11, 16)
#define FLL_CTRL_1_FLD_rg_qp_fll_idac_max                      REG_FLD(11, 0)

#define FLL_CTRL_2_FLD_rg_qp_fbkdiv                            REG_FLD(11, 16)
#define FLL_CTRL_2_FLD_rg_qp_kband_prediv                      REG_FLD(3, 9)
#define FLL_CTRL_2_FLD_rg_qp_ck_rate                           REG_FLD(3, 6)
#define FLL_CTRL_2_FLD_rg_qp_symbol_wd                         REG_FLD(3, 3)
#define FLL_CTRL_2_FLD_rg_qp_settle_time_sel                   REG_FLD(3, 0)

#define FLL_CTRL_3_FLD_rg_qp_fll_idac_repli                    REG_FLD(11, 0)

#define RX_DLY_0_FLD_rg_qp_rx_saosc_en_h_dly                   REG_FLD(6, 8)
#define RX_DLY_0_FLD_rg_qp_rx_pi_cal_en_h_dly                  REG_FLD(8, 0)

#define RX_DLY_1_FLD_rg_qp_sig_det_l_thres                     REG_FLD(10, 16)
#define RX_DLY_1_FLD_rg_qp_sig_det_h_thres                     REG_FLD(10, 0)

#define RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_thr                  REG_FLD(7, 24)
#define RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_thr                  REG_FLD(7, 16)
#define RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_clr                  REG_FLD(1, 13)
#define RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_clr                  REG_FLD(1, 12)
#define RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_dly                  REG_FLD(4, 8)
#define RX_AFIFO_FLD_rg_qp_rx_data_inv                         REG_FLD(1, 7)
#define RX_AFIFO_FLD_rg_qp_rx_asic_uses_ff                     REG_FLD(1, 6)
#define RX_AFIFO_FLD_rg_qp_rx_afifo_adj                        REG_FLD(6, 0)

#define IMP_CTRL_0_FLD_rg_qp_impcal_calcyc                     REG_FLD(6, 20)
#define IMP_CTRL_0_FLD_rg_qp_impcal_stbcyc                     REG_FLD(5, 15)
#define IMP_CTRL_0_FLD_rg_qp_impcal_cycnt                      REG_FLD(10, 5)
#define IMP_CTRL_0_FLD_rg_qp_force_impsel                      REG_FLD(1, 4)
#define IMP_CTRL_0_FLD_rg_qp_force_impcal_en                   REG_FLD(1, 3)
#define IMP_CTRL_0_FLD_rg_qp_impcal_en                         REG_FLD(1, 2)
#define IMP_CTRL_0_FLD_rg_qp_impcal_out                        REG_FLD(1, 1)
#define IMP_CTRL_0_FLD_rg_qp_power_on                          REG_FLD(1, 0)

#define IMP_CTRL_1_FLD_rg_qp_prb_out                           REG_FLD(8, 19)
#define IMP_CTRL_1_FLD_rg_qp_impcal_cal                        REG_FLD(5, 14)
#define IMP_CTRL_1_FLD_rg_qp_rx_imp_sel                        REG_FLD(5, 9)
#define IMP_CTRL_1_FLD_rg_qp_imp_bias                          REG_FLD(4, 5)
#define IMP_CTRL_1_FLD_rg_qp_fix_impsel                        REG_FLD(5, 0)

#define RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_fine                    REG_FLD(4, 12)
#define RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_coarse_sel              REG_FLD(4, 8)
#define RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_fail              REG_FLD(1, 7)
#define RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_state             REG_FLD(7, 0)

#define RX_CTRL_1_FLD_rg_qp_freq_det_en_wait_dly               REG_FLD(4, 24)
#define RX_CTRL_1_FLD_rg_qp_cdr_settle_dly                     REG_FLD(11, 8)
#define RX_CTRL_1_FLD_rg_qp_cdr_re_calib                       REG_FLD(1, 4)
#define RX_CTRL_1_FLD_rg_qp_cdr_bw_sel_dly                     REG_FLD(4, 0)

#define RX_CTRL_2_FLD_rg_qp_rx_pwd                             REG_FLD(1, 31)
#define RX_CTRL_2_FLD_rg_qp_rx_eq_en_h_dly                     REG_FLD(13, 16)
#define RX_CTRL_2_FLD_rg_qp_ppm_thres                          REG_FLD(6, 8)
#define RX_CTRL_2_FLD_rg_qp_phya_pwd                           REG_FLD(1, 4)
#define RX_CTRL_2_FLD_rg_qp_lpf_window_sel                     REG_FLD(2, 2)
#define RX_CTRL_2_FLD_rg_qp_freq_det_frc_en                    REG_FLD(1, 1)
#define RX_CTRL_2_FLD_rg_qp_freq_det_frc                       REG_FLD(1, 0)

#define RX_CTRL_3_FLD_rg_qp_cdr_band_fail                      REG_FLD(7, 24)
#define RX_CTRL_3_FLD_rg_qp_speed_chg                          REG_FLD(1, 18)
#define RX_CTRL_3_FLD_rg_qp_sigdet_wait_force                  REG_FLD(1, 17)
#define RX_CTRL_3_FLD_rg_qp_sigdet_wait_cond                   REG_FLD(1, 16)
#define RX_CTRL_3_FLD_rg_qp_sig_det_wait_dly                   REG_FLD(16, 0)

#define RX_CTRL_4_FLD_rg_qp_kband_kfc                          REG_FLD(2, 29)
#define RX_CTRL_4_FLD_rg_pcie_sig_cal_en_time_sel              REG_FLD(1, 24)
#define RX_CTRL_4_FLD_rg_bias_dir                              REG_FLD(1, 16)
#define RX_CTRL_4_FLD_rg_rx_pi_cal_en_start_time               REG_FLD(8, 8)
#define RX_CTRL_4_FLD_rg_rx_settle_rdy_time                    REG_FLD(8, 0)

#define RX_CTRL_5_FLD_rg_fredet_chk_cycle                      REG_FLD(20, 10)
#define RX_CTRL_5_FLD_rg_qp_impcal_cyccnt                      REG_FLD(10, 0)

#define RX_CTRL_6_FLD_rg_fredet_golden_cycle                   REG_FLD(20, 0)

#define RX_CTRL_7_FLD_rg_fredet_clear_unlck_cnt                REG_FLD(1, 28)
#define RX_CTRL_7_FLD_rg_fredet_relck_num                      REG_FLD(4, 24)
#define RX_CTRL_7_FLD_rg_fredet_tolerate_cycle                 REG_FLD(20, 0)

#define RX_CTRL_8_FLD_rg_da_qp_saosc_done_time                 REG_FLD(12, 16)
#define RX_CTRL_8_FLD_rg_da_qp_leqos_en_time                   REG_FLD(15, 0)

#define RX_CTRL_9_FLD_rg_force_pll_stable                      REG_FLD(1, 29)
#define RX_CTRL_9_FLD_rg_force_pll_stable_sel                  REG_FLD(1, 28)
#define RX_CTRL_9_FLD_rg_force_bias_pwd                        REG_FLD(1, 27)
#define RX_CTRL_9_FLD_rg_force_bias_pwd_sel                    REG_FLD(1, 26)
#define RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana       REG_FLD(1, 25)
#define RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana_sel   REG_FLD(1, 24)
#define RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana           REG_FLD(1, 23)
#define RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana_sel       REG_FLD(1, 22)
#define RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana       REG_FLD(1, 21)
#define RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana_sel   REG_FLD(1, 20)
#define RX_CTRL_9_FLD_rg_force_rx_saos_en                      REG_FLD(1, 19)
#define RX_CTRL_9_FLD_rg_force_rx_saos_en_sel                  REG_FLD(1, 18)
#define RX_CTRL_9_FLD_rg_force_cdr_lck2ref                     REG_FLD(1, 17)
#define RX_CTRL_9_FLD_rg_force_cdr_lck2ref_sel                 REG_FLD(1, 16)
#define RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb                    REG_FLD(1, 15)
#define RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb_sel                REG_FLD(1, 14)
#define RX_CTRL_9_FLD_rg_force_cdr_stable                      REG_FLD(1, 13)
#define RX_CTRL_9_FLD_rg_force_cdr_stable_sel                  REG_FLD(1, 12)
#define RX_CTRL_9_FLD_rg_force_dfe_en                          REG_FLD(1, 11)
#define RX_CTRL_9_FLD_rg_force_dfe_en_sel                      REG_FLD(1, 10)
#define RX_CTRL_9_FLD_rg_force_rx_sigdet_en                    REG_FLD(1, 9)
#define RX_CTRL_9_FLD_rg_force_rx_sigdet_en_sel                REG_FLD(1, 8)
#define RX_CTRL_9_FLD_rg_force_dfe_rst                         REG_FLD(1, 7)
#define RX_CTRL_9_FLD_rg_force_dfe_rst_sel                     REG_FLD(1, 6)
#define RX_CTRL_9_FLD_rg_force_rx_data_rstb                    REG_FLD(1, 5)
#define RX_CTRL_9_FLD_rg_force_rx_data_rstb_sel                REG_FLD(1, 4)
#define RX_CTRL_9_FLD_rg_force_rx_pi_cal_en                    REG_FLD(1, 3)
#define RX_CTRL_9_FLD_rg_force_rx_pi_cal_en_sel                REG_FLD(1, 2)
#define RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb                     REG_FLD(1, 1)
#define RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb_sel                 REG_FLD(1, 0)

#define RX_CTRL_10_FLD_rg_force_cdr_settle_ok                  REG_FLD(1, 30)
#define RX_CTRL_10_FLD_rg_force_cdr_settle_ok_sel              REG_FLD(1, 29)
#define RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_time           REG_FLD(11, 18)
#define RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_pre_time       REG_FLD(11, 7)
#define RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre                REG_FLD(1, 6)
#define RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre_sel            REG_FLD(1, 5)
#define RX_CTRL_10_FLD_rg_force_eq_en                          REG_FLD(1, 4)
#define RX_CTRL_10_FLD_rg_force_eq_en_sel                      REG_FLD(1, 3)
#define RX_CTRL_10_FLD_rg_qp_rx_scan                           REG_FLD(1, 2)
#define RX_CTRL_10_FLD_rg_qp_crsdet_rstb                       REG_FLD(1, 1)
#define RX_CTRL_10_FLD_rg_qp_crsdet_en                         REG_FLD(1, 0)

#define RX_CTRL_11_FLD_rg_qp_sigdet_cal_sample_time            REG_FLD(5, 21)
#define RX_CTRL_11_FLD_rg_qp_force_sigdet_10g                  REG_FLD(1, 20)
#define RX_CTRL_11_FLD_rg_qp_force_sigdet_5g                   REG_FLD(1, 19)
#define RX_CTRL_11_FLD_rg_qp_force_sigdet                      REG_FLD(1, 18)
#define RX_CTRL_11_FLD_rg_qp_force_sigdet_sel                  REG_FLD(1, 17)
#define RX_CTRL_11_FLD_rg_qp_rx_dcleq_intf                     REG_FLD(4, 13)
#define RX_CTRL_11_FLD_rg_qp_force_eq_en                       REG_FLD(1, 12)
#define RX_CTRL_11_FLD_rg_qp_force_eq_en_sel                   REG_FLD(1, 11)
#define RX_CTRL_11_FLD_rg_qp_force_speed_sel                   REG_FLD(1, 10)
#define RX_CTRL_11_FLD_rg_qp_force_eq_rdy                      REG_FLD(1, 9)
#define RX_CTRL_11_FLD_rg_qp_force_eq_rdy_sel                  REG_FLD(1, 8)
#define RX_CTRL_11_FLD_rg_qp_eq_rstep2                         REG_FLD(2, 6)
#define RX_CTRL_11_FLD_rg_qp_eq_rstep1                         REG_FLD(2, 4)
#define RX_CTRL_11_FLD_rg_force_saos_rdy                       REG_FLD(1, 3)
#define RX_CTRL_11_FLD_rg_force_saos_rdy_sel                   REG_FLD(1, 2)
#define RX_CTRL_11_FLD_rg_force_freq_lock                      REG_FLD(1, 1)
#define RX_CTRL_11_FLD_rg_force_freq_lock_sel                  REG_FLD(1, 0)

#define RX_CTRL_12_FLD_rg_sigdet_win_nonvld_times              REG_FLD(5, 22)
#define RX_CTRL_12_FLD_rg_sigdet_win_vld_times                 REG_FLD(5, 17)
#define RX_CTRL_12_FLD_rg_sigdet_vld_time                      REG_FLD(8, 9)
#define RX_CTRL_12_FLD_rg_sigdet_win_size                      REG_FLD(8, 1)
#define RX_CTRL_12_FLD_rg_sigdet_en                            REG_FLD(1, 0)

#define RX_CTRL_13_FLD_rg_qp_reserve_3                         REG_FLD(8, 24)
#define RX_CTRL_13_FLD_rg_qp_reserve_2                         REG_FLD(8, 16)
#define RX_CTRL_13_FLD_rg_qp_reserve_1                         REG_FLD(8, 8)
#define RX_CTRL_13_FLD_rg_qp_reserve_0                         REG_FLD(8, 0)

#define RX_CTRL_14_FLD_qphy_rx_ctrl_debug_3                    REG_FLD(8, 24)
#define RX_CTRL_14_FLD_qphy_rx_ctrl_debug_2                    REG_FLD(8, 16)
#define RX_CTRL_14_FLD_qphy_rx_ctrl_debug_1                    REG_FLD(8, 8)
#define RX_CTRL_14_FLD_qphy_rx_ctrl_debug                      REG_FLD(8, 0)

#define RX_CTRL_15_FLD_ro_fll_idac                             REG_FLD(11, 20)
#define RX_CTRL_15_FLD_ro_adc_freq                             REG_FLD(20, 0)

#define RX_CTRL_16_FLD_ro_cor_gain                             REG_FLD(32, 0)

#define RX_CTRL_17_FLD_ro_da_idac                              REG_FLD(11, 15)
#define RX_CTRL_17_FLD_ro_idacf                                REG_FLD(11, 0)

#define RX_CTRL_18_FLD_ro_fll_idac_repli                       REG_FLD(11, 0)

#define RX_CTRL_19_FLD_ro_adc_freq_inv_output                  REG_FLD(21, 0)

#define RX_CTRL_20_FLD_ro_adc_freq_output                      REG_FLD(20, 0)

#define RX_CTRL_21_FLD_ro_cor_integ_output                     REG_FLD(32, 0)

#define RX_CTRL_22_FLD_ro_cor_integ_inv_output                 REG_FLD(32, 0)

#define RX_CTRL_23_FLD_ro_cor_gain_output_0                    REG_FLD(16, 0)

#define RX_CTRL_24_FLD_ro_cor_gain_output_1                    REG_FLD(17, 0)

#define RX_CTRL_25_FLD_rg_qp_sigdet_force                      REG_FLD(1, 31)
#define RX_CTRL_25_FLD_rg_qp_sigdet_force_en                   REG_FLD(1, 24)
#define RX_CTRL_25_FLD_rg_sigdet_10g_force_en                  REG_FLD(1, 16)
#define RX_CTRL_25_FLD_rg_force_pr_stable                      REG_FLD(1, 8)
#define RX_CTRL_25_FLD_rg_force_pr_stable_sel                  REG_FLD(1, 0)

#define RX_CTRL_26_FLD_rg_qp_saos_rdy_clr_by_lck2ref           REG_FLD(1, 28)
#define RX_CTRL_26_FLD_rg_qp_retrain_all_en                    REG_FLD(1, 27)
#define RX_CTRL_26_FLD_rg_qp_eq_retrain_only_en                REG_FLD(1, 26)
#define RX_CTRL_26_FLD_rg_qp_fifo_rstb_hw_en                   REG_FLD(1, 25)
#define RX_CTRL_26_FLD_rg_link_ne_en                           REG_FLD(1, 24)
#define RX_CTRL_26_FLD_rg_link_erro_en                         REG_FLD(1, 23)
#define RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink         REG_FLD(1, 22)
#define RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink_sel     REG_FLD(1, 21)
#define RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock_relink REG_FLD(1, 20)
#define RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock_relink   REG_FLD(1, 19)
#define RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock_relink REG_FLD(1, 18)
#define RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det_relink  REG_FLD(1, 17)
#define RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy_relink            REG_FLD(1, 16)
#define RX_CTRL_26_FLD_rg_qp_bypass_freq_lock_relink           REG_FLD(1, 15)
#define RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask_relink REG_FLD(1, 14)
#define RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok_relink       REG_FLD(1, 13)
#define RX_CTRL_26_FLD_rg_qp_prbs_case                         REG_FLD(1, 12)
#define RX_CTRL_26_FLD_rg_qp_add_pcs_link                      REG_FLD(1, 11)
#define RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock       REG_FLD(1, 10)
#define RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock          REG_FLD(1, 9)
#define RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock       REG_FLD(1, 8)
#define RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det         REG_FLD(1, 7)
#define RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy                   REG_FLD(1, 6)
#define RX_CTRL_26_FLD_rg_qp_bypass_freq_lock                  REG_FLD(1, 5)
#define RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask      REG_FLD(1, 4)
#define RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok              REG_FLD(1, 3)
#define RX_CTRL_26_FLD_rg_qp_force_sigdet_lp                   REG_FLD(1, 2)
#define RX_CTRL_26_FLD_rg_qp_force_sigdet_ln                   REG_FLD(1, 1)
#define RX_CTRL_26_FLD_rg_qp_sig_linkdown_sel                  REG_FLD(1, 0)

#define RX_CTRL_27_FLD_rg_qp_link_erro_cnt                     REG_FLD(32, 0)

#define RX_CTRL_28_FLD_rg_qp_debug_sel_6                       REG_FLD(1, 6)
#define RX_CTRL_28_FLD_rg_qp_debug_sel_5                       REG_FLD(1, 5)
#define RX_CTRL_28_FLD_rg_qp_debug_sel_4                       REG_FLD(1, 4)
#define RX_CTRL_28_FLD_rg_qp_debug_sel_3                       REG_FLD(1, 3)
#define RX_CTRL_28_FLD_rg_qp_debug_sel_2                       REG_FLD(1, 2)
#define RX_CTRL_28_FLD_rg_qp_debug_sel_1                       REG_FLD(1, 1)
#define RX_CTRL_28_FLD_rg_qp_debug_sel_0                       REG_FLD(1, 0)

#define RX_CTRL_29_FLD_qphy_rx_ctrl_debug_4                    REG_FLD(32, 0)

#define RX_CTRL_30_FLD_qphy_rx_ctrl_debug_5                    REG_FLD(32, 0)

#define RX_CTRL_31_FLD_qphy_rx_ctrl_debug_6                    REG_FLD(32, 0)

#define RX_CTRL_32_FLD_qphy_rx_ctrl_debug_7                    REG_FLD(32, 0)

#define RX_CTRL_33_FLD_qphy_rx_ctrl_debug_8                    REG_FLD(32, 0)

#define RX_CTRL_34_FLD_qphy_rx_ctrl_debug_9                    REG_FLD(32, 0)

#define RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed_sel          REG_FLD(1, 31)
#define RX_CTRL_35_FLD_rg_qp_force_cdr_pwd                     REG_FLD(1, 30)
#define RX_CTRL_35_FLD_rg_qp_force_cdr_pwd_sel                 REG_FLD(1, 29)
#define RX_CTRL_35_FLD_rg_qp_force_cdr_set_dly_clear           REG_FLD(1, 28)
#define RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd                REG_FLD(1, 27)
#define RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd_sel            REG_FLD(1, 26)
#define RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy                 REG_FLD(1, 25)
#define RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy_sel             REG_FLD(1, 24)
#define RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed              REG_FLD(2, 22)
#define RX_CTRL_35_FLD_rg_qp_force_speed_change_sel            REG_FLD(1, 21)
#define RX_CTRL_35_FLD_rg_qp_force_speed_change                REG_FLD(1, 20)
#define RX_CTRL_35_FLD_rg_qp_pcie_speed_change_dly_time        REG_FLD(10, 10)
#define RX_CTRL_35_FLD_rg_qp_force_k_band_reset_sel            REG_FLD(1, 9)
#define RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst          REG_FLD(1, 8)
#define RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst_sel      REG_FLD(1, 7)
#define RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done            REG_FLD(1, 6)
#define RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done_sel        REG_FLD(1, 5)
#define RX_CTRL_35_FLD_rg_qp_force_pi_cal_done                 REG_FLD(1, 4)
#define RX_CTRL_35_FLD_rg_qp_force_pi_cal_done_sel             REG_FLD(1, 3)
#define RX_CTRL_35_FLD_rg_qp_force_pi_spd_chg_en               REG_FLD(1, 2)
#define RX_CTRL_35_FLD_rg_qp_force_auto_vco_en                 REG_FLD(1, 1)
#define RX_CTRL_35_FLD_rg_qp_force_pr_vco_en                   REG_FLD(1, 0)

#define RX_CTRL_36_FLD_rg_qp_force_usb_mode                    REG_FLD(1, 31)
#define RX_CTRL_36_FLD_rg_qp_force_usb_mode_sel                REG_FLD(1, 30)
#define RX_CTRL_36_FLD_rg_qp_force_sigdet_usb                  REG_FLD(1, 29)
#define RX_CTRL_36_FLD_rg_qp_force_sigdet_and                  REG_FLD(1, 28)
#define RX_CTRL_36_FLD_rg_qp_force_sigdet_or                   REG_FLD(1, 27)
#define RX_CTRL_36_FLD_rg_qp_pcie_usb_system                   REG_FLD(1, 26)
#define RX_CTRL_36_FLD_rg_qp_lck2data_dly_time                 REG_FLD(10, 16)
#define RX_CTRL_36_FLD_rg_qp_force_rx_path_rdy_time            REG_FLD(8, 8)
#define RX_CTRL_36_FLD_rg_qp_force_spd_chg_all                 REG_FLD(1, 4)
#define RX_CTRL_36_FLD_rg_qp_force_pcie_mode                   REG_FLD(1, 3)
#define RX_CTRL_36_FLD_rg_qp_force_pcie_mode_sel               REG_FLD(1, 2)
#define RX_CTRL_36_FLD_rg_qp_pcie_usb_sol_1                    REG_FLD(1, 1)
#define RX_CTRL_36_FLD_rg_qp_force_speed_chg_all_re_en         REG_FLD(1, 0)

#define RX_CTRL_37_FLD_rg_qp_reserve_19                        REG_FLD(8, 24)
#define RX_CTRL_37_FLD_rg_qp_reserve_18                        REG_FLD(8, 16)
#define RX_CTRL_37_FLD_rg_qp_reserve_17                        REG_FLD(8, 8)
#define RX_CTRL_37_FLD_rg_qp_reserve_16                        REG_FLD(8, 0)

#define RX_CTRL_38_FLD_rg_qp_reserve_7                         REG_FLD(8, 24)
#define RX_CTRL_38_FLD_rg_qp_reserve_6                         REG_FLD(8, 16)
#define RX_CTRL_38_FLD_rg_qp_reserve_5                         REG_FLD(8, 8)
#define RX_CTRL_38_FLD_rg_qp_reserve_4                         REG_FLD(8, 0)

#define RX_CTRL_39_FLD_rg_qp_reserve_11                        REG_FLD(8, 24)
#define RX_CTRL_39_FLD_rg_qp_reserve_10                        REG_FLD(8, 16)
#define RX_CTRL_39_FLD_rg_qp_reserve_9                         REG_FLD(8, 8)
#define RX_CTRL_39_FLD_rg_qp_reserve_8                         REG_FLD(8, 0)

#define RX_CTRL_40_FLD_rg_qp_reserve_15                        REG_FLD(8, 24)
#define RX_CTRL_40_FLD_rg_qp_reserve_14                        REG_FLD(8, 16)
#define RX_CTRL_40_FLD_rg_qp_reserve_13                        REG_FLD(8, 8)
#define RX_CTRL_40_FLD_rg_qp_reserve_12                        REG_FLD(8, 0)

#define RX_CTRL_41_FLD_ro_qp_reserve_3                         REG_FLD(8, 24)
#define RX_CTRL_41_FLD_ro_qp_reserve_2                         REG_FLD(8, 16)
#define RX_CTRL_41_FLD_ro_qp_reserve_1                         REG_FLD(8, 8)
#define RX_CTRL_41_FLD_ro_qp_reserve_0                         REG_FLD(8, 0)

#define RX_CTRL_42_FLD_ro_qp_reserve_7                         REG_FLD(8, 24)
#define RX_CTRL_42_FLD_ro_qp_reserve_6                         REG_FLD(8, 16)
#define RX_CTRL_42_FLD_ro_qp_reserve_5                         REG_FLD(8, 8)
#define RX_CTRL_42_FLD_ro_qp_reserve_4                         REG_FLD(8, 0)

#define RX_CTRL_43_FLD_ro_qp_reserve_11                        REG_FLD(8, 24)
#define RX_CTRL_43_FLD_ro_qp_reserve_10                        REG_FLD(8, 16)
#define RX_CTRL_43_FLD_ro_qp_reserve_9                         REG_FLD(8, 8)
#define RX_CTRL_43_FLD_ro_qp_reserve_8                         REG_FLD(8, 0)

#define RX_CTRL_44_FLD_ro_qp_reserve_15                        REG_FLD(8, 24)
#define RX_CTRL_44_FLD_ro_qp_reserve_14                        REG_FLD(8, 16)
#define RX_CTRL_44_FLD_ro_qp_reserve_13                        REG_FLD(8, 8)
#define RX_CTRL_44_FLD_ro_qp_reserve_12                        REG_FLD(8, 0)

#define RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_ki_gain         REG_FLD(3, 27)
#define RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_ki_gain         REG_FLD(3, 24)
#define RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_ki_gain_en     REG_FLD(1, 23)
#define RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_kp_gain         REG_FLD(3, 20)
#define RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_kp_gain         REG_FLD(3, 17)
#define RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_kp_gain_en     REG_FLD(1, 16)
#define RX_CTRL_45_FLD_rg_qp_sgmii_eq_train_sel                REG_FLD(1, 15)
#define RX_CTRL_45_FLD_rg_qp_force_eq_dly_en                   REG_FLD(1, 14)
#define RX_CTRL_45_FLD_rg_qp_force_eq_dly_en_sel               REG_FLD(1, 13)
#define RX_CTRL_45_FLD_rg_qp_eq_en_dly                         REG_FLD(13, 0)

#define RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en    REG_FLD(1, 29)
#define RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en    REG_FLD(1, 28)
#define RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en    REG_FLD(1, 27)
#define RX_CTRL_46_FLD_rg_reback_p0_lck2ref_en                 REG_FLD(1, 26)
#define RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish            REG_FLD(1, 25)
#define RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish_sel        REG_FLD(1, 24)
#define RX_CTRL_46_FLD_rg_force_usb_sig_clr                    REG_FLD(1, 23)
#define RX_CTRL_46_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div        REG_FLD(3, 20)
#define RX_CTRL_46_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div        REG_FLD(3, 17)
#define RX_CTRL_46_FLD_rg_qp_force_pcie_cdr_pr_kband_div_en    REG_FLD(1, 16)
#define RX_CTRL_46_FLD_rg_qp_force_power_st_change             REG_FLD(1, 15)
#define RX_CTRL_46_FLD_rg_qp_force_power_st_change_sel         REG_FLD(1, 14)
#define RX_CTRL_46_FLD_rg_qp_fre_lock_sel                      REG_FLD(1, 13)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st           REG_FLD(2, 11)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st_sel       REG_FLD(1, 10)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en          REG_FLD(1, 9)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en_sel      REG_FLD(1, 8)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd            REG_FLD(1, 7)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd_sel        REG_FLD(1, 6)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd            REG_FLD(1, 5)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd_sel        REG_FLD(1, 4)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd             REG_FLD(1, 3)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd_sel         REG_FLD(1, 2)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd             REG_FLD(1, 1)
#define RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd_sel         REG_FLD(1, 0)

#define RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_dac_band         REG_FLD(5, 27)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_dac_band         REG_FLD(5, 22)
#define RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_dac_band_en     REG_FLD(1, 21)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_buf_in_sr        REG_FLD(3, 18)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_buf_in_sr        REG_FLD(3, 15)
#define RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_buf_in_sr_en    REG_FLD(1, 14)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_beta_sel         REG_FLD(4, 10)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_beta_sel         REG_FLD(4, 6)
#define RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_beta_sel_en     REG_FLD(1, 5)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_lpf_ratio           REG_FLD(2, 3)
#define RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_lpf_ratio           REG_FLD(2, 1)
#define RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_lpf_ratio_en       REG_FLD(1, 0)

#define RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en_sel          REG_FLD(1, 31)
#define RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en              REG_FLD(1, 30)
#define RX_CTRL_48_FLD_rg_qp_force_rosc_rstb_sel               REG_FLD(1, 29)
#define RX_CTRL_48_FLD_rg_qp_force_rosc_rstb                   REG_FLD(1, 28)
#define RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_phyck_div           REG_FLD(7, 21)
#define RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_phyck_div           REG_FLD(7, 14)
#define RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_phyck_div_en       REG_FLD(1, 13)
#define RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie   REG_FLD(6, 7)
#define RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie   REG_FLD(6, 1)
#define RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en REG_FLD(1, 0)

#define RX_CTRL_49_FLD_rg_lfps_finish_time                     REG_FLD(11, 21)
#define RX_CTRL_49_FLD_rg_force_last_lfps_finish_latch_clr     REG_FLD(1, 20)
#define RX_CTRL_49_FLD_rg_lfps_detect_num                      REG_FLD(4, 16)
#define RX_CTRL_49_FLD_rg_force_signal_crsdet_out_sel          REG_FLD(1, 15)
#define RX_CTRL_49_FLD_rg_force_signal_crsdet_lthout_sel       REG_FLD(1, 14)
#define RX_CTRL_49_FLD_rg_force_ad_crsdet_out                  REG_FLD(1, 13)
#define RX_CTRL_49_FLD_rg_force_ad_crsdet_out_sel              REG_FLD(1, 12)
#define RX_CTRL_49_FLD_rg_force_signal_beacon_out_sel          REG_FLD(1, 11)
#define RX_CTRL_49_FLD_rg_force_crsdet_lthout                  REG_FLD(1, 10)
#define RX_CTRL_49_FLD_rg_force_crsdet_lthout_sel              REG_FLD(1, 9)
#define RX_CTRL_49_FLD_rg_qp_crsdet_rst_time                   REG_FLD(3, 6)
#define RX_CTRL_49_FLD_ro_usb_mode                             REG_FLD(1, 5)
#define RX_CTRL_49_FLD_ro_pcie_mode                            REG_FLD(1, 4)
#define RX_CTRL_49_FLD_ro_ssusb_qp_powerdown                   REG_FLD(2, 2)
#define RX_CTRL_49_FLD_ro_power_st_l2                          REG_FLD(1, 1)
#define RX_CTRL_49_FLD_ro_power_st_l11_l12                     REG_FLD(1, 0)

#define RX_CTRL_50_FLD_rg_p3_to_p0_do_eq_usb                   REG_FLD(1, 28)
#define RX_CTRL_50_FLD_rg_p2_to_p0_do_eq_usb                   REG_FLD(1, 27)
#define RX_CTRL_50_FLD_rg_p1_to_p0_do_eq_usb                   REG_FLD(1, 26)
#define RX_CTRL_50_FLD_rg_qp_eq_en_dly_short                   REG_FLD(13, 13)
#define RX_CTRL_50_FLD_rg_qp_rx_eq_en_h_dly_short              REG_FLD(13, 0)

#define ISR_CTRL_0_FLD_trans_sd_fail_int                       REG_FLD(1, 24)
#define ISR_CTRL_0_FLD_phyrdy_int                              REG_FLD(1, 16)
#define ISR_CTRL_0_FLD_un_stb_saos_rdy_int                     REG_FLD(1, 8)
#define ISR_CTRL_0_FLD_trans_rogue_onu_int                     REG_FLD(1, 0)

#define ISR_CTRL_1_FLD_trans_los_int                           REG_FLD(1, 24)
#define ISR_CTRL_1_FLD_un_stb_rx_rdy_int                       REG_FLD(1, 16)
#define ISR_CTRL_1_FLD_trans_fault_int                         REG_FLD(1, 8)
#define ISR_CTRL_1_FLD_un_stb_eq_rdy_int                       REG_FLD(1, 0)

#define ISR_CTRL_2_FLD_pma_rx_afifo_full_int                   REG_FLD(1, 24)
#define ISR_CTRL_2_FLD_pma_rx_afifo_empty_int                  REG_FLD(1, 16)
#define ISR_CTRL_2_FLD_pma_tx_afifo_full_int                   REG_FLD(1, 8)
#define ISR_CTRL_2_FLD_pma_tx_afifo_empty_int                  REG_FLD(1, 0)

#define ISR_CTRL_3_FLD_trans_laser_on_int                      REG_FLD(1, 24)
#define ISR_CTRL_3_FLD_rx_sigdet_int                           REG_FLD(1, 16)
#define ISR_CTRL_3_FLD_rx_freqdet_unlock_int                   REG_FLD(1, 8)
#define ISR_CTRL_3_FLD_tx_freqdet_unlock_int                   REG_FLD(1, 0)

#define ISR_CTRL_EN_0_FLD_rg_trans_sd_fail_int_en              REG_FLD(1, 24)
#define ISR_CTRL_EN_0_FLD_rg_phyrdy_int_en                     REG_FLD(1, 16)
#define ISR_CTRL_EN_0_FLD_rg_un_stb_saos_rdy_int_en            REG_FLD(1, 8)
#define ISR_CTRL_EN_0_FLD_rg_trans_rogue_onu_int_en            REG_FLD(1, 0)

#define ISR_CTRL_EN_1_FLD_rg_trans_los_int_en                  REG_FLD(1, 24)
#define ISR_CTRL_EN_1_FLD_rg_un_stb_rx_rdy_int_en              REG_FLD(1, 16)
#define ISR_CTRL_EN_1_FLD_rg_trans_fault_int_en                REG_FLD(1, 8)
#define ISR_CTRL_EN_1_FLD_rg_un_stb_eq_rdy_int_en              REG_FLD(1, 0)

#define ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_full_int_en          REG_FLD(1, 24)
#define ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_empty_int_en         REG_FLD(1, 16)
#define ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_full_int_en          REG_FLD(1, 8)
#define ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_empty_int_en         REG_FLD(1, 0)

#define ISR_CTRL_EN_3_FLD_rg_trans_sd_fail_cnt_clr             REG_FLD(1, 31)
#define ISR_CTRL_EN_3_FLD_rg_trans_laser_on_int_en             REG_FLD(1, 24)
#define ISR_CTRL_EN_3_FLD_rg_rx_sigdet_int_en                  REG_FLD(1, 16)
#define ISR_CTRL_EN_3_FLD_rg_rx_freqdet_unlock_int_en          REG_FLD(1, 8)
#define ISR_CTRL_EN_3_FLD_rg_tx_freqdet_unlock_int_en          REG_FLD(1, 0)

#define ISR_SETTING_0_FLD_rg_trans_tx_fault_pro                REG_FLD(1, 24)
#define ISR_SETTING_0_FLD_rg_trans_rx_los_pro                  REG_FLD(1, 16)
#define ISR_SETTING_0_FLD_rg_trans_tx_sd_pro                   REG_FLD(1, 8)
#define ISR_SETTING_0_FLD_rg_trans_tx_sd_inv                   REG_FLD(1, 0)

#define ISR_SETTING_1_FLD_rg_pma_show_probe_en                 REG_FLD(1, 24)
#define ISR_SETTING_1_FLD_rg_ftcal_high                        REG_FLD(8, 16)
#define ISR_SETTING_1_FLD_rg_ftcal_low                         REG_FLD(8, 8)
#define ISR_SETTING_1_FLD_rg_trans_rx_laser_on_pro             REG_FLD(1, 0)

#define ISR_SETTING_2_FLD_rg_trans_sd_fail_cnt                 REG_FLD(16, 16)
#define ISR_SETTING_2_FLD_rg_pma_rx_afifo_reach_th             REG_FLD(7, 8)
#define ISR_SETTING_2_FLD_rg_pma_tx_afifo_reach_th             REG_FLD(6, 0)

#define ISR_SETTING_3_FLD_rg_trans_tx_fault_inv                REG_FLD(1, 24)
#define ISR_SETTING_3_FLD_rg_trans_rx_sd_inv                   REG_FLD(1, 16)
#define ISR_SETTING_3_FLD_rg_trans_rx_data_inv                 REG_FLD(1, 10)
#define ISR_SETTING_3_FLD_rg_trans_tx_data_inv                 REG_FLD(1, 9)
#define ISR_SETTING_3_FLD_rg_trans_burst_inv                   REG_FLD(1, 8)
#define ISR_SETTING_3_FLD_rg_tx_dly_en                         REG_FLD(1, 0)

#define ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2DATA_int               REG_FLD(1, 31)
#define ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2REF_int                REG_FLD(1, 24)
#define ISR_CTRL_5_FLD_un_stb_pi_rdy_int                       REG_FLD(1, 16)
#define ISR_CTRL_5_FLD_un_stb_leq_rdy_int                      REG_FLD(1, 8)
#define ISR_CTRL_5_FLD_un_stb_sdos_rdy_int                     REG_FLD(1, 0)

#define ISR_CTRL_EN_5_FLD_rg_lck2data_to_lck2ref_en            REG_FLD(1, 31)
#define ISR_CTRL_EN_5_FLD_rg_lck2ref_to_lck2data_en            REG_FLD(1, 24)
#define ISR_CTRL_EN_5_FLD_rg_un_stb_pi_rdy_int_en              REG_FLD(1, 16)
#define ISR_CTRL_EN_5_FLD_rg_un_stb_leq_rdy_int_en             REG_FLD(1, 8)
#define ISR_CTRL_EN_5_FLD_rg_un_stb_sdos_rdy_int_en            REG_FLD(1, 0)

#define ISR_CTRL_6_FLD_stb_eq_rdy_int                          REG_FLD(1, 6)
#define ISR_CTRL_6_FLD_stb_pi_rdy_int                          REG_FLD(1, 5)
#define ISR_CTRL_6_FLD_rx_freqdet_lock_int                     REG_FLD(1, 4)
#define ISR_CTRL_6_FLD_stb_sdos_rdy_int                        REG_FLD(1, 3)
#define ISR_CTRL_6_FLD_stb_saos_rdy_int                        REG_FLD(1, 2)
#define ISR_CTRL_6_FLD_stb_leq_rdy_int                         REG_FLD(1, 1)
#define ISR_CTRL_6_FLD_link_erro_int                           REG_FLD(1, 0)

#define ISR_CTRL_EN_6_FLD_rg_stb_eq_rdy_int_en                 REG_FLD(1, 6)
#define ISR_CTRL_EN_6_FLD_rg_stb_pi_rdy_int_en                 REG_FLD(1, 5)
#define ISR_CTRL_EN_6_FLD_rg_rx_freqdet_lock_int_en            REG_FLD(1, 4)
#define ISR_CTRL_EN_6_FLD_rg_stb_sdos_rdy_int_en               REG_FLD(1, 3)
#define ISR_CTRL_EN_6_FLD_rg_stb_saos_rdy_int_en               REG_FLD(1, 2)
#define ISR_CTRL_EN_6_FLD_rg_stb_leq_rdy_int_en                REG_FLD(1, 1)
#define ISR_CTRL_EN_6_FLD_rg_link_erro_int_en                  REG_FLD(1, 0)

#define QP_TX_DBG_0_FLD_ro_qp_tx_debug3                        REG_FLD(8, 24)
#define QP_TX_DBG_0_FLD_ro_qp_tx_debug2                        REG_FLD(8, 16)
#define QP_TX_DBG_0_FLD_ro_qp_tx_debug1                        REG_FLD(8, 8)
#define QP_TX_DBG_0_FLD_ro_qp_tx_debug0                        REG_FLD(8, 0)

#define QP_TX_DBG_1_FLD_ro_qp_tx_debug7                        REG_FLD(8, 24)
#define QP_TX_DBG_1_FLD_ro_qp_tx_debug6                        REG_FLD(8, 16)
#define QP_TX_DBG_1_FLD_ro_qp_tx_debug5                        REG_FLD(8, 8)
#define QP_TX_DBG_1_FLD_ro_qp_tx_debug4                        REG_FLD(8, 0)

#define QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug3                    REG_FLD(8, 24)
#define QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug2                    REG_FLD(8, 16)
#define QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug1                    REG_FLD(8, 8)
#define QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug0                    REG_FLD(8, 0)

#define QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug7                    REG_FLD(8, 24)
#define QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug6                    REG_FLD(8, 16)
#define QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug5                    REG_FLD(8, 8)
#define QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug4                    REG_FLD(8, 0)

#define QP_LFPS_DBG_2_FLD_ro_rx_lfps_debug8                    REG_FLD(8, 0)

#define QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_err_cnt              REG_FLD(16, 16)
#define QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_compare              REG_FLD(1, 2)
#define QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_fail                 REG_FLD(1, 1)
#define QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_done                 REG_FLD(1, 0)

#define QP_PRBS_DBG_1_FLD_ro_bistctl_prbs_bit_err_fw_using     REG_FLD(16, 0)

#define QP_PRBS_DBG_2_FLD_ro_bistctl_prbs_bit_err_period_num   REG_FLD(24, 0)

#define QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_3                 REG_FLD(8, 24)
#define QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_2                 REG_FLD(8, 16)
#define QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_1                 REG_FLD(8, 8)
#define QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_0                 REG_FLD(8, 0)

#define QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_7                 REG_FLD(8, 24)
#define QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_6                 REG_FLD(8, 16)
#define QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_5                 REG_FLD(8, 8)
#define QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_4                 REG_FLD(8, 0)

#define QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_10                REG_FLD(8, 16)
#define QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_9                 REG_FLD(8, 8)
#define QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_8                 REG_FLD(8, 0)

#define QP_TX_BIST_DBG_0_FLD_ro_bist_status                    REG_FLD(1, 18)
#define QP_TX_BIST_DBG_0_FLD_ro_bist_len_error                 REG_FLD(1, 17)
#define QP_TX_BIST_DBG_0_FLD_ro_bist_chk_done                  REG_FLD(1, 16)
#define QP_TX_BIST_DBG_0_FLD_ro_bist_error_cnt                 REG_FLD(9, 0)

#define QP_TX_BIST_DBG_1_FLD_ro_pcs_bist_debug                 REG_FLD(32, 0)

#define QP_R2T_AFIFO_DBG_FLD_ro_r2t_afifo_debug                REG_FLD(32, 0)

#define QP_T2R_AFIFO_DBG_FLD_ro_t2r_afifo_debug                REG_FLD(32, 0)

#define QP_TX_DA_CTRL_0_GET_rg_ssusb_tx_eidle_sel(reg32)       REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_ssusb_tx_eidle_sel, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_fval_tx_term_vref_sel(reg32)    REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_vref_sel, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_fval_tx_term_sel(reg32)         REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_sel, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_fval_tx_impcalib_en(reg32)      REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_impcalib_en, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_tx_termcal_count(reg32)         REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_tx_termcal_count, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_termcal_vsel_timer(reg32)       REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_termcal_vsel_timer, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_force_tx_calib_en(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_force_tx_calib_en, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_impcalib_en(reg32)              REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_impcalib_en, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_rxdet_rd_wait_timer(reg32)      REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_rxdet_rd_wait_timer, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_rxdet_mask_clr(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_rxdet_mask_clr, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_force_qp_tx_reserve(reg32)      REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_force_qp_tx_reserve, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_rxdet_en_window(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_rxdet_en_window, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_tx_rxdet_en(reg32)              REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_tx_rxdet_en, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_fval_rx_det_en(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_fval_rx_det_en, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_force_rx_det_ctrl(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_force_rx_det_ctrl, (reg32))
#define QP_TX_DA_CTRL_0_GET_rg_fval_tx_eidle_lp_off(reg32)     REG_FLD_GET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_eidle_lp_off, (reg32))

#define QP_TX_DA_CTRL_1_GET_rg_fval_tx_data(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_fval_tx_data_en(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data_en, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_fval_tx_ser_en(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_ser_en, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_txff_redun_en(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_txff_redun_en, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_force_tx_data_ctrl(reg32)       REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_data_ctrl, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_force_tx_bit_inverse(reg32)     REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_inverse, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_tfifo_bypass(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_tfifo_bypass, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_force_tx_bit_reverse(reg32)     REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_reverse, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_tfifo_rst(reg32)                REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_tfifo_rst, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_tx_ser_en_ps_mode(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_tx_ser_en_ps_mode, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_fval_tx_lfps(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_fval_tx_lfps_en(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps_en, (reg32))
#define QP_TX_DA_CTRL_1_GET_rg_force_tx_lfps_ctrl(reg32)       REG_FLD_GET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_lfps_ctrl, (reg32))

#define QP_TX_DA_CTRL_2_GET_rg_qp_tx_dem_mode(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_mode, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_force_tx_dem_sel(reg32)         REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem_sel, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_qp_tx_dem_sel(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_sel, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_da_qp_tx_drv_en(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_drv_en, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_da_qp_tx_dem(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_dem, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_tx_fir_c2(reg32)                REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c2, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_tx_fir_c1(reg32)                REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c1, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_tx_fir_c0b(reg32)               REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c0b, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_tx_fir_cn1(reg32)               REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_cn1, (reg32))
#define QP_TX_DA_CTRL_2_GET_rg_force_tx_dem(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem, (reg32))

#define QP_TX_DA_CTRL_3_GET_rg_ssusb_tx_ser_en_sel(reg32)      REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_ssusb_tx_ser_en_sel, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_tx_data_rate_sel(reg32)         REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_tx_data_rate_sel, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_force_tphy_mode(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_force_tphy_mode, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_qphy_redun_sel(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_qphy_redun_sel, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_test_tx_data_count(reg32)       REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_count, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_test_tx_lfps_type(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_type, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_test_tx_cp8(reg32)              REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_cp8, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_test_tx_data_en(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_en, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_test_tx_lfps_en(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_en, (reg32))
#define QP_TX_DA_CTRL_3_GET_rg_tx_data_test_mode(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_3_FLD_rg_tx_data_test_mode, (reg32))

#define QP_TX_DA_CTRL_4_GET_rg_bist_error_patt(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_4_FLD_rg_bist_error_patt, (reg32))
#define QP_TX_DA_CTRL_4_GET_rg_lock_rx20b_inv(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_4_FLD_rg_lock_rx20b_inv, (reg32))
#define QP_TX_DA_CTRL_4_GET_rg_test_rx_bist_en(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_4_FLD_rg_test_rx_bist_en, (reg32))
#define QP_TX_DA_CTRL_4_GET_rg_bist_add_error_en(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_4_FLD_rg_bist_add_error_en, (reg32))
#define QP_TX_DA_CTRL_4_GET_rg_test_tx_add_id_en(reg32)        REG_FLD_GET(QP_TX_DA_CTRL_4_FLD_rg_test_tx_add_id_en, (reg32))
#define QP_TX_DA_CTRL_4_GET_rg_test_tx_patt_sel(reg32)         REG_FLD_GET(QP_TX_DA_CTRL_4_FLD_rg_test_tx_patt_sel, (reg32))

#define QP_TX_DA_CTRL_5_GET_rg_test_tx_patt0(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_5_FLD_rg_test_tx_patt0, (reg32))

#define QP_TX_DA_CTRL_6_GET_rg_test_tx_patt1(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_6_FLD_rg_test_tx_patt1, (reg32))

#define QP_TX_DA_CTRL_7_GET_rg_test_tx_patt2(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_7_FLD_rg_test_tx_patt2, (reg32))

#define QP_TX_DA_CTRL_8_GET_rg_test_tx_patt3(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_8_FLD_rg_test_tx_patt3, (reg32))

#define QP_TX_DA_CTRL_9_GET_rg_test_tseq_cnt(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_test_tseq_cnt, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_r2t_data_en_dly(reg32)          REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_r2t_data_en_dly, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_r2tlb_fiforst(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_fiforst, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_r2tlb_bypass(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_bypass, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_t2rlb_fiforst(reg32)            REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_t2rlb_fiforst, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_t2rlb_int_en(reg32)             REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_t2rlb_int_en, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_r2tlb_mode(reg32)               REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_mode, (reg32))
#define QP_TX_DA_CTRL_9_GET_rg_test_tseq_mode(reg32)           REG_FLD_GET(QP_TX_DA_CTRL_9_FLD_rg_test_tseq_mode, (reg32))

#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_prbs_fail_threshold(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_fail_threshold, (reg32))
#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_prbs_check_cnt(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_check_cnt, (reg32))
#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_io_data_inv(reg32)   REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_io_data_inv, (reg32))
#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_bit_error_rst_sel(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_bit_error_rst_sel, (reg32))
#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_pat_rx_check_en(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_rx_check_en, (reg32))
#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_pat_tx_en(reg32)     REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_tx_en, (reg32))
#define QP_PMA_BIST_CTRL_0_GET_rg_bistctl_pat_sel(reg32)       REG_FLD_GET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_sel, (reg32))

#define QP_PMA_BIST_CTRL_1_GET_rg_bistctl_prbs_init_seed(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_1_FLD_rg_bistctl_prbs_init_seed, (reg32))

#define QP_PMA_BIST_CTRL_2_GET_rg_bistctl_align_pattern(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_2_FLD_rg_bistctl_align_pattern, (reg32))

#define QP_PMA_BIST_CTRL_3_GET_rg_bist_tx_data_pollution_latch(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution_latch, (reg32))
#define QP_PMA_BIST_CTRL_3_GET_rg_bist_tx_data_pollution(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution, (reg32))

#define QP_PMA_BIST_CTRL_4_GET_rg_bistctl_prbs_check_timer(reg32) REG_FLD_GET(QP_PMA_BIST_CTRL_4_FLD_rg_bistctl_prbs_check_timer, (reg32))

#define QP_RX_LFPS_CTRL_0_GET_rg_rxlfps_p3_entry(reg32)        REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_p3_entry, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_ssusb_lfps_sel(reg32)         REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_lfps_sel, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_ssusb_rxlfps_lob(reg32)       REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_lob, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_ssusb_rxlfps_upb(reg32)       REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_upb, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_ssusb_rxlfps_udf(reg32)       REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_udf, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_ssusb_rxlfps_ovf(reg32)       REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_ovf, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_rxlfps_deglitch(reg32)        REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_deglitch, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_rxlfps_pwd(reg32)             REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_pwd, (reg32))
#define QP_RX_LFPS_CTRL_0_GET_rg_rxlfps_mon_en(reg32)          REG_FLD_GET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_mon_en, (reg32))

#define QP_TX_DETRX_TMR_GET_rg_tx_reserved_bit(reg32)          REG_FLD_GET(QP_TX_DETRX_TMR_FLD_rg_tx_reserved_bit, (reg32))
#define QP_TX_DETRX_TMR_GET_rg_force_tx_detrx_out_val(reg32)   REG_FLD_GET(QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out_val, (reg32))
#define QP_TX_DETRX_TMR_GET_rg_force_tx_detrx_out(reg32)       REG_FLD_GET(QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out, (reg32))
#define QP_TX_DETRX_TMR_GET_rg_tx_detrx_wait_timer(reg32)      REG_FLD_GET(QP_TX_DETRX_TMR_FLD_rg_tx_detrx_wait_timer, (reg32))

#define PON_RXFEDIG_CTRL_0_GET_RG_SSUSB_RX_DFE_RST(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_RST, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_SSUSB_RX_DFE_EN(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_EN, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_SSUSB_RX_FR_MODE(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_FR_MODE, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_SSUSB_FORCE_RX_FR_MODE(reg32) REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_FORCE_RX_FR_MODE, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_TRI_DET_EN(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_TRI_DET_EN, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_STOPTIME(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_STOPTIME, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_RX500M_CK_SEL(reg32)   REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_RX500M_CK_SEL, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_PILPO_ROUT(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_PILPO_ROUT, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_GATED_RXD_B(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_GATED_RXD_B, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_EYE_MON_EN(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_MON_EN, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_EYE_CNT_EN(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_CNT_EN, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_DFE_TOG(reg32)         REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFE_TOG, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_DFEYEN_STOP_DIS(reg32) REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEYEN_STOP_DIS, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_DFEX_RST(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_RST, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_DFEX_EN(reg32)         REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_EN, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_DFEX_DIS(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_DIS, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_DFEXEN_SEL(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEXEN_SEL, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_CHK_EYE_H(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_CHK_EYE_H, (reg32))
#define PON_RXFEDIG_CTRL_0_GET_RG_QP_EQ_ALGRTHM_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_ALGRTHM_SEL, (reg32))

#define PON_RXFEDIG_CTRL_1_GET_RG_QP_EQ_DD1LOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1LOS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_1_GET_RG_QP_EQ_DD1HOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1HOS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_1_GET_RG_QP_EQ_DD0LOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0LOS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_1_GET_RG_QP_EQ_DD0HOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0HOS_LFI, (reg32))

#define PON_RXFEDIG_CTRL_2_GET_RG_QP_EQ_DEYE1OS_LFI(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE1OS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_2_GET_RG_QP_EQ_DEYE0OS_LFI(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE0OS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_2_GET_RG_QP_EQ_DE1OS_LFI(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE1OS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_2_GET_RG_QP_EQ_DE0OS_LFI(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE0OS_LFI, (reg32))

#define PON_RXFEDIG_CTRL_3_GET_RG_QP_EQ_DHHL_LFI(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHL_LFI, (reg32))
#define PON_RXFEDIG_CTRL_3_GET_RG_QP_EQ_DHHLOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHLOS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_3_GET_RG_QP_EQ_DFEYEN_DUR(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEYEN_DUR, (reg32))
#define PON_RXFEDIG_CTRL_3_GET_RG_QP_EQ_DFEX_LF_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEX_LF_SEL, (reg32))
#define PON_RXFEDIG_CTRL_3_GET_RG_QP_EQ_DFEXEN_DUR(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEXEN_DUR, (reg32))

#define PON_RXFEDIG_CTRL_4_GET_RG_QP_EQ_DLEQ_LFI_GEN3(reg32)   REG_FLD_GET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN3, (reg32))
#define PON_RXFEDIG_CTRL_4_GET_RG_QP_EQ_DLEQ_LFI_GEN2(reg32)   REG_FLD_GET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN2, (reg32))
#define PON_RXFEDIG_CTRL_4_GET_RG_QP_EQ_DLEQ_LFI_GEN1(reg32)   REG_FLD_GET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN1, (reg32))
#define PON_RXFEDIG_CTRL_4_GET_RG_QP_EQ_DLEQOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQOS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_4_GET_RG_QP_EQ_DHHL_LF_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DHHL_LF_SEL, (reg32))

#define PON_RXFEDIG_CTRL_5_GET_RG_QP_EQ_DSAOS_LF_SEL(reg32)    REG_FLD_GET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DSAOS_LF_SEL, (reg32))
#define PON_RXFEDIG_CTRL_5_GET_RG_QP_EQ_DLHL_LF_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LF_SEL, (reg32))
#define PON_RXFEDIG_CTRL_5_GET_RG_QP_EQ_DLHL_LFI(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LFI, (reg32))
#define PON_RXFEDIG_CTRL_5_GET_RG_QP_EQ_DLHLOS_LFI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHLOS_LFI, (reg32))
#define PON_RXFEDIG_CTRL_5_GET_RG_QP_EQ_DLEQ_LF_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LF_SEL, (reg32))
#define PON_RXFEDIG_CTRL_5_GET_RG_QP_EQ_DLEQ_LFI_GEN4(reg32)   REG_FLD_GET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LFI_GEN4, (reg32))

#define PON_RXFEDIG_CTRL_6_GET_RG_QP_EQ_EYE1_Y(reg32)          REG_FLD_GET(PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE1_Y, (reg32))
#define PON_RXFEDIG_CTRL_6_GET_RG_QP_EQ_EYE0_Y(reg32)          REG_FLD_GET(PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE0_Y, (reg32))

#define PON_RXFEDIG_CTRL_7_GET_RG_QP_EQ_EYE_CNT(reg32)         REG_FLD_GET(PON_RXFEDIG_CTRL_7_FLD_RG_QP_EQ_EYE_CNT, (reg32))

#define PON_RXFEDIG_CTRL_8_GET_RG_QP_EQ_LEQMAX(reg32)          REG_FLD_GET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_LEQMAX, (reg32))
#define PON_RXFEDIG_CTRL_8_GET_RG_QP_EQ_ISIFLAG_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_ISIFLAG_SEL, (reg32))
#define PON_RXFEDIG_CTRL_8_GET_RG_QP_EQ_EYE_XOFFSET(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_XOFFSET, (reg32))
#define PON_RXFEDIG_CTRL_8_GET_RG_QP_EQ_EYE_MASK(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_MASK, (reg32))

#define PON_RXFEDIG_CTRL_9_GET_RG_QP_EQ_PI0_INI(reg32)         REG_FLD_GET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_PI0_INI, (reg32))
#define PON_RXFEDIG_CTRL_9_GET_RG_QP_EQ_MON_SEL(reg32)         REG_FLD_GET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_MON_SEL, (reg32))
#define PON_RXFEDIG_CTRL_9_GET_RG_QP_EQ_LEQ_STOP_TO(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_STOP_TO, (reg32))
#define PON_RXFEDIG_CTRL_9_GET_RG_QP_EQ_LEQ_SHIFT(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_SHIFT, (reg32))
#define PON_RXFEDIG_CTRL_9_GET_RG_QP_EQ_LEQOSC_DLYCNT(reg32)   REG_FLD_GET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQOSC_DLYCNT, (reg32))

#define PON_RXFEDIG_CTRL_10_GET_RG_QP_EQ_PI_KPGAIN(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI_KPGAIN, (reg32))
#define PON_RXFEDIG_CTRL_10_GET_RG_QP_EQ_PIEYE_INI(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PIEYE_INI, (reg32))
#define PON_RXFEDIG_CTRL_10_GET_RG_QP_EQ_PI90_INI(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90_INI, (reg32))
#define PON_RXFEDIG_CTRL_10_GET_RG_QP_EQ_PI90CK_SEL(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90CK_SEL, (reg32))

#define PON_RXFEDIG_CTRL_11_GET_RG_QP_EQ_RESERVED(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_11_FLD_RG_QP_EQ_RESERVED, (reg32))

#define PON_RXFEDIG_CTRL_12_GET_RG_QP_EQ_REV(reg32)            REG_FLD_GET(PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV, (reg32))
#define PON_RXFEDIG_CTRL_12_GET_RG_QP_EQ_REV_1(reg32)          REG_FLD_GET(PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV_1, (reg32))

#define PON_RXFEDIG_CTRL_13_GET_RG_QP_EQ_STARTTIME(reg32)      REG_FLD_GET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_STARTTIME, (reg32))
#define PON_RXFEDIG_CTRL_13_GET_RG_QP_EQ_SIGDET(reg32)         REG_FLD_GET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SIGDET, (reg32))
#define PON_RXFEDIG_CTRL_13_GET_RG_QP_EQ_SD_CNT1(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT1, (reg32))
#define PON_RXFEDIG_CTRL_13_GET_RG_QP_EQ_SD_CNT0(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT0, (reg32))

#define PON_RXFEDIG_CTRL_14_GET_RG_QP_EQ_TRI_DET_TH(reg32)     REG_FLD_GET(PON_RXFEDIG_CTRL_14_FLD_RG_QP_EQ_TRI_DET_TH, (reg32))

#define PON_RXFEDIG_STS_0_GET_RGS_SSUSB_EQ_LEQ_STOP(reg32)     REG_FLD_GET(PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_LEQ_STOP, (reg32))
#define PON_RXFEDIG_STS_0_GET_RGS_SSUSB_EQ_EYE_CNT_RDY(reg32)  REG_FLD_GET(PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_EYE_CNT_RDY, (reg32))

#define PON_RXFEDIG_STS_1_GET_RGS_SSUSB_EQ_DCD1L(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1L, (reg32))
#define PON_RXFEDIG_STS_1_GET_RGS_SSUSB_EQ_DCD1H(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1H, (reg32))
#define PON_RXFEDIG_STS_1_GET_RGS_SSUSB_EQ_DCD0L(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0L, (reg32))
#define PON_RXFEDIG_STS_1_GET_RGS_SSUSB_EQ_DCD0H(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0H, (reg32))

#define PON_RXFEDIG_STS_2_GET_RGS_SSUSB_EQ_DCEYE1(reg32)       REG_FLD_GET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE1, (reg32))
#define PON_RXFEDIG_STS_2_GET_RGS_SSUSB_EQ_DCEYE0(reg32)       REG_FLD_GET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE0, (reg32))
#define PON_RXFEDIG_STS_2_GET_RGS_SSUSB_EQ_DCE1(reg32)         REG_FLD_GET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE1, (reg32))
#define PON_RXFEDIG_STS_2_GET_RGS_SSUSB_EQ_DCE0(reg32)         REG_FLD_GET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE0, (reg32))

#define PON_RXFEDIG_STS_3_GET_RGS_SSUSB_EQ_DCLHL(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLHL, (reg32))
#define PON_RXFEDIG_STS_3_GET_RGS_SSUSB_EQ_DCLEQOS(reg32)      REG_FLD_GET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQOS, (reg32))
#define PON_RXFEDIG_STS_3_GET_RGS_SSUSB_EQ_DCLEQ(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQ, (reg32))
#define PON_RXFEDIG_STS_3_GET_RGS_SSUSB_EQ_DCHHL(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCHHL, (reg32))

#define PON_RXFEDIG_STS_4_GET_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0(reg32) REG_FLD_GET(PON_RXFEDIG_STS_4_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0, (reg32))

#define PON_RXFEDIG_STS_5_GET_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1(reg32) REG_FLD_GET(PON_RXFEDIG_STS_5_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1, (reg32))

#define PON_RXFEDIG_STS_7_GET_RGS_SSUSB_EQ_STATUS(reg32)       REG_FLD_GET(PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_STATUS, (reg32))
#define PON_RXFEDIG_STS_7_GET_RGS_SSUSB_EQ_PILPO(reg32)        REG_FLD_GET(PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_PILPO, (reg32))

#define PON_RXFEDIG_STS_8_GET_RGS_SSUSB_RX_SD_OUT(reg32)       REG_FLD_GET(PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_RX_SD_OUT, (reg32))
#define PON_RXFEDIG_STS_8_GET_RGS_SSUSB_EQ_PROBE_OUT(reg32)    REG_FLD_GET(PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_EQ_PROBE_OUT, (reg32))

#define PON_RXFEDIG_CTRL_15_GET_RG_PQ_FEDIG_MODE(reg32)        REG_FLD_GET(PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_MODE, (reg32))
#define PON_RXFEDIG_CTRL_15_GET_RG_PQ_FEDIG_SPEED(reg32)       REG_FLD_GET(PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_SPEED, (reg32))

#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_int_los_inv(reg32)     REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_int_los_inv, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_tdc_los_inv(reg32)     REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_los_inv, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_tdc_ck_en_and_los(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_ck_en_and_los, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_tdc_lck2ref_sel(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_lck2ref_sel, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_sw_lcpll_en(reg32)     REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_lcpll_en_inv(reg32)    REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_lcpll_hw_ctrl_mode(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_ncpo_los_hold_en(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_los_hold_en, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_ncpo_det_en(reg32)     REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_det_en, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_lcpll_force_on(reg32)  REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on, (reg32))

#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_ck_stb_timer(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer, (reg32))
#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_pcw_man_load_timer(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer, (reg32))
#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_en_timer(reg32)  REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer, (reg32))
#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_man_pwdb(reg32)  REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb, (reg32))

#define SS_LCPLL_PWCTL_SETTING_2_GET_rg_ncpo_ana_msb(reg32)    REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_ncpo_ana_msb, (reg32))
#define SS_LCPLL_PWCTL_SETTING_2_GET_rg_tdc_mst_en(reg32)      REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_mst_en, (reg32))
#define SS_LCPLL_PWCTL_SETTING_2_GET_rg_tdc_ck_stb_timer(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_ck_stb_timer, (reg32))

#define SS_LCPLL_PWCTL_DBG_SETTING_GET_rg_lcpll_ledck_div(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_DBG_SETTING_FLD_rg_lcpll_ledck_div, (reg32))

#define SS_LCPLL_TDC_PW_0_GET_rg_lcpll_dpma_dds1_iso_disable(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_iso_disable, (reg32))
#define SS_LCPLL_TDC_PW_0_GET_rg_lcpll_dpma_dds1_pwdb(reg32)   REG_FLD_GET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_pwdb, (reg32))
#define SS_LCPLL_TDC_PW_0_GET_rg_lcpll_dpma_autopw_en(reg32)   REG_FLD_GET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_autopw_en, (reg32))
#define SS_LCPLL_TDC_PW_0_GET_rg_lcpll_tdc_dig_pwdb(reg32)     REG_FLD_GET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_tdc_dig_pwdb, (reg32))

#define SS_LCPLL_TDC_PW_1_GET_rg_lcpll_dpma_dds1_pcw_ncpo_chg(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg, (reg32))
#define SS_LCPLL_TDC_PW_1_GET_rg_lcpll_dpma_dds1_rstb(reg32)   REG_FLD_GET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb, (reg32))
#define SS_LCPLL_TDC_PW_1_GET_rg_lcpll_dpma_dds1_rstb_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb_dly, (reg32))
#define SS_LCPLL_TDC_PW_1_GET_rg_lcpll_dpma_dds1_iso_disable_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_iso_disable_dly, (reg32))

#define SS_LCPLL_TDC_PW_2_GET_rg_lcpll_dpma_txpll1_ddsfbk_en(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en, (reg32))
#define SS_LCPLL_TDC_PW_2_GET_rg_lcpll_dpma_dds1_ncpo_en_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en_dly, (reg32))
#define SS_LCPLL_TDC_PW_2_GET_rg_lcpll_dpma_dds1_ncpo_en(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en, (reg32))
#define SS_LCPLL_TDC_PW_2_GET_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly, (reg32))

#define SS_LCPLL_TDC_PW_3_GET_rg_lcpll_tdc_cal(reg32)          REG_FLD_GET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal, (reg32))
#define SS_LCPLL_TDC_PW_3_GET_rg_lcpll_tdc_cal_trig_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig_dly, (reg32))
#define SS_LCPLL_TDC_PW_3_GET_rg_lcpll_tdc_cal_trig(reg32)     REG_FLD_GET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig, (reg32))
#define SS_LCPLL_TDC_PW_3_GET_rg_lcpll_dpma_txpll1_ddsfbk_en_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en_dly, (reg32))

#define SS_LCPLL_TDC_PW_4_GET_rg_lcpll_tdc_sigdet_cg(reg32)    REG_FLD_GET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_sigdet_cg, (reg32))
#define SS_LCPLL_TDC_PW_4_GET_rg_lcpll_tdc_en(reg32)           REG_FLD_GET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_en, (reg32))
#define SS_LCPLL_TDC_PW_4_GET_rg_lcpll_tdc_cal_offset(reg32)   REG_FLD_GET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_offset, (reg32))
#define SS_LCPLL_TDC_PW_4_GET_rg_lcpll_tdc_cal_bw(reg32)       REG_FLD_GET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_bw, (reg32))

#define SS_LCPLL_TDC_PW_5_GET_rg_tdc_start_cnt(reg32)          REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt, (reg32))
#define SS_LCPLL_TDC_PW_5_GET_rg_tdc_start_cnt_clr(reg32)      REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt_clr, (reg32))
#define SS_LCPLL_TDC_PW_5_GET_rg_ncpo_start_dly_en(reg32)      REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_ncpo_start_dly_en, (reg32))
#define SS_LCPLL_TDC_PW_5_GET_rg_lcpll_tdc_sync_in_mode(reg32) REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_sync_in_mode, (reg32))
#define SS_LCPLL_TDC_PW_5_GET_rg_lcpll_autok_tdc(reg32)        REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_autok_tdc, (reg32))
#define SS_LCPLL_TDC_PW_5_GET_rg_lcpll_tdc_autoen(reg32)       REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_autoen, (reg32))
#define SS_LCPLL_TDC_PW_5_GET_rg_lcpll_tdc_en_mux(reg32)       REG_FLD_GET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_en_mux, (reg32))

#define SS_LCPLL_TDC_FLT_0_GET_rg_lcpll_tdc_offset(reg32)      REG_FLD_GET(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_tdc_offset, (reg32))
#define SS_LCPLL_TDC_FLT_0_GET_rg_lcpll_ki(reg32)              REG_FLD_GET(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_ki, (reg32))
#define SS_LCPLL_TDC_FLT_0_GET_rg_lcpll_pon_rx_cdr_divtdc(reg32) REG_FLD_GET(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_pon_rx_cdr_divtdc, (reg32))

#define SS_LCPLL_TDC_FLT_1_GET_rg_lcpll_tdc_gain(reg32)        REG_FLD_GET(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_tdc_gain, (reg32))
#define SS_LCPLL_TDC_FLT_1_GET_rg_lcpll_a_tdc(reg32)           REG_FLD_GET(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_a_tdc, (reg32))
#define SS_LCPLL_TDC_FLT_1_GET_rg_lcpll_gpon_sel(reg32)        REG_FLD_GET(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_gpon_sel, (reg32))

#define SS_LCPLL_TDC_FLT_2_GET_rg_lcpll_ncpo_value(reg32)      REG_FLD_GET(SS_LCPLL_TDC_FLT_2_FLD_rg_lcpll_ncpo_value, (reg32))

#define SS_LCPLL_TDC_FLT_3_GET_rg_sdm_upd_disb(reg32)          REG_FLD_GET(SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd_disb, (reg32))
#define SS_LCPLL_TDC_FLT_3_GET_rg_sdm_upd(reg32)               REG_FLD_GET(SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd, (reg32))
#define SS_LCPLL_TDC_FLT_3_GET_rg_lcpll_tdc_swrst(reg32)       REG_FLD_GET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_tdc_swrst, (reg32))
#define SS_LCPLL_TDC_FLT_3_GET_rg_lcpll_ncpo_hold(reg32)       REG_FLD_GET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_hold, (reg32))
#define SS_LCPLL_TDC_FLT_3_GET_rg_lcpll_ncpo_load(reg32)       REG_FLD_GET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_load, (reg32))
#define SS_LCPLL_TDC_FLT_3_GET_rg_lcpll_ncpo_shift(reg32)      REG_FLD_GET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_shift, (reg32))

#define SS_LCPLL_TDC_FLT_4_GET_rg_lcpll_tdcen_wait_lck2ref(reg32) REG_FLD_GET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_wait_lck2ref, (reg32))
#define SS_LCPLL_TDC_FLT_4_GET_rg_lcpll_tdcen_chk_lck2ref(reg32) REG_FLD_GET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_chk_lck2ref, (reg32))
#define SS_LCPLL_TDC_FLT_4_GET_rg_lcpll_tdc_rst(reg32)         REG_FLD_GET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdc_rst, (reg32))
#define SS_LCPLL_TDC_FLT_4_GET_rg_lcpll_tdcen_rst_dlf(reg32)   REG_FLD_GET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_rst_dlf, (reg32))

#define SS_LCPLL_TDC_FLT_5_GET_rg_lcpll_ncpo_chg(reg32)        REG_FLD_GET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_ncpo_chg, (reg32))
#define SS_LCPLL_TDC_FLT_5_GET_rg_lcpll_tdc_autopw_ncpo(reg32) REG_FLD_GET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_autopw_ncpo, (reg32))
#define SS_LCPLL_TDC_FLT_5_GET_rg_lcpll_tdc_waitlck_pos_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pos_dly, (reg32))
#define SS_LCPLL_TDC_FLT_5_GET_rg_lcpll_tdc_waitlck_pre_dly(reg32) REG_FLD_GET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pre_dly, (reg32))

#define SS_LCPLL_TDC_FLT_6_GET_rg_lcpll_tdc_pcw_sub1en(reg32)  REG_FLD_GET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_tdc_pcw_sub1en, (reg32))
#define SS_LCPLL_TDC_FLT_6_GET_rg_lcpll_dlf_mult_en(reg32)     REG_FLD_GET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_dlf_mult_en, (reg32))
#define SS_LCPLL_TDC_FLT_6_GET_rg_lcpll_ncpo_chg_delay(reg32)  REG_FLD_GET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_delay, (reg32))
#define SS_LCPLL_TDC_FLT_6_GET_rg_lcpll_ncpo_chg_mask(reg32)   REG_FLD_GET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_mask, (reg32))

#define SS_LCPLL_TDC_FLT_7_GET_rg_lcpll_tdcck_inv_en(reg32)    REG_FLD_GET(SS_LCPLL_TDC_FLT_7_FLD_rg_lcpll_tdcck_inv_en, (reg32))

#define SS_LCPLL_TDC_PCW_1_GET_rg_lcpll_pon_hrdds_pcw_ncpo_gpon(reg32) REG_FLD_GET(SS_LCPLL_TDC_PCW_1_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_gpon, (reg32))

#define SS_LCPLL_TDC_PCW_2_GET_rg_lcpll_pon_hrdds_pcw_ncpo_epon(reg32) REG_FLD_GET(SS_LCPLL_TDC_PCW_2_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_epon, (reg32))

#define SS_LCPLL_TDC_RO_1_GET_ro_lcpll_tdc_dig(reg32)          REG_FLD_GET(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_dig, (reg32))
#define SS_LCPLL_TDC_RO_1_GET_ro_lcpll_tdc_st(reg32)           REG_FLD_GET(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_st, (reg32))
#define SS_LCPLL_TDC_RO_1_GET_ro_lcpll_tdc_tdcpw_st(reg32)     REG_FLD_GET(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_tdcpw_st, (reg32))

#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_tdc_ck_stb(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_ck_stb, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_tdc_cal_offset(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_offset, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_tdc_cal_bw(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_bw, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_tdc_en(reg32)  REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_en, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_rx_ck_stb(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_rx_ck_stb, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_en_lck2ref_rst(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_en_lck2ref_rst, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_dds1_pwdb(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pwdb, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_dds1_iso_disable(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_iso_disable, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_dds1_rstb(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_rstb, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_dds1_ncpo_en(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_ncpo_en, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg, (reg32))
#define SS_LCPLL_TDC_RO_2_GET_ro_lcpll_tdc_dlf_gain(reg32)     REG_FLD_GET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dlf_gain, (reg32))

#define SS_LCPLL_TDC_RO_3_GET_ro_lcpll_tdc_gain(reg32)         REG_FLD_GET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_gain, (reg32))
#define SS_LCPLL_TDC_RO_3_GET_ro_lcpll_tdc_decode(reg32)       REG_FLD_GET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_decode, (reg32))
#define SS_LCPLL_TDC_RO_3_GET_ro_lcpll_tdc_en(reg32)           REG_FLD_GET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_en, (reg32))
#define SS_LCPLL_TDC_RO_3_GET_ro_lcpll_tdc_cal_done(reg32)     REG_FLD_GET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_cal_done, (reg32))
#define SS_LCPLL_TDC_RO_3_GET_ro_lcpll_tdc_offset(reg32)       REG_FLD_GET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_offset, (reg32))

#define SS_LCPLL_TDC_RO_4_GET_ro_lcpll_tdc_dpma_dds1_pcw_ncpo(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_4_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo, (reg32))

#define SS_LCPLL_TDC_RO_5_GET_ro_lcpll_tdc_dpma_tdc_c(reg32)   REG_FLD_GET(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_c, (reg32))
#define SS_LCPLL_TDC_RO_5_GET_ro_lcpll_tdc_dpma_tdc_d(reg32)   REG_FLD_GET(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_d, (reg32))
#define SS_LCPLL_TDC_RO_5_GET_ro_lcpll_tdc_dpma_tdc_leadlag(reg32) REG_FLD_GET(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_leadlag, (reg32))

#define SS_LCPLL_TDC_CTRL_0_GET_rg_lcpll_ki_hold(reg32)        REG_FLD_GET(SS_LCPLL_TDC_CTRL_0_FLD_rg_lcpll_ki_hold, (reg32))

#define SS_LCPLL_0_GET_tdc_sync_pcw_ncpo_chg(reg32)            REG_FLD_GET(SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg, (reg32))
#define SS_LCPLL_0_GET_eee_lcpll_hold(reg32)                   REG_FLD_GET(SS_LCPLL_0_FLD_eee_lcpll_hold, (reg32))

#define SS_LCPLL_1_GET_tdc_sync_pcw_ncpo(reg32)                REG_FLD_GET(SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo, (reg32))

#define SS_LCPLL_2_GET_lcpll_top_flagh_en(reg32)               REG_FLD_GET(SS_LCPLL_2_FLD_lcpll_top_flagh_en, (reg32))
#define SS_LCPLL_2_GET_lcpll_top_flagl_en(reg32)               REG_FLD_GET(SS_LCPLL_2_FLD_lcpll_top_flagl_en, (reg32))
#define SS_LCPLL_2_GET_flagh_sel(reg32)                        REG_FLD_GET(SS_LCPLL_2_FLD_flagh_sel, (reg32))
#define SS_LCPLL_2_GET_flagl_sel(reg32)                        REG_FLD_GET(SS_LCPLL_2_FLD_flagl_sel, (reg32))

#define TDC_DLF_GAIN_STATUS_GET_ro_dlf_gain_rund_new(reg32)    REG_FLD_GET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new, (reg32))
#define TDC_DLF_GAIN_STATUS_GET_ro_dlf_gain_new(reg32)         REG_FLD_GET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new, (reg32))

#define TDC_DLF_MODE_SETTING_GET_rg_dlf_gain_latch(reg32)      REG_FLD_GET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch, (reg32))
#define TDC_DLF_MODE_SETTING_GET_rg_dlf_mode_sel(reg32)        REG_FLD_GET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel, (reg32))
#define TDC_DLF_MODE_SETTING_GET_ro_dlf_gain_new_org(reg32)    REG_FLD_GET(TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org, (reg32))

#define TDC_HOLD_CTRL_0_GET_rg_ncpo_hold_en(reg32)             REG_FLD_GET(TDC_HOLD_CTRL_0_FLD_rg_ncpo_hold_en, (reg32))
#define TDC_HOLD_CTRL_0_GET_rg_ncpo_toggle(reg32)              REG_FLD_GET(TDC_HOLD_CTRL_0_FLD_rg_ncpo_toggle, (reg32))
#define TDC_HOLD_CTRL_0_GET_rg_tdc_los_hold_mux(reg32)         REG_FLD_GET(TDC_HOLD_CTRL_0_FLD_rg_tdc_los_hold_mux, (reg32))
#define TDC_HOLD_CTRL_0_GET_rg_tdc_ncpo_hold_release_time(reg32) REG_FLD_GET(TDC_HOLD_CTRL_0_FLD_rg_tdc_ncpo_hold_release_time, (reg32))

#define TDC_HOLD_CTRL_1_GET_rg_ncpo_up_thred(reg32)            REG_FLD_GET(TDC_HOLD_CTRL_1_FLD_rg_ncpo_up_thred, (reg32))

#define TDC_HOLD_CTRL_2_GET_rg_ncpo_dwn_thred(reg32)           REG_FLD_GET(TDC_HOLD_CTRL_2_FLD_rg_ncpo_dwn_thred, (reg32))

#define TDC_HOLD_STATUS_0_GET_ro_ncpo_output(reg32)            REG_FLD_GET(TDC_HOLD_STATUS_0_FLD_ro_ncpo_output, (reg32))

#define TDC_HOLD_STATUS_1_GET_ro_ncpo_max_output(reg32)        REG_FLD_GET(TDC_HOLD_STATUS_1_FLD_ro_ncpo_max_output, (reg32))

#define TDC_HOLD_STATUS_2_GET_ro_ncpo_min_output(reg32)        REG_FLD_GET(TDC_HOLD_STATUS_2_FLD_ro_ncpo_min_output, (reg32))

#define TDC_CLR_0_GET_rg_ncpo_flag_clr(reg32)                  REG_FLD_GET(TDC_CLR_0_FLD_rg_ncpo_flag_clr, (reg32))
#define TDC_CLR_0_GET_rg_ncpo_clr(reg32)                       REG_FLD_GET(TDC_CLR_0_FLD_rg_ncpo_clr, (reg32))

#define INTF_CTRL_0_GET_rg_ad_qp_tdc_leadlag_sel(reg32)        REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_tdc_leadlag_force(reg32)      REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_pll_ssc_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_pll_ssc_en_force(reg32)       REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_pll_ssc_dir_sel(reg32)        REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_pll_ssc_dir_force(reg32)      REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_pll_vcocal_cplt_sel(reg32)    REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_pll_vcocal_cplt_force(reg32)  REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_pcie_ckdet_out_sel(reg32)        REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_pcie_ckdet_out_force(reg32)      REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_tx_cmdet_sel(reg32)           REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_tx_cmdet_force(reg32)         REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_termcal_dir_sel(reg32)        REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_termcal_dir_force(reg32)      REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_pr_vco_overspeed_sel(reg32) REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_pr_vco_overspeed_force(reg32) REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_pr_fll_dig_rstb_sel(reg32) REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_pr_fll_dig_rstb_force(reg32) REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_lpf_oneshot_trig_sel(reg32) REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_lpf_oneshot_trig_force(reg32) REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_pi_pderr_sel(reg32)       REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_cdr_pi_pderr_force(reg32)     REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_crsdet_lthout_sel(reg32)      REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_crsdet_lthout_force(reg32)    REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_crsdet_out_sel(reg32)         REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_crsdet_out_force(reg32)       REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_rx_lfps_sel(reg32)            REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_rx_lfps_force(reg32)          REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_sigdet_cal_out_sel(reg32)     REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_sigdet_cal_out_force(reg32)   REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_force, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_sigdet_out_sel(reg32)         REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_sel, (reg32))
#define INTF_CTRL_0_GET_rg_ad_qp_sigdet_out_force(reg32)       REG_FLD_GET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_force, (reg32))

#define INTF_CTRL_1_GET_rg_ad_qp_tdc_c_sel(reg32)              REG_FLD_GET(INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_sel, (reg32))
#define INTF_CTRL_1_GET_rg_ad_qp_tdc_c_force(reg32)            REG_FLD_GET(INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_force, (reg32))
#define INTF_CTRL_1_GET_rg_ad_qp_pll_vcocal_state_sel(reg32)   REG_FLD_GET(INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_sel, (reg32))
#define INTF_CTRL_1_GET_rg_ad_qp_pll_vcocal_state_force(reg32) REG_FLD_GET(INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_force, (reg32))

#define INTF_CTRL_2_GET_rg_ad_qp_tdc_d_sel(reg32)              REG_FLD_GET(INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_sel, (reg32))
#define INTF_CTRL_2_GET_rg_ad_qp_tdc_d_force(reg32)            REG_FLD_GET(INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_force, (reg32))

#define INTF_CTRL_3_GET_rg_ad_qp_cdr_lpf_snapshotvalue_sel(reg32) REG_FLD_GET(INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_sel, (reg32))
#define INTF_CTRL_3_GET_rg_ad_qp_cdr_lpf_snapshotvalue_force(reg32) REG_FLD_GET(INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_force, (reg32))

#define INTF_CTRL_4_GET_rg_ad_qp_cdr_pr_adc_sel(reg32)         REG_FLD_GET(INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_sel, (reg32))
#define INTF_CTRL_4_GET_rg_ad_qp_cdr_pr_adc_force(reg32)       REG_FLD_GET(INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_force, (reg32))

#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_lpf_r_en_sel(reg32)    REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_lpf_r_en_force(reg32)  REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_lpf_c_en_sel(reg32)    REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_lpf_c_en_force(reg32)  REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_kband_rstb_sel(reg32)  REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_kband_rstb_force(reg32) REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_pwdb_sel(reg32)        REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_pr_pwdb_force(reg32)      REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_lck2data_sel(reg32)       REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_lck2data_force(reg32)     REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_lpf_rstb_sel(reg32)       REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_cdr_lpf_rstb_force(reg32)     REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_scan_sel(reg32)            REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_scan_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_scan_force(reg32)          REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_scan_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_crsdet_rstb_sel(reg32)        REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_crsdet_rstb_force(reg32)      REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_saosc_en_sel(reg32)        REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_saosc_en_force(reg32)      REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_crsdet_en_sel(reg32)          REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_crsdet_en_force(reg32)        REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_sigdet_cal_en_sel(reg32)      REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_sigdet_cal_en_force(reg32)    REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_sigdet_en_sel(reg32)          REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_sigdet_en_force(reg32)        REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_p3_entry_sel(reg32)        REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_p3_entry_force(reg32)      REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_hz_sel(reg32)              REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_hz_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_hz_force(reg32)            REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_hz_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_afe_pwd_sel(reg32)         REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_rx_afe_pwd_force(reg32)       REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_force, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_lfps_pwd_sel(reg32)           REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_sel, (reg32))
#define INTF_CTRL_5_GET_rg_da_qp_lfps_pwd_force(reg32)         REG_FLD_GET(INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_force, (reg32))

#define INTF_CTRL_6_GET_rg_da_qp_xtal_rx_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_xtal_rx_en_force(reg32)       REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_pcie_clktx_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_pcie_clktx_en_force(reg32)       REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_pcie_clkrx_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_pcie_clkrx_en_force(reg32)       REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_bg_lpf_en_sel(reg32)          REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_bg_lpf_en_force(reg32)        REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_bias_en_sel(reg32)            REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_bias_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_bias_en_force(reg32)          REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_bias_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_lfps_sel(reg32)            REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_lfps_force(reg32)          REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_lfps_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_lfps_en_force(reg32)       REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_eidle_lp_en_sel(reg32)     REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_eidle_lp_en_force(reg32)   REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_ser_en_sel(reg32)          REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_ser_en_force(reg32)        REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_data_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_data_en_force(reg32)       REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_rxdet_en_sel(reg32)           REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_rxdet_en_force(reg32)         REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_impcalib_en_sel(reg32)     REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_impcalib_en_force(reg32)   REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_drv_en_sel(reg32)          REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_drv_en_force(reg32)        REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_term_vref_sel_sel(reg32)   REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_tx_term_vref_sel_force(reg32) REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_cdr_pd_pwdb_sel(reg32)        REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_cdr_pd_pwdb_force(reg32)      REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_force, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_cdr_pr_pieye_pwdb_sel(reg32)  REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_sel, (reg32))
#define INTF_CTRL_6_GET_rg_da_qp_cdr_pr_pieye_pwdb_force(reg32) REG_FLD_GET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_force, (reg32))

#define INTF_CTRL_7_GET_rg_da_qp_tdc_cal_offset_sel(reg32)     REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_tdc_cal_offset_force(reg32)   REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_tdc_cal_bw_sel(reg32)         REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_tdc_cal_bw_force(reg32)       REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_tdc_txck_sel_sel(reg32)   REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_tdc_txck_sel_force(reg32) REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_icolp_en_sel(reg32)       REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_icolp_en_force(reg32)     REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_ssc_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_ssc_en_force(reg32)       REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_sdm_ifm_sel(reg32)        REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_sdm_ifm_force(reg32)      REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_sdm_chg_sel(reg32)        REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_sdm_chg_force(reg32)      REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_rico_sel_sel(reg32)       REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_rico_sel_force(reg32)     REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_postdiv_en_sel(reg32)     REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_postdiv_en_force(reg32)   REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_phy_ck_en_sel(reg32)      REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_phy_ck_en_force(reg32)    REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_pfd_offset_en_sel(reg32)  REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_pfd_offset_en_force(reg32) REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_pck_sel_sel(reg32)        REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_pck_sel_force(reg32)      REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_icoiq_en_sel(reg32)       REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_icoiq_en_force(reg32)     REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_en_sel(reg32)             REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_en_force(reg32)           REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_sdm_di_en_sel(reg32)      REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_qp_pll_sdm_di_en_force(reg32)    REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_force, (reg32))
#define INTF_CTRL_7_GET_rg_da_pcie_ckdet_en_sel(reg32)         REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_sel, (reg32))
#define INTF_CTRL_7_GET_rg_da_pcie_ckdet_en_force(reg32)       REG_FLD_GET(INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_force, (reg32))

#define INTF_CTRL_8_GET_rg_da_qp_pll_sdm_hren_sel(reg32)       REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_sdm_hren_force(reg32)     REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_pfd_offset_sel(reg32)     REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_pfd_offset_force(reg32)   REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_kband_prediv_sel(reg32)   REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_kband_prediv_force(reg32) REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_fbksel_sel(reg32)         REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_fbksel_force(reg32)       REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_bpb_sel(reg32)            REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_bpb_force(reg32)          REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_bc_sel(reg32)             REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_bc_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_pll_bc_force(reg32)           REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_pll_bc_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_xtal_ext_en_sel(reg32)        REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_xtal_ext_en_force(reg32)      REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_tx_dem_sel(reg32)             REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_tx_dem_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_tx_dem_force(reg32)           REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_tx_dem_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_tx_term_sel_sel(reg32)        REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_tx_term_sel_force(reg32)      REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_lfps_deglitch_sel(reg32)      REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_lfps_deglitch_force(reg32)    REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_force, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_tdc_en_sel(reg32)             REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_tdc_en_sel, (reg32))
#define INTF_CTRL_8_GET_rg_da_qp_tdc_en_force(reg32)           REG_FLD_GET(INTF_CTRL_8_FLD_rg_da_qp_tdc_en_force, (reg32))

#define INTF_CTRL_9_GET_rg_da_qp_rx_imp_sel_sel(reg32)         REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_rx_imp_sel_force(reg32)       REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_force, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_ir_sel(reg32)             REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_ir_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_ir_force(reg32)           REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_ir_force, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_rx_dcleq_sel(reg32)           REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_rx_dcleq_force(reg32)         REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_force, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_br_sel(reg32)             REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_br_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_br_force(reg32)           REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_br_force, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_bpa_sel(reg32)            REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_bpa_force(reg32)          REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_force, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_tx_fir_cn1_sel(reg32)         REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_tx_fir_cn1_force(reg32)       REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_force, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_ssc_dir_dly_sel(reg32)    REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_sel, (reg32))
#define INTF_CTRL_9_GET_rg_da_qp_pll_ssc_dir_dly_force(reg32)  REG_FLD_GET(INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_force, (reg32))

#define INTF_CTRL_10_GET_rg_da_qp_tx_fir_c2_sel(reg32)         REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_sel, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_tx_fir_c2_force(reg32)       REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_force, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_tx_fir_c1_sel(reg32)         REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_sel, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_tx_fir_c1_force(reg32)       REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_force, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_cdr_pr_fll_cor_sel(reg32)    REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_sel, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_cdr_pr_fll_cor_force(reg32)  REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_force, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_sigdet_cal_offset_sel(reg32) REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_sel, (reg32))
#define INTF_CTRL_10_GET_rg_da_qp_sigdet_cal_offset_force(reg32) REG_FLD_GET(INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_force, (reg32))

#define INTF_CTRL_11_GET_rg_da_qp_cdr_pr_idac_sel(reg32)       REG_FLD_GET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_sel, (reg32))
#define INTF_CTRL_11_GET_rg_da_qp_cdr_pr_idac_force(reg32)     REG_FLD_GET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_force, (reg32))
#define INTF_CTRL_11_GET_rg_da_qp_cdr_pr_pieye_sel(reg32)      REG_FLD_GET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_sel, (reg32))
#define INTF_CTRL_11_GET_rg_da_qp_cdr_pr_pieye_force(reg32)    REG_FLD_GET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_force, (reg32))
#define INTF_CTRL_11_GET_rg_da_qp_tx_fir_c0b_sel(reg32)        REG_FLD_GET(INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_sel, (reg32))
#define INTF_CTRL_11_GET_rg_da_qp_tx_fir_c0b_force(reg32)      REG_FLD_GET(INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_force, (reg32))

#define INTF_CTRL_12_GET_rg_da_qp_pll_ssc_delta_sel(reg32)     REG_FLD_GET(INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_sel, (reg32))
#define INTF_CTRL_12_GET_rg_da_qp_pll_ssc_delta_force(reg32)   REG_FLD_GET(INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_force, (reg32))

#define INTF_CTRL_13_GET_rg_da_qp_pll_ssc_period_sel(reg32)    REG_FLD_GET(INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_sel, (reg32))
#define INTF_CTRL_13_GET_rg_da_qp_pll_ssc_period_force(reg32)  REG_FLD_GET(INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_force, (reg32))

#define INTF_CTRL_14_GET_rg_da_qp_pll_sdm_pcw_force_31_0(reg32) REG_FLD_GET(INTF_CTRL_14_FLD_rg_da_qp_pll_sdm_pcw_force_31_0, (reg32))

#define INTF_CTRL_15_GET_rg_da_qp_pll_sdm_pcw_sel(reg32)       REG_FLD_GET(INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_sel, (reg32))
#define INTF_CTRL_15_GET_rg_da_qp_pll_sdm_pcw_force_33_32(reg32) REG_FLD_GET(INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_force_33_32, (reg32))
#define INTF_CTRL_15_GET_rg_da_qp_tx_data_sel(reg32)           REG_FLD_GET(INTF_CTRL_15_FLD_rg_da_qp_tx_data_sel, (reg32))
#define INTF_CTRL_15_GET_rg_da_qp_tx_data_force(reg32)         REG_FLD_GET(INTF_CTRL_15_FLD_rg_da_qp_tx_data_force, (reg32))

#define INTF_STS_0_GET_ro_da_qp_xtal_rx_en(reg32)              REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_xtal_rx_en, (reg32))
#define INTF_STS_0_GET_ro_da_pcie_clktx_en(reg32)              REG_FLD_GET(INTF_STS_0_FLD_ro_da_pcie_clktx_en, (reg32))
#define INTF_STS_0_GET_ro_da_pcie_clkrx_en(reg32)              REG_FLD_GET(INTF_STS_0_FLD_ro_da_pcie_clkrx_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_bg_lpf_en(reg32)               REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_bg_lpf_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_bias_en(reg32)                 REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_bias_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_lfps(reg32)                 REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_lfps, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_lfps_en(reg32)              REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_lfps_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_eidle_lp_en(reg32)          REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_eidle_lp_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_ser_en(reg32)               REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_ser_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_data_en(reg32)              REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_data_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_rxdet_en(reg32)                REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_rxdet_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_impcalib_en(reg32)          REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_impcalib_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_drv_en(reg32)               REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_drv_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_tx_term_vref_sel(reg32)        REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_tx_term_vref_sel, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_pd_pwdb(reg32)             REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_pd_pwdb, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_pr_pieye_pwdb(reg32)       REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_pieye_pwdb, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_pr_lpf_r_en(reg32)         REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_r_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_pr_lpf_c_en(reg32)         REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_c_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_pr_kband_rstb(reg32)       REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_kband_rstb, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_pr_pwdb(reg32)             REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_pwdb, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_lck2data(reg32)            REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_lck2data, (reg32))
#define INTF_STS_0_GET_ro_da_qp_cdr_lpf_rstb(reg32)            REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_cdr_lpf_rstb, (reg32))
#define INTF_STS_0_GET_ro_da_qp_rx_scan(reg32)                 REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_rx_scan, (reg32))
#define INTF_STS_0_GET_ro_da_qp_crsdet_rstb(reg32)             REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_crsdet_rstb, (reg32))
#define INTF_STS_0_GET_ro_da_qp_rx_saosc_en(reg32)             REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_rx_saosc_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_crsdet_en(reg32)               REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_crsdet_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_sigdet_cal_en(reg32)           REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_sigdet_cal_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_sigdet_en(reg32)               REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_sigdet_en, (reg32))
#define INTF_STS_0_GET_ro_da_qp_rx_p3_entry(reg32)             REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_rx_p3_entry, (reg32))
#define INTF_STS_0_GET_ro_da_qp_rx_hz(reg32)                   REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_rx_hz, (reg32))
#define INTF_STS_0_GET_ro_da_qp_rx_afe_pwd(reg32)              REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_rx_afe_pwd, (reg32))
#define INTF_STS_0_GET_ro_da_qp_lfps_pwd(reg32)                REG_FLD_GET(INTF_STS_0_FLD_ro_da_qp_lfps_pwd, (reg32))

#define INTF_STS_1_GET_ro_da_qp_pll_fbksel(reg32)              REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_fbksel, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_bpb(reg32)                 REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_bpb, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_bc(reg32)                  REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_bc, (reg32))
#define INTF_STS_1_GET_ro_da_qp_xtal_ext_en(reg32)             REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_xtal_ext_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_tx_dem(reg32)                  REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_tx_dem, (reg32))
#define INTF_STS_1_GET_ro_da_qp_tx_term_sel(reg32)             REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_tx_term_sel, (reg32))
#define INTF_STS_1_GET_ro_da_qp_lfps_deglitch(reg32)           REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_lfps_deglitch, (reg32))
#define INTF_STS_1_GET_ro_da_qp_tdc_en(reg32)                  REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_tdc_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_tdc_cal_offset(reg32)          REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_tdc_cal_offset, (reg32))
#define INTF_STS_1_GET_ro_da_qp_tdc_cal_bw(reg32)              REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_tdc_cal_bw, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_tdc_txck_sel(reg32)        REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_tdc_txck_sel, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_icolp_en(reg32)            REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_icolp_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_ssc_en(reg32)              REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_ssc_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_sdm_ifm(reg32)             REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_sdm_ifm, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_sdm_chg(reg32)             REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_sdm_chg, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_rico_sel(reg32)            REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_rico_sel, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_postdiv_en(reg32)          REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_postdiv_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_phy_ck_en(reg32)           REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_phy_ck_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_pfd_offset_en(reg32)       REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_pfd_offset_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_pck_sel(reg32)             REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_pck_sel, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_icoiq_en(reg32)            REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_icoiq_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_en(reg32)                  REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_en, (reg32))
#define INTF_STS_1_GET_ro_da_qp_pll_sdm_di_en(reg32)           REG_FLD_GET(INTF_STS_1_FLD_ro_da_qp_pll_sdm_di_en, (reg32))
#define INTF_STS_1_GET_ro_da_pcie_ckdet_en(reg32)              REG_FLD_GET(INTF_STS_1_FLD_ro_da_pcie_ckdet_en, (reg32))

#define INTF_STS_2_GET_ro_da_qp_pll_ir(reg32)                  REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_ir, (reg32))
#define INTF_STS_2_GET_ro_da_qp_rx_dcleq(reg32)                REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_rx_dcleq, (reg32))
#define INTF_STS_2_GET_ro_da_qp_pll_br(reg32)                  REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_br, (reg32))
#define INTF_STS_2_GET_ro_da_qp_pll_bpa(reg32)                 REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_bpa, (reg32))
#define INTF_STS_2_GET_ro_da_qp_tx_fir_cn1(reg32)              REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_tx_fir_cn1, (reg32))
#define INTF_STS_2_GET_ro_da_qp_pll_ssc_dir_dly(reg32)         REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_ssc_dir_dly, (reg32))
#define INTF_STS_2_GET_ro_da_qp_pll_sdm_hren(reg32)            REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_sdm_hren, (reg32))
#define INTF_STS_2_GET_ro_da_qp_pll_pfd_offset(reg32)          REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_pfd_offset, (reg32))
#define INTF_STS_2_GET_ro_da_qp_pll_kband_prediv(reg32)        REG_FLD_GET(INTF_STS_2_FLD_ro_da_qp_pll_kband_prediv, (reg32))

#define INTF_STS_3_GET_ro_da_qp_tx_fir_c1(reg32)               REG_FLD_GET(INTF_STS_3_FLD_ro_da_qp_tx_fir_c1, (reg32))
#define INTF_STS_3_GET_ro_da_qp_cdr_pr_fll_cor(reg32)          REG_FLD_GET(INTF_STS_3_FLD_ro_da_qp_cdr_pr_fll_cor, (reg32))
#define INTF_STS_3_GET_ro_da_qp_sigdet_cal_offset(reg32)       REG_FLD_GET(INTF_STS_3_FLD_ro_da_qp_sigdet_cal_offset, (reg32))
#define INTF_STS_3_GET_ro_da_qp_rx_imp_sel(reg32)              REG_FLD_GET(INTF_STS_3_FLD_ro_da_qp_rx_imp_sel, (reg32))

#define INTF_STS_4_GET_ro_da_qp_cdr_pr_pieye(reg32)            REG_FLD_GET(INTF_STS_4_FLD_ro_da_qp_cdr_pr_pieye, (reg32))
#define INTF_STS_4_GET_ro_da_qp_tx_fir_c0b(reg32)              REG_FLD_GET(INTF_STS_4_FLD_ro_da_qp_tx_fir_c0b, (reg32))
#define INTF_STS_4_GET_ro_da_qp_tx_fir_c2(reg32)               REG_FLD_GET(INTF_STS_4_FLD_ro_da_qp_tx_fir_c2, (reg32))

#define INTF_STS_5_GET_ro_da_qp_cdr_pr_idac(reg32)             REG_FLD_GET(INTF_STS_5_FLD_ro_da_qp_cdr_pr_idac, (reg32))

#define INTF_STS_6_GET_ro_da_qp_pll_ssc_period(reg32)          REG_FLD_GET(INTF_STS_6_FLD_ro_da_qp_pll_ssc_period, (reg32))
#define INTF_STS_6_GET_ro_da_qp_pll_ssc_delta(reg32)           REG_FLD_GET(INTF_STS_6_FLD_ro_da_qp_pll_ssc_delta, (reg32))

#define INTF_STS_7_GET_ro_da_qp_tx_data(reg32)                 REG_FLD_GET(INTF_STS_7_FLD_ro_da_qp_tx_data, (reg32))

#define INTF_STS_8_GET_ro_da_qp_pll_sdm_pcw_31_0(reg32)        REG_FLD_GET(INTF_STS_8_FLD_ro_da_qp_pll_sdm_pcw_31_0, (reg32))

#define INTF_STS_9_GET_ro_ad_qp_tdc_c_intf(reg32)              REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_tdc_c_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_pll_vcocal_state_intf(reg32)   REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_pll_vcocal_state_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_tdc_leadlag_intf(reg32)        REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_tdc_leadlag_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_pll_ssc_en_intf(reg32)         REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_pll_ssc_en_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_pll_ssc_dir_intf(reg32)        REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_pll_ssc_dir_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_pcie_ckdet_out_intf(reg32)        REG_FLD_GET(INTF_STS_9_FLD_ro_ad_pcie_ckdet_out_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_tx_cmdet_intf(reg32)           REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_tx_cmdet_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_termcal_dir_intf(reg32)        REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_termcal_dir_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_cdr_pr_vco_overspeed_intf(reg32) REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_cdr_pr_vco_overspeed_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_cdr_pr_fll_dig_rstb_intf(reg32) REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_cdr_pr_fll_dig_rstb_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_cdr_lpf_oneshot_trig_intf(reg32) REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_cdr_lpf_oneshot_trig_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_cdr_pi_pderr_intf(reg32)       REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_cdr_pi_pderr_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_crsdet_lthout_intf(reg32)      REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_crsdet_lthout_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_crsdet_out_intf(reg32)         REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_crsdet_out_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_rx_lfps_intf(reg32)            REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_rx_lfps_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_sigdet_cal_out_intf(reg32)     REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_sigdet_cal_out_intf, (reg32))
#define INTF_STS_9_GET_ro_ad_qp_sigdet_out_intf(reg32)         REG_FLD_GET(INTF_STS_9_FLD_ro_ad_qp_sigdet_out_intf, (reg32))

#define INTF_STS_10_GET_ro_ad_qp_tdc_d_intf(reg32)             REG_FLD_GET(INTF_STS_10_FLD_ro_ad_qp_tdc_d_intf, (reg32))

#define INTF_STS_11_GET_ro_ad_qp_cdr_lpf_snapshotvalue_intf(reg32) REG_FLD_GET(INTF_STS_11_FLD_ro_ad_qp_cdr_lpf_snapshotvalue_intf, (reg32))

#define INTF_STS_12_GET_ro_ad_qp_cdr_pr_adc_intf(reg32)        REG_FLD_GET(INTF_STS_12_FLD_ro_ad_qp_cdr_pr_adc_intf, (reg32))

#define PLL_CTRL_0_GET_rg_da_pll_en_dly_cnt(reg32)             REG_FLD_GET(PLL_CTRL_0_FLD_rg_da_pll_en_dly_cnt, (reg32))
#define PLL_CTRL_0_GET_rg_da_pll_en_mux(reg32)                 REG_FLD_GET(PLL_CTRL_0_FLD_rg_da_pll_en_mux, (reg32))
#define PLL_CTRL_0_GET_rg_da_pll_en(reg32)                     REG_FLD_GET(PLL_CTRL_0_FLD_rg_da_pll_en, (reg32))
#define PLL_CTRL_0_GET_rg_force_da_pll_en(reg32)               REG_FLD_GET(PLL_CTRL_0_FLD_rg_force_da_pll_en, (reg32))
#define PLL_CTRL_0_GET_rg_rx_pwd(reg32)                        REG_FLD_GET(PLL_CTRL_0_FLD_rg_rx_pwd, (reg32))
#define PLL_CTRL_0_GET_rg_rx_pwd_mux(reg32)                    REG_FLD_GET(PLL_CTRL_0_FLD_rg_rx_pwd_mux, (reg32))
#define PLL_CTRL_0_GET_rg_tx_disable(reg32)                    REG_FLD_GET(PLL_CTRL_0_FLD_rg_tx_disable, (reg32))
#define PLL_CTRL_0_GET_rg_tx_disable_mux(reg32)                REG_FLD_GET(PLL_CTRL_0_FLD_rg_tx_disable_mux, (reg32))
#define PLL_CTRL_0_GET_rg_phya_pwd(reg32)                      REG_FLD_GET(PLL_CTRL_0_FLD_rg_phya_pwd, (reg32))
#define PLL_CTRL_0_GET_rg_phya_pwd_mux(reg32)                  REG_FLD_GET(PLL_CTRL_0_FLD_rg_phya_pwd_mux, (reg32))
#define PLL_CTRL_0_GET_rg_phya_auto_init(reg32)                REG_FLD_GET(PLL_CTRL_0_FLD_rg_phya_auto_init, (reg32))

#define PLL_CTRL_1_GET_rg_qp_pll_ssc_en(reg32)                 REG_FLD_GET(PLL_CTRL_1_FLD_rg_qp_pll_ssc_en, (reg32))
#define PLL_CTRL_1_GET_rg_pll_autok_vco_to_pll_bias_lpf_en_dly(reg32) REG_FLD_GET(PLL_CTRL_1_FLD_rg_pll_autok_vco_to_pll_bias_lpf_en_dly, (reg32))
#define PLL_CTRL_1_GET_rg_syspll_pwd_to_syspll_ready_dly(reg32) REG_FLD_GET(PLL_CTRL_1_FLD_rg_syspll_pwd_to_syspll_ready_dly, (reg32))
#define PLL_CTRL_1_GET_rg_bias_pwd_to_bg_lpf_en_dly(reg32)     REG_FLD_GET(PLL_CTRL_1_FLD_rg_bias_pwd_to_bg_lpf_en_dly, (reg32))
#define PLL_CTRL_1_GET_rg_lpf_en_to_ssc_dly_cnt(reg32)         REG_FLD_GET(PLL_CTRL_1_FLD_rg_lpf_en_to_ssc_dly_cnt, (reg32))

#define PLL_CTRL_2_GET_rg_da_qp_pll_sdm_ifm_intf(reg32)        REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_sdm_ifm_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_rico_sel_intf(reg32)       REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_rico_sel_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_postdiv_en_intf(reg32)     REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_postdiv_en_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_phy_ck_en_intf(reg32)      REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_phy_ck_en_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_pfd_offset_en_intf(reg32)  REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_en_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_pfd_offset_intf(reg32)     REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_pck_sel_intf(reg32)        REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_pck_sel_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_kband_prediv_intf(reg32)   REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_kband_prediv_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_ir_intf(reg32)             REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_ir_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_icoiq_en_intf(reg32)       REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_icoiq_en_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_fbksel_intf(reg32)         REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_fbksel_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_br_intf(reg32)             REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_br_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_bpb_intf(reg32)            REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_bpb_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_bpa_intf(reg32)            REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_bpa_intf, (reg32))
#define PLL_CTRL_2_GET_rg_da_qp_pll_bc_intf(reg32)             REG_FLD_GET(PLL_CTRL_2_FLD_rg_da_qp_pll_bc_intf, (reg32))

#define PLL_CTRL_3_GET_rg_da_qp_pll_ssc_period_intf(reg32)     REG_FLD_GET(PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_period_intf, (reg32))
#define PLL_CTRL_3_GET_rg_da_qp_pll_ssc_delta_intf(reg32)      REG_FLD_GET(PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_delta_intf, (reg32))

#define PLL_CTRL_4_GET_rg_da_qp_pll_sdm_hren_intf(reg32)       REG_FLD_GET(PLL_CTRL_4_FLD_rg_da_qp_pll_sdm_hren_intf, (reg32))
#define PLL_CTRL_4_GET_rg_da_qp_pll_icolp_en_intf(reg32)       REG_FLD_GET(PLL_CTRL_4_FLD_rg_da_qp_pll_icolp_en_intf, (reg32))
#define PLL_CTRL_4_GET_rg_da_qp_pll_ssc_dir_dly_intf(reg32)    REG_FLD_GET(PLL_CTRL_4_FLD_rg_da_qp_pll_ssc_dir_dly_intf, (reg32))

#define PLL_CK_CTRL_0_GET_rg_da_qp_pll_tdc_txck_sel_intf(reg32) REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_qp_pll_tdc_txck_sel_intf, (reg32))
#define PLL_CK_CTRL_0_GET_rg_da_qp_pll_sdm_di_en_intf(reg32)   REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_qp_pll_sdm_di_en_intf, (reg32))
#define PLL_CK_CTRL_0_GET_rg_da_pcie_ckdet_en_intf(reg32)      REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_pcie_ckdet_en_intf, (reg32))
#define PLL_CK_CTRL_0_GET_rg_da_qp_xtal_rx_en_intf(reg32)      REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_rx_en_intf, (reg32))
#define PLL_CK_CTRL_0_GET_rg_da_pcie_clktx_en_intf(reg32)      REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_pcie_clktx_en_intf, (reg32))
#define PLL_CK_CTRL_0_GET_rg_da_pcie_clkrx_en_intf(reg32)      REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_pcie_clkrx_en_intf, (reg32))
#define PLL_CK_CTRL_0_GET_rg_da_qp_xtal_ext_en_intf(reg32)     REG_FLD_GET(PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_ext_en_intf, (reg32))

#define PLL_CK_CTRL_1_GET_rg_pll_stable_source_sel(reg32)      REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_stable_source_sel, (reg32))
#define PLL_CK_CTRL_1_GET_rg_pll_force_unstable(reg32)         REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_force_unstable, (reg32))
#define PLL_CK_CTRL_1_GET_rg_pll_force_stable(reg32)           REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_force_stable, (reg32))
#define PLL_CK_CTRL_1_GET_rg_pll_cplt_force_off(reg32)         REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_off, (reg32))
#define PLL_CK_CTRL_1_GET_rg_pll_cplt_force_on(reg32)          REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_on, (reg32))
#define PLL_CK_CTRL_1_GET_rg_pll_cplt_stabel_cnt(reg32)        REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_cplt_stabel_cnt, (reg32))
#define PLL_CK_CTRL_1_GET_rg_pll_stabel_cnt(reg32)             REG_FLD_GET(PLL_CK_CTRL_1_FLD_rg_pll_stabel_cnt, (reg32))

#define PLL_CK_CTRL_2_GET_rg_pcie_mode_pll_auto_off_en(reg32)  REG_FLD_GET(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_off_en, (reg32))
#define PLL_CK_CTRL_2_GET_rg_pcie_mode_pll_auto_on_en(reg32)   REG_FLD_GET(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_on_en, (reg32))
#define PLL_CK_CTRL_2_GET_rg_pcie_mode_pll_auto_en(reg32)      REG_FLD_GET(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_en, (reg32))

#define SYS_CTRL_0_GET_rg_freq_meter_rtl_modified(reg32)       REG_FLD_GET(SYS_CTRL_0_FLD_rg_freq_meter_rtl_modified, (reg32))
#define SYS_CTRL_0_GET_rg_qp_gdump_sel(reg32)                  REG_FLD_GET(SYS_CTRL_0_FLD_rg_qp_gdump_sel, (reg32))
#define SYS_CTRL_0_GET_rg_qp_pma_top_int_en(reg32)             REG_FLD_GET(SYS_CTRL_0_FLD_rg_qp_pma_top_int_en, (reg32))

#define SYS_CTRL_1_GET_rg_force_rg_vusb10_on_sel(reg32)        REG_FLD_GET(SYS_CTRL_1_FLD_rg_force_rg_vusb10_on_sel, (reg32))
#define SYS_CTRL_1_GET_rg_tx_short_fifo_disb(reg32)            REG_FLD_GET(SYS_CTRL_1_FLD_rg_tx_short_fifo_disb, (reg32))
#define SYS_CTRL_1_GET_rg_tx_short_fifo_w_thresold(reg32)      REG_FLD_GET(SYS_CTRL_1_FLD_rg_tx_short_fifo_w_thresold, (reg32))
#define SYS_CTRL_1_GET_rg_tx_short_fifo_r_thresold(reg32)      REG_FLD_GET(SYS_CTRL_1_FLD_rg_tx_short_fifo_r_thresold, (reg32))

#define QP_SYS_0_GET_ro_tx_short_fifo_empty(reg32)             REG_FLD_GET(QP_SYS_0_FLD_ro_tx_short_fifo_empty, (reg32))
#define QP_SYS_0_GET_ro_tx_short_fifo_full(reg32)              REG_FLD_GET(QP_SYS_0_FLD_ro_tx_short_fifo_full, (reg32))

#define FT_CTRL_0_GET_rg_ft_freq_meter_relck_num_0(reg32)      REG_FLD_GET(FT_CTRL_0_FLD_rg_ft_freq_meter_relck_num_0, (reg32))
#define FT_CTRL_0_GET_rg_ft_freq_meter_clear_unlck_cnt_0(reg32) REG_FLD_GET(FT_CTRL_0_FLD_rg_ft_freq_meter_clear_unlck_cnt_0, (reg32))
#define FT_CTRL_0_GET_rg_ft_freq_meter_freq_det_en_0(reg32)    REG_FLD_GET(FT_CTRL_0_FLD_rg_ft_freq_meter_freq_det_en_0, (reg32))

#define FT_CTRL_1_GET_rg_ft_freq_meter_relck_num_1(reg32)      REG_FLD_GET(FT_CTRL_1_FLD_rg_ft_freq_meter_relck_num_1, (reg32))
#define FT_CTRL_1_GET_rg_ft_freq_meter_clear_unlck_cnt_1(reg32) REG_FLD_GET(FT_CTRL_1_FLD_rg_ft_freq_meter_clear_unlck_cnt_1, (reg32))
#define FT_CTRL_1_GET_rg_ft_freq_meter_freq_det_en_1(reg32)    REG_FLD_GET(FT_CTRL_1_FLD_rg_ft_freq_meter_freq_det_en_1, (reg32))

#define FT_CTRL_2_GET_rg_ft_freq_meter_relck_num_2(reg32)      REG_FLD_GET(FT_CTRL_2_FLD_rg_ft_freq_meter_relck_num_2, (reg32))
#define FT_CTRL_2_GET_rg_ft_freq_meter_clear_unlck_cnt_2(reg32) REG_FLD_GET(FT_CTRL_2_FLD_rg_ft_freq_meter_clear_unlck_cnt_2, (reg32))
#define FT_CTRL_2_GET_rg_ft_freq_meter_freq_det_en_2(reg32)    REG_FLD_GET(FT_CTRL_2_FLD_rg_ft_freq_meter_freq_det_en_2, (reg32))

#define FT_CTRL_3_GET_rg_ft_freq_meter_relck_num_3(reg32)      REG_FLD_GET(FT_CTRL_3_FLD_rg_ft_freq_meter_relck_num_3, (reg32))
#define FT_CTRL_3_GET_rg_ft_freq_meter_clear_unlck_cnt_3(reg32) REG_FLD_GET(FT_CTRL_3_FLD_rg_ft_freq_meter_clear_unlck_cnt_3, (reg32))
#define FT_CTRL_3_GET_rg_ft_freq_meter_freq_det_en_3(reg32)    REG_FLD_GET(FT_CTRL_3_FLD_rg_ft_freq_meter_freq_det_en_3, (reg32))

#define FT_CTRL_4_GET_rg_ft_freq_meter_relck_num_4(reg32)      REG_FLD_GET(FT_CTRL_4_FLD_rg_ft_freq_meter_relck_num_4, (reg32))
#define FT_CTRL_4_GET_rg_ft_freq_meter_clear_unlck_cnt_4(reg32) REG_FLD_GET(FT_CTRL_4_FLD_rg_ft_freq_meter_clear_unlck_cnt_4, (reg32))
#define FT_CTRL_4_GET_rg_ft_freq_meter_freq_det_en_4(reg32)    REG_FLD_GET(FT_CTRL_4_FLD_rg_ft_freq_meter_freq_det_en_4, (reg32))

#define FT_CTRL_5_GET_rg_ft_freq_meter_relck_num_5(reg32)      REG_FLD_GET(FT_CTRL_5_FLD_rg_ft_freq_meter_relck_num_5, (reg32))
#define FT_CTRL_5_GET_rg_ft_freq_meter_clear_unlck_cnt_5(reg32) REG_FLD_GET(FT_CTRL_5_FLD_rg_ft_freq_meter_clear_unlck_cnt_5, (reg32))
#define FT_CTRL_5_GET_rg_ft_freq_meter_freq_det_en_5(reg32)    REG_FLD_GET(FT_CTRL_5_FLD_rg_ft_freq_meter_freq_det_en_5, (reg32))

#define FT_CTRL_6_GET_rg_ft_freq_meter_relck_num_6(reg32)      REG_FLD_GET(FT_CTRL_6_FLD_rg_ft_freq_meter_relck_num_6, (reg32))
#define FT_CTRL_6_GET_rg_ft_freq_meter_clear_unlck_cnt_6(reg32) REG_FLD_GET(FT_CTRL_6_FLD_rg_ft_freq_meter_clear_unlck_cnt_6, (reg32))
#define FT_CTRL_6_GET_rg_ft_freq_meter_freq_det_en_6(reg32)    REG_FLD_GET(FT_CTRL_6_FLD_rg_ft_freq_meter_freq_det_en_6, (reg32))

#define FT_CTRL_7_GET_rg_ft_freq_meter_relck_num_7(reg32)      REG_FLD_GET(FT_CTRL_7_FLD_rg_ft_freq_meter_relck_num_7, (reg32))
#define FT_CTRL_7_GET_rg_ft_freq_meter_clear_unlck_cnt_7(reg32) REG_FLD_GET(FT_CTRL_7_FLD_rg_ft_freq_meter_clear_unlck_cnt_7, (reg32))
#define FT_CTRL_7_GET_rg_ft_freq_meter_freq_det_en_7(reg32)    REG_FLD_GET(FT_CTRL_7_FLD_rg_ft_freq_meter_freq_det_en_7, (reg32))

#define FT_CTRL_8_GET_rg_ft_freq_meter_relck_num_8(reg32)      REG_FLD_GET(FT_CTRL_8_FLD_rg_ft_freq_meter_relck_num_8, (reg32))
#define FT_CTRL_8_GET_rg_ft_freq_meter_clear_unlck_cnt_8(reg32) REG_FLD_GET(FT_CTRL_8_FLD_rg_ft_freq_meter_clear_unlck_cnt_8, (reg32))
#define FT_CTRL_8_GET_rg_ft_freq_meter_freq_det_en_8(reg32)    REG_FLD_GET(FT_CTRL_8_FLD_rg_ft_freq_meter_freq_det_en_8, (reg32))

#define FT_CTRL_9_GET_rg_ft_freq_meter_chk_cycle_0(reg32)      REG_FLD_GET(FT_CTRL_9_FLD_rg_ft_freq_meter_chk_cycle_0, (reg32))

#define FT_CTRL_10_GET_rg_ft_freq_meter_chk_cycle_1(reg32)     REG_FLD_GET(FT_CTRL_10_FLD_rg_ft_freq_meter_chk_cycle_1, (reg32))

#define FT_CTRL_11_GET_rg_ft_freq_meter_chk_cycle_2(reg32)     REG_FLD_GET(FT_CTRL_11_FLD_rg_ft_freq_meter_chk_cycle_2, (reg32))

#define FT_CTRL_12_GET_rg_ft_freq_meter_chk_cycle_3(reg32)     REG_FLD_GET(FT_CTRL_12_FLD_rg_ft_freq_meter_chk_cycle_3, (reg32))

#define FT_CTRL_13_GET_rg_ft_freq_meter_chk_cycle_4(reg32)     REG_FLD_GET(FT_CTRL_13_FLD_rg_ft_freq_meter_chk_cycle_4, (reg32))

#define FT_CTRL_14_GET_rg_ft_freq_meter_chk_cycle_5(reg32)     REG_FLD_GET(FT_CTRL_14_FLD_rg_ft_freq_meter_chk_cycle_5, (reg32))

#define FT_CTRL_15_GET_rg_ft_freq_meter_chk_cycle_6(reg32)     REG_FLD_GET(FT_CTRL_15_FLD_rg_ft_freq_meter_chk_cycle_6, (reg32))

#define FT_CTRL_16_GET_rg_ft_freq_meter_chk_cycle_7(reg32)     REG_FLD_GET(FT_CTRL_16_FLD_rg_ft_freq_meter_chk_cycle_7, (reg32))

#define FT_CTRL_17_GET_rg_ft_freq_meter_chk_cycle_8(reg32)     REG_FLD_GET(FT_CTRL_17_FLD_rg_ft_freq_meter_chk_cycle_8, (reg32))

#define FT_CTRL_18_GET_rg_ft_freq_meter_golden_cycle_0(reg32)  REG_FLD_GET(FT_CTRL_18_FLD_rg_ft_freq_meter_golden_cycle_0, (reg32))

#define FT_CTRL_19_GET_rg_ft_freq_meter_golden_cycle_1(reg32)  REG_FLD_GET(FT_CTRL_19_FLD_rg_ft_freq_meter_golden_cycle_1, (reg32))

#define FT_CTRL_20_GET_rg_ft_freq_meter_golden_cycle_2(reg32)  REG_FLD_GET(FT_CTRL_20_FLD_rg_ft_freq_meter_golden_cycle_2, (reg32))

#define FT_CTRL_21_GET_rg_ft_freq_meter_golden_cycle_3(reg32)  REG_FLD_GET(FT_CTRL_21_FLD_rg_ft_freq_meter_golden_cycle_3, (reg32))

#define FT_CTRL_22_GET_rg_ft_freq_meter_golden_cycle_4(reg32)  REG_FLD_GET(FT_CTRL_22_FLD_rg_ft_freq_meter_golden_cycle_4, (reg32))

#define FT_CTRL_23_GET_rg_ft_freq_meter_golden_cycle_5(reg32)  REG_FLD_GET(FT_CTRL_23_FLD_rg_ft_freq_meter_golden_cycle_5, (reg32))

#define FT_CTRL_24_GET_rg_ft_freq_meter_golden_cycle_6(reg32)  REG_FLD_GET(FT_CTRL_24_FLD_rg_ft_freq_meter_golden_cycle_6, (reg32))

#define FT_CTRL_25_GET_rg_ft_freq_meter_golden_cycle_7(reg32)  REG_FLD_GET(FT_CTRL_25_FLD_rg_ft_freq_meter_golden_cycle_7, (reg32))

#define FT_CTRL_26_GET_rg_ft_freq_meter_golden_cycle_8(reg32)  REG_FLD_GET(FT_CTRL_26_FLD_rg_ft_freq_meter_golden_cycle_8, (reg32))

#define FT_CTRL_27_GET_rg_ft_freq_meter_tolerate_cycle_0(reg32) REG_FLD_GET(FT_CTRL_27_FLD_rg_ft_freq_meter_tolerate_cycle_0, (reg32))

#define FT_CTRL_28_GET_rg_ft_freq_meter_tolerate_cycle_1(reg32) REG_FLD_GET(FT_CTRL_28_FLD_rg_ft_freq_meter_tolerate_cycle_1, (reg32))

#define FT_CTRL_29_GET_rg_ft_freq_meter_tolerate_cycle_2(reg32) REG_FLD_GET(FT_CTRL_29_FLD_rg_ft_freq_meter_tolerate_cycle_2, (reg32))

#define FT_CTRL_30_GET_rg_ft_freq_meter_tolerate_cycle_3(reg32) REG_FLD_GET(FT_CTRL_30_FLD_rg_ft_freq_meter_tolerate_cycle_3, (reg32))

#define FT_CTRL_31_GET_rg_ft_freq_meter_tolerate_cycle_4(reg32) REG_FLD_GET(FT_CTRL_31_FLD_rg_ft_freq_meter_tolerate_cycle_4, (reg32))

#define FT_CTRL_32_GET_rg_ft_freq_meter_tolerate_cycle_5(reg32) REG_FLD_GET(FT_CTRL_32_FLD_rg_ft_freq_meter_tolerate_cycle_5, (reg32))

#define FT_CTRL_33_GET_rg_ft_freq_meter_tolerate_cycle_6(reg32) REG_FLD_GET(FT_CTRL_33_FLD_rg_ft_freq_meter_tolerate_cycle_6, (reg32))

#define FT_CTRL_34_GET_rg_ft_freq_meter_tolerate_cycle_7(reg32) REG_FLD_GET(FT_CTRL_34_FLD_rg_ft_freq_meter_tolerate_cycle_7, (reg32))

#define FT_CTRL_35_GET_rg_ft_freq_meter_tolerate_cycle_8(reg32) REG_FLD_GET(FT_CTRL_35_FLD_rg_ft_freq_meter_tolerate_cycle_8, (reg32))

#define FT_STATUS_0_GET_ro_ft_freq_meter_unlck_cnt_0(reg32)    REG_FLD_GET(FT_STATUS_0_FLD_ro_ft_freq_meter_unlck_cnt_0, (reg32))
#define FT_STATUS_0_GET_ro_ft_freq_meter_freq_state_0(reg32)   REG_FLD_GET(FT_STATUS_0_FLD_ro_ft_freq_meter_freq_state_0, (reg32))
#define FT_STATUS_0_GET_ro_ft_freq_meter_freq_lock_0(reg32)    REG_FLD_GET(FT_STATUS_0_FLD_ro_ft_freq_meter_freq_lock_0, (reg32))

#define FT_STATUS_1_GET_ro_ft_freq_meter_unlck_cnt_1(reg32)    REG_FLD_GET(FT_STATUS_1_FLD_ro_ft_freq_meter_unlck_cnt_1, (reg32))
#define FT_STATUS_1_GET_ro_ft_freq_meter_freq_state_1(reg32)   REG_FLD_GET(FT_STATUS_1_FLD_ro_ft_freq_meter_freq_state_1, (reg32))
#define FT_STATUS_1_GET_ro_ft_freq_meter_freq_lock_1(reg32)    REG_FLD_GET(FT_STATUS_1_FLD_ro_ft_freq_meter_freq_lock_1, (reg32))

#define FT_STATUS_2_GET_ro_ft_freq_meter_unlck_cnt_2(reg32)    REG_FLD_GET(FT_STATUS_2_FLD_ro_ft_freq_meter_unlck_cnt_2, (reg32))
#define FT_STATUS_2_GET_ro_ft_freq_meter_freq_state_2(reg32)   REG_FLD_GET(FT_STATUS_2_FLD_ro_ft_freq_meter_freq_state_2, (reg32))
#define FT_STATUS_2_GET_ro_ft_freq_meter_freq_lock_2(reg32)    REG_FLD_GET(FT_STATUS_2_FLD_ro_ft_freq_meter_freq_lock_2, (reg32))

#define FT_STATUS_3_GET_ro_ft_freq_meter_unlck_cnt_3(reg32)    REG_FLD_GET(FT_STATUS_3_FLD_ro_ft_freq_meter_unlck_cnt_3, (reg32))
#define FT_STATUS_3_GET_ro_ft_freq_meter_freq_state_3(reg32)   REG_FLD_GET(FT_STATUS_3_FLD_ro_ft_freq_meter_freq_state_3, (reg32))
#define FT_STATUS_3_GET_ro_ft_freq_meter_freq_lock_3(reg32)    REG_FLD_GET(FT_STATUS_3_FLD_ro_ft_freq_meter_freq_lock_3, (reg32))

#define FT_STATUS_4_GET_ro_ft_freq_meter_unlck_cnt_4(reg32)    REG_FLD_GET(FT_STATUS_4_FLD_ro_ft_freq_meter_unlck_cnt_4, (reg32))
#define FT_STATUS_4_GET_ro_ft_freq_meter_freq_state_4(reg32)   REG_FLD_GET(FT_STATUS_4_FLD_ro_ft_freq_meter_freq_state_4, (reg32))
#define FT_STATUS_4_GET_ro_ft_freq_meter_freq_lock_4(reg32)    REG_FLD_GET(FT_STATUS_4_FLD_ro_ft_freq_meter_freq_lock_4, (reg32))

#define FT_STATUS_5_GET_ro_ft_freq_meter_unlck_cnt_5(reg32)    REG_FLD_GET(FT_STATUS_5_FLD_ro_ft_freq_meter_unlck_cnt_5, (reg32))
#define FT_STATUS_5_GET_ro_ft_freq_meter_freq_state_5(reg32)   REG_FLD_GET(FT_STATUS_5_FLD_ro_ft_freq_meter_freq_state_5, (reg32))
#define FT_STATUS_5_GET_ro_ft_freq_meter_freq_lock_5(reg32)    REG_FLD_GET(FT_STATUS_5_FLD_ro_ft_freq_meter_freq_lock_5, (reg32))

#define FT_STATUS_6_GET_ro_ft_freq_meter_unlck_cnt_6(reg32)    REG_FLD_GET(FT_STATUS_6_FLD_ro_ft_freq_meter_unlck_cnt_6, (reg32))
#define FT_STATUS_6_GET_ro_ft_freq_meter_freq_state_6(reg32)   REG_FLD_GET(FT_STATUS_6_FLD_ro_ft_freq_meter_freq_state_6, (reg32))
#define FT_STATUS_6_GET_ro_ft_freq_meter_freq_lock_6(reg32)    REG_FLD_GET(FT_STATUS_6_FLD_ro_ft_freq_meter_freq_lock_6, (reg32))

#define FT_STATUS_7_GET_ro_ft_freq_meter_unlck_cnt_7(reg32)    REG_FLD_GET(FT_STATUS_7_FLD_ro_ft_freq_meter_unlck_cnt_7, (reg32))
#define FT_STATUS_7_GET_ro_ft_freq_meter_freq_state_7(reg32)   REG_FLD_GET(FT_STATUS_7_FLD_ro_ft_freq_meter_freq_state_7, (reg32))
#define FT_STATUS_7_GET_ro_ft_freq_meter_freq_lock_7(reg32)    REG_FLD_GET(FT_STATUS_7_FLD_ro_ft_freq_meter_freq_lock_7, (reg32))

#define FT_STATUS_8_GET_ro_ft_freq_meter_unlck_cnt_8(reg32)    REG_FLD_GET(FT_STATUS_8_FLD_ro_ft_freq_meter_unlck_cnt_8, (reg32))
#define FT_STATUS_8_GET_ro_ft_freq_meter_freq_state_8(reg32)   REG_FLD_GET(FT_STATUS_8_FLD_ro_ft_freq_meter_freq_state_8, (reg32))
#define FT_STATUS_8_GET_ro_ft_freq_meter_freq_lock_8(reg32)    REG_FLD_GET(FT_STATUS_8_FLD_ro_ft_freq_meter_freq_lock_8, (reg32))

#define RX_SYS_CTRL_0_GET_rg_qp_speed_sel_1(reg32)             REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_speed_sel_1, (reg32))
#define RX_SYS_CTRL_0_GET_rg_qp_speed_sel(reg32)               REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_speed_sel, (reg32))
#define RX_SYS_CTRL_0_GET_rg_qp_amp(reg32)                     REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_amp, (reg32))
#define RX_SYS_CTRL_0_GET_rg_qp_prbs_sel(reg32)                REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_prbs_sel, (reg32))
#define RX_SYS_CTRL_0_GET_rg_qp_ad_sleep_en(reg32)             REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_ad_sleep_en, (reg32))
#define RX_SYS_CTRL_0_GET_rg_qp_roc_ck_en(reg32)               REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_roc_ck_en, (reg32))
#define RX_SYS_CTRL_0_GET_rg_qp_rx_hz(reg32)                   REG_FLD_GET(RX_SYS_CTRL_0_FLD_rg_qp_rx_hz, (reg32))

#define FLL_CTRL_0_GET_rg_qp_ipath_idac(reg32)                 REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_ipath_idac, (reg32))
#define FLL_CTRL_0_GET_rg_qp_load_en(reg32)                    REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_load_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_ro_fll_4_latch_en(reg32)          REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_ro_fll_4_latch_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_ro_fll_3_latch_en(reg32)          REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_ro_fll_3_latch_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_ro_fll_2_latch_en(reg32)          REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_ro_fll_2_latch_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_ro_fll_1_latch_en(reg32)          REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_ro_fll_1_latch_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_debug_sel(reg32)                  REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_debug_sel, (reg32))
#define FLL_CTRL_0_GET_rg_qp_fll_repli(reg32)                  REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_fll_repli, (reg32))
#define FLL_CTRL_0_GET_rg_qp_fll_cor(reg32)                    REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_fll_cor, (reg32))
#define FLL_CTRL_0_GET_rg_qp_fll_dig_rst_force_en(reg32)       REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_fll_dig_rst_force_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_fll_dig_rstb_force(reg32)         REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_fll_dig_rstb_force, (reg32))
#define FLL_CTRL_0_GET_rg_qp_icdr_kband_done_force_en(reg32)   REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force_en, (reg32))
#define FLL_CTRL_0_GET_rg_qp_icdr_kband_done_force(reg32)      REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force, (reg32))
#define FLL_CTRL_0_GET_rg_qp_fll_dig_pro(reg32)                REG_FLD_GET(FLL_CTRL_0_FLD_rg_qp_fll_dig_pro, (reg32))

#define FLL_CTRL_1_GET_rg_qp_fll_idac_min(reg32)               REG_FLD_GET(FLL_CTRL_1_FLD_rg_qp_fll_idac_min, (reg32))
#define FLL_CTRL_1_GET_rg_qp_fll_idac_max(reg32)               REG_FLD_GET(FLL_CTRL_1_FLD_rg_qp_fll_idac_max, (reg32))

#define FLL_CTRL_2_GET_rg_qp_fbkdiv(reg32)                     REG_FLD_GET(FLL_CTRL_2_FLD_rg_qp_fbkdiv, (reg32))
#define FLL_CTRL_2_GET_rg_qp_kband_prediv(reg32)               REG_FLD_GET(FLL_CTRL_2_FLD_rg_qp_kband_prediv, (reg32))
#define FLL_CTRL_2_GET_rg_qp_ck_rate(reg32)                    REG_FLD_GET(FLL_CTRL_2_FLD_rg_qp_ck_rate, (reg32))
#define FLL_CTRL_2_GET_rg_qp_symbol_wd(reg32)                  REG_FLD_GET(FLL_CTRL_2_FLD_rg_qp_symbol_wd, (reg32))
#define FLL_CTRL_2_GET_rg_qp_settle_time_sel(reg32)            REG_FLD_GET(FLL_CTRL_2_FLD_rg_qp_settle_time_sel, (reg32))

#define FLL_CTRL_3_GET_rg_qp_fll_idac_repli(reg32)             REG_FLD_GET(FLL_CTRL_3_FLD_rg_qp_fll_idac_repli, (reg32))

#define RX_DLY_0_GET_rg_qp_rx_saosc_en_h_dly(reg32)            REG_FLD_GET(RX_DLY_0_FLD_rg_qp_rx_saosc_en_h_dly, (reg32))
#define RX_DLY_0_GET_rg_qp_rx_pi_cal_en_h_dly(reg32)           REG_FLD_GET(RX_DLY_0_FLD_rg_qp_rx_pi_cal_en_h_dly, (reg32))

#define RX_DLY_1_GET_rg_qp_sig_det_l_thres(reg32)              REG_FLD_GET(RX_DLY_1_FLD_rg_qp_sig_det_l_thres, (reg32))
#define RX_DLY_1_GET_rg_qp_sig_det_h_thres(reg32)              REG_FLD_GET(RX_DLY_1_FLD_rg_qp_sig_det_h_thres, (reg32))

#define RX_AFIFO_GET_rg_qp_pma_rx_fifo_rd_thr(reg32)           REG_FLD_GET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_thr, (reg32))
#define RX_AFIFO_GET_rg_qp_pma_rx_fifo_wr_thr(reg32)           REG_FLD_GET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_thr, (reg32))
#define RX_AFIFO_GET_rg_qp_pma_rx_fifo_rd_clr(reg32)           REG_FLD_GET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_clr, (reg32))
#define RX_AFIFO_GET_rg_qp_pma_rx_fifo_wr_clr(reg32)           REG_FLD_GET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_clr, (reg32))
#define RX_AFIFO_GET_rg_qp_pma_rx_fifo_rd_dly(reg32)           REG_FLD_GET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_dly, (reg32))
#define RX_AFIFO_GET_rg_qp_rx_data_inv(reg32)                  REG_FLD_GET(RX_AFIFO_FLD_rg_qp_rx_data_inv, (reg32))
#define RX_AFIFO_GET_rg_qp_rx_asic_uses_ff(reg32)              REG_FLD_GET(RX_AFIFO_FLD_rg_qp_rx_asic_uses_ff, (reg32))
#define RX_AFIFO_GET_rg_qp_rx_afifo_adj(reg32)                 REG_FLD_GET(RX_AFIFO_FLD_rg_qp_rx_afifo_adj, (reg32))

#define IMP_CTRL_0_GET_rg_qp_impcal_calcyc(reg32)              REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_impcal_calcyc, (reg32))
#define IMP_CTRL_0_GET_rg_qp_impcal_stbcyc(reg32)              REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_impcal_stbcyc, (reg32))
#define IMP_CTRL_0_GET_rg_qp_impcal_cycnt(reg32)               REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_impcal_cycnt, (reg32))
#define IMP_CTRL_0_GET_rg_qp_force_impsel(reg32)               REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_force_impsel, (reg32))
#define IMP_CTRL_0_GET_rg_qp_force_impcal_en(reg32)            REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_force_impcal_en, (reg32))
#define IMP_CTRL_0_GET_rg_qp_impcal_en(reg32)                  REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_impcal_en, (reg32))
#define IMP_CTRL_0_GET_rg_qp_impcal_out(reg32)                 REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_impcal_out, (reg32))
#define IMP_CTRL_0_GET_rg_qp_power_on(reg32)                   REG_FLD_GET(IMP_CTRL_0_FLD_rg_qp_power_on, (reg32))

#define IMP_CTRL_1_GET_rg_qp_prb_out(reg32)                    REG_FLD_GET(IMP_CTRL_1_FLD_rg_qp_prb_out, (reg32))
#define IMP_CTRL_1_GET_rg_qp_impcal_cal(reg32)                 REG_FLD_GET(IMP_CTRL_1_FLD_rg_qp_impcal_cal, (reg32))
#define IMP_CTRL_1_GET_rg_qp_rx_imp_sel(reg32)                 REG_FLD_GET(IMP_CTRL_1_FLD_rg_qp_rx_imp_sel, (reg32))
#define IMP_CTRL_1_GET_rg_qp_imp_bias(reg32)                   REG_FLD_GET(IMP_CTRL_1_FLD_rg_qp_imp_bias, (reg32))
#define IMP_CTRL_1_GET_rg_qp_fix_impsel(reg32)                 REG_FLD_GET(IMP_CTRL_1_FLD_rg_qp_fix_impsel, (reg32))

#define RX_CTRL_UNUSE_0_GET_rg_qp_rosc_fine(reg32)             REG_FLD_GET(RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_fine, (reg32))
#define RX_CTRL_UNUSE_0_GET_rg_qp_rosc_coarse_sel(reg32)       REG_FLD_GET(RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_coarse_sel, (reg32))
#define RX_CTRL_UNUSE_0_GET_rg_qp_cdr_vcocal_fail(reg32)       REG_FLD_GET(RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_fail, (reg32))
#define RX_CTRL_UNUSE_0_GET_rg_qp_cdr_vcocal_state(reg32)      REG_FLD_GET(RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_state, (reg32))

#define RX_CTRL_1_GET_rg_qp_freq_det_en_wait_dly(reg32)        REG_FLD_GET(RX_CTRL_1_FLD_rg_qp_freq_det_en_wait_dly, (reg32))
#define RX_CTRL_1_GET_rg_qp_cdr_settle_dly(reg32)              REG_FLD_GET(RX_CTRL_1_FLD_rg_qp_cdr_settle_dly, (reg32))
#define RX_CTRL_1_GET_rg_qp_cdr_re_calib(reg32)                REG_FLD_GET(RX_CTRL_1_FLD_rg_qp_cdr_re_calib, (reg32))
#define RX_CTRL_1_GET_rg_qp_cdr_bw_sel_dly(reg32)              REG_FLD_GET(RX_CTRL_1_FLD_rg_qp_cdr_bw_sel_dly, (reg32))

#define RX_CTRL_2_GET_rg_qp_rx_pwd(reg32)                      REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_rx_pwd, (reg32))
#define RX_CTRL_2_GET_rg_qp_rx_eq_en_h_dly(reg32)              REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_rx_eq_en_h_dly, (reg32))
#define RX_CTRL_2_GET_rg_qp_ppm_thres(reg32)                   REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_ppm_thres, (reg32))
#define RX_CTRL_2_GET_rg_qp_phya_pwd(reg32)                    REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_phya_pwd, (reg32))
#define RX_CTRL_2_GET_rg_qp_lpf_window_sel(reg32)              REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_lpf_window_sel, (reg32))
#define RX_CTRL_2_GET_rg_qp_freq_det_frc_en(reg32)             REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_freq_det_frc_en, (reg32))
#define RX_CTRL_2_GET_rg_qp_freq_det_frc(reg32)                REG_FLD_GET(RX_CTRL_2_FLD_rg_qp_freq_det_frc, (reg32))

#define RX_CTRL_3_GET_rg_qp_cdr_band_fail(reg32)               REG_FLD_GET(RX_CTRL_3_FLD_rg_qp_cdr_band_fail, (reg32))
#define RX_CTRL_3_GET_rg_qp_speed_chg(reg32)                   REG_FLD_GET(RX_CTRL_3_FLD_rg_qp_speed_chg, (reg32))
#define RX_CTRL_3_GET_rg_qp_sigdet_wait_force(reg32)           REG_FLD_GET(RX_CTRL_3_FLD_rg_qp_sigdet_wait_force, (reg32))
#define RX_CTRL_3_GET_rg_qp_sigdet_wait_cond(reg32)            REG_FLD_GET(RX_CTRL_3_FLD_rg_qp_sigdet_wait_cond, (reg32))
#define RX_CTRL_3_GET_rg_qp_sig_det_wait_dly(reg32)            REG_FLD_GET(RX_CTRL_3_FLD_rg_qp_sig_det_wait_dly, (reg32))

#define RX_CTRL_4_GET_rg_qp_kband_kfc(reg32)                   REG_FLD_GET(RX_CTRL_4_FLD_rg_qp_kband_kfc, (reg32))
#define RX_CTRL_4_GET_rg_pcie_sig_cal_en_time_sel(reg32)       REG_FLD_GET(RX_CTRL_4_FLD_rg_pcie_sig_cal_en_time_sel, (reg32))
#define RX_CTRL_4_GET_rg_bias_dir(reg32)                       REG_FLD_GET(RX_CTRL_4_FLD_rg_bias_dir, (reg32))
#define RX_CTRL_4_GET_rg_rx_pi_cal_en_start_time(reg32)        REG_FLD_GET(RX_CTRL_4_FLD_rg_rx_pi_cal_en_start_time, (reg32))
#define RX_CTRL_4_GET_rg_rx_settle_rdy_time(reg32)             REG_FLD_GET(RX_CTRL_4_FLD_rg_rx_settle_rdy_time, (reg32))

#define RX_CTRL_5_GET_rg_fredet_chk_cycle(reg32)               REG_FLD_GET(RX_CTRL_5_FLD_rg_fredet_chk_cycle, (reg32))
#define RX_CTRL_5_GET_rg_qp_impcal_cyccnt(reg32)               REG_FLD_GET(RX_CTRL_5_FLD_rg_qp_impcal_cyccnt, (reg32))

#define RX_CTRL_6_GET_rg_fredet_golden_cycle(reg32)            REG_FLD_GET(RX_CTRL_6_FLD_rg_fredet_golden_cycle, (reg32))

#define RX_CTRL_7_GET_rg_fredet_clear_unlck_cnt(reg32)         REG_FLD_GET(RX_CTRL_7_FLD_rg_fredet_clear_unlck_cnt, (reg32))
#define RX_CTRL_7_GET_rg_fredet_relck_num(reg32)               REG_FLD_GET(RX_CTRL_7_FLD_rg_fredet_relck_num, (reg32))
#define RX_CTRL_7_GET_rg_fredet_tolerate_cycle(reg32)          REG_FLD_GET(RX_CTRL_7_FLD_rg_fredet_tolerate_cycle, (reg32))

#define RX_CTRL_8_GET_rg_da_qp_saosc_done_time(reg32)          REG_FLD_GET(RX_CTRL_8_FLD_rg_da_qp_saosc_done_time, (reg32))
#define RX_CTRL_8_GET_rg_da_qp_leqos_en_time(reg32)            REG_FLD_GET(RX_CTRL_8_FLD_rg_da_qp_leqos_en_time, (reg32))

#define RX_CTRL_9_GET_rg_force_pll_stable(reg32)               REG_FLD_GET(RX_CTRL_9_FLD_rg_force_pll_stable, (reg32))
#define RX_CTRL_9_GET_rg_force_pll_stable_sel(reg32)           REG_FLD_GET(RX_CTRL_9_FLD_rg_force_pll_stable_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_bias_pwd(reg32)                 REG_FLD_GET(RX_CTRL_9_FLD_rg_force_bias_pwd, (reg32))
#define RX_CTRL_9_GET_rg_force_bias_pwd_sel(reg32)             REG_FLD_GET(RX_CTRL_9_FLD_rg_force_bias_pwd_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_kband_done_bypass_ana(reg32) REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_kband_done_bypass_ana_sel(reg32) REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_sigdet_out_bypass_ana(reg32)    REG_FLD_GET(RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana, (reg32))
#define RX_CTRL_9_GET_rg_force_sigdet_out_bypass_ana_sel(reg32) REG_FLD_GET(RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_sigdet_cal_out_bypass_ana(reg32) REG_FLD_GET(RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana, (reg32))
#define RX_CTRL_9_GET_rg_force_sigdet_cal_out_bypass_ana_sel(reg32) REG_FLD_GET(RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_saos_en(reg32)               REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_saos_en, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_saos_en_sel(reg32)           REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_saos_en_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_lck2ref(reg32)              REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_lck2ref, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_lck2ref_sel(reg32)          REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_lck2ref_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_lpf_rstb(reg32)             REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_lpf_rstb_sel(reg32)         REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_stable(reg32)               REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_stable, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_stable_sel(reg32)           REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_stable_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_dfe_en(reg32)                   REG_FLD_GET(RX_CTRL_9_FLD_rg_force_dfe_en, (reg32))
#define RX_CTRL_9_GET_rg_force_dfe_en_sel(reg32)               REG_FLD_GET(RX_CTRL_9_FLD_rg_force_dfe_en_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_sigdet_en(reg32)             REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_sigdet_en, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_sigdet_en_sel(reg32)         REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_sigdet_en_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_dfe_rst(reg32)                  REG_FLD_GET(RX_CTRL_9_FLD_rg_force_dfe_rst, (reg32))
#define RX_CTRL_9_GET_rg_force_dfe_rst_sel(reg32)              REG_FLD_GET(RX_CTRL_9_FLD_rg_force_dfe_rst_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_data_rstb(reg32)             REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_data_rstb, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_data_rstb_sel(reg32)         REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_data_rstb_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_pi_cal_en(reg32)             REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_pi_cal_en, (reg32))
#define RX_CTRL_9_GET_rg_force_rx_pi_cal_en_sel(reg32)         REG_FLD_GET(RX_CTRL_9_FLD_rg_force_rx_pi_cal_en_sel, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_pd_pwdb(reg32)              REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb, (reg32))
#define RX_CTRL_9_GET_rg_force_cdr_pd_pwdb_sel(reg32)          REG_FLD_GET(RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb_sel, (reg32))

#define RX_CTRL_10_GET_rg_force_cdr_settle_ok(reg32)           REG_FLD_GET(RX_CTRL_10_FLD_rg_force_cdr_settle_ok, (reg32))
#define RX_CTRL_10_GET_rg_force_cdr_settle_ok_sel(reg32)       REG_FLD_GET(RX_CTRL_10_FLD_rg_force_cdr_settle_ok_sel, (reg32))
#define RX_CTRL_10_GET_rg_qp_cdr_settle_rdy_cnt_time(reg32)    REG_FLD_GET(RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_time, (reg32))
#define RX_CTRL_10_GET_rg_qp_cdr_settle_rdy_cnt_pre_time(reg32) REG_FLD_GET(RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_pre_time, (reg32))
#define RX_CTRL_10_GET_rg_force_cdr_lck2ref_pre(reg32)         REG_FLD_GET(RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre, (reg32))
#define RX_CTRL_10_GET_rg_force_cdr_lck2ref_pre_sel(reg32)     REG_FLD_GET(RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre_sel, (reg32))
#define RX_CTRL_10_GET_rg_force_eq_en(reg32)                   REG_FLD_GET(RX_CTRL_10_FLD_rg_force_eq_en, (reg32))
#define RX_CTRL_10_GET_rg_force_eq_en_sel(reg32)               REG_FLD_GET(RX_CTRL_10_FLD_rg_force_eq_en_sel, (reg32))
#define RX_CTRL_10_GET_rg_qp_rx_scan(reg32)                    REG_FLD_GET(RX_CTRL_10_FLD_rg_qp_rx_scan, (reg32))
#define RX_CTRL_10_GET_rg_qp_crsdet_rstb(reg32)                REG_FLD_GET(RX_CTRL_10_FLD_rg_qp_crsdet_rstb, (reg32))
#define RX_CTRL_10_GET_rg_qp_crsdet_en(reg32)                  REG_FLD_GET(RX_CTRL_10_FLD_rg_qp_crsdet_en, (reg32))

#define RX_CTRL_11_GET_rg_qp_sigdet_cal_sample_time(reg32)     REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_sigdet_cal_sample_time, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_sigdet_10g(reg32)           REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_sigdet_10g, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_sigdet_5g(reg32)            REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_sigdet_5g, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_sigdet(reg32)               REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_sigdet, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_sigdet_sel(reg32)           REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_sigdet_sel, (reg32))
#define RX_CTRL_11_GET_rg_qp_rx_dcleq_intf(reg32)              REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_rx_dcleq_intf, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_eq_en(reg32)                REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_eq_en, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_eq_en_sel(reg32)            REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_eq_en_sel, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_speed_sel(reg32)            REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_speed_sel, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_eq_rdy(reg32)               REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_eq_rdy, (reg32))
#define RX_CTRL_11_GET_rg_qp_force_eq_rdy_sel(reg32)           REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_force_eq_rdy_sel, (reg32))
#define RX_CTRL_11_GET_rg_qp_eq_rstep2(reg32)                  REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_eq_rstep2, (reg32))
#define RX_CTRL_11_GET_rg_qp_eq_rstep1(reg32)                  REG_FLD_GET(RX_CTRL_11_FLD_rg_qp_eq_rstep1, (reg32))
#define RX_CTRL_11_GET_rg_force_saos_rdy(reg32)                REG_FLD_GET(RX_CTRL_11_FLD_rg_force_saos_rdy, (reg32))
#define RX_CTRL_11_GET_rg_force_saos_rdy_sel(reg32)            REG_FLD_GET(RX_CTRL_11_FLD_rg_force_saos_rdy_sel, (reg32))
#define RX_CTRL_11_GET_rg_force_freq_lock(reg32)               REG_FLD_GET(RX_CTRL_11_FLD_rg_force_freq_lock, (reg32))
#define RX_CTRL_11_GET_rg_force_freq_lock_sel(reg32)           REG_FLD_GET(RX_CTRL_11_FLD_rg_force_freq_lock_sel, (reg32))

#define RX_CTRL_12_GET_rg_sigdet_win_nonvld_times(reg32)       REG_FLD_GET(RX_CTRL_12_FLD_rg_sigdet_win_nonvld_times, (reg32))
#define RX_CTRL_12_GET_rg_sigdet_win_vld_times(reg32)          REG_FLD_GET(RX_CTRL_12_FLD_rg_sigdet_win_vld_times, (reg32))
#define RX_CTRL_12_GET_rg_sigdet_vld_time(reg32)               REG_FLD_GET(RX_CTRL_12_FLD_rg_sigdet_vld_time, (reg32))
#define RX_CTRL_12_GET_rg_sigdet_win_size(reg32)               REG_FLD_GET(RX_CTRL_12_FLD_rg_sigdet_win_size, (reg32))
#define RX_CTRL_12_GET_rg_sigdet_en(reg32)                     REG_FLD_GET(RX_CTRL_12_FLD_rg_sigdet_en, (reg32))

#define RX_CTRL_13_GET_rg_qp_reserve_3(reg32)                  REG_FLD_GET(RX_CTRL_13_FLD_rg_qp_reserve_3, (reg32))
#define RX_CTRL_13_GET_rg_qp_reserve_2(reg32)                  REG_FLD_GET(RX_CTRL_13_FLD_rg_qp_reserve_2, (reg32))
#define RX_CTRL_13_GET_rg_qp_reserve_1(reg32)                  REG_FLD_GET(RX_CTRL_13_FLD_rg_qp_reserve_1, (reg32))
#define RX_CTRL_13_GET_rg_qp_reserve_0(reg32)                  REG_FLD_GET(RX_CTRL_13_FLD_rg_qp_reserve_0, (reg32))

#define RX_CTRL_14_GET_qphy_rx_ctrl_debug_3(reg32)             REG_FLD_GET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_3, (reg32))
#define RX_CTRL_14_GET_qphy_rx_ctrl_debug_2(reg32)             REG_FLD_GET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_2, (reg32))
#define RX_CTRL_14_GET_qphy_rx_ctrl_debug_1(reg32)             REG_FLD_GET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_1, (reg32))
#define RX_CTRL_14_GET_qphy_rx_ctrl_debug(reg32)               REG_FLD_GET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug, (reg32))

#define RX_CTRL_15_GET_ro_fll_idac(reg32)                      REG_FLD_GET(RX_CTRL_15_FLD_ro_fll_idac, (reg32))
#define RX_CTRL_15_GET_ro_adc_freq(reg32)                      REG_FLD_GET(RX_CTRL_15_FLD_ro_adc_freq, (reg32))

#define RX_CTRL_16_GET_ro_cor_gain(reg32)                      REG_FLD_GET(RX_CTRL_16_FLD_ro_cor_gain, (reg32))

#define RX_CTRL_17_GET_ro_da_idac(reg32)                       REG_FLD_GET(RX_CTRL_17_FLD_ro_da_idac, (reg32))
#define RX_CTRL_17_GET_ro_idacf(reg32)                         REG_FLD_GET(RX_CTRL_17_FLD_ro_idacf, (reg32))

#define RX_CTRL_18_GET_ro_fll_idac_repli(reg32)                REG_FLD_GET(RX_CTRL_18_FLD_ro_fll_idac_repli, (reg32))

#define RX_CTRL_19_GET_ro_adc_freq_inv_output(reg32)           REG_FLD_GET(RX_CTRL_19_FLD_ro_adc_freq_inv_output, (reg32))

#define RX_CTRL_20_GET_ro_adc_freq_output(reg32)               REG_FLD_GET(RX_CTRL_20_FLD_ro_adc_freq_output, (reg32))

#define RX_CTRL_21_GET_ro_cor_integ_output(reg32)              REG_FLD_GET(RX_CTRL_21_FLD_ro_cor_integ_output, (reg32))

#define RX_CTRL_22_GET_ro_cor_integ_inv_output(reg32)          REG_FLD_GET(RX_CTRL_22_FLD_ro_cor_integ_inv_output, (reg32))

#define RX_CTRL_23_GET_ro_cor_gain_output_0(reg32)             REG_FLD_GET(RX_CTRL_23_FLD_ro_cor_gain_output_0, (reg32))

#define RX_CTRL_24_GET_ro_cor_gain_output_1(reg32)             REG_FLD_GET(RX_CTRL_24_FLD_ro_cor_gain_output_1, (reg32))

#define RX_CTRL_25_GET_rg_qp_sigdet_force(reg32)               REG_FLD_GET(RX_CTRL_25_FLD_rg_qp_sigdet_force, (reg32))
#define RX_CTRL_25_GET_rg_qp_sigdet_force_en(reg32)            REG_FLD_GET(RX_CTRL_25_FLD_rg_qp_sigdet_force_en, (reg32))
#define RX_CTRL_25_GET_rg_sigdet_10g_force_en(reg32)           REG_FLD_GET(RX_CTRL_25_FLD_rg_sigdet_10g_force_en, (reg32))
#define RX_CTRL_25_GET_rg_force_pr_stable(reg32)               REG_FLD_GET(RX_CTRL_25_FLD_rg_force_pr_stable, (reg32))
#define RX_CTRL_25_GET_rg_force_pr_stable_sel(reg32)           REG_FLD_GET(RX_CTRL_25_FLD_rg_force_pr_stable_sel, (reg32))

#define RX_CTRL_26_GET_rg_qp_saos_rdy_clr_by_lck2ref(reg32)    REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_saos_rdy_clr_by_lck2ref, (reg32))
#define RX_CTRL_26_GET_rg_qp_retrain_all_en(reg32)             REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_retrain_all_en, (reg32))
#define RX_CTRL_26_GET_rg_qp_eq_retrain_only_en(reg32)         REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_eq_retrain_only_en, (reg32))
#define RX_CTRL_26_GET_rg_qp_fifo_rstb_hw_en(reg32)            REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_fifo_rstb_hw_en, (reg32))
#define RX_CTRL_26_GET_rg_link_ne_en(reg32)                    REG_FLD_GET(RX_CTRL_26_FLD_rg_link_ne_en, (reg32))
#define RX_CTRL_26_GET_rg_link_erro_en(reg32)                  REG_FLD_GET(RX_CTRL_26_FLD_rg_link_erro_en, (reg32))
#define RX_CTRL_26_GET_rg_force_cdr_lck2ref_pre_relink(reg32)  REG_FLD_GET(RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink, (reg32))
#define RX_CTRL_26_GET_rg_force_cdr_lck2ref_pre_relink_sel(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink_sel, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_ok_sig_det_freq_lock_relink(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_sig_det_freq_lock_relink(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_cdr_settle_freq_lock_relink(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_cdr_settle_sig_det_relink(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_saos_rdy_relink(reg32)     REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_freq_lock_relink(reg32)    REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_freq_lock_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_sig_det_wait_rdy_mask_relink(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_cdr_settle_ok_relink(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok_relink, (reg32))
#define RX_CTRL_26_GET_rg_qp_prbs_case(reg32)                  REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_prbs_case, (reg32))
#define RX_CTRL_26_GET_rg_qp_add_pcs_link(reg32)               REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_add_pcs_link, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_ok_sig_det_freq_lock(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_sig_det_freq_lock(reg32)   REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_cdr_settle_freq_lock(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_cdr_settle_sig_det(reg32)  REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_saos_rdy(reg32)            REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_freq_lock(reg32)           REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_freq_lock, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_sig_det_wait_rdy_mask(reg32) REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask, (reg32))
#define RX_CTRL_26_GET_rg_qp_bypass_cdr_settle_ok(reg32)       REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok, (reg32))
#define RX_CTRL_26_GET_rg_qp_force_sigdet_lp(reg32)            REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_force_sigdet_lp, (reg32))
#define RX_CTRL_26_GET_rg_qp_force_sigdet_ln(reg32)            REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_force_sigdet_ln, (reg32))
#define RX_CTRL_26_GET_rg_qp_sig_linkdown_sel(reg32)           REG_FLD_GET(RX_CTRL_26_FLD_rg_qp_sig_linkdown_sel, (reg32))

#define RX_CTRL_27_GET_rg_qp_link_erro_cnt(reg32)              REG_FLD_GET(RX_CTRL_27_FLD_rg_qp_link_erro_cnt, (reg32))

#define RX_CTRL_28_GET_rg_qp_debug_sel_6(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_6, (reg32))
#define RX_CTRL_28_GET_rg_qp_debug_sel_5(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_5, (reg32))
#define RX_CTRL_28_GET_rg_qp_debug_sel_4(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_4, (reg32))
#define RX_CTRL_28_GET_rg_qp_debug_sel_3(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_3, (reg32))
#define RX_CTRL_28_GET_rg_qp_debug_sel_2(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_2, (reg32))
#define RX_CTRL_28_GET_rg_qp_debug_sel_1(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_1, (reg32))
#define RX_CTRL_28_GET_rg_qp_debug_sel_0(reg32)                REG_FLD_GET(RX_CTRL_28_FLD_rg_qp_debug_sel_0, (reg32))

#define RX_CTRL_29_GET_qphy_rx_ctrl_debug_4(reg32)             REG_FLD_GET(RX_CTRL_29_FLD_qphy_rx_ctrl_debug_4, (reg32))

#define RX_CTRL_30_GET_qphy_rx_ctrl_debug_5(reg32)             REG_FLD_GET(RX_CTRL_30_FLD_qphy_rx_ctrl_debug_5, (reg32))

#define RX_CTRL_31_GET_qphy_rx_ctrl_debug_6(reg32)             REG_FLD_GET(RX_CTRL_31_FLD_qphy_rx_ctrl_debug_6, (reg32))

#define RX_CTRL_32_GET_qphy_rx_ctrl_debug_7(reg32)             REG_FLD_GET(RX_CTRL_32_FLD_qphy_rx_ctrl_debug_7, (reg32))

#define RX_CTRL_33_GET_qphy_rx_ctrl_debug_8(reg32)             REG_FLD_GET(RX_CTRL_33_FLD_qphy_rx_ctrl_debug_8, (reg32))

#define RX_CTRL_34_GET_qphy_rx_ctrl_debug_9(reg32)             REG_FLD_GET(RX_CTRL_34_FLD_qphy_rx_ctrl_debug_9, (reg32))

#define RX_CTRL_35_GET_rg_qp_force_pcie_usb_speed_sel(reg32)   REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_cdr_pwd(reg32)              REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_cdr_pwd, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_cdr_pwd_sel(reg32)          REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_cdr_pwd_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_cdr_set_dly_clear(reg32)    REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_cdr_set_dly_clear, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_rx_pr_pd_pwd(reg32)         REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_rx_pr_pd_pwd_sel(reg32)     REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_rx_path_rdy(reg32)          REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_rx_path_rdy_sel(reg32)      REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_pcie_usb_speed(reg32)       REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_speed_change_sel(reg32)     REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_speed_change_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_speed_change(reg32)         REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_speed_change, (reg32))
#define RX_CTRL_35_GET_rg_qp_pcie_speed_change_dly_time(reg32) REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_pcie_speed_change_dly_time, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_k_band_reset_sel(reg32)     REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_k_band_reset_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_ssusb_rx_saosc_rst(reg32)   REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_ssusb_rx_saosc_rst_sel(reg32) REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_sig_det_cal_done(reg32)     REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_sig_det_cal_done_sel(reg32) REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_pi_cal_done(reg32)          REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_pi_cal_done, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_pi_cal_done_sel(reg32)      REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_pi_cal_done_sel, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_pi_spd_chg_en(reg32)        REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_pi_spd_chg_en, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_auto_vco_en(reg32)          REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_auto_vco_en, (reg32))
#define RX_CTRL_35_GET_rg_qp_force_pr_vco_en(reg32)            REG_FLD_GET(RX_CTRL_35_FLD_rg_qp_force_pr_vco_en, (reg32))

#define RX_CTRL_36_GET_rg_qp_force_usb_mode(reg32)             REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_usb_mode, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_usb_mode_sel(reg32)         REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_usb_mode_sel, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_sigdet_usb(reg32)           REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_sigdet_usb, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_sigdet_and(reg32)           REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_sigdet_and, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_sigdet_or(reg32)            REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_sigdet_or, (reg32))
#define RX_CTRL_36_GET_rg_qp_pcie_usb_system(reg32)            REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_pcie_usb_system, (reg32))
#define RX_CTRL_36_GET_rg_qp_lck2data_dly_time(reg32)          REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_lck2data_dly_time, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_rx_path_rdy_time(reg32)     REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_rx_path_rdy_time, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_spd_chg_all(reg32)          REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_spd_chg_all, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_pcie_mode(reg32)            REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_pcie_mode, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_pcie_mode_sel(reg32)        REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_pcie_mode_sel, (reg32))
#define RX_CTRL_36_GET_rg_qp_pcie_usb_sol_1(reg32)             REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_pcie_usb_sol_1, (reg32))
#define RX_CTRL_36_GET_rg_qp_force_speed_chg_all_re_en(reg32)  REG_FLD_GET(RX_CTRL_36_FLD_rg_qp_force_speed_chg_all_re_en, (reg32))

#define RX_CTRL_37_GET_rg_qp_reserve_19(reg32)                 REG_FLD_GET(RX_CTRL_37_FLD_rg_qp_reserve_19, (reg32))
#define RX_CTRL_37_GET_rg_qp_reserve_18(reg32)                 REG_FLD_GET(RX_CTRL_37_FLD_rg_qp_reserve_18, (reg32))
#define RX_CTRL_37_GET_rg_qp_reserve_17(reg32)                 REG_FLD_GET(RX_CTRL_37_FLD_rg_qp_reserve_17, (reg32))
#define RX_CTRL_37_GET_rg_qp_reserve_16(reg32)                 REG_FLD_GET(RX_CTRL_37_FLD_rg_qp_reserve_16, (reg32))

#define RX_CTRL_38_GET_rg_qp_reserve_7(reg32)                  REG_FLD_GET(RX_CTRL_38_FLD_rg_qp_reserve_7, (reg32))
#define RX_CTRL_38_GET_rg_qp_reserve_6(reg32)                  REG_FLD_GET(RX_CTRL_38_FLD_rg_qp_reserve_6, (reg32))
#define RX_CTRL_38_GET_rg_qp_reserve_5(reg32)                  REG_FLD_GET(RX_CTRL_38_FLD_rg_qp_reserve_5, (reg32))
#define RX_CTRL_38_GET_rg_qp_reserve_4(reg32)                  REG_FLD_GET(RX_CTRL_38_FLD_rg_qp_reserve_4, (reg32))

#define RX_CTRL_39_GET_rg_qp_reserve_11(reg32)                 REG_FLD_GET(RX_CTRL_39_FLD_rg_qp_reserve_11, (reg32))
#define RX_CTRL_39_GET_rg_qp_reserve_10(reg32)                 REG_FLD_GET(RX_CTRL_39_FLD_rg_qp_reserve_10, (reg32))
#define RX_CTRL_39_GET_rg_qp_reserve_9(reg32)                  REG_FLD_GET(RX_CTRL_39_FLD_rg_qp_reserve_9, (reg32))
#define RX_CTRL_39_GET_rg_qp_reserve_8(reg32)                  REG_FLD_GET(RX_CTRL_39_FLD_rg_qp_reserve_8, (reg32))

#define RX_CTRL_40_GET_rg_qp_reserve_15(reg32)                 REG_FLD_GET(RX_CTRL_40_FLD_rg_qp_reserve_15, (reg32))
#define RX_CTRL_40_GET_rg_qp_reserve_14(reg32)                 REG_FLD_GET(RX_CTRL_40_FLD_rg_qp_reserve_14, (reg32))
#define RX_CTRL_40_GET_rg_qp_reserve_13(reg32)                 REG_FLD_GET(RX_CTRL_40_FLD_rg_qp_reserve_13, (reg32))
#define RX_CTRL_40_GET_rg_qp_reserve_12(reg32)                 REG_FLD_GET(RX_CTRL_40_FLD_rg_qp_reserve_12, (reg32))

#define RX_CTRL_41_GET_ro_qp_reserve_3(reg32)                  REG_FLD_GET(RX_CTRL_41_FLD_ro_qp_reserve_3, (reg32))
#define RX_CTRL_41_GET_ro_qp_reserve_2(reg32)                  REG_FLD_GET(RX_CTRL_41_FLD_ro_qp_reserve_2, (reg32))
#define RX_CTRL_41_GET_ro_qp_reserve_1(reg32)                  REG_FLD_GET(RX_CTRL_41_FLD_ro_qp_reserve_1, (reg32))
#define RX_CTRL_41_GET_ro_qp_reserve_0(reg32)                  REG_FLD_GET(RX_CTRL_41_FLD_ro_qp_reserve_0, (reg32))

#define RX_CTRL_42_GET_ro_qp_reserve_7(reg32)                  REG_FLD_GET(RX_CTRL_42_FLD_ro_qp_reserve_7, (reg32))
#define RX_CTRL_42_GET_ro_qp_reserve_6(reg32)                  REG_FLD_GET(RX_CTRL_42_FLD_ro_qp_reserve_6, (reg32))
#define RX_CTRL_42_GET_ro_qp_reserve_5(reg32)                  REG_FLD_GET(RX_CTRL_42_FLD_ro_qp_reserve_5, (reg32))
#define RX_CTRL_42_GET_ro_qp_reserve_4(reg32)                  REG_FLD_GET(RX_CTRL_42_FLD_ro_qp_reserve_4, (reg32))

#define RX_CTRL_43_GET_ro_qp_reserve_11(reg32)                 REG_FLD_GET(RX_CTRL_43_FLD_ro_qp_reserve_11, (reg32))
#define RX_CTRL_43_GET_ro_qp_reserve_10(reg32)                 REG_FLD_GET(RX_CTRL_43_FLD_ro_qp_reserve_10, (reg32))
#define RX_CTRL_43_GET_ro_qp_reserve_9(reg32)                  REG_FLD_GET(RX_CTRL_43_FLD_ro_qp_reserve_9, (reg32))
#define RX_CTRL_43_GET_ro_qp_reserve_8(reg32)                  REG_FLD_GET(RX_CTRL_43_FLD_ro_qp_reserve_8, (reg32))

#define RX_CTRL_44_GET_ro_qp_reserve_15(reg32)                 REG_FLD_GET(RX_CTRL_44_FLD_ro_qp_reserve_15, (reg32))
#define RX_CTRL_44_GET_ro_qp_reserve_14(reg32)                 REG_FLD_GET(RX_CTRL_44_FLD_ro_qp_reserve_14, (reg32))
#define RX_CTRL_44_GET_ro_qp_reserve_13(reg32)                 REG_FLD_GET(RX_CTRL_44_FLD_ro_qp_reserve_13, (reg32))
#define RX_CTRL_44_GET_ro_qp_reserve_12(reg32)                 REG_FLD_GET(RX_CTRL_44_FLD_ro_qp_reserve_12, (reg32))

#define RX_CTRL_45_GET_rg_qp_pcie_gen2_cdr_lpf_ki_gain(reg32)  REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_ki_gain, (reg32))
#define RX_CTRL_45_GET_rg_qp_pcie_gen1_cdr_lpf_ki_gain(reg32)  REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_ki_gain, (reg32))
#define RX_CTRL_45_GET_rg_qp_force_pcie_cdr_lpf_ki_gain_en(reg32) REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_ki_gain_en, (reg32))
#define RX_CTRL_45_GET_rg_qp_pcie_gen2_cdr_lpf_kp_gain(reg32)  REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_kp_gain, (reg32))
#define RX_CTRL_45_GET_rg_qp_pcie_gen1_cdr_lpf_kp_gain(reg32)  REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_kp_gain, (reg32))
#define RX_CTRL_45_GET_rg_qp_force_pcie_cdr_lpf_kp_gain_en(reg32) REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_kp_gain_en, (reg32))
#define RX_CTRL_45_GET_rg_qp_sgmii_eq_train_sel(reg32)         REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_sgmii_eq_train_sel, (reg32))
#define RX_CTRL_45_GET_rg_qp_force_eq_dly_en(reg32)            REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_force_eq_dly_en, (reg32))
#define RX_CTRL_45_GET_rg_qp_force_eq_dly_en_sel(reg32)        REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_force_eq_dly_en_sel, (reg32))
#define RX_CTRL_45_GET_rg_qp_eq_en_dly(reg32)                  REG_FLD_GET(RX_CTRL_45_FLD_rg_qp_eq_en_dly, (reg32))

#define RX_CTRL_46_GET_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en, (reg32))
#define RX_CTRL_46_GET_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en, (reg32))
#define RX_CTRL_46_GET_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en, (reg32))
#define RX_CTRL_46_GET_rg_reback_p0_lck2ref_en(reg32)          REG_FLD_GET(RX_CTRL_46_FLD_rg_reback_p0_lck2ref_en, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_last_lfps_finish(reg32)     REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_last_lfps_finish_sel(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish_sel, (reg32))
#define RX_CTRL_46_GET_rg_force_usb_sig_clr(reg32)             REG_FLD_GET(RX_CTRL_46_FLD_rg_force_usb_sig_clr, (reg32))
#define RX_CTRL_46_GET_rg_qp_pcie_gen1_cdr_pr_kband_div(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div, (reg32))
#define RX_CTRL_46_GET_rg_qp_pcie_gen2_cdr_pr_kband_div(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_pcie_cdr_pr_kband_div_en(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_pcie_cdr_pr_kband_div_en, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_power_st_change(reg32)      REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_power_st_change, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_power_st_change_sel(reg32)  REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_power_st_change_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_fre_lock_sel(reg32)               REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_fre_lock_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_power_st(reg32)    REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_power_st_sel(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_sigdet_en(reg32)   REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_sigdet_en_sel(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_afe_pwd(reg32)     REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_afe_pwd_sel(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_eye_pwd(reg32)     REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_eye_pwd_sel(reg32) REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_pr_pwd(reg32)      REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_pr_pwd_sel(reg32)  REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd_sel, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_pd_pwd(reg32)      REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd, (reg32))
#define RX_CTRL_46_GET_rg_qp_force_usb_pcie_pd_pwd_sel(reg32)  REG_FLD_GET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd_sel, (reg32))

#define RX_CTRL_47_GET_rg_qp_pcie_gen1_cdr_pr_dac_band(reg32)  REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_dac_band, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen2_cdr_pr_dac_band(reg32)  REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_dac_band, (reg32))
#define RX_CTRL_47_GET_rg_qp_force_pcie_cdr_pr_dac_band_en(reg32) REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_dac_band_en, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen1_cdr_pr_buf_in_sr(reg32) REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_buf_in_sr, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen2_cdr_pr_buf_in_sr(reg32) REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_buf_in_sr, (reg32))
#define RX_CTRL_47_GET_rg_qp_force_pcie_cdr_pr_buf_in_sr_en(reg32) REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_buf_in_sr_en, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen1_cdr_pr_beta_sel(reg32)  REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_beta_sel, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen2_cdr_pr_beta_sel(reg32)  REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_beta_sel, (reg32))
#define RX_CTRL_47_GET_rg_qp_force_pcie_cdr_pr_beta_sel_en(reg32) REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_beta_sel_en, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen1_cdr_lpf_ratio(reg32)    REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_lpf_ratio, (reg32))
#define RX_CTRL_47_GET_rg_qp_pcie_gen2_cdr_lpf_ratio(reg32)    REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_lpf_ratio, (reg32))
#define RX_CTRL_47_GET_rg_qp_force_pcie_cdr_lpf_ratio_en(reg32) REG_FLD_GET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_lpf_ratio_en, (reg32))

#define RX_CTRL_48_GET_rg_qp_force_pcie_crsdet_en_sel(reg32)   REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en_sel, (reg32))
#define RX_CTRL_48_GET_rg_qp_force_pcie_crsdet_en(reg32)       REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en, (reg32))
#define RX_CTRL_48_GET_rg_qp_force_rosc_rstb_sel(reg32)        REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_force_rosc_rstb_sel, (reg32))
#define RX_CTRL_48_GET_rg_qp_force_rosc_rstb(reg32)            REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_force_rosc_rstb, (reg32))
#define RX_CTRL_48_GET_rg_qp_pcie_gen1_cdr_phyck_div(reg32)    REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_phyck_div, (reg32))
#define RX_CTRL_48_GET_rg_qp_pcie_gen2_cdr_phyck_div(reg32)    REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_phyck_div, (reg32))
#define RX_CTRL_48_GET_rg_qp_force_pcie_cdr_phyck_div_en(reg32) REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_phyck_div_en, (reg32))
#define RX_CTRL_48_GET_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie(reg32) REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie, (reg32))
#define RX_CTRL_48_GET_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie(reg32) REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie, (reg32))
#define RX_CTRL_48_GET_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en(reg32) REG_FLD_GET(RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en, (reg32))

#define RX_CTRL_49_GET_rg_lfps_finish_time(reg32)              REG_FLD_GET(RX_CTRL_49_FLD_rg_lfps_finish_time, (reg32))
#define RX_CTRL_49_GET_rg_force_last_lfps_finish_latch_clr(reg32) REG_FLD_GET(RX_CTRL_49_FLD_rg_force_last_lfps_finish_latch_clr, (reg32))
#define RX_CTRL_49_GET_rg_lfps_detect_num(reg32)               REG_FLD_GET(RX_CTRL_49_FLD_rg_lfps_detect_num, (reg32))
#define RX_CTRL_49_GET_rg_force_signal_crsdet_out_sel(reg32)   REG_FLD_GET(RX_CTRL_49_FLD_rg_force_signal_crsdet_out_sel, (reg32))
#define RX_CTRL_49_GET_rg_force_signal_crsdet_lthout_sel(reg32) REG_FLD_GET(RX_CTRL_49_FLD_rg_force_signal_crsdet_lthout_sel, (reg32))
#define RX_CTRL_49_GET_rg_force_ad_crsdet_out(reg32)           REG_FLD_GET(RX_CTRL_49_FLD_rg_force_ad_crsdet_out, (reg32))
#define RX_CTRL_49_GET_rg_force_ad_crsdet_out_sel(reg32)       REG_FLD_GET(RX_CTRL_49_FLD_rg_force_ad_crsdet_out_sel, (reg32))
#define RX_CTRL_49_GET_rg_force_signal_beacon_out_sel(reg32)   REG_FLD_GET(RX_CTRL_49_FLD_rg_force_signal_beacon_out_sel, (reg32))
#define RX_CTRL_49_GET_rg_force_crsdet_lthout(reg32)           REG_FLD_GET(RX_CTRL_49_FLD_rg_force_crsdet_lthout, (reg32))
#define RX_CTRL_49_GET_rg_force_crsdet_lthout_sel(reg32)       REG_FLD_GET(RX_CTRL_49_FLD_rg_force_crsdet_lthout_sel, (reg32))
#define RX_CTRL_49_GET_rg_qp_crsdet_rst_time(reg32)            REG_FLD_GET(RX_CTRL_49_FLD_rg_qp_crsdet_rst_time, (reg32))
#define RX_CTRL_49_GET_ro_usb_mode(reg32)                      REG_FLD_GET(RX_CTRL_49_FLD_ro_usb_mode, (reg32))
#define RX_CTRL_49_GET_ro_pcie_mode(reg32)                     REG_FLD_GET(RX_CTRL_49_FLD_ro_pcie_mode, (reg32))
#define RX_CTRL_49_GET_ro_ssusb_qp_powerdown(reg32)            REG_FLD_GET(RX_CTRL_49_FLD_ro_ssusb_qp_powerdown, (reg32))
#define RX_CTRL_49_GET_ro_power_st_l2(reg32)                   REG_FLD_GET(RX_CTRL_49_FLD_ro_power_st_l2, (reg32))
#define RX_CTRL_49_GET_ro_power_st_l11_l12(reg32)              REG_FLD_GET(RX_CTRL_49_FLD_ro_power_st_l11_l12, (reg32))

#define RX_CTRL_50_GET_rg_p3_to_p0_do_eq_usb(reg32)            REG_FLD_GET(RX_CTRL_50_FLD_rg_p3_to_p0_do_eq_usb, (reg32))
#define RX_CTRL_50_GET_rg_p2_to_p0_do_eq_usb(reg32)            REG_FLD_GET(RX_CTRL_50_FLD_rg_p2_to_p0_do_eq_usb, (reg32))
#define RX_CTRL_50_GET_rg_p1_to_p0_do_eq_usb(reg32)            REG_FLD_GET(RX_CTRL_50_FLD_rg_p1_to_p0_do_eq_usb, (reg32))
#define RX_CTRL_50_GET_rg_qp_eq_en_dly_short(reg32)            REG_FLD_GET(RX_CTRL_50_FLD_rg_qp_eq_en_dly_short, (reg32))
#define RX_CTRL_50_GET_rg_qp_rx_eq_en_h_dly_short(reg32)       REG_FLD_GET(RX_CTRL_50_FLD_rg_qp_rx_eq_en_h_dly_short, (reg32))

#define ISR_CTRL_0_GET_trans_sd_fail_int(reg32)                REG_FLD_GET(ISR_CTRL_0_FLD_trans_sd_fail_int, (reg32))
#define ISR_CTRL_0_GET_phyrdy_int(reg32)                       REG_FLD_GET(ISR_CTRL_0_FLD_phyrdy_int, (reg32))
#define ISR_CTRL_0_GET_un_stb_saos_rdy_int(reg32)              REG_FLD_GET(ISR_CTRL_0_FLD_un_stb_saos_rdy_int, (reg32))
#define ISR_CTRL_0_GET_trans_rogue_onu_int(reg32)              REG_FLD_GET(ISR_CTRL_0_FLD_trans_rogue_onu_int, (reg32))

#define ISR_CTRL_1_GET_trans_los_int(reg32)                    REG_FLD_GET(ISR_CTRL_1_FLD_trans_los_int, (reg32))
#define ISR_CTRL_1_GET_un_stb_rx_rdy_int(reg32)                REG_FLD_GET(ISR_CTRL_1_FLD_un_stb_rx_rdy_int, (reg32))
#define ISR_CTRL_1_GET_trans_fault_int(reg32)                  REG_FLD_GET(ISR_CTRL_1_FLD_trans_fault_int, (reg32))
#define ISR_CTRL_1_GET_un_stb_eq_rdy_int(reg32)                REG_FLD_GET(ISR_CTRL_1_FLD_un_stb_eq_rdy_int, (reg32))

#define ISR_CTRL_2_GET_pma_rx_afifo_full_int(reg32)            REG_FLD_GET(ISR_CTRL_2_FLD_pma_rx_afifo_full_int, (reg32))
#define ISR_CTRL_2_GET_pma_rx_afifo_empty_int(reg32)           REG_FLD_GET(ISR_CTRL_2_FLD_pma_rx_afifo_empty_int, (reg32))
#define ISR_CTRL_2_GET_pma_tx_afifo_full_int(reg32)            REG_FLD_GET(ISR_CTRL_2_FLD_pma_tx_afifo_full_int, (reg32))
#define ISR_CTRL_2_GET_pma_tx_afifo_empty_int(reg32)           REG_FLD_GET(ISR_CTRL_2_FLD_pma_tx_afifo_empty_int, (reg32))

#define ISR_CTRL_3_GET_trans_laser_on_int(reg32)               REG_FLD_GET(ISR_CTRL_3_FLD_trans_laser_on_int, (reg32))
#define ISR_CTRL_3_GET_rx_sigdet_int(reg32)                    REG_FLD_GET(ISR_CTRL_3_FLD_rx_sigdet_int, (reg32))
#define ISR_CTRL_3_GET_rx_freqdet_unlock_int(reg32)            REG_FLD_GET(ISR_CTRL_3_FLD_rx_freqdet_unlock_int, (reg32))
#define ISR_CTRL_3_GET_tx_freqdet_unlock_int(reg32)            REG_FLD_GET(ISR_CTRL_3_FLD_tx_freqdet_unlock_int, (reg32))

#define ISR_CTRL_EN_0_GET_rg_trans_sd_fail_int_en(reg32)       REG_FLD_GET(ISR_CTRL_EN_0_FLD_rg_trans_sd_fail_int_en, (reg32))
#define ISR_CTRL_EN_0_GET_rg_phyrdy_int_en(reg32)              REG_FLD_GET(ISR_CTRL_EN_0_FLD_rg_phyrdy_int_en, (reg32))
#define ISR_CTRL_EN_0_GET_rg_un_stb_saos_rdy_int_en(reg32)     REG_FLD_GET(ISR_CTRL_EN_0_FLD_rg_un_stb_saos_rdy_int_en, (reg32))
#define ISR_CTRL_EN_0_GET_rg_trans_rogue_onu_int_en(reg32)     REG_FLD_GET(ISR_CTRL_EN_0_FLD_rg_trans_rogue_onu_int_en, (reg32))

#define ISR_CTRL_EN_1_GET_rg_trans_los_int_en(reg32)           REG_FLD_GET(ISR_CTRL_EN_1_FLD_rg_trans_los_int_en, (reg32))
#define ISR_CTRL_EN_1_GET_rg_un_stb_rx_rdy_int_en(reg32)       REG_FLD_GET(ISR_CTRL_EN_1_FLD_rg_un_stb_rx_rdy_int_en, (reg32))
#define ISR_CTRL_EN_1_GET_rg_trans_fault_int_en(reg32)         REG_FLD_GET(ISR_CTRL_EN_1_FLD_rg_trans_fault_int_en, (reg32))
#define ISR_CTRL_EN_1_GET_rg_un_stb_eq_rdy_int_en(reg32)       REG_FLD_GET(ISR_CTRL_EN_1_FLD_rg_un_stb_eq_rdy_int_en, (reg32))

#define ISR_CTRL_EN_2_GET_rg_pma_rx_afifo_full_int_en(reg32)   REG_FLD_GET(ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_full_int_en, (reg32))
#define ISR_CTRL_EN_2_GET_rg_pma_rx_afifo_empty_int_en(reg32)  REG_FLD_GET(ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_empty_int_en, (reg32))
#define ISR_CTRL_EN_2_GET_rg_pma_tx_afifo_full_int_en(reg32)   REG_FLD_GET(ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_full_int_en, (reg32))
#define ISR_CTRL_EN_2_GET_rg_pma_tx_afifo_empty_int_en(reg32)  REG_FLD_GET(ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_empty_int_en, (reg32))

#define ISR_CTRL_EN_3_GET_rg_trans_sd_fail_cnt_clr(reg32)      REG_FLD_GET(ISR_CTRL_EN_3_FLD_rg_trans_sd_fail_cnt_clr, (reg32))
#define ISR_CTRL_EN_3_GET_rg_trans_laser_on_int_en(reg32)      REG_FLD_GET(ISR_CTRL_EN_3_FLD_rg_trans_laser_on_int_en, (reg32))
#define ISR_CTRL_EN_3_GET_rg_rx_sigdet_int_en(reg32)           REG_FLD_GET(ISR_CTRL_EN_3_FLD_rg_rx_sigdet_int_en, (reg32))
#define ISR_CTRL_EN_3_GET_rg_rx_freqdet_unlock_int_en(reg32)   REG_FLD_GET(ISR_CTRL_EN_3_FLD_rg_rx_freqdet_unlock_int_en, (reg32))
#define ISR_CTRL_EN_3_GET_rg_tx_freqdet_unlock_int_en(reg32)   REG_FLD_GET(ISR_CTRL_EN_3_FLD_rg_tx_freqdet_unlock_int_en, (reg32))

#define ISR_SETTING_0_GET_rg_trans_tx_fault_pro(reg32)         REG_FLD_GET(ISR_SETTING_0_FLD_rg_trans_tx_fault_pro, (reg32))
#define ISR_SETTING_0_GET_rg_trans_rx_los_pro(reg32)           REG_FLD_GET(ISR_SETTING_0_FLD_rg_trans_rx_los_pro, (reg32))
#define ISR_SETTING_0_GET_rg_trans_tx_sd_pro(reg32)            REG_FLD_GET(ISR_SETTING_0_FLD_rg_trans_tx_sd_pro, (reg32))
#define ISR_SETTING_0_GET_rg_trans_tx_sd_inv(reg32)            REG_FLD_GET(ISR_SETTING_0_FLD_rg_trans_tx_sd_inv, (reg32))

#define ISR_SETTING_1_GET_rg_pma_show_probe_en(reg32)          REG_FLD_GET(ISR_SETTING_1_FLD_rg_pma_show_probe_en, (reg32))
#define ISR_SETTING_1_GET_rg_ftcal_high(reg32)                 REG_FLD_GET(ISR_SETTING_1_FLD_rg_ftcal_high, (reg32))
#define ISR_SETTING_1_GET_rg_ftcal_low(reg32)                  REG_FLD_GET(ISR_SETTING_1_FLD_rg_ftcal_low, (reg32))
#define ISR_SETTING_1_GET_rg_trans_rx_laser_on_pro(reg32)      REG_FLD_GET(ISR_SETTING_1_FLD_rg_trans_rx_laser_on_pro, (reg32))

#define ISR_SETTING_2_GET_rg_trans_sd_fail_cnt(reg32)          REG_FLD_GET(ISR_SETTING_2_FLD_rg_trans_sd_fail_cnt, (reg32))
#define ISR_SETTING_2_GET_rg_pma_rx_afifo_reach_th(reg32)      REG_FLD_GET(ISR_SETTING_2_FLD_rg_pma_rx_afifo_reach_th, (reg32))
#define ISR_SETTING_2_GET_rg_pma_tx_afifo_reach_th(reg32)      REG_FLD_GET(ISR_SETTING_2_FLD_rg_pma_tx_afifo_reach_th, (reg32))

#define ISR_SETTING_3_GET_rg_trans_tx_fault_inv(reg32)         REG_FLD_GET(ISR_SETTING_3_FLD_rg_trans_tx_fault_inv, (reg32))
#define ISR_SETTING_3_GET_rg_trans_rx_sd_inv(reg32)            REG_FLD_GET(ISR_SETTING_3_FLD_rg_trans_rx_sd_inv, (reg32))
#define ISR_SETTING_3_GET_rg_trans_rx_data_inv(reg32)          REG_FLD_GET(ISR_SETTING_3_FLD_rg_trans_rx_data_inv, (reg32))
#define ISR_SETTING_3_GET_rg_trans_tx_data_inv(reg32)          REG_FLD_GET(ISR_SETTING_3_FLD_rg_trans_tx_data_inv, (reg32))
#define ISR_SETTING_3_GET_rg_trans_burst_inv(reg32)            REG_FLD_GET(ISR_SETTING_3_FLD_rg_trans_burst_inv, (reg32))
#define ISR_SETTING_3_GET_rg_tx_dly_en(reg32)                  REG_FLD_GET(ISR_SETTING_3_FLD_rg_tx_dly_en, (reg32))

#define ISR_CTRL_5_GET_DA_SSUSB_CDR_LCK2DATA_int(reg32)        REG_FLD_GET(ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2DATA_int, (reg32))
#define ISR_CTRL_5_GET_DA_SSUSB_CDR_LCK2REF_int(reg32)         REG_FLD_GET(ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2REF_int, (reg32))
#define ISR_CTRL_5_GET_un_stb_pi_rdy_int(reg32)                REG_FLD_GET(ISR_CTRL_5_FLD_un_stb_pi_rdy_int, (reg32))
#define ISR_CTRL_5_GET_un_stb_leq_rdy_int(reg32)               REG_FLD_GET(ISR_CTRL_5_FLD_un_stb_leq_rdy_int, (reg32))
#define ISR_CTRL_5_GET_un_stb_sdos_rdy_int(reg32)              REG_FLD_GET(ISR_CTRL_5_FLD_un_stb_sdos_rdy_int, (reg32))

#define ISR_CTRL_EN_5_GET_rg_lck2data_to_lck2ref_en(reg32)     REG_FLD_GET(ISR_CTRL_EN_5_FLD_rg_lck2data_to_lck2ref_en, (reg32))
#define ISR_CTRL_EN_5_GET_rg_lck2ref_to_lck2data_en(reg32)     REG_FLD_GET(ISR_CTRL_EN_5_FLD_rg_lck2ref_to_lck2data_en, (reg32))
#define ISR_CTRL_EN_5_GET_rg_un_stb_pi_rdy_int_en(reg32)       REG_FLD_GET(ISR_CTRL_EN_5_FLD_rg_un_stb_pi_rdy_int_en, (reg32))
#define ISR_CTRL_EN_5_GET_rg_un_stb_leq_rdy_int_en(reg32)      REG_FLD_GET(ISR_CTRL_EN_5_FLD_rg_un_stb_leq_rdy_int_en, (reg32))
#define ISR_CTRL_EN_5_GET_rg_un_stb_sdos_rdy_int_en(reg32)     REG_FLD_GET(ISR_CTRL_EN_5_FLD_rg_un_stb_sdos_rdy_int_en, (reg32))

#define ISR_CTRL_6_GET_stb_eq_rdy_int(reg32)                   REG_FLD_GET(ISR_CTRL_6_FLD_stb_eq_rdy_int, (reg32))
#define ISR_CTRL_6_GET_stb_pi_rdy_int(reg32)                   REG_FLD_GET(ISR_CTRL_6_FLD_stb_pi_rdy_int, (reg32))
#define ISR_CTRL_6_GET_rx_freqdet_lock_int(reg32)              REG_FLD_GET(ISR_CTRL_6_FLD_rx_freqdet_lock_int, (reg32))
#define ISR_CTRL_6_GET_stb_sdos_rdy_int(reg32)                 REG_FLD_GET(ISR_CTRL_6_FLD_stb_sdos_rdy_int, (reg32))
#define ISR_CTRL_6_GET_stb_saos_rdy_int(reg32)                 REG_FLD_GET(ISR_CTRL_6_FLD_stb_saos_rdy_int, (reg32))
#define ISR_CTRL_6_GET_stb_leq_rdy_int(reg32)                  REG_FLD_GET(ISR_CTRL_6_FLD_stb_leq_rdy_int, (reg32))
#define ISR_CTRL_6_GET_link_erro_int(reg32)                    REG_FLD_GET(ISR_CTRL_6_FLD_link_erro_int, (reg32))

#define ISR_CTRL_EN_6_GET_rg_stb_eq_rdy_int_en(reg32)          REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_stb_eq_rdy_int_en, (reg32))
#define ISR_CTRL_EN_6_GET_rg_stb_pi_rdy_int_en(reg32)          REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_stb_pi_rdy_int_en, (reg32))
#define ISR_CTRL_EN_6_GET_rg_rx_freqdet_lock_int_en(reg32)     REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_rx_freqdet_lock_int_en, (reg32))
#define ISR_CTRL_EN_6_GET_rg_stb_sdos_rdy_int_en(reg32)        REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_stb_sdos_rdy_int_en, (reg32))
#define ISR_CTRL_EN_6_GET_rg_stb_saos_rdy_int_en(reg32)        REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_stb_saos_rdy_int_en, (reg32))
#define ISR_CTRL_EN_6_GET_rg_stb_leq_rdy_int_en(reg32)         REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_stb_leq_rdy_int_en, (reg32))
#define ISR_CTRL_EN_6_GET_rg_link_erro_int_en(reg32)           REG_FLD_GET(ISR_CTRL_EN_6_FLD_rg_link_erro_int_en, (reg32))

#define QP_TX_DBG_0_GET_ro_qp_tx_debug3(reg32)                 REG_FLD_GET(QP_TX_DBG_0_FLD_ro_qp_tx_debug3, (reg32))
#define QP_TX_DBG_0_GET_ro_qp_tx_debug2(reg32)                 REG_FLD_GET(QP_TX_DBG_0_FLD_ro_qp_tx_debug2, (reg32))
#define QP_TX_DBG_0_GET_ro_qp_tx_debug1(reg32)                 REG_FLD_GET(QP_TX_DBG_0_FLD_ro_qp_tx_debug1, (reg32))
#define QP_TX_DBG_0_GET_ro_qp_tx_debug0(reg32)                 REG_FLD_GET(QP_TX_DBG_0_FLD_ro_qp_tx_debug0, (reg32))

#define QP_TX_DBG_1_GET_ro_qp_tx_debug7(reg32)                 REG_FLD_GET(QP_TX_DBG_1_FLD_ro_qp_tx_debug7, (reg32))
#define QP_TX_DBG_1_GET_ro_qp_tx_debug6(reg32)                 REG_FLD_GET(QP_TX_DBG_1_FLD_ro_qp_tx_debug6, (reg32))
#define QP_TX_DBG_1_GET_ro_qp_tx_debug5(reg32)                 REG_FLD_GET(QP_TX_DBG_1_FLD_ro_qp_tx_debug5, (reg32))
#define QP_TX_DBG_1_GET_ro_qp_tx_debug4(reg32)                 REG_FLD_GET(QP_TX_DBG_1_FLD_ro_qp_tx_debug4, (reg32))

#define QP_LFPS_DBG_0_GET_ro_rx_lfps_debug3(reg32)             REG_FLD_GET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug3, (reg32))
#define QP_LFPS_DBG_0_GET_ro_rx_lfps_debug2(reg32)             REG_FLD_GET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug2, (reg32))
#define QP_LFPS_DBG_0_GET_ro_rx_lfps_debug1(reg32)             REG_FLD_GET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug1, (reg32))
#define QP_LFPS_DBG_0_GET_ro_rx_lfps_debug0(reg32)             REG_FLD_GET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug0, (reg32))

#define QP_LFPS_DBG_1_GET_ro_rx_lfps_debug7(reg32)             REG_FLD_GET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug7, (reg32))
#define QP_LFPS_DBG_1_GET_ro_rx_lfps_debug6(reg32)             REG_FLD_GET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug6, (reg32))
#define QP_LFPS_DBG_1_GET_ro_rx_lfps_debug5(reg32)             REG_FLD_GET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug5, (reg32))
#define QP_LFPS_DBG_1_GET_ro_rx_lfps_debug4(reg32)             REG_FLD_GET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug4, (reg32))

#define QP_LFPS_DBG_2_GET_ro_rx_lfps_debug8(reg32)             REG_FLD_GET(QP_LFPS_DBG_2_FLD_ro_rx_lfps_debug8, (reg32))

#define QP_PRBS_DBG_0_GET_ro_bistctl_prbs_err_cnt(reg32)       REG_FLD_GET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_err_cnt, (reg32))
#define QP_PRBS_DBG_0_GET_ro_bistctl_prbs_compare(reg32)       REG_FLD_GET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_compare, (reg32))
#define QP_PRBS_DBG_0_GET_ro_bistctl_prbs_fail(reg32)          REG_FLD_GET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_fail, (reg32))
#define QP_PRBS_DBG_0_GET_ro_bistctl_prbs_done(reg32)          REG_FLD_GET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_done, (reg32))

#define QP_PRBS_DBG_1_GET_ro_bistctl_prbs_bit_err_fw_using(reg32) REG_FLD_GET(QP_PRBS_DBG_1_FLD_ro_bistctl_prbs_bit_err_fw_using, (reg32))

#define QP_PRBS_DBG_2_GET_ro_bistctl_prbs_bit_err_period_num(reg32) REG_FLD_GET(QP_PRBS_DBG_2_FLD_ro_bistctl_prbs_bit_err_period_num, (reg32))

#define QP_PRBS_DBG_3_GET_ro_prbs_bist_debug_3(reg32)          REG_FLD_GET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_3, (reg32))
#define QP_PRBS_DBG_3_GET_ro_prbs_bist_debug_2(reg32)          REG_FLD_GET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_2, (reg32))
#define QP_PRBS_DBG_3_GET_ro_prbs_bist_debug_1(reg32)          REG_FLD_GET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_1, (reg32))
#define QP_PRBS_DBG_3_GET_ro_prbs_bist_debug_0(reg32)          REG_FLD_GET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_0, (reg32))

#define QP_PRBS_DBG_4_GET_ro_prbs_bist_debug_7(reg32)          REG_FLD_GET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_7, (reg32))
#define QP_PRBS_DBG_4_GET_ro_prbs_bist_debug_6(reg32)          REG_FLD_GET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_6, (reg32))
#define QP_PRBS_DBG_4_GET_ro_prbs_bist_debug_5(reg32)          REG_FLD_GET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_5, (reg32))
#define QP_PRBS_DBG_4_GET_ro_prbs_bist_debug_4(reg32)          REG_FLD_GET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_4, (reg32))

#define QP_PRBS_DBG_5_GET_ro_prbs_bist_debug_10(reg32)         REG_FLD_GET(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_10, (reg32))
#define QP_PRBS_DBG_5_GET_ro_prbs_bist_debug_9(reg32)          REG_FLD_GET(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_9, (reg32))
#define QP_PRBS_DBG_5_GET_ro_prbs_bist_debug_8(reg32)          REG_FLD_GET(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_8, (reg32))

#define QP_TX_BIST_DBG_0_GET_ro_bist_status(reg32)             REG_FLD_GET(QP_TX_BIST_DBG_0_FLD_ro_bist_status, (reg32))
#define QP_TX_BIST_DBG_0_GET_ro_bist_len_error(reg32)          REG_FLD_GET(QP_TX_BIST_DBG_0_FLD_ro_bist_len_error, (reg32))
#define QP_TX_BIST_DBG_0_GET_ro_bist_chk_done(reg32)           REG_FLD_GET(QP_TX_BIST_DBG_0_FLD_ro_bist_chk_done, (reg32))
#define QP_TX_BIST_DBG_0_GET_ro_bist_error_cnt(reg32)          REG_FLD_GET(QP_TX_BIST_DBG_0_FLD_ro_bist_error_cnt, (reg32))

#define QP_TX_BIST_DBG_1_GET_ro_pcs_bist_debug(reg32)          REG_FLD_GET(QP_TX_BIST_DBG_1_FLD_ro_pcs_bist_debug, (reg32))

#define QP_R2T_AFIFO_DBG_GET_ro_r2t_afifo_debug(reg32)         REG_FLD_GET(QP_R2T_AFIFO_DBG_FLD_ro_r2t_afifo_debug, (reg32))

#define QP_T2R_AFIFO_DBG_GET_ro_t2r_afifo_debug(reg32)         REG_FLD_GET(QP_T2R_AFIFO_DBG_FLD_ro_t2r_afifo_debug, (reg32))

#define QP_TX_DA_CTRL_0_SET_rg_ssusb_tx_eidle_sel(reg32, val)  REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_ssusb_tx_eidle_sel, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_fval_tx_term_vref_sel(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_vref_sel, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_fval_tx_term_sel(reg32, val)    REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_sel, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_fval_tx_impcalib_en(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_impcalib_en, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_tx_termcal_count(reg32, val)    REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_tx_termcal_count, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_termcal_vsel_timer(reg32, val)  REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_termcal_vsel_timer, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_force_tx_calib_en(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_force_tx_calib_en, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_impcalib_en(reg32, val)         REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_impcalib_en, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_rxdet_rd_wait_timer(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_rxdet_rd_wait_timer, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_rxdet_mask_clr(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_rxdet_mask_clr, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_force_qp_tx_reserve(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_force_qp_tx_reserve, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_rxdet_en_window(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_rxdet_en_window, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_tx_rxdet_en(reg32, val)         REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_tx_rxdet_en, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_fval_rx_det_en(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_fval_rx_det_en, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_force_rx_det_ctrl(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_force_rx_det_ctrl, (reg32), (val))
#define QP_TX_DA_CTRL_0_SET_rg_fval_tx_eidle_lp_off(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_eidle_lp_off, (reg32), (val))

#define QP_TX_DA_CTRL_1_SET_rg_fval_tx_data(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_fval_tx_data_en(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data_en, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_fval_tx_ser_en(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_ser_en, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_txff_redun_en(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_txff_redun_en, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_force_tx_data_ctrl(reg32, val)  REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_data_ctrl, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_force_tx_bit_inverse(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_inverse, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_tfifo_bypass(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_tfifo_bypass, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_force_tx_bit_reverse(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_reverse, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_tfifo_rst(reg32, val)           REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_tfifo_rst, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_tx_ser_en_ps_mode(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_tx_ser_en_ps_mode, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_fval_tx_lfps(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_fval_tx_lfps_en(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps_en, (reg32), (val))
#define QP_TX_DA_CTRL_1_SET_rg_force_tx_lfps_ctrl(reg32, val)  REG_FLD_SET(QP_TX_DA_CTRL_1_FLD_rg_force_tx_lfps_ctrl, (reg32), (val))

#define QP_TX_DA_CTRL_2_SET_rg_qp_tx_dem_mode(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_mode, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_force_tx_dem_sel(reg32, val)    REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem_sel, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_qp_tx_dem_sel(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_sel, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_da_qp_tx_drv_en(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_drv_en, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_da_qp_tx_dem(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_dem, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_tx_fir_c2(reg32, val)           REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c2, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_tx_fir_c1(reg32, val)           REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c1, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_tx_fir_c0b(reg32, val)          REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c0b, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_tx_fir_cn1(reg32, val)          REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_cn1, (reg32), (val))
#define QP_TX_DA_CTRL_2_SET_rg_force_tx_dem(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem, (reg32), (val))

#define QP_TX_DA_CTRL_3_SET_rg_ssusb_tx_ser_en_sel(reg32, val) REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_ssusb_tx_ser_en_sel, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_tx_data_rate_sel(reg32, val)    REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_tx_data_rate_sel, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_force_tphy_mode(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_force_tphy_mode, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_qphy_redun_sel(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_qphy_redun_sel, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_test_tx_data_count(reg32, val)  REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_count, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_test_tx_lfps_type(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_type, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_test_tx_cp8(reg32, val)         REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_cp8, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_test_tx_data_en(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_en, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_test_tx_lfps_en(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_en, (reg32), (val))
#define QP_TX_DA_CTRL_3_SET_rg_tx_data_test_mode(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_3_FLD_rg_tx_data_test_mode, (reg32), (val))

#define QP_TX_DA_CTRL_4_SET_rg_bist_error_patt(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_4_FLD_rg_bist_error_patt, (reg32), (val))
#define QP_TX_DA_CTRL_4_SET_rg_lock_rx20b_inv(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_4_FLD_rg_lock_rx20b_inv, (reg32), (val))
#define QP_TX_DA_CTRL_4_SET_rg_test_rx_bist_en(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_4_FLD_rg_test_rx_bist_en, (reg32), (val))
#define QP_TX_DA_CTRL_4_SET_rg_bist_add_error_en(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_4_FLD_rg_bist_add_error_en, (reg32), (val))
#define QP_TX_DA_CTRL_4_SET_rg_test_tx_add_id_en(reg32, val)   REG_FLD_SET(QP_TX_DA_CTRL_4_FLD_rg_test_tx_add_id_en, (reg32), (val))
#define QP_TX_DA_CTRL_4_SET_rg_test_tx_patt_sel(reg32, val)    REG_FLD_SET(QP_TX_DA_CTRL_4_FLD_rg_test_tx_patt_sel, (reg32), (val))

#define QP_TX_DA_CTRL_5_SET_rg_test_tx_patt0(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_5_FLD_rg_test_tx_patt0, (reg32), (val))

#define QP_TX_DA_CTRL_6_SET_rg_test_tx_patt1(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_6_FLD_rg_test_tx_patt1, (reg32), (val))

#define QP_TX_DA_CTRL_7_SET_rg_test_tx_patt2(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_7_FLD_rg_test_tx_patt2, (reg32), (val))

#define QP_TX_DA_CTRL_8_SET_rg_test_tx_patt3(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_8_FLD_rg_test_tx_patt3, (reg32), (val))

#define QP_TX_DA_CTRL_9_SET_rg_test_tseq_cnt(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_test_tseq_cnt, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_r2t_data_en_dly(reg32, val)     REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_r2t_data_en_dly, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_r2tlb_fiforst(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_fiforst, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_r2tlb_bypass(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_bypass, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_t2rlb_fiforst(reg32, val)       REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_t2rlb_fiforst, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_t2rlb_int_en(reg32, val)        REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_t2rlb_int_en, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_r2tlb_mode(reg32, val)          REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_mode, (reg32), (val))
#define QP_TX_DA_CTRL_9_SET_rg_test_tseq_mode(reg32, val)      REG_FLD_SET(QP_TX_DA_CTRL_9_FLD_rg_test_tseq_mode, (reg32), (val))

#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_prbs_fail_threshold(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_fail_threshold, (reg32), (val))
#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_prbs_check_cnt(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_check_cnt, (reg32), (val))
#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_io_data_inv(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_io_data_inv, (reg32), (val))
#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_bit_error_rst_sel(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_bit_error_rst_sel, (reg32), (val))
#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_pat_rx_check_en(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_rx_check_en, (reg32), (val))
#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_pat_tx_en(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_tx_en, (reg32), (val))
#define QP_PMA_BIST_CTRL_0_SET_rg_bistctl_pat_sel(reg32, val)  REG_FLD_SET(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_sel, (reg32), (val))

#define QP_PMA_BIST_CTRL_1_SET_rg_bistctl_prbs_init_seed(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_1_FLD_rg_bistctl_prbs_init_seed, (reg32), (val))

#define QP_PMA_BIST_CTRL_2_SET_rg_bistctl_align_pattern(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_2_FLD_rg_bistctl_align_pattern, (reg32), (val))

#define QP_PMA_BIST_CTRL_3_SET_rg_bist_tx_data_pollution_latch(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution_latch, (reg32), (val))
#define QP_PMA_BIST_CTRL_3_SET_rg_bist_tx_data_pollution(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution, (reg32), (val))

#define QP_PMA_BIST_CTRL_4_SET_rg_bistctl_prbs_check_timer(reg32, val) REG_FLD_SET(QP_PMA_BIST_CTRL_4_FLD_rg_bistctl_prbs_check_timer, (reg32), (val))

#define QP_RX_LFPS_CTRL_0_SET_rg_rxlfps_p3_entry(reg32, val)   REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_p3_entry, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_ssusb_lfps_sel(reg32, val)    REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_lfps_sel, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_ssusb_rxlfps_lob(reg32, val)  REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_lob, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_ssusb_rxlfps_upb(reg32, val)  REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_upb, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_ssusb_rxlfps_udf(reg32, val)  REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_udf, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_ssusb_rxlfps_ovf(reg32, val)  REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_ovf, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_rxlfps_deglitch(reg32, val)   REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_deglitch, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_rxlfps_pwd(reg32, val)        REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_pwd, (reg32), (val))
#define QP_RX_LFPS_CTRL_0_SET_rg_rxlfps_mon_en(reg32, val)     REG_FLD_SET(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_mon_en, (reg32), (val))

#define QP_TX_DETRX_TMR_SET_rg_tx_reserved_bit(reg32, val)     REG_FLD_SET(QP_TX_DETRX_TMR_FLD_rg_tx_reserved_bit, (reg32), (val))
#define QP_TX_DETRX_TMR_SET_rg_force_tx_detrx_out_val(reg32, val) REG_FLD_SET(QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out_val, (reg32), (val))
#define QP_TX_DETRX_TMR_SET_rg_force_tx_detrx_out(reg32, val)  REG_FLD_SET(QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out, (reg32), (val))
#define QP_TX_DETRX_TMR_SET_rg_tx_detrx_wait_timer(reg32, val) REG_FLD_SET(QP_TX_DETRX_TMR_FLD_rg_tx_detrx_wait_timer, (reg32), (val))

#define PON_RXFEDIG_CTRL_0_SET_RG_SSUSB_RX_DFE_RST(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_RST, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_SSUSB_RX_DFE_EN(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_EN, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_SSUSB_RX_FR_MODE(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_FR_MODE, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_SSUSB_FORCE_RX_FR_MODE(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_FORCE_RX_FR_MODE, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_TRI_DET_EN(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_TRI_DET_EN, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_STOPTIME(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_STOPTIME, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_RX500M_CK_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_RX500M_CK_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_PILPO_ROUT(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_PILPO_ROUT, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_GATED_RXD_B(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_GATED_RXD_B, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_EYE_MON_EN(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_MON_EN, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_EYE_CNT_EN(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_CNT_EN, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_DFE_TOG(reg32, val)    REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFE_TOG, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_DFEYEN_STOP_DIS(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEYEN_STOP_DIS, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_DFEX_RST(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_RST, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_DFEX_EN(reg32, val)    REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_EN, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_DFEX_DIS(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_DIS, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_DFEXEN_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEXEN_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_CHK_EYE_H(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_CHK_EYE_H, (reg32), (val))
#define PON_RXFEDIG_CTRL_0_SET_RG_QP_EQ_ALGRTHM_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_ALGRTHM_SEL, (reg32), (val))

#define PON_RXFEDIG_CTRL_1_SET_RG_QP_EQ_DD1LOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1LOS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_1_SET_RG_QP_EQ_DD1HOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1HOS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_1_SET_RG_QP_EQ_DD0LOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0LOS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_1_SET_RG_QP_EQ_DD0HOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0HOS_LFI, (reg32), (val))

#define PON_RXFEDIG_CTRL_2_SET_RG_QP_EQ_DEYE1OS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE1OS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_2_SET_RG_QP_EQ_DEYE0OS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE0OS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_2_SET_RG_QP_EQ_DE1OS_LFI(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE1OS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_2_SET_RG_QP_EQ_DE0OS_LFI(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE0OS_LFI, (reg32), (val))

#define PON_RXFEDIG_CTRL_3_SET_RG_QP_EQ_DHHL_LFI(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHL_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_3_SET_RG_QP_EQ_DHHLOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHLOS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_3_SET_RG_QP_EQ_DFEYEN_DUR(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEYEN_DUR, (reg32), (val))
#define PON_RXFEDIG_CTRL_3_SET_RG_QP_EQ_DFEX_LF_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEX_LF_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_3_SET_RG_QP_EQ_DFEXEN_DUR(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEXEN_DUR, (reg32), (val))

#define PON_RXFEDIG_CTRL_4_SET_RG_QP_EQ_DLEQ_LFI_GEN3(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN3, (reg32), (val))
#define PON_RXFEDIG_CTRL_4_SET_RG_QP_EQ_DLEQ_LFI_GEN2(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN2, (reg32), (val))
#define PON_RXFEDIG_CTRL_4_SET_RG_QP_EQ_DLEQ_LFI_GEN1(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN1, (reg32), (val))
#define PON_RXFEDIG_CTRL_4_SET_RG_QP_EQ_DLEQOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQOS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_4_SET_RG_QP_EQ_DHHL_LF_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DHHL_LF_SEL, (reg32), (val))

#define PON_RXFEDIG_CTRL_5_SET_RG_QP_EQ_DSAOS_LF_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DSAOS_LF_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_5_SET_RG_QP_EQ_DLHL_LF_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LF_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_5_SET_RG_QP_EQ_DLHL_LFI(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_5_SET_RG_QP_EQ_DLHLOS_LFI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHLOS_LFI, (reg32), (val))
#define PON_RXFEDIG_CTRL_5_SET_RG_QP_EQ_DLEQ_LF_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LF_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_5_SET_RG_QP_EQ_DLEQ_LFI_GEN4(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LFI_GEN4, (reg32), (val))

#define PON_RXFEDIG_CTRL_6_SET_RG_QP_EQ_EYE1_Y(reg32, val)     REG_FLD_SET(PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE1_Y, (reg32), (val))
#define PON_RXFEDIG_CTRL_6_SET_RG_QP_EQ_EYE0_Y(reg32, val)     REG_FLD_SET(PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE0_Y, (reg32), (val))

#define PON_RXFEDIG_CTRL_7_SET_RG_QP_EQ_EYE_CNT(reg32, val)    REG_FLD_SET(PON_RXFEDIG_CTRL_7_FLD_RG_QP_EQ_EYE_CNT, (reg32), (val))

#define PON_RXFEDIG_CTRL_8_SET_RG_QP_EQ_LEQMAX(reg32, val)     REG_FLD_SET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_LEQMAX, (reg32), (val))
#define PON_RXFEDIG_CTRL_8_SET_RG_QP_EQ_ISIFLAG_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_ISIFLAG_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_8_SET_RG_QP_EQ_EYE_XOFFSET(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_XOFFSET, (reg32), (val))
#define PON_RXFEDIG_CTRL_8_SET_RG_QP_EQ_EYE_MASK(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_MASK, (reg32), (val))

#define PON_RXFEDIG_CTRL_9_SET_RG_QP_EQ_PI0_INI(reg32, val)    REG_FLD_SET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_PI0_INI, (reg32), (val))
#define PON_RXFEDIG_CTRL_9_SET_RG_QP_EQ_MON_SEL(reg32, val)    REG_FLD_SET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_MON_SEL, (reg32), (val))
#define PON_RXFEDIG_CTRL_9_SET_RG_QP_EQ_LEQ_STOP_TO(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_STOP_TO, (reg32), (val))
#define PON_RXFEDIG_CTRL_9_SET_RG_QP_EQ_LEQ_SHIFT(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_SHIFT, (reg32), (val))
#define PON_RXFEDIG_CTRL_9_SET_RG_QP_EQ_LEQOSC_DLYCNT(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQOSC_DLYCNT, (reg32), (val))

#define PON_RXFEDIG_CTRL_10_SET_RG_QP_EQ_PI_KPGAIN(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI_KPGAIN, (reg32), (val))
#define PON_RXFEDIG_CTRL_10_SET_RG_QP_EQ_PIEYE_INI(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PIEYE_INI, (reg32), (val))
#define PON_RXFEDIG_CTRL_10_SET_RG_QP_EQ_PI90_INI(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90_INI, (reg32), (val))
#define PON_RXFEDIG_CTRL_10_SET_RG_QP_EQ_PI90CK_SEL(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90CK_SEL, (reg32), (val))

#define PON_RXFEDIG_CTRL_11_SET_RG_QP_EQ_RESERVED(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_11_FLD_RG_QP_EQ_RESERVED, (reg32), (val))

#define PON_RXFEDIG_CTRL_12_SET_RG_QP_EQ_REV(reg32, val)       REG_FLD_SET(PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV, (reg32), (val))
#define PON_RXFEDIG_CTRL_12_SET_RG_QP_EQ_REV_1(reg32, val)     REG_FLD_SET(PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV_1, (reg32), (val))

#define PON_RXFEDIG_CTRL_13_SET_RG_QP_EQ_STARTTIME(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_STARTTIME, (reg32), (val))
#define PON_RXFEDIG_CTRL_13_SET_RG_QP_EQ_SIGDET(reg32, val)    REG_FLD_SET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SIGDET, (reg32), (val))
#define PON_RXFEDIG_CTRL_13_SET_RG_QP_EQ_SD_CNT1(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT1, (reg32), (val))
#define PON_RXFEDIG_CTRL_13_SET_RG_QP_EQ_SD_CNT0(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT0, (reg32), (val))

#define PON_RXFEDIG_CTRL_14_SET_RG_QP_EQ_TRI_DET_TH(reg32, val) REG_FLD_SET(PON_RXFEDIG_CTRL_14_FLD_RG_QP_EQ_TRI_DET_TH, (reg32), (val))

#define PON_RXFEDIG_STS_0_SET_RGS_SSUSB_EQ_LEQ_STOP(reg32, val) REG_FLD_SET(PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_LEQ_STOP, (reg32), (val))
#define PON_RXFEDIG_STS_0_SET_RGS_SSUSB_EQ_EYE_CNT_RDY(reg32, val) REG_FLD_SET(PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_EYE_CNT_RDY, (reg32), (val))

#define PON_RXFEDIG_STS_1_SET_RGS_SSUSB_EQ_DCD1L(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1L, (reg32), (val))
#define PON_RXFEDIG_STS_1_SET_RGS_SSUSB_EQ_DCD1H(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1H, (reg32), (val))
#define PON_RXFEDIG_STS_1_SET_RGS_SSUSB_EQ_DCD0L(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0L, (reg32), (val))
#define PON_RXFEDIG_STS_1_SET_RGS_SSUSB_EQ_DCD0H(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0H, (reg32), (val))

#define PON_RXFEDIG_STS_2_SET_RGS_SSUSB_EQ_DCEYE1(reg32, val)  REG_FLD_SET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE1, (reg32), (val))
#define PON_RXFEDIG_STS_2_SET_RGS_SSUSB_EQ_DCEYE0(reg32, val)  REG_FLD_SET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE0, (reg32), (val))
#define PON_RXFEDIG_STS_2_SET_RGS_SSUSB_EQ_DCE1(reg32, val)    REG_FLD_SET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE1, (reg32), (val))
#define PON_RXFEDIG_STS_2_SET_RGS_SSUSB_EQ_DCE0(reg32, val)    REG_FLD_SET(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE0, (reg32), (val))

#define PON_RXFEDIG_STS_3_SET_RGS_SSUSB_EQ_DCLHL(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLHL, (reg32), (val))
#define PON_RXFEDIG_STS_3_SET_RGS_SSUSB_EQ_DCLEQOS(reg32, val) REG_FLD_SET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQOS, (reg32), (val))
#define PON_RXFEDIG_STS_3_SET_RGS_SSUSB_EQ_DCLEQ(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQ, (reg32), (val))
#define PON_RXFEDIG_STS_3_SET_RGS_SSUSB_EQ_DCHHL(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCHHL, (reg32), (val))

#define PON_RXFEDIG_STS_4_SET_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0(reg32, val) REG_FLD_SET(PON_RXFEDIG_STS_4_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0, (reg32), (val))

#define PON_RXFEDIG_STS_5_SET_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1(reg32, val) REG_FLD_SET(PON_RXFEDIG_STS_5_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1, (reg32), (val))

#define PON_RXFEDIG_STS_7_SET_RGS_SSUSB_EQ_STATUS(reg32, val)  REG_FLD_SET(PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_STATUS, (reg32), (val))
#define PON_RXFEDIG_STS_7_SET_RGS_SSUSB_EQ_PILPO(reg32, val)   REG_FLD_SET(PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_PILPO, (reg32), (val))

#define PON_RXFEDIG_STS_8_SET_RGS_SSUSB_RX_SD_OUT(reg32, val)  REG_FLD_SET(PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_RX_SD_OUT, (reg32), (val))
#define PON_RXFEDIG_STS_8_SET_RGS_SSUSB_EQ_PROBE_OUT(reg32, val) REG_FLD_SET(PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_EQ_PROBE_OUT, (reg32), (val))

#define PON_RXFEDIG_CTRL_15_SET_RG_PQ_FEDIG_MODE(reg32, val)   REG_FLD_SET(PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_MODE, (reg32), (val))
#define PON_RXFEDIG_CTRL_15_SET_RG_PQ_FEDIG_SPEED(reg32, val)  REG_FLD_SET(PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_SPEED, (reg32), (val))

#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_int_los_inv(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_int_los_inv, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_tdc_los_inv(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_los_inv, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_tdc_ck_en_and_los(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_ck_en_and_los, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_tdc_lck2ref_sel(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_lck2ref_sel, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_sw_lcpll_en(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_lcpll_en_inv(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_lcpll_hw_ctrl_mode(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_ncpo_los_hold_en(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_los_hold_en, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_ncpo_det_en(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_det_en, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_lcpll_force_on(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on, (reg32), (val))

#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_ck_stb_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_pcw_man_load_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_en_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_man_pwdb(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb, (reg32), (val))

#define SS_LCPLL_PWCTL_SETTING_2_SET_rg_ncpo_ana_msb(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_ncpo_ana_msb, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_2_SET_rg_tdc_mst_en(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_mst_en, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_2_SET_rg_tdc_ck_stb_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_ck_stb_timer, (reg32), (val))

#define SS_LCPLL_PWCTL_DBG_SETTING_SET_rg_lcpll_ledck_div(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_DBG_SETTING_FLD_rg_lcpll_ledck_div, (reg32), (val))

#define SS_LCPLL_TDC_PW_0_SET_rg_lcpll_dpma_dds1_iso_disable(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_iso_disable, (reg32), (val))
#define SS_LCPLL_TDC_PW_0_SET_rg_lcpll_dpma_dds1_pwdb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_pwdb, (reg32), (val))
#define SS_LCPLL_TDC_PW_0_SET_rg_lcpll_dpma_autopw_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_autopw_en, (reg32), (val))
#define SS_LCPLL_TDC_PW_0_SET_rg_lcpll_tdc_dig_pwdb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_tdc_dig_pwdb, (reg32), (val))

#define SS_LCPLL_TDC_PW_1_SET_rg_lcpll_dpma_dds1_pcw_ncpo_chg(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg, (reg32), (val))
#define SS_LCPLL_TDC_PW_1_SET_rg_lcpll_dpma_dds1_rstb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb, (reg32), (val))
#define SS_LCPLL_TDC_PW_1_SET_rg_lcpll_dpma_dds1_rstb_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb_dly, (reg32), (val))
#define SS_LCPLL_TDC_PW_1_SET_rg_lcpll_dpma_dds1_iso_disable_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_iso_disable_dly, (reg32), (val))

#define SS_LCPLL_TDC_PW_2_SET_rg_lcpll_dpma_txpll1_ddsfbk_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en, (reg32), (val))
#define SS_LCPLL_TDC_PW_2_SET_rg_lcpll_dpma_dds1_ncpo_en_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en_dly, (reg32), (val))
#define SS_LCPLL_TDC_PW_2_SET_rg_lcpll_dpma_dds1_ncpo_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en, (reg32), (val))
#define SS_LCPLL_TDC_PW_2_SET_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly, (reg32), (val))

#define SS_LCPLL_TDC_PW_3_SET_rg_lcpll_tdc_cal(reg32, val)     REG_FLD_SET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal, (reg32), (val))
#define SS_LCPLL_TDC_PW_3_SET_rg_lcpll_tdc_cal_trig_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig_dly, (reg32), (val))
#define SS_LCPLL_TDC_PW_3_SET_rg_lcpll_tdc_cal_trig(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig, (reg32), (val))
#define SS_LCPLL_TDC_PW_3_SET_rg_lcpll_dpma_txpll1_ddsfbk_en_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en_dly, (reg32), (val))

#define SS_LCPLL_TDC_PW_4_SET_rg_lcpll_tdc_sigdet_cg(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_sigdet_cg, (reg32), (val))
#define SS_LCPLL_TDC_PW_4_SET_rg_lcpll_tdc_en(reg32, val)      REG_FLD_SET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_en, (reg32), (val))
#define SS_LCPLL_TDC_PW_4_SET_rg_lcpll_tdc_cal_offset(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_offset, (reg32), (val))
#define SS_LCPLL_TDC_PW_4_SET_rg_lcpll_tdc_cal_bw(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_bw, (reg32), (val))

#define SS_LCPLL_TDC_PW_5_SET_rg_tdc_start_cnt(reg32, val)     REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt, (reg32), (val))
#define SS_LCPLL_TDC_PW_5_SET_rg_tdc_start_cnt_clr(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt_clr, (reg32), (val))
#define SS_LCPLL_TDC_PW_5_SET_rg_ncpo_start_dly_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_ncpo_start_dly_en, (reg32), (val))
#define SS_LCPLL_TDC_PW_5_SET_rg_lcpll_tdc_sync_in_mode(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_sync_in_mode, (reg32), (val))
#define SS_LCPLL_TDC_PW_5_SET_rg_lcpll_autok_tdc(reg32, val)   REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_autok_tdc, (reg32), (val))
#define SS_LCPLL_TDC_PW_5_SET_rg_lcpll_tdc_autoen(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_autoen, (reg32), (val))
#define SS_LCPLL_TDC_PW_5_SET_rg_lcpll_tdc_en_mux(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_en_mux, (reg32), (val))

#define SS_LCPLL_TDC_FLT_0_SET_rg_lcpll_tdc_offset(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_tdc_offset, (reg32), (val))
#define SS_LCPLL_TDC_FLT_0_SET_rg_lcpll_ki(reg32, val)         REG_FLD_SET(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_ki, (reg32), (val))
#define SS_LCPLL_TDC_FLT_0_SET_rg_lcpll_pon_rx_cdr_divtdc(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_pon_rx_cdr_divtdc, (reg32), (val))

#define SS_LCPLL_TDC_FLT_1_SET_rg_lcpll_tdc_gain(reg32, val)   REG_FLD_SET(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_tdc_gain, (reg32), (val))
#define SS_LCPLL_TDC_FLT_1_SET_rg_lcpll_a_tdc(reg32, val)      REG_FLD_SET(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_a_tdc, (reg32), (val))
#define SS_LCPLL_TDC_FLT_1_SET_rg_lcpll_gpon_sel(reg32, val)   REG_FLD_SET(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_gpon_sel, (reg32), (val))

#define SS_LCPLL_TDC_FLT_2_SET_rg_lcpll_ncpo_value(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_2_FLD_rg_lcpll_ncpo_value, (reg32), (val))

#define SS_LCPLL_TDC_FLT_3_SET_rg_sdm_upd_disb(reg32, val)     REG_FLD_SET(SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd_disb, (reg32), (val))
#define SS_LCPLL_TDC_FLT_3_SET_rg_sdm_upd(reg32, val)          REG_FLD_SET(SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd, (reg32), (val))
#define SS_LCPLL_TDC_FLT_3_SET_rg_lcpll_tdc_swrst(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_tdc_swrst, (reg32), (val))
#define SS_LCPLL_TDC_FLT_3_SET_rg_lcpll_ncpo_hold(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_hold, (reg32), (val))
#define SS_LCPLL_TDC_FLT_3_SET_rg_lcpll_ncpo_load(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_load, (reg32), (val))
#define SS_LCPLL_TDC_FLT_3_SET_rg_lcpll_ncpo_shift(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_shift, (reg32), (val))

#define SS_LCPLL_TDC_FLT_4_SET_rg_lcpll_tdcen_wait_lck2ref(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_wait_lck2ref, (reg32), (val))
#define SS_LCPLL_TDC_FLT_4_SET_rg_lcpll_tdcen_chk_lck2ref(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_chk_lck2ref, (reg32), (val))
#define SS_LCPLL_TDC_FLT_4_SET_rg_lcpll_tdc_rst(reg32, val)    REG_FLD_SET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdc_rst, (reg32), (val))
#define SS_LCPLL_TDC_FLT_4_SET_rg_lcpll_tdcen_rst_dlf(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_rst_dlf, (reg32), (val))

#define SS_LCPLL_TDC_FLT_5_SET_rg_lcpll_ncpo_chg(reg32, val)   REG_FLD_SET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_ncpo_chg, (reg32), (val))
#define SS_LCPLL_TDC_FLT_5_SET_rg_lcpll_tdc_autopw_ncpo(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_autopw_ncpo, (reg32), (val))
#define SS_LCPLL_TDC_FLT_5_SET_rg_lcpll_tdc_waitlck_pos_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pos_dly, (reg32), (val))
#define SS_LCPLL_TDC_FLT_5_SET_rg_lcpll_tdc_waitlck_pre_dly(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pre_dly, (reg32), (val))

#define SS_LCPLL_TDC_FLT_6_SET_rg_lcpll_tdc_pcw_sub1en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_tdc_pcw_sub1en, (reg32), (val))
#define SS_LCPLL_TDC_FLT_6_SET_rg_lcpll_dlf_mult_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_dlf_mult_en, (reg32), (val))
#define SS_LCPLL_TDC_FLT_6_SET_rg_lcpll_ncpo_chg_delay(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_delay, (reg32), (val))
#define SS_LCPLL_TDC_FLT_6_SET_rg_lcpll_ncpo_chg_mask(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_mask, (reg32), (val))

#define SS_LCPLL_TDC_FLT_7_SET_rg_lcpll_tdcck_inv_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_FLT_7_FLD_rg_lcpll_tdcck_inv_en, (reg32), (val))

#define SS_LCPLL_TDC_PCW_1_SET_rg_lcpll_pon_hrdds_pcw_ncpo_gpon(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PCW_1_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_gpon, (reg32), (val))

#define SS_LCPLL_TDC_PCW_2_SET_rg_lcpll_pon_hrdds_pcw_ncpo_epon(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_PCW_2_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_epon, (reg32), (val))

#define SS_LCPLL_TDC_RO_1_SET_ro_lcpll_tdc_dig(reg32, val)     REG_FLD_SET(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_dig, (reg32), (val))
#define SS_LCPLL_TDC_RO_1_SET_ro_lcpll_tdc_st(reg32, val)      REG_FLD_SET(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_st, (reg32), (val))
#define SS_LCPLL_TDC_RO_1_SET_ro_lcpll_tdc_tdcpw_st(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_tdcpw_st, (reg32), (val))

#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_tdc_ck_stb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_ck_stb, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_tdc_cal_offset(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_offset, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_tdc_cal_bw(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_bw, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_tdc_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_en, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_rx_ck_stb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_rx_ck_stb, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_en_lck2ref_rst(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_en_lck2ref_rst, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_dds1_pwdb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pwdb, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_dds1_iso_disable(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_iso_disable, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_dds1_rstb(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_rstb, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_dds1_ncpo_en(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_ncpo_en, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg, (reg32), (val))
#define SS_LCPLL_TDC_RO_2_SET_ro_lcpll_tdc_dlf_gain(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dlf_gain, (reg32), (val))

#define SS_LCPLL_TDC_RO_3_SET_ro_lcpll_tdc_gain(reg32, val)    REG_FLD_SET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_gain, (reg32), (val))
#define SS_LCPLL_TDC_RO_3_SET_ro_lcpll_tdc_decode(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_decode, (reg32), (val))
#define SS_LCPLL_TDC_RO_3_SET_ro_lcpll_tdc_en(reg32, val)      REG_FLD_SET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_en, (reg32), (val))
#define SS_LCPLL_TDC_RO_3_SET_ro_lcpll_tdc_cal_done(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_cal_done, (reg32), (val))
#define SS_LCPLL_TDC_RO_3_SET_ro_lcpll_tdc_offset(reg32, val)  REG_FLD_SET(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_offset, (reg32), (val))

#define SS_LCPLL_TDC_RO_4_SET_ro_lcpll_tdc_dpma_dds1_pcw_ncpo(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_4_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo, (reg32), (val))

#define SS_LCPLL_TDC_RO_5_SET_ro_lcpll_tdc_dpma_tdc_c(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_c, (reg32), (val))
#define SS_LCPLL_TDC_RO_5_SET_ro_lcpll_tdc_dpma_tdc_d(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_d, (reg32), (val))
#define SS_LCPLL_TDC_RO_5_SET_ro_lcpll_tdc_dpma_tdc_leadlag(reg32, val) REG_FLD_SET(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_leadlag, (reg32), (val))

#define SS_LCPLL_TDC_CTRL_0_SET_rg_lcpll_ki_hold(reg32, val)   REG_FLD_SET(SS_LCPLL_TDC_CTRL_0_FLD_rg_lcpll_ki_hold, (reg32), (val))

#define SS_LCPLL_0_SET_tdc_sync_pcw_ncpo_chg(reg32, val)       REG_FLD_SET(SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg, (reg32), (val))
#define SS_LCPLL_0_SET_eee_lcpll_hold(reg32, val)              REG_FLD_SET(SS_LCPLL_0_FLD_eee_lcpll_hold, (reg32), (val))

#define SS_LCPLL_1_SET_tdc_sync_pcw_ncpo(reg32, val)           REG_FLD_SET(SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo, (reg32), (val))

#define SS_LCPLL_2_SET_lcpll_top_flagh_en(reg32, val)          REG_FLD_SET(SS_LCPLL_2_FLD_lcpll_top_flagh_en, (reg32), (val))
#define SS_LCPLL_2_SET_lcpll_top_flagl_en(reg32, val)          REG_FLD_SET(SS_LCPLL_2_FLD_lcpll_top_flagl_en, (reg32), (val))
#define SS_LCPLL_2_SET_flagh_sel(reg32, val)                   REG_FLD_SET(SS_LCPLL_2_FLD_flagh_sel, (reg32), (val))
#define SS_LCPLL_2_SET_flagl_sel(reg32, val)                   REG_FLD_SET(SS_LCPLL_2_FLD_flagl_sel, (reg32), (val))

#define TDC_DLF_GAIN_STATUS_SET_ro_dlf_gain_rund_new(reg32, val) REG_FLD_SET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new, (reg32), (val))
#define TDC_DLF_GAIN_STATUS_SET_ro_dlf_gain_new(reg32, val)    REG_FLD_SET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new, (reg32), (val))

#define TDC_DLF_MODE_SETTING_SET_rg_dlf_gain_latch(reg32, val) REG_FLD_SET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch, (reg32), (val))
#define TDC_DLF_MODE_SETTING_SET_rg_dlf_mode_sel(reg32, val)   REG_FLD_SET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel, (reg32), (val))
#define TDC_DLF_MODE_SETTING_SET_ro_dlf_gain_new_org(reg32, val) REG_FLD_SET(TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org, (reg32), (val))

#define TDC_HOLD_CTRL_0_SET_rg_ncpo_hold_en(reg32, val)        REG_FLD_SET(TDC_HOLD_CTRL_0_FLD_rg_ncpo_hold_en, (reg32), (val))
#define TDC_HOLD_CTRL_0_SET_rg_ncpo_toggle(reg32, val)         REG_FLD_SET(TDC_HOLD_CTRL_0_FLD_rg_ncpo_toggle, (reg32), (val))
#define TDC_HOLD_CTRL_0_SET_rg_tdc_los_hold_mux(reg32, val)    REG_FLD_SET(TDC_HOLD_CTRL_0_FLD_rg_tdc_los_hold_mux, (reg32), (val))
#define TDC_HOLD_CTRL_0_SET_rg_tdc_ncpo_hold_release_time(reg32, val) REG_FLD_SET(TDC_HOLD_CTRL_0_FLD_rg_tdc_ncpo_hold_release_time, (reg32), (val))

#define TDC_HOLD_CTRL_1_SET_rg_ncpo_up_thred(reg32, val)       REG_FLD_SET(TDC_HOLD_CTRL_1_FLD_rg_ncpo_up_thred, (reg32), (val))

#define TDC_HOLD_CTRL_2_SET_rg_ncpo_dwn_thred(reg32, val)      REG_FLD_SET(TDC_HOLD_CTRL_2_FLD_rg_ncpo_dwn_thred, (reg32), (val))

#define TDC_HOLD_STATUS_0_SET_ro_ncpo_output(reg32, val)       REG_FLD_SET(TDC_HOLD_STATUS_0_FLD_ro_ncpo_output, (reg32), (val))

#define TDC_HOLD_STATUS_1_SET_ro_ncpo_max_output(reg32, val)   REG_FLD_SET(TDC_HOLD_STATUS_1_FLD_ro_ncpo_max_output, (reg32), (val))

#define TDC_HOLD_STATUS_2_SET_ro_ncpo_min_output(reg32, val)   REG_FLD_SET(TDC_HOLD_STATUS_2_FLD_ro_ncpo_min_output, (reg32), (val))

#define TDC_CLR_0_SET_rg_ncpo_flag_clr(reg32, val)             REG_FLD_SET(TDC_CLR_0_FLD_rg_ncpo_flag_clr, (reg32), (val))
#define TDC_CLR_0_SET_rg_ncpo_clr(reg32, val)                  REG_FLD_SET(TDC_CLR_0_FLD_rg_ncpo_clr, (reg32), (val))

#define INTF_CTRL_0_SET_rg_ad_qp_tdc_leadlag_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_tdc_leadlag_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_pll_ssc_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_pll_ssc_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_pll_ssc_dir_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_pll_ssc_dir_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_pll_vcocal_cplt_sel(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_pll_vcocal_cplt_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_pcie_ckdet_out_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_pcie_ckdet_out_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_tx_cmdet_sel(reg32, val)      REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_tx_cmdet_force(reg32, val)    REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_termcal_dir_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_termcal_dir_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_pr_vco_overspeed_sel(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_pr_vco_overspeed_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_pr_fll_dig_rstb_sel(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_pr_fll_dig_rstb_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_lpf_oneshot_trig_sel(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_lpf_oneshot_trig_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_pi_pderr_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_cdr_pi_pderr_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_crsdet_lthout_sel(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_crsdet_lthout_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_crsdet_out_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_crsdet_out_force(reg32, val)  REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_rx_lfps_sel(reg32, val)       REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_rx_lfps_force(reg32, val)     REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_sigdet_cal_out_sel(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_sigdet_cal_out_force(reg32, val) REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_force, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_sigdet_out_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_sel, (reg32), (val))
#define INTF_CTRL_0_SET_rg_ad_qp_sigdet_out_force(reg32, val)  REG_FLD_SET(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_force, (reg32), (val))

#define INTF_CTRL_1_SET_rg_ad_qp_tdc_c_sel(reg32, val)         REG_FLD_SET(INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_sel, (reg32), (val))
#define INTF_CTRL_1_SET_rg_ad_qp_tdc_c_force(reg32, val)       REG_FLD_SET(INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_force, (reg32), (val))
#define INTF_CTRL_1_SET_rg_ad_qp_pll_vcocal_state_sel(reg32, val) REG_FLD_SET(INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_sel, (reg32), (val))
#define INTF_CTRL_1_SET_rg_ad_qp_pll_vcocal_state_force(reg32, val) REG_FLD_SET(INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_force, (reg32), (val))

#define INTF_CTRL_2_SET_rg_ad_qp_tdc_d_sel(reg32, val)         REG_FLD_SET(INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_sel, (reg32), (val))
#define INTF_CTRL_2_SET_rg_ad_qp_tdc_d_force(reg32, val)       REG_FLD_SET(INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_force, (reg32), (val))

#define INTF_CTRL_3_SET_rg_ad_qp_cdr_lpf_snapshotvalue_sel(reg32, val) REG_FLD_SET(INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_sel, (reg32), (val))
#define INTF_CTRL_3_SET_rg_ad_qp_cdr_lpf_snapshotvalue_force(reg32, val) REG_FLD_SET(INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_force, (reg32), (val))

#define INTF_CTRL_4_SET_rg_ad_qp_cdr_pr_adc_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_sel, (reg32), (val))
#define INTF_CTRL_4_SET_rg_ad_qp_cdr_pr_adc_force(reg32, val)  REG_FLD_SET(INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_force, (reg32), (val))

#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_lpf_r_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_lpf_r_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_lpf_c_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_lpf_c_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_kband_rstb_sel(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_kband_rstb_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_pwdb_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_pr_pwdb_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_lck2data_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_lck2data_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_lpf_rstb_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_cdr_lpf_rstb_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_scan_sel(reg32, val)       REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_scan_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_scan_force(reg32, val)     REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_scan_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_crsdet_rstb_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_crsdet_rstb_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_saosc_en_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_saosc_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_crsdet_en_sel(reg32, val)     REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_crsdet_en_force(reg32, val)   REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_sigdet_cal_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_sigdet_cal_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_sigdet_en_sel(reg32, val)     REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_sigdet_en_force(reg32, val)   REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_p3_entry_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_p3_entry_force(reg32, val) REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_hz_sel(reg32, val)         REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_hz_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_hz_force(reg32, val)       REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_hz_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_afe_pwd_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_rx_afe_pwd_force(reg32, val)  REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_force, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_lfps_pwd_sel(reg32, val)      REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_sel, (reg32), (val))
#define INTF_CTRL_5_SET_rg_da_qp_lfps_pwd_force(reg32, val)    REG_FLD_SET(INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_force, (reg32), (val))

#define INTF_CTRL_6_SET_rg_da_qp_xtal_rx_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_xtal_rx_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_pcie_clktx_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_pcie_clktx_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_pcie_clkrx_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_pcie_clkrx_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_bg_lpf_en_sel(reg32, val)     REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_bg_lpf_en_force(reg32, val)   REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_bias_en_sel(reg32, val)       REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_bias_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_bias_en_force(reg32, val)     REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_bias_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_lfps_sel(reg32, val)       REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_lfps_force(reg32, val)     REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_lfps_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_lfps_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_eidle_lp_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_eidle_lp_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_ser_en_sel(reg32, val)     REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_ser_en_force(reg32, val)   REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_data_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_data_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_rxdet_en_sel(reg32, val)      REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_rxdet_en_force(reg32, val)    REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_impcalib_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_impcalib_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_drv_en_sel(reg32, val)     REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_drv_en_force(reg32, val)   REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_term_vref_sel_sel(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_tx_term_vref_sel_force(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_cdr_pd_pwdb_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_cdr_pd_pwdb_force(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_force, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_cdr_pr_pieye_pwdb_sel(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_sel, (reg32), (val))
#define INTF_CTRL_6_SET_rg_da_qp_cdr_pr_pieye_pwdb_force(reg32, val) REG_FLD_SET(INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_force, (reg32), (val))

#define INTF_CTRL_7_SET_rg_da_qp_tdc_cal_offset_sel(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_tdc_cal_offset_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_tdc_cal_bw_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_tdc_cal_bw_force(reg32, val)  REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_tdc_txck_sel_sel(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_tdc_txck_sel_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_icolp_en_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_icolp_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_ssc_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_ssc_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_sdm_ifm_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_sdm_ifm_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_sdm_chg_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_sdm_chg_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_rico_sel_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_rico_sel_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_postdiv_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_postdiv_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_phy_ck_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_phy_ck_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_pfd_offset_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_pfd_offset_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_pck_sel_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_pck_sel_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_icoiq_en_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_icoiq_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_en_sel(reg32, val)        REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_en_force(reg32, val)      REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_sdm_di_en_sel(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_qp_pll_sdm_di_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_force, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_pcie_ckdet_en_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_sel, (reg32), (val))
#define INTF_CTRL_7_SET_rg_da_pcie_ckdet_en_force(reg32, val)  REG_FLD_SET(INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_force, (reg32), (val))

#define INTF_CTRL_8_SET_rg_da_qp_pll_sdm_hren_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_sdm_hren_force(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_pfd_offset_sel(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_pfd_offset_force(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_kband_prediv_sel(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_kband_prediv_force(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_fbksel_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_fbksel_force(reg32, val)  REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_bpb_sel(reg32, val)       REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_bpb_force(reg32, val)     REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_bc_sel(reg32, val)        REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_bc_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_pll_bc_force(reg32, val)      REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_pll_bc_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_xtal_ext_en_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_xtal_ext_en_force(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_tx_dem_sel(reg32, val)        REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_tx_dem_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_tx_dem_force(reg32, val)      REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_tx_dem_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_tx_term_sel_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_tx_term_sel_force(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_lfps_deglitch_sel(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_lfps_deglitch_force(reg32, val) REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_force, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_tdc_en_sel(reg32, val)        REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_tdc_en_sel, (reg32), (val))
#define INTF_CTRL_8_SET_rg_da_qp_tdc_en_force(reg32, val)      REG_FLD_SET(INTF_CTRL_8_FLD_rg_da_qp_tdc_en_force, (reg32), (val))

#define INTF_CTRL_9_SET_rg_da_qp_rx_imp_sel_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_rx_imp_sel_force(reg32, val)  REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_force, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_ir_sel(reg32, val)        REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_ir_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_ir_force(reg32, val)      REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_ir_force, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_rx_dcleq_sel(reg32, val)      REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_rx_dcleq_force(reg32, val)    REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_force, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_br_sel(reg32, val)        REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_br_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_br_force(reg32, val)      REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_br_force, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_bpa_sel(reg32, val)       REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_bpa_force(reg32, val)     REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_force, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_tx_fir_cn1_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_tx_fir_cn1_force(reg32, val)  REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_force, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_ssc_dir_dly_sel(reg32, val) REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_sel, (reg32), (val))
#define INTF_CTRL_9_SET_rg_da_qp_pll_ssc_dir_dly_force(reg32, val) REG_FLD_SET(INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_force, (reg32), (val))

#define INTF_CTRL_10_SET_rg_da_qp_tx_fir_c2_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_sel, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_tx_fir_c2_force(reg32, val)  REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_force, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_tx_fir_c1_sel(reg32, val)    REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_sel, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_tx_fir_c1_force(reg32, val)  REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_force, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_cdr_pr_fll_cor_sel(reg32, val) REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_sel, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_cdr_pr_fll_cor_force(reg32, val) REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_force, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_sigdet_cal_offset_sel(reg32, val) REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_sel, (reg32), (val))
#define INTF_CTRL_10_SET_rg_da_qp_sigdet_cal_offset_force(reg32, val) REG_FLD_SET(INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_force, (reg32), (val))

#define INTF_CTRL_11_SET_rg_da_qp_cdr_pr_idac_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_sel, (reg32), (val))
#define INTF_CTRL_11_SET_rg_da_qp_cdr_pr_idac_force(reg32, val) REG_FLD_SET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_force, (reg32), (val))
#define INTF_CTRL_11_SET_rg_da_qp_cdr_pr_pieye_sel(reg32, val) REG_FLD_SET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_sel, (reg32), (val))
#define INTF_CTRL_11_SET_rg_da_qp_cdr_pr_pieye_force(reg32, val) REG_FLD_SET(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_force, (reg32), (val))
#define INTF_CTRL_11_SET_rg_da_qp_tx_fir_c0b_sel(reg32, val)   REG_FLD_SET(INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_sel, (reg32), (val))
#define INTF_CTRL_11_SET_rg_da_qp_tx_fir_c0b_force(reg32, val) REG_FLD_SET(INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_force, (reg32), (val))

#define INTF_CTRL_12_SET_rg_da_qp_pll_ssc_delta_sel(reg32, val) REG_FLD_SET(INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_sel, (reg32), (val))
#define INTF_CTRL_12_SET_rg_da_qp_pll_ssc_delta_force(reg32, val) REG_FLD_SET(INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_force, (reg32), (val))

#define INTF_CTRL_13_SET_rg_da_qp_pll_ssc_period_sel(reg32, val) REG_FLD_SET(INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_sel, (reg32), (val))
#define INTF_CTRL_13_SET_rg_da_qp_pll_ssc_period_force(reg32, val) REG_FLD_SET(INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_force, (reg32), (val))

#define INTF_CTRL_14_SET_rg_da_qp_pll_sdm_pcw_force_31_0(reg32, val) REG_FLD_SET(INTF_CTRL_14_FLD_rg_da_qp_pll_sdm_pcw_force_31_0, (reg32), (val))

#define INTF_CTRL_15_SET_rg_da_qp_pll_sdm_pcw_sel(reg32, val)  REG_FLD_SET(INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_sel, (reg32), (val))
#define INTF_CTRL_15_SET_rg_da_qp_pll_sdm_pcw_force_33_32(reg32, val) REG_FLD_SET(INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_force_33_32, (reg32), (val))
#define INTF_CTRL_15_SET_rg_da_qp_tx_data_sel(reg32, val)      REG_FLD_SET(INTF_CTRL_15_FLD_rg_da_qp_tx_data_sel, (reg32), (val))
#define INTF_CTRL_15_SET_rg_da_qp_tx_data_force(reg32, val)    REG_FLD_SET(INTF_CTRL_15_FLD_rg_da_qp_tx_data_force, (reg32), (val))

#define INTF_STS_0_SET_ro_da_qp_xtal_rx_en(reg32, val)         REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_xtal_rx_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_pcie_clktx_en(reg32, val)         REG_FLD_SET(INTF_STS_0_FLD_ro_da_pcie_clktx_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_pcie_clkrx_en(reg32, val)         REG_FLD_SET(INTF_STS_0_FLD_ro_da_pcie_clkrx_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_bg_lpf_en(reg32, val)          REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_bg_lpf_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_bias_en(reg32, val)            REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_bias_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_lfps(reg32, val)            REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_lfps, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_lfps_en(reg32, val)         REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_lfps_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_eidle_lp_en(reg32, val)     REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_eidle_lp_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_ser_en(reg32, val)          REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_ser_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_data_en(reg32, val)         REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_data_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_rxdet_en(reg32, val)           REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_rxdet_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_impcalib_en(reg32, val)     REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_impcalib_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_drv_en(reg32, val)          REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_drv_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_tx_term_vref_sel(reg32, val)   REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_tx_term_vref_sel, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_pd_pwdb(reg32, val)        REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_pd_pwdb, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_pr_pieye_pwdb(reg32, val)  REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_pieye_pwdb, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_pr_lpf_r_en(reg32, val)    REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_r_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_pr_lpf_c_en(reg32, val)    REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_c_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_pr_kband_rstb(reg32, val)  REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_kband_rstb, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_pr_pwdb(reg32, val)        REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_pr_pwdb, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_lck2data(reg32, val)       REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_lck2data, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_cdr_lpf_rstb(reg32, val)       REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_cdr_lpf_rstb, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_rx_scan(reg32, val)            REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_rx_scan, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_crsdet_rstb(reg32, val)        REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_crsdet_rstb, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_rx_saosc_en(reg32, val)        REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_rx_saosc_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_crsdet_en(reg32, val)          REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_crsdet_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_sigdet_cal_en(reg32, val)      REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_sigdet_cal_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_sigdet_en(reg32, val)          REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_sigdet_en, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_rx_p3_entry(reg32, val)        REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_rx_p3_entry, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_rx_hz(reg32, val)              REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_rx_hz, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_rx_afe_pwd(reg32, val)         REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_rx_afe_pwd, (reg32), (val))
#define INTF_STS_0_SET_ro_da_qp_lfps_pwd(reg32, val)           REG_FLD_SET(INTF_STS_0_FLD_ro_da_qp_lfps_pwd, (reg32), (val))

#define INTF_STS_1_SET_ro_da_qp_pll_fbksel(reg32, val)         REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_fbksel, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_bpb(reg32, val)            REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_bpb, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_bc(reg32, val)             REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_bc, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_xtal_ext_en(reg32, val)        REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_xtal_ext_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_tx_dem(reg32, val)             REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_tx_dem, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_tx_term_sel(reg32, val)        REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_tx_term_sel, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_lfps_deglitch(reg32, val)      REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_lfps_deglitch, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_tdc_en(reg32, val)             REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_tdc_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_tdc_cal_offset(reg32, val)     REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_tdc_cal_offset, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_tdc_cal_bw(reg32, val)         REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_tdc_cal_bw, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_tdc_txck_sel(reg32, val)   REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_tdc_txck_sel, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_icolp_en(reg32, val)       REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_icolp_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_ssc_en(reg32, val)         REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_ssc_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_sdm_ifm(reg32, val)        REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_sdm_ifm, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_sdm_chg(reg32, val)        REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_sdm_chg, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_rico_sel(reg32, val)       REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_rico_sel, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_postdiv_en(reg32, val)     REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_postdiv_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_phy_ck_en(reg32, val)      REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_phy_ck_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_pfd_offset_en(reg32, val)  REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_pfd_offset_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_pck_sel(reg32, val)        REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_pck_sel, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_icoiq_en(reg32, val)       REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_icoiq_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_en(reg32, val)             REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_qp_pll_sdm_di_en(reg32, val)      REG_FLD_SET(INTF_STS_1_FLD_ro_da_qp_pll_sdm_di_en, (reg32), (val))
#define INTF_STS_1_SET_ro_da_pcie_ckdet_en(reg32, val)         REG_FLD_SET(INTF_STS_1_FLD_ro_da_pcie_ckdet_en, (reg32), (val))

#define INTF_STS_2_SET_ro_da_qp_pll_ir(reg32, val)             REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_ir, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_rx_dcleq(reg32, val)           REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_rx_dcleq, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_pll_br(reg32, val)             REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_br, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_pll_bpa(reg32, val)            REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_bpa, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_tx_fir_cn1(reg32, val)         REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_tx_fir_cn1, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_pll_ssc_dir_dly(reg32, val)    REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_ssc_dir_dly, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_pll_sdm_hren(reg32, val)       REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_sdm_hren, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_pll_pfd_offset(reg32, val)     REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_pfd_offset, (reg32), (val))
#define INTF_STS_2_SET_ro_da_qp_pll_kband_prediv(reg32, val)   REG_FLD_SET(INTF_STS_2_FLD_ro_da_qp_pll_kband_prediv, (reg32), (val))

#define INTF_STS_3_SET_ro_da_qp_tx_fir_c1(reg32, val)          REG_FLD_SET(INTF_STS_3_FLD_ro_da_qp_tx_fir_c1, (reg32), (val))
#define INTF_STS_3_SET_ro_da_qp_cdr_pr_fll_cor(reg32, val)     REG_FLD_SET(INTF_STS_3_FLD_ro_da_qp_cdr_pr_fll_cor, (reg32), (val))
#define INTF_STS_3_SET_ro_da_qp_sigdet_cal_offset(reg32, val)  REG_FLD_SET(INTF_STS_3_FLD_ro_da_qp_sigdet_cal_offset, (reg32), (val))
#define INTF_STS_3_SET_ro_da_qp_rx_imp_sel(reg32, val)         REG_FLD_SET(INTF_STS_3_FLD_ro_da_qp_rx_imp_sel, (reg32), (val))

#define INTF_STS_4_SET_ro_da_qp_cdr_pr_pieye(reg32, val)       REG_FLD_SET(INTF_STS_4_FLD_ro_da_qp_cdr_pr_pieye, (reg32), (val))
#define INTF_STS_4_SET_ro_da_qp_tx_fir_c0b(reg32, val)         REG_FLD_SET(INTF_STS_4_FLD_ro_da_qp_tx_fir_c0b, (reg32), (val))
#define INTF_STS_4_SET_ro_da_qp_tx_fir_c2(reg32, val)          REG_FLD_SET(INTF_STS_4_FLD_ro_da_qp_tx_fir_c2, (reg32), (val))

#define INTF_STS_5_SET_ro_da_qp_cdr_pr_idac(reg32, val)        REG_FLD_SET(INTF_STS_5_FLD_ro_da_qp_cdr_pr_idac, (reg32), (val))

#define INTF_STS_6_SET_ro_da_qp_pll_ssc_period(reg32, val)     REG_FLD_SET(INTF_STS_6_FLD_ro_da_qp_pll_ssc_period, (reg32), (val))
#define INTF_STS_6_SET_ro_da_qp_pll_ssc_delta(reg32, val)      REG_FLD_SET(INTF_STS_6_FLD_ro_da_qp_pll_ssc_delta, (reg32), (val))

#define INTF_STS_7_SET_ro_da_qp_tx_data(reg32, val)            REG_FLD_SET(INTF_STS_7_FLD_ro_da_qp_tx_data, (reg32), (val))

#define INTF_STS_8_SET_ro_da_qp_pll_sdm_pcw_31_0(reg32, val)   REG_FLD_SET(INTF_STS_8_FLD_ro_da_qp_pll_sdm_pcw_31_0, (reg32), (val))

#define INTF_STS_9_SET_ro_ad_qp_tdc_c_intf(reg32, val)         REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_tdc_c_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_pll_vcocal_state_intf(reg32, val) REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_pll_vcocal_state_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_tdc_leadlag_intf(reg32, val)   REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_tdc_leadlag_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_pll_ssc_en_intf(reg32, val)    REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_pll_ssc_en_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_pll_ssc_dir_intf(reg32, val)   REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_pll_ssc_dir_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_pcie_ckdet_out_intf(reg32, val)   REG_FLD_SET(INTF_STS_9_FLD_ro_ad_pcie_ckdet_out_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_tx_cmdet_intf(reg32, val)      REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_tx_cmdet_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_termcal_dir_intf(reg32, val)   REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_termcal_dir_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_cdr_pr_vco_overspeed_intf(reg32, val) REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_cdr_pr_vco_overspeed_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_cdr_pr_fll_dig_rstb_intf(reg32, val) REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_cdr_pr_fll_dig_rstb_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_cdr_lpf_oneshot_trig_intf(reg32, val) REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_cdr_lpf_oneshot_trig_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_cdr_pi_pderr_intf(reg32, val)  REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_cdr_pi_pderr_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_crsdet_lthout_intf(reg32, val) REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_crsdet_lthout_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_crsdet_out_intf(reg32, val)    REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_crsdet_out_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_rx_lfps_intf(reg32, val)       REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_rx_lfps_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_sigdet_cal_out_intf(reg32, val) REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_sigdet_cal_out_intf, (reg32), (val))
#define INTF_STS_9_SET_ro_ad_qp_sigdet_out_intf(reg32, val)    REG_FLD_SET(INTF_STS_9_FLD_ro_ad_qp_sigdet_out_intf, (reg32), (val))

#define INTF_STS_10_SET_ro_ad_qp_tdc_d_intf(reg32, val)        REG_FLD_SET(INTF_STS_10_FLD_ro_ad_qp_tdc_d_intf, (reg32), (val))

#define INTF_STS_11_SET_ro_ad_qp_cdr_lpf_snapshotvalue_intf(reg32, val) REG_FLD_SET(INTF_STS_11_FLD_ro_ad_qp_cdr_lpf_snapshotvalue_intf, (reg32), (val))

#define INTF_STS_12_SET_ro_ad_qp_cdr_pr_adc_intf(reg32, val)   REG_FLD_SET(INTF_STS_12_FLD_ro_ad_qp_cdr_pr_adc_intf, (reg32), (val))

#define PLL_CTRL_0_SET_rg_da_pll_en_dly_cnt(reg32, val)        REG_FLD_SET(PLL_CTRL_0_FLD_rg_da_pll_en_dly_cnt, (reg32), (val))
#define PLL_CTRL_0_SET_rg_da_pll_en_mux(reg32, val)            REG_FLD_SET(PLL_CTRL_0_FLD_rg_da_pll_en_mux, (reg32), (val))
#define PLL_CTRL_0_SET_rg_da_pll_en(reg32, val)                REG_FLD_SET(PLL_CTRL_0_FLD_rg_da_pll_en, (reg32), (val))
#define PLL_CTRL_0_SET_rg_force_da_pll_en(reg32, val)          REG_FLD_SET(PLL_CTRL_0_FLD_rg_force_da_pll_en, (reg32), (val))
#define PLL_CTRL_0_SET_rg_rx_pwd(reg32, val)                   REG_FLD_SET(PLL_CTRL_0_FLD_rg_rx_pwd, (reg32), (val))
#define PLL_CTRL_0_SET_rg_rx_pwd_mux(reg32, val)               REG_FLD_SET(PLL_CTRL_0_FLD_rg_rx_pwd_mux, (reg32), (val))
#define PLL_CTRL_0_SET_rg_tx_disable(reg32, val)               REG_FLD_SET(PLL_CTRL_0_FLD_rg_tx_disable, (reg32), (val))
#define PLL_CTRL_0_SET_rg_tx_disable_mux(reg32, val)           REG_FLD_SET(PLL_CTRL_0_FLD_rg_tx_disable_mux, (reg32), (val))
#define PLL_CTRL_0_SET_rg_phya_pwd(reg32, val)                 REG_FLD_SET(PLL_CTRL_0_FLD_rg_phya_pwd, (reg32), (val))
#define PLL_CTRL_0_SET_rg_phya_pwd_mux(reg32, val)             REG_FLD_SET(PLL_CTRL_0_FLD_rg_phya_pwd_mux, (reg32), (val))
#define PLL_CTRL_0_SET_rg_phya_auto_init(reg32, val)           REG_FLD_SET(PLL_CTRL_0_FLD_rg_phya_auto_init, (reg32), (val))

#define PLL_CTRL_1_SET_rg_qp_pll_ssc_en(reg32, val)            REG_FLD_SET(PLL_CTRL_1_FLD_rg_qp_pll_ssc_en, (reg32), (val))
#define PLL_CTRL_1_SET_rg_pll_autok_vco_to_pll_bias_lpf_en_dly(reg32, val) REG_FLD_SET(PLL_CTRL_1_FLD_rg_pll_autok_vco_to_pll_bias_lpf_en_dly, (reg32), (val))
#define PLL_CTRL_1_SET_rg_syspll_pwd_to_syspll_ready_dly(reg32, val) REG_FLD_SET(PLL_CTRL_1_FLD_rg_syspll_pwd_to_syspll_ready_dly, (reg32), (val))
#define PLL_CTRL_1_SET_rg_bias_pwd_to_bg_lpf_en_dly(reg32, val) REG_FLD_SET(PLL_CTRL_1_FLD_rg_bias_pwd_to_bg_lpf_en_dly, (reg32), (val))
#define PLL_CTRL_1_SET_rg_lpf_en_to_ssc_dly_cnt(reg32, val)    REG_FLD_SET(PLL_CTRL_1_FLD_rg_lpf_en_to_ssc_dly_cnt, (reg32), (val))

#define PLL_CTRL_2_SET_rg_da_qp_pll_sdm_ifm_intf(reg32, val)   REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_sdm_ifm_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_rico_sel_intf(reg32, val)  REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_rico_sel_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_postdiv_en_intf(reg32, val) REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_postdiv_en_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_phy_ck_en_intf(reg32, val) REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_phy_ck_en_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_pfd_offset_en_intf(reg32, val) REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_en_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_pfd_offset_intf(reg32, val) REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_pck_sel_intf(reg32, val)   REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_pck_sel_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_kband_prediv_intf(reg32, val) REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_kband_prediv_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_ir_intf(reg32, val)        REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_ir_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_icoiq_en_intf(reg32, val)  REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_icoiq_en_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_fbksel_intf(reg32, val)    REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_fbksel_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_br_intf(reg32, val)        REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_br_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_bpb_intf(reg32, val)       REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_bpb_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_bpa_intf(reg32, val)       REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_bpa_intf, (reg32), (val))
#define PLL_CTRL_2_SET_rg_da_qp_pll_bc_intf(reg32, val)        REG_FLD_SET(PLL_CTRL_2_FLD_rg_da_qp_pll_bc_intf, (reg32), (val))

#define PLL_CTRL_3_SET_rg_da_qp_pll_ssc_period_intf(reg32, val) REG_FLD_SET(PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_period_intf, (reg32), (val))
#define PLL_CTRL_3_SET_rg_da_qp_pll_ssc_delta_intf(reg32, val) REG_FLD_SET(PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_delta_intf, (reg32), (val))

#define PLL_CTRL_4_SET_rg_da_qp_pll_sdm_hren_intf(reg32, val)  REG_FLD_SET(PLL_CTRL_4_FLD_rg_da_qp_pll_sdm_hren_intf, (reg32), (val))
#define PLL_CTRL_4_SET_rg_da_qp_pll_icolp_en_intf(reg32, val)  REG_FLD_SET(PLL_CTRL_4_FLD_rg_da_qp_pll_icolp_en_intf, (reg32), (val))
#define PLL_CTRL_4_SET_rg_da_qp_pll_ssc_dir_dly_intf(reg32, val) REG_FLD_SET(PLL_CTRL_4_FLD_rg_da_qp_pll_ssc_dir_dly_intf, (reg32), (val))

#define PLL_CK_CTRL_0_SET_rg_da_qp_pll_tdc_txck_sel_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_qp_pll_tdc_txck_sel_intf, (reg32), (val))
#define PLL_CK_CTRL_0_SET_rg_da_qp_pll_sdm_di_en_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_qp_pll_sdm_di_en_intf, (reg32), (val))
#define PLL_CK_CTRL_0_SET_rg_da_pcie_ckdet_en_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_pcie_ckdet_en_intf, (reg32), (val))
#define PLL_CK_CTRL_0_SET_rg_da_qp_xtal_rx_en_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_rx_en_intf, (reg32), (val))
#define PLL_CK_CTRL_0_SET_rg_da_pcie_clktx_en_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_pcie_clktx_en_intf, (reg32), (val))
#define PLL_CK_CTRL_0_SET_rg_da_pcie_clkrx_en_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_pcie_clkrx_en_intf, (reg32), (val))
#define PLL_CK_CTRL_0_SET_rg_da_qp_xtal_ext_en_intf(reg32, val) REG_FLD_SET(PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_ext_en_intf, (reg32), (val))

#define PLL_CK_CTRL_1_SET_rg_pll_stable_source_sel(reg32, val) REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_stable_source_sel, (reg32), (val))
#define PLL_CK_CTRL_1_SET_rg_pll_force_unstable(reg32, val)    REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_force_unstable, (reg32), (val))
#define PLL_CK_CTRL_1_SET_rg_pll_force_stable(reg32, val)      REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_force_stable, (reg32), (val))
#define PLL_CK_CTRL_1_SET_rg_pll_cplt_force_off(reg32, val)    REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_off, (reg32), (val))
#define PLL_CK_CTRL_1_SET_rg_pll_cplt_force_on(reg32, val)     REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_on, (reg32), (val))
#define PLL_CK_CTRL_1_SET_rg_pll_cplt_stabel_cnt(reg32, val)   REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_cplt_stabel_cnt, (reg32), (val))
#define PLL_CK_CTRL_1_SET_rg_pll_stabel_cnt(reg32, val)        REG_FLD_SET(PLL_CK_CTRL_1_FLD_rg_pll_stabel_cnt, (reg32), (val))

#define PLL_CK_CTRL_2_SET_rg_pcie_mode_pll_auto_off_en(reg32, val) REG_FLD_SET(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_off_en, (reg32), (val))
#define PLL_CK_CTRL_2_SET_rg_pcie_mode_pll_auto_on_en(reg32, val) REG_FLD_SET(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_on_en, (reg32), (val))
#define PLL_CK_CTRL_2_SET_rg_pcie_mode_pll_auto_en(reg32, val) REG_FLD_SET(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_en, (reg32), (val))

#define SYS_CTRL_0_SET_rg_freq_meter_rtl_modified(reg32, val)  REG_FLD_SET(SYS_CTRL_0_FLD_rg_freq_meter_rtl_modified, (reg32), (val))
#define SYS_CTRL_0_SET_rg_qp_gdump_sel(reg32, val)             REG_FLD_SET(SYS_CTRL_0_FLD_rg_qp_gdump_sel, (reg32), (val))
#define SYS_CTRL_0_SET_rg_qp_pma_top_int_en(reg32, val)        REG_FLD_SET(SYS_CTRL_0_FLD_rg_qp_pma_top_int_en, (reg32), (val))

#define SYS_CTRL_1_SET_rg_force_rg_vusb10_on_sel(reg32, val)   REG_FLD_SET(SYS_CTRL_1_FLD_rg_force_rg_vusb10_on_sel, (reg32), (val))
#define SYS_CTRL_1_SET_rg_tx_short_fifo_disb(reg32, val)       REG_FLD_SET(SYS_CTRL_1_FLD_rg_tx_short_fifo_disb, (reg32), (val))
#define SYS_CTRL_1_SET_rg_tx_short_fifo_w_thresold(reg32, val) REG_FLD_SET(SYS_CTRL_1_FLD_rg_tx_short_fifo_w_thresold, (reg32), (val))
#define SYS_CTRL_1_SET_rg_tx_short_fifo_r_thresold(reg32, val) REG_FLD_SET(SYS_CTRL_1_FLD_rg_tx_short_fifo_r_thresold, (reg32), (val))

#define QP_SYS_0_SET_ro_tx_short_fifo_empty(reg32, val)        REG_FLD_SET(QP_SYS_0_FLD_ro_tx_short_fifo_empty, (reg32), (val))
#define QP_SYS_0_SET_ro_tx_short_fifo_full(reg32, val)         REG_FLD_SET(QP_SYS_0_FLD_ro_tx_short_fifo_full, (reg32), (val))

#define FT_CTRL_0_SET_rg_ft_freq_meter_relck_num_0(reg32, val) REG_FLD_SET(FT_CTRL_0_FLD_rg_ft_freq_meter_relck_num_0, (reg32), (val))
#define FT_CTRL_0_SET_rg_ft_freq_meter_clear_unlck_cnt_0(reg32, val) REG_FLD_SET(FT_CTRL_0_FLD_rg_ft_freq_meter_clear_unlck_cnt_0, (reg32), (val))
#define FT_CTRL_0_SET_rg_ft_freq_meter_freq_det_en_0(reg32, val) REG_FLD_SET(FT_CTRL_0_FLD_rg_ft_freq_meter_freq_det_en_0, (reg32), (val))

#define FT_CTRL_1_SET_rg_ft_freq_meter_relck_num_1(reg32, val) REG_FLD_SET(FT_CTRL_1_FLD_rg_ft_freq_meter_relck_num_1, (reg32), (val))
#define FT_CTRL_1_SET_rg_ft_freq_meter_clear_unlck_cnt_1(reg32, val) REG_FLD_SET(FT_CTRL_1_FLD_rg_ft_freq_meter_clear_unlck_cnt_1, (reg32), (val))
#define FT_CTRL_1_SET_rg_ft_freq_meter_freq_det_en_1(reg32, val) REG_FLD_SET(FT_CTRL_1_FLD_rg_ft_freq_meter_freq_det_en_1, (reg32), (val))

#define FT_CTRL_2_SET_rg_ft_freq_meter_relck_num_2(reg32, val) REG_FLD_SET(FT_CTRL_2_FLD_rg_ft_freq_meter_relck_num_2, (reg32), (val))
#define FT_CTRL_2_SET_rg_ft_freq_meter_clear_unlck_cnt_2(reg32, val) REG_FLD_SET(FT_CTRL_2_FLD_rg_ft_freq_meter_clear_unlck_cnt_2, (reg32), (val))
#define FT_CTRL_2_SET_rg_ft_freq_meter_freq_det_en_2(reg32, val) REG_FLD_SET(FT_CTRL_2_FLD_rg_ft_freq_meter_freq_det_en_2, (reg32), (val))

#define FT_CTRL_3_SET_rg_ft_freq_meter_relck_num_3(reg32, val) REG_FLD_SET(FT_CTRL_3_FLD_rg_ft_freq_meter_relck_num_3, (reg32), (val))
#define FT_CTRL_3_SET_rg_ft_freq_meter_clear_unlck_cnt_3(reg32, val) REG_FLD_SET(FT_CTRL_3_FLD_rg_ft_freq_meter_clear_unlck_cnt_3, (reg32), (val))
#define FT_CTRL_3_SET_rg_ft_freq_meter_freq_det_en_3(reg32, val) REG_FLD_SET(FT_CTRL_3_FLD_rg_ft_freq_meter_freq_det_en_3, (reg32), (val))

#define FT_CTRL_4_SET_rg_ft_freq_meter_relck_num_4(reg32, val) REG_FLD_SET(FT_CTRL_4_FLD_rg_ft_freq_meter_relck_num_4, (reg32), (val))
#define FT_CTRL_4_SET_rg_ft_freq_meter_clear_unlck_cnt_4(reg32, val) REG_FLD_SET(FT_CTRL_4_FLD_rg_ft_freq_meter_clear_unlck_cnt_4, (reg32), (val))
#define FT_CTRL_4_SET_rg_ft_freq_meter_freq_det_en_4(reg32, val) REG_FLD_SET(FT_CTRL_4_FLD_rg_ft_freq_meter_freq_det_en_4, (reg32), (val))

#define FT_CTRL_5_SET_rg_ft_freq_meter_relck_num_5(reg32, val) REG_FLD_SET(FT_CTRL_5_FLD_rg_ft_freq_meter_relck_num_5, (reg32), (val))
#define FT_CTRL_5_SET_rg_ft_freq_meter_clear_unlck_cnt_5(reg32, val) REG_FLD_SET(FT_CTRL_5_FLD_rg_ft_freq_meter_clear_unlck_cnt_5, (reg32), (val))
#define FT_CTRL_5_SET_rg_ft_freq_meter_freq_det_en_5(reg32, val) REG_FLD_SET(FT_CTRL_5_FLD_rg_ft_freq_meter_freq_det_en_5, (reg32), (val))

#define FT_CTRL_6_SET_rg_ft_freq_meter_relck_num_6(reg32, val) REG_FLD_SET(FT_CTRL_6_FLD_rg_ft_freq_meter_relck_num_6, (reg32), (val))
#define FT_CTRL_6_SET_rg_ft_freq_meter_clear_unlck_cnt_6(reg32, val) REG_FLD_SET(FT_CTRL_6_FLD_rg_ft_freq_meter_clear_unlck_cnt_6, (reg32), (val))
#define FT_CTRL_6_SET_rg_ft_freq_meter_freq_det_en_6(reg32, val) REG_FLD_SET(FT_CTRL_6_FLD_rg_ft_freq_meter_freq_det_en_6, (reg32), (val))

#define FT_CTRL_7_SET_rg_ft_freq_meter_relck_num_7(reg32, val) REG_FLD_SET(FT_CTRL_7_FLD_rg_ft_freq_meter_relck_num_7, (reg32), (val))
#define FT_CTRL_7_SET_rg_ft_freq_meter_clear_unlck_cnt_7(reg32, val) REG_FLD_SET(FT_CTRL_7_FLD_rg_ft_freq_meter_clear_unlck_cnt_7, (reg32), (val))
#define FT_CTRL_7_SET_rg_ft_freq_meter_freq_det_en_7(reg32, val) REG_FLD_SET(FT_CTRL_7_FLD_rg_ft_freq_meter_freq_det_en_7, (reg32), (val))

#define FT_CTRL_8_SET_rg_ft_freq_meter_relck_num_8(reg32, val) REG_FLD_SET(FT_CTRL_8_FLD_rg_ft_freq_meter_relck_num_8, (reg32), (val))
#define FT_CTRL_8_SET_rg_ft_freq_meter_clear_unlck_cnt_8(reg32, val) REG_FLD_SET(FT_CTRL_8_FLD_rg_ft_freq_meter_clear_unlck_cnt_8, (reg32), (val))
#define FT_CTRL_8_SET_rg_ft_freq_meter_freq_det_en_8(reg32, val) REG_FLD_SET(FT_CTRL_8_FLD_rg_ft_freq_meter_freq_det_en_8, (reg32), (val))

#define FT_CTRL_9_SET_rg_ft_freq_meter_chk_cycle_0(reg32, val) REG_FLD_SET(FT_CTRL_9_FLD_rg_ft_freq_meter_chk_cycle_0, (reg32), (val))

#define FT_CTRL_10_SET_rg_ft_freq_meter_chk_cycle_1(reg32, val) REG_FLD_SET(FT_CTRL_10_FLD_rg_ft_freq_meter_chk_cycle_1, (reg32), (val))

#define FT_CTRL_11_SET_rg_ft_freq_meter_chk_cycle_2(reg32, val) REG_FLD_SET(FT_CTRL_11_FLD_rg_ft_freq_meter_chk_cycle_2, (reg32), (val))

#define FT_CTRL_12_SET_rg_ft_freq_meter_chk_cycle_3(reg32, val) REG_FLD_SET(FT_CTRL_12_FLD_rg_ft_freq_meter_chk_cycle_3, (reg32), (val))

#define FT_CTRL_13_SET_rg_ft_freq_meter_chk_cycle_4(reg32, val) REG_FLD_SET(FT_CTRL_13_FLD_rg_ft_freq_meter_chk_cycle_4, (reg32), (val))

#define FT_CTRL_14_SET_rg_ft_freq_meter_chk_cycle_5(reg32, val) REG_FLD_SET(FT_CTRL_14_FLD_rg_ft_freq_meter_chk_cycle_5, (reg32), (val))

#define FT_CTRL_15_SET_rg_ft_freq_meter_chk_cycle_6(reg32, val) REG_FLD_SET(FT_CTRL_15_FLD_rg_ft_freq_meter_chk_cycle_6, (reg32), (val))

#define FT_CTRL_16_SET_rg_ft_freq_meter_chk_cycle_7(reg32, val) REG_FLD_SET(FT_CTRL_16_FLD_rg_ft_freq_meter_chk_cycle_7, (reg32), (val))

#define FT_CTRL_17_SET_rg_ft_freq_meter_chk_cycle_8(reg32, val) REG_FLD_SET(FT_CTRL_17_FLD_rg_ft_freq_meter_chk_cycle_8, (reg32), (val))

#define FT_CTRL_18_SET_rg_ft_freq_meter_golden_cycle_0(reg32, val) REG_FLD_SET(FT_CTRL_18_FLD_rg_ft_freq_meter_golden_cycle_0, (reg32), (val))

#define FT_CTRL_19_SET_rg_ft_freq_meter_golden_cycle_1(reg32, val) REG_FLD_SET(FT_CTRL_19_FLD_rg_ft_freq_meter_golden_cycle_1, (reg32), (val))

#define FT_CTRL_20_SET_rg_ft_freq_meter_golden_cycle_2(reg32, val) REG_FLD_SET(FT_CTRL_20_FLD_rg_ft_freq_meter_golden_cycle_2, (reg32), (val))

#define FT_CTRL_21_SET_rg_ft_freq_meter_golden_cycle_3(reg32, val) REG_FLD_SET(FT_CTRL_21_FLD_rg_ft_freq_meter_golden_cycle_3, (reg32), (val))

#define FT_CTRL_22_SET_rg_ft_freq_meter_golden_cycle_4(reg32, val) REG_FLD_SET(FT_CTRL_22_FLD_rg_ft_freq_meter_golden_cycle_4, (reg32), (val))

#define FT_CTRL_23_SET_rg_ft_freq_meter_golden_cycle_5(reg32, val) REG_FLD_SET(FT_CTRL_23_FLD_rg_ft_freq_meter_golden_cycle_5, (reg32), (val))

#define FT_CTRL_24_SET_rg_ft_freq_meter_golden_cycle_6(reg32, val) REG_FLD_SET(FT_CTRL_24_FLD_rg_ft_freq_meter_golden_cycle_6, (reg32), (val))

#define FT_CTRL_25_SET_rg_ft_freq_meter_golden_cycle_7(reg32, val) REG_FLD_SET(FT_CTRL_25_FLD_rg_ft_freq_meter_golden_cycle_7, (reg32), (val))

#define FT_CTRL_26_SET_rg_ft_freq_meter_golden_cycle_8(reg32, val) REG_FLD_SET(FT_CTRL_26_FLD_rg_ft_freq_meter_golden_cycle_8, (reg32), (val))

#define FT_CTRL_27_SET_rg_ft_freq_meter_tolerate_cycle_0(reg32, val) REG_FLD_SET(FT_CTRL_27_FLD_rg_ft_freq_meter_tolerate_cycle_0, (reg32), (val))

#define FT_CTRL_28_SET_rg_ft_freq_meter_tolerate_cycle_1(reg32, val) REG_FLD_SET(FT_CTRL_28_FLD_rg_ft_freq_meter_tolerate_cycle_1, (reg32), (val))

#define FT_CTRL_29_SET_rg_ft_freq_meter_tolerate_cycle_2(reg32, val) REG_FLD_SET(FT_CTRL_29_FLD_rg_ft_freq_meter_tolerate_cycle_2, (reg32), (val))

#define FT_CTRL_30_SET_rg_ft_freq_meter_tolerate_cycle_3(reg32, val) REG_FLD_SET(FT_CTRL_30_FLD_rg_ft_freq_meter_tolerate_cycle_3, (reg32), (val))

#define FT_CTRL_31_SET_rg_ft_freq_meter_tolerate_cycle_4(reg32, val) REG_FLD_SET(FT_CTRL_31_FLD_rg_ft_freq_meter_tolerate_cycle_4, (reg32), (val))

#define FT_CTRL_32_SET_rg_ft_freq_meter_tolerate_cycle_5(reg32, val) REG_FLD_SET(FT_CTRL_32_FLD_rg_ft_freq_meter_tolerate_cycle_5, (reg32), (val))

#define FT_CTRL_33_SET_rg_ft_freq_meter_tolerate_cycle_6(reg32, val) REG_FLD_SET(FT_CTRL_33_FLD_rg_ft_freq_meter_tolerate_cycle_6, (reg32), (val))

#define FT_CTRL_34_SET_rg_ft_freq_meter_tolerate_cycle_7(reg32, val) REG_FLD_SET(FT_CTRL_34_FLD_rg_ft_freq_meter_tolerate_cycle_7, (reg32), (val))

#define FT_CTRL_35_SET_rg_ft_freq_meter_tolerate_cycle_8(reg32, val) REG_FLD_SET(FT_CTRL_35_FLD_rg_ft_freq_meter_tolerate_cycle_8, (reg32), (val))

#define FT_STATUS_0_SET_ro_ft_freq_meter_unlck_cnt_0(reg32, val) REG_FLD_SET(FT_STATUS_0_FLD_ro_ft_freq_meter_unlck_cnt_0, (reg32), (val))
#define FT_STATUS_0_SET_ro_ft_freq_meter_freq_state_0(reg32, val) REG_FLD_SET(FT_STATUS_0_FLD_ro_ft_freq_meter_freq_state_0, (reg32), (val))
#define FT_STATUS_0_SET_ro_ft_freq_meter_freq_lock_0(reg32, val) REG_FLD_SET(FT_STATUS_0_FLD_ro_ft_freq_meter_freq_lock_0, (reg32), (val))

#define FT_STATUS_1_SET_ro_ft_freq_meter_unlck_cnt_1(reg32, val) REG_FLD_SET(FT_STATUS_1_FLD_ro_ft_freq_meter_unlck_cnt_1, (reg32), (val))
#define FT_STATUS_1_SET_ro_ft_freq_meter_freq_state_1(reg32, val) REG_FLD_SET(FT_STATUS_1_FLD_ro_ft_freq_meter_freq_state_1, (reg32), (val))
#define FT_STATUS_1_SET_ro_ft_freq_meter_freq_lock_1(reg32, val) REG_FLD_SET(FT_STATUS_1_FLD_ro_ft_freq_meter_freq_lock_1, (reg32), (val))

#define FT_STATUS_2_SET_ro_ft_freq_meter_unlck_cnt_2(reg32, val) REG_FLD_SET(FT_STATUS_2_FLD_ro_ft_freq_meter_unlck_cnt_2, (reg32), (val))
#define FT_STATUS_2_SET_ro_ft_freq_meter_freq_state_2(reg32, val) REG_FLD_SET(FT_STATUS_2_FLD_ro_ft_freq_meter_freq_state_2, (reg32), (val))
#define FT_STATUS_2_SET_ro_ft_freq_meter_freq_lock_2(reg32, val) REG_FLD_SET(FT_STATUS_2_FLD_ro_ft_freq_meter_freq_lock_2, (reg32), (val))

#define FT_STATUS_3_SET_ro_ft_freq_meter_unlck_cnt_3(reg32, val) REG_FLD_SET(FT_STATUS_3_FLD_ro_ft_freq_meter_unlck_cnt_3, (reg32), (val))
#define FT_STATUS_3_SET_ro_ft_freq_meter_freq_state_3(reg32, val) REG_FLD_SET(FT_STATUS_3_FLD_ro_ft_freq_meter_freq_state_3, (reg32), (val))
#define FT_STATUS_3_SET_ro_ft_freq_meter_freq_lock_3(reg32, val) REG_FLD_SET(FT_STATUS_3_FLD_ro_ft_freq_meter_freq_lock_3, (reg32), (val))

#define FT_STATUS_4_SET_ro_ft_freq_meter_unlck_cnt_4(reg32, val) REG_FLD_SET(FT_STATUS_4_FLD_ro_ft_freq_meter_unlck_cnt_4, (reg32), (val))
#define FT_STATUS_4_SET_ro_ft_freq_meter_freq_state_4(reg32, val) REG_FLD_SET(FT_STATUS_4_FLD_ro_ft_freq_meter_freq_state_4, (reg32), (val))
#define FT_STATUS_4_SET_ro_ft_freq_meter_freq_lock_4(reg32, val) REG_FLD_SET(FT_STATUS_4_FLD_ro_ft_freq_meter_freq_lock_4, (reg32), (val))

#define FT_STATUS_5_SET_ro_ft_freq_meter_unlck_cnt_5(reg32, val) REG_FLD_SET(FT_STATUS_5_FLD_ro_ft_freq_meter_unlck_cnt_5, (reg32), (val))
#define FT_STATUS_5_SET_ro_ft_freq_meter_freq_state_5(reg32, val) REG_FLD_SET(FT_STATUS_5_FLD_ro_ft_freq_meter_freq_state_5, (reg32), (val))
#define FT_STATUS_5_SET_ro_ft_freq_meter_freq_lock_5(reg32, val) REG_FLD_SET(FT_STATUS_5_FLD_ro_ft_freq_meter_freq_lock_5, (reg32), (val))

#define FT_STATUS_6_SET_ro_ft_freq_meter_unlck_cnt_6(reg32, val) REG_FLD_SET(FT_STATUS_6_FLD_ro_ft_freq_meter_unlck_cnt_6, (reg32), (val))
#define FT_STATUS_6_SET_ro_ft_freq_meter_freq_state_6(reg32, val) REG_FLD_SET(FT_STATUS_6_FLD_ro_ft_freq_meter_freq_state_6, (reg32), (val))
#define FT_STATUS_6_SET_ro_ft_freq_meter_freq_lock_6(reg32, val) REG_FLD_SET(FT_STATUS_6_FLD_ro_ft_freq_meter_freq_lock_6, (reg32), (val))

#define FT_STATUS_7_SET_ro_ft_freq_meter_unlck_cnt_7(reg32, val) REG_FLD_SET(FT_STATUS_7_FLD_ro_ft_freq_meter_unlck_cnt_7, (reg32), (val))
#define FT_STATUS_7_SET_ro_ft_freq_meter_freq_state_7(reg32, val) REG_FLD_SET(FT_STATUS_7_FLD_ro_ft_freq_meter_freq_state_7, (reg32), (val))
#define FT_STATUS_7_SET_ro_ft_freq_meter_freq_lock_7(reg32, val) REG_FLD_SET(FT_STATUS_7_FLD_ro_ft_freq_meter_freq_lock_7, (reg32), (val))

#define FT_STATUS_8_SET_ro_ft_freq_meter_unlck_cnt_8(reg32, val) REG_FLD_SET(FT_STATUS_8_FLD_ro_ft_freq_meter_unlck_cnt_8, (reg32), (val))
#define FT_STATUS_8_SET_ro_ft_freq_meter_freq_state_8(reg32, val) REG_FLD_SET(FT_STATUS_8_FLD_ro_ft_freq_meter_freq_state_8, (reg32), (val))
#define FT_STATUS_8_SET_ro_ft_freq_meter_freq_lock_8(reg32, val) REG_FLD_SET(FT_STATUS_8_FLD_ro_ft_freq_meter_freq_lock_8, (reg32), (val))

#define RX_SYS_CTRL_0_SET_rg_qp_speed_sel_1(reg32, val)        REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_speed_sel_1, (reg32), (val))
#define RX_SYS_CTRL_0_SET_rg_qp_speed_sel(reg32, val)          REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_speed_sel, (reg32), (val))
#define RX_SYS_CTRL_0_SET_rg_qp_amp(reg32, val)                REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_amp, (reg32), (val))
#define RX_SYS_CTRL_0_SET_rg_qp_prbs_sel(reg32, val)           REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_prbs_sel, (reg32), (val))
#define RX_SYS_CTRL_0_SET_rg_qp_ad_sleep_en(reg32, val)        REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_ad_sleep_en, (reg32), (val))
#define RX_SYS_CTRL_0_SET_rg_qp_roc_ck_en(reg32, val)          REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_roc_ck_en, (reg32), (val))
#define RX_SYS_CTRL_0_SET_rg_qp_rx_hz(reg32, val)              REG_FLD_SET(RX_SYS_CTRL_0_FLD_rg_qp_rx_hz, (reg32), (val))

#define FLL_CTRL_0_SET_rg_qp_ipath_idac(reg32, val)            REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_ipath_idac, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_load_en(reg32, val)               REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_load_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_ro_fll_4_latch_en(reg32, val)     REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_ro_fll_4_latch_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_ro_fll_3_latch_en(reg32, val)     REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_ro_fll_3_latch_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_ro_fll_2_latch_en(reg32, val)     REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_ro_fll_2_latch_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_ro_fll_1_latch_en(reg32, val)     REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_ro_fll_1_latch_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_debug_sel(reg32, val)             REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_debug_sel, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_fll_repli(reg32, val)             REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_fll_repli, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_fll_cor(reg32, val)               REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_fll_cor, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_fll_dig_rst_force_en(reg32, val)  REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_fll_dig_rst_force_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_fll_dig_rstb_force(reg32, val)    REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_fll_dig_rstb_force, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_icdr_kband_done_force_en(reg32, val) REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force_en, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_icdr_kband_done_force(reg32, val) REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force, (reg32), (val))
#define FLL_CTRL_0_SET_rg_qp_fll_dig_pro(reg32, val)           REG_FLD_SET(FLL_CTRL_0_FLD_rg_qp_fll_dig_pro, (reg32), (val))

#define FLL_CTRL_1_SET_rg_qp_fll_idac_min(reg32, val)          REG_FLD_SET(FLL_CTRL_1_FLD_rg_qp_fll_idac_min, (reg32), (val))
#define FLL_CTRL_1_SET_rg_qp_fll_idac_max(reg32, val)          REG_FLD_SET(FLL_CTRL_1_FLD_rg_qp_fll_idac_max, (reg32), (val))

#define FLL_CTRL_2_SET_rg_qp_fbkdiv(reg32, val)                REG_FLD_SET(FLL_CTRL_2_FLD_rg_qp_fbkdiv, (reg32), (val))
#define FLL_CTRL_2_SET_rg_qp_kband_prediv(reg32, val)          REG_FLD_SET(FLL_CTRL_2_FLD_rg_qp_kband_prediv, (reg32), (val))
#define FLL_CTRL_2_SET_rg_qp_ck_rate(reg32, val)               REG_FLD_SET(FLL_CTRL_2_FLD_rg_qp_ck_rate, (reg32), (val))
#define FLL_CTRL_2_SET_rg_qp_symbol_wd(reg32, val)             REG_FLD_SET(FLL_CTRL_2_FLD_rg_qp_symbol_wd, (reg32), (val))
#define FLL_CTRL_2_SET_rg_qp_settle_time_sel(reg32, val)       REG_FLD_SET(FLL_CTRL_2_FLD_rg_qp_settle_time_sel, (reg32), (val))

#define FLL_CTRL_3_SET_rg_qp_fll_idac_repli(reg32, val)        REG_FLD_SET(FLL_CTRL_3_FLD_rg_qp_fll_idac_repli, (reg32), (val))

#define RX_DLY_0_SET_rg_qp_rx_saosc_en_h_dly(reg32, val)       REG_FLD_SET(RX_DLY_0_FLD_rg_qp_rx_saosc_en_h_dly, (reg32), (val))
#define RX_DLY_0_SET_rg_qp_rx_pi_cal_en_h_dly(reg32, val)      REG_FLD_SET(RX_DLY_0_FLD_rg_qp_rx_pi_cal_en_h_dly, (reg32), (val))

#define RX_DLY_1_SET_rg_qp_sig_det_l_thres(reg32, val)         REG_FLD_SET(RX_DLY_1_FLD_rg_qp_sig_det_l_thres, (reg32), (val))
#define RX_DLY_1_SET_rg_qp_sig_det_h_thres(reg32, val)         REG_FLD_SET(RX_DLY_1_FLD_rg_qp_sig_det_h_thres, (reg32), (val))

#define RX_AFIFO_SET_rg_qp_pma_rx_fifo_rd_thr(reg32, val)      REG_FLD_SET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_thr, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_pma_rx_fifo_wr_thr(reg32, val)      REG_FLD_SET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_thr, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_pma_rx_fifo_rd_clr(reg32, val)      REG_FLD_SET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_clr, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_pma_rx_fifo_wr_clr(reg32, val)      REG_FLD_SET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_clr, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_pma_rx_fifo_rd_dly(reg32, val)      REG_FLD_SET(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_dly, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_rx_data_inv(reg32, val)             REG_FLD_SET(RX_AFIFO_FLD_rg_qp_rx_data_inv, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_rx_asic_uses_ff(reg32, val)         REG_FLD_SET(RX_AFIFO_FLD_rg_qp_rx_asic_uses_ff, (reg32), (val))
#define RX_AFIFO_SET_rg_qp_rx_afifo_adj(reg32, val)            REG_FLD_SET(RX_AFIFO_FLD_rg_qp_rx_afifo_adj, (reg32), (val))

#define IMP_CTRL_0_SET_rg_qp_impcal_calcyc(reg32, val)         REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_impcal_calcyc, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_impcal_stbcyc(reg32, val)         REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_impcal_stbcyc, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_impcal_cycnt(reg32, val)          REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_impcal_cycnt, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_force_impsel(reg32, val)          REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_force_impsel, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_force_impcal_en(reg32, val)       REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_force_impcal_en, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_impcal_en(reg32, val)             REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_impcal_en, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_impcal_out(reg32, val)            REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_impcal_out, (reg32), (val))
#define IMP_CTRL_0_SET_rg_qp_power_on(reg32, val)              REG_FLD_SET(IMP_CTRL_0_FLD_rg_qp_power_on, (reg32), (val))

#define IMP_CTRL_1_SET_rg_qp_prb_out(reg32, val)               REG_FLD_SET(IMP_CTRL_1_FLD_rg_qp_prb_out, (reg32), (val))
#define IMP_CTRL_1_SET_rg_qp_impcal_cal(reg32, val)            REG_FLD_SET(IMP_CTRL_1_FLD_rg_qp_impcal_cal, (reg32), (val))
#define IMP_CTRL_1_SET_rg_qp_rx_imp_sel(reg32, val)            REG_FLD_SET(IMP_CTRL_1_FLD_rg_qp_rx_imp_sel, (reg32), (val))
#define IMP_CTRL_1_SET_rg_qp_imp_bias(reg32, val)              REG_FLD_SET(IMP_CTRL_1_FLD_rg_qp_imp_bias, (reg32), (val))
#define IMP_CTRL_1_SET_rg_qp_fix_impsel(reg32, val)            REG_FLD_SET(IMP_CTRL_1_FLD_rg_qp_fix_impsel, (reg32), (val))

#define RX_CTRL_UNUSE_0_SET_rg_qp_rosc_fine(reg32, val)        REG_FLD_SET(RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_fine, (reg32), (val))
#define RX_CTRL_UNUSE_0_SET_rg_qp_rosc_coarse_sel(reg32, val)  REG_FLD_SET(RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_coarse_sel, (reg32), (val))
#define RX_CTRL_UNUSE_0_SET_rg_qp_cdr_vcocal_fail(reg32, val)  REG_FLD_SET(RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_fail, (reg32), (val))
#define RX_CTRL_UNUSE_0_SET_rg_qp_cdr_vcocal_state(reg32, val) REG_FLD_SET(RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_state, (reg32), (val))

#define RX_CTRL_1_SET_rg_qp_freq_det_en_wait_dly(reg32, val)   REG_FLD_SET(RX_CTRL_1_FLD_rg_qp_freq_det_en_wait_dly, (reg32), (val))
#define RX_CTRL_1_SET_rg_qp_cdr_settle_dly(reg32, val)         REG_FLD_SET(RX_CTRL_1_FLD_rg_qp_cdr_settle_dly, (reg32), (val))
#define RX_CTRL_1_SET_rg_qp_cdr_re_calib(reg32, val)           REG_FLD_SET(RX_CTRL_1_FLD_rg_qp_cdr_re_calib, (reg32), (val))
#define RX_CTRL_1_SET_rg_qp_cdr_bw_sel_dly(reg32, val)         REG_FLD_SET(RX_CTRL_1_FLD_rg_qp_cdr_bw_sel_dly, (reg32), (val))

#define RX_CTRL_2_SET_rg_qp_rx_pwd(reg32, val)                 REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_rx_pwd, (reg32), (val))
#define RX_CTRL_2_SET_rg_qp_rx_eq_en_h_dly(reg32, val)         REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_rx_eq_en_h_dly, (reg32), (val))
#define RX_CTRL_2_SET_rg_qp_ppm_thres(reg32, val)              REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_ppm_thres, (reg32), (val))
#define RX_CTRL_2_SET_rg_qp_phya_pwd(reg32, val)               REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_phya_pwd, (reg32), (val))
#define RX_CTRL_2_SET_rg_qp_lpf_window_sel(reg32, val)         REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_lpf_window_sel, (reg32), (val))
#define RX_CTRL_2_SET_rg_qp_freq_det_frc_en(reg32, val)        REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_freq_det_frc_en, (reg32), (val))
#define RX_CTRL_2_SET_rg_qp_freq_det_frc(reg32, val)           REG_FLD_SET(RX_CTRL_2_FLD_rg_qp_freq_det_frc, (reg32), (val))

#define RX_CTRL_3_SET_rg_qp_cdr_band_fail(reg32, val)          REG_FLD_SET(RX_CTRL_3_FLD_rg_qp_cdr_band_fail, (reg32), (val))
#define RX_CTRL_3_SET_rg_qp_speed_chg(reg32, val)              REG_FLD_SET(RX_CTRL_3_FLD_rg_qp_speed_chg, (reg32), (val))
#define RX_CTRL_3_SET_rg_qp_sigdet_wait_force(reg32, val)      REG_FLD_SET(RX_CTRL_3_FLD_rg_qp_sigdet_wait_force, (reg32), (val))
#define RX_CTRL_3_SET_rg_qp_sigdet_wait_cond(reg32, val)       REG_FLD_SET(RX_CTRL_3_FLD_rg_qp_sigdet_wait_cond, (reg32), (val))
#define RX_CTRL_3_SET_rg_qp_sig_det_wait_dly(reg32, val)       REG_FLD_SET(RX_CTRL_3_FLD_rg_qp_sig_det_wait_dly, (reg32), (val))

#define RX_CTRL_4_SET_rg_qp_kband_kfc(reg32, val)              REG_FLD_SET(RX_CTRL_4_FLD_rg_qp_kband_kfc, (reg32), (val))
#define RX_CTRL_4_SET_rg_pcie_sig_cal_en_time_sel(reg32, val)  REG_FLD_SET(RX_CTRL_4_FLD_rg_pcie_sig_cal_en_time_sel, (reg32), (val))
#define RX_CTRL_4_SET_rg_bias_dir(reg32, val)                  REG_FLD_SET(RX_CTRL_4_FLD_rg_bias_dir, (reg32), (val))
#define RX_CTRL_4_SET_rg_rx_pi_cal_en_start_time(reg32, val)   REG_FLD_SET(RX_CTRL_4_FLD_rg_rx_pi_cal_en_start_time, (reg32), (val))
#define RX_CTRL_4_SET_rg_rx_settle_rdy_time(reg32, val)        REG_FLD_SET(RX_CTRL_4_FLD_rg_rx_settle_rdy_time, (reg32), (val))

#define RX_CTRL_5_SET_rg_fredet_chk_cycle(reg32, val)          REG_FLD_SET(RX_CTRL_5_FLD_rg_fredet_chk_cycle, (reg32), (val))
#define RX_CTRL_5_SET_rg_qp_impcal_cyccnt(reg32, val)          REG_FLD_SET(RX_CTRL_5_FLD_rg_qp_impcal_cyccnt, (reg32), (val))

#define RX_CTRL_6_SET_rg_fredet_golden_cycle(reg32, val)       REG_FLD_SET(RX_CTRL_6_FLD_rg_fredet_golden_cycle, (reg32), (val))

#define RX_CTRL_7_SET_rg_fredet_clear_unlck_cnt(reg32, val)    REG_FLD_SET(RX_CTRL_7_FLD_rg_fredet_clear_unlck_cnt, (reg32), (val))
#define RX_CTRL_7_SET_rg_fredet_relck_num(reg32, val)          REG_FLD_SET(RX_CTRL_7_FLD_rg_fredet_relck_num, (reg32), (val))
#define RX_CTRL_7_SET_rg_fredet_tolerate_cycle(reg32, val)     REG_FLD_SET(RX_CTRL_7_FLD_rg_fredet_tolerate_cycle, (reg32), (val))

#define RX_CTRL_8_SET_rg_da_qp_saosc_done_time(reg32, val)     REG_FLD_SET(RX_CTRL_8_FLD_rg_da_qp_saosc_done_time, (reg32), (val))
#define RX_CTRL_8_SET_rg_da_qp_leqos_en_time(reg32, val)       REG_FLD_SET(RX_CTRL_8_FLD_rg_da_qp_leqos_en_time, (reg32), (val))

#define RX_CTRL_9_SET_rg_force_pll_stable(reg32, val)          REG_FLD_SET(RX_CTRL_9_FLD_rg_force_pll_stable, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_pll_stable_sel(reg32, val)      REG_FLD_SET(RX_CTRL_9_FLD_rg_force_pll_stable_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_bias_pwd(reg32, val)            REG_FLD_SET(RX_CTRL_9_FLD_rg_force_bias_pwd, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_bias_pwd_sel(reg32, val)        REG_FLD_SET(RX_CTRL_9_FLD_rg_force_bias_pwd_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_kband_done_bypass_ana(reg32, val) REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_kband_done_bypass_ana_sel(reg32, val) REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_sigdet_out_bypass_ana(reg32, val) REG_FLD_SET(RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_sigdet_out_bypass_ana_sel(reg32, val) REG_FLD_SET(RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_sigdet_cal_out_bypass_ana(reg32, val) REG_FLD_SET(RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_sigdet_cal_out_bypass_ana_sel(reg32, val) REG_FLD_SET(RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_saos_en(reg32, val)          REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_saos_en, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_saos_en_sel(reg32, val)      REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_saos_en_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_lck2ref(reg32, val)         REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_lck2ref, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_lck2ref_sel(reg32, val)     REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_lck2ref_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_lpf_rstb(reg32, val)        REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_lpf_rstb_sel(reg32, val)    REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_stable(reg32, val)          REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_stable, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_stable_sel(reg32, val)      REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_stable_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_dfe_en(reg32, val)              REG_FLD_SET(RX_CTRL_9_FLD_rg_force_dfe_en, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_dfe_en_sel(reg32, val)          REG_FLD_SET(RX_CTRL_9_FLD_rg_force_dfe_en_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_sigdet_en(reg32, val)        REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_sigdet_en, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_sigdet_en_sel(reg32, val)    REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_sigdet_en_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_dfe_rst(reg32, val)             REG_FLD_SET(RX_CTRL_9_FLD_rg_force_dfe_rst, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_dfe_rst_sel(reg32, val)         REG_FLD_SET(RX_CTRL_9_FLD_rg_force_dfe_rst_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_data_rstb(reg32, val)        REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_data_rstb, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_data_rstb_sel(reg32, val)    REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_data_rstb_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_pi_cal_en(reg32, val)        REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_pi_cal_en, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_rx_pi_cal_en_sel(reg32, val)    REG_FLD_SET(RX_CTRL_9_FLD_rg_force_rx_pi_cal_en_sel, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_pd_pwdb(reg32, val)         REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb, (reg32), (val))
#define RX_CTRL_9_SET_rg_force_cdr_pd_pwdb_sel(reg32, val)     REG_FLD_SET(RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb_sel, (reg32), (val))

#define RX_CTRL_10_SET_rg_force_cdr_settle_ok(reg32, val)      REG_FLD_SET(RX_CTRL_10_FLD_rg_force_cdr_settle_ok, (reg32), (val))
#define RX_CTRL_10_SET_rg_force_cdr_settle_ok_sel(reg32, val)  REG_FLD_SET(RX_CTRL_10_FLD_rg_force_cdr_settle_ok_sel, (reg32), (val))
#define RX_CTRL_10_SET_rg_qp_cdr_settle_rdy_cnt_time(reg32, val) REG_FLD_SET(RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_time, (reg32), (val))
#define RX_CTRL_10_SET_rg_qp_cdr_settle_rdy_cnt_pre_time(reg32, val) REG_FLD_SET(RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_pre_time, (reg32), (val))
#define RX_CTRL_10_SET_rg_force_cdr_lck2ref_pre(reg32, val)    REG_FLD_SET(RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre, (reg32), (val))
#define RX_CTRL_10_SET_rg_force_cdr_lck2ref_pre_sel(reg32, val) REG_FLD_SET(RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre_sel, (reg32), (val))
#define RX_CTRL_10_SET_rg_force_eq_en(reg32, val)              REG_FLD_SET(RX_CTRL_10_FLD_rg_force_eq_en, (reg32), (val))
#define RX_CTRL_10_SET_rg_force_eq_en_sel(reg32, val)          REG_FLD_SET(RX_CTRL_10_FLD_rg_force_eq_en_sel, (reg32), (val))
#define RX_CTRL_10_SET_rg_qp_rx_scan(reg32, val)               REG_FLD_SET(RX_CTRL_10_FLD_rg_qp_rx_scan, (reg32), (val))
#define RX_CTRL_10_SET_rg_qp_crsdet_rstb(reg32, val)           REG_FLD_SET(RX_CTRL_10_FLD_rg_qp_crsdet_rstb, (reg32), (val))
#define RX_CTRL_10_SET_rg_qp_crsdet_en(reg32, val)             REG_FLD_SET(RX_CTRL_10_FLD_rg_qp_crsdet_en, (reg32), (val))

#define RX_CTRL_11_SET_rg_qp_sigdet_cal_sample_time(reg32, val) REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_sigdet_cal_sample_time, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_sigdet_10g(reg32, val)      REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_sigdet_10g, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_sigdet_5g(reg32, val)       REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_sigdet_5g, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_sigdet(reg32, val)          REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_sigdet, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_sigdet_sel(reg32, val)      REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_sigdet_sel, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_rx_dcleq_intf(reg32, val)         REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_rx_dcleq_intf, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_eq_en(reg32, val)           REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_eq_en, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_eq_en_sel(reg32, val)       REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_eq_en_sel, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_speed_sel(reg32, val)       REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_speed_sel, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_eq_rdy(reg32, val)          REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_eq_rdy, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_force_eq_rdy_sel(reg32, val)      REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_force_eq_rdy_sel, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_eq_rstep2(reg32, val)             REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_eq_rstep2, (reg32), (val))
#define RX_CTRL_11_SET_rg_qp_eq_rstep1(reg32, val)             REG_FLD_SET(RX_CTRL_11_FLD_rg_qp_eq_rstep1, (reg32), (val))
#define RX_CTRL_11_SET_rg_force_saos_rdy(reg32, val)           REG_FLD_SET(RX_CTRL_11_FLD_rg_force_saos_rdy, (reg32), (val))
#define RX_CTRL_11_SET_rg_force_saos_rdy_sel(reg32, val)       REG_FLD_SET(RX_CTRL_11_FLD_rg_force_saos_rdy_sel, (reg32), (val))
#define RX_CTRL_11_SET_rg_force_freq_lock(reg32, val)          REG_FLD_SET(RX_CTRL_11_FLD_rg_force_freq_lock, (reg32), (val))
#define RX_CTRL_11_SET_rg_force_freq_lock_sel(reg32, val)      REG_FLD_SET(RX_CTRL_11_FLD_rg_force_freq_lock_sel, (reg32), (val))

#define RX_CTRL_12_SET_rg_sigdet_win_nonvld_times(reg32, val)  REG_FLD_SET(RX_CTRL_12_FLD_rg_sigdet_win_nonvld_times, (reg32), (val))
#define RX_CTRL_12_SET_rg_sigdet_win_vld_times(reg32, val)     REG_FLD_SET(RX_CTRL_12_FLD_rg_sigdet_win_vld_times, (reg32), (val))
#define RX_CTRL_12_SET_rg_sigdet_vld_time(reg32, val)          REG_FLD_SET(RX_CTRL_12_FLD_rg_sigdet_vld_time, (reg32), (val))
#define RX_CTRL_12_SET_rg_sigdet_win_size(reg32, val)          REG_FLD_SET(RX_CTRL_12_FLD_rg_sigdet_win_size, (reg32), (val))
#define RX_CTRL_12_SET_rg_sigdet_en(reg32, val)                REG_FLD_SET(RX_CTRL_12_FLD_rg_sigdet_en, (reg32), (val))

#define RX_CTRL_13_SET_rg_qp_reserve_3(reg32, val)             REG_FLD_SET(RX_CTRL_13_FLD_rg_qp_reserve_3, (reg32), (val))
#define RX_CTRL_13_SET_rg_qp_reserve_2(reg32, val)             REG_FLD_SET(RX_CTRL_13_FLD_rg_qp_reserve_2, (reg32), (val))
#define RX_CTRL_13_SET_rg_qp_reserve_1(reg32, val)             REG_FLD_SET(RX_CTRL_13_FLD_rg_qp_reserve_1, (reg32), (val))
#define RX_CTRL_13_SET_rg_qp_reserve_0(reg32, val)             REG_FLD_SET(RX_CTRL_13_FLD_rg_qp_reserve_0, (reg32), (val))

#define RX_CTRL_14_SET_qphy_rx_ctrl_debug_3(reg32, val)        REG_FLD_SET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_3, (reg32), (val))
#define RX_CTRL_14_SET_qphy_rx_ctrl_debug_2(reg32, val)        REG_FLD_SET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_2, (reg32), (val))
#define RX_CTRL_14_SET_qphy_rx_ctrl_debug_1(reg32, val)        REG_FLD_SET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_1, (reg32), (val))
#define RX_CTRL_14_SET_qphy_rx_ctrl_debug(reg32, val)          REG_FLD_SET(RX_CTRL_14_FLD_qphy_rx_ctrl_debug, (reg32), (val))

#define RX_CTRL_15_SET_ro_fll_idac(reg32, val)                 REG_FLD_SET(RX_CTRL_15_FLD_ro_fll_idac, (reg32), (val))
#define RX_CTRL_15_SET_ro_adc_freq(reg32, val)                 REG_FLD_SET(RX_CTRL_15_FLD_ro_adc_freq, (reg32), (val))

#define RX_CTRL_16_SET_ro_cor_gain(reg32, val)                 REG_FLD_SET(RX_CTRL_16_FLD_ro_cor_gain, (reg32), (val))

#define RX_CTRL_17_SET_ro_da_idac(reg32, val)                  REG_FLD_SET(RX_CTRL_17_FLD_ro_da_idac, (reg32), (val))
#define RX_CTRL_17_SET_ro_idacf(reg32, val)                    REG_FLD_SET(RX_CTRL_17_FLD_ro_idacf, (reg32), (val))

#define RX_CTRL_18_SET_ro_fll_idac_repli(reg32, val)           REG_FLD_SET(RX_CTRL_18_FLD_ro_fll_idac_repli, (reg32), (val))

#define RX_CTRL_19_SET_ro_adc_freq_inv_output(reg32, val)      REG_FLD_SET(RX_CTRL_19_FLD_ro_adc_freq_inv_output, (reg32), (val))

#define RX_CTRL_20_SET_ro_adc_freq_output(reg32, val)          REG_FLD_SET(RX_CTRL_20_FLD_ro_adc_freq_output, (reg32), (val))

#define RX_CTRL_21_SET_ro_cor_integ_output(reg32, val)         REG_FLD_SET(RX_CTRL_21_FLD_ro_cor_integ_output, (reg32), (val))

#define RX_CTRL_22_SET_ro_cor_integ_inv_output(reg32, val)     REG_FLD_SET(RX_CTRL_22_FLD_ro_cor_integ_inv_output, (reg32), (val))

#define RX_CTRL_23_SET_ro_cor_gain_output_0(reg32, val)        REG_FLD_SET(RX_CTRL_23_FLD_ro_cor_gain_output_0, (reg32), (val))

#define RX_CTRL_24_SET_ro_cor_gain_output_1(reg32, val)        REG_FLD_SET(RX_CTRL_24_FLD_ro_cor_gain_output_1, (reg32), (val))

#define RX_CTRL_25_SET_rg_qp_sigdet_force(reg32, val)          REG_FLD_SET(RX_CTRL_25_FLD_rg_qp_sigdet_force, (reg32), (val))
#define RX_CTRL_25_SET_rg_qp_sigdet_force_en(reg32, val)       REG_FLD_SET(RX_CTRL_25_FLD_rg_qp_sigdet_force_en, (reg32), (val))
#define RX_CTRL_25_SET_rg_sigdet_10g_force_en(reg32, val)      REG_FLD_SET(RX_CTRL_25_FLD_rg_sigdet_10g_force_en, (reg32), (val))
#define RX_CTRL_25_SET_rg_force_pr_stable(reg32, val)          REG_FLD_SET(RX_CTRL_25_FLD_rg_force_pr_stable, (reg32), (val))
#define RX_CTRL_25_SET_rg_force_pr_stable_sel(reg32, val)      REG_FLD_SET(RX_CTRL_25_FLD_rg_force_pr_stable_sel, (reg32), (val))

#define RX_CTRL_26_SET_rg_qp_saos_rdy_clr_by_lck2ref(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_saos_rdy_clr_by_lck2ref, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_retrain_all_en(reg32, val)        REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_retrain_all_en, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_eq_retrain_only_en(reg32, val)    REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_eq_retrain_only_en, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_fifo_rstb_hw_en(reg32, val)       REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_fifo_rstb_hw_en, (reg32), (val))
#define RX_CTRL_26_SET_rg_link_ne_en(reg32, val)               REG_FLD_SET(RX_CTRL_26_FLD_rg_link_ne_en, (reg32), (val))
#define RX_CTRL_26_SET_rg_link_erro_en(reg32, val)             REG_FLD_SET(RX_CTRL_26_FLD_rg_link_erro_en, (reg32), (val))
#define RX_CTRL_26_SET_rg_force_cdr_lck2ref_pre_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_force_cdr_lck2ref_pre_relink_sel(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink_sel, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_ok_sig_det_freq_lock_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_sig_det_freq_lock_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_cdr_settle_freq_lock_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_cdr_settle_sig_det_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_saos_rdy_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_freq_lock_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_freq_lock_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_sig_det_wait_rdy_mask_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_cdr_settle_ok_relink(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok_relink, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_prbs_case(reg32, val)             REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_prbs_case, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_add_pcs_link(reg32, val)          REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_add_pcs_link, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_ok_sig_det_freq_lock(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_sig_det_freq_lock(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_cdr_settle_freq_lock(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_cdr_settle_sig_det(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_saos_rdy(reg32, val)       REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_freq_lock(reg32, val)      REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_freq_lock, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_sig_det_wait_rdy_mask(reg32, val) REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_bypass_cdr_settle_ok(reg32, val)  REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_force_sigdet_lp(reg32, val)       REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_force_sigdet_lp, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_force_sigdet_ln(reg32, val)       REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_force_sigdet_ln, (reg32), (val))
#define RX_CTRL_26_SET_rg_qp_sig_linkdown_sel(reg32, val)      REG_FLD_SET(RX_CTRL_26_FLD_rg_qp_sig_linkdown_sel, (reg32), (val))

#define RX_CTRL_27_SET_rg_qp_link_erro_cnt(reg32, val)         REG_FLD_SET(RX_CTRL_27_FLD_rg_qp_link_erro_cnt, (reg32), (val))

#define RX_CTRL_28_SET_rg_qp_debug_sel_6(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_6, (reg32), (val))
#define RX_CTRL_28_SET_rg_qp_debug_sel_5(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_5, (reg32), (val))
#define RX_CTRL_28_SET_rg_qp_debug_sel_4(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_4, (reg32), (val))
#define RX_CTRL_28_SET_rg_qp_debug_sel_3(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_3, (reg32), (val))
#define RX_CTRL_28_SET_rg_qp_debug_sel_2(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_2, (reg32), (val))
#define RX_CTRL_28_SET_rg_qp_debug_sel_1(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_1, (reg32), (val))
#define RX_CTRL_28_SET_rg_qp_debug_sel_0(reg32, val)           REG_FLD_SET(RX_CTRL_28_FLD_rg_qp_debug_sel_0, (reg32), (val))

#define RX_CTRL_29_SET_qphy_rx_ctrl_debug_4(reg32, val)        REG_FLD_SET(RX_CTRL_29_FLD_qphy_rx_ctrl_debug_4, (reg32), (val))

#define RX_CTRL_30_SET_qphy_rx_ctrl_debug_5(reg32, val)        REG_FLD_SET(RX_CTRL_30_FLD_qphy_rx_ctrl_debug_5, (reg32), (val))

#define RX_CTRL_31_SET_qphy_rx_ctrl_debug_6(reg32, val)        REG_FLD_SET(RX_CTRL_31_FLD_qphy_rx_ctrl_debug_6, (reg32), (val))

#define RX_CTRL_32_SET_qphy_rx_ctrl_debug_7(reg32, val)        REG_FLD_SET(RX_CTRL_32_FLD_qphy_rx_ctrl_debug_7, (reg32), (val))

#define RX_CTRL_33_SET_qphy_rx_ctrl_debug_8(reg32, val)        REG_FLD_SET(RX_CTRL_33_FLD_qphy_rx_ctrl_debug_8, (reg32), (val))

#define RX_CTRL_34_SET_qphy_rx_ctrl_debug_9(reg32, val)        REG_FLD_SET(RX_CTRL_34_FLD_qphy_rx_ctrl_debug_9, (reg32), (val))

#define RX_CTRL_35_SET_rg_qp_force_pcie_usb_speed_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_cdr_pwd(reg32, val)         REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_cdr_pwd, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_cdr_pwd_sel(reg32, val)     REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_cdr_pwd_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_cdr_set_dly_clear(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_cdr_set_dly_clear, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_rx_pr_pd_pwd(reg32, val)    REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_rx_pr_pd_pwd_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_rx_path_rdy(reg32, val)     REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_rx_path_rdy_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_pcie_usb_speed(reg32, val)  REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_speed_change_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_speed_change_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_speed_change(reg32, val)    REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_speed_change, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_pcie_speed_change_dly_time(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_pcie_speed_change_dly_time, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_k_band_reset_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_k_band_reset_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_ssusb_rx_saosc_rst(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_ssusb_rx_saosc_rst_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_sig_det_cal_done(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_sig_det_cal_done_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_pi_cal_done(reg32, val)     REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_pi_cal_done, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_pi_cal_done_sel(reg32, val) REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_pi_cal_done_sel, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_pi_spd_chg_en(reg32, val)   REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_pi_spd_chg_en, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_auto_vco_en(reg32, val)     REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_auto_vco_en, (reg32), (val))
#define RX_CTRL_35_SET_rg_qp_force_pr_vco_en(reg32, val)       REG_FLD_SET(RX_CTRL_35_FLD_rg_qp_force_pr_vco_en, (reg32), (val))

#define RX_CTRL_36_SET_rg_qp_force_usb_mode(reg32, val)        REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_usb_mode, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_usb_mode_sel(reg32, val)    REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_usb_mode_sel, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_sigdet_usb(reg32, val)      REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_sigdet_usb, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_sigdet_and(reg32, val)      REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_sigdet_and, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_sigdet_or(reg32, val)       REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_sigdet_or, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_pcie_usb_system(reg32, val)       REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_pcie_usb_system, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_lck2data_dly_time(reg32, val)     REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_lck2data_dly_time, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_rx_path_rdy_time(reg32, val) REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_rx_path_rdy_time, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_spd_chg_all(reg32, val)     REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_spd_chg_all, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_pcie_mode(reg32, val)       REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_pcie_mode, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_pcie_mode_sel(reg32, val)   REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_pcie_mode_sel, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_pcie_usb_sol_1(reg32, val)        REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_pcie_usb_sol_1, (reg32), (val))
#define RX_CTRL_36_SET_rg_qp_force_speed_chg_all_re_en(reg32, val) REG_FLD_SET(RX_CTRL_36_FLD_rg_qp_force_speed_chg_all_re_en, (reg32), (val))

#define RX_CTRL_37_SET_rg_qp_reserve_19(reg32, val)            REG_FLD_SET(RX_CTRL_37_FLD_rg_qp_reserve_19, (reg32), (val))
#define RX_CTRL_37_SET_rg_qp_reserve_18(reg32, val)            REG_FLD_SET(RX_CTRL_37_FLD_rg_qp_reserve_18, (reg32), (val))
#define RX_CTRL_37_SET_rg_qp_reserve_17(reg32, val)            REG_FLD_SET(RX_CTRL_37_FLD_rg_qp_reserve_17, (reg32), (val))
#define RX_CTRL_37_SET_rg_qp_reserve_16(reg32, val)            REG_FLD_SET(RX_CTRL_37_FLD_rg_qp_reserve_16, (reg32), (val))

#define RX_CTRL_38_SET_rg_qp_reserve_7(reg32, val)             REG_FLD_SET(RX_CTRL_38_FLD_rg_qp_reserve_7, (reg32), (val))
#define RX_CTRL_38_SET_rg_qp_reserve_6(reg32, val)             REG_FLD_SET(RX_CTRL_38_FLD_rg_qp_reserve_6, (reg32), (val))
#define RX_CTRL_38_SET_rg_qp_reserve_5(reg32, val)             REG_FLD_SET(RX_CTRL_38_FLD_rg_qp_reserve_5, (reg32), (val))
#define RX_CTRL_38_SET_rg_qp_reserve_4(reg32, val)             REG_FLD_SET(RX_CTRL_38_FLD_rg_qp_reserve_4, (reg32), (val))

#define RX_CTRL_39_SET_rg_qp_reserve_11(reg32, val)            REG_FLD_SET(RX_CTRL_39_FLD_rg_qp_reserve_11, (reg32), (val))
#define RX_CTRL_39_SET_rg_qp_reserve_10(reg32, val)            REG_FLD_SET(RX_CTRL_39_FLD_rg_qp_reserve_10, (reg32), (val))
#define RX_CTRL_39_SET_rg_qp_reserve_9(reg32, val)             REG_FLD_SET(RX_CTRL_39_FLD_rg_qp_reserve_9, (reg32), (val))
#define RX_CTRL_39_SET_rg_qp_reserve_8(reg32, val)             REG_FLD_SET(RX_CTRL_39_FLD_rg_qp_reserve_8, (reg32), (val))

#define RX_CTRL_40_SET_rg_qp_reserve_15(reg32, val)            REG_FLD_SET(RX_CTRL_40_FLD_rg_qp_reserve_15, (reg32), (val))
#define RX_CTRL_40_SET_rg_qp_reserve_14(reg32, val)            REG_FLD_SET(RX_CTRL_40_FLD_rg_qp_reserve_14, (reg32), (val))
#define RX_CTRL_40_SET_rg_qp_reserve_13(reg32, val)            REG_FLD_SET(RX_CTRL_40_FLD_rg_qp_reserve_13, (reg32), (val))
#define RX_CTRL_40_SET_rg_qp_reserve_12(reg32, val)            REG_FLD_SET(RX_CTRL_40_FLD_rg_qp_reserve_12, (reg32), (val))

#define RX_CTRL_41_SET_ro_qp_reserve_3(reg32, val)             REG_FLD_SET(RX_CTRL_41_FLD_ro_qp_reserve_3, (reg32), (val))
#define RX_CTRL_41_SET_ro_qp_reserve_2(reg32, val)             REG_FLD_SET(RX_CTRL_41_FLD_ro_qp_reserve_2, (reg32), (val))
#define RX_CTRL_41_SET_ro_qp_reserve_1(reg32, val)             REG_FLD_SET(RX_CTRL_41_FLD_ro_qp_reserve_1, (reg32), (val))
#define RX_CTRL_41_SET_ro_qp_reserve_0(reg32, val)             REG_FLD_SET(RX_CTRL_41_FLD_ro_qp_reserve_0, (reg32), (val))

#define RX_CTRL_42_SET_ro_qp_reserve_7(reg32, val)             REG_FLD_SET(RX_CTRL_42_FLD_ro_qp_reserve_7, (reg32), (val))
#define RX_CTRL_42_SET_ro_qp_reserve_6(reg32, val)             REG_FLD_SET(RX_CTRL_42_FLD_ro_qp_reserve_6, (reg32), (val))
#define RX_CTRL_42_SET_ro_qp_reserve_5(reg32, val)             REG_FLD_SET(RX_CTRL_42_FLD_ro_qp_reserve_5, (reg32), (val))
#define RX_CTRL_42_SET_ro_qp_reserve_4(reg32, val)             REG_FLD_SET(RX_CTRL_42_FLD_ro_qp_reserve_4, (reg32), (val))

#define RX_CTRL_43_SET_ro_qp_reserve_11(reg32, val)            REG_FLD_SET(RX_CTRL_43_FLD_ro_qp_reserve_11, (reg32), (val))
#define RX_CTRL_43_SET_ro_qp_reserve_10(reg32, val)            REG_FLD_SET(RX_CTRL_43_FLD_ro_qp_reserve_10, (reg32), (val))
#define RX_CTRL_43_SET_ro_qp_reserve_9(reg32, val)             REG_FLD_SET(RX_CTRL_43_FLD_ro_qp_reserve_9, (reg32), (val))
#define RX_CTRL_43_SET_ro_qp_reserve_8(reg32, val)             REG_FLD_SET(RX_CTRL_43_FLD_ro_qp_reserve_8, (reg32), (val))

#define RX_CTRL_44_SET_ro_qp_reserve_15(reg32, val)            REG_FLD_SET(RX_CTRL_44_FLD_ro_qp_reserve_15, (reg32), (val))
#define RX_CTRL_44_SET_ro_qp_reserve_14(reg32, val)            REG_FLD_SET(RX_CTRL_44_FLD_ro_qp_reserve_14, (reg32), (val))
#define RX_CTRL_44_SET_ro_qp_reserve_13(reg32, val)            REG_FLD_SET(RX_CTRL_44_FLD_ro_qp_reserve_13, (reg32), (val))
#define RX_CTRL_44_SET_ro_qp_reserve_12(reg32, val)            REG_FLD_SET(RX_CTRL_44_FLD_ro_qp_reserve_12, (reg32), (val))

#define RX_CTRL_45_SET_rg_qp_pcie_gen2_cdr_lpf_ki_gain(reg32, val) REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_ki_gain, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_pcie_gen1_cdr_lpf_ki_gain(reg32, val) REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_ki_gain, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_force_pcie_cdr_lpf_ki_gain_en(reg32, val) REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_ki_gain_en, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_pcie_gen2_cdr_lpf_kp_gain(reg32, val) REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_kp_gain, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_pcie_gen1_cdr_lpf_kp_gain(reg32, val) REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_kp_gain, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_force_pcie_cdr_lpf_kp_gain_en(reg32, val) REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_kp_gain_en, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_sgmii_eq_train_sel(reg32, val)    REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_sgmii_eq_train_sel, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_force_eq_dly_en(reg32, val)       REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_force_eq_dly_en, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_force_eq_dly_en_sel(reg32, val)   REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_force_eq_dly_en_sel, (reg32), (val))
#define RX_CTRL_45_SET_rg_qp_eq_en_dly(reg32, val)             REG_FLD_SET(RX_CTRL_45_FLD_rg_qp_eq_en_dly, (reg32), (val))

#define RX_CTRL_46_SET_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en, (reg32), (val))
#define RX_CTRL_46_SET_rg_reback_p0_lck2ref_en(reg32, val)     REG_FLD_SET(RX_CTRL_46_FLD_rg_reback_p0_lck2ref_en, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_last_lfps_finish(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_last_lfps_finish_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_force_usb_sig_clr(reg32, val)        REG_FLD_SET(RX_CTRL_46_FLD_rg_force_usb_sig_clr, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_pcie_gen1_cdr_pr_kband_div(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_pcie_gen2_cdr_pr_kband_div(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_pcie_cdr_pr_kband_div_en(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_pcie_cdr_pr_kband_div_en, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_power_st_change(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_power_st_change, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_power_st_change_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_power_st_change_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_fre_lock_sel(reg32, val)          REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_fre_lock_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_power_st(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_power_st_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_sigdet_en(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_sigdet_en_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_afe_pwd(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_afe_pwd_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_eye_pwd(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_eye_pwd_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_pr_pwd(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_pr_pwd_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd_sel, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_pd_pwd(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd, (reg32), (val))
#define RX_CTRL_46_SET_rg_qp_force_usb_pcie_pd_pwd_sel(reg32, val) REG_FLD_SET(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd_sel, (reg32), (val))

#define RX_CTRL_47_SET_rg_qp_pcie_gen1_cdr_pr_dac_band(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_dac_band, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen2_cdr_pr_dac_band(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_dac_band, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_force_pcie_cdr_pr_dac_band_en(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_dac_band_en, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen1_cdr_pr_buf_in_sr(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_buf_in_sr, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen2_cdr_pr_buf_in_sr(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_buf_in_sr, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_force_pcie_cdr_pr_buf_in_sr_en(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_buf_in_sr_en, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen1_cdr_pr_beta_sel(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_beta_sel, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen2_cdr_pr_beta_sel(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_beta_sel, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_force_pcie_cdr_pr_beta_sel_en(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_beta_sel_en, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen1_cdr_lpf_ratio(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_lpf_ratio, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_pcie_gen2_cdr_lpf_ratio(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_lpf_ratio, (reg32), (val))
#define RX_CTRL_47_SET_rg_qp_force_pcie_cdr_lpf_ratio_en(reg32, val) REG_FLD_SET(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_lpf_ratio_en, (reg32), (val))

#define RX_CTRL_48_SET_rg_qp_force_pcie_crsdet_en_sel(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en_sel, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_force_pcie_crsdet_en(reg32, val)  REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_force_rosc_rstb_sel(reg32, val)   REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_force_rosc_rstb_sel, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_force_rosc_rstb(reg32, val)       REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_force_rosc_rstb, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_pcie_gen1_cdr_phyck_div(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_phyck_div, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_pcie_gen2_cdr_phyck_div(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_phyck_div, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_force_pcie_cdr_phyck_div_en(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_phyck_div_en, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie, (reg32), (val))
#define RX_CTRL_48_SET_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en(reg32, val) REG_FLD_SET(RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en, (reg32), (val))

#define RX_CTRL_49_SET_rg_lfps_finish_time(reg32, val)         REG_FLD_SET(RX_CTRL_49_FLD_rg_lfps_finish_time, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_last_lfps_finish_latch_clr(reg32, val) REG_FLD_SET(RX_CTRL_49_FLD_rg_force_last_lfps_finish_latch_clr, (reg32), (val))
#define RX_CTRL_49_SET_rg_lfps_detect_num(reg32, val)          REG_FLD_SET(RX_CTRL_49_FLD_rg_lfps_detect_num, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_signal_crsdet_out_sel(reg32, val) REG_FLD_SET(RX_CTRL_49_FLD_rg_force_signal_crsdet_out_sel, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_signal_crsdet_lthout_sel(reg32, val) REG_FLD_SET(RX_CTRL_49_FLD_rg_force_signal_crsdet_lthout_sel, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_ad_crsdet_out(reg32, val)      REG_FLD_SET(RX_CTRL_49_FLD_rg_force_ad_crsdet_out, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_ad_crsdet_out_sel(reg32, val)  REG_FLD_SET(RX_CTRL_49_FLD_rg_force_ad_crsdet_out_sel, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_signal_beacon_out_sel(reg32, val) REG_FLD_SET(RX_CTRL_49_FLD_rg_force_signal_beacon_out_sel, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_crsdet_lthout(reg32, val)      REG_FLD_SET(RX_CTRL_49_FLD_rg_force_crsdet_lthout, (reg32), (val))
#define RX_CTRL_49_SET_rg_force_crsdet_lthout_sel(reg32, val)  REG_FLD_SET(RX_CTRL_49_FLD_rg_force_crsdet_lthout_sel, (reg32), (val))
#define RX_CTRL_49_SET_rg_qp_crsdet_rst_time(reg32, val)       REG_FLD_SET(RX_CTRL_49_FLD_rg_qp_crsdet_rst_time, (reg32), (val))
#define RX_CTRL_49_SET_ro_usb_mode(reg32, val)                 REG_FLD_SET(RX_CTRL_49_FLD_ro_usb_mode, (reg32), (val))
#define RX_CTRL_49_SET_ro_pcie_mode(reg32, val)                REG_FLD_SET(RX_CTRL_49_FLD_ro_pcie_mode, (reg32), (val))
#define RX_CTRL_49_SET_ro_ssusb_qp_powerdown(reg32, val)       REG_FLD_SET(RX_CTRL_49_FLD_ro_ssusb_qp_powerdown, (reg32), (val))
#define RX_CTRL_49_SET_ro_power_st_l2(reg32, val)              REG_FLD_SET(RX_CTRL_49_FLD_ro_power_st_l2, (reg32), (val))
#define RX_CTRL_49_SET_ro_power_st_l11_l12(reg32, val)         REG_FLD_SET(RX_CTRL_49_FLD_ro_power_st_l11_l12, (reg32), (val))

#define RX_CTRL_50_SET_rg_p3_to_p0_do_eq_usb(reg32, val)       REG_FLD_SET(RX_CTRL_50_FLD_rg_p3_to_p0_do_eq_usb, (reg32), (val))
#define RX_CTRL_50_SET_rg_p2_to_p0_do_eq_usb(reg32, val)       REG_FLD_SET(RX_CTRL_50_FLD_rg_p2_to_p0_do_eq_usb, (reg32), (val))
#define RX_CTRL_50_SET_rg_p1_to_p0_do_eq_usb(reg32, val)       REG_FLD_SET(RX_CTRL_50_FLD_rg_p1_to_p0_do_eq_usb, (reg32), (val))
#define RX_CTRL_50_SET_rg_qp_eq_en_dly_short(reg32, val)       REG_FLD_SET(RX_CTRL_50_FLD_rg_qp_eq_en_dly_short, (reg32), (val))
#define RX_CTRL_50_SET_rg_qp_rx_eq_en_h_dly_short(reg32, val)  REG_FLD_SET(RX_CTRL_50_FLD_rg_qp_rx_eq_en_h_dly_short, (reg32), (val))

#define ISR_CTRL_0_SET_trans_sd_fail_int(reg32, val)           REG_FLD_SET(ISR_CTRL_0_FLD_trans_sd_fail_int, (reg32), (val))
#define ISR_CTRL_0_SET_phyrdy_int(reg32, val)                  REG_FLD_SET(ISR_CTRL_0_FLD_phyrdy_int, (reg32), (val))
#define ISR_CTRL_0_SET_un_stb_saos_rdy_int(reg32, val)         REG_FLD_SET(ISR_CTRL_0_FLD_un_stb_saos_rdy_int, (reg32), (val))
#define ISR_CTRL_0_SET_trans_rogue_onu_int(reg32, val)         REG_FLD_SET(ISR_CTRL_0_FLD_trans_rogue_onu_int, (reg32), (val))

#define ISR_CTRL_1_SET_trans_los_int(reg32, val)               REG_FLD_SET(ISR_CTRL_1_FLD_trans_los_int, (reg32), (val))
#define ISR_CTRL_1_SET_un_stb_rx_rdy_int(reg32, val)           REG_FLD_SET(ISR_CTRL_1_FLD_un_stb_rx_rdy_int, (reg32), (val))
#define ISR_CTRL_1_SET_trans_fault_int(reg32, val)             REG_FLD_SET(ISR_CTRL_1_FLD_trans_fault_int, (reg32), (val))
#define ISR_CTRL_1_SET_un_stb_eq_rdy_int(reg32, val)           REG_FLD_SET(ISR_CTRL_1_FLD_un_stb_eq_rdy_int, (reg32), (val))

#define ISR_CTRL_2_SET_pma_rx_afifo_full_int(reg32, val)       REG_FLD_SET(ISR_CTRL_2_FLD_pma_rx_afifo_full_int, (reg32), (val))
#define ISR_CTRL_2_SET_pma_rx_afifo_empty_int(reg32, val)      REG_FLD_SET(ISR_CTRL_2_FLD_pma_rx_afifo_empty_int, (reg32), (val))
#define ISR_CTRL_2_SET_pma_tx_afifo_full_int(reg32, val)       REG_FLD_SET(ISR_CTRL_2_FLD_pma_tx_afifo_full_int, (reg32), (val))
#define ISR_CTRL_2_SET_pma_tx_afifo_empty_int(reg32, val)      REG_FLD_SET(ISR_CTRL_2_FLD_pma_tx_afifo_empty_int, (reg32), (val))

#define ISR_CTRL_3_SET_trans_laser_on_int(reg32, val)          REG_FLD_SET(ISR_CTRL_3_FLD_trans_laser_on_int, (reg32), (val))
#define ISR_CTRL_3_SET_rx_sigdet_int(reg32, val)               REG_FLD_SET(ISR_CTRL_3_FLD_rx_sigdet_int, (reg32), (val))
#define ISR_CTRL_3_SET_rx_freqdet_unlock_int(reg32, val)       REG_FLD_SET(ISR_CTRL_3_FLD_rx_freqdet_unlock_int, (reg32), (val))
#define ISR_CTRL_3_SET_tx_freqdet_unlock_int(reg32, val)       REG_FLD_SET(ISR_CTRL_3_FLD_tx_freqdet_unlock_int, (reg32), (val))

#define ISR_CTRL_EN_0_SET_rg_trans_sd_fail_int_en(reg32, val)  REG_FLD_SET(ISR_CTRL_EN_0_FLD_rg_trans_sd_fail_int_en, (reg32), (val))
#define ISR_CTRL_EN_0_SET_rg_phyrdy_int_en(reg32, val)         REG_FLD_SET(ISR_CTRL_EN_0_FLD_rg_phyrdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_0_SET_rg_un_stb_saos_rdy_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_0_FLD_rg_un_stb_saos_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_0_SET_rg_trans_rogue_onu_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_0_FLD_rg_trans_rogue_onu_int_en, (reg32), (val))

#define ISR_CTRL_EN_1_SET_rg_trans_los_int_en(reg32, val)      REG_FLD_SET(ISR_CTRL_EN_1_FLD_rg_trans_los_int_en, (reg32), (val))
#define ISR_CTRL_EN_1_SET_rg_un_stb_rx_rdy_int_en(reg32, val)  REG_FLD_SET(ISR_CTRL_EN_1_FLD_rg_un_stb_rx_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_1_SET_rg_trans_fault_int_en(reg32, val)    REG_FLD_SET(ISR_CTRL_EN_1_FLD_rg_trans_fault_int_en, (reg32), (val))
#define ISR_CTRL_EN_1_SET_rg_un_stb_eq_rdy_int_en(reg32, val)  REG_FLD_SET(ISR_CTRL_EN_1_FLD_rg_un_stb_eq_rdy_int_en, (reg32), (val))

#define ISR_CTRL_EN_2_SET_rg_pma_rx_afifo_full_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_full_int_en, (reg32), (val))
#define ISR_CTRL_EN_2_SET_rg_pma_rx_afifo_empty_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_empty_int_en, (reg32), (val))
#define ISR_CTRL_EN_2_SET_rg_pma_tx_afifo_full_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_full_int_en, (reg32), (val))
#define ISR_CTRL_EN_2_SET_rg_pma_tx_afifo_empty_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_empty_int_en, (reg32), (val))

#define ISR_CTRL_EN_3_SET_rg_trans_sd_fail_cnt_clr(reg32, val) REG_FLD_SET(ISR_CTRL_EN_3_FLD_rg_trans_sd_fail_cnt_clr, (reg32), (val))
#define ISR_CTRL_EN_3_SET_rg_trans_laser_on_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_3_FLD_rg_trans_laser_on_int_en, (reg32), (val))
#define ISR_CTRL_EN_3_SET_rg_rx_sigdet_int_en(reg32, val)      REG_FLD_SET(ISR_CTRL_EN_3_FLD_rg_rx_sigdet_int_en, (reg32), (val))
#define ISR_CTRL_EN_3_SET_rg_rx_freqdet_unlock_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_3_FLD_rg_rx_freqdet_unlock_int_en, (reg32), (val))
#define ISR_CTRL_EN_3_SET_rg_tx_freqdet_unlock_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_3_FLD_rg_tx_freqdet_unlock_int_en, (reg32), (val))

#define ISR_SETTING_0_SET_rg_trans_tx_fault_pro(reg32, val)    REG_FLD_SET(ISR_SETTING_0_FLD_rg_trans_tx_fault_pro, (reg32), (val))
#define ISR_SETTING_0_SET_rg_trans_rx_los_pro(reg32, val)      REG_FLD_SET(ISR_SETTING_0_FLD_rg_trans_rx_los_pro, (reg32), (val))
#define ISR_SETTING_0_SET_rg_trans_tx_sd_pro(reg32, val)       REG_FLD_SET(ISR_SETTING_0_FLD_rg_trans_tx_sd_pro, (reg32), (val))
#define ISR_SETTING_0_SET_rg_trans_tx_sd_inv(reg32, val)       REG_FLD_SET(ISR_SETTING_0_FLD_rg_trans_tx_sd_inv, (reg32), (val))

#define ISR_SETTING_1_SET_rg_pma_show_probe_en(reg32, val)     REG_FLD_SET(ISR_SETTING_1_FLD_rg_pma_show_probe_en, (reg32), (val))
#define ISR_SETTING_1_SET_rg_ftcal_high(reg32, val)            REG_FLD_SET(ISR_SETTING_1_FLD_rg_ftcal_high, (reg32), (val))
#define ISR_SETTING_1_SET_rg_ftcal_low(reg32, val)             REG_FLD_SET(ISR_SETTING_1_FLD_rg_ftcal_low, (reg32), (val))
#define ISR_SETTING_1_SET_rg_trans_rx_laser_on_pro(reg32, val) REG_FLD_SET(ISR_SETTING_1_FLD_rg_trans_rx_laser_on_pro, (reg32), (val))

#define ISR_SETTING_2_SET_rg_trans_sd_fail_cnt(reg32, val)     REG_FLD_SET(ISR_SETTING_2_FLD_rg_trans_sd_fail_cnt, (reg32), (val))
#define ISR_SETTING_2_SET_rg_pma_rx_afifo_reach_th(reg32, val) REG_FLD_SET(ISR_SETTING_2_FLD_rg_pma_rx_afifo_reach_th, (reg32), (val))
#define ISR_SETTING_2_SET_rg_pma_tx_afifo_reach_th(reg32, val) REG_FLD_SET(ISR_SETTING_2_FLD_rg_pma_tx_afifo_reach_th, (reg32), (val))

#define ISR_SETTING_3_SET_rg_trans_tx_fault_inv(reg32, val)    REG_FLD_SET(ISR_SETTING_3_FLD_rg_trans_tx_fault_inv, (reg32), (val))
#define ISR_SETTING_3_SET_rg_trans_rx_sd_inv(reg32, val)       REG_FLD_SET(ISR_SETTING_3_FLD_rg_trans_rx_sd_inv, (reg32), (val))
#define ISR_SETTING_3_SET_rg_trans_rx_data_inv(reg32, val)     REG_FLD_SET(ISR_SETTING_3_FLD_rg_trans_rx_data_inv, (reg32), (val))
#define ISR_SETTING_3_SET_rg_trans_tx_data_inv(reg32, val)     REG_FLD_SET(ISR_SETTING_3_FLD_rg_trans_tx_data_inv, (reg32), (val))
#define ISR_SETTING_3_SET_rg_trans_burst_inv(reg32, val)       REG_FLD_SET(ISR_SETTING_3_FLD_rg_trans_burst_inv, (reg32), (val))
#define ISR_SETTING_3_SET_rg_tx_dly_en(reg32, val)             REG_FLD_SET(ISR_SETTING_3_FLD_rg_tx_dly_en, (reg32), (val))

#define ISR_CTRL_5_SET_DA_SSUSB_CDR_LCK2DATA_int(reg32, val)   REG_FLD_SET(ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2DATA_int, (reg32), (val))
#define ISR_CTRL_5_SET_DA_SSUSB_CDR_LCK2REF_int(reg32, val)    REG_FLD_SET(ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2REF_int, (reg32), (val))
#define ISR_CTRL_5_SET_un_stb_pi_rdy_int(reg32, val)           REG_FLD_SET(ISR_CTRL_5_FLD_un_stb_pi_rdy_int, (reg32), (val))
#define ISR_CTRL_5_SET_un_stb_leq_rdy_int(reg32, val)          REG_FLD_SET(ISR_CTRL_5_FLD_un_stb_leq_rdy_int, (reg32), (val))
#define ISR_CTRL_5_SET_un_stb_sdos_rdy_int(reg32, val)         REG_FLD_SET(ISR_CTRL_5_FLD_un_stb_sdos_rdy_int, (reg32), (val))

#define ISR_CTRL_EN_5_SET_rg_lck2data_to_lck2ref_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_5_FLD_rg_lck2data_to_lck2ref_en, (reg32), (val))
#define ISR_CTRL_EN_5_SET_rg_lck2ref_to_lck2data_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_5_FLD_rg_lck2ref_to_lck2data_en, (reg32), (val))
#define ISR_CTRL_EN_5_SET_rg_un_stb_pi_rdy_int_en(reg32, val)  REG_FLD_SET(ISR_CTRL_EN_5_FLD_rg_un_stb_pi_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_5_SET_rg_un_stb_leq_rdy_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_5_FLD_rg_un_stb_leq_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_5_SET_rg_un_stb_sdos_rdy_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_5_FLD_rg_un_stb_sdos_rdy_int_en, (reg32), (val))

#define ISR_CTRL_6_SET_stb_eq_rdy_int(reg32, val)              REG_FLD_SET(ISR_CTRL_6_FLD_stb_eq_rdy_int, (reg32), (val))
#define ISR_CTRL_6_SET_stb_pi_rdy_int(reg32, val)              REG_FLD_SET(ISR_CTRL_6_FLD_stb_pi_rdy_int, (reg32), (val))
#define ISR_CTRL_6_SET_rx_freqdet_lock_int(reg32, val)         REG_FLD_SET(ISR_CTRL_6_FLD_rx_freqdet_lock_int, (reg32), (val))
#define ISR_CTRL_6_SET_stb_sdos_rdy_int(reg32, val)            REG_FLD_SET(ISR_CTRL_6_FLD_stb_sdos_rdy_int, (reg32), (val))
#define ISR_CTRL_6_SET_stb_saos_rdy_int(reg32, val)            REG_FLD_SET(ISR_CTRL_6_FLD_stb_saos_rdy_int, (reg32), (val))
#define ISR_CTRL_6_SET_stb_leq_rdy_int(reg32, val)             REG_FLD_SET(ISR_CTRL_6_FLD_stb_leq_rdy_int, (reg32), (val))
#define ISR_CTRL_6_SET_link_erro_int(reg32, val)               REG_FLD_SET(ISR_CTRL_6_FLD_link_erro_int, (reg32), (val))

#define ISR_CTRL_EN_6_SET_rg_stb_eq_rdy_int_en(reg32, val)     REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_stb_eq_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_6_SET_rg_stb_pi_rdy_int_en(reg32, val)     REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_stb_pi_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_6_SET_rg_rx_freqdet_lock_int_en(reg32, val) REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_rx_freqdet_lock_int_en, (reg32), (val))
#define ISR_CTRL_EN_6_SET_rg_stb_sdos_rdy_int_en(reg32, val)   REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_stb_sdos_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_6_SET_rg_stb_saos_rdy_int_en(reg32, val)   REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_stb_saos_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_6_SET_rg_stb_leq_rdy_int_en(reg32, val)    REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_stb_leq_rdy_int_en, (reg32), (val))
#define ISR_CTRL_EN_6_SET_rg_link_erro_int_en(reg32, val)      REG_FLD_SET(ISR_CTRL_EN_6_FLD_rg_link_erro_int_en, (reg32), (val))

#define QP_TX_DBG_0_SET_ro_qp_tx_debug3(reg32, val)            REG_FLD_SET(QP_TX_DBG_0_FLD_ro_qp_tx_debug3, (reg32), (val))
#define QP_TX_DBG_0_SET_ro_qp_tx_debug2(reg32, val)            REG_FLD_SET(QP_TX_DBG_0_FLD_ro_qp_tx_debug2, (reg32), (val))
#define QP_TX_DBG_0_SET_ro_qp_tx_debug1(reg32, val)            REG_FLD_SET(QP_TX_DBG_0_FLD_ro_qp_tx_debug1, (reg32), (val))
#define QP_TX_DBG_0_SET_ro_qp_tx_debug0(reg32, val)            REG_FLD_SET(QP_TX_DBG_0_FLD_ro_qp_tx_debug0, (reg32), (val))

#define QP_TX_DBG_1_SET_ro_qp_tx_debug7(reg32, val)            REG_FLD_SET(QP_TX_DBG_1_FLD_ro_qp_tx_debug7, (reg32), (val))
#define QP_TX_DBG_1_SET_ro_qp_tx_debug6(reg32, val)            REG_FLD_SET(QP_TX_DBG_1_FLD_ro_qp_tx_debug6, (reg32), (val))
#define QP_TX_DBG_1_SET_ro_qp_tx_debug5(reg32, val)            REG_FLD_SET(QP_TX_DBG_1_FLD_ro_qp_tx_debug5, (reg32), (val))
#define QP_TX_DBG_1_SET_ro_qp_tx_debug4(reg32, val)            REG_FLD_SET(QP_TX_DBG_1_FLD_ro_qp_tx_debug4, (reg32), (val))

#define QP_LFPS_DBG_0_SET_ro_rx_lfps_debug3(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug3, (reg32), (val))
#define QP_LFPS_DBG_0_SET_ro_rx_lfps_debug2(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug2, (reg32), (val))
#define QP_LFPS_DBG_0_SET_ro_rx_lfps_debug1(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug1, (reg32), (val))
#define QP_LFPS_DBG_0_SET_ro_rx_lfps_debug0(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug0, (reg32), (val))

#define QP_LFPS_DBG_1_SET_ro_rx_lfps_debug7(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug7, (reg32), (val))
#define QP_LFPS_DBG_1_SET_ro_rx_lfps_debug6(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug6, (reg32), (val))
#define QP_LFPS_DBG_1_SET_ro_rx_lfps_debug5(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug5, (reg32), (val))
#define QP_LFPS_DBG_1_SET_ro_rx_lfps_debug4(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug4, (reg32), (val))

#define QP_LFPS_DBG_2_SET_ro_rx_lfps_debug8(reg32, val)        REG_FLD_SET(QP_LFPS_DBG_2_FLD_ro_rx_lfps_debug8, (reg32), (val))

#define QP_PRBS_DBG_0_SET_ro_bistctl_prbs_err_cnt(reg32, val)  REG_FLD_SET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_err_cnt, (reg32), (val))
#define QP_PRBS_DBG_0_SET_ro_bistctl_prbs_compare(reg32, val)  REG_FLD_SET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_compare, (reg32), (val))
#define QP_PRBS_DBG_0_SET_ro_bistctl_prbs_fail(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_fail, (reg32), (val))
#define QP_PRBS_DBG_0_SET_ro_bistctl_prbs_done(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_done, (reg32), (val))

#define QP_PRBS_DBG_1_SET_ro_bistctl_prbs_bit_err_fw_using(reg32, val) REG_FLD_SET(QP_PRBS_DBG_1_FLD_ro_bistctl_prbs_bit_err_fw_using, (reg32), (val))

#define QP_PRBS_DBG_2_SET_ro_bistctl_prbs_bit_err_period_num(reg32, val) REG_FLD_SET(QP_PRBS_DBG_2_FLD_ro_bistctl_prbs_bit_err_period_num, (reg32), (val))

#define QP_PRBS_DBG_3_SET_ro_prbs_bist_debug_3(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_3, (reg32), (val))
#define QP_PRBS_DBG_3_SET_ro_prbs_bist_debug_2(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_2, (reg32), (val))
#define QP_PRBS_DBG_3_SET_ro_prbs_bist_debug_1(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_1, (reg32), (val))
#define QP_PRBS_DBG_3_SET_ro_prbs_bist_debug_0(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_0, (reg32), (val))

#define QP_PRBS_DBG_4_SET_ro_prbs_bist_debug_7(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_7, (reg32), (val))
#define QP_PRBS_DBG_4_SET_ro_prbs_bist_debug_6(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_6, (reg32), (val))
#define QP_PRBS_DBG_4_SET_ro_prbs_bist_debug_5(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_5, (reg32), (val))
#define QP_PRBS_DBG_4_SET_ro_prbs_bist_debug_4(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_4, (reg32), (val))

#define QP_PRBS_DBG_5_SET_ro_prbs_bist_debug_10(reg32, val)    REG_FLD_SET(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_10, (reg32), (val))
#define QP_PRBS_DBG_5_SET_ro_prbs_bist_debug_9(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_9, (reg32), (val))
#define QP_PRBS_DBG_5_SET_ro_prbs_bist_debug_8(reg32, val)     REG_FLD_SET(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_8, (reg32), (val))

#define QP_TX_BIST_DBG_0_SET_ro_bist_status(reg32, val)        REG_FLD_SET(QP_TX_BIST_DBG_0_FLD_ro_bist_status, (reg32), (val))
#define QP_TX_BIST_DBG_0_SET_ro_bist_len_error(reg32, val)     REG_FLD_SET(QP_TX_BIST_DBG_0_FLD_ro_bist_len_error, (reg32), (val))
#define QP_TX_BIST_DBG_0_SET_ro_bist_chk_done(reg32, val)      REG_FLD_SET(QP_TX_BIST_DBG_0_FLD_ro_bist_chk_done, (reg32), (val))
#define QP_TX_BIST_DBG_0_SET_ro_bist_error_cnt(reg32, val)     REG_FLD_SET(QP_TX_BIST_DBG_0_FLD_ro_bist_error_cnt, (reg32), (val))

#define QP_TX_BIST_DBG_1_SET_ro_pcs_bist_debug(reg32, val)     REG_FLD_SET(QP_TX_BIST_DBG_1_FLD_ro_pcs_bist_debug, (reg32), (val))

#define QP_R2T_AFIFO_DBG_SET_ro_r2t_afifo_debug(reg32, val)    REG_FLD_SET(QP_R2T_AFIFO_DBG_FLD_ro_r2t_afifo_debug, (reg32), (val))

#define QP_T2R_AFIFO_DBG_SET_ro_t2r_afifo_debug(reg32, val)    REG_FLD_SET(QP_T2R_AFIFO_DBG_FLD_ro_t2r_afifo_debug, (reg32), (val))

#define QP_TX_DA_CTRL_0_VAL_rg_ssusb_tx_eidle_sel(val)         REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_ssusb_tx_eidle_sel, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_fval_tx_term_vref_sel(val)      REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_vref_sel, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_fval_tx_term_sel(val)           REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_term_sel, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_fval_tx_impcalib_en(val)        REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_impcalib_en, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_tx_termcal_count(val)           REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_tx_termcal_count, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_termcal_vsel_timer(val)         REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_termcal_vsel_timer, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_force_tx_calib_en(val)          REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_force_tx_calib_en, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_impcalib_en(val)                REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_impcalib_en, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_rxdet_rd_wait_timer(val)        REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_rxdet_rd_wait_timer, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_rxdet_mask_clr(val)             REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_rxdet_mask_clr, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_force_qp_tx_reserve(val)        REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_force_qp_tx_reserve, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_rxdet_en_window(val)            REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_rxdet_en_window, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_tx_rxdet_en(val)                REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_tx_rxdet_en, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_fval_rx_det_en(val)             REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_fval_rx_det_en, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_force_rx_det_ctrl(val)          REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_force_rx_det_ctrl, (val))
#define QP_TX_DA_CTRL_0_VAL_rg_fval_tx_eidle_lp_off(val)       REG_FLD_VAL(QP_TX_DA_CTRL_0_FLD_rg_fval_tx_eidle_lp_off, (val))

#define QP_TX_DA_CTRL_1_VAL_rg_fval_tx_data(val)               REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_fval_tx_data_en(val)            REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_data_en, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_fval_tx_ser_en(val)             REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_ser_en, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_txff_redun_en(val)              REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_txff_redun_en, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_force_tx_data_ctrl(val)         REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_force_tx_data_ctrl, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_force_tx_bit_inverse(val)       REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_inverse, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_tfifo_bypass(val)               REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_tfifo_bypass, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_force_tx_bit_reverse(val)       REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_force_tx_bit_reverse, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_tfifo_rst(val)                  REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_tfifo_rst, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_tx_ser_en_ps_mode(val)          REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_tx_ser_en_ps_mode, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_fval_tx_lfps(val)               REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_fval_tx_lfps_en(val)            REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_fval_tx_lfps_en, (val))
#define QP_TX_DA_CTRL_1_VAL_rg_force_tx_lfps_ctrl(val)         REG_FLD_VAL(QP_TX_DA_CTRL_1_FLD_rg_force_tx_lfps_ctrl, (val))

#define QP_TX_DA_CTRL_2_VAL_rg_qp_tx_dem_mode(val)             REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_mode, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_force_tx_dem_sel(val)           REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem_sel, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_qp_tx_dem_sel(val)              REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_qp_tx_dem_sel, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_da_qp_tx_drv_en(val)            REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_drv_en, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_da_qp_tx_dem(val)               REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_da_qp_tx_dem, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_tx_fir_c2(val)                  REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c2, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_tx_fir_c1(val)                  REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c1, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_tx_fir_c0b(val)                 REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_c0b, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_tx_fir_cn1(val)                 REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_tx_fir_cn1, (val))
#define QP_TX_DA_CTRL_2_VAL_rg_force_tx_dem(val)               REG_FLD_VAL(QP_TX_DA_CTRL_2_FLD_rg_force_tx_dem, (val))

#define QP_TX_DA_CTRL_3_VAL_rg_ssusb_tx_ser_en_sel(val)        REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_ssusb_tx_ser_en_sel, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_tx_data_rate_sel(val)           REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_tx_data_rate_sel, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_force_tphy_mode(val)            REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_force_tphy_mode, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_qphy_redun_sel(val)             REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_qphy_redun_sel, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_test_tx_data_count(val)         REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_count, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_test_tx_lfps_type(val)          REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_type, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_test_tx_cp8(val)                REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_test_tx_cp8, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_test_tx_data_en(val)            REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_test_tx_data_en, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_test_tx_lfps_en(val)            REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_test_tx_lfps_en, (val))
#define QP_TX_DA_CTRL_3_VAL_rg_tx_data_test_mode(val)          REG_FLD_VAL(QP_TX_DA_CTRL_3_FLD_rg_tx_data_test_mode, (val))

#define QP_TX_DA_CTRL_4_VAL_rg_bist_error_patt(val)            REG_FLD_VAL(QP_TX_DA_CTRL_4_FLD_rg_bist_error_patt, (val))
#define QP_TX_DA_CTRL_4_VAL_rg_lock_rx20b_inv(val)             REG_FLD_VAL(QP_TX_DA_CTRL_4_FLD_rg_lock_rx20b_inv, (val))
#define QP_TX_DA_CTRL_4_VAL_rg_test_rx_bist_en(val)            REG_FLD_VAL(QP_TX_DA_CTRL_4_FLD_rg_test_rx_bist_en, (val))
#define QP_TX_DA_CTRL_4_VAL_rg_bist_add_error_en(val)          REG_FLD_VAL(QP_TX_DA_CTRL_4_FLD_rg_bist_add_error_en, (val))
#define QP_TX_DA_CTRL_4_VAL_rg_test_tx_add_id_en(val)          REG_FLD_VAL(QP_TX_DA_CTRL_4_FLD_rg_test_tx_add_id_en, (val))
#define QP_TX_DA_CTRL_4_VAL_rg_test_tx_patt_sel(val)           REG_FLD_VAL(QP_TX_DA_CTRL_4_FLD_rg_test_tx_patt_sel, (val))

#define QP_TX_DA_CTRL_5_VAL_rg_test_tx_patt0(val)              REG_FLD_VAL(QP_TX_DA_CTRL_5_FLD_rg_test_tx_patt0, (val))

#define QP_TX_DA_CTRL_6_VAL_rg_test_tx_patt1(val)              REG_FLD_VAL(QP_TX_DA_CTRL_6_FLD_rg_test_tx_patt1, (val))

#define QP_TX_DA_CTRL_7_VAL_rg_test_tx_patt2(val)              REG_FLD_VAL(QP_TX_DA_CTRL_7_FLD_rg_test_tx_patt2, (val))

#define QP_TX_DA_CTRL_8_VAL_rg_test_tx_patt3(val)              REG_FLD_VAL(QP_TX_DA_CTRL_8_FLD_rg_test_tx_patt3, (val))

#define QP_TX_DA_CTRL_9_VAL_rg_test_tseq_cnt(val)              REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_test_tseq_cnt, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_r2t_data_en_dly(val)            REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_r2t_data_en_dly, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_r2tlb_fiforst(val)              REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_fiforst, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_r2tlb_bypass(val)               REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_bypass, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_t2rlb_fiforst(val)              REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_t2rlb_fiforst, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_t2rlb_int_en(val)               REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_t2rlb_int_en, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_r2tlb_mode(val)                 REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_r2tlb_mode, (val))
#define QP_TX_DA_CTRL_9_VAL_rg_test_tseq_mode(val)             REG_FLD_VAL(QP_TX_DA_CTRL_9_FLD_rg_test_tseq_mode, (val))

#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_prbs_fail_threshold(val) REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_fail_threshold, (val))
#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_prbs_check_cnt(val)  REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_prbs_check_cnt, (val))
#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_io_data_inv(val)     REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_io_data_inv, (val))
#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_bit_error_rst_sel(val) REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_bit_error_rst_sel, (val))
#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_pat_rx_check_en(val) REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_rx_check_en, (val))
#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_pat_tx_en(val)       REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_tx_en, (val))
#define QP_PMA_BIST_CTRL_0_VAL_rg_bistctl_pat_sel(val)         REG_FLD_VAL(QP_PMA_BIST_CTRL_0_FLD_rg_bistctl_pat_sel, (val))

#define QP_PMA_BIST_CTRL_1_VAL_rg_bistctl_prbs_init_seed(val)  REG_FLD_VAL(QP_PMA_BIST_CTRL_1_FLD_rg_bistctl_prbs_init_seed, (val))

#define QP_PMA_BIST_CTRL_2_VAL_rg_bistctl_align_pattern(val)   REG_FLD_VAL(QP_PMA_BIST_CTRL_2_FLD_rg_bistctl_align_pattern, (val))

#define QP_PMA_BIST_CTRL_3_VAL_rg_bist_tx_data_pollution_latch(val) REG_FLD_VAL(QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution_latch, (val))
#define QP_PMA_BIST_CTRL_3_VAL_rg_bist_tx_data_pollution(val)  REG_FLD_VAL(QP_PMA_BIST_CTRL_3_FLD_rg_bist_tx_data_pollution, (val))

#define QP_PMA_BIST_CTRL_4_VAL_rg_bistctl_prbs_check_timer(val) REG_FLD_VAL(QP_PMA_BIST_CTRL_4_FLD_rg_bistctl_prbs_check_timer, (val))

#define QP_RX_LFPS_CTRL_0_VAL_rg_rxlfps_p3_entry(val)          REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_p3_entry, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_ssusb_lfps_sel(val)           REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_lfps_sel, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_ssusb_rxlfps_lob(val)         REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_lob, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_ssusb_rxlfps_upb(val)         REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_upb, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_ssusb_rxlfps_udf(val)         REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_udf, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_ssusb_rxlfps_ovf(val)         REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_ssusb_rxlfps_ovf, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_rxlfps_deglitch(val)          REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_deglitch, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_rxlfps_pwd(val)               REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_pwd, (val))
#define QP_RX_LFPS_CTRL_0_VAL_rg_rxlfps_mon_en(val)            REG_FLD_VAL(QP_RX_LFPS_CTRL_0_FLD_rg_rxlfps_mon_en, (val))

#define QP_TX_DETRX_TMR_VAL_rg_tx_reserved_bit(val)            REG_FLD_VAL(QP_TX_DETRX_TMR_FLD_rg_tx_reserved_bit, (val))
#define QP_TX_DETRX_TMR_VAL_rg_force_tx_detrx_out_val(val)     REG_FLD_VAL(QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out_val, (val))
#define QP_TX_DETRX_TMR_VAL_rg_force_tx_detrx_out(val)         REG_FLD_VAL(QP_TX_DETRX_TMR_FLD_rg_force_tx_detrx_out, (val))
#define QP_TX_DETRX_TMR_VAL_rg_tx_detrx_wait_timer(val)        REG_FLD_VAL(QP_TX_DETRX_TMR_FLD_rg_tx_detrx_wait_timer, (val))

#define PON_RXFEDIG_CTRL_0_VAL_RG_SSUSB_RX_DFE_RST(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_RST, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_SSUSB_RX_DFE_EN(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_DFE_EN, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_SSUSB_RX_FR_MODE(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_RX_FR_MODE, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_SSUSB_FORCE_RX_FR_MODE(val)  REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_SSUSB_FORCE_RX_FR_MODE, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_TRI_DET_EN(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_TRI_DET_EN, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_STOPTIME(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_STOPTIME, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_RX500M_CK_SEL(val)     REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_RX500M_CK_SEL, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_PILPO_ROUT(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_PILPO_ROUT, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_GATED_RXD_B(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_GATED_RXD_B, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_EYE_MON_EN(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_MON_EN, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_EYE_CNT_EN(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_EYE_CNT_EN, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_DFE_TOG(val)           REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFE_TOG, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_DFEYEN_STOP_DIS(val)   REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEYEN_STOP_DIS, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_DFEX_RST(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_RST, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_DFEX_EN(val)           REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_EN, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_DFEX_DIS(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEX_DIS, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_DFEXEN_SEL(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_DFEXEN_SEL, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_CHK_EYE_H(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_CHK_EYE_H, (val))
#define PON_RXFEDIG_CTRL_0_VAL_RG_QP_EQ_ALGRTHM_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_0_FLD_RG_QP_EQ_ALGRTHM_SEL, (val))

#define PON_RXFEDIG_CTRL_1_VAL_RG_QP_EQ_DD1LOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1LOS_LFI, (val))
#define PON_RXFEDIG_CTRL_1_VAL_RG_QP_EQ_DD1HOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD1HOS_LFI, (val))
#define PON_RXFEDIG_CTRL_1_VAL_RG_QP_EQ_DD0LOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0LOS_LFI, (val))
#define PON_RXFEDIG_CTRL_1_VAL_RG_QP_EQ_DD0HOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_1_FLD_RG_QP_EQ_DD0HOS_LFI, (val))

#define PON_RXFEDIG_CTRL_2_VAL_RG_QP_EQ_DEYE1OS_LFI(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE1OS_LFI, (val))
#define PON_RXFEDIG_CTRL_2_VAL_RG_QP_EQ_DEYE0OS_LFI(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DEYE0OS_LFI, (val))
#define PON_RXFEDIG_CTRL_2_VAL_RG_QP_EQ_DE1OS_LFI(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE1OS_LFI, (val))
#define PON_RXFEDIG_CTRL_2_VAL_RG_QP_EQ_DE0OS_LFI(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_2_FLD_RG_QP_EQ_DE0OS_LFI, (val))

#define PON_RXFEDIG_CTRL_3_VAL_RG_QP_EQ_DHHL_LFI(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHL_LFI, (val))
#define PON_RXFEDIG_CTRL_3_VAL_RG_QP_EQ_DHHLOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DHHLOS_LFI, (val))
#define PON_RXFEDIG_CTRL_3_VAL_RG_QP_EQ_DFEYEN_DUR(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEYEN_DUR, (val))
#define PON_RXFEDIG_CTRL_3_VAL_RG_QP_EQ_DFEX_LF_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEX_LF_SEL, (val))
#define PON_RXFEDIG_CTRL_3_VAL_RG_QP_EQ_DFEXEN_DUR(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_3_FLD_RG_QP_EQ_DFEXEN_DUR, (val))

#define PON_RXFEDIG_CTRL_4_VAL_RG_QP_EQ_DLEQ_LFI_GEN3(val)     REG_FLD_VAL(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN3, (val))
#define PON_RXFEDIG_CTRL_4_VAL_RG_QP_EQ_DLEQ_LFI_GEN2(val)     REG_FLD_VAL(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN2, (val))
#define PON_RXFEDIG_CTRL_4_VAL_RG_QP_EQ_DLEQ_LFI_GEN1(val)     REG_FLD_VAL(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQ_LFI_GEN1, (val))
#define PON_RXFEDIG_CTRL_4_VAL_RG_QP_EQ_DLEQOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DLEQOS_LFI, (val))
#define PON_RXFEDIG_CTRL_4_VAL_RG_QP_EQ_DHHL_LF_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_4_FLD_RG_QP_EQ_DHHL_LF_SEL, (val))

#define PON_RXFEDIG_CTRL_5_VAL_RG_QP_EQ_DSAOS_LF_SEL(val)      REG_FLD_VAL(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DSAOS_LF_SEL, (val))
#define PON_RXFEDIG_CTRL_5_VAL_RG_QP_EQ_DLHL_LF_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LF_SEL, (val))
#define PON_RXFEDIG_CTRL_5_VAL_RG_QP_EQ_DLHL_LFI(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHL_LFI, (val))
#define PON_RXFEDIG_CTRL_5_VAL_RG_QP_EQ_DLHLOS_LFI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLHLOS_LFI, (val))
#define PON_RXFEDIG_CTRL_5_VAL_RG_QP_EQ_DLEQ_LF_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LF_SEL, (val))
#define PON_RXFEDIG_CTRL_5_VAL_RG_QP_EQ_DLEQ_LFI_GEN4(val)     REG_FLD_VAL(PON_RXFEDIG_CTRL_5_FLD_RG_QP_EQ_DLEQ_LFI_GEN4, (val))

#define PON_RXFEDIG_CTRL_6_VAL_RG_QP_EQ_EYE1_Y(val)            REG_FLD_VAL(PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE1_Y, (val))
#define PON_RXFEDIG_CTRL_6_VAL_RG_QP_EQ_EYE0_Y(val)            REG_FLD_VAL(PON_RXFEDIG_CTRL_6_FLD_RG_QP_EQ_EYE0_Y, (val))

#define PON_RXFEDIG_CTRL_7_VAL_RG_QP_EQ_EYE_CNT(val)           REG_FLD_VAL(PON_RXFEDIG_CTRL_7_FLD_RG_QP_EQ_EYE_CNT, (val))

#define PON_RXFEDIG_CTRL_8_VAL_RG_QP_EQ_LEQMAX(val)            REG_FLD_VAL(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_LEQMAX, (val))
#define PON_RXFEDIG_CTRL_8_VAL_RG_QP_EQ_ISIFLAG_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_ISIFLAG_SEL, (val))
#define PON_RXFEDIG_CTRL_8_VAL_RG_QP_EQ_EYE_XOFFSET(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_XOFFSET, (val))
#define PON_RXFEDIG_CTRL_8_VAL_RG_QP_EQ_EYE_MASK(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_8_FLD_RG_QP_EQ_EYE_MASK, (val))

#define PON_RXFEDIG_CTRL_9_VAL_RG_QP_EQ_PI0_INI(val)           REG_FLD_VAL(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_PI0_INI, (val))
#define PON_RXFEDIG_CTRL_9_VAL_RG_QP_EQ_MON_SEL(val)           REG_FLD_VAL(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_MON_SEL, (val))
#define PON_RXFEDIG_CTRL_9_VAL_RG_QP_EQ_LEQ_STOP_TO(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_STOP_TO, (val))
#define PON_RXFEDIG_CTRL_9_VAL_RG_QP_EQ_LEQ_SHIFT(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQ_SHIFT, (val))
#define PON_RXFEDIG_CTRL_9_VAL_RG_QP_EQ_LEQOSC_DLYCNT(val)     REG_FLD_VAL(PON_RXFEDIG_CTRL_9_FLD_RG_QP_EQ_LEQOSC_DLYCNT, (val))

#define PON_RXFEDIG_CTRL_10_VAL_RG_QP_EQ_PI_KPGAIN(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI_KPGAIN, (val))
#define PON_RXFEDIG_CTRL_10_VAL_RG_QP_EQ_PIEYE_INI(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PIEYE_INI, (val))
#define PON_RXFEDIG_CTRL_10_VAL_RG_QP_EQ_PI90_INI(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90_INI, (val))
#define PON_RXFEDIG_CTRL_10_VAL_RG_QP_EQ_PI90CK_SEL(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_10_FLD_RG_QP_EQ_PI90CK_SEL, (val))

#define PON_RXFEDIG_CTRL_11_VAL_RG_QP_EQ_RESERVED(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_11_FLD_RG_QP_EQ_RESERVED, (val))

#define PON_RXFEDIG_CTRL_12_VAL_RG_QP_EQ_REV(val)              REG_FLD_VAL(PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV, (val))
#define PON_RXFEDIG_CTRL_12_VAL_RG_QP_EQ_REV_1(val)            REG_FLD_VAL(PON_RXFEDIG_CTRL_12_FLD_RG_QP_EQ_REV_1, (val))

#define PON_RXFEDIG_CTRL_13_VAL_RG_QP_EQ_STARTTIME(val)        REG_FLD_VAL(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_STARTTIME, (val))
#define PON_RXFEDIG_CTRL_13_VAL_RG_QP_EQ_SIGDET(val)           REG_FLD_VAL(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SIGDET, (val))
#define PON_RXFEDIG_CTRL_13_VAL_RG_QP_EQ_SD_CNT1(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT1, (val))
#define PON_RXFEDIG_CTRL_13_VAL_RG_QP_EQ_SD_CNT0(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_13_FLD_RG_QP_EQ_SD_CNT0, (val))

#define PON_RXFEDIG_CTRL_14_VAL_RG_QP_EQ_TRI_DET_TH(val)       REG_FLD_VAL(PON_RXFEDIG_CTRL_14_FLD_RG_QP_EQ_TRI_DET_TH, (val))

#define PON_RXFEDIG_STS_0_VAL_RGS_SSUSB_EQ_LEQ_STOP(val)       REG_FLD_VAL(PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_LEQ_STOP, (val))
#define PON_RXFEDIG_STS_0_VAL_RGS_SSUSB_EQ_EYE_CNT_RDY(val)    REG_FLD_VAL(PON_RXFEDIG_STS_0_FLD_RGS_SSUSB_EQ_EYE_CNT_RDY, (val))

#define PON_RXFEDIG_STS_1_VAL_RGS_SSUSB_EQ_DCD1L(val)          REG_FLD_VAL(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1L, (val))
#define PON_RXFEDIG_STS_1_VAL_RGS_SSUSB_EQ_DCD1H(val)          REG_FLD_VAL(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD1H, (val))
#define PON_RXFEDIG_STS_1_VAL_RGS_SSUSB_EQ_DCD0L(val)          REG_FLD_VAL(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0L, (val))
#define PON_RXFEDIG_STS_1_VAL_RGS_SSUSB_EQ_DCD0H(val)          REG_FLD_VAL(PON_RXFEDIG_STS_1_FLD_RGS_SSUSB_EQ_DCD0H, (val))

#define PON_RXFEDIG_STS_2_VAL_RGS_SSUSB_EQ_DCEYE1(val)         REG_FLD_VAL(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE1, (val))
#define PON_RXFEDIG_STS_2_VAL_RGS_SSUSB_EQ_DCEYE0(val)         REG_FLD_VAL(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCEYE0, (val))
#define PON_RXFEDIG_STS_2_VAL_RGS_SSUSB_EQ_DCE1(val)           REG_FLD_VAL(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE1, (val))
#define PON_RXFEDIG_STS_2_VAL_RGS_SSUSB_EQ_DCE0(val)           REG_FLD_VAL(PON_RXFEDIG_STS_2_FLD_RGS_SSUSB_EQ_DCE0, (val))

#define PON_RXFEDIG_STS_3_VAL_RGS_SSUSB_EQ_DCLHL(val)          REG_FLD_VAL(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLHL, (val))
#define PON_RXFEDIG_STS_3_VAL_RGS_SSUSB_EQ_DCLEQOS(val)        REG_FLD_VAL(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQOS, (val))
#define PON_RXFEDIG_STS_3_VAL_RGS_SSUSB_EQ_DCLEQ(val)          REG_FLD_VAL(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCLEQ, (val))
#define PON_RXFEDIG_STS_3_VAL_RGS_SSUSB_EQ_DCHHL(val)          REG_FLD_VAL(PON_RXFEDIG_STS_3_FLD_RGS_SSUSB_EQ_DCHHL, (val))

#define PON_RXFEDIG_STS_4_VAL_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0(val) REG_FLD_VAL(PON_RXFEDIG_STS_4_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_0, (val))

#define PON_RXFEDIG_STS_5_VAL_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1(val) REG_FLD_VAL(PON_RXFEDIG_STS_5_FLD_RGS_SSUSB_EQ_EYE_MONITOR_ERRCNT_1, (val))

#define PON_RXFEDIG_STS_7_VAL_RGS_SSUSB_EQ_STATUS(val)         REG_FLD_VAL(PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_STATUS, (val))
#define PON_RXFEDIG_STS_7_VAL_RGS_SSUSB_EQ_PILPO(val)          REG_FLD_VAL(PON_RXFEDIG_STS_7_FLD_RGS_SSUSB_EQ_PILPO, (val))

#define PON_RXFEDIG_STS_8_VAL_RGS_SSUSB_RX_SD_OUT(val)         REG_FLD_VAL(PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_RX_SD_OUT, (val))
#define PON_RXFEDIG_STS_8_VAL_RGS_SSUSB_EQ_PROBE_OUT(val)      REG_FLD_VAL(PON_RXFEDIG_STS_8_FLD_RGS_SSUSB_EQ_PROBE_OUT, (val))

#define PON_RXFEDIG_CTRL_15_VAL_RG_PQ_FEDIG_MODE(val)          REG_FLD_VAL(PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_MODE, (val))
#define PON_RXFEDIG_CTRL_15_VAL_RG_PQ_FEDIG_SPEED(val)         REG_FLD_VAL(PON_RXFEDIG_CTRL_15_FLD_RG_PQ_FEDIG_SPEED, (val))

#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_int_los_inv(val)       REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_int_los_inv, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_tdc_los_inv(val)       REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_los_inv, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_tdc_ck_en_and_los(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_ck_en_and_los, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_tdc_lck2ref_sel(val)   REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_tdc_lck2ref_sel, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_sw_lcpll_en(val)       REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_lcpll_en_inv(val)      REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_lcpll_hw_ctrl_mode(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_ncpo_los_hold_en(val)  REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_los_hold_en, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_ncpo_det_en(val)       REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_ncpo_det_en, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_lcpll_force_on(val)    REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on, (val))

#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_ck_stb_timer(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer, (val))
#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_pcw_man_load_timer(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer, (val))
#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_en_timer(val)    REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer, (val))
#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_man_pwdb(val)    REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb, (val))

#define SS_LCPLL_PWCTL_SETTING_2_VAL_rg_ncpo_ana_msb(val)      REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_ncpo_ana_msb, (val))
#define SS_LCPLL_PWCTL_SETTING_2_VAL_rg_tdc_mst_en(val)        REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_mst_en, (val))
#define SS_LCPLL_PWCTL_SETTING_2_VAL_rg_tdc_ck_stb_timer(val)  REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_2_FLD_rg_tdc_ck_stb_timer, (val))

#define SS_LCPLL_PWCTL_DBG_SETTING_VAL_rg_lcpll_ledck_div(val) REG_FLD_VAL(SS_LCPLL_PWCTL_DBG_SETTING_FLD_rg_lcpll_ledck_div, (val))

#define SS_LCPLL_TDC_PW_0_VAL_rg_lcpll_dpma_dds1_iso_disable(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_iso_disable, (val))
#define SS_LCPLL_TDC_PW_0_VAL_rg_lcpll_dpma_dds1_pwdb(val)     REG_FLD_VAL(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_dds1_pwdb, (val))
#define SS_LCPLL_TDC_PW_0_VAL_rg_lcpll_dpma_autopw_en(val)     REG_FLD_VAL(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_dpma_autopw_en, (val))
#define SS_LCPLL_TDC_PW_0_VAL_rg_lcpll_tdc_dig_pwdb(val)       REG_FLD_VAL(SS_LCPLL_TDC_PW_0_FLD_rg_lcpll_tdc_dig_pwdb, (val))

#define SS_LCPLL_TDC_PW_1_VAL_rg_lcpll_dpma_dds1_pcw_ncpo_chg(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg, (val))
#define SS_LCPLL_TDC_PW_1_VAL_rg_lcpll_dpma_dds1_rstb(val)     REG_FLD_VAL(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb, (val))
#define SS_LCPLL_TDC_PW_1_VAL_rg_lcpll_dpma_dds1_rstb_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_rstb_dly, (val))
#define SS_LCPLL_TDC_PW_1_VAL_rg_lcpll_dpma_dds1_iso_disable_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_1_FLD_rg_lcpll_dpma_dds1_iso_disable_dly, (val))

#define SS_LCPLL_TDC_PW_2_VAL_rg_lcpll_dpma_txpll1_ddsfbk_en(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en, (val))
#define SS_LCPLL_TDC_PW_2_VAL_rg_lcpll_dpma_dds1_ncpo_en_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en_dly, (val))
#define SS_LCPLL_TDC_PW_2_VAL_rg_lcpll_dpma_dds1_ncpo_en(val)  REG_FLD_VAL(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_ncpo_en, (val))
#define SS_LCPLL_TDC_PW_2_VAL_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_2_FLD_rg_lcpll_dpma_dds1_pcw_ncpo_chg_dly, (val))

#define SS_LCPLL_TDC_PW_3_VAL_rg_lcpll_tdc_cal(val)            REG_FLD_VAL(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal, (val))
#define SS_LCPLL_TDC_PW_3_VAL_rg_lcpll_tdc_cal_trig_dly(val)   REG_FLD_VAL(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig_dly, (val))
#define SS_LCPLL_TDC_PW_3_VAL_rg_lcpll_tdc_cal_trig(val)       REG_FLD_VAL(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_tdc_cal_trig, (val))
#define SS_LCPLL_TDC_PW_3_VAL_rg_lcpll_dpma_txpll1_ddsfbk_en_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_PW_3_FLD_rg_lcpll_dpma_txpll1_ddsfbk_en_dly, (val))

#define SS_LCPLL_TDC_PW_4_VAL_rg_lcpll_tdc_sigdet_cg(val)      REG_FLD_VAL(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_sigdet_cg, (val))
#define SS_LCPLL_TDC_PW_4_VAL_rg_lcpll_tdc_en(val)             REG_FLD_VAL(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_en, (val))
#define SS_LCPLL_TDC_PW_4_VAL_rg_lcpll_tdc_cal_offset(val)     REG_FLD_VAL(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_offset, (val))
#define SS_LCPLL_TDC_PW_4_VAL_rg_lcpll_tdc_cal_bw(val)         REG_FLD_VAL(SS_LCPLL_TDC_PW_4_FLD_rg_lcpll_tdc_cal_bw, (val))

#define SS_LCPLL_TDC_PW_5_VAL_rg_tdc_start_cnt(val)            REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt, (val))
#define SS_LCPLL_TDC_PW_5_VAL_rg_tdc_start_cnt_clr(val)        REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_tdc_start_cnt_clr, (val))
#define SS_LCPLL_TDC_PW_5_VAL_rg_ncpo_start_dly_en(val)        REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_ncpo_start_dly_en, (val))
#define SS_LCPLL_TDC_PW_5_VAL_rg_lcpll_tdc_sync_in_mode(val)   REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_sync_in_mode, (val))
#define SS_LCPLL_TDC_PW_5_VAL_rg_lcpll_autok_tdc(val)          REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_autok_tdc, (val))
#define SS_LCPLL_TDC_PW_5_VAL_rg_lcpll_tdc_autoen(val)         REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_autoen, (val))
#define SS_LCPLL_TDC_PW_5_VAL_rg_lcpll_tdc_en_mux(val)         REG_FLD_VAL(SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_en_mux, (val))

#define SS_LCPLL_TDC_FLT_0_VAL_rg_lcpll_tdc_offset(val)        REG_FLD_VAL(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_tdc_offset, (val))
#define SS_LCPLL_TDC_FLT_0_VAL_rg_lcpll_ki(val)                REG_FLD_VAL(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_ki, (val))
#define SS_LCPLL_TDC_FLT_0_VAL_rg_lcpll_pon_rx_cdr_divtdc(val) REG_FLD_VAL(SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_pon_rx_cdr_divtdc, (val))

#define SS_LCPLL_TDC_FLT_1_VAL_rg_lcpll_tdc_gain(val)          REG_FLD_VAL(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_tdc_gain, (val))
#define SS_LCPLL_TDC_FLT_1_VAL_rg_lcpll_a_tdc(val)             REG_FLD_VAL(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_a_tdc, (val))
#define SS_LCPLL_TDC_FLT_1_VAL_rg_lcpll_gpon_sel(val)          REG_FLD_VAL(SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_gpon_sel, (val))

#define SS_LCPLL_TDC_FLT_2_VAL_rg_lcpll_ncpo_value(val)        REG_FLD_VAL(SS_LCPLL_TDC_FLT_2_FLD_rg_lcpll_ncpo_value, (val))

#define SS_LCPLL_TDC_FLT_3_VAL_rg_sdm_upd_disb(val)            REG_FLD_VAL(SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd_disb, (val))
#define SS_LCPLL_TDC_FLT_3_VAL_rg_sdm_upd(val)                 REG_FLD_VAL(SS_LCPLL_TDC_FLT_3_FLD_rg_sdm_upd, (val))
#define SS_LCPLL_TDC_FLT_3_VAL_rg_lcpll_tdc_swrst(val)         REG_FLD_VAL(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_tdc_swrst, (val))
#define SS_LCPLL_TDC_FLT_3_VAL_rg_lcpll_ncpo_hold(val)         REG_FLD_VAL(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_hold, (val))
#define SS_LCPLL_TDC_FLT_3_VAL_rg_lcpll_ncpo_load(val)         REG_FLD_VAL(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_load, (val))
#define SS_LCPLL_TDC_FLT_3_VAL_rg_lcpll_ncpo_shift(val)        REG_FLD_VAL(SS_LCPLL_TDC_FLT_3_FLD_rg_lcpll_ncpo_shift, (val))

#define SS_LCPLL_TDC_FLT_4_VAL_rg_lcpll_tdcen_wait_lck2ref(val) REG_FLD_VAL(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_wait_lck2ref, (val))
#define SS_LCPLL_TDC_FLT_4_VAL_rg_lcpll_tdcen_chk_lck2ref(val) REG_FLD_VAL(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_chk_lck2ref, (val))
#define SS_LCPLL_TDC_FLT_4_VAL_rg_lcpll_tdc_rst(val)           REG_FLD_VAL(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdc_rst, (val))
#define SS_LCPLL_TDC_FLT_4_VAL_rg_lcpll_tdcen_rst_dlf(val)     REG_FLD_VAL(SS_LCPLL_TDC_FLT_4_FLD_rg_lcpll_tdcen_rst_dlf, (val))

#define SS_LCPLL_TDC_FLT_5_VAL_rg_lcpll_ncpo_chg(val)          REG_FLD_VAL(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_ncpo_chg, (val))
#define SS_LCPLL_TDC_FLT_5_VAL_rg_lcpll_tdc_autopw_ncpo(val)   REG_FLD_VAL(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_autopw_ncpo, (val))
#define SS_LCPLL_TDC_FLT_5_VAL_rg_lcpll_tdc_waitlck_pos_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pos_dly, (val))
#define SS_LCPLL_TDC_FLT_5_VAL_rg_lcpll_tdc_waitlck_pre_dly(val) REG_FLD_VAL(SS_LCPLL_TDC_FLT_5_FLD_rg_lcpll_tdc_waitlck_pre_dly, (val))

#define SS_LCPLL_TDC_FLT_6_VAL_rg_lcpll_tdc_pcw_sub1en(val)    REG_FLD_VAL(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_tdc_pcw_sub1en, (val))
#define SS_LCPLL_TDC_FLT_6_VAL_rg_lcpll_dlf_mult_en(val)       REG_FLD_VAL(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_dlf_mult_en, (val))
#define SS_LCPLL_TDC_FLT_6_VAL_rg_lcpll_ncpo_chg_delay(val)    REG_FLD_VAL(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_delay, (val))
#define SS_LCPLL_TDC_FLT_6_VAL_rg_lcpll_ncpo_chg_mask(val)     REG_FLD_VAL(SS_LCPLL_TDC_FLT_6_FLD_rg_lcpll_ncpo_chg_mask, (val))

#define SS_LCPLL_TDC_FLT_7_VAL_rg_lcpll_tdcck_inv_en(val)      REG_FLD_VAL(SS_LCPLL_TDC_FLT_7_FLD_rg_lcpll_tdcck_inv_en, (val))

#define SS_LCPLL_TDC_PCW_1_VAL_rg_lcpll_pon_hrdds_pcw_ncpo_gpon(val) REG_FLD_VAL(SS_LCPLL_TDC_PCW_1_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_gpon, (val))

#define SS_LCPLL_TDC_PCW_2_VAL_rg_lcpll_pon_hrdds_pcw_ncpo_epon(val) REG_FLD_VAL(SS_LCPLL_TDC_PCW_2_FLD_rg_lcpll_pon_hrdds_pcw_ncpo_epon, (val))

#define SS_LCPLL_TDC_RO_1_VAL_ro_lcpll_tdc_dig(val)            REG_FLD_VAL(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_dig, (val))
#define SS_LCPLL_TDC_RO_1_VAL_ro_lcpll_tdc_st(val)             REG_FLD_VAL(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_st, (val))
#define SS_LCPLL_TDC_RO_1_VAL_ro_lcpll_tdc_tdcpw_st(val)       REG_FLD_VAL(SS_LCPLL_TDC_RO_1_FLD_ro_lcpll_tdc_tdcpw_st, (val))

#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_tdc_ck_stb(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_ck_stb, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_txpll1_ddsfbk_en, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_tdc_cal_offset(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_offset, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_tdc_cal_bw(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_cal_bw, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_tdc_en(val)    REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_tdc_en, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_rx_ck_stb(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_rx_ck_stb, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_en_lck2ref_rst(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_en_lck2ref_rst, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_dds1_pwdb(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pwdb, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_dds1_iso_disable(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_iso_disable, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_dds1_rstb(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_rstb, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_dds1_ncpo_en(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_ncpo_en, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo_chg, (val))
#define SS_LCPLL_TDC_RO_2_VAL_ro_lcpll_tdc_dlf_gain(val)       REG_FLD_VAL(SS_LCPLL_TDC_RO_2_FLD_ro_lcpll_tdc_dlf_gain, (val))

#define SS_LCPLL_TDC_RO_3_VAL_ro_lcpll_tdc_gain(val)           REG_FLD_VAL(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_gain, (val))
#define SS_LCPLL_TDC_RO_3_VAL_ro_lcpll_tdc_decode(val)         REG_FLD_VAL(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_decode, (val))
#define SS_LCPLL_TDC_RO_3_VAL_ro_lcpll_tdc_en(val)             REG_FLD_VAL(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_en, (val))
#define SS_LCPLL_TDC_RO_3_VAL_ro_lcpll_tdc_cal_done(val)       REG_FLD_VAL(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_cal_done, (val))
#define SS_LCPLL_TDC_RO_3_VAL_ro_lcpll_tdc_offset(val)         REG_FLD_VAL(SS_LCPLL_TDC_RO_3_FLD_ro_lcpll_tdc_offset, (val))

#define SS_LCPLL_TDC_RO_4_VAL_ro_lcpll_tdc_dpma_dds1_pcw_ncpo(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_4_FLD_ro_lcpll_tdc_dpma_dds1_pcw_ncpo, (val))

#define SS_LCPLL_TDC_RO_5_VAL_ro_lcpll_tdc_dpma_tdc_c(val)     REG_FLD_VAL(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_c, (val))
#define SS_LCPLL_TDC_RO_5_VAL_ro_lcpll_tdc_dpma_tdc_d(val)     REG_FLD_VAL(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_d, (val))
#define SS_LCPLL_TDC_RO_5_VAL_ro_lcpll_tdc_dpma_tdc_leadlag(val) REG_FLD_VAL(SS_LCPLL_TDC_RO_5_FLD_ro_lcpll_tdc_dpma_tdc_leadlag, (val))

#define SS_LCPLL_TDC_CTRL_0_VAL_rg_lcpll_ki_hold(val)          REG_FLD_VAL(SS_LCPLL_TDC_CTRL_0_FLD_rg_lcpll_ki_hold, (val))

#define SS_LCPLL_0_VAL_tdc_sync_pcw_ncpo_chg(val)              REG_FLD_VAL(SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg, (val))
#define SS_LCPLL_0_VAL_eee_lcpll_hold(val)                     REG_FLD_VAL(SS_LCPLL_0_FLD_eee_lcpll_hold, (val))

#define SS_LCPLL_1_VAL_tdc_sync_pcw_ncpo(val)                  REG_FLD_VAL(SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo, (val))

#define SS_LCPLL_2_VAL_lcpll_top_flagh_en(val)                 REG_FLD_VAL(SS_LCPLL_2_FLD_lcpll_top_flagh_en, (val))
#define SS_LCPLL_2_VAL_lcpll_top_flagl_en(val)                 REG_FLD_VAL(SS_LCPLL_2_FLD_lcpll_top_flagl_en, (val))
#define SS_LCPLL_2_VAL_flagh_sel(val)                          REG_FLD_VAL(SS_LCPLL_2_FLD_flagh_sel, (val))
#define SS_LCPLL_2_VAL_flagl_sel(val)                          REG_FLD_VAL(SS_LCPLL_2_FLD_flagl_sel, (val))

#define TDC_DLF_GAIN_STATUS_VAL_ro_dlf_gain_rund_new(val)      REG_FLD_VAL(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new, (val))
#define TDC_DLF_GAIN_STATUS_VAL_ro_dlf_gain_new(val)           REG_FLD_VAL(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new, (val))

#define TDC_DLF_MODE_SETTING_VAL_rg_dlf_gain_latch(val)        REG_FLD_VAL(TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch, (val))
#define TDC_DLF_MODE_SETTING_VAL_rg_dlf_mode_sel(val)          REG_FLD_VAL(TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel, (val))
#define TDC_DLF_MODE_SETTING_VAL_ro_dlf_gain_new_org(val)      REG_FLD_VAL(TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org, (val))

#define TDC_HOLD_CTRL_0_VAL_rg_ncpo_hold_en(val)               REG_FLD_VAL(TDC_HOLD_CTRL_0_FLD_rg_ncpo_hold_en, (val))
#define TDC_HOLD_CTRL_0_VAL_rg_ncpo_toggle(val)                REG_FLD_VAL(TDC_HOLD_CTRL_0_FLD_rg_ncpo_toggle, (val))
#define TDC_HOLD_CTRL_0_VAL_rg_tdc_los_hold_mux(val)           REG_FLD_VAL(TDC_HOLD_CTRL_0_FLD_rg_tdc_los_hold_mux, (val))
#define TDC_HOLD_CTRL_0_VAL_rg_tdc_ncpo_hold_release_time(val) REG_FLD_VAL(TDC_HOLD_CTRL_0_FLD_rg_tdc_ncpo_hold_release_time, (val))

#define TDC_HOLD_CTRL_1_VAL_rg_ncpo_up_thred(val)              REG_FLD_VAL(TDC_HOLD_CTRL_1_FLD_rg_ncpo_up_thred, (val))

#define TDC_HOLD_CTRL_2_VAL_rg_ncpo_dwn_thred(val)             REG_FLD_VAL(TDC_HOLD_CTRL_2_FLD_rg_ncpo_dwn_thred, (val))

#define TDC_HOLD_STATUS_0_VAL_ro_ncpo_output(val)              REG_FLD_VAL(TDC_HOLD_STATUS_0_FLD_ro_ncpo_output, (val))

#define TDC_HOLD_STATUS_1_VAL_ro_ncpo_max_output(val)          REG_FLD_VAL(TDC_HOLD_STATUS_1_FLD_ro_ncpo_max_output, (val))

#define TDC_HOLD_STATUS_2_VAL_ro_ncpo_min_output(val)          REG_FLD_VAL(TDC_HOLD_STATUS_2_FLD_ro_ncpo_min_output, (val))

#define TDC_CLR_0_VAL_rg_ncpo_flag_clr(val)                    REG_FLD_VAL(TDC_CLR_0_FLD_rg_ncpo_flag_clr, (val))
#define TDC_CLR_0_VAL_rg_ncpo_clr(val)                         REG_FLD_VAL(TDC_CLR_0_FLD_rg_ncpo_clr, (val))

#define INTF_CTRL_0_VAL_rg_ad_qp_tdc_leadlag_sel(val)          REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_tdc_leadlag_force(val)        REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_tdc_leadlag_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_pll_ssc_en_sel(val)           REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_pll_ssc_en_force(val)         REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_en_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_pll_ssc_dir_sel(val)          REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_pll_ssc_dir_force(val)        REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_pll_ssc_dir_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_pll_vcocal_cplt_sel(val)      REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_pll_vcocal_cplt_force(val)    REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_pll_vcocal_cplt_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_pcie_ckdet_out_sel(val)          REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_pcie_ckdet_out_force(val)        REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_pcie_ckdet_out_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_tx_cmdet_sel(val)             REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_tx_cmdet_force(val)           REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_tx_cmdet_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_termcal_dir_sel(val)          REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_termcal_dir_force(val)        REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_termcal_dir_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_pr_vco_overspeed_sel(val) REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_pr_vco_overspeed_force(val) REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_vco_overspeed_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_pr_fll_dig_rstb_sel(val)  REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_pr_fll_dig_rstb_force(val) REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pr_fll_dig_rstb_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_lpf_oneshot_trig_sel(val) REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_lpf_oneshot_trig_force(val) REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_lpf_oneshot_trig_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_pi_pderr_sel(val)         REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_cdr_pi_pderr_force(val)       REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_cdr_pi_pderr_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_crsdet_lthout_sel(val)        REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_crsdet_lthout_force(val)      REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_lthout_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_crsdet_out_sel(val)           REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_crsdet_out_force(val)         REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_crsdet_out_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_rx_lfps_sel(val)              REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_rx_lfps_force(val)            REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_rx_lfps_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_sigdet_cal_out_sel(val)       REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_sigdet_cal_out_force(val)     REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_cal_out_force, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_sigdet_out_sel(val)           REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_sel, (val))
#define INTF_CTRL_0_VAL_rg_ad_qp_sigdet_out_force(val)         REG_FLD_VAL(INTF_CTRL_0_FLD_rg_ad_qp_sigdet_out_force, (val))

#define INTF_CTRL_1_VAL_rg_ad_qp_tdc_c_sel(val)                REG_FLD_VAL(INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_sel, (val))
#define INTF_CTRL_1_VAL_rg_ad_qp_tdc_c_force(val)              REG_FLD_VAL(INTF_CTRL_1_FLD_rg_ad_qp_tdc_c_force, (val))
#define INTF_CTRL_1_VAL_rg_ad_qp_pll_vcocal_state_sel(val)     REG_FLD_VAL(INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_sel, (val))
#define INTF_CTRL_1_VAL_rg_ad_qp_pll_vcocal_state_force(val)   REG_FLD_VAL(INTF_CTRL_1_FLD_rg_ad_qp_pll_vcocal_state_force, (val))

#define INTF_CTRL_2_VAL_rg_ad_qp_tdc_d_sel(val)                REG_FLD_VAL(INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_sel, (val))
#define INTF_CTRL_2_VAL_rg_ad_qp_tdc_d_force(val)              REG_FLD_VAL(INTF_CTRL_2_FLD_rg_ad_qp_tdc_d_force, (val))

#define INTF_CTRL_3_VAL_rg_ad_qp_cdr_lpf_snapshotvalue_sel(val) REG_FLD_VAL(INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_sel, (val))
#define INTF_CTRL_3_VAL_rg_ad_qp_cdr_lpf_snapshotvalue_force(val) REG_FLD_VAL(INTF_CTRL_3_FLD_rg_ad_qp_cdr_lpf_snapshotvalue_force, (val))

#define INTF_CTRL_4_VAL_rg_ad_qp_cdr_pr_adc_sel(val)           REG_FLD_VAL(INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_sel, (val))
#define INTF_CTRL_4_VAL_rg_ad_qp_cdr_pr_adc_force(val)         REG_FLD_VAL(INTF_CTRL_4_FLD_rg_ad_qp_cdr_pr_adc_force, (val))

#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_lpf_r_en_sel(val)      REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_lpf_r_en_force(val)    REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_r_en_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_lpf_c_en_sel(val)      REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_lpf_c_en_force(val)    REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_lpf_c_en_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_kband_rstb_sel(val)    REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_kband_rstb_force(val)  REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_kband_rstb_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_pwdb_sel(val)          REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_pr_pwdb_force(val)        REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_pr_pwdb_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_lck2data_sel(val)         REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_lck2data_force(val)       REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_lck2data_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_lpf_rstb_sel(val)         REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_cdr_lpf_rstb_force(val)       REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_cdr_lpf_rstb_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_scan_sel(val)              REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_scan_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_scan_force(val)            REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_scan_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_crsdet_rstb_sel(val)          REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_crsdet_rstb_force(val)        REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_crsdet_rstb_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_saosc_en_sel(val)          REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_saosc_en_force(val)        REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_saosc_en_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_crsdet_en_sel(val)            REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_crsdet_en_force(val)          REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_crsdet_en_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_sigdet_cal_en_sel(val)        REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_sigdet_cal_en_force(val)      REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_sigdet_cal_en_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_sigdet_en_sel(val)            REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_sigdet_en_force(val)          REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_sigdet_en_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_p3_entry_sel(val)          REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_p3_entry_force(val)        REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_p3_entry_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_hz_sel(val)                REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_hz_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_hz_force(val)              REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_hz_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_afe_pwd_sel(val)           REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_rx_afe_pwd_force(val)         REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_rx_afe_pwd_force, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_lfps_pwd_sel(val)             REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_sel, (val))
#define INTF_CTRL_5_VAL_rg_da_qp_lfps_pwd_force(val)           REG_FLD_VAL(INTF_CTRL_5_FLD_rg_da_qp_lfps_pwd_force, (val))

#define INTF_CTRL_6_VAL_rg_da_qp_xtal_rx_en_sel(val)           REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_xtal_rx_en_force(val)         REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_xtal_rx_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_pcie_clktx_en_sel(val)           REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_pcie_clktx_en_force(val)         REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_pcie_clktx_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_pcie_clkrx_en_sel(val)           REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_pcie_clkrx_en_force(val)         REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_pcie_clkrx_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_bg_lpf_en_sel(val)            REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_bg_lpf_en_force(val)          REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_bg_lpf_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_bias_en_sel(val)              REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_bias_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_bias_en_force(val)            REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_bias_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_lfps_sel(val)              REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_lfps_force(val)            REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_lfps_en_sel(val)           REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_lfps_en_force(val)         REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_lfps_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_eidle_lp_en_sel(val)       REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_eidle_lp_en_force(val)     REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_eidle_lp_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_ser_en_sel(val)            REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_ser_en_force(val)          REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_ser_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_data_en_sel(val)           REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_data_en_force(val)         REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_data_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_rxdet_en_sel(val)             REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_rxdet_en_force(val)           REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_rxdet_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_impcalib_en_sel(val)       REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_impcalib_en_force(val)     REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_impcalib_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_drv_en_sel(val)            REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_drv_en_force(val)          REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_drv_en_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_term_vref_sel_sel(val)     REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_tx_term_vref_sel_force(val)   REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_tx_term_vref_sel_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_cdr_pd_pwdb_sel(val)          REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_cdr_pd_pwdb_force(val)        REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_cdr_pd_pwdb_force, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_cdr_pr_pieye_pwdb_sel(val)    REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_sel, (val))
#define INTF_CTRL_6_VAL_rg_da_qp_cdr_pr_pieye_pwdb_force(val)  REG_FLD_VAL(INTF_CTRL_6_FLD_rg_da_qp_cdr_pr_pieye_pwdb_force, (val))

#define INTF_CTRL_7_VAL_rg_da_qp_tdc_cal_offset_sel(val)       REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_tdc_cal_offset_force(val)     REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_offset_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_tdc_cal_bw_sel(val)           REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_tdc_cal_bw_force(val)         REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_tdc_cal_bw_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_tdc_txck_sel_sel(val)     REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_tdc_txck_sel_force(val)   REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_tdc_txck_sel_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_icolp_en_sel(val)         REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_icolp_en_force(val)       REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_icolp_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_ssc_en_sel(val)           REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_ssc_en_force(val)         REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_ssc_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_sdm_ifm_sel(val)          REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_sdm_ifm_force(val)        REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_ifm_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_sdm_chg_sel(val)          REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_sdm_chg_force(val)        REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_chg_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_rico_sel_sel(val)         REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_rico_sel_force(val)       REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_rico_sel_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_postdiv_en_sel(val)       REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_postdiv_en_force(val)     REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_postdiv_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_phy_ck_en_sel(val)        REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_phy_ck_en_force(val)      REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_phy_ck_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_pfd_offset_en_sel(val)    REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_pfd_offset_en_force(val)  REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_pfd_offset_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_pck_sel_sel(val)          REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_pck_sel_force(val)        REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_pck_sel_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_icoiq_en_sel(val)         REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_icoiq_en_force(val)       REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_icoiq_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_en_sel(val)               REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_en_force(val)             REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_sdm_di_en_sel(val)        REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_qp_pll_sdm_di_en_force(val)      REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_qp_pll_sdm_di_en_force, (val))
#define INTF_CTRL_7_VAL_rg_da_pcie_ckdet_en_sel(val)           REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_sel, (val))
#define INTF_CTRL_7_VAL_rg_da_pcie_ckdet_en_force(val)         REG_FLD_VAL(INTF_CTRL_7_FLD_rg_da_pcie_ckdet_en_force, (val))

#define INTF_CTRL_8_VAL_rg_da_qp_pll_sdm_hren_sel(val)         REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_sdm_hren_force(val)       REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_sdm_hren_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_pfd_offset_sel(val)       REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_pfd_offset_force(val)     REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_pfd_offset_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_kband_prediv_sel(val)     REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_kband_prediv_force(val)   REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_kband_prediv_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_fbksel_sel(val)           REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_fbksel_force(val)         REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_fbksel_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_bpb_sel(val)              REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_bpb_force(val)            REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_bpb_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_bc_sel(val)               REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_bc_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_pll_bc_force(val)             REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_pll_bc_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_xtal_ext_en_sel(val)          REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_xtal_ext_en_force(val)        REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_xtal_ext_en_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_tx_dem_sel(val)               REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_tx_dem_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_tx_dem_force(val)             REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_tx_dem_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_tx_term_sel_sel(val)          REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_tx_term_sel_force(val)        REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_tx_term_sel_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_lfps_deglitch_sel(val)        REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_lfps_deglitch_force(val)      REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_lfps_deglitch_force, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_tdc_en_sel(val)               REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_tdc_en_sel, (val))
#define INTF_CTRL_8_VAL_rg_da_qp_tdc_en_force(val)             REG_FLD_VAL(INTF_CTRL_8_FLD_rg_da_qp_tdc_en_force, (val))

#define INTF_CTRL_9_VAL_rg_da_qp_rx_imp_sel_sel(val)           REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_rx_imp_sel_force(val)         REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_rx_imp_sel_force, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_ir_sel(val)               REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_ir_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_ir_force(val)             REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_ir_force, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_rx_dcleq_sel(val)             REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_rx_dcleq_force(val)           REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_rx_dcleq_force, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_br_sel(val)               REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_br_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_br_force(val)             REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_br_force, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_bpa_sel(val)              REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_bpa_force(val)            REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_bpa_force, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_tx_fir_cn1_sel(val)           REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_tx_fir_cn1_force(val)         REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_tx_fir_cn1_force, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_ssc_dir_dly_sel(val)      REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_sel, (val))
#define INTF_CTRL_9_VAL_rg_da_qp_pll_ssc_dir_dly_force(val)    REG_FLD_VAL(INTF_CTRL_9_FLD_rg_da_qp_pll_ssc_dir_dly_force, (val))

#define INTF_CTRL_10_VAL_rg_da_qp_tx_fir_c2_sel(val)           REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_sel, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_tx_fir_c2_force(val)         REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c2_force, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_tx_fir_c1_sel(val)           REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_sel, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_tx_fir_c1_force(val)         REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_tx_fir_c1_force, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_cdr_pr_fll_cor_sel(val)      REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_sel, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_cdr_pr_fll_cor_force(val)    REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_cdr_pr_fll_cor_force, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_sigdet_cal_offset_sel(val)   REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_sel, (val))
#define INTF_CTRL_10_VAL_rg_da_qp_sigdet_cal_offset_force(val) REG_FLD_VAL(INTF_CTRL_10_FLD_rg_da_qp_sigdet_cal_offset_force, (val))

#define INTF_CTRL_11_VAL_rg_da_qp_cdr_pr_idac_sel(val)         REG_FLD_VAL(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_sel, (val))
#define INTF_CTRL_11_VAL_rg_da_qp_cdr_pr_idac_force(val)       REG_FLD_VAL(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_idac_force, (val))
#define INTF_CTRL_11_VAL_rg_da_qp_cdr_pr_pieye_sel(val)        REG_FLD_VAL(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_sel, (val))
#define INTF_CTRL_11_VAL_rg_da_qp_cdr_pr_pieye_force(val)      REG_FLD_VAL(INTF_CTRL_11_FLD_rg_da_qp_cdr_pr_pieye_force, (val))
#define INTF_CTRL_11_VAL_rg_da_qp_tx_fir_c0b_sel(val)          REG_FLD_VAL(INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_sel, (val))
#define INTF_CTRL_11_VAL_rg_da_qp_tx_fir_c0b_force(val)        REG_FLD_VAL(INTF_CTRL_11_FLD_rg_da_qp_tx_fir_c0b_force, (val))

#define INTF_CTRL_12_VAL_rg_da_qp_pll_ssc_delta_sel(val)       REG_FLD_VAL(INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_sel, (val))
#define INTF_CTRL_12_VAL_rg_da_qp_pll_ssc_delta_force(val)     REG_FLD_VAL(INTF_CTRL_12_FLD_rg_da_qp_pll_ssc_delta_force, (val))

#define INTF_CTRL_13_VAL_rg_da_qp_pll_ssc_period_sel(val)      REG_FLD_VAL(INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_sel, (val))
#define INTF_CTRL_13_VAL_rg_da_qp_pll_ssc_period_force(val)    REG_FLD_VAL(INTF_CTRL_13_FLD_rg_da_qp_pll_ssc_period_force, (val))

#define INTF_CTRL_14_VAL_rg_da_qp_pll_sdm_pcw_force_31_0(val)  REG_FLD_VAL(INTF_CTRL_14_FLD_rg_da_qp_pll_sdm_pcw_force_31_0, (val))

#define INTF_CTRL_15_VAL_rg_da_qp_pll_sdm_pcw_sel(val)         REG_FLD_VAL(INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_sel, (val))
#define INTF_CTRL_15_VAL_rg_da_qp_pll_sdm_pcw_force_33_32(val) REG_FLD_VAL(INTF_CTRL_15_FLD_rg_da_qp_pll_sdm_pcw_force_33_32, (val))
#define INTF_CTRL_15_VAL_rg_da_qp_tx_data_sel(val)             REG_FLD_VAL(INTF_CTRL_15_FLD_rg_da_qp_tx_data_sel, (val))
#define INTF_CTRL_15_VAL_rg_da_qp_tx_data_force(val)           REG_FLD_VAL(INTF_CTRL_15_FLD_rg_da_qp_tx_data_force, (val))

#define INTF_STS_0_VAL_ro_da_qp_xtal_rx_en(val)                REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_xtal_rx_en, (val))
#define INTF_STS_0_VAL_ro_da_pcie_clktx_en(val)                REG_FLD_VAL(INTF_STS_0_FLD_ro_da_pcie_clktx_en, (val))
#define INTF_STS_0_VAL_ro_da_pcie_clkrx_en(val)                REG_FLD_VAL(INTF_STS_0_FLD_ro_da_pcie_clkrx_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_bg_lpf_en(val)                 REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_bg_lpf_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_bias_en(val)                   REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_bias_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_lfps(val)                   REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_lfps, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_lfps_en(val)                REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_lfps_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_eidle_lp_en(val)            REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_eidle_lp_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_ser_en(val)                 REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_ser_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_data_en(val)                REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_data_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_rxdet_en(val)                  REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_rxdet_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_impcalib_en(val)            REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_impcalib_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_drv_en(val)                 REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_drv_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_tx_term_vref_sel(val)          REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_tx_term_vref_sel, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_pd_pwdb(val)               REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_pd_pwdb, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_pr_pieye_pwdb(val)         REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_pr_pieye_pwdb, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_pr_lpf_r_en(val)           REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_r_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_pr_lpf_c_en(val)           REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_pr_lpf_c_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_pr_kband_rstb(val)         REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_pr_kband_rstb, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_pr_pwdb(val)               REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_pr_pwdb, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_lck2data(val)              REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_lck2data, (val))
#define INTF_STS_0_VAL_ro_da_qp_cdr_lpf_rstb(val)              REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_cdr_lpf_rstb, (val))
#define INTF_STS_0_VAL_ro_da_qp_rx_scan(val)                   REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_rx_scan, (val))
#define INTF_STS_0_VAL_ro_da_qp_crsdet_rstb(val)               REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_crsdet_rstb, (val))
#define INTF_STS_0_VAL_ro_da_qp_rx_saosc_en(val)               REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_rx_saosc_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_crsdet_en(val)                 REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_crsdet_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_sigdet_cal_en(val)             REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_sigdet_cal_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_sigdet_en(val)                 REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_sigdet_en, (val))
#define INTF_STS_0_VAL_ro_da_qp_rx_p3_entry(val)               REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_rx_p3_entry, (val))
#define INTF_STS_0_VAL_ro_da_qp_rx_hz(val)                     REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_rx_hz, (val))
#define INTF_STS_0_VAL_ro_da_qp_rx_afe_pwd(val)                REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_rx_afe_pwd, (val))
#define INTF_STS_0_VAL_ro_da_qp_lfps_pwd(val)                  REG_FLD_VAL(INTF_STS_0_FLD_ro_da_qp_lfps_pwd, (val))

#define INTF_STS_1_VAL_ro_da_qp_pll_fbksel(val)                REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_fbksel, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_bpb(val)                   REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_bpb, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_bc(val)                    REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_bc, (val))
#define INTF_STS_1_VAL_ro_da_qp_xtal_ext_en(val)               REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_xtal_ext_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_tx_dem(val)                    REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_tx_dem, (val))
#define INTF_STS_1_VAL_ro_da_qp_tx_term_sel(val)               REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_tx_term_sel, (val))
#define INTF_STS_1_VAL_ro_da_qp_lfps_deglitch(val)             REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_lfps_deglitch, (val))
#define INTF_STS_1_VAL_ro_da_qp_tdc_en(val)                    REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_tdc_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_tdc_cal_offset(val)            REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_tdc_cal_offset, (val))
#define INTF_STS_1_VAL_ro_da_qp_tdc_cal_bw(val)                REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_tdc_cal_bw, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_tdc_txck_sel(val)          REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_tdc_txck_sel, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_icolp_en(val)              REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_icolp_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_ssc_en(val)                REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_ssc_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_sdm_ifm(val)               REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_sdm_ifm, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_sdm_chg(val)               REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_sdm_chg, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_rico_sel(val)              REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_rico_sel, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_postdiv_en(val)            REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_postdiv_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_phy_ck_en(val)             REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_phy_ck_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_pfd_offset_en(val)         REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_pfd_offset_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_pck_sel(val)               REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_pck_sel, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_icoiq_en(val)              REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_icoiq_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_en(val)                    REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_en, (val))
#define INTF_STS_1_VAL_ro_da_qp_pll_sdm_di_en(val)             REG_FLD_VAL(INTF_STS_1_FLD_ro_da_qp_pll_sdm_di_en, (val))
#define INTF_STS_1_VAL_ro_da_pcie_ckdet_en(val)                REG_FLD_VAL(INTF_STS_1_FLD_ro_da_pcie_ckdet_en, (val))

#define INTF_STS_2_VAL_ro_da_qp_pll_ir(val)                    REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_ir, (val))
#define INTF_STS_2_VAL_ro_da_qp_rx_dcleq(val)                  REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_rx_dcleq, (val))
#define INTF_STS_2_VAL_ro_da_qp_pll_br(val)                    REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_br, (val))
#define INTF_STS_2_VAL_ro_da_qp_pll_bpa(val)                   REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_bpa, (val))
#define INTF_STS_2_VAL_ro_da_qp_tx_fir_cn1(val)                REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_tx_fir_cn1, (val))
#define INTF_STS_2_VAL_ro_da_qp_pll_ssc_dir_dly(val)           REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_ssc_dir_dly, (val))
#define INTF_STS_2_VAL_ro_da_qp_pll_sdm_hren(val)              REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_sdm_hren, (val))
#define INTF_STS_2_VAL_ro_da_qp_pll_pfd_offset(val)            REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_pfd_offset, (val))
#define INTF_STS_2_VAL_ro_da_qp_pll_kband_prediv(val)          REG_FLD_VAL(INTF_STS_2_FLD_ro_da_qp_pll_kband_prediv, (val))

#define INTF_STS_3_VAL_ro_da_qp_tx_fir_c1(val)                 REG_FLD_VAL(INTF_STS_3_FLD_ro_da_qp_tx_fir_c1, (val))
#define INTF_STS_3_VAL_ro_da_qp_cdr_pr_fll_cor(val)            REG_FLD_VAL(INTF_STS_3_FLD_ro_da_qp_cdr_pr_fll_cor, (val))
#define INTF_STS_3_VAL_ro_da_qp_sigdet_cal_offset(val)         REG_FLD_VAL(INTF_STS_3_FLD_ro_da_qp_sigdet_cal_offset, (val))
#define INTF_STS_3_VAL_ro_da_qp_rx_imp_sel(val)                REG_FLD_VAL(INTF_STS_3_FLD_ro_da_qp_rx_imp_sel, (val))

#define INTF_STS_4_VAL_ro_da_qp_cdr_pr_pieye(val)              REG_FLD_VAL(INTF_STS_4_FLD_ro_da_qp_cdr_pr_pieye, (val))
#define INTF_STS_4_VAL_ro_da_qp_tx_fir_c0b(val)                REG_FLD_VAL(INTF_STS_4_FLD_ro_da_qp_tx_fir_c0b, (val))
#define INTF_STS_4_VAL_ro_da_qp_tx_fir_c2(val)                 REG_FLD_VAL(INTF_STS_4_FLD_ro_da_qp_tx_fir_c2, (val))

#define INTF_STS_5_VAL_ro_da_qp_cdr_pr_idac(val)               REG_FLD_VAL(INTF_STS_5_FLD_ro_da_qp_cdr_pr_idac, (val))

#define INTF_STS_6_VAL_ro_da_qp_pll_ssc_period(val)            REG_FLD_VAL(INTF_STS_6_FLD_ro_da_qp_pll_ssc_period, (val))
#define INTF_STS_6_VAL_ro_da_qp_pll_ssc_delta(val)             REG_FLD_VAL(INTF_STS_6_FLD_ro_da_qp_pll_ssc_delta, (val))

#define INTF_STS_7_VAL_ro_da_qp_tx_data(val)                   REG_FLD_VAL(INTF_STS_7_FLD_ro_da_qp_tx_data, (val))

#define INTF_STS_8_VAL_ro_da_qp_pll_sdm_pcw_31_0(val)          REG_FLD_VAL(INTF_STS_8_FLD_ro_da_qp_pll_sdm_pcw_31_0, (val))

#define INTF_STS_9_VAL_ro_ad_qp_tdc_c_intf(val)                REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_tdc_c_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_pll_vcocal_state_intf(val)     REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_pll_vcocal_state_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_tdc_leadlag_intf(val)          REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_tdc_leadlag_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_pll_ssc_en_intf(val)           REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_pll_ssc_en_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_pll_ssc_dir_intf(val)          REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_pll_ssc_dir_intf, (val))
#define INTF_STS_9_VAL_ro_ad_pcie_ckdet_out_intf(val)          REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_pcie_ckdet_out_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_tx_cmdet_intf(val)             REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_tx_cmdet_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_termcal_dir_intf(val)          REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_termcal_dir_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_cdr_pr_vco_overspeed_intf(val) REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_cdr_pr_vco_overspeed_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_cdr_pr_fll_dig_rstb_intf(val)  REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_cdr_pr_fll_dig_rstb_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_cdr_lpf_oneshot_trig_intf(val) REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_cdr_lpf_oneshot_trig_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_cdr_pi_pderr_intf(val)         REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_cdr_pi_pderr_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_crsdet_lthout_intf(val)        REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_crsdet_lthout_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_crsdet_out_intf(val)           REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_crsdet_out_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_rx_lfps_intf(val)              REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_rx_lfps_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_sigdet_cal_out_intf(val)       REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_sigdet_cal_out_intf, (val))
#define INTF_STS_9_VAL_ro_ad_qp_sigdet_out_intf(val)           REG_FLD_VAL(INTF_STS_9_FLD_ro_ad_qp_sigdet_out_intf, (val))

#define INTF_STS_10_VAL_ro_ad_qp_tdc_d_intf(val)               REG_FLD_VAL(INTF_STS_10_FLD_ro_ad_qp_tdc_d_intf, (val))

#define INTF_STS_11_VAL_ro_ad_qp_cdr_lpf_snapshotvalue_intf(val) REG_FLD_VAL(INTF_STS_11_FLD_ro_ad_qp_cdr_lpf_snapshotvalue_intf, (val))

#define INTF_STS_12_VAL_ro_ad_qp_cdr_pr_adc_intf(val)          REG_FLD_VAL(INTF_STS_12_FLD_ro_ad_qp_cdr_pr_adc_intf, (val))

#define PLL_CTRL_0_VAL_rg_da_pll_en_dly_cnt(val)               REG_FLD_VAL(PLL_CTRL_0_FLD_rg_da_pll_en_dly_cnt, (val))
#define PLL_CTRL_0_VAL_rg_da_pll_en_mux(val)                   REG_FLD_VAL(PLL_CTRL_0_FLD_rg_da_pll_en_mux, (val))
#define PLL_CTRL_0_VAL_rg_da_pll_en(val)                       REG_FLD_VAL(PLL_CTRL_0_FLD_rg_da_pll_en, (val))
#define PLL_CTRL_0_VAL_rg_force_da_pll_en(val)                 REG_FLD_VAL(PLL_CTRL_0_FLD_rg_force_da_pll_en, (val))
#define PLL_CTRL_0_VAL_rg_rx_pwd(val)                          REG_FLD_VAL(PLL_CTRL_0_FLD_rg_rx_pwd, (val))
#define PLL_CTRL_0_VAL_rg_rx_pwd_mux(val)                      REG_FLD_VAL(PLL_CTRL_0_FLD_rg_rx_pwd_mux, (val))
#define PLL_CTRL_0_VAL_rg_tx_disable(val)                      REG_FLD_VAL(PLL_CTRL_0_FLD_rg_tx_disable, (val))
#define PLL_CTRL_0_VAL_rg_tx_disable_mux(val)                  REG_FLD_VAL(PLL_CTRL_0_FLD_rg_tx_disable_mux, (val))
#define PLL_CTRL_0_VAL_rg_phya_pwd(val)                        REG_FLD_VAL(PLL_CTRL_0_FLD_rg_phya_pwd, (val))
#define PLL_CTRL_0_VAL_rg_phya_pwd_mux(val)                    REG_FLD_VAL(PLL_CTRL_0_FLD_rg_phya_pwd_mux, (val))
#define PLL_CTRL_0_VAL_rg_phya_auto_init(val)                  REG_FLD_VAL(PLL_CTRL_0_FLD_rg_phya_auto_init, (val))

#define PLL_CTRL_1_VAL_rg_qp_pll_ssc_en(val)                   REG_FLD_VAL(PLL_CTRL_1_FLD_rg_qp_pll_ssc_en, (val))
#define PLL_CTRL_1_VAL_rg_pll_autok_vco_to_pll_bias_lpf_en_dly(val) REG_FLD_VAL(PLL_CTRL_1_FLD_rg_pll_autok_vco_to_pll_bias_lpf_en_dly, (val))
#define PLL_CTRL_1_VAL_rg_syspll_pwd_to_syspll_ready_dly(val)  REG_FLD_VAL(PLL_CTRL_1_FLD_rg_syspll_pwd_to_syspll_ready_dly, (val))
#define PLL_CTRL_1_VAL_rg_bias_pwd_to_bg_lpf_en_dly(val)       REG_FLD_VAL(PLL_CTRL_1_FLD_rg_bias_pwd_to_bg_lpf_en_dly, (val))
#define PLL_CTRL_1_VAL_rg_lpf_en_to_ssc_dly_cnt(val)           REG_FLD_VAL(PLL_CTRL_1_FLD_rg_lpf_en_to_ssc_dly_cnt, (val))

#define PLL_CTRL_2_VAL_rg_da_qp_pll_sdm_ifm_intf(val)          REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_sdm_ifm_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_rico_sel_intf(val)         REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_rico_sel_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_postdiv_en_intf(val)       REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_postdiv_en_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_phy_ck_en_intf(val)        REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_phy_ck_en_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_pfd_offset_en_intf(val)    REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_en_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_pfd_offset_intf(val)       REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_pfd_offset_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_pck_sel_intf(val)          REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_pck_sel_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_kband_prediv_intf(val)     REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_kband_prediv_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_ir_intf(val)               REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_ir_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_icoiq_en_intf(val)         REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_icoiq_en_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_fbksel_intf(val)           REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_fbksel_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_br_intf(val)               REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_br_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_bpb_intf(val)              REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_bpb_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_bpa_intf(val)              REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_bpa_intf, (val))
#define PLL_CTRL_2_VAL_rg_da_qp_pll_bc_intf(val)               REG_FLD_VAL(PLL_CTRL_2_FLD_rg_da_qp_pll_bc_intf, (val))

#define PLL_CTRL_3_VAL_rg_da_qp_pll_ssc_period_intf(val)       REG_FLD_VAL(PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_period_intf, (val))
#define PLL_CTRL_3_VAL_rg_da_qp_pll_ssc_delta_intf(val)        REG_FLD_VAL(PLL_CTRL_3_FLD_rg_da_qp_pll_ssc_delta_intf, (val))

#define PLL_CTRL_4_VAL_rg_da_qp_pll_sdm_hren_intf(val)         REG_FLD_VAL(PLL_CTRL_4_FLD_rg_da_qp_pll_sdm_hren_intf, (val))
#define PLL_CTRL_4_VAL_rg_da_qp_pll_icolp_en_intf(val)         REG_FLD_VAL(PLL_CTRL_4_FLD_rg_da_qp_pll_icolp_en_intf, (val))
#define PLL_CTRL_4_VAL_rg_da_qp_pll_ssc_dir_dly_intf(val)      REG_FLD_VAL(PLL_CTRL_4_FLD_rg_da_qp_pll_ssc_dir_dly_intf, (val))

#define PLL_CK_CTRL_0_VAL_rg_da_qp_pll_tdc_txck_sel_intf(val)  REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_qp_pll_tdc_txck_sel_intf, (val))
#define PLL_CK_CTRL_0_VAL_rg_da_qp_pll_sdm_di_en_intf(val)     REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_qp_pll_sdm_di_en_intf, (val))
#define PLL_CK_CTRL_0_VAL_rg_da_pcie_ckdet_en_intf(val)        REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_pcie_ckdet_en_intf, (val))
#define PLL_CK_CTRL_0_VAL_rg_da_qp_xtal_rx_en_intf(val)        REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_rx_en_intf, (val))
#define PLL_CK_CTRL_0_VAL_rg_da_pcie_clktx_en_intf(val)        REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_pcie_clktx_en_intf, (val))
#define PLL_CK_CTRL_0_VAL_rg_da_pcie_clkrx_en_intf(val)        REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_pcie_clkrx_en_intf, (val))
#define PLL_CK_CTRL_0_VAL_rg_da_qp_xtal_ext_en_intf(val)       REG_FLD_VAL(PLL_CK_CTRL_0_FLD_rg_da_qp_xtal_ext_en_intf, (val))

#define PLL_CK_CTRL_1_VAL_rg_pll_stable_source_sel(val)        REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_stable_source_sel, (val))
#define PLL_CK_CTRL_1_VAL_rg_pll_force_unstable(val)           REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_force_unstable, (val))
#define PLL_CK_CTRL_1_VAL_rg_pll_force_stable(val)             REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_force_stable, (val))
#define PLL_CK_CTRL_1_VAL_rg_pll_cplt_force_off(val)           REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_off, (val))
#define PLL_CK_CTRL_1_VAL_rg_pll_cplt_force_on(val)            REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_cplt_force_on, (val))
#define PLL_CK_CTRL_1_VAL_rg_pll_cplt_stabel_cnt(val)          REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_cplt_stabel_cnt, (val))
#define PLL_CK_CTRL_1_VAL_rg_pll_stabel_cnt(val)               REG_FLD_VAL(PLL_CK_CTRL_1_FLD_rg_pll_stabel_cnt, (val))

#define PLL_CK_CTRL_2_VAL_rg_pcie_mode_pll_auto_off_en(val)    REG_FLD_VAL(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_off_en, (val))
#define PLL_CK_CTRL_2_VAL_rg_pcie_mode_pll_auto_on_en(val)     REG_FLD_VAL(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_on_en, (val))
#define PLL_CK_CTRL_2_VAL_rg_pcie_mode_pll_auto_en(val)        REG_FLD_VAL(PLL_CK_CTRL_2_FLD_rg_pcie_mode_pll_auto_en, (val))

#define SYS_CTRL_0_VAL_rg_freq_meter_rtl_modified(val)         REG_FLD_VAL(SYS_CTRL_0_FLD_rg_freq_meter_rtl_modified, (val))
#define SYS_CTRL_0_VAL_rg_qp_gdump_sel(val)                    REG_FLD_VAL(SYS_CTRL_0_FLD_rg_qp_gdump_sel, (val))
#define SYS_CTRL_0_VAL_rg_qp_pma_top_int_en(val)               REG_FLD_VAL(SYS_CTRL_0_FLD_rg_qp_pma_top_int_en, (val))

#define SYS_CTRL_1_VAL_rg_force_rg_vusb10_on_sel(val)          REG_FLD_VAL(SYS_CTRL_1_FLD_rg_force_rg_vusb10_on_sel, (val))
#define SYS_CTRL_1_VAL_rg_tx_short_fifo_disb(val)              REG_FLD_VAL(SYS_CTRL_1_FLD_rg_tx_short_fifo_disb, (val))
#define SYS_CTRL_1_VAL_rg_tx_short_fifo_w_thresold(val)        REG_FLD_VAL(SYS_CTRL_1_FLD_rg_tx_short_fifo_w_thresold, (val))
#define SYS_CTRL_1_VAL_rg_tx_short_fifo_r_thresold(val)        REG_FLD_VAL(SYS_CTRL_1_FLD_rg_tx_short_fifo_r_thresold, (val))

#define QP_SYS_0_VAL_ro_tx_short_fifo_empty(val)               REG_FLD_VAL(QP_SYS_0_FLD_ro_tx_short_fifo_empty, (val))
#define QP_SYS_0_VAL_ro_tx_short_fifo_full(val)                REG_FLD_VAL(QP_SYS_0_FLD_ro_tx_short_fifo_full, (val))

#define FT_CTRL_0_VAL_rg_ft_freq_meter_relck_num_0(val)        REG_FLD_VAL(FT_CTRL_0_FLD_rg_ft_freq_meter_relck_num_0, (val))
#define FT_CTRL_0_VAL_rg_ft_freq_meter_clear_unlck_cnt_0(val)  REG_FLD_VAL(FT_CTRL_0_FLD_rg_ft_freq_meter_clear_unlck_cnt_0, (val))
#define FT_CTRL_0_VAL_rg_ft_freq_meter_freq_det_en_0(val)      REG_FLD_VAL(FT_CTRL_0_FLD_rg_ft_freq_meter_freq_det_en_0, (val))

#define FT_CTRL_1_VAL_rg_ft_freq_meter_relck_num_1(val)        REG_FLD_VAL(FT_CTRL_1_FLD_rg_ft_freq_meter_relck_num_1, (val))
#define FT_CTRL_1_VAL_rg_ft_freq_meter_clear_unlck_cnt_1(val)  REG_FLD_VAL(FT_CTRL_1_FLD_rg_ft_freq_meter_clear_unlck_cnt_1, (val))
#define FT_CTRL_1_VAL_rg_ft_freq_meter_freq_det_en_1(val)      REG_FLD_VAL(FT_CTRL_1_FLD_rg_ft_freq_meter_freq_det_en_1, (val))

#define FT_CTRL_2_VAL_rg_ft_freq_meter_relck_num_2(val)        REG_FLD_VAL(FT_CTRL_2_FLD_rg_ft_freq_meter_relck_num_2, (val))
#define FT_CTRL_2_VAL_rg_ft_freq_meter_clear_unlck_cnt_2(val)  REG_FLD_VAL(FT_CTRL_2_FLD_rg_ft_freq_meter_clear_unlck_cnt_2, (val))
#define FT_CTRL_2_VAL_rg_ft_freq_meter_freq_det_en_2(val)      REG_FLD_VAL(FT_CTRL_2_FLD_rg_ft_freq_meter_freq_det_en_2, (val))

#define FT_CTRL_3_VAL_rg_ft_freq_meter_relck_num_3(val)        REG_FLD_VAL(FT_CTRL_3_FLD_rg_ft_freq_meter_relck_num_3, (val))
#define FT_CTRL_3_VAL_rg_ft_freq_meter_clear_unlck_cnt_3(val)  REG_FLD_VAL(FT_CTRL_3_FLD_rg_ft_freq_meter_clear_unlck_cnt_3, (val))
#define FT_CTRL_3_VAL_rg_ft_freq_meter_freq_det_en_3(val)      REG_FLD_VAL(FT_CTRL_3_FLD_rg_ft_freq_meter_freq_det_en_3, (val))

#define FT_CTRL_4_VAL_rg_ft_freq_meter_relck_num_4(val)        REG_FLD_VAL(FT_CTRL_4_FLD_rg_ft_freq_meter_relck_num_4, (val))
#define FT_CTRL_4_VAL_rg_ft_freq_meter_clear_unlck_cnt_4(val)  REG_FLD_VAL(FT_CTRL_4_FLD_rg_ft_freq_meter_clear_unlck_cnt_4, (val))
#define FT_CTRL_4_VAL_rg_ft_freq_meter_freq_det_en_4(val)      REG_FLD_VAL(FT_CTRL_4_FLD_rg_ft_freq_meter_freq_det_en_4, (val))

#define FT_CTRL_5_VAL_rg_ft_freq_meter_relck_num_5(val)        REG_FLD_VAL(FT_CTRL_5_FLD_rg_ft_freq_meter_relck_num_5, (val))
#define FT_CTRL_5_VAL_rg_ft_freq_meter_clear_unlck_cnt_5(val)  REG_FLD_VAL(FT_CTRL_5_FLD_rg_ft_freq_meter_clear_unlck_cnt_5, (val))
#define FT_CTRL_5_VAL_rg_ft_freq_meter_freq_det_en_5(val)      REG_FLD_VAL(FT_CTRL_5_FLD_rg_ft_freq_meter_freq_det_en_5, (val))

#define FT_CTRL_6_VAL_rg_ft_freq_meter_relck_num_6(val)        REG_FLD_VAL(FT_CTRL_6_FLD_rg_ft_freq_meter_relck_num_6, (val))
#define FT_CTRL_6_VAL_rg_ft_freq_meter_clear_unlck_cnt_6(val)  REG_FLD_VAL(FT_CTRL_6_FLD_rg_ft_freq_meter_clear_unlck_cnt_6, (val))
#define FT_CTRL_6_VAL_rg_ft_freq_meter_freq_det_en_6(val)      REG_FLD_VAL(FT_CTRL_6_FLD_rg_ft_freq_meter_freq_det_en_6, (val))

#define FT_CTRL_7_VAL_rg_ft_freq_meter_relck_num_7(val)        REG_FLD_VAL(FT_CTRL_7_FLD_rg_ft_freq_meter_relck_num_7, (val))
#define FT_CTRL_7_VAL_rg_ft_freq_meter_clear_unlck_cnt_7(val)  REG_FLD_VAL(FT_CTRL_7_FLD_rg_ft_freq_meter_clear_unlck_cnt_7, (val))
#define FT_CTRL_7_VAL_rg_ft_freq_meter_freq_det_en_7(val)      REG_FLD_VAL(FT_CTRL_7_FLD_rg_ft_freq_meter_freq_det_en_7, (val))

#define FT_CTRL_8_VAL_rg_ft_freq_meter_relck_num_8(val)        REG_FLD_VAL(FT_CTRL_8_FLD_rg_ft_freq_meter_relck_num_8, (val))
#define FT_CTRL_8_VAL_rg_ft_freq_meter_clear_unlck_cnt_8(val)  REG_FLD_VAL(FT_CTRL_8_FLD_rg_ft_freq_meter_clear_unlck_cnt_8, (val))
#define FT_CTRL_8_VAL_rg_ft_freq_meter_freq_det_en_8(val)      REG_FLD_VAL(FT_CTRL_8_FLD_rg_ft_freq_meter_freq_det_en_8, (val))

#define FT_CTRL_9_VAL_rg_ft_freq_meter_chk_cycle_0(val)        REG_FLD_VAL(FT_CTRL_9_FLD_rg_ft_freq_meter_chk_cycle_0, (val))

#define FT_CTRL_10_VAL_rg_ft_freq_meter_chk_cycle_1(val)       REG_FLD_VAL(FT_CTRL_10_FLD_rg_ft_freq_meter_chk_cycle_1, (val))

#define FT_CTRL_11_VAL_rg_ft_freq_meter_chk_cycle_2(val)       REG_FLD_VAL(FT_CTRL_11_FLD_rg_ft_freq_meter_chk_cycle_2, (val))

#define FT_CTRL_12_VAL_rg_ft_freq_meter_chk_cycle_3(val)       REG_FLD_VAL(FT_CTRL_12_FLD_rg_ft_freq_meter_chk_cycle_3, (val))

#define FT_CTRL_13_VAL_rg_ft_freq_meter_chk_cycle_4(val)       REG_FLD_VAL(FT_CTRL_13_FLD_rg_ft_freq_meter_chk_cycle_4, (val))

#define FT_CTRL_14_VAL_rg_ft_freq_meter_chk_cycle_5(val)       REG_FLD_VAL(FT_CTRL_14_FLD_rg_ft_freq_meter_chk_cycle_5, (val))

#define FT_CTRL_15_VAL_rg_ft_freq_meter_chk_cycle_6(val)       REG_FLD_VAL(FT_CTRL_15_FLD_rg_ft_freq_meter_chk_cycle_6, (val))

#define FT_CTRL_16_VAL_rg_ft_freq_meter_chk_cycle_7(val)       REG_FLD_VAL(FT_CTRL_16_FLD_rg_ft_freq_meter_chk_cycle_7, (val))

#define FT_CTRL_17_VAL_rg_ft_freq_meter_chk_cycle_8(val)       REG_FLD_VAL(FT_CTRL_17_FLD_rg_ft_freq_meter_chk_cycle_8, (val))

#define FT_CTRL_18_VAL_rg_ft_freq_meter_golden_cycle_0(val)    REG_FLD_VAL(FT_CTRL_18_FLD_rg_ft_freq_meter_golden_cycle_0, (val))

#define FT_CTRL_19_VAL_rg_ft_freq_meter_golden_cycle_1(val)    REG_FLD_VAL(FT_CTRL_19_FLD_rg_ft_freq_meter_golden_cycle_1, (val))

#define FT_CTRL_20_VAL_rg_ft_freq_meter_golden_cycle_2(val)    REG_FLD_VAL(FT_CTRL_20_FLD_rg_ft_freq_meter_golden_cycle_2, (val))

#define FT_CTRL_21_VAL_rg_ft_freq_meter_golden_cycle_3(val)    REG_FLD_VAL(FT_CTRL_21_FLD_rg_ft_freq_meter_golden_cycle_3, (val))

#define FT_CTRL_22_VAL_rg_ft_freq_meter_golden_cycle_4(val)    REG_FLD_VAL(FT_CTRL_22_FLD_rg_ft_freq_meter_golden_cycle_4, (val))

#define FT_CTRL_23_VAL_rg_ft_freq_meter_golden_cycle_5(val)    REG_FLD_VAL(FT_CTRL_23_FLD_rg_ft_freq_meter_golden_cycle_5, (val))

#define FT_CTRL_24_VAL_rg_ft_freq_meter_golden_cycle_6(val)    REG_FLD_VAL(FT_CTRL_24_FLD_rg_ft_freq_meter_golden_cycle_6, (val))

#define FT_CTRL_25_VAL_rg_ft_freq_meter_golden_cycle_7(val)    REG_FLD_VAL(FT_CTRL_25_FLD_rg_ft_freq_meter_golden_cycle_7, (val))

#define FT_CTRL_26_VAL_rg_ft_freq_meter_golden_cycle_8(val)    REG_FLD_VAL(FT_CTRL_26_FLD_rg_ft_freq_meter_golden_cycle_8, (val))

#define FT_CTRL_27_VAL_rg_ft_freq_meter_tolerate_cycle_0(val)  REG_FLD_VAL(FT_CTRL_27_FLD_rg_ft_freq_meter_tolerate_cycle_0, (val))

#define FT_CTRL_28_VAL_rg_ft_freq_meter_tolerate_cycle_1(val)  REG_FLD_VAL(FT_CTRL_28_FLD_rg_ft_freq_meter_tolerate_cycle_1, (val))

#define FT_CTRL_29_VAL_rg_ft_freq_meter_tolerate_cycle_2(val)  REG_FLD_VAL(FT_CTRL_29_FLD_rg_ft_freq_meter_tolerate_cycle_2, (val))

#define FT_CTRL_30_VAL_rg_ft_freq_meter_tolerate_cycle_3(val)  REG_FLD_VAL(FT_CTRL_30_FLD_rg_ft_freq_meter_tolerate_cycle_3, (val))

#define FT_CTRL_31_VAL_rg_ft_freq_meter_tolerate_cycle_4(val)  REG_FLD_VAL(FT_CTRL_31_FLD_rg_ft_freq_meter_tolerate_cycle_4, (val))

#define FT_CTRL_32_VAL_rg_ft_freq_meter_tolerate_cycle_5(val)  REG_FLD_VAL(FT_CTRL_32_FLD_rg_ft_freq_meter_tolerate_cycle_5, (val))

#define FT_CTRL_33_VAL_rg_ft_freq_meter_tolerate_cycle_6(val)  REG_FLD_VAL(FT_CTRL_33_FLD_rg_ft_freq_meter_tolerate_cycle_6, (val))

#define FT_CTRL_34_VAL_rg_ft_freq_meter_tolerate_cycle_7(val)  REG_FLD_VAL(FT_CTRL_34_FLD_rg_ft_freq_meter_tolerate_cycle_7, (val))

#define FT_CTRL_35_VAL_rg_ft_freq_meter_tolerate_cycle_8(val)  REG_FLD_VAL(FT_CTRL_35_FLD_rg_ft_freq_meter_tolerate_cycle_8, (val))

#define FT_STATUS_0_VAL_ro_ft_freq_meter_unlck_cnt_0(val)      REG_FLD_VAL(FT_STATUS_0_FLD_ro_ft_freq_meter_unlck_cnt_0, (val))
#define FT_STATUS_0_VAL_ro_ft_freq_meter_freq_state_0(val)     REG_FLD_VAL(FT_STATUS_0_FLD_ro_ft_freq_meter_freq_state_0, (val))
#define FT_STATUS_0_VAL_ro_ft_freq_meter_freq_lock_0(val)      REG_FLD_VAL(FT_STATUS_0_FLD_ro_ft_freq_meter_freq_lock_0, (val))

#define FT_STATUS_1_VAL_ro_ft_freq_meter_unlck_cnt_1(val)      REG_FLD_VAL(FT_STATUS_1_FLD_ro_ft_freq_meter_unlck_cnt_1, (val))
#define FT_STATUS_1_VAL_ro_ft_freq_meter_freq_state_1(val)     REG_FLD_VAL(FT_STATUS_1_FLD_ro_ft_freq_meter_freq_state_1, (val))
#define FT_STATUS_1_VAL_ro_ft_freq_meter_freq_lock_1(val)      REG_FLD_VAL(FT_STATUS_1_FLD_ro_ft_freq_meter_freq_lock_1, (val))

#define FT_STATUS_2_VAL_ro_ft_freq_meter_unlck_cnt_2(val)      REG_FLD_VAL(FT_STATUS_2_FLD_ro_ft_freq_meter_unlck_cnt_2, (val))
#define FT_STATUS_2_VAL_ro_ft_freq_meter_freq_state_2(val)     REG_FLD_VAL(FT_STATUS_2_FLD_ro_ft_freq_meter_freq_state_2, (val))
#define FT_STATUS_2_VAL_ro_ft_freq_meter_freq_lock_2(val)      REG_FLD_VAL(FT_STATUS_2_FLD_ro_ft_freq_meter_freq_lock_2, (val))

#define FT_STATUS_3_VAL_ro_ft_freq_meter_unlck_cnt_3(val)      REG_FLD_VAL(FT_STATUS_3_FLD_ro_ft_freq_meter_unlck_cnt_3, (val))
#define FT_STATUS_3_VAL_ro_ft_freq_meter_freq_state_3(val)     REG_FLD_VAL(FT_STATUS_3_FLD_ro_ft_freq_meter_freq_state_3, (val))
#define FT_STATUS_3_VAL_ro_ft_freq_meter_freq_lock_3(val)      REG_FLD_VAL(FT_STATUS_3_FLD_ro_ft_freq_meter_freq_lock_3, (val))

#define FT_STATUS_4_VAL_ro_ft_freq_meter_unlck_cnt_4(val)      REG_FLD_VAL(FT_STATUS_4_FLD_ro_ft_freq_meter_unlck_cnt_4, (val))
#define FT_STATUS_4_VAL_ro_ft_freq_meter_freq_state_4(val)     REG_FLD_VAL(FT_STATUS_4_FLD_ro_ft_freq_meter_freq_state_4, (val))
#define FT_STATUS_4_VAL_ro_ft_freq_meter_freq_lock_4(val)      REG_FLD_VAL(FT_STATUS_4_FLD_ro_ft_freq_meter_freq_lock_4, (val))

#define FT_STATUS_5_VAL_ro_ft_freq_meter_unlck_cnt_5(val)      REG_FLD_VAL(FT_STATUS_5_FLD_ro_ft_freq_meter_unlck_cnt_5, (val))
#define FT_STATUS_5_VAL_ro_ft_freq_meter_freq_state_5(val)     REG_FLD_VAL(FT_STATUS_5_FLD_ro_ft_freq_meter_freq_state_5, (val))
#define FT_STATUS_5_VAL_ro_ft_freq_meter_freq_lock_5(val)      REG_FLD_VAL(FT_STATUS_5_FLD_ro_ft_freq_meter_freq_lock_5, (val))

#define FT_STATUS_6_VAL_ro_ft_freq_meter_unlck_cnt_6(val)      REG_FLD_VAL(FT_STATUS_6_FLD_ro_ft_freq_meter_unlck_cnt_6, (val))
#define FT_STATUS_6_VAL_ro_ft_freq_meter_freq_state_6(val)     REG_FLD_VAL(FT_STATUS_6_FLD_ro_ft_freq_meter_freq_state_6, (val))
#define FT_STATUS_6_VAL_ro_ft_freq_meter_freq_lock_6(val)      REG_FLD_VAL(FT_STATUS_6_FLD_ro_ft_freq_meter_freq_lock_6, (val))

#define FT_STATUS_7_VAL_ro_ft_freq_meter_unlck_cnt_7(val)      REG_FLD_VAL(FT_STATUS_7_FLD_ro_ft_freq_meter_unlck_cnt_7, (val))
#define FT_STATUS_7_VAL_ro_ft_freq_meter_freq_state_7(val)     REG_FLD_VAL(FT_STATUS_7_FLD_ro_ft_freq_meter_freq_state_7, (val))
#define FT_STATUS_7_VAL_ro_ft_freq_meter_freq_lock_7(val)      REG_FLD_VAL(FT_STATUS_7_FLD_ro_ft_freq_meter_freq_lock_7, (val))

#define FT_STATUS_8_VAL_ro_ft_freq_meter_unlck_cnt_8(val)      REG_FLD_VAL(FT_STATUS_8_FLD_ro_ft_freq_meter_unlck_cnt_8, (val))
#define FT_STATUS_8_VAL_ro_ft_freq_meter_freq_state_8(val)     REG_FLD_VAL(FT_STATUS_8_FLD_ro_ft_freq_meter_freq_state_8, (val))
#define FT_STATUS_8_VAL_ro_ft_freq_meter_freq_lock_8(val)      REG_FLD_VAL(FT_STATUS_8_FLD_ro_ft_freq_meter_freq_lock_8, (val))

#define RX_SYS_CTRL_0_VAL_rg_qp_speed_sel_1(val)               REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_speed_sel_1, (val))
#define RX_SYS_CTRL_0_VAL_rg_qp_speed_sel(val)                 REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_speed_sel, (val))
#define RX_SYS_CTRL_0_VAL_rg_qp_amp(val)                       REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_amp, (val))
#define RX_SYS_CTRL_0_VAL_rg_qp_prbs_sel(val)                  REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_prbs_sel, (val))
#define RX_SYS_CTRL_0_VAL_rg_qp_ad_sleep_en(val)               REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_ad_sleep_en, (val))
#define RX_SYS_CTRL_0_VAL_rg_qp_roc_ck_en(val)                 REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_roc_ck_en, (val))
#define RX_SYS_CTRL_0_VAL_rg_qp_rx_hz(val)                     REG_FLD_VAL(RX_SYS_CTRL_0_FLD_rg_qp_rx_hz, (val))

#define FLL_CTRL_0_VAL_rg_qp_ipath_idac(val)                   REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_ipath_idac, (val))
#define FLL_CTRL_0_VAL_rg_qp_load_en(val)                      REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_load_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_ro_fll_4_latch_en(val)            REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_ro_fll_4_latch_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_ro_fll_3_latch_en(val)            REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_ro_fll_3_latch_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_ro_fll_2_latch_en(val)            REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_ro_fll_2_latch_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_ro_fll_1_latch_en(val)            REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_ro_fll_1_latch_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_debug_sel(val)                    REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_debug_sel, (val))
#define FLL_CTRL_0_VAL_rg_qp_fll_repli(val)                    REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_fll_repli, (val))
#define FLL_CTRL_0_VAL_rg_qp_fll_cor(val)                      REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_fll_cor, (val))
#define FLL_CTRL_0_VAL_rg_qp_fll_dig_rst_force_en(val)         REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_fll_dig_rst_force_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_fll_dig_rstb_force(val)           REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_fll_dig_rstb_force, (val))
#define FLL_CTRL_0_VAL_rg_qp_icdr_kband_done_force_en(val)     REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force_en, (val))
#define FLL_CTRL_0_VAL_rg_qp_icdr_kband_done_force(val)        REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_icdr_kband_done_force, (val))
#define FLL_CTRL_0_VAL_rg_qp_fll_dig_pro(val)                  REG_FLD_VAL(FLL_CTRL_0_FLD_rg_qp_fll_dig_pro, (val))

#define FLL_CTRL_1_VAL_rg_qp_fll_idac_min(val)                 REG_FLD_VAL(FLL_CTRL_1_FLD_rg_qp_fll_idac_min, (val))
#define FLL_CTRL_1_VAL_rg_qp_fll_idac_max(val)                 REG_FLD_VAL(FLL_CTRL_1_FLD_rg_qp_fll_idac_max, (val))

#define FLL_CTRL_2_VAL_rg_qp_fbkdiv(val)                       REG_FLD_VAL(FLL_CTRL_2_FLD_rg_qp_fbkdiv, (val))
#define FLL_CTRL_2_VAL_rg_qp_kband_prediv(val)                 REG_FLD_VAL(FLL_CTRL_2_FLD_rg_qp_kband_prediv, (val))
#define FLL_CTRL_2_VAL_rg_qp_ck_rate(val)                      REG_FLD_VAL(FLL_CTRL_2_FLD_rg_qp_ck_rate, (val))
#define FLL_CTRL_2_VAL_rg_qp_symbol_wd(val)                    REG_FLD_VAL(FLL_CTRL_2_FLD_rg_qp_symbol_wd, (val))
#define FLL_CTRL_2_VAL_rg_qp_settle_time_sel(val)              REG_FLD_VAL(FLL_CTRL_2_FLD_rg_qp_settle_time_sel, (val))

#define FLL_CTRL_3_VAL_rg_qp_fll_idac_repli(val)               REG_FLD_VAL(FLL_CTRL_3_FLD_rg_qp_fll_idac_repli, (val))

#define RX_DLY_0_VAL_rg_qp_rx_saosc_en_h_dly(val)              REG_FLD_VAL(RX_DLY_0_FLD_rg_qp_rx_saosc_en_h_dly, (val))
#define RX_DLY_0_VAL_rg_qp_rx_pi_cal_en_h_dly(val)             REG_FLD_VAL(RX_DLY_0_FLD_rg_qp_rx_pi_cal_en_h_dly, (val))

#define RX_DLY_1_VAL_rg_qp_sig_det_l_thres(val)                REG_FLD_VAL(RX_DLY_1_FLD_rg_qp_sig_det_l_thres, (val))
#define RX_DLY_1_VAL_rg_qp_sig_det_h_thres(val)                REG_FLD_VAL(RX_DLY_1_FLD_rg_qp_sig_det_h_thres, (val))

#define RX_AFIFO_VAL_rg_qp_pma_rx_fifo_rd_thr(val)             REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_thr, (val))
#define RX_AFIFO_VAL_rg_qp_pma_rx_fifo_wr_thr(val)             REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_thr, (val))
#define RX_AFIFO_VAL_rg_qp_pma_rx_fifo_rd_clr(val)             REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_clr, (val))
#define RX_AFIFO_VAL_rg_qp_pma_rx_fifo_wr_clr(val)             REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_wr_clr, (val))
#define RX_AFIFO_VAL_rg_qp_pma_rx_fifo_rd_dly(val)             REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_pma_rx_fifo_rd_dly, (val))
#define RX_AFIFO_VAL_rg_qp_rx_data_inv(val)                    REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_rx_data_inv, (val))
#define RX_AFIFO_VAL_rg_qp_rx_asic_uses_ff(val)                REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_rx_asic_uses_ff, (val))
#define RX_AFIFO_VAL_rg_qp_rx_afifo_adj(val)                   REG_FLD_VAL(RX_AFIFO_FLD_rg_qp_rx_afifo_adj, (val))

#define IMP_CTRL_0_VAL_rg_qp_impcal_calcyc(val)                REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_impcal_calcyc, (val))
#define IMP_CTRL_0_VAL_rg_qp_impcal_stbcyc(val)                REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_impcal_stbcyc, (val))
#define IMP_CTRL_0_VAL_rg_qp_impcal_cycnt(val)                 REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_impcal_cycnt, (val))
#define IMP_CTRL_0_VAL_rg_qp_force_impsel(val)                 REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_force_impsel, (val))
#define IMP_CTRL_0_VAL_rg_qp_force_impcal_en(val)              REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_force_impcal_en, (val))
#define IMP_CTRL_0_VAL_rg_qp_impcal_en(val)                    REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_impcal_en, (val))
#define IMP_CTRL_0_VAL_rg_qp_impcal_out(val)                   REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_impcal_out, (val))
#define IMP_CTRL_0_VAL_rg_qp_power_on(val)                     REG_FLD_VAL(IMP_CTRL_0_FLD_rg_qp_power_on, (val))

#define IMP_CTRL_1_VAL_rg_qp_prb_out(val)                      REG_FLD_VAL(IMP_CTRL_1_FLD_rg_qp_prb_out, (val))
#define IMP_CTRL_1_VAL_rg_qp_impcal_cal(val)                   REG_FLD_VAL(IMP_CTRL_1_FLD_rg_qp_impcal_cal, (val))
#define IMP_CTRL_1_VAL_rg_qp_rx_imp_sel(val)                   REG_FLD_VAL(IMP_CTRL_1_FLD_rg_qp_rx_imp_sel, (val))
#define IMP_CTRL_1_VAL_rg_qp_imp_bias(val)                     REG_FLD_VAL(IMP_CTRL_1_FLD_rg_qp_imp_bias, (val))
#define IMP_CTRL_1_VAL_rg_qp_fix_impsel(val)                   REG_FLD_VAL(IMP_CTRL_1_FLD_rg_qp_fix_impsel, (val))

#define RX_CTRL_UNUSE_0_VAL_rg_qp_rosc_fine(val)               REG_FLD_VAL(RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_fine, (val))
#define RX_CTRL_UNUSE_0_VAL_rg_qp_rosc_coarse_sel(val)         REG_FLD_VAL(RX_CTRL_UNUSE_0_FLD_rg_qp_rosc_coarse_sel, (val))
#define RX_CTRL_UNUSE_0_VAL_rg_qp_cdr_vcocal_fail(val)         REG_FLD_VAL(RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_fail, (val))
#define RX_CTRL_UNUSE_0_VAL_rg_qp_cdr_vcocal_state(val)        REG_FLD_VAL(RX_CTRL_UNUSE_0_FLD_rg_qp_cdr_vcocal_state, (val))

#define RX_CTRL_1_VAL_rg_qp_freq_det_en_wait_dly(val)          REG_FLD_VAL(RX_CTRL_1_FLD_rg_qp_freq_det_en_wait_dly, (val))
#define RX_CTRL_1_VAL_rg_qp_cdr_settle_dly(val)                REG_FLD_VAL(RX_CTRL_1_FLD_rg_qp_cdr_settle_dly, (val))
#define RX_CTRL_1_VAL_rg_qp_cdr_re_calib(val)                  REG_FLD_VAL(RX_CTRL_1_FLD_rg_qp_cdr_re_calib, (val))
#define RX_CTRL_1_VAL_rg_qp_cdr_bw_sel_dly(val)                REG_FLD_VAL(RX_CTRL_1_FLD_rg_qp_cdr_bw_sel_dly, (val))

#define RX_CTRL_2_VAL_rg_qp_rx_pwd(val)                        REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_rx_pwd, (val))
#define RX_CTRL_2_VAL_rg_qp_rx_eq_en_h_dly(val)                REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_rx_eq_en_h_dly, (val))
#define RX_CTRL_2_VAL_rg_qp_ppm_thres(val)                     REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_ppm_thres, (val))
#define RX_CTRL_2_VAL_rg_qp_phya_pwd(val)                      REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_phya_pwd, (val))
#define RX_CTRL_2_VAL_rg_qp_lpf_window_sel(val)                REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_lpf_window_sel, (val))
#define RX_CTRL_2_VAL_rg_qp_freq_det_frc_en(val)               REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_freq_det_frc_en, (val))
#define RX_CTRL_2_VAL_rg_qp_freq_det_frc(val)                  REG_FLD_VAL(RX_CTRL_2_FLD_rg_qp_freq_det_frc, (val))

#define RX_CTRL_3_VAL_rg_qp_cdr_band_fail(val)                 REG_FLD_VAL(RX_CTRL_3_FLD_rg_qp_cdr_band_fail, (val))
#define RX_CTRL_3_VAL_rg_qp_speed_chg(val)                     REG_FLD_VAL(RX_CTRL_3_FLD_rg_qp_speed_chg, (val))
#define RX_CTRL_3_VAL_rg_qp_sigdet_wait_force(val)             REG_FLD_VAL(RX_CTRL_3_FLD_rg_qp_sigdet_wait_force, (val))
#define RX_CTRL_3_VAL_rg_qp_sigdet_wait_cond(val)              REG_FLD_VAL(RX_CTRL_3_FLD_rg_qp_sigdet_wait_cond, (val))
#define RX_CTRL_3_VAL_rg_qp_sig_det_wait_dly(val)              REG_FLD_VAL(RX_CTRL_3_FLD_rg_qp_sig_det_wait_dly, (val))

#define RX_CTRL_4_VAL_rg_qp_kband_kfc(val)                     REG_FLD_VAL(RX_CTRL_4_FLD_rg_qp_kband_kfc, (val))
#define RX_CTRL_4_VAL_rg_pcie_sig_cal_en_time_sel(val)         REG_FLD_VAL(RX_CTRL_4_FLD_rg_pcie_sig_cal_en_time_sel, (val))
#define RX_CTRL_4_VAL_rg_bias_dir(val)                         REG_FLD_VAL(RX_CTRL_4_FLD_rg_bias_dir, (val))
#define RX_CTRL_4_VAL_rg_rx_pi_cal_en_start_time(val)          REG_FLD_VAL(RX_CTRL_4_FLD_rg_rx_pi_cal_en_start_time, (val))
#define RX_CTRL_4_VAL_rg_rx_settle_rdy_time(val)               REG_FLD_VAL(RX_CTRL_4_FLD_rg_rx_settle_rdy_time, (val))

#define RX_CTRL_5_VAL_rg_fredet_chk_cycle(val)                 REG_FLD_VAL(RX_CTRL_5_FLD_rg_fredet_chk_cycle, (val))
#define RX_CTRL_5_VAL_rg_qp_impcal_cyccnt(val)                 REG_FLD_VAL(RX_CTRL_5_FLD_rg_qp_impcal_cyccnt, (val))

#define RX_CTRL_6_VAL_rg_fredet_golden_cycle(val)              REG_FLD_VAL(RX_CTRL_6_FLD_rg_fredet_golden_cycle, (val))

#define RX_CTRL_7_VAL_rg_fredet_clear_unlck_cnt(val)           REG_FLD_VAL(RX_CTRL_7_FLD_rg_fredet_clear_unlck_cnt, (val))
#define RX_CTRL_7_VAL_rg_fredet_relck_num(val)                 REG_FLD_VAL(RX_CTRL_7_FLD_rg_fredet_relck_num, (val))
#define RX_CTRL_7_VAL_rg_fredet_tolerate_cycle(val)            REG_FLD_VAL(RX_CTRL_7_FLD_rg_fredet_tolerate_cycle, (val))

#define RX_CTRL_8_VAL_rg_da_qp_saosc_done_time(val)            REG_FLD_VAL(RX_CTRL_8_FLD_rg_da_qp_saosc_done_time, (val))
#define RX_CTRL_8_VAL_rg_da_qp_leqos_en_time(val)              REG_FLD_VAL(RX_CTRL_8_FLD_rg_da_qp_leqos_en_time, (val))

#define RX_CTRL_9_VAL_rg_force_pll_stable(val)                 REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_pll_stable, (val))
#define RX_CTRL_9_VAL_rg_force_pll_stable_sel(val)             REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_pll_stable_sel, (val))
#define RX_CTRL_9_VAL_rg_force_bias_pwd(val)                   REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_bias_pwd, (val))
#define RX_CTRL_9_VAL_rg_force_bias_pwd_sel(val)               REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_bias_pwd_sel, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_kband_done_bypass_ana(val)  REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_kband_done_bypass_ana_sel(val) REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_kband_done_bypass_ana_sel, (val))
#define RX_CTRL_9_VAL_rg_force_sigdet_out_bypass_ana(val)      REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana, (val))
#define RX_CTRL_9_VAL_rg_force_sigdet_out_bypass_ana_sel(val)  REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_sigdet_out_bypass_ana_sel, (val))
#define RX_CTRL_9_VAL_rg_force_sigdet_cal_out_bypass_ana(val)  REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana, (val))
#define RX_CTRL_9_VAL_rg_force_sigdet_cal_out_bypass_ana_sel(val) REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_sigdet_cal_out_bypass_ana_sel, (val))
#define RX_CTRL_9_VAL_rg_force_rx_saos_en(val)                 REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_saos_en, (val))
#define RX_CTRL_9_VAL_rg_force_rx_saos_en_sel(val)             REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_saos_en_sel, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_lck2ref(val)                REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_lck2ref, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_lck2ref_sel(val)            REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_lck2ref_sel, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_lpf_rstb(val)               REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_lpf_rstb_sel(val)           REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_lpf_rstb_sel, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_stable(val)                 REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_stable, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_stable_sel(val)             REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_stable_sel, (val))
#define RX_CTRL_9_VAL_rg_force_dfe_en(val)                     REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_dfe_en, (val))
#define RX_CTRL_9_VAL_rg_force_dfe_en_sel(val)                 REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_dfe_en_sel, (val))
#define RX_CTRL_9_VAL_rg_force_rx_sigdet_en(val)               REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_sigdet_en, (val))
#define RX_CTRL_9_VAL_rg_force_rx_sigdet_en_sel(val)           REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_sigdet_en_sel, (val))
#define RX_CTRL_9_VAL_rg_force_dfe_rst(val)                    REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_dfe_rst, (val))
#define RX_CTRL_9_VAL_rg_force_dfe_rst_sel(val)                REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_dfe_rst_sel, (val))
#define RX_CTRL_9_VAL_rg_force_rx_data_rstb(val)               REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_data_rstb, (val))
#define RX_CTRL_9_VAL_rg_force_rx_data_rstb_sel(val)           REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_data_rstb_sel, (val))
#define RX_CTRL_9_VAL_rg_force_rx_pi_cal_en(val)               REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_pi_cal_en, (val))
#define RX_CTRL_9_VAL_rg_force_rx_pi_cal_en_sel(val)           REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_rx_pi_cal_en_sel, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_pd_pwdb(val)                REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb, (val))
#define RX_CTRL_9_VAL_rg_force_cdr_pd_pwdb_sel(val)            REG_FLD_VAL(RX_CTRL_9_FLD_rg_force_cdr_pd_pwdb_sel, (val))

#define RX_CTRL_10_VAL_rg_force_cdr_settle_ok(val)             REG_FLD_VAL(RX_CTRL_10_FLD_rg_force_cdr_settle_ok, (val))
#define RX_CTRL_10_VAL_rg_force_cdr_settle_ok_sel(val)         REG_FLD_VAL(RX_CTRL_10_FLD_rg_force_cdr_settle_ok_sel, (val))
#define RX_CTRL_10_VAL_rg_qp_cdr_settle_rdy_cnt_time(val)      REG_FLD_VAL(RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_time, (val))
#define RX_CTRL_10_VAL_rg_qp_cdr_settle_rdy_cnt_pre_time(val)  REG_FLD_VAL(RX_CTRL_10_FLD_rg_qp_cdr_settle_rdy_cnt_pre_time, (val))
#define RX_CTRL_10_VAL_rg_force_cdr_lck2ref_pre(val)           REG_FLD_VAL(RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre, (val))
#define RX_CTRL_10_VAL_rg_force_cdr_lck2ref_pre_sel(val)       REG_FLD_VAL(RX_CTRL_10_FLD_rg_force_cdr_lck2ref_pre_sel, (val))
#define RX_CTRL_10_VAL_rg_force_eq_en(val)                     REG_FLD_VAL(RX_CTRL_10_FLD_rg_force_eq_en, (val))
#define RX_CTRL_10_VAL_rg_force_eq_en_sel(val)                 REG_FLD_VAL(RX_CTRL_10_FLD_rg_force_eq_en_sel, (val))
#define RX_CTRL_10_VAL_rg_qp_rx_scan(val)                      REG_FLD_VAL(RX_CTRL_10_FLD_rg_qp_rx_scan, (val))
#define RX_CTRL_10_VAL_rg_qp_crsdet_rstb(val)                  REG_FLD_VAL(RX_CTRL_10_FLD_rg_qp_crsdet_rstb, (val))
#define RX_CTRL_10_VAL_rg_qp_crsdet_en(val)                    REG_FLD_VAL(RX_CTRL_10_FLD_rg_qp_crsdet_en, (val))

#define RX_CTRL_11_VAL_rg_qp_sigdet_cal_sample_time(val)       REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_sigdet_cal_sample_time, (val))
#define RX_CTRL_11_VAL_rg_qp_force_sigdet_10g(val)             REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_sigdet_10g, (val))
#define RX_CTRL_11_VAL_rg_qp_force_sigdet_5g(val)              REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_sigdet_5g, (val))
#define RX_CTRL_11_VAL_rg_qp_force_sigdet(val)                 REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_sigdet, (val))
#define RX_CTRL_11_VAL_rg_qp_force_sigdet_sel(val)             REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_sigdet_sel, (val))
#define RX_CTRL_11_VAL_rg_qp_rx_dcleq_intf(val)                REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_rx_dcleq_intf, (val))
#define RX_CTRL_11_VAL_rg_qp_force_eq_en(val)                  REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_eq_en, (val))
#define RX_CTRL_11_VAL_rg_qp_force_eq_en_sel(val)              REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_eq_en_sel, (val))
#define RX_CTRL_11_VAL_rg_qp_force_speed_sel(val)              REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_speed_sel, (val))
#define RX_CTRL_11_VAL_rg_qp_force_eq_rdy(val)                 REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_eq_rdy, (val))
#define RX_CTRL_11_VAL_rg_qp_force_eq_rdy_sel(val)             REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_force_eq_rdy_sel, (val))
#define RX_CTRL_11_VAL_rg_qp_eq_rstep2(val)                    REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_eq_rstep2, (val))
#define RX_CTRL_11_VAL_rg_qp_eq_rstep1(val)                    REG_FLD_VAL(RX_CTRL_11_FLD_rg_qp_eq_rstep1, (val))
#define RX_CTRL_11_VAL_rg_force_saos_rdy(val)                  REG_FLD_VAL(RX_CTRL_11_FLD_rg_force_saos_rdy, (val))
#define RX_CTRL_11_VAL_rg_force_saos_rdy_sel(val)              REG_FLD_VAL(RX_CTRL_11_FLD_rg_force_saos_rdy_sel, (val))
#define RX_CTRL_11_VAL_rg_force_freq_lock(val)                 REG_FLD_VAL(RX_CTRL_11_FLD_rg_force_freq_lock, (val))
#define RX_CTRL_11_VAL_rg_force_freq_lock_sel(val)             REG_FLD_VAL(RX_CTRL_11_FLD_rg_force_freq_lock_sel, (val))

#define RX_CTRL_12_VAL_rg_sigdet_win_nonvld_times(val)         REG_FLD_VAL(RX_CTRL_12_FLD_rg_sigdet_win_nonvld_times, (val))
#define RX_CTRL_12_VAL_rg_sigdet_win_vld_times(val)            REG_FLD_VAL(RX_CTRL_12_FLD_rg_sigdet_win_vld_times, (val))
#define RX_CTRL_12_VAL_rg_sigdet_vld_time(val)                 REG_FLD_VAL(RX_CTRL_12_FLD_rg_sigdet_vld_time, (val))
#define RX_CTRL_12_VAL_rg_sigdet_win_size(val)                 REG_FLD_VAL(RX_CTRL_12_FLD_rg_sigdet_win_size, (val))
#define RX_CTRL_12_VAL_rg_sigdet_en(val)                       REG_FLD_VAL(RX_CTRL_12_FLD_rg_sigdet_en, (val))

#define RX_CTRL_13_VAL_rg_qp_reserve_3(val)                    REG_FLD_VAL(RX_CTRL_13_FLD_rg_qp_reserve_3, (val))
#define RX_CTRL_13_VAL_rg_qp_reserve_2(val)                    REG_FLD_VAL(RX_CTRL_13_FLD_rg_qp_reserve_2, (val))
#define RX_CTRL_13_VAL_rg_qp_reserve_1(val)                    REG_FLD_VAL(RX_CTRL_13_FLD_rg_qp_reserve_1, (val))
#define RX_CTRL_13_VAL_rg_qp_reserve_0(val)                    REG_FLD_VAL(RX_CTRL_13_FLD_rg_qp_reserve_0, (val))

#define RX_CTRL_14_VAL_qphy_rx_ctrl_debug_3(val)               REG_FLD_VAL(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_3, (val))
#define RX_CTRL_14_VAL_qphy_rx_ctrl_debug_2(val)               REG_FLD_VAL(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_2, (val))
#define RX_CTRL_14_VAL_qphy_rx_ctrl_debug_1(val)               REG_FLD_VAL(RX_CTRL_14_FLD_qphy_rx_ctrl_debug_1, (val))
#define RX_CTRL_14_VAL_qphy_rx_ctrl_debug(val)                 REG_FLD_VAL(RX_CTRL_14_FLD_qphy_rx_ctrl_debug, (val))

#define RX_CTRL_15_VAL_ro_fll_idac(val)                        REG_FLD_VAL(RX_CTRL_15_FLD_ro_fll_idac, (val))
#define RX_CTRL_15_VAL_ro_adc_freq(val)                        REG_FLD_VAL(RX_CTRL_15_FLD_ro_adc_freq, (val))

#define RX_CTRL_16_VAL_ro_cor_gain(val)                        REG_FLD_VAL(RX_CTRL_16_FLD_ro_cor_gain, (val))

#define RX_CTRL_17_VAL_ro_da_idac(val)                         REG_FLD_VAL(RX_CTRL_17_FLD_ro_da_idac, (val))
#define RX_CTRL_17_VAL_ro_idacf(val)                           REG_FLD_VAL(RX_CTRL_17_FLD_ro_idacf, (val))

#define RX_CTRL_18_VAL_ro_fll_idac_repli(val)                  REG_FLD_VAL(RX_CTRL_18_FLD_ro_fll_idac_repli, (val))

#define RX_CTRL_19_VAL_ro_adc_freq_inv_output(val)             REG_FLD_VAL(RX_CTRL_19_FLD_ro_adc_freq_inv_output, (val))

#define RX_CTRL_20_VAL_ro_adc_freq_output(val)                 REG_FLD_VAL(RX_CTRL_20_FLD_ro_adc_freq_output, (val))

#define RX_CTRL_21_VAL_ro_cor_integ_output(val)                REG_FLD_VAL(RX_CTRL_21_FLD_ro_cor_integ_output, (val))

#define RX_CTRL_22_VAL_ro_cor_integ_inv_output(val)            REG_FLD_VAL(RX_CTRL_22_FLD_ro_cor_integ_inv_output, (val))

#define RX_CTRL_23_VAL_ro_cor_gain_output_0(val)               REG_FLD_VAL(RX_CTRL_23_FLD_ro_cor_gain_output_0, (val))

#define RX_CTRL_24_VAL_ro_cor_gain_output_1(val)               REG_FLD_VAL(RX_CTRL_24_FLD_ro_cor_gain_output_1, (val))

#define RX_CTRL_25_VAL_rg_qp_sigdet_force(val)                 REG_FLD_VAL(RX_CTRL_25_FLD_rg_qp_sigdet_force, (val))
#define RX_CTRL_25_VAL_rg_qp_sigdet_force_en(val)              REG_FLD_VAL(RX_CTRL_25_FLD_rg_qp_sigdet_force_en, (val))
#define RX_CTRL_25_VAL_rg_sigdet_10g_force_en(val)             REG_FLD_VAL(RX_CTRL_25_FLD_rg_sigdet_10g_force_en, (val))
#define RX_CTRL_25_VAL_rg_force_pr_stable(val)                 REG_FLD_VAL(RX_CTRL_25_FLD_rg_force_pr_stable, (val))
#define RX_CTRL_25_VAL_rg_force_pr_stable_sel(val)             REG_FLD_VAL(RX_CTRL_25_FLD_rg_force_pr_stable_sel, (val))

#define RX_CTRL_26_VAL_rg_qp_saos_rdy_clr_by_lck2ref(val)      REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_saos_rdy_clr_by_lck2ref, (val))
#define RX_CTRL_26_VAL_rg_qp_retrain_all_en(val)               REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_retrain_all_en, (val))
#define RX_CTRL_26_VAL_rg_qp_eq_retrain_only_en(val)           REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_eq_retrain_only_en, (val))
#define RX_CTRL_26_VAL_rg_qp_fifo_rstb_hw_en(val)              REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_fifo_rstb_hw_en, (val))
#define RX_CTRL_26_VAL_rg_link_ne_en(val)                      REG_FLD_VAL(RX_CTRL_26_FLD_rg_link_ne_en, (val))
#define RX_CTRL_26_VAL_rg_link_erro_en(val)                    REG_FLD_VAL(RX_CTRL_26_FLD_rg_link_erro_en, (val))
#define RX_CTRL_26_VAL_rg_force_cdr_lck2ref_pre_relink(val)    REG_FLD_VAL(RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink, (val))
#define RX_CTRL_26_VAL_rg_force_cdr_lck2ref_pre_relink_sel(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_force_cdr_lck2ref_pre_relink_sel, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_ok_sig_det_freq_lock_relink(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_sig_det_freq_lock_relink(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_cdr_settle_freq_lock_relink(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_cdr_settle_sig_det_relink(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_saos_rdy_relink(val)       REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_freq_lock_relink(val)      REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_freq_lock_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_sig_det_wait_rdy_mask_relink(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_cdr_settle_ok_relink(val)  REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok_relink, (val))
#define RX_CTRL_26_VAL_rg_qp_prbs_case(val)                    REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_prbs_case, (val))
#define RX_CTRL_26_VAL_rg_qp_add_pcs_link(val)                 REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_add_pcs_link, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_ok_sig_det_freq_lock(val)  REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_ok_sig_det_freq_lock, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_sig_det_freq_lock(val)     REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_freq_lock, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_cdr_settle_freq_lock(val)  REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_freq_lock, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_cdr_settle_sig_det(val)    REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_sig_det, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_saos_rdy(val)              REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_saos_rdy, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_freq_lock(val)             REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_freq_lock, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_sig_det_wait_rdy_mask(val) REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_sig_det_wait_rdy_mask, (val))
#define RX_CTRL_26_VAL_rg_qp_bypass_cdr_settle_ok(val)         REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_bypass_cdr_settle_ok, (val))
#define RX_CTRL_26_VAL_rg_qp_force_sigdet_lp(val)              REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_force_sigdet_lp, (val))
#define RX_CTRL_26_VAL_rg_qp_force_sigdet_ln(val)              REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_force_sigdet_ln, (val))
#define RX_CTRL_26_VAL_rg_qp_sig_linkdown_sel(val)             REG_FLD_VAL(RX_CTRL_26_FLD_rg_qp_sig_linkdown_sel, (val))

#define RX_CTRL_27_VAL_rg_qp_link_erro_cnt(val)                REG_FLD_VAL(RX_CTRL_27_FLD_rg_qp_link_erro_cnt, (val))

#define RX_CTRL_28_VAL_rg_qp_debug_sel_6(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_6, (val))
#define RX_CTRL_28_VAL_rg_qp_debug_sel_5(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_5, (val))
#define RX_CTRL_28_VAL_rg_qp_debug_sel_4(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_4, (val))
#define RX_CTRL_28_VAL_rg_qp_debug_sel_3(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_3, (val))
#define RX_CTRL_28_VAL_rg_qp_debug_sel_2(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_2, (val))
#define RX_CTRL_28_VAL_rg_qp_debug_sel_1(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_1, (val))
#define RX_CTRL_28_VAL_rg_qp_debug_sel_0(val)                  REG_FLD_VAL(RX_CTRL_28_FLD_rg_qp_debug_sel_0, (val))

#define RX_CTRL_29_VAL_qphy_rx_ctrl_debug_4(val)               REG_FLD_VAL(RX_CTRL_29_FLD_qphy_rx_ctrl_debug_4, (val))

#define RX_CTRL_30_VAL_qphy_rx_ctrl_debug_5(val)               REG_FLD_VAL(RX_CTRL_30_FLD_qphy_rx_ctrl_debug_5, (val))

#define RX_CTRL_31_VAL_qphy_rx_ctrl_debug_6(val)               REG_FLD_VAL(RX_CTRL_31_FLD_qphy_rx_ctrl_debug_6, (val))

#define RX_CTRL_32_VAL_qphy_rx_ctrl_debug_7(val)               REG_FLD_VAL(RX_CTRL_32_FLD_qphy_rx_ctrl_debug_7, (val))

#define RX_CTRL_33_VAL_qphy_rx_ctrl_debug_8(val)               REG_FLD_VAL(RX_CTRL_33_FLD_qphy_rx_ctrl_debug_8, (val))

#define RX_CTRL_34_VAL_qphy_rx_ctrl_debug_9(val)               REG_FLD_VAL(RX_CTRL_34_FLD_qphy_rx_ctrl_debug_9, (val))

#define RX_CTRL_35_VAL_rg_qp_force_pcie_usb_speed_sel(val)     REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_cdr_pwd(val)                REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_cdr_pwd, (val))
#define RX_CTRL_35_VAL_rg_qp_force_cdr_pwd_sel(val)            REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_cdr_pwd_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_cdr_set_dly_clear(val)      REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_cdr_set_dly_clear, (val))
#define RX_CTRL_35_VAL_rg_qp_force_rx_pr_pd_pwd(val)           REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd, (val))
#define RX_CTRL_35_VAL_rg_qp_force_rx_pr_pd_pwd_sel(val)       REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_rx_pr_pd_pwd_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_rx_path_rdy(val)            REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy, (val))
#define RX_CTRL_35_VAL_rg_qp_force_rx_path_rdy_sel(val)        REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_rx_path_rdy_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_pcie_usb_speed(val)         REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_pcie_usb_speed, (val))
#define RX_CTRL_35_VAL_rg_qp_force_speed_change_sel(val)       REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_speed_change_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_speed_change(val)           REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_speed_change, (val))
#define RX_CTRL_35_VAL_rg_qp_pcie_speed_change_dly_time(val)   REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_pcie_speed_change_dly_time, (val))
#define RX_CTRL_35_VAL_rg_qp_force_k_band_reset_sel(val)       REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_k_band_reset_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_ssusb_rx_saosc_rst(val)     REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst, (val))
#define RX_CTRL_35_VAL_rg_qp_force_ssusb_rx_saosc_rst_sel(val) REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_ssusb_rx_saosc_rst_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_sig_det_cal_done(val)       REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done, (val))
#define RX_CTRL_35_VAL_rg_qp_force_sig_det_cal_done_sel(val)   REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_sig_det_cal_done_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_pi_cal_done(val)            REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_pi_cal_done, (val))
#define RX_CTRL_35_VAL_rg_qp_force_pi_cal_done_sel(val)        REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_pi_cal_done_sel, (val))
#define RX_CTRL_35_VAL_rg_qp_force_pi_spd_chg_en(val)          REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_pi_spd_chg_en, (val))
#define RX_CTRL_35_VAL_rg_qp_force_auto_vco_en(val)            REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_auto_vco_en, (val))
#define RX_CTRL_35_VAL_rg_qp_force_pr_vco_en(val)              REG_FLD_VAL(RX_CTRL_35_FLD_rg_qp_force_pr_vco_en, (val))

#define RX_CTRL_36_VAL_rg_qp_force_usb_mode(val)               REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_usb_mode, (val))
#define RX_CTRL_36_VAL_rg_qp_force_usb_mode_sel(val)           REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_usb_mode_sel, (val))
#define RX_CTRL_36_VAL_rg_qp_force_sigdet_usb(val)             REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_sigdet_usb, (val))
#define RX_CTRL_36_VAL_rg_qp_force_sigdet_and(val)             REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_sigdet_and, (val))
#define RX_CTRL_36_VAL_rg_qp_force_sigdet_or(val)              REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_sigdet_or, (val))
#define RX_CTRL_36_VAL_rg_qp_pcie_usb_system(val)              REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_pcie_usb_system, (val))
#define RX_CTRL_36_VAL_rg_qp_lck2data_dly_time(val)            REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_lck2data_dly_time, (val))
#define RX_CTRL_36_VAL_rg_qp_force_rx_path_rdy_time(val)       REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_rx_path_rdy_time, (val))
#define RX_CTRL_36_VAL_rg_qp_force_spd_chg_all(val)            REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_spd_chg_all, (val))
#define RX_CTRL_36_VAL_rg_qp_force_pcie_mode(val)              REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_pcie_mode, (val))
#define RX_CTRL_36_VAL_rg_qp_force_pcie_mode_sel(val)          REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_pcie_mode_sel, (val))
#define RX_CTRL_36_VAL_rg_qp_pcie_usb_sol_1(val)               REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_pcie_usb_sol_1, (val))
#define RX_CTRL_36_VAL_rg_qp_force_speed_chg_all_re_en(val)    REG_FLD_VAL(RX_CTRL_36_FLD_rg_qp_force_speed_chg_all_re_en, (val))

#define RX_CTRL_37_VAL_rg_qp_reserve_19(val)                   REG_FLD_VAL(RX_CTRL_37_FLD_rg_qp_reserve_19, (val))
#define RX_CTRL_37_VAL_rg_qp_reserve_18(val)                   REG_FLD_VAL(RX_CTRL_37_FLD_rg_qp_reserve_18, (val))
#define RX_CTRL_37_VAL_rg_qp_reserve_17(val)                   REG_FLD_VAL(RX_CTRL_37_FLD_rg_qp_reserve_17, (val))
#define RX_CTRL_37_VAL_rg_qp_reserve_16(val)                   REG_FLD_VAL(RX_CTRL_37_FLD_rg_qp_reserve_16, (val))

#define RX_CTRL_38_VAL_rg_qp_reserve_7(val)                    REG_FLD_VAL(RX_CTRL_38_FLD_rg_qp_reserve_7, (val))
#define RX_CTRL_38_VAL_rg_qp_reserve_6(val)                    REG_FLD_VAL(RX_CTRL_38_FLD_rg_qp_reserve_6, (val))
#define RX_CTRL_38_VAL_rg_qp_reserve_5(val)                    REG_FLD_VAL(RX_CTRL_38_FLD_rg_qp_reserve_5, (val))
#define RX_CTRL_38_VAL_rg_qp_reserve_4(val)                    REG_FLD_VAL(RX_CTRL_38_FLD_rg_qp_reserve_4, (val))

#define RX_CTRL_39_VAL_rg_qp_reserve_11(val)                   REG_FLD_VAL(RX_CTRL_39_FLD_rg_qp_reserve_11, (val))
#define RX_CTRL_39_VAL_rg_qp_reserve_10(val)                   REG_FLD_VAL(RX_CTRL_39_FLD_rg_qp_reserve_10, (val))
#define RX_CTRL_39_VAL_rg_qp_reserve_9(val)                    REG_FLD_VAL(RX_CTRL_39_FLD_rg_qp_reserve_9, (val))
#define RX_CTRL_39_VAL_rg_qp_reserve_8(val)                    REG_FLD_VAL(RX_CTRL_39_FLD_rg_qp_reserve_8, (val))

#define RX_CTRL_40_VAL_rg_qp_reserve_15(val)                   REG_FLD_VAL(RX_CTRL_40_FLD_rg_qp_reserve_15, (val))
#define RX_CTRL_40_VAL_rg_qp_reserve_14(val)                   REG_FLD_VAL(RX_CTRL_40_FLD_rg_qp_reserve_14, (val))
#define RX_CTRL_40_VAL_rg_qp_reserve_13(val)                   REG_FLD_VAL(RX_CTRL_40_FLD_rg_qp_reserve_13, (val))
#define RX_CTRL_40_VAL_rg_qp_reserve_12(val)                   REG_FLD_VAL(RX_CTRL_40_FLD_rg_qp_reserve_12, (val))

#define RX_CTRL_41_VAL_ro_qp_reserve_3(val)                    REG_FLD_VAL(RX_CTRL_41_FLD_ro_qp_reserve_3, (val))
#define RX_CTRL_41_VAL_ro_qp_reserve_2(val)                    REG_FLD_VAL(RX_CTRL_41_FLD_ro_qp_reserve_2, (val))
#define RX_CTRL_41_VAL_ro_qp_reserve_1(val)                    REG_FLD_VAL(RX_CTRL_41_FLD_ro_qp_reserve_1, (val))
#define RX_CTRL_41_VAL_ro_qp_reserve_0(val)                    REG_FLD_VAL(RX_CTRL_41_FLD_ro_qp_reserve_0, (val))

#define RX_CTRL_42_VAL_ro_qp_reserve_7(val)                    REG_FLD_VAL(RX_CTRL_42_FLD_ro_qp_reserve_7, (val))
#define RX_CTRL_42_VAL_ro_qp_reserve_6(val)                    REG_FLD_VAL(RX_CTRL_42_FLD_ro_qp_reserve_6, (val))
#define RX_CTRL_42_VAL_ro_qp_reserve_5(val)                    REG_FLD_VAL(RX_CTRL_42_FLD_ro_qp_reserve_5, (val))
#define RX_CTRL_42_VAL_ro_qp_reserve_4(val)                    REG_FLD_VAL(RX_CTRL_42_FLD_ro_qp_reserve_4, (val))

#define RX_CTRL_43_VAL_ro_qp_reserve_11(val)                   REG_FLD_VAL(RX_CTRL_43_FLD_ro_qp_reserve_11, (val))
#define RX_CTRL_43_VAL_ro_qp_reserve_10(val)                   REG_FLD_VAL(RX_CTRL_43_FLD_ro_qp_reserve_10, (val))
#define RX_CTRL_43_VAL_ro_qp_reserve_9(val)                    REG_FLD_VAL(RX_CTRL_43_FLD_ro_qp_reserve_9, (val))
#define RX_CTRL_43_VAL_ro_qp_reserve_8(val)                    REG_FLD_VAL(RX_CTRL_43_FLD_ro_qp_reserve_8, (val))

#define RX_CTRL_44_VAL_ro_qp_reserve_15(val)                   REG_FLD_VAL(RX_CTRL_44_FLD_ro_qp_reserve_15, (val))
#define RX_CTRL_44_VAL_ro_qp_reserve_14(val)                   REG_FLD_VAL(RX_CTRL_44_FLD_ro_qp_reserve_14, (val))
#define RX_CTRL_44_VAL_ro_qp_reserve_13(val)                   REG_FLD_VAL(RX_CTRL_44_FLD_ro_qp_reserve_13, (val))
#define RX_CTRL_44_VAL_ro_qp_reserve_12(val)                   REG_FLD_VAL(RX_CTRL_44_FLD_ro_qp_reserve_12, (val))

#define RX_CTRL_45_VAL_rg_qp_pcie_gen2_cdr_lpf_ki_gain(val)    REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_ki_gain, (val))
#define RX_CTRL_45_VAL_rg_qp_pcie_gen1_cdr_lpf_ki_gain(val)    REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_ki_gain, (val))
#define RX_CTRL_45_VAL_rg_qp_force_pcie_cdr_lpf_ki_gain_en(val) REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_ki_gain_en, (val))
#define RX_CTRL_45_VAL_rg_qp_pcie_gen2_cdr_lpf_kp_gain(val)    REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_pcie_gen2_cdr_lpf_kp_gain, (val))
#define RX_CTRL_45_VAL_rg_qp_pcie_gen1_cdr_lpf_kp_gain(val)    REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_pcie_gen1_cdr_lpf_kp_gain, (val))
#define RX_CTRL_45_VAL_rg_qp_force_pcie_cdr_lpf_kp_gain_en(val) REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_force_pcie_cdr_lpf_kp_gain_en, (val))
#define RX_CTRL_45_VAL_rg_qp_sgmii_eq_train_sel(val)           REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_sgmii_eq_train_sel, (val))
#define RX_CTRL_45_VAL_rg_qp_force_eq_dly_en(val)              REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_force_eq_dly_en, (val))
#define RX_CTRL_45_VAL_rg_qp_force_eq_dly_en_sel(val)          REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_force_eq_dly_en_sel, (val))
#define RX_CTRL_45_VAL_rg_qp_eq_en_dly(val)                    REG_FLD_VAL(RX_CTRL_45_FLD_rg_qp_eq_en_dly, (val))

#define RX_CTRL_46_VAL_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en(val) REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p3_to_p0_en, (val))
#define RX_CTRL_46_VAL_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en(val) REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p2_to_p0_en, (val))
#define RX_CTRL_46_VAL_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en(val) REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_pcie_usb_bypass_eq_p1_to_p0_en, (val))
#define RX_CTRL_46_VAL_rg_reback_p0_lck2ref_en(val)            REG_FLD_VAL(RX_CTRL_46_FLD_rg_reback_p0_lck2ref_en, (val))
#define RX_CTRL_46_VAL_rg_qp_force_last_lfps_finish(val)       REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish, (val))
#define RX_CTRL_46_VAL_rg_qp_force_last_lfps_finish_sel(val)   REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_last_lfps_finish_sel, (val))
#define RX_CTRL_46_VAL_rg_force_usb_sig_clr(val)               REG_FLD_VAL(RX_CTRL_46_FLD_rg_force_usb_sig_clr, (val))
#define RX_CTRL_46_VAL_rg_qp_pcie_gen1_cdr_pr_kband_div(val)   REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div, (val))
#define RX_CTRL_46_VAL_rg_qp_pcie_gen2_cdr_pr_kband_div(val)   REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div, (val))
#define RX_CTRL_46_VAL_rg_qp_force_pcie_cdr_pr_kband_div_en(val) REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_pcie_cdr_pr_kband_div_en, (val))
#define RX_CTRL_46_VAL_rg_qp_force_power_st_change(val)        REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_power_st_change, (val))
#define RX_CTRL_46_VAL_rg_qp_force_power_st_change_sel(val)    REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_power_st_change_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_fre_lock_sel(val)                 REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_fre_lock_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_power_st(val)      REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_power_st_sel(val)  REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_power_st_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_sigdet_en(val)     REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_sigdet_en_sel(val) REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_sigdet_en_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_afe_pwd(val)       REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_afe_pwd_sel(val)   REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_afe_pwd_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_eye_pwd(val)       REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_eye_pwd_sel(val)   REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_eye_pwd_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_pr_pwd(val)        REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_pr_pwd_sel(val)    REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pr_pwd_sel, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_pd_pwd(val)        REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd, (val))
#define RX_CTRL_46_VAL_rg_qp_force_usb_pcie_pd_pwd_sel(val)    REG_FLD_VAL(RX_CTRL_46_FLD_rg_qp_force_usb_pcie_pd_pwd_sel, (val))

#define RX_CTRL_47_VAL_rg_qp_pcie_gen1_cdr_pr_dac_band(val)    REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_dac_band, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen2_cdr_pr_dac_band(val)    REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_dac_band, (val))
#define RX_CTRL_47_VAL_rg_qp_force_pcie_cdr_pr_dac_band_en(val) REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_dac_band_en, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen1_cdr_pr_buf_in_sr(val)   REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_buf_in_sr, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen2_cdr_pr_buf_in_sr(val)   REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_buf_in_sr, (val))
#define RX_CTRL_47_VAL_rg_qp_force_pcie_cdr_pr_buf_in_sr_en(val) REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_buf_in_sr_en, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen1_cdr_pr_beta_sel(val)    REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_pr_beta_sel, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen2_cdr_pr_beta_sel(val)    REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_pr_beta_sel, (val))
#define RX_CTRL_47_VAL_rg_qp_force_pcie_cdr_pr_beta_sel_en(val) REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_pr_beta_sel_en, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen1_cdr_lpf_ratio(val)      REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen1_cdr_lpf_ratio, (val))
#define RX_CTRL_47_VAL_rg_qp_pcie_gen2_cdr_lpf_ratio(val)      REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_pcie_gen2_cdr_lpf_ratio, (val))
#define RX_CTRL_47_VAL_rg_qp_force_pcie_cdr_lpf_ratio_en(val)  REG_FLD_VAL(RX_CTRL_47_FLD_rg_qp_force_pcie_cdr_lpf_ratio_en, (val))

#define RX_CTRL_48_VAL_rg_qp_force_pcie_crsdet_en_sel(val)     REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en_sel, (val))
#define RX_CTRL_48_VAL_rg_qp_force_pcie_crsdet_en(val)         REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_force_pcie_crsdet_en, (val))
#define RX_CTRL_48_VAL_rg_qp_force_rosc_rstb_sel(val)          REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_force_rosc_rstb_sel, (val))
#define RX_CTRL_48_VAL_rg_qp_force_rosc_rstb(val)              REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_force_rosc_rstb, (val))
#define RX_CTRL_48_VAL_rg_qp_pcie_gen1_cdr_phyck_div(val)      REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_phyck_div, (val))
#define RX_CTRL_48_VAL_rg_qp_pcie_gen2_cdr_phyck_div(val)      REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_phyck_div, (val))
#define RX_CTRL_48_VAL_rg_qp_force_pcie_cdr_phyck_div_en(val)  REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_phyck_div_en, (val))
#define RX_CTRL_48_VAL_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie(val) REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_pcie_gen1_cdr_pr_kband_div_pcie, (val))
#define RX_CTRL_48_VAL_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie(val) REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_pcie_gen2_cdr_pr_kband_div_pcie, (val))
#define RX_CTRL_48_VAL_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en(val) REG_FLD_VAL(RX_CTRL_48_FLD_rg_qp_force_pcie_cdr_pr_kband_div_pcie_en, (val))

#define RX_CTRL_49_VAL_rg_lfps_finish_time(val)                REG_FLD_VAL(RX_CTRL_49_FLD_rg_lfps_finish_time, (val))
#define RX_CTRL_49_VAL_rg_force_last_lfps_finish_latch_clr(val) REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_last_lfps_finish_latch_clr, (val))
#define RX_CTRL_49_VAL_rg_lfps_detect_num(val)                 REG_FLD_VAL(RX_CTRL_49_FLD_rg_lfps_detect_num, (val))
#define RX_CTRL_49_VAL_rg_force_signal_crsdet_out_sel(val)     REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_signal_crsdet_out_sel, (val))
#define RX_CTRL_49_VAL_rg_force_signal_crsdet_lthout_sel(val)  REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_signal_crsdet_lthout_sel, (val))
#define RX_CTRL_49_VAL_rg_force_ad_crsdet_out(val)             REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_ad_crsdet_out, (val))
#define RX_CTRL_49_VAL_rg_force_ad_crsdet_out_sel(val)         REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_ad_crsdet_out_sel, (val))
#define RX_CTRL_49_VAL_rg_force_signal_beacon_out_sel(val)     REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_signal_beacon_out_sel, (val))
#define RX_CTRL_49_VAL_rg_force_crsdet_lthout(val)             REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_crsdet_lthout, (val))
#define RX_CTRL_49_VAL_rg_force_crsdet_lthout_sel(val)         REG_FLD_VAL(RX_CTRL_49_FLD_rg_force_crsdet_lthout_sel, (val))
#define RX_CTRL_49_VAL_rg_qp_crsdet_rst_time(val)              REG_FLD_VAL(RX_CTRL_49_FLD_rg_qp_crsdet_rst_time, (val))
#define RX_CTRL_49_VAL_ro_usb_mode(val)                        REG_FLD_VAL(RX_CTRL_49_FLD_ro_usb_mode, (val))
#define RX_CTRL_49_VAL_ro_pcie_mode(val)                       REG_FLD_VAL(RX_CTRL_49_FLD_ro_pcie_mode, (val))
#define RX_CTRL_49_VAL_ro_ssusb_qp_powerdown(val)              REG_FLD_VAL(RX_CTRL_49_FLD_ro_ssusb_qp_powerdown, (val))
#define RX_CTRL_49_VAL_ro_power_st_l2(val)                     REG_FLD_VAL(RX_CTRL_49_FLD_ro_power_st_l2, (val))
#define RX_CTRL_49_VAL_ro_power_st_l11_l12(val)                REG_FLD_VAL(RX_CTRL_49_FLD_ro_power_st_l11_l12, (val))

#define RX_CTRL_50_VAL_rg_p3_to_p0_do_eq_usb(val)              REG_FLD_VAL(RX_CTRL_50_FLD_rg_p3_to_p0_do_eq_usb, (val))
#define RX_CTRL_50_VAL_rg_p2_to_p0_do_eq_usb(val)              REG_FLD_VAL(RX_CTRL_50_FLD_rg_p2_to_p0_do_eq_usb, (val))
#define RX_CTRL_50_VAL_rg_p1_to_p0_do_eq_usb(val)              REG_FLD_VAL(RX_CTRL_50_FLD_rg_p1_to_p0_do_eq_usb, (val))
#define RX_CTRL_50_VAL_rg_qp_eq_en_dly_short(val)              REG_FLD_VAL(RX_CTRL_50_FLD_rg_qp_eq_en_dly_short, (val))
#define RX_CTRL_50_VAL_rg_qp_rx_eq_en_h_dly_short(val)         REG_FLD_VAL(RX_CTRL_50_FLD_rg_qp_rx_eq_en_h_dly_short, (val))

#define ISR_CTRL_0_VAL_trans_sd_fail_int(val)                  REG_FLD_VAL(ISR_CTRL_0_FLD_trans_sd_fail_int, (val))
#define ISR_CTRL_0_VAL_phyrdy_int(val)                         REG_FLD_VAL(ISR_CTRL_0_FLD_phyrdy_int, (val))
#define ISR_CTRL_0_VAL_un_stb_saos_rdy_int(val)                REG_FLD_VAL(ISR_CTRL_0_FLD_un_stb_saos_rdy_int, (val))
#define ISR_CTRL_0_VAL_trans_rogue_onu_int(val)                REG_FLD_VAL(ISR_CTRL_0_FLD_trans_rogue_onu_int, (val))

#define ISR_CTRL_1_VAL_trans_los_int(val)                      REG_FLD_VAL(ISR_CTRL_1_FLD_trans_los_int, (val))
#define ISR_CTRL_1_VAL_un_stb_rx_rdy_int(val)                  REG_FLD_VAL(ISR_CTRL_1_FLD_un_stb_rx_rdy_int, (val))
#define ISR_CTRL_1_VAL_trans_fault_int(val)                    REG_FLD_VAL(ISR_CTRL_1_FLD_trans_fault_int, (val))
#define ISR_CTRL_1_VAL_un_stb_eq_rdy_int(val)                  REG_FLD_VAL(ISR_CTRL_1_FLD_un_stb_eq_rdy_int, (val))

#define ISR_CTRL_2_VAL_pma_rx_afifo_full_int(val)              REG_FLD_VAL(ISR_CTRL_2_FLD_pma_rx_afifo_full_int, (val))
#define ISR_CTRL_2_VAL_pma_rx_afifo_empty_int(val)             REG_FLD_VAL(ISR_CTRL_2_FLD_pma_rx_afifo_empty_int, (val))
#define ISR_CTRL_2_VAL_pma_tx_afifo_full_int(val)              REG_FLD_VAL(ISR_CTRL_2_FLD_pma_tx_afifo_full_int, (val))
#define ISR_CTRL_2_VAL_pma_tx_afifo_empty_int(val)             REG_FLD_VAL(ISR_CTRL_2_FLD_pma_tx_afifo_empty_int, (val))

#define ISR_CTRL_3_VAL_trans_laser_on_int(val)                 REG_FLD_VAL(ISR_CTRL_3_FLD_trans_laser_on_int, (val))
#define ISR_CTRL_3_VAL_rx_sigdet_int(val)                      REG_FLD_VAL(ISR_CTRL_3_FLD_rx_sigdet_int, (val))
#define ISR_CTRL_3_VAL_rx_freqdet_unlock_int(val)              REG_FLD_VAL(ISR_CTRL_3_FLD_rx_freqdet_unlock_int, (val))
#define ISR_CTRL_3_VAL_tx_freqdet_unlock_int(val)              REG_FLD_VAL(ISR_CTRL_3_FLD_tx_freqdet_unlock_int, (val))

#define ISR_CTRL_EN_0_VAL_rg_trans_sd_fail_int_en(val)         REG_FLD_VAL(ISR_CTRL_EN_0_FLD_rg_trans_sd_fail_int_en, (val))
#define ISR_CTRL_EN_0_VAL_rg_phyrdy_int_en(val)                REG_FLD_VAL(ISR_CTRL_EN_0_FLD_rg_phyrdy_int_en, (val))
#define ISR_CTRL_EN_0_VAL_rg_un_stb_saos_rdy_int_en(val)       REG_FLD_VAL(ISR_CTRL_EN_0_FLD_rg_un_stb_saos_rdy_int_en, (val))
#define ISR_CTRL_EN_0_VAL_rg_trans_rogue_onu_int_en(val)       REG_FLD_VAL(ISR_CTRL_EN_0_FLD_rg_trans_rogue_onu_int_en, (val))

#define ISR_CTRL_EN_1_VAL_rg_trans_los_int_en(val)             REG_FLD_VAL(ISR_CTRL_EN_1_FLD_rg_trans_los_int_en, (val))
#define ISR_CTRL_EN_1_VAL_rg_un_stb_rx_rdy_int_en(val)         REG_FLD_VAL(ISR_CTRL_EN_1_FLD_rg_un_stb_rx_rdy_int_en, (val))
#define ISR_CTRL_EN_1_VAL_rg_trans_fault_int_en(val)           REG_FLD_VAL(ISR_CTRL_EN_1_FLD_rg_trans_fault_int_en, (val))
#define ISR_CTRL_EN_1_VAL_rg_un_stb_eq_rdy_int_en(val)         REG_FLD_VAL(ISR_CTRL_EN_1_FLD_rg_un_stb_eq_rdy_int_en, (val))

#define ISR_CTRL_EN_2_VAL_rg_pma_rx_afifo_full_int_en(val)     REG_FLD_VAL(ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_full_int_en, (val))
#define ISR_CTRL_EN_2_VAL_rg_pma_rx_afifo_empty_int_en(val)    REG_FLD_VAL(ISR_CTRL_EN_2_FLD_rg_pma_rx_afifo_empty_int_en, (val))
#define ISR_CTRL_EN_2_VAL_rg_pma_tx_afifo_full_int_en(val)     REG_FLD_VAL(ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_full_int_en, (val))
#define ISR_CTRL_EN_2_VAL_rg_pma_tx_afifo_empty_int_en(val)    REG_FLD_VAL(ISR_CTRL_EN_2_FLD_rg_pma_tx_afifo_empty_int_en, (val))

#define ISR_CTRL_EN_3_VAL_rg_trans_sd_fail_cnt_clr(val)        REG_FLD_VAL(ISR_CTRL_EN_3_FLD_rg_trans_sd_fail_cnt_clr, (val))
#define ISR_CTRL_EN_3_VAL_rg_trans_laser_on_int_en(val)        REG_FLD_VAL(ISR_CTRL_EN_3_FLD_rg_trans_laser_on_int_en, (val))
#define ISR_CTRL_EN_3_VAL_rg_rx_sigdet_int_en(val)             REG_FLD_VAL(ISR_CTRL_EN_3_FLD_rg_rx_sigdet_int_en, (val))
#define ISR_CTRL_EN_3_VAL_rg_rx_freqdet_unlock_int_en(val)     REG_FLD_VAL(ISR_CTRL_EN_3_FLD_rg_rx_freqdet_unlock_int_en, (val))
#define ISR_CTRL_EN_3_VAL_rg_tx_freqdet_unlock_int_en(val)     REG_FLD_VAL(ISR_CTRL_EN_3_FLD_rg_tx_freqdet_unlock_int_en, (val))

#define ISR_SETTING_0_VAL_rg_trans_tx_fault_pro(val)           REG_FLD_VAL(ISR_SETTING_0_FLD_rg_trans_tx_fault_pro, (val))
#define ISR_SETTING_0_VAL_rg_trans_rx_los_pro(val)             REG_FLD_VAL(ISR_SETTING_0_FLD_rg_trans_rx_los_pro, (val))
#define ISR_SETTING_0_VAL_rg_trans_tx_sd_pro(val)              REG_FLD_VAL(ISR_SETTING_0_FLD_rg_trans_tx_sd_pro, (val))
#define ISR_SETTING_0_VAL_rg_trans_tx_sd_inv(val)              REG_FLD_VAL(ISR_SETTING_0_FLD_rg_trans_tx_sd_inv, (val))

#define ISR_SETTING_1_VAL_rg_pma_show_probe_en(val)            REG_FLD_VAL(ISR_SETTING_1_FLD_rg_pma_show_probe_en, (val))
#define ISR_SETTING_1_VAL_rg_ftcal_high(val)                   REG_FLD_VAL(ISR_SETTING_1_FLD_rg_ftcal_high, (val))
#define ISR_SETTING_1_VAL_rg_ftcal_low(val)                    REG_FLD_VAL(ISR_SETTING_1_FLD_rg_ftcal_low, (val))
#define ISR_SETTING_1_VAL_rg_trans_rx_laser_on_pro(val)        REG_FLD_VAL(ISR_SETTING_1_FLD_rg_trans_rx_laser_on_pro, (val))

#define ISR_SETTING_2_VAL_rg_trans_sd_fail_cnt(val)            REG_FLD_VAL(ISR_SETTING_2_FLD_rg_trans_sd_fail_cnt, (val))
#define ISR_SETTING_2_VAL_rg_pma_rx_afifo_reach_th(val)        REG_FLD_VAL(ISR_SETTING_2_FLD_rg_pma_rx_afifo_reach_th, (val))
#define ISR_SETTING_2_VAL_rg_pma_tx_afifo_reach_th(val)        REG_FLD_VAL(ISR_SETTING_2_FLD_rg_pma_tx_afifo_reach_th, (val))

#define ISR_SETTING_3_VAL_rg_trans_tx_fault_inv(val)           REG_FLD_VAL(ISR_SETTING_3_FLD_rg_trans_tx_fault_inv, (val))
#define ISR_SETTING_3_VAL_rg_trans_rx_sd_inv(val)              REG_FLD_VAL(ISR_SETTING_3_FLD_rg_trans_rx_sd_inv, (val))
#define ISR_SETTING_3_VAL_rg_trans_rx_data_inv(val)            REG_FLD_VAL(ISR_SETTING_3_FLD_rg_trans_rx_data_inv, (val))
#define ISR_SETTING_3_VAL_rg_trans_tx_data_inv(val)            REG_FLD_VAL(ISR_SETTING_3_FLD_rg_trans_tx_data_inv, (val))
#define ISR_SETTING_3_VAL_rg_trans_burst_inv(val)              REG_FLD_VAL(ISR_SETTING_3_FLD_rg_trans_burst_inv, (val))
#define ISR_SETTING_3_VAL_rg_tx_dly_en(val)                    REG_FLD_VAL(ISR_SETTING_3_FLD_rg_tx_dly_en, (val))

#define ISR_CTRL_5_VAL_DA_SSUSB_CDR_LCK2DATA_int(val)          REG_FLD_VAL(ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2DATA_int, (val))
#define ISR_CTRL_5_VAL_DA_SSUSB_CDR_LCK2REF_int(val)           REG_FLD_VAL(ISR_CTRL_5_FLD_DA_SSUSB_CDR_LCK2REF_int, (val))
#define ISR_CTRL_5_VAL_un_stb_pi_rdy_int(val)                  REG_FLD_VAL(ISR_CTRL_5_FLD_un_stb_pi_rdy_int, (val))
#define ISR_CTRL_5_VAL_un_stb_leq_rdy_int(val)                 REG_FLD_VAL(ISR_CTRL_5_FLD_un_stb_leq_rdy_int, (val))
#define ISR_CTRL_5_VAL_un_stb_sdos_rdy_int(val)                REG_FLD_VAL(ISR_CTRL_5_FLD_un_stb_sdos_rdy_int, (val))

#define ISR_CTRL_EN_5_VAL_rg_lck2data_to_lck2ref_en(val)       REG_FLD_VAL(ISR_CTRL_EN_5_FLD_rg_lck2data_to_lck2ref_en, (val))
#define ISR_CTRL_EN_5_VAL_rg_lck2ref_to_lck2data_en(val)       REG_FLD_VAL(ISR_CTRL_EN_5_FLD_rg_lck2ref_to_lck2data_en, (val))
#define ISR_CTRL_EN_5_VAL_rg_un_stb_pi_rdy_int_en(val)         REG_FLD_VAL(ISR_CTRL_EN_5_FLD_rg_un_stb_pi_rdy_int_en, (val))
#define ISR_CTRL_EN_5_VAL_rg_un_stb_leq_rdy_int_en(val)        REG_FLD_VAL(ISR_CTRL_EN_5_FLD_rg_un_stb_leq_rdy_int_en, (val))
#define ISR_CTRL_EN_5_VAL_rg_un_stb_sdos_rdy_int_en(val)       REG_FLD_VAL(ISR_CTRL_EN_5_FLD_rg_un_stb_sdos_rdy_int_en, (val))

#define ISR_CTRL_6_VAL_stb_eq_rdy_int(val)                     REG_FLD_VAL(ISR_CTRL_6_FLD_stb_eq_rdy_int, (val))
#define ISR_CTRL_6_VAL_stb_pi_rdy_int(val)                     REG_FLD_VAL(ISR_CTRL_6_FLD_stb_pi_rdy_int, (val))
#define ISR_CTRL_6_VAL_rx_freqdet_lock_int(val)                REG_FLD_VAL(ISR_CTRL_6_FLD_rx_freqdet_lock_int, (val))
#define ISR_CTRL_6_VAL_stb_sdos_rdy_int(val)                   REG_FLD_VAL(ISR_CTRL_6_FLD_stb_sdos_rdy_int, (val))
#define ISR_CTRL_6_VAL_stb_saos_rdy_int(val)                   REG_FLD_VAL(ISR_CTRL_6_FLD_stb_saos_rdy_int, (val))
#define ISR_CTRL_6_VAL_stb_leq_rdy_int(val)                    REG_FLD_VAL(ISR_CTRL_6_FLD_stb_leq_rdy_int, (val))
#define ISR_CTRL_6_VAL_link_erro_int(val)                      REG_FLD_VAL(ISR_CTRL_6_FLD_link_erro_int, (val))

#define ISR_CTRL_EN_6_VAL_rg_stb_eq_rdy_int_en(val)            REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_stb_eq_rdy_int_en, (val))
#define ISR_CTRL_EN_6_VAL_rg_stb_pi_rdy_int_en(val)            REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_stb_pi_rdy_int_en, (val))
#define ISR_CTRL_EN_6_VAL_rg_rx_freqdet_lock_int_en(val)       REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_rx_freqdet_lock_int_en, (val))
#define ISR_CTRL_EN_6_VAL_rg_stb_sdos_rdy_int_en(val)          REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_stb_sdos_rdy_int_en, (val))
#define ISR_CTRL_EN_6_VAL_rg_stb_saos_rdy_int_en(val)          REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_stb_saos_rdy_int_en, (val))
#define ISR_CTRL_EN_6_VAL_rg_stb_leq_rdy_int_en(val)           REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_stb_leq_rdy_int_en, (val))
#define ISR_CTRL_EN_6_VAL_rg_link_erro_int_en(val)             REG_FLD_VAL(ISR_CTRL_EN_6_FLD_rg_link_erro_int_en, (val))

#define QP_TX_DBG_0_VAL_ro_qp_tx_debug3(val)                   REG_FLD_VAL(QP_TX_DBG_0_FLD_ro_qp_tx_debug3, (val))
#define QP_TX_DBG_0_VAL_ro_qp_tx_debug2(val)                   REG_FLD_VAL(QP_TX_DBG_0_FLD_ro_qp_tx_debug2, (val))
#define QP_TX_DBG_0_VAL_ro_qp_tx_debug1(val)                   REG_FLD_VAL(QP_TX_DBG_0_FLD_ro_qp_tx_debug1, (val))
#define QP_TX_DBG_0_VAL_ro_qp_tx_debug0(val)                   REG_FLD_VAL(QP_TX_DBG_0_FLD_ro_qp_tx_debug0, (val))

#define QP_TX_DBG_1_VAL_ro_qp_tx_debug7(val)                   REG_FLD_VAL(QP_TX_DBG_1_FLD_ro_qp_tx_debug7, (val))
#define QP_TX_DBG_1_VAL_ro_qp_tx_debug6(val)                   REG_FLD_VAL(QP_TX_DBG_1_FLD_ro_qp_tx_debug6, (val))
#define QP_TX_DBG_1_VAL_ro_qp_tx_debug5(val)                   REG_FLD_VAL(QP_TX_DBG_1_FLD_ro_qp_tx_debug5, (val))
#define QP_TX_DBG_1_VAL_ro_qp_tx_debug4(val)                   REG_FLD_VAL(QP_TX_DBG_1_FLD_ro_qp_tx_debug4, (val))

#define QP_LFPS_DBG_0_VAL_ro_rx_lfps_debug3(val)               REG_FLD_VAL(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug3, (val))
#define QP_LFPS_DBG_0_VAL_ro_rx_lfps_debug2(val)               REG_FLD_VAL(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug2, (val))
#define QP_LFPS_DBG_0_VAL_ro_rx_lfps_debug1(val)               REG_FLD_VAL(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug1, (val))
#define QP_LFPS_DBG_0_VAL_ro_rx_lfps_debug0(val)               REG_FLD_VAL(QP_LFPS_DBG_0_FLD_ro_rx_lfps_debug0, (val))

#define QP_LFPS_DBG_1_VAL_ro_rx_lfps_debug7(val)               REG_FLD_VAL(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug7, (val))
#define QP_LFPS_DBG_1_VAL_ro_rx_lfps_debug6(val)               REG_FLD_VAL(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug6, (val))
#define QP_LFPS_DBG_1_VAL_ro_rx_lfps_debug5(val)               REG_FLD_VAL(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug5, (val))
#define QP_LFPS_DBG_1_VAL_ro_rx_lfps_debug4(val)               REG_FLD_VAL(QP_LFPS_DBG_1_FLD_ro_rx_lfps_debug4, (val))

#define QP_LFPS_DBG_2_VAL_ro_rx_lfps_debug8(val)               REG_FLD_VAL(QP_LFPS_DBG_2_FLD_ro_rx_lfps_debug8, (val))

#define QP_PRBS_DBG_0_VAL_ro_bistctl_prbs_err_cnt(val)         REG_FLD_VAL(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_err_cnt, (val))
#define QP_PRBS_DBG_0_VAL_ro_bistctl_prbs_compare(val)         REG_FLD_VAL(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_compare, (val))
#define QP_PRBS_DBG_0_VAL_ro_bistctl_prbs_fail(val)            REG_FLD_VAL(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_fail, (val))
#define QP_PRBS_DBG_0_VAL_ro_bistctl_prbs_done(val)            REG_FLD_VAL(QP_PRBS_DBG_0_FLD_ro_bistctl_prbs_done, (val))

#define QP_PRBS_DBG_1_VAL_ro_bistctl_prbs_bit_err_fw_using(val) REG_FLD_VAL(QP_PRBS_DBG_1_FLD_ro_bistctl_prbs_bit_err_fw_using, (val))

#define QP_PRBS_DBG_2_VAL_ro_bistctl_prbs_bit_err_period_num(val) REG_FLD_VAL(QP_PRBS_DBG_2_FLD_ro_bistctl_prbs_bit_err_period_num, (val))

#define QP_PRBS_DBG_3_VAL_ro_prbs_bist_debug_3(val)            REG_FLD_VAL(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_3, (val))
#define QP_PRBS_DBG_3_VAL_ro_prbs_bist_debug_2(val)            REG_FLD_VAL(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_2, (val))
#define QP_PRBS_DBG_3_VAL_ro_prbs_bist_debug_1(val)            REG_FLD_VAL(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_1, (val))
#define QP_PRBS_DBG_3_VAL_ro_prbs_bist_debug_0(val)            REG_FLD_VAL(QP_PRBS_DBG_3_FLD_ro_prbs_bist_debug_0, (val))

#define QP_PRBS_DBG_4_VAL_ro_prbs_bist_debug_7(val)            REG_FLD_VAL(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_7, (val))
#define QP_PRBS_DBG_4_VAL_ro_prbs_bist_debug_6(val)            REG_FLD_VAL(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_6, (val))
#define QP_PRBS_DBG_4_VAL_ro_prbs_bist_debug_5(val)            REG_FLD_VAL(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_5, (val))
#define QP_PRBS_DBG_4_VAL_ro_prbs_bist_debug_4(val)            REG_FLD_VAL(QP_PRBS_DBG_4_FLD_ro_prbs_bist_debug_4, (val))

#define QP_PRBS_DBG_5_VAL_ro_prbs_bist_debug_10(val)           REG_FLD_VAL(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_10, (val))
#define QP_PRBS_DBG_5_VAL_ro_prbs_bist_debug_9(val)            REG_FLD_VAL(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_9, (val))
#define QP_PRBS_DBG_5_VAL_ro_prbs_bist_debug_8(val)            REG_FLD_VAL(QP_PRBS_DBG_5_FLD_ro_prbs_bist_debug_8, (val))

#define QP_TX_BIST_DBG_0_VAL_ro_bist_status(val)               REG_FLD_VAL(QP_TX_BIST_DBG_0_FLD_ro_bist_status, (val))
#define QP_TX_BIST_DBG_0_VAL_ro_bist_len_error(val)            REG_FLD_VAL(QP_TX_BIST_DBG_0_FLD_ro_bist_len_error, (val))
#define QP_TX_BIST_DBG_0_VAL_ro_bist_chk_done(val)             REG_FLD_VAL(QP_TX_BIST_DBG_0_FLD_ro_bist_chk_done, (val))
#define QP_TX_BIST_DBG_0_VAL_ro_bist_error_cnt(val)            REG_FLD_VAL(QP_TX_BIST_DBG_0_FLD_ro_bist_error_cnt, (val))

#define QP_TX_BIST_DBG_1_VAL_ro_pcs_bist_debug(val)            REG_FLD_VAL(QP_TX_BIST_DBG_1_FLD_ro_pcs_bist_debug, (val))

#define QP_R2T_AFIFO_DBG_VAL_ro_r2t_afifo_debug(val)           REG_FLD_VAL(QP_R2T_AFIFO_DBG_FLD_ro_r2t_afifo_debug, (val))

#define QP_T2R_AFIFO_DBG_VAL_ro_t2r_afifo_debug(val)           REG_FLD_VAL(QP_T2R_AFIFO_DBG_FLD_ro_t2r_afifo_debug, (val))
#endif
#ifdef __cplusplus
}
#endif

#endif // __qp_pma_top_REGS_H__

