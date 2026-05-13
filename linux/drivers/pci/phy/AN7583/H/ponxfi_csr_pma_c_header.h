#ifndef __ponxfi_csr_pma_REGS_H__
#define __ponxfi_csr_pma_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- ponxfi_csr_pma Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_lcpll_force_on         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_hw_ctrl_mode     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_en_inv           : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_sw_lcpll_en            : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_LCPLL_PWCTL_SETTING_0, *PREG_SS_LCPLL_PWCTL_SETTING_0;

typedef struct
{
    

        FIELD rg_lcpll_man_pwdb         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_en_timer         : 8;
        FIELD rg_lcpll_pcw_man_load_timer : 8;
        FIELD rg_lcpll_ck_stb_timer     : 8;
    
    
} REG_SS_LCPLL_PWCTL_SETTING_1, *PREG_SS_LCPLL_PWCTL_SETTING_1;

typedef struct
{
    

        FIELD rg_tdc_ck_stb_timer       : 8;
        FIELD rg_tdc_mst_en             : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_SS_LCPLL_PWCTL_SETTING_2, *PREG_SS_LCPLL_PWCTL_SETTING_2;

typedef struct
{
    

        FIELD rg_lcpll_ledck_div        : 4;
        FIELD rsv_4                     : 28;
    
    
} REG_SS_LCPLL_PWCTL_DBG_SETTING, *PREG_SS_LCPLL_PWCTL_DBG_SETTING;

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
    
    
} REG_SS_LCPLL_TDC_PW_0, *PREG_SS_LCPLL_TDC_PW_0;

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
    
    
} REG_SS_LCPLL_TDC_PW_1, *PREG_SS_LCPLL_TDC_PW_1;

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
    
    
} REG_SS_LCPLL_TDC_PW_2, *PREG_SS_LCPLL_TDC_PW_2;

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
    
    
} REG_SS_LCPLL_TDC_PW_3, *PREG_SS_LCPLL_TDC_PW_3;

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
    
    
} REG_SS_LCPLL_TDC_PW_4, *PREG_SS_LCPLL_TDC_PW_4;

typedef struct
{
    

        FIELD rg_lcpll_tdc_en_mux       : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_tdc_autoen       : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_autok_tdc        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdc_sync_in_mode : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_LCPLL_TDC_PW_5, *PREG_SS_LCPLL_TDC_PW_5;

typedef struct
{
    

        FIELD rg_lcpll_pon_rx_cdr_divtdc : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_ki               : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_lcpll_tdc_offset       : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_LCPLL_TDC_FLT_0, *PREG_SS_LCPLL_TDC_FLT_0;

typedef struct
{
    

        FIELD rg_lcpll_gpon_sel         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_lcpll_a_tdc            : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_lcpll_tdc_gain         : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_LCPLL_TDC_FLT_1, *PREG_SS_LCPLL_TDC_FLT_1;

typedef struct
{
    

        FIELD rg_lcpll_ncpo_value       : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_SS_LCPLL_TDC_FLT_2, *PREG_SS_LCPLL_TDC_FLT_2;

typedef struct
{
    

        FIELD rg_lcpll_ncpo_shift       : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_lcpll_ncpo_load        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_lcpll_ncpo_hold        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lcpll_tdc_swrst        : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_LCPLL_TDC_FLT_3, *PREG_SS_LCPLL_TDC_FLT_3;

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
    
    
} REG_SS_LCPLL_TDC_FLT_4, *PREG_SS_LCPLL_TDC_FLT_4;

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
    
    
} REG_SS_LCPLL_TDC_FLT_5, *PREG_SS_LCPLL_TDC_FLT_5;

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
    
    
} REG_SS_LCPLL_TDC_FLT_6, *PREG_SS_LCPLL_TDC_FLT_6;

typedef struct
{
    

        FIELD rg_lcpll_tdcck_inv_en     : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_SS_LCPLL_TDC_FLT_7, *PREG_SS_LCPLL_TDC_FLT_7;

typedef struct
{
    

        FIELD rg_lcpll_pon_hrdds_pcw_ncpo_gpon : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_SS_LCPLL_TDC_PCW_1, *PREG_SS_LCPLL_TDC_PCW_1;

typedef struct
{
    

        FIELD rg_lcpll_pon_hrdds_pcw_ncpo_epon : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_SS_LCPLL_TDC_PCW_2, *PREG_SS_LCPLL_TDC_PCW_2;

typedef struct
{
    

        FIELD ro_lcpll_tdc_tdcpw_st     : 4;
        FIELD rsv_4                     : 4;
        FIELD ro_lcpll_tdc_st           : 5;
        FIELD rsv_13                    : 3;
        FIELD ro_lcpll_tdc_dig          : 12;
        FIELD rsv_28                    : 4;
    
    
} REG_SS_LCPLL_TDC_RO_1, *PREG_SS_LCPLL_TDC_RO_1;

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
    
    
} REG_SS_LCPLL_TDC_RO_2, *PREG_SS_LCPLL_TDC_RO_2;

typedef struct
{
    

        FIELD ro_lcpll_tdc_offset       : 11;
        FIELD ro_lcpll_tdc_cal_done     : 1;
        FIELD ro_lcpll_tdc_en           : 1;
        FIELD ro_lcpll_tdc_decode       : 3;
        FIELD ro_lcpll_tdc_gain         : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_LCPLL_TDC_RO_3, *PREG_SS_LCPLL_TDC_RO_3;

typedef struct
{
    

        FIELD ro_lcpll_tdc_dpma_dds1_pcw_ncpo : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_SS_LCPLL_TDC_RO_4, *PREG_SS_LCPLL_TDC_RO_4;

typedef struct
{
    

        FIELD ro_lcpll_tdc_dpma_tdc_leadlag : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_lcpll_tdc_dpma_tdc_d   : 8;
        FIELD ro_lcpll_tdc_dpma_tdc_c   : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_SS_LCPLL_TDC_RO_5, *PREG_SS_LCPLL_TDC_RO_5;

typedef struct
{
    

        FIELD rg_lcpll_ki_hold          : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_SS_LCPLL_TDC_CTRL_0, *PREG_SS_LCPLL_TDC_CTRL_0;

typedef struct
{
    

        FIELD rg_x_min                  : 11;
        FIELD rsv_11                    : 5;
        FIELD rg_x_max                  : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_RX_EYE_TOP_EYEINDEX_CTRL_0, *PREG_RX_EYE_TOP_EYEINDEX_CTRL_0;

typedef struct
{
    

        FIELD rg_y_min                  : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_y_max                  : 7;
        FIELD rsv_15                    : 1;
        FIELD rg_index_mode             : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_RX_EYE_TOP_EYEINDEX_CTRL_1, *PREG_RX_EYE_TOP_EYEINDEX_CTRL_1;

typedef struct
{
    

        FIELD rg_eyedur                 : 20;
        FIELD rsv_20                    : 12;
    
    
} REG_RX_EYE_TOP_EYEINDEX_CTRL_2, *PREG_RX_EYE_TOP_EYEINDEX_CTRL_2;

typedef struct
{
    

        FIELD rg_eye_nextpts_sel        : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_eye_nextpts_toggle     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_eye_nextpts            : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_RX_EYE_TOP_EYEINDEX_CTRL_3, *PREG_RX_EYE_TOP_EYEINDEX_CTRL_3;

typedef struct
{
    

        FIELD rg_eyecnt_hth             : 8;
        FIELD rg_eyecnt_vth             : 8;
        FIELD rsv_16                    : 16;
    
    
} REG_RX_EYE_TOP_EYEOPENING_CTRL_0, *PREG_RX_EYE_TOP_EYEOPENING_CTRL_0;

typedef struct
{
    

        FIELD rg_eo_hth                 : 11;
        FIELD rsv_11                    : 5;
        FIELD rg_eo_vth                 : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_RX_EYE_TOP_EYEOPENING_CTRL_1, *PREG_RX_EYE_TOP_EYEOPENING_CTRL_1;

typedef struct
{
    

        FIELD rg_cntlen                 : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_cntforever             : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_eye_mask               : 8;
    
    
} REG_RX_EYE_TOP_EYECNT_CTRL_0, *PREG_RX_EYE_TOP_EYECNT_CTRL_0;

typedef struct
{
    

        FIELD rg_disb_eyedur_en         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_eyedur_init_b     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_eyedur_en        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_eyedur_init_b    : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_EYE_TOP_EYECNT_CTRL_1, *PREG_RX_EYE_TOP_EYECNT_CTRL_1;

typedef struct
{
    

        FIELD rg_eyecnt_fast            : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_data_shift             : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RX_EYE_TOP_EYECNT_CTRL_2, *PREG_RX_EYE_TOP_EYECNT_CTRL_2;

typedef struct
{
    

        FIELD rg_osc_speed_opt          : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_rx_os_start            : 16;
        FIELD rsv_24                    : 8;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_0, *PREG_RX_CTRL_SEQUENCE_CTRL_0;

typedef struct
{
    

        FIELD rg_rx_pical_start         : 16;
        FIELD rg_rx_pical_end           : 16;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_1, *PREG_RX_CTRL_SEQUENCE_CTRL_1;

typedef struct
{
    

        FIELD rg_rx_pdos_start          : 16;
        FIELD rg_rx_pdos_end            : 16;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_2, *PREG_RX_CTRL_SEQUENCE_CTRL_2;

typedef struct
{
    

        FIELD rg_rx_feos_start          : 16;
        FIELD rg_rx_feos_end            : 16;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_3, *PREG_RX_CTRL_SEQUENCE_CTRL_3;

typedef struct
{
    

        FIELD rg_rx_sdcal_start         : 16;
        FIELD rg_rx_sdcal_end           : 16;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_4, *PREG_RX_CTRL_SEQUENCE_CTRL_4;

typedef struct
{
    

        FIELD rg_rx_blwc_rdy_en         : 16;
        FIELD rg_rx_rdy                 : 16;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_5, *PREG_RX_CTRL_SEQUENCE_CTRL_5;

typedef struct
{
    

        FIELD rg_rx_os_end              : 16;
        FIELD rsv_16                    : 16;
    
    
} REG_RX_CTRL_SEQUENCE_CTRL_6, *PREG_RX_CTRL_SEQUENCE_CTRL_6;

typedef struct
{
    

        FIELD rg_disb_rx_os_en          : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_rx_pical_en       : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_rx_pdos_en        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_rx_feos_en        : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_CTRL_SEQUENCE_DISB_CTRL_0, *PREG_RX_CTRL_SEQUENCE_DISB_CTRL_0;

typedef struct
{
    

        FIELD rg_disb_rx_sdcal_en       : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_rx_os_rdy         : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_rx_blwc_en        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_rx_rdy            : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_CTRL_SEQUENCE_DISB_CTRL_1, *PREG_RX_CTRL_SEQUENCE_DISB_CTRL_1;

typedef struct
{
    

        FIELD rg_force_rx_os_en         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_rx_pical_en      : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_rx_pdos_en       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_rx_feos_en       : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_CTRL_SEQUENCE_FORCE_CTRL_0, *PREG_RX_CTRL_SEQUENCE_FORCE_CTRL_0;

typedef struct
{
    

        FIELD rg_force_rx_sdcal_en      : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_rx_os_rdy        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_rx_blwc_en       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_rx_rdy           : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_CTRL_SEQUENCE_FORCE_CTRL_1, *PREG_RX_CTRL_SEQUENCE_FORCE_CTRL_1;

typedef struct
{
    

        FIELD rg_eq_en_delay            : 8;
        FIELD rg_heo_mask               : 11;
        FIELD rsv_19                    : 5;
        FIELD rg_veo_mask               : 8;
    
    
} REG_PHY_EQ_CTRL_0, *PREG_PHY_EQ_CTRL_0;

typedef struct
{
    

        FIELD rg_a_lgain                : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_a_mgain                : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_heo_emphasis           : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_b_zero_sel             : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_PHY_EQ_CTRL_1, *PREG_PHY_EQ_CTRL_1;

typedef struct
{
    

        FIELD rg_a_sel                  : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_fom_num_order          : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_eq_debug_sel           : 2;
        FIELD rsv_18                    : 14;
    
    
} REG_PHY_EQ_CTRL_2, *PREG_PHY_EQ_CTRL_2;

typedef struct
{
    

        FIELD rg_fe_gain_ctrl_0         : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_fe_gain_ctrl_1         : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_fe_gain_ctrl_2         : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_fe_gain_ctrl_3         : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_PHY_EQ_CTRL_3, *PREG_PHY_EQ_CTRL_3;

typedef struct
{
    

        FIELD rg_fe_gain_ctrl_4         : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_fe_gain_ctrl_5         : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_fe_gain_ctrl_6         : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_fe_gain_ctrl_7         : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_PHY_EQ_CTRL_4, *PREG_PHY_EQ_CTRL_4;

typedef struct
{
    

        FIELD rg_fe_gain_ctrl_8         : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_fe_gain_ctrl_9         : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_fe_gain_ctrl_10        : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_fe_gain_ctrl_11        : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_PHY_EQ_CTRL_5, *PREG_PHY_EQ_CTRL_5;

typedef struct
{
    

        FIELD rg_fe_gain_ctrl_12        : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_fe_gain_ctrl_13        : 2;
        FIELD rsv_10                    : 6;
        FIELD rg_fe_gain_ctrl_14        : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_fe_gain_ctrl_15        : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_PHY_EQ_CTRL_6, *PREG_PHY_EQ_CTRL_6;

typedef struct
{
    

        FIELD rg_fe_peaking_ctrl_0      : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_fe_peaking_ctrl_1      : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_fe_peaking_ctrl_2      : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_fe_peaking_ctrl_3      : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_PHY_EQ_CTRL_7, *PREG_PHY_EQ_CTRL_7;

typedef struct
{
    

        FIELD rg_fe_peaking_ctrl_4      : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_fe_peaking_ctrl_5      : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_fe_peaking_ctrl_6      : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_fe_peaking_ctrl_7      : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_PHY_EQ_CTRL_8, *PREG_PHY_EQ_CTRL_8;

typedef struct
{
    

        FIELD rg_fe_peaking_ctrl_8      : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_fe_peaking_ctrl_9      : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_fe_peaking_ctrl_10     : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_fe_peaking_ctrl_11     : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_PHY_EQ_CTRL_9, *PREG_PHY_EQ_CTRL_9;

typedef struct
{
    

        FIELD rg_fe_peaking_ctrl_12     : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_fe_peaking_ctrl_13     : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_fe_peaking_ctrl_14     : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_fe_peaking_ctrl_15     : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_PHY_EQ_CTRL_10, *PREG_PHY_EQ_CTRL_10;

typedef struct
{
    

        FIELD rg_lfsel                  : 8;
        FIELD rg_eq_force_blwc_freeze   : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_SS_RX_FEOS, *PREG_SS_RX_FEOS;

typedef struct
{
    

        FIELD rg_eq_blwc_pol            : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_eq_blwc_gain           : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_eq_blwc_cnt_top_lim    : 7;
        FIELD rg_eq_blwc_cnt_bot_lim    : 7;
        FIELD rsv_30                    : 2;
    
    
} REG_SS_RX_BLWC, *PREG_SS_RX_BLWC;

typedef struct
{
    

        FIELD rg_lock_cyclecnt          : 16;
        FIELD rg_unlock_cyclecnt        : 16;
    
    
} REG_SS_RX_FREQ_DET_1, *PREG_SS_RX_FREQ_DET_1;

typedef struct
{
    

        FIELD rg_lock_target_beg        : 16;
        FIELD rg_lock_target_end        : 16;
    
    
} REG_SS_RX_FREQ_DET_2, *PREG_SS_RX_FREQ_DET_2;

typedef struct
{
    

        FIELD rg_unlock_target_beg      : 16;
        FIELD rg_unlock_target_end      : 16;
    
    
} REG_SS_RX_FREQ_DET_3, *PREG_SS_RX_FREQ_DET_3;

typedef struct
{
    

        FIELD rg_freqlock_det_en        : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_lock_cnt_clear         : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_lock_lockth            : 4;
        FIELD rg_unlockth               : 4;
        FIELD rg_wait_100us             : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_SS_RX_FREQ_DET_4, *PREG_SS_RX_FREQ_DET_4;

typedef struct
{
    

        FIELD rg_cdrlpi                 : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_kpgain                 : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_eq_pi_cal_rdy_dly      : 2;
        FIELD rsv_18                    : 14;
    
    
} REG_SS_RX_PI_CAL, *PREG_SS_RX_PI_CAL;

typedef struct
{
    

        FIELD rg_sim_fast_en            : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_cal_1us_set            : 8;
        FIELD rg_cal_stb                : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_cal_cyc                : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_SS_RX_CAL_1, *PREG_SS_RX_CAL_1;

typedef struct
{
    

        FIELD rg_cal_os_pulse           : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_cal_out_os             : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_cal_cyc_time           : 2;
        FIELD rsv_18                    : 14;
    
    
} REG_SS_RX_CAL_2, *PREG_SS_RX_CAL_2;

typedef struct
{
    

        FIELD rg_sigdet_win_size        : 8;
        FIELD rg_sigdet_vld_times       : 8;
        FIELD rg_sigdet_win_vld_times   : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_sigdet_win_nonvld_times : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_SS_RX_SIGDET_0, *PREG_SS_RX_SIGDET_0;

typedef struct
{
    

        FIELD rg_sigdet_en              : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_SS_RX_SIGDET_1, *PREG_SS_RX_SIGDET_1;

typedef struct
{
    

        FIELD rg_kband_prediv           : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_fpkdiv                 : 11;
        FIELD rsv_19                    : 5;
        FIELD rg_kband_kfc              : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_SS_RX_FLL_0, *PREG_SS_RX_FLL_0;

typedef struct
{
    

        FIELD rg_ipath_idac             : 11;
        FIELD rsv_11                    : 5;
        FIELD rg_settle_time_sel        : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_symbol_wd              : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_RX_FLL_1, *PREG_SS_RX_FLL_1;

typedef struct
{
    

        FIELD rg_prbs_sel               : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_amp                    : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_ck_rate                : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_debug_sel              : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_RX_FLL_2, *PREG_SS_RX_FLL_2;

typedef struct
{
    

        FIELD rg_fll_dig_rst_force_en   : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_fll_dig_rstb_force     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_icdr_kband_done_force_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_icdr_kband_done_force  : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_RX_FLL_3, *PREG_SS_RX_FLL_3;

typedef struct
{
    

        FIELD rg_fll_repli              : 1;
        FIELD rg_fll_cor                : 1;
        FIELD rsv_2                     : 6;
        FIELD rg_fll_idac_repli         : 11;
        FIELD rsv_19                    : 13;
    
    
} REG_SS_RX_FLL_4, *PREG_SS_RX_FLL_4;

typedef struct
{
    

        FIELD rg_fll_idac_max           : 11;
        FIELD rsv_11                    : 5;
        FIELD rg_fll_idac_min           : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_RX_FLL_5, *PREG_SS_RX_FLL_5;

typedef struct
{
    

        FIELD ro_lnx_sw_fll_ro_1_latch_en : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_lnx_sw_fll_ro_2_latch_en : 1;
        FIELD rsv_9                     : 7;
        FIELD ro_lnx_sw_fll_ro_3_latch_en : 1;
        FIELD rsv_17                    : 7;
        FIELD ro_lnx_sw_fll_ro_4_latch_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_RX_FLL_6, *PREG_SS_RX_FLL_6;

typedef struct
{
    

        FIELD ro_adc_freq               : 20;
        FIELD rsv_20                    : 12;
    
    
} REG_SS_RX_FLL_7, *PREG_SS_RX_FLL_7;

typedef struct
{
    

        FIELD ro_cor_gain               : 32;
    
    
} REG_SS_RX_FLL_8, *PREG_SS_RX_FLL_8;

typedef struct
{
    

        FIELD ro_fll_idac               : 11;
        FIELD rsv_11                    : 5;
        FIELD ro_idacf                  : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_RX_FLL_9, *PREG_SS_RX_FLL_9;

typedef struct
{
    

        FIELD ro_da_idac                : 11;
        FIELD rsv_11                    : 5;
        FIELD ro_fll_idac_repli         : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_SS_RX_FLL_a, *PREG_SS_RX_FLL_a;

typedef struct
{
    

        FIELD rg_load_en                : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_ad_sleep_en            : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_SS_RX_FLL_b, *PREG_SS_RX_FLL_b;

typedef struct
{
    

        FIELD rg_data_blwc_add          : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_eye_blwc_add           : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_sap_sel                : 3;
        FIELD rsv_19                    : 13;
    
    
} REG_RX_PDOS_CTRL_0, *PREG_RX_PDOS_CTRL_0;

typedef struct
{
    

        FIELD rg_eq_blwc_rst_b          : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_feos_rst_b             : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_eq_pi_cal_rst_b        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_cal_rst_b              : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_RESET_0, *PREG_RX_RESET_0;

typedef struct
{
    

        FIELD rg_pdos_rst_b             : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_sigdet_rst_b           : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_unlock_stb             : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_RX_RESET_1, *PREG_RX_RESET_1;

typedef struct
{
    

        FIELD rg_probe0_en              : 8;
        FIELD rg_probe1_en              : 8;
        FIELD rg_rx_debug_sel           : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_ro_toggle              : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DEBUG_0, *PREG_RX_DEBUG_0;

typedef struct
{
    

        FIELD rg_bistctl_pat_sel        : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_bistctl_pat_tx_en      : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_bistctl_pat_rx_check_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_bistctl_io_data_inv    : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_BISTCTL_CONTROL, *PREG_BISTCTL_CONTROL;

typedef struct
{
    

        FIELD bistctl_align_pattern     : 32;
    
    
} REG_BISTCTL_ALIGN_PAT, *PREG_BISTCTL_ALIGN_PAT;

typedef struct
{
    

        FIELD rg_bistctl_program_data_0 : 32;
    
    
} REG_BISTCTL_PROGRAM_PAT_0, *PREG_BISTCTL_PROGRAM_PAT_0;

typedef struct
{
    

        FIELD rg_bistctl_program_data_1 : 32;
    
    
} REG_BISTCTL_PROGRAM_PAT_1, *PREG_BISTCTL_PROGRAM_PAT_1;

typedef struct
{
    

        FIELD rg_bist_tx_data_pollution : 16;
        FIELD rg_bist_tx_data_pollution_latch : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_BISTCTL_POLLUTION, *PREG_BISTCTL_POLLUTION;

typedef struct
{
    

        FIELD bistctl_prbs_init_seed    : 32;
    
    
} REG_BISTCTL_PRBS_INITIAL_SEED, *PREG_BISTCTL_PRBS_INITIAL_SEED;

typedef struct
{
    

        FIELD ro_bistctl_prbs_compare   : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_bistctl_prbs_fail      : 1;
        FIELD rsv_9                     : 7;
        FIELD ro_bistctl_prbs_done      : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_BISTCTL_PRBS_EVENT, *PREG_BISTCTL_PRBS_EVENT;

typedef struct
{
    

        FIELD ro_bistctl_prbs_err_cnt   : 16;
        FIELD rsv_16                    : 16;
    
    
} REG_BISTCTL_PRBS_ERRCNT, *PREG_BISTCTL_PRBS_ERRCNT;

typedef struct
{
    

        FIELD rg_bistctl_prbs_fail_threshold : 16;
        FIELD rg_bistctl_sq_wave_reach  : 4;
        FIELD rsv_20                    : 12;
    
    
} REG_BISTCTL_PRBS_FAIL_THRESHOLD, *PREG_BISTCTL_PRBS_FAIL_THRESHOLD;

typedef struct
{
    

        FIELD ro_dac_do                 : 7;
        FIELD rsv_7                     : 1;
        FIELD ro_dac_d1                 : 7;
        FIELD rsv_15                    : 1;
        FIELD ro_dac_eo                 : 7;
        FIELD rsv_23                    : 1;
        FIELD ro_dac_e1                 : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_TORGS_DEBUG_0, *PREG_RX_TORGS_DEBUG_0;

typedef struct
{
    

        FIELD ro_dac_eye                : 7;
        FIELD rsv_7                     : 1;
        FIELD ro_blwc_offset            : 7;
        FIELD rsv_15                    : 1;
        FIELD ro_blwc_sum               : 7;
        FIELD rsv_23                    : 1;
        FIELD ro_blwc_filter_din        : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_TORGS_DEBUG_1, *PREG_RX_TORGS_DEBUG_1;

typedef struct
{
    

        FIELD ro_fl_out2                : 16;
        FIELD ro_pi_cal_data_out        : 7;
        FIELD rsv_23                    : 1;
        FIELD ro_cal_dir                : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_TORGS_DEBUG_2, *PREG_RX_TORGS_DEBUG_2;

typedef struct
{
    

        FIELD ro_cal_out                : 5;
        FIELD rsv_5                     : 3;
        FIELD ro_cal_en                 : 1;
        FIELD rsv_9                     : 7;
        FIELD ro_lslock_cnt2            : 4;
        FIELD rsv_20                    : 12;
    
    
} REG_RX_TORGS_DEBUG_3, *PREG_RX_TORGS_DEBUG_3;

typedef struct
{
    

        FIELD ro_heo                    : 11;
        FIELD rsv_11                    : 5;
        FIELD ro_veo                    : 8;
        FIELD eyecnt_rdy                : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_TORGS_DEBUG_4, *PREG_RX_TORGS_DEBUG_4;

typedef struct
{
    

        FIELD heo_center                : 11;
        FIELD rsv_11                    : 5;
        FIELD heo_rdy                   : 1;
        FIELD rsv_17                    : 7;
        FIELD veo_rdy                   : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_TORGS_DEBUG_5, *PREG_RX_TORGS_DEBUG_5;

typedef struct
{
    

        FIELD ro_cntlen                 : 20;
        FIELD rsv_20                    : 12;
    
    
} REG_RX_TORGS_DEBUG_6, *PREG_RX_TORGS_DEBUG_6;

typedef struct
{
    

        FIELD eyecnt                    : 20;
        FIELD rsv_20                    : 12;
    
    
} REG_RX_TORGS_DEBUG_7, *PREG_RX_TORGS_DEBUG_7;

typedef struct
{
    

        FIELD fom_num                   : 15;
        FIELD rsv_15                    : 1;
        FIELD fom_num_type              : 5;
        FIELD rsv_21                    : 3;
        FIELD fom_num_type_good         : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RX_TORGS_DEBUG_8, *PREG_RX_TORGS_DEBUG_8;

typedef struct
{
    

        FIELD rgs_ipll_dig_mon          : 6;
        FIELD rsv_6                     : 2;
        FIELD ro_feos_out               : 6;
        FIELD rsv_14                    : 2;
        FIELD eo_x_done                 : 1;
        FIELD rsv_17                    : 7;
        FIELD eo_y_done                 : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_TORGS_DEBUG_9, *PREG_RX_TORGS_DEBUG_9;

typedef struct
{
    

        FIELD eye_er                    : 11;
        FIELD rsv_11                    : 5;
        FIELD eye_el                    : 11;
        FIELD rsv_27                    : 5;
    
    
} REG_RX_TORGS_DEBUG_10, *PREG_RX_TORGS_DEBUG_10;

typedef struct
{
    

        FIELD tx_top_rst_b              : 1;
        FIELD rsv_1                     : 7;
        FIELD txcalib_rst_b             : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_SS_TX_RST_B, *PREG_SS_TX_RST_B;

typedef struct
{
    

        FIELD rg_txcalib_p_en           : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_txcalib_force_termp_calen : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_txcalib_force_termp_sel_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_txcalib_force_termp_sel : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_SS_TX_CALIB_0, *PREG_SS_TX_CALIB_0;

typedef struct
{
    

        FIELD rg_txcalib_n_en           : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_txcalib_force_termn_calen : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_txcalib_force_termn_sel_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_txcalib_force_termn_sel : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_SS_TX_CALIB_1, *PREG_SS_TX_CALIB_1;

typedef struct
{
    

        FIELD ro_txcal_out_pflag        : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_txcal_out_nflag        : 1;
        FIELD rsv_9                     : 7;
        FIELD ro_txcal_fsm              : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_txcal_clear            : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_TX_CALIB_2, *PREG_SS_TX_CALIB_2;

typedef struct
{
    

        FIELD rg_tx_dly_en              : 1;
        FIELD rsv_1                     : 3;
        FIELD rg_sfp_rx_sd_inv          : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_trans_burst_inv        : 1;
        FIELD rg_trans_tx_data_inv      : 1;
        FIELD rg_trans_rx_data_inv      : 1;
        FIELD rsv_11                    : 5;
        FIELD rg_trans_rx_sd_inv        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_tx_fault_inv     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_XPON_SETTING_0, *PREG_XPON_SETTING_0;

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
    
    
} REG_XPON_SETTING_1, *PREG_XPON_SETTING_1;

typedef struct
{
    

        FIELD rg_trans_rx_laser_on_pro  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_ftcal_low              : 8;
        FIELD rg_ftcal_high             : 8;
        FIELD rg_pma_show_probe_en      : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_XPON_SETTING_2, *PREG_XPON_SETTING_2;

typedef struct
{
    

        FIELD ro_rx_los                 : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_tx_sd                  : 1;
        FIELD rsv_9                     : 7;
        FIELD ro_tx_fault               : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_XPON_STA, *PREG_XPON_STA;

typedef struct
{
    

        FIELD rg_trans_rogue_onu_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_un_stb_os_rdy_int_en   : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_phyrdy_int_en          : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_sd_fail_int_en   : 1;
        FIELD rsv_25                    : 3;
        FIELD rg_ad_ben_alarm_int_en    : 1;
        FIELD rg_tx_sd_alarm_int_en     : 1;
        FIELD rsv_30                    : 2;
    
    
} REG_XPON_INT_EN_0, *PREG_XPON_INT_EN_0;

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
    
    
} REG_XPON_INT_EN_1, *PREG_XPON_INT_EN_1;

typedef struct
{
    

        FIELD trans_rogue_onu_int       : 1;
        FIELD rsv_1                     : 7;
        FIELD un_stb_os_rdy_int         : 1;
        FIELD rsv_9                     : 7;
        FIELD phyrdy_int                : 1;
        FIELD rsv_17                    : 7;
        FIELD trans_sd_fail_int         : 1;
        FIELD rsv_25                    : 3;
        FIELD ben_alarm_int             : 1;
        FIELD tx_sd_alarm_int           : 1;
        FIELD rsv_30                    : 2;
    
    
} REG_XPON_INT_STA_0, *PREG_XPON_INT_STA_0;

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
    
    
} REG_XPON_INT_STA_1, *PREG_XPON_INT_STA_1;

typedef struct
{
    

        FIELD eye_eu                    : 7;
        FIELD rsv_7                     : 1;
        FIELD eye_eb                    : 7;
        FIELD rsv_15                    : 1;
        FIELD AD_XPON_RX_DBG            : 8;
        FIELD AD_XPON_RX_SIGDET_OUT     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_TORGS_DEBUG_11, *PREG_RX_TORGS_DEBUG_11;

typedef struct
{
    

        FIELD rg_force_da_xpon_rx_fe_gain_ctrl : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_force_da_xpon_rx_fe_peaking_ctrl : 3;
        FIELD rsv_11                    : 5;
        FIELD rg_force_da_xpon_cdr_lpf_lck2data : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_da_xpon_cdr_lpf_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_FORCE_MODE_0, *PREG_RX_FORCE_MODE_0;

typedef struct
{
    

        FIELD rg_force_da_xpon_rx_sigdet_os : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_force_da_xpon_rx_dac_d0 : 7;
        FIELD rsv_15                    : 1;
        FIELD rg_force_da_xpon_rx_dac_d1 : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_force_da_xpon_rx_dac_e0 : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_FORCE_MODE_1, *PREG_RX_FORCE_MODE_1;

typedef struct
{
    

        FIELD rg_force_da_xpon_rx_dac_e1 : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_force_da_xpon_rx_dac_eye : 7;
        FIELD rsv_15                    : 1;
        FIELD rg_force_da_xpon_rx_fe_vos : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_force_da_xpon_cdr_pr_pieye : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_FORCE_MODE_2, *PREG_RX_FORCE_MODE_2;

typedef struct
{
    

        FIELD rg_disb_da_xpon_rx_fe_gain_ctrl : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_da_xpon_rx_fe_peaking_ctrl : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_da_xpon_cdr_lpf_lck2data : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_da_xpon_cdr_lpf_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_0, *PREG_RX_DISB_MODE_0;

typedef struct
{
    

        FIELD rg_disb_da_xpon_rx_sigdet_os : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_da_xpon_rx_dac_d0 : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_da_xpon_rx_dac_d1 : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_da_xpon_rx_dac_e0 : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_1, *PREG_RX_DISB_MODE_1;

typedef struct
{
    

        FIELD rg_disb_da_xpon_rx_dac_e1 : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_da_xpon_rx_dac_eye : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_da_xpon_rx_fe_vos : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_da_xpon_cdr_pr_pieye : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_2, *PREG_RX_DISB_MODE_2;

typedef struct
{
    

        FIELD rg_force_eq_pi_cal_rdy    : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_rx_dac_eye       : 7;
        FIELD rsv_15                    : 1;
        FIELD rg_force_rx_dac_d0        : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_force_rx_dac_d1        : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_FORCE_MODE_3, *PREG_RX_FORCE_MODE_3;

typedef struct
{
    

        FIELD rg_force_rx_dac_e0        : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_force_rx_dac_e1        : 7;
        FIELD rsv_15                    : 1;
        FIELD rg_force_xpon_rx_sigdet_out : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_blwc_offset      : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_FORCE_MODE_4, *PREG_RX_FORCE_MODE_4;

typedef struct
{
    

        FIELD rg_force_feos_out         : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_force_eyecnt           : 20;
        FIELD rsv_28                    : 4;
    
    
} REG_RX_FORCE_MODE_5, *PREG_RX_FORCE_MODE_5;

typedef struct
{
    

        FIELD rg_force_eyecnt_rdy       : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_rx_or_pical_en   : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RX_FORCE_MODE_6, *PREG_RX_FORCE_MODE_6;

typedef struct
{
    

        FIELD rg_disb_eq_pi_cal_rdy     : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_rx_dac_eye        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_rx_dac_d0         : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_rx_dac_d1         : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_3, *PREG_RX_DISB_MODE_3;

typedef struct
{
    

        FIELD rg_disb_rx_dac_e0         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_rx_dac_e1         : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_xpon_rx_sigdet_out : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_blwc_offset       : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_4, *PREG_RX_DISB_MODE_4;

typedef struct
{
    

        FIELD rg_disb_feos_out          : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_eyecnt            : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_eyecnt_rdy        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_rx_or_pical_en    : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_5, *PREG_RX_DISB_MODE_5;

typedef struct
{
    

        FIELD rg_force_ref_and_pical_rstb : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_rx_and_pical_rstb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_pdos_rx_rst_b    : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_da_lock2ref      : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_FORCE_MODE_7, *PREG_RX_FORCE_MODE_7;

typedef struct
{
    

        FIELD rg_force_blwc_rx_rst_b    : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sdcal_ref_rst_b  : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_feos_rx_rst_b    : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_eyecnt_rx_rst_b  : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_FORCE_MODE_8, *PREG_RX_FORCE_MODE_8;

typedef struct
{
    

        FIELD rg_force_fbck_lock        : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_eye_reset_plu_o  : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_eye_top_en       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_pi_cal_data_out_o : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_FORCE_MODE_9, *PREG_RX_FORCE_MODE_9;

typedef struct
{
    

        FIELD rg_disb_ref_and_pical_rstb : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_rx_and_pical_rstb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_pdos_rx_rst_b     : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_da_lock2ref       : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_6, *PREG_RX_DISB_MODE_6;

typedef struct
{
    

        FIELD rg_disb_blwc_rx_rst_b     : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_sdcal_ref_rst_b   : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_feos_rx_rst_b     : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_eyecnt_rx_rst_b   : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_7, *PREG_RX_DISB_MODE_7;

typedef struct
{
    

        FIELD rg_disb_fbck_lock         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_eye_reset_plu_o   : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_eye_top_en        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_pi_cal_data_out_o : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_DISB_MODE_8, *PREG_RX_DISB_MODE_8;

typedef struct
{
    

        FIELD dbgctl_bistctl_flagl_sel  : 8;
        FIELD dbgctl_bistctl_flagh_sel  : 8;
        FIELD dbgctl_bistctl_px_lnx_flagl_en : 1;
        FIELD rsv_17                    : 7;
        FIELD dbgctl_bistctl_px_lnx_flagh_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_BIST_0, *PREG_SS_BIST_0;

typedef struct
{
    

        FIELD anlt_px_lnx_lt_los        : 1;
        FIELD rsv_1                     : 7;
        FIELD all_lane_prbs_tx_en       : 1;
        FIELD rsv_9                     : 7;
        FIELD pllctl_px_lnx_tx_por_rdy  : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_lnx_bistctl_bit_error_rst_sel : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_BIST_1, *PREG_SS_BIST_1;

typedef struct
{
    

        FIELD rg_lnx_bistctl_prbs_check_timer : 24;
        FIELD rsv_24                    : 8;
    
    
} REG_SS_BIST_2, *PREG_SS_BIST_2;

typedef struct
{
    

        FIELD rg_da_xpon_rx_fe_pwdb     : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_da_xpon_cdr_pr_pwdb    : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_da_xpon_cdr_pr_pieye_pwdb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_da_xpon_cdr_pd_pwdb    : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_DA_XPON_PWDB_0, *PREG_SS_DA_XPON_PWDB_0;

typedef struct
{
    

        FIELD rg_da_xpon_rx_sigdet_pwdb : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_SS_DA_XPON_PWDB_1, *PREG_SS_DA_XPON_PWDB_1;

typedef struct
{
    

        FIELD eee_lcpll_hold            : 1;
        FIELD rsv_1                     : 7;
        FIELD tdc_sync_pcw_ncpo_chg     : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_SS_LCPLL_0, *PREG_SS_LCPLL_0;

typedef struct
{
    

        FIELD tdc_sync_pcw_ncpo         : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_SS_LCPLL_1, *PREG_SS_LCPLL_1;

typedef struct
{
    

        FIELD flagl_sel                 : 8;
        FIELD flagh_sel                 : 8;
        FIELD lcpll_top_flagl_en        : 1;
        FIELD rsv_17                    : 7;
        FIELD lcpll_top_flagh_en        : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_SS_LCPLL_2, *PREG_SS_LCPLL_2;

typedef struct
{
    

        FIELD rg_dig_reserve_0          : 32;
    
    
} REG_ADD_DIG_RESERVE_0, *PREG_ADD_DIG_RESERVE_0;

typedef struct
{
    

        FIELD rg_dig_reserve_1          : 32;
    
    
} REG_ADD_DIG_RESERVE_1, *PREG_ADD_DIG_RESERVE_1;

typedef struct
{
    

        FIELD rg_dig_reserve_2          : 32;
    
    
} REG_ADD_DIG_RESERVE_2, *PREG_ADD_DIG_RESERVE_2;

typedef struct
{
    

        FIELD rg_dig_reserve_3          : 32;
    
    
} REG_ADD_DIG_RESERVE_3, *PREG_ADD_DIG_RESERVE_3;

typedef struct
{
    

        FIELD rg_dig_reserve_4          : 32;
    
    
} REG_ADD_DIG_RESERVE_4, *PREG_ADD_DIG_RESERVE_4;

typedef struct
{
    

        FIELD rg_xpon_rx_rate_ctrl      : 2;
        FIELD rsv_2                     : 30;
    
    
} REG_RG_XPON_RX_RESERVED_1, *PREG_RG_XPON_RX_RESERVED_1;

typedef struct
{
    

        FIELD ro_dig_reserve_0          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_0, *PREG_ADD_DIG_RO_RESERVE_0;

typedef struct
{
    

        FIELD ro_dig_reserve_1          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_1, *PREG_ADD_DIG_RO_RESERVE_1;

typedef struct
{
    

        FIELD ro_dig_reserve_2          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_2, *PREG_ADD_DIG_RO_RESERVE_2;

typedef struct
{
    

        FIELD ro_dig_reserve_3          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_3, *PREG_ADD_DIG_RO_RESERVE_3;

typedef struct
{
    

        FIELD ro_dig_reserve_4          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_4, *PREG_ADD_DIG_RO_RESERVE_4;

typedef struct
{
    

        FIELD rg_da_rx_sys_en_sel       : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_rx_sys_en              : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_ADD_RX_SYS_EN_SEL_0, *PREG_ADD_RX_SYS_EN_SEL_0;

typedef struct
{
    

        FIELD rg_pll_lock_cyclecnt      : 16;
        FIELD rg_pll_unlock_cyclecnt    : 16;
    
    
} REG_PLL_TDC_FREQDET_0, *PREG_PLL_TDC_FREQDET_0;

typedef struct
{
    

        FIELD rg_pll_lock_target_beg    : 16;
        FIELD rg_pll_lock_target_end    : 16;
    
    
} REG_PLL_TDC_FREQDET_1, *PREG_PLL_TDC_FREQDET_1;

typedef struct
{
    

        FIELD rg_pll_unlock_target_beg  : 16;
        FIELD rg_pll_unlock_target_end  : 16;
    
    
} REG_PLL_TDC_FREQDET_2, *PREG_PLL_TDC_FREQDET_2;

typedef struct
{
    

        FIELD rg_pll_freqlock_det_en    : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_pll_lock_cnt_clear     : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_pll_lock_lockth        : 4;
        FIELD rg_pll_unlockth           : 4;
        FIELD rg_pll_wait_100us         : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_PLL_TDC_FREQDET_3, *PREG_PLL_TDC_FREQDET_3;

typedef struct
{
    

        FIELD rg_disb_tx_ldo_lpf_en     : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_tx_ldo_lpf_en    : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_tx_ck_en          : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_tx_ck_en         : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_DA_XPON_TX_FORCE_0, *PREG_DA_XPON_TX_FORCE_0;

typedef struct
{
    

        FIELD rg_disb_tx_hsdata_en      : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_tx_hsdata_en     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_da_xpon_tx_data   : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_da_xpon_tx_data_ben : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_DA_XPON_TX_FORCE_1, *PREG_DA_XPON_TX_FORCE_1;

typedef struct
{
    

        FIELD rg_force_da_xpon_tx_data  : 16;
        FIELD rg_force_da_xpon_tx_data_ben : 16;
    
    
} REG_DA_XPON_TX_FORCE_2, *PREG_DA_XPON_TX_FORCE_2;

typedef struct
{
    

        FIELD rg_force_status_rx_rst_b  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_status_rx_rst_b   : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RX_FORCE_MODE_10, *PREG_RX_FORCE_MODE_10;

typedef struct
{
    

        FIELD rg_clkpath_rst_en         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_clkpath_rstb_ck        : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_tdc_lck2ref_sel        : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_xpon_pma_probe_sel     : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_ADD_CLKPATH_RST_0, *PREG_ADD_CLKPATH_RST_0;

typedef struct
{
    

        FIELD rg_xpon_mode              : 3;
        FIELD rg_xfi_tx_mode            : 3;
        FIELD rsv_6                     : 2;
        FIELD rg_r2t_mode               : 1;
        FIELD rg_xfi_rx_mode            : 3;
        FIELD rsv_12                    : 4;
        FIELD rg_tx_bist_gen_en         : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_r2t_fifo_en            : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_ADD_XPON_MODE_1, *PREG_ADD_XPON_MODE_1;

typedef struct
{
    

        FIELD rg_r2t_afifo_adj          : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_r2t_asic_uses_ff       : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_rx_afifo_adj           : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_rx_asic_uses_ff        : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_ADD_R2T_MODE_1, *PREG_ADD_R2T_MODE_1;

typedef struct
{
    

        FIELD rg_t2r_fifo_en            : 1;
        FIELD rg_xpon_t2r_bist_mode     : 1;
        FIELD rsv_2                     : 6;
        FIELD rg_t2r_afifo_adj          : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_t2r_asic_uses_ff       : 1;
        FIELD rsv_17                    : 3;
        FIELD rg_tx_afifo_adj           : 5;
        FIELD rsv_25                    : 3;
        FIELD rg_tx_asic_uses_ff        : 1;
        FIELD rsv_29                    : 3;
    
    
} REG_ADD_T2R_MODE_1, *PREG_ADD_T2R_MODE_1;

typedef struct
{
    

        FIELD ro_tdc_ck_stb             : 1;
        FIELD rsv_1                     : 7;
        FIELD ro_lcpll_ck_stb           : 1;
        FIELD rsv_9                     : 7;
        FIELD ro_pll_fbck_lock2         : 1;
        FIELD rsv_17                    : 7;
        FIELD ro_rx_sequence            : 8;
    
    
} REG_ADD_LCPLL_RO_1, *PREG_ADD_LCPLL_RO_1;

typedef struct
{
    

        FIELD ro_rx_dac_eye             : 7;
        FIELD rsv_7                     : 1;
        FIELD ro_rx_dac_d0              : 7;
        FIELD rsv_15                    : 1;
        FIELD ro_rx_dac_d1              : 7;
        FIELD rsv_23                    : 1;
        FIELD ro_rx_dac_e0              : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_ADD_RO_RX2ANA_1, *PREG_ADD_RO_RX2ANA_1;

typedef struct
{
    

        FIELD ro_rx_dac_e1              : 7;
        FIELD rsv_7                     : 1;
        FIELD ro_rx_feos_out            : 6;
        FIELD rsv_14                    : 2;
        FIELD ro_rx_blwc_offset         : 7;
        FIELD rsv_23                    : 1;
        FIELD ro_da_xpon_rx_sigdet_os   : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_ADD_RO_RX2ANA_2, *PREG_ADD_RO_RX2ANA_2;

typedef struct
{
    

        FIELD ro_rx_pi_cal_data_out     : 7;
        FIELD rsv_7                     : 1;
        FIELD ro_rx_fifo_empty_cnt      : 4;
        FIELD rsv_12                    : 4;
        FIELD ro_rx_fifo_full_cnt       : 4;
        FIELD rsv_20                    : 12;
    
    
} REG_ADD_RO_RX2ANA_3, *PREG_ADD_RO_RX2ANA_3;

typedef struct
{
    

        FIELD ro_r2t_data_afifo         : 16;
        FIELD ro_r2t_fifo_full_cnt      : 4;
        FIELD rsv_20                    : 4;
        FIELD ro_r2t_fifo_empty_cnt     : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_ADD_RO_R2TMODE_1, *PREG_ADD_RO_R2TMODE_1;

typedef struct
{
    

        FIELD rg_xpon_cmn_en_timer      : 16;
        FIELD rg_xpon_cmn_man_pwdb      : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_xpon_cmn_force_on      : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_LCPLL_XPON_CMN_STB_CTRL_0, *PREG_RG_LCPLL_XPON_CMN_STB_CTRL_0;

typedef struct
{
    

        FIELD rg_xpon_cmn_hw_ctrl_mode  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_xpon_cmn_inv           : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_tx_d_toggle_en         : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_tx_hsdata_en_ext_mode  : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_LCPLL_XPON_CMN_STB_CTRL_1, *PREG_RG_LCPLL_XPON_CMN_STB_CTRL_1;

typedef struct
{
    

        FIELD rg_tx_hsdata_en_cnt       : 32;
    
    
} REG_RG_TX_HSDATA_EN_EXT_CNT_0, *PREG_RG_TX_HSDATA_EN_EXT_CNT_0;

typedef struct
{
    

        FIELD rg_txcalib_50us           : 16;
        FIELD rg_txcalib_5us            : 16;
    
    
} REG_PON_TX_COUNTER_0, *PREG_PON_TX_COUNTER_0;

typedef struct
{
    

        FIELD rg_tx_ck_en_wait          : 16;
        FIELD rg_tx_hsdata_en_wait      : 16;
    
    
} REG_PON_TX_COUNTER_1, *PREG_PON_TX_COUNTER_1;

typedef struct
{
    

        FIELD rg_tx_power_on_wait       : 16;
        FIELD rg_tx_serdes_rdy_wait     : 16;
    
    
} REG_PON_TX_COUNTER_2, *PREG_PON_TX_COUNTER_2;

typedef struct
{
    

        FIELD ro_tx_serdes_rdy          : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_PON_TX_COUNTER_3, *PREG_PON_TX_COUNTER_3;

typedef struct
{
    

        FIELD rg_force_bg_tx            : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_force_bg_rx            : 2;
        FIELD rsv_6                     : 1;
        FIELD rg_force_xg_txpcsdiv2modesel : 1;
        FIELD rg_force_ge_txpcsmodesel  : 1;
        FIELD rg_force_xg_txpcsmodesel  : 1;
        FIELD rg_force_xe_txpcsmodesel  : 1;
        FIELD rg_force_ge_rxpcsmodesel  : 1;
        FIELD rg_force_xg_rxpcsmodesel  : 1;
        FIELD rg_force_ge_txmapmodesel  : 1;
        FIELD rg_force_xg_txmapmodesel  : 1;
        FIELD rg_force_xe_txmapmodesel  : 1;
        FIELD rg_force_ge_rxmapmodesel  : 1;
        FIELD rg_force_xg_rxmapmodesel  : 1;
        FIELD rg_force_g_mode           : 1;
        FIELD rg_force_e_mode           : 1;
        FIELD rg_force_ge_mode          : 1;
        FIELD rg_force_xg_mode          : 1;
        FIELD rg_force_xe_mode          : 1;
        FIELD rg_force_xg_txmode        : 1;
        FIELD rg_force_e_txmode         : 1;
        FIELD rg_force_ck_g             : 1;
        FIELD rsv_26                    : 2;
        FIELD rg_rxck_dbg_inv           : 1;
        FIELD rg_rxck_sync_inv          : 1;
        FIELD rg_rxck_inv               : 1;
        FIELD rg_txck_inv               : 1;
    
    
} REG_PON_CK_SET, *PREG_PON_CK_SET;

typedef struct
{
    

        FIELD rg_tx_afifo_en            : 1;
        FIELD rg_tx_afifo_mode          : 1;
        FIELD rg_xfi_phyck_inv          : 1;
        FIELD rsv_3                     : 29;
    
    
} REG_TX_FIFO_MODE_SEL, *PREG_TX_FIFO_MODE_SEL;

typedef struct
{
    

        FIELD rg_xpon_pll_stb_cnt       : 32;
    
    
} REG_XPON_PLL_STB_CNT, *PREG_XPON_PLL_STB_CNT;

typedef struct
{
    

        FIELD rg_xpon_pll_stop_cnt      : 32;
    
    
} REG_XPON_PLL_STOP_CNT, *PREG_XPON_PLL_STOP_CNT;

typedef struct
{
    

        FIELD rg_sw_rx_fifo_rst_n       : 1;
        FIELD rg_sw_rx_rst_n            : 1;
        FIELD rg_sw_tx_rst_n            : 1;
        FIELD rg_sw_pma_rst_n           : 1;
        FIELD rg_sw_allpcs_rst_n        : 1;
        FIELD rg_sw_ref_rst_n           : 1;
        FIELD rg_sw_tx_fifo_rst_n       : 1;
        FIELD rg_sw_xfi_txpcs_rst_n     : 1;
        FIELD rg_sw_xfi_rxpcs_rst_n     : 1;
        FIELD rg_sw_xfi_rxpcs_bist_rst_n : 1;
        FIELD rg_sw_hsg_txpcs_rst_n     : 1;
        FIELD rg_sw_hsg_rxpcs_rst_n     : 1;
        FIELD rg_sw_ponolt_txpcs_rst_n  : 1;
        FIELD rg_sw_ponolt_txmac_rst_n  : 1;
        FIELD rg_sw_ponolt_rxpcs_rst_n  : 1;
        FIELD rg_sw_ponolt_rxmac_rst_n  : 1;
        FIELD rg_sw_xfi_txmac_rst_n     : 1;
        FIELD rg_sw_xfi_rxmac_rst_n     : 1;
        FIELD rsv_18                    : 14;
    
    
} REG_SW_RST_SET, *PREG_SW_RST_SET;

typedef struct
{
    

        FIELD ro_tx_fifo_empty_cnt      : 4;
        FIELD ro_tx_fifo_full_cnt       : 4;
        FIELD rsv_8                     : 24;
    
    
} REG_ADD_RO_TX2ANA_1, *PREG_ADD_RO_TX2ANA_1;

typedef struct
{
    

        FIELD rg_tx_dly_data_ftune      : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_tx_dly_ben_ftune       : 7;
        FIELD rg_txben_pre_post_zero_en : 1;
        FIELD rg_tx_ben_exten_ftune     : 8;
        FIELD rg_rx_non_reverse_epon    : 1;
        FIELD rg_tx_non_reverse_epon    : 1;
        FIELD rg_rx_non_reverse_gpon    : 1;
        FIELD rg_tx_non_reverse_gpon    : 1;
        FIELD rg_outben_data_mode       : 3;
        FIELD rsv_31                    : 1;
    
    
} REG_TX_DLY_CTRL, *PREG_TX_DLY_CTRL;

typedef struct
{
    

        FIELD rg_up_md32_wrap_pd        : 1;
        FIELD rg_gfifo_fec_mem_pd       : 1;
        FIELD rg_tx_pma_fifo_pd         : 1;
        FIELD rg_rx_pma_fifo_pd         : 1;
        FIELD rsv_4                     : 28;
    
    
} REG_MEM_WRAPPER_CTRL, *PREG_MEM_WRAPPER_CTRL;

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
    
    
} REG_XPON_INT_EN_2, *PREG_XPON_INT_EN_2;

typedef struct
{
    

        FIELD rg_tx_freqdet_unlock_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_rx_freqdet_unlock_int_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_rx_sigdet_int_en       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_trans_laser_on_int_en  : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_XPON_INT_EN_3, *PREG_XPON_INT_EN_3;

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
    
    
} REG_XPON_INT_STA_2, *PREG_XPON_INT_STA_2;

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
    
    
} REG_XPON_INT_STA_3, *PREG_XPON_INT_STA_3;

typedef struct
{
    

        FIELD rg_trans_sd_fail_cnt      : 16;
        FIELD rg_trans_rogue_onu_cnt    : 16;
    
    
} REG_XPON_SD_BEHAVIOR_SETTING_0, *PREG_XPON_SD_BEHAVIOR_SETTING_0;

typedef struct
{
    

        FIELD rg_trans_sd_fail_cnt_clr  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_trans_rogue_onu_cnt_clr : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_XPON_SD_BEHAVIOR_SETTING_1, *PREG_XPON_SD_BEHAVIOR_SETTING_1;

typedef struct
{
    

        FIELD ro_trans_sd_fail_cnt      : 16;
        FIELD ro_trans_rogue_onu_cnt    : 16;
    
    
} REG_XPON_SD_BEHAVIOR_STA, *PREG_XPON_SD_BEHAVIOR_STA;

typedef struct
{
    

        FIELD rg_disb_leq               : 1;
        FIELD rg_os_rdy_latch           : 1;
        FIELD rg_heo_rdy_opt            : 1;
        FIELD rsv_3                     : 5;
        FIELD rg_l2d_trig_eq_en_time    : 8;
        FIELD rg_blwc_opt               : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_abnormal_cnt           : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RX_EXTRAL_CTRL, *PREG_RX_EXTRAL_CTRL;

typedef struct
{
    

        FIELD rg_disb_leq_len_ctrl      : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_leq_pf_ctrl       : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_leq_leak_en       : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_disb_leq_avg_en        : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_LEQ_DISB_CTRL0, *PREG_RX_LEQ_DISB_CTRL0;

typedef struct
{
    

        FIELD rg_disb_leq_en            : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_disb_leq_done          : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_disb_leq_rst_b         : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_RX_LEQ_DISB_CTRL1, *PREG_RX_LEQ_DISB_CTRL1;

typedef struct
{
    

        FIELD rg_leq_len_ctrl           : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_leq_pf_ctrl            : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_leq_leak_en            : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_leq_avg_en             : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_LEQ_FORCE_CTRL0, *PREG_RX_LEQ_FORCE_CTRL0;

typedef struct
{
    

        FIELD rg_leq_en                 : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_leq_done               : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_leq_rst_b              : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_abnormal_cnt_reset_disb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_LEQ_FORCE_CTRL1, *PREG_RX_LEQ_FORCE_CTRL1;

typedef struct
{
    

        FIELD rg_entime_leq_len_ctrl0   : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_entime_leq_len_ctrl1   : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_entime_leq_len_ctrl2   : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_entime_leq_len_ctrl3   : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RX_LEQ_ENTIME_CTRL0, *PREG_RX_LEQ_ENTIME_CTRL0;

typedef struct
{
    

        FIELD rg_entime_leq_pf_ctrl0    : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_entime_leq_pf_ctrl1    : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_entime_leq_pf_ctrl2    : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_entime_leq_pf_ctrl3    : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RX_LEQ_ENTIME_CTRL1, *PREG_RX_LEQ_ENTIME_CTRL1;

typedef struct
{
    

        FIELD rg_entime_leq_avg         : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_disentime_leq_leak_en  : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_timeslot_res           : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_entime_res             : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RX_LEQ_ENTIME_CTRL2, *PREG_RX_LEQ_ENTIME_CTRL2;

typedef struct
{
    

        FIELD rg_leq_update_pause       : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_leq_gain               : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_leq_init_val           : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_leq_init_set           : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RX_LEQ_CTRL0, *PREG_RX_LEQ_CTRL0;

typedef struct
{
    

        FIELD rg_leq_top_lim            : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_leq_bot_lim            : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_leq_leak_gain          : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_leq_leak_target        : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RX_LEQ_CTRL1, *PREG_RX_LEQ_CTRL1;

typedef struct
{
    

        FIELD rg_leq_avg_cycle          : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_leq_gray_out_en        : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RX_LEQ_CTRL2, *PREG_RX_LEQ_CTRL2;

typedef struct
{
    

        FIELD ro_leq_rst_b              : 1;
        FIELD ro_leq_en                 : 1;
        FIELD ro_eq_done                : 1;
        FIELD ro_eq_en                  : 1;
        FIELD rsv_4                     : 4;
        FIELD ro_leq_len_ctrl           : 4;
        FIELD rsv_12                    : 4;
        FIELD ro_leq_pf_ctrl            : 4;
        FIELD ro_leq_leak_en            : 1;
        FIELD ro_leq_avg_en             : 1;
        FIELD ro_leq_updn               : 2;
        FIELD ro_eq_rdy                 : 2;
        FIELD rsv_26                    : 2;
        FIELD ro_abnormal_cnt           : 3;
        FIELD rsv_31                    : 1;
    
    
} REG_RX_LEQ_RO0, *PREG_RX_LEQ_RO0;

typedef struct
{
    

        FIELD ro_leq_time_slot          : 4;
        FIELD rsv_4                     : 4;
        FIELD ro_eq_time_slot           : 4;
        FIELD rsv_12                    : 20;
    
    
} REG_RX_LEQ_RO1, *PREG_RX_LEQ_RO1;

typedef struct
{
    

        FIELD rg_pll_ft_lock_cyclecnt   : 16;
        FIELD rg_pll_ft_unlock_cyclecnt : 16;
    
    
} REG_PLL_FT_FREQDET_0, *PREG_PLL_FT_FREQDET_0;

typedef struct
{
    

        FIELD rg_pll_ft_lock_target_beg : 16;
        FIELD rg_pll_ft_lock_target_end : 16;
    
    
} REG_PLL_FT_FREQDET_1, *PREG_PLL_FT_FREQDET_1;

typedef struct
{
    

        FIELD rg_pll_ft_unlock_target_beg : 16;
        FIELD rg_pll_ft_unlock_target_end : 16;
    
    
} REG_PLL_FT_FREQDET_2, *PREG_PLL_FT_FREQDET_2;

typedef struct
{
    

        FIELD rg_pll_ft_freqlock_det_en : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_pll_ft_lock_cnt_clear  : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_pll_ft_lock_lockth     : 4;
        FIELD rg_pll_ft_unlockth        : 4;
        FIELD rg_pll_ft_wait_100us      : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_PLL_FT_FREQDET_3, *PREG_PLL_FT_FREQDET_3;

typedef struct
{
    

        FIELD ro_fbck_lock              : 1;
        FIELD ro_fbck_lock_inner        : 1;
        FIELD rsv_2                     : 2;
        FIELD ro_lslock_cnt             : 4;
        FIELD ro_state_freqdet          : 2;
        FIELD rsv_10                    : 6;
        FIELD ro_fl_out                 : 16;
    
    
} REG_RO_RX_FREQDET, *PREG_RO_RX_FREQDET;

typedef struct
{
    

        FIELD ro_pll_fbck_lock          : 1;
        FIELD ro_pll_fbck_lock_inner    : 1;
        FIELD rsv_2                     : 2;
        FIELD ro_pll_lslock_cnt         : 4;
        FIELD ro_pll_state_freqdet      : 2;
        FIELD rsv_10                    : 6;
        FIELD ro_pll_fl_out             : 16;
    
    
} REG_RO_PLL_FREQDET, *PREG_RO_PLL_FREQDET;

typedef struct
{
    

        FIELD ro_pll_ft_fbck_lock       : 1;
        FIELD ro_pll_ft_fbck_lock_inner : 1;
        FIELD rsv_2                     : 2;
        FIELD ro_pll_ft_lslock_cnt      : 4;
        FIELD ro_pll_ft_state_freqdet   : 2;
        FIELD rsv_10                    : 6;
        FIELD ro_pll_ft_fl_out          : 16;
    
    
} REG_RO_PLL_FT_FREQDET, *PREG_RO_PLL_FT_FREQDET;

typedef struct
{
    

        FIELD ro_pma_freq_cnt_max       : 16;
        FIELD ro_pma_freq_cnt_lsb       : 16;
    
    
} REG_RO_PMA_FREQDET, *PREG_RO_PMA_FREQDET;

typedef struct
{
    

        FIELD rg_pma_freq_meter_sel     : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_pma_freq_check_lsb     : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RG_PMA_FREQDET, *PREG_RG_PMA_FREQDET;

typedef struct
{
    

        FIELD rg_tx_loff_manu           : 32;
    
    
} REG_RG_EXT_BEN_DATA, *PREG_RG_EXT_BEN_DATA;

typedef struct
{
    

        FIELD rg_tx_lon_manu            : 16;
        FIELD rg_tx_bh_dl_dsel          : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_RG_PRE_BEN_DATA, *PREG_RG_PRE_BEN_DATA;

typedef struct
{
    

        FIELD ro_x_index_o              : 11;
        FIELD rsv_11                    : 5;
        FIELD ro_y_index_o              : 7;
        FIELD rsv_23                    : 1;
        FIELD ro_kband_done             : 1;
        FIELD ro_injosc_rdy             : 1;
        FIELD rsv_26                    : 6;
    
    
} REG_RX_TORGS_DEBUG_12, *PREG_RX_TORGS_DEBUG_12;

typedef struct
{
    

        FIELD ro_adc_freq_output        : 20;
        FIELD rsv_20                    : 11;
        FIELD rg_fll_dig_pro            : 1;
    
    
} REG_RO_FLL_ADC_0, *PREG_RO_FLL_ADC_0;

typedef struct
{
    

        FIELD ro_adc_freq_inv_output    : 21;
        FIELD rsv_21                    : 11;
    
    
} REG_RO_FLL_ADC_1, *PREG_RO_FLL_ADC_1;

typedef struct
{
    

        FIELD ro_cor_gain_output        : 32;
    
    
} REG_RO_FLL_ADC_2, *PREG_RO_FLL_ADC_2;

typedef struct
{
    

        FIELD ro_cor_integ_output       : 32;
    
    
} REG_RO_FLL_ADC_3, *PREG_RO_FLL_ADC_3;

typedef struct
{
    

        FIELD ro_cor_integ_inv_output   : 32;
    
    
} REG_RO_FLL_ADC_4, *PREG_RO_FLL_ADC_4;

typedef struct
{
    

        FIELD rg_ad_xpon_pll_ft_ck_mon_mux_sel : 2;
        FIELD rsv_2                     : 30;
    
    
} REG_RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL, *PREG_RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL;

typedef struct
{
    

        FIELD rg_pma_tx_afifo_reach_int_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_pma_rx_afifo_reach_int_en : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_XPON_INT_EN_4, *PREG_XPON_INT_EN_4;

typedef struct
{
    

        FIELD pma_tx_afifo_reach_int    : 1;
        FIELD rsv_1                     : 7;
        FIELD pma_rx_afifo_reach_int    : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_XPON_INT_STA_4, *PREG_XPON_INT_STA_4;

typedef struct
{
    

        FIELD rg_pma_tx_afifo_reach_th  : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_pma_rx_afifo_reach_th  : 7;
        FIELD rsv_15                    : 17;
    
    
} REG_XPON_PMA_AFIFO_REACH_TH, *PREG_XPON_PMA_AFIFO_REACH_TH;

typedef struct
{
    

        FIELD rg_md32_pbus_arb_en       : 32;
    
    
} REG_XPON_MD32_PBUS_CSR_CTRL, *PREG_XPON_MD32_PBUS_CSR_CTRL;

typedef struct
{
    

        FIELD rg_bist_prbs_init_seed_benoff : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_BENOFF_BIST_SEED, *PREG_BENOFF_BIST_SEED;

typedef struct
{
    

        FIELD rg_pll_pwr_seq_sel        : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_PWR_PLL_CTRL, *PREG_PWR_PLL_CTRL;

typedef struct
{
    

        FIELD rg_pon_tx_rate_ctrl       : 2;
        FIELD rsv_2                     : 30;
    
    
} REG_xpon_tx_rate_ctrl, *PREG_xpon_tx_rate_ctrl;

typedef struct
{
    

        FIELD rg_benoff_d0              : 32;
    
    
} REG_BENOFF_DATA0, *PREG_BENOFF_DATA0;

typedef struct
{
    

        FIELD rg_benoff_d1              : 32;
    
    
} REG_BENOFF_DATA1, *PREG_BENOFF_DATA1;

typedef struct
{
    

        FIELD rg_benoff_d2              : 32;
    
    
} REG_BENOFF_DATA2, *PREG_BENOFF_DATA2;

typedef struct
{
    

        FIELD rg_benoff_d3              : 32;
    
    
} REG_BENOFF_DATA3, *PREG_BENOFF_DATA3;

typedef struct
{
    

        FIELD rg_benoff_cnt_max         : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_benoff_catch_mem_en    : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_BENOFF_CTRL, *PREG_BENOFF_CTRL;

typedef struct
{
    

        FIELD rg_hsdata_en_sel          : 3;
        FIELD rsv_3                     : 29;
    
    
} REG_HS_DATA_EN_SEL, *PREG_HS_DATA_EN_SEL;

typedef struct
{
    

        FIELD ro_rx_wrfifo_depth        : 7;
        FIELD rsv_7                     : 1;
        FIELD ro_rx_rdfifo_depth        : 7;
        FIELD ro_tx_wrfifo_depth        : 6;
        FIELD rsv_21                    : 3;
        FIELD ro_tx_rdfifo_depth        : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_FIFO_CK_STATUS, *PREG_FIFO_CK_STATUS;

typedef struct
{
    

        FIELD ro_dlf_gain_new           : 8;
        FIELD ro_dlf_gain_rund_new      : 8;
        FIELD rsv_16                    : 16;
    
    
} REG_TDC_DLF_GAIN_STATUS, *PREG_TDC_DLF_GAIN_STATUS;

typedef struct
{
    

        FIELD ro_dlf_gain_new_org       : 20;
        FIELD rsv_20                    : 4;
        FIELD rg_dlf_mode_sel           : 1;
        FIELD rsv_25                    : 6;
        FIELD rg_dlf_gain_latch         : 1;
    
    
} REG_TDC_DLF_MODE_SETTING, *PREG_TDC_DLF_MODE_SETTING;

typedef struct
{
    

        FIELD rg_md32_sfp_rx_loss_inv   : 32;
    
    
} REG_MD32_ISR_CTRL, *PREG_MD32_ISR_CTRL;

typedef struct
{
    

        FIELD rg_md32pm_ck_sel          : 32;
    
    
} REG_MD32_MEM_CLK_CTRL, *PREG_MD32_MEM_CLK_CTRL;

typedef struct
{
    

        FIELD rg_force_md32d_ck_g       : 32;
    
    
} REG_MD32_MEM_CLK_CG_CTRL, *PREG_MD32_MEM_CLK_CG_CTRL;

typedef struct
{
    

        FIELD ro_xg_psync_to_sof_delay_lch : 32;
    
    
} REG_XG_EQD_STA, *PREG_XG_EQD_STA;

typedef struct
{
    

        FIELD rg_xg_eqd_rst_n           : 1;
        FIELD rsv_1                     : 15;
        FIELD rg_xg_mask_window         : 16;
    
    
} REG_XG_EQD_CTRL, *PREG_XG_EQD_CTRL;

typedef struct
{
    

        FIELD rg_rawdata_tx_en          : 32;
    
    
} REG_RAWDATA_DUMP_CTRL_0, *PREG_RAWDATA_DUMP_CTRL_0;

typedef struct
{
    

        FIELD rg_rawdata_tx_wdata_sel   : 32;
    
    
} REG_RAWDATA_DUMP_CTRL_1, *PREG_RAWDATA_DUMP_CTRL_1;

typedef struct
{
    

        FIELD rg_rawdata_mem_sel        : 32;
    
    
} REG_RAWDATA_DUMP_CTRL_2, *PREG_RAWDATA_DUMP_CTRL_2;

typedef struct
{
    

        FIELD rg_rawdata_tx_start_sel   : 32;
    
    
} REG_RAWDATA_DUMP_CTRL_3, *PREG_RAWDATA_DUMP_CTRL_3;

typedef struct
{
    

        FIELD ro_rawdata_tx_waddr       : 32;
    
    
} REG_RAWDATA_DUMP_STA_0, *PREG_RAWDATA_DUMP_STA_0;

typedef struct
{
    

        FIELD ro_rawdata_rx_waddr       : 32;
    
    
} REG_RAWDATA_DUMP_STA_1, *PREG_RAWDATA_DUMP_STA_1;

typedef struct
{
    

        FIELD ro_rawdata_tx_full        : 32;
    
    
} REG_RAWDATA_DUMP_STA_2, *PREG_RAWDATA_DUMP_STA_2;

typedef struct
{
    

        FIELD rg_md32_mem_max           : 32;
    
    
} REG_MD32MEM_DIV2_CNT, *PREG_MD32MEM_DIV2_CNT;

typedef struct
{
    

        FIELD AD_XPON_CDR_LPF_SNAPSHOTVALUE : 19;
        FIELD rsv_19                    : 13;
    
    
} REG_AD_XPON_CDR_LPF_SV, *PREG_AD_XPON_CDR_LPF_SV;

typedef struct
{
    

        FIELD ro_dta_xpon_tx_termn_sel  : 2;
        FIELD ro_dta_xpon_tx_termp_sel  : 2;
        FIELD rsv_4                     : 28;
    
    
} REG_K_VALUE_RD, *PREG_K_VALUE_RD;

typedef struct
{
    

        FIELD rg_xponpll_auto_en        : 1;
        FIELD rg_jcpll_auto_en          : 1;
        FIELD rsv_2                     : 30;
    
    
} REG_XPONPLL_CTRL, *PREG_XPONPLL_CTRL;

typedef struct
{
    

        FIELD ro_md32_gated             : 32;
    
    
} REG_MD32_GATE_HALT, *PREG_MD32_GATE_HALT;

typedef struct
{
    

        FIELD ro_mon_ccnt               : 32;
    
    
} REG_MD32_MONCCNT, *PREG_MD32_MONCCNT;

typedef struct
{
    

        FIELD ro_mon_pcnt0              : 32;
    
    
} REG_MD32_MONPCNT0, *PREG_MD32_MONPCNT0;

typedef struct
{
    

        FIELD ro_mon_pcnt1              : 32;
    
    
} REG_MD32_MONPCNT1, *PREG_MD32_MONPCNT1;

typedef struct
{
    

        FIELD ro_mon_pcnt2              : 32;
    
    
} REG_MD32_MONPCNT2, *PREG_MD32_MONPCNT2;

typedef struct
{
    

        FIELD ro_mon_contid             : 32;
    
    
} REG_MD32_MONCONTID, *PREG_MD32_MONCONTID;

typedef struct
{
    

        FIELD ro_mon_pc                 : 32;
    
    
} REG_MD32_MONPC, *PREG_MD32_MONPC;

typedef struct
{
    

        FIELD ro_mon_tbuf_wptr          : 32;
    
    
} REG_MD32_TBUF, *PREG_MD32_TBUF;

typedef struct
{
    

        FIELD ro_tbuf_wdata_l           : 32;
    
    
} REG_MD32_TBUFWDATA_L, *PREG_MD32_TBUFWDATA_L;

typedef struct
{
    

        FIELD ro_tbuf_wdata_h           : 32;
    
    
} REG_MD32_TBUFWDATA_H, *PREG_MD32_TBUFWDATA_H;

typedef struct
{
    

        FIELD ro_tbuf_rdata_l           : 32;
    
    
} REG_MD32_TBUFRDATA_L, *PREG_MD32_TBUFRDATA_L;

typedef struct
{
    

        FIELD ro_tbuf_rdata_h           : 32;
    
    
} REG_MD32_TBUFRDATA_H, *PREG_MD32_TBUFRDATA_H;

typedef struct
{
    

        FIELD rg_addr_md32_pmem_addr    : 32;
    
    
} REG_ADDR_MD32_PMEM_ADDR_REV, *PREG_ADDR_MD32_PMEM_ADDR_REV;

typedef struct
{
    

        FIELD rg_addr_md32_pmem_data    : 32;
    
    
} REG_ADDR_MD32_PMEM_DATA_REV, *PREG_ADDR_MD32_PMEM_DATA_REV;

typedef struct
{
    

        FIELD rg_addr_md32_dmem_addr    : 32;
    
    
} REG_ADDR_MD32_DMEM_ADDR_REV, *PREG_ADDR_MD32_DMEM_ADDR_REV;

typedef struct
{
    

        FIELD rg_addr_md32_dmem_data    : 32;
    
    
} REG_ADDR_MD32_DMEM_DATA_REV, *PREG_ADDR_MD32_DMEM_DATA_REV;

typedef struct
{
    

        FIELD rg_jcpll_force_on         : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_jcpll_hw_ctrl_mode     : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_jcpll_en_inv           : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_sw_jcpll_en            : 1;
        FIELD rsv_25                    : 6;
        FIELD rg_jcpll_man_pwdb         : 1;
    
    
} REG_SS_JCPLL_PWCTL_SETTING_0, *PREG_SS_JCPLL_PWCTL_SETTING_0;

typedef struct
{
    

        FIELD rg_jcpll_en_timer         : 16;
        FIELD rg_jcpll_pcw_man_load_timer : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_SS_JCPLL_PWCTL_SETTING_1, *PREG_SS_JCPLL_PWCTL_SETTING_1;

typedef struct
{
    

        FIELD rg_jcpll_ck_stb_timer     : 21;
        FIELD rsv_21                    : 11;
    
    
} REG_SS_JCPLL_PWCTL_SETTING_2, *PREG_SS_JCPLL_PWCTL_SETTING_2;

typedef struct
{
    

        FIELD rg_jcpll_pcw_chg          : 1;
        FIELD rsv_1                     : 15;
        FIELD rg_jcpll_ledck_div        : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_jcpll_tdc_dig_pwdb     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_JCPLL_CHG, *PREG_JCPLL_CHG;

typedef struct
{
    

        FIELD rg_jcpll_sdm_pcw          : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_RG_JCPLL_SDM_PCW_CTRL, *PREG_RG_JCPLL_SDM_PCW_CTRL;

typedef struct
{
    

        FIELD rg_jcpll_sdm_pcw_chg      : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_RG_JCPLL_SDM_PCW_CHG_CTRL, *PREG_RG_JCPLL_SDM_PCW_CHG_CTRL;

typedef struct
{
    

        FIELD rg_jcpll_ft_lock_cyclecnt : 16;
        FIELD rg_jcpll_ft_unlock_cyclecnt : 16;
    
    
} REG_PLL_JCPLL_FT_FREQDET_0, *PREG_PLL_JCPLL_FT_FREQDET_0;

typedef struct
{
    

        FIELD rg_jcpll_ft_lock_target_beg : 16;
        FIELD rg_jcpll_ft_lock_target_end : 16;
    
    
} REG_PLL_JCPLL_FT_FREQDET_1, *PREG_PLL_JCPLL_FT_FREQDET_1;

typedef struct
{
    

        FIELD rg_jcpll_ft_unlock_target_beg : 16;
        FIELD rg_jcpll_ft_unlock_target_end : 16;
    
    
} REG_PLL_JCPLL_FT_FREQDET_2, *PREG_PLL_JCPLL_FT_FREQDET_2;

typedef struct
{
    

        FIELD rg_jcpll_ft_freqlock_det_en : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_jcpll_ft_lock_cnt_clear : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_jcpll_ft_lock_lockth   : 4;
        FIELD rg_jcpll_ft_unlockth      : 4;
        FIELD rg_jcpll_ft_wait_100us    : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_PLL_JCPLL_FT_FREQDET_3, *PREG_PLL_JCPLL_FT_FREQDET_3;

typedef struct
{
    

        FIELD rg_jcpll_ft_ck_mux        : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_JCPLL_FT_CK_MUX, *PREG_JCPLL_FT_CK_MUX;

typedef struct
{
    

        FIELD rg_jcpll_da_ctrl_hw_timer : 16;
        FIELD rg_xfi_xtalck_cgm_en_force_on : 1;
        FIELD rg_jcpll_autok_en_force_on : 1;
        FIELD rg_jcpll_autok_load_force_on : 1;
        FIELD rg_jcpll_ldochp_en_force_on : 1;
        FIELD rg_jcpll_chpup_en_force_on : 1;
        FIELD rg_jcpll_digtcl_dac_en_force_on : 1;
        FIELD rsv_22                    : 9;
        FIELD rg_jcpll_da_ctrl_man_pwdb : 1;
    
    
} REG_JCPLL_DA_RG_CTRL_0, *PREG_JCPLL_DA_RG_CTRL_0;

typedef struct
{
    

        FIELD rg_xfi_xtalck_cgm_en_inv  : 1;
        FIELD rg_jcpll_autok_en_inv     : 1;
        FIELD rg_jcpll_autok_load_inv   : 1;
        FIELD rg_jcpll_ldochp_en_inv    : 1;
        FIELD rg_jcpll_chpup_en_inv     : 1;
        FIELD rg_jcpll_digtcl_dac_en_inv : 1;
        FIELD rsv_6                     : 26;
    
    
} REG_JCPLL_DA_RG_CTRL_1, *PREG_JCPLL_DA_RG_CTRL_1;

typedef struct
{
    

        FIELD rg_xfi_xtalck_cgm_en_hw_mode : 1;
        FIELD rg_jcpll_autok_en_hw_mode : 1;
        FIELD rg_jcpll_autok_load_hw_mode : 1;
        FIELD rg_jcpll_ldochp_en_hw_mode : 1;
        FIELD rg_jcpll_chpup_en_hw_mode : 1;
        FIELD rg_jcpll_digtcl_dac_en_hw_mode : 1;
        FIELD rsv_6                     : 26;
    
    
} REG_JCPLL_DA_RG_CTRL_2, *PREG_JCPLL_DA_RG_CTRL_2;

typedef struct
{
    

        FIELD rg_xfi_clkpath_ldo_en_inv : 1;
        FIELD rg_xfi_cdr_pd_edge_dis_inv : 1;
        FIELD rg_xfi_rx_fe_vb_eq1_en_inv : 1;
        FIELD rg_xfi_rx_fe_vb_eq2_en_inv : 1;
        FIELD rg_xfi_rx_fe_vb_eq3_en_inv : 1;
        FIELD rg_xfi_rx_fe_vcm_sel_inv  : 1;
        FIELD rg_xfi_rxpll1_refck_pwdb_inv : 1;
        FIELD rg_xfi_tx_en_inv          : 1;
        FIELD rg_xfi_rx_phyck_rstb_inv  : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_XFI_PLL_DA_RG_CTRL_0, *PREG_XFI_PLL_DA_RG_CTRL_0;

typedef struct
{
    

        FIELD rg_xfi_clkpath_ldo_en_hw_mode : 1;
        FIELD rg_xfi_cdr_pd_edge_dis_hw_mode : 1;
        FIELD rg_xfi_rx_fe_vb_eq1_en_hw_mode : 1;
        FIELD rg_xfi_rx_fe_vb_eq2_en_hw_mode : 1;
        FIELD rg_xfi_rx_fe_vb_eq3_en_hw_mode : 1;
        FIELD rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode : 1;
        FIELD rg_xfi_rx_fe_vcm_sel_hw_mode : 1;
        FIELD rg_xfi_rxpll1_refck_pwdb_hw_mode : 1;
        FIELD rg_xfi_tx_en_hw_mode      : 1;
        FIELD rg_xfi_rx_phyck_rstb_hw_mode : 1;
        FIELD rsv_10                    : 22;
    
    
} REG_XFI_PLL_DA_RG_CTRL_1, *PREG_XFI_PLL_DA_RG_CTRL_1;

typedef struct
{
    

        FIELD rg_xfi_clkpath_ldo_en_force_on : 1;
        FIELD rg_xfi_cdr_pd_edge_dis_force_on : 1;
        FIELD rg_xfi_rx_fe_vb_eq1_en_force_on : 1;
        FIELD rg_xfi_rx_fe_vb_eq2_en_force_on : 1;
        FIELD rg_xfi_rx_fe_vb_eq3_en_force_on : 1;
        FIELD rg_xfi_rx_fe_vcm_gem_pwdb_force_on : 1;
        FIELD rg_xfi_rx_fe_vcm_sel_force_on : 1;
        FIELD rg_xfi_rxpll1_refck_pwdb_force_on : 1;
        FIELD rg_xfi_tx_en_force_on     : 1;
        FIELD rg_xfi_rx_phyck_rstb_force_on : 1;
        FIELD rsv_10                    : 22;
    
    
} REG_XFI_PLL_DA_RG_CTRL_2, *PREG_XFI_PLL_DA_RG_CTRL_2;

typedef struct
{
    

        FIELD ro_ipath_gaindiv          : 4;
        FIELD rsv_4                     : 4;
        FIELD ro_txpll_tdc_c            : 8;
        FIELD ro_txpll_tdc_d            : 8;
        FIELD ro_jcpll_sdm_scan_out     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_AD_DA_PROBE_STS_0, *PREG_AD_DA_PROBE_STS_0;

typedef struct
{
    

        FIELD ro_ipath_ctrl             : 24;
        FIELD rsv_24                    : 8;
    
    
} REG_AD_DA_PROBE_STS_1, *PREG_AD_DA_PROBE_STS_1;

typedef struct
{
    

        FIELD rg_jcpll_sdm_scan_mode    : 1;
        FIELD rg_jcpll_sdm_scan_rstb    : 1;
        FIELD rg_jcpll_sdm_cg_scan_enable : 1;
        FIELD rg_jcpll_sdm_scan_enable  : 1;
        FIELD rsv_4                     : 28;
    
    
} REG_JCPLL_SCAN_CTRL, *PREG_JCPLL_SCAN_CTRL;

typedef struct
{
    

        FIELD rg_xfi_gpio_sel0          : 8;
        FIELD rg_xfi_gpio_sel1          : 8;
        FIELD rsv_16                    : 16;
    
    
} REG_XFI_GPIO_SEL_0, *PREG_XFI_GPIO_SEL_0;

typedef struct
{
    

        FIELD rsv_0                     : 16;
        FIELD rg_pmatop_probe_sel       : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_clkgen_pll_lock_en     : 1;
        FIELD rg_clkgen_pll_lock        : 1;
        FIELD rsv_26                    : 6;
    
    
} REG_TX_PAR_PROBE_PLL_CTRL, *PREG_TX_PAR_PROBE_PLL_CTRL;

typedef struct
{
    

        FIELD rsv_0                     : 8;
        FIELD rg_rx_asic_used_ff        : 1;
        FIELD rg_r2t_asic_used_ff       : 1;
        FIELD rsv_10                    : 7;
        FIELD rg_xfi_pcs_tx_rst_en      : 1;
        FIELD rsv_18                    : 14;
    
    
} REG_DUMP_RX_PCSRST_CTRL, *PREG_DUMP_RX_PCSRST_CTRL;

typedef struct
{
    

        FIELD ro_xfi_tx_fifo_status     : 32;
    
    
} REG_XFI_TX_FIFO_STS, *PREG_XFI_TX_FIFO_STS;

typedef struct
{
    

        FIELD rg_jcpll_ck_rstb_force_on : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_jcpll_ck_rstb_hw_mode  : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_jcpll_ck_rstb_inv      : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_JCPLL_CK_RSTB_CTRL, *PREG_JCPLL_CK_RSTB_CTRL;

typedef struct
{
    

        FIELD ro_tdc_tx_fbck_lock       : 1;
        FIELD ro_tdc_tx_fbck_lock_inner : 1;
        FIELD rsv_2                     : 2;
        FIELD ro_tdc_tx_lslock_cnt      : 4;
        FIELD ro_tdc_tx_state_freqdet   : 2;
        FIELD rsv_10                    : 6;
        FIELD ro_tdc_tx_fl_out          : 16;
    
    
} REG_RO_TDC_TX_FREQDET, *PREG_RO_TDC_TX_FREQDET;

typedef struct
{
    

        FIELD ro_jcpll_ft_fbck_lock     : 1;
        FIELD ro_jcpll_ft_fbck_lock_inner : 1;
        FIELD rsv_2                     : 2;
        FIELD ro_jcpll_ft_lslock_cnt    : 4;
        FIELD ro_jcpll_ft_state_freqdet : 2;
        FIELD rsv_10                    : 6;
        FIELD ro_jcpll_ft_fl_out        : 16;
    
    
} REG_RO_JCPLL_FT_FREQDET, *PREG_RO_JCPLL_FT_FREQDET;

typedef struct
{
    

        FIELD ro_jcpll_500m_fbck_lock   : 1;
        FIELD ro_jcpll_500m_fbck_lock_inner : 1;
        FIELD rsv_2                     : 2;
        FIELD ro_jcpll_500m_lslock_cnt  : 4;
        FIELD ro_jcpll_500m_state_freqdet : 2;
        FIELD rsv_10                    : 6;
        FIELD ro_jcpll_500m_fl_out      : 16;
    
    
} REG_RO_JCPLL_500M_FREQDET, *PREG_RO_JCPLL_500M_FREQDET;

typedef struct
{
    

        FIELD rg_jcpll_500m_lock_cyclecnt : 16;
        FIELD rg_jcpll_500m_unlock_cyclecnt : 16;
    
    
} REG_RG_JCPLL_500M_FREQ_DET_1, *PREG_RG_JCPLL_500M_FREQ_DET_1;

typedef struct
{
    

        FIELD rg_jcpll_500m_lock_target_beg : 16;
        FIELD rg_jcpll_500m_lock_target_end : 16;
    
    
} REG_RG_JCPLL_500M_FREQ_DET_2, *PREG_RG_JCPLL_500M_FREQ_DET_2;

typedef struct
{
    

        FIELD rg_jcpll_500m_unlock_target_beg : 16;
        FIELD rg_jcpll_500m_unlock_target_end : 16;
    
    
} REG_RG_JCPLL_500M_FREQ_DET_3, *PREG_RG_JCPLL_500M_FREQ_DET_3;

typedef struct
{
    

        FIELD rg_jcpll_500m_freqlock_det_en : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_jcpll_500m_lock_cnt_clear : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_jcpll_500m_lock_lockth : 4;
        FIELD rg_jcpll_500m_unlockth    : 4;
        FIELD rg_jcpll_500m_wait_100us  : 8;
        FIELD rsv_24                    : 8;
    
    
} REG_RG_JCPLL_500M_FREQ_DET_4, *PREG_RG_JCPLL_500M_FREQ_DET_4;

typedef struct
{
    

        FIELD rg_da_pxp_jcpll_sdm_scan  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_sel_da_pxp_jcpll_sdm_scan : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_fe_peaking_ctrl : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_force_sel_da_pxp_rx_fe_peaking_ctrl : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_da_pxp_jcpll_sdm_scan, *PREG_rg_da_pxp_jcpll_sdm_scan;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_speed : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_force_sel_da_pxp_aeq_speed : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_osr_sel : 2;
        FIELD rsv_18                    : 6;
        FIELD rg_force_sel_da_pxp_rx_osr_sel : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_aeq_speed, *PREG_rg_force_da_pxp_aeq_speed;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_mode  : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_force_sel_da_pxp_aeq_mode : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_rg_force_da_pxp_aeq_mode, *PREG_rg_force_da_pxp_aeq_mode;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_data_ben : 16;
        FIELD rg_force_sel_da_pxp_tx_data_ben : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_rg_force_da_pxp_tx_data_ben, *PREG_rg_force_da_pxp_tx_data_ben;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_fir_c0b : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_force_sel_da_pxp_tx_fir_c0b : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_fir_cn1 : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_force_sel_da_pxp_tx_fir_cn1 : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_fir_c0b, *PREG_rg_force_da_pxp_tx_fir_c0b;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_term_sel : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_force_sel_da_pxp_tx_term_sel : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_ckin_divisor : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_force_sel_da_pxp_tx_ckin_divisor : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_term_sel, *PREG_rg_force_da_pxp_tx_term_sel;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_fir_c1 : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_force_sel_da_pxp_tx_fir_c1 : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_fir_c2 : 3;
        FIELD rsv_19                    : 5;
        FIELD rg_force_sel_da_pxp_tx_fir_c2 : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_fir_c1, *PREG_rg_force_da_pxp_tx_fir_c1;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_rate_ctrl : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_force_sel_da_pxp_tx_rate_ctrl : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_cdr_pr_pieye : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_force_sel_da_pxp_cdr_pr_pieye : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_rate_ctrl, *PREG_rg_force_da_pxp_tx_rate_ctrl;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_dac_d0 : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_force_sel_da_pxp_rx_dac_d0 : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_dac_d1 : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_force_sel_da_pxp_rx_dac_d1 : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_dac_d0, *PREG_rg_force_da_pxp_rx_dac_d0;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_dac_e0 : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_force_sel_da_pxp_rx_dac_e0 : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_dac_e1 : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_force_sel_da_pxp_rx_dac_e1 : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_dac_e0, *PREG_rg_force_da_pxp_rx_dac_e0;

typedef struct
{
    

        FIELD rg_force_da_pxp_cdr_pr_fll_cor : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_force_sel_da_pxp_cdr_pr_fll_cor : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_dac_eye : 7;
        FIELD rsv_23                    : 1;
        FIELD rg_force_sel_da_pxp_rx_dac_eye : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_cdr_pr_fll_cor, *PREG_rg_force_da_pxp_cdr_pr_fll_cor;

typedef struct
{
    

        FIELD rg_force_da_pxp_cdr_pr_idac : 11;
        FIELD rsv_11                    : 5;
        FIELD rg_force_sel_da_pxp_cdr_pr_idac : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_sdm_pcw : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_cdr_pr_idac, *PREG_rg_force_da_pxp_cdr_pr_idac;

typedef struct
{
    

        FIELD rg_force_da_pxp_txpll_sdm_pcw : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_rg_force_da_pxp_txpll_sdm_pcw, *PREG_rg_force_da_pxp_txpll_sdm_pcw;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_fe_vos : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_force_sel_da_pxp_rx_fe_vos : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_sdm_pcw : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_rg_force_da_pxp_rx_fe_vos, *PREG_rg_force_da_pxp_rx_fe_vos;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_sdm_pcw : 31;
        FIELD rsv_31                    : 1;
    
    
} REG_rg_force_da_pxp_jcpll_sdm_pcw, *PREG_rg_force_da_pxp_jcpll_sdm_pcw;

typedef struct
{
    

        FIELD rg_force_da_pcie_cktx0_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pcie_cktx0_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pcie_cktx1_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pcie_cktx1_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pcie_cktx0_en, *PREG_rg_force_da_pcie_cktx0_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_en    : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_aeq_en : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_rg_force_da_pxp_aeq_en, *PREG_rg_force_da_pxp_aeq_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_bypass : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_aeq_bypass : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_aeq_ckon  : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_aeq_ckon : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_aeq_bypass, *PREG_rg_force_da_pxp_aeq_bypass;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_inprgrss : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_aeq_inprgrss : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_aeq_invldreq : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_aeq_invldreq : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_aeq_inprgrss, *PREG_rg_force_da_pxp_aeq_inprgrss;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_rstb  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_aeq_rstb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_cdr_injck_sel : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_cdr_injck_sel : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_aeq_rstb, *PREG_rg_force_da_pxp_aeq_rstb;

typedef struct
{
    

        FIELD rg_force_da_pxp_cdr_lpf_lck2data : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_cdr_lpf_lck2data : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_cdr_lpf_rstb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_cdr_lpf_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_cdr_lpf_lck2data, *PREG_rg_force_da_pxp_cdr_lpf_lck2data;

typedef struct
{
    

        FIELD rg_force_da_pxp_cdr_pd_pwdb : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_cdr_pd_pwdb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_cdr_pr_kband_rstb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_cdr_pr_kband_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_cdr_pd_pwdb, *PREG_rg_force_da_pxp_cdr_pd_pwdb;

typedef struct
{
    

        FIELD rg_force_da_pxp_cdr_pr_lpf_c_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_cdr_pr_lpf_c_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_cdr_pr_lpf_r_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_cdr_pr_lpf_r_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_cdr_pr_lpf_c_en, *PREG_rg_force_da_pxp_cdr_pr_lpf_c_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_cdr_pr_pieye_pwdb : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_cdr_pr_pieye_pwdb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_cdr_pr_pwdb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_cdr_pr_pwdb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_cdr_pr_pieye_pwdb, *PREG_rg_force_da_pxp_cdr_pr_pieye_pwdb;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_ckout_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_ckout_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_jcpll_en  : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_jcpll_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_jcpll_ckout_en, *PREG_rg_force_da_pxp_jcpll_ckout_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_kband_scan_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_kband_scan_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_jcpll_kband_scan_en_cg : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_jcpll_kband_scan_en_cg : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_jcpll_kband_scan_en, *PREG_rg_force_da_pxp_jcpll_kband_scan_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_kband_scan_in : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_kband_scan_in : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_jcpll_kband_scan_rstb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_jcpll_kband_scan_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_jcpll_kband_scan_in, *PREG_rg_force_da_pxp_jcpll_kband_scan_in;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_sdm_pcw_chg : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_sdm_pcw_chg : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_jcpll_sdm_scan_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_jcpll_sdm_scan_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_jcpll_sdm_pcw_chg, *PREG_rg_force_da_pxp_jcpll_sdm_pcw_chg;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_sdm_scan_en_cg : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_jcpll_sdm_scan_in : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_jcpll_sdm_scan_in : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_jcpll_sdm_scan_en_cg, *PREG_rg_force_da_pxp_jcpll_sdm_scan_en_cg;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_sdm_scan_rstb : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_sdm_scan_rstb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_oscal_ckon : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_rx_oscal_ckon : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_jcpll_sdm_scan_rstb, *PREG_rg_force_da_pxp_jcpll_sdm_scan_rstb;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_oscal_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_rx_oscal_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_oscal_rstb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_rx_oscal_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_oscal_en, *PREG_rg_force_da_pxp_rx_oscal_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_scan_enable : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_rx_scan_enable : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_scan_enable_cg : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_rx_scan_enable_cg : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_scan_enable, *PREG_rg_force_da_pxp_rx_scan_enable;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_scan_in : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_rx_scan_in : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_da_pxp_rx_scan         : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_sel_da_pxp_rx_scan     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_scan_in, *PREG_rg_force_da_pxp_rx_scan_in;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_scan_rst_b : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_rx_scan_rst_b : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_sigdet_pwdb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_rx_sigdet_pwdb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_scan_rst_b, *PREG_rg_force_da_pxp_rx_scan_rst_b;

typedef struct
{
    

        FIELD rg_force_da_pxp_tdc_cal_bw : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_tdc_cal_bw : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tdc_cal_offset : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tdc_cal_offset : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tdc_cal_bw, *PREG_rg_force_da_pxp_tdc_cal_bw;

typedef struct
{
    

        FIELD rg_force_da_pxp_txpll_ckout_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_txpll_ckout_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_en  : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_txpll_ckout_en, *PREG_rg_force_da_pxp_txpll_ckout_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_txpll_kband_load_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_txpll_kband_load_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_kband_scan_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_scan_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_txpll_kband_load_en, *PREG_rg_force_da_pxp_txpll_kband_load_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_txpll_kband_scan_en_cg : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_txpll_kband_scan_en_cg : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_kband_scan_in : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_kband_scan_in : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_txpll_kband_scan_en_cg, *PREG_rg_force_da_pxp_txpll_kband_scan_en_cg;

typedef struct
{
    

        FIELD rg_da_pxp_txpll_kband_scan : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_sel_da_pxp_txpll_kband_scan : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_kband_scan_rstb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_kband_scan_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_da_pxp_txpll_kband_scan, *PREG_rg_da_pxp_txpll_kband_scan;

typedef struct
{
    

        FIELD rg_force_da_pxp_txpll_sdm_pcw_chg : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_txpll_sdm_pcw_chg : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_sdm_scan_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_sdm_scan_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_txpll_sdm_pcw_chg, *PREG_rg_force_da_pxp_txpll_sdm_pcw_chg;

typedef struct
{
    

        FIELD rg_force_da_pxp_txpll_sdm_scan_en_cg : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_txpll_sdm_scan_en_cg : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_sdm_scan_in : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_sdm_scan_in : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_txpll_sdm_scan_en_cg, *PREG_rg_force_da_pxp_txpll_sdm_scan_en_cg;

typedef struct
{
    

        FIELD rg_da_pxp_txpll_sdm_scan  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_sel_da_pxp_txpll_sdm_scan : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_txpll_sdm_scan_rstb : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_txpll_sdm_scan_rstb : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_da_pxp_txpll_sdm_scan, *PREG_rg_da_pxp_txpll_sdm_scan;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_acjtag_dn : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_tx_acjtag_dn : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_acjtag_dp : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tx_acjtag_dp : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_acjtag_dn, *PREG_rg_force_da_pxp_tx_acjtag_dn;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_acjtag_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_tx_acjtag_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_ckin_sel : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tx_ckin_sel : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_acjtag_en, *PREG_rg_force_da_pxp_tx_acjtag_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_ck_en  : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_tx_ck_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_cm_en  : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tx_cm_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_ck_en, *PREG_rg_force_da_pxp_tx_ck_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_hsdata_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_tx_hsdata_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_data_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tx_data_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_hsdata_en, *PREG_rg_force_da_pxp_tx_hsdata_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_tx_rxdet_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_tx_rxdet_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_termp_clean : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tx_termp_clean : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_tx_rxdet_en, *PREG_rg_force_da_pxp_tx_rxdet_en;

typedef struct
{
    

        FIELD rg_force_da_pxp_jcpll_kband_load_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_jcpll_kband_load_en : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_scan_mode, *PREG_scan_mode;

typedef struct
{
    

        FIELD rg_da_pxp_jcpll_kband_scan : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_sel_da_pxp_jcpll_kband_scan : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tx_termcal_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tx_termcal_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_da_pxp_jcpll_kband_scan, *PREG_rg_da_pxp_jcpll_kband_scan;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_fe_gain_ctrl : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_force_sel_da_pxp_rx_fe_gain_ctrl : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_sigdet_os : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_force_sel_da_pxp_rx_sigdet_os : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_fe_gain_ctrl, *PREG_rg_force_da_pxp_rx_fe_gain_ctrl;

typedef struct
{
    

        FIELD rg_force_da_pxp_aeq_rmtxskip : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_aeq_rmtxskip : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_aeq_rxeqeval : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_aeq_rxeqeval : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_aeq_rmtxskip, *PREG_rg_force_da_pxp_aeq_rmtxskip;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_fe_pwdb : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_rx_fe_pwdb : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_rx_pdoscal_en : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_rx_pdoscal_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_fe_pwdb, *PREG_rg_force_da_pxp_rx_fe_pwdb;

typedef struct
{
    

        FIELD rg_force_da_pxp_rx_sigdet_cal_en : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_force_sel_da_pxp_rx_sigdet_cal_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_force_da_pxp_tdc_en    : 1;
        FIELD rsv_17                    : 7;
        FIELD rg_force_sel_da_pxp_tdc_en : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_rg_force_da_pxp_rx_sigdet_cal_en, *PREG_rg_force_da_pxp_rx_sigdet_cal_en;

typedef struct
{
    

        FIELD rg_dig_reserve_5          : 32;
    
    
} REG_ADD_DIG_RESERVE_5, *PREG_ADD_DIG_RESERVE_5;

typedef struct
{
    

        FIELD rg_dig_reserve_6          : 32;
    
    
} REG_ADD_DIG_RESERVE_6, *PREG_ADD_DIG_RESERVE_6;

typedef struct
{
    

        FIELD rg_dig_reserve_7          : 32;
    
    
} REG_ADD_DIG_RESERVE_7, *PREG_ADD_DIG_RESERVE_7;

typedef struct
{
    

        FIELD rg_dig_reserve_8          : 32;
    
    
} REG_ADD_DIG_RESERVE_8, *PREG_ADD_DIG_RESERVE_8;

typedef struct
{
    

        FIELD rg_dig_reserve_9          : 32;
    
    
} REG_ADD_DIG_RESERVE_9, *PREG_ADD_DIG_RESERVE_9;

typedef struct
{
    

        FIELD rg_dig_reserve_10         : 32;
    
    
} REG_ADD_DIG_RESERVE_10, *PREG_ADD_DIG_RESERVE_10;

typedef struct
{
    

        FIELD rg_dig_reserve_11         : 32;
    
    
} REG_ADD_DIG_RESERVE_11, *PREG_ADD_DIG_RESERVE_11;

typedef struct
{
    

        FIELD rg_dig_reserve_12         : 32;
    
    
} REG_ADD_DIG_RESERVE_12, *PREG_ADD_DIG_RESERVE_12;

typedef struct
{
    

        FIELD rg_dig_reserve_13         : 32;
    
    
} REG_ADD_DIG_RESERVE_13, *PREG_ADD_DIG_RESERVE_13;

typedef struct
{
    

        FIELD rg_dig_reserve_14         : 32;
    
    
} REG_ADD_DIG_RESERVE_14, *PREG_ADD_DIG_RESERVE_14;

typedef struct
{
    

        FIELD ro_dig_reserve_5          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_5, *PREG_ADD_DIG_RO_RESERVE_5;

typedef struct
{
    

        FIELD ro_dig_reserve_6          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_6, *PREG_ADD_DIG_RO_RESERVE_6;

typedef struct
{
    

        FIELD ro_dig_reserve_7          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_7, *PREG_ADD_DIG_RO_RESERVE_7;

typedef struct
{
    

        FIELD ro_dig_reserve_8          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_8, *PREG_ADD_DIG_RO_RESERVE_8;

typedef struct
{
    

        FIELD ro_dig_reserve_9          : 32;
    
    
} REG_ADD_DIG_RO_RESERVE_9, *PREG_ADD_DIG_RO_RESERVE_9;

typedef struct
{
    

        FIELD rg_dig_reserve_15         : 32;
    
    
} REG_ADD_DIG_RESERVE_15, *PREG_ADD_DIG_RESERVE_15;

typedef struct
{
    

        FIELD rg_dig_reserve_16         : 32;
    
    
} REG_ADD_DIG_RESERVE_16, *PREG_ADD_DIG_RESERVE_16;

typedef struct
{
    

        FIELD rg_dig_reserve_17         : 32;
    
    
} REG_ADD_DIG_RESERVE_17, *PREG_ADD_DIG_RESERVE_17;

typedef struct
{
    

        FIELD rg_dig_reserve_18         : 32;
    
    
} REG_ADD_DIG_RESERVE_18, *PREG_ADD_DIG_RESERVE_18;

typedef struct
{
    

        FIELD rg_dig_reserve_19         : 32;
    
    
} REG_ADD_DIG_RESERVE_19, *PREG_ADD_DIG_RESERVE_19;

typedef struct
{
    

        FIELD rg_dig_reserve_20         : 32;
    
    
} REG_ADD_DIG_RESERVE_20, *PREG_ADD_DIG_RESERVE_20;

typedef struct
{
    

        FIELD rg_dig_reserve_21         : 32;
    
    
} REG_ADD_DIG_RESERVE_21, *PREG_ADD_DIG_RESERVE_21;

typedef struct
{
    

        FIELD rg_dig_reserve_22         : 32;
    
    
} REG_ADD_DIG_RESERVE_22, *PREG_ADD_DIG_RESERVE_22;

typedef struct
{
    

        FIELD rg_dig_reserve_23         : 32;
    
    
} REG_ADD_DIG_RESERVE_23, *PREG_ADD_DIG_RESERVE_23;

typedef struct
{
    

        FIELD rg_dig_reserve_24         : 32;
    
    
} REG_ADD_DIG_RESERVE_24, *PREG_ADD_DIG_RESERVE_24;

typedef struct
{
    

        FIELD rg_dig_reserve_25         : 32;
    
    
} REG_ADD_DIG_RESERVE_25, *PREG_ADD_DIG_RESERVE_25;

typedef struct
{
    

        FIELD rg_dig_reserve_26         : 32;
    
    
} REG_ADD_DIG_RESERVE_26, *PREG_ADD_DIG_RESERVE_26;

typedef struct
{
    

        FIELD rg_dig_reserve_27         : 32;
    
    
} REG_ADD_DIG_RESERVE_27, *PREG_ADD_DIG_RESERVE_27;

typedef struct
{
    

        FIELD rg_dig_reserve_28         : 32;
    
    
} REG_ADD_DIG_RESERVE_28, *PREG_ADD_DIG_RESERVE_28;

typedef struct
{
    

        FIELD rg_dig_reserve_29         : 32;
    
    
} REG_ADD_DIG_RESERVE_29, *PREG_ADD_DIG_RESERVE_29;

typedef struct
{
    

        FIELD rg_dig_reserve_30         : 32;
    
    
} REG_ADD_DIG_RESERVE_30, *PREG_ADD_DIG_RESERVE_30;

typedef struct
{
    

        FIELD rg_dig_reserve_31         : 32;
    
    
} REG_ADD_DIG_RESERVE_31, *PREG_ADD_DIG_RESERVE_31;

typedef struct
{
    

        FIELD rg_dig_reserve_32         : 32;
    
    
} REG_ADD_DIG_RESERVE_32, *PREG_ADD_DIG_RESERVE_32;

typedef struct
{
    

        FIELD rg_dig_reserve_33         : 32;
    
    
} REG_ADD_DIG_RESERVE_33, *PREG_ADD_DIG_RESERVE_33;

typedef struct
{
    

        FIELD rg_dig_reserve_34         : 32;
    
    
} REG_ADD_DIG_RESERVE_34, *PREG_ADD_DIG_RESERVE_34;

typedef struct
{
    

        FIELD rg_dig_reserve_35         : 32;
    
    
} REG_ADD_DIG_RESERVE_35, *PREG_ADD_DIG_RESERVE_35;

typedef struct
{
    

        FIELD rg_dig_reserve_36         : 32;
    
    
} REG_ADD_DIG_RESERVE_36, *PREG_ADD_DIG_RESERVE_36;

typedef struct
{
    

        FIELD rg_dig_reserve_37         : 32;
    
    
} REG_ADD_DIG_RESERVE_37, *PREG_ADD_DIG_RESERVE_37;

typedef struct
{
    

        FIELD rg_dig_reserve_38         : 32;
    
    
} REG_ADD_DIG_RESERVE_38, *PREG_ADD_DIG_RESERVE_38;

typedef struct
{
    

        FIELD rg_dig_reserve_39         : 32;
    
    
} REG_ADD_DIG_RESERVE_39, *PREG_ADD_DIG_RESERVE_39;

typedef struct
{
    

        FIELD rg_dig_reserve_40         : 32;
    
    
} REG_ADD_DIG_RESERVE_40, *PREG_ADD_DIG_RESERVE_40;

typedef struct
{
    

        FIELD rg_dig_reserve_41         : 32;
    
    
} REG_ADD_DIG_RESERVE_41, *PREG_ADD_DIG_RESERVE_41;

typedef struct
{
    

        FIELD rg_dig_reserve_42         : 32;
    
    
} REG_ADD_DIG_RESERVE_42, *PREG_ADD_DIG_RESERVE_42;

typedef struct
{
    

        FIELD rg_dig_reserve_43         : 32;
    
    
} REG_ADD_DIG_RESERVE_43, *PREG_ADD_DIG_RESERVE_43;

typedef struct
{
    

        FIELD rg_dig_reserve_44         : 32;
    
    
} REG_ADD_DIG_RESERVE_44, *PREG_ADD_DIG_RESERVE_44;

typedef struct
{
    

        FIELD rg_dig_reserve_45         : 32;
    
    
} REG_ADD_DIG_RESERVE_45, *PREG_ADD_DIG_RESERVE_45;

typedef struct
{
    

        FIELD rg_dig_reserve_46         : 32;
    
    
} REG_ADD_DIG_RESERVE_46, *PREG_ADD_DIG_RESERVE_46;

typedef struct
{
    

        FIELD rg_dig_reserve_47         : 32;
    
    
} REG_ADD_DIG_RESERVE_47, *PREG_ADD_DIG_RESERVE_47;

typedef struct
{
    

        FIELD rg_dig_reserve_48         : 32;
    
    
} REG_ADD_DIG_RESERVE_48, *PREG_ADD_DIG_RESERVE_48;

typedef struct
{
    

        FIELD rg_da_ben_force_mode      : 1;
        FIELD rg_ad_ben_stop_cnt        : 1;
        FIELD rg_ad_ben_cnt_clr         : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_ad_ben_alarm_en        : 1;
        FIELD rg_ad_ben_alarm_clr       : 1;
        FIELD rg_ad_ben_alarm_times_clr : 1;
        FIELD rg_ad_ben_keep_time_clr   : 1;
        FIELD rsv_8                     : 8;
        FIELD rg_da_ben_force_value     : 16;
    
    
} REG_BEN_CTRL_0, *PREG_BEN_CTRL_0;

typedef struct
{
    

        FIELD rg_ad_ben_alarm_thr       : 32;
    
    
} REG_BEN_CTRL_1, *PREG_BEN_CTRL_1;

typedef struct
{
    

        FIELD ro_ad_ben_cnt             : 32;
    
    
} REG_BEN_STS_0, *PREG_BEN_STS_0;

typedef struct
{
    

        FIELD ro_ad_ben_out             : 1;
        FIELD ro_ad_ben_alarm           : 1;
        FIELD rsv_2                     : 30;
    
    
} REG_BEN_STS_1, *PREG_BEN_STS_1;

typedef struct
{
    

        FIELD ro_ad_ben_alarm_times     : 32;
    
    
} REG_BEN_STS_2, *PREG_BEN_STS_2;

typedef struct
{
    

        FIELD ro_ad_ben_keep_max        : 32;
    
    
} REG_BEN_STS_3, *PREG_BEN_STS_3;

typedef struct
{
    

        FIELD rg_tx_sd_inv              : 1;
        FIELD rg_tx_sd_stop_cnt         : 1;
        FIELD rg_tx_sd_cnt_clr          : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_tx_sd_alarm_en         : 1;
        FIELD rg_tx_sd_alarm_clr        : 1;
        FIELD rg_tx_sd_alarm_times_clr  : 1;
        FIELD rg_tx_sd_keep_time_clr    : 1;
        FIELD rsv_8                     : 24;
    
    
} REG_TX_SD_CTRL_0, *PREG_TX_SD_CTRL_0;

typedef struct
{
    

        FIELD rg_tx_sd_alarm_thr        : 32;
    
    
} REG_TX_SD_CTRL_1, *PREG_TX_SD_CTRL_1;

typedef struct
{
    

        FIELD ro_tx_sd_cnt              : 32;
    
    
} REG_TX_SD_STS_0, *PREG_TX_SD_STS_0;

typedef struct
{
    

        FIELD ro_tx_sd_out              : 1;
        FIELD ro_tx_sd_alarm            : 1;
        FIELD rsv_2                     : 30;
    
    
} REG_TX_SD_STS_1, *PREG_TX_SD_STS_1;

typedef struct
{
    

        FIELD ro_tx_sd_alarm_times      : 32;
    
    
} REG_TX_SD_STS_2, *PREG_TX_SD_STS_2;

typedef struct
{
    

        FIELD ro_tx_sd_keep_max         : 32;
    
    
} REG_TX_SD_STS_3, *PREG_TX_SD_STS_3;

// ----------------- ponxfi_csr_pma  Grouping Definitions -------------------
// ----------------- ponxfi_csr_pma Register Definition -------------------
#if 0
typedef volatile 
{
    UINT32                          rsv_0000[14336];  // 0000..DFFC
    REG_SS_LCPLL_PWCTL_SETTING_0    SS_LCPLL_PWCTL_SETTING_0; // E000
    REG_SS_LCPLL_PWCTL_SETTING_1    SS_LCPLL_PWCTL_SETTING_1; // E004
    REG_SS_LCPLL_PWCTL_SETTING_2    SS_LCPLL_PWCTL_SETTING_2; // E008
    REG_SS_LCPLL_PWCTL_DBG_SETTING  SS_LCPLL_PWCTL_DBG_SETTING; // E00C
    REG_SS_LCPLL_TDC_PW_0           SS_LCPLL_TDC_PW_0; // E010
    REG_SS_LCPLL_TDC_PW_1           SS_LCPLL_TDC_PW_1; // E014
    REG_SS_LCPLL_TDC_PW_2           SS_LCPLL_TDC_PW_2; // E018
    REG_SS_LCPLL_TDC_PW_3           SS_LCPLL_TDC_PW_3; // E01C
    REG_SS_LCPLL_TDC_PW_4           SS_LCPLL_TDC_PW_4; // E020
    REG_SS_LCPLL_TDC_PW_5           SS_LCPLL_TDC_PW_5; // E024
    REG_SS_LCPLL_TDC_FLT_0          SS_LCPLL_TDC_FLT_0; // E028
    REG_SS_LCPLL_TDC_FLT_1          SS_LCPLL_TDC_FLT_1; // E02C
    REG_SS_LCPLL_TDC_FLT_2          SS_LCPLL_TDC_FLT_2; // E030
    REG_SS_LCPLL_TDC_FLT_3          SS_LCPLL_TDC_FLT_3; // E034
    REG_SS_LCPLL_TDC_FLT_4          SS_LCPLL_TDC_FLT_4; // E038
    REG_SS_LCPLL_TDC_FLT_5          SS_LCPLL_TDC_FLT_5; // E03C
    REG_SS_LCPLL_TDC_FLT_6          SS_LCPLL_TDC_FLT_6; // E040
    REG_SS_LCPLL_TDC_FLT_7          SS_LCPLL_TDC_FLT_7; // E044
    REG_SS_LCPLL_TDC_PCW_1          SS_LCPLL_TDC_PCW_1; // E048
    REG_SS_LCPLL_TDC_PCW_2          SS_LCPLL_TDC_PCW_2; // E04C
    REG_SS_LCPLL_TDC_RO_1           SS_LCPLL_TDC_RO_1; // E050
    REG_SS_LCPLL_TDC_RO_2           SS_LCPLL_TDC_RO_2; // E054
    REG_SS_LCPLL_TDC_RO_3           SS_LCPLL_TDC_RO_3; // E058
    REG_SS_LCPLL_TDC_RO_4           SS_LCPLL_TDC_RO_4; // E05C
    REG_SS_LCPLL_TDC_RO_5           SS_LCPLL_TDC_RO_5; // E060
    REG_SS_LCPLL_TDC_CTRL_0         SS_LCPLL_TDC_CTRL_0; // E064
    REG_RX_EYE_TOP_EYEINDEX_CTRL_0  RX_EYE_TOP_EYEINDEX_CTRL_0; // E068
    REG_RX_EYE_TOP_EYEINDEX_CTRL_1  RX_EYE_TOP_EYEINDEX_CTRL_1; // E06C
    REG_RX_EYE_TOP_EYEINDEX_CTRL_2  RX_EYE_TOP_EYEINDEX_CTRL_2; // E070
    REG_RX_EYE_TOP_EYEINDEX_CTRL_3  RX_EYE_TOP_EYEINDEX_CTRL_3; // E074
    REG_RX_EYE_TOP_EYEOPENING_CTRL_0 RX_EYE_TOP_EYEOPENING_CTRL_0; // E078
    REG_RX_EYE_TOP_EYEOPENING_CTRL_1 RX_EYE_TOP_EYEOPENING_CTRL_1; // E07C
    REG_RX_EYE_TOP_EYECNT_CTRL_0    RX_EYE_TOP_EYECNT_CTRL_0; // E080
    REG_RX_EYE_TOP_EYECNT_CTRL_1    RX_EYE_TOP_EYECNT_CTRL_1; // E084
    REG_RX_EYE_TOP_EYECNT_CTRL_2    RX_EYE_TOP_EYECNT_CTRL_2; // E088
    REG_RX_CTRL_SEQUENCE_CTRL_0     RX_CTRL_SEQUENCE_CTRL_0; // E08C
    REG_RX_CTRL_SEQUENCE_CTRL_1     RX_CTRL_SEQUENCE_CTRL_1; // E090
    REG_RX_CTRL_SEQUENCE_CTRL_2     RX_CTRL_SEQUENCE_CTRL_2; // E094
    REG_RX_CTRL_SEQUENCE_CTRL_3     RX_CTRL_SEQUENCE_CTRL_3; // E098
    REG_RX_CTRL_SEQUENCE_CTRL_4     RX_CTRL_SEQUENCE_CTRL_4; // E09C
    UINT32                          rsv_E0A0[24];     // E0A0..E0FC
    REG_RX_CTRL_SEQUENCE_CTRL_5     RX_CTRL_SEQUENCE_CTRL_5; // E100
    REG_RX_CTRL_SEQUENCE_CTRL_6     RX_CTRL_SEQUENCE_CTRL_6; // E104
    REG_RX_CTRL_SEQUENCE_DISB_CTRL_0 RX_CTRL_SEQUENCE_DISB_CTRL_0; // E108
    REG_RX_CTRL_SEQUENCE_DISB_CTRL_1 RX_CTRL_SEQUENCE_DISB_CTRL_1; // E10C
    REG_RX_CTRL_SEQUENCE_FORCE_CTRL_0 RX_CTRL_SEQUENCE_FORCE_CTRL_0; // E110
    REG_RX_CTRL_SEQUENCE_FORCE_CTRL_1 RX_CTRL_SEQUENCE_FORCE_CTRL_1; // E114
    REG_PHY_EQ_CTRL_0               PHY_EQ_CTRL_0;    // E118
    REG_PHY_EQ_CTRL_1               PHY_EQ_CTRL_1;    // E11C
    REG_PHY_EQ_CTRL_2               PHY_EQ_CTRL_2;    // E120
    REG_PHY_EQ_CTRL_3               PHY_EQ_CTRL_3;    // E124
    REG_PHY_EQ_CTRL_4               PHY_EQ_CTRL_4;    // E128
    REG_PHY_EQ_CTRL_5               PHY_EQ_CTRL_5;    // E12C
    REG_PHY_EQ_CTRL_6               PHY_EQ_CTRL_6;    // E130
    REG_PHY_EQ_CTRL_7               PHY_EQ_CTRL_7;    // E134
    REG_PHY_EQ_CTRL_8               PHY_EQ_CTRL_8;    // E138
    REG_PHY_EQ_CTRL_9               PHY_EQ_CTRL_9;    // E13C
    REG_PHY_EQ_CTRL_10              PHY_EQ_CTRL_10;   // E140
    REG_SS_RX_FEOS                  SS_RX_FEOS;       // E144
    REG_SS_RX_BLWC                  SS_RX_BLWC;       // E148
    REG_SS_RX_FREQ_DET_1            SS_RX_FREQ_DET_1; // E14C
    REG_SS_RX_FREQ_DET_2            SS_RX_FREQ_DET_2; // E150
    REG_SS_RX_FREQ_DET_3            SS_RX_FREQ_DET_3; // E154
    REG_SS_RX_FREQ_DET_4            SS_RX_FREQ_DET_4; // E158
    REG_SS_RX_PI_CAL                SS_RX_PI_CAL;     // E15C
    REG_SS_RX_CAL_1                 SS_RX_CAL_1;      // E160
    REG_SS_RX_CAL_2                 SS_RX_CAL_2;      // E164
    REG_SS_RX_SIGDET_0              SS_RX_SIGDET_0;   // E168
    REG_SS_RX_SIGDET_1              SS_RX_SIGDET_1;   // E16C
    REG_SS_RX_FLL_0                 SS_RX_FLL_0;      // E170
    REG_SS_RX_FLL_1                 SS_RX_FLL_1;      // E174
    REG_SS_RX_FLL_2                 SS_RX_FLL_2;      // E178
    REG_SS_RX_FLL_3                 SS_RX_FLL_3;      // E17C
    REG_SS_RX_FLL_4                 SS_RX_FLL_4;      // E180
    REG_SS_RX_FLL_5                 SS_RX_FLL_5;      // E184
    REG_SS_RX_FLL_6                 SS_RX_FLL_6;      // E188
    REG_SS_RX_FLL_7                 SS_RX_FLL_7;      // E18C
    REG_SS_RX_FLL_8                 SS_RX_FLL_8;      // E190
    REG_SS_RX_FLL_9                 SS_RX_FLL_9;      // E194
    REG_SS_RX_FLL_a                 SS_RX_FLL_a;      // E198
    REG_SS_RX_FLL_b                 SS_RX_FLL_b;      // E19C
    UINT32                          rsv_E1A0[24];     // E1A0..E1FC
    REG_RX_PDOS_CTRL_0              RX_PDOS_CTRL_0;   // E200
    REG_RX_RESET_0                  RX_RESET_0;       // E204
    REG_RX_RESET_1                  RX_RESET_1;       // E208
    REG_RX_DEBUG_0                  RX_DEBUG_0;       // E20C
    REG_BISTCTL_CONTROL             BISTCTL_CONTROL;  // E210
    REG_BISTCTL_ALIGN_PAT           BISTCTL_ALIGN_PAT; // E214
    REG_BISTCTL_PROGRAM_PAT_0       BISTCTL_PROGRAM_PAT_0; // E218
    REG_BISTCTL_PROGRAM_PAT_1       BISTCTL_PROGRAM_PAT_1; // E21C
    REG_BISTCTL_POLLUTION           BISTCTL_POLLUTION; // E220
    REG_BISTCTL_PRBS_INITIAL_SEED   BISTCTL_PRBS_INITIAL_SEED; // E224
    REG_BISTCTL_PRBS_EVENT          BISTCTL_PRBS_EVENT; // E228
    REG_BISTCTL_PRBS_ERRCNT         BISTCTL_PRBS_ERRCNT; // E22C
    REG_BISTCTL_PRBS_FAIL_THRESHOLD BISTCTL_PRBS_FAIL_THRESHOLD; // E230
    REG_RX_TORGS_DEBUG_0            RX_TORGS_DEBUG_0; // E234
    REG_RX_TORGS_DEBUG_1            RX_TORGS_DEBUG_1; // E238
    REG_RX_TORGS_DEBUG_2            RX_TORGS_DEBUG_2; // E23C
    REG_RX_TORGS_DEBUG_3            RX_TORGS_DEBUG_3; // E240
    REG_RX_TORGS_DEBUG_4            RX_TORGS_DEBUG_4; // E244
    REG_RX_TORGS_DEBUG_5            RX_TORGS_DEBUG_5; // E248
    REG_RX_TORGS_DEBUG_6            RX_TORGS_DEBUG_6; // E24C
    REG_RX_TORGS_DEBUG_7            RX_TORGS_DEBUG_7; // E250
    REG_RX_TORGS_DEBUG_8            RX_TORGS_DEBUG_8; // E254
    REG_RX_TORGS_DEBUG_9            RX_TORGS_DEBUG_9; // E258
    REG_RX_TORGS_DEBUG_10           RX_TORGS_DEBUG_10; // E25C
    REG_SS_TX_RST_B                 SS_TX_RST_B;      // E260
    REG_SS_TX_CALIB_0               SS_TX_CALIB_0;    // E264
    REG_SS_TX_CALIB_1               SS_TX_CALIB_1;    // E268
    REG_SS_TX_CALIB_2               SS_TX_CALIB_2;    // E26C
    REG_XPON_SETTING_0              XPON_SETTING_0;   // E270
    REG_XPON_SETTING_1              XPON_SETTING_1;   // E274
    REG_XPON_SETTING_2              XPON_SETTING_2;   // E278
    REG_XPON_STA                    XPON_STA;         // E27C
    REG_XPON_INT_EN_0               XPON_INT_EN_0;    // E280
    REG_XPON_INT_EN_1               XPON_INT_EN_1;    // E284
    REG_XPON_INT_STA_0              XPON_INT_STA_0;   // E288
    REG_XPON_INT_STA_1              XPON_INT_STA_1;   // E28C
    REG_RX_TORGS_DEBUG_11           RX_TORGS_DEBUG_11; // E290
    REG_RX_FORCE_MODE_0             RX_FORCE_MODE_0;  // E294
    REG_RX_FORCE_MODE_1             RX_FORCE_MODE_1;  // E298
    REG_RX_FORCE_MODE_2             RX_FORCE_MODE_2;  // E29C
    UINT32                          rsv_E2A0[24];     // E2A0..E2FC
    REG_RX_DISB_MODE_0              RX_DISB_MODE_0;   // E300
    REG_RX_DISB_MODE_1              RX_DISB_MODE_1;   // E304
    REG_RX_DISB_MODE_2              RX_DISB_MODE_2;   // E308
    REG_RX_FORCE_MODE_3             RX_FORCE_MODE_3;  // E30C
    REG_RX_FORCE_MODE_4             RX_FORCE_MODE_4;  // E310
    REG_RX_FORCE_MODE_5             RX_FORCE_MODE_5;  // E314
    REG_RX_FORCE_MODE_6             RX_FORCE_MODE_6;  // E318
    REG_RX_DISB_MODE_3              RX_DISB_MODE_3;   // E31C
    REG_RX_DISB_MODE_4              RX_DISB_MODE_4;   // E320
    REG_RX_DISB_MODE_5              RX_DISB_MODE_5;   // E324
    REG_RX_FORCE_MODE_7             RX_FORCE_MODE_7;  // E328
    REG_RX_FORCE_MODE_8             RX_FORCE_MODE_8;  // E32C
    REG_RX_FORCE_MODE_9             RX_FORCE_MODE_9;  // E330
    REG_RX_DISB_MODE_6              RX_DISB_MODE_6;   // E334
    REG_RX_DISB_MODE_7              RX_DISB_MODE_7;   // E338
    REG_RX_DISB_MODE_8              RX_DISB_MODE_8;   // E33C
    REG_SS_BIST_0                   SS_BIST_0;        // E340
    REG_SS_BIST_1                   SS_BIST_1;        // E344
    REG_SS_BIST_2                   SS_BIST_2;        // E348
    REG_SS_DA_XPON_PWDB_0           SS_DA_XPON_PWDB_0; // E34C
    REG_SS_DA_XPON_PWDB_1           SS_DA_XPON_PWDB_1; // E350
    REG_SS_LCPLL_0                  SS_LCPLL_0;       // E354
    REG_SS_LCPLL_1                  SS_LCPLL_1;       // E358
    REG_SS_LCPLL_2                  SS_LCPLL_2;       // E35C
    REG_ADD_DIG_RESERVE_0           ADD_DIG_RESERVE_0; // E360
    REG_ADD_DIG_RESERVE_1           ADD_DIG_RESERVE_1; // E364
    REG_ADD_DIG_RESERVE_2           ADD_DIG_RESERVE_2; // E368
    REG_ADD_DIG_RESERVE_3           ADD_DIG_RESERVE_3; // E36C
    REG_ADD_DIG_RESERVE_4           ADD_DIG_RESERVE_4; // E370
    REG_RG_XPON_RX_RESERVED_1       RG_XPON_RX_RESERVED_1; // E374
    REG_ADD_DIG_RO_RESERVE_0        ADD_DIG_RO_RESERVE_0; // E378
    REG_ADD_DIG_RO_RESERVE_1        ADD_DIG_RO_RESERVE_1; // E37C
    REG_ADD_DIG_RO_RESERVE_2        ADD_DIG_RO_RESERVE_2; // E380
    REG_ADD_DIG_RO_RESERVE_3        ADD_DIG_RO_RESERVE_3; // E384
    REG_ADD_DIG_RO_RESERVE_4        ADD_DIG_RO_RESERVE_4; // E388
    REG_ADD_RX_SYS_EN_SEL_0         ADD_RX_SYS_EN_SEL_0; // E38C
    REG_PLL_TDC_FREQDET_0           PLL_TDC_FREQDET_0; // E390
    REG_PLL_TDC_FREQDET_1           PLL_TDC_FREQDET_1; // E394
    REG_PLL_TDC_FREQDET_2           PLL_TDC_FREQDET_2; // E398
    REG_PLL_TDC_FREQDET_3           PLL_TDC_FREQDET_3; // E39C
    UINT32                          rsv_E3A0[24];     // E3A0..E3FC
    REG_DA_XPON_TX_FORCE_0          DA_XPON_TX_FORCE_0; // E400
    REG_DA_XPON_TX_FORCE_1          DA_XPON_TX_FORCE_1; // E404
    REG_DA_XPON_TX_FORCE_2          DA_XPON_TX_FORCE_2; // E408
    REG_RX_FORCE_MODE_10            RX_FORCE_MODE_10; // E40C
    REG_ADD_CLKPATH_RST_0           ADD_CLKPATH_RST_0; // E410
    REG_ADD_XPON_MODE_1             ADD_XPON_MODE_1;  // E414
    REG_ADD_R2T_MODE_1              ADD_R2T_MODE_1;   // E418
    REG_ADD_T2R_MODE_1              ADD_T2R_MODE_1;   // E41C
    REG_ADD_LCPLL_RO_1              ADD_LCPLL_RO_1;   // E420
    REG_ADD_RO_RX2ANA_1             ADD_RO_RX2ANA_1;  // E424
    REG_ADD_RO_RX2ANA_2             ADD_RO_RX2ANA_2;  // E428
    REG_ADD_RO_RX2ANA_3             ADD_RO_RX2ANA_3;  // E42C
    REG_ADD_RO_R2TMODE_1            ADD_RO_R2TMODE_1; // E430
    REG_RG_LCPLL_XPON_CMN_STB_CTRL_0 RG_LCPLL_XPON_CMN_STB_CTRL_0; // E434
    REG_RG_LCPLL_XPON_CMN_STB_CTRL_1 RG_LCPLL_XPON_CMN_STB_CTRL_1; // E438
    REG_RG_TX_HSDATA_EN_EXT_CNT_0   RG_TX_HSDATA_EN_EXT_CNT_0; // E43C
    REG_PON_TX_COUNTER_0            PON_TX_COUNTER_0; // E440
    REG_PON_TX_COUNTER_1            PON_TX_COUNTER_1; // E444
    REG_PON_TX_COUNTER_2            PON_TX_COUNTER_2; // E448
    REG_PON_TX_COUNTER_3            PON_TX_COUNTER_3; // E44C
    REG_PON_CK_SET                  PON_CK_SET;       // E450
    REG_TX_FIFO_MODE_SEL            TX_FIFO_MODE_SEL; // E454
    REG_XPON_PLL_STB_CNT            XPON_PLL_STB_CNT; // E458
    REG_XPON_PLL_STOP_CNT           XPON_PLL_STOP_CNT; // E45C
    REG_SW_RST_SET                  SW_RST_SET;       // E460
    REG_ADD_RO_TX2ANA_1             ADD_RO_TX2ANA_1;  // E464
    REG_TX_DLY_CTRL                 TX_DLY_CTRL;      // E468
    REG_MEM_WRAPPER_CTRL            MEM_WRAPPER_CTRL; // E46C
    REG_XPON_INT_EN_2               XPON_INT_EN_2;    // E470
    REG_XPON_INT_EN_3               XPON_INT_EN_3;    // E474
    REG_XPON_INT_STA_2              XPON_INT_STA_2;   // E478
    REG_XPON_INT_STA_3              XPON_INT_STA_3;   // E47C
    REG_XPON_SD_BEHAVIOR_SETTING_0  XPON_SD_BEHAVIOR_SETTING_0; // E480
    REG_XPON_SD_BEHAVIOR_SETTING_1  XPON_SD_BEHAVIOR_SETTING_1; // E484
    REG_XPON_SD_BEHAVIOR_STA        XPON_SD_BEHAVIOR_STA; // E488
    REG_RX_EXTRAL_CTRL              RX_EXTRAL_CTRL;   // E48C
    REG_RX_LEQ_DISB_CTRL0           RX_LEQ_DISB_CTRL0; // E490
    REG_RX_LEQ_DISB_CTRL1           RX_LEQ_DISB_CTRL1; // E494
    REG_RX_LEQ_FORCE_CTRL0          RX_LEQ_FORCE_CTRL0; // E498
    REG_RX_LEQ_FORCE_CTRL1          RX_LEQ_FORCE_CTRL1; // E49C
    UINT32                          rsv_E4A0[24];     // E4A0..E4FC
    REG_RX_LEQ_ENTIME_CTRL0         RX_LEQ_ENTIME_CTRL0; // E500
    REG_RX_LEQ_ENTIME_CTRL1         RX_LEQ_ENTIME_CTRL1; // E504
    REG_RX_LEQ_ENTIME_CTRL2         RX_LEQ_ENTIME_CTRL2; // E508
    REG_RX_LEQ_CTRL0                RX_LEQ_CTRL0;     // E50C
    REG_RX_LEQ_CTRL1                RX_LEQ_CTRL1;     // E510
    REG_RX_LEQ_CTRL2                RX_LEQ_CTRL2;     // E514
    REG_RX_LEQ_RO0                  RX_LEQ_RO0;       // E518
    REG_RX_LEQ_RO1                  RX_LEQ_RO1;       // E51C
    REG_PLL_FT_FREQDET_0            PLL_FT_FREQDET_0; // E520
    REG_PLL_FT_FREQDET_1            PLL_FT_FREQDET_1; // E524
    REG_PLL_FT_FREQDET_2            PLL_FT_FREQDET_2; // E528
    REG_PLL_FT_FREQDET_3            PLL_FT_FREQDET_3; // E52C
    REG_RO_RX_FREQDET               RO_RX_FREQDET;    // E530
    REG_RO_PLL_FREQDET              RO_PLL_FREQDET;   // E534
    REG_RO_PLL_FT_FREQDET           RO_PLL_FT_FREQDET; // E538
    REG_RO_PMA_FREQDET              RO_PMA_FREQDET;   // E53C
    REG_RG_PMA_FREQDET              RG_PMA_FREQDET;   // E540
    REG_RG_EXT_BEN_DATA             RG_EXT_BEN_DATA;  // E544
    REG_RG_PRE_BEN_DATA             RG_PRE_BEN_DATA;  // E548
    REG_RX_TORGS_DEBUG_12           RX_TORGS_DEBUG_12; // E54C
    REG_RO_FLL_ADC_0                RO_FLL_ADC_0;     // E550
    REG_RO_FLL_ADC_1                RO_FLL_ADC_1;     // E554
    REG_RO_FLL_ADC_2                RO_FLL_ADC_2;     // E558
    REG_RO_FLL_ADC_3                RO_FLL_ADC_3;     // E55C
    REG_RO_FLL_ADC_4                RO_FLL_ADC_4;     // E560
    REG_RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL; // E564
    REG_XPON_INT_EN_4               XPON_INT_EN_4;    // E568
    REG_XPON_INT_STA_4              XPON_INT_STA_4;   // E56C
    REG_XPON_PMA_AFIFO_REACH_TH     XPON_PMA_AFIFO_REACH_TH; // E570
    REG_XPON_MD32_PBUS_CSR_CTRL     XPON_MD32_PBUS_CSR_CTRL; // E574
    REG_BENOFF_BIST_SEED            BENOFF_BIST_SEED; // E578
    REG_PWR_PLL_CTRL                PWR_PLL_CTRL;     // E57C
    REG_xpon_tx_rate_ctrl           xpon_tx_rate_ctrl; // E580
    REG_BENOFF_DATA0                BENOFF_DATA0;     // E584
    REG_BENOFF_DATA1                BENOFF_DATA1;     // E588
    REG_BENOFF_DATA2                BENOFF_DATA2;     // E58C
    REG_BENOFF_DATA3                BENOFF_DATA3;     // E590
    REG_BENOFF_CTRL                 BENOFF_CTRL;      // E594
    REG_HS_DATA_EN_SEL              HS_DATA_EN_SEL;   // E598
    REG_FIFO_CK_STATUS              FIFO_CK_STATUS;   // E59C
    UINT32                          rsv_E5A0[24];     // E5A0..E5FC
    REG_TDC_DLF_GAIN_STATUS         TDC_DLF_GAIN_STATUS; // E600
    REG_TDC_DLF_MODE_SETTING        TDC_DLF_MODE_SETTING; // E604
    REG_MD32_ISR_CTRL               MD32_ISR_CTRL;    // E608
    REG_MD32_MEM_CLK_CTRL           MD32_MEM_CLK_CTRL; // E60C
    REG_MD32_MEM_CLK_CG_CTRL        MD32_MEM_CLK_CG_CTRL; // E610
    REG_XG_EQD_STA                  XG_EQD_STA;       // E614
    REG_XG_EQD_CTRL                 XG_EQD_CTRL;      // E618
    REG_RAWDATA_DUMP_CTRL_0         RAWDATA_DUMP_CTRL_0; // E61C
    REG_RAWDATA_DUMP_CTRL_1         RAWDATA_DUMP_CTRL_1; // E620
    REG_RAWDATA_DUMP_CTRL_2         RAWDATA_DUMP_CTRL_2; // E624
    REG_RAWDATA_DUMP_CTRL_3         RAWDATA_DUMP_CTRL_3; // E628
    REG_RAWDATA_DUMP_STA_0          RAWDATA_DUMP_STA_0; // E62C
    REG_RAWDATA_DUMP_STA_1          RAWDATA_DUMP_STA_1; // E630
    REG_RAWDATA_DUMP_STA_2          RAWDATA_DUMP_STA_2; // E634
    REG_MD32MEM_DIV2_CNT            MD32MEM_DIV2_CNT; // E638
    REG_AD_XPON_CDR_LPF_SV          AD_XPON_CDR_LPF_SV; // E63C
    REG_K_VALUE_RD                  K_VALUE_RD;       // E640
    REG_XPONPLL_CTRL                XPONPLL_CTRL;     // E644
    REG_MD32_GATE_HALT              MD32_GATE_HALT;   // E648
    REG_MD32_MONCCNT                MD32_MONCCNT;     // E64C
    REG_MD32_MONPCNT0               MD32_MONPCNT0;    // E650
    REG_MD32_MONPCNT1               MD32_MONPCNT1;    // E654
    REG_MD32_MONPCNT2               MD32_MONPCNT2;    // E658
    REG_MD32_MONCONTID              MD32_MONCONTID;   // E65C
    REG_MD32_MONPC                  MD32_MONPC;       // E660
    REG_MD32_TBUF                   MD32_TBUF;        // E664
    REG_MD32_TBUFWDATA_L            MD32_TBUFWDATA_L; // E668
    REG_MD32_TBUFWDATA_H            MD32_TBUFWDATA_H; // E66C
    REG_MD32_TBUFRDATA_L            MD32_TBUFRDATA_L; // E670
    REG_MD32_TBUFRDATA_H            MD32_TBUFRDATA_H; // E674
    REG_ADDR_MD32_PMEM_ADDR_REV     ADDR_MD32_PMEM_ADDR_REV; // E678
    REG_ADDR_MD32_PMEM_DATA_REV     ADDR_MD32_PMEM_DATA_REV; // E67C
    REG_ADDR_MD32_DMEM_ADDR_REV     ADDR_MD32_DMEM_ADDR_REV; // E680
    REG_ADDR_MD32_DMEM_DATA_REV     ADDR_MD32_DMEM_DATA_REV; // E684
    REG_SS_JCPLL_PWCTL_SETTING_0    SS_JCPLL_PWCTL_SETTING_0; // E688
    REG_SS_JCPLL_PWCTL_SETTING_1    SS_JCPLL_PWCTL_SETTING_1; // E68C
    REG_SS_JCPLL_PWCTL_SETTING_2    SS_JCPLL_PWCTL_SETTING_2; // E690
    REG_JCPLL_CHG                   JCPLL_CHG;        // E694
    REG_RG_JCPLL_SDM_PCW_CTRL       RG_JCPLL_SDM_PCW_CTRL; // E698
    REG_RG_JCPLL_SDM_PCW_CHG_CTRL   RG_JCPLL_SDM_PCW_CHG_CTRL; // E69C
    UINT32                          rsv_E6A0[24];     // E6A0..E6FC
    REG_PLL_JCPLL_FT_FREQDET_0      PLL_JCPLL_FT_FREQDET_0; // E700
    REG_PLL_JCPLL_FT_FREQDET_1      PLL_JCPLL_FT_FREQDET_1; // E704
    REG_PLL_JCPLL_FT_FREQDET_2      PLL_JCPLL_FT_FREQDET_2; // E708
    REG_PLL_JCPLL_FT_FREQDET_3      PLL_JCPLL_FT_FREQDET_3; // E70C
    REG_JCPLL_FT_CK_MUX             JCPLL_FT_CK_MUX;  // E710
    REG_JCPLL_DA_RG_CTRL_0          JCPLL_DA_RG_CTRL_0; // E714
    REG_JCPLL_DA_RG_CTRL_1          JCPLL_DA_RG_CTRL_1; // E718
    REG_JCPLL_DA_RG_CTRL_2          JCPLL_DA_RG_CTRL_2; // E71C
    REG_XFI_PLL_DA_RG_CTRL_0        XFI_PLL_DA_RG_CTRL_0; // E720
    REG_XFI_PLL_DA_RG_CTRL_1        XFI_PLL_DA_RG_CTRL_1; // E724
    REG_XFI_PLL_DA_RG_CTRL_2        XFI_PLL_DA_RG_CTRL_2; // E728
    REG_AD_DA_PROBE_STS_0           AD_DA_PROBE_STS_0; // E72C
    REG_AD_DA_PROBE_STS_1           AD_DA_PROBE_STS_1; // E730
    REG_JCPLL_SCAN_CTRL             JCPLL_SCAN_CTRL;  // E734
    REG_XFI_GPIO_SEL_0              XFI_GPIO_SEL_0;   // E738
    REG_TX_PAR_PROBE_PLL_CTRL       TX_PAR_PROBE_PLL_CTRL; // E73C
    REG_DUMP_RX_PCSRST_CTRL         DUMP_RX_PCSRST_CTRL; // E740
    REG_XFI_TX_FIFO_STS             XFI_TX_FIFO_STS;  // E744
    REG_JCPLL_CK_RSTB_CTRL          JCPLL_CK_RSTB_CTRL; // E748
    REG_RO_TDC_TX_FREQDET           RO_TDC_TX_FREQDET; // E74C
    REG_RO_JCPLL_FT_FREQDET         RO_JCPLL_FT_FREQDET; // E750
    REG_RO_JCPLL_500M_FREQDET       RO_JCPLL_500M_FREQDET; // E754
    REG_RG_JCPLL_500M_FREQ_DET_1    RG_JCPLL_500M_FREQ_DET_1; // E758
    REG_RG_JCPLL_500M_FREQ_DET_2    RG_JCPLL_500M_FREQ_DET_2; // E75C
    REG_RG_JCPLL_500M_FREQ_DET_3    RG_JCPLL_500M_FREQ_DET_3; // E760
    REG_RG_JCPLL_500M_FREQ_DET_4    RG_JCPLL_500M_FREQ_DET_4; // E764
    REG_rg_da_pxp_jcpll_sdm_scan    rg_da_pxp_jcpll_sdm_scan; // E768
    REG_rg_force_da_pxp_aeq_speed   rg_force_da_pxp_aeq_speed; // E76C
    REG_rg_force_da_pxp_aeq_mode    rg_force_da_pxp_aeq_mode; // E770
    REG_rg_force_da_pxp_tx_data_ben rg_force_da_pxp_tx_data_ben; // E774
    REG_rg_force_da_pxp_tx_fir_c0b  rg_force_da_pxp_tx_fir_c0b; // E778
    REG_rg_force_da_pxp_tx_term_sel rg_force_da_pxp_tx_term_sel; // E77C
    REG_rg_force_da_pxp_tx_fir_c1   rg_force_da_pxp_tx_fir_c1; // E780
    REG_rg_force_da_pxp_tx_rate_ctrl rg_force_da_pxp_tx_rate_ctrl; // E784
    REG_rg_force_da_pxp_rx_dac_d0   rg_force_da_pxp_rx_dac_d0; // E788
    REG_rg_force_da_pxp_rx_dac_e0   rg_force_da_pxp_rx_dac_e0; // E78C
    REG_rg_force_da_pxp_cdr_pr_fll_cor rg_force_da_pxp_cdr_pr_fll_cor; // E790
    REG_rg_force_da_pxp_cdr_pr_idac rg_force_da_pxp_cdr_pr_idac; // E794
    REG_rg_force_da_pxp_txpll_sdm_pcw rg_force_da_pxp_txpll_sdm_pcw; // E798
    REG_rg_force_da_pxp_rx_fe_vos   rg_force_da_pxp_rx_fe_vos; // E79C
    UINT32                          rsv_E7A0[24];     // E7A0..E7FC
    REG_rg_force_da_pxp_jcpll_sdm_pcw rg_force_da_pxp_jcpll_sdm_pcw; // E800
    REG_rg_force_da_pcie_cktx0_en   rg_force_da_pcie_cktx0_en; // E804
    REG_rg_force_da_pxp_aeq_en      rg_force_da_pxp_aeq_en; // E808
    REG_rg_force_da_pxp_aeq_bypass  rg_force_da_pxp_aeq_bypass; // E80C
    REG_rg_force_da_pxp_aeq_inprgrss rg_force_da_pxp_aeq_inprgrss; // E810
    REG_rg_force_da_pxp_aeq_rstb    rg_force_da_pxp_aeq_rstb; // E814
    REG_rg_force_da_pxp_cdr_lpf_lck2data rg_force_da_pxp_cdr_lpf_lck2data; // E818
    REG_rg_force_da_pxp_cdr_pd_pwdb rg_force_da_pxp_cdr_pd_pwdb; // E81C
    REG_rg_force_da_pxp_cdr_pr_lpf_c_en rg_force_da_pxp_cdr_pr_lpf_c_en; // E820
    REG_rg_force_da_pxp_cdr_pr_pieye_pwdb rg_force_da_pxp_cdr_pr_pieye_pwdb; // E824
    REG_rg_force_da_pxp_jcpll_ckout_en rg_force_da_pxp_jcpll_ckout_en; // E828
    REG_rg_force_da_pxp_jcpll_kband_scan_en rg_force_da_pxp_jcpll_kband_scan_en; // E82C
    REG_rg_force_da_pxp_jcpll_kband_scan_in rg_force_da_pxp_jcpll_kband_scan_in; // E830
    REG_rg_force_da_pxp_jcpll_sdm_pcw_chg rg_force_da_pxp_jcpll_sdm_pcw_chg; // E834
    REG_rg_force_da_pxp_jcpll_sdm_scan_en_cg rg_force_da_pxp_jcpll_sdm_scan_en_cg; // E838
    REG_rg_force_da_pxp_jcpll_sdm_scan_rstb rg_force_da_pxp_jcpll_sdm_scan_rstb; // E83C
    REG_rg_force_da_pxp_rx_oscal_en rg_force_da_pxp_rx_oscal_en; // E840
    REG_rg_force_da_pxp_rx_scan_enable rg_force_da_pxp_rx_scan_enable; // E844
    REG_rg_force_da_pxp_rx_scan_in  rg_force_da_pxp_rx_scan_in; // E848
    REG_rg_force_da_pxp_rx_scan_rst_b rg_force_da_pxp_rx_scan_rst_b; // E84C
    REG_rg_force_da_pxp_tdc_cal_bw  rg_force_da_pxp_tdc_cal_bw; // E850
    REG_rg_force_da_pxp_txpll_ckout_en rg_force_da_pxp_txpll_ckout_en; // E854
    REG_rg_force_da_pxp_txpll_kband_load_en rg_force_da_pxp_txpll_kband_load_en; // E858
    REG_rg_force_da_pxp_txpll_kband_scan_en_cg rg_force_da_pxp_txpll_kband_scan_en_cg; // E85C
    REG_rg_da_pxp_txpll_kband_scan  rg_da_pxp_txpll_kband_scan; // E860
    REG_rg_force_da_pxp_txpll_sdm_pcw_chg rg_force_da_pxp_txpll_sdm_pcw_chg; // E864
    REG_rg_force_da_pxp_txpll_sdm_scan_en_cg rg_force_da_pxp_txpll_sdm_scan_en_cg; // E868
    REG_rg_da_pxp_txpll_sdm_scan    rg_da_pxp_txpll_sdm_scan; // E86C
    REG_rg_force_da_pxp_tx_acjtag_dn rg_force_da_pxp_tx_acjtag_dn; // E870
    REG_rg_force_da_pxp_tx_acjtag_en rg_force_da_pxp_tx_acjtag_en; // E874
    REG_rg_force_da_pxp_tx_ck_en    rg_force_da_pxp_tx_ck_en; // E878
    REG_rg_force_da_pxp_tx_hsdata_en rg_force_da_pxp_tx_hsdata_en; // E87C
    REG_rg_force_da_pxp_tx_rxdet_en rg_force_da_pxp_tx_rxdet_en; // E880
    REG_scan_mode                   scan_mode;        // E884
    REG_rg_da_pxp_jcpll_kband_scan  rg_da_pxp_jcpll_kband_scan; // E888
    REG_rg_force_da_pxp_rx_fe_gain_ctrl rg_force_da_pxp_rx_fe_gain_ctrl; // E88C
    REG_rg_force_da_pxp_aeq_rmtxskip rg_force_da_pxp_aeq_rmtxskip; // E890
    REG_rg_force_da_pxp_rx_fe_pwdb  rg_force_da_pxp_rx_fe_pwdb; // E894
    REG_rg_force_da_pxp_rx_sigdet_cal_en rg_force_da_pxp_rx_sigdet_cal_en; // E898
    REG_ADD_DIG_RESERVE_5           ADD_DIG_RESERVE_5; // E89C
    REG_ADD_DIG_RESERVE_6           ADD_DIG_RESERVE_6; // E8A0
    REG_ADD_DIG_RESERVE_7           ADD_DIG_RESERVE_7; // E8A4
    REG_ADD_DIG_RESERVE_8           ADD_DIG_RESERVE_8; // E8A8
    REG_ADD_DIG_RESERVE_9           ADD_DIG_RESERVE_9; // E8AC
    REG_ADD_DIG_RESERVE_10          ADD_DIG_RESERVE_10; // E8B0
    REG_ADD_DIG_RESERVE_11          ADD_DIG_RESERVE_11; // E8B4
    REG_ADD_DIG_RESERVE_12          ADD_DIG_RESERVE_12; // E8B8
    REG_ADD_DIG_RESERVE_13          ADD_DIG_RESERVE_13; // E8BC
    REG_ADD_DIG_RESERVE_14          ADD_DIG_RESERVE_14; // E8C0
    REG_ADD_DIG_RO_RESERVE_5        ADD_DIG_RO_RESERVE_5; // E8C4
    REG_ADD_DIG_RO_RESERVE_6        ADD_DIG_RO_RESERVE_6; // E8C8
    REG_ADD_DIG_RO_RESERVE_7        ADD_DIG_RO_RESERVE_7; // E8CC
    REG_ADD_DIG_RO_RESERVE_8        ADD_DIG_RO_RESERVE_8; // E8D0
    REG_ADD_DIG_RO_RESERVE_9        ADD_DIG_RO_RESERVE_9; // E8D4
    REG_ADD_DIG_RESERVE_15          ADD_DIG_RESERVE_15; // E8D8
    REG_ADD_DIG_RESERVE_16          ADD_DIG_RESERVE_16; // E8DC
    REG_ADD_DIG_RESERVE_17          ADD_DIG_RESERVE_17; // E8E0
    REG_ADD_DIG_RESERVE_18          ADD_DIG_RESERVE_18; // E8E4
    REG_ADD_DIG_RESERVE_19          ADD_DIG_RESERVE_19; // E8E8
    REG_ADD_DIG_RESERVE_20          ADD_DIG_RESERVE_20; // E8EC
    REG_ADD_DIG_RESERVE_21          ADD_DIG_RESERVE_21; // E8F0
    REG_ADD_DIG_RESERVE_22          ADD_DIG_RESERVE_22; // E8F4
    REG_ADD_DIG_RESERVE_23          ADD_DIG_RESERVE_23; // E8F8
    REG_ADD_DIG_RESERVE_24          ADD_DIG_RESERVE_24; // E8FC
    REG_ADD_DIG_RESERVE_25          ADD_DIG_RESERVE_25; // E900
    REG_ADD_DIG_RESERVE_26          ADD_DIG_RESERVE_26; // E904
    REG_ADD_DIG_RESERVE_27          ADD_DIG_RESERVE_27; // E908
    REG_ADD_DIG_RESERVE_28          ADD_DIG_RESERVE_28; // E90C
    REG_ADD_DIG_RESERVE_29          ADD_DIG_RESERVE_29; // E910
    REG_ADD_DIG_RESERVE_30          ADD_DIG_RESERVE_30; // E914
    REG_ADD_DIG_RESERVE_31          ADD_DIG_RESERVE_31; // E918
    REG_ADD_DIG_RESERVE_32          ADD_DIG_RESERVE_32; // E91C
    REG_ADD_DIG_RESERVE_33          ADD_DIG_RESERVE_33; // E920
    REG_ADD_DIG_RESERVE_34          ADD_DIG_RESERVE_34; // E924
    REG_ADD_DIG_RESERVE_35          ADD_DIG_RESERVE_35; // E928
    REG_ADD_DIG_RESERVE_36          ADD_DIG_RESERVE_36; // E92C
    REG_ADD_DIG_RESERVE_37          ADD_DIG_RESERVE_37; // E930
    REG_ADD_DIG_RESERVE_38          ADD_DIG_RESERVE_38; // E934
    REG_ADD_DIG_RESERVE_39          ADD_DIG_RESERVE_39; // E938
    REG_ADD_DIG_RESERVE_40          ADD_DIG_RESERVE_40; // E93C
    REG_ADD_DIG_RESERVE_41          ADD_DIG_RESERVE_41; // E940
    REG_ADD_DIG_RESERVE_42          ADD_DIG_RESERVE_42; // E944
    REG_ADD_DIG_RESERVE_43          ADD_DIG_RESERVE_43; // E948
    REG_ADD_DIG_RESERVE_44          ADD_DIG_RESERVE_44; // E94C
    REG_ADD_DIG_RESERVE_45          ADD_DIG_RESERVE_45; // E950
    REG_ADD_DIG_RESERVE_46          ADD_DIG_RESERVE_46; // E954
    REG_ADD_DIG_RESERVE_47          ADD_DIG_RESERVE_47; // E958
    REG_ADD_DIG_RESERVE_48          ADD_DIG_RESERVE_48; // E95C
    REG_BEN_CTRL_0                  BEN_CTRL_0;       // E960
    REG_BEN_CTRL_1                  BEN_CTRL_1;       // E964
    REG_BEN_STS_0                   BEN_STS_0;        // E968
    REG_BEN_STS_1                   BEN_STS_1;        // E96C
    REG_BEN_STS_2                   BEN_STS_2;        // E970
    REG_BEN_STS_3                   BEN_STS_3;        // E974
    REG_TX_SD_CTRL_0                TX_SD_CTRL_0;     // E978
    REG_TX_SD_CTRL_1                TX_SD_CTRL_1;     // E97C
    REG_TX_SD_STS_0                 TX_SD_STS_0;      // E980
    REG_TX_SD_STS_1                 TX_SD_STS_1;      // E984
    REG_TX_SD_STS_2                 TX_SD_STS_2;      // E988
    REG_TX_SD_STS_3                 TX_SD_STS_3;      // E98C
}ponxfi_csr_pma_REGS, *Pponxfi_csr_pma_REGS;

// ---------- ponxfi_csr_pma Enum Definitions      ----------
// ---------- ponxfi_csr_pma C Macro Definitions   ----------
extern Pponxfi_csr_pma_REGS g_ponxfi_csr_pma_BASE;

#define ponxfi_csr_pma_BASE                                    (g_ponxfi_csr_pma_BASE)
#endif

#define _SS_LCPLL_PWCTL_SETTING_0		0xE000
#define _SS_LCPLL_PWCTL_SETTING_1		0xE004
#define _SS_LCPLL_PWCTL_SETTING_2		0xE008
#define _SS_LCPLL_PWCTL_DBG_SETTING		0xE00C
#define _SS_LCPLL_TDC_PW_0		0xE010
#define _SS_LCPLL_TDC_PW_1		0xE014
#define _SS_LCPLL_TDC_PW_2		0xE018
#define _SS_LCPLL_TDC_PW_3		0xE01C
#define _SS_LCPLL_TDC_PW_4		0xE020
#define _SS_LCPLL_TDC_PW_5		0xE024
#define _SS_LCPLL_TDC_FLT_0		0xE028
#define _SS_LCPLL_TDC_FLT_1		0xE02C
#define _SS_LCPLL_TDC_FLT_2		0xE030
#define _SS_LCPLL_TDC_FLT_3		0xE034
#define _SS_LCPLL_TDC_FLT_4		0xE038
#define _SS_LCPLL_TDC_FLT_5		0xE03C
#define _SS_LCPLL_TDC_FLT_6		0xE040
#define _SS_LCPLL_TDC_FLT_7		0xE044
#define _SS_LCPLL_TDC_PCW_1		0xE048
#define _SS_LCPLL_TDC_PCW_2		0xE04C
#define _SS_LCPLL_TDC_RO_1		0xE050
#define _SS_LCPLL_TDC_RO_2		0xE054
#define _SS_LCPLL_TDC_RO_3		0xE058
#define _SS_LCPLL_TDC_RO_4		0xE05C
#define _SS_LCPLL_TDC_RO_5		0xE060
#define _SS_LCPLL_TDC_CTRL_0		0xE064
#define _RX_EYE_TOP_EYEINDEX_CTRL_0		0xE068
#define _RX_EYE_TOP_EYEINDEX_CTRL_1		0xE06C
#define _RX_EYE_TOP_EYEINDEX_CTRL_2		0xE070
#define _RX_EYE_TOP_EYEINDEX_CTRL_3		0xE074
#define _RX_EYE_TOP_EYEOPENING_CTRL_0		0xE078
#define _RX_EYE_TOP_EYEOPENING_CTRL_1		0xE07C
#define _RX_EYE_TOP_EYECNT_CTRL_0		0xE080
#define _RX_EYE_TOP_EYECNT_CTRL_1		0xE084
#define _RX_EYE_TOP_EYECNT_CTRL_2		0xE088
#define _RX_CTRL_SEQUENCE_CTRL_0		0xE08C
#define _RX_CTRL_SEQUENCE_CTRL_1		0xE090
#define _RX_CTRL_SEQUENCE_CTRL_2		0xE094
#define _RX_CTRL_SEQUENCE_CTRL_3		0xE098
#define _RX_CTRL_SEQUENCE_CTRL_4		0xE09C
#define _RX_CTRL_SEQUENCE_CTRL_5		0xE100
#define _RX_CTRL_SEQUENCE_CTRL_6		0xE104
#define _RX_CTRL_SEQUENCE_DISB_CTRL_0		0xE108
#define _RX_CTRL_SEQUENCE_DISB_CTRL_1		0xE10C
#define _RX_CTRL_SEQUENCE_FORCE_CTRL_0		0xE110
#define _RX_CTRL_SEQUENCE_FORCE_CTRL_1		0xE114
#define _PHY_EQ_CTRL_0		0xE118
#define _PHY_EQ_CTRL_1		0xE11C
#define _PHY_EQ_CTRL_2		0xE120
#define _PHY_EQ_CTRL_3		0xE124
#define _PHY_EQ_CTRL_4		0xE128
#define _PHY_EQ_CTRL_5		0xE12C
#define _PHY_EQ_CTRL_6		0xE130
#define _PHY_EQ_CTRL_7		0xE134
#define _PHY_EQ_CTRL_8		0xE138
#define _PHY_EQ_CTRL_9		0xE13C
#define _PHY_EQ_CTRL_10		0xE140
#define _SS_RX_FEOS		0xE144
#define _SS_RX_BLWC		0xE148
#define _SS_RX_FREQ_DET_1		0xE14C
#define _SS_RX_FREQ_DET_2		0xE150
#define _SS_RX_FREQ_DET_3		0xE154
#define _SS_RX_FREQ_DET_4		0xE158
#define _SS_RX_PI_CAL		0xE15C
#define _SS_RX_CAL_1		0xE160
#define _SS_RX_CAL_2		0xE164
#define _SS_RX_SIGDET_0		0xE168
#define _SS_RX_SIGDET_1		0xE16C
#define _SS_RX_FLL_0		0xE170
#define _SS_RX_FLL_1		0xE174
#define _SS_RX_FLL_2		0xE178
#define _SS_RX_FLL_3		0xE17C
#define _SS_RX_FLL_4		0xE180
#define _SS_RX_FLL_5		0xE184
#define _SS_RX_FLL_6		0xE188
#define _SS_RX_FLL_7		0xE18C
#define _SS_RX_FLL_8		0xE190
#define _SS_RX_FLL_9		0xE194
#define _SS_RX_FLL_a		0xE198
#define _SS_RX_FLL_b		0xE19C
#define _RX_PDOS_CTRL_0		0xE200
#define _RX_RESET_0		0xE204
#define _RX_RESET_1		0xE208
#define _RX_DEBUG_0		0xE20C
#define _BISTCTL_CONTROL		0xE210
#define _BISTCTL_ALIGN_PAT		0xE214
#define _BISTCTL_PROGRAM_PAT_0		0xE218
#define _BISTCTL_PROGRAM_PAT_1		0xE21C
#define _BISTCTL_POLLUTION		0xE220
#define _BISTCTL_PRBS_INITIAL_SEED		0xE224
#define _BISTCTL_PRBS_EVENT		0xE228
#define _BISTCTL_PRBS_ERRCNT		0xE22C
#define _BISTCTL_PRBS_FAIL_THRESHOLD		0xE230
#define _RX_TORGS_DEBUG_0		0xE234
#define _RX_TORGS_DEBUG_1		0xE238
#define _RX_TORGS_DEBUG_2		0xE23C
#define _RX_TORGS_DEBUG_3		0xE240
#define _RX_TORGS_DEBUG_4		0xE244
#define _RX_TORGS_DEBUG_5		0xE248
#define _RX_TORGS_DEBUG_6		0xE24C
#define _RX_TORGS_DEBUG_7		0xE250
#define _RX_TORGS_DEBUG_8		0xE254
#define _RX_TORGS_DEBUG_9		0xE258
#define _RX_TORGS_DEBUG_10		0xE25C
#define _SS_TX_RST_B		0xE260
#define _SS_TX_CALIB_0		0xE264
#define _SS_TX_CALIB_1		0xE268
#define _SS_TX_CALIB_2		0xE26C
#define _XPON_SETTING_0		0xE270
#define _XPON_SETTING_1		0xE274
#define _XPON_SETTING_2		0xE278
#define _XPON_STA		0xE27C
#define _XPON_INT_EN_0		0xE280
#define _XPON_INT_EN_1		0xE284
#define _XPON_INT_STA_0		0xE288
#define _XPON_INT_STA_1		0xE28C
#define _RX_TORGS_DEBUG_11		0xE290
#define _RX_FORCE_MODE_0		0xE294
#define _RX_FORCE_MODE_1		0xE298
#define _RX_FORCE_MODE_2		0xE29C
#define _RX_DISB_MODE_0		0xE300
#define _RX_DISB_MODE_1		0xE304
#define _RX_DISB_MODE_2		0xE308
#define _RX_FORCE_MODE_3		0xE30C
#define _RX_FORCE_MODE_4		0xE310
#define _RX_FORCE_MODE_5		0xE314
#define _RX_FORCE_MODE_6		0xE318
#define _RX_DISB_MODE_3		0xE31C
#define _RX_DISB_MODE_4		0xE320
#define _RX_DISB_MODE_5		0xE324
#define _RX_FORCE_MODE_7		0xE328
#define _RX_FORCE_MODE_8		0xE32C
#define _RX_FORCE_MODE_9		0xE330
#define _RX_DISB_MODE_6		0xE334
#define _RX_DISB_MODE_7		0xE338
#define _RX_DISB_MODE_8		0xE33C
#define _SS_BIST_0		0xE340
#define _SS_BIST_1		0xE344
#define _SS_BIST_2		0xE348
#define _SS_DA_XPON_PWDB_0		0xE34C
#define _SS_DA_XPON_PWDB_1		0xE350
#define _SS_LCPLL_0		0xE354
#define _SS_LCPLL_1		0xE358
#define _SS_LCPLL_2		0xE35C
#define _ADD_DIG_RESERVE_0		0xE360
#define _ADD_DIG_RESERVE_1		0xE364
#define _ADD_DIG_RESERVE_2		0xE368
#define _ADD_DIG_RESERVE_3		0xE36C
#define _ADD_DIG_RESERVE_4		0xE370
#define _RG_XPON_RX_RESERVED_1		0xE374
#define _ADD_DIG_RO_RESERVE_0		0xE378
#define _ADD_DIG_RO_RESERVE_1		0xE37C
#define _ADD_DIG_RO_RESERVE_2		0xE380
#define _ADD_DIG_RO_RESERVE_3		0xE384
#define _ADD_DIG_RO_RESERVE_4		0xE388
#define _ADD_RX_SYS_EN_SEL_0		0xE38C
#define _PLL_TDC_FREQDET_0		0xE390
#define _PLL_TDC_FREQDET_1		0xE394
#define _PLL_TDC_FREQDET_2		0xE398
#define _PLL_TDC_FREQDET_3		0xE39C
#define _DA_XPON_TX_FORCE_0		0xE400
#define _DA_XPON_TX_FORCE_1		0xE404
#define _DA_XPON_TX_FORCE_2		0xE408
#define _RX_FORCE_MODE_10		0xE40C
#define _ADD_CLKPATH_RST_0		0xE410
#define _ADD_XPON_MODE_1		0xE414
#define _ADD_R2T_MODE_1		0xE418
#define _ADD_T2R_MODE_1		0xE41C
#define _ADD_LCPLL_RO_1		0xE420
#define _ADD_RO_RX2ANA_1		0xE424
#define _ADD_RO_RX2ANA_2		0xE428
#define _ADD_RO_RX2ANA_3		0xE42C
#define _ADD_RO_R2TMODE_1		0xE430
#define _RG_LCPLL_XPON_CMN_STB_CTRL_0		0xE434
#define _RG_LCPLL_XPON_CMN_STB_CTRL_1		0xE438
#define _RG_TX_HSDATA_EN_EXT_CNT_0		0xE43C
#define _PON_TX_COUNTER_0		0xE440
#define _PON_TX_COUNTER_1		0xE444
#define _PON_TX_COUNTER_2		0xE448
#define _PON_TX_COUNTER_3		0xE44C
#define _PON_CK_SET		0xE450
#define _TX_FIFO_MODE_SEL		0xE454
#define _XPON_PLL_STB_CNT		0xE458
#define _XPON_PLL_STOP_CNT		0xE45C
#define _SW_RST_SET		0xE460
#define _ADD_RO_TX2ANA_1		0xE464
#define _TX_DLY_CTRL		0xE468
#define _MEM_WRAPPER_CTRL		0xE46C
#define _XPON_INT_EN_2		0xE470
#define _XPON_INT_EN_3		0xE474
#define _XPON_INT_STA_2		0xE478
#define _XPON_INT_STA_3		0xE47C
#define _XPON_SD_BEHAVIOR_SETTING_0		0xE480
#define _XPON_SD_BEHAVIOR_SETTING_1		0xE484
#define _XPON_SD_BEHAVIOR_STA		0xE488
#define _RX_EXTRAL_CTRL		0xE48C
#define _RX_LEQ_DISB_CTRL0		0xE490
#define _RX_LEQ_DISB_CTRL1		0xE494
#define _RX_LEQ_FORCE_CTRL0		0xE498
#define _RX_LEQ_FORCE_CTRL1		0xE49C
#define _RX_LEQ_ENTIME_CTRL0		0xE500
#define _RX_LEQ_ENTIME_CTRL1		0xE504
#define _RX_LEQ_ENTIME_CTRL2		0xE508
#define _RX_LEQ_CTRL0		0xE50C
#define _RX_LEQ_CTRL1		0xE510
#define _RX_LEQ_CTRL2		0xE514
#define _RX_LEQ_RO0		0xE518
#define _RX_LEQ_RO1		0xE51C
#define _PLL_FT_FREQDET_0		0xE520
#define _PLL_FT_FREQDET_1		0xE524
#define _PLL_FT_FREQDET_2		0xE528
#define _PLL_FT_FREQDET_3		0xE52C
#define _RO_RX_FREQDET		0xE530
#define _RO_PLL_FREQDET		0xE534
#define _RO_PLL_FT_FREQDET		0xE538
#define _RO_PMA_FREQDET		0xE53C
#define _RG_PMA_FREQDET		0xE540
#define _RG_EXT_BEN_DATA		0xE544
#define _RG_PRE_BEN_DATA		0xE548
#define _RX_TORGS_DEBUG_12		0xE54C
#define _RO_FLL_ADC_0		0xE550
#define _RO_FLL_ADC_1		0xE554
#define _RO_FLL_ADC_2		0xE558
#define _RO_FLL_ADC_3		0xE55C
#define _RO_FLL_ADC_4		0xE560
#define _RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL		0xE564
#define _XPON_INT_EN_4		0xE568
#define _XPON_INT_STA_4		0xE56C
#define _XPON_PMA_AFIFO_REACH_TH		0xE570
#define _XPON_MD32_PBUS_CSR_CTRL		0xE574
#define _BENOFF_BIST_SEED		0xE578
#define _PWR_PLL_CTRL		0xE57C
#define _xpon_tx_rate_ctrl		0xE580
#define _BENOFF_DATA0		0xE584
#define _BENOFF_DATA1		0xE588
#define _BENOFF_DATA2		0xE58C
#define _BENOFF_DATA3		0xE590
#define _BENOFF_CTRL		0xE594
#define _HS_DATA_EN_SEL		0xE598
#define _FIFO_CK_STATUS		0xE59C
#define _TDC_DLF_GAIN_STATUS		0xE600
#define _TDC_DLF_MODE_SETTING		0xE604
#define _MD32_ISR_CTRL		0xE608
#define _MD32_MEM_CLK_CTRL		0xE60C
#define _MD32_MEM_CLK_CG_CTRL		0xE610
#define _XG_EQD_STA		0xE614
#define _XG_EQD_CTRL		0xE618
#define _RAWDATA_DUMP_CTRL_0		0xE61C
#define _RAWDATA_DUMP_CTRL_1		0xE620
#define _RAWDATA_DUMP_CTRL_2		0xE624
#define _RAWDATA_DUMP_CTRL_3		0xE628
#define _RAWDATA_DUMP_STA_0		0xE62C
#define _RAWDATA_DUMP_STA_1		0xE630
#define _RAWDATA_DUMP_STA_2		0xE634
#define _MD32MEM_DIV2_CNT		0xE638
#define _AD_XPON_CDR_LPF_SV		0xE63C
#define _K_VALUE_RD		0xE640
#define _XPONPLL_CTRL		0xE644
#define _MD32_GATE_HALT		0xE648
#define _MD32_MONCCNT		0xE64C
#define _MD32_MONPCNT0		0xE650
#define _MD32_MONPCNT1		0xE654
#define _MD32_MONPCNT2		0xE658
#define _MD32_MONCONTID		0xE65C
#define _MD32_MONPC		0xE660
#define _MD32_TBUF		0xE664
#define _MD32_TBUFWDATA_L		0xE668
#define _MD32_TBUFWDATA_H		0xE66C
#define _MD32_TBUFRDATA_L		0xE670
#define _MD32_TBUFRDATA_H		0xE674
#define _ADDR_MD32_PMEM_ADDR_REV		0xE678
#define _ADDR_MD32_PMEM_DATA_REV		0xE67C
#define _ADDR_MD32_DMEM_ADDR_REV		0xE680
#define _ADDR_MD32_DMEM_DATA_REV		0xE684
#define _SS_JCPLL_PWCTL_SETTING_0		0xE688
#define _SS_JCPLL_PWCTL_SETTING_1		0xE68C
#define _SS_JCPLL_PWCTL_SETTING_2		0xE690
#define _JCPLL_CHG		0xE694
#define _RG_JCPLL_SDM_PCW_CTRL		0xE698
#define _RG_JCPLL_SDM_PCW_CHG_CTRL		0xE69C
#define _PLL_JCPLL_FT_FREQDET_0		0xE700
#define _PLL_JCPLL_FT_FREQDET_1		0xE704
#define _PLL_JCPLL_FT_FREQDET_2		0xE708
#define _PLL_JCPLL_FT_FREQDET_3		0xE70C
#define _JCPLL_FT_CK_MUX		0xE710
#define _JCPLL_DA_RG_CTRL_0		0xE714
#define _JCPLL_DA_RG_CTRL_1		0xE718
#define _JCPLL_DA_RG_CTRL_2		0xE71C
#define _XFI_PLL_DA_RG_CTRL_0		0xE720
#define _XFI_PLL_DA_RG_CTRL_1		0xE724
#define _XFI_PLL_DA_RG_CTRL_2		0xE728
#define _AD_DA_PROBE_STS_0		0xE72C
#define _AD_DA_PROBE_STS_1		0xE730
#define _JCPLL_SCAN_CTRL		0xE734
#define _XFI_GPIO_SEL_0		0xE738
#define _TX_PAR_PROBE_PLL_CTRL		0xE73C
#define _DUMP_RX_PCSRST_CTRL		0xE740
#define _XFI_TX_FIFO_STS		0xE744
#define _JCPLL_CK_RSTB_CTRL		0xE748
#define _RO_TDC_TX_FREQDET		0xE74C
#define _RO_JCPLL_FT_FREQDET		0xE750
#define _RO_JCPLL_500M_FREQDET		0xE754
#define _RG_JCPLL_500M_FREQ_DET_1		0xE758
#define _RG_JCPLL_500M_FREQ_DET_2		0xE75C
#define _RG_JCPLL_500M_FREQ_DET_3		0xE760
#define _RG_JCPLL_500M_FREQ_DET_4		0xE764
#define _rg_da_pxp_jcpll_sdm_scan		0xE768
#define _rg_force_da_pxp_aeq_speed		0xE76C
#define _rg_force_da_pxp_aeq_mode		0xE770
#define _rg_force_da_pxp_tx_data_ben		0xE774
#define _rg_force_da_pxp_tx_fir_c0b		0xE778
#define _rg_force_da_pxp_tx_term_sel		0xE77C
#define _rg_force_da_pxp_tx_fir_c1		0xE780
#define _rg_force_da_pxp_tx_rate_ctrl		0xE784
#define _rg_force_da_pxp_rx_dac_d0		0xE788
#define _rg_force_da_pxp_rx_dac_e0		0xE78C
#define _rg_force_da_pxp_cdr_pr_fll_cor		0xE790
#define _rg_force_da_pxp_cdr_pr_idac		0xE794
#define _rg_force_da_pxp_txpll_sdm_pcw		0xE798
#define _rg_force_da_pxp_rx_fe_vos		0xE79C
#define _rg_force_da_pxp_jcpll_sdm_pcw		0xE800
#define _rg_force_da_pcie_cktx0_en		0xE804
#define _rg_force_da_pxp_aeq_en		0xE808
#define _rg_force_da_pxp_aeq_bypass		0xE80C
#define _rg_force_da_pxp_aeq_inprgrss		0xE810
#define _rg_force_da_pxp_aeq_rstb		0xE814
#define _rg_force_da_pxp_cdr_lpf_lck2data		0xE818
#define _rg_force_da_pxp_cdr_pd_pwdb		0xE81C
#define _rg_force_da_pxp_cdr_pr_lpf_c_en		0xE820
#define _rg_force_da_pxp_cdr_pr_pieye_pwdb		0xE824
#define _rg_force_da_pxp_jcpll_ckout_en		0xE828
#define _rg_force_da_pxp_jcpll_kband_scan_en		0xE82C
#define _rg_force_da_pxp_jcpll_kband_scan_in		0xE830
#define _rg_force_da_pxp_jcpll_sdm_pcw_chg		0xE834
#define _rg_force_da_pxp_jcpll_sdm_scan_en_cg		0xE838
#define _rg_force_da_pxp_jcpll_sdm_scan_rstb		0xE83C
#define _rg_force_da_pxp_rx_oscal_en		0xE840
#define _rg_force_da_pxp_rx_scan_enable		0xE844
#define _rg_force_da_pxp_rx_scan_in		0xE848
#define _rg_force_da_pxp_rx_scan_rst_b		0xE84C
#define _rg_force_da_pxp_tdc_cal_bw		0xE850
#define _rg_force_da_pxp_txpll_ckout_en		0xE854
#define _rg_force_da_pxp_txpll_kband_load_en		0xE858
#define _rg_force_da_pxp_txpll_kband_scan_en_cg		0xE85C
#define _rg_da_pxp_txpll_kband_scan		0xE860
#define _rg_force_da_pxp_txpll_sdm_pcw_chg		0xE864
#define _rg_force_da_pxp_txpll_sdm_scan_en_cg		0xE868
#define _rg_da_pxp_txpll_sdm_scan		0xE86C
#define _rg_force_da_pxp_tx_acjtag_dn		0xE870
#define _rg_force_da_pxp_tx_acjtag_en		0xE874
#define _rg_force_da_pxp_tx_ck_en		0xE878
#define _rg_force_da_pxp_tx_hsdata_en		0xE87C
#define _rg_force_da_pxp_tx_rxdet_en		0xE880
#define _scan_mode		0xE884
#define _rg_da_pxp_jcpll_kband_scan		0xE888
#define _rg_force_da_pxp_rx_fe_gain_ctrl		0xE88C
#define _rg_force_da_pxp_aeq_rmtxskip		0xE890
#define _rg_force_da_pxp_rx_fe_pwdb		0xE894
#define _rg_force_da_pxp_rx_sigdet_cal_en		0xE898
#define _ADD_DIG_RESERVE_5		0xE89C
#define _ADD_DIG_RESERVE_6		0xE8A0
#define _ADD_DIG_RESERVE_7		0xE8A4
#define _ADD_DIG_RESERVE_8		0xE8A8
#define _ADD_DIG_RESERVE_9		0xE8AC
#define _ADD_DIG_RESERVE_10		0xE8B0
#define _ADD_DIG_RESERVE_11		0xE8B4
#define _ADD_DIG_RESERVE_12		0xE8B8
#define _ADD_DIG_RESERVE_13		0xE8BC
#define _ADD_DIG_RESERVE_14		0xE8C0
#define _ADD_DIG_RO_RESERVE_5		0xE8C4
#define _ADD_DIG_RO_RESERVE_6		0xE8C8
#define _ADD_DIG_RO_RESERVE_7		0xE8CC
#define _ADD_DIG_RO_RESERVE_8		0xE8D0
#define _ADD_DIG_RO_RESERVE_9		0xE8D4
#define _ADD_DIG_RESERVE_15		0xE8D8
#define _ADD_DIG_RESERVE_16		0xE8DC
#define _ADD_DIG_RESERVE_17		0xE8E0
#define _ADD_DIG_RESERVE_18		0xE8E4
#define _ADD_DIG_RESERVE_19		0xE8E8
#define _ADD_DIG_RESERVE_20		0xE8EC
#define _ADD_DIG_RESERVE_21		0xE8F0
#define _ADD_DIG_RESERVE_22		0xE8F4
#define _ADD_DIG_RESERVE_23		0xE8F8
#define _ADD_DIG_RESERVE_24		0xE8FC
#define _ADD_DIG_RESERVE_25		0xE900
#define _ADD_DIG_RESERVE_26		0xE904
#define _ADD_DIG_RESERVE_27		0xE908
#define _ADD_DIG_RESERVE_28		0xE90C
#define _ADD_DIG_RESERVE_29		0xE910
#define _ADD_DIG_RESERVE_30		0xE914
#define _ADD_DIG_RESERVE_31		0xE918
#define _ADD_DIG_RESERVE_32		0xE91C
#define _ADD_DIG_RESERVE_33		0xE920
#define _ADD_DIG_RESERVE_34		0xE924
#define _ADD_DIG_RESERVE_35		0xE928
#define _ADD_DIG_RESERVE_36		0xE92C
#define _ADD_DIG_RESERVE_37		0xE930
#define _ADD_DIG_RESERVE_38		0xE934
#define _ADD_DIG_RESERVE_39		0xE938
#define _ADD_DIG_RESERVE_40		0xE93C
#define _ADD_DIG_RESERVE_41		0xE940
#define _ADD_DIG_RESERVE_42		0xE944
#define _ADD_DIG_RESERVE_43		0xE948
#define _ADD_DIG_RESERVE_44		0xE94C
#define _ADD_DIG_RESERVE_45		0xE950
#define _ADD_DIG_RESERVE_46		0xE954
#define _ADD_DIG_RESERVE_47		0xE958
#define _ADD_DIG_RESERVE_48		0xE95C
#define _BEN_CTRL_0		0xE960
#define _BEN_CTRL_1		0xE964
#define _BEN_STS_0		0xE968
#define _BEN_STS_1		0xE96C
#define _BEN_STS_2		0xE970
#define _BEN_STS_3		0xE974
#define _TX_SD_CTRL_0		0xE978
#define _TX_SD_CTRL_1		0xE97C
#define _TX_SD_STS_0		0xE980
#define _TX_SD_STS_1		0xE984
#define _TX_SD_STS_2		0xE988
#define _TX_SD_STS_3		0xE98C

#endif


#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en            REG_FLD(1, 24)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv           REG_FLD(1, 16)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode     REG_FLD(1, 8)
#define SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on         REG_FLD(1, 0)

#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer     REG_FLD(8, 24)
#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer REG_FLD(8, 16)
#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer         REG_FLD(8, 8)
#define SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb         REG_FLD(1, 0)

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

#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_sync_in_mode        REG_FLD(1, 24)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_autok_tdc               REG_FLD(1, 16)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_autoen              REG_FLD(1, 8)
#define SS_LCPLL_TDC_PW_5_FLD_rg_lcpll_tdc_en_mux              REG_FLD(1, 0)

#define SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_tdc_offset             REG_FLD(11, 16)
#define SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_ki                     REG_FLD(3, 8)
#define SS_LCPLL_TDC_FLT_0_FLD_rg_lcpll_pon_rx_cdr_divtdc      REG_FLD(2, 0)

#define SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_tdc_gain               REG_FLD(11, 16)
#define SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_a_tdc                  REG_FLD(4, 8)
#define SS_LCPLL_TDC_FLT_1_FLD_rg_lcpll_gpon_sel               REG_FLD(1, 0)

#define SS_LCPLL_TDC_FLT_2_FLD_rg_lcpll_ncpo_value             REG_FLD(31, 0)

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

#define RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_max                REG_FLD(11, 16)
#define RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_min                REG_FLD(11, 0)

#define RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_index_mode           REG_FLD(1, 16)
#define RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_max                REG_FLD(7, 8)
#define RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_min                REG_FLD(7, 0)

#define RX_EYE_TOP_EYEINDEX_CTRL_2_FLD_rg_eyedur               REG_FLD(20, 0)

#define RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts          REG_FLD(1, 16)
#define RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_toggle   REG_FLD(1, 8)
#define RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_sel      REG_FLD(1, 0)

#define RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_vth         REG_FLD(8, 8)
#define RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_hth         REG_FLD(8, 0)

#define RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_vth             REG_FLD(8, 16)
#define RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_hth             REG_FLD(11, 0)

#define RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_eye_mask               REG_FLD(8, 24)
#define RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntforever             REG_FLD(1, 16)
#define RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntlen                 REG_FLD(10, 0)

#define RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_init_b    REG_FLD(1, 24)
#define RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_en        REG_FLD(1, 16)
#define RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_init_b     REG_FLD(1, 8)
#define RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_en         REG_FLD(1, 0)

#define RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_data_shift             REG_FLD(1, 8)
#define RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_eyecnt_fast            REG_FLD(1, 0)

#define RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_rx_os_start             REG_FLD(16, 8)
#define RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_osc_speed_opt           REG_FLD(3, 0)

#define RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_end            REG_FLD(16, 16)
#define RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_start          REG_FLD(16, 0)

#define RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_end             REG_FLD(16, 16)
#define RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_start           REG_FLD(16, 0)

#define RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_end             REG_FLD(16, 16)
#define RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_start           REG_FLD(16, 0)

#define RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_end            REG_FLD(16, 16)
#define RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_start          REG_FLD(16, 0)

#define RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_rdy                  REG_FLD(16, 16)
#define RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_blwc_rdy_en          REG_FLD(16, 0)

#define RX_CTRL_SEQUENCE_CTRL_6_FLD_rg_rx_os_end               REG_FLD(16, 0)

#define RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_feos_en    REG_FLD(1, 24)
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pdos_en    REG_FLD(1, 16)
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pical_en   REG_FLD(1, 8)
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_os_en      REG_FLD(1, 0)

#define RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_rdy        REG_FLD(1, 24)
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_blwc_en    REG_FLD(1, 16)
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_os_rdy     REG_FLD(1, 8)
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_sdcal_en   REG_FLD(1, 0)

#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_feos_en  REG_FLD(1, 24)
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pdos_en  REG_FLD(1, 16)
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pical_en REG_FLD(1, 8)
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_os_en    REG_FLD(1, 0)

#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_rdy      REG_FLD(1, 24)
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_blwc_en  REG_FLD(1, 16)
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_os_rdy   REG_FLD(1, 8)
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_sdcal_en REG_FLD(1, 0)

#define PHY_EQ_CTRL_0_FLD_rg_veo_mask                          REG_FLD(8, 24)
#define PHY_EQ_CTRL_0_FLD_rg_heo_mask                          REG_FLD(11, 8)
#define PHY_EQ_CTRL_0_FLD_rg_eq_en_delay                       REG_FLD(8, 0)

#define PHY_EQ_CTRL_1_FLD_rg_b_zero_sel                        REG_FLD(1, 24)
#define PHY_EQ_CTRL_1_FLD_rg_heo_emphasis                      REG_FLD(1, 16)
#define PHY_EQ_CTRL_1_FLD_rg_a_mgain                           REG_FLD(1, 8)
#define PHY_EQ_CTRL_1_FLD_rg_a_lgain                           REG_FLD(1, 0)

#define PHY_EQ_CTRL_2_FLD_rg_eq_debug_sel                      REG_FLD(2, 16)
#define PHY_EQ_CTRL_2_FLD_rg_fom_num_order                     REG_FLD(5, 8)
#define PHY_EQ_CTRL_2_FLD_rg_a_sel                             REG_FLD(2, 0)

#define PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_3                    REG_FLD(2, 24)
#define PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_2                    REG_FLD(2, 16)
#define PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_1                    REG_FLD(2, 8)
#define PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_0                    REG_FLD(2, 0)

#define PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_7                    REG_FLD(2, 24)
#define PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_6                    REG_FLD(2, 16)
#define PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_5                    REG_FLD(2, 8)
#define PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_4                    REG_FLD(2, 0)

#define PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_11                   REG_FLD(2, 24)
#define PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_10                   REG_FLD(2, 16)
#define PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_9                    REG_FLD(2, 8)
#define PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_8                    REG_FLD(2, 0)

#define PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_15                   REG_FLD(2, 24)
#define PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_14                   REG_FLD(2, 16)
#define PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_13                   REG_FLD(2, 8)
#define PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_12                   REG_FLD(2, 0)

#define PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_3                 REG_FLD(3, 24)
#define PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_2                 REG_FLD(3, 16)
#define PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_1                 REG_FLD(3, 8)
#define PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_0                 REG_FLD(3, 0)

#define PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_7                 REG_FLD(3, 24)
#define PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_6                 REG_FLD(3, 16)
#define PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_5                 REG_FLD(3, 8)
#define PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_4                 REG_FLD(3, 0)

#define PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_11                REG_FLD(3, 24)
#define PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_10                REG_FLD(3, 16)
#define PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_9                 REG_FLD(3, 8)
#define PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_8                 REG_FLD(3, 0)

#define PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_15               REG_FLD(3, 24)
#define PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_14               REG_FLD(3, 16)
#define PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_13               REG_FLD(3, 8)
#define PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_12               REG_FLD(3, 0)

#define SS_RX_FEOS_FLD_rg_eq_force_blwc_freeze                 REG_FLD(1, 8)
#define SS_RX_FEOS_FLD_rg_lfsel                                REG_FLD(8, 0)

#define SS_RX_BLWC_FLD_rg_eq_blwc_cnt_bot_lim                  REG_FLD(7, 23)
#define SS_RX_BLWC_FLD_rg_eq_blwc_cnt_top_lim                  REG_FLD(7, 16)
#define SS_RX_BLWC_FLD_rg_eq_blwc_gain                         REG_FLD(4, 8)
#define SS_RX_BLWC_FLD_rg_eq_blwc_pol                          REG_FLD(1, 0)

#define SS_RX_FREQ_DET_1_FLD_rg_unlock_cyclecnt                REG_FLD(16, 16)
#define SS_RX_FREQ_DET_1_FLD_rg_lock_cyclecnt                  REG_FLD(16, 0)

#define SS_RX_FREQ_DET_2_FLD_rg_lock_target_end                REG_FLD(16, 16)
#define SS_RX_FREQ_DET_2_FLD_rg_lock_target_beg                REG_FLD(16, 0)

#define SS_RX_FREQ_DET_3_FLD_rg_unlock_target_end              REG_FLD(16, 16)
#define SS_RX_FREQ_DET_3_FLD_rg_unlock_target_beg              REG_FLD(16, 0)

#define SS_RX_FREQ_DET_4_FLD_rg_wait_100us                     REG_FLD(8, 16)
#define SS_RX_FREQ_DET_4_FLD_rg_unlockth                       REG_FLD(4, 12)
#define SS_RX_FREQ_DET_4_FLD_rg_lock_lockth                    REG_FLD(4, 8)
#define SS_RX_FREQ_DET_4_FLD_rg_lock_cnt_clear                 REG_FLD(1, 4)
#define SS_RX_FREQ_DET_4_FLD_rg_freqlock_det_en                REG_FLD(3, 0)

#define SS_RX_PI_CAL_FLD_rg_eq_pi_cal_rdy_dly                  REG_FLD(2, 16)
#define SS_RX_PI_CAL_FLD_rg_kpgain                             REG_FLD(3, 8)
#define SS_RX_PI_CAL_FLD_rg_cdrlpi                             REG_FLD(7, 0)

#define SS_RX_CAL_1_FLD_rg_cal_cyc                             REG_FLD(2, 24)
#define SS_RX_CAL_1_FLD_rg_cal_stb                             REG_FLD(2, 16)
#define SS_RX_CAL_1_FLD_rg_cal_1us_set                         REG_FLD(8, 8)
#define SS_RX_CAL_1_FLD_rg_sim_fast_en                         REG_FLD(1, 0)

#define SS_RX_CAL_2_FLD_rg_cal_cyc_time                        REG_FLD(2, 16)
#define SS_RX_CAL_2_FLD_rg_cal_out_os                          REG_FLD(4, 8)
#define SS_RX_CAL_2_FLD_rg_cal_os_pulse                        REG_FLD(1, 0)

#define SS_RX_SIGDET_0_FLD_rg_sigdet_win_nonvld_times          REG_FLD(5, 24)
#define SS_RX_SIGDET_0_FLD_rg_sigdet_win_vld_times             REG_FLD(5, 16)
#define SS_RX_SIGDET_0_FLD_rg_sigdet_vld_times                 REG_FLD(8, 8)
#define SS_RX_SIGDET_0_FLD_rg_sigdet_win_size                  REG_FLD(8, 0)

#define SS_RX_SIGDET_1_FLD_rg_sigdet_en                        REG_FLD(1, 0)

#define SS_RX_FLL_0_FLD_rg_kband_kfc                           REG_FLD(2, 24)
#define SS_RX_FLL_0_FLD_rg_fpkdiv                              REG_FLD(11, 8)
#define SS_RX_FLL_0_FLD_rg_kband_prediv                        REG_FLD(3, 0)

#define SS_RX_FLL_1_FLD_rg_symbol_wd                           REG_FLD(3, 24)
#define SS_RX_FLL_1_FLD_rg_settle_time_sel                     REG_FLD(3, 16)
#define SS_RX_FLL_1_FLD_rg_ipath_idac                          REG_FLD(11, 0)

#define SS_RX_FLL_2_FLD_rg_debug_sel                           REG_FLD(3, 24)
#define SS_RX_FLL_2_FLD_rg_ck_rate                             REG_FLD(3, 16)
#define SS_RX_FLL_2_FLD_rg_amp                                 REG_FLD(3, 8)
#define SS_RX_FLL_2_FLD_rg_prbs_sel                            REG_FLD(3, 0)

#define SS_RX_FLL_3_FLD_rg_icdr_kband_done_force               REG_FLD(1, 24)
#define SS_RX_FLL_3_FLD_rg_icdr_kband_done_force_en            REG_FLD(1, 16)
#define SS_RX_FLL_3_FLD_rg_fll_dig_rstb_force                  REG_FLD(1, 8)
#define SS_RX_FLL_3_FLD_rg_fll_dig_rst_force_en                REG_FLD(1, 0)

#define SS_RX_FLL_4_FLD_rg_fll_idac_repli                      REG_FLD(11, 8)
#define SS_RX_FLL_4_FLD_rg_fll_cor                             REG_FLD(1, 1)
#define SS_RX_FLL_4_FLD_rg_fll_repli                           REG_FLD(1, 0)

#define SS_RX_FLL_5_FLD_rg_fll_idac_min                        REG_FLD(11, 16)
#define SS_RX_FLL_5_FLD_rg_fll_idac_max                        REG_FLD(11, 0)

#define SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_4_latch_en            REG_FLD(1, 24)
#define SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_3_latch_en            REG_FLD(1, 16)
#define SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_2_latch_en            REG_FLD(1, 8)
#define SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_1_latch_en            REG_FLD(1, 0)

#define SS_RX_FLL_7_FLD_ro_adc_freq                            REG_FLD(20, 0)

#define SS_RX_FLL_8_FLD_ro_cor_gain                            REG_FLD(32, 0)

#define SS_RX_FLL_9_FLD_ro_idacf                               REG_FLD(11, 16)
#define SS_RX_FLL_9_FLD_ro_fll_idac                            REG_FLD(11, 0)

#define SS_RX_FLL_a_FLD_ro_fll_idac_repli                      REG_FLD(11, 16)
#define SS_RX_FLL_a_FLD_ro_da_idac                             REG_FLD(11, 0)

#define SS_RX_FLL_b_FLD_rg_ad_sleep_en                         REG_FLD(1, 8)
#define SS_RX_FLL_b_FLD_rg_load_en                             REG_FLD(1, 0)

#define RX_PDOS_CTRL_0_FLD_rg_sap_sel                          REG_FLD(3, 16)
#define RX_PDOS_CTRL_0_FLD_rg_eye_blwc_add                     REG_FLD(1, 8)
#define RX_PDOS_CTRL_0_FLD_rg_data_blwc_add                    REG_FLD(1, 0)

#define RX_RESET_0_FLD_rg_cal_rst_b                            REG_FLD(1, 24)
#define RX_RESET_0_FLD_rg_eq_pi_cal_rst_b                      REG_FLD(1, 16)
#define RX_RESET_0_FLD_rg_feos_rst_b                           REG_FLD(1, 8)
#define RX_RESET_0_FLD_rg_eq_blwc_rst_b                        REG_FLD(1, 0)

#define RX_RESET_1_FLD_rg_unlock_stb                           REG_FLD(1, 16)
#define RX_RESET_1_FLD_rg_sigdet_rst_b                         REG_FLD(1, 8)
#define RX_RESET_1_FLD_rg_pdos_rst_b                           REG_FLD(1, 0)

#define RX_DEBUG_0_FLD_rg_ro_toggle                            REG_FLD(1, 24)
#define RX_DEBUG_0_FLD_rg_rx_debug_sel                         REG_FLD(5, 16)
#define RX_DEBUG_0_FLD_rg_probe1_en                            REG_FLD(8, 8)
#define RX_DEBUG_0_FLD_rg_probe0_en                            REG_FLD(8, 0)

#define BISTCTL_CONTROL_FLD_rg_bistctl_io_data_inv             REG_FLD(2, 24)
#define BISTCTL_CONTROL_FLD_rg_bistctl_pat_rx_check_en         REG_FLD(1, 16)
#define BISTCTL_CONTROL_FLD_rg_bistctl_pat_tx_en               REG_FLD(1, 8)
#define BISTCTL_CONTROL_FLD_rg_bistctl_pat_sel                 REG_FLD(5, 0)

#define BISTCTL_ALIGN_PAT_FLD_bistctl_align_pattern            REG_FLD(32, 0)

#define BISTCTL_PROGRAM_PAT_0_FLD_rg_bistctl_program_data_0    REG_FLD(32, 0)

#define BISTCTL_PROGRAM_PAT_1_FLD_rg_bistctl_program_data_1    REG_FLD(32, 0)

#define BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution_latch  REG_FLD(1, 16)
#define BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution        REG_FLD(16, 0)

#define BISTCTL_PRBS_INITIAL_SEED_FLD_bistctl_prbs_init_seed   REG_FLD(32, 0)

#define BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_done            REG_FLD(1, 16)
#define BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_fail            REG_FLD(1, 8)
#define BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_compare         REG_FLD(1, 0)

#define BISTCTL_PRBS_ERRCNT_FLD_ro_bistctl_prbs_err_cnt        REG_FLD(16, 0)

#define BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_sq_wave_reach REG_FLD(4, 16)
#define BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_prbs_fail_threshold REG_FLD(16, 0)

#define RX_TORGS_DEBUG_0_FLD_ro_dac_e1                         REG_FLD(7, 24)
#define RX_TORGS_DEBUG_0_FLD_ro_dac_eo                         REG_FLD(7, 16)
#define RX_TORGS_DEBUG_0_FLD_ro_dac_d1                         REG_FLD(7, 8)
#define RX_TORGS_DEBUG_0_FLD_ro_dac_do                         REG_FLD(7, 0)

#define RX_TORGS_DEBUG_1_FLD_ro_blwc_filter_din                REG_FLD(7, 24)
#define RX_TORGS_DEBUG_1_FLD_ro_blwc_sum                       REG_FLD(7, 16)
#define RX_TORGS_DEBUG_1_FLD_ro_blwc_offset                    REG_FLD(7, 8)
#define RX_TORGS_DEBUG_1_FLD_ro_dac_eye                        REG_FLD(7, 0)

#define RX_TORGS_DEBUG_2_FLD_ro_cal_dir                        REG_FLD(1, 24)
#define RX_TORGS_DEBUG_2_FLD_ro_pi_cal_data_out                REG_FLD(7, 16)
#define RX_TORGS_DEBUG_2_FLD_ro_fl_out2                        REG_FLD(16, 0)

#define RX_TORGS_DEBUG_3_FLD_ro_lslock_cnt2                    REG_FLD(4, 16)
#define RX_TORGS_DEBUG_3_FLD_ro_cal_en                         REG_FLD(1, 8)
#define RX_TORGS_DEBUG_3_FLD_ro_cal_out                        REG_FLD(5, 0)

#define RX_TORGS_DEBUG_4_FLD_eyecnt_rdy                        REG_FLD(1, 24)
#define RX_TORGS_DEBUG_4_FLD_ro_veo                            REG_FLD(8, 16)
#define RX_TORGS_DEBUG_4_FLD_ro_heo                            REG_FLD(11, 0)

#define RX_TORGS_DEBUG_5_FLD_veo_rdy                           REG_FLD(1, 24)
#define RX_TORGS_DEBUG_5_FLD_heo_rdy                           REG_FLD(1, 16)
#define RX_TORGS_DEBUG_5_FLD_heo_center                        REG_FLD(11, 0)

#define RX_TORGS_DEBUG_6_FLD_ro_cntlen                         REG_FLD(20, 0)

#define RX_TORGS_DEBUG_7_FLD_eyecnt                            REG_FLD(20, 0)

#define RX_TORGS_DEBUG_8_FLD_fom_num_type_good                 REG_FLD(5, 24)
#define RX_TORGS_DEBUG_8_FLD_fom_num_type                      REG_FLD(5, 16)
#define RX_TORGS_DEBUG_8_FLD_fom_num                           REG_FLD(15, 0)

#define RX_TORGS_DEBUG_9_FLD_eo_y_done                         REG_FLD(1, 24)
#define RX_TORGS_DEBUG_9_FLD_eo_x_done                         REG_FLD(1, 16)
#define RX_TORGS_DEBUG_9_FLD_ro_feos_out                       REG_FLD(6, 8)
#define RX_TORGS_DEBUG_9_FLD_rgs_ipll_dig_mon                  REG_FLD(6, 0)

#define RX_TORGS_DEBUG_10_FLD_eye_el                           REG_FLD(11, 16)
#define RX_TORGS_DEBUG_10_FLD_eye_er                           REG_FLD(11, 0)

#define SS_TX_RST_B_FLD_txcalib_rst_b                          REG_FLD(1, 8)
#define SS_TX_RST_B_FLD_tx_top_rst_b                           REG_FLD(1, 0)

#define SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel           REG_FLD(2, 24)
#define SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel_en        REG_FLD(1, 16)
#define SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_calen         REG_FLD(1, 8)
#define SS_TX_CALIB_0_FLD_rg_txcalib_p_en                      REG_FLD(1, 0)

#define SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel           REG_FLD(2, 24)
#define SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel_en        REG_FLD(1, 16)
#define SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_calen         REG_FLD(1, 8)
#define SS_TX_CALIB_1_FLD_rg_txcalib_n_en                      REG_FLD(1, 0)

#define SS_TX_CALIB_2_FLD_rg_txcal_clear                       REG_FLD(1, 24)
#define SS_TX_CALIB_2_FLD_ro_txcal_fsm                         REG_FLD(3, 16)
#define SS_TX_CALIB_2_FLD_ro_txcal_out_nflag                   REG_FLD(1, 8)
#define SS_TX_CALIB_2_FLD_ro_txcal_out_pflag                   REG_FLD(1, 0)

#define XPON_SETTING_0_FLD_rg_trans_tx_fault_inv               REG_FLD(1, 24)
#define XPON_SETTING_0_FLD_rg_trans_rx_sd_inv                  REG_FLD(1, 16)
#define XPON_SETTING_0_FLD_rg_trans_rx_data_inv                REG_FLD(1, 10)
#define XPON_SETTING_0_FLD_rg_trans_tx_data_inv                REG_FLD(1, 9)
#define XPON_SETTING_0_FLD_rg_trans_burst_inv                  REG_FLD(1, 8)
#define XPON_SETTING_0_FLD_rg_sfp_rx_sd_inv                    REG_FLD(1, 4)
#define XPON_SETTING_0_FLD_rg_tx_dly_en                        REG_FLD(1, 0)

#define XPON_SETTING_1_FLD_rg_trans_tx_fault_pro               REG_FLD(1, 24)
#define XPON_SETTING_1_FLD_rg_trans_rx_los_pro                 REG_FLD(1, 16)
#define XPON_SETTING_1_FLD_rg_trans_tx_sd_pro                  REG_FLD(1, 8)
#define XPON_SETTING_1_FLD_rg_trans_tx_sd_inv                  REG_FLD(1, 0)

#define XPON_SETTING_2_FLD_rg_pma_show_probe_en                REG_FLD(1, 24)
#define XPON_SETTING_2_FLD_rg_ftcal_high                       REG_FLD(8, 16)
#define XPON_SETTING_2_FLD_rg_ftcal_low                        REG_FLD(8, 8)
#define XPON_SETTING_2_FLD_rg_trans_rx_laser_on_pro            REG_FLD(1, 0)

#define XPON_STA_FLD_ro_tx_fault                               REG_FLD(1, 16)
#define XPON_STA_FLD_ro_tx_sd                                  REG_FLD(1, 8)
#define XPON_STA_FLD_ro_rx_los                                 REG_FLD(1, 0)

#define XPON_INT_EN_0_FLD_rg_tx_sd_alarm_int_en                REG_FLD(1, 29)
#define XPON_INT_EN_0_FLD_rg_ad_ben_alarm_int_en               REG_FLD(1, 28)
#define XPON_INT_EN_0_FLD_rg_trans_sd_fail_int_en              REG_FLD(1, 24)
#define XPON_INT_EN_0_FLD_rg_phyrdy_int_en                     REG_FLD(1, 16)
#define XPON_INT_EN_0_FLD_rg_un_stb_os_rdy_int_en              REG_FLD(1, 8)
#define XPON_INT_EN_0_FLD_rg_trans_rogue_onu_int_en            REG_FLD(1, 0)

#define XPON_INT_EN_1_FLD_rg_trans_los_int_en                  REG_FLD(1, 24)
#define XPON_INT_EN_1_FLD_rg_un_stb_rx_rdy_int_en              REG_FLD(1, 16)
#define XPON_INT_EN_1_FLD_rg_trans_fault_int_en                REG_FLD(1, 8)
#define XPON_INT_EN_1_FLD_rg_un_stb_eq_rdy_int_en              REG_FLD(1, 0)

#define XPON_INT_STA_0_FLD_tx_sd_alarm_int                     REG_FLD(1, 29)
#define XPON_INT_STA_0_FLD_ben_alarm_int                       REG_FLD(1, 28)
#define XPON_INT_STA_0_FLD_trans_sd_fail_int                   REG_FLD(1, 24)
#define XPON_INT_STA_0_FLD_phyrdy_int                          REG_FLD(1, 16)
#define XPON_INT_STA_0_FLD_un_stb_os_rdy_int                   REG_FLD(1, 8)
#define XPON_INT_STA_0_FLD_trans_rogue_onu_int                 REG_FLD(1, 0)

#define XPON_INT_STA_1_FLD_trans_los_int                       REG_FLD(1, 24)
#define XPON_INT_STA_1_FLD_un_stb_rx_rdy_int                   REG_FLD(1, 16)
#define XPON_INT_STA_1_FLD_trans_fault_int                     REG_FLD(1, 8)
#define XPON_INT_STA_1_FLD_un_stb_eq_rdy_int                   REG_FLD(1, 0)

#define RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_SIGDET_OUT            REG_FLD(1, 24)
#define RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_DBG                   REG_FLD(8, 16)
#define RX_TORGS_DEBUG_11_FLD_eye_eb                           REG_FLD(7, 8)
#define RX_TORGS_DEBUG_11_FLD_eye_eu                           REG_FLD(7, 0)

#define RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_rstb      REG_FLD(1, 24)
#define RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_lck2data  REG_FLD(1, 16)
#define RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_peaking_ctrl REG_FLD(3, 8)
#define RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_gain_ctrl   REG_FLD(2, 0)

#define RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_e0         REG_FLD(7, 24)
#define RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d1         REG_FLD(7, 16)
#define RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d0         REG_FLD(7, 8)
#define RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_sigdet_os      REG_FLD(5, 0)

#define RX_FORCE_MODE_2_FLD_rg_force_da_xpon_cdr_pr_pieye      REG_FLD(7, 24)
#define RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_fe_vos         REG_FLD(6, 16)
#define RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_eye        REG_FLD(7, 8)
#define RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_e1         REG_FLD(7, 0)

#define RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_rstb        REG_FLD(1, 24)
#define RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_lck2data    REG_FLD(1, 16)
#define RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_peaking_ctrl  REG_FLD(1, 8)
#define RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_gain_ctrl     REG_FLD(1, 0)

#define RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_e0           REG_FLD(1, 24)
#define RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d1           REG_FLD(1, 16)
#define RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d0           REG_FLD(1, 8)
#define RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_sigdet_os        REG_FLD(1, 0)

#define RX_DISB_MODE_2_FLD_rg_disb_da_xpon_cdr_pr_pieye        REG_FLD(1, 24)
#define RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_fe_vos           REG_FLD(1, 16)
#define RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_eye          REG_FLD(1, 8)
#define RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_e1           REG_FLD(1, 0)

#define RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d1                 REG_FLD(7, 24)
#define RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d0                 REG_FLD(7, 16)
#define RX_FORCE_MODE_3_FLD_rg_force_rx_dac_eye                REG_FLD(7, 8)
#define RX_FORCE_MODE_3_FLD_rg_force_eq_pi_cal_rdy             REG_FLD(1, 0)

#define RX_FORCE_MODE_4_FLD_rg_force_blwc_offset               REG_FLD(7, 24)
#define RX_FORCE_MODE_4_FLD_rg_force_xpon_rx_sigdet_out        REG_FLD(1, 16)
#define RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e1                 REG_FLD(7, 8)
#define RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e0                 REG_FLD(7, 0)

#define RX_FORCE_MODE_5_FLD_rg_force_eyecnt                    REG_FLD(20, 8)
#define RX_FORCE_MODE_5_FLD_rg_force_feos_out                  REG_FLD(6, 0)

#define RX_FORCE_MODE_6_FLD_rg_force_rx_or_pical_en            REG_FLD(1, 8)
#define RX_FORCE_MODE_6_FLD_rg_force_eyecnt_rdy                REG_FLD(1, 0)

#define RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d1                   REG_FLD(1, 24)
#define RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d0                   REG_FLD(1, 16)
#define RX_DISB_MODE_3_FLD_rg_disb_rx_dac_eye                  REG_FLD(1, 8)
#define RX_DISB_MODE_3_FLD_rg_disb_eq_pi_cal_rdy               REG_FLD(1, 0)

#define RX_DISB_MODE_4_FLD_rg_disb_blwc_offset                 REG_FLD(1, 24)
#define RX_DISB_MODE_4_FLD_rg_disb_xpon_rx_sigdet_out          REG_FLD(1, 16)
#define RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e1                   REG_FLD(1, 8)
#define RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e0                   REG_FLD(1, 0)

#define RX_DISB_MODE_5_FLD_rg_disb_rx_or_pical_en              REG_FLD(1, 24)
#define RX_DISB_MODE_5_FLD_rg_disb_eyecnt_rdy                  REG_FLD(1, 16)
#define RX_DISB_MODE_5_FLD_rg_disb_eyecnt                      REG_FLD(1, 8)
#define RX_DISB_MODE_5_FLD_rg_disb_feos_out                    REG_FLD(1, 0)

#define RX_FORCE_MODE_7_FLD_rg_force_da_lock2ref               REG_FLD(1, 24)
#define RX_FORCE_MODE_7_FLD_rg_force_pdos_rx_rst_b             REG_FLD(1, 16)
#define RX_FORCE_MODE_7_FLD_rg_force_rx_and_pical_rstb         REG_FLD(1, 8)
#define RX_FORCE_MODE_7_FLD_rg_force_ref_and_pical_rstb        REG_FLD(1, 0)

#define RX_FORCE_MODE_8_FLD_rg_force_eyecnt_rx_rst_b           REG_FLD(1, 24)
#define RX_FORCE_MODE_8_FLD_rg_force_feos_rx_rst_b             REG_FLD(1, 16)
#define RX_FORCE_MODE_8_FLD_rg_force_sdcal_ref_rst_b           REG_FLD(1, 8)
#define RX_FORCE_MODE_8_FLD_rg_force_blwc_rx_rst_b             REG_FLD(1, 0)

#define RX_FORCE_MODE_9_FLD_rg_force_pi_cal_data_out_o         REG_FLD(7, 24)
#define RX_FORCE_MODE_9_FLD_rg_force_eye_top_en                REG_FLD(1, 16)
#define RX_FORCE_MODE_9_FLD_rg_force_eye_reset_plu_o           REG_FLD(1, 8)
#define RX_FORCE_MODE_9_FLD_rg_force_fbck_lock                 REG_FLD(1, 0)

#define RX_DISB_MODE_6_FLD_rg_disb_da_lock2ref                 REG_FLD(1, 24)
#define RX_DISB_MODE_6_FLD_rg_disb_pdos_rx_rst_b               REG_FLD(1, 16)
#define RX_DISB_MODE_6_FLD_rg_disb_rx_and_pical_rstb           REG_FLD(1, 8)
#define RX_DISB_MODE_6_FLD_rg_disb_ref_and_pical_rstb          REG_FLD(1, 0)

#define RX_DISB_MODE_7_FLD_rg_disb_eyecnt_rx_rst_b             REG_FLD(1, 24)
#define RX_DISB_MODE_7_FLD_rg_disb_feos_rx_rst_b               REG_FLD(1, 16)
#define RX_DISB_MODE_7_FLD_rg_disb_sdcal_ref_rst_b             REG_FLD(1, 8)
#define RX_DISB_MODE_7_FLD_rg_disb_blwc_rx_rst_b               REG_FLD(1, 0)

#define RX_DISB_MODE_8_FLD_rg_disb_pi_cal_data_out_o           REG_FLD(1, 24)
#define RX_DISB_MODE_8_FLD_rg_disb_eye_top_en                  REG_FLD(1, 16)
#define RX_DISB_MODE_8_FLD_rg_disb_eye_reset_plu_o             REG_FLD(1, 8)
#define RX_DISB_MODE_8_FLD_rg_disb_fbck_lock                   REG_FLD(1, 0)

#define SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagh_en           REG_FLD(1, 24)
#define SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagl_en           REG_FLD(1, 16)
#define SS_BIST_0_FLD_dbgctl_bistctl_flagh_sel                 REG_FLD(8, 8)
#define SS_BIST_0_FLD_dbgctl_bistctl_flagl_sel                 REG_FLD(8, 0)

#define SS_BIST_1_FLD_rg_lnx_bistctl_bit_error_rst_sel         REG_FLD(1, 24)
#define SS_BIST_1_FLD_pllctl_px_lnx_tx_por_rdy                 REG_FLD(1, 16)
#define SS_BIST_1_FLD_all_lane_prbs_tx_en                      REG_FLD(1, 8)
#define SS_BIST_1_FLD_anlt_px_lnx_lt_los                       REG_FLD(1, 0)

#define SS_BIST_2_FLD_rg_lnx_bistctl_prbs_check_timer          REG_FLD(24, 0)

#define SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pd_pwdb           REG_FLD(1, 24)
#define SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pieye_pwdb     REG_FLD(1, 16)
#define SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pwdb           REG_FLD(1, 8)
#define SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_rx_fe_pwdb            REG_FLD(1, 0)

#define SS_DA_XPON_PWDB_1_FLD_rg_da_xpon_rx_sigdet_pwdb        REG_FLD(1, 0)

#define SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg                   REG_FLD(1, 8)
#define SS_LCPLL_0_FLD_eee_lcpll_hold                          REG_FLD(1, 0)

#define SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo                       REG_FLD(31, 0)

#define SS_LCPLL_2_FLD_lcpll_top_flagh_en                      REG_FLD(1, 24)
#define SS_LCPLL_2_FLD_lcpll_top_flagl_en                      REG_FLD(1, 16)
#define SS_LCPLL_2_FLD_flagh_sel                               REG_FLD(8, 8)
#define SS_LCPLL_2_FLD_flagl_sel                               REG_FLD(8, 0)

#define ADD_DIG_RESERVE_0_FLD_rg_dig_reserve_0                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_1_FLD_rg_dig_reserve_1                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_2_FLD_rg_dig_reserve_2                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_3_FLD_rg_dig_reserve_3                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_4_FLD_rg_dig_reserve_4                 REG_FLD(32, 0)

#define RG_XPON_RX_RESERVED_1_FLD_rg_xpon_rx_rate_ctrl         REG_FLD(2, 0)

#define ADD_DIG_RO_RESERVE_0_FLD_ro_dig_reserve_0              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_1_FLD_ro_dig_reserve_1              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_2_FLD_ro_dig_reserve_2              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_3_FLD_ro_dig_reserve_3              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_4_FLD_ro_dig_reserve_4              REG_FLD(32, 0)

#define ADD_RX_SYS_EN_SEL_0_FLD_rg_rx_sys_en                   REG_FLD(1, 8)
#define ADD_RX_SYS_EN_SEL_0_FLD_rg_da_rx_sys_en_sel            REG_FLD(2, 0)

#define PLL_TDC_FREQDET_0_FLD_rg_pll_unlock_cyclecnt           REG_FLD(16, 16)
#define PLL_TDC_FREQDET_0_FLD_rg_pll_lock_cyclecnt             REG_FLD(16, 0)

#define PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_end           REG_FLD(16, 16)
#define PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_beg           REG_FLD(16, 0)

#define PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_end         REG_FLD(16, 16)
#define PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_beg         REG_FLD(16, 0)

#define PLL_TDC_FREQDET_3_FLD_rg_pll_wait_100us                REG_FLD(8, 16)
#define PLL_TDC_FREQDET_3_FLD_rg_pll_unlockth                  REG_FLD(4, 12)
#define PLL_TDC_FREQDET_3_FLD_rg_pll_lock_lockth               REG_FLD(4, 8)
#define PLL_TDC_FREQDET_3_FLD_rg_pll_lock_cnt_clear            REG_FLD(1, 4)
#define PLL_TDC_FREQDET_3_FLD_rg_pll_freqlock_det_en           REG_FLD(3, 0)

#define DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ck_en               REG_FLD(1, 24)
#define DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ck_en                REG_FLD(1, 16)
#define DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ldo_lpf_en          REG_FLD(1, 8)
#define DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ldo_lpf_en           REG_FLD(1, 0)

#define DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data_ben     REG_FLD(1, 24)
#define DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data         REG_FLD(1, 16)
#define DA_XPON_TX_FORCE_1_FLD_rg_force_tx_hsdata_en           REG_FLD(1, 8)
#define DA_XPON_TX_FORCE_1_FLD_rg_disb_tx_hsdata_en            REG_FLD(1, 0)

#define DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data_ben    REG_FLD(16, 16)
#define DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data        REG_FLD(16, 0)

#define RX_FORCE_MODE_10_FLD_rg_disb_status_rx_rst_b           REG_FLD(1, 8)
#define RX_FORCE_MODE_10_FLD_rg_force_status_rx_rst_b          REG_FLD(1, 0)

#define ADD_CLKPATH_RST_0_FLD_rg_xpon_pma_probe_sel            REG_FLD(4, 24)
#define ADD_CLKPATH_RST_0_FLD_rg_tdc_lck2ref_sel               REG_FLD(1, 16)
#define ADD_CLKPATH_RST_0_FLD_rg_clkpath_rstb_ck               REG_FLD(1, 8)
#define ADD_CLKPATH_RST_0_FLD_rg_clkpath_rst_en                REG_FLD(1, 0)

#define ADD_XPON_MODE_1_FLD_rg_r2t_fifo_en                     REG_FLD(1, 24)
#define ADD_XPON_MODE_1_FLD_rg_tx_bist_gen_en                  REG_FLD(1, 16)
#define ADD_XPON_MODE_1_FLD_rg_xfi_rx_mode                     REG_FLD(3, 9)
#define ADD_XPON_MODE_1_FLD_rg_r2t_mode                        REG_FLD(1, 8)
#define ADD_XPON_MODE_1_FLD_rg_xfi_tx_mode                     REG_FLD(3, 3)
#define ADD_XPON_MODE_1_FLD_rg_xpon_mode                       REG_FLD(3, 0)

#define ADD_R2T_MODE_1_FLD_rg_rx_asic_uses_ff                  REG_FLD(1, 24)
#define ADD_R2T_MODE_1_FLD_rg_rx_afifo_adj                     REG_FLD(6, 16)
#define ADD_R2T_MODE_1_FLD_rg_r2t_asic_uses_ff                 REG_FLD(1, 8)
#define ADD_R2T_MODE_1_FLD_rg_r2t_afifo_adj                    REG_FLD(4, 0)

#define ADD_T2R_MODE_1_FLD_rg_tx_asic_uses_ff                  REG_FLD(1, 28)
#define ADD_T2R_MODE_1_FLD_rg_tx_afifo_adj                     REG_FLD(5, 20)
#define ADD_T2R_MODE_1_FLD_rg_t2r_asic_uses_ff                 REG_FLD(1, 16)
#define ADD_T2R_MODE_1_FLD_rg_t2r_afifo_adj                    REG_FLD(4, 8)
#define ADD_T2R_MODE_1_FLD_rg_xpon_t2r_bist_mode               REG_FLD(1, 1)
#define ADD_T2R_MODE_1_FLD_rg_t2r_fifo_en                      REG_FLD(1, 0)

#define ADD_LCPLL_RO_1_FLD_ro_rx_sequence                      REG_FLD(8, 24)
#define ADD_LCPLL_RO_1_FLD_ro_pll_fbck_lock2                   REG_FLD(1, 16)
#define ADD_LCPLL_RO_1_FLD_ro_lcpll_ck_stb                     REG_FLD(1, 8)
#define ADD_LCPLL_RO_1_FLD_ro_tdc_ck_stb                       REG_FLD(1, 0)

#define ADD_RO_RX2ANA_1_FLD_ro_rx_dac_e0                       REG_FLD(7, 24)
#define ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d1                       REG_FLD(7, 16)
#define ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d0                       REG_FLD(7, 8)
#define ADD_RO_RX2ANA_1_FLD_ro_rx_dac_eye                      REG_FLD(7, 0)

#define ADD_RO_RX2ANA_2_FLD_ro_da_xpon_rx_sigdet_os            REG_FLD(5, 24)
#define ADD_RO_RX2ANA_2_FLD_ro_rx_blwc_offset                  REG_FLD(7, 16)
#define ADD_RO_RX2ANA_2_FLD_ro_rx_feos_out                     REG_FLD(6, 8)
#define ADD_RO_RX2ANA_2_FLD_ro_rx_dac_e1                       REG_FLD(7, 0)

#define ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_full_cnt                REG_FLD(4, 16)
#define ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_empty_cnt               REG_FLD(4, 8)
#define ADD_RO_RX2ANA_3_FLD_ro_rx_pi_cal_data_out              REG_FLD(7, 0)

#define ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_empty_cnt             REG_FLD(4, 24)
#define ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_full_cnt              REG_FLD(4, 16)
#define ADD_RO_R2TMODE_1_FLD_ro_r2t_data_afifo                 REG_FLD(16, 0)

#define RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_force_on  REG_FLD(1, 24)
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_man_pwdb  REG_FLD(1, 16)
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_en_timer  REG_FLD(16, 0)

#define RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_hsdata_en_ext_mode REG_FLD(1, 24)
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_d_toggle_en     REG_FLD(1, 16)
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_inv       REG_FLD(1, 8)
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_hw_ctrl_mode REG_FLD(1, 0)

#define RG_TX_HSDATA_EN_EXT_CNT_0_FLD_rg_tx_hsdata_en_cnt      REG_FLD(32, 0)

#define PON_TX_COUNTER_0_FLD_rg_txcalib_5us                    REG_FLD(16, 16)
#define PON_TX_COUNTER_0_FLD_rg_txcalib_50us                   REG_FLD(16, 0)

#define PON_TX_COUNTER_1_FLD_rg_tx_hsdata_en_wait              REG_FLD(16, 16)
#define PON_TX_COUNTER_1_FLD_rg_tx_ck_en_wait                  REG_FLD(16, 0)

#define PON_TX_COUNTER_2_FLD_rg_tx_serdes_rdy_wait             REG_FLD(16, 16)
#define PON_TX_COUNTER_2_FLD_rg_tx_power_on_wait               REG_FLD(16, 0)

#define PON_TX_COUNTER_3_FLD_ro_tx_serdes_rdy                  REG_FLD(1, 0)

#define PON_CK_SET_FLD_rg_txck_inv                             REG_FLD(1, 31)
#define PON_CK_SET_FLD_rg_rxck_inv                             REG_FLD(1, 30)
#define PON_CK_SET_FLD_rg_rxck_sync_inv                        REG_FLD(1, 29)
#define PON_CK_SET_FLD_rg_rxck_dbg_inv                         REG_FLD(1, 28)
#define PON_CK_SET_FLD_rg_force_ck_g                           REG_FLD(1, 25)
#define PON_CK_SET_FLD_rg_force_e_txmode                       REG_FLD(1, 24)
#define PON_CK_SET_FLD_rg_force_xg_txmode                      REG_FLD(1, 23)
#define PON_CK_SET_FLD_rg_force_xe_mode                        REG_FLD(1, 22)
#define PON_CK_SET_FLD_rg_force_xg_mode                        REG_FLD(1, 21)
#define PON_CK_SET_FLD_rg_force_ge_mode                        REG_FLD(1, 20)
#define PON_CK_SET_FLD_rg_force_e_mode                         REG_FLD(1, 19)
#define PON_CK_SET_FLD_rg_force_g_mode                         REG_FLD(1, 18)
#define PON_CK_SET_FLD_rg_force_xg_rxmapmodesel                REG_FLD(1, 17)
#define PON_CK_SET_FLD_rg_force_ge_rxmapmodesel                REG_FLD(1, 16)
#define PON_CK_SET_FLD_rg_force_xe_txmapmodesel                REG_FLD(1, 15)
#define PON_CK_SET_FLD_rg_force_xg_txmapmodesel                REG_FLD(1, 14)
#define PON_CK_SET_FLD_rg_force_ge_txmapmodesel                REG_FLD(1, 13)
#define PON_CK_SET_FLD_rg_force_xg_rxpcsmodesel                REG_FLD(1, 12)
#define PON_CK_SET_FLD_rg_force_ge_rxpcsmodesel                REG_FLD(1, 11)
#define PON_CK_SET_FLD_rg_force_xe_txpcsmodesel                REG_FLD(1, 10)
#define PON_CK_SET_FLD_rg_force_xg_txpcsmodesel                REG_FLD(1, 9)
#define PON_CK_SET_FLD_rg_force_ge_txpcsmodesel                REG_FLD(1, 8)
#define PON_CK_SET_FLD_rg_force_xg_txpcsdiv2modesel            REG_FLD(1, 7)
#define PON_CK_SET_FLD_rg_force_bg_rx                          REG_FLD(2, 4)
#define PON_CK_SET_FLD_rg_force_bg_tx                          REG_FLD(3, 0)

#define TX_FIFO_MODE_SEL_FLD_rg_xfi_phyck_inv                  REG_FLD(1, 2)
#define TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_mode                  REG_FLD(1, 1)
#define TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_en                    REG_FLD(1, 0)

#define XPON_PLL_STB_CNT_FLD_rg_xpon_pll_stb_cnt               REG_FLD(32, 0)

#define XPON_PLL_STOP_CNT_FLD_rg_xpon_pll_stop_cnt             REG_FLD(32, 0)

#define SW_RST_SET_FLD_rg_sw_xfi_rxmac_rst_n                   REG_FLD(1, 17)
#define SW_RST_SET_FLD_rg_sw_xfi_txmac_rst_n                   REG_FLD(1, 16)
#define SW_RST_SET_FLD_rg_sw_ponolt_rxmac_rst_n                REG_FLD(1, 15)
#define SW_RST_SET_FLD_rg_sw_ponolt_rxpcs_rst_n                REG_FLD(1, 14)
#define SW_RST_SET_FLD_rg_sw_ponolt_txmac_rst_n                REG_FLD(1, 13)
#define SW_RST_SET_FLD_rg_sw_ponolt_txpcs_rst_n                REG_FLD(1, 12)
#define SW_RST_SET_FLD_rg_sw_hsg_rxpcs_rst_n                   REG_FLD(1, 11)
#define SW_RST_SET_FLD_rg_sw_hsg_txpcs_rst_n                   REG_FLD(1, 10)
#define SW_RST_SET_FLD_rg_sw_xfi_rxpcs_bist_rst_n              REG_FLD(1, 9)
#define SW_RST_SET_FLD_rg_sw_xfi_rxpcs_rst_n                   REG_FLD(1, 8)
#define SW_RST_SET_FLD_rg_sw_xfi_txpcs_rst_n                   REG_FLD(1, 7)
#define SW_RST_SET_FLD_rg_sw_tx_fifo_rst_n                     REG_FLD(1, 6)
#define SW_RST_SET_FLD_rg_sw_ref_rst_n                         REG_FLD(1, 5)
#define SW_RST_SET_FLD_rg_sw_allpcs_rst_n                      REG_FLD(1, 4)
#define SW_RST_SET_FLD_rg_sw_pma_rst_n                         REG_FLD(1, 3)
#define SW_RST_SET_FLD_rg_sw_tx_rst_n                          REG_FLD(1, 2)
#define SW_RST_SET_FLD_rg_sw_rx_rst_n                          REG_FLD(1, 1)
#define SW_RST_SET_FLD_rg_sw_rx_fifo_rst_n                     REG_FLD(1, 0)

#define ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_full_cnt                REG_FLD(4, 4)
#define ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_empty_cnt               REG_FLD(4, 0)

#define TX_DLY_CTRL_FLD_rg_outben_data_mode                    REG_FLD(3, 28)
#define TX_DLY_CTRL_FLD_rg_tx_non_reverse_gpon                 REG_FLD(1, 27)
#define TX_DLY_CTRL_FLD_rg_rx_non_reverse_gpon                 REG_FLD(1, 26)
#define TX_DLY_CTRL_FLD_rg_tx_non_reverse_epon                 REG_FLD(1, 25)
#define TX_DLY_CTRL_FLD_rg_rx_non_reverse_epon                 REG_FLD(1, 24)
#define TX_DLY_CTRL_FLD_rg_tx_ben_exten_ftune                  REG_FLD(8, 16)
#define TX_DLY_CTRL_FLD_rg_txben_pre_post_zero_en              REG_FLD(1, 15)
#define TX_DLY_CTRL_FLD_rg_tx_dly_ben_ftune                    REG_FLD(7, 8)
#define TX_DLY_CTRL_FLD_rg_tx_dly_data_ftune                   REG_FLD(7, 0)

#define MEM_WRAPPER_CTRL_FLD_rg_rx_pma_fifo_pd                 REG_FLD(1, 3)
#define MEM_WRAPPER_CTRL_FLD_rg_tx_pma_fifo_pd                 REG_FLD(1, 2)
#define MEM_WRAPPER_CTRL_FLD_rg_gfifo_fec_mem_pd               REG_FLD(1, 1)
#define MEM_WRAPPER_CTRL_FLD_rg_up_md32_wrap_pd                REG_FLD(1, 0)

#define XPON_INT_EN_2_FLD_rg_pma_rx_afifo_full_int_en          REG_FLD(1, 24)
#define XPON_INT_EN_2_FLD_rg_pma_rx_afifo_empty_int_en         REG_FLD(1, 16)
#define XPON_INT_EN_2_FLD_rg_pma_tx_afifo_full_int_en          REG_FLD(1, 8)
#define XPON_INT_EN_2_FLD_rg_pma_tx_afifo_empty_int_en         REG_FLD(1, 0)

#define XPON_INT_EN_3_FLD_rg_trans_laser_on_int_en             REG_FLD(1, 24)
#define XPON_INT_EN_3_FLD_rg_rx_sigdet_int_en                  REG_FLD(1, 16)
#define XPON_INT_EN_3_FLD_rg_rx_freqdet_unlock_int_en          REG_FLD(1, 8)
#define XPON_INT_EN_3_FLD_rg_tx_freqdet_unlock_int_en          REG_FLD(1, 0)

#define XPON_INT_STA_2_FLD_pma_rx_afifo_full_int               REG_FLD(1, 24)
#define XPON_INT_STA_2_FLD_pma_rx_afifo_empty_int              REG_FLD(1, 16)
#define XPON_INT_STA_2_FLD_pma_tx_afifo_full_int               REG_FLD(1, 8)
#define XPON_INT_STA_2_FLD_pma_tx_afifo_empty_int              REG_FLD(1, 0)

#define XPON_INT_STA_3_FLD_trans_laser_on_int                  REG_FLD(1, 24)
#define XPON_INT_STA_3_FLD_rx_sigdet_int                       REG_FLD(1, 16)
#define XPON_INT_STA_3_FLD_rx_freqdet_unlock_int               REG_FLD(1, 8)
#define XPON_INT_STA_3_FLD_tx_freqdet_unlock_int               REG_FLD(1, 0)

#define XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_rogue_onu_cnt  REG_FLD(16, 16)
#define XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_sd_fail_cnt    REG_FLD(16, 0)

#define XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_rogue_onu_cnt_clr REG_FLD(1, 8)
#define XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_sd_fail_cnt_clr REG_FLD(1, 0)

#define XPON_SD_BEHAVIOR_STA_FLD_ro_trans_rogue_onu_cnt        REG_FLD(16, 16)
#define XPON_SD_BEHAVIOR_STA_FLD_ro_trans_sd_fail_cnt          REG_FLD(16, 0)

#define RX_EXTRAL_CTRL_FLD_rg_abnormal_cnt                     REG_FLD(3, 24)
#define RX_EXTRAL_CTRL_FLD_rg_blwc_opt                         REG_FLD(1, 16)
#define RX_EXTRAL_CTRL_FLD_rg_l2d_trig_eq_en_time              REG_FLD(8, 8)
#define RX_EXTRAL_CTRL_FLD_rg_heo_rdy_opt                      REG_FLD(1, 2)
#define RX_EXTRAL_CTRL_FLD_rg_os_rdy_latch                     REG_FLD(1, 1)
#define RX_EXTRAL_CTRL_FLD_rg_disb_leq                         REG_FLD(1, 0)

#define RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_avg_en               REG_FLD(1, 24)
#define RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_leak_en              REG_FLD(1, 16)
#define RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_pf_ctrl              REG_FLD(1, 8)
#define RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_len_ctrl             REG_FLD(1, 0)

#define RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_rst_b                REG_FLD(1, 16)
#define RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_done                 REG_FLD(1, 8)
#define RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_en                   REG_FLD(1, 0)

#define RX_LEQ_FORCE_CTRL0_FLD_rg_leq_avg_en                   REG_FLD(1, 24)
#define RX_LEQ_FORCE_CTRL0_FLD_rg_leq_leak_en                  REG_FLD(1, 16)
#define RX_LEQ_FORCE_CTRL0_FLD_rg_leq_pf_ctrl                  REG_FLD(4, 8)
#define RX_LEQ_FORCE_CTRL0_FLD_rg_leq_len_ctrl                 REG_FLD(4, 0)

#define RX_LEQ_FORCE_CTRL1_FLD_rg_abnormal_cnt_reset_disb      REG_FLD(1, 24)
#define RX_LEQ_FORCE_CTRL1_FLD_rg_leq_rst_b                    REG_FLD(1, 16)
#define RX_LEQ_FORCE_CTRL1_FLD_rg_leq_done                     REG_FLD(1, 8)
#define RX_LEQ_FORCE_CTRL1_FLD_rg_leq_en                       REG_FLD(1, 0)

#define RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl3        REG_FLD(4, 24)
#define RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl2        REG_FLD(4, 16)
#define RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl1        REG_FLD(4, 8)
#define RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl0        REG_FLD(4, 0)

#define RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl3         REG_FLD(4, 24)
#define RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl2         REG_FLD(4, 16)
#define RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl1         REG_FLD(4, 8)
#define RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl0         REG_FLD(4, 0)

#define RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_res                  REG_FLD(2, 24)
#define RX_LEQ_ENTIME_CTRL2_FLD_rg_timeslot_res                REG_FLD(2, 16)
#define RX_LEQ_ENTIME_CTRL2_FLD_rg_disentime_leq_leak_en       REG_FLD(4, 8)
#define RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_leq_avg              REG_FLD(4, 0)

#define RX_LEQ_CTRL0_FLD_rg_leq_init_set                       REG_FLD(1, 24)
#define RX_LEQ_CTRL0_FLD_rg_leq_init_val                       REG_FLD(4, 16)
#define RX_LEQ_CTRL0_FLD_rg_leq_gain                           REG_FLD(4, 8)
#define RX_LEQ_CTRL0_FLD_rg_leq_update_pause                   REG_FLD(1, 0)

#define RX_LEQ_CTRL1_FLD_rg_leq_leak_target                    REG_FLD(4, 24)
#define RX_LEQ_CTRL1_FLD_rg_leq_leak_gain                      REG_FLD(4, 16)
#define RX_LEQ_CTRL1_FLD_rg_leq_bot_lim                        REG_FLD(4, 8)
#define RX_LEQ_CTRL1_FLD_rg_leq_top_lim                        REG_FLD(4, 0)

#define RX_LEQ_CTRL2_FLD_rg_leq_gray_out_en                    REG_FLD(1, 8)
#define RX_LEQ_CTRL2_FLD_rg_leq_avg_cycle                      REG_FLD(4, 0)

#define RX_LEQ_RO0_FLD_ro_abnormal_cnt                         REG_FLD(3, 28)
#define RX_LEQ_RO0_FLD_ro_eq_rdy                               REG_FLD(2, 24)
#define RX_LEQ_RO0_FLD_ro_leq_updn                             REG_FLD(2, 22)
#define RX_LEQ_RO0_FLD_ro_leq_avg_en                           REG_FLD(1, 21)
#define RX_LEQ_RO0_FLD_ro_leq_leak_en                          REG_FLD(1, 20)
#define RX_LEQ_RO0_FLD_ro_leq_pf_ctrl                          REG_FLD(4, 16)
#define RX_LEQ_RO0_FLD_ro_leq_len_ctrl                         REG_FLD(4, 8)
#define RX_LEQ_RO0_FLD_ro_eq_en                                REG_FLD(1, 3)
#define RX_LEQ_RO0_FLD_ro_eq_done                              REG_FLD(1, 2)
#define RX_LEQ_RO0_FLD_ro_leq_en                               REG_FLD(1, 1)
#define RX_LEQ_RO0_FLD_ro_leq_rst_b                            REG_FLD(1, 0)

#define RX_LEQ_RO1_FLD_ro_eq_time_slot                         REG_FLD(4, 8)
#define RX_LEQ_RO1_FLD_ro_leq_time_slot                        REG_FLD(4, 0)

#define PLL_FT_FREQDET_0_FLD_rg_pll_ft_unlock_cyclecnt         REG_FLD(16, 16)
#define PLL_FT_FREQDET_0_FLD_rg_pll_ft_lock_cyclecnt           REG_FLD(16, 0)

#define PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_end         REG_FLD(16, 16)
#define PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_beg         REG_FLD(16, 0)

#define PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_end       REG_FLD(16, 16)
#define PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_beg       REG_FLD(16, 0)

#define PLL_FT_FREQDET_3_FLD_rg_pll_ft_wait_100us              REG_FLD(8, 16)
#define PLL_FT_FREQDET_3_FLD_rg_pll_ft_unlockth                REG_FLD(4, 12)
#define PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_lockth             REG_FLD(4, 8)
#define PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_cnt_clear          REG_FLD(1, 4)
#define PLL_FT_FREQDET_3_FLD_rg_pll_ft_freqlock_det_en         REG_FLD(3, 0)

#define RO_RX_FREQDET_FLD_ro_fl_out                            REG_FLD(16, 16)
#define RO_RX_FREQDET_FLD_ro_state_freqdet                     REG_FLD(2, 8)
#define RO_RX_FREQDET_FLD_ro_lslock_cnt                        REG_FLD(4, 4)
#define RO_RX_FREQDET_FLD_ro_fbck_lock_inner                   REG_FLD(1, 1)
#define RO_RX_FREQDET_FLD_ro_fbck_lock                         REG_FLD(1, 0)

#define RO_PLL_FREQDET_FLD_ro_pll_fl_out                       REG_FLD(16, 16)
#define RO_PLL_FREQDET_FLD_ro_pll_state_freqdet                REG_FLD(2, 8)
#define RO_PLL_FREQDET_FLD_ro_pll_lslock_cnt                   REG_FLD(4, 4)
#define RO_PLL_FREQDET_FLD_ro_pll_fbck_lock_inner              REG_FLD(1, 1)
#define RO_PLL_FREQDET_FLD_ro_pll_fbck_lock                    REG_FLD(1, 0)

#define RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fl_out                 REG_FLD(16, 16)
#define RO_PLL_FT_FREQDET_FLD_ro_pll_ft_state_freqdet          REG_FLD(2, 8)
#define RO_PLL_FT_FREQDET_FLD_ro_pll_ft_lslock_cnt             REG_FLD(4, 4)
#define RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock_inner        REG_FLD(1, 1)
#define RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock              REG_FLD(1, 0)

#define RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_lsb                 REG_FLD(16, 16)
#define RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_max                 REG_FLD(16, 0)

#define RG_PMA_FREQDET_FLD_rg_pma_freq_check_lsb               REG_FLD(1, 8)
#define RG_PMA_FREQDET_FLD_rg_pma_freq_meter_sel               REG_FLD(4, 0)

#define RG_EXT_BEN_DATA_FLD_rg_tx_loff_manu                    REG_FLD(32, 0)

#define RG_PRE_BEN_DATA_FLD_rg_tx_bh_dl_dsel                   REG_FLD(1, 16)
#define RG_PRE_BEN_DATA_FLD_rg_tx_lon_manu                     REG_FLD(16, 0)

#define RX_TORGS_DEBUG_12_FLD_ro_injosc_rdy                    REG_FLD(1, 25)
#define RX_TORGS_DEBUG_12_FLD_ro_kband_done                    REG_FLD(1, 24)
#define RX_TORGS_DEBUG_12_FLD_ro_y_index_o                     REG_FLD(7, 16)
#define RX_TORGS_DEBUG_12_FLD_ro_x_index_o                     REG_FLD(11, 0)

#define RO_FLL_ADC_0_FLD_rg_fll_dig_pro                        REG_FLD(1, 31)
#define RO_FLL_ADC_0_FLD_ro_adc_freq_output                    REG_FLD(20, 0)

#define RO_FLL_ADC_1_FLD_ro_adc_freq_inv_output                REG_FLD(21, 0)

#define RO_FLL_ADC_2_FLD_ro_cor_gain_output                    REG_FLD(32, 0)

#define RO_FLL_ADC_3_FLD_ro_cor_integ_output                   REG_FLD(32, 0)

#define RO_FLL_ADC_4_FLD_ro_cor_integ_inv_output               REG_FLD(32, 0)

#define RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_FLD_rg_ad_xpon_pll_ft_ck_mon_mux_sel REG_FLD(2, 0)

#define XPON_INT_EN_4_FLD_rg_pma_rx_afifo_reach_int_en         REG_FLD(1, 8)
#define XPON_INT_EN_4_FLD_rg_pma_tx_afifo_reach_int_en         REG_FLD(1, 0)

#define XPON_INT_STA_4_FLD_pma_rx_afifo_reach_int              REG_FLD(1, 8)
#define XPON_INT_STA_4_FLD_pma_tx_afifo_reach_int              REG_FLD(1, 0)

#define XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_rx_afifo_reach_th   REG_FLD(7, 8)
#define XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_tx_afifo_reach_th   REG_FLD(6, 0)

#define XPON_MD32_PBUS_CSR_CTRL_FLD_rg_md32_pbus_arb_en        REG_FLD(32, 0)

#define BENOFF_BIST_SEED_FLD_rg_bist_prbs_init_seed_benoff     REG_FLD(31, 0)

#define PWR_PLL_CTRL_FLD_rg_pll_pwr_seq_sel                    REG_FLD(1, 0)

#define xpon_tx_rate_ctrl_FLD_rg_pon_tx_rate_ctrl              REG_FLD(2, 0)

#define BENOFF_DATA0_FLD_rg_benoff_d0                          REG_FLD(32, 0)

#define BENOFF_DATA1_FLD_rg_benoff_d1                          REG_FLD(32, 0)

#define BENOFF_DATA2_FLD_rg_benoff_d2                          REG_FLD(32, 0)

#define BENOFF_DATA3_FLD_rg_benoff_d3                          REG_FLD(32, 0)

#define BENOFF_CTRL_FLD_rg_benoff_catch_mem_en                 REG_FLD(1, 8)
#define BENOFF_CTRL_FLD_rg_benoff_cnt_max                      REG_FLD(3, 0)

#define HS_DATA_EN_SEL_FLD_rg_hsdata_en_sel                    REG_FLD(3, 0)

#define FIFO_CK_STATUS_FLD_ro_tx_rdfifo_depth                  REG_FLD(6, 24)
#define FIFO_CK_STATUS_FLD_ro_tx_wrfifo_depth                  REG_FLD(6, 15)
#define FIFO_CK_STATUS_FLD_ro_rx_rdfifo_depth                  REG_FLD(7, 8)
#define FIFO_CK_STATUS_FLD_ro_rx_wrfifo_depth                  REG_FLD(7, 0)

#define TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new           REG_FLD(8, 8)
#define TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new                REG_FLD(8, 0)

#define TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch             REG_FLD(1, 31)
#define TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel               REG_FLD(1, 24)
#define TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org           REG_FLD(20, 0)

#define MD32_ISR_CTRL_FLD_rg_md32_sfp_rx_loss_inv              REG_FLD(32, 0)

#define MD32_MEM_CLK_CTRL_FLD_rg_md32pm_ck_sel                 REG_FLD(32, 0)

#define MD32_MEM_CLK_CG_CTRL_FLD_rg_force_md32d_ck_g           REG_FLD(32, 0)

#define XG_EQD_STA_FLD_ro_xg_psync_to_sof_delay_lch            REG_FLD(32, 0)

#define XG_EQD_CTRL_FLD_rg_xg_mask_window                      REG_FLD(16, 16)
#define XG_EQD_CTRL_FLD_rg_xg_eqd_rst_n                        REG_FLD(1, 0)

#define RAWDATA_DUMP_CTRL_0_FLD_rg_rawdata_tx_en               REG_FLD(32, 0)

#define RAWDATA_DUMP_CTRL_1_FLD_rg_rawdata_tx_wdata_sel        REG_FLD(32, 0)

#define RAWDATA_DUMP_CTRL_2_FLD_rg_rawdata_mem_sel             REG_FLD(32, 0)

#define RAWDATA_DUMP_CTRL_3_FLD_rg_rawdata_tx_start_sel        REG_FLD(32, 0)

#define RAWDATA_DUMP_STA_0_FLD_ro_rawdata_tx_waddr             REG_FLD(32, 0)

#define RAWDATA_DUMP_STA_1_FLD_ro_rawdata_rx_waddr             REG_FLD(32, 0)

#define RAWDATA_DUMP_STA_2_FLD_ro_rawdata_tx_full              REG_FLD(32, 0)

#define MD32MEM_DIV2_CNT_FLD_rg_md32_mem_max                   REG_FLD(32, 0)

#define AD_XPON_CDR_LPF_SV_FLD_AD_XPON_CDR_LPF_SNAPSHOTVALUE   REG_FLD(19, 0)

#define K_VALUE_RD_FLD_ro_dta_xpon_tx_termp_sel                REG_FLD(2, 2)
#define K_VALUE_RD_FLD_ro_dta_xpon_tx_termn_sel                REG_FLD(2, 0)

#define XPONPLL_CTRL_FLD_rg_jcpll_auto_en                      REG_FLD(1, 1)
#define XPONPLL_CTRL_FLD_rg_xponpll_auto_en                    REG_FLD(1, 0)

#define MD32_GATE_HALT_FLD_ro_md32_gated                       REG_FLD(32, 0)

#define MD32_MONCCNT_FLD_ro_mon_ccnt                           REG_FLD(32, 0)

#define MD32_MONPCNT0_FLD_ro_mon_pcnt0                         REG_FLD(32, 0)

#define MD32_MONPCNT1_FLD_ro_mon_pcnt1                         REG_FLD(32, 0)

#define MD32_MONPCNT2_FLD_ro_mon_pcnt2                         REG_FLD(32, 0)

#define MD32_MONCONTID_FLD_ro_mon_contid                       REG_FLD(32, 0)

#define MD32_MONPC_FLD_ro_mon_pc                               REG_FLD(32, 0)

#define MD32_TBUF_FLD_ro_mon_tbuf_wptr                         REG_FLD(32, 0)

#define MD32_TBUFWDATA_L_FLD_ro_tbuf_wdata_l                   REG_FLD(32, 0)

#define MD32_TBUFWDATA_H_FLD_ro_tbuf_wdata_h                   REG_FLD(32, 0)

#define MD32_TBUFRDATA_L_FLD_ro_tbuf_rdata_l                   REG_FLD(32, 0)

#define MD32_TBUFRDATA_H_FLD_ro_tbuf_rdata_h                   REG_FLD(32, 0)

#define ADDR_MD32_PMEM_ADDR_REV_FLD_rg_addr_md32_pmem_addr     REG_FLD(32, 0)

#define ADDR_MD32_PMEM_DATA_REV_FLD_rg_addr_md32_pmem_data     REG_FLD(32, 0)

#define ADDR_MD32_DMEM_ADDR_REV_FLD_rg_addr_md32_dmem_addr     REG_FLD(32, 0)

#define ADDR_MD32_DMEM_DATA_REV_FLD_rg_addr_md32_dmem_data     REG_FLD(32, 0)

#define SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_man_pwdb         REG_FLD(1, 31)
#define SS_JCPLL_PWCTL_SETTING_0_FLD_rg_sw_jcpll_en            REG_FLD(1, 24)
#define SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_en_inv           REG_FLD(1, 16)
#define SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_hw_ctrl_mode     REG_FLD(1, 8)
#define SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_force_on         REG_FLD(1, 0)

#define SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_pcw_man_load_timer REG_FLD(8, 16)
#define SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_en_timer         REG_FLD(16, 0)

#define SS_JCPLL_PWCTL_SETTING_2_FLD_rg_jcpll_ck_stb_timer     REG_FLD(21, 0)

#define JCPLL_CHG_FLD_rg_jcpll_tdc_dig_pwdb                    REG_FLD(1, 24)
#define JCPLL_CHG_FLD_rg_jcpll_ledck_div                       REG_FLD(4, 16)
#define JCPLL_CHG_FLD_rg_jcpll_pcw_chg                         REG_FLD(1, 0)

#define RG_JCPLL_SDM_PCW_CTRL_FLD_rg_jcpll_sdm_pcw             REG_FLD(31, 0)

#define RG_JCPLL_SDM_PCW_CHG_CTRL_FLD_rg_jcpll_sdm_pcw_chg     REG_FLD(1, 0)

#define PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_unlock_cyclecnt REG_FLD(16, 16)
#define PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_lock_cyclecnt   REG_FLD(16, 0)

#define PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_end REG_FLD(16, 16)
#define PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_beg REG_FLD(16, 0)

#define PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_end REG_FLD(16, 16)
#define PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_beg REG_FLD(16, 0)

#define PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_wait_100us      REG_FLD(8, 16)
#define PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_unlockth        REG_FLD(4, 12)
#define PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_lockth     REG_FLD(4, 8)
#define PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_cnt_clear  REG_FLD(1, 4)
#define PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_freqlock_det_en REG_FLD(3, 0)

#define JCPLL_FT_CK_MUX_FLD_rg_jcpll_ft_ck_mux                 REG_FLD(1, 0)

#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_man_pwdb       REG_FLD(1, 31)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_digtcl_dac_en_force_on REG_FLD(1, 21)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_chpup_en_force_on      REG_FLD(1, 20)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_ldochp_en_force_on     REG_FLD(1, 19)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_load_force_on    REG_FLD(1, 18)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_en_force_on      REG_FLD(1, 17)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_xfi_xtalck_cgm_en_force_on   REG_FLD(1, 16)
#define JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_hw_timer       REG_FLD(16, 0)

#define JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_digtcl_dac_en_inv      REG_FLD(1, 5)
#define JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_chpup_en_inv           REG_FLD(1, 4)
#define JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_ldochp_en_inv          REG_FLD(1, 3)
#define JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_load_inv         REG_FLD(1, 2)
#define JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_en_inv           REG_FLD(1, 1)
#define JCPLL_DA_RG_CTRL_1_FLD_rg_xfi_xtalck_cgm_en_inv        REG_FLD(1, 0)

#define JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_digtcl_dac_en_hw_mode  REG_FLD(1, 5)
#define JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_chpup_en_hw_mode       REG_FLD(1, 4)
#define JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_ldochp_en_hw_mode      REG_FLD(1, 3)
#define JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_load_hw_mode     REG_FLD(1, 2)
#define JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_en_hw_mode       REG_FLD(1, 1)
#define JCPLL_DA_RG_CTRL_2_FLD_rg_xfi_xtalck_cgm_en_hw_mode    REG_FLD(1, 0)

#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_phyck_rstb_inv      REG_FLD(1, 8)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_tx_en_inv              REG_FLD(1, 7)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rxpll1_refck_pwdb_inv  REG_FLD(1, 6)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vcm_sel_inv      REG_FLD(1, 5)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq3_en_inv    REG_FLD(1, 4)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq2_en_inv    REG_FLD(1, 3)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq1_en_inv    REG_FLD(1, 2)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_cdr_pd_edge_dis_inv    REG_FLD(1, 1)
#define XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_clkpath_ldo_en_inv     REG_FLD(1, 0)

#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_phyck_rstb_hw_mode  REG_FLD(1, 9)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_tx_en_hw_mode          REG_FLD(1, 8)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rxpll1_refck_pwdb_hw_mode REG_FLD(1, 7)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_sel_hw_mode  REG_FLD(1, 6)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode REG_FLD(1, 5)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq3_en_hw_mode REG_FLD(1, 4)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq2_en_hw_mode REG_FLD(1, 3)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq1_en_hw_mode REG_FLD(1, 2)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_cdr_pd_edge_dis_hw_mode REG_FLD(1, 1)
#define XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_clkpath_ldo_en_hw_mode REG_FLD(1, 0)

#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_phyck_rstb_force_on REG_FLD(1, 9)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_tx_en_force_on         REG_FLD(1, 8)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rxpll1_refck_pwdb_force_on REG_FLD(1, 7)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_sel_force_on REG_FLD(1, 6)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_force_on REG_FLD(1, 5)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq3_en_force_on REG_FLD(1, 4)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq2_en_force_on REG_FLD(1, 3)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq1_en_force_on REG_FLD(1, 2)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_cdr_pd_edge_dis_force_on REG_FLD(1, 1)
#define XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_clkpath_ldo_en_force_on REG_FLD(1, 0)

#define AD_DA_PROBE_STS_0_FLD_ro_jcpll_sdm_scan_out            REG_FLD(1, 24)
#define AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_d                   REG_FLD(8, 16)
#define AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_c                   REG_FLD(8, 8)
#define AD_DA_PROBE_STS_0_FLD_ro_ipath_gaindiv                 REG_FLD(4, 0)

#define AD_DA_PROBE_STS_1_FLD_ro_ipath_ctrl                    REG_FLD(24, 0)

#define JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_enable           REG_FLD(1, 3)
#define JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_cg_scan_enable        REG_FLD(1, 2)
#define JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_rstb             REG_FLD(1, 1)
#define JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_mode             REG_FLD(1, 0)

#define XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel1                    REG_FLD(8, 8)
#define XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel0                    REG_FLD(8, 0)

#define TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock           REG_FLD(1, 25)
#define TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock_en        REG_FLD(1, 24)
#define TX_PAR_PROBE_PLL_CTRL_FLD_rg_pmatop_probe_sel          REG_FLD(5, 16)

#define DUMP_RX_PCSRST_CTRL_FLD_rg_xfi_pcs_tx_rst_en           REG_FLD(1, 17)
#define DUMP_RX_PCSRST_CTRL_FLD_rg_r2t_asic_used_ff            REG_FLD(1, 9)
#define DUMP_RX_PCSRST_CTRL_FLD_rg_rx_asic_used_ff             REG_FLD(1, 8)

#define XFI_TX_FIFO_STS_FLD_ro_xfi_tx_fifo_status              REG_FLD(32, 0)

#define JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_inv            REG_FLD(1, 16)
#define JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_hw_mode        REG_FLD(1, 8)
#define JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_force_on       REG_FLD(1, 0)

#define RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fl_out                 REG_FLD(16, 16)
#define RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_state_freqdet          REG_FLD(2, 8)
#define RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_lslock_cnt             REG_FLD(4, 4)
#define RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock_inner        REG_FLD(1, 1)
#define RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock              REG_FLD(1, 0)

#define RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fl_out             REG_FLD(16, 16)
#define RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_state_freqdet      REG_FLD(2, 8)
#define RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_lslock_cnt         REG_FLD(4, 4)
#define RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock_inner    REG_FLD(1, 1)
#define RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock          REG_FLD(1, 0)

#define RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fl_out         REG_FLD(16, 16)
#define RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_state_freqdet  REG_FLD(2, 8)
#define RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_lslock_cnt     REG_FLD(4, 4)
#define RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock_inner REG_FLD(1, 1)
#define RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock      REG_FLD(1, 0)

#define RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_unlock_cyclecnt REG_FLD(16, 16)
#define RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_lock_cyclecnt REG_FLD(16, 0)

#define RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_end REG_FLD(16, 16)
#define RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_beg REG_FLD(16, 0)

#define RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_end REG_FLD(16, 16)
#define RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_beg REG_FLD(16, 0)

#define RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_wait_100us  REG_FLD(8, 16)
#define RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_unlockth    REG_FLD(4, 12)
#define RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_lockth REG_FLD(4, 8)
#define RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_cnt_clear REG_FLD(1, 4)
#define RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_freqlock_det_en REG_FLD(3, 0)

#define rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_sel_da_pxp_rx_fe_peaking_ctrl REG_FLD(1, 24)
#define rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_da_pxp_rx_fe_peaking_ctrl REG_FLD(4, 16)
#define rg_da_pxp_jcpll_sdm_scan_FLD_rg_sel_da_pxp_jcpll_sdm_scan REG_FLD(1, 8)
#define rg_da_pxp_jcpll_sdm_scan_FLD_rg_da_pxp_jcpll_sdm_scan  REG_FLD(1, 0)

#define rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_rx_osr_sel REG_FLD(1, 24)
#define rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_rx_osr_sel REG_FLD(2, 16)
#define rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_aeq_speed REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_aeq_speed REG_FLD(3, 0)

#define rg_force_da_pxp_aeq_mode_FLD_rg_force_sel_da_pxp_aeq_mode REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_mode_FLD_rg_force_da_pxp_aeq_mode  REG_FLD(3, 0)

#define rg_force_da_pxp_tx_data_ben_FLD_rg_force_sel_da_pxp_tx_data_ben REG_FLD(1, 16)
#define rg_force_da_pxp_tx_data_ben_FLD_rg_force_da_pxp_tx_data_ben REG_FLD(16, 0)

#define rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_cn1 REG_FLD(1, 24)
#define rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_cn1 REG_FLD(5, 16)
#define rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_c0b REG_FLD(1, 8)
#define rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_c0b REG_FLD(6, 0)

#define rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_ckin_divisor REG_FLD(1, 24)
#define rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_ckin_divisor REG_FLD(4, 16)
#define rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_term_sel REG_FLD(1, 8)
#define rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_term_sel REG_FLD(3, 0)

#define rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c2 REG_FLD(1, 24)
#define rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c2 REG_FLD(3, 16)
#define rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c1 REG_FLD(1, 8)
#define rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c1 REG_FLD(5, 0)

#define rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_cdr_pr_pieye REG_FLD(1, 24)
#define rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_cdr_pr_pieye REG_FLD(7, 16)
#define rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_tx_rate_ctrl REG_FLD(1, 8)
#define rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_tx_rate_ctrl REG_FLD(2, 0)

#define rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d1 REG_FLD(1, 24)
#define rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d1 REG_FLD(7, 16)
#define rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d0 REG_FLD(1, 8)
#define rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d0 REG_FLD(7, 0)

#define rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e1 REG_FLD(1, 24)
#define rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e1 REG_FLD(7, 16)
#define rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e0 REG_FLD(1, 8)
#define rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e0 REG_FLD(7, 0)

#define rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_rx_dac_eye REG_FLD(1, 24)
#define rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_rx_dac_eye REG_FLD(7, 16)
#define rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_cdr_pr_fll_cor REG_FLD(1, 8)
#define rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_cdr_pr_fll_cor REG_FLD(5, 0)

#define rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw REG_FLD(1, 24)
#define rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_cdr_pr_idac REG_FLD(1, 16)
#define rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_da_pxp_cdr_pr_idac REG_FLD(11, 0)

#define rg_force_da_pxp_txpll_sdm_pcw_FLD_rg_force_da_pxp_txpll_sdm_pcw REG_FLD(31, 0)

#define rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw REG_FLD(1, 16)
#define rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_rx_fe_vos REG_FLD(1, 8)
#define rg_force_da_pxp_rx_fe_vos_FLD_rg_force_da_pxp_rx_fe_vos REG_FLD(6, 0)

#define rg_force_da_pxp_jcpll_sdm_pcw_FLD_rg_force_da_pxp_jcpll_sdm_pcw REG_FLD(31, 0)

#define rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx1_en REG_FLD(1, 24)
#define rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx1_en REG_FLD(1, 16)
#define rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx0_en REG_FLD(1, 8)
#define rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx0_en REG_FLD(1, 0)

#define rg_force_da_pxp_aeq_en_FLD_rg_force_sel_da_pxp_aeq_en  REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_en_FLD_rg_force_da_pxp_aeq_en      REG_FLD(1, 0)

#define rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_ckon REG_FLD(1, 24)
#define rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_ckon REG_FLD(1, 16)
#define rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_bypass REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_bypass REG_FLD(1, 0)

#define rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_invldreq REG_FLD(1, 24)
#define rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_invldreq REG_FLD(1, 16)
#define rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_inprgrss REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_inprgrss REG_FLD(1, 0)

#define rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_cdr_injck_sel REG_FLD(1, 24)
#define rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_cdr_injck_sel REG_FLD(1, 16)
#define rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_aeq_rstb REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_aeq_rstb  REG_FLD(1, 0)

#define rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_rstb REG_FLD(1, 24)
#define rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_rstb REG_FLD(1, 16)
#define rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_lck2data REG_FLD(1, 8)
#define rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_lck2data REG_FLD(1, 0)

#define rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_kband_rstb REG_FLD(1, 24)
#define rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pr_kband_rstb REG_FLD(1, 16)
#define rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pd_pwdb REG_FLD(1, 8)
#define rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pd_pwdb REG_FLD(1, 0)

#define rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_r_en REG_FLD(1, 24)
#define rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_r_en REG_FLD(1, 16)
#define rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_c_en REG_FLD(1, 8)
#define rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_c_en REG_FLD(1, 0)

#define rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pwdb REG_FLD(1, 24)
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pwdb REG_FLD(1, 16)
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb REG_FLD(1, 8)
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pieye_pwdb REG_FLD(1, 0)

#define rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_en REG_FLD(1, 24)
#define rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_en REG_FLD(1, 16)
#define rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_ckout_en REG_FLD(1, 8)
#define rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_ckout_en REG_FLD(1, 0)

#define rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg REG_FLD(1, 24)
#define rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en_cg REG_FLD(1, 16)
#define rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en REG_FLD(1, 8)
#define rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en REG_FLD(1, 0)

#define rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_rstb REG_FLD(1, 24)
#define rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_rstb REG_FLD(1, 16)
#define rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_in REG_FLD(1, 8)
#define rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_in REG_FLD(1, 0)

#define rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en REG_FLD(1, 24)
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en REG_FLD(1, 16)
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg REG_FLD(1, 8)
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_pcw_chg REG_FLD(1, 0)

#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_in REG_FLD(1, 24)
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_in REG_FLD(1, 16)
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg REG_FLD(1, 8)
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en_cg REG_FLD(1, 0)

#define rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_rx_oscal_ckon REG_FLD(1, 24)
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_rx_oscal_ckon REG_FLD(1, 16)
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb REG_FLD(1, 8)
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_jcpll_sdm_scan_rstb REG_FLD(1, 0)

#define rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_rstb REG_FLD(1, 24)
#define rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_rstb REG_FLD(1, 16)
#define rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_en REG_FLD(1, 8)
#define rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_en REG_FLD(1, 0)

#define rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable_cg REG_FLD(1, 24)
#define rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable_cg REG_FLD(1, 16)
#define rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable REG_FLD(1, 8)
#define rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable REG_FLD(1, 0)

#define rg_force_da_pxp_rx_scan_in_FLD_rg_sel_da_pxp_rx_scan   REG_FLD(1, 24)
#define rg_force_da_pxp_rx_scan_in_FLD_rg_da_pxp_rx_scan       REG_FLD(1, 16)
#define rg_force_da_pxp_rx_scan_in_FLD_rg_force_sel_da_pxp_rx_scan_in REG_FLD(1, 8)
#define rg_force_da_pxp_rx_scan_in_FLD_rg_force_da_pxp_rx_scan_in REG_FLD(1, 0)

#define rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_sigdet_pwdb REG_FLD(1, 24)
#define rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_sigdet_pwdb REG_FLD(1, 16)
#define rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_scan_rst_b REG_FLD(1, 8)
#define rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_scan_rst_b REG_FLD(1, 0)

#define rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_offset REG_FLD(1, 24)
#define rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_offset REG_FLD(1, 16)
#define rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_bw REG_FLD(1, 8)
#define rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_bw REG_FLD(1, 0)

#define rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_en REG_FLD(1, 24)
#define rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_en REG_FLD(1, 16)
#define rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_ckout_en REG_FLD(1, 8)
#define rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_ckout_en REG_FLD(1, 0)

#define rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_scan_en REG_FLD(1, 24)
#define rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_scan_en REG_FLD(1, 16)
#define rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_kband_load_en REG_FLD(1, 8)
#define rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_load_en REG_FLD(1, 0)

#define rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_in REG_FLD(1, 24)
#define rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_in REG_FLD(1, 16)
#define rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_en_cg REG_FLD(1, 8)
#define rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_en_cg REG_FLD(1, 0)

#define rg_da_pxp_txpll_kband_scan_FLD_rg_force_sel_da_pxp_txpll_kband_scan_rstb REG_FLD(1, 24)
#define rg_da_pxp_txpll_kband_scan_FLD_rg_force_da_pxp_txpll_kband_scan_rstb REG_FLD(1, 16)
#define rg_da_pxp_txpll_kband_scan_FLD_rg_sel_da_pxp_txpll_kband_scan REG_FLD(1, 8)
#define rg_da_pxp_txpll_kband_scan_FLD_rg_da_pxp_txpll_kband_scan REG_FLD(1, 0)

#define rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en REG_FLD(1, 24)
#define rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_scan_en REG_FLD(1, 16)
#define rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw_chg REG_FLD(1, 8)
#define rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_pcw_chg REG_FLD(1, 0)

#define rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_in REG_FLD(1, 24)
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_in REG_FLD(1, 16)
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg REG_FLD(1, 8)
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_en_cg REG_FLD(1, 0)

#define rg_da_pxp_txpll_sdm_scan_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_rstb REG_FLD(1, 24)
#define rg_da_pxp_txpll_sdm_scan_FLD_rg_force_da_pxp_txpll_sdm_scan_rstb REG_FLD(1, 16)
#define rg_da_pxp_txpll_sdm_scan_FLD_rg_sel_da_pxp_txpll_sdm_scan REG_FLD(1, 8)
#define rg_da_pxp_txpll_sdm_scan_FLD_rg_da_pxp_txpll_sdm_scan  REG_FLD(1, 0)

#define rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dp REG_FLD(1, 24)
#define rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dp REG_FLD(1, 16)
#define rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dn REG_FLD(1, 8)
#define rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dn REG_FLD(1, 0)

#define rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_ckin_sel REG_FLD(1, 24)
#define rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_ckin_sel REG_FLD(1, 16)
#define rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_acjtag_en REG_FLD(1, 8)
#define rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_acjtag_en REG_FLD(1, 0)

#define rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_cm_en REG_FLD(1, 24)
#define rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_cm_en  REG_FLD(1, 16)
#define rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_ck_en REG_FLD(1, 8)
#define rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_ck_en  REG_FLD(1, 0)

#define rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_data_en REG_FLD(1, 24)
#define rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_data_en REG_FLD(1, 16)
#define rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_hsdata_en REG_FLD(1, 8)
#define rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_hsdata_en REG_FLD(1, 0)

#define rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_termp_clean REG_FLD(1, 24)
#define rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_termp_clean REG_FLD(1, 16)
#define rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_rxdet_en REG_FLD(1, 8)
#define rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_rxdet_en REG_FLD(1, 0)

#define scan_mode_FLD_rg_force_sel_da_pxp_jcpll_kband_load_en  REG_FLD(1, 8)
#define scan_mode_FLD_rg_force_da_pxp_jcpll_kband_load_en      REG_FLD(1, 0)

#define rg_da_pxp_jcpll_kband_scan_FLD_rg_force_sel_da_pxp_tx_termcal_en REG_FLD(1, 24)
#define rg_da_pxp_jcpll_kband_scan_FLD_rg_force_da_pxp_tx_termcal_en REG_FLD(1, 16)
#define rg_da_pxp_jcpll_kband_scan_FLD_rg_sel_da_pxp_jcpll_kband_scan REG_FLD(1, 8)
#define rg_da_pxp_jcpll_kband_scan_FLD_rg_da_pxp_jcpll_kband_scan REG_FLD(1, 0)

#define rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_sigdet_os REG_FLD(1, 24)
#define rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_sigdet_os REG_FLD(5, 16)
#define rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_fe_gain_ctrl REG_FLD(1, 8)
#define rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_fe_gain_ctrl REG_FLD(2, 0)

#define rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rxeqeval REG_FLD(1, 24)
#define rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rxeqeval REG_FLD(1, 16)
#define rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rmtxskip REG_FLD(1, 8)
#define rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rmtxskip REG_FLD(1, 0)

#define rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_pdoscal_en REG_FLD(1, 24)
#define rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_pdoscal_en REG_FLD(1, 16)
#define rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_fe_pwdb REG_FLD(1, 8)
#define rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_fe_pwdb REG_FLD(1, 0)

#define rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_tdc_en REG_FLD(1, 24)
#define rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_tdc_en REG_FLD(1, 16)
#define rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_rx_sigdet_cal_en REG_FLD(1, 8)
#define rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_rx_sigdet_cal_en REG_FLD(1, 0)

#define ADD_DIG_RESERVE_5_FLD_rg_dig_reserve_5                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_6_FLD_rg_dig_reserve_6                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_7_FLD_rg_dig_reserve_7                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_8_FLD_rg_dig_reserve_8                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_9_FLD_rg_dig_reserve_9                 REG_FLD(32, 0)

#define ADD_DIG_RESERVE_10_FLD_rg_dig_reserve_10               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_11_FLD_rg_dig_reserve_11               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_12_FLD_rg_dig_reserve_12               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_13_FLD_rg_dig_reserve_13               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_14_FLD_rg_dig_reserve_14               REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_5_FLD_ro_dig_reserve_5              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_6_FLD_ro_dig_reserve_6              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_7_FLD_ro_dig_reserve_7              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_8_FLD_ro_dig_reserve_8              REG_FLD(32, 0)

#define ADD_DIG_RO_RESERVE_9_FLD_ro_dig_reserve_9              REG_FLD(32, 0)

#define ADD_DIG_RESERVE_15_FLD_rg_dig_reserve_15               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_16_FLD_rg_dig_reserve_16               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_17_FLD_rg_dig_reserve_17               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_18_FLD_rg_dig_reserve_18               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_19_FLD_rg_dig_reserve_19               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_20_FLD_rg_dig_reserve_20               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_21_FLD_rg_dig_reserve_21               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_22_FLD_rg_dig_reserve_22               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_23_FLD_rg_dig_reserve_23               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_24_FLD_rg_dig_reserve_24               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_25_FLD_rg_dig_reserve_25               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_26_FLD_rg_dig_reserve_26               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_27_FLD_rg_dig_reserve_27               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_28_FLD_rg_dig_reserve_28               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_29_FLD_rg_dig_reserve_29               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_30_FLD_rg_dig_reserve_30               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_31_FLD_rg_dig_reserve_31               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_32_FLD_rg_dig_reserve_32               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_33_FLD_rg_dig_reserve_33               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_34_FLD_rg_dig_reserve_34               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_35_FLD_rg_dig_reserve_35               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_36_FLD_rg_dig_reserve_36               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_37_FLD_rg_dig_reserve_37               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_38_FLD_rg_dig_reserve_38               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_39_FLD_rg_dig_reserve_39               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_40_FLD_rg_dig_reserve_40               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_41_FLD_rg_dig_reserve_41               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_42_FLD_rg_dig_reserve_42               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_43_FLD_rg_dig_reserve_43               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_44_FLD_rg_dig_reserve_44               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_45_FLD_rg_dig_reserve_45               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_46_FLD_rg_dig_reserve_46               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_47_FLD_rg_dig_reserve_47               REG_FLD(32, 0)

#define ADD_DIG_RESERVE_48_FLD_rg_dig_reserve_48               REG_FLD(32, 0)

#define BEN_CTRL_0_FLD_rg_da_ben_force_value                   REG_FLD(16, 16)
#define BEN_CTRL_0_FLD_rg_ad_ben_keep_time_clr                 REG_FLD(1, 7)
#define BEN_CTRL_0_FLD_rg_ad_ben_alarm_times_clr               REG_FLD(1, 6)
#define BEN_CTRL_0_FLD_rg_ad_ben_alarm_clr                     REG_FLD(1, 5)
#define BEN_CTRL_0_FLD_rg_ad_ben_alarm_en                      REG_FLD(1, 4)
#define BEN_CTRL_0_FLD_rg_ad_ben_cnt_clr                       REG_FLD(1, 2)
#define BEN_CTRL_0_FLD_rg_ad_ben_stop_cnt                      REG_FLD(1, 1)
#define BEN_CTRL_0_FLD_rg_da_ben_force_mode                    REG_FLD(1, 0)

#define BEN_CTRL_1_FLD_rg_ad_ben_alarm_thr                     REG_FLD(32, 0)

#define BEN_STS_0_FLD_ro_ad_ben_cnt                            REG_FLD(32, 0)

#define BEN_STS_1_FLD_ro_ad_ben_alarm                          REG_FLD(1, 1)
#define BEN_STS_1_FLD_ro_ad_ben_out                            REG_FLD(1, 0)

#define BEN_STS_2_FLD_ro_ad_ben_alarm_times                    REG_FLD(32, 0)

#define BEN_STS_3_FLD_ro_ad_ben_keep_max                       REG_FLD(32, 0)

#define TX_SD_CTRL_0_FLD_rg_tx_sd_keep_time_clr                REG_FLD(1, 7)
#define TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_times_clr              REG_FLD(1, 6)
#define TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_clr                    REG_FLD(1, 5)
#define TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_en                     REG_FLD(1, 4)
#define TX_SD_CTRL_0_FLD_rg_tx_sd_cnt_clr                      REG_FLD(1, 2)
#define TX_SD_CTRL_0_FLD_rg_tx_sd_stop_cnt                     REG_FLD(1, 1)
#define TX_SD_CTRL_0_FLD_rg_tx_sd_inv                          REG_FLD(1, 0)

#define TX_SD_CTRL_1_FLD_rg_tx_sd_alarm_thr                    REG_FLD(32, 0)

#define TX_SD_STS_0_FLD_ro_tx_sd_cnt                           REG_FLD(32, 0)

#define TX_SD_STS_1_FLD_ro_tx_sd_alarm                         REG_FLD(1, 1)
#define TX_SD_STS_1_FLD_ro_tx_sd_out                           REG_FLD(1, 0)

#define TX_SD_STS_2_FLD_ro_tx_sd_alarm_times                   REG_FLD(32, 0)

#define TX_SD_STS_3_FLD_ro_tx_sd_keep_max                      REG_FLD(32, 0)

#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_sw_lcpll_en(reg32)     REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_lcpll_en_inv(reg32)    REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_lcpll_hw_ctrl_mode(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode, (reg32))
#define SS_LCPLL_PWCTL_SETTING_0_GET_rg_lcpll_force_on(reg32)  REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on, (reg32))

#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_ck_stb_timer(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer, (reg32))
#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_pcw_man_load_timer(reg32) REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer, (reg32))
#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_en_timer(reg32)  REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer, (reg32))
#define SS_LCPLL_PWCTL_SETTING_1_GET_rg_lcpll_man_pwdb(reg32)  REG_FLD_GET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb, (reg32))

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

#define RX_EYE_TOP_EYEINDEX_CTRL_0_GET_rg_x_max(reg32)         REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_max, (reg32))
#define RX_EYE_TOP_EYEINDEX_CTRL_0_GET_rg_x_min(reg32)         REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_min, (reg32))

#define RX_EYE_TOP_EYEINDEX_CTRL_1_GET_rg_index_mode(reg32)    REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_index_mode, (reg32))
#define RX_EYE_TOP_EYEINDEX_CTRL_1_GET_rg_y_max(reg32)         REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_max, (reg32))
#define RX_EYE_TOP_EYEINDEX_CTRL_1_GET_rg_y_min(reg32)         REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_min, (reg32))

#define RX_EYE_TOP_EYEINDEX_CTRL_2_GET_rg_eyedur(reg32)        REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_2_FLD_rg_eyedur, (reg32))

#define RX_EYE_TOP_EYEINDEX_CTRL_3_GET_rg_eye_nextpts(reg32)   REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts, (reg32))
#define RX_EYE_TOP_EYEINDEX_CTRL_3_GET_rg_eye_nextpts_toggle(reg32) REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_toggle, (reg32))
#define RX_EYE_TOP_EYEINDEX_CTRL_3_GET_rg_eye_nextpts_sel(reg32) REG_FLD_GET(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_sel, (reg32))

#define RX_EYE_TOP_EYEOPENING_CTRL_0_GET_rg_eyecnt_vth(reg32)  REG_FLD_GET(RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_vth, (reg32))
#define RX_EYE_TOP_EYEOPENING_CTRL_0_GET_rg_eyecnt_hth(reg32)  REG_FLD_GET(RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_hth, (reg32))

#define RX_EYE_TOP_EYEOPENING_CTRL_1_GET_rg_eo_vth(reg32)      REG_FLD_GET(RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_vth, (reg32))
#define RX_EYE_TOP_EYEOPENING_CTRL_1_GET_rg_eo_hth(reg32)      REG_FLD_GET(RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_hth, (reg32))

#define RX_EYE_TOP_EYECNT_CTRL_0_GET_rg_eye_mask(reg32)        REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_eye_mask, (reg32))
#define RX_EYE_TOP_EYECNT_CTRL_0_GET_rg_cntforever(reg32)      REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntforever, (reg32))
#define RX_EYE_TOP_EYECNT_CTRL_0_GET_rg_cntlen(reg32)          REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntlen, (reg32))

#define RX_EYE_TOP_EYECNT_CTRL_1_GET_rg_force_eyedur_init_b(reg32) REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_init_b, (reg32))
#define RX_EYE_TOP_EYECNT_CTRL_1_GET_rg_force_eyedur_en(reg32) REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_en, (reg32))
#define RX_EYE_TOP_EYECNT_CTRL_1_GET_rg_disb_eyedur_init_b(reg32) REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_init_b, (reg32))
#define RX_EYE_TOP_EYECNT_CTRL_1_GET_rg_disb_eyedur_en(reg32)  REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_en, (reg32))

#define RX_EYE_TOP_EYECNT_CTRL_2_GET_rg_data_shift(reg32)      REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_data_shift, (reg32))
#define RX_EYE_TOP_EYECNT_CTRL_2_GET_rg_eyecnt_fast(reg32)     REG_FLD_GET(RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_eyecnt_fast, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_0_GET_rg_rx_os_start(reg32)      REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_rx_os_start, (reg32))
#define RX_CTRL_SEQUENCE_CTRL_0_GET_rg_osc_speed_opt(reg32)    REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_osc_speed_opt, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_1_GET_rg_rx_pical_end(reg32)     REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_end, (reg32))
#define RX_CTRL_SEQUENCE_CTRL_1_GET_rg_rx_pical_start(reg32)   REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_start, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_2_GET_rg_rx_pdos_end(reg32)      REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_end, (reg32))
#define RX_CTRL_SEQUENCE_CTRL_2_GET_rg_rx_pdos_start(reg32)    REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_start, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_3_GET_rg_rx_feos_end(reg32)      REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_end, (reg32))
#define RX_CTRL_SEQUENCE_CTRL_3_GET_rg_rx_feos_start(reg32)    REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_start, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_4_GET_rg_rx_sdcal_end(reg32)     REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_end, (reg32))
#define RX_CTRL_SEQUENCE_CTRL_4_GET_rg_rx_sdcal_start(reg32)   REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_start, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_5_GET_rg_rx_rdy(reg32)           REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_rdy, (reg32))
#define RX_CTRL_SEQUENCE_CTRL_5_GET_rg_rx_blwc_rdy_en(reg32)   REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_blwc_rdy_en, (reg32))

#define RX_CTRL_SEQUENCE_CTRL_6_GET_rg_rx_os_end(reg32)        REG_FLD_GET(RX_CTRL_SEQUENCE_CTRL_6_FLD_rg_rx_os_end, (reg32))

#define RX_CTRL_SEQUENCE_DISB_CTRL_0_GET_rg_disb_rx_feos_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_feos_en, (reg32))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_GET_rg_disb_rx_pdos_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pdos_en, (reg32))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_GET_rg_disb_rx_pical_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pical_en, (reg32))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_GET_rg_disb_rx_os_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_os_en, (reg32))

#define RX_CTRL_SEQUENCE_DISB_CTRL_1_GET_rg_disb_rx_rdy(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_rdy, (reg32))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_GET_rg_disb_rx_blwc_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_blwc_en, (reg32))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_GET_rg_disb_rx_os_rdy(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_os_rdy, (reg32))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_GET_rg_disb_rx_sdcal_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_sdcal_en, (reg32))

#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_GET_rg_force_rx_feos_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_feos_en, (reg32))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_GET_rg_force_rx_pdos_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pdos_en, (reg32))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_GET_rg_force_rx_pical_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pical_en, (reg32))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_GET_rg_force_rx_os_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_os_en, (reg32))

#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_GET_rg_force_rx_rdy(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_rdy, (reg32))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_GET_rg_force_rx_blwc_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_blwc_en, (reg32))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_GET_rg_force_rx_os_rdy(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_os_rdy, (reg32))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_GET_rg_force_rx_sdcal_en(reg32) REG_FLD_GET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_sdcal_en, (reg32))

#define PHY_EQ_CTRL_0_GET_rg_veo_mask(reg32)                   REG_FLD_GET(PHY_EQ_CTRL_0_FLD_rg_veo_mask, (reg32))
#define PHY_EQ_CTRL_0_GET_rg_heo_mask(reg32)                   REG_FLD_GET(PHY_EQ_CTRL_0_FLD_rg_heo_mask, (reg32))
#define PHY_EQ_CTRL_0_GET_rg_eq_en_delay(reg32)                REG_FLD_GET(PHY_EQ_CTRL_0_FLD_rg_eq_en_delay, (reg32))

#define PHY_EQ_CTRL_1_GET_rg_b_zero_sel(reg32)                 REG_FLD_GET(PHY_EQ_CTRL_1_FLD_rg_b_zero_sel, (reg32))
#define PHY_EQ_CTRL_1_GET_rg_heo_emphasis(reg32)               REG_FLD_GET(PHY_EQ_CTRL_1_FLD_rg_heo_emphasis, (reg32))
#define PHY_EQ_CTRL_1_GET_rg_a_mgain(reg32)                    REG_FLD_GET(PHY_EQ_CTRL_1_FLD_rg_a_mgain, (reg32))
#define PHY_EQ_CTRL_1_GET_rg_a_lgain(reg32)                    REG_FLD_GET(PHY_EQ_CTRL_1_FLD_rg_a_lgain, (reg32))

#define PHY_EQ_CTRL_2_GET_rg_eq_debug_sel(reg32)               REG_FLD_GET(PHY_EQ_CTRL_2_FLD_rg_eq_debug_sel, (reg32))
#define PHY_EQ_CTRL_2_GET_rg_fom_num_order(reg32)              REG_FLD_GET(PHY_EQ_CTRL_2_FLD_rg_fom_num_order, (reg32))
#define PHY_EQ_CTRL_2_GET_rg_a_sel(reg32)                      REG_FLD_GET(PHY_EQ_CTRL_2_FLD_rg_a_sel, (reg32))

#define PHY_EQ_CTRL_3_GET_rg_fe_gain_ctrl_3(reg32)             REG_FLD_GET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_3, (reg32))
#define PHY_EQ_CTRL_3_GET_rg_fe_gain_ctrl_2(reg32)             REG_FLD_GET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_2, (reg32))
#define PHY_EQ_CTRL_3_GET_rg_fe_gain_ctrl_1(reg32)             REG_FLD_GET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_1, (reg32))
#define PHY_EQ_CTRL_3_GET_rg_fe_gain_ctrl_0(reg32)             REG_FLD_GET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_0, (reg32))

#define PHY_EQ_CTRL_4_GET_rg_fe_gain_ctrl_7(reg32)             REG_FLD_GET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_7, (reg32))
#define PHY_EQ_CTRL_4_GET_rg_fe_gain_ctrl_6(reg32)             REG_FLD_GET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_6, (reg32))
#define PHY_EQ_CTRL_4_GET_rg_fe_gain_ctrl_5(reg32)             REG_FLD_GET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_5, (reg32))
#define PHY_EQ_CTRL_4_GET_rg_fe_gain_ctrl_4(reg32)             REG_FLD_GET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_4, (reg32))

#define PHY_EQ_CTRL_5_GET_rg_fe_gain_ctrl_11(reg32)            REG_FLD_GET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_11, (reg32))
#define PHY_EQ_CTRL_5_GET_rg_fe_gain_ctrl_10(reg32)            REG_FLD_GET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_10, (reg32))
#define PHY_EQ_CTRL_5_GET_rg_fe_gain_ctrl_9(reg32)             REG_FLD_GET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_9, (reg32))
#define PHY_EQ_CTRL_5_GET_rg_fe_gain_ctrl_8(reg32)             REG_FLD_GET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_8, (reg32))

#define PHY_EQ_CTRL_6_GET_rg_fe_gain_ctrl_15(reg32)            REG_FLD_GET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_15, (reg32))
#define PHY_EQ_CTRL_6_GET_rg_fe_gain_ctrl_14(reg32)            REG_FLD_GET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_14, (reg32))
#define PHY_EQ_CTRL_6_GET_rg_fe_gain_ctrl_13(reg32)            REG_FLD_GET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_13, (reg32))
#define PHY_EQ_CTRL_6_GET_rg_fe_gain_ctrl_12(reg32)            REG_FLD_GET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_12, (reg32))

#define PHY_EQ_CTRL_7_GET_rg_fe_peaking_ctrl_3(reg32)          REG_FLD_GET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_3, (reg32))
#define PHY_EQ_CTRL_7_GET_rg_fe_peaking_ctrl_2(reg32)          REG_FLD_GET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_2, (reg32))
#define PHY_EQ_CTRL_7_GET_rg_fe_peaking_ctrl_1(reg32)          REG_FLD_GET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_1, (reg32))
#define PHY_EQ_CTRL_7_GET_rg_fe_peaking_ctrl_0(reg32)          REG_FLD_GET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_0, (reg32))

#define PHY_EQ_CTRL_8_GET_rg_fe_peaking_ctrl_7(reg32)          REG_FLD_GET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_7, (reg32))
#define PHY_EQ_CTRL_8_GET_rg_fe_peaking_ctrl_6(reg32)          REG_FLD_GET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_6, (reg32))
#define PHY_EQ_CTRL_8_GET_rg_fe_peaking_ctrl_5(reg32)          REG_FLD_GET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_5, (reg32))
#define PHY_EQ_CTRL_8_GET_rg_fe_peaking_ctrl_4(reg32)          REG_FLD_GET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_4, (reg32))

#define PHY_EQ_CTRL_9_GET_rg_fe_peaking_ctrl_11(reg32)         REG_FLD_GET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_11, (reg32))
#define PHY_EQ_CTRL_9_GET_rg_fe_peaking_ctrl_10(reg32)         REG_FLD_GET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_10, (reg32))
#define PHY_EQ_CTRL_9_GET_rg_fe_peaking_ctrl_9(reg32)          REG_FLD_GET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_9, (reg32))
#define PHY_EQ_CTRL_9_GET_rg_fe_peaking_ctrl_8(reg32)          REG_FLD_GET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_8, (reg32))

#define PHY_EQ_CTRL_10_GET_rg_fe_peaking_ctrl_15(reg32)        REG_FLD_GET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_15, (reg32))
#define PHY_EQ_CTRL_10_GET_rg_fe_peaking_ctrl_14(reg32)        REG_FLD_GET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_14, (reg32))
#define PHY_EQ_CTRL_10_GET_rg_fe_peaking_ctrl_13(reg32)        REG_FLD_GET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_13, (reg32))
#define PHY_EQ_CTRL_10_GET_rg_fe_peaking_ctrl_12(reg32)        REG_FLD_GET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_12, (reg32))

#define SS_RX_FEOS_GET_rg_eq_force_blwc_freeze(reg32)          REG_FLD_GET(SS_RX_FEOS_FLD_rg_eq_force_blwc_freeze, (reg32))
#define SS_RX_FEOS_GET_rg_lfsel(reg32)                         REG_FLD_GET(SS_RX_FEOS_FLD_rg_lfsel, (reg32))

#define SS_RX_BLWC_GET_rg_eq_blwc_cnt_bot_lim(reg32)           REG_FLD_GET(SS_RX_BLWC_FLD_rg_eq_blwc_cnt_bot_lim, (reg32))
#define SS_RX_BLWC_GET_rg_eq_blwc_cnt_top_lim(reg32)           REG_FLD_GET(SS_RX_BLWC_FLD_rg_eq_blwc_cnt_top_lim, (reg32))
#define SS_RX_BLWC_GET_rg_eq_blwc_gain(reg32)                  REG_FLD_GET(SS_RX_BLWC_FLD_rg_eq_blwc_gain, (reg32))
#define SS_RX_BLWC_GET_rg_eq_blwc_pol(reg32)                   REG_FLD_GET(SS_RX_BLWC_FLD_rg_eq_blwc_pol, (reg32))

#define SS_RX_FREQ_DET_1_GET_rg_unlock_cyclecnt(reg32)         REG_FLD_GET(SS_RX_FREQ_DET_1_FLD_rg_unlock_cyclecnt, (reg32))
#define SS_RX_FREQ_DET_1_GET_rg_lock_cyclecnt(reg32)           REG_FLD_GET(SS_RX_FREQ_DET_1_FLD_rg_lock_cyclecnt, (reg32))

#define SS_RX_FREQ_DET_2_GET_rg_lock_target_end(reg32)         REG_FLD_GET(SS_RX_FREQ_DET_2_FLD_rg_lock_target_end, (reg32))
#define SS_RX_FREQ_DET_2_GET_rg_lock_target_beg(reg32)         REG_FLD_GET(SS_RX_FREQ_DET_2_FLD_rg_lock_target_beg, (reg32))

#define SS_RX_FREQ_DET_3_GET_rg_unlock_target_end(reg32)       REG_FLD_GET(SS_RX_FREQ_DET_3_FLD_rg_unlock_target_end, (reg32))
#define SS_RX_FREQ_DET_3_GET_rg_unlock_target_beg(reg32)       REG_FLD_GET(SS_RX_FREQ_DET_3_FLD_rg_unlock_target_beg, (reg32))

#define SS_RX_FREQ_DET_4_GET_rg_wait_100us(reg32)              REG_FLD_GET(SS_RX_FREQ_DET_4_FLD_rg_wait_100us, (reg32))
#define SS_RX_FREQ_DET_4_GET_rg_unlockth(reg32)                REG_FLD_GET(SS_RX_FREQ_DET_4_FLD_rg_unlockth, (reg32))
#define SS_RX_FREQ_DET_4_GET_rg_lock_lockth(reg32)             REG_FLD_GET(SS_RX_FREQ_DET_4_FLD_rg_lock_lockth, (reg32))
#define SS_RX_FREQ_DET_4_GET_rg_lock_cnt_clear(reg32)          REG_FLD_GET(SS_RX_FREQ_DET_4_FLD_rg_lock_cnt_clear, (reg32))
#define SS_RX_FREQ_DET_4_GET_rg_freqlock_det_en(reg32)         REG_FLD_GET(SS_RX_FREQ_DET_4_FLD_rg_freqlock_det_en, (reg32))

#define SS_RX_PI_CAL_GET_rg_eq_pi_cal_rdy_dly(reg32)           REG_FLD_GET(SS_RX_PI_CAL_FLD_rg_eq_pi_cal_rdy_dly, (reg32))
#define SS_RX_PI_CAL_GET_rg_kpgain(reg32)                      REG_FLD_GET(SS_RX_PI_CAL_FLD_rg_kpgain, (reg32))
#define SS_RX_PI_CAL_GET_rg_cdrlpi(reg32)                      REG_FLD_GET(SS_RX_PI_CAL_FLD_rg_cdrlpi, (reg32))

#define SS_RX_CAL_1_GET_rg_cal_cyc(reg32)                      REG_FLD_GET(SS_RX_CAL_1_FLD_rg_cal_cyc, (reg32))
#define SS_RX_CAL_1_GET_rg_cal_stb(reg32)                      REG_FLD_GET(SS_RX_CAL_1_FLD_rg_cal_stb, (reg32))
#define SS_RX_CAL_1_GET_rg_cal_1us_set(reg32)                  REG_FLD_GET(SS_RX_CAL_1_FLD_rg_cal_1us_set, (reg32))
#define SS_RX_CAL_1_GET_rg_sim_fast_en(reg32)                  REG_FLD_GET(SS_RX_CAL_1_FLD_rg_sim_fast_en, (reg32))

#define SS_RX_CAL_2_GET_rg_cal_cyc_time(reg32)                 REG_FLD_GET(SS_RX_CAL_2_FLD_rg_cal_cyc_time, (reg32))
#define SS_RX_CAL_2_GET_rg_cal_out_os(reg32)                   REG_FLD_GET(SS_RX_CAL_2_FLD_rg_cal_out_os, (reg32))
#define SS_RX_CAL_2_GET_rg_cal_os_pulse(reg32)                 REG_FLD_GET(SS_RX_CAL_2_FLD_rg_cal_os_pulse, (reg32))

#define SS_RX_SIGDET_0_GET_rg_sigdet_win_nonvld_times(reg32)   REG_FLD_GET(SS_RX_SIGDET_0_FLD_rg_sigdet_win_nonvld_times, (reg32))
#define SS_RX_SIGDET_0_GET_rg_sigdet_win_vld_times(reg32)      REG_FLD_GET(SS_RX_SIGDET_0_FLD_rg_sigdet_win_vld_times, (reg32))
#define SS_RX_SIGDET_0_GET_rg_sigdet_vld_times(reg32)          REG_FLD_GET(SS_RX_SIGDET_0_FLD_rg_sigdet_vld_times, (reg32))
#define SS_RX_SIGDET_0_GET_rg_sigdet_win_size(reg32)           REG_FLD_GET(SS_RX_SIGDET_0_FLD_rg_sigdet_win_size, (reg32))

#define SS_RX_SIGDET_1_GET_rg_sigdet_en(reg32)                 REG_FLD_GET(SS_RX_SIGDET_1_FLD_rg_sigdet_en, (reg32))

#define SS_RX_FLL_0_GET_rg_kband_kfc(reg32)                    REG_FLD_GET(SS_RX_FLL_0_FLD_rg_kband_kfc, (reg32))
#define SS_RX_FLL_0_GET_rg_fpkdiv(reg32)                       REG_FLD_GET(SS_RX_FLL_0_FLD_rg_fpkdiv, (reg32))
#define SS_RX_FLL_0_GET_rg_kband_prediv(reg32)                 REG_FLD_GET(SS_RX_FLL_0_FLD_rg_kband_prediv, (reg32))

#define SS_RX_FLL_1_GET_rg_symbol_wd(reg32)                    REG_FLD_GET(SS_RX_FLL_1_FLD_rg_symbol_wd, (reg32))
#define SS_RX_FLL_1_GET_rg_settle_time_sel(reg32)              REG_FLD_GET(SS_RX_FLL_1_FLD_rg_settle_time_sel, (reg32))
#define SS_RX_FLL_1_GET_rg_ipath_idac(reg32)                   REG_FLD_GET(SS_RX_FLL_1_FLD_rg_ipath_idac, (reg32))

#define SS_RX_FLL_2_GET_rg_debug_sel(reg32)                    REG_FLD_GET(SS_RX_FLL_2_FLD_rg_debug_sel, (reg32))
#define SS_RX_FLL_2_GET_rg_ck_rate(reg32)                      REG_FLD_GET(SS_RX_FLL_2_FLD_rg_ck_rate, (reg32))
#define SS_RX_FLL_2_GET_rg_amp(reg32)                          REG_FLD_GET(SS_RX_FLL_2_FLD_rg_amp, (reg32))
#define SS_RX_FLL_2_GET_rg_prbs_sel(reg32)                     REG_FLD_GET(SS_RX_FLL_2_FLD_rg_prbs_sel, (reg32))

#define SS_RX_FLL_3_GET_rg_icdr_kband_done_force(reg32)        REG_FLD_GET(SS_RX_FLL_3_FLD_rg_icdr_kband_done_force, (reg32))
#define SS_RX_FLL_3_GET_rg_icdr_kband_done_force_en(reg32)     REG_FLD_GET(SS_RX_FLL_3_FLD_rg_icdr_kband_done_force_en, (reg32))
#define SS_RX_FLL_3_GET_rg_fll_dig_rstb_force(reg32)           REG_FLD_GET(SS_RX_FLL_3_FLD_rg_fll_dig_rstb_force, (reg32))
#define SS_RX_FLL_3_GET_rg_fll_dig_rst_force_en(reg32)         REG_FLD_GET(SS_RX_FLL_3_FLD_rg_fll_dig_rst_force_en, (reg32))

#define SS_RX_FLL_4_GET_rg_fll_idac_repli(reg32)               REG_FLD_GET(SS_RX_FLL_4_FLD_rg_fll_idac_repli, (reg32))
#define SS_RX_FLL_4_GET_rg_fll_cor(reg32)                      REG_FLD_GET(SS_RX_FLL_4_FLD_rg_fll_cor, (reg32))
#define SS_RX_FLL_4_GET_rg_fll_repli(reg32)                    REG_FLD_GET(SS_RX_FLL_4_FLD_rg_fll_repli, (reg32))

#define SS_RX_FLL_5_GET_rg_fll_idac_min(reg32)                 REG_FLD_GET(SS_RX_FLL_5_FLD_rg_fll_idac_min, (reg32))
#define SS_RX_FLL_5_GET_rg_fll_idac_max(reg32)                 REG_FLD_GET(SS_RX_FLL_5_FLD_rg_fll_idac_max, (reg32))

#define SS_RX_FLL_6_GET_ro_lnx_sw_fll_ro_4_latch_en(reg32)     REG_FLD_GET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_4_latch_en, (reg32))
#define SS_RX_FLL_6_GET_ro_lnx_sw_fll_ro_3_latch_en(reg32)     REG_FLD_GET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_3_latch_en, (reg32))
#define SS_RX_FLL_6_GET_ro_lnx_sw_fll_ro_2_latch_en(reg32)     REG_FLD_GET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_2_latch_en, (reg32))
#define SS_RX_FLL_6_GET_ro_lnx_sw_fll_ro_1_latch_en(reg32)     REG_FLD_GET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_1_latch_en, (reg32))

#define SS_RX_FLL_7_GET_ro_adc_freq(reg32)                     REG_FLD_GET(SS_RX_FLL_7_FLD_ro_adc_freq, (reg32))

#define SS_RX_FLL_8_GET_ro_cor_gain(reg32)                     REG_FLD_GET(SS_RX_FLL_8_FLD_ro_cor_gain, (reg32))

#define SS_RX_FLL_9_GET_ro_idacf(reg32)                        REG_FLD_GET(SS_RX_FLL_9_FLD_ro_idacf, (reg32))
#define SS_RX_FLL_9_GET_ro_fll_idac(reg32)                     REG_FLD_GET(SS_RX_FLL_9_FLD_ro_fll_idac, (reg32))

#define SS_RX_FLL_a_GET_ro_fll_idac_repli(reg32)               REG_FLD_GET(SS_RX_FLL_a_FLD_ro_fll_idac_repli, (reg32))
#define SS_RX_FLL_a_GET_ro_da_idac(reg32)                      REG_FLD_GET(SS_RX_FLL_a_FLD_ro_da_idac, (reg32))

#define SS_RX_FLL_b_GET_rg_ad_sleep_en(reg32)                  REG_FLD_GET(SS_RX_FLL_b_FLD_rg_ad_sleep_en, (reg32))
#define SS_RX_FLL_b_GET_rg_load_en(reg32)                      REG_FLD_GET(SS_RX_FLL_b_FLD_rg_load_en, (reg32))

#define RX_PDOS_CTRL_0_GET_rg_sap_sel(reg32)                   REG_FLD_GET(RX_PDOS_CTRL_0_FLD_rg_sap_sel, (reg32))
#define RX_PDOS_CTRL_0_GET_rg_eye_blwc_add(reg32)              REG_FLD_GET(RX_PDOS_CTRL_0_FLD_rg_eye_blwc_add, (reg32))
#define RX_PDOS_CTRL_0_GET_rg_data_blwc_add(reg32)             REG_FLD_GET(RX_PDOS_CTRL_0_FLD_rg_data_blwc_add, (reg32))

#define RX_RESET_0_GET_rg_cal_rst_b(reg32)                     REG_FLD_GET(RX_RESET_0_FLD_rg_cal_rst_b, (reg32))
#define RX_RESET_0_GET_rg_eq_pi_cal_rst_b(reg32)               REG_FLD_GET(RX_RESET_0_FLD_rg_eq_pi_cal_rst_b, (reg32))
#define RX_RESET_0_GET_rg_feos_rst_b(reg32)                    REG_FLD_GET(RX_RESET_0_FLD_rg_feos_rst_b, (reg32))
#define RX_RESET_0_GET_rg_eq_blwc_rst_b(reg32)                 REG_FLD_GET(RX_RESET_0_FLD_rg_eq_blwc_rst_b, (reg32))

#define RX_RESET_1_GET_rg_unlock_stb(reg32)                    REG_FLD_GET(RX_RESET_1_FLD_rg_unlock_stb, (reg32))
#define RX_RESET_1_GET_rg_sigdet_rst_b(reg32)                  REG_FLD_GET(RX_RESET_1_FLD_rg_sigdet_rst_b, (reg32))
#define RX_RESET_1_GET_rg_pdos_rst_b(reg32)                    REG_FLD_GET(RX_RESET_1_FLD_rg_pdos_rst_b, (reg32))

#define RX_DEBUG_0_GET_rg_ro_toggle(reg32)                     REG_FLD_GET(RX_DEBUG_0_FLD_rg_ro_toggle, (reg32))
#define RX_DEBUG_0_GET_rg_rx_debug_sel(reg32)                  REG_FLD_GET(RX_DEBUG_0_FLD_rg_rx_debug_sel, (reg32))
#define RX_DEBUG_0_GET_rg_probe1_en(reg32)                     REG_FLD_GET(RX_DEBUG_0_FLD_rg_probe1_en, (reg32))
#define RX_DEBUG_0_GET_rg_probe0_en(reg32)                     REG_FLD_GET(RX_DEBUG_0_FLD_rg_probe0_en, (reg32))

#define BISTCTL_CONTROL_GET_rg_bistctl_io_data_inv(reg32)      REG_FLD_GET(BISTCTL_CONTROL_FLD_rg_bistctl_io_data_inv, (reg32))
#define BISTCTL_CONTROL_GET_rg_bistctl_pat_rx_check_en(reg32)  REG_FLD_GET(BISTCTL_CONTROL_FLD_rg_bistctl_pat_rx_check_en, (reg32))
#define BISTCTL_CONTROL_GET_rg_bistctl_pat_tx_en(reg32)        REG_FLD_GET(BISTCTL_CONTROL_FLD_rg_bistctl_pat_tx_en, (reg32))
#define BISTCTL_CONTROL_GET_rg_bistctl_pat_sel(reg32)          REG_FLD_GET(BISTCTL_CONTROL_FLD_rg_bistctl_pat_sel, (reg32))

#define BISTCTL_ALIGN_PAT_GET_bistctl_align_pattern(reg32)     REG_FLD_GET(BISTCTL_ALIGN_PAT_FLD_bistctl_align_pattern, (reg32))

#define BISTCTL_PROGRAM_PAT_0_GET_rg_bistctl_program_data_0(reg32) REG_FLD_GET(BISTCTL_PROGRAM_PAT_0_FLD_rg_bistctl_program_data_0, (reg32))

#define BISTCTL_PROGRAM_PAT_1_GET_rg_bistctl_program_data_1(reg32) REG_FLD_GET(BISTCTL_PROGRAM_PAT_1_FLD_rg_bistctl_program_data_1, (reg32))

#define BISTCTL_POLLUTION_GET_rg_bist_tx_data_pollution_latch(reg32) REG_FLD_GET(BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution_latch, (reg32))
#define BISTCTL_POLLUTION_GET_rg_bist_tx_data_pollution(reg32) REG_FLD_GET(BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution, (reg32))

#define BISTCTL_PRBS_INITIAL_SEED_GET_bistctl_prbs_init_seed(reg32) REG_FLD_GET(BISTCTL_PRBS_INITIAL_SEED_FLD_bistctl_prbs_init_seed, (reg32))

#define BISTCTL_PRBS_EVENT_GET_ro_bistctl_prbs_done(reg32)     REG_FLD_GET(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_done, (reg32))
#define BISTCTL_PRBS_EVENT_GET_ro_bistctl_prbs_fail(reg32)     REG_FLD_GET(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_fail, (reg32))
#define BISTCTL_PRBS_EVENT_GET_ro_bistctl_prbs_compare(reg32)  REG_FLD_GET(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_compare, (reg32))

#define BISTCTL_PRBS_ERRCNT_GET_ro_bistctl_prbs_err_cnt(reg32) REG_FLD_GET(BISTCTL_PRBS_ERRCNT_FLD_ro_bistctl_prbs_err_cnt, (reg32))

#define BISTCTL_PRBS_FAIL_THRESHOLD_GET_rg_bistctl_sq_wave_reach(reg32) REG_FLD_GET(BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_sq_wave_reach, (reg32))
#define BISTCTL_PRBS_FAIL_THRESHOLD_GET_rg_bistctl_prbs_fail_threshold(reg32) REG_FLD_GET(BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_prbs_fail_threshold, (reg32))

#define RX_TORGS_DEBUG_0_GET_ro_dac_e1(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_0_FLD_ro_dac_e1, (reg32))
#define RX_TORGS_DEBUG_0_GET_ro_dac_eo(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_0_FLD_ro_dac_eo, (reg32))
#define RX_TORGS_DEBUG_0_GET_ro_dac_d1(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_0_FLD_ro_dac_d1, (reg32))
#define RX_TORGS_DEBUG_0_GET_ro_dac_do(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_0_FLD_ro_dac_do, (reg32))

#define RX_TORGS_DEBUG_1_GET_ro_blwc_filter_din(reg32)         REG_FLD_GET(RX_TORGS_DEBUG_1_FLD_ro_blwc_filter_din, (reg32))
#define RX_TORGS_DEBUG_1_GET_ro_blwc_sum(reg32)                REG_FLD_GET(RX_TORGS_DEBUG_1_FLD_ro_blwc_sum, (reg32))
#define RX_TORGS_DEBUG_1_GET_ro_blwc_offset(reg32)             REG_FLD_GET(RX_TORGS_DEBUG_1_FLD_ro_blwc_offset, (reg32))
#define RX_TORGS_DEBUG_1_GET_ro_dac_eye(reg32)                 REG_FLD_GET(RX_TORGS_DEBUG_1_FLD_ro_dac_eye, (reg32))

#define RX_TORGS_DEBUG_2_GET_ro_cal_dir(reg32)                 REG_FLD_GET(RX_TORGS_DEBUG_2_FLD_ro_cal_dir, (reg32))
#define RX_TORGS_DEBUG_2_GET_ro_pi_cal_data_out(reg32)         REG_FLD_GET(RX_TORGS_DEBUG_2_FLD_ro_pi_cal_data_out, (reg32))
#define RX_TORGS_DEBUG_2_GET_ro_fl_out2(reg32)                 REG_FLD_GET(RX_TORGS_DEBUG_2_FLD_ro_fl_out2, (reg32))

#define RX_TORGS_DEBUG_3_GET_ro_lslock_cnt2(reg32)             REG_FLD_GET(RX_TORGS_DEBUG_3_FLD_ro_lslock_cnt2, (reg32))
#define RX_TORGS_DEBUG_3_GET_ro_cal_en(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_3_FLD_ro_cal_en, (reg32))
#define RX_TORGS_DEBUG_3_GET_ro_cal_out(reg32)                 REG_FLD_GET(RX_TORGS_DEBUG_3_FLD_ro_cal_out, (reg32))

#define RX_TORGS_DEBUG_4_GET_eyecnt_rdy(reg32)                 REG_FLD_GET(RX_TORGS_DEBUG_4_FLD_eyecnt_rdy, (reg32))
#define RX_TORGS_DEBUG_4_GET_ro_veo(reg32)                     REG_FLD_GET(RX_TORGS_DEBUG_4_FLD_ro_veo, (reg32))
#define RX_TORGS_DEBUG_4_GET_ro_heo(reg32)                     REG_FLD_GET(RX_TORGS_DEBUG_4_FLD_ro_heo, (reg32))

#define RX_TORGS_DEBUG_5_GET_veo_rdy(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_5_FLD_veo_rdy, (reg32))
#define RX_TORGS_DEBUG_5_GET_heo_rdy(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_5_FLD_heo_rdy, (reg32))
#define RX_TORGS_DEBUG_5_GET_heo_center(reg32)                 REG_FLD_GET(RX_TORGS_DEBUG_5_FLD_heo_center, (reg32))

#define RX_TORGS_DEBUG_6_GET_ro_cntlen(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_6_FLD_ro_cntlen, (reg32))

#define RX_TORGS_DEBUG_7_GET_eyecnt(reg32)                     REG_FLD_GET(RX_TORGS_DEBUG_7_FLD_eyecnt, (reg32))

#define RX_TORGS_DEBUG_8_GET_fom_num_type_good(reg32)          REG_FLD_GET(RX_TORGS_DEBUG_8_FLD_fom_num_type_good, (reg32))
#define RX_TORGS_DEBUG_8_GET_fom_num_type(reg32)               REG_FLD_GET(RX_TORGS_DEBUG_8_FLD_fom_num_type, (reg32))
#define RX_TORGS_DEBUG_8_GET_fom_num(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_8_FLD_fom_num, (reg32))

#define RX_TORGS_DEBUG_9_GET_eo_y_done(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_9_FLD_eo_y_done, (reg32))
#define RX_TORGS_DEBUG_9_GET_eo_x_done(reg32)                  REG_FLD_GET(RX_TORGS_DEBUG_9_FLD_eo_x_done, (reg32))
#define RX_TORGS_DEBUG_9_GET_ro_feos_out(reg32)                REG_FLD_GET(RX_TORGS_DEBUG_9_FLD_ro_feos_out, (reg32))
#define RX_TORGS_DEBUG_9_GET_rgs_ipll_dig_mon(reg32)           REG_FLD_GET(RX_TORGS_DEBUG_9_FLD_rgs_ipll_dig_mon, (reg32))

#define RX_TORGS_DEBUG_10_GET_eye_el(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_10_FLD_eye_el, (reg32))
#define RX_TORGS_DEBUG_10_GET_eye_er(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_10_FLD_eye_er, (reg32))

#define SS_TX_RST_B_GET_txcalib_rst_b(reg32)                   REG_FLD_GET(SS_TX_RST_B_FLD_txcalib_rst_b, (reg32))
#define SS_TX_RST_B_GET_tx_top_rst_b(reg32)                    REG_FLD_GET(SS_TX_RST_B_FLD_tx_top_rst_b, (reg32))

#define SS_TX_CALIB_0_GET_rg_txcalib_force_termp_sel(reg32)    REG_FLD_GET(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel, (reg32))
#define SS_TX_CALIB_0_GET_rg_txcalib_force_termp_sel_en(reg32) REG_FLD_GET(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel_en, (reg32))
#define SS_TX_CALIB_0_GET_rg_txcalib_force_termp_calen(reg32)  REG_FLD_GET(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_calen, (reg32))
#define SS_TX_CALIB_0_GET_rg_txcalib_p_en(reg32)               REG_FLD_GET(SS_TX_CALIB_0_FLD_rg_txcalib_p_en, (reg32))

#define SS_TX_CALIB_1_GET_rg_txcalib_force_termn_sel(reg32)    REG_FLD_GET(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel, (reg32))
#define SS_TX_CALIB_1_GET_rg_txcalib_force_termn_sel_en(reg32) REG_FLD_GET(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel_en, (reg32))
#define SS_TX_CALIB_1_GET_rg_txcalib_force_termn_calen(reg32)  REG_FLD_GET(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_calen, (reg32))
#define SS_TX_CALIB_1_GET_rg_txcalib_n_en(reg32)               REG_FLD_GET(SS_TX_CALIB_1_FLD_rg_txcalib_n_en, (reg32))

#define SS_TX_CALIB_2_GET_rg_txcal_clear(reg32)                REG_FLD_GET(SS_TX_CALIB_2_FLD_rg_txcal_clear, (reg32))
#define SS_TX_CALIB_2_GET_ro_txcal_fsm(reg32)                  REG_FLD_GET(SS_TX_CALIB_2_FLD_ro_txcal_fsm, (reg32))
#define SS_TX_CALIB_2_GET_ro_txcal_out_nflag(reg32)            REG_FLD_GET(SS_TX_CALIB_2_FLD_ro_txcal_out_nflag, (reg32))
#define SS_TX_CALIB_2_GET_ro_txcal_out_pflag(reg32)            REG_FLD_GET(SS_TX_CALIB_2_FLD_ro_txcal_out_pflag, (reg32))

#define XPON_SETTING_0_GET_rg_trans_tx_fault_inv(reg32)        REG_FLD_GET(XPON_SETTING_0_FLD_rg_trans_tx_fault_inv, (reg32))
#define XPON_SETTING_0_GET_rg_trans_rx_sd_inv(reg32)           REG_FLD_GET(XPON_SETTING_0_FLD_rg_trans_rx_sd_inv, (reg32))
#define XPON_SETTING_0_GET_rg_trans_rx_data_inv(reg32)         REG_FLD_GET(XPON_SETTING_0_FLD_rg_trans_rx_data_inv, (reg32))
#define XPON_SETTING_0_GET_rg_trans_tx_data_inv(reg32)         REG_FLD_GET(XPON_SETTING_0_FLD_rg_trans_tx_data_inv, (reg32))
#define XPON_SETTING_0_GET_rg_trans_burst_inv(reg32)           REG_FLD_GET(XPON_SETTING_0_FLD_rg_trans_burst_inv, (reg32))
#define XPON_SETTING_0_GET_rg_sfp_rx_sd_inv(reg32)             REG_FLD_GET(XPON_SETTING_0_FLD_rg_sfp_rx_sd_inv, (reg32))
#define XPON_SETTING_0_GET_rg_tx_dly_en(reg32)                 REG_FLD_GET(XPON_SETTING_0_FLD_rg_tx_dly_en, (reg32))

#define XPON_SETTING_1_GET_rg_trans_tx_fault_pro(reg32)        REG_FLD_GET(XPON_SETTING_1_FLD_rg_trans_tx_fault_pro, (reg32))
#define XPON_SETTING_1_GET_rg_trans_rx_los_pro(reg32)          REG_FLD_GET(XPON_SETTING_1_FLD_rg_trans_rx_los_pro, (reg32))
#define XPON_SETTING_1_GET_rg_trans_tx_sd_pro(reg32)           REG_FLD_GET(XPON_SETTING_1_FLD_rg_trans_tx_sd_pro, (reg32))
#define XPON_SETTING_1_GET_rg_trans_tx_sd_inv(reg32)           REG_FLD_GET(XPON_SETTING_1_FLD_rg_trans_tx_sd_inv, (reg32))

#define XPON_SETTING_2_GET_rg_pma_show_probe_en(reg32)         REG_FLD_GET(XPON_SETTING_2_FLD_rg_pma_show_probe_en, (reg32))
#define XPON_SETTING_2_GET_rg_ftcal_high(reg32)                REG_FLD_GET(XPON_SETTING_2_FLD_rg_ftcal_high, (reg32))
#define XPON_SETTING_2_GET_rg_ftcal_low(reg32)                 REG_FLD_GET(XPON_SETTING_2_FLD_rg_ftcal_low, (reg32))
#define XPON_SETTING_2_GET_rg_trans_rx_laser_on_pro(reg32)     REG_FLD_GET(XPON_SETTING_2_FLD_rg_trans_rx_laser_on_pro, (reg32))

#define XPON_STA_GET_ro_tx_fault(reg32)                        REG_FLD_GET(XPON_STA_FLD_ro_tx_fault, (reg32))
#define XPON_STA_GET_ro_tx_sd(reg32)                           REG_FLD_GET(XPON_STA_FLD_ro_tx_sd, (reg32))
#define XPON_STA_GET_ro_rx_los(reg32)                          REG_FLD_GET(XPON_STA_FLD_ro_rx_los, (reg32))

#define XPON_INT_EN_0_GET_rg_tx_sd_alarm_int_en(reg32)         REG_FLD_GET(XPON_INT_EN_0_FLD_rg_tx_sd_alarm_int_en, (reg32))
#define XPON_INT_EN_0_GET_rg_ad_ben_alarm_int_en(reg32)        REG_FLD_GET(XPON_INT_EN_0_FLD_rg_ad_ben_alarm_int_en, (reg32))
#define XPON_INT_EN_0_GET_rg_trans_sd_fail_int_en(reg32)       REG_FLD_GET(XPON_INT_EN_0_FLD_rg_trans_sd_fail_int_en, (reg32))
#define XPON_INT_EN_0_GET_rg_phyrdy_int_en(reg32)              REG_FLD_GET(XPON_INT_EN_0_FLD_rg_phyrdy_int_en, (reg32))
#define XPON_INT_EN_0_GET_rg_un_stb_os_rdy_int_en(reg32)       REG_FLD_GET(XPON_INT_EN_0_FLD_rg_un_stb_os_rdy_int_en, (reg32))
#define XPON_INT_EN_0_GET_rg_trans_rogue_onu_int_en(reg32)     REG_FLD_GET(XPON_INT_EN_0_FLD_rg_trans_rogue_onu_int_en, (reg32))

#define XPON_INT_EN_1_GET_rg_trans_los_int_en(reg32)           REG_FLD_GET(XPON_INT_EN_1_FLD_rg_trans_los_int_en, (reg32))
#define XPON_INT_EN_1_GET_rg_un_stb_rx_rdy_int_en(reg32)       REG_FLD_GET(XPON_INT_EN_1_FLD_rg_un_stb_rx_rdy_int_en, (reg32))
#define XPON_INT_EN_1_GET_rg_trans_fault_int_en(reg32)         REG_FLD_GET(XPON_INT_EN_1_FLD_rg_trans_fault_int_en, (reg32))
#define XPON_INT_EN_1_GET_rg_un_stb_eq_rdy_int_en(reg32)       REG_FLD_GET(XPON_INT_EN_1_FLD_rg_un_stb_eq_rdy_int_en, (reg32))

#define XPON_INT_STA_0_GET_tx_sd_alarm_int(reg32)              REG_FLD_GET(XPON_INT_STA_0_FLD_tx_sd_alarm_int, (reg32))
#define XPON_INT_STA_0_GET_ben_alarm_int(reg32)                REG_FLD_GET(XPON_INT_STA_0_FLD_ben_alarm_int, (reg32))
#define XPON_INT_STA_0_GET_trans_sd_fail_int(reg32)            REG_FLD_GET(XPON_INT_STA_0_FLD_trans_sd_fail_int, (reg32))
#define XPON_INT_STA_0_GET_phyrdy_int(reg32)                   REG_FLD_GET(XPON_INT_STA_0_FLD_phyrdy_int, (reg32))
#define XPON_INT_STA_0_GET_un_stb_os_rdy_int(reg32)            REG_FLD_GET(XPON_INT_STA_0_FLD_un_stb_os_rdy_int, (reg32))
#define XPON_INT_STA_0_GET_trans_rogue_onu_int(reg32)          REG_FLD_GET(XPON_INT_STA_0_FLD_trans_rogue_onu_int, (reg32))

#define XPON_INT_STA_1_GET_trans_los_int(reg32)                REG_FLD_GET(XPON_INT_STA_1_FLD_trans_los_int, (reg32))
#define XPON_INT_STA_1_GET_un_stb_rx_rdy_int(reg32)            REG_FLD_GET(XPON_INT_STA_1_FLD_un_stb_rx_rdy_int, (reg32))
#define XPON_INT_STA_1_GET_trans_fault_int(reg32)              REG_FLD_GET(XPON_INT_STA_1_FLD_trans_fault_int, (reg32))
#define XPON_INT_STA_1_GET_un_stb_eq_rdy_int(reg32)            REG_FLD_GET(XPON_INT_STA_1_FLD_un_stb_eq_rdy_int, (reg32))

#define RX_TORGS_DEBUG_11_GET_AD_XPON_RX_SIGDET_OUT(reg32)     REG_FLD_GET(RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_SIGDET_OUT, (reg32))
#define RX_TORGS_DEBUG_11_GET_AD_XPON_RX_DBG(reg32)            REG_FLD_GET(RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_DBG, (reg32))
#define RX_TORGS_DEBUG_11_GET_eye_eb(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_11_FLD_eye_eb, (reg32))
#define RX_TORGS_DEBUG_11_GET_eye_eu(reg32)                    REG_FLD_GET(RX_TORGS_DEBUG_11_FLD_eye_eu, (reg32))

#define RX_FORCE_MODE_0_GET_rg_force_da_xpon_cdr_lpf_rstb(reg32) REG_FLD_GET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_rstb, (reg32))
#define RX_FORCE_MODE_0_GET_rg_force_da_xpon_cdr_lpf_lck2data(reg32) REG_FLD_GET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_lck2data, (reg32))
#define RX_FORCE_MODE_0_GET_rg_force_da_xpon_rx_fe_peaking_ctrl(reg32) REG_FLD_GET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_peaking_ctrl, (reg32))
#define RX_FORCE_MODE_0_GET_rg_force_da_xpon_rx_fe_gain_ctrl(reg32) REG_FLD_GET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_gain_ctrl, (reg32))

#define RX_FORCE_MODE_1_GET_rg_force_da_xpon_rx_dac_e0(reg32)  REG_FLD_GET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_e0, (reg32))
#define RX_FORCE_MODE_1_GET_rg_force_da_xpon_rx_dac_d1(reg32)  REG_FLD_GET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d1, (reg32))
#define RX_FORCE_MODE_1_GET_rg_force_da_xpon_rx_dac_d0(reg32)  REG_FLD_GET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d0, (reg32))
#define RX_FORCE_MODE_1_GET_rg_force_da_xpon_rx_sigdet_os(reg32) REG_FLD_GET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_sigdet_os, (reg32))

#define RX_FORCE_MODE_2_GET_rg_force_da_xpon_cdr_pr_pieye(reg32) REG_FLD_GET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_cdr_pr_pieye, (reg32))
#define RX_FORCE_MODE_2_GET_rg_force_da_xpon_rx_fe_vos(reg32)  REG_FLD_GET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_fe_vos, (reg32))
#define RX_FORCE_MODE_2_GET_rg_force_da_xpon_rx_dac_eye(reg32) REG_FLD_GET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_eye, (reg32))
#define RX_FORCE_MODE_2_GET_rg_force_da_xpon_rx_dac_e1(reg32)  REG_FLD_GET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_e1, (reg32))

#define RX_DISB_MODE_0_GET_rg_disb_da_xpon_cdr_lpf_rstb(reg32) REG_FLD_GET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_rstb, (reg32))
#define RX_DISB_MODE_0_GET_rg_disb_da_xpon_cdr_lpf_lck2data(reg32) REG_FLD_GET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_lck2data, (reg32))
#define RX_DISB_MODE_0_GET_rg_disb_da_xpon_rx_fe_peaking_ctrl(reg32) REG_FLD_GET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_peaking_ctrl, (reg32))
#define RX_DISB_MODE_0_GET_rg_disb_da_xpon_rx_fe_gain_ctrl(reg32) REG_FLD_GET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_gain_ctrl, (reg32))

#define RX_DISB_MODE_1_GET_rg_disb_da_xpon_rx_dac_e0(reg32)    REG_FLD_GET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_e0, (reg32))
#define RX_DISB_MODE_1_GET_rg_disb_da_xpon_rx_dac_d1(reg32)    REG_FLD_GET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d1, (reg32))
#define RX_DISB_MODE_1_GET_rg_disb_da_xpon_rx_dac_d0(reg32)    REG_FLD_GET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d0, (reg32))
#define RX_DISB_MODE_1_GET_rg_disb_da_xpon_rx_sigdet_os(reg32) REG_FLD_GET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_sigdet_os, (reg32))

#define RX_DISB_MODE_2_GET_rg_disb_da_xpon_cdr_pr_pieye(reg32) REG_FLD_GET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_cdr_pr_pieye, (reg32))
#define RX_DISB_MODE_2_GET_rg_disb_da_xpon_rx_fe_vos(reg32)    REG_FLD_GET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_fe_vos, (reg32))
#define RX_DISB_MODE_2_GET_rg_disb_da_xpon_rx_dac_eye(reg32)   REG_FLD_GET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_eye, (reg32))
#define RX_DISB_MODE_2_GET_rg_disb_da_xpon_rx_dac_e1(reg32)    REG_FLD_GET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_e1, (reg32))

#define RX_FORCE_MODE_3_GET_rg_force_rx_dac_d1(reg32)          REG_FLD_GET(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d1, (reg32))
#define RX_FORCE_MODE_3_GET_rg_force_rx_dac_d0(reg32)          REG_FLD_GET(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d0, (reg32))
#define RX_FORCE_MODE_3_GET_rg_force_rx_dac_eye(reg32)         REG_FLD_GET(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_eye, (reg32))
#define RX_FORCE_MODE_3_GET_rg_force_eq_pi_cal_rdy(reg32)      REG_FLD_GET(RX_FORCE_MODE_3_FLD_rg_force_eq_pi_cal_rdy, (reg32))

#define RX_FORCE_MODE_4_GET_rg_force_blwc_offset(reg32)        REG_FLD_GET(RX_FORCE_MODE_4_FLD_rg_force_blwc_offset, (reg32))
#define RX_FORCE_MODE_4_GET_rg_force_xpon_rx_sigdet_out(reg32) REG_FLD_GET(RX_FORCE_MODE_4_FLD_rg_force_xpon_rx_sigdet_out, (reg32))
#define RX_FORCE_MODE_4_GET_rg_force_rx_dac_e1(reg32)          REG_FLD_GET(RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e1, (reg32))
#define RX_FORCE_MODE_4_GET_rg_force_rx_dac_e0(reg32)          REG_FLD_GET(RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e0, (reg32))

#define RX_FORCE_MODE_5_GET_rg_force_eyecnt(reg32)             REG_FLD_GET(RX_FORCE_MODE_5_FLD_rg_force_eyecnt, (reg32))
#define RX_FORCE_MODE_5_GET_rg_force_feos_out(reg32)           REG_FLD_GET(RX_FORCE_MODE_5_FLD_rg_force_feos_out, (reg32))

#define RX_FORCE_MODE_6_GET_rg_force_rx_or_pical_en(reg32)     REG_FLD_GET(RX_FORCE_MODE_6_FLD_rg_force_rx_or_pical_en, (reg32))
#define RX_FORCE_MODE_6_GET_rg_force_eyecnt_rdy(reg32)         REG_FLD_GET(RX_FORCE_MODE_6_FLD_rg_force_eyecnt_rdy, (reg32))

#define RX_DISB_MODE_3_GET_rg_disb_rx_dac_d1(reg32)            REG_FLD_GET(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d1, (reg32))
#define RX_DISB_MODE_3_GET_rg_disb_rx_dac_d0(reg32)            REG_FLD_GET(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d0, (reg32))
#define RX_DISB_MODE_3_GET_rg_disb_rx_dac_eye(reg32)           REG_FLD_GET(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_eye, (reg32))
#define RX_DISB_MODE_3_GET_rg_disb_eq_pi_cal_rdy(reg32)        REG_FLD_GET(RX_DISB_MODE_3_FLD_rg_disb_eq_pi_cal_rdy, (reg32))

#define RX_DISB_MODE_4_GET_rg_disb_blwc_offset(reg32)          REG_FLD_GET(RX_DISB_MODE_4_FLD_rg_disb_blwc_offset, (reg32))
#define RX_DISB_MODE_4_GET_rg_disb_xpon_rx_sigdet_out(reg32)   REG_FLD_GET(RX_DISB_MODE_4_FLD_rg_disb_xpon_rx_sigdet_out, (reg32))
#define RX_DISB_MODE_4_GET_rg_disb_rx_dac_e1(reg32)            REG_FLD_GET(RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e1, (reg32))
#define RX_DISB_MODE_4_GET_rg_disb_rx_dac_e0(reg32)            REG_FLD_GET(RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e0, (reg32))

#define RX_DISB_MODE_5_GET_rg_disb_rx_or_pical_en(reg32)       REG_FLD_GET(RX_DISB_MODE_5_FLD_rg_disb_rx_or_pical_en, (reg32))
#define RX_DISB_MODE_5_GET_rg_disb_eyecnt_rdy(reg32)           REG_FLD_GET(RX_DISB_MODE_5_FLD_rg_disb_eyecnt_rdy, (reg32))
#define RX_DISB_MODE_5_GET_rg_disb_eyecnt(reg32)               REG_FLD_GET(RX_DISB_MODE_5_FLD_rg_disb_eyecnt, (reg32))
#define RX_DISB_MODE_5_GET_rg_disb_feos_out(reg32)             REG_FLD_GET(RX_DISB_MODE_5_FLD_rg_disb_feos_out, (reg32))

#define RX_FORCE_MODE_7_GET_rg_force_da_lock2ref(reg32)        REG_FLD_GET(RX_FORCE_MODE_7_FLD_rg_force_da_lock2ref, (reg32))
#define RX_FORCE_MODE_7_GET_rg_force_pdos_rx_rst_b(reg32)      REG_FLD_GET(RX_FORCE_MODE_7_FLD_rg_force_pdos_rx_rst_b, (reg32))
#define RX_FORCE_MODE_7_GET_rg_force_rx_and_pical_rstb(reg32)  REG_FLD_GET(RX_FORCE_MODE_7_FLD_rg_force_rx_and_pical_rstb, (reg32))
#define RX_FORCE_MODE_7_GET_rg_force_ref_and_pical_rstb(reg32) REG_FLD_GET(RX_FORCE_MODE_7_FLD_rg_force_ref_and_pical_rstb, (reg32))

#define RX_FORCE_MODE_8_GET_rg_force_eyecnt_rx_rst_b(reg32)    REG_FLD_GET(RX_FORCE_MODE_8_FLD_rg_force_eyecnt_rx_rst_b, (reg32))
#define RX_FORCE_MODE_8_GET_rg_force_feos_rx_rst_b(reg32)      REG_FLD_GET(RX_FORCE_MODE_8_FLD_rg_force_feos_rx_rst_b, (reg32))
#define RX_FORCE_MODE_8_GET_rg_force_sdcal_ref_rst_b(reg32)    REG_FLD_GET(RX_FORCE_MODE_8_FLD_rg_force_sdcal_ref_rst_b, (reg32))
#define RX_FORCE_MODE_8_GET_rg_force_blwc_rx_rst_b(reg32)      REG_FLD_GET(RX_FORCE_MODE_8_FLD_rg_force_blwc_rx_rst_b, (reg32))

#define RX_FORCE_MODE_9_GET_rg_force_pi_cal_data_out_o(reg32)  REG_FLD_GET(RX_FORCE_MODE_9_FLD_rg_force_pi_cal_data_out_o, (reg32))
#define RX_FORCE_MODE_9_GET_rg_force_eye_top_en(reg32)         REG_FLD_GET(RX_FORCE_MODE_9_FLD_rg_force_eye_top_en, (reg32))
#define RX_FORCE_MODE_9_GET_rg_force_eye_reset_plu_o(reg32)    REG_FLD_GET(RX_FORCE_MODE_9_FLD_rg_force_eye_reset_plu_o, (reg32))
#define RX_FORCE_MODE_9_GET_rg_force_fbck_lock(reg32)          REG_FLD_GET(RX_FORCE_MODE_9_FLD_rg_force_fbck_lock, (reg32))

#define RX_DISB_MODE_6_GET_rg_disb_da_lock2ref(reg32)          REG_FLD_GET(RX_DISB_MODE_6_FLD_rg_disb_da_lock2ref, (reg32))
#define RX_DISB_MODE_6_GET_rg_disb_pdos_rx_rst_b(reg32)        REG_FLD_GET(RX_DISB_MODE_6_FLD_rg_disb_pdos_rx_rst_b, (reg32))
#define RX_DISB_MODE_6_GET_rg_disb_rx_and_pical_rstb(reg32)    REG_FLD_GET(RX_DISB_MODE_6_FLD_rg_disb_rx_and_pical_rstb, (reg32))
#define RX_DISB_MODE_6_GET_rg_disb_ref_and_pical_rstb(reg32)   REG_FLD_GET(RX_DISB_MODE_6_FLD_rg_disb_ref_and_pical_rstb, (reg32))

#define RX_DISB_MODE_7_GET_rg_disb_eyecnt_rx_rst_b(reg32)      REG_FLD_GET(RX_DISB_MODE_7_FLD_rg_disb_eyecnt_rx_rst_b, (reg32))
#define RX_DISB_MODE_7_GET_rg_disb_feos_rx_rst_b(reg32)        REG_FLD_GET(RX_DISB_MODE_7_FLD_rg_disb_feos_rx_rst_b, (reg32))
#define RX_DISB_MODE_7_GET_rg_disb_sdcal_ref_rst_b(reg32)      REG_FLD_GET(RX_DISB_MODE_7_FLD_rg_disb_sdcal_ref_rst_b, (reg32))
#define RX_DISB_MODE_7_GET_rg_disb_blwc_rx_rst_b(reg32)        REG_FLD_GET(RX_DISB_MODE_7_FLD_rg_disb_blwc_rx_rst_b, (reg32))

#define RX_DISB_MODE_8_GET_rg_disb_pi_cal_data_out_o(reg32)    REG_FLD_GET(RX_DISB_MODE_8_FLD_rg_disb_pi_cal_data_out_o, (reg32))
#define RX_DISB_MODE_8_GET_rg_disb_eye_top_en(reg32)           REG_FLD_GET(RX_DISB_MODE_8_FLD_rg_disb_eye_top_en, (reg32))
#define RX_DISB_MODE_8_GET_rg_disb_eye_reset_plu_o(reg32)      REG_FLD_GET(RX_DISB_MODE_8_FLD_rg_disb_eye_reset_plu_o, (reg32))
#define RX_DISB_MODE_8_GET_rg_disb_fbck_lock(reg32)            REG_FLD_GET(RX_DISB_MODE_8_FLD_rg_disb_fbck_lock, (reg32))

#define SS_BIST_0_GET_dbgctl_bistctl_px_lnx_flagh_en(reg32)    REG_FLD_GET(SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagh_en, (reg32))
#define SS_BIST_0_GET_dbgctl_bistctl_px_lnx_flagl_en(reg32)    REG_FLD_GET(SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagl_en, (reg32))
#define SS_BIST_0_GET_dbgctl_bistctl_flagh_sel(reg32)          REG_FLD_GET(SS_BIST_0_FLD_dbgctl_bistctl_flagh_sel, (reg32))
#define SS_BIST_0_GET_dbgctl_bistctl_flagl_sel(reg32)          REG_FLD_GET(SS_BIST_0_FLD_dbgctl_bistctl_flagl_sel, (reg32))

#define SS_BIST_1_GET_rg_lnx_bistctl_bit_error_rst_sel(reg32)  REG_FLD_GET(SS_BIST_1_FLD_rg_lnx_bistctl_bit_error_rst_sel, (reg32))
#define SS_BIST_1_GET_pllctl_px_lnx_tx_por_rdy(reg32)          REG_FLD_GET(SS_BIST_1_FLD_pllctl_px_lnx_tx_por_rdy, (reg32))
#define SS_BIST_1_GET_all_lane_prbs_tx_en(reg32)               REG_FLD_GET(SS_BIST_1_FLD_all_lane_prbs_tx_en, (reg32))
#define SS_BIST_1_GET_anlt_px_lnx_lt_los(reg32)                REG_FLD_GET(SS_BIST_1_FLD_anlt_px_lnx_lt_los, (reg32))

#define SS_BIST_2_GET_rg_lnx_bistctl_prbs_check_timer(reg32)   REG_FLD_GET(SS_BIST_2_FLD_rg_lnx_bistctl_prbs_check_timer, (reg32))

#define SS_DA_XPON_PWDB_0_GET_rg_da_xpon_cdr_pd_pwdb(reg32)    REG_FLD_GET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pd_pwdb, (reg32))
#define SS_DA_XPON_PWDB_0_GET_rg_da_xpon_cdr_pr_pieye_pwdb(reg32) REG_FLD_GET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pieye_pwdb, (reg32))
#define SS_DA_XPON_PWDB_0_GET_rg_da_xpon_cdr_pr_pwdb(reg32)    REG_FLD_GET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pwdb, (reg32))
#define SS_DA_XPON_PWDB_0_GET_rg_da_xpon_rx_fe_pwdb(reg32)     REG_FLD_GET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_rx_fe_pwdb, (reg32))

#define SS_DA_XPON_PWDB_1_GET_rg_da_xpon_rx_sigdet_pwdb(reg32) REG_FLD_GET(SS_DA_XPON_PWDB_1_FLD_rg_da_xpon_rx_sigdet_pwdb, (reg32))

#define SS_LCPLL_0_GET_tdc_sync_pcw_ncpo_chg(reg32)            REG_FLD_GET(SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg, (reg32))
#define SS_LCPLL_0_GET_eee_lcpll_hold(reg32)                   REG_FLD_GET(SS_LCPLL_0_FLD_eee_lcpll_hold, (reg32))

#define SS_LCPLL_1_GET_tdc_sync_pcw_ncpo(reg32)                REG_FLD_GET(SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo, (reg32))

#define SS_LCPLL_2_GET_lcpll_top_flagh_en(reg32)               REG_FLD_GET(SS_LCPLL_2_FLD_lcpll_top_flagh_en, (reg32))
#define SS_LCPLL_2_GET_lcpll_top_flagl_en(reg32)               REG_FLD_GET(SS_LCPLL_2_FLD_lcpll_top_flagl_en, (reg32))
#define SS_LCPLL_2_GET_flagh_sel(reg32)                        REG_FLD_GET(SS_LCPLL_2_FLD_flagh_sel, (reg32))
#define SS_LCPLL_2_GET_flagl_sel(reg32)                        REG_FLD_GET(SS_LCPLL_2_FLD_flagl_sel, (reg32))

#define ADD_DIG_RESERVE_0_GET_rg_dig_reserve_0(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_0_FLD_rg_dig_reserve_0, (reg32))

#define ADD_DIG_RESERVE_1_GET_rg_dig_reserve_1(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_1_FLD_rg_dig_reserve_1, (reg32))

#define ADD_DIG_RESERVE_2_GET_rg_dig_reserve_2(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_2_FLD_rg_dig_reserve_2, (reg32))

#define ADD_DIG_RESERVE_3_GET_rg_dig_reserve_3(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_3_FLD_rg_dig_reserve_3, (reg32))

#define ADD_DIG_RESERVE_4_GET_rg_dig_reserve_4(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_4_FLD_rg_dig_reserve_4, (reg32))

#define RG_XPON_RX_RESERVED_1_GET_rg_xpon_rx_rate_ctrl(reg32)  REG_FLD_GET(RG_XPON_RX_RESERVED_1_FLD_rg_xpon_rx_rate_ctrl, (reg32))

#define ADD_DIG_RO_RESERVE_0_GET_ro_dig_reserve_0(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_0_FLD_ro_dig_reserve_0, (reg32))

#define ADD_DIG_RO_RESERVE_1_GET_ro_dig_reserve_1(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_1_FLD_ro_dig_reserve_1, (reg32))

#define ADD_DIG_RO_RESERVE_2_GET_ro_dig_reserve_2(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_2_FLD_ro_dig_reserve_2, (reg32))

#define ADD_DIG_RO_RESERVE_3_GET_ro_dig_reserve_3(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_3_FLD_ro_dig_reserve_3, (reg32))

#define ADD_DIG_RO_RESERVE_4_GET_ro_dig_reserve_4(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_4_FLD_ro_dig_reserve_4, (reg32))

#define ADD_RX_SYS_EN_SEL_0_GET_rg_rx_sys_en(reg32)            REG_FLD_GET(ADD_RX_SYS_EN_SEL_0_FLD_rg_rx_sys_en, (reg32))
#define ADD_RX_SYS_EN_SEL_0_GET_rg_da_rx_sys_en_sel(reg32)     REG_FLD_GET(ADD_RX_SYS_EN_SEL_0_FLD_rg_da_rx_sys_en_sel, (reg32))

#define PLL_TDC_FREQDET_0_GET_rg_pll_unlock_cyclecnt(reg32)    REG_FLD_GET(PLL_TDC_FREQDET_0_FLD_rg_pll_unlock_cyclecnt, (reg32))
#define PLL_TDC_FREQDET_0_GET_rg_pll_lock_cyclecnt(reg32)      REG_FLD_GET(PLL_TDC_FREQDET_0_FLD_rg_pll_lock_cyclecnt, (reg32))

#define PLL_TDC_FREQDET_1_GET_rg_pll_lock_target_end(reg32)    REG_FLD_GET(PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_end, (reg32))
#define PLL_TDC_FREQDET_1_GET_rg_pll_lock_target_beg(reg32)    REG_FLD_GET(PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_beg, (reg32))

#define PLL_TDC_FREQDET_2_GET_rg_pll_unlock_target_end(reg32)  REG_FLD_GET(PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_end, (reg32))
#define PLL_TDC_FREQDET_2_GET_rg_pll_unlock_target_beg(reg32)  REG_FLD_GET(PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_beg, (reg32))

#define PLL_TDC_FREQDET_3_GET_rg_pll_wait_100us(reg32)         REG_FLD_GET(PLL_TDC_FREQDET_3_FLD_rg_pll_wait_100us, (reg32))
#define PLL_TDC_FREQDET_3_GET_rg_pll_unlockth(reg32)           REG_FLD_GET(PLL_TDC_FREQDET_3_FLD_rg_pll_unlockth, (reg32))
#define PLL_TDC_FREQDET_3_GET_rg_pll_lock_lockth(reg32)        REG_FLD_GET(PLL_TDC_FREQDET_3_FLD_rg_pll_lock_lockth, (reg32))
#define PLL_TDC_FREQDET_3_GET_rg_pll_lock_cnt_clear(reg32)     REG_FLD_GET(PLL_TDC_FREQDET_3_FLD_rg_pll_lock_cnt_clear, (reg32))
#define PLL_TDC_FREQDET_3_GET_rg_pll_freqlock_det_en(reg32)    REG_FLD_GET(PLL_TDC_FREQDET_3_FLD_rg_pll_freqlock_det_en, (reg32))

#define DA_XPON_TX_FORCE_0_GET_rg_force_tx_ck_en(reg32)        REG_FLD_GET(DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ck_en, (reg32))
#define DA_XPON_TX_FORCE_0_GET_rg_disb_tx_ck_en(reg32)         REG_FLD_GET(DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ck_en, (reg32))
#define DA_XPON_TX_FORCE_0_GET_rg_force_tx_ldo_lpf_en(reg32)   REG_FLD_GET(DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ldo_lpf_en, (reg32))
#define DA_XPON_TX_FORCE_0_GET_rg_disb_tx_ldo_lpf_en(reg32)    REG_FLD_GET(DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ldo_lpf_en, (reg32))

#define DA_XPON_TX_FORCE_1_GET_rg_disb_da_xpon_tx_data_ben(reg32) REG_FLD_GET(DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data_ben, (reg32))
#define DA_XPON_TX_FORCE_1_GET_rg_disb_da_xpon_tx_data(reg32)  REG_FLD_GET(DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data, (reg32))
#define DA_XPON_TX_FORCE_1_GET_rg_force_tx_hsdata_en(reg32)    REG_FLD_GET(DA_XPON_TX_FORCE_1_FLD_rg_force_tx_hsdata_en, (reg32))
#define DA_XPON_TX_FORCE_1_GET_rg_disb_tx_hsdata_en(reg32)     REG_FLD_GET(DA_XPON_TX_FORCE_1_FLD_rg_disb_tx_hsdata_en, (reg32))

#define DA_XPON_TX_FORCE_2_GET_rg_force_da_xpon_tx_data_ben(reg32) REG_FLD_GET(DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data_ben, (reg32))
#define DA_XPON_TX_FORCE_2_GET_rg_force_da_xpon_tx_data(reg32) REG_FLD_GET(DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data, (reg32))

#define RX_FORCE_MODE_10_GET_rg_disb_status_rx_rst_b(reg32)    REG_FLD_GET(RX_FORCE_MODE_10_FLD_rg_disb_status_rx_rst_b, (reg32))
#define RX_FORCE_MODE_10_GET_rg_force_status_rx_rst_b(reg32)   REG_FLD_GET(RX_FORCE_MODE_10_FLD_rg_force_status_rx_rst_b, (reg32))

#define ADD_CLKPATH_RST_0_GET_rg_xpon_pma_probe_sel(reg32)     REG_FLD_GET(ADD_CLKPATH_RST_0_FLD_rg_xpon_pma_probe_sel, (reg32))
#define ADD_CLKPATH_RST_0_GET_rg_tdc_lck2ref_sel(reg32)        REG_FLD_GET(ADD_CLKPATH_RST_0_FLD_rg_tdc_lck2ref_sel, (reg32))
#define ADD_CLKPATH_RST_0_GET_rg_clkpath_rstb_ck(reg32)        REG_FLD_GET(ADD_CLKPATH_RST_0_FLD_rg_clkpath_rstb_ck, (reg32))
#define ADD_CLKPATH_RST_0_GET_rg_clkpath_rst_en(reg32)         REG_FLD_GET(ADD_CLKPATH_RST_0_FLD_rg_clkpath_rst_en, (reg32))

#define ADD_XPON_MODE_1_GET_rg_r2t_fifo_en(reg32)              REG_FLD_GET(ADD_XPON_MODE_1_FLD_rg_r2t_fifo_en, (reg32))
#define ADD_XPON_MODE_1_GET_rg_tx_bist_gen_en(reg32)           REG_FLD_GET(ADD_XPON_MODE_1_FLD_rg_tx_bist_gen_en, (reg32))
#define ADD_XPON_MODE_1_GET_rg_xfi_rx_mode(reg32)              REG_FLD_GET(ADD_XPON_MODE_1_FLD_rg_xfi_rx_mode, (reg32))
#define ADD_XPON_MODE_1_GET_rg_r2t_mode(reg32)                 REG_FLD_GET(ADD_XPON_MODE_1_FLD_rg_r2t_mode, (reg32))
#define ADD_XPON_MODE_1_GET_rg_xfi_tx_mode(reg32)              REG_FLD_GET(ADD_XPON_MODE_1_FLD_rg_xfi_tx_mode, (reg32))
#define ADD_XPON_MODE_1_GET_rg_xpon_mode(reg32)                REG_FLD_GET(ADD_XPON_MODE_1_FLD_rg_xpon_mode, (reg32))

#define ADD_R2T_MODE_1_GET_rg_rx_asic_uses_ff(reg32)           REG_FLD_GET(ADD_R2T_MODE_1_FLD_rg_rx_asic_uses_ff, (reg32))
#define ADD_R2T_MODE_1_GET_rg_rx_afifo_adj(reg32)              REG_FLD_GET(ADD_R2T_MODE_1_FLD_rg_rx_afifo_adj, (reg32))
#define ADD_R2T_MODE_1_GET_rg_r2t_asic_uses_ff(reg32)          REG_FLD_GET(ADD_R2T_MODE_1_FLD_rg_r2t_asic_uses_ff, (reg32))
#define ADD_R2T_MODE_1_GET_rg_r2t_afifo_adj(reg32)             REG_FLD_GET(ADD_R2T_MODE_1_FLD_rg_r2t_afifo_adj, (reg32))

#define ADD_T2R_MODE_1_GET_rg_tx_asic_uses_ff(reg32)           REG_FLD_GET(ADD_T2R_MODE_1_FLD_rg_tx_asic_uses_ff, (reg32))
#define ADD_T2R_MODE_1_GET_rg_tx_afifo_adj(reg32)              REG_FLD_GET(ADD_T2R_MODE_1_FLD_rg_tx_afifo_adj, (reg32))
#define ADD_T2R_MODE_1_GET_rg_t2r_asic_uses_ff(reg32)          REG_FLD_GET(ADD_T2R_MODE_1_FLD_rg_t2r_asic_uses_ff, (reg32))
#define ADD_T2R_MODE_1_GET_rg_t2r_afifo_adj(reg32)             REG_FLD_GET(ADD_T2R_MODE_1_FLD_rg_t2r_afifo_adj, (reg32))
#define ADD_T2R_MODE_1_GET_rg_xpon_t2r_bist_mode(reg32)        REG_FLD_GET(ADD_T2R_MODE_1_FLD_rg_xpon_t2r_bist_mode, (reg32))
#define ADD_T2R_MODE_1_GET_rg_t2r_fifo_en(reg32)               REG_FLD_GET(ADD_T2R_MODE_1_FLD_rg_t2r_fifo_en, (reg32))

#define ADD_LCPLL_RO_1_GET_ro_rx_sequence(reg32)               REG_FLD_GET(ADD_LCPLL_RO_1_FLD_ro_rx_sequence, (reg32))
#define ADD_LCPLL_RO_1_GET_ro_pll_fbck_lock2(reg32)            REG_FLD_GET(ADD_LCPLL_RO_1_FLD_ro_pll_fbck_lock2, (reg32))
#define ADD_LCPLL_RO_1_GET_ro_lcpll_ck_stb(reg32)              REG_FLD_GET(ADD_LCPLL_RO_1_FLD_ro_lcpll_ck_stb, (reg32))
#define ADD_LCPLL_RO_1_GET_ro_tdc_ck_stb(reg32)                REG_FLD_GET(ADD_LCPLL_RO_1_FLD_ro_tdc_ck_stb, (reg32))

#define ADD_RO_RX2ANA_1_GET_ro_rx_dac_e0(reg32)                REG_FLD_GET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_e0, (reg32))
#define ADD_RO_RX2ANA_1_GET_ro_rx_dac_d1(reg32)                REG_FLD_GET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d1, (reg32))
#define ADD_RO_RX2ANA_1_GET_ro_rx_dac_d0(reg32)                REG_FLD_GET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d0, (reg32))
#define ADD_RO_RX2ANA_1_GET_ro_rx_dac_eye(reg32)               REG_FLD_GET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_eye, (reg32))

#define ADD_RO_RX2ANA_2_GET_ro_da_xpon_rx_sigdet_os(reg32)     REG_FLD_GET(ADD_RO_RX2ANA_2_FLD_ro_da_xpon_rx_sigdet_os, (reg32))
#define ADD_RO_RX2ANA_2_GET_ro_rx_blwc_offset(reg32)           REG_FLD_GET(ADD_RO_RX2ANA_2_FLD_ro_rx_blwc_offset, (reg32))
#define ADD_RO_RX2ANA_2_GET_ro_rx_feos_out(reg32)              REG_FLD_GET(ADD_RO_RX2ANA_2_FLD_ro_rx_feos_out, (reg32))
#define ADD_RO_RX2ANA_2_GET_ro_rx_dac_e1(reg32)                REG_FLD_GET(ADD_RO_RX2ANA_2_FLD_ro_rx_dac_e1, (reg32))

#define ADD_RO_RX2ANA_3_GET_ro_rx_fifo_full_cnt(reg32)         REG_FLD_GET(ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_full_cnt, (reg32))
#define ADD_RO_RX2ANA_3_GET_ro_rx_fifo_empty_cnt(reg32)        REG_FLD_GET(ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_empty_cnt, (reg32))
#define ADD_RO_RX2ANA_3_GET_ro_rx_pi_cal_data_out(reg32)       REG_FLD_GET(ADD_RO_RX2ANA_3_FLD_ro_rx_pi_cal_data_out, (reg32))

#define ADD_RO_R2TMODE_1_GET_ro_r2t_fifo_empty_cnt(reg32)      REG_FLD_GET(ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_empty_cnt, (reg32))
#define ADD_RO_R2TMODE_1_GET_ro_r2t_fifo_full_cnt(reg32)       REG_FLD_GET(ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_full_cnt, (reg32))
#define ADD_RO_R2TMODE_1_GET_ro_r2t_data_afifo(reg32)          REG_FLD_GET(ADD_RO_R2TMODE_1_FLD_ro_r2t_data_afifo, (reg32))

#define RG_LCPLL_XPON_CMN_STB_CTRL_0_GET_rg_xpon_cmn_force_on(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_force_on, (reg32))
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_GET_rg_xpon_cmn_man_pwdb(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_man_pwdb, (reg32))
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_GET_rg_xpon_cmn_en_timer(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_en_timer, (reg32))

#define RG_LCPLL_XPON_CMN_STB_CTRL_1_GET_rg_tx_hsdata_en_ext_mode(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_hsdata_en_ext_mode, (reg32))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_GET_rg_tx_d_toggle_en(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_d_toggle_en, (reg32))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_GET_rg_xpon_cmn_inv(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_inv, (reg32))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_GET_rg_xpon_cmn_hw_ctrl_mode(reg32) REG_FLD_GET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_hw_ctrl_mode, (reg32))

#define RG_TX_HSDATA_EN_EXT_CNT_0_GET_rg_tx_hsdata_en_cnt(reg32) REG_FLD_GET(RG_TX_HSDATA_EN_EXT_CNT_0_FLD_rg_tx_hsdata_en_cnt, (reg32))

#define PON_TX_COUNTER_0_GET_rg_txcalib_5us(reg32)             REG_FLD_GET(PON_TX_COUNTER_0_FLD_rg_txcalib_5us, (reg32))
#define PON_TX_COUNTER_0_GET_rg_txcalib_50us(reg32)            REG_FLD_GET(PON_TX_COUNTER_0_FLD_rg_txcalib_50us, (reg32))

#define PON_TX_COUNTER_1_GET_rg_tx_hsdata_en_wait(reg32)       REG_FLD_GET(PON_TX_COUNTER_1_FLD_rg_tx_hsdata_en_wait, (reg32))
#define PON_TX_COUNTER_1_GET_rg_tx_ck_en_wait(reg32)           REG_FLD_GET(PON_TX_COUNTER_1_FLD_rg_tx_ck_en_wait, (reg32))

#define PON_TX_COUNTER_2_GET_rg_tx_serdes_rdy_wait(reg32)      REG_FLD_GET(PON_TX_COUNTER_2_FLD_rg_tx_serdes_rdy_wait, (reg32))
#define PON_TX_COUNTER_2_GET_rg_tx_power_on_wait(reg32)        REG_FLD_GET(PON_TX_COUNTER_2_FLD_rg_tx_power_on_wait, (reg32))

#define PON_TX_COUNTER_3_GET_ro_tx_serdes_rdy(reg32)           REG_FLD_GET(PON_TX_COUNTER_3_FLD_ro_tx_serdes_rdy, (reg32))

#define PON_CK_SET_GET_rg_txck_inv(reg32)                      REG_FLD_GET(PON_CK_SET_FLD_rg_txck_inv, (reg32))
#define PON_CK_SET_GET_rg_rxck_inv(reg32)                      REG_FLD_GET(PON_CK_SET_FLD_rg_rxck_inv, (reg32))
#define PON_CK_SET_GET_rg_rxck_sync_inv(reg32)                 REG_FLD_GET(PON_CK_SET_FLD_rg_rxck_sync_inv, (reg32))
#define PON_CK_SET_GET_rg_rxck_dbg_inv(reg32)                  REG_FLD_GET(PON_CK_SET_FLD_rg_rxck_dbg_inv, (reg32))
#define PON_CK_SET_GET_rg_force_ck_g(reg32)                    REG_FLD_GET(PON_CK_SET_FLD_rg_force_ck_g, (reg32))
#define PON_CK_SET_GET_rg_force_e_txmode(reg32)                REG_FLD_GET(PON_CK_SET_FLD_rg_force_e_txmode, (reg32))
#define PON_CK_SET_GET_rg_force_xg_txmode(reg32)               REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_txmode, (reg32))
#define PON_CK_SET_GET_rg_force_xe_mode(reg32)                 REG_FLD_GET(PON_CK_SET_FLD_rg_force_xe_mode, (reg32))
#define PON_CK_SET_GET_rg_force_xg_mode(reg32)                 REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_mode, (reg32))
#define PON_CK_SET_GET_rg_force_ge_mode(reg32)                 REG_FLD_GET(PON_CK_SET_FLD_rg_force_ge_mode, (reg32))
#define PON_CK_SET_GET_rg_force_e_mode(reg32)                  REG_FLD_GET(PON_CK_SET_FLD_rg_force_e_mode, (reg32))
#define PON_CK_SET_GET_rg_force_g_mode(reg32)                  REG_FLD_GET(PON_CK_SET_FLD_rg_force_g_mode, (reg32))
#define PON_CK_SET_GET_rg_force_xg_rxmapmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_rxmapmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_ge_rxmapmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_ge_rxmapmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_xe_txmapmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_xe_txmapmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_xg_txmapmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_txmapmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_ge_txmapmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_ge_txmapmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_xg_rxpcsmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_rxpcsmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_ge_rxpcsmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_ge_rxpcsmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_xe_txpcsmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_xe_txpcsmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_xg_txpcsmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_txpcsmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_ge_txpcsmodesel(reg32)         REG_FLD_GET(PON_CK_SET_FLD_rg_force_ge_txpcsmodesel, (reg32))
#define PON_CK_SET_GET_rg_force_xg_txpcsdiv2modesel(reg32)     REG_FLD_GET(PON_CK_SET_FLD_rg_force_xg_txpcsdiv2modesel, (reg32))
#define PON_CK_SET_GET_rg_force_bg_rx(reg32)                   REG_FLD_GET(PON_CK_SET_FLD_rg_force_bg_rx, (reg32))
#define PON_CK_SET_GET_rg_force_bg_tx(reg32)                   REG_FLD_GET(PON_CK_SET_FLD_rg_force_bg_tx, (reg32))

#define TX_FIFO_MODE_SEL_GET_rg_xfi_phyck_inv(reg32)           REG_FLD_GET(TX_FIFO_MODE_SEL_FLD_rg_xfi_phyck_inv, (reg32))
#define TX_FIFO_MODE_SEL_GET_rg_tx_afifo_mode(reg32)           REG_FLD_GET(TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_mode, (reg32))
#define TX_FIFO_MODE_SEL_GET_rg_tx_afifo_en(reg32)             REG_FLD_GET(TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_en, (reg32))

#define XPON_PLL_STB_CNT_GET_rg_xpon_pll_stb_cnt(reg32)        REG_FLD_GET(XPON_PLL_STB_CNT_FLD_rg_xpon_pll_stb_cnt, (reg32))

#define XPON_PLL_STOP_CNT_GET_rg_xpon_pll_stop_cnt(reg32)      REG_FLD_GET(XPON_PLL_STOP_CNT_FLD_rg_xpon_pll_stop_cnt, (reg32))

#define SW_RST_SET_GET_rg_sw_xfi_rxmac_rst_n(reg32)            REG_FLD_GET(SW_RST_SET_FLD_rg_sw_xfi_rxmac_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_xfi_txmac_rst_n(reg32)            REG_FLD_GET(SW_RST_SET_FLD_rg_sw_xfi_txmac_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_ponolt_rxmac_rst_n(reg32)         REG_FLD_GET(SW_RST_SET_FLD_rg_sw_ponolt_rxmac_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_ponolt_rxpcs_rst_n(reg32)         REG_FLD_GET(SW_RST_SET_FLD_rg_sw_ponolt_rxpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_ponolt_txmac_rst_n(reg32)         REG_FLD_GET(SW_RST_SET_FLD_rg_sw_ponolt_txmac_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_ponolt_txpcs_rst_n(reg32)         REG_FLD_GET(SW_RST_SET_FLD_rg_sw_ponolt_txpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_hsg_rxpcs_rst_n(reg32)            REG_FLD_GET(SW_RST_SET_FLD_rg_sw_hsg_rxpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_hsg_txpcs_rst_n(reg32)            REG_FLD_GET(SW_RST_SET_FLD_rg_sw_hsg_txpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_xfi_rxpcs_bist_rst_n(reg32)       REG_FLD_GET(SW_RST_SET_FLD_rg_sw_xfi_rxpcs_bist_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_xfi_rxpcs_rst_n(reg32)            REG_FLD_GET(SW_RST_SET_FLD_rg_sw_xfi_rxpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_xfi_txpcs_rst_n(reg32)            REG_FLD_GET(SW_RST_SET_FLD_rg_sw_xfi_txpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_tx_fifo_rst_n(reg32)              REG_FLD_GET(SW_RST_SET_FLD_rg_sw_tx_fifo_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_ref_rst_n(reg32)                  REG_FLD_GET(SW_RST_SET_FLD_rg_sw_ref_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_allpcs_rst_n(reg32)               REG_FLD_GET(SW_RST_SET_FLD_rg_sw_allpcs_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_pma_rst_n(reg32)                  REG_FLD_GET(SW_RST_SET_FLD_rg_sw_pma_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_tx_rst_n(reg32)                   REG_FLD_GET(SW_RST_SET_FLD_rg_sw_tx_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_rx_rst_n(reg32)                   REG_FLD_GET(SW_RST_SET_FLD_rg_sw_rx_rst_n, (reg32))
#define SW_RST_SET_GET_rg_sw_rx_fifo_rst_n(reg32)              REG_FLD_GET(SW_RST_SET_FLD_rg_sw_rx_fifo_rst_n, (reg32))

#define ADD_RO_TX2ANA_1_GET_ro_tx_fifo_full_cnt(reg32)         REG_FLD_GET(ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_full_cnt, (reg32))
#define ADD_RO_TX2ANA_1_GET_ro_tx_fifo_empty_cnt(reg32)        REG_FLD_GET(ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_empty_cnt, (reg32))

#define TX_DLY_CTRL_GET_rg_outben_data_mode(reg32)             REG_FLD_GET(TX_DLY_CTRL_FLD_rg_outben_data_mode, (reg32))
#define TX_DLY_CTRL_GET_rg_tx_non_reverse_gpon(reg32)          REG_FLD_GET(TX_DLY_CTRL_FLD_rg_tx_non_reverse_gpon, (reg32))
#define TX_DLY_CTRL_GET_rg_rx_non_reverse_gpon(reg32)          REG_FLD_GET(TX_DLY_CTRL_FLD_rg_rx_non_reverse_gpon, (reg32))
#define TX_DLY_CTRL_GET_rg_tx_non_reverse_epon(reg32)          REG_FLD_GET(TX_DLY_CTRL_FLD_rg_tx_non_reverse_epon, (reg32))
#define TX_DLY_CTRL_GET_rg_rx_non_reverse_epon(reg32)          REG_FLD_GET(TX_DLY_CTRL_FLD_rg_rx_non_reverse_epon, (reg32))
#define TX_DLY_CTRL_GET_rg_tx_ben_exten_ftune(reg32)           REG_FLD_GET(TX_DLY_CTRL_FLD_rg_tx_ben_exten_ftune, (reg32))
#define TX_DLY_CTRL_GET_rg_txben_pre_post_zero_en(reg32)       REG_FLD_GET(TX_DLY_CTRL_FLD_rg_txben_pre_post_zero_en, (reg32))
#define TX_DLY_CTRL_GET_rg_tx_dly_ben_ftune(reg32)             REG_FLD_GET(TX_DLY_CTRL_FLD_rg_tx_dly_ben_ftune, (reg32))
#define TX_DLY_CTRL_GET_rg_tx_dly_data_ftune(reg32)            REG_FLD_GET(TX_DLY_CTRL_FLD_rg_tx_dly_data_ftune, (reg32))

#define MEM_WRAPPER_CTRL_GET_rg_rx_pma_fifo_pd(reg32)          REG_FLD_GET(MEM_WRAPPER_CTRL_FLD_rg_rx_pma_fifo_pd, (reg32))
#define MEM_WRAPPER_CTRL_GET_rg_tx_pma_fifo_pd(reg32)          REG_FLD_GET(MEM_WRAPPER_CTRL_FLD_rg_tx_pma_fifo_pd, (reg32))
#define MEM_WRAPPER_CTRL_GET_rg_gfifo_fec_mem_pd(reg32)        REG_FLD_GET(MEM_WRAPPER_CTRL_FLD_rg_gfifo_fec_mem_pd, (reg32))
#define MEM_WRAPPER_CTRL_GET_rg_up_md32_wrap_pd(reg32)         REG_FLD_GET(MEM_WRAPPER_CTRL_FLD_rg_up_md32_wrap_pd, (reg32))

#define XPON_INT_EN_2_GET_rg_pma_rx_afifo_full_int_en(reg32)   REG_FLD_GET(XPON_INT_EN_2_FLD_rg_pma_rx_afifo_full_int_en, (reg32))
#define XPON_INT_EN_2_GET_rg_pma_rx_afifo_empty_int_en(reg32)  REG_FLD_GET(XPON_INT_EN_2_FLD_rg_pma_rx_afifo_empty_int_en, (reg32))
#define XPON_INT_EN_2_GET_rg_pma_tx_afifo_full_int_en(reg32)   REG_FLD_GET(XPON_INT_EN_2_FLD_rg_pma_tx_afifo_full_int_en, (reg32))
#define XPON_INT_EN_2_GET_rg_pma_tx_afifo_empty_int_en(reg32)  REG_FLD_GET(XPON_INT_EN_2_FLD_rg_pma_tx_afifo_empty_int_en, (reg32))

#define XPON_INT_EN_3_GET_rg_trans_laser_on_int_en(reg32)      REG_FLD_GET(XPON_INT_EN_3_FLD_rg_trans_laser_on_int_en, (reg32))
#define XPON_INT_EN_3_GET_rg_rx_sigdet_int_en(reg32)           REG_FLD_GET(XPON_INT_EN_3_FLD_rg_rx_sigdet_int_en, (reg32))
#define XPON_INT_EN_3_GET_rg_rx_freqdet_unlock_int_en(reg32)   REG_FLD_GET(XPON_INT_EN_3_FLD_rg_rx_freqdet_unlock_int_en, (reg32))
#define XPON_INT_EN_3_GET_rg_tx_freqdet_unlock_int_en(reg32)   REG_FLD_GET(XPON_INT_EN_3_FLD_rg_tx_freqdet_unlock_int_en, (reg32))

#define XPON_INT_STA_2_GET_pma_rx_afifo_full_int(reg32)        REG_FLD_GET(XPON_INT_STA_2_FLD_pma_rx_afifo_full_int, (reg32))
#define XPON_INT_STA_2_GET_pma_rx_afifo_empty_int(reg32)       REG_FLD_GET(XPON_INT_STA_2_FLD_pma_rx_afifo_empty_int, (reg32))
#define XPON_INT_STA_2_GET_pma_tx_afifo_full_int(reg32)        REG_FLD_GET(XPON_INT_STA_2_FLD_pma_tx_afifo_full_int, (reg32))
#define XPON_INT_STA_2_GET_pma_tx_afifo_empty_int(reg32)       REG_FLD_GET(XPON_INT_STA_2_FLD_pma_tx_afifo_empty_int, (reg32))

#define XPON_INT_STA_3_GET_trans_laser_on_int(reg32)           REG_FLD_GET(XPON_INT_STA_3_FLD_trans_laser_on_int, (reg32))
#define XPON_INT_STA_3_GET_rx_sigdet_int(reg32)                REG_FLD_GET(XPON_INT_STA_3_FLD_rx_sigdet_int, (reg32))
#define XPON_INT_STA_3_GET_rx_freqdet_unlock_int(reg32)        REG_FLD_GET(XPON_INT_STA_3_FLD_rx_freqdet_unlock_int, (reg32))
#define XPON_INT_STA_3_GET_tx_freqdet_unlock_int(reg32)        REG_FLD_GET(XPON_INT_STA_3_FLD_tx_freqdet_unlock_int, (reg32))

#define XPON_SD_BEHAVIOR_SETTING_0_GET_rg_trans_rogue_onu_cnt(reg32) REG_FLD_GET(XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_rogue_onu_cnt, (reg32))
#define XPON_SD_BEHAVIOR_SETTING_0_GET_rg_trans_sd_fail_cnt(reg32) REG_FLD_GET(XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_sd_fail_cnt, (reg32))

#define XPON_SD_BEHAVIOR_SETTING_1_GET_rg_trans_rogue_onu_cnt_clr(reg32) REG_FLD_GET(XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_rogue_onu_cnt_clr, (reg32))
#define XPON_SD_BEHAVIOR_SETTING_1_GET_rg_trans_sd_fail_cnt_clr(reg32) REG_FLD_GET(XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_sd_fail_cnt_clr, (reg32))

#define XPON_SD_BEHAVIOR_STA_GET_ro_trans_rogue_onu_cnt(reg32) REG_FLD_GET(XPON_SD_BEHAVIOR_STA_FLD_ro_trans_rogue_onu_cnt, (reg32))
#define XPON_SD_BEHAVIOR_STA_GET_ro_trans_sd_fail_cnt(reg32)   REG_FLD_GET(XPON_SD_BEHAVIOR_STA_FLD_ro_trans_sd_fail_cnt, (reg32))

#define RX_EXTRAL_CTRL_GET_rg_abnormal_cnt(reg32)              REG_FLD_GET(RX_EXTRAL_CTRL_FLD_rg_abnormal_cnt, (reg32))
#define RX_EXTRAL_CTRL_GET_rg_blwc_opt(reg32)                  REG_FLD_GET(RX_EXTRAL_CTRL_FLD_rg_blwc_opt, (reg32))
#define RX_EXTRAL_CTRL_GET_rg_l2d_trig_eq_en_time(reg32)       REG_FLD_GET(RX_EXTRAL_CTRL_FLD_rg_l2d_trig_eq_en_time, (reg32))
#define RX_EXTRAL_CTRL_GET_rg_heo_rdy_opt(reg32)               REG_FLD_GET(RX_EXTRAL_CTRL_FLD_rg_heo_rdy_opt, (reg32))
#define RX_EXTRAL_CTRL_GET_rg_os_rdy_latch(reg32)              REG_FLD_GET(RX_EXTRAL_CTRL_FLD_rg_os_rdy_latch, (reg32))
#define RX_EXTRAL_CTRL_GET_rg_disb_leq(reg32)                  REG_FLD_GET(RX_EXTRAL_CTRL_FLD_rg_disb_leq, (reg32))

#define RX_LEQ_DISB_CTRL0_GET_rg_disb_leq_avg_en(reg32)        REG_FLD_GET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_avg_en, (reg32))
#define RX_LEQ_DISB_CTRL0_GET_rg_disb_leq_leak_en(reg32)       REG_FLD_GET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_leak_en, (reg32))
#define RX_LEQ_DISB_CTRL0_GET_rg_disb_leq_pf_ctrl(reg32)       REG_FLD_GET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_pf_ctrl, (reg32))
#define RX_LEQ_DISB_CTRL0_GET_rg_disb_leq_len_ctrl(reg32)      REG_FLD_GET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_len_ctrl, (reg32))

#define RX_LEQ_DISB_CTRL1_GET_rg_disb_leq_rst_b(reg32)         REG_FLD_GET(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_rst_b, (reg32))
#define RX_LEQ_DISB_CTRL1_GET_rg_disb_leq_done(reg32)          REG_FLD_GET(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_done, (reg32))
#define RX_LEQ_DISB_CTRL1_GET_rg_disb_leq_en(reg32)            REG_FLD_GET(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_en, (reg32))

#define RX_LEQ_FORCE_CTRL0_GET_rg_leq_avg_en(reg32)            REG_FLD_GET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_avg_en, (reg32))
#define RX_LEQ_FORCE_CTRL0_GET_rg_leq_leak_en(reg32)           REG_FLD_GET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_leak_en, (reg32))
#define RX_LEQ_FORCE_CTRL0_GET_rg_leq_pf_ctrl(reg32)           REG_FLD_GET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_pf_ctrl, (reg32))
#define RX_LEQ_FORCE_CTRL0_GET_rg_leq_len_ctrl(reg32)          REG_FLD_GET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_len_ctrl, (reg32))

#define RX_LEQ_FORCE_CTRL1_GET_rg_abnormal_cnt_reset_disb(reg32) REG_FLD_GET(RX_LEQ_FORCE_CTRL1_FLD_rg_abnormal_cnt_reset_disb, (reg32))
#define RX_LEQ_FORCE_CTRL1_GET_rg_leq_rst_b(reg32)             REG_FLD_GET(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_rst_b, (reg32))
#define RX_LEQ_FORCE_CTRL1_GET_rg_leq_done(reg32)              REG_FLD_GET(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_done, (reg32))
#define RX_LEQ_FORCE_CTRL1_GET_rg_leq_en(reg32)                REG_FLD_GET(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_en, (reg32))

#define RX_LEQ_ENTIME_CTRL0_GET_rg_entime_leq_len_ctrl3(reg32) REG_FLD_GET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl3, (reg32))
#define RX_LEQ_ENTIME_CTRL0_GET_rg_entime_leq_len_ctrl2(reg32) REG_FLD_GET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl2, (reg32))
#define RX_LEQ_ENTIME_CTRL0_GET_rg_entime_leq_len_ctrl1(reg32) REG_FLD_GET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl1, (reg32))
#define RX_LEQ_ENTIME_CTRL0_GET_rg_entime_leq_len_ctrl0(reg32) REG_FLD_GET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl0, (reg32))

#define RX_LEQ_ENTIME_CTRL1_GET_rg_entime_leq_pf_ctrl3(reg32)  REG_FLD_GET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl3, (reg32))
#define RX_LEQ_ENTIME_CTRL1_GET_rg_entime_leq_pf_ctrl2(reg32)  REG_FLD_GET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl2, (reg32))
#define RX_LEQ_ENTIME_CTRL1_GET_rg_entime_leq_pf_ctrl1(reg32)  REG_FLD_GET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl1, (reg32))
#define RX_LEQ_ENTIME_CTRL1_GET_rg_entime_leq_pf_ctrl0(reg32)  REG_FLD_GET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl0, (reg32))

#define RX_LEQ_ENTIME_CTRL2_GET_rg_entime_res(reg32)           REG_FLD_GET(RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_res, (reg32))
#define RX_LEQ_ENTIME_CTRL2_GET_rg_timeslot_res(reg32)         REG_FLD_GET(RX_LEQ_ENTIME_CTRL2_FLD_rg_timeslot_res, (reg32))
#define RX_LEQ_ENTIME_CTRL2_GET_rg_disentime_leq_leak_en(reg32) REG_FLD_GET(RX_LEQ_ENTIME_CTRL2_FLD_rg_disentime_leq_leak_en, (reg32))
#define RX_LEQ_ENTIME_CTRL2_GET_rg_entime_leq_avg(reg32)       REG_FLD_GET(RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_leq_avg, (reg32))

#define RX_LEQ_CTRL0_GET_rg_leq_init_set(reg32)                REG_FLD_GET(RX_LEQ_CTRL0_FLD_rg_leq_init_set, (reg32))
#define RX_LEQ_CTRL0_GET_rg_leq_init_val(reg32)                REG_FLD_GET(RX_LEQ_CTRL0_FLD_rg_leq_init_val, (reg32))
#define RX_LEQ_CTRL0_GET_rg_leq_gain(reg32)                    REG_FLD_GET(RX_LEQ_CTRL0_FLD_rg_leq_gain, (reg32))
#define RX_LEQ_CTRL0_GET_rg_leq_update_pause(reg32)            REG_FLD_GET(RX_LEQ_CTRL0_FLD_rg_leq_update_pause, (reg32))

#define RX_LEQ_CTRL1_GET_rg_leq_leak_target(reg32)             REG_FLD_GET(RX_LEQ_CTRL1_FLD_rg_leq_leak_target, (reg32))
#define RX_LEQ_CTRL1_GET_rg_leq_leak_gain(reg32)               REG_FLD_GET(RX_LEQ_CTRL1_FLD_rg_leq_leak_gain, (reg32))
#define RX_LEQ_CTRL1_GET_rg_leq_bot_lim(reg32)                 REG_FLD_GET(RX_LEQ_CTRL1_FLD_rg_leq_bot_lim, (reg32))
#define RX_LEQ_CTRL1_GET_rg_leq_top_lim(reg32)                 REG_FLD_GET(RX_LEQ_CTRL1_FLD_rg_leq_top_lim, (reg32))

#define RX_LEQ_CTRL2_GET_rg_leq_gray_out_en(reg32)             REG_FLD_GET(RX_LEQ_CTRL2_FLD_rg_leq_gray_out_en, (reg32))
#define RX_LEQ_CTRL2_GET_rg_leq_avg_cycle(reg32)               REG_FLD_GET(RX_LEQ_CTRL2_FLD_rg_leq_avg_cycle, (reg32))

#define RX_LEQ_RO0_GET_ro_abnormal_cnt(reg32)                  REG_FLD_GET(RX_LEQ_RO0_FLD_ro_abnormal_cnt, (reg32))
#define RX_LEQ_RO0_GET_ro_eq_rdy(reg32)                        REG_FLD_GET(RX_LEQ_RO0_FLD_ro_eq_rdy, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_updn(reg32)                      REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_updn, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_avg_en(reg32)                    REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_avg_en, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_leak_en(reg32)                   REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_leak_en, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_pf_ctrl(reg32)                   REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_pf_ctrl, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_len_ctrl(reg32)                  REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_len_ctrl, (reg32))
#define RX_LEQ_RO0_GET_ro_eq_en(reg32)                         REG_FLD_GET(RX_LEQ_RO0_FLD_ro_eq_en, (reg32))
#define RX_LEQ_RO0_GET_ro_eq_done(reg32)                       REG_FLD_GET(RX_LEQ_RO0_FLD_ro_eq_done, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_en(reg32)                        REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_en, (reg32))
#define RX_LEQ_RO0_GET_ro_leq_rst_b(reg32)                     REG_FLD_GET(RX_LEQ_RO0_FLD_ro_leq_rst_b, (reg32))

#define RX_LEQ_RO1_GET_ro_eq_time_slot(reg32)                  REG_FLD_GET(RX_LEQ_RO1_FLD_ro_eq_time_slot, (reg32))
#define RX_LEQ_RO1_GET_ro_leq_time_slot(reg32)                 REG_FLD_GET(RX_LEQ_RO1_FLD_ro_leq_time_slot, (reg32))

#define PLL_FT_FREQDET_0_GET_rg_pll_ft_unlock_cyclecnt(reg32)  REG_FLD_GET(PLL_FT_FREQDET_0_FLD_rg_pll_ft_unlock_cyclecnt, (reg32))
#define PLL_FT_FREQDET_0_GET_rg_pll_ft_lock_cyclecnt(reg32)    REG_FLD_GET(PLL_FT_FREQDET_0_FLD_rg_pll_ft_lock_cyclecnt, (reg32))

#define PLL_FT_FREQDET_1_GET_rg_pll_ft_lock_target_end(reg32)  REG_FLD_GET(PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_end, (reg32))
#define PLL_FT_FREQDET_1_GET_rg_pll_ft_lock_target_beg(reg32)  REG_FLD_GET(PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_beg, (reg32))

#define PLL_FT_FREQDET_2_GET_rg_pll_ft_unlock_target_end(reg32) REG_FLD_GET(PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_end, (reg32))
#define PLL_FT_FREQDET_2_GET_rg_pll_ft_unlock_target_beg(reg32) REG_FLD_GET(PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_beg, (reg32))

#define PLL_FT_FREQDET_3_GET_rg_pll_ft_wait_100us(reg32)       REG_FLD_GET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_wait_100us, (reg32))
#define PLL_FT_FREQDET_3_GET_rg_pll_ft_unlockth(reg32)         REG_FLD_GET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_unlockth, (reg32))
#define PLL_FT_FREQDET_3_GET_rg_pll_ft_lock_lockth(reg32)      REG_FLD_GET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_lockth, (reg32))
#define PLL_FT_FREQDET_3_GET_rg_pll_ft_lock_cnt_clear(reg32)   REG_FLD_GET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_cnt_clear, (reg32))
#define PLL_FT_FREQDET_3_GET_rg_pll_ft_freqlock_det_en(reg32)  REG_FLD_GET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_freqlock_det_en, (reg32))

#define RO_RX_FREQDET_GET_ro_fl_out(reg32)                     REG_FLD_GET(RO_RX_FREQDET_FLD_ro_fl_out, (reg32))
#define RO_RX_FREQDET_GET_ro_state_freqdet(reg32)              REG_FLD_GET(RO_RX_FREQDET_FLD_ro_state_freqdet, (reg32))
#define RO_RX_FREQDET_GET_ro_lslock_cnt(reg32)                 REG_FLD_GET(RO_RX_FREQDET_FLD_ro_lslock_cnt, (reg32))
#define RO_RX_FREQDET_GET_ro_fbck_lock_inner(reg32)            REG_FLD_GET(RO_RX_FREQDET_FLD_ro_fbck_lock_inner, (reg32))
#define RO_RX_FREQDET_GET_ro_fbck_lock(reg32)                  REG_FLD_GET(RO_RX_FREQDET_FLD_ro_fbck_lock, (reg32))

#define RO_PLL_FREQDET_GET_ro_pll_fl_out(reg32)                REG_FLD_GET(RO_PLL_FREQDET_FLD_ro_pll_fl_out, (reg32))
#define RO_PLL_FREQDET_GET_ro_pll_state_freqdet(reg32)         REG_FLD_GET(RO_PLL_FREQDET_FLD_ro_pll_state_freqdet, (reg32))
#define RO_PLL_FREQDET_GET_ro_pll_lslock_cnt(reg32)            REG_FLD_GET(RO_PLL_FREQDET_FLD_ro_pll_lslock_cnt, (reg32))
#define RO_PLL_FREQDET_GET_ro_pll_fbck_lock_inner(reg32)       REG_FLD_GET(RO_PLL_FREQDET_FLD_ro_pll_fbck_lock_inner, (reg32))
#define RO_PLL_FREQDET_GET_ro_pll_fbck_lock(reg32)             REG_FLD_GET(RO_PLL_FREQDET_FLD_ro_pll_fbck_lock, (reg32))

#define RO_PLL_FT_FREQDET_GET_ro_pll_ft_fl_out(reg32)          REG_FLD_GET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fl_out, (reg32))
#define RO_PLL_FT_FREQDET_GET_ro_pll_ft_state_freqdet(reg32)   REG_FLD_GET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_state_freqdet, (reg32))
#define RO_PLL_FT_FREQDET_GET_ro_pll_ft_lslock_cnt(reg32)      REG_FLD_GET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_lslock_cnt, (reg32))
#define RO_PLL_FT_FREQDET_GET_ro_pll_ft_fbck_lock_inner(reg32) REG_FLD_GET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock_inner, (reg32))
#define RO_PLL_FT_FREQDET_GET_ro_pll_ft_fbck_lock(reg32)       REG_FLD_GET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock, (reg32))

#define RO_PMA_FREQDET_GET_ro_pma_freq_cnt_lsb(reg32)          REG_FLD_GET(RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_lsb, (reg32))
#define RO_PMA_FREQDET_GET_ro_pma_freq_cnt_max(reg32)          REG_FLD_GET(RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_max, (reg32))

#define RG_PMA_FREQDET_GET_rg_pma_freq_check_lsb(reg32)        REG_FLD_GET(RG_PMA_FREQDET_FLD_rg_pma_freq_check_lsb, (reg32))
#define RG_PMA_FREQDET_GET_rg_pma_freq_meter_sel(reg32)        REG_FLD_GET(RG_PMA_FREQDET_FLD_rg_pma_freq_meter_sel, (reg32))

#define RG_EXT_BEN_DATA_GET_rg_tx_loff_manu(reg32)             REG_FLD_GET(RG_EXT_BEN_DATA_FLD_rg_tx_loff_manu, (reg32))

#define RG_PRE_BEN_DATA_GET_rg_tx_bh_dl_dsel(reg32)            REG_FLD_GET(RG_PRE_BEN_DATA_FLD_rg_tx_bh_dl_dsel, (reg32))
#define RG_PRE_BEN_DATA_GET_rg_tx_lon_manu(reg32)              REG_FLD_GET(RG_PRE_BEN_DATA_FLD_rg_tx_lon_manu, (reg32))

#define RX_TORGS_DEBUG_12_GET_ro_injosc_rdy(reg32)             REG_FLD_GET(RX_TORGS_DEBUG_12_FLD_ro_injosc_rdy, (reg32))
#define RX_TORGS_DEBUG_12_GET_ro_kband_done(reg32)             REG_FLD_GET(RX_TORGS_DEBUG_12_FLD_ro_kband_done, (reg32))
#define RX_TORGS_DEBUG_12_GET_ro_y_index_o(reg32)              REG_FLD_GET(RX_TORGS_DEBUG_12_FLD_ro_y_index_o, (reg32))
#define RX_TORGS_DEBUG_12_GET_ro_x_index_o(reg32)              REG_FLD_GET(RX_TORGS_DEBUG_12_FLD_ro_x_index_o, (reg32))

#define RO_FLL_ADC_0_GET_rg_fll_dig_pro(reg32)                 REG_FLD_GET(RO_FLL_ADC_0_FLD_rg_fll_dig_pro, (reg32))
#define RO_FLL_ADC_0_GET_ro_adc_freq_output(reg32)             REG_FLD_GET(RO_FLL_ADC_0_FLD_ro_adc_freq_output, (reg32))

#define RO_FLL_ADC_1_GET_ro_adc_freq_inv_output(reg32)         REG_FLD_GET(RO_FLL_ADC_1_FLD_ro_adc_freq_inv_output, (reg32))

#define RO_FLL_ADC_2_GET_ro_cor_gain_output(reg32)             REG_FLD_GET(RO_FLL_ADC_2_FLD_ro_cor_gain_output, (reg32))

#define RO_FLL_ADC_3_GET_ro_cor_integ_output(reg32)            REG_FLD_GET(RO_FLL_ADC_3_FLD_ro_cor_integ_output, (reg32))

#define RO_FLL_ADC_4_GET_ro_cor_integ_inv_output(reg32)        REG_FLD_GET(RO_FLL_ADC_4_FLD_ro_cor_integ_inv_output, (reg32))

#define RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_GET_rg_ad_xpon_pll_ft_ck_mon_mux_sel(reg32) REG_FLD_GET(RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_FLD_rg_ad_xpon_pll_ft_ck_mon_mux_sel, (reg32))

#define XPON_INT_EN_4_GET_rg_pma_rx_afifo_reach_int_en(reg32)  REG_FLD_GET(XPON_INT_EN_4_FLD_rg_pma_rx_afifo_reach_int_en, (reg32))
#define XPON_INT_EN_4_GET_rg_pma_tx_afifo_reach_int_en(reg32)  REG_FLD_GET(XPON_INT_EN_4_FLD_rg_pma_tx_afifo_reach_int_en, (reg32))

#define XPON_INT_STA_4_GET_pma_rx_afifo_reach_int(reg32)       REG_FLD_GET(XPON_INT_STA_4_FLD_pma_rx_afifo_reach_int, (reg32))
#define XPON_INT_STA_4_GET_pma_tx_afifo_reach_int(reg32)       REG_FLD_GET(XPON_INT_STA_4_FLD_pma_tx_afifo_reach_int, (reg32))

#define XPON_PMA_AFIFO_REACH_TH_GET_rg_pma_rx_afifo_reach_th(reg32) REG_FLD_GET(XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_rx_afifo_reach_th, (reg32))
#define XPON_PMA_AFIFO_REACH_TH_GET_rg_pma_tx_afifo_reach_th(reg32) REG_FLD_GET(XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_tx_afifo_reach_th, (reg32))

#define XPON_MD32_PBUS_CSR_CTRL_GET_rg_md32_pbus_arb_en(reg32) REG_FLD_GET(XPON_MD32_PBUS_CSR_CTRL_FLD_rg_md32_pbus_arb_en, (reg32))

#define BENOFF_BIST_SEED_GET_rg_bist_prbs_init_seed_benoff(reg32) REG_FLD_GET(BENOFF_BIST_SEED_FLD_rg_bist_prbs_init_seed_benoff, (reg32))

#define PWR_PLL_CTRL_GET_rg_pll_pwr_seq_sel(reg32)             REG_FLD_GET(PWR_PLL_CTRL_FLD_rg_pll_pwr_seq_sel, (reg32))

#define xpon_tx_rate_ctrl_GET_rg_pon_tx_rate_ctrl(reg32)       REG_FLD_GET(xpon_tx_rate_ctrl_FLD_rg_pon_tx_rate_ctrl, (reg32))

#define BENOFF_DATA0_GET_rg_benoff_d0(reg32)                   REG_FLD_GET(BENOFF_DATA0_FLD_rg_benoff_d0, (reg32))

#define BENOFF_DATA1_GET_rg_benoff_d1(reg32)                   REG_FLD_GET(BENOFF_DATA1_FLD_rg_benoff_d1, (reg32))

#define BENOFF_DATA2_GET_rg_benoff_d2(reg32)                   REG_FLD_GET(BENOFF_DATA2_FLD_rg_benoff_d2, (reg32))

#define BENOFF_DATA3_GET_rg_benoff_d3(reg32)                   REG_FLD_GET(BENOFF_DATA3_FLD_rg_benoff_d3, (reg32))

#define BENOFF_CTRL_GET_rg_benoff_catch_mem_en(reg32)          REG_FLD_GET(BENOFF_CTRL_FLD_rg_benoff_catch_mem_en, (reg32))
#define BENOFF_CTRL_GET_rg_benoff_cnt_max(reg32)               REG_FLD_GET(BENOFF_CTRL_FLD_rg_benoff_cnt_max, (reg32))

#define HS_DATA_EN_SEL_GET_rg_hsdata_en_sel(reg32)             REG_FLD_GET(HS_DATA_EN_SEL_FLD_rg_hsdata_en_sel, (reg32))

#define FIFO_CK_STATUS_GET_ro_tx_rdfifo_depth(reg32)           REG_FLD_GET(FIFO_CK_STATUS_FLD_ro_tx_rdfifo_depth, (reg32))
#define FIFO_CK_STATUS_GET_ro_tx_wrfifo_depth(reg32)           REG_FLD_GET(FIFO_CK_STATUS_FLD_ro_tx_wrfifo_depth, (reg32))
#define FIFO_CK_STATUS_GET_ro_rx_rdfifo_depth(reg32)           REG_FLD_GET(FIFO_CK_STATUS_FLD_ro_rx_rdfifo_depth, (reg32))
#define FIFO_CK_STATUS_GET_ro_rx_wrfifo_depth(reg32)           REG_FLD_GET(FIFO_CK_STATUS_FLD_ro_rx_wrfifo_depth, (reg32))

#define TDC_DLF_GAIN_STATUS_GET_ro_dlf_gain_rund_new(reg32)    REG_FLD_GET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new, (reg32))
#define TDC_DLF_GAIN_STATUS_GET_ro_dlf_gain_new(reg32)         REG_FLD_GET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new, (reg32))

#define TDC_DLF_MODE_SETTING_GET_rg_dlf_gain_latch(reg32)      REG_FLD_GET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch, (reg32))
#define TDC_DLF_MODE_SETTING_GET_rg_dlf_mode_sel(reg32)        REG_FLD_GET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel, (reg32))
#define TDC_DLF_MODE_SETTING_GET_ro_dlf_gain_new_org(reg32)    REG_FLD_GET(TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org, (reg32))

#define MD32_ISR_CTRL_GET_rg_md32_sfp_rx_loss_inv(reg32)       REG_FLD_GET(MD32_ISR_CTRL_FLD_rg_md32_sfp_rx_loss_inv, (reg32))

#define MD32_MEM_CLK_CTRL_GET_rg_md32pm_ck_sel(reg32)          REG_FLD_GET(MD32_MEM_CLK_CTRL_FLD_rg_md32pm_ck_sel, (reg32))

#define MD32_MEM_CLK_CG_CTRL_GET_rg_force_md32d_ck_g(reg32)    REG_FLD_GET(MD32_MEM_CLK_CG_CTRL_FLD_rg_force_md32d_ck_g, (reg32))

#define XG_EQD_STA_GET_ro_xg_psync_to_sof_delay_lch(reg32)     REG_FLD_GET(XG_EQD_STA_FLD_ro_xg_psync_to_sof_delay_lch, (reg32))

#define XG_EQD_CTRL_GET_rg_xg_mask_window(reg32)               REG_FLD_GET(XG_EQD_CTRL_FLD_rg_xg_mask_window, (reg32))
#define XG_EQD_CTRL_GET_rg_xg_eqd_rst_n(reg32)                 REG_FLD_GET(XG_EQD_CTRL_FLD_rg_xg_eqd_rst_n, (reg32))

#define RAWDATA_DUMP_CTRL_0_GET_rg_rawdata_tx_en(reg32)        REG_FLD_GET(RAWDATA_DUMP_CTRL_0_FLD_rg_rawdata_tx_en, (reg32))

#define RAWDATA_DUMP_CTRL_1_GET_rg_rawdata_tx_wdata_sel(reg32) REG_FLD_GET(RAWDATA_DUMP_CTRL_1_FLD_rg_rawdata_tx_wdata_sel, (reg32))

#define RAWDATA_DUMP_CTRL_2_GET_rg_rawdata_mem_sel(reg32)      REG_FLD_GET(RAWDATA_DUMP_CTRL_2_FLD_rg_rawdata_mem_sel, (reg32))

#define RAWDATA_DUMP_CTRL_3_GET_rg_rawdata_tx_start_sel(reg32) REG_FLD_GET(RAWDATA_DUMP_CTRL_3_FLD_rg_rawdata_tx_start_sel, (reg32))

#define RAWDATA_DUMP_STA_0_GET_ro_rawdata_tx_waddr(reg32)      REG_FLD_GET(RAWDATA_DUMP_STA_0_FLD_ro_rawdata_tx_waddr, (reg32))

#define RAWDATA_DUMP_STA_1_GET_ro_rawdata_rx_waddr(reg32)      REG_FLD_GET(RAWDATA_DUMP_STA_1_FLD_ro_rawdata_rx_waddr, (reg32))

#define RAWDATA_DUMP_STA_2_GET_ro_rawdata_tx_full(reg32)       REG_FLD_GET(RAWDATA_DUMP_STA_2_FLD_ro_rawdata_tx_full, (reg32))

#define MD32MEM_DIV2_CNT_GET_rg_md32_mem_max(reg32)            REG_FLD_GET(MD32MEM_DIV2_CNT_FLD_rg_md32_mem_max, (reg32))

#define AD_XPON_CDR_LPF_SV_GET_AD_XPON_CDR_LPF_SNAPSHOTVALUE(reg32) REG_FLD_GET(AD_XPON_CDR_LPF_SV_FLD_AD_XPON_CDR_LPF_SNAPSHOTVALUE, (reg32))

#define K_VALUE_RD_GET_ro_dta_xpon_tx_termp_sel(reg32)         REG_FLD_GET(K_VALUE_RD_FLD_ro_dta_xpon_tx_termp_sel, (reg32))
#define K_VALUE_RD_GET_ro_dta_xpon_tx_termn_sel(reg32)         REG_FLD_GET(K_VALUE_RD_FLD_ro_dta_xpon_tx_termn_sel, (reg32))

#define XPONPLL_CTRL_GET_rg_jcpll_auto_en(reg32)               REG_FLD_GET(XPONPLL_CTRL_FLD_rg_jcpll_auto_en, (reg32))
#define XPONPLL_CTRL_GET_rg_xponpll_auto_en(reg32)             REG_FLD_GET(XPONPLL_CTRL_FLD_rg_xponpll_auto_en, (reg32))

#define MD32_GATE_HALT_GET_ro_md32_gated(reg32)                REG_FLD_GET(MD32_GATE_HALT_FLD_ro_md32_gated, (reg32))

#define MD32_MONCCNT_GET_ro_mon_ccnt(reg32)                    REG_FLD_GET(MD32_MONCCNT_FLD_ro_mon_ccnt, (reg32))

#define MD32_MONPCNT0_GET_ro_mon_pcnt0(reg32)                  REG_FLD_GET(MD32_MONPCNT0_FLD_ro_mon_pcnt0, (reg32))

#define MD32_MONPCNT1_GET_ro_mon_pcnt1(reg32)                  REG_FLD_GET(MD32_MONPCNT1_FLD_ro_mon_pcnt1, (reg32))

#define MD32_MONPCNT2_GET_ro_mon_pcnt2(reg32)                  REG_FLD_GET(MD32_MONPCNT2_FLD_ro_mon_pcnt2, (reg32))

#define MD32_MONCONTID_GET_ro_mon_contid(reg32)                REG_FLD_GET(MD32_MONCONTID_FLD_ro_mon_contid, (reg32))

#define MD32_MONPC_GET_ro_mon_pc(reg32)                        REG_FLD_GET(MD32_MONPC_FLD_ro_mon_pc, (reg32))

#define MD32_TBUF_GET_ro_mon_tbuf_wptr(reg32)                  REG_FLD_GET(MD32_TBUF_FLD_ro_mon_tbuf_wptr, (reg32))

#define MD32_TBUFWDATA_L_GET_ro_tbuf_wdata_l(reg32)            REG_FLD_GET(MD32_TBUFWDATA_L_FLD_ro_tbuf_wdata_l, (reg32))

#define MD32_TBUFWDATA_H_GET_ro_tbuf_wdata_h(reg32)            REG_FLD_GET(MD32_TBUFWDATA_H_FLD_ro_tbuf_wdata_h, (reg32))

#define MD32_TBUFRDATA_L_GET_ro_tbuf_rdata_l(reg32)            REG_FLD_GET(MD32_TBUFRDATA_L_FLD_ro_tbuf_rdata_l, (reg32))

#define MD32_TBUFRDATA_H_GET_ro_tbuf_rdata_h(reg32)            REG_FLD_GET(MD32_TBUFRDATA_H_FLD_ro_tbuf_rdata_h, (reg32))

#define ADDR_MD32_PMEM_ADDR_REV_GET_rg_addr_md32_pmem_addr(reg32) REG_FLD_GET(ADDR_MD32_PMEM_ADDR_REV_FLD_rg_addr_md32_pmem_addr, (reg32))

#define ADDR_MD32_PMEM_DATA_REV_GET_rg_addr_md32_pmem_data(reg32) REG_FLD_GET(ADDR_MD32_PMEM_DATA_REV_FLD_rg_addr_md32_pmem_data, (reg32))

#define ADDR_MD32_DMEM_ADDR_REV_GET_rg_addr_md32_dmem_addr(reg32) REG_FLD_GET(ADDR_MD32_DMEM_ADDR_REV_FLD_rg_addr_md32_dmem_addr, (reg32))

#define ADDR_MD32_DMEM_DATA_REV_GET_rg_addr_md32_dmem_data(reg32) REG_FLD_GET(ADDR_MD32_DMEM_DATA_REV_FLD_rg_addr_md32_dmem_data, (reg32))

#define SS_JCPLL_PWCTL_SETTING_0_GET_rg_jcpll_man_pwdb(reg32)  REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_man_pwdb, (reg32))
#define SS_JCPLL_PWCTL_SETTING_0_GET_rg_sw_jcpll_en(reg32)     REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_sw_jcpll_en, (reg32))
#define SS_JCPLL_PWCTL_SETTING_0_GET_rg_jcpll_en_inv(reg32)    REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_en_inv, (reg32))
#define SS_JCPLL_PWCTL_SETTING_0_GET_rg_jcpll_hw_ctrl_mode(reg32) REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_hw_ctrl_mode, (reg32))
#define SS_JCPLL_PWCTL_SETTING_0_GET_rg_jcpll_force_on(reg32)  REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_force_on, (reg32))

#define SS_JCPLL_PWCTL_SETTING_1_GET_rg_jcpll_pcw_man_load_timer(reg32) REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_pcw_man_load_timer, (reg32))
#define SS_JCPLL_PWCTL_SETTING_1_GET_rg_jcpll_en_timer(reg32)  REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_en_timer, (reg32))

#define SS_JCPLL_PWCTL_SETTING_2_GET_rg_jcpll_ck_stb_timer(reg32) REG_FLD_GET(SS_JCPLL_PWCTL_SETTING_2_FLD_rg_jcpll_ck_stb_timer, (reg32))

#define JCPLL_CHG_GET_rg_jcpll_tdc_dig_pwdb(reg32)             REG_FLD_GET(JCPLL_CHG_FLD_rg_jcpll_tdc_dig_pwdb, (reg32))
#define JCPLL_CHG_GET_rg_jcpll_ledck_div(reg32)                REG_FLD_GET(JCPLL_CHG_FLD_rg_jcpll_ledck_div, (reg32))
#define JCPLL_CHG_GET_rg_jcpll_pcw_chg(reg32)                  REG_FLD_GET(JCPLL_CHG_FLD_rg_jcpll_pcw_chg, (reg32))

#define RG_JCPLL_SDM_PCW_CTRL_GET_rg_jcpll_sdm_pcw(reg32)      REG_FLD_GET(RG_JCPLL_SDM_PCW_CTRL_FLD_rg_jcpll_sdm_pcw, (reg32))

#define RG_JCPLL_SDM_PCW_CHG_CTRL_GET_rg_jcpll_sdm_pcw_chg(reg32) REG_FLD_GET(RG_JCPLL_SDM_PCW_CHG_CTRL_FLD_rg_jcpll_sdm_pcw_chg, (reg32))

#define PLL_JCPLL_FT_FREQDET_0_GET_rg_jcpll_ft_unlock_cyclecnt(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_unlock_cyclecnt, (reg32))
#define PLL_JCPLL_FT_FREQDET_0_GET_rg_jcpll_ft_lock_cyclecnt(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_lock_cyclecnt, (reg32))

#define PLL_JCPLL_FT_FREQDET_1_GET_rg_jcpll_ft_lock_target_end(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_end, (reg32))
#define PLL_JCPLL_FT_FREQDET_1_GET_rg_jcpll_ft_lock_target_beg(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_beg, (reg32))

#define PLL_JCPLL_FT_FREQDET_2_GET_rg_jcpll_ft_unlock_target_end(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_end, (reg32))
#define PLL_JCPLL_FT_FREQDET_2_GET_rg_jcpll_ft_unlock_target_beg(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_beg, (reg32))

#define PLL_JCPLL_FT_FREQDET_3_GET_rg_jcpll_ft_wait_100us(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_wait_100us, (reg32))
#define PLL_JCPLL_FT_FREQDET_3_GET_rg_jcpll_ft_unlockth(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_unlockth, (reg32))
#define PLL_JCPLL_FT_FREQDET_3_GET_rg_jcpll_ft_lock_lockth(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_lockth, (reg32))
#define PLL_JCPLL_FT_FREQDET_3_GET_rg_jcpll_ft_lock_cnt_clear(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_cnt_clear, (reg32))
#define PLL_JCPLL_FT_FREQDET_3_GET_rg_jcpll_ft_freqlock_det_en(reg32) REG_FLD_GET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_freqlock_det_en, (reg32))

#define JCPLL_FT_CK_MUX_GET_rg_jcpll_ft_ck_mux(reg32)          REG_FLD_GET(JCPLL_FT_CK_MUX_FLD_rg_jcpll_ft_ck_mux, (reg32))

#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_da_ctrl_man_pwdb(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_man_pwdb, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_digtcl_dac_en_force_on(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_digtcl_dac_en_force_on, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_chpup_en_force_on(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_chpup_en_force_on, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_ldochp_en_force_on(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_ldochp_en_force_on, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_autok_load_force_on(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_load_force_on, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_autok_en_force_on(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_en_force_on, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_xfi_xtalck_cgm_en_force_on(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_xfi_xtalck_cgm_en_force_on, (reg32))
#define JCPLL_DA_RG_CTRL_0_GET_rg_jcpll_da_ctrl_hw_timer(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_hw_timer, (reg32))

#define JCPLL_DA_RG_CTRL_1_GET_rg_jcpll_digtcl_dac_en_inv(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_digtcl_dac_en_inv, (reg32))
#define JCPLL_DA_RG_CTRL_1_GET_rg_jcpll_chpup_en_inv(reg32)    REG_FLD_GET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_chpup_en_inv, (reg32))
#define JCPLL_DA_RG_CTRL_1_GET_rg_jcpll_ldochp_en_inv(reg32)   REG_FLD_GET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_ldochp_en_inv, (reg32))
#define JCPLL_DA_RG_CTRL_1_GET_rg_jcpll_autok_load_inv(reg32)  REG_FLD_GET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_load_inv, (reg32))
#define JCPLL_DA_RG_CTRL_1_GET_rg_jcpll_autok_en_inv(reg32)    REG_FLD_GET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_en_inv, (reg32))
#define JCPLL_DA_RG_CTRL_1_GET_rg_xfi_xtalck_cgm_en_inv(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_1_FLD_rg_xfi_xtalck_cgm_en_inv, (reg32))

#define JCPLL_DA_RG_CTRL_2_GET_rg_jcpll_digtcl_dac_en_hw_mode(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_digtcl_dac_en_hw_mode, (reg32))
#define JCPLL_DA_RG_CTRL_2_GET_rg_jcpll_chpup_en_hw_mode(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_chpup_en_hw_mode, (reg32))
#define JCPLL_DA_RG_CTRL_2_GET_rg_jcpll_ldochp_en_hw_mode(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_ldochp_en_hw_mode, (reg32))
#define JCPLL_DA_RG_CTRL_2_GET_rg_jcpll_autok_load_hw_mode(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_load_hw_mode, (reg32))
#define JCPLL_DA_RG_CTRL_2_GET_rg_jcpll_autok_en_hw_mode(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_en_hw_mode, (reg32))
#define JCPLL_DA_RG_CTRL_2_GET_rg_xfi_xtalck_cgm_en_hw_mode(reg32) REG_FLD_GET(JCPLL_DA_RG_CTRL_2_FLD_rg_xfi_xtalck_cgm_en_hw_mode, (reg32))

#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_rx_phyck_rstb_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_phyck_rstb_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_tx_en_inv(reg32)       REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_tx_en_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_rxpll1_refck_pwdb_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rxpll1_refck_pwdb_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_rx_fe_vcm_sel_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vcm_sel_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_rx_fe_vb_eq3_en_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq3_en_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_rx_fe_vb_eq2_en_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq2_en_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_rx_fe_vb_eq1_en_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq1_en_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_cdr_pd_edge_dis_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_cdr_pd_edge_dis_inv, (reg32))
#define XFI_PLL_DA_RG_CTRL_0_GET_rg_xfi_clkpath_ldo_en_inv(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_clkpath_ldo_en_inv, (reg32))

#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rx_phyck_rstb_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_phyck_rstb_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_tx_en_hw_mode(reg32)   REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_tx_en_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rxpll1_refck_pwdb_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rxpll1_refck_pwdb_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rx_fe_vcm_sel_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_sel_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rx_fe_vb_eq3_en_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq3_en_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rx_fe_vb_eq2_en_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq2_en_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_rx_fe_vb_eq1_en_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq1_en_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_cdr_pd_edge_dis_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_cdr_pd_edge_dis_hw_mode, (reg32))
#define XFI_PLL_DA_RG_CTRL_1_GET_rg_xfi_clkpath_ldo_en_hw_mode(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_clkpath_ldo_en_hw_mode, (reg32))

#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rx_phyck_rstb_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_phyck_rstb_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_tx_en_force_on(reg32)  REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_tx_en_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rxpll1_refck_pwdb_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rxpll1_refck_pwdb_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rx_fe_vcm_sel_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_sel_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rx_fe_vcm_gem_pwdb_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rx_fe_vb_eq3_en_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq3_en_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rx_fe_vb_eq2_en_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq2_en_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_rx_fe_vb_eq1_en_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq1_en_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_cdr_pd_edge_dis_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_cdr_pd_edge_dis_force_on, (reg32))
#define XFI_PLL_DA_RG_CTRL_2_GET_rg_xfi_clkpath_ldo_en_force_on(reg32) REG_FLD_GET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_clkpath_ldo_en_force_on, (reg32))

#define AD_DA_PROBE_STS_0_GET_ro_jcpll_sdm_scan_out(reg32)     REG_FLD_GET(AD_DA_PROBE_STS_0_FLD_ro_jcpll_sdm_scan_out, (reg32))
#define AD_DA_PROBE_STS_0_GET_ro_txpll_tdc_d(reg32)            REG_FLD_GET(AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_d, (reg32))
#define AD_DA_PROBE_STS_0_GET_ro_txpll_tdc_c(reg32)            REG_FLD_GET(AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_c, (reg32))
#define AD_DA_PROBE_STS_0_GET_ro_ipath_gaindiv(reg32)          REG_FLD_GET(AD_DA_PROBE_STS_0_FLD_ro_ipath_gaindiv, (reg32))

#define AD_DA_PROBE_STS_1_GET_ro_ipath_ctrl(reg32)             REG_FLD_GET(AD_DA_PROBE_STS_1_FLD_ro_ipath_ctrl, (reg32))

#define JCPLL_SCAN_CTRL_GET_rg_jcpll_sdm_scan_enable(reg32)    REG_FLD_GET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_enable, (reg32))
#define JCPLL_SCAN_CTRL_GET_rg_jcpll_sdm_cg_scan_enable(reg32) REG_FLD_GET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_cg_scan_enable, (reg32))
#define JCPLL_SCAN_CTRL_GET_rg_jcpll_sdm_scan_rstb(reg32)      REG_FLD_GET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_rstb, (reg32))
#define JCPLL_SCAN_CTRL_GET_rg_jcpll_sdm_scan_mode(reg32)      REG_FLD_GET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_mode, (reg32))

#define XFI_GPIO_SEL_0_GET_rg_xfi_gpio_sel1(reg32)             REG_FLD_GET(XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel1, (reg32))
#define XFI_GPIO_SEL_0_GET_rg_xfi_gpio_sel0(reg32)             REG_FLD_GET(XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel0, (reg32))

#define TX_PAR_PROBE_PLL_CTRL_GET_rg_clkgen_pll_lock(reg32)    REG_FLD_GET(TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock, (reg32))
#define TX_PAR_PROBE_PLL_CTRL_GET_rg_clkgen_pll_lock_en(reg32) REG_FLD_GET(TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock_en, (reg32))
#define TX_PAR_PROBE_PLL_CTRL_GET_rg_pmatop_probe_sel(reg32)   REG_FLD_GET(TX_PAR_PROBE_PLL_CTRL_FLD_rg_pmatop_probe_sel, (reg32))

#define DUMP_RX_PCSRST_CTRL_GET_rg_xfi_pcs_tx_rst_en(reg32)    REG_FLD_GET(DUMP_RX_PCSRST_CTRL_FLD_rg_xfi_pcs_tx_rst_en, (reg32))
#define DUMP_RX_PCSRST_CTRL_GET_rg_r2t_asic_used_ff(reg32)     REG_FLD_GET(DUMP_RX_PCSRST_CTRL_FLD_rg_r2t_asic_used_ff, (reg32))
#define DUMP_RX_PCSRST_CTRL_GET_rg_rx_asic_used_ff(reg32)      REG_FLD_GET(DUMP_RX_PCSRST_CTRL_FLD_rg_rx_asic_used_ff, (reg32))

#define XFI_TX_FIFO_STS_GET_ro_xfi_tx_fifo_status(reg32)       REG_FLD_GET(XFI_TX_FIFO_STS_FLD_ro_xfi_tx_fifo_status, (reg32))

#define JCPLL_CK_RSTB_CTRL_GET_rg_jcpll_ck_rstb_inv(reg32)     REG_FLD_GET(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_inv, (reg32))
#define JCPLL_CK_RSTB_CTRL_GET_rg_jcpll_ck_rstb_hw_mode(reg32) REG_FLD_GET(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_hw_mode, (reg32))
#define JCPLL_CK_RSTB_CTRL_GET_rg_jcpll_ck_rstb_force_on(reg32) REG_FLD_GET(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_force_on, (reg32))

#define RO_TDC_TX_FREQDET_GET_ro_tdc_tx_fl_out(reg32)          REG_FLD_GET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fl_out, (reg32))
#define RO_TDC_TX_FREQDET_GET_ro_tdc_tx_state_freqdet(reg32)   REG_FLD_GET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_state_freqdet, (reg32))
#define RO_TDC_TX_FREQDET_GET_ro_tdc_tx_lslock_cnt(reg32)      REG_FLD_GET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_lslock_cnt, (reg32))
#define RO_TDC_TX_FREQDET_GET_ro_tdc_tx_fbck_lock_inner(reg32) REG_FLD_GET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock_inner, (reg32))
#define RO_TDC_TX_FREQDET_GET_ro_tdc_tx_fbck_lock(reg32)       REG_FLD_GET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock, (reg32))

#define RO_JCPLL_FT_FREQDET_GET_ro_jcpll_ft_fl_out(reg32)      REG_FLD_GET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fl_out, (reg32))
#define RO_JCPLL_FT_FREQDET_GET_ro_jcpll_ft_state_freqdet(reg32) REG_FLD_GET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_state_freqdet, (reg32))
#define RO_JCPLL_FT_FREQDET_GET_ro_jcpll_ft_lslock_cnt(reg32)  REG_FLD_GET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_lslock_cnt, (reg32))
#define RO_JCPLL_FT_FREQDET_GET_ro_jcpll_ft_fbck_lock_inner(reg32) REG_FLD_GET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock_inner, (reg32))
#define RO_JCPLL_FT_FREQDET_GET_ro_jcpll_ft_fbck_lock(reg32)   REG_FLD_GET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock, (reg32))

#define RO_JCPLL_500M_FREQDET_GET_ro_jcpll_500m_fl_out(reg32)  REG_FLD_GET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fl_out, (reg32))
#define RO_JCPLL_500M_FREQDET_GET_ro_jcpll_500m_state_freqdet(reg32) REG_FLD_GET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_state_freqdet, (reg32))
#define RO_JCPLL_500M_FREQDET_GET_ro_jcpll_500m_lslock_cnt(reg32) REG_FLD_GET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_lslock_cnt, (reg32))
#define RO_JCPLL_500M_FREQDET_GET_ro_jcpll_500m_fbck_lock_inner(reg32) REG_FLD_GET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock_inner, (reg32))
#define RO_JCPLL_500M_FREQDET_GET_ro_jcpll_500m_fbck_lock(reg32) REG_FLD_GET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock, (reg32))

#define RG_JCPLL_500M_FREQ_DET_1_GET_rg_jcpll_500m_unlock_cyclecnt(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_unlock_cyclecnt, (reg32))
#define RG_JCPLL_500M_FREQ_DET_1_GET_rg_jcpll_500m_lock_cyclecnt(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_lock_cyclecnt, (reg32))

#define RG_JCPLL_500M_FREQ_DET_2_GET_rg_jcpll_500m_lock_target_end(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_end, (reg32))
#define RG_JCPLL_500M_FREQ_DET_2_GET_rg_jcpll_500m_lock_target_beg(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_beg, (reg32))

#define RG_JCPLL_500M_FREQ_DET_3_GET_rg_jcpll_500m_unlock_target_end(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_end, (reg32))
#define RG_JCPLL_500M_FREQ_DET_3_GET_rg_jcpll_500m_unlock_target_beg(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_beg, (reg32))

#define RG_JCPLL_500M_FREQ_DET_4_GET_rg_jcpll_500m_wait_100us(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_wait_100us, (reg32))
#define RG_JCPLL_500M_FREQ_DET_4_GET_rg_jcpll_500m_unlockth(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_unlockth, (reg32))
#define RG_JCPLL_500M_FREQ_DET_4_GET_rg_jcpll_500m_lock_lockth(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_lockth, (reg32))
#define RG_JCPLL_500M_FREQ_DET_4_GET_rg_jcpll_500m_lock_cnt_clear(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_cnt_clear, (reg32))
#define RG_JCPLL_500M_FREQ_DET_4_GET_rg_jcpll_500m_freqlock_det_en(reg32) REG_FLD_GET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_freqlock_det_en, (reg32))

#define rg_da_pxp_jcpll_sdm_scan_GET_rg_force_sel_da_pxp_rx_fe_peaking_ctrl(reg32) REG_FLD_GET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_sel_da_pxp_rx_fe_peaking_ctrl, (reg32))
#define rg_da_pxp_jcpll_sdm_scan_GET_rg_force_da_pxp_rx_fe_peaking_ctrl(reg32) REG_FLD_GET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_da_pxp_rx_fe_peaking_ctrl, (reg32))
#define rg_da_pxp_jcpll_sdm_scan_GET_rg_sel_da_pxp_jcpll_sdm_scan(reg32) REG_FLD_GET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_sel_da_pxp_jcpll_sdm_scan, (reg32))
#define rg_da_pxp_jcpll_sdm_scan_GET_rg_da_pxp_jcpll_sdm_scan(reg32) REG_FLD_GET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_da_pxp_jcpll_sdm_scan, (reg32))

#define rg_force_da_pxp_aeq_speed_GET_rg_force_sel_da_pxp_rx_osr_sel(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_rx_osr_sel, (reg32))
#define rg_force_da_pxp_aeq_speed_GET_rg_force_da_pxp_rx_osr_sel(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_rx_osr_sel, (reg32))
#define rg_force_da_pxp_aeq_speed_GET_rg_force_sel_da_pxp_aeq_speed(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_aeq_speed, (reg32))
#define rg_force_da_pxp_aeq_speed_GET_rg_force_da_pxp_aeq_speed(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_aeq_speed, (reg32))

#define rg_force_da_pxp_aeq_mode_GET_rg_force_sel_da_pxp_aeq_mode(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_mode_FLD_rg_force_sel_da_pxp_aeq_mode, (reg32))
#define rg_force_da_pxp_aeq_mode_GET_rg_force_da_pxp_aeq_mode(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_mode_FLD_rg_force_da_pxp_aeq_mode, (reg32))

#define rg_force_da_pxp_tx_data_ben_GET_rg_force_sel_da_pxp_tx_data_ben(reg32) REG_FLD_GET(rg_force_da_pxp_tx_data_ben_FLD_rg_force_sel_da_pxp_tx_data_ben, (reg32))
#define rg_force_da_pxp_tx_data_ben_GET_rg_force_da_pxp_tx_data_ben(reg32) REG_FLD_GET(rg_force_da_pxp_tx_data_ben_FLD_rg_force_da_pxp_tx_data_ben, (reg32))

#define rg_force_da_pxp_tx_fir_c0b_GET_rg_force_sel_da_pxp_tx_fir_cn1(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_cn1, (reg32))
#define rg_force_da_pxp_tx_fir_c0b_GET_rg_force_da_pxp_tx_fir_cn1(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_cn1, (reg32))
#define rg_force_da_pxp_tx_fir_c0b_GET_rg_force_sel_da_pxp_tx_fir_c0b(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_c0b, (reg32))
#define rg_force_da_pxp_tx_fir_c0b_GET_rg_force_da_pxp_tx_fir_c0b(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_c0b, (reg32))

#define rg_force_da_pxp_tx_term_sel_GET_rg_force_sel_da_pxp_tx_ckin_divisor(reg32) REG_FLD_GET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_ckin_divisor, (reg32))
#define rg_force_da_pxp_tx_term_sel_GET_rg_force_da_pxp_tx_ckin_divisor(reg32) REG_FLD_GET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_ckin_divisor, (reg32))
#define rg_force_da_pxp_tx_term_sel_GET_rg_force_sel_da_pxp_tx_term_sel(reg32) REG_FLD_GET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_term_sel, (reg32))
#define rg_force_da_pxp_tx_term_sel_GET_rg_force_da_pxp_tx_term_sel(reg32) REG_FLD_GET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_term_sel, (reg32))

#define rg_force_da_pxp_tx_fir_c1_GET_rg_force_sel_da_pxp_tx_fir_c2(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c2, (reg32))
#define rg_force_da_pxp_tx_fir_c1_GET_rg_force_da_pxp_tx_fir_c2(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c2, (reg32))
#define rg_force_da_pxp_tx_fir_c1_GET_rg_force_sel_da_pxp_tx_fir_c1(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c1, (reg32))
#define rg_force_da_pxp_tx_fir_c1_GET_rg_force_da_pxp_tx_fir_c1(reg32) REG_FLD_GET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c1, (reg32))

#define rg_force_da_pxp_tx_rate_ctrl_GET_rg_force_sel_da_pxp_cdr_pr_pieye(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_cdr_pr_pieye, (reg32))
#define rg_force_da_pxp_tx_rate_ctrl_GET_rg_force_da_pxp_cdr_pr_pieye(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_cdr_pr_pieye, (reg32))
#define rg_force_da_pxp_tx_rate_ctrl_GET_rg_force_sel_da_pxp_tx_rate_ctrl(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_tx_rate_ctrl, (reg32))
#define rg_force_da_pxp_tx_rate_ctrl_GET_rg_force_da_pxp_tx_rate_ctrl(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_tx_rate_ctrl, (reg32))

#define rg_force_da_pxp_rx_dac_d0_GET_rg_force_sel_da_pxp_rx_dac_d1(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d1, (reg32))
#define rg_force_da_pxp_rx_dac_d0_GET_rg_force_da_pxp_rx_dac_d1(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d1, (reg32))
#define rg_force_da_pxp_rx_dac_d0_GET_rg_force_sel_da_pxp_rx_dac_d0(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d0, (reg32))
#define rg_force_da_pxp_rx_dac_d0_GET_rg_force_da_pxp_rx_dac_d0(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d0, (reg32))

#define rg_force_da_pxp_rx_dac_e0_GET_rg_force_sel_da_pxp_rx_dac_e1(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e1, (reg32))
#define rg_force_da_pxp_rx_dac_e0_GET_rg_force_da_pxp_rx_dac_e1(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e1, (reg32))
#define rg_force_da_pxp_rx_dac_e0_GET_rg_force_sel_da_pxp_rx_dac_e0(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e0, (reg32))
#define rg_force_da_pxp_rx_dac_e0_GET_rg_force_da_pxp_rx_dac_e0(reg32) REG_FLD_GET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e0, (reg32))

#define rg_force_da_pxp_cdr_pr_fll_cor_GET_rg_force_sel_da_pxp_rx_dac_eye(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_rx_dac_eye, (reg32))
#define rg_force_da_pxp_cdr_pr_fll_cor_GET_rg_force_da_pxp_rx_dac_eye(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_rx_dac_eye, (reg32))
#define rg_force_da_pxp_cdr_pr_fll_cor_GET_rg_force_sel_da_pxp_cdr_pr_fll_cor(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_cdr_pr_fll_cor, (reg32))
#define rg_force_da_pxp_cdr_pr_fll_cor_GET_rg_force_da_pxp_cdr_pr_fll_cor(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_cdr_pr_fll_cor, (reg32))

#define rg_force_da_pxp_cdr_pr_idac_GET_rg_force_sel_da_pxp_txpll_sdm_pcw(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw, (reg32))
#define rg_force_da_pxp_cdr_pr_idac_GET_rg_force_sel_da_pxp_cdr_pr_idac(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_cdr_pr_idac, (reg32))
#define rg_force_da_pxp_cdr_pr_idac_GET_rg_force_da_pxp_cdr_pr_idac(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_da_pxp_cdr_pr_idac, (reg32))

#define rg_force_da_pxp_txpll_sdm_pcw_GET_rg_force_da_pxp_txpll_sdm_pcw(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_pcw_FLD_rg_force_da_pxp_txpll_sdm_pcw, (reg32))

#define rg_force_da_pxp_rx_fe_vos_GET_rg_force_sel_da_pxp_jcpll_sdm_pcw(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw, (reg32))
#define rg_force_da_pxp_rx_fe_vos_GET_rg_force_sel_da_pxp_rx_fe_vos(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_rx_fe_vos, (reg32))
#define rg_force_da_pxp_rx_fe_vos_GET_rg_force_da_pxp_rx_fe_vos(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_da_pxp_rx_fe_vos, (reg32))

#define rg_force_da_pxp_jcpll_sdm_pcw_GET_rg_force_da_pxp_jcpll_sdm_pcw(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_pcw_FLD_rg_force_da_pxp_jcpll_sdm_pcw, (reg32))

#define rg_force_da_pcie_cktx0_en_GET_rg_force_sel_da_pcie_cktx1_en(reg32) REG_FLD_GET(rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx1_en, (reg32))
#define rg_force_da_pcie_cktx0_en_GET_rg_force_da_pcie_cktx1_en(reg32) REG_FLD_GET(rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx1_en, (reg32))
#define rg_force_da_pcie_cktx0_en_GET_rg_force_sel_da_pcie_cktx0_en(reg32) REG_FLD_GET(rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx0_en, (reg32))
#define rg_force_da_pcie_cktx0_en_GET_rg_force_da_pcie_cktx0_en(reg32) REG_FLD_GET(rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx0_en, (reg32))

#define rg_force_da_pxp_aeq_en_GET_rg_force_sel_da_pxp_aeq_en(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_en_FLD_rg_force_sel_da_pxp_aeq_en, (reg32))
#define rg_force_da_pxp_aeq_en_GET_rg_force_da_pxp_aeq_en(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_en_FLD_rg_force_da_pxp_aeq_en, (reg32))

#define rg_force_da_pxp_aeq_bypass_GET_rg_force_sel_da_pxp_aeq_ckon(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_ckon, (reg32))
#define rg_force_da_pxp_aeq_bypass_GET_rg_force_da_pxp_aeq_ckon(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_ckon, (reg32))
#define rg_force_da_pxp_aeq_bypass_GET_rg_force_sel_da_pxp_aeq_bypass(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_bypass, (reg32))
#define rg_force_da_pxp_aeq_bypass_GET_rg_force_da_pxp_aeq_bypass(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_bypass, (reg32))

#define rg_force_da_pxp_aeq_inprgrss_GET_rg_force_sel_da_pxp_aeq_invldreq(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_invldreq, (reg32))
#define rg_force_da_pxp_aeq_inprgrss_GET_rg_force_da_pxp_aeq_invldreq(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_invldreq, (reg32))
#define rg_force_da_pxp_aeq_inprgrss_GET_rg_force_sel_da_pxp_aeq_inprgrss(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_inprgrss, (reg32))
#define rg_force_da_pxp_aeq_inprgrss_GET_rg_force_da_pxp_aeq_inprgrss(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_inprgrss, (reg32))

#define rg_force_da_pxp_aeq_rstb_GET_rg_force_sel_da_pxp_cdr_injck_sel(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_cdr_injck_sel, (reg32))
#define rg_force_da_pxp_aeq_rstb_GET_rg_force_da_pxp_cdr_injck_sel(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_cdr_injck_sel, (reg32))
#define rg_force_da_pxp_aeq_rstb_GET_rg_force_sel_da_pxp_aeq_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_aeq_rstb, (reg32))
#define rg_force_da_pxp_aeq_rstb_GET_rg_force_da_pxp_aeq_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_aeq_rstb, (reg32))

#define rg_force_da_pxp_cdr_lpf_lck2data_GET_rg_force_sel_da_pxp_cdr_lpf_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_rstb, (reg32))
#define rg_force_da_pxp_cdr_lpf_lck2data_GET_rg_force_da_pxp_cdr_lpf_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_rstb, (reg32))
#define rg_force_da_pxp_cdr_lpf_lck2data_GET_rg_force_sel_da_pxp_cdr_lpf_lck2data(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_lck2data, (reg32))
#define rg_force_da_pxp_cdr_lpf_lck2data_GET_rg_force_da_pxp_cdr_lpf_lck2data(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_lck2data, (reg32))

#define rg_force_da_pxp_cdr_pd_pwdb_GET_rg_force_sel_da_pxp_cdr_pr_kband_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_kband_rstb, (reg32))
#define rg_force_da_pxp_cdr_pd_pwdb_GET_rg_force_da_pxp_cdr_pr_kband_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pr_kband_rstb, (reg32))
#define rg_force_da_pxp_cdr_pd_pwdb_GET_rg_force_sel_da_pxp_cdr_pd_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pd_pwdb, (reg32))
#define rg_force_da_pxp_cdr_pd_pwdb_GET_rg_force_da_pxp_cdr_pd_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pd_pwdb, (reg32))

#define rg_force_da_pxp_cdr_pr_lpf_c_en_GET_rg_force_sel_da_pxp_cdr_pr_lpf_r_en(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_r_en, (reg32))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_GET_rg_force_da_pxp_cdr_pr_lpf_r_en(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_r_en, (reg32))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_GET_rg_force_sel_da_pxp_cdr_pr_lpf_c_en(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_c_en, (reg32))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_GET_rg_force_da_pxp_cdr_pr_lpf_c_en(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_c_en, (reg32))

#define rg_force_da_pxp_cdr_pr_pieye_pwdb_GET_rg_force_sel_da_pxp_cdr_pr_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pwdb, (reg32))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_GET_rg_force_da_pxp_cdr_pr_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pwdb, (reg32))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_GET_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb, (reg32))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_GET_rg_force_da_pxp_cdr_pr_pieye_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pieye_pwdb, (reg32))

#define rg_force_da_pxp_jcpll_ckout_en_GET_rg_force_sel_da_pxp_jcpll_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_en, (reg32))
#define rg_force_da_pxp_jcpll_ckout_en_GET_rg_force_da_pxp_jcpll_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_en, (reg32))
#define rg_force_da_pxp_jcpll_ckout_en_GET_rg_force_sel_da_pxp_jcpll_ckout_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_ckout_en, (reg32))
#define rg_force_da_pxp_jcpll_ckout_en_GET_rg_force_da_pxp_jcpll_ckout_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_ckout_en, (reg32))

#define rg_force_da_pxp_jcpll_kband_scan_en_GET_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg, (reg32))
#define rg_force_da_pxp_jcpll_kband_scan_en_GET_rg_force_da_pxp_jcpll_kband_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en_cg, (reg32))
#define rg_force_da_pxp_jcpll_kband_scan_en_GET_rg_force_sel_da_pxp_jcpll_kband_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en, (reg32))
#define rg_force_da_pxp_jcpll_kband_scan_en_GET_rg_force_da_pxp_jcpll_kband_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en, (reg32))

#define rg_force_da_pxp_jcpll_kband_scan_in_GET_rg_force_sel_da_pxp_jcpll_kband_scan_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_rstb, (reg32))
#define rg_force_da_pxp_jcpll_kband_scan_in_GET_rg_force_da_pxp_jcpll_kband_scan_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_rstb, (reg32))
#define rg_force_da_pxp_jcpll_kband_scan_in_GET_rg_force_sel_da_pxp_jcpll_kband_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_in, (reg32))
#define rg_force_da_pxp_jcpll_kband_scan_in_GET_rg_force_da_pxp_jcpll_kband_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_in, (reg32))

#define rg_force_da_pxp_jcpll_sdm_pcw_chg_GET_rg_force_sel_da_pxp_jcpll_sdm_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en, (reg32))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_GET_rg_force_da_pxp_jcpll_sdm_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en, (reg32))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_GET_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg, (reg32))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_GET_rg_force_da_pxp_jcpll_sdm_pcw_chg(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_pcw_chg, (reg32))

#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_GET_rg_force_sel_da_pxp_jcpll_sdm_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_in, (reg32))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_GET_rg_force_da_pxp_jcpll_sdm_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_in, (reg32))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_GET_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg, (reg32))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_GET_rg_force_da_pxp_jcpll_sdm_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en_cg, (reg32))

#define rg_force_da_pxp_jcpll_sdm_scan_rstb_GET_rg_force_sel_da_pxp_rx_oscal_ckon(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_rx_oscal_ckon, (reg32))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_GET_rg_force_da_pxp_rx_oscal_ckon(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_rx_oscal_ckon, (reg32))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_GET_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb, (reg32))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_GET_rg_force_da_pxp_jcpll_sdm_scan_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_jcpll_sdm_scan_rstb, (reg32))

#define rg_force_da_pxp_rx_oscal_en_GET_rg_force_sel_da_pxp_rx_oscal_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_rstb, (reg32))
#define rg_force_da_pxp_rx_oscal_en_GET_rg_force_da_pxp_rx_oscal_rstb(reg32) REG_FLD_GET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_rstb, (reg32))
#define rg_force_da_pxp_rx_oscal_en_GET_rg_force_sel_da_pxp_rx_oscal_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_en, (reg32))
#define rg_force_da_pxp_rx_oscal_en_GET_rg_force_da_pxp_rx_oscal_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_en, (reg32))

#define rg_force_da_pxp_rx_scan_enable_GET_rg_force_sel_da_pxp_rx_scan_enable_cg(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable_cg, (reg32))
#define rg_force_da_pxp_rx_scan_enable_GET_rg_force_da_pxp_rx_scan_enable_cg(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable_cg, (reg32))
#define rg_force_da_pxp_rx_scan_enable_GET_rg_force_sel_da_pxp_rx_scan_enable(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable, (reg32))
#define rg_force_da_pxp_rx_scan_enable_GET_rg_force_da_pxp_rx_scan_enable(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable, (reg32))

#define rg_force_da_pxp_rx_scan_in_GET_rg_sel_da_pxp_rx_scan(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_in_FLD_rg_sel_da_pxp_rx_scan, (reg32))
#define rg_force_da_pxp_rx_scan_in_GET_rg_da_pxp_rx_scan(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_in_FLD_rg_da_pxp_rx_scan, (reg32))
#define rg_force_da_pxp_rx_scan_in_GET_rg_force_sel_da_pxp_rx_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_in_FLD_rg_force_sel_da_pxp_rx_scan_in, (reg32))
#define rg_force_da_pxp_rx_scan_in_GET_rg_force_da_pxp_rx_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_in_FLD_rg_force_da_pxp_rx_scan_in, (reg32))

#define rg_force_da_pxp_rx_scan_rst_b_GET_rg_force_sel_da_pxp_rx_sigdet_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_sigdet_pwdb, (reg32))
#define rg_force_da_pxp_rx_scan_rst_b_GET_rg_force_da_pxp_rx_sigdet_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_sigdet_pwdb, (reg32))
#define rg_force_da_pxp_rx_scan_rst_b_GET_rg_force_sel_da_pxp_rx_scan_rst_b(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_scan_rst_b, (reg32))
#define rg_force_da_pxp_rx_scan_rst_b_GET_rg_force_da_pxp_rx_scan_rst_b(reg32) REG_FLD_GET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_scan_rst_b, (reg32))

#define rg_force_da_pxp_tdc_cal_bw_GET_rg_force_sel_da_pxp_tdc_cal_offset(reg32) REG_FLD_GET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_offset, (reg32))
#define rg_force_da_pxp_tdc_cal_bw_GET_rg_force_da_pxp_tdc_cal_offset(reg32) REG_FLD_GET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_offset, (reg32))
#define rg_force_da_pxp_tdc_cal_bw_GET_rg_force_sel_da_pxp_tdc_cal_bw(reg32) REG_FLD_GET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_bw, (reg32))
#define rg_force_da_pxp_tdc_cal_bw_GET_rg_force_da_pxp_tdc_cal_bw(reg32) REG_FLD_GET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_bw, (reg32))

#define rg_force_da_pxp_txpll_ckout_en_GET_rg_force_sel_da_pxp_txpll_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_en, (reg32))
#define rg_force_da_pxp_txpll_ckout_en_GET_rg_force_da_pxp_txpll_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_en, (reg32))
#define rg_force_da_pxp_txpll_ckout_en_GET_rg_force_sel_da_pxp_txpll_ckout_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_ckout_en, (reg32))
#define rg_force_da_pxp_txpll_ckout_en_GET_rg_force_da_pxp_txpll_ckout_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_ckout_en, (reg32))

#define rg_force_da_pxp_txpll_kband_load_en_GET_rg_force_sel_da_pxp_txpll_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_scan_en, (reg32))
#define rg_force_da_pxp_txpll_kband_load_en_GET_rg_force_da_pxp_txpll_kband_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_scan_en, (reg32))
#define rg_force_da_pxp_txpll_kband_load_en_GET_rg_force_sel_da_pxp_txpll_kband_load_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_kband_load_en, (reg32))
#define rg_force_da_pxp_txpll_kband_load_en_GET_rg_force_da_pxp_txpll_kband_load_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_load_en, (reg32))

#define rg_force_da_pxp_txpll_kband_scan_en_cg_GET_rg_force_sel_da_pxp_txpll_kband_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_in, (reg32))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_GET_rg_force_da_pxp_txpll_kband_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_in, (reg32))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_GET_rg_force_sel_da_pxp_txpll_kband_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_en_cg, (reg32))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_GET_rg_force_da_pxp_txpll_kband_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_en_cg, (reg32))

#define rg_da_pxp_txpll_kband_scan_GET_rg_force_sel_da_pxp_txpll_kband_scan_rstb(reg32) REG_FLD_GET(rg_da_pxp_txpll_kband_scan_FLD_rg_force_sel_da_pxp_txpll_kband_scan_rstb, (reg32))
#define rg_da_pxp_txpll_kband_scan_GET_rg_force_da_pxp_txpll_kband_scan_rstb(reg32) REG_FLD_GET(rg_da_pxp_txpll_kband_scan_FLD_rg_force_da_pxp_txpll_kband_scan_rstb, (reg32))
#define rg_da_pxp_txpll_kband_scan_GET_rg_sel_da_pxp_txpll_kband_scan(reg32) REG_FLD_GET(rg_da_pxp_txpll_kband_scan_FLD_rg_sel_da_pxp_txpll_kband_scan, (reg32))
#define rg_da_pxp_txpll_kband_scan_GET_rg_da_pxp_txpll_kband_scan(reg32) REG_FLD_GET(rg_da_pxp_txpll_kband_scan_FLD_rg_da_pxp_txpll_kband_scan, (reg32))

#define rg_force_da_pxp_txpll_sdm_pcw_chg_GET_rg_force_sel_da_pxp_txpll_sdm_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en, (reg32))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_GET_rg_force_da_pxp_txpll_sdm_scan_en(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_scan_en, (reg32))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_GET_rg_force_sel_da_pxp_txpll_sdm_pcw_chg(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw_chg, (reg32))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_GET_rg_force_da_pxp_txpll_sdm_pcw_chg(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_pcw_chg, (reg32))

#define rg_force_da_pxp_txpll_sdm_scan_en_cg_GET_rg_force_sel_da_pxp_txpll_sdm_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_in, (reg32))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_GET_rg_force_da_pxp_txpll_sdm_scan_in(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_in, (reg32))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_GET_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg, (reg32))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_GET_rg_force_da_pxp_txpll_sdm_scan_en_cg(reg32) REG_FLD_GET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_en_cg, (reg32))

#define rg_da_pxp_txpll_sdm_scan_GET_rg_force_sel_da_pxp_txpll_sdm_scan_rstb(reg32) REG_FLD_GET(rg_da_pxp_txpll_sdm_scan_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_rstb, (reg32))
#define rg_da_pxp_txpll_sdm_scan_GET_rg_force_da_pxp_txpll_sdm_scan_rstb(reg32) REG_FLD_GET(rg_da_pxp_txpll_sdm_scan_FLD_rg_force_da_pxp_txpll_sdm_scan_rstb, (reg32))
#define rg_da_pxp_txpll_sdm_scan_GET_rg_sel_da_pxp_txpll_sdm_scan(reg32) REG_FLD_GET(rg_da_pxp_txpll_sdm_scan_FLD_rg_sel_da_pxp_txpll_sdm_scan, (reg32))
#define rg_da_pxp_txpll_sdm_scan_GET_rg_da_pxp_txpll_sdm_scan(reg32) REG_FLD_GET(rg_da_pxp_txpll_sdm_scan_FLD_rg_da_pxp_txpll_sdm_scan, (reg32))

#define rg_force_da_pxp_tx_acjtag_dn_GET_rg_force_sel_da_pxp_tx_acjtag_dp(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dp, (reg32))
#define rg_force_da_pxp_tx_acjtag_dn_GET_rg_force_da_pxp_tx_acjtag_dp(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dp, (reg32))
#define rg_force_da_pxp_tx_acjtag_dn_GET_rg_force_sel_da_pxp_tx_acjtag_dn(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dn, (reg32))
#define rg_force_da_pxp_tx_acjtag_dn_GET_rg_force_da_pxp_tx_acjtag_dn(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dn, (reg32))

#define rg_force_da_pxp_tx_acjtag_en_GET_rg_force_sel_da_pxp_tx_ckin_sel(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_ckin_sel, (reg32))
#define rg_force_da_pxp_tx_acjtag_en_GET_rg_force_da_pxp_tx_ckin_sel(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_ckin_sel, (reg32))
#define rg_force_da_pxp_tx_acjtag_en_GET_rg_force_sel_da_pxp_tx_acjtag_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_acjtag_en, (reg32))
#define rg_force_da_pxp_tx_acjtag_en_GET_rg_force_da_pxp_tx_acjtag_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_acjtag_en, (reg32))

#define rg_force_da_pxp_tx_ck_en_GET_rg_force_sel_da_pxp_tx_cm_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_cm_en, (reg32))
#define rg_force_da_pxp_tx_ck_en_GET_rg_force_da_pxp_tx_cm_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_cm_en, (reg32))
#define rg_force_da_pxp_tx_ck_en_GET_rg_force_sel_da_pxp_tx_ck_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_ck_en, (reg32))
#define rg_force_da_pxp_tx_ck_en_GET_rg_force_da_pxp_tx_ck_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_ck_en, (reg32))

#define rg_force_da_pxp_tx_hsdata_en_GET_rg_force_sel_da_pxp_tx_data_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_data_en, (reg32))
#define rg_force_da_pxp_tx_hsdata_en_GET_rg_force_da_pxp_tx_data_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_data_en, (reg32))
#define rg_force_da_pxp_tx_hsdata_en_GET_rg_force_sel_da_pxp_tx_hsdata_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_hsdata_en, (reg32))
#define rg_force_da_pxp_tx_hsdata_en_GET_rg_force_da_pxp_tx_hsdata_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_hsdata_en, (reg32))

#define rg_force_da_pxp_tx_rxdet_en_GET_rg_force_sel_da_pxp_tx_termp_clean(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_termp_clean, (reg32))
#define rg_force_da_pxp_tx_rxdet_en_GET_rg_force_da_pxp_tx_termp_clean(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_termp_clean, (reg32))
#define rg_force_da_pxp_tx_rxdet_en_GET_rg_force_sel_da_pxp_tx_rxdet_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_rxdet_en, (reg32))
#define rg_force_da_pxp_tx_rxdet_en_GET_rg_force_da_pxp_tx_rxdet_en(reg32) REG_FLD_GET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_rxdet_en, (reg32))

#define scan_mode_GET_rg_force_sel_da_pxp_jcpll_kband_load_en(reg32) REG_FLD_GET(scan_mode_FLD_rg_force_sel_da_pxp_jcpll_kband_load_en, (reg32))
#define scan_mode_GET_rg_force_da_pxp_jcpll_kband_load_en(reg32) REG_FLD_GET(scan_mode_FLD_rg_force_da_pxp_jcpll_kband_load_en, (reg32))

#define rg_da_pxp_jcpll_kband_scan_GET_rg_force_sel_da_pxp_tx_termcal_en(reg32) REG_FLD_GET(rg_da_pxp_jcpll_kband_scan_FLD_rg_force_sel_da_pxp_tx_termcal_en, (reg32))
#define rg_da_pxp_jcpll_kband_scan_GET_rg_force_da_pxp_tx_termcal_en(reg32) REG_FLD_GET(rg_da_pxp_jcpll_kband_scan_FLD_rg_force_da_pxp_tx_termcal_en, (reg32))
#define rg_da_pxp_jcpll_kband_scan_GET_rg_sel_da_pxp_jcpll_kband_scan(reg32) REG_FLD_GET(rg_da_pxp_jcpll_kband_scan_FLD_rg_sel_da_pxp_jcpll_kband_scan, (reg32))
#define rg_da_pxp_jcpll_kband_scan_GET_rg_da_pxp_jcpll_kband_scan(reg32) REG_FLD_GET(rg_da_pxp_jcpll_kband_scan_FLD_rg_da_pxp_jcpll_kband_scan, (reg32))

#define rg_force_da_pxp_rx_fe_gain_ctrl_GET_rg_force_sel_da_pxp_rx_sigdet_os(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_sigdet_os, (reg32))
#define rg_force_da_pxp_rx_fe_gain_ctrl_GET_rg_force_da_pxp_rx_sigdet_os(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_sigdet_os, (reg32))
#define rg_force_da_pxp_rx_fe_gain_ctrl_GET_rg_force_sel_da_pxp_rx_fe_gain_ctrl(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_fe_gain_ctrl, (reg32))
#define rg_force_da_pxp_rx_fe_gain_ctrl_GET_rg_force_da_pxp_rx_fe_gain_ctrl(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_fe_gain_ctrl, (reg32))

#define rg_force_da_pxp_aeq_rmtxskip_GET_rg_force_sel_da_pxp_aeq_rxeqeval(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rxeqeval, (reg32))
#define rg_force_da_pxp_aeq_rmtxskip_GET_rg_force_da_pxp_aeq_rxeqeval(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rxeqeval, (reg32))
#define rg_force_da_pxp_aeq_rmtxskip_GET_rg_force_sel_da_pxp_aeq_rmtxskip(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rmtxskip, (reg32))
#define rg_force_da_pxp_aeq_rmtxskip_GET_rg_force_da_pxp_aeq_rmtxskip(reg32) REG_FLD_GET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rmtxskip, (reg32))

#define rg_force_da_pxp_rx_fe_pwdb_GET_rg_force_sel_da_pxp_rx_pdoscal_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_pdoscal_en, (reg32))
#define rg_force_da_pxp_rx_fe_pwdb_GET_rg_force_da_pxp_rx_pdoscal_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_pdoscal_en, (reg32))
#define rg_force_da_pxp_rx_fe_pwdb_GET_rg_force_sel_da_pxp_rx_fe_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_fe_pwdb, (reg32))
#define rg_force_da_pxp_rx_fe_pwdb_GET_rg_force_da_pxp_rx_fe_pwdb(reg32) REG_FLD_GET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_fe_pwdb, (reg32))

#define rg_force_da_pxp_rx_sigdet_cal_en_GET_rg_force_sel_da_pxp_tdc_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_tdc_en, (reg32))
#define rg_force_da_pxp_rx_sigdet_cal_en_GET_rg_force_da_pxp_tdc_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_tdc_en, (reg32))
#define rg_force_da_pxp_rx_sigdet_cal_en_GET_rg_force_sel_da_pxp_rx_sigdet_cal_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_rx_sigdet_cal_en, (reg32))
#define rg_force_da_pxp_rx_sigdet_cal_en_GET_rg_force_da_pxp_rx_sigdet_cal_en(reg32) REG_FLD_GET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_rx_sigdet_cal_en, (reg32))

#define ADD_DIG_RESERVE_5_GET_rg_dig_reserve_5(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_5_FLD_rg_dig_reserve_5, (reg32))

#define ADD_DIG_RESERVE_6_GET_rg_dig_reserve_6(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_6_FLD_rg_dig_reserve_6, (reg32))

#define ADD_DIG_RESERVE_7_GET_rg_dig_reserve_7(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_7_FLD_rg_dig_reserve_7, (reg32))

#define ADD_DIG_RESERVE_8_GET_rg_dig_reserve_8(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_8_FLD_rg_dig_reserve_8, (reg32))

#define ADD_DIG_RESERVE_9_GET_rg_dig_reserve_9(reg32)          REG_FLD_GET(ADD_DIG_RESERVE_9_FLD_rg_dig_reserve_9, (reg32))

#define ADD_DIG_RESERVE_10_GET_rg_dig_reserve_10(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_10_FLD_rg_dig_reserve_10, (reg32))

#define ADD_DIG_RESERVE_11_GET_rg_dig_reserve_11(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_11_FLD_rg_dig_reserve_11, (reg32))

#define ADD_DIG_RESERVE_12_GET_rg_dig_reserve_12(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_12_FLD_rg_dig_reserve_12, (reg32))

#define ADD_DIG_RESERVE_13_GET_rg_dig_reserve_13(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_13_FLD_rg_dig_reserve_13, (reg32))

#define ADD_DIG_RESERVE_14_GET_rg_dig_reserve_14(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_14_FLD_rg_dig_reserve_14, (reg32))

#define ADD_DIG_RO_RESERVE_5_GET_ro_dig_reserve_5(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_5_FLD_ro_dig_reserve_5, (reg32))

#define ADD_DIG_RO_RESERVE_6_GET_ro_dig_reserve_6(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_6_FLD_ro_dig_reserve_6, (reg32))

#define ADD_DIG_RO_RESERVE_7_GET_ro_dig_reserve_7(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_7_FLD_ro_dig_reserve_7, (reg32))

#define ADD_DIG_RO_RESERVE_8_GET_ro_dig_reserve_8(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_8_FLD_ro_dig_reserve_8, (reg32))

#define ADD_DIG_RO_RESERVE_9_GET_ro_dig_reserve_9(reg32)       REG_FLD_GET(ADD_DIG_RO_RESERVE_9_FLD_ro_dig_reserve_9, (reg32))

#define ADD_DIG_RESERVE_15_GET_rg_dig_reserve_15(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_15_FLD_rg_dig_reserve_15, (reg32))

#define ADD_DIG_RESERVE_16_GET_rg_dig_reserve_16(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_16_FLD_rg_dig_reserve_16, (reg32))

#define ADD_DIG_RESERVE_17_GET_rg_dig_reserve_17(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_17_FLD_rg_dig_reserve_17, (reg32))

#define ADD_DIG_RESERVE_18_GET_rg_dig_reserve_18(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_18_FLD_rg_dig_reserve_18, (reg32))

#define ADD_DIG_RESERVE_19_GET_rg_dig_reserve_19(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_19_FLD_rg_dig_reserve_19, (reg32))

#define ADD_DIG_RESERVE_20_GET_rg_dig_reserve_20(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_20_FLD_rg_dig_reserve_20, (reg32))

#define ADD_DIG_RESERVE_21_GET_rg_dig_reserve_21(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_21_FLD_rg_dig_reserve_21, (reg32))

#define ADD_DIG_RESERVE_22_GET_rg_dig_reserve_22(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_22_FLD_rg_dig_reserve_22, (reg32))

#define ADD_DIG_RESERVE_23_GET_rg_dig_reserve_23(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_23_FLD_rg_dig_reserve_23, (reg32))

#define ADD_DIG_RESERVE_24_GET_rg_dig_reserve_24(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_24_FLD_rg_dig_reserve_24, (reg32))

#define ADD_DIG_RESERVE_25_GET_rg_dig_reserve_25(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_25_FLD_rg_dig_reserve_25, (reg32))

#define ADD_DIG_RESERVE_26_GET_rg_dig_reserve_26(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_26_FLD_rg_dig_reserve_26, (reg32))

#define ADD_DIG_RESERVE_27_GET_rg_dig_reserve_27(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_27_FLD_rg_dig_reserve_27, (reg32))

#define ADD_DIG_RESERVE_28_GET_rg_dig_reserve_28(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_28_FLD_rg_dig_reserve_28, (reg32))

#define ADD_DIG_RESERVE_29_GET_rg_dig_reserve_29(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_29_FLD_rg_dig_reserve_29, (reg32))

#define ADD_DIG_RESERVE_30_GET_rg_dig_reserve_30(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_30_FLD_rg_dig_reserve_30, (reg32))

#define ADD_DIG_RESERVE_31_GET_rg_dig_reserve_31(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_31_FLD_rg_dig_reserve_31, (reg32))

#define ADD_DIG_RESERVE_32_GET_rg_dig_reserve_32(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_32_FLD_rg_dig_reserve_32, (reg32))

#define ADD_DIG_RESERVE_33_GET_rg_dig_reserve_33(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_33_FLD_rg_dig_reserve_33, (reg32))

#define ADD_DIG_RESERVE_34_GET_rg_dig_reserve_34(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_34_FLD_rg_dig_reserve_34, (reg32))

#define ADD_DIG_RESERVE_35_GET_rg_dig_reserve_35(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_35_FLD_rg_dig_reserve_35, (reg32))

#define ADD_DIG_RESERVE_36_GET_rg_dig_reserve_36(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_36_FLD_rg_dig_reserve_36, (reg32))

#define ADD_DIG_RESERVE_37_GET_rg_dig_reserve_37(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_37_FLD_rg_dig_reserve_37, (reg32))

#define ADD_DIG_RESERVE_38_GET_rg_dig_reserve_38(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_38_FLD_rg_dig_reserve_38, (reg32))

#define ADD_DIG_RESERVE_39_GET_rg_dig_reserve_39(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_39_FLD_rg_dig_reserve_39, (reg32))

#define ADD_DIG_RESERVE_40_GET_rg_dig_reserve_40(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_40_FLD_rg_dig_reserve_40, (reg32))

#define ADD_DIG_RESERVE_41_GET_rg_dig_reserve_41(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_41_FLD_rg_dig_reserve_41, (reg32))

#define ADD_DIG_RESERVE_42_GET_rg_dig_reserve_42(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_42_FLD_rg_dig_reserve_42, (reg32))

#define ADD_DIG_RESERVE_43_GET_rg_dig_reserve_43(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_43_FLD_rg_dig_reserve_43, (reg32))

#define ADD_DIG_RESERVE_44_GET_rg_dig_reserve_44(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_44_FLD_rg_dig_reserve_44, (reg32))

#define ADD_DIG_RESERVE_45_GET_rg_dig_reserve_45(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_45_FLD_rg_dig_reserve_45, (reg32))

#define ADD_DIG_RESERVE_46_GET_rg_dig_reserve_46(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_46_FLD_rg_dig_reserve_46, (reg32))

#define ADD_DIG_RESERVE_47_GET_rg_dig_reserve_47(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_47_FLD_rg_dig_reserve_47, (reg32))

#define ADD_DIG_RESERVE_48_GET_rg_dig_reserve_48(reg32)        REG_FLD_GET(ADD_DIG_RESERVE_48_FLD_rg_dig_reserve_48, (reg32))

#define BEN_CTRL_0_GET_rg_da_ben_force_value(reg32)            REG_FLD_GET(BEN_CTRL_0_FLD_rg_da_ben_force_value, (reg32))
#define BEN_CTRL_0_GET_rg_ad_ben_keep_time_clr(reg32)          REG_FLD_GET(BEN_CTRL_0_FLD_rg_ad_ben_keep_time_clr, (reg32))
#define BEN_CTRL_0_GET_rg_ad_ben_alarm_times_clr(reg32)        REG_FLD_GET(BEN_CTRL_0_FLD_rg_ad_ben_alarm_times_clr, (reg32))
#define BEN_CTRL_0_GET_rg_ad_ben_alarm_clr(reg32)              REG_FLD_GET(BEN_CTRL_0_FLD_rg_ad_ben_alarm_clr, (reg32))
#define BEN_CTRL_0_GET_rg_ad_ben_alarm_en(reg32)               REG_FLD_GET(BEN_CTRL_0_FLD_rg_ad_ben_alarm_en, (reg32))
#define BEN_CTRL_0_GET_rg_ad_ben_cnt_clr(reg32)                REG_FLD_GET(BEN_CTRL_0_FLD_rg_ad_ben_cnt_clr, (reg32))
#define BEN_CTRL_0_GET_rg_ad_ben_stop_cnt(reg32)               REG_FLD_GET(BEN_CTRL_0_FLD_rg_ad_ben_stop_cnt, (reg32))
#define BEN_CTRL_0_GET_rg_da_ben_force_mode(reg32)             REG_FLD_GET(BEN_CTRL_0_FLD_rg_da_ben_force_mode, (reg32))

#define BEN_CTRL_1_GET_rg_ad_ben_alarm_thr(reg32)              REG_FLD_GET(BEN_CTRL_1_FLD_rg_ad_ben_alarm_thr, (reg32))

#define BEN_STS_0_GET_ro_ad_ben_cnt(reg32)                     REG_FLD_GET(BEN_STS_0_FLD_ro_ad_ben_cnt, (reg32))

#define BEN_STS_1_GET_ro_ad_ben_alarm(reg32)                   REG_FLD_GET(BEN_STS_1_FLD_ro_ad_ben_alarm, (reg32))
#define BEN_STS_1_GET_ro_ad_ben_out(reg32)                     REG_FLD_GET(BEN_STS_1_FLD_ro_ad_ben_out, (reg32))

#define BEN_STS_2_GET_ro_ad_ben_alarm_times(reg32)             REG_FLD_GET(BEN_STS_2_FLD_ro_ad_ben_alarm_times, (reg32))

#define BEN_STS_3_GET_ro_ad_ben_keep_max(reg32)                REG_FLD_GET(BEN_STS_3_FLD_ro_ad_ben_keep_max, (reg32))

#define TX_SD_CTRL_0_GET_rg_tx_sd_keep_time_clr(reg32)         REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_keep_time_clr, (reg32))
#define TX_SD_CTRL_0_GET_rg_tx_sd_alarm_times_clr(reg32)       REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_times_clr, (reg32))
#define TX_SD_CTRL_0_GET_rg_tx_sd_alarm_clr(reg32)             REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_clr, (reg32))
#define TX_SD_CTRL_0_GET_rg_tx_sd_alarm_en(reg32)              REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_en, (reg32))
#define TX_SD_CTRL_0_GET_rg_tx_sd_cnt_clr(reg32)               REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_cnt_clr, (reg32))
#define TX_SD_CTRL_0_GET_rg_tx_sd_stop_cnt(reg32)              REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_stop_cnt, (reg32))
#define TX_SD_CTRL_0_GET_rg_tx_sd_inv(reg32)                   REG_FLD_GET(TX_SD_CTRL_0_FLD_rg_tx_sd_inv, (reg32))

#define TX_SD_CTRL_1_GET_rg_tx_sd_alarm_thr(reg32)             REG_FLD_GET(TX_SD_CTRL_1_FLD_rg_tx_sd_alarm_thr, (reg32))

#define TX_SD_STS_0_GET_ro_tx_sd_cnt(reg32)                    REG_FLD_GET(TX_SD_STS_0_FLD_ro_tx_sd_cnt, (reg32))

#define TX_SD_STS_1_GET_ro_tx_sd_alarm(reg32)                  REG_FLD_GET(TX_SD_STS_1_FLD_ro_tx_sd_alarm, (reg32))
#define TX_SD_STS_1_GET_ro_tx_sd_out(reg32)                    REG_FLD_GET(TX_SD_STS_1_FLD_ro_tx_sd_out, (reg32))

#define TX_SD_STS_2_GET_ro_tx_sd_alarm_times(reg32)            REG_FLD_GET(TX_SD_STS_2_FLD_ro_tx_sd_alarm_times, (reg32))

#define TX_SD_STS_3_GET_ro_tx_sd_keep_max(reg32)               REG_FLD_GET(TX_SD_STS_3_FLD_ro_tx_sd_keep_max, (reg32))

#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_sw_lcpll_en(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_lcpll_en_inv(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_lcpll_hw_ctrl_mode(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_0_SET_rg_lcpll_force_on(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on, (reg32), (val))

#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_ck_stb_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_pcw_man_load_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_en_timer(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer, (reg32), (val))
#define SS_LCPLL_PWCTL_SETTING_1_SET_rg_lcpll_man_pwdb(reg32, val) REG_FLD_SET(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb, (reg32), (val))

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

#define RX_EYE_TOP_EYEINDEX_CTRL_0_SET_rg_x_max(reg32, val)    REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_max, (reg32), (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_0_SET_rg_x_min(reg32, val)    REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_min, (reg32), (val))

#define RX_EYE_TOP_EYEINDEX_CTRL_1_SET_rg_index_mode(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_index_mode, (reg32), (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_1_SET_rg_y_max(reg32, val)    REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_max, (reg32), (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_1_SET_rg_y_min(reg32, val)    REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_min, (reg32), (val))

#define RX_EYE_TOP_EYEINDEX_CTRL_2_SET_rg_eyedur(reg32, val)   REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_2_FLD_rg_eyedur, (reg32), (val))

#define RX_EYE_TOP_EYEINDEX_CTRL_3_SET_rg_eye_nextpts(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts, (reg32), (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_3_SET_rg_eye_nextpts_toggle(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_toggle, (reg32), (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_3_SET_rg_eye_nextpts_sel(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_sel, (reg32), (val))

#define RX_EYE_TOP_EYEOPENING_CTRL_0_SET_rg_eyecnt_vth(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_vth, (reg32), (val))
#define RX_EYE_TOP_EYEOPENING_CTRL_0_SET_rg_eyecnt_hth(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_hth, (reg32), (val))

#define RX_EYE_TOP_EYEOPENING_CTRL_1_SET_rg_eo_vth(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_vth, (reg32), (val))
#define RX_EYE_TOP_EYEOPENING_CTRL_1_SET_rg_eo_hth(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_hth, (reg32), (val))

#define RX_EYE_TOP_EYECNT_CTRL_0_SET_rg_eye_mask(reg32, val)   REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_eye_mask, (reg32), (val))
#define RX_EYE_TOP_EYECNT_CTRL_0_SET_rg_cntforever(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntforever, (reg32), (val))
#define RX_EYE_TOP_EYECNT_CTRL_0_SET_rg_cntlen(reg32, val)     REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntlen, (reg32), (val))

#define RX_EYE_TOP_EYECNT_CTRL_1_SET_rg_force_eyedur_init_b(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_init_b, (reg32), (val))
#define RX_EYE_TOP_EYECNT_CTRL_1_SET_rg_force_eyedur_en(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_en, (reg32), (val))
#define RX_EYE_TOP_EYECNT_CTRL_1_SET_rg_disb_eyedur_init_b(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_init_b, (reg32), (val))
#define RX_EYE_TOP_EYECNT_CTRL_1_SET_rg_disb_eyedur_en(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_en, (reg32), (val))

#define RX_EYE_TOP_EYECNT_CTRL_2_SET_rg_data_shift(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_data_shift, (reg32), (val))
#define RX_EYE_TOP_EYECNT_CTRL_2_SET_rg_eyecnt_fast(reg32, val) REG_FLD_SET(RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_eyecnt_fast, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_0_SET_rg_rx_os_start(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_rx_os_start, (reg32), (val))
#define RX_CTRL_SEQUENCE_CTRL_0_SET_rg_osc_speed_opt(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_osc_speed_opt, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_1_SET_rg_rx_pical_end(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_end, (reg32), (val))
#define RX_CTRL_SEQUENCE_CTRL_1_SET_rg_rx_pical_start(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_start, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_2_SET_rg_rx_pdos_end(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_end, (reg32), (val))
#define RX_CTRL_SEQUENCE_CTRL_2_SET_rg_rx_pdos_start(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_start, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_3_SET_rg_rx_feos_end(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_end, (reg32), (val))
#define RX_CTRL_SEQUENCE_CTRL_3_SET_rg_rx_feos_start(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_start, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_4_SET_rg_rx_sdcal_end(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_end, (reg32), (val))
#define RX_CTRL_SEQUENCE_CTRL_4_SET_rg_rx_sdcal_start(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_start, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_5_SET_rg_rx_rdy(reg32, val)      REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_rdy, (reg32), (val))
#define RX_CTRL_SEQUENCE_CTRL_5_SET_rg_rx_blwc_rdy_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_blwc_rdy_en, (reg32), (val))

#define RX_CTRL_SEQUENCE_CTRL_6_SET_rg_rx_os_end(reg32, val)   REG_FLD_SET(RX_CTRL_SEQUENCE_CTRL_6_FLD_rg_rx_os_end, (reg32), (val))

#define RX_CTRL_SEQUENCE_DISB_CTRL_0_SET_rg_disb_rx_feos_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_feos_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_SET_rg_disb_rx_pdos_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pdos_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_SET_rg_disb_rx_pical_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pical_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_SET_rg_disb_rx_os_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_os_en, (reg32), (val))

#define RX_CTRL_SEQUENCE_DISB_CTRL_1_SET_rg_disb_rx_rdy(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_rdy, (reg32), (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_SET_rg_disb_rx_blwc_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_blwc_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_SET_rg_disb_rx_os_rdy(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_os_rdy, (reg32), (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_SET_rg_disb_rx_sdcal_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_sdcal_en, (reg32), (val))

#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_SET_rg_force_rx_feos_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_feos_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_SET_rg_force_rx_pdos_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pdos_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_SET_rg_force_rx_pical_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pical_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_SET_rg_force_rx_os_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_os_en, (reg32), (val))

#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_SET_rg_force_rx_rdy(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_rdy, (reg32), (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_SET_rg_force_rx_blwc_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_blwc_en, (reg32), (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_SET_rg_force_rx_os_rdy(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_os_rdy, (reg32), (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_SET_rg_force_rx_sdcal_en(reg32, val) REG_FLD_SET(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_sdcal_en, (reg32), (val))

#define PHY_EQ_CTRL_0_SET_rg_veo_mask(reg32, val)              REG_FLD_SET(PHY_EQ_CTRL_0_FLD_rg_veo_mask, (reg32), (val))
#define PHY_EQ_CTRL_0_SET_rg_heo_mask(reg32, val)              REG_FLD_SET(PHY_EQ_CTRL_0_FLD_rg_heo_mask, (reg32), (val))
#define PHY_EQ_CTRL_0_SET_rg_eq_en_delay(reg32, val)           REG_FLD_SET(PHY_EQ_CTRL_0_FLD_rg_eq_en_delay, (reg32), (val))

#define PHY_EQ_CTRL_1_SET_rg_b_zero_sel(reg32, val)            REG_FLD_SET(PHY_EQ_CTRL_1_FLD_rg_b_zero_sel, (reg32), (val))
#define PHY_EQ_CTRL_1_SET_rg_heo_emphasis(reg32, val)          REG_FLD_SET(PHY_EQ_CTRL_1_FLD_rg_heo_emphasis, (reg32), (val))
#define PHY_EQ_CTRL_1_SET_rg_a_mgain(reg32, val)               REG_FLD_SET(PHY_EQ_CTRL_1_FLD_rg_a_mgain, (reg32), (val))
#define PHY_EQ_CTRL_1_SET_rg_a_lgain(reg32, val)               REG_FLD_SET(PHY_EQ_CTRL_1_FLD_rg_a_lgain, (reg32), (val))

#define PHY_EQ_CTRL_2_SET_rg_eq_debug_sel(reg32, val)          REG_FLD_SET(PHY_EQ_CTRL_2_FLD_rg_eq_debug_sel, (reg32), (val))
#define PHY_EQ_CTRL_2_SET_rg_fom_num_order(reg32, val)         REG_FLD_SET(PHY_EQ_CTRL_2_FLD_rg_fom_num_order, (reg32), (val))
#define PHY_EQ_CTRL_2_SET_rg_a_sel(reg32, val)                 REG_FLD_SET(PHY_EQ_CTRL_2_FLD_rg_a_sel, (reg32), (val))

#define PHY_EQ_CTRL_3_SET_rg_fe_gain_ctrl_3(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_3, (reg32), (val))
#define PHY_EQ_CTRL_3_SET_rg_fe_gain_ctrl_2(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_2, (reg32), (val))
#define PHY_EQ_CTRL_3_SET_rg_fe_gain_ctrl_1(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_1, (reg32), (val))
#define PHY_EQ_CTRL_3_SET_rg_fe_gain_ctrl_0(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_0, (reg32), (val))

#define PHY_EQ_CTRL_4_SET_rg_fe_gain_ctrl_7(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_7, (reg32), (val))
#define PHY_EQ_CTRL_4_SET_rg_fe_gain_ctrl_6(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_6, (reg32), (val))
#define PHY_EQ_CTRL_4_SET_rg_fe_gain_ctrl_5(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_5, (reg32), (val))
#define PHY_EQ_CTRL_4_SET_rg_fe_gain_ctrl_4(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_4, (reg32), (val))

#define PHY_EQ_CTRL_5_SET_rg_fe_gain_ctrl_11(reg32, val)       REG_FLD_SET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_11, (reg32), (val))
#define PHY_EQ_CTRL_5_SET_rg_fe_gain_ctrl_10(reg32, val)       REG_FLD_SET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_10, (reg32), (val))
#define PHY_EQ_CTRL_5_SET_rg_fe_gain_ctrl_9(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_9, (reg32), (val))
#define PHY_EQ_CTRL_5_SET_rg_fe_gain_ctrl_8(reg32, val)        REG_FLD_SET(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_8, (reg32), (val))

#define PHY_EQ_CTRL_6_SET_rg_fe_gain_ctrl_15(reg32, val)       REG_FLD_SET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_15, (reg32), (val))
#define PHY_EQ_CTRL_6_SET_rg_fe_gain_ctrl_14(reg32, val)       REG_FLD_SET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_14, (reg32), (val))
#define PHY_EQ_CTRL_6_SET_rg_fe_gain_ctrl_13(reg32, val)       REG_FLD_SET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_13, (reg32), (val))
#define PHY_EQ_CTRL_6_SET_rg_fe_gain_ctrl_12(reg32, val)       REG_FLD_SET(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_12, (reg32), (val))

#define PHY_EQ_CTRL_7_SET_rg_fe_peaking_ctrl_3(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_3, (reg32), (val))
#define PHY_EQ_CTRL_7_SET_rg_fe_peaking_ctrl_2(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_2, (reg32), (val))
#define PHY_EQ_CTRL_7_SET_rg_fe_peaking_ctrl_1(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_1, (reg32), (val))
#define PHY_EQ_CTRL_7_SET_rg_fe_peaking_ctrl_0(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_0, (reg32), (val))

#define PHY_EQ_CTRL_8_SET_rg_fe_peaking_ctrl_7(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_7, (reg32), (val))
#define PHY_EQ_CTRL_8_SET_rg_fe_peaking_ctrl_6(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_6, (reg32), (val))
#define PHY_EQ_CTRL_8_SET_rg_fe_peaking_ctrl_5(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_5, (reg32), (val))
#define PHY_EQ_CTRL_8_SET_rg_fe_peaking_ctrl_4(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_4, (reg32), (val))

#define PHY_EQ_CTRL_9_SET_rg_fe_peaking_ctrl_11(reg32, val)    REG_FLD_SET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_11, (reg32), (val))
#define PHY_EQ_CTRL_9_SET_rg_fe_peaking_ctrl_10(reg32, val)    REG_FLD_SET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_10, (reg32), (val))
#define PHY_EQ_CTRL_9_SET_rg_fe_peaking_ctrl_9(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_9, (reg32), (val))
#define PHY_EQ_CTRL_9_SET_rg_fe_peaking_ctrl_8(reg32, val)     REG_FLD_SET(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_8, (reg32), (val))

#define PHY_EQ_CTRL_10_SET_rg_fe_peaking_ctrl_15(reg32, val)   REG_FLD_SET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_15, (reg32), (val))
#define PHY_EQ_CTRL_10_SET_rg_fe_peaking_ctrl_14(reg32, val)   REG_FLD_SET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_14, (reg32), (val))
#define PHY_EQ_CTRL_10_SET_rg_fe_peaking_ctrl_13(reg32, val)   REG_FLD_SET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_13, (reg32), (val))
#define PHY_EQ_CTRL_10_SET_rg_fe_peaking_ctrl_12(reg32, val)   REG_FLD_SET(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_12, (reg32), (val))

#define SS_RX_FEOS_SET_rg_eq_force_blwc_freeze(reg32, val)     REG_FLD_SET(SS_RX_FEOS_FLD_rg_eq_force_blwc_freeze, (reg32), (val))
#define SS_RX_FEOS_SET_rg_lfsel(reg32, val)                    REG_FLD_SET(SS_RX_FEOS_FLD_rg_lfsel, (reg32), (val))

#define SS_RX_BLWC_SET_rg_eq_blwc_cnt_bot_lim(reg32, val)      REG_FLD_SET(SS_RX_BLWC_FLD_rg_eq_blwc_cnt_bot_lim, (reg32), (val))
#define SS_RX_BLWC_SET_rg_eq_blwc_cnt_top_lim(reg32, val)      REG_FLD_SET(SS_RX_BLWC_FLD_rg_eq_blwc_cnt_top_lim, (reg32), (val))
#define SS_RX_BLWC_SET_rg_eq_blwc_gain(reg32, val)             REG_FLD_SET(SS_RX_BLWC_FLD_rg_eq_blwc_gain, (reg32), (val))
#define SS_RX_BLWC_SET_rg_eq_blwc_pol(reg32, val)              REG_FLD_SET(SS_RX_BLWC_FLD_rg_eq_blwc_pol, (reg32), (val))

#define SS_RX_FREQ_DET_1_SET_rg_unlock_cyclecnt(reg32, val)    REG_FLD_SET(SS_RX_FREQ_DET_1_FLD_rg_unlock_cyclecnt, (reg32), (val))
#define SS_RX_FREQ_DET_1_SET_rg_lock_cyclecnt(reg32, val)      REG_FLD_SET(SS_RX_FREQ_DET_1_FLD_rg_lock_cyclecnt, (reg32), (val))

#define SS_RX_FREQ_DET_2_SET_rg_lock_target_end(reg32, val)    REG_FLD_SET(SS_RX_FREQ_DET_2_FLD_rg_lock_target_end, (reg32), (val))
#define SS_RX_FREQ_DET_2_SET_rg_lock_target_beg(reg32, val)    REG_FLD_SET(SS_RX_FREQ_DET_2_FLD_rg_lock_target_beg, (reg32), (val))

#define SS_RX_FREQ_DET_3_SET_rg_unlock_target_end(reg32, val)  REG_FLD_SET(SS_RX_FREQ_DET_3_FLD_rg_unlock_target_end, (reg32), (val))
#define SS_RX_FREQ_DET_3_SET_rg_unlock_target_beg(reg32, val)  REG_FLD_SET(SS_RX_FREQ_DET_3_FLD_rg_unlock_target_beg, (reg32), (val))

#define SS_RX_FREQ_DET_4_SET_rg_wait_100us(reg32, val)         REG_FLD_SET(SS_RX_FREQ_DET_4_FLD_rg_wait_100us, (reg32), (val))
#define SS_RX_FREQ_DET_4_SET_rg_unlockth(reg32, val)           REG_FLD_SET(SS_RX_FREQ_DET_4_FLD_rg_unlockth, (reg32), (val))
#define SS_RX_FREQ_DET_4_SET_rg_lock_lockth(reg32, val)        REG_FLD_SET(SS_RX_FREQ_DET_4_FLD_rg_lock_lockth, (reg32), (val))
#define SS_RX_FREQ_DET_4_SET_rg_lock_cnt_clear(reg32, val)     REG_FLD_SET(SS_RX_FREQ_DET_4_FLD_rg_lock_cnt_clear, (reg32), (val))
#define SS_RX_FREQ_DET_4_SET_rg_freqlock_det_en(reg32, val)    REG_FLD_SET(SS_RX_FREQ_DET_4_FLD_rg_freqlock_det_en, (reg32), (val))

#define SS_RX_PI_CAL_SET_rg_eq_pi_cal_rdy_dly(reg32, val)      REG_FLD_SET(SS_RX_PI_CAL_FLD_rg_eq_pi_cal_rdy_dly, (reg32), (val))
#define SS_RX_PI_CAL_SET_rg_kpgain(reg32, val)                 REG_FLD_SET(SS_RX_PI_CAL_FLD_rg_kpgain, (reg32), (val))
#define SS_RX_PI_CAL_SET_rg_cdrlpi(reg32, val)                 REG_FLD_SET(SS_RX_PI_CAL_FLD_rg_cdrlpi, (reg32), (val))

#define SS_RX_CAL_1_SET_rg_cal_cyc(reg32, val)                 REG_FLD_SET(SS_RX_CAL_1_FLD_rg_cal_cyc, (reg32), (val))
#define SS_RX_CAL_1_SET_rg_cal_stb(reg32, val)                 REG_FLD_SET(SS_RX_CAL_1_FLD_rg_cal_stb, (reg32), (val))
#define SS_RX_CAL_1_SET_rg_cal_1us_set(reg32, val)             REG_FLD_SET(SS_RX_CAL_1_FLD_rg_cal_1us_set, (reg32), (val))
#define SS_RX_CAL_1_SET_rg_sim_fast_en(reg32, val)             REG_FLD_SET(SS_RX_CAL_1_FLD_rg_sim_fast_en, (reg32), (val))

#define SS_RX_CAL_2_SET_rg_cal_cyc_time(reg32, val)            REG_FLD_SET(SS_RX_CAL_2_FLD_rg_cal_cyc_time, (reg32), (val))
#define SS_RX_CAL_2_SET_rg_cal_out_os(reg32, val)              REG_FLD_SET(SS_RX_CAL_2_FLD_rg_cal_out_os, (reg32), (val))
#define SS_RX_CAL_2_SET_rg_cal_os_pulse(reg32, val)            REG_FLD_SET(SS_RX_CAL_2_FLD_rg_cal_os_pulse, (reg32), (val))

#define SS_RX_SIGDET_0_SET_rg_sigdet_win_nonvld_times(reg32, val) REG_FLD_SET(SS_RX_SIGDET_0_FLD_rg_sigdet_win_nonvld_times, (reg32), (val))
#define SS_RX_SIGDET_0_SET_rg_sigdet_win_vld_times(reg32, val) REG_FLD_SET(SS_RX_SIGDET_0_FLD_rg_sigdet_win_vld_times, (reg32), (val))
#define SS_RX_SIGDET_0_SET_rg_sigdet_vld_times(reg32, val)     REG_FLD_SET(SS_RX_SIGDET_0_FLD_rg_sigdet_vld_times, (reg32), (val))
#define SS_RX_SIGDET_0_SET_rg_sigdet_win_size(reg32, val)      REG_FLD_SET(SS_RX_SIGDET_0_FLD_rg_sigdet_win_size, (reg32), (val))

#define SS_RX_SIGDET_1_SET_rg_sigdet_en(reg32, val)            REG_FLD_SET(SS_RX_SIGDET_1_FLD_rg_sigdet_en, (reg32), (val))

#define SS_RX_FLL_0_SET_rg_kband_kfc(reg32, val)               REG_FLD_SET(SS_RX_FLL_0_FLD_rg_kband_kfc, (reg32), (val))
#define SS_RX_FLL_0_SET_rg_fpkdiv(reg32, val)                  REG_FLD_SET(SS_RX_FLL_0_FLD_rg_fpkdiv, (reg32), (val))
#define SS_RX_FLL_0_SET_rg_kband_prediv(reg32, val)            REG_FLD_SET(SS_RX_FLL_0_FLD_rg_kband_prediv, (reg32), (val))

#define SS_RX_FLL_1_SET_rg_symbol_wd(reg32, val)               REG_FLD_SET(SS_RX_FLL_1_FLD_rg_symbol_wd, (reg32), (val))
#define SS_RX_FLL_1_SET_rg_settle_time_sel(reg32, val)         REG_FLD_SET(SS_RX_FLL_1_FLD_rg_settle_time_sel, (reg32), (val))
#define SS_RX_FLL_1_SET_rg_ipath_idac(reg32, val)              REG_FLD_SET(SS_RX_FLL_1_FLD_rg_ipath_idac, (reg32), (val))

#define SS_RX_FLL_2_SET_rg_debug_sel(reg32, val)               REG_FLD_SET(SS_RX_FLL_2_FLD_rg_debug_sel, (reg32), (val))
#define SS_RX_FLL_2_SET_rg_ck_rate(reg32, val)                 REG_FLD_SET(SS_RX_FLL_2_FLD_rg_ck_rate, (reg32), (val))
#define SS_RX_FLL_2_SET_rg_amp(reg32, val)                     REG_FLD_SET(SS_RX_FLL_2_FLD_rg_amp, (reg32), (val))
#define SS_RX_FLL_2_SET_rg_prbs_sel(reg32, val)                REG_FLD_SET(SS_RX_FLL_2_FLD_rg_prbs_sel, (reg32), (val))

#define SS_RX_FLL_3_SET_rg_icdr_kband_done_force(reg32, val)   REG_FLD_SET(SS_RX_FLL_3_FLD_rg_icdr_kband_done_force, (reg32), (val))
#define SS_RX_FLL_3_SET_rg_icdr_kband_done_force_en(reg32, val) REG_FLD_SET(SS_RX_FLL_3_FLD_rg_icdr_kband_done_force_en, (reg32), (val))
#define SS_RX_FLL_3_SET_rg_fll_dig_rstb_force(reg32, val)      REG_FLD_SET(SS_RX_FLL_3_FLD_rg_fll_dig_rstb_force, (reg32), (val))
#define SS_RX_FLL_3_SET_rg_fll_dig_rst_force_en(reg32, val)    REG_FLD_SET(SS_RX_FLL_3_FLD_rg_fll_dig_rst_force_en, (reg32), (val))

#define SS_RX_FLL_4_SET_rg_fll_idac_repli(reg32, val)          REG_FLD_SET(SS_RX_FLL_4_FLD_rg_fll_idac_repli, (reg32), (val))
#define SS_RX_FLL_4_SET_rg_fll_cor(reg32, val)                 REG_FLD_SET(SS_RX_FLL_4_FLD_rg_fll_cor, (reg32), (val))
#define SS_RX_FLL_4_SET_rg_fll_repli(reg32, val)               REG_FLD_SET(SS_RX_FLL_4_FLD_rg_fll_repli, (reg32), (val))

#define SS_RX_FLL_5_SET_rg_fll_idac_min(reg32, val)            REG_FLD_SET(SS_RX_FLL_5_FLD_rg_fll_idac_min, (reg32), (val))
#define SS_RX_FLL_5_SET_rg_fll_idac_max(reg32, val)            REG_FLD_SET(SS_RX_FLL_5_FLD_rg_fll_idac_max, (reg32), (val))

#define SS_RX_FLL_6_SET_ro_lnx_sw_fll_ro_4_latch_en(reg32, val) REG_FLD_SET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_4_latch_en, (reg32), (val))
#define SS_RX_FLL_6_SET_ro_lnx_sw_fll_ro_3_latch_en(reg32, val) REG_FLD_SET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_3_latch_en, (reg32), (val))
#define SS_RX_FLL_6_SET_ro_lnx_sw_fll_ro_2_latch_en(reg32, val) REG_FLD_SET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_2_latch_en, (reg32), (val))
#define SS_RX_FLL_6_SET_ro_lnx_sw_fll_ro_1_latch_en(reg32, val) REG_FLD_SET(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_1_latch_en, (reg32), (val))

#define SS_RX_FLL_7_SET_ro_adc_freq(reg32, val)                REG_FLD_SET(SS_RX_FLL_7_FLD_ro_adc_freq, (reg32), (val))

#define SS_RX_FLL_8_SET_ro_cor_gain(reg32, val)                REG_FLD_SET(SS_RX_FLL_8_FLD_ro_cor_gain, (reg32), (val))

#define SS_RX_FLL_9_SET_ro_idacf(reg32, val)                   REG_FLD_SET(SS_RX_FLL_9_FLD_ro_idacf, (reg32), (val))
#define SS_RX_FLL_9_SET_ro_fll_idac(reg32, val)                REG_FLD_SET(SS_RX_FLL_9_FLD_ro_fll_idac, (reg32), (val))

#define SS_RX_FLL_a_SET_ro_fll_idac_repli(reg32, val)          REG_FLD_SET(SS_RX_FLL_a_FLD_ro_fll_idac_repli, (reg32), (val))
#define SS_RX_FLL_a_SET_ro_da_idac(reg32, val)                 REG_FLD_SET(SS_RX_FLL_a_FLD_ro_da_idac, (reg32), (val))

#define SS_RX_FLL_b_SET_rg_ad_sleep_en(reg32, val)             REG_FLD_SET(SS_RX_FLL_b_FLD_rg_ad_sleep_en, (reg32), (val))
#define SS_RX_FLL_b_SET_rg_load_en(reg32, val)                 REG_FLD_SET(SS_RX_FLL_b_FLD_rg_load_en, (reg32), (val))

#define RX_PDOS_CTRL_0_SET_rg_sap_sel(reg32, val)              REG_FLD_SET(RX_PDOS_CTRL_0_FLD_rg_sap_sel, (reg32), (val))
#define RX_PDOS_CTRL_0_SET_rg_eye_blwc_add(reg32, val)         REG_FLD_SET(RX_PDOS_CTRL_0_FLD_rg_eye_blwc_add, (reg32), (val))
#define RX_PDOS_CTRL_0_SET_rg_data_blwc_add(reg32, val)        REG_FLD_SET(RX_PDOS_CTRL_0_FLD_rg_data_blwc_add, (reg32), (val))

#define RX_RESET_0_SET_rg_cal_rst_b(reg32, val)                REG_FLD_SET(RX_RESET_0_FLD_rg_cal_rst_b, (reg32), (val))
#define RX_RESET_0_SET_rg_eq_pi_cal_rst_b(reg32, val)          REG_FLD_SET(RX_RESET_0_FLD_rg_eq_pi_cal_rst_b, (reg32), (val))
#define RX_RESET_0_SET_rg_feos_rst_b(reg32, val)               REG_FLD_SET(RX_RESET_0_FLD_rg_feos_rst_b, (reg32), (val))
#define RX_RESET_0_SET_rg_eq_blwc_rst_b(reg32, val)            REG_FLD_SET(RX_RESET_0_FLD_rg_eq_blwc_rst_b, (reg32), (val))

#define RX_RESET_1_SET_rg_unlock_stb(reg32, val)               REG_FLD_SET(RX_RESET_1_FLD_rg_unlock_stb, (reg32), (val))
#define RX_RESET_1_SET_rg_sigdet_rst_b(reg32, val)             REG_FLD_SET(RX_RESET_1_FLD_rg_sigdet_rst_b, (reg32), (val))
#define RX_RESET_1_SET_rg_pdos_rst_b(reg32, val)               REG_FLD_SET(RX_RESET_1_FLD_rg_pdos_rst_b, (reg32), (val))

#define RX_DEBUG_0_SET_rg_ro_toggle(reg32, val)                REG_FLD_SET(RX_DEBUG_0_FLD_rg_ro_toggle, (reg32), (val))
#define RX_DEBUG_0_SET_rg_rx_debug_sel(reg32, val)             REG_FLD_SET(RX_DEBUG_0_FLD_rg_rx_debug_sel, (reg32), (val))
#define RX_DEBUG_0_SET_rg_probe1_en(reg32, val)                REG_FLD_SET(RX_DEBUG_0_FLD_rg_probe1_en, (reg32), (val))
#define RX_DEBUG_0_SET_rg_probe0_en(reg32, val)                REG_FLD_SET(RX_DEBUG_0_FLD_rg_probe0_en, (reg32), (val))

#define BISTCTL_CONTROL_SET_rg_bistctl_io_data_inv(reg32, val) REG_FLD_SET(BISTCTL_CONTROL_FLD_rg_bistctl_io_data_inv, (reg32), (val))
#define BISTCTL_CONTROL_SET_rg_bistctl_pat_rx_check_en(reg32, val) REG_FLD_SET(BISTCTL_CONTROL_FLD_rg_bistctl_pat_rx_check_en, (reg32), (val))
#define BISTCTL_CONTROL_SET_rg_bistctl_pat_tx_en(reg32, val)   REG_FLD_SET(BISTCTL_CONTROL_FLD_rg_bistctl_pat_tx_en, (reg32), (val))
#define BISTCTL_CONTROL_SET_rg_bistctl_pat_sel(reg32, val)     REG_FLD_SET(BISTCTL_CONTROL_FLD_rg_bistctl_pat_sel, (reg32), (val))

#define BISTCTL_ALIGN_PAT_SET_bistctl_align_pattern(reg32, val) REG_FLD_SET(BISTCTL_ALIGN_PAT_FLD_bistctl_align_pattern, (reg32), (val))

#define BISTCTL_PROGRAM_PAT_0_SET_rg_bistctl_program_data_0(reg32, val) REG_FLD_SET(BISTCTL_PROGRAM_PAT_0_FLD_rg_bistctl_program_data_0, (reg32), (val))

#define BISTCTL_PROGRAM_PAT_1_SET_rg_bistctl_program_data_1(reg32, val) REG_FLD_SET(BISTCTL_PROGRAM_PAT_1_FLD_rg_bistctl_program_data_1, (reg32), (val))

#define BISTCTL_POLLUTION_SET_rg_bist_tx_data_pollution_latch(reg32, val) REG_FLD_SET(BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution_latch, (reg32), (val))
#define BISTCTL_POLLUTION_SET_rg_bist_tx_data_pollution(reg32, val) REG_FLD_SET(BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution, (reg32), (val))

#define BISTCTL_PRBS_INITIAL_SEED_SET_bistctl_prbs_init_seed(reg32, val) REG_FLD_SET(BISTCTL_PRBS_INITIAL_SEED_FLD_bistctl_prbs_init_seed, (reg32), (val))

#define BISTCTL_PRBS_EVENT_SET_ro_bistctl_prbs_done(reg32, val) REG_FLD_SET(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_done, (reg32), (val))
#define BISTCTL_PRBS_EVENT_SET_ro_bistctl_prbs_fail(reg32, val) REG_FLD_SET(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_fail, (reg32), (val))
#define BISTCTL_PRBS_EVENT_SET_ro_bistctl_prbs_compare(reg32, val) REG_FLD_SET(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_compare, (reg32), (val))

#define BISTCTL_PRBS_ERRCNT_SET_ro_bistctl_prbs_err_cnt(reg32, val) REG_FLD_SET(BISTCTL_PRBS_ERRCNT_FLD_ro_bistctl_prbs_err_cnt, (reg32), (val))

#define BISTCTL_PRBS_FAIL_THRESHOLD_SET_rg_bistctl_sq_wave_reach(reg32, val) REG_FLD_SET(BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_sq_wave_reach, (reg32), (val))
#define BISTCTL_PRBS_FAIL_THRESHOLD_SET_rg_bistctl_prbs_fail_threshold(reg32, val) REG_FLD_SET(BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_prbs_fail_threshold, (reg32), (val))

#define RX_TORGS_DEBUG_0_SET_ro_dac_e1(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_0_FLD_ro_dac_e1, (reg32), (val))
#define RX_TORGS_DEBUG_0_SET_ro_dac_eo(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_0_FLD_ro_dac_eo, (reg32), (val))
#define RX_TORGS_DEBUG_0_SET_ro_dac_d1(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_0_FLD_ro_dac_d1, (reg32), (val))
#define RX_TORGS_DEBUG_0_SET_ro_dac_do(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_0_FLD_ro_dac_do, (reg32), (val))

#define RX_TORGS_DEBUG_1_SET_ro_blwc_filter_din(reg32, val)    REG_FLD_SET(RX_TORGS_DEBUG_1_FLD_ro_blwc_filter_din, (reg32), (val))
#define RX_TORGS_DEBUG_1_SET_ro_blwc_sum(reg32, val)           REG_FLD_SET(RX_TORGS_DEBUG_1_FLD_ro_blwc_sum, (reg32), (val))
#define RX_TORGS_DEBUG_1_SET_ro_blwc_offset(reg32, val)        REG_FLD_SET(RX_TORGS_DEBUG_1_FLD_ro_blwc_offset, (reg32), (val))
#define RX_TORGS_DEBUG_1_SET_ro_dac_eye(reg32, val)            REG_FLD_SET(RX_TORGS_DEBUG_1_FLD_ro_dac_eye, (reg32), (val))

#define RX_TORGS_DEBUG_2_SET_ro_cal_dir(reg32, val)            REG_FLD_SET(RX_TORGS_DEBUG_2_FLD_ro_cal_dir, (reg32), (val))
#define RX_TORGS_DEBUG_2_SET_ro_pi_cal_data_out(reg32, val)    REG_FLD_SET(RX_TORGS_DEBUG_2_FLD_ro_pi_cal_data_out, (reg32), (val))
#define RX_TORGS_DEBUG_2_SET_ro_fl_out2(reg32, val)            REG_FLD_SET(RX_TORGS_DEBUG_2_FLD_ro_fl_out2, (reg32), (val))

#define RX_TORGS_DEBUG_3_SET_ro_lslock_cnt2(reg32, val)        REG_FLD_SET(RX_TORGS_DEBUG_3_FLD_ro_lslock_cnt2, (reg32), (val))
#define RX_TORGS_DEBUG_3_SET_ro_cal_en(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_3_FLD_ro_cal_en, (reg32), (val))
#define RX_TORGS_DEBUG_3_SET_ro_cal_out(reg32, val)            REG_FLD_SET(RX_TORGS_DEBUG_3_FLD_ro_cal_out, (reg32), (val))

#define RX_TORGS_DEBUG_4_SET_eyecnt_rdy(reg32, val)            REG_FLD_SET(RX_TORGS_DEBUG_4_FLD_eyecnt_rdy, (reg32), (val))
#define RX_TORGS_DEBUG_4_SET_ro_veo(reg32, val)                REG_FLD_SET(RX_TORGS_DEBUG_4_FLD_ro_veo, (reg32), (val))
#define RX_TORGS_DEBUG_4_SET_ro_heo(reg32, val)                REG_FLD_SET(RX_TORGS_DEBUG_4_FLD_ro_heo, (reg32), (val))

#define RX_TORGS_DEBUG_5_SET_veo_rdy(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_5_FLD_veo_rdy, (reg32), (val))
#define RX_TORGS_DEBUG_5_SET_heo_rdy(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_5_FLD_heo_rdy, (reg32), (val))
#define RX_TORGS_DEBUG_5_SET_heo_center(reg32, val)            REG_FLD_SET(RX_TORGS_DEBUG_5_FLD_heo_center, (reg32), (val))

#define RX_TORGS_DEBUG_6_SET_ro_cntlen(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_6_FLD_ro_cntlen, (reg32), (val))

#define RX_TORGS_DEBUG_7_SET_eyecnt(reg32, val)                REG_FLD_SET(RX_TORGS_DEBUG_7_FLD_eyecnt, (reg32), (val))

#define RX_TORGS_DEBUG_8_SET_fom_num_type_good(reg32, val)     REG_FLD_SET(RX_TORGS_DEBUG_8_FLD_fom_num_type_good, (reg32), (val))
#define RX_TORGS_DEBUG_8_SET_fom_num_type(reg32, val)          REG_FLD_SET(RX_TORGS_DEBUG_8_FLD_fom_num_type, (reg32), (val))
#define RX_TORGS_DEBUG_8_SET_fom_num(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_8_FLD_fom_num, (reg32), (val))

#define RX_TORGS_DEBUG_9_SET_eo_y_done(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_9_FLD_eo_y_done, (reg32), (val))
#define RX_TORGS_DEBUG_9_SET_eo_x_done(reg32, val)             REG_FLD_SET(RX_TORGS_DEBUG_9_FLD_eo_x_done, (reg32), (val))
#define RX_TORGS_DEBUG_9_SET_ro_feos_out(reg32, val)           REG_FLD_SET(RX_TORGS_DEBUG_9_FLD_ro_feos_out, (reg32), (val))
#define RX_TORGS_DEBUG_9_SET_rgs_ipll_dig_mon(reg32, val)      REG_FLD_SET(RX_TORGS_DEBUG_9_FLD_rgs_ipll_dig_mon, (reg32), (val))

#define RX_TORGS_DEBUG_10_SET_eye_el(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_10_FLD_eye_el, (reg32), (val))
#define RX_TORGS_DEBUG_10_SET_eye_er(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_10_FLD_eye_er, (reg32), (val))

#define SS_TX_RST_B_SET_txcalib_rst_b(reg32, val)              REG_FLD_SET(SS_TX_RST_B_FLD_txcalib_rst_b, (reg32), (val))
#define SS_TX_RST_B_SET_tx_top_rst_b(reg32, val)               REG_FLD_SET(SS_TX_RST_B_FLD_tx_top_rst_b, (reg32), (val))

#define SS_TX_CALIB_0_SET_rg_txcalib_force_termp_sel(reg32, val) REG_FLD_SET(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel, (reg32), (val))
#define SS_TX_CALIB_0_SET_rg_txcalib_force_termp_sel_en(reg32, val) REG_FLD_SET(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel_en, (reg32), (val))
#define SS_TX_CALIB_0_SET_rg_txcalib_force_termp_calen(reg32, val) REG_FLD_SET(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_calen, (reg32), (val))
#define SS_TX_CALIB_0_SET_rg_txcalib_p_en(reg32, val)          REG_FLD_SET(SS_TX_CALIB_0_FLD_rg_txcalib_p_en, (reg32), (val))

#define SS_TX_CALIB_1_SET_rg_txcalib_force_termn_sel(reg32, val) REG_FLD_SET(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel, (reg32), (val))
#define SS_TX_CALIB_1_SET_rg_txcalib_force_termn_sel_en(reg32, val) REG_FLD_SET(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel_en, (reg32), (val))
#define SS_TX_CALIB_1_SET_rg_txcalib_force_termn_calen(reg32, val) REG_FLD_SET(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_calen, (reg32), (val))
#define SS_TX_CALIB_1_SET_rg_txcalib_n_en(reg32, val)          REG_FLD_SET(SS_TX_CALIB_1_FLD_rg_txcalib_n_en, (reg32), (val))

#define SS_TX_CALIB_2_SET_rg_txcal_clear(reg32, val)           REG_FLD_SET(SS_TX_CALIB_2_FLD_rg_txcal_clear, (reg32), (val))
#define SS_TX_CALIB_2_SET_ro_txcal_fsm(reg32, val)             REG_FLD_SET(SS_TX_CALIB_2_FLD_ro_txcal_fsm, (reg32), (val))
#define SS_TX_CALIB_2_SET_ro_txcal_out_nflag(reg32, val)       REG_FLD_SET(SS_TX_CALIB_2_FLD_ro_txcal_out_nflag, (reg32), (val))
#define SS_TX_CALIB_2_SET_ro_txcal_out_pflag(reg32, val)       REG_FLD_SET(SS_TX_CALIB_2_FLD_ro_txcal_out_pflag, (reg32), (val))

#define XPON_SETTING_0_SET_rg_trans_tx_fault_inv(reg32, val)   REG_FLD_SET(XPON_SETTING_0_FLD_rg_trans_tx_fault_inv, (reg32), (val))
#define XPON_SETTING_0_SET_rg_trans_rx_sd_inv(reg32, val)      REG_FLD_SET(XPON_SETTING_0_FLD_rg_trans_rx_sd_inv, (reg32), (val))
#define XPON_SETTING_0_SET_rg_trans_rx_data_inv(reg32, val)    REG_FLD_SET(XPON_SETTING_0_FLD_rg_trans_rx_data_inv, (reg32), (val))
#define XPON_SETTING_0_SET_rg_trans_tx_data_inv(reg32, val)    REG_FLD_SET(XPON_SETTING_0_FLD_rg_trans_tx_data_inv, (reg32), (val))
#define XPON_SETTING_0_SET_rg_trans_burst_inv(reg32, val)      REG_FLD_SET(XPON_SETTING_0_FLD_rg_trans_burst_inv, (reg32), (val))
#define XPON_SETTING_0_SET_rg_sfp_rx_sd_inv(reg32, val)        REG_FLD_SET(XPON_SETTING_0_FLD_rg_sfp_rx_sd_inv, (reg32), (val))
#define XPON_SETTING_0_SET_rg_tx_dly_en(reg32, val)            REG_FLD_SET(XPON_SETTING_0_FLD_rg_tx_dly_en, (reg32), (val))

#define XPON_SETTING_1_SET_rg_trans_tx_fault_pro(reg32, val)   REG_FLD_SET(XPON_SETTING_1_FLD_rg_trans_tx_fault_pro, (reg32), (val))
#define XPON_SETTING_1_SET_rg_trans_rx_los_pro(reg32, val)     REG_FLD_SET(XPON_SETTING_1_FLD_rg_trans_rx_los_pro, (reg32), (val))
#define XPON_SETTING_1_SET_rg_trans_tx_sd_pro(reg32, val)      REG_FLD_SET(XPON_SETTING_1_FLD_rg_trans_tx_sd_pro, (reg32), (val))
#define XPON_SETTING_1_SET_rg_trans_tx_sd_inv(reg32, val)      REG_FLD_SET(XPON_SETTING_1_FLD_rg_trans_tx_sd_inv, (reg32), (val))

#define XPON_SETTING_2_SET_rg_pma_show_probe_en(reg32, val)    REG_FLD_SET(XPON_SETTING_2_FLD_rg_pma_show_probe_en, (reg32), (val))
#define XPON_SETTING_2_SET_rg_ftcal_high(reg32, val)           REG_FLD_SET(XPON_SETTING_2_FLD_rg_ftcal_high, (reg32), (val))
#define XPON_SETTING_2_SET_rg_ftcal_low(reg32, val)            REG_FLD_SET(XPON_SETTING_2_FLD_rg_ftcal_low, (reg32), (val))
#define XPON_SETTING_2_SET_rg_trans_rx_laser_on_pro(reg32, val) REG_FLD_SET(XPON_SETTING_2_FLD_rg_trans_rx_laser_on_pro, (reg32), (val))

#define XPON_STA_SET_ro_tx_fault(reg32, val)                   REG_FLD_SET(XPON_STA_FLD_ro_tx_fault, (reg32), (val))
#define XPON_STA_SET_ro_tx_sd(reg32, val)                      REG_FLD_SET(XPON_STA_FLD_ro_tx_sd, (reg32), (val))
#define XPON_STA_SET_ro_rx_los(reg32, val)                     REG_FLD_SET(XPON_STA_FLD_ro_rx_los, (reg32), (val))

#define XPON_INT_EN_0_SET_rg_tx_sd_alarm_int_en(reg32, val)    REG_FLD_SET(XPON_INT_EN_0_FLD_rg_tx_sd_alarm_int_en, (reg32), (val))
#define XPON_INT_EN_0_SET_rg_ad_ben_alarm_int_en(reg32, val)   REG_FLD_SET(XPON_INT_EN_0_FLD_rg_ad_ben_alarm_int_en, (reg32), (val))
#define XPON_INT_EN_0_SET_rg_trans_sd_fail_int_en(reg32, val)  REG_FLD_SET(XPON_INT_EN_0_FLD_rg_trans_sd_fail_int_en, (reg32), (val))
#define XPON_INT_EN_0_SET_rg_phyrdy_int_en(reg32, val)         REG_FLD_SET(XPON_INT_EN_0_FLD_rg_phyrdy_int_en, (reg32), (val))
#define XPON_INT_EN_0_SET_rg_un_stb_os_rdy_int_en(reg32, val)  REG_FLD_SET(XPON_INT_EN_0_FLD_rg_un_stb_os_rdy_int_en, (reg32), (val))
#define XPON_INT_EN_0_SET_rg_trans_rogue_onu_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_0_FLD_rg_trans_rogue_onu_int_en, (reg32), (val))

#define XPON_INT_EN_1_SET_rg_trans_los_int_en(reg32, val)      REG_FLD_SET(XPON_INT_EN_1_FLD_rg_trans_los_int_en, (reg32), (val))
#define XPON_INT_EN_1_SET_rg_un_stb_rx_rdy_int_en(reg32, val)  REG_FLD_SET(XPON_INT_EN_1_FLD_rg_un_stb_rx_rdy_int_en, (reg32), (val))
#define XPON_INT_EN_1_SET_rg_trans_fault_int_en(reg32, val)    REG_FLD_SET(XPON_INT_EN_1_FLD_rg_trans_fault_int_en, (reg32), (val))
#define XPON_INT_EN_1_SET_rg_un_stb_eq_rdy_int_en(reg32, val)  REG_FLD_SET(XPON_INT_EN_1_FLD_rg_un_stb_eq_rdy_int_en, (reg32), (val))

#define XPON_INT_STA_0_SET_tx_sd_alarm_int(reg32, val)         REG_FLD_SET(XPON_INT_STA_0_FLD_tx_sd_alarm_int, (reg32), (val))
#define XPON_INT_STA_0_SET_ben_alarm_int(reg32, val)           REG_FLD_SET(XPON_INT_STA_0_FLD_ben_alarm_int, (reg32), (val))
#define XPON_INT_STA_0_SET_trans_sd_fail_int(reg32, val)       REG_FLD_SET(XPON_INT_STA_0_FLD_trans_sd_fail_int, (reg32), (val))
#define XPON_INT_STA_0_SET_phyrdy_int(reg32, val)              REG_FLD_SET(XPON_INT_STA_0_FLD_phyrdy_int, (reg32), (val))
#define XPON_INT_STA_0_SET_un_stb_os_rdy_int(reg32, val)       REG_FLD_SET(XPON_INT_STA_0_FLD_un_stb_os_rdy_int, (reg32), (val))
#define XPON_INT_STA_0_SET_trans_rogue_onu_int(reg32, val)     REG_FLD_SET(XPON_INT_STA_0_FLD_trans_rogue_onu_int, (reg32), (val))

#define XPON_INT_STA_1_SET_trans_los_int(reg32, val)           REG_FLD_SET(XPON_INT_STA_1_FLD_trans_los_int, (reg32), (val))
#define XPON_INT_STA_1_SET_un_stb_rx_rdy_int(reg32, val)       REG_FLD_SET(XPON_INT_STA_1_FLD_un_stb_rx_rdy_int, (reg32), (val))
#define XPON_INT_STA_1_SET_trans_fault_int(reg32, val)         REG_FLD_SET(XPON_INT_STA_1_FLD_trans_fault_int, (reg32), (val))
#define XPON_INT_STA_1_SET_un_stb_eq_rdy_int(reg32, val)       REG_FLD_SET(XPON_INT_STA_1_FLD_un_stb_eq_rdy_int, (reg32), (val))

#define RX_TORGS_DEBUG_11_SET_AD_XPON_RX_SIGDET_OUT(reg32, val) REG_FLD_SET(RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_SIGDET_OUT, (reg32), (val))
#define RX_TORGS_DEBUG_11_SET_AD_XPON_RX_DBG(reg32, val)       REG_FLD_SET(RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_DBG, (reg32), (val))
#define RX_TORGS_DEBUG_11_SET_eye_eb(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_11_FLD_eye_eb, (reg32), (val))
#define RX_TORGS_DEBUG_11_SET_eye_eu(reg32, val)               REG_FLD_SET(RX_TORGS_DEBUG_11_FLD_eye_eu, (reg32), (val))

#define RX_FORCE_MODE_0_SET_rg_force_da_xpon_cdr_lpf_rstb(reg32, val) REG_FLD_SET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_rstb, (reg32), (val))
#define RX_FORCE_MODE_0_SET_rg_force_da_xpon_cdr_lpf_lck2data(reg32, val) REG_FLD_SET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_lck2data, (reg32), (val))
#define RX_FORCE_MODE_0_SET_rg_force_da_xpon_rx_fe_peaking_ctrl(reg32, val) REG_FLD_SET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_peaking_ctrl, (reg32), (val))
#define RX_FORCE_MODE_0_SET_rg_force_da_xpon_rx_fe_gain_ctrl(reg32, val) REG_FLD_SET(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_gain_ctrl, (reg32), (val))

#define RX_FORCE_MODE_1_SET_rg_force_da_xpon_rx_dac_e0(reg32, val) REG_FLD_SET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_e0, (reg32), (val))
#define RX_FORCE_MODE_1_SET_rg_force_da_xpon_rx_dac_d1(reg32, val) REG_FLD_SET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d1, (reg32), (val))
#define RX_FORCE_MODE_1_SET_rg_force_da_xpon_rx_dac_d0(reg32, val) REG_FLD_SET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d0, (reg32), (val))
#define RX_FORCE_MODE_1_SET_rg_force_da_xpon_rx_sigdet_os(reg32, val) REG_FLD_SET(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_sigdet_os, (reg32), (val))

#define RX_FORCE_MODE_2_SET_rg_force_da_xpon_cdr_pr_pieye(reg32, val) REG_FLD_SET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_cdr_pr_pieye, (reg32), (val))
#define RX_FORCE_MODE_2_SET_rg_force_da_xpon_rx_fe_vos(reg32, val) REG_FLD_SET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_fe_vos, (reg32), (val))
#define RX_FORCE_MODE_2_SET_rg_force_da_xpon_rx_dac_eye(reg32, val) REG_FLD_SET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_eye, (reg32), (val))
#define RX_FORCE_MODE_2_SET_rg_force_da_xpon_rx_dac_e1(reg32, val) REG_FLD_SET(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_e1, (reg32), (val))

#define RX_DISB_MODE_0_SET_rg_disb_da_xpon_cdr_lpf_rstb(reg32, val) REG_FLD_SET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_rstb, (reg32), (val))
#define RX_DISB_MODE_0_SET_rg_disb_da_xpon_cdr_lpf_lck2data(reg32, val) REG_FLD_SET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_lck2data, (reg32), (val))
#define RX_DISB_MODE_0_SET_rg_disb_da_xpon_rx_fe_peaking_ctrl(reg32, val) REG_FLD_SET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_peaking_ctrl, (reg32), (val))
#define RX_DISB_MODE_0_SET_rg_disb_da_xpon_rx_fe_gain_ctrl(reg32, val) REG_FLD_SET(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_gain_ctrl, (reg32), (val))

#define RX_DISB_MODE_1_SET_rg_disb_da_xpon_rx_dac_e0(reg32, val) REG_FLD_SET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_e0, (reg32), (val))
#define RX_DISB_MODE_1_SET_rg_disb_da_xpon_rx_dac_d1(reg32, val) REG_FLD_SET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d1, (reg32), (val))
#define RX_DISB_MODE_1_SET_rg_disb_da_xpon_rx_dac_d0(reg32, val) REG_FLD_SET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d0, (reg32), (val))
#define RX_DISB_MODE_1_SET_rg_disb_da_xpon_rx_sigdet_os(reg32, val) REG_FLD_SET(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_sigdet_os, (reg32), (val))

#define RX_DISB_MODE_2_SET_rg_disb_da_xpon_cdr_pr_pieye(reg32, val) REG_FLD_SET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_cdr_pr_pieye, (reg32), (val))
#define RX_DISB_MODE_2_SET_rg_disb_da_xpon_rx_fe_vos(reg32, val) REG_FLD_SET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_fe_vos, (reg32), (val))
#define RX_DISB_MODE_2_SET_rg_disb_da_xpon_rx_dac_eye(reg32, val) REG_FLD_SET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_eye, (reg32), (val))
#define RX_DISB_MODE_2_SET_rg_disb_da_xpon_rx_dac_e1(reg32, val) REG_FLD_SET(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_e1, (reg32), (val))

#define RX_FORCE_MODE_3_SET_rg_force_rx_dac_d1(reg32, val)     REG_FLD_SET(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d1, (reg32), (val))
#define RX_FORCE_MODE_3_SET_rg_force_rx_dac_d0(reg32, val)     REG_FLD_SET(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d0, (reg32), (val))
#define RX_FORCE_MODE_3_SET_rg_force_rx_dac_eye(reg32, val)    REG_FLD_SET(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_eye, (reg32), (val))
#define RX_FORCE_MODE_3_SET_rg_force_eq_pi_cal_rdy(reg32, val) REG_FLD_SET(RX_FORCE_MODE_3_FLD_rg_force_eq_pi_cal_rdy, (reg32), (val))

#define RX_FORCE_MODE_4_SET_rg_force_blwc_offset(reg32, val)   REG_FLD_SET(RX_FORCE_MODE_4_FLD_rg_force_blwc_offset, (reg32), (val))
#define RX_FORCE_MODE_4_SET_rg_force_xpon_rx_sigdet_out(reg32, val) REG_FLD_SET(RX_FORCE_MODE_4_FLD_rg_force_xpon_rx_sigdet_out, (reg32), (val))
#define RX_FORCE_MODE_4_SET_rg_force_rx_dac_e1(reg32, val)     REG_FLD_SET(RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e1, (reg32), (val))
#define RX_FORCE_MODE_4_SET_rg_force_rx_dac_e0(reg32, val)     REG_FLD_SET(RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e0, (reg32), (val))

#define RX_FORCE_MODE_5_SET_rg_force_eyecnt(reg32, val)        REG_FLD_SET(RX_FORCE_MODE_5_FLD_rg_force_eyecnt, (reg32), (val))
#define RX_FORCE_MODE_5_SET_rg_force_feos_out(reg32, val)      REG_FLD_SET(RX_FORCE_MODE_5_FLD_rg_force_feos_out, (reg32), (val))

#define RX_FORCE_MODE_6_SET_rg_force_rx_or_pical_en(reg32, val) REG_FLD_SET(RX_FORCE_MODE_6_FLD_rg_force_rx_or_pical_en, (reg32), (val))
#define RX_FORCE_MODE_6_SET_rg_force_eyecnt_rdy(reg32, val)    REG_FLD_SET(RX_FORCE_MODE_6_FLD_rg_force_eyecnt_rdy, (reg32), (val))

#define RX_DISB_MODE_3_SET_rg_disb_rx_dac_d1(reg32, val)       REG_FLD_SET(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d1, (reg32), (val))
#define RX_DISB_MODE_3_SET_rg_disb_rx_dac_d0(reg32, val)       REG_FLD_SET(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d0, (reg32), (val))
#define RX_DISB_MODE_3_SET_rg_disb_rx_dac_eye(reg32, val)      REG_FLD_SET(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_eye, (reg32), (val))
#define RX_DISB_MODE_3_SET_rg_disb_eq_pi_cal_rdy(reg32, val)   REG_FLD_SET(RX_DISB_MODE_3_FLD_rg_disb_eq_pi_cal_rdy, (reg32), (val))

#define RX_DISB_MODE_4_SET_rg_disb_blwc_offset(reg32, val)     REG_FLD_SET(RX_DISB_MODE_4_FLD_rg_disb_blwc_offset, (reg32), (val))
#define RX_DISB_MODE_4_SET_rg_disb_xpon_rx_sigdet_out(reg32, val) REG_FLD_SET(RX_DISB_MODE_4_FLD_rg_disb_xpon_rx_sigdet_out, (reg32), (val))
#define RX_DISB_MODE_4_SET_rg_disb_rx_dac_e1(reg32, val)       REG_FLD_SET(RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e1, (reg32), (val))
#define RX_DISB_MODE_4_SET_rg_disb_rx_dac_e0(reg32, val)       REG_FLD_SET(RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e0, (reg32), (val))

#define RX_DISB_MODE_5_SET_rg_disb_rx_or_pical_en(reg32, val)  REG_FLD_SET(RX_DISB_MODE_5_FLD_rg_disb_rx_or_pical_en, (reg32), (val))
#define RX_DISB_MODE_5_SET_rg_disb_eyecnt_rdy(reg32, val)      REG_FLD_SET(RX_DISB_MODE_5_FLD_rg_disb_eyecnt_rdy, (reg32), (val))
#define RX_DISB_MODE_5_SET_rg_disb_eyecnt(reg32, val)          REG_FLD_SET(RX_DISB_MODE_5_FLD_rg_disb_eyecnt, (reg32), (val))
#define RX_DISB_MODE_5_SET_rg_disb_feos_out(reg32, val)        REG_FLD_SET(RX_DISB_MODE_5_FLD_rg_disb_feos_out, (reg32), (val))

#define RX_FORCE_MODE_7_SET_rg_force_da_lock2ref(reg32, val)   REG_FLD_SET(RX_FORCE_MODE_7_FLD_rg_force_da_lock2ref, (reg32), (val))
#define RX_FORCE_MODE_7_SET_rg_force_pdos_rx_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_7_FLD_rg_force_pdos_rx_rst_b, (reg32), (val))
#define RX_FORCE_MODE_7_SET_rg_force_rx_and_pical_rstb(reg32, val) REG_FLD_SET(RX_FORCE_MODE_7_FLD_rg_force_rx_and_pical_rstb, (reg32), (val))
#define RX_FORCE_MODE_7_SET_rg_force_ref_and_pical_rstb(reg32, val) REG_FLD_SET(RX_FORCE_MODE_7_FLD_rg_force_ref_and_pical_rstb, (reg32), (val))

#define RX_FORCE_MODE_8_SET_rg_force_eyecnt_rx_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_8_FLD_rg_force_eyecnt_rx_rst_b, (reg32), (val))
#define RX_FORCE_MODE_8_SET_rg_force_feos_rx_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_8_FLD_rg_force_feos_rx_rst_b, (reg32), (val))
#define RX_FORCE_MODE_8_SET_rg_force_sdcal_ref_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_8_FLD_rg_force_sdcal_ref_rst_b, (reg32), (val))
#define RX_FORCE_MODE_8_SET_rg_force_blwc_rx_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_8_FLD_rg_force_blwc_rx_rst_b, (reg32), (val))

#define RX_FORCE_MODE_9_SET_rg_force_pi_cal_data_out_o(reg32, val) REG_FLD_SET(RX_FORCE_MODE_9_FLD_rg_force_pi_cal_data_out_o, (reg32), (val))
#define RX_FORCE_MODE_9_SET_rg_force_eye_top_en(reg32, val)    REG_FLD_SET(RX_FORCE_MODE_9_FLD_rg_force_eye_top_en, (reg32), (val))
#define RX_FORCE_MODE_9_SET_rg_force_eye_reset_plu_o(reg32, val) REG_FLD_SET(RX_FORCE_MODE_9_FLD_rg_force_eye_reset_plu_o, (reg32), (val))
#define RX_FORCE_MODE_9_SET_rg_force_fbck_lock(reg32, val)     REG_FLD_SET(RX_FORCE_MODE_9_FLD_rg_force_fbck_lock, (reg32), (val))

#define RX_DISB_MODE_6_SET_rg_disb_da_lock2ref(reg32, val)     REG_FLD_SET(RX_DISB_MODE_6_FLD_rg_disb_da_lock2ref, (reg32), (val))
#define RX_DISB_MODE_6_SET_rg_disb_pdos_rx_rst_b(reg32, val)   REG_FLD_SET(RX_DISB_MODE_6_FLD_rg_disb_pdos_rx_rst_b, (reg32), (val))
#define RX_DISB_MODE_6_SET_rg_disb_rx_and_pical_rstb(reg32, val) REG_FLD_SET(RX_DISB_MODE_6_FLD_rg_disb_rx_and_pical_rstb, (reg32), (val))
#define RX_DISB_MODE_6_SET_rg_disb_ref_and_pical_rstb(reg32, val) REG_FLD_SET(RX_DISB_MODE_6_FLD_rg_disb_ref_and_pical_rstb, (reg32), (val))

#define RX_DISB_MODE_7_SET_rg_disb_eyecnt_rx_rst_b(reg32, val) REG_FLD_SET(RX_DISB_MODE_7_FLD_rg_disb_eyecnt_rx_rst_b, (reg32), (val))
#define RX_DISB_MODE_7_SET_rg_disb_feos_rx_rst_b(reg32, val)   REG_FLD_SET(RX_DISB_MODE_7_FLD_rg_disb_feos_rx_rst_b, (reg32), (val))
#define RX_DISB_MODE_7_SET_rg_disb_sdcal_ref_rst_b(reg32, val) REG_FLD_SET(RX_DISB_MODE_7_FLD_rg_disb_sdcal_ref_rst_b, (reg32), (val))
#define RX_DISB_MODE_7_SET_rg_disb_blwc_rx_rst_b(reg32, val)   REG_FLD_SET(RX_DISB_MODE_7_FLD_rg_disb_blwc_rx_rst_b, (reg32), (val))

#define RX_DISB_MODE_8_SET_rg_disb_pi_cal_data_out_o(reg32, val) REG_FLD_SET(RX_DISB_MODE_8_FLD_rg_disb_pi_cal_data_out_o, (reg32), (val))
#define RX_DISB_MODE_8_SET_rg_disb_eye_top_en(reg32, val)      REG_FLD_SET(RX_DISB_MODE_8_FLD_rg_disb_eye_top_en, (reg32), (val))
#define RX_DISB_MODE_8_SET_rg_disb_eye_reset_plu_o(reg32, val) REG_FLD_SET(RX_DISB_MODE_8_FLD_rg_disb_eye_reset_plu_o, (reg32), (val))
#define RX_DISB_MODE_8_SET_rg_disb_fbck_lock(reg32, val)       REG_FLD_SET(RX_DISB_MODE_8_FLD_rg_disb_fbck_lock, (reg32), (val))

#define SS_BIST_0_SET_dbgctl_bistctl_px_lnx_flagh_en(reg32, val) REG_FLD_SET(SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagh_en, (reg32), (val))
#define SS_BIST_0_SET_dbgctl_bistctl_px_lnx_flagl_en(reg32, val) REG_FLD_SET(SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagl_en, (reg32), (val))
#define SS_BIST_0_SET_dbgctl_bistctl_flagh_sel(reg32, val)     REG_FLD_SET(SS_BIST_0_FLD_dbgctl_bistctl_flagh_sel, (reg32), (val))
#define SS_BIST_0_SET_dbgctl_bistctl_flagl_sel(reg32, val)     REG_FLD_SET(SS_BIST_0_FLD_dbgctl_bistctl_flagl_sel, (reg32), (val))

#define SS_BIST_1_SET_rg_lnx_bistctl_bit_error_rst_sel(reg32, val) REG_FLD_SET(SS_BIST_1_FLD_rg_lnx_bistctl_bit_error_rst_sel, (reg32), (val))
#define SS_BIST_1_SET_pllctl_px_lnx_tx_por_rdy(reg32, val)     REG_FLD_SET(SS_BIST_1_FLD_pllctl_px_lnx_tx_por_rdy, (reg32), (val))
#define SS_BIST_1_SET_all_lane_prbs_tx_en(reg32, val)          REG_FLD_SET(SS_BIST_1_FLD_all_lane_prbs_tx_en, (reg32), (val))
#define SS_BIST_1_SET_anlt_px_lnx_lt_los(reg32, val)           REG_FLD_SET(SS_BIST_1_FLD_anlt_px_lnx_lt_los, (reg32), (val))

#define SS_BIST_2_SET_rg_lnx_bistctl_prbs_check_timer(reg32, val) REG_FLD_SET(SS_BIST_2_FLD_rg_lnx_bistctl_prbs_check_timer, (reg32), (val))

#define SS_DA_XPON_PWDB_0_SET_rg_da_xpon_cdr_pd_pwdb(reg32, val) REG_FLD_SET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pd_pwdb, (reg32), (val))
#define SS_DA_XPON_PWDB_0_SET_rg_da_xpon_cdr_pr_pieye_pwdb(reg32, val) REG_FLD_SET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pieye_pwdb, (reg32), (val))
#define SS_DA_XPON_PWDB_0_SET_rg_da_xpon_cdr_pr_pwdb(reg32, val) REG_FLD_SET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pwdb, (reg32), (val))
#define SS_DA_XPON_PWDB_0_SET_rg_da_xpon_rx_fe_pwdb(reg32, val) REG_FLD_SET(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_rx_fe_pwdb, (reg32), (val))

#define SS_DA_XPON_PWDB_1_SET_rg_da_xpon_rx_sigdet_pwdb(reg32, val) REG_FLD_SET(SS_DA_XPON_PWDB_1_FLD_rg_da_xpon_rx_sigdet_pwdb, (reg32), (val))

#define SS_LCPLL_0_SET_tdc_sync_pcw_ncpo_chg(reg32, val)       REG_FLD_SET(SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg, (reg32), (val))
#define SS_LCPLL_0_SET_eee_lcpll_hold(reg32, val)              REG_FLD_SET(SS_LCPLL_0_FLD_eee_lcpll_hold, (reg32), (val))

#define SS_LCPLL_1_SET_tdc_sync_pcw_ncpo(reg32, val)           REG_FLD_SET(SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo, (reg32), (val))

#define SS_LCPLL_2_SET_lcpll_top_flagh_en(reg32, val)          REG_FLD_SET(SS_LCPLL_2_FLD_lcpll_top_flagh_en, (reg32), (val))
#define SS_LCPLL_2_SET_lcpll_top_flagl_en(reg32, val)          REG_FLD_SET(SS_LCPLL_2_FLD_lcpll_top_flagl_en, (reg32), (val))
#define SS_LCPLL_2_SET_flagh_sel(reg32, val)                   REG_FLD_SET(SS_LCPLL_2_FLD_flagh_sel, (reg32), (val))
#define SS_LCPLL_2_SET_flagl_sel(reg32, val)                   REG_FLD_SET(SS_LCPLL_2_FLD_flagl_sel, (reg32), (val))

#define ADD_DIG_RESERVE_0_SET_rg_dig_reserve_0(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_0_FLD_rg_dig_reserve_0, (reg32), (val))

#define ADD_DIG_RESERVE_1_SET_rg_dig_reserve_1(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_1_FLD_rg_dig_reserve_1, (reg32), (val))

#define ADD_DIG_RESERVE_2_SET_rg_dig_reserve_2(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_2_FLD_rg_dig_reserve_2, (reg32), (val))

#define ADD_DIG_RESERVE_3_SET_rg_dig_reserve_3(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_3_FLD_rg_dig_reserve_3, (reg32), (val))

#define ADD_DIG_RESERVE_4_SET_rg_dig_reserve_4(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_4_FLD_rg_dig_reserve_4, (reg32), (val))

#define RG_XPON_RX_RESERVED_1_SET_rg_xpon_rx_rate_ctrl(reg32, val) REG_FLD_SET(RG_XPON_RX_RESERVED_1_FLD_rg_xpon_rx_rate_ctrl, (reg32), (val))

#define ADD_DIG_RO_RESERVE_0_SET_ro_dig_reserve_0(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_0_FLD_ro_dig_reserve_0, (reg32), (val))

#define ADD_DIG_RO_RESERVE_1_SET_ro_dig_reserve_1(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_1_FLD_ro_dig_reserve_1, (reg32), (val))

#define ADD_DIG_RO_RESERVE_2_SET_ro_dig_reserve_2(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_2_FLD_ro_dig_reserve_2, (reg32), (val))

#define ADD_DIG_RO_RESERVE_3_SET_ro_dig_reserve_3(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_3_FLD_ro_dig_reserve_3, (reg32), (val))

#define ADD_DIG_RO_RESERVE_4_SET_ro_dig_reserve_4(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_4_FLD_ro_dig_reserve_4, (reg32), (val))

#define ADD_RX_SYS_EN_SEL_0_SET_rg_rx_sys_en(reg32, val)       REG_FLD_SET(ADD_RX_SYS_EN_SEL_0_FLD_rg_rx_sys_en, (reg32), (val))
#define ADD_RX_SYS_EN_SEL_0_SET_rg_da_rx_sys_en_sel(reg32, val) REG_FLD_SET(ADD_RX_SYS_EN_SEL_0_FLD_rg_da_rx_sys_en_sel, (reg32), (val))

#define PLL_TDC_FREQDET_0_SET_rg_pll_unlock_cyclecnt(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_0_FLD_rg_pll_unlock_cyclecnt, (reg32), (val))
#define PLL_TDC_FREQDET_0_SET_rg_pll_lock_cyclecnt(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_0_FLD_rg_pll_lock_cyclecnt, (reg32), (val))

#define PLL_TDC_FREQDET_1_SET_rg_pll_lock_target_end(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_end, (reg32), (val))
#define PLL_TDC_FREQDET_1_SET_rg_pll_lock_target_beg(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_beg, (reg32), (val))

#define PLL_TDC_FREQDET_2_SET_rg_pll_unlock_target_end(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_end, (reg32), (val))
#define PLL_TDC_FREQDET_2_SET_rg_pll_unlock_target_beg(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_beg, (reg32), (val))

#define PLL_TDC_FREQDET_3_SET_rg_pll_wait_100us(reg32, val)    REG_FLD_SET(PLL_TDC_FREQDET_3_FLD_rg_pll_wait_100us, (reg32), (val))
#define PLL_TDC_FREQDET_3_SET_rg_pll_unlockth(reg32, val)      REG_FLD_SET(PLL_TDC_FREQDET_3_FLD_rg_pll_unlockth, (reg32), (val))
#define PLL_TDC_FREQDET_3_SET_rg_pll_lock_lockth(reg32, val)   REG_FLD_SET(PLL_TDC_FREQDET_3_FLD_rg_pll_lock_lockth, (reg32), (val))
#define PLL_TDC_FREQDET_3_SET_rg_pll_lock_cnt_clear(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_3_FLD_rg_pll_lock_cnt_clear, (reg32), (val))
#define PLL_TDC_FREQDET_3_SET_rg_pll_freqlock_det_en(reg32, val) REG_FLD_SET(PLL_TDC_FREQDET_3_FLD_rg_pll_freqlock_det_en, (reg32), (val))

#define DA_XPON_TX_FORCE_0_SET_rg_force_tx_ck_en(reg32, val)   REG_FLD_SET(DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ck_en, (reg32), (val))
#define DA_XPON_TX_FORCE_0_SET_rg_disb_tx_ck_en(reg32, val)    REG_FLD_SET(DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ck_en, (reg32), (val))
#define DA_XPON_TX_FORCE_0_SET_rg_force_tx_ldo_lpf_en(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ldo_lpf_en, (reg32), (val))
#define DA_XPON_TX_FORCE_0_SET_rg_disb_tx_ldo_lpf_en(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ldo_lpf_en, (reg32), (val))

#define DA_XPON_TX_FORCE_1_SET_rg_disb_da_xpon_tx_data_ben(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data_ben, (reg32), (val))
#define DA_XPON_TX_FORCE_1_SET_rg_disb_da_xpon_tx_data(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data, (reg32), (val))
#define DA_XPON_TX_FORCE_1_SET_rg_force_tx_hsdata_en(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_1_FLD_rg_force_tx_hsdata_en, (reg32), (val))
#define DA_XPON_TX_FORCE_1_SET_rg_disb_tx_hsdata_en(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_1_FLD_rg_disb_tx_hsdata_en, (reg32), (val))

#define DA_XPON_TX_FORCE_2_SET_rg_force_da_xpon_tx_data_ben(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data_ben, (reg32), (val))
#define DA_XPON_TX_FORCE_2_SET_rg_force_da_xpon_tx_data(reg32, val) REG_FLD_SET(DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data, (reg32), (val))

#define RX_FORCE_MODE_10_SET_rg_disb_status_rx_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_10_FLD_rg_disb_status_rx_rst_b, (reg32), (val))
#define RX_FORCE_MODE_10_SET_rg_force_status_rx_rst_b(reg32, val) REG_FLD_SET(RX_FORCE_MODE_10_FLD_rg_force_status_rx_rst_b, (reg32), (val))

#define ADD_CLKPATH_RST_0_SET_rg_xpon_pma_probe_sel(reg32, val) REG_FLD_SET(ADD_CLKPATH_RST_0_FLD_rg_xpon_pma_probe_sel, (reg32), (val))
#define ADD_CLKPATH_RST_0_SET_rg_tdc_lck2ref_sel(reg32, val)   REG_FLD_SET(ADD_CLKPATH_RST_0_FLD_rg_tdc_lck2ref_sel, (reg32), (val))
#define ADD_CLKPATH_RST_0_SET_rg_clkpath_rstb_ck(reg32, val)   REG_FLD_SET(ADD_CLKPATH_RST_0_FLD_rg_clkpath_rstb_ck, (reg32), (val))
#define ADD_CLKPATH_RST_0_SET_rg_clkpath_rst_en(reg32, val)    REG_FLD_SET(ADD_CLKPATH_RST_0_FLD_rg_clkpath_rst_en, (reg32), (val))

#define ADD_XPON_MODE_1_SET_rg_r2t_fifo_en(reg32, val)         REG_FLD_SET(ADD_XPON_MODE_1_FLD_rg_r2t_fifo_en, (reg32), (val))
#define ADD_XPON_MODE_1_SET_rg_tx_bist_gen_en(reg32, val)      REG_FLD_SET(ADD_XPON_MODE_1_FLD_rg_tx_bist_gen_en, (reg32), (val))
#define ADD_XPON_MODE_1_SET_rg_xfi_rx_mode(reg32, val)         REG_FLD_SET(ADD_XPON_MODE_1_FLD_rg_xfi_rx_mode, (reg32), (val))
#define ADD_XPON_MODE_1_SET_rg_r2t_mode(reg32, val)            REG_FLD_SET(ADD_XPON_MODE_1_FLD_rg_r2t_mode, (reg32), (val))
#define ADD_XPON_MODE_1_SET_rg_xfi_tx_mode(reg32, val)         REG_FLD_SET(ADD_XPON_MODE_1_FLD_rg_xfi_tx_mode, (reg32), (val))
#define ADD_XPON_MODE_1_SET_rg_xpon_mode(reg32, val)           REG_FLD_SET(ADD_XPON_MODE_1_FLD_rg_xpon_mode, (reg32), (val))

#define ADD_R2T_MODE_1_SET_rg_rx_asic_uses_ff(reg32, val)      REG_FLD_SET(ADD_R2T_MODE_1_FLD_rg_rx_asic_uses_ff, (reg32), (val))
#define ADD_R2T_MODE_1_SET_rg_rx_afifo_adj(reg32, val)         REG_FLD_SET(ADD_R2T_MODE_1_FLD_rg_rx_afifo_adj, (reg32), (val))
#define ADD_R2T_MODE_1_SET_rg_r2t_asic_uses_ff(reg32, val)     REG_FLD_SET(ADD_R2T_MODE_1_FLD_rg_r2t_asic_uses_ff, (reg32), (val))
#define ADD_R2T_MODE_1_SET_rg_r2t_afifo_adj(reg32, val)        REG_FLD_SET(ADD_R2T_MODE_1_FLD_rg_r2t_afifo_adj, (reg32), (val))

#define ADD_T2R_MODE_1_SET_rg_tx_asic_uses_ff(reg32, val)      REG_FLD_SET(ADD_T2R_MODE_1_FLD_rg_tx_asic_uses_ff, (reg32), (val))
#define ADD_T2R_MODE_1_SET_rg_tx_afifo_adj(reg32, val)         REG_FLD_SET(ADD_T2R_MODE_1_FLD_rg_tx_afifo_adj, (reg32), (val))
#define ADD_T2R_MODE_1_SET_rg_t2r_asic_uses_ff(reg32, val)     REG_FLD_SET(ADD_T2R_MODE_1_FLD_rg_t2r_asic_uses_ff, (reg32), (val))
#define ADD_T2R_MODE_1_SET_rg_t2r_afifo_adj(reg32, val)        REG_FLD_SET(ADD_T2R_MODE_1_FLD_rg_t2r_afifo_adj, (reg32), (val))
#define ADD_T2R_MODE_1_SET_rg_xpon_t2r_bist_mode(reg32, val)   REG_FLD_SET(ADD_T2R_MODE_1_FLD_rg_xpon_t2r_bist_mode, (reg32), (val))
#define ADD_T2R_MODE_1_SET_rg_t2r_fifo_en(reg32, val)          REG_FLD_SET(ADD_T2R_MODE_1_FLD_rg_t2r_fifo_en, (reg32), (val))

#define ADD_LCPLL_RO_1_SET_ro_rx_sequence(reg32, val)          REG_FLD_SET(ADD_LCPLL_RO_1_FLD_ro_rx_sequence, (reg32), (val))
#define ADD_LCPLL_RO_1_SET_ro_pll_fbck_lock2(reg32, val)       REG_FLD_SET(ADD_LCPLL_RO_1_FLD_ro_pll_fbck_lock2, (reg32), (val))
#define ADD_LCPLL_RO_1_SET_ro_lcpll_ck_stb(reg32, val)         REG_FLD_SET(ADD_LCPLL_RO_1_FLD_ro_lcpll_ck_stb, (reg32), (val))
#define ADD_LCPLL_RO_1_SET_ro_tdc_ck_stb(reg32, val)           REG_FLD_SET(ADD_LCPLL_RO_1_FLD_ro_tdc_ck_stb, (reg32), (val))

#define ADD_RO_RX2ANA_1_SET_ro_rx_dac_e0(reg32, val)           REG_FLD_SET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_e0, (reg32), (val))
#define ADD_RO_RX2ANA_1_SET_ro_rx_dac_d1(reg32, val)           REG_FLD_SET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d1, (reg32), (val))
#define ADD_RO_RX2ANA_1_SET_ro_rx_dac_d0(reg32, val)           REG_FLD_SET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d0, (reg32), (val))
#define ADD_RO_RX2ANA_1_SET_ro_rx_dac_eye(reg32, val)          REG_FLD_SET(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_eye, (reg32), (val))

#define ADD_RO_RX2ANA_2_SET_ro_da_xpon_rx_sigdet_os(reg32, val) REG_FLD_SET(ADD_RO_RX2ANA_2_FLD_ro_da_xpon_rx_sigdet_os, (reg32), (val))
#define ADD_RO_RX2ANA_2_SET_ro_rx_blwc_offset(reg32, val)      REG_FLD_SET(ADD_RO_RX2ANA_2_FLD_ro_rx_blwc_offset, (reg32), (val))
#define ADD_RO_RX2ANA_2_SET_ro_rx_feos_out(reg32, val)         REG_FLD_SET(ADD_RO_RX2ANA_2_FLD_ro_rx_feos_out, (reg32), (val))
#define ADD_RO_RX2ANA_2_SET_ro_rx_dac_e1(reg32, val)           REG_FLD_SET(ADD_RO_RX2ANA_2_FLD_ro_rx_dac_e1, (reg32), (val))

#define ADD_RO_RX2ANA_3_SET_ro_rx_fifo_full_cnt(reg32, val)    REG_FLD_SET(ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_full_cnt, (reg32), (val))
#define ADD_RO_RX2ANA_3_SET_ro_rx_fifo_empty_cnt(reg32, val)   REG_FLD_SET(ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_empty_cnt, (reg32), (val))
#define ADD_RO_RX2ANA_3_SET_ro_rx_pi_cal_data_out(reg32, val)  REG_FLD_SET(ADD_RO_RX2ANA_3_FLD_ro_rx_pi_cal_data_out, (reg32), (val))

#define ADD_RO_R2TMODE_1_SET_ro_r2t_fifo_empty_cnt(reg32, val) REG_FLD_SET(ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_empty_cnt, (reg32), (val))
#define ADD_RO_R2TMODE_1_SET_ro_r2t_fifo_full_cnt(reg32, val)  REG_FLD_SET(ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_full_cnt, (reg32), (val))
#define ADD_RO_R2TMODE_1_SET_ro_r2t_data_afifo(reg32, val)     REG_FLD_SET(ADD_RO_R2TMODE_1_FLD_ro_r2t_data_afifo, (reg32), (val))

#define RG_LCPLL_XPON_CMN_STB_CTRL_0_SET_rg_xpon_cmn_force_on(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_force_on, (reg32), (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_SET_rg_xpon_cmn_man_pwdb(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_man_pwdb, (reg32), (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_SET_rg_xpon_cmn_en_timer(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_en_timer, (reg32), (val))

#define RG_LCPLL_XPON_CMN_STB_CTRL_1_SET_rg_tx_hsdata_en_ext_mode(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_hsdata_en_ext_mode, (reg32), (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_SET_rg_tx_d_toggle_en(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_d_toggle_en, (reg32), (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_SET_rg_xpon_cmn_inv(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_inv, (reg32), (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_SET_rg_xpon_cmn_hw_ctrl_mode(reg32, val) REG_FLD_SET(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_hw_ctrl_mode, (reg32), (val))

#define RG_TX_HSDATA_EN_EXT_CNT_0_SET_rg_tx_hsdata_en_cnt(reg32, val) REG_FLD_SET(RG_TX_HSDATA_EN_EXT_CNT_0_FLD_rg_tx_hsdata_en_cnt, (reg32), (val))

#define PON_TX_COUNTER_0_SET_rg_txcalib_5us(reg32, val)        REG_FLD_SET(PON_TX_COUNTER_0_FLD_rg_txcalib_5us, (reg32), (val))
#define PON_TX_COUNTER_0_SET_rg_txcalib_50us(reg32, val)       REG_FLD_SET(PON_TX_COUNTER_0_FLD_rg_txcalib_50us, (reg32), (val))

#define PON_TX_COUNTER_1_SET_rg_tx_hsdata_en_wait(reg32, val)  REG_FLD_SET(PON_TX_COUNTER_1_FLD_rg_tx_hsdata_en_wait, (reg32), (val))
#define PON_TX_COUNTER_1_SET_rg_tx_ck_en_wait(reg32, val)      REG_FLD_SET(PON_TX_COUNTER_1_FLD_rg_tx_ck_en_wait, (reg32), (val))

#define PON_TX_COUNTER_2_SET_rg_tx_serdes_rdy_wait(reg32, val) REG_FLD_SET(PON_TX_COUNTER_2_FLD_rg_tx_serdes_rdy_wait, (reg32), (val))
#define PON_TX_COUNTER_2_SET_rg_tx_power_on_wait(reg32, val)   REG_FLD_SET(PON_TX_COUNTER_2_FLD_rg_tx_power_on_wait, (reg32), (val))

#define PON_TX_COUNTER_3_SET_ro_tx_serdes_rdy(reg32, val)      REG_FLD_SET(PON_TX_COUNTER_3_FLD_ro_tx_serdes_rdy, (reg32), (val))

#define PON_CK_SET_SET_rg_txck_inv(reg32, val)                 REG_FLD_SET(PON_CK_SET_FLD_rg_txck_inv, (reg32), (val))
#define PON_CK_SET_SET_rg_rxck_inv(reg32, val)                 REG_FLD_SET(PON_CK_SET_FLD_rg_rxck_inv, (reg32), (val))
#define PON_CK_SET_SET_rg_rxck_sync_inv(reg32, val)            REG_FLD_SET(PON_CK_SET_FLD_rg_rxck_sync_inv, (reg32), (val))
#define PON_CK_SET_SET_rg_rxck_dbg_inv(reg32, val)             REG_FLD_SET(PON_CK_SET_FLD_rg_rxck_dbg_inv, (reg32), (val))
#define PON_CK_SET_SET_rg_force_ck_g(reg32, val)               REG_FLD_SET(PON_CK_SET_FLD_rg_force_ck_g, (reg32), (val))
#define PON_CK_SET_SET_rg_force_e_txmode(reg32, val)           REG_FLD_SET(PON_CK_SET_FLD_rg_force_e_txmode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_txmode(reg32, val)          REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_txmode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xe_mode(reg32, val)            REG_FLD_SET(PON_CK_SET_FLD_rg_force_xe_mode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_mode(reg32, val)            REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_mode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_ge_mode(reg32, val)            REG_FLD_SET(PON_CK_SET_FLD_rg_force_ge_mode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_e_mode(reg32, val)             REG_FLD_SET(PON_CK_SET_FLD_rg_force_e_mode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_g_mode(reg32, val)             REG_FLD_SET(PON_CK_SET_FLD_rg_force_g_mode, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_rxmapmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_rxmapmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_ge_rxmapmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_ge_rxmapmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xe_txmapmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_xe_txmapmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_txmapmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_txmapmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_ge_txmapmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_ge_txmapmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_rxpcsmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_rxpcsmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_ge_rxpcsmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_ge_rxpcsmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xe_txpcsmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_xe_txpcsmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_txpcsmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_txpcsmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_ge_txpcsmodesel(reg32, val)    REG_FLD_SET(PON_CK_SET_FLD_rg_force_ge_txpcsmodesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_xg_txpcsdiv2modesel(reg32, val) REG_FLD_SET(PON_CK_SET_FLD_rg_force_xg_txpcsdiv2modesel, (reg32), (val))
#define PON_CK_SET_SET_rg_force_bg_rx(reg32, val)              REG_FLD_SET(PON_CK_SET_FLD_rg_force_bg_rx, (reg32), (val))
#define PON_CK_SET_SET_rg_force_bg_tx(reg32, val)              REG_FLD_SET(PON_CK_SET_FLD_rg_force_bg_tx, (reg32), (val))

#define TX_FIFO_MODE_SEL_SET_rg_xfi_phyck_inv(reg32, val)      REG_FLD_SET(TX_FIFO_MODE_SEL_FLD_rg_xfi_phyck_inv, (reg32), (val))
#define TX_FIFO_MODE_SEL_SET_rg_tx_afifo_mode(reg32, val)      REG_FLD_SET(TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_mode, (reg32), (val))
#define TX_FIFO_MODE_SEL_SET_rg_tx_afifo_en(reg32, val)        REG_FLD_SET(TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_en, (reg32), (val))

#define XPON_PLL_STB_CNT_SET_rg_xpon_pll_stb_cnt(reg32, val)   REG_FLD_SET(XPON_PLL_STB_CNT_FLD_rg_xpon_pll_stb_cnt, (reg32), (val))

#define XPON_PLL_STOP_CNT_SET_rg_xpon_pll_stop_cnt(reg32, val) REG_FLD_SET(XPON_PLL_STOP_CNT_FLD_rg_xpon_pll_stop_cnt, (reg32), (val))

#define SW_RST_SET_SET_rg_sw_xfi_rxmac_rst_n(reg32, val)       REG_FLD_SET(SW_RST_SET_FLD_rg_sw_xfi_rxmac_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_xfi_txmac_rst_n(reg32, val)       REG_FLD_SET(SW_RST_SET_FLD_rg_sw_xfi_txmac_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_ponolt_rxmac_rst_n(reg32, val)    REG_FLD_SET(SW_RST_SET_FLD_rg_sw_ponolt_rxmac_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_ponolt_rxpcs_rst_n(reg32, val)    REG_FLD_SET(SW_RST_SET_FLD_rg_sw_ponolt_rxpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_ponolt_txmac_rst_n(reg32, val)    REG_FLD_SET(SW_RST_SET_FLD_rg_sw_ponolt_txmac_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_ponolt_txpcs_rst_n(reg32, val)    REG_FLD_SET(SW_RST_SET_FLD_rg_sw_ponolt_txpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_hsg_rxpcs_rst_n(reg32, val)       REG_FLD_SET(SW_RST_SET_FLD_rg_sw_hsg_rxpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_hsg_txpcs_rst_n(reg32, val)       REG_FLD_SET(SW_RST_SET_FLD_rg_sw_hsg_txpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_xfi_rxpcs_bist_rst_n(reg32, val)  REG_FLD_SET(SW_RST_SET_FLD_rg_sw_xfi_rxpcs_bist_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_xfi_rxpcs_rst_n(reg32, val)       REG_FLD_SET(SW_RST_SET_FLD_rg_sw_xfi_rxpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_xfi_txpcs_rst_n(reg32, val)       REG_FLD_SET(SW_RST_SET_FLD_rg_sw_xfi_txpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_tx_fifo_rst_n(reg32, val)         REG_FLD_SET(SW_RST_SET_FLD_rg_sw_tx_fifo_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_ref_rst_n(reg32, val)             REG_FLD_SET(SW_RST_SET_FLD_rg_sw_ref_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_allpcs_rst_n(reg32, val)          REG_FLD_SET(SW_RST_SET_FLD_rg_sw_allpcs_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_pma_rst_n(reg32, val)             REG_FLD_SET(SW_RST_SET_FLD_rg_sw_pma_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_tx_rst_n(reg32, val)              REG_FLD_SET(SW_RST_SET_FLD_rg_sw_tx_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_rx_rst_n(reg32, val)              REG_FLD_SET(SW_RST_SET_FLD_rg_sw_rx_rst_n, (reg32), (val))
#define SW_RST_SET_SET_rg_sw_rx_fifo_rst_n(reg32, val)         REG_FLD_SET(SW_RST_SET_FLD_rg_sw_rx_fifo_rst_n, (reg32), (val))

#define ADD_RO_TX2ANA_1_SET_ro_tx_fifo_full_cnt(reg32, val)    REG_FLD_SET(ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_full_cnt, (reg32), (val))
#define ADD_RO_TX2ANA_1_SET_ro_tx_fifo_empty_cnt(reg32, val)   REG_FLD_SET(ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_empty_cnt, (reg32), (val))

#define TX_DLY_CTRL_SET_rg_outben_data_mode(reg32, val)        REG_FLD_SET(TX_DLY_CTRL_FLD_rg_outben_data_mode, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_tx_non_reverse_gpon(reg32, val)     REG_FLD_SET(TX_DLY_CTRL_FLD_rg_tx_non_reverse_gpon, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_rx_non_reverse_gpon(reg32, val)     REG_FLD_SET(TX_DLY_CTRL_FLD_rg_rx_non_reverse_gpon, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_tx_non_reverse_epon(reg32, val)     REG_FLD_SET(TX_DLY_CTRL_FLD_rg_tx_non_reverse_epon, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_rx_non_reverse_epon(reg32, val)     REG_FLD_SET(TX_DLY_CTRL_FLD_rg_rx_non_reverse_epon, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_tx_ben_exten_ftune(reg32, val)      REG_FLD_SET(TX_DLY_CTRL_FLD_rg_tx_ben_exten_ftune, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_txben_pre_post_zero_en(reg32, val)  REG_FLD_SET(TX_DLY_CTRL_FLD_rg_txben_pre_post_zero_en, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_tx_dly_ben_ftune(reg32, val)        REG_FLD_SET(TX_DLY_CTRL_FLD_rg_tx_dly_ben_ftune, (reg32), (val))
#define TX_DLY_CTRL_SET_rg_tx_dly_data_ftune(reg32, val)       REG_FLD_SET(TX_DLY_CTRL_FLD_rg_tx_dly_data_ftune, (reg32), (val))

#define MEM_WRAPPER_CTRL_SET_rg_rx_pma_fifo_pd(reg32, val)     REG_FLD_SET(MEM_WRAPPER_CTRL_FLD_rg_rx_pma_fifo_pd, (reg32), (val))
#define MEM_WRAPPER_CTRL_SET_rg_tx_pma_fifo_pd(reg32, val)     REG_FLD_SET(MEM_WRAPPER_CTRL_FLD_rg_tx_pma_fifo_pd, (reg32), (val))
#define MEM_WRAPPER_CTRL_SET_rg_gfifo_fec_mem_pd(reg32, val)   REG_FLD_SET(MEM_WRAPPER_CTRL_FLD_rg_gfifo_fec_mem_pd, (reg32), (val))
#define MEM_WRAPPER_CTRL_SET_rg_up_md32_wrap_pd(reg32, val)    REG_FLD_SET(MEM_WRAPPER_CTRL_FLD_rg_up_md32_wrap_pd, (reg32), (val))

#define XPON_INT_EN_2_SET_rg_pma_rx_afifo_full_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_2_FLD_rg_pma_rx_afifo_full_int_en, (reg32), (val))
#define XPON_INT_EN_2_SET_rg_pma_rx_afifo_empty_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_2_FLD_rg_pma_rx_afifo_empty_int_en, (reg32), (val))
#define XPON_INT_EN_2_SET_rg_pma_tx_afifo_full_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_2_FLD_rg_pma_tx_afifo_full_int_en, (reg32), (val))
#define XPON_INT_EN_2_SET_rg_pma_tx_afifo_empty_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_2_FLD_rg_pma_tx_afifo_empty_int_en, (reg32), (val))

#define XPON_INT_EN_3_SET_rg_trans_laser_on_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_3_FLD_rg_trans_laser_on_int_en, (reg32), (val))
#define XPON_INT_EN_3_SET_rg_rx_sigdet_int_en(reg32, val)      REG_FLD_SET(XPON_INT_EN_3_FLD_rg_rx_sigdet_int_en, (reg32), (val))
#define XPON_INT_EN_3_SET_rg_rx_freqdet_unlock_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_3_FLD_rg_rx_freqdet_unlock_int_en, (reg32), (val))
#define XPON_INT_EN_3_SET_rg_tx_freqdet_unlock_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_3_FLD_rg_tx_freqdet_unlock_int_en, (reg32), (val))

#define XPON_INT_STA_2_SET_pma_rx_afifo_full_int(reg32, val)   REG_FLD_SET(XPON_INT_STA_2_FLD_pma_rx_afifo_full_int, (reg32), (val))
#define XPON_INT_STA_2_SET_pma_rx_afifo_empty_int(reg32, val)  REG_FLD_SET(XPON_INT_STA_2_FLD_pma_rx_afifo_empty_int, (reg32), (val))
#define XPON_INT_STA_2_SET_pma_tx_afifo_full_int(reg32, val)   REG_FLD_SET(XPON_INT_STA_2_FLD_pma_tx_afifo_full_int, (reg32), (val))
#define XPON_INT_STA_2_SET_pma_tx_afifo_empty_int(reg32, val)  REG_FLD_SET(XPON_INT_STA_2_FLD_pma_tx_afifo_empty_int, (reg32), (val))

#define XPON_INT_STA_3_SET_trans_laser_on_int(reg32, val)      REG_FLD_SET(XPON_INT_STA_3_FLD_trans_laser_on_int, (reg32), (val))
#define XPON_INT_STA_3_SET_rx_sigdet_int(reg32, val)           REG_FLD_SET(XPON_INT_STA_3_FLD_rx_sigdet_int, (reg32), (val))
#define XPON_INT_STA_3_SET_rx_freqdet_unlock_int(reg32, val)   REG_FLD_SET(XPON_INT_STA_3_FLD_rx_freqdet_unlock_int, (reg32), (val))
#define XPON_INT_STA_3_SET_tx_freqdet_unlock_int(reg32, val)   REG_FLD_SET(XPON_INT_STA_3_FLD_tx_freqdet_unlock_int, (reg32), (val))

#define XPON_SD_BEHAVIOR_SETTING_0_SET_rg_trans_rogue_onu_cnt(reg32, val) REG_FLD_SET(XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_rogue_onu_cnt, (reg32), (val))
#define XPON_SD_BEHAVIOR_SETTING_0_SET_rg_trans_sd_fail_cnt(reg32, val) REG_FLD_SET(XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_sd_fail_cnt, (reg32), (val))

#define XPON_SD_BEHAVIOR_SETTING_1_SET_rg_trans_rogue_onu_cnt_clr(reg32, val) REG_FLD_SET(XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_rogue_onu_cnt_clr, (reg32), (val))
#define XPON_SD_BEHAVIOR_SETTING_1_SET_rg_trans_sd_fail_cnt_clr(reg32, val) REG_FLD_SET(XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_sd_fail_cnt_clr, (reg32), (val))

#define XPON_SD_BEHAVIOR_STA_SET_ro_trans_rogue_onu_cnt(reg32, val) REG_FLD_SET(XPON_SD_BEHAVIOR_STA_FLD_ro_trans_rogue_onu_cnt, (reg32), (val))
#define XPON_SD_BEHAVIOR_STA_SET_ro_trans_sd_fail_cnt(reg32, val) REG_FLD_SET(XPON_SD_BEHAVIOR_STA_FLD_ro_trans_sd_fail_cnt, (reg32), (val))

#define RX_EXTRAL_CTRL_SET_rg_abnormal_cnt(reg32, val)         REG_FLD_SET(RX_EXTRAL_CTRL_FLD_rg_abnormal_cnt, (reg32), (val))
#define RX_EXTRAL_CTRL_SET_rg_blwc_opt(reg32, val)             REG_FLD_SET(RX_EXTRAL_CTRL_FLD_rg_blwc_opt, (reg32), (val))
#define RX_EXTRAL_CTRL_SET_rg_l2d_trig_eq_en_time(reg32, val)  REG_FLD_SET(RX_EXTRAL_CTRL_FLD_rg_l2d_trig_eq_en_time, (reg32), (val))
#define RX_EXTRAL_CTRL_SET_rg_heo_rdy_opt(reg32, val)          REG_FLD_SET(RX_EXTRAL_CTRL_FLD_rg_heo_rdy_opt, (reg32), (val))
#define RX_EXTRAL_CTRL_SET_rg_os_rdy_latch(reg32, val)         REG_FLD_SET(RX_EXTRAL_CTRL_FLD_rg_os_rdy_latch, (reg32), (val))
#define RX_EXTRAL_CTRL_SET_rg_disb_leq(reg32, val)             REG_FLD_SET(RX_EXTRAL_CTRL_FLD_rg_disb_leq, (reg32), (val))

#define RX_LEQ_DISB_CTRL0_SET_rg_disb_leq_avg_en(reg32, val)   REG_FLD_SET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_avg_en, (reg32), (val))
#define RX_LEQ_DISB_CTRL0_SET_rg_disb_leq_leak_en(reg32, val)  REG_FLD_SET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_leak_en, (reg32), (val))
#define RX_LEQ_DISB_CTRL0_SET_rg_disb_leq_pf_ctrl(reg32, val)  REG_FLD_SET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_pf_ctrl, (reg32), (val))
#define RX_LEQ_DISB_CTRL0_SET_rg_disb_leq_len_ctrl(reg32, val) REG_FLD_SET(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_len_ctrl, (reg32), (val))

#define RX_LEQ_DISB_CTRL1_SET_rg_disb_leq_rst_b(reg32, val)    REG_FLD_SET(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_rst_b, (reg32), (val))
#define RX_LEQ_DISB_CTRL1_SET_rg_disb_leq_done(reg32, val)     REG_FLD_SET(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_done, (reg32), (val))
#define RX_LEQ_DISB_CTRL1_SET_rg_disb_leq_en(reg32, val)       REG_FLD_SET(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_en, (reg32), (val))

#define RX_LEQ_FORCE_CTRL0_SET_rg_leq_avg_en(reg32, val)       REG_FLD_SET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_avg_en, (reg32), (val))
#define RX_LEQ_FORCE_CTRL0_SET_rg_leq_leak_en(reg32, val)      REG_FLD_SET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_leak_en, (reg32), (val))
#define RX_LEQ_FORCE_CTRL0_SET_rg_leq_pf_ctrl(reg32, val)      REG_FLD_SET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_pf_ctrl, (reg32), (val))
#define RX_LEQ_FORCE_CTRL0_SET_rg_leq_len_ctrl(reg32, val)     REG_FLD_SET(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_len_ctrl, (reg32), (val))

#define RX_LEQ_FORCE_CTRL1_SET_rg_abnormal_cnt_reset_disb(reg32, val) REG_FLD_SET(RX_LEQ_FORCE_CTRL1_FLD_rg_abnormal_cnt_reset_disb, (reg32), (val))
#define RX_LEQ_FORCE_CTRL1_SET_rg_leq_rst_b(reg32, val)        REG_FLD_SET(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_rst_b, (reg32), (val))
#define RX_LEQ_FORCE_CTRL1_SET_rg_leq_done(reg32, val)         REG_FLD_SET(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_done, (reg32), (val))
#define RX_LEQ_FORCE_CTRL1_SET_rg_leq_en(reg32, val)           REG_FLD_SET(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_en, (reg32), (val))

#define RX_LEQ_ENTIME_CTRL0_SET_rg_entime_leq_len_ctrl3(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl3, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL0_SET_rg_entime_leq_len_ctrl2(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl2, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL0_SET_rg_entime_leq_len_ctrl1(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl1, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL0_SET_rg_entime_leq_len_ctrl0(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl0, (reg32), (val))

#define RX_LEQ_ENTIME_CTRL1_SET_rg_entime_leq_pf_ctrl3(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl3, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL1_SET_rg_entime_leq_pf_ctrl2(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl2, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL1_SET_rg_entime_leq_pf_ctrl1(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl1, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL1_SET_rg_entime_leq_pf_ctrl0(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl0, (reg32), (val))

#define RX_LEQ_ENTIME_CTRL2_SET_rg_entime_res(reg32, val)      REG_FLD_SET(RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_res, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL2_SET_rg_timeslot_res(reg32, val)    REG_FLD_SET(RX_LEQ_ENTIME_CTRL2_FLD_rg_timeslot_res, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL2_SET_rg_disentime_leq_leak_en(reg32, val) REG_FLD_SET(RX_LEQ_ENTIME_CTRL2_FLD_rg_disentime_leq_leak_en, (reg32), (val))
#define RX_LEQ_ENTIME_CTRL2_SET_rg_entime_leq_avg(reg32, val)  REG_FLD_SET(RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_leq_avg, (reg32), (val))

#define RX_LEQ_CTRL0_SET_rg_leq_init_set(reg32, val)           REG_FLD_SET(RX_LEQ_CTRL0_FLD_rg_leq_init_set, (reg32), (val))
#define RX_LEQ_CTRL0_SET_rg_leq_init_val(reg32, val)           REG_FLD_SET(RX_LEQ_CTRL0_FLD_rg_leq_init_val, (reg32), (val))
#define RX_LEQ_CTRL0_SET_rg_leq_gain(reg32, val)               REG_FLD_SET(RX_LEQ_CTRL0_FLD_rg_leq_gain, (reg32), (val))
#define RX_LEQ_CTRL0_SET_rg_leq_update_pause(reg32, val)       REG_FLD_SET(RX_LEQ_CTRL0_FLD_rg_leq_update_pause, (reg32), (val))

#define RX_LEQ_CTRL1_SET_rg_leq_leak_target(reg32, val)        REG_FLD_SET(RX_LEQ_CTRL1_FLD_rg_leq_leak_target, (reg32), (val))
#define RX_LEQ_CTRL1_SET_rg_leq_leak_gain(reg32, val)          REG_FLD_SET(RX_LEQ_CTRL1_FLD_rg_leq_leak_gain, (reg32), (val))
#define RX_LEQ_CTRL1_SET_rg_leq_bot_lim(reg32, val)            REG_FLD_SET(RX_LEQ_CTRL1_FLD_rg_leq_bot_lim, (reg32), (val))
#define RX_LEQ_CTRL1_SET_rg_leq_top_lim(reg32, val)            REG_FLD_SET(RX_LEQ_CTRL1_FLD_rg_leq_top_lim, (reg32), (val))

#define RX_LEQ_CTRL2_SET_rg_leq_gray_out_en(reg32, val)        REG_FLD_SET(RX_LEQ_CTRL2_FLD_rg_leq_gray_out_en, (reg32), (val))
#define RX_LEQ_CTRL2_SET_rg_leq_avg_cycle(reg32, val)          REG_FLD_SET(RX_LEQ_CTRL2_FLD_rg_leq_avg_cycle, (reg32), (val))

#define RX_LEQ_RO0_SET_ro_abnormal_cnt(reg32, val)             REG_FLD_SET(RX_LEQ_RO0_FLD_ro_abnormal_cnt, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_eq_rdy(reg32, val)                   REG_FLD_SET(RX_LEQ_RO0_FLD_ro_eq_rdy, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_updn(reg32, val)                 REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_updn, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_avg_en(reg32, val)               REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_avg_en, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_leak_en(reg32, val)              REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_leak_en, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_pf_ctrl(reg32, val)              REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_pf_ctrl, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_len_ctrl(reg32, val)             REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_len_ctrl, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_eq_en(reg32, val)                    REG_FLD_SET(RX_LEQ_RO0_FLD_ro_eq_en, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_eq_done(reg32, val)                  REG_FLD_SET(RX_LEQ_RO0_FLD_ro_eq_done, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_en(reg32, val)                   REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_en, (reg32), (val))
#define RX_LEQ_RO0_SET_ro_leq_rst_b(reg32, val)                REG_FLD_SET(RX_LEQ_RO0_FLD_ro_leq_rst_b, (reg32), (val))

#define RX_LEQ_RO1_SET_ro_eq_time_slot(reg32, val)             REG_FLD_SET(RX_LEQ_RO1_FLD_ro_eq_time_slot, (reg32), (val))
#define RX_LEQ_RO1_SET_ro_leq_time_slot(reg32, val)            REG_FLD_SET(RX_LEQ_RO1_FLD_ro_leq_time_slot, (reg32), (val))

#define PLL_FT_FREQDET_0_SET_rg_pll_ft_unlock_cyclecnt(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_0_FLD_rg_pll_ft_unlock_cyclecnt, (reg32), (val))
#define PLL_FT_FREQDET_0_SET_rg_pll_ft_lock_cyclecnt(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_0_FLD_rg_pll_ft_lock_cyclecnt, (reg32), (val))

#define PLL_FT_FREQDET_1_SET_rg_pll_ft_lock_target_end(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_end, (reg32), (val))
#define PLL_FT_FREQDET_1_SET_rg_pll_ft_lock_target_beg(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_beg, (reg32), (val))

#define PLL_FT_FREQDET_2_SET_rg_pll_ft_unlock_target_end(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_end, (reg32), (val))
#define PLL_FT_FREQDET_2_SET_rg_pll_ft_unlock_target_beg(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_beg, (reg32), (val))

#define PLL_FT_FREQDET_3_SET_rg_pll_ft_wait_100us(reg32, val)  REG_FLD_SET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_wait_100us, (reg32), (val))
#define PLL_FT_FREQDET_3_SET_rg_pll_ft_unlockth(reg32, val)    REG_FLD_SET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_unlockth, (reg32), (val))
#define PLL_FT_FREQDET_3_SET_rg_pll_ft_lock_lockth(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_lockth, (reg32), (val))
#define PLL_FT_FREQDET_3_SET_rg_pll_ft_lock_cnt_clear(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_cnt_clear, (reg32), (val))
#define PLL_FT_FREQDET_3_SET_rg_pll_ft_freqlock_det_en(reg32, val) REG_FLD_SET(PLL_FT_FREQDET_3_FLD_rg_pll_ft_freqlock_det_en, (reg32), (val))

#define RO_RX_FREQDET_SET_ro_fl_out(reg32, val)                REG_FLD_SET(RO_RX_FREQDET_FLD_ro_fl_out, (reg32), (val))
#define RO_RX_FREQDET_SET_ro_state_freqdet(reg32, val)         REG_FLD_SET(RO_RX_FREQDET_FLD_ro_state_freqdet, (reg32), (val))
#define RO_RX_FREQDET_SET_ro_lslock_cnt(reg32, val)            REG_FLD_SET(RO_RX_FREQDET_FLD_ro_lslock_cnt, (reg32), (val))
#define RO_RX_FREQDET_SET_ro_fbck_lock_inner(reg32, val)       REG_FLD_SET(RO_RX_FREQDET_FLD_ro_fbck_lock_inner, (reg32), (val))
#define RO_RX_FREQDET_SET_ro_fbck_lock(reg32, val)             REG_FLD_SET(RO_RX_FREQDET_FLD_ro_fbck_lock, (reg32), (val))

#define RO_PLL_FREQDET_SET_ro_pll_fl_out(reg32, val)           REG_FLD_SET(RO_PLL_FREQDET_FLD_ro_pll_fl_out, (reg32), (val))
#define RO_PLL_FREQDET_SET_ro_pll_state_freqdet(reg32, val)    REG_FLD_SET(RO_PLL_FREQDET_FLD_ro_pll_state_freqdet, (reg32), (val))
#define RO_PLL_FREQDET_SET_ro_pll_lslock_cnt(reg32, val)       REG_FLD_SET(RO_PLL_FREQDET_FLD_ro_pll_lslock_cnt, (reg32), (val))
#define RO_PLL_FREQDET_SET_ro_pll_fbck_lock_inner(reg32, val)  REG_FLD_SET(RO_PLL_FREQDET_FLD_ro_pll_fbck_lock_inner, (reg32), (val))
#define RO_PLL_FREQDET_SET_ro_pll_fbck_lock(reg32, val)        REG_FLD_SET(RO_PLL_FREQDET_FLD_ro_pll_fbck_lock, (reg32), (val))

#define RO_PLL_FT_FREQDET_SET_ro_pll_ft_fl_out(reg32, val)     REG_FLD_SET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fl_out, (reg32), (val))
#define RO_PLL_FT_FREQDET_SET_ro_pll_ft_state_freqdet(reg32, val) REG_FLD_SET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_state_freqdet, (reg32), (val))
#define RO_PLL_FT_FREQDET_SET_ro_pll_ft_lslock_cnt(reg32, val) REG_FLD_SET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_lslock_cnt, (reg32), (val))
#define RO_PLL_FT_FREQDET_SET_ro_pll_ft_fbck_lock_inner(reg32, val) REG_FLD_SET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock_inner, (reg32), (val))
#define RO_PLL_FT_FREQDET_SET_ro_pll_ft_fbck_lock(reg32, val)  REG_FLD_SET(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock, (reg32), (val))

#define RO_PMA_FREQDET_SET_ro_pma_freq_cnt_lsb(reg32, val)     REG_FLD_SET(RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_lsb, (reg32), (val))
#define RO_PMA_FREQDET_SET_ro_pma_freq_cnt_max(reg32, val)     REG_FLD_SET(RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_max, (reg32), (val))

#define RG_PMA_FREQDET_SET_rg_pma_freq_check_lsb(reg32, val)   REG_FLD_SET(RG_PMA_FREQDET_FLD_rg_pma_freq_check_lsb, (reg32), (val))
#define RG_PMA_FREQDET_SET_rg_pma_freq_meter_sel(reg32, val)   REG_FLD_SET(RG_PMA_FREQDET_FLD_rg_pma_freq_meter_sel, (reg32), (val))

#define RG_EXT_BEN_DATA_SET_rg_tx_loff_manu(reg32, val)        REG_FLD_SET(RG_EXT_BEN_DATA_FLD_rg_tx_loff_manu, (reg32), (val))

#define RG_PRE_BEN_DATA_SET_rg_tx_bh_dl_dsel(reg32, val)       REG_FLD_SET(RG_PRE_BEN_DATA_FLD_rg_tx_bh_dl_dsel, (reg32), (val))
#define RG_PRE_BEN_DATA_SET_rg_tx_lon_manu(reg32, val)         REG_FLD_SET(RG_PRE_BEN_DATA_FLD_rg_tx_lon_manu, (reg32), (val))

#define RX_TORGS_DEBUG_12_SET_ro_injosc_rdy(reg32, val)        REG_FLD_SET(RX_TORGS_DEBUG_12_FLD_ro_injosc_rdy, (reg32), (val))
#define RX_TORGS_DEBUG_12_SET_ro_kband_done(reg32, val)        REG_FLD_SET(RX_TORGS_DEBUG_12_FLD_ro_kband_done, (reg32), (val))
#define RX_TORGS_DEBUG_12_SET_ro_y_index_o(reg32, val)         REG_FLD_SET(RX_TORGS_DEBUG_12_FLD_ro_y_index_o, (reg32), (val))
#define RX_TORGS_DEBUG_12_SET_ro_x_index_o(reg32, val)         REG_FLD_SET(RX_TORGS_DEBUG_12_FLD_ro_x_index_o, (reg32), (val))

#define RO_FLL_ADC_0_SET_rg_fll_dig_pro(reg32, val)            REG_FLD_SET(RO_FLL_ADC_0_FLD_rg_fll_dig_pro, (reg32), (val))
#define RO_FLL_ADC_0_SET_ro_adc_freq_output(reg32, val)        REG_FLD_SET(RO_FLL_ADC_0_FLD_ro_adc_freq_output, (reg32), (val))

#define RO_FLL_ADC_1_SET_ro_adc_freq_inv_output(reg32, val)    REG_FLD_SET(RO_FLL_ADC_1_FLD_ro_adc_freq_inv_output, (reg32), (val))

#define RO_FLL_ADC_2_SET_ro_cor_gain_output(reg32, val)        REG_FLD_SET(RO_FLL_ADC_2_FLD_ro_cor_gain_output, (reg32), (val))

#define RO_FLL_ADC_3_SET_ro_cor_integ_output(reg32, val)       REG_FLD_SET(RO_FLL_ADC_3_FLD_ro_cor_integ_output, (reg32), (val))

#define RO_FLL_ADC_4_SET_ro_cor_integ_inv_output(reg32, val)   REG_FLD_SET(RO_FLL_ADC_4_FLD_ro_cor_integ_inv_output, (reg32), (val))

#define RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_SET_rg_ad_xpon_pll_ft_ck_mon_mux_sel(reg32, val) REG_FLD_SET(RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_FLD_rg_ad_xpon_pll_ft_ck_mon_mux_sel, (reg32), (val))

#define XPON_INT_EN_4_SET_rg_pma_rx_afifo_reach_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_4_FLD_rg_pma_rx_afifo_reach_int_en, (reg32), (val))
#define XPON_INT_EN_4_SET_rg_pma_tx_afifo_reach_int_en(reg32, val) REG_FLD_SET(XPON_INT_EN_4_FLD_rg_pma_tx_afifo_reach_int_en, (reg32), (val))

#define XPON_INT_STA_4_SET_pma_rx_afifo_reach_int(reg32, val)  REG_FLD_SET(XPON_INT_STA_4_FLD_pma_rx_afifo_reach_int, (reg32), (val))
#define XPON_INT_STA_4_SET_pma_tx_afifo_reach_int(reg32, val)  REG_FLD_SET(XPON_INT_STA_4_FLD_pma_tx_afifo_reach_int, (reg32), (val))

#define XPON_PMA_AFIFO_REACH_TH_SET_rg_pma_rx_afifo_reach_th(reg32, val) REG_FLD_SET(XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_rx_afifo_reach_th, (reg32), (val))
#define XPON_PMA_AFIFO_REACH_TH_SET_rg_pma_tx_afifo_reach_th(reg32, val) REG_FLD_SET(XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_tx_afifo_reach_th, (reg32), (val))

#define XPON_MD32_PBUS_CSR_CTRL_SET_rg_md32_pbus_arb_en(reg32, val) REG_FLD_SET(XPON_MD32_PBUS_CSR_CTRL_FLD_rg_md32_pbus_arb_en, (reg32), (val))

#define BENOFF_BIST_SEED_SET_rg_bist_prbs_init_seed_benoff(reg32, val) REG_FLD_SET(BENOFF_BIST_SEED_FLD_rg_bist_prbs_init_seed_benoff, (reg32), (val))

#define PWR_PLL_CTRL_SET_rg_pll_pwr_seq_sel(reg32, val)        REG_FLD_SET(PWR_PLL_CTRL_FLD_rg_pll_pwr_seq_sel, (reg32), (val))

#define xpon_tx_rate_ctrl_SET_rg_pon_tx_rate_ctrl(reg32, val)  REG_FLD_SET(xpon_tx_rate_ctrl_FLD_rg_pon_tx_rate_ctrl, (reg32), (val))

#define BENOFF_DATA0_SET_rg_benoff_d0(reg32, val)              REG_FLD_SET(BENOFF_DATA0_FLD_rg_benoff_d0, (reg32), (val))

#define BENOFF_DATA1_SET_rg_benoff_d1(reg32, val)              REG_FLD_SET(BENOFF_DATA1_FLD_rg_benoff_d1, (reg32), (val))

#define BENOFF_DATA2_SET_rg_benoff_d2(reg32, val)              REG_FLD_SET(BENOFF_DATA2_FLD_rg_benoff_d2, (reg32), (val))

#define BENOFF_DATA3_SET_rg_benoff_d3(reg32, val)              REG_FLD_SET(BENOFF_DATA3_FLD_rg_benoff_d3, (reg32), (val))

#define BENOFF_CTRL_SET_rg_benoff_catch_mem_en(reg32, val)     REG_FLD_SET(BENOFF_CTRL_FLD_rg_benoff_catch_mem_en, (reg32), (val))
#define BENOFF_CTRL_SET_rg_benoff_cnt_max(reg32, val)          REG_FLD_SET(BENOFF_CTRL_FLD_rg_benoff_cnt_max, (reg32), (val))

#define HS_DATA_EN_SEL_SET_rg_hsdata_en_sel(reg32, val)        REG_FLD_SET(HS_DATA_EN_SEL_FLD_rg_hsdata_en_sel, (reg32), (val))

#define FIFO_CK_STATUS_SET_ro_tx_rdfifo_depth(reg32, val)      REG_FLD_SET(FIFO_CK_STATUS_FLD_ro_tx_rdfifo_depth, (reg32), (val))
#define FIFO_CK_STATUS_SET_ro_tx_wrfifo_depth(reg32, val)      REG_FLD_SET(FIFO_CK_STATUS_FLD_ro_tx_wrfifo_depth, (reg32), (val))
#define FIFO_CK_STATUS_SET_ro_rx_rdfifo_depth(reg32, val)      REG_FLD_SET(FIFO_CK_STATUS_FLD_ro_rx_rdfifo_depth, (reg32), (val))
#define FIFO_CK_STATUS_SET_ro_rx_wrfifo_depth(reg32, val)      REG_FLD_SET(FIFO_CK_STATUS_FLD_ro_rx_wrfifo_depth, (reg32), (val))

#define TDC_DLF_GAIN_STATUS_SET_ro_dlf_gain_rund_new(reg32, val) REG_FLD_SET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new, (reg32), (val))
#define TDC_DLF_GAIN_STATUS_SET_ro_dlf_gain_new(reg32, val)    REG_FLD_SET(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new, (reg32), (val))

#define TDC_DLF_MODE_SETTING_SET_rg_dlf_gain_latch(reg32, val) REG_FLD_SET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch, (reg32), (val))
#define TDC_DLF_MODE_SETTING_SET_rg_dlf_mode_sel(reg32, val)   REG_FLD_SET(TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel, (reg32), (val))
#define TDC_DLF_MODE_SETTING_SET_ro_dlf_gain_new_org(reg32, val) REG_FLD_SET(TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org, (reg32), (val))

#define MD32_ISR_CTRL_SET_rg_md32_sfp_rx_loss_inv(reg32, val)  REG_FLD_SET(MD32_ISR_CTRL_FLD_rg_md32_sfp_rx_loss_inv, (reg32), (val))

#define MD32_MEM_CLK_CTRL_SET_rg_md32pm_ck_sel(reg32, val)     REG_FLD_SET(MD32_MEM_CLK_CTRL_FLD_rg_md32pm_ck_sel, (reg32), (val))

#define MD32_MEM_CLK_CG_CTRL_SET_rg_force_md32d_ck_g(reg32, val) REG_FLD_SET(MD32_MEM_CLK_CG_CTRL_FLD_rg_force_md32d_ck_g, (reg32), (val))

#define XG_EQD_STA_SET_ro_xg_psync_to_sof_delay_lch(reg32, val) REG_FLD_SET(XG_EQD_STA_FLD_ro_xg_psync_to_sof_delay_lch, (reg32), (val))

#define XG_EQD_CTRL_SET_rg_xg_mask_window(reg32, val)          REG_FLD_SET(XG_EQD_CTRL_FLD_rg_xg_mask_window, (reg32), (val))
#define XG_EQD_CTRL_SET_rg_xg_eqd_rst_n(reg32, val)            REG_FLD_SET(XG_EQD_CTRL_FLD_rg_xg_eqd_rst_n, (reg32), (val))

#define RAWDATA_DUMP_CTRL_0_SET_rg_rawdata_tx_en(reg32, val)   REG_FLD_SET(RAWDATA_DUMP_CTRL_0_FLD_rg_rawdata_tx_en, (reg32), (val))

#define RAWDATA_DUMP_CTRL_1_SET_rg_rawdata_tx_wdata_sel(reg32, val) REG_FLD_SET(RAWDATA_DUMP_CTRL_1_FLD_rg_rawdata_tx_wdata_sel, (reg32), (val))

#define RAWDATA_DUMP_CTRL_2_SET_rg_rawdata_mem_sel(reg32, val) REG_FLD_SET(RAWDATA_DUMP_CTRL_2_FLD_rg_rawdata_mem_sel, (reg32), (val))

#define RAWDATA_DUMP_CTRL_3_SET_rg_rawdata_tx_start_sel(reg32, val) REG_FLD_SET(RAWDATA_DUMP_CTRL_3_FLD_rg_rawdata_tx_start_sel, (reg32), (val))

#define RAWDATA_DUMP_STA_0_SET_ro_rawdata_tx_waddr(reg32, val) REG_FLD_SET(RAWDATA_DUMP_STA_0_FLD_ro_rawdata_tx_waddr, (reg32), (val))

#define RAWDATA_DUMP_STA_1_SET_ro_rawdata_rx_waddr(reg32, val) REG_FLD_SET(RAWDATA_DUMP_STA_1_FLD_ro_rawdata_rx_waddr, (reg32), (val))

#define RAWDATA_DUMP_STA_2_SET_ro_rawdata_tx_full(reg32, val)  REG_FLD_SET(RAWDATA_DUMP_STA_2_FLD_ro_rawdata_tx_full, (reg32), (val))

#define MD32MEM_DIV2_CNT_SET_rg_md32_mem_max(reg32, val)       REG_FLD_SET(MD32MEM_DIV2_CNT_FLD_rg_md32_mem_max, (reg32), (val))

#define AD_XPON_CDR_LPF_SV_SET_AD_XPON_CDR_LPF_SNAPSHOTVALUE(reg32, val) REG_FLD_SET(AD_XPON_CDR_LPF_SV_FLD_AD_XPON_CDR_LPF_SNAPSHOTVALUE, (reg32), (val))

#define K_VALUE_RD_SET_ro_dta_xpon_tx_termp_sel(reg32, val)    REG_FLD_SET(K_VALUE_RD_FLD_ro_dta_xpon_tx_termp_sel, (reg32), (val))
#define K_VALUE_RD_SET_ro_dta_xpon_tx_termn_sel(reg32, val)    REG_FLD_SET(K_VALUE_RD_FLD_ro_dta_xpon_tx_termn_sel, (reg32), (val))

#define XPONPLL_CTRL_SET_rg_jcpll_auto_en(reg32, val)          REG_FLD_SET(XPONPLL_CTRL_FLD_rg_jcpll_auto_en, (reg32), (val))
#define XPONPLL_CTRL_SET_rg_xponpll_auto_en(reg32, val)        REG_FLD_SET(XPONPLL_CTRL_FLD_rg_xponpll_auto_en, (reg32), (val))

#define MD32_GATE_HALT_SET_ro_md32_gated(reg32, val)           REG_FLD_SET(MD32_GATE_HALT_FLD_ro_md32_gated, (reg32), (val))

#define MD32_MONCCNT_SET_ro_mon_ccnt(reg32, val)               REG_FLD_SET(MD32_MONCCNT_FLD_ro_mon_ccnt, (reg32), (val))

#define MD32_MONPCNT0_SET_ro_mon_pcnt0(reg32, val)             REG_FLD_SET(MD32_MONPCNT0_FLD_ro_mon_pcnt0, (reg32), (val))

#define MD32_MONPCNT1_SET_ro_mon_pcnt1(reg32, val)             REG_FLD_SET(MD32_MONPCNT1_FLD_ro_mon_pcnt1, (reg32), (val))

#define MD32_MONPCNT2_SET_ro_mon_pcnt2(reg32, val)             REG_FLD_SET(MD32_MONPCNT2_FLD_ro_mon_pcnt2, (reg32), (val))

#define MD32_MONCONTID_SET_ro_mon_contid(reg32, val)           REG_FLD_SET(MD32_MONCONTID_FLD_ro_mon_contid, (reg32), (val))

#define MD32_MONPC_SET_ro_mon_pc(reg32, val)                   REG_FLD_SET(MD32_MONPC_FLD_ro_mon_pc, (reg32), (val))

#define MD32_TBUF_SET_ro_mon_tbuf_wptr(reg32, val)             REG_FLD_SET(MD32_TBUF_FLD_ro_mon_tbuf_wptr, (reg32), (val))

#define MD32_TBUFWDATA_L_SET_ro_tbuf_wdata_l(reg32, val)       REG_FLD_SET(MD32_TBUFWDATA_L_FLD_ro_tbuf_wdata_l, (reg32), (val))

#define MD32_TBUFWDATA_H_SET_ro_tbuf_wdata_h(reg32, val)       REG_FLD_SET(MD32_TBUFWDATA_H_FLD_ro_tbuf_wdata_h, (reg32), (val))

#define MD32_TBUFRDATA_L_SET_ro_tbuf_rdata_l(reg32, val)       REG_FLD_SET(MD32_TBUFRDATA_L_FLD_ro_tbuf_rdata_l, (reg32), (val))

#define MD32_TBUFRDATA_H_SET_ro_tbuf_rdata_h(reg32, val)       REG_FLD_SET(MD32_TBUFRDATA_H_FLD_ro_tbuf_rdata_h, (reg32), (val))

#define ADDR_MD32_PMEM_ADDR_REV_SET_rg_addr_md32_pmem_addr(reg32, val) REG_FLD_SET(ADDR_MD32_PMEM_ADDR_REV_FLD_rg_addr_md32_pmem_addr, (reg32), (val))

#define ADDR_MD32_PMEM_DATA_REV_SET_rg_addr_md32_pmem_data(reg32, val) REG_FLD_SET(ADDR_MD32_PMEM_DATA_REV_FLD_rg_addr_md32_pmem_data, (reg32), (val))

#define ADDR_MD32_DMEM_ADDR_REV_SET_rg_addr_md32_dmem_addr(reg32, val) REG_FLD_SET(ADDR_MD32_DMEM_ADDR_REV_FLD_rg_addr_md32_dmem_addr, (reg32), (val))

#define ADDR_MD32_DMEM_DATA_REV_SET_rg_addr_md32_dmem_data(reg32, val) REG_FLD_SET(ADDR_MD32_DMEM_DATA_REV_FLD_rg_addr_md32_dmem_data, (reg32), (val))

#define SS_JCPLL_PWCTL_SETTING_0_SET_rg_jcpll_man_pwdb(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_man_pwdb, (reg32), (val))
#define SS_JCPLL_PWCTL_SETTING_0_SET_rg_sw_jcpll_en(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_sw_jcpll_en, (reg32), (val))
#define SS_JCPLL_PWCTL_SETTING_0_SET_rg_jcpll_en_inv(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_en_inv, (reg32), (val))
#define SS_JCPLL_PWCTL_SETTING_0_SET_rg_jcpll_hw_ctrl_mode(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_hw_ctrl_mode, (reg32), (val))
#define SS_JCPLL_PWCTL_SETTING_0_SET_rg_jcpll_force_on(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_force_on, (reg32), (val))

#define SS_JCPLL_PWCTL_SETTING_1_SET_rg_jcpll_pcw_man_load_timer(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_pcw_man_load_timer, (reg32), (val))
#define SS_JCPLL_PWCTL_SETTING_1_SET_rg_jcpll_en_timer(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_en_timer, (reg32), (val))

#define SS_JCPLL_PWCTL_SETTING_2_SET_rg_jcpll_ck_stb_timer(reg32, val) REG_FLD_SET(SS_JCPLL_PWCTL_SETTING_2_FLD_rg_jcpll_ck_stb_timer, (reg32), (val))

#define JCPLL_CHG_SET_rg_jcpll_tdc_dig_pwdb(reg32, val)        REG_FLD_SET(JCPLL_CHG_FLD_rg_jcpll_tdc_dig_pwdb, (reg32), (val))
#define JCPLL_CHG_SET_rg_jcpll_ledck_div(reg32, val)           REG_FLD_SET(JCPLL_CHG_FLD_rg_jcpll_ledck_div, (reg32), (val))
#define JCPLL_CHG_SET_rg_jcpll_pcw_chg(reg32, val)             REG_FLD_SET(JCPLL_CHG_FLD_rg_jcpll_pcw_chg, (reg32), (val))

#define RG_JCPLL_SDM_PCW_CTRL_SET_rg_jcpll_sdm_pcw(reg32, val) REG_FLD_SET(RG_JCPLL_SDM_PCW_CTRL_FLD_rg_jcpll_sdm_pcw, (reg32), (val))

#define RG_JCPLL_SDM_PCW_CHG_CTRL_SET_rg_jcpll_sdm_pcw_chg(reg32, val) REG_FLD_SET(RG_JCPLL_SDM_PCW_CHG_CTRL_FLD_rg_jcpll_sdm_pcw_chg, (reg32), (val))

#define PLL_JCPLL_FT_FREQDET_0_SET_rg_jcpll_ft_unlock_cyclecnt(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_unlock_cyclecnt, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_0_SET_rg_jcpll_ft_lock_cyclecnt(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_lock_cyclecnt, (reg32), (val))

#define PLL_JCPLL_FT_FREQDET_1_SET_rg_jcpll_ft_lock_target_end(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_end, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_1_SET_rg_jcpll_ft_lock_target_beg(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_beg, (reg32), (val))

#define PLL_JCPLL_FT_FREQDET_2_SET_rg_jcpll_ft_unlock_target_end(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_end, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_2_SET_rg_jcpll_ft_unlock_target_beg(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_beg, (reg32), (val))

#define PLL_JCPLL_FT_FREQDET_3_SET_rg_jcpll_ft_wait_100us(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_wait_100us, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_3_SET_rg_jcpll_ft_unlockth(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_unlockth, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_3_SET_rg_jcpll_ft_lock_lockth(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_lockth, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_3_SET_rg_jcpll_ft_lock_cnt_clear(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_cnt_clear, (reg32), (val))
#define PLL_JCPLL_FT_FREQDET_3_SET_rg_jcpll_ft_freqlock_det_en(reg32, val) REG_FLD_SET(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_freqlock_det_en, (reg32), (val))

#define JCPLL_FT_CK_MUX_SET_rg_jcpll_ft_ck_mux(reg32, val)     REG_FLD_SET(JCPLL_FT_CK_MUX_FLD_rg_jcpll_ft_ck_mux, (reg32), (val))

#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_da_ctrl_man_pwdb(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_man_pwdb, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_digtcl_dac_en_force_on(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_digtcl_dac_en_force_on, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_chpup_en_force_on(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_chpup_en_force_on, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_ldochp_en_force_on(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_ldochp_en_force_on, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_autok_load_force_on(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_load_force_on, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_autok_en_force_on(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_en_force_on, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_xfi_xtalck_cgm_en_force_on(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_xfi_xtalck_cgm_en_force_on, (reg32), (val))
#define JCPLL_DA_RG_CTRL_0_SET_rg_jcpll_da_ctrl_hw_timer(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_hw_timer, (reg32), (val))

#define JCPLL_DA_RG_CTRL_1_SET_rg_jcpll_digtcl_dac_en_inv(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_digtcl_dac_en_inv, (reg32), (val))
#define JCPLL_DA_RG_CTRL_1_SET_rg_jcpll_chpup_en_inv(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_chpup_en_inv, (reg32), (val))
#define JCPLL_DA_RG_CTRL_1_SET_rg_jcpll_ldochp_en_inv(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_ldochp_en_inv, (reg32), (val))
#define JCPLL_DA_RG_CTRL_1_SET_rg_jcpll_autok_load_inv(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_load_inv, (reg32), (val))
#define JCPLL_DA_RG_CTRL_1_SET_rg_jcpll_autok_en_inv(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_en_inv, (reg32), (val))
#define JCPLL_DA_RG_CTRL_1_SET_rg_xfi_xtalck_cgm_en_inv(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_1_FLD_rg_xfi_xtalck_cgm_en_inv, (reg32), (val))

#define JCPLL_DA_RG_CTRL_2_SET_rg_jcpll_digtcl_dac_en_hw_mode(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_digtcl_dac_en_hw_mode, (reg32), (val))
#define JCPLL_DA_RG_CTRL_2_SET_rg_jcpll_chpup_en_hw_mode(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_chpup_en_hw_mode, (reg32), (val))
#define JCPLL_DA_RG_CTRL_2_SET_rg_jcpll_ldochp_en_hw_mode(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_ldochp_en_hw_mode, (reg32), (val))
#define JCPLL_DA_RG_CTRL_2_SET_rg_jcpll_autok_load_hw_mode(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_load_hw_mode, (reg32), (val))
#define JCPLL_DA_RG_CTRL_2_SET_rg_jcpll_autok_en_hw_mode(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_en_hw_mode, (reg32), (val))
#define JCPLL_DA_RG_CTRL_2_SET_rg_xfi_xtalck_cgm_en_hw_mode(reg32, val) REG_FLD_SET(JCPLL_DA_RG_CTRL_2_FLD_rg_xfi_xtalck_cgm_en_hw_mode, (reg32), (val))

#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_rx_phyck_rstb_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_phyck_rstb_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_tx_en_inv(reg32, val)  REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_tx_en_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_rxpll1_refck_pwdb_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rxpll1_refck_pwdb_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_rx_fe_vcm_sel_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vcm_sel_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_rx_fe_vb_eq3_en_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq3_en_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_rx_fe_vb_eq2_en_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq2_en_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_rx_fe_vb_eq1_en_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq1_en_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_cdr_pd_edge_dis_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_cdr_pd_edge_dis_inv, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_0_SET_rg_xfi_clkpath_ldo_en_inv(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_clkpath_ldo_en_inv, (reg32), (val))

#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rx_phyck_rstb_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_phyck_rstb_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_tx_en_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_tx_en_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rxpll1_refck_pwdb_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rxpll1_refck_pwdb_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rx_fe_vcm_sel_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_sel_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rx_fe_vb_eq3_en_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq3_en_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rx_fe_vb_eq2_en_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq2_en_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_rx_fe_vb_eq1_en_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq1_en_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_cdr_pd_edge_dis_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_cdr_pd_edge_dis_hw_mode, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_1_SET_rg_xfi_clkpath_ldo_en_hw_mode(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_clkpath_ldo_en_hw_mode, (reg32), (val))

#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rx_phyck_rstb_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_phyck_rstb_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_tx_en_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_tx_en_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rxpll1_refck_pwdb_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rxpll1_refck_pwdb_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rx_fe_vcm_sel_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_sel_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rx_fe_vcm_gem_pwdb_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rx_fe_vb_eq3_en_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq3_en_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rx_fe_vb_eq2_en_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq2_en_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_rx_fe_vb_eq1_en_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq1_en_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_cdr_pd_edge_dis_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_cdr_pd_edge_dis_force_on, (reg32), (val))
#define XFI_PLL_DA_RG_CTRL_2_SET_rg_xfi_clkpath_ldo_en_force_on(reg32, val) REG_FLD_SET(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_clkpath_ldo_en_force_on, (reg32), (val))

#define AD_DA_PROBE_STS_0_SET_ro_jcpll_sdm_scan_out(reg32, val) REG_FLD_SET(AD_DA_PROBE_STS_0_FLD_ro_jcpll_sdm_scan_out, (reg32), (val))
#define AD_DA_PROBE_STS_0_SET_ro_txpll_tdc_d(reg32, val)       REG_FLD_SET(AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_d, (reg32), (val))
#define AD_DA_PROBE_STS_0_SET_ro_txpll_tdc_c(reg32, val)       REG_FLD_SET(AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_c, (reg32), (val))
#define AD_DA_PROBE_STS_0_SET_ro_ipath_gaindiv(reg32, val)     REG_FLD_SET(AD_DA_PROBE_STS_0_FLD_ro_ipath_gaindiv, (reg32), (val))

#define AD_DA_PROBE_STS_1_SET_ro_ipath_ctrl(reg32, val)        REG_FLD_SET(AD_DA_PROBE_STS_1_FLD_ro_ipath_ctrl, (reg32), (val))

#define JCPLL_SCAN_CTRL_SET_rg_jcpll_sdm_scan_enable(reg32, val) REG_FLD_SET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_enable, (reg32), (val))
#define JCPLL_SCAN_CTRL_SET_rg_jcpll_sdm_cg_scan_enable(reg32, val) REG_FLD_SET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_cg_scan_enable, (reg32), (val))
#define JCPLL_SCAN_CTRL_SET_rg_jcpll_sdm_scan_rstb(reg32, val) REG_FLD_SET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_rstb, (reg32), (val))
#define JCPLL_SCAN_CTRL_SET_rg_jcpll_sdm_scan_mode(reg32, val) REG_FLD_SET(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_mode, (reg32), (val))

#define XFI_GPIO_SEL_0_SET_rg_xfi_gpio_sel1(reg32, val)        REG_FLD_SET(XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel1, (reg32), (val))
#define XFI_GPIO_SEL_0_SET_rg_xfi_gpio_sel0(reg32, val)        REG_FLD_SET(XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel0, (reg32), (val))

#define TX_PAR_PROBE_PLL_CTRL_SET_rg_clkgen_pll_lock(reg32, val) REG_FLD_SET(TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock, (reg32), (val))
#define TX_PAR_PROBE_PLL_CTRL_SET_rg_clkgen_pll_lock_en(reg32, val) REG_FLD_SET(TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock_en, (reg32), (val))
#define TX_PAR_PROBE_PLL_CTRL_SET_rg_pmatop_probe_sel(reg32, val) REG_FLD_SET(TX_PAR_PROBE_PLL_CTRL_FLD_rg_pmatop_probe_sel, (reg32), (val))

#define DUMP_RX_PCSRST_CTRL_SET_rg_xfi_pcs_tx_rst_en(reg32, val) REG_FLD_SET(DUMP_RX_PCSRST_CTRL_FLD_rg_xfi_pcs_tx_rst_en, (reg32), (val))
#define DUMP_RX_PCSRST_CTRL_SET_rg_r2t_asic_used_ff(reg32, val) REG_FLD_SET(DUMP_RX_PCSRST_CTRL_FLD_rg_r2t_asic_used_ff, (reg32), (val))
#define DUMP_RX_PCSRST_CTRL_SET_rg_rx_asic_used_ff(reg32, val) REG_FLD_SET(DUMP_RX_PCSRST_CTRL_FLD_rg_rx_asic_used_ff, (reg32), (val))

#define XFI_TX_FIFO_STS_SET_ro_xfi_tx_fifo_status(reg32, val)  REG_FLD_SET(XFI_TX_FIFO_STS_FLD_ro_xfi_tx_fifo_status, (reg32), (val))

#define JCPLL_CK_RSTB_CTRL_SET_rg_jcpll_ck_rstb_inv(reg32, val) REG_FLD_SET(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_inv, (reg32), (val))
#define JCPLL_CK_RSTB_CTRL_SET_rg_jcpll_ck_rstb_hw_mode(reg32, val) REG_FLD_SET(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_hw_mode, (reg32), (val))
#define JCPLL_CK_RSTB_CTRL_SET_rg_jcpll_ck_rstb_force_on(reg32, val) REG_FLD_SET(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_force_on, (reg32), (val))

#define RO_TDC_TX_FREQDET_SET_ro_tdc_tx_fl_out(reg32, val)     REG_FLD_SET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fl_out, (reg32), (val))
#define RO_TDC_TX_FREQDET_SET_ro_tdc_tx_state_freqdet(reg32, val) REG_FLD_SET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_state_freqdet, (reg32), (val))
#define RO_TDC_TX_FREQDET_SET_ro_tdc_tx_lslock_cnt(reg32, val) REG_FLD_SET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_lslock_cnt, (reg32), (val))
#define RO_TDC_TX_FREQDET_SET_ro_tdc_tx_fbck_lock_inner(reg32, val) REG_FLD_SET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock_inner, (reg32), (val))
#define RO_TDC_TX_FREQDET_SET_ro_tdc_tx_fbck_lock(reg32, val)  REG_FLD_SET(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock, (reg32), (val))

#define RO_JCPLL_FT_FREQDET_SET_ro_jcpll_ft_fl_out(reg32, val) REG_FLD_SET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fl_out, (reg32), (val))
#define RO_JCPLL_FT_FREQDET_SET_ro_jcpll_ft_state_freqdet(reg32, val) REG_FLD_SET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_state_freqdet, (reg32), (val))
#define RO_JCPLL_FT_FREQDET_SET_ro_jcpll_ft_lslock_cnt(reg32, val) REG_FLD_SET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_lslock_cnt, (reg32), (val))
#define RO_JCPLL_FT_FREQDET_SET_ro_jcpll_ft_fbck_lock_inner(reg32, val) REG_FLD_SET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock_inner, (reg32), (val))
#define RO_JCPLL_FT_FREQDET_SET_ro_jcpll_ft_fbck_lock(reg32, val) REG_FLD_SET(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock, (reg32), (val))

#define RO_JCPLL_500M_FREQDET_SET_ro_jcpll_500m_fl_out(reg32, val) REG_FLD_SET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fl_out, (reg32), (val))
#define RO_JCPLL_500M_FREQDET_SET_ro_jcpll_500m_state_freqdet(reg32, val) REG_FLD_SET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_state_freqdet, (reg32), (val))
#define RO_JCPLL_500M_FREQDET_SET_ro_jcpll_500m_lslock_cnt(reg32, val) REG_FLD_SET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_lslock_cnt, (reg32), (val))
#define RO_JCPLL_500M_FREQDET_SET_ro_jcpll_500m_fbck_lock_inner(reg32, val) REG_FLD_SET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock_inner, (reg32), (val))
#define RO_JCPLL_500M_FREQDET_SET_ro_jcpll_500m_fbck_lock(reg32, val) REG_FLD_SET(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock, (reg32), (val))

#define RG_JCPLL_500M_FREQ_DET_1_SET_rg_jcpll_500m_unlock_cyclecnt(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_unlock_cyclecnt, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_1_SET_rg_jcpll_500m_lock_cyclecnt(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_lock_cyclecnt, (reg32), (val))

#define RG_JCPLL_500M_FREQ_DET_2_SET_rg_jcpll_500m_lock_target_end(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_end, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_2_SET_rg_jcpll_500m_lock_target_beg(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_beg, (reg32), (val))

#define RG_JCPLL_500M_FREQ_DET_3_SET_rg_jcpll_500m_unlock_target_end(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_end, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_3_SET_rg_jcpll_500m_unlock_target_beg(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_beg, (reg32), (val))

#define RG_JCPLL_500M_FREQ_DET_4_SET_rg_jcpll_500m_wait_100us(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_wait_100us, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_4_SET_rg_jcpll_500m_unlockth(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_unlockth, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_4_SET_rg_jcpll_500m_lock_lockth(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_lockth, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_4_SET_rg_jcpll_500m_lock_cnt_clear(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_cnt_clear, (reg32), (val))
#define RG_JCPLL_500M_FREQ_DET_4_SET_rg_jcpll_500m_freqlock_det_en(reg32, val) REG_FLD_SET(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_freqlock_det_en, (reg32), (val))

#define rg_da_pxp_jcpll_sdm_scan_SET_rg_force_sel_da_pxp_rx_fe_peaking_ctrl(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_sel_da_pxp_rx_fe_peaking_ctrl, (reg32), (val))
#define rg_da_pxp_jcpll_sdm_scan_SET_rg_force_da_pxp_rx_fe_peaking_ctrl(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_da_pxp_rx_fe_peaking_ctrl, (reg32), (val))
#define rg_da_pxp_jcpll_sdm_scan_SET_rg_sel_da_pxp_jcpll_sdm_scan(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_sel_da_pxp_jcpll_sdm_scan, (reg32), (val))
#define rg_da_pxp_jcpll_sdm_scan_SET_rg_da_pxp_jcpll_sdm_scan(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_sdm_scan_FLD_rg_da_pxp_jcpll_sdm_scan, (reg32), (val))

#define rg_force_da_pxp_aeq_speed_SET_rg_force_sel_da_pxp_rx_osr_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_rx_osr_sel, (reg32), (val))
#define rg_force_da_pxp_aeq_speed_SET_rg_force_da_pxp_rx_osr_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_rx_osr_sel, (reg32), (val))
#define rg_force_da_pxp_aeq_speed_SET_rg_force_sel_da_pxp_aeq_speed(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_aeq_speed, (reg32), (val))
#define rg_force_da_pxp_aeq_speed_SET_rg_force_da_pxp_aeq_speed(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_aeq_speed, (reg32), (val))

#define rg_force_da_pxp_aeq_mode_SET_rg_force_sel_da_pxp_aeq_mode(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_mode_FLD_rg_force_sel_da_pxp_aeq_mode, (reg32), (val))
#define rg_force_da_pxp_aeq_mode_SET_rg_force_da_pxp_aeq_mode(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_mode_FLD_rg_force_da_pxp_aeq_mode, (reg32), (val))

#define rg_force_da_pxp_tx_data_ben_SET_rg_force_sel_da_pxp_tx_data_ben(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_data_ben_FLD_rg_force_sel_da_pxp_tx_data_ben, (reg32), (val))
#define rg_force_da_pxp_tx_data_ben_SET_rg_force_da_pxp_tx_data_ben(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_data_ben_FLD_rg_force_da_pxp_tx_data_ben, (reg32), (val))

#define rg_force_da_pxp_tx_fir_c0b_SET_rg_force_sel_da_pxp_tx_fir_cn1(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_cn1, (reg32), (val))
#define rg_force_da_pxp_tx_fir_c0b_SET_rg_force_da_pxp_tx_fir_cn1(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_cn1, (reg32), (val))
#define rg_force_da_pxp_tx_fir_c0b_SET_rg_force_sel_da_pxp_tx_fir_c0b(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_c0b, (reg32), (val))
#define rg_force_da_pxp_tx_fir_c0b_SET_rg_force_da_pxp_tx_fir_c0b(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_c0b, (reg32), (val))

#define rg_force_da_pxp_tx_term_sel_SET_rg_force_sel_da_pxp_tx_ckin_divisor(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_ckin_divisor, (reg32), (val))
#define rg_force_da_pxp_tx_term_sel_SET_rg_force_da_pxp_tx_ckin_divisor(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_ckin_divisor, (reg32), (val))
#define rg_force_da_pxp_tx_term_sel_SET_rg_force_sel_da_pxp_tx_term_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_term_sel, (reg32), (val))
#define rg_force_da_pxp_tx_term_sel_SET_rg_force_da_pxp_tx_term_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_term_sel, (reg32), (val))

#define rg_force_da_pxp_tx_fir_c1_SET_rg_force_sel_da_pxp_tx_fir_c2(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c2, (reg32), (val))
#define rg_force_da_pxp_tx_fir_c1_SET_rg_force_da_pxp_tx_fir_c2(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c2, (reg32), (val))
#define rg_force_da_pxp_tx_fir_c1_SET_rg_force_sel_da_pxp_tx_fir_c1(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c1, (reg32), (val))
#define rg_force_da_pxp_tx_fir_c1_SET_rg_force_da_pxp_tx_fir_c1(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c1, (reg32), (val))

#define rg_force_da_pxp_tx_rate_ctrl_SET_rg_force_sel_da_pxp_cdr_pr_pieye(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_cdr_pr_pieye, (reg32), (val))
#define rg_force_da_pxp_tx_rate_ctrl_SET_rg_force_da_pxp_cdr_pr_pieye(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_cdr_pr_pieye, (reg32), (val))
#define rg_force_da_pxp_tx_rate_ctrl_SET_rg_force_sel_da_pxp_tx_rate_ctrl(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_tx_rate_ctrl, (reg32), (val))
#define rg_force_da_pxp_tx_rate_ctrl_SET_rg_force_da_pxp_tx_rate_ctrl(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_tx_rate_ctrl, (reg32), (val))

#define rg_force_da_pxp_rx_dac_d0_SET_rg_force_sel_da_pxp_rx_dac_d1(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d1, (reg32), (val))
#define rg_force_da_pxp_rx_dac_d0_SET_rg_force_da_pxp_rx_dac_d1(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d1, (reg32), (val))
#define rg_force_da_pxp_rx_dac_d0_SET_rg_force_sel_da_pxp_rx_dac_d0(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d0, (reg32), (val))
#define rg_force_da_pxp_rx_dac_d0_SET_rg_force_da_pxp_rx_dac_d0(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d0, (reg32), (val))

#define rg_force_da_pxp_rx_dac_e0_SET_rg_force_sel_da_pxp_rx_dac_e1(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e1, (reg32), (val))
#define rg_force_da_pxp_rx_dac_e0_SET_rg_force_da_pxp_rx_dac_e1(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e1, (reg32), (val))
#define rg_force_da_pxp_rx_dac_e0_SET_rg_force_sel_da_pxp_rx_dac_e0(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e0, (reg32), (val))
#define rg_force_da_pxp_rx_dac_e0_SET_rg_force_da_pxp_rx_dac_e0(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e0, (reg32), (val))

#define rg_force_da_pxp_cdr_pr_fll_cor_SET_rg_force_sel_da_pxp_rx_dac_eye(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_rx_dac_eye, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_fll_cor_SET_rg_force_da_pxp_rx_dac_eye(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_rx_dac_eye, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_fll_cor_SET_rg_force_sel_da_pxp_cdr_pr_fll_cor(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_cdr_pr_fll_cor, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_fll_cor_SET_rg_force_da_pxp_cdr_pr_fll_cor(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_cdr_pr_fll_cor, (reg32), (val))

#define rg_force_da_pxp_cdr_pr_idac_SET_rg_force_sel_da_pxp_txpll_sdm_pcw(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_idac_SET_rg_force_sel_da_pxp_cdr_pr_idac(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_cdr_pr_idac, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_idac_SET_rg_force_da_pxp_cdr_pr_idac(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_da_pxp_cdr_pr_idac, (reg32), (val))

#define rg_force_da_pxp_txpll_sdm_pcw_SET_rg_force_da_pxp_txpll_sdm_pcw(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_pcw_FLD_rg_force_da_pxp_txpll_sdm_pcw, (reg32), (val))

#define rg_force_da_pxp_rx_fe_vos_SET_rg_force_sel_da_pxp_jcpll_sdm_pcw(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw, (reg32), (val))
#define rg_force_da_pxp_rx_fe_vos_SET_rg_force_sel_da_pxp_rx_fe_vos(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_rx_fe_vos, (reg32), (val))
#define rg_force_da_pxp_rx_fe_vos_SET_rg_force_da_pxp_rx_fe_vos(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_da_pxp_rx_fe_vos, (reg32), (val))

#define rg_force_da_pxp_jcpll_sdm_pcw_SET_rg_force_da_pxp_jcpll_sdm_pcw(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_pcw_FLD_rg_force_da_pxp_jcpll_sdm_pcw, (reg32), (val))

#define rg_force_da_pcie_cktx0_en_SET_rg_force_sel_da_pcie_cktx1_en(reg32, val) REG_FLD_SET(rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx1_en, (reg32), (val))
#define rg_force_da_pcie_cktx0_en_SET_rg_force_da_pcie_cktx1_en(reg32, val) REG_FLD_SET(rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx1_en, (reg32), (val))
#define rg_force_da_pcie_cktx0_en_SET_rg_force_sel_da_pcie_cktx0_en(reg32, val) REG_FLD_SET(rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx0_en, (reg32), (val))
#define rg_force_da_pcie_cktx0_en_SET_rg_force_da_pcie_cktx0_en(reg32, val) REG_FLD_SET(rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx0_en, (reg32), (val))

#define rg_force_da_pxp_aeq_en_SET_rg_force_sel_da_pxp_aeq_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_en_FLD_rg_force_sel_da_pxp_aeq_en, (reg32), (val))
#define rg_force_da_pxp_aeq_en_SET_rg_force_da_pxp_aeq_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_en_FLD_rg_force_da_pxp_aeq_en, (reg32), (val))

#define rg_force_da_pxp_aeq_bypass_SET_rg_force_sel_da_pxp_aeq_ckon(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_ckon, (reg32), (val))
#define rg_force_da_pxp_aeq_bypass_SET_rg_force_da_pxp_aeq_ckon(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_ckon, (reg32), (val))
#define rg_force_da_pxp_aeq_bypass_SET_rg_force_sel_da_pxp_aeq_bypass(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_bypass, (reg32), (val))
#define rg_force_da_pxp_aeq_bypass_SET_rg_force_da_pxp_aeq_bypass(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_bypass, (reg32), (val))

#define rg_force_da_pxp_aeq_inprgrss_SET_rg_force_sel_da_pxp_aeq_invldreq(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_invldreq, (reg32), (val))
#define rg_force_da_pxp_aeq_inprgrss_SET_rg_force_da_pxp_aeq_invldreq(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_invldreq, (reg32), (val))
#define rg_force_da_pxp_aeq_inprgrss_SET_rg_force_sel_da_pxp_aeq_inprgrss(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_inprgrss, (reg32), (val))
#define rg_force_da_pxp_aeq_inprgrss_SET_rg_force_da_pxp_aeq_inprgrss(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_inprgrss, (reg32), (val))

#define rg_force_da_pxp_aeq_rstb_SET_rg_force_sel_da_pxp_cdr_injck_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_cdr_injck_sel, (reg32), (val))
#define rg_force_da_pxp_aeq_rstb_SET_rg_force_da_pxp_cdr_injck_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_cdr_injck_sel, (reg32), (val))
#define rg_force_da_pxp_aeq_rstb_SET_rg_force_sel_da_pxp_aeq_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_aeq_rstb, (reg32), (val))
#define rg_force_da_pxp_aeq_rstb_SET_rg_force_da_pxp_aeq_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_aeq_rstb, (reg32), (val))

#define rg_force_da_pxp_cdr_lpf_lck2data_SET_rg_force_sel_da_pxp_cdr_lpf_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_rstb, (reg32), (val))
#define rg_force_da_pxp_cdr_lpf_lck2data_SET_rg_force_da_pxp_cdr_lpf_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_rstb, (reg32), (val))
#define rg_force_da_pxp_cdr_lpf_lck2data_SET_rg_force_sel_da_pxp_cdr_lpf_lck2data(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_lck2data, (reg32), (val))
#define rg_force_da_pxp_cdr_lpf_lck2data_SET_rg_force_da_pxp_cdr_lpf_lck2data(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_lck2data, (reg32), (val))

#define rg_force_da_pxp_cdr_pd_pwdb_SET_rg_force_sel_da_pxp_cdr_pr_kband_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_kband_rstb, (reg32), (val))
#define rg_force_da_pxp_cdr_pd_pwdb_SET_rg_force_da_pxp_cdr_pr_kband_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pr_kband_rstb, (reg32), (val))
#define rg_force_da_pxp_cdr_pd_pwdb_SET_rg_force_sel_da_pxp_cdr_pd_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pd_pwdb, (reg32), (val))
#define rg_force_da_pxp_cdr_pd_pwdb_SET_rg_force_da_pxp_cdr_pd_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pd_pwdb, (reg32), (val))

#define rg_force_da_pxp_cdr_pr_lpf_c_en_SET_rg_force_sel_da_pxp_cdr_pr_lpf_r_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_r_en, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_SET_rg_force_da_pxp_cdr_pr_lpf_r_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_r_en, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_SET_rg_force_sel_da_pxp_cdr_pr_lpf_c_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_c_en, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_SET_rg_force_da_pxp_cdr_pr_lpf_c_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_c_en, (reg32), (val))

#define rg_force_da_pxp_cdr_pr_pieye_pwdb_SET_rg_force_sel_da_pxp_cdr_pr_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pwdb, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_SET_rg_force_da_pxp_cdr_pr_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pwdb, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_SET_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb, (reg32), (val))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_SET_rg_force_da_pxp_cdr_pr_pieye_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pieye_pwdb, (reg32), (val))

#define rg_force_da_pxp_jcpll_ckout_en_SET_rg_force_sel_da_pxp_jcpll_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_en, (reg32), (val))
#define rg_force_da_pxp_jcpll_ckout_en_SET_rg_force_da_pxp_jcpll_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_en, (reg32), (val))
#define rg_force_da_pxp_jcpll_ckout_en_SET_rg_force_sel_da_pxp_jcpll_ckout_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_ckout_en, (reg32), (val))
#define rg_force_da_pxp_jcpll_ckout_en_SET_rg_force_da_pxp_jcpll_ckout_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_ckout_en, (reg32), (val))

#define rg_force_da_pxp_jcpll_kband_scan_en_SET_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg, (reg32), (val))
#define rg_force_da_pxp_jcpll_kband_scan_en_SET_rg_force_da_pxp_jcpll_kband_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en_cg, (reg32), (val))
#define rg_force_da_pxp_jcpll_kband_scan_en_SET_rg_force_sel_da_pxp_jcpll_kband_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en, (reg32), (val))
#define rg_force_da_pxp_jcpll_kband_scan_en_SET_rg_force_da_pxp_jcpll_kband_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en, (reg32), (val))

#define rg_force_da_pxp_jcpll_kband_scan_in_SET_rg_force_sel_da_pxp_jcpll_kband_scan_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_rstb, (reg32), (val))
#define rg_force_da_pxp_jcpll_kband_scan_in_SET_rg_force_da_pxp_jcpll_kband_scan_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_rstb, (reg32), (val))
#define rg_force_da_pxp_jcpll_kband_scan_in_SET_rg_force_sel_da_pxp_jcpll_kband_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_in, (reg32), (val))
#define rg_force_da_pxp_jcpll_kband_scan_in_SET_rg_force_da_pxp_jcpll_kband_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_in, (reg32), (val))

#define rg_force_da_pxp_jcpll_sdm_pcw_chg_SET_rg_force_sel_da_pxp_jcpll_sdm_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_SET_rg_force_da_pxp_jcpll_sdm_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_SET_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_SET_rg_force_da_pxp_jcpll_sdm_pcw_chg(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_pcw_chg, (reg32), (val))

#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_SET_rg_force_sel_da_pxp_jcpll_sdm_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_in, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_SET_rg_force_da_pxp_jcpll_sdm_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_in, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_SET_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_SET_rg_force_da_pxp_jcpll_sdm_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en_cg, (reg32), (val))

#define rg_force_da_pxp_jcpll_sdm_scan_rstb_SET_rg_force_sel_da_pxp_rx_oscal_ckon(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_rx_oscal_ckon, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_SET_rg_force_da_pxp_rx_oscal_ckon(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_rx_oscal_ckon, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_SET_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb, (reg32), (val))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_SET_rg_force_da_pxp_jcpll_sdm_scan_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_jcpll_sdm_scan_rstb, (reg32), (val))

#define rg_force_da_pxp_rx_oscal_en_SET_rg_force_sel_da_pxp_rx_oscal_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_rstb, (reg32), (val))
#define rg_force_da_pxp_rx_oscal_en_SET_rg_force_da_pxp_rx_oscal_rstb(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_rstb, (reg32), (val))
#define rg_force_da_pxp_rx_oscal_en_SET_rg_force_sel_da_pxp_rx_oscal_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_en, (reg32), (val))
#define rg_force_da_pxp_rx_oscal_en_SET_rg_force_da_pxp_rx_oscal_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_en, (reg32), (val))

#define rg_force_da_pxp_rx_scan_enable_SET_rg_force_sel_da_pxp_rx_scan_enable_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable_cg, (reg32), (val))
#define rg_force_da_pxp_rx_scan_enable_SET_rg_force_da_pxp_rx_scan_enable_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable_cg, (reg32), (val))
#define rg_force_da_pxp_rx_scan_enable_SET_rg_force_sel_da_pxp_rx_scan_enable(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable, (reg32), (val))
#define rg_force_da_pxp_rx_scan_enable_SET_rg_force_da_pxp_rx_scan_enable(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable, (reg32), (val))

#define rg_force_da_pxp_rx_scan_in_SET_rg_sel_da_pxp_rx_scan(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_in_FLD_rg_sel_da_pxp_rx_scan, (reg32), (val))
#define rg_force_da_pxp_rx_scan_in_SET_rg_da_pxp_rx_scan(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_in_FLD_rg_da_pxp_rx_scan, (reg32), (val))
#define rg_force_da_pxp_rx_scan_in_SET_rg_force_sel_da_pxp_rx_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_in_FLD_rg_force_sel_da_pxp_rx_scan_in, (reg32), (val))
#define rg_force_da_pxp_rx_scan_in_SET_rg_force_da_pxp_rx_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_in_FLD_rg_force_da_pxp_rx_scan_in, (reg32), (val))

#define rg_force_da_pxp_rx_scan_rst_b_SET_rg_force_sel_da_pxp_rx_sigdet_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_sigdet_pwdb, (reg32), (val))
#define rg_force_da_pxp_rx_scan_rst_b_SET_rg_force_da_pxp_rx_sigdet_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_sigdet_pwdb, (reg32), (val))
#define rg_force_da_pxp_rx_scan_rst_b_SET_rg_force_sel_da_pxp_rx_scan_rst_b(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_scan_rst_b, (reg32), (val))
#define rg_force_da_pxp_rx_scan_rst_b_SET_rg_force_da_pxp_rx_scan_rst_b(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_scan_rst_b, (reg32), (val))

#define rg_force_da_pxp_tdc_cal_bw_SET_rg_force_sel_da_pxp_tdc_cal_offset(reg32, val) REG_FLD_SET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_offset, (reg32), (val))
#define rg_force_da_pxp_tdc_cal_bw_SET_rg_force_da_pxp_tdc_cal_offset(reg32, val) REG_FLD_SET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_offset, (reg32), (val))
#define rg_force_da_pxp_tdc_cal_bw_SET_rg_force_sel_da_pxp_tdc_cal_bw(reg32, val) REG_FLD_SET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_bw, (reg32), (val))
#define rg_force_da_pxp_tdc_cal_bw_SET_rg_force_da_pxp_tdc_cal_bw(reg32, val) REG_FLD_SET(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_bw, (reg32), (val))

#define rg_force_da_pxp_txpll_ckout_en_SET_rg_force_sel_da_pxp_txpll_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_en, (reg32), (val))
#define rg_force_da_pxp_txpll_ckout_en_SET_rg_force_da_pxp_txpll_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_en, (reg32), (val))
#define rg_force_da_pxp_txpll_ckout_en_SET_rg_force_sel_da_pxp_txpll_ckout_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_ckout_en, (reg32), (val))
#define rg_force_da_pxp_txpll_ckout_en_SET_rg_force_da_pxp_txpll_ckout_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_ckout_en, (reg32), (val))

#define rg_force_da_pxp_txpll_kband_load_en_SET_rg_force_sel_da_pxp_txpll_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_scan_en, (reg32), (val))
#define rg_force_da_pxp_txpll_kband_load_en_SET_rg_force_da_pxp_txpll_kband_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_scan_en, (reg32), (val))
#define rg_force_da_pxp_txpll_kband_load_en_SET_rg_force_sel_da_pxp_txpll_kband_load_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_kband_load_en, (reg32), (val))
#define rg_force_da_pxp_txpll_kband_load_en_SET_rg_force_da_pxp_txpll_kband_load_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_load_en, (reg32), (val))

#define rg_force_da_pxp_txpll_kband_scan_en_cg_SET_rg_force_sel_da_pxp_txpll_kband_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_in, (reg32), (val))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_SET_rg_force_da_pxp_txpll_kband_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_in, (reg32), (val))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_SET_rg_force_sel_da_pxp_txpll_kband_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_en_cg, (reg32), (val))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_SET_rg_force_da_pxp_txpll_kband_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_en_cg, (reg32), (val))

#define rg_da_pxp_txpll_kband_scan_SET_rg_force_sel_da_pxp_txpll_kband_scan_rstb(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_kband_scan_FLD_rg_force_sel_da_pxp_txpll_kband_scan_rstb, (reg32), (val))
#define rg_da_pxp_txpll_kband_scan_SET_rg_force_da_pxp_txpll_kband_scan_rstb(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_kband_scan_FLD_rg_force_da_pxp_txpll_kband_scan_rstb, (reg32), (val))
#define rg_da_pxp_txpll_kband_scan_SET_rg_sel_da_pxp_txpll_kband_scan(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_kband_scan_FLD_rg_sel_da_pxp_txpll_kband_scan, (reg32), (val))
#define rg_da_pxp_txpll_kband_scan_SET_rg_da_pxp_txpll_kband_scan(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_kband_scan_FLD_rg_da_pxp_txpll_kband_scan, (reg32), (val))

#define rg_force_da_pxp_txpll_sdm_pcw_chg_SET_rg_force_sel_da_pxp_txpll_sdm_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en, (reg32), (val))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_SET_rg_force_da_pxp_txpll_sdm_scan_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_scan_en, (reg32), (val))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_SET_rg_force_sel_da_pxp_txpll_sdm_pcw_chg(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw_chg, (reg32), (val))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_SET_rg_force_da_pxp_txpll_sdm_pcw_chg(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_pcw_chg, (reg32), (val))

#define rg_force_da_pxp_txpll_sdm_scan_en_cg_SET_rg_force_sel_da_pxp_txpll_sdm_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_in, (reg32), (val))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_SET_rg_force_da_pxp_txpll_sdm_scan_in(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_in, (reg32), (val))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_SET_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg, (reg32), (val))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_SET_rg_force_da_pxp_txpll_sdm_scan_en_cg(reg32, val) REG_FLD_SET(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_en_cg, (reg32), (val))

#define rg_da_pxp_txpll_sdm_scan_SET_rg_force_sel_da_pxp_txpll_sdm_scan_rstb(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_sdm_scan_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_rstb, (reg32), (val))
#define rg_da_pxp_txpll_sdm_scan_SET_rg_force_da_pxp_txpll_sdm_scan_rstb(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_sdm_scan_FLD_rg_force_da_pxp_txpll_sdm_scan_rstb, (reg32), (val))
#define rg_da_pxp_txpll_sdm_scan_SET_rg_sel_da_pxp_txpll_sdm_scan(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_sdm_scan_FLD_rg_sel_da_pxp_txpll_sdm_scan, (reg32), (val))
#define rg_da_pxp_txpll_sdm_scan_SET_rg_da_pxp_txpll_sdm_scan(reg32, val) REG_FLD_SET(rg_da_pxp_txpll_sdm_scan_FLD_rg_da_pxp_txpll_sdm_scan, (reg32), (val))

#define rg_force_da_pxp_tx_acjtag_dn_SET_rg_force_sel_da_pxp_tx_acjtag_dp(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dp, (reg32), (val))
#define rg_force_da_pxp_tx_acjtag_dn_SET_rg_force_da_pxp_tx_acjtag_dp(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dp, (reg32), (val))
#define rg_force_da_pxp_tx_acjtag_dn_SET_rg_force_sel_da_pxp_tx_acjtag_dn(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dn, (reg32), (val))
#define rg_force_da_pxp_tx_acjtag_dn_SET_rg_force_da_pxp_tx_acjtag_dn(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dn, (reg32), (val))

#define rg_force_da_pxp_tx_acjtag_en_SET_rg_force_sel_da_pxp_tx_ckin_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_ckin_sel, (reg32), (val))
#define rg_force_da_pxp_tx_acjtag_en_SET_rg_force_da_pxp_tx_ckin_sel(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_ckin_sel, (reg32), (val))
#define rg_force_da_pxp_tx_acjtag_en_SET_rg_force_sel_da_pxp_tx_acjtag_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_acjtag_en, (reg32), (val))
#define rg_force_da_pxp_tx_acjtag_en_SET_rg_force_da_pxp_tx_acjtag_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_acjtag_en, (reg32), (val))

#define rg_force_da_pxp_tx_ck_en_SET_rg_force_sel_da_pxp_tx_cm_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_cm_en, (reg32), (val))
#define rg_force_da_pxp_tx_ck_en_SET_rg_force_da_pxp_tx_cm_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_cm_en, (reg32), (val))
#define rg_force_da_pxp_tx_ck_en_SET_rg_force_sel_da_pxp_tx_ck_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_ck_en, (reg32), (val))
#define rg_force_da_pxp_tx_ck_en_SET_rg_force_da_pxp_tx_ck_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_ck_en, (reg32), (val))

#define rg_force_da_pxp_tx_hsdata_en_SET_rg_force_sel_da_pxp_tx_data_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_data_en, (reg32), (val))
#define rg_force_da_pxp_tx_hsdata_en_SET_rg_force_da_pxp_tx_data_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_data_en, (reg32), (val))
#define rg_force_da_pxp_tx_hsdata_en_SET_rg_force_sel_da_pxp_tx_hsdata_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_hsdata_en, (reg32), (val))
#define rg_force_da_pxp_tx_hsdata_en_SET_rg_force_da_pxp_tx_hsdata_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_hsdata_en, (reg32), (val))

#define rg_force_da_pxp_tx_rxdet_en_SET_rg_force_sel_da_pxp_tx_termp_clean(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_termp_clean, (reg32), (val))
#define rg_force_da_pxp_tx_rxdet_en_SET_rg_force_da_pxp_tx_termp_clean(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_termp_clean, (reg32), (val))
#define rg_force_da_pxp_tx_rxdet_en_SET_rg_force_sel_da_pxp_tx_rxdet_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_rxdet_en, (reg32), (val))
#define rg_force_da_pxp_tx_rxdet_en_SET_rg_force_da_pxp_tx_rxdet_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_rxdet_en, (reg32), (val))

#define scan_mode_SET_rg_force_sel_da_pxp_jcpll_kband_load_en(reg32, val) REG_FLD_SET(scan_mode_FLD_rg_force_sel_da_pxp_jcpll_kband_load_en, (reg32), (val))
#define scan_mode_SET_rg_force_da_pxp_jcpll_kband_load_en(reg32, val) REG_FLD_SET(scan_mode_FLD_rg_force_da_pxp_jcpll_kband_load_en, (reg32), (val))

#define rg_da_pxp_jcpll_kband_scan_SET_rg_force_sel_da_pxp_tx_termcal_en(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_kband_scan_FLD_rg_force_sel_da_pxp_tx_termcal_en, (reg32), (val))
#define rg_da_pxp_jcpll_kband_scan_SET_rg_force_da_pxp_tx_termcal_en(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_kband_scan_FLD_rg_force_da_pxp_tx_termcal_en, (reg32), (val))
#define rg_da_pxp_jcpll_kband_scan_SET_rg_sel_da_pxp_jcpll_kband_scan(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_kband_scan_FLD_rg_sel_da_pxp_jcpll_kband_scan, (reg32), (val))
#define rg_da_pxp_jcpll_kband_scan_SET_rg_da_pxp_jcpll_kband_scan(reg32, val) REG_FLD_SET(rg_da_pxp_jcpll_kband_scan_FLD_rg_da_pxp_jcpll_kband_scan, (reg32), (val))

#define rg_force_da_pxp_rx_fe_gain_ctrl_SET_rg_force_sel_da_pxp_rx_sigdet_os(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_sigdet_os, (reg32), (val))
#define rg_force_da_pxp_rx_fe_gain_ctrl_SET_rg_force_da_pxp_rx_sigdet_os(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_sigdet_os, (reg32), (val))
#define rg_force_da_pxp_rx_fe_gain_ctrl_SET_rg_force_sel_da_pxp_rx_fe_gain_ctrl(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_fe_gain_ctrl, (reg32), (val))
#define rg_force_da_pxp_rx_fe_gain_ctrl_SET_rg_force_da_pxp_rx_fe_gain_ctrl(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_fe_gain_ctrl, (reg32), (val))

#define rg_force_da_pxp_aeq_rmtxskip_SET_rg_force_sel_da_pxp_aeq_rxeqeval(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rxeqeval, (reg32), (val))
#define rg_force_da_pxp_aeq_rmtxskip_SET_rg_force_da_pxp_aeq_rxeqeval(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rxeqeval, (reg32), (val))
#define rg_force_da_pxp_aeq_rmtxskip_SET_rg_force_sel_da_pxp_aeq_rmtxskip(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rmtxskip, (reg32), (val))
#define rg_force_da_pxp_aeq_rmtxskip_SET_rg_force_da_pxp_aeq_rmtxskip(reg32, val) REG_FLD_SET(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rmtxskip, (reg32), (val))

#define rg_force_da_pxp_rx_fe_pwdb_SET_rg_force_sel_da_pxp_rx_pdoscal_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_pdoscal_en, (reg32), (val))
#define rg_force_da_pxp_rx_fe_pwdb_SET_rg_force_da_pxp_rx_pdoscal_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_pdoscal_en, (reg32), (val))
#define rg_force_da_pxp_rx_fe_pwdb_SET_rg_force_sel_da_pxp_rx_fe_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_fe_pwdb, (reg32), (val))
#define rg_force_da_pxp_rx_fe_pwdb_SET_rg_force_da_pxp_rx_fe_pwdb(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_fe_pwdb, (reg32), (val))

#define rg_force_da_pxp_rx_sigdet_cal_en_SET_rg_force_sel_da_pxp_tdc_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_tdc_en, (reg32), (val))
#define rg_force_da_pxp_rx_sigdet_cal_en_SET_rg_force_da_pxp_tdc_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_tdc_en, (reg32), (val))
#define rg_force_da_pxp_rx_sigdet_cal_en_SET_rg_force_sel_da_pxp_rx_sigdet_cal_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_rx_sigdet_cal_en, (reg32), (val))
#define rg_force_da_pxp_rx_sigdet_cal_en_SET_rg_force_da_pxp_rx_sigdet_cal_en(reg32, val) REG_FLD_SET(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_rx_sigdet_cal_en, (reg32), (val))

#define ADD_DIG_RESERVE_5_SET_rg_dig_reserve_5(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_5_FLD_rg_dig_reserve_5, (reg32), (val))

#define ADD_DIG_RESERVE_6_SET_rg_dig_reserve_6(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_6_FLD_rg_dig_reserve_6, (reg32), (val))

#define ADD_DIG_RESERVE_7_SET_rg_dig_reserve_7(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_7_FLD_rg_dig_reserve_7, (reg32), (val))

#define ADD_DIG_RESERVE_8_SET_rg_dig_reserve_8(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_8_FLD_rg_dig_reserve_8, (reg32), (val))

#define ADD_DIG_RESERVE_9_SET_rg_dig_reserve_9(reg32, val)     REG_FLD_SET(ADD_DIG_RESERVE_9_FLD_rg_dig_reserve_9, (reg32), (val))

#define ADD_DIG_RESERVE_10_SET_rg_dig_reserve_10(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_10_FLD_rg_dig_reserve_10, (reg32), (val))

#define ADD_DIG_RESERVE_11_SET_rg_dig_reserve_11(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_11_FLD_rg_dig_reserve_11, (reg32), (val))

#define ADD_DIG_RESERVE_12_SET_rg_dig_reserve_12(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_12_FLD_rg_dig_reserve_12, (reg32), (val))

#define ADD_DIG_RESERVE_13_SET_rg_dig_reserve_13(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_13_FLD_rg_dig_reserve_13, (reg32), (val))

#define ADD_DIG_RESERVE_14_SET_rg_dig_reserve_14(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_14_FLD_rg_dig_reserve_14, (reg32), (val))

#define ADD_DIG_RO_RESERVE_5_SET_ro_dig_reserve_5(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_5_FLD_ro_dig_reserve_5, (reg32), (val))

#define ADD_DIG_RO_RESERVE_6_SET_ro_dig_reserve_6(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_6_FLD_ro_dig_reserve_6, (reg32), (val))

#define ADD_DIG_RO_RESERVE_7_SET_ro_dig_reserve_7(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_7_FLD_ro_dig_reserve_7, (reg32), (val))

#define ADD_DIG_RO_RESERVE_8_SET_ro_dig_reserve_8(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_8_FLD_ro_dig_reserve_8, (reg32), (val))

#define ADD_DIG_RO_RESERVE_9_SET_ro_dig_reserve_9(reg32, val)  REG_FLD_SET(ADD_DIG_RO_RESERVE_9_FLD_ro_dig_reserve_9, (reg32), (val))

#define ADD_DIG_RESERVE_15_SET_rg_dig_reserve_15(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_15_FLD_rg_dig_reserve_15, (reg32), (val))

#define ADD_DIG_RESERVE_16_SET_rg_dig_reserve_16(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_16_FLD_rg_dig_reserve_16, (reg32), (val))

#define ADD_DIG_RESERVE_17_SET_rg_dig_reserve_17(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_17_FLD_rg_dig_reserve_17, (reg32), (val))

#define ADD_DIG_RESERVE_18_SET_rg_dig_reserve_18(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_18_FLD_rg_dig_reserve_18, (reg32), (val))

#define ADD_DIG_RESERVE_19_SET_rg_dig_reserve_19(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_19_FLD_rg_dig_reserve_19, (reg32), (val))

#define ADD_DIG_RESERVE_20_SET_rg_dig_reserve_20(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_20_FLD_rg_dig_reserve_20, (reg32), (val))

#define ADD_DIG_RESERVE_21_SET_rg_dig_reserve_21(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_21_FLD_rg_dig_reserve_21, (reg32), (val))

#define ADD_DIG_RESERVE_22_SET_rg_dig_reserve_22(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_22_FLD_rg_dig_reserve_22, (reg32), (val))

#define ADD_DIG_RESERVE_23_SET_rg_dig_reserve_23(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_23_FLD_rg_dig_reserve_23, (reg32), (val))

#define ADD_DIG_RESERVE_24_SET_rg_dig_reserve_24(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_24_FLD_rg_dig_reserve_24, (reg32), (val))

#define ADD_DIG_RESERVE_25_SET_rg_dig_reserve_25(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_25_FLD_rg_dig_reserve_25, (reg32), (val))

#define ADD_DIG_RESERVE_26_SET_rg_dig_reserve_26(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_26_FLD_rg_dig_reserve_26, (reg32), (val))

#define ADD_DIG_RESERVE_27_SET_rg_dig_reserve_27(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_27_FLD_rg_dig_reserve_27, (reg32), (val))

#define ADD_DIG_RESERVE_28_SET_rg_dig_reserve_28(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_28_FLD_rg_dig_reserve_28, (reg32), (val))

#define ADD_DIG_RESERVE_29_SET_rg_dig_reserve_29(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_29_FLD_rg_dig_reserve_29, (reg32), (val))

#define ADD_DIG_RESERVE_30_SET_rg_dig_reserve_30(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_30_FLD_rg_dig_reserve_30, (reg32), (val))

#define ADD_DIG_RESERVE_31_SET_rg_dig_reserve_31(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_31_FLD_rg_dig_reserve_31, (reg32), (val))

#define ADD_DIG_RESERVE_32_SET_rg_dig_reserve_32(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_32_FLD_rg_dig_reserve_32, (reg32), (val))

#define ADD_DIG_RESERVE_33_SET_rg_dig_reserve_33(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_33_FLD_rg_dig_reserve_33, (reg32), (val))

#define ADD_DIG_RESERVE_34_SET_rg_dig_reserve_34(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_34_FLD_rg_dig_reserve_34, (reg32), (val))

#define ADD_DIG_RESERVE_35_SET_rg_dig_reserve_35(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_35_FLD_rg_dig_reserve_35, (reg32), (val))

#define ADD_DIG_RESERVE_36_SET_rg_dig_reserve_36(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_36_FLD_rg_dig_reserve_36, (reg32), (val))

#define ADD_DIG_RESERVE_37_SET_rg_dig_reserve_37(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_37_FLD_rg_dig_reserve_37, (reg32), (val))

#define ADD_DIG_RESERVE_38_SET_rg_dig_reserve_38(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_38_FLD_rg_dig_reserve_38, (reg32), (val))

#define ADD_DIG_RESERVE_39_SET_rg_dig_reserve_39(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_39_FLD_rg_dig_reserve_39, (reg32), (val))

#define ADD_DIG_RESERVE_40_SET_rg_dig_reserve_40(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_40_FLD_rg_dig_reserve_40, (reg32), (val))

#define ADD_DIG_RESERVE_41_SET_rg_dig_reserve_41(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_41_FLD_rg_dig_reserve_41, (reg32), (val))

#define ADD_DIG_RESERVE_42_SET_rg_dig_reserve_42(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_42_FLD_rg_dig_reserve_42, (reg32), (val))

#define ADD_DIG_RESERVE_43_SET_rg_dig_reserve_43(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_43_FLD_rg_dig_reserve_43, (reg32), (val))

#define ADD_DIG_RESERVE_44_SET_rg_dig_reserve_44(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_44_FLD_rg_dig_reserve_44, (reg32), (val))

#define ADD_DIG_RESERVE_45_SET_rg_dig_reserve_45(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_45_FLD_rg_dig_reserve_45, (reg32), (val))

#define ADD_DIG_RESERVE_46_SET_rg_dig_reserve_46(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_46_FLD_rg_dig_reserve_46, (reg32), (val))

#define ADD_DIG_RESERVE_47_SET_rg_dig_reserve_47(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_47_FLD_rg_dig_reserve_47, (reg32), (val))

#define ADD_DIG_RESERVE_48_SET_rg_dig_reserve_48(reg32, val)   REG_FLD_SET(ADD_DIG_RESERVE_48_FLD_rg_dig_reserve_48, (reg32), (val))

#define BEN_CTRL_0_SET_rg_da_ben_force_value(reg32, val)       REG_FLD_SET(BEN_CTRL_0_FLD_rg_da_ben_force_value, (reg32), (val))
#define BEN_CTRL_0_SET_rg_ad_ben_keep_time_clr(reg32, val)     REG_FLD_SET(BEN_CTRL_0_FLD_rg_ad_ben_keep_time_clr, (reg32), (val))
#define BEN_CTRL_0_SET_rg_ad_ben_alarm_times_clr(reg32, val)   REG_FLD_SET(BEN_CTRL_0_FLD_rg_ad_ben_alarm_times_clr, (reg32), (val))
#define BEN_CTRL_0_SET_rg_ad_ben_alarm_clr(reg32, val)         REG_FLD_SET(BEN_CTRL_0_FLD_rg_ad_ben_alarm_clr, (reg32), (val))
#define BEN_CTRL_0_SET_rg_ad_ben_alarm_en(reg32, val)          REG_FLD_SET(BEN_CTRL_0_FLD_rg_ad_ben_alarm_en, (reg32), (val))
#define BEN_CTRL_0_SET_rg_ad_ben_cnt_clr(reg32, val)           REG_FLD_SET(BEN_CTRL_0_FLD_rg_ad_ben_cnt_clr, (reg32), (val))
#define BEN_CTRL_0_SET_rg_ad_ben_stop_cnt(reg32, val)          REG_FLD_SET(BEN_CTRL_0_FLD_rg_ad_ben_stop_cnt, (reg32), (val))
#define BEN_CTRL_0_SET_rg_da_ben_force_mode(reg32, val)        REG_FLD_SET(BEN_CTRL_0_FLD_rg_da_ben_force_mode, (reg32), (val))

#define BEN_CTRL_1_SET_rg_ad_ben_alarm_thr(reg32, val)         REG_FLD_SET(BEN_CTRL_1_FLD_rg_ad_ben_alarm_thr, (reg32), (val))

#define BEN_STS_0_SET_ro_ad_ben_cnt(reg32, val)                REG_FLD_SET(BEN_STS_0_FLD_ro_ad_ben_cnt, (reg32), (val))

#define BEN_STS_1_SET_ro_ad_ben_alarm(reg32, val)              REG_FLD_SET(BEN_STS_1_FLD_ro_ad_ben_alarm, (reg32), (val))
#define BEN_STS_1_SET_ro_ad_ben_out(reg32, val)                REG_FLD_SET(BEN_STS_1_FLD_ro_ad_ben_out, (reg32), (val))

#define BEN_STS_2_SET_ro_ad_ben_alarm_times(reg32, val)        REG_FLD_SET(BEN_STS_2_FLD_ro_ad_ben_alarm_times, (reg32), (val))

#define BEN_STS_3_SET_ro_ad_ben_keep_max(reg32, val)           REG_FLD_SET(BEN_STS_3_FLD_ro_ad_ben_keep_max, (reg32), (val))

#define TX_SD_CTRL_0_SET_rg_tx_sd_keep_time_clr(reg32, val)    REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_keep_time_clr, (reg32), (val))
#define TX_SD_CTRL_0_SET_rg_tx_sd_alarm_times_clr(reg32, val)  REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_times_clr, (reg32), (val))
#define TX_SD_CTRL_0_SET_rg_tx_sd_alarm_clr(reg32, val)        REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_clr, (reg32), (val))
#define TX_SD_CTRL_0_SET_rg_tx_sd_alarm_en(reg32, val)         REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_en, (reg32), (val))
#define TX_SD_CTRL_0_SET_rg_tx_sd_cnt_clr(reg32, val)          REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_cnt_clr, (reg32), (val))
#define TX_SD_CTRL_0_SET_rg_tx_sd_stop_cnt(reg32, val)         REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_stop_cnt, (reg32), (val))
#define TX_SD_CTRL_0_SET_rg_tx_sd_inv(reg32, val)              REG_FLD_SET(TX_SD_CTRL_0_FLD_rg_tx_sd_inv, (reg32), (val))

#define TX_SD_CTRL_1_SET_rg_tx_sd_alarm_thr(reg32, val)        REG_FLD_SET(TX_SD_CTRL_1_FLD_rg_tx_sd_alarm_thr, (reg32), (val))

#define TX_SD_STS_0_SET_ro_tx_sd_cnt(reg32, val)               REG_FLD_SET(TX_SD_STS_0_FLD_ro_tx_sd_cnt, (reg32), (val))

#define TX_SD_STS_1_SET_ro_tx_sd_alarm(reg32, val)             REG_FLD_SET(TX_SD_STS_1_FLD_ro_tx_sd_alarm, (reg32), (val))
#define TX_SD_STS_1_SET_ro_tx_sd_out(reg32, val)               REG_FLD_SET(TX_SD_STS_1_FLD_ro_tx_sd_out, (reg32), (val))

#define TX_SD_STS_2_SET_ro_tx_sd_alarm_times(reg32, val)       REG_FLD_SET(TX_SD_STS_2_FLD_ro_tx_sd_alarm_times, (reg32), (val))

#define TX_SD_STS_3_SET_ro_tx_sd_keep_max(reg32, val)          REG_FLD_SET(TX_SD_STS_3_FLD_ro_tx_sd_keep_max, (reg32), (val))

#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_sw_lcpll_en(val)       REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_sw_lcpll_en, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_lcpll_en_inv(val)      REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_en_inv, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_lcpll_hw_ctrl_mode(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_hw_ctrl_mode, (val))
#define SS_LCPLL_PWCTL_SETTING_0_VAL_rg_lcpll_force_on(val)    REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_0_FLD_rg_lcpll_force_on, (val))

#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_ck_stb_timer(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_ck_stb_timer, (val))
#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_pcw_man_load_timer(val) REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_pcw_man_load_timer, (val))
#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_en_timer(val)    REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_en_timer, (val))
#define SS_LCPLL_PWCTL_SETTING_1_VAL_rg_lcpll_man_pwdb(val)    REG_FLD_VAL(SS_LCPLL_PWCTL_SETTING_1_FLD_rg_lcpll_man_pwdb, (val))

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

#define RX_EYE_TOP_EYEINDEX_CTRL_0_VAL_rg_x_max(val)           REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_max, (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_0_VAL_rg_x_min(val)           REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_0_FLD_rg_x_min, (val))

#define RX_EYE_TOP_EYEINDEX_CTRL_1_VAL_rg_index_mode(val)      REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_index_mode, (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_1_VAL_rg_y_max(val)           REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_max, (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_1_VAL_rg_y_min(val)           REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_1_FLD_rg_y_min, (val))

#define RX_EYE_TOP_EYEINDEX_CTRL_2_VAL_rg_eyedur(val)          REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_2_FLD_rg_eyedur, (val))

#define RX_EYE_TOP_EYEINDEX_CTRL_3_VAL_rg_eye_nextpts(val)     REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts, (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_3_VAL_rg_eye_nextpts_toggle(val) REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_toggle, (val))
#define RX_EYE_TOP_EYEINDEX_CTRL_3_VAL_rg_eye_nextpts_sel(val) REG_FLD_VAL(RX_EYE_TOP_EYEINDEX_CTRL_3_FLD_rg_eye_nextpts_sel, (val))

#define RX_EYE_TOP_EYEOPENING_CTRL_0_VAL_rg_eyecnt_vth(val)    REG_FLD_VAL(RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_vth, (val))
#define RX_EYE_TOP_EYEOPENING_CTRL_0_VAL_rg_eyecnt_hth(val)    REG_FLD_VAL(RX_EYE_TOP_EYEOPENING_CTRL_0_FLD_rg_eyecnt_hth, (val))

#define RX_EYE_TOP_EYEOPENING_CTRL_1_VAL_rg_eo_vth(val)        REG_FLD_VAL(RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_vth, (val))
#define RX_EYE_TOP_EYEOPENING_CTRL_1_VAL_rg_eo_hth(val)        REG_FLD_VAL(RX_EYE_TOP_EYEOPENING_CTRL_1_FLD_rg_eo_hth, (val))

#define RX_EYE_TOP_EYECNT_CTRL_0_VAL_rg_eye_mask(val)          REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_eye_mask, (val))
#define RX_EYE_TOP_EYECNT_CTRL_0_VAL_rg_cntforever(val)        REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntforever, (val))
#define RX_EYE_TOP_EYECNT_CTRL_0_VAL_rg_cntlen(val)            REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_0_FLD_rg_cntlen, (val))

#define RX_EYE_TOP_EYECNT_CTRL_1_VAL_rg_force_eyedur_init_b(val) REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_init_b, (val))
#define RX_EYE_TOP_EYECNT_CTRL_1_VAL_rg_force_eyedur_en(val)   REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_force_eyedur_en, (val))
#define RX_EYE_TOP_EYECNT_CTRL_1_VAL_rg_disb_eyedur_init_b(val) REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_init_b, (val))
#define RX_EYE_TOP_EYECNT_CTRL_1_VAL_rg_disb_eyedur_en(val)    REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_1_FLD_rg_disb_eyedur_en, (val))

#define RX_EYE_TOP_EYECNT_CTRL_2_VAL_rg_data_shift(val)        REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_data_shift, (val))
#define RX_EYE_TOP_EYECNT_CTRL_2_VAL_rg_eyecnt_fast(val)       REG_FLD_VAL(RX_EYE_TOP_EYECNT_CTRL_2_FLD_rg_eyecnt_fast, (val))

#define RX_CTRL_SEQUENCE_CTRL_0_VAL_rg_rx_os_start(val)        REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_rx_os_start, (val))
#define RX_CTRL_SEQUENCE_CTRL_0_VAL_rg_osc_speed_opt(val)      REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_0_FLD_rg_osc_speed_opt, (val))

#define RX_CTRL_SEQUENCE_CTRL_1_VAL_rg_rx_pical_end(val)       REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_end, (val))
#define RX_CTRL_SEQUENCE_CTRL_1_VAL_rg_rx_pical_start(val)     REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_1_FLD_rg_rx_pical_start, (val))

#define RX_CTRL_SEQUENCE_CTRL_2_VAL_rg_rx_pdos_end(val)        REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_end, (val))
#define RX_CTRL_SEQUENCE_CTRL_2_VAL_rg_rx_pdos_start(val)      REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_2_FLD_rg_rx_pdos_start, (val))

#define RX_CTRL_SEQUENCE_CTRL_3_VAL_rg_rx_feos_end(val)        REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_end, (val))
#define RX_CTRL_SEQUENCE_CTRL_3_VAL_rg_rx_feos_start(val)      REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_3_FLD_rg_rx_feos_start, (val))

#define RX_CTRL_SEQUENCE_CTRL_4_VAL_rg_rx_sdcal_end(val)       REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_end, (val))
#define RX_CTRL_SEQUENCE_CTRL_4_VAL_rg_rx_sdcal_start(val)     REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_4_FLD_rg_rx_sdcal_start, (val))

#define RX_CTRL_SEQUENCE_CTRL_5_VAL_rg_rx_rdy(val)             REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_rdy, (val))
#define RX_CTRL_SEQUENCE_CTRL_5_VAL_rg_rx_blwc_rdy_en(val)     REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_5_FLD_rg_rx_blwc_rdy_en, (val))

#define RX_CTRL_SEQUENCE_CTRL_6_VAL_rg_rx_os_end(val)          REG_FLD_VAL(RX_CTRL_SEQUENCE_CTRL_6_FLD_rg_rx_os_end, (val))

#define RX_CTRL_SEQUENCE_DISB_CTRL_0_VAL_rg_disb_rx_feos_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_feos_en, (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_VAL_rg_disb_rx_pdos_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pdos_en, (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_VAL_rg_disb_rx_pical_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_pical_en, (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_0_VAL_rg_disb_rx_os_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_0_FLD_rg_disb_rx_os_en, (val))

#define RX_CTRL_SEQUENCE_DISB_CTRL_1_VAL_rg_disb_rx_rdy(val)   REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_rdy, (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_VAL_rg_disb_rx_blwc_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_blwc_en, (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_VAL_rg_disb_rx_os_rdy(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_os_rdy, (val))
#define RX_CTRL_SEQUENCE_DISB_CTRL_1_VAL_rg_disb_rx_sdcal_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_DISB_CTRL_1_FLD_rg_disb_rx_sdcal_en, (val))

#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_VAL_rg_force_rx_feos_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_feos_en, (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_VAL_rg_force_rx_pdos_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pdos_en, (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_VAL_rg_force_rx_pical_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_pical_en, (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_0_VAL_rg_force_rx_os_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_0_FLD_rg_force_rx_os_en, (val))

#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_VAL_rg_force_rx_rdy(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_rdy, (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_VAL_rg_force_rx_blwc_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_blwc_en, (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_VAL_rg_force_rx_os_rdy(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_os_rdy, (val))
#define RX_CTRL_SEQUENCE_FORCE_CTRL_1_VAL_rg_force_rx_sdcal_en(val) REG_FLD_VAL(RX_CTRL_SEQUENCE_FORCE_CTRL_1_FLD_rg_force_rx_sdcal_en, (val))

#define PHY_EQ_CTRL_0_VAL_rg_veo_mask(val)                     REG_FLD_VAL(PHY_EQ_CTRL_0_FLD_rg_veo_mask, (val))
#define PHY_EQ_CTRL_0_VAL_rg_heo_mask(val)                     REG_FLD_VAL(PHY_EQ_CTRL_0_FLD_rg_heo_mask, (val))
#define PHY_EQ_CTRL_0_VAL_rg_eq_en_delay(val)                  REG_FLD_VAL(PHY_EQ_CTRL_0_FLD_rg_eq_en_delay, (val))

#define PHY_EQ_CTRL_1_VAL_rg_b_zero_sel(val)                   REG_FLD_VAL(PHY_EQ_CTRL_1_FLD_rg_b_zero_sel, (val))
#define PHY_EQ_CTRL_1_VAL_rg_heo_emphasis(val)                 REG_FLD_VAL(PHY_EQ_CTRL_1_FLD_rg_heo_emphasis, (val))
#define PHY_EQ_CTRL_1_VAL_rg_a_mgain(val)                      REG_FLD_VAL(PHY_EQ_CTRL_1_FLD_rg_a_mgain, (val))
#define PHY_EQ_CTRL_1_VAL_rg_a_lgain(val)                      REG_FLD_VAL(PHY_EQ_CTRL_1_FLD_rg_a_lgain, (val))

#define PHY_EQ_CTRL_2_VAL_rg_eq_debug_sel(val)                 REG_FLD_VAL(PHY_EQ_CTRL_2_FLD_rg_eq_debug_sel, (val))
#define PHY_EQ_CTRL_2_VAL_rg_fom_num_order(val)                REG_FLD_VAL(PHY_EQ_CTRL_2_FLD_rg_fom_num_order, (val))
#define PHY_EQ_CTRL_2_VAL_rg_a_sel(val)                        REG_FLD_VAL(PHY_EQ_CTRL_2_FLD_rg_a_sel, (val))

#define PHY_EQ_CTRL_3_VAL_rg_fe_gain_ctrl_3(val)               REG_FLD_VAL(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_3, (val))
#define PHY_EQ_CTRL_3_VAL_rg_fe_gain_ctrl_2(val)               REG_FLD_VAL(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_2, (val))
#define PHY_EQ_CTRL_3_VAL_rg_fe_gain_ctrl_1(val)               REG_FLD_VAL(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_1, (val))
#define PHY_EQ_CTRL_3_VAL_rg_fe_gain_ctrl_0(val)               REG_FLD_VAL(PHY_EQ_CTRL_3_FLD_rg_fe_gain_ctrl_0, (val))

#define PHY_EQ_CTRL_4_VAL_rg_fe_gain_ctrl_7(val)               REG_FLD_VAL(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_7, (val))
#define PHY_EQ_CTRL_4_VAL_rg_fe_gain_ctrl_6(val)               REG_FLD_VAL(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_6, (val))
#define PHY_EQ_CTRL_4_VAL_rg_fe_gain_ctrl_5(val)               REG_FLD_VAL(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_5, (val))
#define PHY_EQ_CTRL_4_VAL_rg_fe_gain_ctrl_4(val)               REG_FLD_VAL(PHY_EQ_CTRL_4_FLD_rg_fe_gain_ctrl_4, (val))

#define PHY_EQ_CTRL_5_VAL_rg_fe_gain_ctrl_11(val)              REG_FLD_VAL(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_11, (val))
#define PHY_EQ_CTRL_5_VAL_rg_fe_gain_ctrl_10(val)              REG_FLD_VAL(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_10, (val))
#define PHY_EQ_CTRL_5_VAL_rg_fe_gain_ctrl_9(val)               REG_FLD_VAL(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_9, (val))
#define PHY_EQ_CTRL_5_VAL_rg_fe_gain_ctrl_8(val)               REG_FLD_VAL(PHY_EQ_CTRL_5_FLD_rg_fe_gain_ctrl_8, (val))

#define PHY_EQ_CTRL_6_VAL_rg_fe_gain_ctrl_15(val)              REG_FLD_VAL(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_15, (val))
#define PHY_EQ_CTRL_6_VAL_rg_fe_gain_ctrl_14(val)              REG_FLD_VAL(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_14, (val))
#define PHY_EQ_CTRL_6_VAL_rg_fe_gain_ctrl_13(val)              REG_FLD_VAL(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_13, (val))
#define PHY_EQ_CTRL_6_VAL_rg_fe_gain_ctrl_12(val)              REG_FLD_VAL(PHY_EQ_CTRL_6_FLD_rg_fe_gain_ctrl_12, (val))

#define PHY_EQ_CTRL_7_VAL_rg_fe_peaking_ctrl_3(val)            REG_FLD_VAL(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_3, (val))
#define PHY_EQ_CTRL_7_VAL_rg_fe_peaking_ctrl_2(val)            REG_FLD_VAL(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_2, (val))
#define PHY_EQ_CTRL_7_VAL_rg_fe_peaking_ctrl_1(val)            REG_FLD_VAL(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_1, (val))
#define PHY_EQ_CTRL_7_VAL_rg_fe_peaking_ctrl_0(val)            REG_FLD_VAL(PHY_EQ_CTRL_7_FLD_rg_fe_peaking_ctrl_0, (val))

#define PHY_EQ_CTRL_8_VAL_rg_fe_peaking_ctrl_7(val)            REG_FLD_VAL(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_7, (val))
#define PHY_EQ_CTRL_8_VAL_rg_fe_peaking_ctrl_6(val)            REG_FLD_VAL(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_6, (val))
#define PHY_EQ_CTRL_8_VAL_rg_fe_peaking_ctrl_5(val)            REG_FLD_VAL(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_5, (val))
#define PHY_EQ_CTRL_8_VAL_rg_fe_peaking_ctrl_4(val)            REG_FLD_VAL(PHY_EQ_CTRL_8_FLD_rg_fe_peaking_ctrl_4, (val))

#define PHY_EQ_CTRL_9_VAL_rg_fe_peaking_ctrl_11(val)           REG_FLD_VAL(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_11, (val))
#define PHY_EQ_CTRL_9_VAL_rg_fe_peaking_ctrl_10(val)           REG_FLD_VAL(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_10, (val))
#define PHY_EQ_CTRL_9_VAL_rg_fe_peaking_ctrl_9(val)            REG_FLD_VAL(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_9, (val))
#define PHY_EQ_CTRL_9_VAL_rg_fe_peaking_ctrl_8(val)            REG_FLD_VAL(PHY_EQ_CTRL_9_FLD_rg_fe_peaking_ctrl_8, (val))

#define PHY_EQ_CTRL_10_VAL_rg_fe_peaking_ctrl_15(val)          REG_FLD_VAL(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_15, (val))
#define PHY_EQ_CTRL_10_VAL_rg_fe_peaking_ctrl_14(val)          REG_FLD_VAL(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_14, (val))
#define PHY_EQ_CTRL_10_VAL_rg_fe_peaking_ctrl_13(val)          REG_FLD_VAL(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_13, (val))
#define PHY_EQ_CTRL_10_VAL_rg_fe_peaking_ctrl_12(val)          REG_FLD_VAL(PHY_EQ_CTRL_10_FLD_rg_fe_peaking_ctrl_12, (val))

#define SS_RX_FEOS_VAL_rg_eq_force_blwc_freeze(val)            REG_FLD_VAL(SS_RX_FEOS_FLD_rg_eq_force_blwc_freeze, (val))
#define SS_RX_FEOS_VAL_rg_lfsel(val)                           REG_FLD_VAL(SS_RX_FEOS_FLD_rg_lfsel, (val))

#define SS_RX_BLWC_VAL_rg_eq_blwc_cnt_bot_lim(val)             REG_FLD_VAL(SS_RX_BLWC_FLD_rg_eq_blwc_cnt_bot_lim, (val))
#define SS_RX_BLWC_VAL_rg_eq_blwc_cnt_top_lim(val)             REG_FLD_VAL(SS_RX_BLWC_FLD_rg_eq_blwc_cnt_top_lim, (val))
#define SS_RX_BLWC_VAL_rg_eq_blwc_gain(val)                    REG_FLD_VAL(SS_RX_BLWC_FLD_rg_eq_blwc_gain, (val))
#define SS_RX_BLWC_VAL_rg_eq_blwc_pol(val)                     REG_FLD_VAL(SS_RX_BLWC_FLD_rg_eq_blwc_pol, (val))

#define SS_RX_FREQ_DET_1_VAL_rg_unlock_cyclecnt(val)           REG_FLD_VAL(SS_RX_FREQ_DET_1_FLD_rg_unlock_cyclecnt, (val))
#define SS_RX_FREQ_DET_1_VAL_rg_lock_cyclecnt(val)             REG_FLD_VAL(SS_RX_FREQ_DET_1_FLD_rg_lock_cyclecnt, (val))

#define SS_RX_FREQ_DET_2_VAL_rg_lock_target_end(val)           REG_FLD_VAL(SS_RX_FREQ_DET_2_FLD_rg_lock_target_end, (val))
#define SS_RX_FREQ_DET_2_VAL_rg_lock_target_beg(val)           REG_FLD_VAL(SS_RX_FREQ_DET_2_FLD_rg_lock_target_beg, (val))

#define SS_RX_FREQ_DET_3_VAL_rg_unlock_target_end(val)         REG_FLD_VAL(SS_RX_FREQ_DET_3_FLD_rg_unlock_target_end, (val))
#define SS_RX_FREQ_DET_3_VAL_rg_unlock_target_beg(val)         REG_FLD_VAL(SS_RX_FREQ_DET_3_FLD_rg_unlock_target_beg, (val))

#define SS_RX_FREQ_DET_4_VAL_rg_wait_100us(val)                REG_FLD_VAL(SS_RX_FREQ_DET_4_FLD_rg_wait_100us, (val))
#define SS_RX_FREQ_DET_4_VAL_rg_unlockth(val)                  REG_FLD_VAL(SS_RX_FREQ_DET_4_FLD_rg_unlockth, (val))
#define SS_RX_FREQ_DET_4_VAL_rg_lock_lockth(val)               REG_FLD_VAL(SS_RX_FREQ_DET_4_FLD_rg_lock_lockth, (val))
#define SS_RX_FREQ_DET_4_VAL_rg_lock_cnt_clear(val)            REG_FLD_VAL(SS_RX_FREQ_DET_4_FLD_rg_lock_cnt_clear, (val))
#define SS_RX_FREQ_DET_4_VAL_rg_freqlock_det_en(val)           REG_FLD_VAL(SS_RX_FREQ_DET_4_FLD_rg_freqlock_det_en, (val))

#define SS_RX_PI_CAL_VAL_rg_eq_pi_cal_rdy_dly(val)             REG_FLD_VAL(SS_RX_PI_CAL_FLD_rg_eq_pi_cal_rdy_dly, (val))
#define SS_RX_PI_CAL_VAL_rg_kpgain(val)                        REG_FLD_VAL(SS_RX_PI_CAL_FLD_rg_kpgain, (val))
#define SS_RX_PI_CAL_VAL_rg_cdrlpi(val)                        REG_FLD_VAL(SS_RX_PI_CAL_FLD_rg_cdrlpi, (val))

#define SS_RX_CAL_1_VAL_rg_cal_cyc(val)                        REG_FLD_VAL(SS_RX_CAL_1_FLD_rg_cal_cyc, (val))
#define SS_RX_CAL_1_VAL_rg_cal_stb(val)                        REG_FLD_VAL(SS_RX_CAL_1_FLD_rg_cal_stb, (val))
#define SS_RX_CAL_1_VAL_rg_cal_1us_set(val)                    REG_FLD_VAL(SS_RX_CAL_1_FLD_rg_cal_1us_set, (val))
#define SS_RX_CAL_1_VAL_rg_sim_fast_en(val)                    REG_FLD_VAL(SS_RX_CAL_1_FLD_rg_sim_fast_en, (val))

#define SS_RX_CAL_2_VAL_rg_cal_cyc_time(val)                   REG_FLD_VAL(SS_RX_CAL_2_FLD_rg_cal_cyc_time, (val))
#define SS_RX_CAL_2_VAL_rg_cal_out_os(val)                     REG_FLD_VAL(SS_RX_CAL_2_FLD_rg_cal_out_os, (val))
#define SS_RX_CAL_2_VAL_rg_cal_os_pulse(val)                   REG_FLD_VAL(SS_RX_CAL_2_FLD_rg_cal_os_pulse, (val))

#define SS_RX_SIGDET_0_VAL_rg_sigdet_win_nonvld_times(val)     REG_FLD_VAL(SS_RX_SIGDET_0_FLD_rg_sigdet_win_nonvld_times, (val))
#define SS_RX_SIGDET_0_VAL_rg_sigdet_win_vld_times(val)        REG_FLD_VAL(SS_RX_SIGDET_0_FLD_rg_sigdet_win_vld_times, (val))
#define SS_RX_SIGDET_0_VAL_rg_sigdet_vld_times(val)            REG_FLD_VAL(SS_RX_SIGDET_0_FLD_rg_sigdet_vld_times, (val))
#define SS_RX_SIGDET_0_VAL_rg_sigdet_win_size(val)             REG_FLD_VAL(SS_RX_SIGDET_0_FLD_rg_sigdet_win_size, (val))

#define SS_RX_SIGDET_1_VAL_rg_sigdet_en(val)                   REG_FLD_VAL(SS_RX_SIGDET_1_FLD_rg_sigdet_en, (val))

#define SS_RX_FLL_0_VAL_rg_kband_kfc(val)                      REG_FLD_VAL(SS_RX_FLL_0_FLD_rg_kband_kfc, (val))
#define SS_RX_FLL_0_VAL_rg_fpkdiv(val)                         REG_FLD_VAL(SS_RX_FLL_0_FLD_rg_fpkdiv, (val))
#define SS_RX_FLL_0_VAL_rg_kband_prediv(val)                   REG_FLD_VAL(SS_RX_FLL_0_FLD_rg_kband_prediv, (val))

#define SS_RX_FLL_1_VAL_rg_symbol_wd(val)                      REG_FLD_VAL(SS_RX_FLL_1_FLD_rg_symbol_wd, (val))
#define SS_RX_FLL_1_VAL_rg_settle_time_sel(val)                REG_FLD_VAL(SS_RX_FLL_1_FLD_rg_settle_time_sel, (val))
#define SS_RX_FLL_1_VAL_rg_ipath_idac(val)                     REG_FLD_VAL(SS_RX_FLL_1_FLD_rg_ipath_idac, (val))

#define SS_RX_FLL_2_VAL_rg_debug_sel(val)                      REG_FLD_VAL(SS_RX_FLL_2_FLD_rg_debug_sel, (val))
#define SS_RX_FLL_2_VAL_rg_ck_rate(val)                        REG_FLD_VAL(SS_RX_FLL_2_FLD_rg_ck_rate, (val))
#define SS_RX_FLL_2_VAL_rg_amp(val)                            REG_FLD_VAL(SS_RX_FLL_2_FLD_rg_amp, (val))
#define SS_RX_FLL_2_VAL_rg_prbs_sel(val)                       REG_FLD_VAL(SS_RX_FLL_2_FLD_rg_prbs_sel, (val))

#define SS_RX_FLL_3_VAL_rg_icdr_kband_done_force(val)          REG_FLD_VAL(SS_RX_FLL_3_FLD_rg_icdr_kband_done_force, (val))
#define SS_RX_FLL_3_VAL_rg_icdr_kband_done_force_en(val)       REG_FLD_VAL(SS_RX_FLL_3_FLD_rg_icdr_kband_done_force_en, (val))
#define SS_RX_FLL_3_VAL_rg_fll_dig_rstb_force(val)             REG_FLD_VAL(SS_RX_FLL_3_FLD_rg_fll_dig_rstb_force, (val))
#define SS_RX_FLL_3_VAL_rg_fll_dig_rst_force_en(val)           REG_FLD_VAL(SS_RX_FLL_3_FLD_rg_fll_dig_rst_force_en, (val))

#define SS_RX_FLL_4_VAL_rg_fll_idac_repli(val)                 REG_FLD_VAL(SS_RX_FLL_4_FLD_rg_fll_idac_repli, (val))
#define SS_RX_FLL_4_VAL_rg_fll_cor(val)                        REG_FLD_VAL(SS_RX_FLL_4_FLD_rg_fll_cor, (val))
#define SS_RX_FLL_4_VAL_rg_fll_repli(val)                      REG_FLD_VAL(SS_RX_FLL_4_FLD_rg_fll_repli, (val))

#define SS_RX_FLL_5_VAL_rg_fll_idac_min(val)                   REG_FLD_VAL(SS_RX_FLL_5_FLD_rg_fll_idac_min, (val))
#define SS_RX_FLL_5_VAL_rg_fll_idac_max(val)                   REG_FLD_VAL(SS_RX_FLL_5_FLD_rg_fll_idac_max, (val))

#define SS_RX_FLL_6_VAL_ro_lnx_sw_fll_ro_4_latch_en(val)       REG_FLD_VAL(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_4_latch_en, (val))
#define SS_RX_FLL_6_VAL_ro_lnx_sw_fll_ro_3_latch_en(val)       REG_FLD_VAL(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_3_latch_en, (val))
#define SS_RX_FLL_6_VAL_ro_lnx_sw_fll_ro_2_latch_en(val)       REG_FLD_VAL(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_2_latch_en, (val))
#define SS_RX_FLL_6_VAL_ro_lnx_sw_fll_ro_1_latch_en(val)       REG_FLD_VAL(SS_RX_FLL_6_FLD_ro_lnx_sw_fll_ro_1_latch_en, (val))

#define SS_RX_FLL_7_VAL_ro_adc_freq(val)                       REG_FLD_VAL(SS_RX_FLL_7_FLD_ro_adc_freq, (val))

#define SS_RX_FLL_8_VAL_ro_cor_gain(val)                       REG_FLD_VAL(SS_RX_FLL_8_FLD_ro_cor_gain, (val))

#define SS_RX_FLL_9_VAL_ro_idacf(val)                          REG_FLD_VAL(SS_RX_FLL_9_FLD_ro_idacf, (val))
#define SS_RX_FLL_9_VAL_ro_fll_idac(val)                       REG_FLD_VAL(SS_RX_FLL_9_FLD_ro_fll_idac, (val))

#define SS_RX_FLL_a_VAL_ro_fll_idac_repli(val)                 REG_FLD_VAL(SS_RX_FLL_a_FLD_ro_fll_idac_repli, (val))
#define SS_RX_FLL_a_VAL_ro_da_idac(val)                        REG_FLD_VAL(SS_RX_FLL_a_FLD_ro_da_idac, (val))

#define SS_RX_FLL_b_VAL_rg_ad_sleep_en(val)                    REG_FLD_VAL(SS_RX_FLL_b_FLD_rg_ad_sleep_en, (val))
#define SS_RX_FLL_b_VAL_rg_load_en(val)                        REG_FLD_VAL(SS_RX_FLL_b_FLD_rg_load_en, (val))

#define RX_PDOS_CTRL_0_VAL_rg_sap_sel(val)                     REG_FLD_VAL(RX_PDOS_CTRL_0_FLD_rg_sap_sel, (val))
#define RX_PDOS_CTRL_0_VAL_rg_eye_blwc_add(val)                REG_FLD_VAL(RX_PDOS_CTRL_0_FLD_rg_eye_blwc_add, (val))
#define RX_PDOS_CTRL_0_VAL_rg_data_blwc_add(val)               REG_FLD_VAL(RX_PDOS_CTRL_0_FLD_rg_data_blwc_add, (val))

#define RX_RESET_0_VAL_rg_cal_rst_b(val)                       REG_FLD_VAL(RX_RESET_0_FLD_rg_cal_rst_b, (val))
#define RX_RESET_0_VAL_rg_eq_pi_cal_rst_b(val)                 REG_FLD_VAL(RX_RESET_0_FLD_rg_eq_pi_cal_rst_b, (val))
#define RX_RESET_0_VAL_rg_feos_rst_b(val)                      REG_FLD_VAL(RX_RESET_0_FLD_rg_feos_rst_b, (val))
#define RX_RESET_0_VAL_rg_eq_blwc_rst_b(val)                   REG_FLD_VAL(RX_RESET_0_FLD_rg_eq_blwc_rst_b, (val))

#define RX_RESET_1_VAL_rg_unlock_stb(val)                      REG_FLD_VAL(RX_RESET_1_FLD_rg_unlock_stb, (val))
#define RX_RESET_1_VAL_rg_sigdet_rst_b(val)                    REG_FLD_VAL(RX_RESET_1_FLD_rg_sigdet_rst_b, (val))
#define RX_RESET_1_VAL_rg_pdos_rst_b(val)                      REG_FLD_VAL(RX_RESET_1_FLD_rg_pdos_rst_b, (val))

#define RX_DEBUG_0_VAL_rg_ro_toggle(val)                       REG_FLD_VAL(RX_DEBUG_0_FLD_rg_ro_toggle, (val))
#define RX_DEBUG_0_VAL_rg_rx_debug_sel(val)                    REG_FLD_VAL(RX_DEBUG_0_FLD_rg_rx_debug_sel, (val))
#define RX_DEBUG_0_VAL_rg_probe1_en(val)                       REG_FLD_VAL(RX_DEBUG_0_FLD_rg_probe1_en, (val))
#define RX_DEBUG_0_VAL_rg_probe0_en(val)                       REG_FLD_VAL(RX_DEBUG_0_FLD_rg_probe0_en, (val))

#define BISTCTL_CONTROL_VAL_rg_bistctl_io_data_inv(val)        REG_FLD_VAL(BISTCTL_CONTROL_FLD_rg_bistctl_io_data_inv, (val))
#define BISTCTL_CONTROL_VAL_rg_bistctl_pat_rx_check_en(val)    REG_FLD_VAL(BISTCTL_CONTROL_FLD_rg_bistctl_pat_rx_check_en, (val))
#define BISTCTL_CONTROL_VAL_rg_bistctl_pat_tx_en(val)          REG_FLD_VAL(BISTCTL_CONTROL_FLD_rg_bistctl_pat_tx_en, (val))
#define BISTCTL_CONTROL_VAL_rg_bistctl_pat_sel(val)            REG_FLD_VAL(BISTCTL_CONTROL_FLD_rg_bistctl_pat_sel, (val))

#define BISTCTL_ALIGN_PAT_VAL_bistctl_align_pattern(val)       REG_FLD_VAL(BISTCTL_ALIGN_PAT_FLD_bistctl_align_pattern, (val))

#define BISTCTL_PROGRAM_PAT_0_VAL_rg_bistctl_program_data_0(val) REG_FLD_VAL(BISTCTL_PROGRAM_PAT_0_FLD_rg_bistctl_program_data_0, (val))

#define BISTCTL_PROGRAM_PAT_1_VAL_rg_bistctl_program_data_1(val) REG_FLD_VAL(BISTCTL_PROGRAM_PAT_1_FLD_rg_bistctl_program_data_1, (val))

#define BISTCTL_POLLUTION_VAL_rg_bist_tx_data_pollution_latch(val) REG_FLD_VAL(BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution_latch, (val))
#define BISTCTL_POLLUTION_VAL_rg_bist_tx_data_pollution(val)   REG_FLD_VAL(BISTCTL_POLLUTION_FLD_rg_bist_tx_data_pollution, (val))

#define BISTCTL_PRBS_INITIAL_SEED_VAL_bistctl_prbs_init_seed(val) REG_FLD_VAL(BISTCTL_PRBS_INITIAL_SEED_FLD_bistctl_prbs_init_seed, (val))

#define BISTCTL_PRBS_EVENT_VAL_ro_bistctl_prbs_done(val)       REG_FLD_VAL(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_done, (val))
#define BISTCTL_PRBS_EVENT_VAL_ro_bistctl_prbs_fail(val)       REG_FLD_VAL(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_fail, (val))
#define BISTCTL_PRBS_EVENT_VAL_ro_bistctl_prbs_compare(val)    REG_FLD_VAL(BISTCTL_PRBS_EVENT_FLD_ro_bistctl_prbs_compare, (val))

#define BISTCTL_PRBS_ERRCNT_VAL_ro_bistctl_prbs_err_cnt(val)   REG_FLD_VAL(BISTCTL_PRBS_ERRCNT_FLD_ro_bistctl_prbs_err_cnt, (val))

#define BISTCTL_PRBS_FAIL_THRESHOLD_VAL_rg_bistctl_sq_wave_reach(val) REG_FLD_VAL(BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_sq_wave_reach, (val))
#define BISTCTL_PRBS_FAIL_THRESHOLD_VAL_rg_bistctl_prbs_fail_threshold(val) REG_FLD_VAL(BISTCTL_PRBS_FAIL_THRESHOLD_FLD_rg_bistctl_prbs_fail_threshold, (val))

#define RX_TORGS_DEBUG_0_VAL_ro_dac_e1(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_0_FLD_ro_dac_e1, (val))
#define RX_TORGS_DEBUG_0_VAL_ro_dac_eo(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_0_FLD_ro_dac_eo, (val))
#define RX_TORGS_DEBUG_0_VAL_ro_dac_d1(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_0_FLD_ro_dac_d1, (val))
#define RX_TORGS_DEBUG_0_VAL_ro_dac_do(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_0_FLD_ro_dac_do, (val))

#define RX_TORGS_DEBUG_1_VAL_ro_blwc_filter_din(val)           REG_FLD_VAL(RX_TORGS_DEBUG_1_FLD_ro_blwc_filter_din, (val))
#define RX_TORGS_DEBUG_1_VAL_ro_blwc_sum(val)                  REG_FLD_VAL(RX_TORGS_DEBUG_1_FLD_ro_blwc_sum, (val))
#define RX_TORGS_DEBUG_1_VAL_ro_blwc_offset(val)               REG_FLD_VAL(RX_TORGS_DEBUG_1_FLD_ro_blwc_offset, (val))
#define RX_TORGS_DEBUG_1_VAL_ro_dac_eye(val)                   REG_FLD_VAL(RX_TORGS_DEBUG_1_FLD_ro_dac_eye, (val))

#define RX_TORGS_DEBUG_2_VAL_ro_cal_dir(val)                   REG_FLD_VAL(RX_TORGS_DEBUG_2_FLD_ro_cal_dir, (val))
#define RX_TORGS_DEBUG_2_VAL_ro_pi_cal_data_out(val)           REG_FLD_VAL(RX_TORGS_DEBUG_2_FLD_ro_pi_cal_data_out, (val))
#define RX_TORGS_DEBUG_2_VAL_ro_fl_out2(val)                   REG_FLD_VAL(RX_TORGS_DEBUG_2_FLD_ro_fl_out2, (val))

#define RX_TORGS_DEBUG_3_VAL_ro_lslock_cnt2(val)               REG_FLD_VAL(RX_TORGS_DEBUG_3_FLD_ro_lslock_cnt2, (val))
#define RX_TORGS_DEBUG_3_VAL_ro_cal_en(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_3_FLD_ro_cal_en, (val))
#define RX_TORGS_DEBUG_3_VAL_ro_cal_out(val)                   REG_FLD_VAL(RX_TORGS_DEBUG_3_FLD_ro_cal_out, (val))

#define RX_TORGS_DEBUG_4_VAL_eyecnt_rdy(val)                   REG_FLD_VAL(RX_TORGS_DEBUG_4_FLD_eyecnt_rdy, (val))
#define RX_TORGS_DEBUG_4_VAL_ro_veo(val)                       REG_FLD_VAL(RX_TORGS_DEBUG_4_FLD_ro_veo, (val))
#define RX_TORGS_DEBUG_4_VAL_ro_heo(val)                       REG_FLD_VAL(RX_TORGS_DEBUG_4_FLD_ro_heo, (val))

#define RX_TORGS_DEBUG_5_VAL_veo_rdy(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_5_FLD_veo_rdy, (val))
#define RX_TORGS_DEBUG_5_VAL_heo_rdy(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_5_FLD_heo_rdy, (val))
#define RX_TORGS_DEBUG_5_VAL_heo_center(val)                   REG_FLD_VAL(RX_TORGS_DEBUG_5_FLD_heo_center, (val))

#define RX_TORGS_DEBUG_6_VAL_ro_cntlen(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_6_FLD_ro_cntlen, (val))

#define RX_TORGS_DEBUG_7_VAL_eyecnt(val)                       REG_FLD_VAL(RX_TORGS_DEBUG_7_FLD_eyecnt, (val))

#define RX_TORGS_DEBUG_8_VAL_fom_num_type_good(val)            REG_FLD_VAL(RX_TORGS_DEBUG_8_FLD_fom_num_type_good, (val))
#define RX_TORGS_DEBUG_8_VAL_fom_num_type(val)                 REG_FLD_VAL(RX_TORGS_DEBUG_8_FLD_fom_num_type, (val))
#define RX_TORGS_DEBUG_8_VAL_fom_num(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_8_FLD_fom_num, (val))

#define RX_TORGS_DEBUG_9_VAL_eo_y_done(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_9_FLD_eo_y_done, (val))
#define RX_TORGS_DEBUG_9_VAL_eo_x_done(val)                    REG_FLD_VAL(RX_TORGS_DEBUG_9_FLD_eo_x_done, (val))
#define RX_TORGS_DEBUG_9_VAL_ro_feos_out(val)                  REG_FLD_VAL(RX_TORGS_DEBUG_9_FLD_ro_feos_out, (val))
#define RX_TORGS_DEBUG_9_VAL_rgs_ipll_dig_mon(val)             REG_FLD_VAL(RX_TORGS_DEBUG_9_FLD_rgs_ipll_dig_mon, (val))

#define RX_TORGS_DEBUG_10_VAL_eye_el(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_10_FLD_eye_el, (val))
#define RX_TORGS_DEBUG_10_VAL_eye_er(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_10_FLD_eye_er, (val))

#define SS_TX_RST_B_VAL_txcalib_rst_b(val)                     REG_FLD_VAL(SS_TX_RST_B_FLD_txcalib_rst_b, (val))
#define SS_TX_RST_B_VAL_tx_top_rst_b(val)                      REG_FLD_VAL(SS_TX_RST_B_FLD_tx_top_rst_b, (val))

#define SS_TX_CALIB_0_VAL_rg_txcalib_force_termp_sel(val)      REG_FLD_VAL(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel, (val))
#define SS_TX_CALIB_0_VAL_rg_txcalib_force_termp_sel_en(val)   REG_FLD_VAL(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_sel_en, (val))
#define SS_TX_CALIB_0_VAL_rg_txcalib_force_termp_calen(val)    REG_FLD_VAL(SS_TX_CALIB_0_FLD_rg_txcalib_force_termp_calen, (val))
#define SS_TX_CALIB_0_VAL_rg_txcalib_p_en(val)                 REG_FLD_VAL(SS_TX_CALIB_0_FLD_rg_txcalib_p_en, (val))

#define SS_TX_CALIB_1_VAL_rg_txcalib_force_termn_sel(val)      REG_FLD_VAL(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel, (val))
#define SS_TX_CALIB_1_VAL_rg_txcalib_force_termn_sel_en(val)   REG_FLD_VAL(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_sel_en, (val))
#define SS_TX_CALIB_1_VAL_rg_txcalib_force_termn_calen(val)    REG_FLD_VAL(SS_TX_CALIB_1_FLD_rg_txcalib_force_termn_calen, (val))
#define SS_TX_CALIB_1_VAL_rg_txcalib_n_en(val)                 REG_FLD_VAL(SS_TX_CALIB_1_FLD_rg_txcalib_n_en, (val))

#define SS_TX_CALIB_2_VAL_rg_txcal_clear(val)                  REG_FLD_VAL(SS_TX_CALIB_2_FLD_rg_txcal_clear, (val))
#define SS_TX_CALIB_2_VAL_ro_txcal_fsm(val)                    REG_FLD_VAL(SS_TX_CALIB_2_FLD_ro_txcal_fsm, (val))
#define SS_TX_CALIB_2_VAL_ro_txcal_out_nflag(val)              REG_FLD_VAL(SS_TX_CALIB_2_FLD_ro_txcal_out_nflag, (val))
#define SS_TX_CALIB_2_VAL_ro_txcal_out_pflag(val)              REG_FLD_VAL(SS_TX_CALIB_2_FLD_ro_txcal_out_pflag, (val))

#define XPON_SETTING_0_VAL_rg_trans_tx_fault_inv(val)          REG_FLD_VAL(XPON_SETTING_0_FLD_rg_trans_tx_fault_inv, (val))
#define XPON_SETTING_0_VAL_rg_trans_rx_sd_inv(val)             REG_FLD_VAL(XPON_SETTING_0_FLD_rg_trans_rx_sd_inv, (val))
#define XPON_SETTING_0_VAL_rg_trans_rx_data_inv(val)           REG_FLD_VAL(XPON_SETTING_0_FLD_rg_trans_rx_data_inv, (val))
#define XPON_SETTING_0_VAL_rg_trans_tx_data_inv(val)           REG_FLD_VAL(XPON_SETTING_0_FLD_rg_trans_tx_data_inv, (val))
#define XPON_SETTING_0_VAL_rg_trans_burst_inv(val)             REG_FLD_VAL(XPON_SETTING_0_FLD_rg_trans_burst_inv, (val))
#define XPON_SETTING_0_VAL_rg_sfp_rx_sd_inv(val)               REG_FLD_VAL(XPON_SETTING_0_FLD_rg_sfp_rx_sd_inv, (val))
#define XPON_SETTING_0_VAL_rg_tx_dly_en(val)                   REG_FLD_VAL(XPON_SETTING_0_FLD_rg_tx_dly_en, (val))

#define XPON_SETTING_1_VAL_rg_trans_tx_fault_pro(val)          REG_FLD_VAL(XPON_SETTING_1_FLD_rg_trans_tx_fault_pro, (val))
#define XPON_SETTING_1_VAL_rg_trans_rx_los_pro(val)            REG_FLD_VAL(XPON_SETTING_1_FLD_rg_trans_rx_los_pro, (val))
#define XPON_SETTING_1_VAL_rg_trans_tx_sd_pro(val)             REG_FLD_VAL(XPON_SETTING_1_FLD_rg_trans_tx_sd_pro, (val))
#define XPON_SETTING_1_VAL_rg_trans_tx_sd_inv(val)             REG_FLD_VAL(XPON_SETTING_1_FLD_rg_trans_tx_sd_inv, (val))

#define XPON_SETTING_2_VAL_rg_pma_show_probe_en(val)           REG_FLD_VAL(XPON_SETTING_2_FLD_rg_pma_show_probe_en, (val))
#define XPON_SETTING_2_VAL_rg_ftcal_high(val)                  REG_FLD_VAL(XPON_SETTING_2_FLD_rg_ftcal_high, (val))
#define XPON_SETTING_2_VAL_rg_ftcal_low(val)                   REG_FLD_VAL(XPON_SETTING_2_FLD_rg_ftcal_low, (val))
#define XPON_SETTING_2_VAL_rg_trans_rx_laser_on_pro(val)       REG_FLD_VAL(XPON_SETTING_2_FLD_rg_trans_rx_laser_on_pro, (val))

#define XPON_STA_VAL_ro_tx_fault(val)                          REG_FLD_VAL(XPON_STA_FLD_ro_tx_fault, (val))
#define XPON_STA_VAL_ro_tx_sd(val)                             REG_FLD_VAL(XPON_STA_FLD_ro_tx_sd, (val))
#define XPON_STA_VAL_ro_rx_los(val)                            REG_FLD_VAL(XPON_STA_FLD_ro_rx_los, (val))

#define XPON_INT_EN_0_VAL_rg_tx_sd_alarm_int_en(val)           REG_FLD_VAL(XPON_INT_EN_0_FLD_rg_tx_sd_alarm_int_en, (val))
#define XPON_INT_EN_0_VAL_rg_ad_ben_alarm_int_en(val)          REG_FLD_VAL(XPON_INT_EN_0_FLD_rg_ad_ben_alarm_int_en, (val))
#define XPON_INT_EN_0_VAL_rg_trans_sd_fail_int_en(val)         REG_FLD_VAL(XPON_INT_EN_0_FLD_rg_trans_sd_fail_int_en, (val))
#define XPON_INT_EN_0_VAL_rg_phyrdy_int_en(val)                REG_FLD_VAL(XPON_INT_EN_0_FLD_rg_phyrdy_int_en, (val))
#define XPON_INT_EN_0_VAL_rg_un_stb_os_rdy_int_en(val)         REG_FLD_VAL(XPON_INT_EN_0_FLD_rg_un_stb_os_rdy_int_en, (val))
#define XPON_INT_EN_0_VAL_rg_trans_rogue_onu_int_en(val)       REG_FLD_VAL(XPON_INT_EN_0_FLD_rg_trans_rogue_onu_int_en, (val))

#define XPON_INT_EN_1_VAL_rg_trans_los_int_en(val)             REG_FLD_VAL(XPON_INT_EN_1_FLD_rg_trans_los_int_en, (val))
#define XPON_INT_EN_1_VAL_rg_un_stb_rx_rdy_int_en(val)         REG_FLD_VAL(XPON_INT_EN_1_FLD_rg_un_stb_rx_rdy_int_en, (val))
#define XPON_INT_EN_1_VAL_rg_trans_fault_int_en(val)           REG_FLD_VAL(XPON_INT_EN_1_FLD_rg_trans_fault_int_en, (val))
#define XPON_INT_EN_1_VAL_rg_un_stb_eq_rdy_int_en(val)         REG_FLD_VAL(XPON_INT_EN_1_FLD_rg_un_stb_eq_rdy_int_en, (val))

#define XPON_INT_STA_0_VAL_tx_sd_alarm_int(val)                REG_FLD_VAL(XPON_INT_STA_0_FLD_tx_sd_alarm_int, (val))
#define XPON_INT_STA_0_VAL_ben_alarm_int(val)                  REG_FLD_VAL(XPON_INT_STA_0_FLD_ben_alarm_int, (val))
#define XPON_INT_STA_0_VAL_trans_sd_fail_int(val)              REG_FLD_VAL(XPON_INT_STA_0_FLD_trans_sd_fail_int, (val))
#define XPON_INT_STA_0_VAL_phyrdy_int(val)                     REG_FLD_VAL(XPON_INT_STA_0_FLD_phyrdy_int, (val))
#define XPON_INT_STA_0_VAL_un_stb_os_rdy_int(val)              REG_FLD_VAL(XPON_INT_STA_0_FLD_un_stb_os_rdy_int, (val))
#define XPON_INT_STA_0_VAL_trans_rogue_onu_int(val)            REG_FLD_VAL(XPON_INT_STA_0_FLD_trans_rogue_onu_int, (val))

#define XPON_INT_STA_1_VAL_trans_los_int(val)                  REG_FLD_VAL(XPON_INT_STA_1_FLD_trans_los_int, (val))
#define XPON_INT_STA_1_VAL_un_stb_rx_rdy_int(val)              REG_FLD_VAL(XPON_INT_STA_1_FLD_un_stb_rx_rdy_int, (val))
#define XPON_INT_STA_1_VAL_trans_fault_int(val)                REG_FLD_VAL(XPON_INT_STA_1_FLD_trans_fault_int, (val))
#define XPON_INT_STA_1_VAL_un_stb_eq_rdy_int(val)              REG_FLD_VAL(XPON_INT_STA_1_FLD_un_stb_eq_rdy_int, (val))

#define RX_TORGS_DEBUG_11_VAL_AD_XPON_RX_SIGDET_OUT(val)       REG_FLD_VAL(RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_SIGDET_OUT, (val))
#define RX_TORGS_DEBUG_11_VAL_AD_XPON_RX_DBG(val)              REG_FLD_VAL(RX_TORGS_DEBUG_11_FLD_AD_XPON_RX_DBG, (val))
#define RX_TORGS_DEBUG_11_VAL_eye_eb(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_11_FLD_eye_eb, (val))
#define RX_TORGS_DEBUG_11_VAL_eye_eu(val)                      REG_FLD_VAL(RX_TORGS_DEBUG_11_FLD_eye_eu, (val))

#define RX_FORCE_MODE_0_VAL_rg_force_da_xpon_cdr_lpf_rstb(val) REG_FLD_VAL(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_rstb, (val))
#define RX_FORCE_MODE_0_VAL_rg_force_da_xpon_cdr_lpf_lck2data(val) REG_FLD_VAL(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_cdr_lpf_lck2data, (val))
#define RX_FORCE_MODE_0_VAL_rg_force_da_xpon_rx_fe_peaking_ctrl(val) REG_FLD_VAL(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_peaking_ctrl, (val))
#define RX_FORCE_MODE_0_VAL_rg_force_da_xpon_rx_fe_gain_ctrl(val) REG_FLD_VAL(RX_FORCE_MODE_0_FLD_rg_force_da_xpon_rx_fe_gain_ctrl, (val))

#define RX_FORCE_MODE_1_VAL_rg_force_da_xpon_rx_dac_e0(val)    REG_FLD_VAL(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_e0, (val))
#define RX_FORCE_MODE_1_VAL_rg_force_da_xpon_rx_dac_d1(val)    REG_FLD_VAL(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d1, (val))
#define RX_FORCE_MODE_1_VAL_rg_force_da_xpon_rx_dac_d0(val)    REG_FLD_VAL(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_dac_d0, (val))
#define RX_FORCE_MODE_1_VAL_rg_force_da_xpon_rx_sigdet_os(val) REG_FLD_VAL(RX_FORCE_MODE_1_FLD_rg_force_da_xpon_rx_sigdet_os, (val))

#define RX_FORCE_MODE_2_VAL_rg_force_da_xpon_cdr_pr_pieye(val) REG_FLD_VAL(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_cdr_pr_pieye, (val))
#define RX_FORCE_MODE_2_VAL_rg_force_da_xpon_rx_fe_vos(val)    REG_FLD_VAL(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_fe_vos, (val))
#define RX_FORCE_MODE_2_VAL_rg_force_da_xpon_rx_dac_eye(val)   REG_FLD_VAL(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_eye, (val))
#define RX_FORCE_MODE_2_VAL_rg_force_da_xpon_rx_dac_e1(val)    REG_FLD_VAL(RX_FORCE_MODE_2_FLD_rg_force_da_xpon_rx_dac_e1, (val))

#define RX_DISB_MODE_0_VAL_rg_disb_da_xpon_cdr_lpf_rstb(val)   REG_FLD_VAL(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_rstb, (val))
#define RX_DISB_MODE_0_VAL_rg_disb_da_xpon_cdr_lpf_lck2data(val) REG_FLD_VAL(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_cdr_lpf_lck2data, (val))
#define RX_DISB_MODE_0_VAL_rg_disb_da_xpon_rx_fe_peaking_ctrl(val) REG_FLD_VAL(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_peaking_ctrl, (val))
#define RX_DISB_MODE_0_VAL_rg_disb_da_xpon_rx_fe_gain_ctrl(val) REG_FLD_VAL(RX_DISB_MODE_0_FLD_rg_disb_da_xpon_rx_fe_gain_ctrl, (val))

#define RX_DISB_MODE_1_VAL_rg_disb_da_xpon_rx_dac_e0(val)      REG_FLD_VAL(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_e0, (val))
#define RX_DISB_MODE_1_VAL_rg_disb_da_xpon_rx_dac_d1(val)      REG_FLD_VAL(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d1, (val))
#define RX_DISB_MODE_1_VAL_rg_disb_da_xpon_rx_dac_d0(val)      REG_FLD_VAL(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_dac_d0, (val))
#define RX_DISB_MODE_1_VAL_rg_disb_da_xpon_rx_sigdet_os(val)   REG_FLD_VAL(RX_DISB_MODE_1_FLD_rg_disb_da_xpon_rx_sigdet_os, (val))

#define RX_DISB_MODE_2_VAL_rg_disb_da_xpon_cdr_pr_pieye(val)   REG_FLD_VAL(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_cdr_pr_pieye, (val))
#define RX_DISB_MODE_2_VAL_rg_disb_da_xpon_rx_fe_vos(val)      REG_FLD_VAL(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_fe_vos, (val))
#define RX_DISB_MODE_2_VAL_rg_disb_da_xpon_rx_dac_eye(val)     REG_FLD_VAL(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_eye, (val))
#define RX_DISB_MODE_2_VAL_rg_disb_da_xpon_rx_dac_e1(val)      REG_FLD_VAL(RX_DISB_MODE_2_FLD_rg_disb_da_xpon_rx_dac_e1, (val))

#define RX_FORCE_MODE_3_VAL_rg_force_rx_dac_d1(val)            REG_FLD_VAL(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d1, (val))
#define RX_FORCE_MODE_3_VAL_rg_force_rx_dac_d0(val)            REG_FLD_VAL(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_d0, (val))
#define RX_FORCE_MODE_3_VAL_rg_force_rx_dac_eye(val)           REG_FLD_VAL(RX_FORCE_MODE_3_FLD_rg_force_rx_dac_eye, (val))
#define RX_FORCE_MODE_3_VAL_rg_force_eq_pi_cal_rdy(val)        REG_FLD_VAL(RX_FORCE_MODE_3_FLD_rg_force_eq_pi_cal_rdy, (val))

#define RX_FORCE_MODE_4_VAL_rg_force_blwc_offset(val)          REG_FLD_VAL(RX_FORCE_MODE_4_FLD_rg_force_blwc_offset, (val))
#define RX_FORCE_MODE_4_VAL_rg_force_xpon_rx_sigdet_out(val)   REG_FLD_VAL(RX_FORCE_MODE_4_FLD_rg_force_xpon_rx_sigdet_out, (val))
#define RX_FORCE_MODE_4_VAL_rg_force_rx_dac_e1(val)            REG_FLD_VAL(RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e1, (val))
#define RX_FORCE_MODE_4_VAL_rg_force_rx_dac_e0(val)            REG_FLD_VAL(RX_FORCE_MODE_4_FLD_rg_force_rx_dac_e0, (val))

#define RX_FORCE_MODE_5_VAL_rg_force_eyecnt(val)               REG_FLD_VAL(RX_FORCE_MODE_5_FLD_rg_force_eyecnt, (val))
#define RX_FORCE_MODE_5_VAL_rg_force_feos_out(val)             REG_FLD_VAL(RX_FORCE_MODE_5_FLD_rg_force_feos_out, (val))

#define RX_FORCE_MODE_6_VAL_rg_force_rx_or_pical_en(val)       REG_FLD_VAL(RX_FORCE_MODE_6_FLD_rg_force_rx_or_pical_en, (val))
#define RX_FORCE_MODE_6_VAL_rg_force_eyecnt_rdy(val)           REG_FLD_VAL(RX_FORCE_MODE_6_FLD_rg_force_eyecnt_rdy, (val))

#define RX_DISB_MODE_3_VAL_rg_disb_rx_dac_d1(val)              REG_FLD_VAL(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d1, (val))
#define RX_DISB_MODE_3_VAL_rg_disb_rx_dac_d0(val)              REG_FLD_VAL(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_d0, (val))
#define RX_DISB_MODE_3_VAL_rg_disb_rx_dac_eye(val)             REG_FLD_VAL(RX_DISB_MODE_3_FLD_rg_disb_rx_dac_eye, (val))
#define RX_DISB_MODE_3_VAL_rg_disb_eq_pi_cal_rdy(val)          REG_FLD_VAL(RX_DISB_MODE_3_FLD_rg_disb_eq_pi_cal_rdy, (val))

#define RX_DISB_MODE_4_VAL_rg_disb_blwc_offset(val)            REG_FLD_VAL(RX_DISB_MODE_4_FLD_rg_disb_blwc_offset, (val))
#define RX_DISB_MODE_4_VAL_rg_disb_xpon_rx_sigdet_out(val)     REG_FLD_VAL(RX_DISB_MODE_4_FLD_rg_disb_xpon_rx_sigdet_out, (val))
#define RX_DISB_MODE_4_VAL_rg_disb_rx_dac_e1(val)              REG_FLD_VAL(RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e1, (val))
#define RX_DISB_MODE_4_VAL_rg_disb_rx_dac_e0(val)              REG_FLD_VAL(RX_DISB_MODE_4_FLD_rg_disb_rx_dac_e0, (val))

#define RX_DISB_MODE_5_VAL_rg_disb_rx_or_pical_en(val)         REG_FLD_VAL(RX_DISB_MODE_5_FLD_rg_disb_rx_or_pical_en, (val))
#define RX_DISB_MODE_5_VAL_rg_disb_eyecnt_rdy(val)             REG_FLD_VAL(RX_DISB_MODE_5_FLD_rg_disb_eyecnt_rdy, (val))
#define RX_DISB_MODE_5_VAL_rg_disb_eyecnt(val)                 REG_FLD_VAL(RX_DISB_MODE_5_FLD_rg_disb_eyecnt, (val))
#define RX_DISB_MODE_5_VAL_rg_disb_feos_out(val)               REG_FLD_VAL(RX_DISB_MODE_5_FLD_rg_disb_feos_out, (val))

#define RX_FORCE_MODE_7_VAL_rg_force_da_lock2ref(val)          REG_FLD_VAL(RX_FORCE_MODE_7_FLD_rg_force_da_lock2ref, (val))
#define RX_FORCE_MODE_7_VAL_rg_force_pdos_rx_rst_b(val)        REG_FLD_VAL(RX_FORCE_MODE_7_FLD_rg_force_pdos_rx_rst_b, (val))
#define RX_FORCE_MODE_7_VAL_rg_force_rx_and_pical_rstb(val)    REG_FLD_VAL(RX_FORCE_MODE_7_FLD_rg_force_rx_and_pical_rstb, (val))
#define RX_FORCE_MODE_7_VAL_rg_force_ref_and_pical_rstb(val)   REG_FLD_VAL(RX_FORCE_MODE_7_FLD_rg_force_ref_and_pical_rstb, (val))

#define RX_FORCE_MODE_8_VAL_rg_force_eyecnt_rx_rst_b(val)      REG_FLD_VAL(RX_FORCE_MODE_8_FLD_rg_force_eyecnt_rx_rst_b, (val))
#define RX_FORCE_MODE_8_VAL_rg_force_feos_rx_rst_b(val)        REG_FLD_VAL(RX_FORCE_MODE_8_FLD_rg_force_feos_rx_rst_b, (val))
#define RX_FORCE_MODE_8_VAL_rg_force_sdcal_ref_rst_b(val)      REG_FLD_VAL(RX_FORCE_MODE_8_FLD_rg_force_sdcal_ref_rst_b, (val))
#define RX_FORCE_MODE_8_VAL_rg_force_blwc_rx_rst_b(val)        REG_FLD_VAL(RX_FORCE_MODE_8_FLD_rg_force_blwc_rx_rst_b, (val))

#define RX_FORCE_MODE_9_VAL_rg_force_pi_cal_data_out_o(val)    REG_FLD_VAL(RX_FORCE_MODE_9_FLD_rg_force_pi_cal_data_out_o, (val))
#define RX_FORCE_MODE_9_VAL_rg_force_eye_top_en(val)           REG_FLD_VAL(RX_FORCE_MODE_9_FLD_rg_force_eye_top_en, (val))
#define RX_FORCE_MODE_9_VAL_rg_force_eye_reset_plu_o(val)      REG_FLD_VAL(RX_FORCE_MODE_9_FLD_rg_force_eye_reset_plu_o, (val))
#define RX_FORCE_MODE_9_VAL_rg_force_fbck_lock(val)            REG_FLD_VAL(RX_FORCE_MODE_9_FLD_rg_force_fbck_lock, (val))

#define RX_DISB_MODE_6_VAL_rg_disb_da_lock2ref(val)            REG_FLD_VAL(RX_DISB_MODE_6_FLD_rg_disb_da_lock2ref, (val))
#define RX_DISB_MODE_6_VAL_rg_disb_pdos_rx_rst_b(val)          REG_FLD_VAL(RX_DISB_MODE_6_FLD_rg_disb_pdos_rx_rst_b, (val))
#define RX_DISB_MODE_6_VAL_rg_disb_rx_and_pical_rstb(val)      REG_FLD_VAL(RX_DISB_MODE_6_FLD_rg_disb_rx_and_pical_rstb, (val))
#define RX_DISB_MODE_6_VAL_rg_disb_ref_and_pical_rstb(val)     REG_FLD_VAL(RX_DISB_MODE_6_FLD_rg_disb_ref_and_pical_rstb, (val))

#define RX_DISB_MODE_7_VAL_rg_disb_eyecnt_rx_rst_b(val)        REG_FLD_VAL(RX_DISB_MODE_7_FLD_rg_disb_eyecnt_rx_rst_b, (val))
#define RX_DISB_MODE_7_VAL_rg_disb_feos_rx_rst_b(val)          REG_FLD_VAL(RX_DISB_MODE_7_FLD_rg_disb_feos_rx_rst_b, (val))
#define RX_DISB_MODE_7_VAL_rg_disb_sdcal_ref_rst_b(val)        REG_FLD_VAL(RX_DISB_MODE_7_FLD_rg_disb_sdcal_ref_rst_b, (val))
#define RX_DISB_MODE_7_VAL_rg_disb_blwc_rx_rst_b(val)          REG_FLD_VAL(RX_DISB_MODE_7_FLD_rg_disb_blwc_rx_rst_b, (val))

#define RX_DISB_MODE_8_VAL_rg_disb_pi_cal_data_out_o(val)      REG_FLD_VAL(RX_DISB_MODE_8_FLD_rg_disb_pi_cal_data_out_o, (val))
#define RX_DISB_MODE_8_VAL_rg_disb_eye_top_en(val)             REG_FLD_VAL(RX_DISB_MODE_8_FLD_rg_disb_eye_top_en, (val))
#define RX_DISB_MODE_8_VAL_rg_disb_eye_reset_plu_o(val)        REG_FLD_VAL(RX_DISB_MODE_8_FLD_rg_disb_eye_reset_plu_o, (val))
#define RX_DISB_MODE_8_VAL_rg_disb_fbck_lock(val)              REG_FLD_VAL(RX_DISB_MODE_8_FLD_rg_disb_fbck_lock, (val))

#define SS_BIST_0_VAL_dbgctl_bistctl_px_lnx_flagh_en(val)      REG_FLD_VAL(SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagh_en, (val))
#define SS_BIST_0_VAL_dbgctl_bistctl_px_lnx_flagl_en(val)      REG_FLD_VAL(SS_BIST_0_FLD_dbgctl_bistctl_px_lnx_flagl_en, (val))
#define SS_BIST_0_VAL_dbgctl_bistctl_flagh_sel(val)            REG_FLD_VAL(SS_BIST_0_FLD_dbgctl_bistctl_flagh_sel, (val))
#define SS_BIST_0_VAL_dbgctl_bistctl_flagl_sel(val)            REG_FLD_VAL(SS_BIST_0_FLD_dbgctl_bistctl_flagl_sel, (val))

#define SS_BIST_1_VAL_rg_lnx_bistctl_bit_error_rst_sel(val)    REG_FLD_VAL(SS_BIST_1_FLD_rg_lnx_bistctl_bit_error_rst_sel, (val))
#define SS_BIST_1_VAL_pllctl_px_lnx_tx_por_rdy(val)            REG_FLD_VAL(SS_BIST_1_FLD_pllctl_px_lnx_tx_por_rdy, (val))
#define SS_BIST_1_VAL_all_lane_prbs_tx_en(val)                 REG_FLD_VAL(SS_BIST_1_FLD_all_lane_prbs_tx_en, (val))
#define SS_BIST_1_VAL_anlt_px_lnx_lt_los(val)                  REG_FLD_VAL(SS_BIST_1_FLD_anlt_px_lnx_lt_los, (val))

#define SS_BIST_2_VAL_rg_lnx_bistctl_prbs_check_timer(val)     REG_FLD_VAL(SS_BIST_2_FLD_rg_lnx_bistctl_prbs_check_timer, (val))

#define SS_DA_XPON_PWDB_0_VAL_rg_da_xpon_cdr_pd_pwdb(val)      REG_FLD_VAL(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pd_pwdb, (val))
#define SS_DA_XPON_PWDB_0_VAL_rg_da_xpon_cdr_pr_pieye_pwdb(val) REG_FLD_VAL(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pieye_pwdb, (val))
#define SS_DA_XPON_PWDB_0_VAL_rg_da_xpon_cdr_pr_pwdb(val)      REG_FLD_VAL(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_cdr_pr_pwdb, (val))
#define SS_DA_XPON_PWDB_0_VAL_rg_da_xpon_rx_fe_pwdb(val)       REG_FLD_VAL(SS_DA_XPON_PWDB_0_FLD_rg_da_xpon_rx_fe_pwdb, (val))

#define SS_DA_XPON_PWDB_1_VAL_rg_da_xpon_rx_sigdet_pwdb(val)   REG_FLD_VAL(SS_DA_XPON_PWDB_1_FLD_rg_da_xpon_rx_sigdet_pwdb, (val))

#define SS_LCPLL_0_VAL_tdc_sync_pcw_ncpo_chg(val)              REG_FLD_VAL(SS_LCPLL_0_FLD_tdc_sync_pcw_ncpo_chg, (val))
#define SS_LCPLL_0_VAL_eee_lcpll_hold(val)                     REG_FLD_VAL(SS_LCPLL_0_FLD_eee_lcpll_hold, (val))

#define SS_LCPLL_1_VAL_tdc_sync_pcw_ncpo(val)                  REG_FLD_VAL(SS_LCPLL_1_FLD_tdc_sync_pcw_ncpo, (val))

#define SS_LCPLL_2_VAL_lcpll_top_flagh_en(val)                 REG_FLD_VAL(SS_LCPLL_2_FLD_lcpll_top_flagh_en, (val))
#define SS_LCPLL_2_VAL_lcpll_top_flagl_en(val)                 REG_FLD_VAL(SS_LCPLL_2_FLD_lcpll_top_flagl_en, (val))
#define SS_LCPLL_2_VAL_flagh_sel(val)                          REG_FLD_VAL(SS_LCPLL_2_FLD_flagh_sel, (val))
#define SS_LCPLL_2_VAL_flagl_sel(val)                          REG_FLD_VAL(SS_LCPLL_2_FLD_flagl_sel, (val))

#define ADD_DIG_RESERVE_0_VAL_rg_dig_reserve_0(val)            REG_FLD_VAL(ADD_DIG_RESERVE_0_FLD_rg_dig_reserve_0, (val))

#define ADD_DIG_RESERVE_1_VAL_rg_dig_reserve_1(val)            REG_FLD_VAL(ADD_DIG_RESERVE_1_FLD_rg_dig_reserve_1, (val))

#define ADD_DIG_RESERVE_2_VAL_rg_dig_reserve_2(val)            REG_FLD_VAL(ADD_DIG_RESERVE_2_FLD_rg_dig_reserve_2, (val))

#define ADD_DIG_RESERVE_3_VAL_rg_dig_reserve_3(val)            REG_FLD_VAL(ADD_DIG_RESERVE_3_FLD_rg_dig_reserve_3, (val))

#define ADD_DIG_RESERVE_4_VAL_rg_dig_reserve_4(val)            REG_FLD_VAL(ADD_DIG_RESERVE_4_FLD_rg_dig_reserve_4, (val))

#define RG_XPON_RX_RESERVED_1_VAL_rg_xpon_rx_rate_ctrl(val)    REG_FLD_VAL(RG_XPON_RX_RESERVED_1_FLD_rg_xpon_rx_rate_ctrl, (val))

#define ADD_DIG_RO_RESERVE_0_VAL_ro_dig_reserve_0(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_0_FLD_ro_dig_reserve_0, (val))

#define ADD_DIG_RO_RESERVE_1_VAL_ro_dig_reserve_1(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_1_FLD_ro_dig_reserve_1, (val))

#define ADD_DIG_RO_RESERVE_2_VAL_ro_dig_reserve_2(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_2_FLD_ro_dig_reserve_2, (val))

#define ADD_DIG_RO_RESERVE_3_VAL_ro_dig_reserve_3(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_3_FLD_ro_dig_reserve_3, (val))

#define ADD_DIG_RO_RESERVE_4_VAL_ro_dig_reserve_4(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_4_FLD_ro_dig_reserve_4, (val))

#define ADD_RX_SYS_EN_SEL_0_VAL_rg_rx_sys_en(val)              REG_FLD_VAL(ADD_RX_SYS_EN_SEL_0_FLD_rg_rx_sys_en, (val))
#define ADD_RX_SYS_EN_SEL_0_VAL_rg_da_rx_sys_en_sel(val)       REG_FLD_VAL(ADD_RX_SYS_EN_SEL_0_FLD_rg_da_rx_sys_en_sel, (val))

#define PLL_TDC_FREQDET_0_VAL_rg_pll_unlock_cyclecnt(val)      REG_FLD_VAL(PLL_TDC_FREQDET_0_FLD_rg_pll_unlock_cyclecnt, (val))
#define PLL_TDC_FREQDET_0_VAL_rg_pll_lock_cyclecnt(val)        REG_FLD_VAL(PLL_TDC_FREQDET_0_FLD_rg_pll_lock_cyclecnt, (val))

#define PLL_TDC_FREQDET_1_VAL_rg_pll_lock_target_end(val)      REG_FLD_VAL(PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_end, (val))
#define PLL_TDC_FREQDET_1_VAL_rg_pll_lock_target_beg(val)      REG_FLD_VAL(PLL_TDC_FREQDET_1_FLD_rg_pll_lock_target_beg, (val))

#define PLL_TDC_FREQDET_2_VAL_rg_pll_unlock_target_end(val)    REG_FLD_VAL(PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_end, (val))
#define PLL_TDC_FREQDET_2_VAL_rg_pll_unlock_target_beg(val)    REG_FLD_VAL(PLL_TDC_FREQDET_2_FLD_rg_pll_unlock_target_beg, (val))

#define PLL_TDC_FREQDET_3_VAL_rg_pll_wait_100us(val)           REG_FLD_VAL(PLL_TDC_FREQDET_3_FLD_rg_pll_wait_100us, (val))
#define PLL_TDC_FREQDET_3_VAL_rg_pll_unlockth(val)             REG_FLD_VAL(PLL_TDC_FREQDET_3_FLD_rg_pll_unlockth, (val))
#define PLL_TDC_FREQDET_3_VAL_rg_pll_lock_lockth(val)          REG_FLD_VAL(PLL_TDC_FREQDET_3_FLD_rg_pll_lock_lockth, (val))
#define PLL_TDC_FREQDET_3_VAL_rg_pll_lock_cnt_clear(val)       REG_FLD_VAL(PLL_TDC_FREQDET_3_FLD_rg_pll_lock_cnt_clear, (val))
#define PLL_TDC_FREQDET_3_VAL_rg_pll_freqlock_det_en(val)      REG_FLD_VAL(PLL_TDC_FREQDET_3_FLD_rg_pll_freqlock_det_en, (val))

#define DA_XPON_TX_FORCE_0_VAL_rg_force_tx_ck_en(val)          REG_FLD_VAL(DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ck_en, (val))
#define DA_XPON_TX_FORCE_0_VAL_rg_disb_tx_ck_en(val)           REG_FLD_VAL(DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ck_en, (val))
#define DA_XPON_TX_FORCE_0_VAL_rg_force_tx_ldo_lpf_en(val)     REG_FLD_VAL(DA_XPON_TX_FORCE_0_FLD_rg_force_tx_ldo_lpf_en, (val))
#define DA_XPON_TX_FORCE_0_VAL_rg_disb_tx_ldo_lpf_en(val)      REG_FLD_VAL(DA_XPON_TX_FORCE_0_FLD_rg_disb_tx_ldo_lpf_en, (val))

#define DA_XPON_TX_FORCE_1_VAL_rg_disb_da_xpon_tx_data_ben(val) REG_FLD_VAL(DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data_ben, (val))
#define DA_XPON_TX_FORCE_1_VAL_rg_disb_da_xpon_tx_data(val)    REG_FLD_VAL(DA_XPON_TX_FORCE_1_FLD_rg_disb_da_xpon_tx_data, (val))
#define DA_XPON_TX_FORCE_1_VAL_rg_force_tx_hsdata_en(val)      REG_FLD_VAL(DA_XPON_TX_FORCE_1_FLD_rg_force_tx_hsdata_en, (val))
#define DA_XPON_TX_FORCE_1_VAL_rg_disb_tx_hsdata_en(val)       REG_FLD_VAL(DA_XPON_TX_FORCE_1_FLD_rg_disb_tx_hsdata_en, (val))

#define DA_XPON_TX_FORCE_2_VAL_rg_force_da_xpon_tx_data_ben(val) REG_FLD_VAL(DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data_ben, (val))
#define DA_XPON_TX_FORCE_2_VAL_rg_force_da_xpon_tx_data(val)   REG_FLD_VAL(DA_XPON_TX_FORCE_2_FLD_rg_force_da_xpon_tx_data, (val))

#define RX_FORCE_MODE_10_VAL_rg_disb_status_rx_rst_b(val)      REG_FLD_VAL(RX_FORCE_MODE_10_FLD_rg_disb_status_rx_rst_b, (val))
#define RX_FORCE_MODE_10_VAL_rg_force_status_rx_rst_b(val)     REG_FLD_VAL(RX_FORCE_MODE_10_FLD_rg_force_status_rx_rst_b, (val))

#define ADD_CLKPATH_RST_0_VAL_rg_xpon_pma_probe_sel(val)       REG_FLD_VAL(ADD_CLKPATH_RST_0_FLD_rg_xpon_pma_probe_sel, (val))
#define ADD_CLKPATH_RST_0_VAL_rg_tdc_lck2ref_sel(val)          REG_FLD_VAL(ADD_CLKPATH_RST_0_FLD_rg_tdc_lck2ref_sel, (val))
#define ADD_CLKPATH_RST_0_VAL_rg_clkpath_rstb_ck(val)          REG_FLD_VAL(ADD_CLKPATH_RST_0_FLD_rg_clkpath_rstb_ck, (val))
#define ADD_CLKPATH_RST_0_VAL_rg_clkpath_rst_en(val)           REG_FLD_VAL(ADD_CLKPATH_RST_0_FLD_rg_clkpath_rst_en, (val))

#define ADD_XPON_MODE_1_VAL_rg_r2t_fifo_en(val)                REG_FLD_VAL(ADD_XPON_MODE_1_FLD_rg_r2t_fifo_en, (val))
#define ADD_XPON_MODE_1_VAL_rg_tx_bist_gen_en(val)             REG_FLD_VAL(ADD_XPON_MODE_1_FLD_rg_tx_bist_gen_en, (val))
#define ADD_XPON_MODE_1_VAL_rg_xfi_rx_mode(val)                REG_FLD_VAL(ADD_XPON_MODE_1_FLD_rg_xfi_rx_mode, (val))
#define ADD_XPON_MODE_1_VAL_rg_r2t_mode(val)                   REG_FLD_VAL(ADD_XPON_MODE_1_FLD_rg_r2t_mode, (val))
#define ADD_XPON_MODE_1_VAL_rg_xfi_tx_mode(val)                REG_FLD_VAL(ADD_XPON_MODE_1_FLD_rg_xfi_tx_mode, (val))
#define ADD_XPON_MODE_1_VAL_rg_xpon_mode(val)                  REG_FLD_VAL(ADD_XPON_MODE_1_FLD_rg_xpon_mode, (val))

#define ADD_R2T_MODE_1_VAL_rg_rx_asic_uses_ff(val)             REG_FLD_VAL(ADD_R2T_MODE_1_FLD_rg_rx_asic_uses_ff, (val))
#define ADD_R2T_MODE_1_VAL_rg_rx_afifo_adj(val)                REG_FLD_VAL(ADD_R2T_MODE_1_FLD_rg_rx_afifo_adj, (val))
#define ADD_R2T_MODE_1_VAL_rg_r2t_asic_uses_ff(val)            REG_FLD_VAL(ADD_R2T_MODE_1_FLD_rg_r2t_asic_uses_ff, (val))
#define ADD_R2T_MODE_1_VAL_rg_r2t_afifo_adj(val)               REG_FLD_VAL(ADD_R2T_MODE_1_FLD_rg_r2t_afifo_adj, (val))

#define ADD_T2R_MODE_1_VAL_rg_tx_asic_uses_ff(val)             REG_FLD_VAL(ADD_T2R_MODE_1_FLD_rg_tx_asic_uses_ff, (val))
#define ADD_T2R_MODE_1_VAL_rg_tx_afifo_adj(val)                REG_FLD_VAL(ADD_T2R_MODE_1_FLD_rg_tx_afifo_adj, (val))
#define ADD_T2R_MODE_1_VAL_rg_t2r_asic_uses_ff(val)            REG_FLD_VAL(ADD_T2R_MODE_1_FLD_rg_t2r_asic_uses_ff, (val))
#define ADD_T2R_MODE_1_VAL_rg_t2r_afifo_adj(val)               REG_FLD_VAL(ADD_T2R_MODE_1_FLD_rg_t2r_afifo_adj, (val))
#define ADD_T2R_MODE_1_VAL_rg_xpon_t2r_bist_mode(val)          REG_FLD_VAL(ADD_T2R_MODE_1_FLD_rg_xpon_t2r_bist_mode, (val))
#define ADD_T2R_MODE_1_VAL_rg_t2r_fifo_en(val)                 REG_FLD_VAL(ADD_T2R_MODE_1_FLD_rg_t2r_fifo_en, (val))

#define ADD_LCPLL_RO_1_VAL_ro_rx_sequence(val)                 REG_FLD_VAL(ADD_LCPLL_RO_1_FLD_ro_rx_sequence, (val))
#define ADD_LCPLL_RO_1_VAL_ro_pll_fbck_lock2(val)              REG_FLD_VAL(ADD_LCPLL_RO_1_FLD_ro_pll_fbck_lock2, (val))
#define ADD_LCPLL_RO_1_VAL_ro_lcpll_ck_stb(val)                REG_FLD_VAL(ADD_LCPLL_RO_1_FLD_ro_lcpll_ck_stb, (val))
#define ADD_LCPLL_RO_1_VAL_ro_tdc_ck_stb(val)                  REG_FLD_VAL(ADD_LCPLL_RO_1_FLD_ro_tdc_ck_stb, (val))

#define ADD_RO_RX2ANA_1_VAL_ro_rx_dac_e0(val)                  REG_FLD_VAL(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_e0, (val))
#define ADD_RO_RX2ANA_1_VAL_ro_rx_dac_d1(val)                  REG_FLD_VAL(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d1, (val))
#define ADD_RO_RX2ANA_1_VAL_ro_rx_dac_d0(val)                  REG_FLD_VAL(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_d0, (val))
#define ADD_RO_RX2ANA_1_VAL_ro_rx_dac_eye(val)                 REG_FLD_VAL(ADD_RO_RX2ANA_1_FLD_ro_rx_dac_eye, (val))

#define ADD_RO_RX2ANA_2_VAL_ro_da_xpon_rx_sigdet_os(val)       REG_FLD_VAL(ADD_RO_RX2ANA_2_FLD_ro_da_xpon_rx_sigdet_os, (val))
#define ADD_RO_RX2ANA_2_VAL_ro_rx_blwc_offset(val)             REG_FLD_VAL(ADD_RO_RX2ANA_2_FLD_ro_rx_blwc_offset, (val))
#define ADD_RO_RX2ANA_2_VAL_ro_rx_feos_out(val)                REG_FLD_VAL(ADD_RO_RX2ANA_2_FLD_ro_rx_feos_out, (val))
#define ADD_RO_RX2ANA_2_VAL_ro_rx_dac_e1(val)                  REG_FLD_VAL(ADD_RO_RX2ANA_2_FLD_ro_rx_dac_e1, (val))

#define ADD_RO_RX2ANA_3_VAL_ro_rx_fifo_full_cnt(val)           REG_FLD_VAL(ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_full_cnt, (val))
#define ADD_RO_RX2ANA_3_VAL_ro_rx_fifo_empty_cnt(val)          REG_FLD_VAL(ADD_RO_RX2ANA_3_FLD_ro_rx_fifo_empty_cnt, (val))
#define ADD_RO_RX2ANA_3_VAL_ro_rx_pi_cal_data_out(val)         REG_FLD_VAL(ADD_RO_RX2ANA_3_FLD_ro_rx_pi_cal_data_out, (val))

#define ADD_RO_R2TMODE_1_VAL_ro_r2t_fifo_empty_cnt(val)        REG_FLD_VAL(ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_empty_cnt, (val))
#define ADD_RO_R2TMODE_1_VAL_ro_r2t_fifo_full_cnt(val)         REG_FLD_VAL(ADD_RO_R2TMODE_1_FLD_ro_r2t_fifo_full_cnt, (val))
#define ADD_RO_R2TMODE_1_VAL_ro_r2t_data_afifo(val)            REG_FLD_VAL(ADD_RO_R2TMODE_1_FLD_ro_r2t_data_afifo, (val))

#define RG_LCPLL_XPON_CMN_STB_CTRL_0_VAL_rg_xpon_cmn_force_on(val) REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_force_on, (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_VAL_rg_xpon_cmn_man_pwdb(val) REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_man_pwdb, (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_0_VAL_rg_xpon_cmn_en_timer(val) REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_0_FLD_rg_xpon_cmn_en_timer, (val))

#define RG_LCPLL_XPON_CMN_STB_CTRL_1_VAL_rg_tx_hsdata_en_ext_mode(val) REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_hsdata_en_ext_mode, (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_VAL_rg_tx_d_toggle_en(val) REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_tx_d_toggle_en, (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_VAL_rg_xpon_cmn_inv(val)  REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_inv, (val))
#define RG_LCPLL_XPON_CMN_STB_CTRL_1_VAL_rg_xpon_cmn_hw_ctrl_mode(val) REG_FLD_VAL(RG_LCPLL_XPON_CMN_STB_CTRL_1_FLD_rg_xpon_cmn_hw_ctrl_mode, (val))

#define RG_TX_HSDATA_EN_EXT_CNT_0_VAL_rg_tx_hsdata_en_cnt(val) REG_FLD_VAL(RG_TX_HSDATA_EN_EXT_CNT_0_FLD_rg_tx_hsdata_en_cnt, (val))

#define PON_TX_COUNTER_0_VAL_rg_txcalib_5us(val)               REG_FLD_VAL(PON_TX_COUNTER_0_FLD_rg_txcalib_5us, (val))
#define PON_TX_COUNTER_0_VAL_rg_txcalib_50us(val)              REG_FLD_VAL(PON_TX_COUNTER_0_FLD_rg_txcalib_50us, (val))

#define PON_TX_COUNTER_1_VAL_rg_tx_hsdata_en_wait(val)         REG_FLD_VAL(PON_TX_COUNTER_1_FLD_rg_tx_hsdata_en_wait, (val))
#define PON_TX_COUNTER_1_VAL_rg_tx_ck_en_wait(val)             REG_FLD_VAL(PON_TX_COUNTER_1_FLD_rg_tx_ck_en_wait, (val))

#define PON_TX_COUNTER_2_VAL_rg_tx_serdes_rdy_wait(val)        REG_FLD_VAL(PON_TX_COUNTER_2_FLD_rg_tx_serdes_rdy_wait, (val))
#define PON_TX_COUNTER_2_VAL_rg_tx_power_on_wait(val)          REG_FLD_VAL(PON_TX_COUNTER_2_FLD_rg_tx_power_on_wait, (val))

#define PON_TX_COUNTER_3_VAL_ro_tx_serdes_rdy(val)             REG_FLD_VAL(PON_TX_COUNTER_3_FLD_ro_tx_serdes_rdy, (val))

#define PON_CK_SET_VAL_rg_txck_inv(val)                        REG_FLD_VAL(PON_CK_SET_FLD_rg_txck_inv, (val))
#define PON_CK_SET_VAL_rg_rxck_inv(val)                        REG_FLD_VAL(PON_CK_SET_FLD_rg_rxck_inv, (val))
#define PON_CK_SET_VAL_rg_rxck_sync_inv(val)                   REG_FLD_VAL(PON_CK_SET_FLD_rg_rxck_sync_inv, (val))
#define PON_CK_SET_VAL_rg_rxck_dbg_inv(val)                    REG_FLD_VAL(PON_CK_SET_FLD_rg_rxck_dbg_inv, (val))
#define PON_CK_SET_VAL_rg_force_ck_g(val)                      REG_FLD_VAL(PON_CK_SET_FLD_rg_force_ck_g, (val))
#define PON_CK_SET_VAL_rg_force_e_txmode(val)                  REG_FLD_VAL(PON_CK_SET_FLD_rg_force_e_txmode, (val))
#define PON_CK_SET_VAL_rg_force_xg_txmode(val)                 REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_txmode, (val))
#define PON_CK_SET_VAL_rg_force_xe_mode(val)                   REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xe_mode, (val))
#define PON_CK_SET_VAL_rg_force_xg_mode(val)                   REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_mode, (val))
#define PON_CK_SET_VAL_rg_force_ge_mode(val)                   REG_FLD_VAL(PON_CK_SET_FLD_rg_force_ge_mode, (val))
#define PON_CK_SET_VAL_rg_force_e_mode(val)                    REG_FLD_VAL(PON_CK_SET_FLD_rg_force_e_mode, (val))
#define PON_CK_SET_VAL_rg_force_g_mode(val)                    REG_FLD_VAL(PON_CK_SET_FLD_rg_force_g_mode, (val))
#define PON_CK_SET_VAL_rg_force_xg_rxmapmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_rxmapmodesel, (val))
#define PON_CK_SET_VAL_rg_force_ge_rxmapmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_ge_rxmapmodesel, (val))
#define PON_CK_SET_VAL_rg_force_xe_txmapmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xe_txmapmodesel, (val))
#define PON_CK_SET_VAL_rg_force_xg_txmapmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_txmapmodesel, (val))
#define PON_CK_SET_VAL_rg_force_ge_txmapmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_ge_txmapmodesel, (val))
#define PON_CK_SET_VAL_rg_force_xg_rxpcsmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_rxpcsmodesel, (val))
#define PON_CK_SET_VAL_rg_force_ge_rxpcsmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_ge_rxpcsmodesel, (val))
#define PON_CK_SET_VAL_rg_force_xe_txpcsmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xe_txpcsmodesel, (val))
#define PON_CK_SET_VAL_rg_force_xg_txpcsmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_txpcsmodesel, (val))
#define PON_CK_SET_VAL_rg_force_ge_txpcsmodesel(val)           REG_FLD_VAL(PON_CK_SET_FLD_rg_force_ge_txpcsmodesel, (val))
#define PON_CK_SET_VAL_rg_force_xg_txpcsdiv2modesel(val)       REG_FLD_VAL(PON_CK_SET_FLD_rg_force_xg_txpcsdiv2modesel, (val))
#define PON_CK_SET_VAL_rg_force_bg_rx(val)                     REG_FLD_VAL(PON_CK_SET_FLD_rg_force_bg_rx, (val))
#define PON_CK_SET_VAL_rg_force_bg_tx(val)                     REG_FLD_VAL(PON_CK_SET_FLD_rg_force_bg_tx, (val))

#define TX_FIFO_MODE_SEL_VAL_rg_xfi_phyck_inv(val)             REG_FLD_VAL(TX_FIFO_MODE_SEL_FLD_rg_xfi_phyck_inv, (val))
#define TX_FIFO_MODE_SEL_VAL_rg_tx_afifo_mode(val)             REG_FLD_VAL(TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_mode, (val))
#define TX_FIFO_MODE_SEL_VAL_rg_tx_afifo_en(val)               REG_FLD_VAL(TX_FIFO_MODE_SEL_FLD_rg_tx_afifo_en, (val))

#define XPON_PLL_STB_CNT_VAL_rg_xpon_pll_stb_cnt(val)          REG_FLD_VAL(XPON_PLL_STB_CNT_FLD_rg_xpon_pll_stb_cnt, (val))

#define XPON_PLL_STOP_CNT_VAL_rg_xpon_pll_stop_cnt(val)        REG_FLD_VAL(XPON_PLL_STOP_CNT_FLD_rg_xpon_pll_stop_cnt, (val))

#define SW_RST_SET_VAL_rg_sw_xfi_rxmac_rst_n(val)              REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_xfi_rxmac_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_xfi_txmac_rst_n(val)              REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_xfi_txmac_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_ponolt_rxmac_rst_n(val)           REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_ponolt_rxmac_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_ponolt_rxpcs_rst_n(val)           REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_ponolt_rxpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_ponolt_txmac_rst_n(val)           REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_ponolt_txmac_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_ponolt_txpcs_rst_n(val)           REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_ponolt_txpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_hsg_rxpcs_rst_n(val)              REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_hsg_rxpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_hsg_txpcs_rst_n(val)              REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_hsg_txpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_xfi_rxpcs_bist_rst_n(val)         REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_xfi_rxpcs_bist_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_xfi_rxpcs_rst_n(val)              REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_xfi_rxpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_xfi_txpcs_rst_n(val)              REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_xfi_txpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_tx_fifo_rst_n(val)                REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_tx_fifo_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_ref_rst_n(val)                    REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_ref_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_allpcs_rst_n(val)                 REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_allpcs_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_pma_rst_n(val)                    REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_pma_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_tx_rst_n(val)                     REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_tx_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_rx_rst_n(val)                     REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_rx_rst_n, (val))
#define SW_RST_SET_VAL_rg_sw_rx_fifo_rst_n(val)                REG_FLD_VAL(SW_RST_SET_FLD_rg_sw_rx_fifo_rst_n, (val))

#define ADD_RO_TX2ANA_1_VAL_ro_tx_fifo_full_cnt(val)           REG_FLD_VAL(ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_full_cnt, (val))
#define ADD_RO_TX2ANA_1_VAL_ro_tx_fifo_empty_cnt(val)          REG_FLD_VAL(ADD_RO_TX2ANA_1_FLD_ro_tx_fifo_empty_cnt, (val))

#define TX_DLY_CTRL_VAL_rg_outben_data_mode(val)               REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_outben_data_mode, (val))
#define TX_DLY_CTRL_VAL_rg_tx_non_reverse_gpon(val)            REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_tx_non_reverse_gpon, (val))
#define TX_DLY_CTRL_VAL_rg_rx_non_reverse_gpon(val)            REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_rx_non_reverse_gpon, (val))
#define TX_DLY_CTRL_VAL_rg_tx_non_reverse_epon(val)            REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_tx_non_reverse_epon, (val))
#define TX_DLY_CTRL_VAL_rg_rx_non_reverse_epon(val)            REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_rx_non_reverse_epon, (val))
#define TX_DLY_CTRL_VAL_rg_tx_ben_exten_ftune(val)             REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_tx_ben_exten_ftune, (val))
#define TX_DLY_CTRL_VAL_rg_txben_pre_post_zero_en(val)         REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_txben_pre_post_zero_en, (val))
#define TX_DLY_CTRL_VAL_rg_tx_dly_ben_ftune(val)               REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_tx_dly_ben_ftune, (val))
#define TX_DLY_CTRL_VAL_rg_tx_dly_data_ftune(val)              REG_FLD_VAL(TX_DLY_CTRL_FLD_rg_tx_dly_data_ftune, (val))

#define MEM_WRAPPER_CTRL_VAL_rg_rx_pma_fifo_pd(val)            REG_FLD_VAL(MEM_WRAPPER_CTRL_FLD_rg_rx_pma_fifo_pd, (val))
#define MEM_WRAPPER_CTRL_VAL_rg_tx_pma_fifo_pd(val)            REG_FLD_VAL(MEM_WRAPPER_CTRL_FLD_rg_tx_pma_fifo_pd, (val))
#define MEM_WRAPPER_CTRL_VAL_rg_gfifo_fec_mem_pd(val)          REG_FLD_VAL(MEM_WRAPPER_CTRL_FLD_rg_gfifo_fec_mem_pd, (val))
#define MEM_WRAPPER_CTRL_VAL_rg_up_md32_wrap_pd(val)           REG_FLD_VAL(MEM_WRAPPER_CTRL_FLD_rg_up_md32_wrap_pd, (val))

#define XPON_INT_EN_2_VAL_rg_pma_rx_afifo_full_int_en(val)     REG_FLD_VAL(XPON_INT_EN_2_FLD_rg_pma_rx_afifo_full_int_en, (val))
#define XPON_INT_EN_2_VAL_rg_pma_rx_afifo_empty_int_en(val)    REG_FLD_VAL(XPON_INT_EN_2_FLD_rg_pma_rx_afifo_empty_int_en, (val))
#define XPON_INT_EN_2_VAL_rg_pma_tx_afifo_full_int_en(val)     REG_FLD_VAL(XPON_INT_EN_2_FLD_rg_pma_tx_afifo_full_int_en, (val))
#define XPON_INT_EN_2_VAL_rg_pma_tx_afifo_empty_int_en(val)    REG_FLD_VAL(XPON_INT_EN_2_FLD_rg_pma_tx_afifo_empty_int_en, (val))

#define XPON_INT_EN_3_VAL_rg_trans_laser_on_int_en(val)        REG_FLD_VAL(XPON_INT_EN_3_FLD_rg_trans_laser_on_int_en, (val))
#define XPON_INT_EN_3_VAL_rg_rx_sigdet_int_en(val)             REG_FLD_VAL(XPON_INT_EN_3_FLD_rg_rx_sigdet_int_en, (val))
#define XPON_INT_EN_3_VAL_rg_rx_freqdet_unlock_int_en(val)     REG_FLD_VAL(XPON_INT_EN_3_FLD_rg_rx_freqdet_unlock_int_en, (val))
#define XPON_INT_EN_3_VAL_rg_tx_freqdet_unlock_int_en(val)     REG_FLD_VAL(XPON_INT_EN_3_FLD_rg_tx_freqdet_unlock_int_en, (val))

#define XPON_INT_STA_2_VAL_pma_rx_afifo_full_int(val)          REG_FLD_VAL(XPON_INT_STA_2_FLD_pma_rx_afifo_full_int, (val))
#define XPON_INT_STA_2_VAL_pma_rx_afifo_empty_int(val)         REG_FLD_VAL(XPON_INT_STA_2_FLD_pma_rx_afifo_empty_int, (val))
#define XPON_INT_STA_2_VAL_pma_tx_afifo_full_int(val)          REG_FLD_VAL(XPON_INT_STA_2_FLD_pma_tx_afifo_full_int, (val))
#define XPON_INT_STA_2_VAL_pma_tx_afifo_empty_int(val)         REG_FLD_VAL(XPON_INT_STA_2_FLD_pma_tx_afifo_empty_int, (val))

#define XPON_INT_STA_3_VAL_trans_laser_on_int(val)             REG_FLD_VAL(XPON_INT_STA_3_FLD_trans_laser_on_int, (val))
#define XPON_INT_STA_3_VAL_rx_sigdet_int(val)                  REG_FLD_VAL(XPON_INT_STA_3_FLD_rx_sigdet_int, (val))
#define XPON_INT_STA_3_VAL_rx_freqdet_unlock_int(val)          REG_FLD_VAL(XPON_INT_STA_3_FLD_rx_freqdet_unlock_int, (val))
#define XPON_INT_STA_3_VAL_tx_freqdet_unlock_int(val)          REG_FLD_VAL(XPON_INT_STA_3_FLD_tx_freqdet_unlock_int, (val))

#define XPON_SD_BEHAVIOR_SETTING_0_VAL_rg_trans_rogue_onu_cnt(val) REG_FLD_VAL(XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_rogue_onu_cnt, (val))
#define XPON_SD_BEHAVIOR_SETTING_0_VAL_rg_trans_sd_fail_cnt(val) REG_FLD_VAL(XPON_SD_BEHAVIOR_SETTING_0_FLD_rg_trans_sd_fail_cnt, (val))

#define XPON_SD_BEHAVIOR_SETTING_1_VAL_rg_trans_rogue_onu_cnt_clr(val) REG_FLD_VAL(XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_rogue_onu_cnt_clr, (val))
#define XPON_SD_BEHAVIOR_SETTING_1_VAL_rg_trans_sd_fail_cnt_clr(val) REG_FLD_VAL(XPON_SD_BEHAVIOR_SETTING_1_FLD_rg_trans_sd_fail_cnt_clr, (val))

#define XPON_SD_BEHAVIOR_STA_VAL_ro_trans_rogue_onu_cnt(val)   REG_FLD_VAL(XPON_SD_BEHAVIOR_STA_FLD_ro_trans_rogue_onu_cnt, (val))
#define XPON_SD_BEHAVIOR_STA_VAL_ro_trans_sd_fail_cnt(val)     REG_FLD_VAL(XPON_SD_BEHAVIOR_STA_FLD_ro_trans_sd_fail_cnt, (val))

#define RX_EXTRAL_CTRL_VAL_rg_abnormal_cnt(val)                REG_FLD_VAL(RX_EXTRAL_CTRL_FLD_rg_abnormal_cnt, (val))
#define RX_EXTRAL_CTRL_VAL_rg_blwc_opt(val)                    REG_FLD_VAL(RX_EXTRAL_CTRL_FLD_rg_blwc_opt, (val))
#define RX_EXTRAL_CTRL_VAL_rg_l2d_trig_eq_en_time(val)         REG_FLD_VAL(RX_EXTRAL_CTRL_FLD_rg_l2d_trig_eq_en_time, (val))
#define RX_EXTRAL_CTRL_VAL_rg_heo_rdy_opt(val)                 REG_FLD_VAL(RX_EXTRAL_CTRL_FLD_rg_heo_rdy_opt, (val))
#define RX_EXTRAL_CTRL_VAL_rg_os_rdy_latch(val)                REG_FLD_VAL(RX_EXTRAL_CTRL_FLD_rg_os_rdy_latch, (val))
#define RX_EXTRAL_CTRL_VAL_rg_disb_leq(val)                    REG_FLD_VAL(RX_EXTRAL_CTRL_FLD_rg_disb_leq, (val))

#define RX_LEQ_DISB_CTRL0_VAL_rg_disb_leq_avg_en(val)          REG_FLD_VAL(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_avg_en, (val))
#define RX_LEQ_DISB_CTRL0_VAL_rg_disb_leq_leak_en(val)         REG_FLD_VAL(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_leak_en, (val))
#define RX_LEQ_DISB_CTRL0_VAL_rg_disb_leq_pf_ctrl(val)         REG_FLD_VAL(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_pf_ctrl, (val))
#define RX_LEQ_DISB_CTRL0_VAL_rg_disb_leq_len_ctrl(val)        REG_FLD_VAL(RX_LEQ_DISB_CTRL0_FLD_rg_disb_leq_len_ctrl, (val))

#define RX_LEQ_DISB_CTRL1_VAL_rg_disb_leq_rst_b(val)           REG_FLD_VAL(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_rst_b, (val))
#define RX_LEQ_DISB_CTRL1_VAL_rg_disb_leq_done(val)            REG_FLD_VAL(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_done, (val))
#define RX_LEQ_DISB_CTRL1_VAL_rg_disb_leq_en(val)              REG_FLD_VAL(RX_LEQ_DISB_CTRL1_FLD_rg_disb_leq_en, (val))

#define RX_LEQ_FORCE_CTRL0_VAL_rg_leq_avg_en(val)              REG_FLD_VAL(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_avg_en, (val))
#define RX_LEQ_FORCE_CTRL0_VAL_rg_leq_leak_en(val)             REG_FLD_VAL(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_leak_en, (val))
#define RX_LEQ_FORCE_CTRL0_VAL_rg_leq_pf_ctrl(val)             REG_FLD_VAL(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_pf_ctrl, (val))
#define RX_LEQ_FORCE_CTRL0_VAL_rg_leq_len_ctrl(val)            REG_FLD_VAL(RX_LEQ_FORCE_CTRL0_FLD_rg_leq_len_ctrl, (val))

#define RX_LEQ_FORCE_CTRL1_VAL_rg_abnormal_cnt_reset_disb(val) REG_FLD_VAL(RX_LEQ_FORCE_CTRL1_FLD_rg_abnormal_cnt_reset_disb, (val))
#define RX_LEQ_FORCE_CTRL1_VAL_rg_leq_rst_b(val)               REG_FLD_VAL(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_rst_b, (val))
#define RX_LEQ_FORCE_CTRL1_VAL_rg_leq_done(val)                REG_FLD_VAL(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_done, (val))
#define RX_LEQ_FORCE_CTRL1_VAL_rg_leq_en(val)                  REG_FLD_VAL(RX_LEQ_FORCE_CTRL1_FLD_rg_leq_en, (val))

#define RX_LEQ_ENTIME_CTRL0_VAL_rg_entime_leq_len_ctrl3(val)   REG_FLD_VAL(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl3, (val))
#define RX_LEQ_ENTIME_CTRL0_VAL_rg_entime_leq_len_ctrl2(val)   REG_FLD_VAL(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl2, (val))
#define RX_LEQ_ENTIME_CTRL0_VAL_rg_entime_leq_len_ctrl1(val)   REG_FLD_VAL(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl1, (val))
#define RX_LEQ_ENTIME_CTRL0_VAL_rg_entime_leq_len_ctrl0(val)   REG_FLD_VAL(RX_LEQ_ENTIME_CTRL0_FLD_rg_entime_leq_len_ctrl0, (val))

#define RX_LEQ_ENTIME_CTRL1_VAL_rg_entime_leq_pf_ctrl3(val)    REG_FLD_VAL(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl3, (val))
#define RX_LEQ_ENTIME_CTRL1_VAL_rg_entime_leq_pf_ctrl2(val)    REG_FLD_VAL(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl2, (val))
#define RX_LEQ_ENTIME_CTRL1_VAL_rg_entime_leq_pf_ctrl1(val)    REG_FLD_VAL(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl1, (val))
#define RX_LEQ_ENTIME_CTRL1_VAL_rg_entime_leq_pf_ctrl0(val)    REG_FLD_VAL(RX_LEQ_ENTIME_CTRL1_FLD_rg_entime_leq_pf_ctrl0, (val))

#define RX_LEQ_ENTIME_CTRL2_VAL_rg_entime_res(val)             REG_FLD_VAL(RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_res, (val))
#define RX_LEQ_ENTIME_CTRL2_VAL_rg_timeslot_res(val)           REG_FLD_VAL(RX_LEQ_ENTIME_CTRL2_FLD_rg_timeslot_res, (val))
#define RX_LEQ_ENTIME_CTRL2_VAL_rg_disentime_leq_leak_en(val)  REG_FLD_VAL(RX_LEQ_ENTIME_CTRL2_FLD_rg_disentime_leq_leak_en, (val))
#define RX_LEQ_ENTIME_CTRL2_VAL_rg_entime_leq_avg(val)         REG_FLD_VAL(RX_LEQ_ENTIME_CTRL2_FLD_rg_entime_leq_avg, (val))

#define RX_LEQ_CTRL0_VAL_rg_leq_init_set(val)                  REG_FLD_VAL(RX_LEQ_CTRL0_FLD_rg_leq_init_set, (val))
#define RX_LEQ_CTRL0_VAL_rg_leq_init_val(val)                  REG_FLD_VAL(RX_LEQ_CTRL0_FLD_rg_leq_init_val, (val))
#define RX_LEQ_CTRL0_VAL_rg_leq_gain(val)                      REG_FLD_VAL(RX_LEQ_CTRL0_FLD_rg_leq_gain, (val))
#define RX_LEQ_CTRL0_VAL_rg_leq_update_pause(val)              REG_FLD_VAL(RX_LEQ_CTRL0_FLD_rg_leq_update_pause, (val))

#define RX_LEQ_CTRL1_VAL_rg_leq_leak_target(val)               REG_FLD_VAL(RX_LEQ_CTRL1_FLD_rg_leq_leak_target, (val))
#define RX_LEQ_CTRL1_VAL_rg_leq_leak_gain(val)                 REG_FLD_VAL(RX_LEQ_CTRL1_FLD_rg_leq_leak_gain, (val))
#define RX_LEQ_CTRL1_VAL_rg_leq_bot_lim(val)                   REG_FLD_VAL(RX_LEQ_CTRL1_FLD_rg_leq_bot_lim, (val))
#define RX_LEQ_CTRL1_VAL_rg_leq_top_lim(val)                   REG_FLD_VAL(RX_LEQ_CTRL1_FLD_rg_leq_top_lim, (val))

#define RX_LEQ_CTRL2_VAL_rg_leq_gray_out_en(val)               REG_FLD_VAL(RX_LEQ_CTRL2_FLD_rg_leq_gray_out_en, (val))
#define RX_LEQ_CTRL2_VAL_rg_leq_avg_cycle(val)                 REG_FLD_VAL(RX_LEQ_CTRL2_FLD_rg_leq_avg_cycle, (val))

#define RX_LEQ_RO0_VAL_ro_abnormal_cnt(val)                    REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_abnormal_cnt, (val))
#define RX_LEQ_RO0_VAL_ro_eq_rdy(val)                          REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_eq_rdy, (val))
#define RX_LEQ_RO0_VAL_ro_leq_updn(val)                        REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_updn, (val))
#define RX_LEQ_RO0_VAL_ro_leq_avg_en(val)                      REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_avg_en, (val))
#define RX_LEQ_RO0_VAL_ro_leq_leak_en(val)                     REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_leak_en, (val))
#define RX_LEQ_RO0_VAL_ro_leq_pf_ctrl(val)                     REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_pf_ctrl, (val))
#define RX_LEQ_RO0_VAL_ro_leq_len_ctrl(val)                    REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_len_ctrl, (val))
#define RX_LEQ_RO0_VAL_ro_eq_en(val)                           REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_eq_en, (val))
#define RX_LEQ_RO0_VAL_ro_eq_done(val)                         REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_eq_done, (val))
#define RX_LEQ_RO0_VAL_ro_leq_en(val)                          REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_en, (val))
#define RX_LEQ_RO0_VAL_ro_leq_rst_b(val)                       REG_FLD_VAL(RX_LEQ_RO0_FLD_ro_leq_rst_b, (val))

#define RX_LEQ_RO1_VAL_ro_eq_time_slot(val)                    REG_FLD_VAL(RX_LEQ_RO1_FLD_ro_eq_time_slot, (val))
#define RX_LEQ_RO1_VAL_ro_leq_time_slot(val)                   REG_FLD_VAL(RX_LEQ_RO1_FLD_ro_leq_time_slot, (val))

#define PLL_FT_FREQDET_0_VAL_rg_pll_ft_unlock_cyclecnt(val)    REG_FLD_VAL(PLL_FT_FREQDET_0_FLD_rg_pll_ft_unlock_cyclecnt, (val))
#define PLL_FT_FREQDET_0_VAL_rg_pll_ft_lock_cyclecnt(val)      REG_FLD_VAL(PLL_FT_FREQDET_0_FLD_rg_pll_ft_lock_cyclecnt, (val))

#define PLL_FT_FREQDET_1_VAL_rg_pll_ft_lock_target_end(val)    REG_FLD_VAL(PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_end, (val))
#define PLL_FT_FREQDET_1_VAL_rg_pll_ft_lock_target_beg(val)    REG_FLD_VAL(PLL_FT_FREQDET_1_FLD_rg_pll_ft_lock_target_beg, (val))

#define PLL_FT_FREQDET_2_VAL_rg_pll_ft_unlock_target_end(val)  REG_FLD_VAL(PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_end, (val))
#define PLL_FT_FREQDET_2_VAL_rg_pll_ft_unlock_target_beg(val)  REG_FLD_VAL(PLL_FT_FREQDET_2_FLD_rg_pll_ft_unlock_target_beg, (val))

#define PLL_FT_FREQDET_3_VAL_rg_pll_ft_wait_100us(val)         REG_FLD_VAL(PLL_FT_FREQDET_3_FLD_rg_pll_ft_wait_100us, (val))
#define PLL_FT_FREQDET_3_VAL_rg_pll_ft_unlockth(val)           REG_FLD_VAL(PLL_FT_FREQDET_3_FLD_rg_pll_ft_unlockth, (val))
#define PLL_FT_FREQDET_3_VAL_rg_pll_ft_lock_lockth(val)        REG_FLD_VAL(PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_lockth, (val))
#define PLL_FT_FREQDET_3_VAL_rg_pll_ft_lock_cnt_clear(val)     REG_FLD_VAL(PLL_FT_FREQDET_3_FLD_rg_pll_ft_lock_cnt_clear, (val))
#define PLL_FT_FREQDET_3_VAL_rg_pll_ft_freqlock_det_en(val)    REG_FLD_VAL(PLL_FT_FREQDET_3_FLD_rg_pll_ft_freqlock_det_en, (val))

#define RO_RX_FREQDET_VAL_ro_fl_out(val)                       REG_FLD_VAL(RO_RX_FREQDET_FLD_ro_fl_out, (val))
#define RO_RX_FREQDET_VAL_ro_state_freqdet(val)                REG_FLD_VAL(RO_RX_FREQDET_FLD_ro_state_freqdet, (val))
#define RO_RX_FREQDET_VAL_ro_lslock_cnt(val)                   REG_FLD_VAL(RO_RX_FREQDET_FLD_ro_lslock_cnt, (val))
#define RO_RX_FREQDET_VAL_ro_fbck_lock_inner(val)              REG_FLD_VAL(RO_RX_FREQDET_FLD_ro_fbck_lock_inner, (val))
#define RO_RX_FREQDET_VAL_ro_fbck_lock(val)                    REG_FLD_VAL(RO_RX_FREQDET_FLD_ro_fbck_lock, (val))

#define RO_PLL_FREQDET_VAL_ro_pll_fl_out(val)                  REG_FLD_VAL(RO_PLL_FREQDET_FLD_ro_pll_fl_out, (val))
#define RO_PLL_FREQDET_VAL_ro_pll_state_freqdet(val)           REG_FLD_VAL(RO_PLL_FREQDET_FLD_ro_pll_state_freqdet, (val))
#define RO_PLL_FREQDET_VAL_ro_pll_lslock_cnt(val)              REG_FLD_VAL(RO_PLL_FREQDET_FLD_ro_pll_lslock_cnt, (val))
#define RO_PLL_FREQDET_VAL_ro_pll_fbck_lock_inner(val)         REG_FLD_VAL(RO_PLL_FREQDET_FLD_ro_pll_fbck_lock_inner, (val))
#define RO_PLL_FREQDET_VAL_ro_pll_fbck_lock(val)               REG_FLD_VAL(RO_PLL_FREQDET_FLD_ro_pll_fbck_lock, (val))

#define RO_PLL_FT_FREQDET_VAL_ro_pll_ft_fl_out(val)            REG_FLD_VAL(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fl_out, (val))
#define RO_PLL_FT_FREQDET_VAL_ro_pll_ft_state_freqdet(val)     REG_FLD_VAL(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_state_freqdet, (val))
#define RO_PLL_FT_FREQDET_VAL_ro_pll_ft_lslock_cnt(val)        REG_FLD_VAL(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_lslock_cnt, (val))
#define RO_PLL_FT_FREQDET_VAL_ro_pll_ft_fbck_lock_inner(val)   REG_FLD_VAL(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock_inner, (val))
#define RO_PLL_FT_FREQDET_VAL_ro_pll_ft_fbck_lock(val)         REG_FLD_VAL(RO_PLL_FT_FREQDET_FLD_ro_pll_ft_fbck_lock, (val))

#define RO_PMA_FREQDET_VAL_ro_pma_freq_cnt_lsb(val)            REG_FLD_VAL(RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_lsb, (val))
#define RO_PMA_FREQDET_VAL_ro_pma_freq_cnt_max(val)            REG_FLD_VAL(RO_PMA_FREQDET_FLD_ro_pma_freq_cnt_max, (val))

#define RG_PMA_FREQDET_VAL_rg_pma_freq_check_lsb(val)          REG_FLD_VAL(RG_PMA_FREQDET_FLD_rg_pma_freq_check_lsb, (val))
#define RG_PMA_FREQDET_VAL_rg_pma_freq_meter_sel(val)          REG_FLD_VAL(RG_PMA_FREQDET_FLD_rg_pma_freq_meter_sel, (val))

#define RG_EXT_BEN_DATA_VAL_rg_tx_loff_manu(val)               REG_FLD_VAL(RG_EXT_BEN_DATA_FLD_rg_tx_loff_manu, (val))

#define RG_PRE_BEN_DATA_VAL_rg_tx_bh_dl_dsel(val)              REG_FLD_VAL(RG_PRE_BEN_DATA_FLD_rg_tx_bh_dl_dsel, (val))
#define RG_PRE_BEN_DATA_VAL_rg_tx_lon_manu(val)                REG_FLD_VAL(RG_PRE_BEN_DATA_FLD_rg_tx_lon_manu, (val))

#define RX_TORGS_DEBUG_12_VAL_ro_injosc_rdy(val)               REG_FLD_VAL(RX_TORGS_DEBUG_12_FLD_ro_injosc_rdy, (val))
#define RX_TORGS_DEBUG_12_VAL_ro_kband_done(val)               REG_FLD_VAL(RX_TORGS_DEBUG_12_FLD_ro_kband_done, (val))
#define RX_TORGS_DEBUG_12_VAL_ro_y_index_o(val)                REG_FLD_VAL(RX_TORGS_DEBUG_12_FLD_ro_y_index_o, (val))
#define RX_TORGS_DEBUG_12_VAL_ro_x_index_o(val)                REG_FLD_VAL(RX_TORGS_DEBUG_12_FLD_ro_x_index_o, (val))

#define RO_FLL_ADC_0_VAL_rg_fll_dig_pro(val)                   REG_FLD_VAL(RO_FLL_ADC_0_FLD_rg_fll_dig_pro, (val))
#define RO_FLL_ADC_0_VAL_ro_adc_freq_output(val)               REG_FLD_VAL(RO_FLL_ADC_0_FLD_ro_adc_freq_output, (val))

#define RO_FLL_ADC_1_VAL_ro_adc_freq_inv_output(val)           REG_FLD_VAL(RO_FLL_ADC_1_FLD_ro_adc_freq_inv_output, (val))

#define RO_FLL_ADC_2_VAL_ro_cor_gain_output(val)               REG_FLD_VAL(RO_FLL_ADC_2_FLD_ro_cor_gain_output, (val))

#define RO_FLL_ADC_3_VAL_ro_cor_integ_output(val)              REG_FLD_VAL(RO_FLL_ADC_3_FLD_ro_cor_integ_output, (val))

#define RO_FLL_ADC_4_VAL_ro_cor_integ_inv_output(val)          REG_FLD_VAL(RO_FLL_ADC_4_FLD_ro_cor_integ_inv_output, (val))

#define RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_VAL_rg_ad_xpon_pll_ft_ck_mon_mux_sel(val) REG_FLD_VAL(RG_AD_XPON_PLL_FT_CK_MON_MUX_SEL_FLD_rg_ad_xpon_pll_ft_ck_mon_mux_sel, (val))

#define XPON_INT_EN_4_VAL_rg_pma_rx_afifo_reach_int_en(val)    REG_FLD_VAL(XPON_INT_EN_4_FLD_rg_pma_rx_afifo_reach_int_en, (val))
#define XPON_INT_EN_4_VAL_rg_pma_tx_afifo_reach_int_en(val)    REG_FLD_VAL(XPON_INT_EN_4_FLD_rg_pma_tx_afifo_reach_int_en, (val))

#define XPON_INT_STA_4_VAL_pma_rx_afifo_reach_int(val)         REG_FLD_VAL(XPON_INT_STA_4_FLD_pma_rx_afifo_reach_int, (val))
#define XPON_INT_STA_4_VAL_pma_tx_afifo_reach_int(val)         REG_FLD_VAL(XPON_INT_STA_4_FLD_pma_tx_afifo_reach_int, (val))

#define XPON_PMA_AFIFO_REACH_TH_VAL_rg_pma_rx_afifo_reach_th(val) REG_FLD_VAL(XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_rx_afifo_reach_th, (val))
#define XPON_PMA_AFIFO_REACH_TH_VAL_rg_pma_tx_afifo_reach_th(val) REG_FLD_VAL(XPON_PMA_AFIFO_REACH_TH_FLD_rg_pma_tx_afifo_reach_th, (val))

#define XPON_MD32_PBUS_CSR_CTRL_VAL_rg_md32_pbus_arb_en(val)   REG_FLD_VAL(XPON_MD32_PBUS_CSR_CTRL_FLD_rg_md32_pbus_arb_en, (val))

#define BENOFF_BIST_SEED_VAL_rg_bist_prbs_init_seed_benoff(val) REG_FLD_VAL(BENOFF_BIST_SEED_FLD_rg_bist_prbs_init_seed_benoff, (val))

#define PWR_PLL_CTRL_VAL_rg_pll_pwr_seq_sel(val)               REG_FLD_VAL(PWR_PLL_CTRL_FLD_rg_pll_pwr_seq_sel, (val))

#define xpon_tx_rate_ctrl_VAL_rg_pon_tx_rate_ctrl(val)         REG_FLD_VAL(xpon_tx_rate_ctrl_FLD_rg_pon_tx_rate_ctrl, (val))

#define BENOFF_DATA0_VAL_rg_benoff_d0(val)                     REG_FLD_VAL(BENOFF_DATA0_FLD_rg_benoff_d0, (val))

#define BENOFF_DATA1_VAL_rg_benoff_d1(val)                     REG_FLD_VAL(BENOFF_DATA1_FLD_rg_benoff_d1, (val))

#define BENOFF_DATA2_VAL_rg_benoff_d2(val)                     REG_FLD_VAL(BENOFF_DATA2_FLD_rg_benoff_d2, (val))

#define BENOFF_DATA3_VAL_rg_benoff_d3(val)                     REG_FLD_VAL(BENOFF_DATA3_FLD_rg_benoff_d3, (val))

#define BENOFF_CTRL_VAL_rg_benoff_catch_mem_en(val)            REG_FLD_VAL(BENOFF_CTRL_FLD_rg_benoff_catch_mem_en, (val))
#define BENOFF_CTRL_VAL_rg_benoff_cnt_max(val)                 REG_FLD_VAL(BENOFF_CTRL_FLD_rg_benoff_cnt_max, (val))

#define HS_DATA_EN_SEL_VAL_rg_hsdata_en_sel(val)               REG_FLD_VAL(HS_DATA_EN_SEL_FLD_rg_hsdata_en_sel, (val))

#define FIFO_CK_STATUS_VAL_ro_tx_rdfifo_depth(val)             REG_FLD_VAL(FIFO_CK_STATUS_FLD_ro_tx_rdfifo_depth, (val))
#define FIFO_CK_STATUS_VAL_ro_tx_wrfifo_depth(val)             REG_FLD_VAL(FIFO_CK_STATUS_FLD_ro_tx_wrfifo_depth, (val))
#define FIFO_CK_STATUS_VAL_ro_rx_rdfifo_depth(val)             REG_FLD_VAL(FIFO_CK_STATUS_FLD_ro_rx_rdfifo_depth, (val))
#define FIFO_CK_STATUS_VAL_ro_rx_wrfifo_depth(val)             REG_FLD_VAL(FIFO_CK_STATUS_FLD_ro_rx_wrfifo_depth, (val))

#define TDC_DLF_GAIN_STATUS_VAL_ro_dlf_gain_rund_new(val)      REG_FLD_VAL(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_rund_new, (val))
#define TDC_DLF_GAIN_STATUS_VAL_ro_dlf_gain_new(val)           REG_FLD_VAL(TDC_DLF_GAIN_STATUS_FLD_ro_dlf_gain_new, (val))

#define TDC_DLF_MODE_SETTING_VAL_rg_dlf_gain_latch(val)        REG_FLD_VAL(TDC_DLF_MODE_SETTING_FLD_rg_dlf_gain_latch, (val))
#define TDC_DLF_MODE_SETTING_VAL_rg_dlf_mode_sel(val)          REG_FLD_VAL(TDC_DLF_MODE_SETTING_FLD_rg_dlf_mode_sel, (val))
#define TDC_DLF_MODE_SETTING_VAL_ro_dlf_gain_new_org(val)      REG_FLD_VAL(TDC_DLF_MODE_SETTING_FLD_ro_dlf_gain_new_org, (val))

#define MD32_ISR_CTRL_VAL_rg_md32_sfp_rx_loss_inv(val)         REG_FLD_VAL(MD32_ISR_CTRL_FLD_rg_md32_sfp_rx_loss_inv, (val))

#define MD32_MEM_CLK_CTRL_VAL_rg_md32pm_ck_sel(val)            REG_FLD_VAL(MD32_MEM_CLK_CTRL_FLD_rg_md32pm_ck_sel, (val))

#define MD32_MEM_CLK_CG_CTRL_VAL_rg_force_md32d_ck_g(val)      REG_FLD_VAL(MD32_MEM_CLK_CG_CTRL_FLD_rg_force_md32d_ck_g, (val))

#define XG_EQD_STA_VAL_ro_xg_psync_to_sof_delay_lch(val)       REG_FLD_VAL(XG_EQD_STA_FLD_ro_xg_psync_to_sof_delay_lch, (val))

#define XG_EQD_CTRL_VAL_rg_xg_mask_window(val)                 REG_FLD_VAL(XG_EQD_CTRL_FLD_rg_xg_mask_window, (val))
#define XG_EQD_CTRL_VAL_rg_xg_eqd_rst_n(val)                   REG_FLD_VAL(XG_EQD_CTRL_FLD_rg_xg_eqd_rst_n, (val))

#define RAWDATA_DUMP_CTRL_0_VAL_rg_rawdata_tx_en(val)          REG_FLD_VAL(RAWDATA_DUMP_CTRL_0_FLD_rg_rawdata_tx_en, (val))

#define RAWDATA_DUMP_CTRL_1_VAL_rg_rawdata_tx_wdata_sel(val)   REG_FLD_VAL(RAWDATA_DUMP_CTRL_1_FLD_rg_rawdata_tx_wdata_sel, (val))

#define RAWDATA_DUMP_CTRL_2_VAL_rg_rawdata_mem_sel(val)        REG_FLD_VAL(RAWDATA_DUMP_CTRL_2_FLD_rg_rawdata_mem_sel, (val))

#define RAWDATA_DUMP_CTRL_3_VAL_rg_rawdata_tx_start_sel(val)   REG_FLD_VAL(RAWDATA_DUMP_CTRL_3_FLD_rg_rawdata_tx_start_sel, (val))

#define RAWDATA_DUMP_STA_0_VAL_ro_rawdata_tx_waddr(val)        REG_FLD_VAL(RAWDATA_DUMP_STA_0_FLD_ro_rawdata_tx_waddr, (val))

#define RAWDATA_DUMP_STA_1_VAL_ro_rawdata_rx_waddr(val)        REG_FLD_VAL(RAWDATA_DUMP_STA_1_FLD_ro_rawdata_rx_waddr, (val))

#define RAWDATA_DUMP_STA_2_VAL_ro_rawdata_tx_full(val)         REG_FLD_VAL(RAWDATA_DUMP_STA_2_FLD_ro_rawdata_tx_full, (val))

#define MD32MEM_DIV2_CNT_VAL_rg_md32_mem_max(val)              REG_FLD_VAL(MD32MEM_DIV2_CNT_FLD_rg_md32_mem_max, (val))

#define AD_XPON_CDR_LPF_SV_VAL_AD_XPON_CDR_LPF_SNAPSHOTVALUE(val) REG_FLD_VAL(AD_XPON_CDR_LPF_SV_FLD_AD_XPON_CDR_LPF_SNAPSHOTVALUE, (val))

#define K_VALUE_RD_VAL_ro_dta_xpon_tx_termp_sel(val)           REG_FLD_VAL(K_VALUE_RD_FLD_ro_dta_xpon_tx_termp_sel, (val))
#define K_VALUE_RD_VAL_ro_dta_xpon_tx_termn_sel(val)           REG_FLD_VAL(K_VALUE_RD_FLD_ro_dta_xpon_tx_termn_sel, (val))

#define XPONPLL_CTRL_VAL_rg_jcpll_auto_en(val)                 REG_FLD_VAL(XPONPLL_CTRL_FLD_rg_jcpll_auto_en, (val))
#define XPONPLL_CTRL_VAL_rg_xponpll_auto_en(val)               REG_FLD_VAL(XPONPLL_CTRL_FLD_rg_xponpll_auto_en, (val))

#define MD32_GATE_HALT_VAL_ro_md32_gated(val)                  REG_FLD_VAL(MD32_GATE_HALT_FLD_ro_md32_gated, (val))

#define MD32_MONCCNT_VAL_ro_mon_ccnt(val)                      REG_FLD_VAL(MD32_MONCCNT_FLD_ro_mon_ccnt, (val))

#define MD32_MONPCNT0_VAL_ro_mon_pcnt0(val)                    REG_FLD_VAL(MD32_MONPCNT0_FLD_ro_mon_pcnt0, (val))

#define MD32_MONPCNT1_VAL_ro_mon_pcnt1(val)                    REG_FLD_VAL(MD32_MONPCNT1_FLD_ro_mon_pcnt1, (val))

#define MD32_MONPCNT2_VAL_ro_mon_pcnt2(val)                    REG_FLD_VAL(MD32_MONPCNT2_FLD_ro_mon_pcnt2, (val))

#define MD32_MONCONTID_VAL_ro_mon_contid(val)                  REG_FLD_VAL(MD32_MONCONTID_FLD_ro_mon_contid, (val))

#define MD32_MONPC_VAL_ro_mon_pc(val)                          REG_FLD_VAL(MD32_MONPC_FLD_ro_mon_pc, (val))

#define MD32_TBUF_VAL_ro_mon_tbuf_wptr(val)                    REG_FLD_VAL(MD32_TBUF_FLD_ro_mon_tbuf_wptr, (val))

#define MD32_TBUFWDATA_L_VAL_ro_tbuf_wdata_l(val)              REG_FLD_VAL(MD32_TBUFWDATA_L_FLD_ro_tbuf_wdata_l, (val))

#define MD32_TBUFWDATA_H_VAL_ro_tbuf_wdata_h(val)              REG_FLD_VAL(MD32_TBUFWDATA_H_FLD_ro_tbuf_wdata_h, (val))

#define MD32_TBUFRDATA_L_VAL_ro_tbuf_rdata_l(val)              REG_FLD_VAL(MD32_TBUFRDATA_L_FLD_ro_tbuf_rdata_l, (val))

#define MD32_TBUFRDATA_H_VAL_ro_tbuf_rdata_h(val)              REG_FLD_VAL(MD32_TBUFRDATA_H_FLD_ro_tbuf_rdata_h, (val))

#define ADDR_MD32_PMEM_ADDR_REV_VAL_rg_addr_md32_pmem_addr(val) REG_FLD_VAL(ADDR_MD32_PMEM_ADDR_REV_FLD_rg_addr_md32_pmem_addr, (val))

#define ADDR_MD32_PMEM_DATA_REV_VAL_rg_addr_md32_pmem_data(val) REG_FLD_VAL(ADDR_MD32_PMEM_DATA_REV_FLD_rg_addr_md32_pmem_data, (val))

#define ADDR_MD32_DMEM_ADDR_REV_VAL_rg_addr_md32_dmem_addr(val) REG_FLD_VAL(ADDR_MD32_DMEM_ADDR_REV_FLD_rg_addr_md32_dmem_addr, (val))

#define ADDR_MD32_DMEM_DATA_REV_VAL_rg_addr_md32_dmem_data(val) REG_FLD_VAL(ADDR_MD32_DMEM_DATA_REV_FLD_rg_addr_md32_dmem_data, (val))

#define SS_JCPLL_PWCTL_SETTING_0_VAL_rg_jcpll_man_pwdb(val)    REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_man_pwdb, (val))
#define SS_JCPLL_PWCTL_SETTING_0_VAL_rg_sw_jcpll_en(val)       REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_sw_jcpll_en, (val))
#define SS_JCPLL_PWCTL_SETTING_0_VAL_rg_jcpll_en_inv(val)      REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_en_inv, (val))
#define SS_JCPLL_PWCTL_SETTING_0_VAL_rg_jcpll_hw_ctrl_mode(val) REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_hw_ctrl_mode, (val))
#define SS_JCPLL_PWCTL_SETTING_0_VAL_rg_jcpll_force_on(val)    REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_0_FLD_rg_jcpll_force_on, (val))

#define SS_JCPLL_PWCTL_SETTING_1_VAL_rg_jcpll_pcw_man_load_timer(val) REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_pcw_man_load_timer, (val))
#define SS_JCPLL_PWCTL_SETTING_1_VAL_rg_jcpll_en_timer(val)    REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_1_FLD_rg_jcpll_en_timer, (val))

#define SS_JCPLL_PWCTL_SETTING_2_VAL_rg_jcpll_ck_stb_timer(val) REG_FLD_VAL(SS_JCPLL_PWCTL_SETTING_2_FLD_rg_jcpll_ck_stb_timer, (val))

#define JCPLL_CHG_VAL_rg_jcpll_tdc_dig_pwdb(val)               REG_FLD_VAL(JCPLL_CHG_FLD_rg_jcpll_tdc_dig_pwdb, (val))
#define JCPLL_CHG_VAL_rg_jcpll_ledck_div(val)                  REG_FLD_VAL(JCPLL_CHG_FLD_rg_jcpll_ledck_div, (val))
#define JCPLL_CHG_VAL_rg_jcpll_pcw_chg(val)                    REG_FLD_VAL(JCPLL_CHG_FLD_rg_jcpll_pcw_chg, (val))

#define RG_JCPLL_SDM_PCW_CTRL_VAL_rg_jcpll_sdm_pcw(val)        REG_FLD_VAL(RG_JCPLL_SDM_PCW_CTRL_FLD_rg_jcpll_sdm_pcw, (val))

#define RG_JCPLL_SDM_PCW_CHG_CTRL_VAL_rg_jcpll_sdm_pcw_chg(val) REG_FLD_VAL(RG_JCPLL_SDM_PCW_CHG_CTRL_FLD_rg_jcpll_sdm_pcw_chg, (val))

#define PLL_JCPLL_FT_FREQDET_0_VAL_rg_jcpll_ft_unlock_cyclecnt(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_unlock_cyclecnt, (val))
#define PLL_JCPLL_FT_FREQDET_0_VAL_rg_jcpll_ft_lock_cyclecnt(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_0_FLD_rg_jcpll_ft_lock_cyclecnt, (val))

#define PLL_JCPLL_FT_FREQDET_1_VAL_rg_jcpll_ft_lock_target_end(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_end, (val))
#define PLL_JCPLL_FT_FREQDET_1_VAL_rg_jcpll_ft_lock_target_beg(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_1_FLD_rg_jcpll_ft_lock_target_beg, (val))

#define PLL_JCPLL_FT_FREQDET_2_VAL_rg_jcpll_ft_unlock_target_end(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_end, (val))
#define PLL_JCPLL_FT_FREQDET_2_VAL_rg_jcpll_ft_unlock_target_beg(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_2_FLD_rg_jcpll_ft_unlock_target_beg, (val))

#define PLL_JCPLL_FT_FREQDET_3_VAL_rg_jcpll_ft_wait_100us(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_wait_100us, (val))
#define PLL_JCPLL_FT_FREQDET_3_VAL_rg_jcpll_ft_unlockth(val)   REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_unlockth, (val))
#define PLL_JCPLL_FT_FREQDET_3_VAL_rg_jcpll_ft_lock_lockth(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_lockth, (val))
#define PLL_JCPLL_FT_FREQDET_3_VAL_rg_jcpll_ft_lock_cnt_clear(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_lock_cnt_clear, (val))
#define PLL_JCPLL_FT_FREQDET_3_VAL_rg_jcpll_ft_freqlock_det_en(val) REG_FLD_VAL(PLL_JCPLL_FT_FREQDET_3_FLD_rg_jcpll_ft_freqlock_det_en, (val))

#define JCPLL_FT_CK_MUX_VAL_rg_jcpll_ft_ck_mux(val)            REG_FLD_VAL(JCPLL_FT_CK_MUX_FLD_rg_jcpll_ft_ck_mux, (val))

#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_da_ctrl_man_pwdb(val)  REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_man_pwdb, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_digtcl_dac_en_force_on(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_digtcl_dac_en_force_on, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_chpup_en_force_on(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_chpup_en_force_on, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_ldochp_en_force_on(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_ldochp_en_force_on, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_autok_load_force_on(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_load_force_on, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_autok_en_force_on(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_autok_en_force_on, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_xfi_xtalck_cgm_en_force_on(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_xfi_xtalck_cgm_en_force_on, (val))
#define JCPLL_DA_RG_CTRL_0_VAL_rg_jcpll_da_ctrl_hw_timer(val)  REG_FLD_VAL(JCPLL_DA_RG_CTRL_0_FLD_rg_jcpll_da_ctrl_hw_timer, (val))

#define JCPLL_DA_RG_CTRL_1_VAL_rg_jcpll_digtcl_dac_en_inv(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_digtcl_dac_en_inv, (val))
#define JCPLL_DA_RG_CTRL_1_VAL_rg_jcpll_chpup_en_inv(val)      REG_FLD_VAL(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_chpup_en_inv, (val))
#define JCPLL_DA_RG_CTRL_1_VAL_rg_jcpll_ldochp_en_inv(val)     REG_FLD_VAL(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_ldochp_en_inv, (val))
#define JCPLL_DA_RG_CTRL_1_VAL_rg_jcpll_autok_load_inv(val)    REG_FLD_VAL(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_load_inv, (val))
#define JCPLL_DA_RG_CTRL_1_VAL_rg_jcpll_autok_en_inv(val)      REG_FLD_VAL(JCPLL_DA_RG_CTRL_1_FLD_rg_jcpll_autok_en_inv, (val))
#define JCPLL_DA_RG_CTRL_1_VAL_rg_xfi_xtalck_cgm_en_inv(val)   REG_FLD_VAL(JCPLL_DA_RG_CTRL_1_FLD_rg_xfi_xtalck_cgm_en_inv, (val))

#define JCPLL_DA_RG_CTRL_2_VAL_rg_jcpll_digtcl_dac_en_hw_mode(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_digtcl_dac_en_hw_mode, (val))
#define JCPLL_DA_RG_CTRL_2_VAL_rg_jcpll_chpup_en_hw_mode(val)  REG_FLD_VAL(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_chpup_en_hw_mode, (val))
#define JCPLL_DA_RG_CTRL_2_VAL_rg_jcpll_ldochp_en_hw_mode(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_ldochp_en_hw_mode, (val))
#define JCPLL_DA_RG_CTRL_2_VAL_rg_jcpll_autok_load_hw_mode(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_load_hw_mode, (val))
#define JCPLL_DA_RG_CTRL_2_VAL_rg_jcpll_autok_en_hw_mode(val)  REG_FLD_VAL(JCPLL_DA_RG_CTRL_2_FLD_rg_jcpll_autok_en_hw_mode, (val))
#define JCPLL_DA_RG_CTRL_2_VAL_rg_xfi_xtalck_cgm_en_hw_mode(val) REG_FLD_VAL(JCPLL_DA_RG_CTRL_2_FLD_rg_xfi_xtalck_cgm_en_hw_mode, (val))

#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_rx_phyck_rstb_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_phyck_rstb_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_tx_en_inv(val)         REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_tx_en_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_rxpll1_refck_pwdb_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rxpll1_refck_pwdb_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_rx_fe_vcm_sel_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vcm_sel_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_rx_fe_vb_eq3_en_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq3_en_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_rx_fe_vb_eq2_en_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq2_en_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_rx_fe_vb_eq1_en_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_rx_fe_vb_eq1_en_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_cdr_pd_edge_dis_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_cdr_pd_edge_dis_inv, (val))
#define XFI_PLL_DA_RG_CTRL_0_VAL_rg_xfi_clkpath_ldo_en_inv(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_0_FLD_rg_xfi_clkpath_ldo_en_inv, (val))

#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rx_phyck_rstb_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_phyck_rstb_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_tx_en_hw_mode(val)     REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_tx_en_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rxpll1_refck_pwdb_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rxpll1_refck_pwdb_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rx_fe_vcm_sel_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_sel_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rx_fe_vb_eq3_en_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq3_en_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rx_fe_vb_eq2_en_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq2_en_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_rx_fe_vb_eq1_en_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_rx_fe_vb_eq1_en_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_cdr_pd_edge_dis_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_cdr_pd_edge_dis_hw_mode, (val))
#define XFI_PLL_DA_RG_CTRL_1_VAL_rg_xfi_clkpath_ldo_en_hw_mode(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_1_FLD_rg_xfi_clkpath_ldo_en_hw_mode, (val))

#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rx_phyck_rstb_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_phyck_rstb_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_tx_en_force_on(val)    REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_tx_en_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rxpll1_refck_pwdb_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rxpll1_refck_pwdb_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rx_fe_vcm_sel_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_sel_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rx_fe_vcm_gem_pwdb_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vcm_gem_pwdb_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rx_fe_vb_eq3_en_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq3_en_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rx_fe_vb_eq2_en_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq2_en_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_rx_fe_vb_eq1_en_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_rx_fe_vb_eq1_en_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_cdr_pd_edge_dis_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_cdr_pd_edge_dis_force_on, (val))
#define XFI_PLL_DA_RG_CTRL_2_VAL_rg_xfi_clkpath_ldo_en_force_on(val) REG_FLD_VAL(XFI_PLL_DA_RG_CTRL_2_FLD_rg_xfi_clkpath_ldo_en_force_on, (val))

#define AD_DA_PROBE_STS_0_VAL_ro_jcpll_sdm_scan_out(val)       REG_FLD_VAL(AD_DA_PROBE_STS_0_FLD_ro_jcpll_sdm_scan_out, (val))
#define AD_DA_PROBE_STS_0_VAL_ro_txpll_tdc_d(val)              REG_FLD_VAL(AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_d, (val))
#define AD_DA_PROBE_STS_0_VAL_ro_txpll_tdc_c(val)              REG_FLD_VAL(AD_DA_PROBE_STS_0_FLD_ro_txpll_tdc_c, (val))
#define AD_DA_PROBE_STS_0_VAL_ro_ipath_gaindiv(val)            REG_FLD_VAL(AD_DA_PROBE_STS_0_FLD_ro_ipath_gaindiv, (val))

#define AD_DA_PROBE_STS_1_VAL_ro_ipath_ctrl(val)               REG_FLD_VAL(AD_DA_PROBE_STS_1_FLD_ro_ipath_ctrl, (val))

#define JCPLL_SCAN_CTRL_VAL_rg_jcpll_sdm_scan_enable(val)      REG_FLD_VAL(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_enable, (val))
#define JCPLL_SCAN_CTRL_VAL_rg_jcpll_sdm_cg_scan_enable(val)   REG_FLD_VAL(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_cg_scan_enable, (val))
#define JCPLL_SCAN_CTRL_VAL_rg_jcpll_sdm_scan_rstb(val)        REG_FLD_VAL(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_rstb, (val))
#define JCPLL_SCAN_CTRL_VAL_rg_jcpll_sdm_scan_mode(val)        REG_FLD_VAL(JCPLL_SCAN_CTRL_FLD_rg_jcpll_sdm_scan_mode, (val))

#define XFI_GPIO_SEL_0_VAL_rg_xfi_gpio_sel1(val)               REG_FLD_VAL(XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel1, (val))
#define XFI_GPIO_SEL_0_VAL_rg_xfi_gpio_sel0(val)               REG_FLD_VAL(XFI_GPIO_SEL_0_FLD_rg_xfi_gpio_sel0, (val))

#define TX_PAR_PROBE_PLL_CTRL_VAL_rg_clkgen_pll_lock(val)      REG_FLD_VAL(TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock, (val))
#define TX_PAR_PROBE_PLL_CTRL_VAL_rg_clkgen_pll_lock_en(val)   REG_FLD_VAL(TX_PAR_PROBE_PLL_CTRL_FLD_rg_clkgen_pll_lock_en, (val))
#define TX_PAR_PROBE_PLL_CTRL_VAL_rg_pmatop_probe_sel(val)     REG_FLD_VAL(TX_PAR_PROBE_PLL_CTRL_FLD_rg_pmatop_probe_sel, (val))

#define DUMP_RX_PCSRST_CTRL_VAL_rg_xfi_pcs_tx_rst_en(val)      REG_FLD_VAL(DUMP_RX_PCSRST_CTRL_FLD_rg_xfi_pcs_tx_rst_en, (val))
#define DUMP_RX_PCSRST_CTRL_VAL_rg_r2t_asic_used_ff(val)       REG_FLD_VAL(DUMP_RX_PCSRST_CTRL_FLD_rg_r2t_asic_used_ff, (val))
#define DUMP_RX_PCSRST_CTRL_VAL_rg_rx_asic_used_ff(val)        REG_FLD_VAL(DUMP_RX_PCSRST_CTRL_FLD_rg_rx_asic_used_ff, (val))

#define XFI_TX_FIFO_STS_VAL_ro_xfi_tx_fifo_status(val)         REG_FLD_VAL(XFI_TX_FIFO_STS_FLD_ro_xfi_tx_fifo_status, (val))

#define JCPLL_CK_RSTB_CTRL_VAL_rg_jcpll_ck_rstb_inv(val)       REG_FLD_VAL(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_inv, (val))
#define JCPLL_CK_RSTB_CTRL_VAL_rg_jcpll_ck_rstb_hw_mode(val)   REG_FLD_VAL(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_hw_mode, (val))
#define JCPLL_CK_RSTB_CTRL_VAL_rg_jcpll_ck_rstb_force_on(val)  REG_FLD_VAL(JCPLL_CK_RSTB_CTRL_FLD_rg_jcpll_ck_rstb_force_on, (val))

#define RO_TDC_TX_FREQDET_VAL_ro_tdc_tx_fl_out(val)            REG_FLD_VAL(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fl_out, (val))
#define RO_TDC_TX_FREQDET_VAL_ro_tdc_tx_state_freqdet(val)     REG_FLD_VAL(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_state_freqdet, (val))
#define RO_TDC_TX_FREQDET_VAL_ro_tdc_tx_lslock_cnt(val)        REG_FLD_VAL(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_lslock_cnt, (val))
#define RO_TDC_TX_FREQDET_VAL_ro_tdc_tx_fbck_lock_inner(val)   REG_FLD_VAL(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock_inner, (val))
#define RO_TDC_TX_FREQDET_VAL_ro_tdc_tx_fbck_lock(val)         REG_FLD_VAL(RO_TDC_TX_FREQDET_FLD_ro_tdc_tx_fbck_lock, (val))

#define RO_JCPLL_FT_FREQDET_VAL_ro_jcpll_ft_fl_out(val)        REG_FLD_VAL(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fl_out, (val))
#define RO_JCPLL_FT_FREQDET_VAL_ro_jcpll_ft_state_freqdet(val) REG_FLD_VAL(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_state_freqdet, (val))
#define RO_JCPLL_FT_FREQDET_VAL_ro_jcpll_ft_lslock_cnt(val)    REG_FLD_VAL(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_lslock_cnt, (val))
#define RO_JCPLL_FT_FREQDET_VAL_ro_jcpll_ft_fbck_lock_inner(val) REG_FLD_VAL(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock_inner, (val))
#define RO_JCPLL_FT_FREQDET_VAL_ro_jcpll_ft_fbck_lock(val)     REG_FLD_VAL(RO_JCPLL_FT_FREQDET_FLD_ro_jcpll_ft_fbck_lock, (val))

#define RO_JCPLL_500M_FREQDET_VAL_ro_jcpll_500m_fl_out(val)    REG_FLD_VAL(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fl_out, (val))
#define RO_JCPLL_500M_FREQDET_VAL_ro_jcpll_500m_state_freqdet(val) REG_FLD_VAL(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_state_freqdet, (val))
#define RO_JCPLL_500M_FREQDET_VAL_ro_jcpll_500m_lslock_cnt(val) REG_FLD_VAL(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_lslock_cnt, (val))
#define RO_JCPLL_500M_FREQDET_VAL_ro_jcpll_500m_fbck_lock_inner(val) REG_FLD_VAL(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock_inner, (val))
#define RO_JCPLL_500M_FREQDET_VAL_ro_jcpll_500m_fbck_lock(val) REG_FLD_VAL(RO_JCPLL_500M_FREQDET_FLD_ro_jcpll_500m_fbck_lock, (val))

#define RG_JCPLL_500M_FREQ_DET_1_VAL_rg_jcpll_500m_unlock_cyclecnt(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_unlock_cyclecnt, (val))
#define RG_JCPLL_500M_FREQ_DET_1_VAL_rg_jcpll_500m_lock_cyclecnt(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_1_FLD_rg_jcpll_500m_lock_cyclecnt, (val))

#define RG_JCPLL_500M_FREQ_DET_2_VAL_rg_jcpll_500m_lock_target_end(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_end, (val))
#define RG_JCPLL_500M_FREQ_DET_2_VAL_rg_jcpll_500m_lock_target_beg(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_2_FLD_rg_jcpll_500m_lock_target_beg, (val))

#define RG_JCPLL_500M_FREQ_DET_3_VAL_rg_jcpll_500m_unlock_target_end(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_end, (val))
#define RG_JCPLL_500M_FREQ_DET_3_VAL_rg_jcpll_500m_unlock_target_beg(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_3_FLD_rg_jcpll_500m_unlock_target_beg, (val))

#define RG_JCPLL_500M_FREQ_DET_4_VAL_rg_jcpll_500m_wait_100us(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_wait_100us, (val))
#define RG_JCPLL_500M_FREQ_DET_4_VAL_rg_jcpll_500m_unlockth(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_unlockth, (val))
#define RG_JCPLL_500M_FREQ_DET_4_VAL_rg_jcpll_500m_lock_lockth(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_lockth, (val))
#define RG_JCPLL_500M_FREQ_DET_4_VAL_rg_jcpll_500m_lock_cnt_clear(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_lock_cnt_clear, (val))
#define RG_JCPLL_500M_FREQ_DET_4_VAL_rg_jcpll_500m_freqlock_det_en(val) REG_FLD_VAL(RG_JCPLL_500M_FREQ_DET_4_FLD_rg_jcpll_500m_freqlock_det_en, (val))

#define rg_da_pxp_jcpll_sdm_scan_VAL_rg_force_sel_da_pxp_rx_fe_peaking_ctrl(val) REG_FLD_VAL(rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_sel_da_pxp_rx_fe_peaking_ctrl, (val))
#define rg_da_pxp_jcpll_sdm_scan_VAL_rg_force_da_pxp_rx_fe_peaking_ctrl(val) REG_FLD_VAL(rg_da_pxp_jcpll_sdm_scan_FLD_rg_force_da_pxp_rx_fe_peaking_ctrl, (val))
#define rg_da_pxp_jcpll_sdm_scan_VAL_rg_sel_da_pxp_jcpll_sdm_scan(val) REG_FLD_VAL(rg_da_pxp_jcpll_sdm_scan_FLD_rg_sel_da_pxp_jcpll_sdm_scan, (val))
#define rg_da_pxp_jcpll_sdm_scan_VAL_rg_da_pxp_jcpll_sdm_scan(val) REG_FLD_VAL(rg_da_pxp_jcpll_sdm_scan_FLD_rg_da_pxp_jcpll_sdm_scan, (val))

#define rg_force_da_pxp_aeq_speed_VAL_rg_force_sel_da_pxp_rx_osr_sel(val) REG_FLD_VAL(rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_rx_osr_sel, (val))
#define rg_force_da_pxp_aeq_speed_VAL_rg_force_da_pxp_rx_osr_sel(val) REG_FLD_VAL(rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_rx_osr_sel, (val))
#define rg_force_da_pxp_aeq_speed_VAL_rg_force_sel_da_pxp_aeq_speed(val) REG_FLD_VAL(rg_force_da_pxp_aeq_speed_FLD_rg_force_sel_da_pxp_aeq_speed, (val))
#define rg_force_da_pxp_aeq_speed_VAL_rg_force_da_pxp_aeq_speed(val) REG_FLD_VAL(rg_force_da_pxp_aeq_speed_FLD_rg_force_da_pxp_aeq_speed, (val))

#define rg_force_da_pxp_aeq_mode_VAL_rg_force_sel_da_pxp_aeq_mode(val) REG_FLD_VAL(rg_force_da_pxp_aeq_mode_FLD_rg_force_sel_da_pxp_aeq_mode, (val))
#define rg_force_da_pxp_aeq_mode_VAL_rg_force_da_pxp_aeq_mode(val) REG_FLD_VAL(rg_force_da_pxp_aeq_mode_FLD_rg_force_da_pxp_aeq_mode, (val))

#define rg_force_da_pxp_tx_data_ben_VAL_rg_force_sel_da_pxp_tx_data_ben(val) REG_FLD_VAL(rg_force_da_pxp_tx_data_ben_FLD_rg_force_sel_da_pxp_tx_data_ben, (val))
#define rg_force_da_pxp_tx_data_ben_VAL_rg_force_da_pxp_tx_data_ben(val) REG_FLD_VAL(rg_force_da_pxp_tx_data_ben_FLD_rg_force_da_pxp_tx_data_ben, (val))

#define rg_force_da_pxp_tx_fir_c0b_VAL_rg_force_sel_da_pxp_tx_fir_cn1(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_cn1, (val))
#define rg_force_da_pxp_tx_fir_c0b_VAL_rg_force_da_pxp_tx_fir_cn1(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_cn1, (val))
#define rg_force_da_pxp_tx_fir_c0b_VAL_rg_force_sel_da_pxp_tx_fir_c0b(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_sel_da_pxp_tx_fir_c0b, (val))
#define rg_force_da_pxp_tx_fir_c0b_VAL_rg_force_da_pxp_tx_fir_c0b(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c0b_FLD_rg_force_da_pxp_tx_fir_c0b, (val))

#define rg_force_da_pxp_tx_term_sel_VAL_rg_force_sel_da_pxp_tx_ckin_divisor(val) REG_FLD_VAL(rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_ckin_divisor, (val))
#define rg_force_da_pxp_tx_term_sel_VAL_rg_force_da_pxp_tx_ckin_divisor(val) REG_FLD_VAL(rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_ckin_divisor, (val))
#define rg_force_da_pxp_tx_term_sel_VAL_rg_force_sel_da_pxp_tx_term_sel(val) REG_FLD_VAL(rg_force_da_pxp_tx_term_sel_FLD_rg_force_sel_da_pxp_tx_term_sel, (val))
#define rg_force_da_pxp_tx_term_sel_VAL_rg_force_da_pxp_tx_term_sel(val) REG_FLD_VAL(rg_force_da_pxp_tx_term_sel_FLD_rg_force_da_pxp_tx_term_sel, (val))

#define rg_force_da_pxp_tx_fir_c1_VAL_rg_force_sel_da_pxp_tx_fir_c2(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c2, (val))
#define rg_force_da_pxp_tx_fir_c1_VAL_rg_force_da_pxp_tx_fir_c2(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c2, (val))
#define rg_force_da_pxp_tx_fir_c1_VAL_rg_force_sel_da_pxp_tx_fir_c1(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_sel_da_pxp_tx_fir_c1, (val))
#define rg_force_da_pxp_tx_fir_c1_VAL_rg_force_da_pxp_tx_fir_c1(val) REG_FLD_VAL(rg_force_da_pxp_tx_fir_c1_FLD_rg_force_da_pxp_tx_fir_c1, (val))

#define rg_force_da_pxp_tx_rate_ctrl_VAL_rg_force_sel_da_pxp_cdr_pr_pieye(val) REG_FLD_VAL(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_cdr_pr_pieye, (val))
#define rg_force_da_pxp_tx_rate_ctrl_VAL_rg_force_da_pxp_cdr_pr_pieye(val) REG_FLD_VAL(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_cdr_pr_pieye, (val))
#define rg_force_da_pxp_tx_rate_ctrl_VAL_rg_force_sel_da_pxp_tx_rate_ctrl(val) REG_FLD_VAL(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_sel_da_pxp_tx_rate_ctrl, (val))
#define rg_force_da_pxp_tx_rate_ctrl_VAL_rg_force_da_pxp_tx_rate_ctrl(val) REG_FLD_VAL(rg_force_da_pxp_tx_rate_ctrl_FLD_rg_force_da_pxp_tx_rate_ctrl, (val))

#define rg_force_da_pxp_rx_dac_d0_VAL_rg_force_sel_da_pxp_rx_dac_d1(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d1, (val))
#define rg_force_da_pxp_rx_dac_d0_VAL_rg_force_da_pxp_rx_dac_d1(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d1, (val))
#define rg_force_da_pxp_rx_dac_d0_VAL_rg_force_sel_da_pxp_rx_dac_d0(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_sel_da_pxp_rx_dac_d0, (val))
#define rg_force_da_pxp_rx_dac_d0_VAL_rg_force_da_pxp_rx_dac_d0(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_d0_FLD_rg_force_da_pxp_rx_dac_d0, (val))

#define rg_force_da_pxp_rx_dac_e0_VAL_rg_force_sel_da_pxp_rx_dac_e1(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e1, (val))
#define rg_force_da_pxp_rx_dac_e0_VAL_rg_force_da_pxp_rx_dac_e1(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e1, (val))
#define rg_force_da_pxp_rx_dac_e0_VAL_rg_force_sel_da_pxp_rx_dac_e0(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_sel_da_pxp_rx_dac_e0, (val))
#define rg_force_da_pxp_rx_dac_e0_VAL_rg_force_da_pxp_rx_dac_e0(val) REG_FLD_VAL(rg_force_da_pxp_rx_dac_e0_FLD_rg_force_da_pxp_rx_dac_e0, (val))

#define rg_force_da_pxp_cdr_pr_fll_cor_VAL_rg_force_sel_da_pxp_rx_dac_eye(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_rx_dac_eye, (val))
#define rg_force_da_pxp_cdr_pr_fll_cor_VAL_rg_force_da_pxp_rx_dac_eye(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_rx_dac_eye, (val))
#define rg_force_da_pxp_cdr_pr_fll_cor_VAL_rg_force_sel_da_pxp_cdr_pr_fll_cor(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_sel_da_pxp_cdr_pr_fll_cor, (val))
#define rg_force_da_pxp_cdr_pr_fll_cor_VAL_rg_force_da_pxp_cdr_pr_fll_cor(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_fll_cor_FLD_rg_force_da_pxp_cdr_pr_fll_cor, (val))

#define rg_force_da_pxp_cdr_pr_idac_VAL_rg_force_sel_da_pxp_txpll_sdm_pcw(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw, (val))
#define rg_force_da_pxp_cdr_pr_idac_VAL_rg_force_sel_da_pxp_cdr_pr_idac(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_sel_da_pxp_cdr_pr_idac, (val))
#define rg_force_da_pxp_cdr_pr_idac_VAL_rg_force_da_pxp_cdr_pr_idac(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_idac_FLD_rg_force_da_pxp_cdr_pr_idac, (val))

#define rg_force_da_pxp_txpll_sdm_pcw_VAL_rg_force_da_pxp_txpll_sdm_pcw(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_pcw_FLD_rg_force_da_pxp_txpll_sdm_pcw, (val))

#define rg_force_da_pxp_rx_fe_vos_VAL_rg_force_sel_da_pxp_jcpll_sdm_pcw(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw, (val))
#define rg_force_da_pxp_rx_fe_vos_VAL_rg_force_sel_da_pxp_rx_fe_vos(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_sel_da_pxp_rx_fe_vos, (val))
#define rg_force_da_pxp_rx_fe_vos_VAL_rg_force_da_pxp_rx_fe_vos(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_vos_FLD_rg_force_da_pxp_rx_fe_vos, (val))

#define rg_force_da_pxp_jcpll_sdm_pcw_VAL_rg_force_da_pxp_jcpll_sdm_pcw(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_pcw_FLD_rg_force_da_pxp_jcpll_sdm_pcw, (val))

#define rg_force_da_pcie_cktx0_en_VAL_rg_force_sel_da_pcie_cktx1_en(val) REG_FLD_VAL(rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx1_en, (val))
#define rg_force_da_pcie_cktx0_en_VAL_rg_force_da_pcie_cktx1_en(val) REG_FLD_VAL(rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx1_en, (val))
#define rg_force_da_pcie_cktx0_en_VAL_rg_force_sel_da_pcie_cktx0_en(val) REG_FLD_VAL(rg_force_da_pcie_cktx0_en_FLD_rg_force_sel_da_pcie_cktx0_en, (val))
#define rg_force_da_pcie_cktx0_en_VAL_rg_force_da_pcie_cktx0_en(val) REG_FLD_VAL(rg_force_da_pcie_cktx0_en_FLD_rg_force_da_pcie_cktx0_en, (val))

#define rg_force_da_pxp_aeq_en_VAL_rg_force_sel_da_pxp_aeq_en(val) REG_FLD_VAL(rg_force_da_pxp_aeq_en_FLD_rg_force_sel_da_pxp_aeq_en, (val))
#define rg_force_da_pxp_aeq_en_VAL_rg_force_da_pxp_aeq_en(val) REG_FLD_VAL(rg_force_da_pxp_aeq_en_FLD_rg_force_da_pxp_aeq_en, (val))

#define rg_force_da_pxp_aeq_bypass_VAL_rg_force_sel_da_pxp_aeq_ckon(val) REG_FLD_VAL(rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_ckon, (val))
#define rg_force_da_pxp_aeq_bypass_VAL_rg_force_da_pxp_aeq_ckon(val) REG_FLD_VAL(rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_ckon, (val))
#define rg_force_da_pxp_aeq_bypass_VAL_rg_force_sel_da_pxp_aeq_bypass(val) REG_FLD_VAL(rg_force_da_pxp_aeq_bypass_FLD_rg_force_sel_da_pxp_aeq_bypass, (val))
#define rg_force_da_pxp_aeq_bypass_VAL_rg_force_da_pxp_aeq_bypass(val) REG_FLD_VAL(rg_force_da_pxp_aeq_bypass_FLD_rg_force_da_pxp_aeq_bypass, (val))

#define rg_force_da_pxp_aeq_inprgrss_VAL_rg_force_sel_da_pxp_aeq_invldreq(val) REG_FLD_VAL(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_invldreq, (val))
#define rg_force_da_pxp_aeq_inprgrss_VAL_rg_force_da_pxp_aeq_invldreq(val) REG_FLD_VAL(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_invldreq, (val))
#define rg_force_da_pxp_aeq_inprgrss_VAL_rg_force_sel_da_pxp_aeq_inprgrss(val) REG_FLD_VAL(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_sel_da_pxp_aeq_inprgrss, (val))
#define rg_force_da_pxp_aeq_inprgrss_VAL_rg_force_da_pxp_aeq_inprgrss(val) REG_FLD_VAL(rg_force_da_pxp_aeq_inprgrss_FLD_rg_force_da_pxp_aeq_inprgrss, (val))

#define rg_force_da_pxp_aeq_rstb_VAL_rg_force_sel_da_pxp_cdr_injck_sel(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_cdr_injck_sel, (val))
#define rg_force_da_pxp_aeq_rstb_VAL_rg_force_da_pxp_cdr_injck_sel(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_cdr_injck_sel, (val))
#define rg_force_da_pxp_aeq_rstb_VAL_rg_force_sel_da_pxp_aeq_rstb(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rstb_FLD_rg_force_sel_da_pxp_aeq_rstb, (val))
#define rg_force_da_pxp_aeq_rstb_VAL_rg_force_da_pxp_aeq_rstb(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rstb_FLD_rg_force_da_pxp_aeq_rstb, (val))

#define rg_force_da_pxp_cdr_lpf_lck2data_VAL_rg_force_sel_da_pxp_cdr_lpf_rstb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_rstb, (val))
#define rg_force_da_pxp_cdr_lpf_lck2data_VAL_rg_force_da_pxp_cdr_lpf_rstb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_rstb, (val))
#define rg_force_da_pxp_cdr_lpf_lck2data_VAL_rg_force_sel_da_pxp_cdr_lpf_lck2data(val) REG_FLD_VAL(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_sel_da_pxp_cdr_lpf_lck2data, (val))
#define rg_force_da_pxp_cdr_lpf_lck2data_VAL_rg_force_da_pxp_cdr_lpf_lck2data(val) REG_FLD_VAL(rg_force_da_pxp_cdr_lpf_lck2data_FLD_rg_force_da_pxp_cdr_lpf_lck2data, (val))

#define rg_force_da_pxp_cdr_pd_pwdb_VAL_rg_force_sel_da_pxp_cdr_pr_kband_rstb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_kband_rstb, (val))
#define rg_force_da_pxp_cdr_pd_pwdb_VAL_rg_force_da_pxp_cdr_pr_kband_rstb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pr_kband_rstb, (val))
#define rg_force_da_pxp_cdr_pd_pwdb_VAL_rg_force_sel_da_pxp_cdr_pd_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_sel_da_pxp_cdr_pd_pwdb, (val))
#define rg_force_da_pxp_cdr_pd_pwdb_VAL_rg_force_da_pxp_cdr_pd_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pd_pwdb_FLD_rg_force_da_pxp_cdr_pd_pwdb, (val))

#define rg_force_da_pxp_cdr_pr_lpf_c_en_VAL_rg_force_sel_da_pxp_cdr_pr_lpf_r_en(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_r_en, (val))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_VAL_rg_force_da_pxp_cdr_pr_lpf_r_en(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_r_en, (val))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_VAL_rg_force_sel_da_pxp_cdr_pr_lpf_c_en(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_sel_da_pxp_cdr_pr_lpf_c_en, (val))
#define rg_force_da_pxp_cdr_pr_lpf_c_en_VAL_rg_force_da_pxp_cdr_pr_lpf_c_en(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_lpf_c_en_FLD_rg_force_da_pxp_cdr_pr_lpf_c_en, (val))

#define rg_force_da_pxp_cdr_pr_pieye_pwdb_VAL_rg_force_sel_da_pxp_cdr_pr_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pwdb, (val))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_VAL_rg_force_da_pxp_cdr_pr_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pwdb, (val))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_VAL_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_sel_da_pxp_cdr_pr_pieye_pwdb, (val))
#define rg_force_da_pxp_cdr_pr_pieye_pwdb_VAL_rg_force_da_pxp_cdr_pr_pieye_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_cdr_pr_pieye_pwdb_FLD_rg_force_da_pxp_cdr_pr_pieye_pwdb, (val))

#define rg_force_da_pxp_jcpll_ckout_en_VAL_rg_force_sel_da_pxp_jcpll_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_en, (val))
#define rg_force_da_pxp_jcpll_ckout_en_VAL_rg_force_da_pxp_jcpll_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_en, (val))
#define rg_force_da_pxp_jcpll_ckout_en_VAL_rg_force_sel_da_pxp_jcpll_ckout_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_sel_da_pxp_jcpll_ckout_en, (val))
#define rg_force_da_pxp_jcpll_ckout_en_VAL_rg_force_da_pxp_jcpll_ckout_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_ckout_en_FLD_rg_force_da_pxp_jcpll_ckout_en, (val))

#define rg_force_da_pxp_jcpll_kband_scan_en_VAL_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en_cg, (val))
#define rg_force_da_pxp_jcpll_kband_scan_en_VAL_rg_force_da_pxp_jcpll_kband_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en_cg, (val))
#define rg_force_da_pxp_jcpll_kband_scan_en_VAL_rg_force_sel_da_pxp_jcpll_kband_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_en, (val))
#define rg_force_da_pxp_jcpll_kband_scan_en_VAL_rg_force_da_pxp_jcpll_kband_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_en_FLD_rg_force_da_pxp_jcpll_kband_scan_en, (val))

#define rg_force_da_pxp_jcpll_kband_scan_in_VAL_rg_force_sel_da_pxp_jcpll_kband_scan_rstb(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_rstb, (val))
#define rg_force_da_pxp_jcpll_kband_scan_in_VAL_rg_force_da_pxp_jcpll_kband_scan_rstb(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_rstb, (val))
#define rg_force_da_pxp_jcpll_kband_scan_in_VAL_rg_force_sel_da_pxp_jcpll_kband_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_sel_da_pxp_jcpll_kband_scan_in, (val))
#define rg_force_da_pxp_jcpll_kband_scan_in_VAL_rg_force_da_pxp_jcpll_kband_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_kband_scan_in_FLD_rg_force_da_pxp_jcpll_kband_scan_in, (val))

#define rg_force_da_pxp_jcpll_sdm_pcw_chg_VAL_rg_force_sel_da_pxp_jcpll_sdm_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en, (val))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_VAL_rg_force_da_pxp_jcpll_sdm_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en, (val))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_VAL_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_jcpll_sdm_pcw_chg, (val))
#define rg_force_da_pxp_jcpll_sdm_pcw_chg_VAL_rg_force_da_pxp_jcpll_sdm_pcw_chg(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_pcw_chg_FLD_rg_force_da_pxp_jcpll_sdm_pcw_chg, (val))

#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_VAL_rg_force_sel_da_pxp_jcpll_sdm_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_in, (val))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_VAL_rg_force_da_pxp_jcpll_sdm_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_in, (val))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_VAL_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_en_cg, (val))
#define rg_force_da_pxp_jcpll_sdm_scan_en_cg_VAL_rg_force_da_pxp_jcpll_sdm_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_jcpll_sdm_scan_en_cg, (val))

#define rg_force_da_pxp_jcpll_sdm_scan_rstb_VAL_rg_force_sel_da_pxp_rx_oscal_ckon(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_rx_oscal_ckon, (val))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_VAL_rg_force_da_pxp_rx_oscal_ckon(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_rx_oscal_ckon, (val))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_VAL_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_sel_da_pxp_jcpll_sdm_scan_rstb, (val))
#define rg_force_da_pxp_jcpll_sdm_scan_rstb_VAL_rg_force_da_pxp_jcpll_sdm_scan_rstb(val) REG_FLD_VAL(rg_force_da_pxp_jcpll_sdm_scan_rstb_FLD_rg_force_da_pxp_jcpll_sdm_scan_rstb, (val))

#define rg_force_da_pxp_rx_oscal_en_VAL_rg_force_sel_da_pxp_rx_oscal_rstb(val) REG_FLD_VAL(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_rstb, (val))
#define rg_force_da_pxp_rx_oscal_en_VAL_rg_force_da_pxp_rx_oscal_rstb(val) REG_FLD_VAL(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_rstb, (val))
#define rg_force_da_pxp_rx_oscal_en_VAL_rg_force_sel_da_pxp_rx_oscal_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_sel_da_pxp_rx_oscal_en, (val))
#define rg_force_da_pxp_rx_oscal_en_VAL_rg_force_da_pxp_rx_oscal_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_oscal_en_FLD_rg_force_da_pxp_rx_oscal_en, (val))

#define rg_force_da_pxp_rx_scan_enable_VAL_rg_force_sel_da_pxp_rx_scan_enable_cg(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable_cg, (val))
#define rg_force_da_pxp_rx_scan_enable_VAL_rg_force_da_pxp_rx_scan_enable_cg(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable_cg, (val))
#define rg_force_da_pxp_rx_scan_enable_VAL_rg_force_sel_da_pxp_rx_scan_enable(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_sel_da_pxp_rx_scan_enable, (val))
#define rg_force_da_pxp_rx_scan_enable_VAL_rg_force_da_pxp_rx_scan_enable(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_enable_FLD_rg_force_da_pxp_rx_scan_enable, (val))

#define rg_force_da_pxp_rx_scan_in_VAL_rg_sel_da_pxp_rx_scan(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_in_FLD_rg_sel_da_pxp_rx_scan, (val))
#define rg_force_da_pxp_rx_scan_in_VAL_rg_da_pxp_rx_scan(val)  REG_FLD_VAL(rg_force_da_pxp_rx_scan_in_FLD_rg_da_pxp_rx_scan, (val))
#define rg_force_da_pxp_rx_scan_in_VAL_rg_force_sel_da_pxp_rx_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_in_FLD_rg_force_sel_da_pxp_rx_scan_in, (val))
#define rg_force_da_pxp_rx_scan_in_VAL_rg_force_da_pxp_rx_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_in_FLD_rg_force_da_pxp_rx_scan_in, (val))

#define rg_force_da_pxp_rx_scan_rst_b_VAL_rg_force_sel_da_pxp_rx_sigdet_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_sigdet_pwdb, (val))
#define rg_force_da_pxp_rx_scan_rst_b_VAL_rg_force_da_pxp_rx_sigdet_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_sigdet_pwdb, (val))
#define rg_force_da_pxp_rx_scan_rst_b_VAL_rg_force_sel_da_pxp_rx_scan_rst_b(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_sel_da_pxp_rx_scan_rst_b, (val))
#define rg_force_da_pxp_rx_scan_rst_b_VAL_rg_force_da_pxp_rx_scan_rst_b(val) REG_FLD_VAL(rg_force_da_pxp_rx_scan_rst_b_FLD_rg_force_da_pxp_rx_scan_rst_b, (val))

#define rg_force_da_pxp_tdc_cal_bw_VAL_rg_force_sel_da_pxp_tdc_cal_offset(val) REG_FLD_VAL(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_offset, (val))
#define rg_force_da_pxp_tdc_cal_bw_VAL_rg_force_da_pxp_tdc_cal_offset(val) REG_FLD_VAL(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_offset, (val))
#define rg_force_da_pxp_tdc_cal_bw_VAL_rg_force_sel_da_pxp_tdc_cal_bw(val) REG_FLD_VAL(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_sel_da_pxp_tdc_cal_bw, (val))
#define rg_force_da_pxp_tdc_cal_bw_VAL_rg_force_da_pxp_tdc_cal_bw(val) REG_FLD_VAL(rg_force_da_pxp_tdc_cal_bw_FLD_rg_force_da_pxp_tdc_cal_bw, (val))

#define rg_force_da_pxp_txpll_ckout_en_VAL_rg_force_sel_da_pxp_txpll_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_en, (val))
#define rg_force_da_pxp_txpll_ckout_en_VAL_rg_force_da_pxp_txpll_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_en, (val))
#define rg_force_da_pxp_txpll_ckout_en_VAL_rg_force_sel_da_pxp_txpll_ckout_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_sel_da_pxp_txpll_ckout_en, (val))
#define rg_force_da_pxp_txpll_ckout_en_VAL_rg_force_da_pxp_txpll_ckout_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_ckout_en_FLD_rg_force_da_pxp_txpll_ckout_en, (val))

#define rg_force_da_pxp_txpll_kband_load_en_VAL_rg_force_sel_da_pxp_txpll_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_scan_en, (val))
#define rg_force_da_pxp_txpll_kband_load_en_VAL_rg_force_da_pxp_txpll_kband_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_scan_en, (val))
#define rg_force_da_pxp_txpll_kband_load_en_VAL_rg_force_sel_da_pxp_txpll_kband_load_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_sel_da_pxp_txpll_kband_load_en, (val))
#define rg_force_da_pxp_txpll_kband_load_en_VAL_rg_force_da_pxp_txpll_kband_load_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_load_en_FLD_rg_force_da_pxp_txpll_kband_load_en, (val))

#define rg_force_da_pxp_txpll_kband_scan_en_cg_VAL_rg_force_sel_da_pxp_txpll_kband_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_in, (val))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_VAL_rg_force_da_pxp_txpll_kband_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_in, (val))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_VAL_rg_force_sel_da_pxp_txpll_kband_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_kband_scan_en_cg, (val))
#define rg_force_da_pxp_txpll_kband_scan_en_cg_VAL_rg_force_da_pxp_txpll_kband_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_txpll_kband_scan_en_cg_FLD_rg_force_da_pxp_txpll_kband_scan_en_cg, (val))

#define rg_da_pxp_txpll_kband_scan_VAL_rg_force_sel_da_pxp_txpll_kband_scan_rstb(val) REG_FLD_VAL(rg_da_pxp_txpll_kband_scan_FLD_rg_force_sel_da_pxp_txpll_kband_scan_rstb, (val))
#define rg_da_pxp_txpll_kband_scan_VAL_rg_force_da_pxp_txpll_kband_scan_rstb(val) REG_FLD_VAL(rg_da_pxp_txpll_kband_scan_FLD_rg_force_da_pxp_txpll_kband_scan_rstb, (val))
#define rg_da_pxp_txpll_kband_scan_VAL_rg_sel_da_pxp_txpll_kband_scan(val) REG_FLD_VAL(rg_da_pxp_txpll_kband_scan_FLD_rg_sel_da_pxp_txpll_kband_scan, (val))
#define rg_da_pxp_txpll_kband_scan_VAL_rg_da_pxp_txpll_kband_scan(val) REG_FLD_VAL(rg_da_pxp_txpll_kband_scan_FLD_rg_da_pxp_txpll_kband_scan, (val))

#define rg_force_da_pxp_txpll_sdm_pcw_chg_VAL_rg_force_sel_da_pxp_txpll_sdm_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en, (val))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_VAL_rg_force_da_pxp_txpll_sdm_scan_en(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_scan_en, (val))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_VAL_rg_force_sel_da_pxp_txpll_sdm_pcw_chg(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_sel_da_pxp_txpll_sdm_pcw_chg, (val))
#define rg_force_da_pxp_txpll_sdm_pcw_chg_VAL_rg_force_da_pxp_txpll_sdm_pcw_chg(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_pcw_chg_FLD_rg_force_da_pxp_txpll_sdm_pcw_chg, (val))

#define rg_force_da_pxp_txpll_sdm_scan_en_cg_VAL_rg_force_sel_da_pxp_txpll_sdm_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_in, (val))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_VAL_rg_force_da_pxp_txpll_sdm_scan_in(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_in, (val))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_VAL_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_en_cg, (val))
#define rg_force_da_pxp_txpll_sdm_scan_en_cg_VAL_rg_force_da_pxp_txpll_sdm_scan_en_cg(val) REG_FLD_VAL(rg_force_da_pxp_txpll_sdm_scan_en_cg_FLD_rg_force_da_pxp_txpll_sdm_scan_en_cg, (val))

#define rg_da_pxp_txpll_sdm_scan_VAL_rg_force_sel_da_pxp_txpll_sdm_scan_rstb(val) REG_FLD_VAL(rg_da_pxp_txpll_sdm_scan_FLD_rg_force_sel_da_pxp_txpll_sdm_scan_rstb, (val))
#define rg_da_pxp_txpll_sdm_scan_VAL_rg_force_da_pxp_txpll_sdm_scan_rstb(val) REG_FLD_VAL(rg_da_pxp_txpll_sdm_scan_FLD_rg_force_da_pxp_txpll_sdm_scan_rstb, (val))
#define rg_da_pxp_txpll_sdm_scan_VAL_rg_sel_da_pxp_txpll_sdm_scan(val) REG_FLD_VAL(rg_da_pxp_txpll_sdm_scan_FLD_rg_sel_da_pxp_txpll_sdm_scan, (val))
#define rg_da_pxp_txpll_sdm_scan_VAL_rg_da_pxp_txpll_sdm_scan(val) REG_FLD_VAL(rg_da_pxp_txpll_sdm_scan_FLD_rg_da_pxp_txpll_sdm_scan, (val))

#define rg_force_da_pxp_tx_acjtag_dn_VAL_rg_force_sel_da_pxp_tx_acjtag_dp(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dp, (val))
#define rg_force_da_pxp_tx_acjtag_dn_VAL_rg_force_da_pxp_tx_acjtag_dp(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dp, (val))
#define rg_force_da_pxp_tx_acjtag_dn_VAL_rg_force_sel_da_pxp_tx_acjtag_dn(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_sel_da_pxp_tx_acjtag_dn, (val))
#define rg_force_da_pxp_tx_acjtag_dn_VAL_rg_force_da_pxp_tx_acjtag_dn(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_dn_FLD_rg_force_da_pxp_tx_acjtag_dn, (val))

#define rg_force_da_pxp_tx_acjtag_en_VAL_rg_force_sel_da_pxp_tx_ckin_sel(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_ckin_sel, (val))
#define rg_force_da_pxp_tx_acjtag_en_VAL_rg_force_da_pxp_tx_ckin_sel(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_ckin_sel, (val))
#define rg_force_da_pxp_tx_acjtag_en_VAL_rg_force_sel_da_pxp_tx_acjtag_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_sel_da_pxp_tx_acjtag_en, (val))
#define rg_force_da_pxp_tx_acjtag_en_VAL_rg_force_da_pxp_tx_acjtag_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_acjtag_en_FLD_rg_force_da_pxp_tx_acjtag_en, (val))

#define rg_force_da_pxp_tx_ck_en_VAL_rg_force_sel_da_pxp_tx_cm_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_cm_en, (val))
#define rg_force_da_pxp_tx_ck_en_VAL_rg_force_da_pxp_tx_cm_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_cm_en, (val))
#define rg_force_da_pxp_tx_ck_en_VAL_rg_force_sel_da_pxp_tx_ck_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_ck_en_FLD_rg_force_sel_da_pxp_tx_ck_en, (val))
#define rg_force_da_pxp_tx_ck_en_VAL_rg_force_da_pxp_tx_ck_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_ck_en_FLD_rg_force_da_pxp_tx_ck_en, (val))

#define rg_force_da_pxp_tx_hsdata_en_VAL_rg_force_sel_da_pxp_tx_data_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_data_en, (val))
#define rg_force_da_pxp_tx_hsdata_en_VAL_rg_force_da_pxp_tx_data_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_data_en, (val))
#define rg_force_da_pxp_tx_hsdata_en_VAL_rg_force_sel_da_pxp_tx_hsdata_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_sel_da_pxp_tx_hsdata_en, (val))
#define rg_force_da_pxp_tx_hsdata_en_VAL_rg_force_da_pxp_tx_hsdata_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_hsdata_en_FLD_rg_force_da_pxp_tx_hsdata_en, (val))

#define rg_force_da_pxp_tx_rxdet_en_VAL_rg_force_sel_da_pxp_tx_termp_clean(val) REG_FLD_VAL(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_termp_clean, (val))
#define rg_force_da_pxp_tx_rxdet_en_VAL_rg_force_da_pxp_tx_termp_clean(val) REG_FLD_VAL(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_termp_clean, (val))
#define rg_force_da_pxp_tx_rxdet_en_VAL_rg_force_sel_da_pxp_tx_rxdet_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_sel_da_pxp_tx_rxdet_en, (val))
#define rg_force_da_pxp_tx_rxdet_en_VAL_rg_force_da_pxp_tx_rxdet_en(val) REG_FLD_VAL(rg_force_da_pxp_tx_rxdet_en_FLD_rg_force_da_pxp_tx_rxdet_en, (val))

#define scan_mode_VAL_rg_force_sel_da_pxp_jcpll_kband_load_en(val) REG_FLD_VAL(scan_mode_FLD_rg_force_sel_da_pxp_jcpll_kband_load_en, (val))
#define scan_mode_VAL_rg_force_da_pxp_jcpll_kband_load_en(val) REG_FLD_VAL(scan_mode_FLD_rg_force_da_pxp_jcpll_kband_load_en, (val))

#define rg_da_pxp_jcpll_kband_scan_VAL_rg_force_sel_da_pxp_tx_termcal_en(val) REG_FLD_VAL(rg_da_pxp_jcpll_kband_scan_FLD_rg_force_sel_da_pxp_tx_termcal_en, (val))
#define rg_da_pxp_jcpll_kband_scan_VAL_rg_force_da_pxp_tx_termcal_en(val) REG_FLD_VAL(rg_da_pxp_jcpll_kband_scan_FLD_rg_force_da_pxp_tx_termcal_en, (val))
#define rg_da_pxp_jcpll_kband_scan_VAL_rg_sel_da_pxp_jcpll_kband_scan(val) REG_FLD_VAL(rg_da_pxp_jcpll_kband_scan_FLD_rg_sel_da_pxp_jcpll_kband_scan, (val))
#define rg_da_pxp_jcpll_kband_scan_VAL_rg_da_pxp_jcpll_kband_scan(val) REG_FLD_VAL(rg_da_pxp_jcpll_kband_scan_FLD_rg_da_pxp_jcpll_kband_scan, (val))

#define rg_force_da_pxp_rx_fe_gain_ctrl_VAL_rg_force_sel_da_pxp_rx_sigdet_os(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_sigdet_os, (val))
#define rg_force_da_pxp_rx_fe_gain_ctrl_VAL_rg_force_da_pxp_rx_sigdet_os(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_sigdet_os, (val))
#define rg_force_da_pxp_rx_fe_gain_ctrl_VAL_rg_force_sel_da_pxp_rx_fe_gain_ctrl(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_sel_da_pxp_rx_fe_gain_ctrl, (val))
#define rg_force_da_pxp_rx_fe_gain_ctrl_VAL_rg_force_da_pxp_rx_fe_gain_ctrl(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_gain_ctrl_FLD_rg_force_da_pxp_rx_fe_gain_ctrl, (val))

#define rg_force_da_pxp_aeq_rmtxskip_VAL_rg_force_sel_da_pxp_aeq_rxeqeval(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rxeqeval, (val))
#define rg_force_da_pxp_aeq_rmtxskip_VAL_rg_force_da_pxp_aeq_rxeqeval(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rxeqeval, (val))
#define rg_force_da_pxp_aeq_rmtxskip_VAL_rg_force_sel_da_pxp_aeq_rmtxskip(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_sel_da_pxp_aeq_rmtxskip, (val))
#define rg_force_da_pxp_aeq_rmtxskip_VAL_rg_force_da_pxp_aeq_rmtxskip(val) REG_FLD_VAL(rg_force_da_pxp_aeq_rmtxskip_FLD_rg_force_da_pxp_aeq_rmtxskip, (val))

#define rg_force_da_pxp_rx_fe_pwdb_VAL_rg_force_sel_da_pxp_rx_pdoscal_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_pdoscal_en, (val))
#define rg_force_da_pxp_rx_fe_pwdb_VAL_rg_force_da_pxp_rx_pdoscal_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_pdoscal_en, (val))
#define rg_force_da_pxp_rx_fe_pwdb_VAL_rg_force_sel_da_pxp_rx_fe_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_sel_da_pxp_rx_fe_pwdb, (val))
#define rg_force_da_pxp_rx_fe_pwdb_VAL_rg_force_da_pxp_rx_fe_pwdb(val) REG_FLD_VAL(rg_force_da_pxp_rx_fe_pwdb_FLD_rg_force_da_pxp_rx_fe_pwdb, (val))

#define rg_force_da_pxp_rx_sigdet_cal_en_VAL_rg_force_sel_da_pxp_tdc_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_tdc_en, (val))
#define rg_force_da_pxp_rx_sigdet_cal_en_VAL_rg_force_da_pxp_tdc_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_tdc_en, (val))
#define rg_force_da_pxp_rx_sigdet_cal_en_VAL_rg_force_sel_da_pxp_rx_sigdet_cal_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_sel_da_pxp_rx_sigdet_cal_en, (val))
#define rg_force_da_pxp_rx_sigdet_cal_en_VAL_rg_force_da_pxp_rx_sigdet_cal_en(val) REG_FLD_VAL(rg_force_da_pxp_rx_sigdet_cal_en_FLD_rg_force_da_pxp_rx_sigdet_cal_en, (val))

#define ADD_DIG_RESERVE_5_VAL_rg_dig_reserve_5(val)            REG_FLD_VAL(ADD_DIG_RESERVE_5_FLD_rg_dig_reserve_5, (val))

#define ADD_DIG_RESERVE_6_VAL_rg_dig_reserve_6(val)            REG_FLD_VAL(ADD_DIG_RESERVE_6_FLD_rg_dig_reserve_6, (val))

#define ADD_DIG_RESERVE_7_VAL_rg_dig_reserve_7(val)            REG_FLD_VAL(ADD_DIG_RESERVE_7_FLD_rg_dig_reserve_7, (val))

#define ADD_DIG_RESERVE_8_VAL_rg_dig_reserve_8(val)            REG_FLD_VAL(ADD_DIG_RESERVE_8_FLD_rg_dig_reserve_8, (val))

#define ADD_DIG_RESERVE_9_VAL_rg_dig_reserve_9(val)            REG_FLD_VAL(ADD_DIG_RESERVE_9_FLD_rg_dig_reserve_9, (val))

#define ADD_DIG_RESERVE_10_VAL_rg_dig_reserve_10(val)          REG_FLD_VAL(ADD_DIG_RESERVE_10_FLD_rg_dig_reserve_10, (val))

#define ADD_DIG_RESERVE_11_VAL_rg_dig_reserve_11(val)          REG_FLD_VAL(ADD_DIG_RESERVE_11_FLD_rg_dig_reserve_11, (val))

#define ADD_DIG_RESERVE_12_VAL_rg_dig_reserve_12(val)          REG_FLD_VAL(ADD_DIG_RESERVE_12_FLD_rg_dig_reserve_12, (val))

#define ADD_DIG_RESERVE_13_VAL_rg_dig_reserve_13(val)          REG_FLD_VAL(ADD_DIG_RESERVE_13_FLD_rg_dig_reserve_13, (val))

#define ADD_DIG_RESERVE_14_VAL_rg_dig_reserve_14(val)          REG_FLD_VAL(ADD_DIG_RESERVE_14_FLD_rg_dig_reserve_14, (val))

#define ADD_DIG_RO_RESERVE_5_VAL_ro_dig_reserve_5(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_5_FLD_ro_dig_reserve_5, (val))

#define ADD_DIG_RO_RESERVE_6_VAL_ro_dig_reserve_6(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_6_FLD_ro_dig_reserve_6, (val))

#define ADD_DIG_RO_RESERVE_7_VAL_ro_dig_reserve_7(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_7_FLD_ro_dig_reserve_7, (val))

#define ADD_DIG_RO_RESERVE_8_VAL_ro_dig_reserve_8(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_8_FLD_ro_dig_reserve_8, (val))

#define ADD_DIG_RO_RESERVE_9_VAL_ro_dig_reserve_9(val)         REG_FLD_VAL(ADD_DIG_RO_RESERVE_9_FLD_ro_dig_reserve_9, (val))

#define ADD_DIG_RESERVE_15_VAL_rg_dig_reserve_15(val)          REG_FLD_VAL(ADD_DIG_RESERVE_15_FLD_rg_dig_reserve_15, (val))

#define ADD_DIG_RESERVE_16_VAL_rg_dig_reserve_16(val)          REG_FLD_VAL(ADD_DIG_RESERVE_16_FLD_rg_dig_reserve_16, (val))

#define ADD_DIG_RESERVE_17_VAL_rg_dig_reserve_17(val)          REG_FLD_VAL(ADD_DIG_RESERVE_17_FLD_rg_dig_reserve_17, (val))

#define ADD_DIG_RESERVE_18_VAL_rg_dig_reserve_18(val)          REG_FLD_VAL(ADD_DIG_RESERVE_18_FLD_rg_dig_reserve_18, (val))

#define ADD_DIG_RESERVE_19_VAL_rg_dig_reserve_19(val)          REG_FLD_VAL(ADD_DIG_RESERVE_19_FLD_rg_dig_reserve_19, (val))

#define ADD_DIG_RESERVE_20_VAL_rg_dig_reserve_20(val)          REG_FLD_VAL(ADD_DIG_RESERVE_20_FLD_rg_dig_reserve_20, (val))

#define ADD_DIG_RESERVE_21_VAL_rg_dig_reserve_21(val)          REG_FLD_VAL(ADD_DIG_RESERVE_21_FLD_rg_dig_reserve_21, (val))

#define ADD_DIG_RESERVE_22_VAL_rg_dig_reserve_22(val)          REG_FLD_VAL(ADD_DIG_RESERVE_22_FLD_rg_dig_reserve_22, (val))

#define ADD_DIG_RESERVE_23_VAL_rg_dig_reserve_23(val)          REG_FLD_VAL(ADD_DIG_RESERVE_23_FLD_rg_dig_reserve_23, (val))

#define ADD_DIG_RESERVE_24_VAL_rg_dig_reserve_24(val)          REG_FLD_VAL(ADD_DIG_RESERVE_24_FLD_rg_dig_reserve_24, (val))

#define ADD_DIG_RESERVE_25_VAL_rg_dig_reserve_25(val)          REG_FLD_VAL(ADD_DIG_RESERVE_25_FLD_rg_dig_reserve_25, (val))

#define ADD_DIG_RESERVE_26_VAL_rg_dig_reserve_26(val)          REG_FLD_VAL(ADD_DIG_RESERVE_26_FLD_rg_dig_reserve_26, (val))

#define ADD_DIG_RESERVE_27_VAL_rg_dig_reserve_27(val)          REG_FLD_VAL(ADD_DIG_RESERVE_27_FLD_rg_dig_reserve_27, (val))

#define ADD_DIG_RESERVE_28_VAL_rg_dig_reserve_28(val)          REG_FLD_VAL(ADD_DIG_RESERVE_28_FLD_rg_dig_reserve_28, (val))

#define ADD_DIG_RESERVE_29_VAL_rg_dig_reserve_29(val)          REG_FLD_VAL(ADD_DIG_RESERVE_29_FLD_rg_dig_reserve_29, (val))

#define ADD_DIG_RESERVE_30_VAL_rg_dig_reserve_30(val)          REG_FLD_VAL(ADD_DIG_RESERVE_30_FLD_rg_dig_reserve_30, (val))

#define ADD_DIG_RESERVE_31_VAL_rg_dig_reserve_31(val)          REG_FLD_VAL(ADD_DIG_RESERVE_31_FLD_rg_dig_reserve_31, (val))

#define ADD_DIG_RESERVE_32_VAL_rg_dig_reserve_32(val)          REG_FLD_VAL(ADD_DIG_RESERVE_32_FLD_rg_dig_reserve_32, (val))

#define ADD_DIG_RESERVE_33_VAL_rg_dig_reserve_33(val)          REG_FLD_VAL(ADD_DIG_RESERVE_33_FLD_rg_dig_reserve_33, (val))

#define ADD_DIG_RESERVE_34_VAL_rg_dig_reserve_34(val)          REG_FLD_VAL(ADD_DIG_RESERVE_34_FLD_rg_dig_reserve_34, (val))

#define ADD_DIG_RESERVE_35_VAL_rg_dig_reserve_35(val)          REG_FLD_VAL(ADD_DIG_RESERVE_35_FLD_rg_dig_reserve_35, (val))

#define ADD_DIG_RESERVE_36_VAL_rg_dig_reserve_36(val)          REG_FLD_VAL(ADD_DIG_RESERVE_36_FLD_rg_dig_reserve_36, (val))

#define ADD_DIG_RESERVE_37_VAL_rg_dig_reserve_37(val)          REG_FLD_VAL(ADD_DIG_RESERVE_37_FLD_rg_dig_reserve_37, (val))

#define ADD_DIG_RESERVE_38_VAL_rg_dig_reserve_38(val)          REG_FLD_VAL(ADD_DIG_RESERVE_38_FLD_rg_dig_reserve_38, (val))

#define ADD_DIG_RESERVE_39_VAL_rg_dig_reserve_39(val)          REG_FLD_VAL(ADD_DIG_RESERVE_39_FLD_rg_dig_reserve_39, (val))

#define ADD_DIG_RESERVE_40_VAL_rg_dig_reserve_40(val)          REG_FLD_VAL(ADD_DIG_RESERVE_40_FLD_rg_dig_reserve_40, (val))

#define ADD_DIG_RESERVE_41_VAL_rg_dig_reserve_41(val)          REG_FLD_VAL(ADD_DIG_RESERVE_41_FLD_rg_dig_reserve_41, (val))

#define ADD_DIG_RESERVE_42_VAL_rg_dig_reserve_42(val)          REG_FLD_VAL(ADD_DIG_RESERVE_42_FLD_rg_dig_reserve_42, (val))

#define ADD_DIG_RESERVE_43_VAL_rg_dig_reserve_43(val)          REG_FLD_VAL(ADD_DIG_RESERVE_43_FLD_rg_dig_reserve_43, (val))

#define ADD_DIG_RESERVE_44_VAL_rg_dig_reserve_44(val)          REG_FLD_VAL(ADD_DIG_RESERVE_44_FLD_rg_dig_reserve_44, (val))

#define ADD_DIG_RESERVE_45_VAL_rg_dig_reserve_45(val)          REG_FLD_VAL(ADD_DIG_RESERVE_45_FLD_rg_dig_reserve_45, (val))

#define ADD_DIG_RESERVE_46_VAL_rg_dig_reserve_46(val)          REG_FLD_VAL(ADD_DIG_RESERVE_46_FLD_rg_dig_reserve_46, (val))

#define ADD_DIG_RESERVE_47_VAL_rg_dig_reserve_47(val)          REG_FLD_VAL(ADD_DIG_RESERVE_47_FLD_rg_dig_reserve_47, (val))

#define ADD_DIG_RESERVE_48_VAL_rg_dig_reserve_48(val)          REG_FLD_VAL(ADD_DIG_RESERVE_48_FLD_rg_dig_reserve_48, (val))

#define BEN_CTRL_0_VAL_rg_da_ben_force_value(val)              REG_FLD_VAL(BEN_CTRL_0_FLD_rg_da_ben_force_value, (val))
#define BEN_CTRL_0_VAL_rg_ad_ben_keep_time_clr(val)            REG_FLD_VAL(BEN_CTRL_0_FLD_rg_ad_ben_keep_time_clr, (val))
#define BEN_CTRL_0_VAL_rg_ad_ben_alarm_times_clr(val)          REG_FLD_VAL(BEN_CTRL_0_FLD_rg_ad_ben_alarm_times_clr, (val))
#define BEN_CTRL_0_VAL_rg_ad_ben_alarm_clr(val)                REG_FLD_VAL(BEN_CTRL_0_FLD_rg_ad_ben_alarm_clr, (val))
#define BEN_CTRL_0_VAL_rg_ad_ben_alarm_en(val)                 REG_FLD_VAL(BEN_CTRL_0_FLD_rg_ad_ben_alarm_en, (val))
#define BEN_CTRL_0_VAL_rg_ad_ben_cnt_clr(val)                  REG_FLD_VAL(BEN_CTRL_0_FLD_rg_ad_ben_cnt_clr, (val))
#define BEN_CTRL_0_VAL_rg_ad_ben_stop_cnt(val)                 REG_FLD_VAL(BEN_CTRL_0_FLD_rg_ad_ben_stop_cnt, (val))
#define BEN_CTRL_0_VAL_rg_da_ben_force_mode(val)               REG_FLD_VAL(BEN_CTRL_0_FLD_rg_da_ben_force_mode, (val))

#define BEN_CTRL_1_VAL_rg_ad_ben_alarm_thr(val)                REG_FLD_VAL(BEN_CTRL_1_FLD_rg_ad_ben_alarm_thr, (val))

#define BEN_STS_0_VAL_ro_ad_ben_cnt(val)                       REG_FLD_VAL(BEN_STS_0_FLD_ro_ad_ben_cnt, (val))

#define BEN_STS_1_VAL_ro_ad_ben_alarm(val)                     REG_FLD_VAL(BEN_STS_1_FLD_ro_ad_ben_alarm, (val))
#define BEN_STS_1_VAL_ro_ad_ben_out(val)                       REG_FLD_VAL(BEN_STS_1_FLD_ro_ad_ben_out, (val))

#define BEN_STS_2_VAL_ro_ad_ben_alarm_times(val)               REG_FLD_VAL(BEN_STS_2_FLD_ro_ad_ben_alarm_times, (val))

#define BEN_STS_3_VAL_ro_ad_ben_keep_max(val)                  REG_FLD_VAL(BEN_STS_3_FLD_ro_ad_ben_keep_max, (val))

#define TX_SD_CTRL_0_VAL_rg_tx_sd_keep_time_clr(val)           REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_keep_time_clr, (val))
#define TX_SD_CTRL_0_VAL_rg_tx_sd_alarm_times_clr(val)         REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_times_clr, (val))
#define TX_SD_CTRL_0_VAL_rg_tx_sd_alarm_clr(val)               REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_clr, (val))
#define TX_SD_CTRL_0_VAL_rg_tx_sd_alarm_en(val)                REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_alarm_en, (val))
#define TX_SD_CTRL_0_VAL_rg_tx_sd_cnt_clr(val)                 REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_cnt_clr, (val))
#define TX_SD_CTRL_0_VAL_rg_tx_sd_stop_cnt(val)                REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_stop_cnt, (val))
#define TX_SD_CTRL_0_VAL_rg_tx_sd_inv(val)                     REG_FLD_VAL(TX_SD_CTRL_0_FLD_rg_tx_sd_inv, (val))

#define TX_SD_CTRL_1_VAL_rg_tx_sd_alarm_thr(val)               REG_FLD_VAL(TX_SD_CTRL_1_FLD_rg_tx_sd_alarm_thr, (val))

#define TX_SD_STS_0_VAL_ro_tx_sd_cnt(val)                      REG_FLD_VAL(TX_SD_STS_0_FLD_ro_tx_sd_cnt, (val))

#define TX_SD_STS_1_VAL_ro_tx_sd_alarm(val)                    REG_FLD_VAL(TX_SD_STS_1_FLD_ro_tx_sd_alarm, (val))
#define TX_SD_STS_1_VAL_ro_tx_sd_out(val)                      REG_FLD_VAL(TX_SD_STS_1_FLD_ro_tx_sd_out, (val))

#define TX_SD_STS_2_VAL_ro_tx_sd_alarm_times(val)              REG_FLD_VAL(TX_SD_STS_2_FLD_ro_tx_sd_alarm_times, (val))

#define TX_SD_STS_3_VAL_ro_tx_sd_keep_max(val)                 REG_FLD_VAL(TX_SD_STS_3_FLD_ro_tx_sd_keep_max, (val))

#ifdef __cplusplus
}
#endif

#endif // __ponxfi_csr_pma_REGS_H__

