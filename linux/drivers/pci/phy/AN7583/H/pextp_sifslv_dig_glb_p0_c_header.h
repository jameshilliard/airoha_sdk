#ifndef __pextp_sifslv_dig_glb_p0_REGS_H__
#define __pextp_sifslv_dig_glb_p0_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- pextp_sifslv_dig_glb_p0 Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_xtp_prb_sel_l          : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_xtp_prb_sel_h          : 4;
        FIELD rsv_12                    : 20;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_00, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_00;

typedef struct
{
    

        FIELD rg_xtp_misc_prb_sel_l     : 7;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_misc_prb_sel_h     : 7;
        FIELD rsv_15                    : 17;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_04, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_04;

typedef struct
{
    

        FIELD rg_xtp_ckgen_prb_sel_l    : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ckgen_prb_sel_h    : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_08, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_08;

typedef struct
{
    

        FIELD rg_xtp_efuse_prb_sel_l    : 8;
        FIELD rg_xtp_efuse_prb_sel_h    : 8;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_0C, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_0C;

typedef struct
{
    

        FIELD rg_xtp_ln0_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln0_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_10, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_10;

typedef struct
{
    

        FIELD rg_xtp_ln1_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln1_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_14, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_14;

typedef struct
{
    

        FIELD rg_xtp_ln2_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln2_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_18, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_18;

typedef struct
{
    

        FIELD rg_xtp_ln3_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln3_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_1C, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_1C;

typedef struct
{
    

        FIELD rg_xtp_reset              : 1;
        FIELD rg_xtp_vipsim             : 1;
        FIELD rsv_2                     : 6;
        FIELD rg_xtp_tx_prb_div2        : 1;
        FIELD rg_xtp_tx_prb_div2_phsel  : 1;
        FIELD rg_xtp_tx_prb_ext         : 1;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_rx_prb_div2        : 1;
        FIELD rsv_13                    : 2;
        FIELD rg_xtp_t2rlb_dig_en       : 1;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_20, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_20;

typedef struct
{
    

        FIELD rg_xtp_cosim_rxdet_stable : 1;
        FIELD rg_xtp_cosim_tpll_stable  : 1;
        FIELD rg_xtp_cosim_tx_vcm_stable : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_cosim_rx           : 1;
        FIELD rg_xtp_cosim_cdrk         : 1;
        FIELD rsv_6                     : 26;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_24, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_24;

typedef struct
{
    

        FIELD rg_xtp_phy_enable         : 1;
        FIELD rg_xtp_phy_clkreq_n_in_async : 1;
        FIELD rg_xtp_frc_pcie_mode      : 1;
        FIELD rg_xtp_pcie_mode          : 1;
        FIELD rg_xtp_frc_mac_l1ss_en    : 1;
        FIELD rg_xtp_mac_l1ss_en        : 1;
        FIELD rg_xtp_frc_mac_clkreq_n   : 1;
        FIELD rg_xtp_mac_clkreq_n       : 1;
        FIELD rg_xtp_frc_mac_rx_ei_dis  : 1;
        FIELD rg_xtp_mac_rx_ei_dis      : 1;
        FIELD rg_xtp_frc_mac_tx_cm_dis  : 1;
        FIELD rg_xtp_mac_tx_cm_dis      : 1;
        FIELD rg_xtp_frc_phy_clkreq_n_in : 1;
        FIELD rg_xtp_phy_clkreq_n_in    : 1;
        FIELD rg_xtp_frc_xtal_type      : 1;
        FIELD rg_xtp_xtal_type          : 1;
        FIELD rg_xtp_frc_active         : 1;
        FIELD rg_xtp_active             : 1;
        FIELD rg_xtp_active_mac_clkreq_n : 1;
        FIELD rg_xtp_frc_all_cal_done   : 1;
        FIELD rg_xtp_all_cal_done       : 1;
        FIELD rg_xtp_frc_txck_all_cal_done : 1;
        FIELD rg_xtp_txck_all_cal_done  : 1;
        FIELD rg_xtp_frc_tpll_stable    : 1;
        FIELD rg_xtp_tpll_stable        : 1;
        FIELD rg_xtp_frc_txck_tpll_stable : 1;
        FIELD rg_xtp_txck_tpll_stable   : 1;
        FIELD rg_xtp_frc_tpll_rate      : 1;
        FIELD rg_xtp_tpll_rate          : 2;
        FIELD rg_xtp_tx_ptg_en          : 1;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_28, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_28;

typedef struct
{
    

        FIELD rg_xtp_frc_rx_in_sw       : 1;
        FIELD rg_xtp_rx_in_sw           : 1;
        FIELD rg_xtp_frc_mac_l12_prd    : 1;
        FIELD rg_xtp_mac_l12_prd        : 1;
        FIELD rg_xtp_pipe_retime_en     : 4;
        FIELD rsv_8                     : 24;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_2C, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_2C;

typedef struct
{
    

        FIELD rg_xtp_frc_xtal_stable    : 1;
        FIELD rg_xtp_xtal_stable        : 1;
        FIELD rg_xtp_frc_xtal_req       : 1;
        FIELD rg_xtp_xtal_req           : 1;
        FIELD rg_xtp_frc_ckbg_xtal_stable : 1;
        FIELD rg_xtp_ckbg_xtal_stable   : 1;
        FIELD rg_xtp_frc_ckbg_coarse_bg_stable : 1;
        FIELD rg_xtp_ckbg_coarse_bg_stable : 1;
        FIELD rg_xtp_frc_ckbg_ckdet_en_stable : 1;
        FIELD rg_xtp_ckbg_ckdet_en_stable : 1;
        FIELD rg_xtp_frc_ad_xtp_glb_ckdet_out : 1;
        FIELD rg_xtp_ad_xtp_glb_ckdet_out : 1;
        FIELD rg_xtp_frc_ckbg_bg_stable : 1;
        FIELD rg_xtp_ckbg_bg_stable     : 1;
        FIELD rg_xtp_frc_ckbg_cfg_ck_req : 1;
        FIELD rg_xtp_ckbg_cfg_ck_req    : 1;
        FIELD rg_xtp_ckbg_xtal_stb_t_sel : 10;
        FIELD rg_xtp_misc_mac_l12_prd_dis : 1;
        FIELD rsv_27                    : 5;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_30, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_30;

typedef struct
{
    

        FIELD rg_xtp_ckbg_bg_stb_t_sel  : 8;
        FIELD rg_xtp_ckdet_en_stb_t_sel : 8;
        FIELD rg_xtp_ad_ckdet_out_reach : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_xtp_ckbg_ckdet_time_sel : 8;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_34, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_34;

typedef struct
{
    

        FIELD rg_xtp_frc_tpll_req       : 1;
        FIELD rsv_1                     : 1;
        FIELD rg_xtp_tpll_set_stb_t_sel : 6;
        FIELD rg_xtp_tpll_en_stb_t_sel  : 2;
        FIELD rg_xtp_tpll_iso_en_stb_t_sel : 6;
        FIELD rg_xtp_tpll_go_off_stb_t_sel : 2;
        FIELD rg_xtp_tpll_en_off_stb_t_sel : 6;
        FIELD rg_xtp_tpll_pre_off_stb_t_sel : 6;
        FIELD rsv_30                    : 1;
        FIELD rg_xtp_pipe_rate_sel      : 1;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_38, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_38;

typedef struct
{
    

        FIELD rg_xtp_vcm_cmkp_stb_t_sel : 4;
        FIELD rsv_4                     : 4;
        FIELD rg_xtp_vcm_drv_en_stb_t_sel : 8;
        FIELD rg_xtp_vcm_tx_vcm_sel     : 1;
        FIELD rg_xtp_vcm_skp_cal_done   : 1;
        FIELD rg_xtp_vcm_skp_wait_tx    : 1;
        FIELD rg_xtp_vcm_frc_req        : 1;
        FIELD rg_xtp_vcm_req            : 1;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_vcm_pre_off_stb_t_sel : 8;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_3C, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_3C;

typedef struct
{
    

        FIELD rg_xtp_txpd_e1toe0s_sel   : 1;
        FIELD rg_xtp_txpd_e1toe2_sel    : 1;
        FIELD rg_xtp_txpd_e0stoe1_sel   : 1;
        FIELD rg_xtp_txpd_e0stoe2_sel   : 1;
        FIELD rsv_4                     : 4;
        FIELD rg_xtp_txpd_bias_en_stb_t_sel : 8;
        FIELD rg_xtp_txpd_drv_en_stb_t_sel : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_txpd_e0_out_hang_t_sel : 6;
        FIELD rg_xtp_rxdet_drv_en_off_stb_t_sel : 2;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_40, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_40;

typedef struct
{
    

        FIELD rg_xtp_rxdet_vcm_off_stb_t_sel : 8;
        FIELD rg_xtp_rxdet_en_stb_t_sel : 8;
        FIELD rg_xtp_rxdet_finish_stb_t_sel : 8;
        FIELD rg_xtp_txpd_tx_data_en_dly : 4;
        FIELD rg_xtp_txpd_rxdet_done_cdt : 1;
        FIELD rg_xtp_rxdet_latch_stb_t_sel : 3;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_44, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_44;

typedef struct
{
    

        FIELD rg_xtp_frc_pdc_tpll_req   : 1;
        FIELD rg_xtp_pdc_tpll_req       : 1;
        FIELD rg_xtp_frc_pdc_vcm_req    : 1;
        FIELD rg_xtp_pdc_vcm_req        : 1;
        FIELD rg_xtp_pdc_pipe_p0_ignore_rx : 1;
        FIELD rg_xtp_pdc_pipe_p0s_ignore_rx : 1;
        FIELD rg_xtp_pdc_pipe_p1_ignore_rx : 1;
        FIELD rg_xtp_pdc_pipe_p2_ignore_rx : 1;
        FIELD rg_xtp_pdc_phy_status_updt : 1;
        FIELD rg_xtp_pdc_vcm_req_sel    : 1;
        FIELD rg_xtp_pdc_tx_ck_en       : 1;
        FIELD rg_xtp_pdc_pipe_p0s_sel_rx : 1;
        FIELD rsv_12                    : 4;
        FIELD rg_xtp_txpd_tx_drv_g1_dly : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_txpd_tx_drv_g234_dly : 6;
        FIELD rg_xtp_txpd_tx_drv_en_raw : 1;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_48, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_48;

typedef struct
{
    

        FIELD rg_xtp_cdrk_tpll_req_cnt  : 8;
        FIELD rg_xtp_cdrk_set_cnt       : 4;
        FIELD rsv_12                    : 4;
        FIELD rg_xtp_cdrk_cal_cnt       : 8;
        FIELD rg_xtp_cdrk_retry_cnt     : 4;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_4C, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_4C;

typedef struct
{
    

        FIELD rg_xtp_clkreq_wake_sel    : 1;
        FIELD rg_xtp_clkreq_pad_wake_sel : 1;
        FIELD rg_xtp_frc_phy_clkreq_n_out : 1;
        FIELD rg_xtp_phy_clkreq_n_out   : 1;
        FIELD rg_xtp_frc_phy_clkreq_n_en : 1;
        FIELD rg_xtp_phy_clkreq_n_en    : 1;
        FIELD rg_xtp_frc_ckm_en         : 1;
        FIELD rg_xtp_ckm_en             : 1;
        FIELD rg_xtp_frc_ckm_intck_req  : 1;
        FIELD rg_xtp_ckm_intck_req      : 1;
        FIELD rg_xtp_frc_ckm_padck_req  : 1;
        FIELD rg_xtp_ckm_padck_req      : 1;
        FIELD rg_xtp_ckm_en_lgc_l1      : 1;
        FIELD rg_xtp_ckm_en_l1s0        : 1;
        FIELD rg_xtp_ckm_en_l1s1        : 1;
        FIELD rg_xtp_ckm_en_l1s2        : 1;
        FIELD rg_xtp_phy_clkreq_out_n_en_ep_lgc : 1;
        FIELD rg_xtp_phy_clkreq_out_n_en_rc_lgc : 1;
        FIELD rg_xtp_phy_status_sync_dly : 6;
        FIELD rg_xtp_frc_ldo_en         : 1;
        FIELD rg_xtp_ldo_en             : 1;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_50, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_50;

typedef struct
{
    

        FIELD rg_xtp_ckgen_tpll_stable  : 1;
        FIELD rg_xtp_ckgen_tx_ck_en     : 1;
        FIELD rg_xtp_ckgen_ck_div2_en   : 1;
        FIELD rg_xtp_ckgen_ck_div4_en   : 1;
        FIELD rg_xtp_ckgen_ref_ck_en    : 1;
        FIELD rsv_5                     : 27;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_60, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_60;

typedef struct
{
    

        FIELD rg_xtp_ckgen_ln0_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln0_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln0_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln0_rx_ck_div_en : 1;
        FIELD rsv_4                     : 4;
        FIELD rg_xtp_ckgen_ln1_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln1_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln1_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln1_rx_ck_div_en : 1;
        FIELD rsv_12                    : 4;
        FIELD rg_xtp_ckgen_ln2_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln2_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln2_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln2_rx_ck_div_en : 1;
        FIELD rsv_20                    : 4;
        FIELD rg_xtp_ckgen_ln3_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln3_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln3_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln3_rx_ck_div_en : 1;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_64, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_64;

typedef struct
{
    

        FIELD rg_xtp_ckgen_ln4_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln4_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln4_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln4_rx_ck_div_en : 1;
        FIELD rsv_4                     : 4;
        FIELD rg_xtp_ckgen_ln5_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln5_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln5_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln5_rx_ck_div_en : 1;
        FIELD rsv_12                    : 4;
        FIELD rg_xtp_ckgen_ln6_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln6_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln6_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln6_rx_ck_div_en : 1;
        FIELD rsv_20                    : 4;
        FIELD rg_xtp_ckgen_ln7_rx_ck_stable : 1;
        FIELD rg_xtp_ckgen_ln7_rx_nt_ck_inv : 1;
        FIELD rg_xtp_ckgen_ln7_rx_ck_en : 1;
        FIELD rg_xtp_ckgen_ln7_rx_ck_div_en : 1;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_68, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_68;

typedef struct
{
    

        FIELD rg_xtp_pipe_in_fr_rg      : 1;
        FIELD rg_xtp_pipe_out_fr_rg     : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_xtp_pipe_updt          : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_frc_pipe_power_down_async : 1;
        FIELD rsv_9                     : 1;
        FIELD rg_xtp_pipe_power_down_async : 2;
        FIELD rg_xtp_pipe_power_down_sync : 2;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_pipe_rate          : 2;
        FIELD rg_xtp_pipe_tx_detect_rx  : 1;
        FIELD rg_xtp_pipe_tx_margin     : 3;
        FIELD rg_xtp_pipe_tx_swing      : 1;
        FIELD rg_xtp_pipe_block_align_control : 1;
        FIELD rg_xtp_pipe_rx_eq_in_progress : 2;
        FIELD rg_xtp_pipe_rx_eq_eval    : 1;
        FIELD rg_xtp_pipe_phy_status    : 1;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_70, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_70;

typedef struct
{
    

        FIELD rg_xtp_glb_avd10_on       : 1;
        FIELD rg_xtp_frc_glb_avd10_on   : 1;
        FIELD rg_xtp_glb_bias_en        : 1;
        FIELD rg_xtp_frc_glb_bias_en    : 1;
        FIELD rg_xtp_glb_bias_lpf_en    : 1;
        FIELD rg_xtp_frc_glb_bias_lpf_en : 1;
        FIELD rg_xtp_glb_ckdet_en       : 1;
        FIELD rg_xtp_frc_glb_ckdet_en   : 1;
        FIELD rsv_8                     : 8;
        FIELD rg_xtp_glbs_avd10_on      : 1;
        FIELD rg_xtp_frc_glbs_avd10_on  : 1;
        FIELD rg_xtp_glbs_bias_en       : 1;
        FIELD rg_xtp_frc_glbs_bias_en   : 1;
        FIELD rg_xtp_glbs_bias_lpf_en   : 1;
        FIELD rg_xtp_frc_glbs_bias_lpf_en : 1;
        FIELD rg_xtp_glbs_ckdet_en      : 1;
        FIELD rg_xtp_frc_glbs_ckdet_en  : 1;
        FIELD rsv_24                    : 8;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_74, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_74;

typedef struct
{
    

        FIELD rg_xtp_ln4_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln4_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_80, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_80;

typedef struct
{
    

        FIELD rg_xtp_ln5_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln5_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_84, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_84;

typedef struct
{
    

        FIELD rg_xtp_ln6_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln6_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_88, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_88;

typedef struct
{
    

        FIELD rg_xtp_ln7_prb_sel_l      : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln7_prb_sel_h      : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_8C, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_8C;

typedef struct
{
    

        FIELD rg_xtp_glb_dummy          : 32;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_A0, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_A0;

typedef struct
{
    

        FIELD rg_xtp_frc_tx_margin      : 1;
        FIELD rg_xtp_frc_tx_swing       : 1;
        FIELD rg_xtp_frc_rx_polarity    : 1;
        FIELD rg_xtp_pclk_ddr_ck_sel    : 1;
        FIELD rsv_4                     : 28;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_A4, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_A4;

typedef struct
{
    

        FIELD rgs_xtp_txpd_tx_cs        : 5;
        FIELD rgs_xtp_vcm_cs            : 3;
        FIELD rgs_xtp_tpll_cs           : 4;
        FIELD rsv_12                    : 20;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_B0, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_B0;

typedef struct
{
    

        FIELD rgs_xtp_pipe_power_down_sync : 2;
        FIELD rgs_xtp_pipe_rate         : 2;
        FIELD rgs_xtp_pipe_tx_detect_rx : 1;
        FIELD rgs_xtp_pipe_tx_margin    : 3;
        FIELD rgs_xtp_pipe_tx_swing     : 1;
        FIELD rgs_xtp_pipe_block_align_control : 1;
        FIELD rgs_xtp_pipe_rx_eq_in_progress : 2;
        FIELD rgs_xtp_pipe_rx_eq_eval   : 1;
        FIELD rgs_xtp_pipe_phy_status   : 1;
        FIELD rg_xtp_ckm_en_l1s1_dev    : 1;
        FIELD rsv_15                    : 17;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_C0, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_C0;

typedef struct
{
    

        FIELD rgs_xtp_probe_out         : 16;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_D0, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_D0;

typedef struct
{
    

        FIELD rgs_xtp_version_code      : 32;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E0, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E0;

typedef struct
{
    

        FIELD rgs_xtp_project_code      : 32;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E4, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E4;

typedef struct
{
    

        FIELD rsv_0                     : 2;
        FIELD rg_xtp_frc_glb_clk_sel    : 1;
        FIELD rg_xtp_glb_clk_sel        : 5;
        FIELD rsv_8                     : 24;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E8, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E8;

typedef struct
{
    

        FIELD rg_xtp_glb_clk_sel_rc     : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_glb_clk_sel_ep     : 5;
        FIELD rsv_13                    : 19;
    
    
} pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_EC, *Ppextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_EC;

// ----------------- pextp_sifslv_dig_glb_p0  Grouping Definitions -------------------
// ----------------- pextp_sifslv_dig_glb_p0 Register Definition -------------------
#if 0
typedef volatile 
{
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_00 PEXTP_DIG_GLB_00; // 0000
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_04 PEXTP_DIG_GLB_04; // 0004
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_08 PEXTP_DIG_GLB_08; // 0008
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_0C PEXTP_DIG_GLB_0C; // 000C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_10 PEXTP_DIG_GLB_10; // 0010
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_14 PEXTP_DIG_GLB_14; // 0014
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_18 PEXTP_DIG_GLB_18; // 0018
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_1C PEXTP_DIG_GLB_1C; // 001C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_20 PEXTP_DIG_GLB_20; // 0020
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_24 PEXTP_DIG_GLB_24; // 0024
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_28 PEXTP_DIG_GLB_28; // 0028
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_2C PEXTP_DIG_GLB_2C; // 002C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_30 PEXTP_DIG_GLB_30; // 0030
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_34 PEXTP_DIG_GLB_34; // 0034
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_38 PEXTP_DIG_GLB_38; // 0038
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_3C PEXTP_DIG_GLB_3C; // 003C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_40 PEXTP_DIG_GLB_40; // 0040
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_44 PEXTP_DIG_GLB_44; // 0044
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_48 PEXTP_DIG_GLB_48; // 0048
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_4C PEXTP_DIG_GLB_4C; // 004C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_50 PEXTP_DIG_GLB_50; // 0050
    UINT32                          rsv_0054[3];      // 0054..005C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_60 PEXTP_DIG_GLB_60; // 0060
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_64 PEXTP_DIG_GLB_64; // 0064
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_68 PEXTP_DIG_GLB_68; // 0068
    UINT32                          rsv_006C;         // 006C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_70 PEXTP_DIG_GLB_70; // 0070
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_74 PEXTP_DIG_GLB_74; // 0074
    UINT32                          rsv_0078[2];      // 0078..007C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_80 PEXTP_DIG_GLB_80; // 0080
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_84 PEXTP_DIG_GLB_84; // 0084
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_88 PEXTP_DIG_GLB_88; // 0088
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_8C PEXTP_DIG_GLB_8C; // 008C
    UINT32                          rsv_0090[4];      // 0090..009C
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_A0 PEXTP_DIG_GLB_A0; // 00A0
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_A4 PEXTP_DIG_GLB_A4; // 00A4
    UINT32                          rsv_00A8[2];      // 00A8..00AC
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_B0 PEXTP_DIG_GLB_B0; // 00B0
    UINT32                          rsv_00B4[3];      // 00B4..00BC
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_C0 PEXTP_DIG_GLB_C0; // 00C0
    UINT32                          rsv_00C4[3];      // 00C4..00CC
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_D0 PEXTP_DIG_GLB_D0; // 00D0
    UINT32                          rsv_00D4[3];      // 00D4..00DC
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E0 PEXTP_DIG_GLB_E0; // 00E0
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E4 PEXTP_DIG_GLB_E4; // 00E4
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_E8 PEXTP_DIG_GLB_E8; // 00E8
    pextp_sifslv_dig_glb_p0_REG_PEXTP_DIG_GLB_EC PEXTP_DIG_GLB_EC; // 00EC
}pextp_sifslv_dig_glb_p0_REGS, *Ppextp_sifslv_dig_glb_p0_REGS;

// ---------- pextp_sifslv_dig_glb_p0 Enum Definitions      ----------
// ---------- pextp_sifslv_dig_glb_p0 C Macro Definitions   ----------
extern Ppextp_sifslv_dig_glb_p0_REGS g_pextp_sifslv_dig_glb_p0_BASE;

#define pextp_sifslv_dig_glb_p0_BASE                           (g_pextp_sifslv_dig_glb_p0_BASE)
#endif

#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_00		0x0000
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_04		0x0004
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_08		0x0008
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_0C		0x000C
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_10		0x0010
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_14		0x0014
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_18		0x0018
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_1C		0x001C
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_20		0x0020
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_24		0x0024
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_28		0x0028
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_2C		0x002C
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_30		0x0030
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_34		0x0034
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_38		0x0038
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_3C		0x003C
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_40		0x0040
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_44		0x0044
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_48		0x0048
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_4C		0x004C
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_50		0x0050
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_60		0x0060
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_64		0x0064
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_68		0x0068
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_70		0x0070
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_74		0x0074
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_80		0x0080
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_84		0x0084
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_88		0x0088
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_8C		0x008C
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_A0		0x00A0
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_A4		0x00A4
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_B0		0x00B0
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_C0		0x00C0
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_D0		0x00D0
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_E0		0x00E0
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_E4		0x00E4
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_E8		0x00E8
#define _pextp_sifslv_dig_glb_p0_PEXTP_DIG_GLB_EC		0x00EC

#endif


#define PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_h                  REG_FLD(4, 8)
#define PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_l                  REG_FLD(4, 0)

#define PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_h             REG_FLD(7, 8)
#define PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_l             REG_FLD(7, 0)

#define PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_h            REG_FLD(10, 16)
#define PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_l            REG_FLD(10, 0)

#define PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_h            REG_FLD(8, 8)
#define PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_l            REG_FLD(8, 0)

#define PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_20_FLD_rg_xtp_t2rlb_dig_en               REG_FLD(1, 15)
#define PEXTP_DIG_GLB_20_FLD_rg_xtp_rx_prb_div2                REG_FLD(1, 12)
#define PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_ext                 REG_FLD(1, 10)
#define PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2_phsel          REG_FLD(1, 9)
#define PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2                REG_FLD(1, 8)
#define PEXTP_DIG_GLB_20_FLD_rg_xtp_vipsim                     REG_FLD(1, 1)
#define PEXTP_DIG_GLB_20_FLD_rg_xtp_reset                      REG_FLD(1, 0)

#define PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_cdrk                 REG_FLD(1, 5)
#define PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rx                   REG_FLD(1, 4)
#define PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tx_vcm_stable        REG_FLD(1, 2)
#define PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tpll_stable          REG_FLD(1, 1)
#define PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rxdet_stable         REG_FLD(1, 0)

#define PEXTP_DIG_GLB_28_FLD_rg_xtp_tx_ptg_en                  REG_FLD(1, 30)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_rate                  REG_FLD(2, 28)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_rate              REG_FLD(1, 27)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_tpll_stable           REG_FLD(1, 26)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_tpll_stable       REG_FLD(1, 25)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_stable                REG_FLD(1, 24)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_stable            REG_FLD(1, 23)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_all_cal_done          REG_FLD(1, 22)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_all_cal_done      REG_FLD(1, 21)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_all_cal_done               REG_FLD(1, 20)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_all_cal_done           REG_FLD(1, 19)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_active_mac_clkreq_n        REG_FLD(1, 18)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_active                     REG_FLD(1, 17)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_active                 REG_FLD(1, 16)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_xtal_type                  REG_FLD(1, 15)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_xtal_type              REG_FLD(1, 14)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in            REG_FLD(1, 13)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_phy_clkreq_n_in        REG_FLD(1, 12)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_tx_cm_dis              REG_FLD(1, 11)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_tx_cm_dis          REG_FLD(1, 10)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_rx_ei_dis              REG_FLD(1, 9)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_rx_ei_dis          REG_FLD(1, 8)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_clkreq_n               REG_FLD(1, 7)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_clkreq_n           REG_FLD(1, 6)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_l1ss_en                REG_FLD(1, 5)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_l1ss_en            REG_FLD(1, 4)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_pcie_mode                  REG_FLD(1, 3)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_pcie_mode              REG_FLD(1, 2)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in_async      REG_FLD(1, 1)
#define PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_enable                 REG_FLD(1, 0)

#define PEXTP_DIG_GLB_2C_FLD_rg_xtp_pipe_retime_en             REG_FLD(4, 4)
#define PEXTP_DIG_GLB_2C_FLD_rg_xtp_mac_l12_prd                REG_FLD(1, 3)
#define PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_mac_l12_prd            REG_FLD(1, 2)
#define PEXTP_DIG_GLB_2C_FLD_rg_xtp_rx_in_sw                   REG_FLD(1, 1)
#define PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_rx_in_sw               REG_FLD(1, 0)

#define PEXTP_DIG_GLB_30_FLD_rg_xtp_misc_mac_l12_prd_dis       REG_FLD(1, 26)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stb_t_sel        REG_FLD(10, 16)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_cfg_ck_req            REG_FLD(1, 15)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_cfg_ck_req        REG_FLD(1, 14)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_bg_stable             REG_FLD(1, 13)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_bg_stable         REG_FLD(1, 12)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ad_xtp_glb_ckdet_out       REG_FLD(1, 11)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ad_xtp_glb_ckdet_out   REG_FLD(1, 10)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_ckdet_en_stable       REG_FLD(1, 9)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_ckdet_en_stable   REG_FLD(1, 8)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_coarse_bg_stable      REG_FLD(1, 7)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_coarse_bg_stable  REG_FLD(1, 6)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stable           REG_FLD(1, 5)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_xtal_stable       REG_FLD(1, 4)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_req                   REG_FLD(1, 3)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_req               REG_FLD(1, 2)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_stable                REG_FLD(1, 1)
#define PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_stable            REG_FLD(1, 0)

#define PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_ckdet_time_sel        REG_FLD(8, 24)
#define PEXTP_DIG_GLB_34_FLD_rg_xtp_ad_ckdet_out_reach         REG_FLD(4, 16)
#define PEXTP_DIG_GLB_34_FLD_rg_xtp_ckdet_en_stb_t_sel         REG_FLD(8, 8)
#define PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_bg_stb_t_sel          REG_FLD(8, 0)

#define PEXTP_DIG_GLB_38_FLD_rg_xtp_pipe_rate_sel              REG_FLD(1, 31)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_pre_off_stb_t_sel     REG_FLD(6, 24)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_off_stb_t_sel      REG_FLD(6, 18)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_go_off_stb_t_sel      REG_FLD(2, 16)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_iso_en_stb_t_sel      REG_FLD(6, 10)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_stb_t_sel          REG_FLD(2, 8)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_set_stb_t_sel         REG_FLD(6, 2)
#define PEXTP_DIG_GLB_38_FLD_rg_xtp_frc_tpll_req               REG_FLD(1, 0)

#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_pre_off_stb_t_sel      REG_FLD(8, 24)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_req                    REG_FLD(1, 20)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_frc_req                REG_FLD(1, 19)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_wait_tx            REG_FLD(1, 18)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_cal_done           REG_FLD(1, 17)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_tx_vcm_sel             REG_FLD(1, 16)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_drv_en_stb_t_sel       REG_FLD(8, 8)
#define PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_cmkp_stb_t_sel         REG_FLD(4, 0)

#define PEXTP_DIG_GLB_40_FLD_rg_xtp_rxdet_drv_en_off_stb_t_sel REG_FLD(2, 30)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0_out_hang_t_sel     REG_FLD(6, 24)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_drv_en_stb_t_sel      REG_FLD(6, 16)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_bias_en_stb_t_sel     REG_FLD(8, 8)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe2_sel           REG_FLD(1, 3)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe1_sel           REG_FLD(1, 2)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe2_sel            REG_FLD(1, 1)
#define PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe0s_sel           REG_FLD(1, 0)

#define PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_latch_stb_t_sel      REG_FLD(3, 29)
#define PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_rxdet_done_cdt        REG_FLD(1, 28)
#define PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_tx_data_en_dly        REG_FLD(4, 24)
#define PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_finish_stb_t_sel     REG_FLD(8, 16)
#define PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_en_stb_t_sel         REG_FLD(8, 8)
#define PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_vcm_off_stb_t_sel    REG_FLD(8, 0)

#define PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_en_raw         REG_FLD(1, 30)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g234_dly       REG_FLD(6, 24)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g1_dly         REG_FLD(6, 16)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_sel_rx        REG_FLD(1, 11)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tx_ck_en               REG_FLD(1, 10)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req_sel            REG_FLD(1, 9)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_phy_status_updt        REG_FLD(1, 8)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p2_ignore_rx      REG_FLD(1, 7)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p1_ignore_rx      REG_FLD(1, 6)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_ignore_rx     REG_FLD(1, 5)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0_ignore_rx      REG_FLD(1, 4)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req                REG_FLD(1, 3)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_vcm_req            REG_FLD(1, 2)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tpll_req               REG_FLD(1, 1)
#define PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_tpll_req           REG_FLD(1, 0)

#define PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_retry_cnt             REG_FLD(4, 24)
#define PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_cal_cnt               REG_FLD(8, 16)
#define PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_set_cnt               REG_FLD(4, 8)
#define PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_tpll_req_cnt          REG_FLD(8, 0)

#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ldo_en                     REG_FLD(1, 25)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ldo_en                 REG_FLD(1, 24)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_status_sync_dly        REG_FLD(6, 18)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_rc_lgc REG_FLD(1, 17)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_ep_lgc REG_FLD(1, 16)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s2                REG_FLD(1, 15)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s1                REG_FLD(1, 14)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s0                REG_FLD(1, 13)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_lgc_l1              REG_FLD(1, 12)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_padck_req              REG_FLD(1, 11)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_padck_req          REG_FLD(1, 10)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_intck_req              REG_FLD(1, 9)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_intck_req          REG_FLD(1, 8)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en                     REG_FLD(1, 7)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_en                 REG_FLD(1, 6)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_en            REG_FLD(1, 5)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_en        REG_FLD(1, 4)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_out           REG_FLD(1, 3)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_out       REG_FLD(1, 2)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_pad_wake_sel        REG_FLD(1, 1)
#define PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_wake_sel            REG_FLD(1, 0)

#define PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ref_ck_en            REG_FLD(1, 4)
#define PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div4_en           REG_FLD(1, 3)
#define PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div2_en           REG_FLD(1, 2)
#define PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tx_ck_en             REG_FLD(1, 1)
#define PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tpll_stable          REG_FLD(1, 0)

#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_div_en     REG_FLD(1, 27)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_en         REG_FLD(1, 26)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_nt_ck_inv     REG_FLD(1, 25)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_stable     REG_FLD(1, 24)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_div_en     REG_FLD(1, 19)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_en         REG_FLD(1, 18)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_nt_ck_inv     REG_FLD(1, 17)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_stable     REG_FLD(1, 16)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_div_en     REG_FLD(1, 11)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_en         REG_FLD(1, 10)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_nt_ck_inv     REG_FLD(1, 9)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_stable     REG_FLD(1, 8)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_div_en     REG_FLD(1, 3)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_en         REG_FLD(1, 2)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_nt_ck_inv     REG_FLD(1, 1)
#define PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_stable     REG_FLD(1, 0)

#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_div_en     REG_FLD(1, 27)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_en         REG_FLD(1, 26)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_nt_ck_inv     REG_FLD(1, 25)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_stable     REG_FLD(1, 24)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_div_en     REG_FLD(1, 19)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_en         REG_FLD(1, 18)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_nt_ck_inv     REG_FLD(1, 17)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_stable     REG_FLD(1, 16)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_div_en     REG_FLD(1, 11)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_en         REG_FLD(1, 10)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_nt_ck_inv     REG_FLD(1, 9)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_stable     REG_FLD(1, 8)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_div_en     REG_FLD(1, 3)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_en         REG_FLD(1, 2)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_nt_ck_inv     REG_FLD(1, 1)
#define PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_stable     REG_FLD(1, 0)

#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_phy_status            REG_FLD(1, 27)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_eval            REG_FLD(1, 26)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_in_progress     REG_FLD(2, 24)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_block_align_control   REG_FLD(1, 23)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_swing              REG_FLD(1, 22)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_margin             REG_FLD(3, 19)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_detect_rx          REG_FLD(1, 18)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rate                  REG_FLD(2, 16)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_sync       REG_FLD(2, 12)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_async      REG_FLD(2, 10)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_frc_pipe_power_down_async  REG_FLD(1, 8)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_updt                  REG_FLD(1, 4)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_out_fr_rg             REG_FLD(1, 1)
#define PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_in_fr_rg              REG_FLD(1, 0)

#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_ckdet_en          REG_FLD(1, 23)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_ckdet_en              REG_FLD(1, 22)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_lpf_en       REG_FLD(1, 21)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_lpf_en           REG_FLD(1, 20)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_en           REG_FLD(1, 19)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_en               REG_FLD(1, 18)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_avd10_on          REG_FLD(1, 17)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_avd10_on              REG_FLD(1, 16)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_ckdet_en           REG_FLD(1, 7)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_ckdet_en               REG_FLD(1, 6)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_lpf_en        REG_FLD(1, 5)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_lpf_en            REG_FLD(1, 4)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_en            REG_FLD(1, 3)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_en                REG_FLD(1, 2)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_avd10_on           REG_FLD(1, 1)
#define PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_avd10_on               REG_FLD(1, 0)

#define PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_h              REG_FLD(10, 16)
#define PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_l              REG_FLD(10, 0)

#define PEXTP_DIG_GLB_A0_FLD_rg_xtp_glb_dummy                  REG_FLD(32, 0)

#define PEXTP_DIG_GLB_A4_FLD_rg_xtp_pclk_ddr_ck_sel            REG_FLD(1, 3)
#define PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_rx_polarity            REG_FLD(1, 2)
#define PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_swing               REG_FLD(1, 1)
#define PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_margin              REG_FLD(1, 0)

#define PEXTP_DIG_GLB_B0_FLD_rgs_xtp_tpll_cs                   REG_FLD(4, 8)
#define PEXTP_DIG_GLB_B0_FLD_rgs_xtp_vcm_cs                    REG_FLD(3, 5)
#define PEXTP_DIG_GLB_B0_FLD_rgs_xtp_txpd_tx_cs                REG_FLD(5, 0)

#define PEXTP_DIG_GLB_C0_FLD_rg_xtp_ckm_en_l1s1_dev            REG_FLD(1, 14)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_phy_status           REG_FLD(1, 13)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_eval           REG_FLD(1, 12)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_in_progress    REG_FLD(2, 10)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_block_align_control  REG_FLD(1, 9)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_swing             REG_FLD(1, 8)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_margin            REG_FLD(3, 5)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_detect_rx         REG_FLD(1, 4)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rate                 REG_FLD(2, 2)
#define PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_power_down_sync      REG_FLD(2, 0)

#define PEXTP_DIG_GLB_D0_FLD_rgs_xtp_probe_out                 REG_FLD(16, 0)

#define PEXTP_DIG_GLB_E0_FLD_rgs_xtp_version_code              REG_FLD(32, 0)

#define PEXTP_DIG_GLB_E4_FLD_rgs_xtp_project_code              REG_FLD(32, 0)

#define PEXTP_DIG_GLB_E8_FLD_rg_xtp_glb_clk_sel                REG_FLD(5, 3)
#define PEXTP_DIG_GLB_E8_FLD_rg_xtp_frc_glb_clk_sel            REG_FLD(1, 2)

#define PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_ep             REG_FLD(5, 8)
#define PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_rc             REG_FLD(5, 0)

#define PEXTP_DIG_GLB_00_GET_rg_xtp_prb_sel_h(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_00_GET_rg_xtp_prb_sel_l(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_04_GET_rg_xtp_misc_prb_sel_h(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_04_GET_rg_xtp_misc_prb_sel_l(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_08_GET_rg_xtp_ckgen_prb_sel_h(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_08_GET_rg_xtp_ckgen_prb_sel_l(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_0C_GET_rg_xtp_efuse_prb_sel_h(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_0C_GET_rg_xtp_efuse_prb_sel_l(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_10_GET_rg_xtp_ln0_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_10_GET_rg_xtp_ln0_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_14_GET_rg_xtp_ln1_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_14_GET_rg_xtp_ln1_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_18_GET_rg_xtp_ln2_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_18_GET_rg_xtp_ln2_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_1C_GET_rg_xtp_ln3_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_1C_GET_rg_xtp_ln3_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_20_GET_rg_xtp_t2rlb_dig_en(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_t2rlb_dig_en, (reg32))
#define PEXTP_DIG_GLB_20_GET_rg_xtp_rx_prb_div2(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_rx_prb_div2, (reg32))
#define PEXTP_DIG_GLB_20_GET_rg_xtp_tx_prb_ext(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_ext, (reg32))
#define PEXTP_DIG_GLB_20_GET_rg_xtp_tx_prb_div2_phsel(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2_phsel, (reg32))
#define PEXTP_DIG_GLB_20_GET_rg_xtp_tx_prb_div2(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2, (reg32))
#define PEXTP_DIG_GLB_20_GET_rg_xtp_vipsim(reg32)              REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_vipsim, (reg32))
#define PEXTP_DIG_GLB_20_GET_rg_xtp_reset(reg32)               REG_FLD_GET(PEXTP_DIG_GLB_20_FLD_rg_xtp_reset, (reg32))

#define PEXTP_DIG_GLB_24_GET_rg_xtp_cosim_cdrk(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_cdrk, (reg32))
#define PEXTP_DIG_GLB_24_GET_rg_xtp_cosim_rx(reg32)            REG_FLD_GET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rx, (reg32))
#define PEXTP_DIG_GLB_24_GET_rg_xtp_cosim_tx_vcm_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tx_vcm_stable, (reg32))
#define PEXTP_DIG_GLB_24_GET_rg_xtp_cosim_tpll_stable(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tpll_stable, (reg32))
#define PEXTP_DIG_GLB_24_GET_rg_xtp_cosim_rxdet_stable(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rxdet_stable, (reg32))

#define PEXTP_DIG_GLB_28_GET_rg_xtp_tx_ptg_en(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_tx_ptg_en, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_tpll_rate(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_rate, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_tpll_rate(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_rate, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_txck_tpll_stable(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_tpll_stable, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_txck_tpll_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_tpll_stable, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_tpll_stable(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_stable, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_tpll_stable(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_stable, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_txck_all_cal_done(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_all_cal_done, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_txck_all_cal_done(reg32) REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_all_cal_done, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_all_cal_done(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_all_cal_done, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_all_cal_done(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_all_cal_done, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_active_mac_clkreq_n(reg32) REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_active_mac_clkreq_n, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_active(reg32)              REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_active, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_active(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_active, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_xtal_type(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_xtal_type, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_xtal_type(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_xtal_type, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_phy_clkreq_n_in(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_phy_clkreq_n_in(reg32) REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_phy_clkreq_n_in, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_mac_tx_cm_dis(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_tx_cm_dis, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_mac_tx_cm_dis(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_tx_cm_dis, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_mac_rx_ei_dis(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_rx_ei_dis, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_mac_rx_ei_dis(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_rx_ei_dis, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_mac_clkreq_n(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_clkreq_n, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_mac_clkreq_n(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_clkreq_n, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_mac_l1ss_en(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_l1ss_en, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_mac_l1ss_en(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_l1ss_en, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_pcie_mode(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_pcie_mode, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_frc_pcie_mode(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_pcie_mode, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_phy_clkreq_n_in_async(reg32) REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in_async, (reg32))
#define PEXTP_DIG_GLB_28_GET_rg_xtp_phy_enable(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_enable, (reg32))

#define PEXTP_DIG_GLB_2C_GET_rg_xtp_pipe_retime_en(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_pipe_retime_en, (reg32))
#define PEXTP_DIG_GLB_2C_GET_rg_xtp_mac_l12_prd(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_mac_l12_prd, (reg32))
#define PEXTP_DIG_GLB_2C_GET_rg_xtp_frc_mac_l12_prd(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_mac_l12_prd, (reg32))
#define PEXTP_DIG_GLB_2C_GET_rg_xtp_rx_in_sw(reg32)            REG_FLD_GET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_rx_in_sw, (reg32))
#define PEXTP_DIG_GLB_2C_GET_rg_xtp_frc_rx_in_sw(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_rx_in_sw, (reg32))

#define PEXTP_DIG_GLB_30_GET_rg_xtp_misc_mac_l12_prd_dis(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_misc_mac_l12_prd_dis, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ckbg_xtal_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ckbg_cfg_ck_req(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_cfg_ck_req, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_ckbg_cfg_ck_req(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_cfg_ck_req, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ckbg_bg_stable(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_bg_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_ckbg_bg_stable(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_bg_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ad_xtp_glb_ckdet_out(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ad_xtp_glb_ckdet_out, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_ad_xtp_glb_ckdet_out(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ad_xtp_glb_ckdet_out, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ckbg_ckdet_en_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_ckdet_en_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_ckbg_ckdet_en_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_ckdet_en_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ckbg_coarse_bg_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_coarse_bg_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_ckbg_coarse_bg_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_coarse_bg_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_ckbg_xtal_stable(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_ckbg_xtal_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_xtal_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_xtal_req(reg32)            REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_req, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_xtal_req(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_req, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_xtal_stable(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_stable, (reg32))
#define PEXTP_DIG_GLB_30_GET_rg_xtp_frc_xtal_stable(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_stable, (reg32))

#define PEXTP_DIG_GLB_34_GET_rg_xtp_ckbg_ckdet_time_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_ckdet_time_sel, (reg32))
#define PEXTP_DIG_GLB_34_GET_rg_xtp_ad_ckdet_out_reach(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ad_ckdet_out_reach, (reg32))
#define PEXTP_DIG_GLB_34_GET_rg_xtp_ckdet_en_stb_t_sel(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckdet_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_34_GET_rg_xtp_ckbg_bg_stb_t_sel(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_bg_stb_t_sel, (reg32))

#define PEXTP_DIG_GLB_38_GET_rg_xtp_pipe_rate_sel(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_pipe_rate_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_tpll_pre_off_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_pre_off_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_tpll_en_off_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_off_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_tpll_go_off_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_go_off_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_tpll_iso_en_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_iso_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_tpll_en_stb_t_sel(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_tpll_set_stb_t_sel(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_set_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_38_GET_rg_xtp_frc_tpll_req(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_38_FLD_rg_xtp_frc_tpll_req, (reg32))

#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_pre_off_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_pre_off_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_req(reg32)             REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_req, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_frc_req(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_frc_req, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_skp_wait_tx(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_wait_tx, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_skp_cal_done(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_cal_done, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_tx_vcm_sel(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_tx_vcm_sel, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_drv_en_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_drv_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_3C_GET_rg_xtp_vcm_cmkp_stb_t_sel(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_cmkp_stb_t_sel, (reg32))

#define PEXTP_DIG_GLB_40_GET_rg_xtp_rxdet_drv_en_off_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_rxdet_drv_en_off_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_e0_out_hang_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0_out_hang_t_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_drv_en_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_drv_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_bias_en_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_bias_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_e0stoe2_sel(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe2_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_e0stoe1_sel(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe1_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_e1toe2_sel(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe2_sel, (reg32))
#define PEXTP_DIG_GLB_40_GET_rg_xtp_txpd_e1toe0s_sel(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe0s_sel, (reg32))

#define PEXTP_DIG_GLB_44_GET_rg_xtp_rxdet_latch_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_latch_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_44_GET_rg_xtp_txpd_rxdet_done_cdt(reg32) REG_FLD_GET(PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_rxdet_done_cdt, (reg32))
#define PEXTP_DIG_GLB_44_GET_rg_xtp_txpd_tx_data_en_dly(reg32) REG_FLD_GET(PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_tx_data_en_dly, (reg32))
#define PEXTP_DIG_GLB_44_GET_rg_xtp_rxdet_finish_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_finish_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_44_GET_rg_xtp_rxdet_en_stb_t_sel(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_en_stb_t_sel, (reg32))
#define PEXTP_DIG_GLB_44_GET_rg_xtp_rxdet_vcm_off_stb_t_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_vcm_off_stb_t_sel, (reg32))

#define PEXTP_DIG_GLB_48_GET_rg_xtp_txpd_tx_drv_en_raw(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_en_raw, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_txpd_tx_drv_g234_dly(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g234_dly, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_txpd_tx_drv_g1_dly(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g1_dly, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_pipe_p0s_sel_rx(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_sel_rx, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_tx_ck_en(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tx_ck_en, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_vcm_req_sel(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req_sel, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_phy_status_updt(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_phy_status_updt, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_pipe_p2_ignore_rx(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p2_ignore_rx, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_pipe_p1_ignore_rx(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p1_ignore_rx, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_pipe_p0s_ignore_rx(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_ignore_rx, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_pipe_p0_ignore_rx(reg32) REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0_ignore_rx, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_vcm_req(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_frc_pdc_vcm_req(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_vcm_req, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_pdc_tpll_req(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tpll_req, (reg32))
#define PEXTP_DIG_GLB_48_GET_rg_xtp_frc_pdc_tpll_req(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_tpll_req, (reg32))

#define PEXTP_DIG_GLB_4C_GET_rg_xtp_cdrk_retry_cnt(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_retry_cnt, (reg32))
#define PEXTP_DIG_GLB_4C_GET_rg_xtp_cdrk_cal_cnt(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_cal_cnt, (reg32))
#define PEXTP_DIG_GLB_4C_GET_rg_xtp_cdrk_set_cnt(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_set_cnt, (reg32))
#define PEXTP_DIG_GLB_4C_GET_rg_xtp_cdrk_tpll_req_cnt(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_tpll_req_cnt, (reg32))

#define PEXTP_DIG_GLB_50_GET_rg_xtp_ldo_en(reg32)              REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ldo_en, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_frc_ldo_en(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ldo_en, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_phy_status_sync_dly(reg32) REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_status_sync_dly, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_phy_clkreq_out_n_en_rc_lgc(reg32) REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_rc_lgc, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_phy_clkreq_out_n_en_ep_lgc(reg32) REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_ep_lgc, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_en_l1s2(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s2, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_en_l1s1(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s1, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_en_l1s0(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s0, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_en_lgc_l1(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_lgc_l1, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_padck_req(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_padck_req, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_frc_ckm_padck_req(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_padck_req, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_intck_req(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_intck_req, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_frc_ckm_intck_req(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_intck_req, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_ckm_en(reg32)              REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_frc_ckm_en(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_en, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_phy_clkreq_n_en(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_en, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_frc_phy_clkreq_n_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_en, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_phy_clkreq_n_out(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_out, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_frc_phy_clkreq_n_out(reg32) REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_out, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_clkreq_pad_wake_sel(reg32) REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_pad_wake_sel, (reg32))
#define PEXTP_DIG_GLB_50_GET_rg_xtp_clkreq_wake_sel(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_wake_sel, (reg32))

#define PEXTP_DIG_GLB_60_GET_rg_xtp_ckgen_ref_ck_en(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ref_ck_en, (reg32))
#define PEXTP_DIG_GLB_60_GET_rg_xtp_ckgen_ck_div4_en(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div4_en, (reg32))
#define PEXTP_DIG_GLB_60_GET_rg_xtp_ckgen_ck_div2_en(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div2_en, (reg32))
#define PEXTP_DIG_GLB_60_GET_rg_xtp_ckgen_tx_ck_en(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tx_ck_en, (reg32))
#define PEXTP_DIG_GLB_60_GET_rg_xtp_ckgen_tpll_stable(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tpll_stable, (reg32))

#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln3_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln3_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln3_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln3_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_stable, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln2_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln2_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln2_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln2_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_stable, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln1_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln1_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln1_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln1_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_stable, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln0_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln0_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln0_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_64_GET_rg_xtp_ckgen_ln0_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_stable, (reg32))

#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln7_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln7_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln7_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln7_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_stable, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln6_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln6_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln6_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln6_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_stable, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln5_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln5_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln5_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln5_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_stable, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln4_rx_ck_div_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_div_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln4_rx_ck_en(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_en, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln4_rx_nt_ck_inv(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_nt_ck_inv, (reg32))
#define PEXTP_DIG_GLB_68_GET_rg_xtp_ckgen_ln4_rx_ck_stable(reg32) REG_FLD_GET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_stable, (reg32))

#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_phy_status(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_phy_status, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_rx_eq_eval(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_eval, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_rx_eq_in_progress(reg32) REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_in_progress, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_block_align_control(reg32) REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_block_align_control, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_tx_swing(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_swing, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_tx_margin(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_margin, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_tx_detect_rx(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_detect_rx, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_rate(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rate, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_power_down_sync(reg32) REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_sync, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_power_down_async(reg32) REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_async, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_frc_pipe_power_down_async(reg32) REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_frc_pipe_power_down_async, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_updt(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_updt, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_out_fr_rg(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_out_fr_rg, (reg32))
#define PEXTP_DIG_GLB_70_GET_rg_xtp_pipe_in_fr_rg(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_in_fr_rg, (reg32))

#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glbs_ckdet_en(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_ckdet_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glbs_ckdet_en(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_ckdet_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glbs_bias_lpf_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_lpf_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glbs_bias_lpf_en(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_lpf_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glbs_bias_en(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glbs_bias_en(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glbs_avd10_on(reg32)   REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_avd10_on, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glbs_avd10_on(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_avd10_on, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glb_ckdet_en(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_ckdet_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glb_ckdet_en(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_ckdet_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glb_bias_lpf_en(reg32) REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_lpf_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glb_bias_lpf_en(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_lpf_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glb_bias_en(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glb_bias_en(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_en, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_frc_glb_avd10_on(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_avd10_on, (reg32))
#define PEXTP_DIG_GLB_74_GET_rg_xtp_glb_avd10_on(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_avd10_on, (reg32))

#define PEXTP_DIG_GLB_80_GET_rg_xtp_ln4_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_80_GET_rg_xtp_ln4_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_84_GET_rg_xtp_ln5_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_84_GET_rg_xtp_ln5_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_88_GET_rg_xtp_ln6_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_88_GET_rg_xtp_ln6_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_8C_GET_rg_xtp_ln7_prb_sel_h(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_h, (reg32))
#define PEXTP_DIG_GLB_8C_GET_rg_xtp_ln7_prb_sel_l(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_l, (reg32))

#define PEXTP_DIG_GLB_A0_GET_rg_xtp_glb_dummy(reg32)           REG_FLD_GET(PEXTP_DIG_GLB_A0_FLD_rg_xtp_glb_dummy, (reg32))

#define PEXTP_DIG_GLB_A4_GET_rg_xtp_pclk_ddr_ck_sel(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_pclk_ddr_ck_sel, (reg32))
#define PEXTP_DIG_GLB_A4_GET_rg_xtp_frc_rx_polarity(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_rx_polarity, (reg32))
#define PEXTP_DIG_GLB_A4_GET_rg_xtp_frc_tx_swing(reg32)        REG_FLD_GET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_swing, (reg32))
#define PEXTP_DIG_GLB_A4_GET_rg_xtp_frc_tx_margin(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_margin, (reg32))

#define PEXTP_DIG_GLB_B0_GET_rgs_xtp_tpll_cs(reg32)            REG_FLD_GET(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_tpll_cs, (reg32))
#define PEXTP_DIG_GLB_B0_GET_rgs_xtp_vcm_cs(reg32)             REG_FLD_GET(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_vcm_cs, (reg32))
#define PEXTP_DIG_GLB_B0_GET_rgs_xtp_txpd_tx_cs(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_txpd_tx_cs, (reg32))

#define PEXTP_DIG_GLB_C0_GET_rg_xtp_ckm_en_l1s1_dev(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rg_xtp_ckm_en_l1s1_dev, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_phy_status(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_phy_status, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_rx_eq_eval(reg32)    REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_eval, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_rx_eq_in_progress(reg32) REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_in_progress, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_block_align_control(reg32) REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_block_align_control, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_tx_swing(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_swing, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_tx_margin(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_margin, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_tx_detect_rx(reg32)  REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_detect_rx, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_rate(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rate, (reg32))
#define PEXTP_DIG_GLB_C0_GET_rgs_xtp_pipe_power_down_sync(reg32) REG_FLD_GET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_power_down_sync, (reg32))

#define PEXTP_DIG_GLB_D0_GET_rgs_xtp_probe_out(reg32)          REG_FLD_GET(PEXTP_DIG_GLB_D0_FLD_rgs_xtp_probe_out, (reg32))

#define PEXTP_DIG_GLB_E0_GET_rgs_xtp_version_code(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_E0_FLD_rgs_xtp_version_code, (reg32))

#define PEXTP_DIG_GLB_E4_GET_rgs_xtp_project_code(reg32)       REG_FLD_GET(PEXTP_DIG_GLB_E4_FLD_rgs_xtp_project_code, (reg32))

#define PEXTP_DIG_GLB_E8_GET_rg_xtp_glb_clk_sel(reg32)         REG_FLD_GET(PEXTP_DIG_GLB_E8_FLD_rg_xtp_glb_clk_sel, (reg32))
#define PEXTP_DIG_GLB_E8_GET_rg_xtp_frc_glb_clk_sel(reg32)     REG_FLD_GET(PEXTP_DIG_GLB_E8_FLD_rg_xtp_frc_glb_clk_sel, (reg32))

#define PEXTP_DIG_GLB_EC_GET_rg_xtp_glb_clk_sel_ep(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_ep, (reg32))
#define PEXTP_DIG_GLB_EC_GET_rg_xtp_glb_clk_sel_rc(reg32)      REG_FLD_GET(PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_rc, (reg32))

#define PEXTP_DIG_GLB_00_SET_rg_xtp_prb_sel_h(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_00_SET_rg_xtp_prb_sel_l(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_04_SET_rg_xtp_misc_prb_sel_h(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_04_SET_rg_xtp_misc_prb_sel_l(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_08_SET_rg_xtp_ckgen_prb_sel_h(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_08_SET_rg_xtp_ckgen_prb_sel_l(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_0C_SET_rg_xtp_efuse_prb_sel_h(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_0C_SET_rg_xtp_efuse_prb_sel_l(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_10_SET_rg_xtp_ln0_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_10_SET_rg_xtp_ln0_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_14_SET_rg_xtp_ln1_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_14_SET_rg_xtp_ln1_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_18_SET_rg_xtp_ln2_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_18_SET_rg_xtp_ln2_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_1C_SET_rg_xtp_ln3_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_1C_SET_rg_xtp_ln3_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_20_SET_rg_xtp_t2rlb_dig_en(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_t2rlb_dig_en, (reg32), (val))
#define PEXTP_DIG_GLB_20_SET_rg_xtp_rx_prb_div2(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_rx_prb_div2, (reg32), (val))
#define PEXTP_DIG_GLB_20_SET_rg_xtp_tx_prb_ext(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_ext, (reg32), (val))
#define PEXTP_DIG_GLB_20_SET_rg_xtp_tx_prb_div2_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2_phsel, (reg32), (val))
#define PEXTP_DIG_GLB_20_SET_rg_xtp_tx_prb_div2(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2, (reg32), (val))
#define PEXTP_DIG_GLB_20_SET_rg_xtp_vipsim(reg32, val)         REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_vipsim, (reg32), (val))
#define PEXTP_DIG_GLB_20_SET_rg_xtp_reset(reg32, val)          REG_FLD_SET(PEXTP_DIG_GLB_20_FLD_rg_xtp_reset, (reg32), (val))

#define PEXTP_DIG_GLB_24_SET_rg_xtp_cosim_cdrk(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_cdrk, (reg32), (val))
#define PEXTP_DIG_GLB_24_SET_rg_xtp_cosim_rx(reg32, val)       REG_FLD_SET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rx, (reg32), (val))
#define PEXTP_DIG_GLB_24_SET_rg_xtp_cosim_tx_vcm_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tx_vcm_stable, (reg32), (val))
#define PEXTP_DIG_GLB_24_SET_rg_xtp_cosim_tpll_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tpll_stable, (reg32), (val))
#define PEXTP_DIG_GLB_24_SET_rg_xtp_cosim_rxdet_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rxdet_stable, (reg32), (val))

#define PEXTP_DIG_GLB_28_SET_rg_xtp_tx_ptg_en(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_tx_ptg_en, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_tpll_rate(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_rate, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_tpll_rate(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_rate, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_txck_tpll_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_tpll_stable, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_txck_tpll_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_tpll_stable, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_tpll_stable(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_stable, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_tpll_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_stable, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_txck_all_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_all_cal_done, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_txck_all_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_all_cal_done, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_all_cal_done(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_all_cal_done, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_all_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_all_cal_done, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_active_mac_clkreq_n(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_active_mac_clkreq_n, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_active(reg32, val)         REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_active, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_active(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_active, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_xtal_type(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_xtal_type, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_xtal_type(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_xtal_type, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_phy_clkreq_n_in(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_phy_clkreq_n_in(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_phy_clkreq_n_in, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_mac_tx_cm_dis(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_tx_cm_dis, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_mac_tx_cm_dis(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_tx_cm_dis, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_mac_rx_ei_dis(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_rx_ei_dis, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_mac_rx_ei_dis(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_rx_ei_dis, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_mac_clkreq_n(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_clkreq_n, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_mac_clkreq_n(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_clkreq_n, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_mac_l1ss_en(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_l1ss_en, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_mac_l1ss_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_l1ss_en, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_pcie_mode(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_pcie_mode, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_frc_pcie_mode(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_pcie_mode, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_phy_clkreq_n_in_async(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in_async, (reg32), (val))
#define PEXTP_DIG_GLB_28_SET_rg_xtp_phy_enable(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_enable, (reg32), (val))

#define PEXTP_DIG_GLB_2C_SET_rg_xtp_pipe_retime_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_pipe_retime_en, (reg32), (val))
#define PEXTP_DIG_GLB_2C_SET_rg_xtp_mac_l12_prd(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_mac_l12_prd, (reg32), (val))
#define PEXTP_DIG_GLB_2C_SET_rg_xtp_frc_mac_l12_prd(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_mac_l12_prd, (reg32), (val))
#define PEXTP_DIG_GLB_2C_SET_rg_xtp_rx_in_sw(reg32, val)       REG_FLD_SET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_rx_in_sw, (reg32), (val))
#define PEXTP_DIG_GLB_2C_SET_rg_xtp_frc_rx_in_sw(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_rx_in_sw, (reg32), (val))

#define PEXTP_DIG_GLB_30_SET_rg_xtp_misc_mac_l12_prd_dis(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_misc_mac_l12_prd_dis, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ckbg_xtal_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ckbg_cfg_ck_req(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_cfg_ck_req, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_ckbg_cfg_ck_req(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_cfg_ck_req, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ckbg_bg_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_bg_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_ckbg_bg_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_bg_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ad_xtp_glb_ckdet_out(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ad_xtp_glb_ckdet_out, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_ad_xtp_glb_ckdet_out(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ad_xtp_glb_ckdet_out, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ckbg_ckdet_en_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_ckdet_en_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_ckbg_ckdet_en_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_ckdet_en_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ckbg_coarse_bg_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_coarse_bg_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_ckbg_coarse_bg_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_coarse_bg_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_ckbg_xtal_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_ckbg_xtal_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_xtal_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_xtal_req(reg32, val)       REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_req, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_xtal_req(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_req, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_xtal_stable(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_stable, (reg32), (val))
#define PEXTP_DIG_GLB_30_SET_rg_xtp_frc_xtal_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_stable, (reg32), (val))

#define PEXTP_DIG_GLB_34_SET_rg_xtp_ckbg_ckdet_time_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_ckdet_time_sel, (reg32), (val))
#define PEXTP_DIG_GLB_34_SET_rg_xtp_ad_ckdet_out_reach(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ad_ckdet_out_reach, (reg32), (val))
#define PEXTP_DIG_GLB_34_SET_rg_xtp_ckdet_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckdet_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_34_SET_rg_xtp_ckbg_bg_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_bg_stb_t_sel, (reg32), (val))

#define PEXTP_DIG_GLB_38_SET_rg_xtp_pipe_rate_sel(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_pipe_rate_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_tpll_pre_off_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_pre_off_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_tpll_en_off_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_off_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_tpll_go_off_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_go_off_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_tpll_iso_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_iso_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_tpll_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_tpll_set_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_set_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_38_SET_rg_xtp_frc_tpll_req(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_38_FLD_rg_xtp_frc_tpll_req, (reg32), (val))

#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_pre_off_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_pre_off_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_req(reg32, val)        REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_req, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_frc_req(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_frc_req, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_skp_wait_tx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_wait_tx, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_skp_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_cal_done, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_tx_vcm_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_tx_vcm_sel, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_drv_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_drv_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_3C_SET_rg_xtp_vcm_cmkp_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_cmkp_stb_t_sel, (reg32), (val))

#define PEXTP_DIG_GLB_40_SET_rg_xtp_rxdet_drv_en_off_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_rxdet_drv_en_off_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_e0_out_hang_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0_out_hang_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_drv_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_drv_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_bias_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_bias_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_e0stoe2_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe2_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_e0stoe1_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe1_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_e1toe2_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe2_sel, (reg32), (val))
#define PEXTP_DIG_GLB_40_SET_rg_xtp_txpd_e1toe0s_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe0s_sel, (reg32), (val))

#define PEXTP_DIG_GLB_44_SET_rg_xtp_rxdet_latch_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_latch_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_44_SET_rg_xtp_txpd_rxdet_done_cdt(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_rxdet_done_cdt, (reg32), (val))
#define PEXTP_DIG_GLB_44_SET_rg_xtp_txpd_tx_data_en_dly(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_tx_data_en_dly, (reg32), (val))
#define PEXTP_DIG_GLB_44_SET_rg_xtp_rxdet_finish_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_finish_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_44_SET_rg_xtp_rxdet_en_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_en_stb_t_sel, (reg32), (val))
#define PEXTP_DIG_GLB_44_SET_rg_xtp_rxdet_vcm_off_stb_t_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_vcm_off_stb_t_sel, (reg32), (val))

#define PEXTP_DIG_GLB_48_SET_rg_xtp_txpd_tx_drv_en_raw(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_en_raw, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_txpd_tx_drv_g234_dly(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g234_dly, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_txpd_tx_drv_g1_dly(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g1_dly, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_pipe_p0s_sel_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_sel_rx, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_tx_ck_en(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_vcm_req_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req_sel, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_phy_status_updt(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_phy_status_updt, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_pipe_p2_ignore_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p2_ignore_rx, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_pipe_p1_ignore_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p1_ignore_rx, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_pipe_p0s_ignore_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_ignore_rx, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_pipe_p0_ignore_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0_ignore_rx, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_vcm_req(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_frc_pdc_vcm_req(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_vcm_req, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_pdc_tpll_req(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tpll_req, (reg32), (val))
#define PEXTP_DIG_GLB_48_SET_rg_xtp_frc_pdc_tpll_req(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_tpll_req, (reg32), (val))

#define PEXTP_DIG_GLB_4C_SET_rg_xtp_cdrk_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_retry_cnt, (reg32), (val))
#define PEXTP_DIG_GLB_4C_SET_rg_xtp_cdrk_cal_cnt(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_cal_cnt, (reg32), (val))
#define PEXTP_DIG_GLB_4C_SET_rg_xtp_cdrk_set_cnt(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_set_cnt, (reg32), (val))
#define PEXTP_DIG_GLB_4C_SET_rg_xtp_cdrk_tpll_req_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_tpll_req_cnt, (reg32), (val))

#define PEXTP_DIG_GLB_50_SET_rg_xtp_ldo_en(reg32, val)         REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ldo_en, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_frc_ldo_en(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ldo_en, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_phy_status_sync_dly(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_status_sync_dly, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_phy_clkreq_out_n_en_rc_lgc(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_rc_lgc, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_phy_clkreq_out_n_en_ep_lgc(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_ep_lgc, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_en_l1s2(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s2, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_en_l1s1(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s1, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_en_l1s0(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s0, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_en_lgc_l1(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_lgc_l1, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_padck_req(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_padck_req, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_frc_ckm_padck_req(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_padck_req, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_intck_req(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_intck_req, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_frc_ckm_intck_req(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_intck_req, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_ckm_en(reg32, val)         REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_frc_ckm_en(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_en, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_phy_clkreq_n_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_en, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_frc_phy_clkreq_n_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_en, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_phy_clkreq_n_out(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_out, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_frc_phy_clkreq_n_out(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_out, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_clkreq_pad_wake_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_pad_wake_sel, (reg32), (val))
#define PEXTP_DIG_GLB_50_SET_rg_xtp_clkreq_wake_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_wake_sel, (reg32), (val))

#define PEXTP_DIG_GLB_60_SET_rg_xtp_ckgen_ref_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ref_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_60_SET_rg_xtp_ckgen_ck_div4_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div4_en, (reg32), (val))
#define PEXTP_DIG_GLB_60_SET_rg_xtp_ckgen_ck_div2_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div2_en, (reg32), (val))
#define PEXTP_DIG_GLB_60_SET_rg_xtp_ckgen_tx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_60_SET_rg_xtp_ckgen_tpll_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tpll_stable, (reg32), (val))

#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln3_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln3_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln3_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln3_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_stable, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln2_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln2_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln2_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln2_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_stable, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln1_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln1_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln1_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln1_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_stable, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln0_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln0_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln0_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_64_SET_rg_xtp_ckgen_ln0_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_stable, (reg32), (val))

#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln7_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln7_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln7_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln7_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_stable, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln6_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln6_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln6_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln6_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_stable, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln5_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln5_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln5_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln5_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_stable, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln4_rx_ck_div_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_div_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln4_rx_ck_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_en, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln4_rx_nt_ck_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_nt_ck_inv, (reg32), (val))
#define PEXTP_DIG_GLB_68_SET_rg_xtp_ckgen_ln4_rx_ck_stable(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_stable, (reg32), (val))

#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_phy_status(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_phy_status, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_rx_eq_eval(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_eval, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_rx_eq_in_progress(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_in_progress, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_block_align_control(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_block_align_control, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_tx_swing(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_swing, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_tx_margin(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_margin, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_tx_detect_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_detect_rx, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_rate(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rate, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_power_down_sync(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_sync, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_power_down_async(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_async, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_frc_pipe_power_down_async(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_frc_pipe_power_down_async, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_updt(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_updt, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_out_fr_rg(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_out_fr_rg, (reg32), (val))
#define PEXTP_DIG_GLB_70_SET_rg_xtp_pipe_in_fr_rg(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_in_fr_rg, (reg32), (val))

#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glbs_ckdet_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_ckdet_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glbs_ckdet_en(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_ckdet_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glbs_bias_lpf_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_lpf_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glbs_bias_lpf_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_lpf_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glbs_bias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glbs_bias_en(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glbs_avd10_on(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_avd10_on, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glbs_avd10_on(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_avd10_on, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glb_ckdet_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_ckdet_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glb_ckdet_en(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_ckdet_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glb_bias_lpf_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_lpf_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glb_bias_lpf_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_lpf_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glb_bias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glb_bias_en(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_en, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_frc_glb_avd10_on(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_avd10_on, (reg32), (val))
#define PEXTP_DIG_GLB_74_SET_rg_xtp_glb_avd10_on(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_avd10_on, (reg32), (val))

#define PEXTP_DIG_GLB_80_SET_rg_xtp_ln4_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_80_SET_rg_xtp_ln4_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_84_SET_rg_xtp_ln5_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_84_SET_rg_xtp_ln5_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_88_SET_rg_xtp_ln6_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_88_SET_rg_xtp_ln6_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_8C_SET_rg_xtp_ln7_prb_sel_h(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_h, (reg32), (val))
#define PEXTP_DIG_GLB_8C_SET_rg_xtp_ln7_prb_sel_l(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_l, (reg32), (val))

#define PEXTP_DIG_GLB_A0_SET_rg_xtp_glb_dummy(reg32, val)      REG_FLD_SET(PEXTP_DIG_GLB_A0_FLD_rg_xtp_glb_dummy, (reg32), (val))

#define PEXTP_DIG_GLB_A4_SET_rg_xtp_pclk_ddr_ck_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_pclk_ddr_ck_sel, (reg32), (val))
#define PEXTP_DIG_GLB_A4_SET_rg_xtp_frc_rx_polarity(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_rx_polarity, (reg32), (val))
#define PEXTP_DIG_GLB_A4_SET_rg_xtp_frc_tx_swing(reg32, val)   REG_FLD_SET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_swing, (reg32), (val))
#define PEXTP_DIG_GLB_A4_SET_rg_xtp_frc_tx_margin(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_margin, (reg32), (val))

#define PEXTP_DIG_GLB_B0_SET_rgs_xtp_tpll_cs(reg32, val)       REG_FLD_SET(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_tpll_cs, (reg32), (val))
#define PEXTP_DIG_GLB_B0_SET_rgs_xtp_vcm_cs(reg32, val)        REG_FLD_SET(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_vcm_cs, (reg32), (val))
#define PEXTP_DIG_GLB_B0_SET_rgs_xtp_txpd_tx_cs(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_txpd_tx_cs, (reg32), (val))

#define PEXTP_DIG_GLB_C0_SET_rg_xtp_ckm_en_l1s1_dev(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rg_xtp_ckm_en_l1s1_dev, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_phy_status(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_phy_status, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_rx_eq_eval(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_eval, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_rx_eq_in_progress(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_in_progress, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_block_align_control(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_block_align_control, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_tx_swing(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_swing, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_tx_margin(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_margin, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_tx_detect_rx(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_detect_rx, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_rate(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rate, (reg32), (val))
#define PEXTP_DIG_GLB_C0_SET_rgs_xtp_pipe_power_down_sync(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_power_down_sync, (reg32), (val))

#define PEXTP_DIG_GLB_D0_SET_rgs_xtp_probe_out(reg32, val)     REG_FLD_SET(PEXTP_DIG_GLB_D0_FLD_rgs_xtp_probe_out, (reg32), (val))

#define PEXTP_DIG_GLB_E0_SET_rgs_xtp_version_code(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_E0_FLD_rgs_xtp_version_code, (reg32), (val))

#define PEXTP_DIG_GLB_E4_SET_rgs_xtp_project_code(reg32, val)  REG_FLD_SET(PEXTP_DIG_GLB_E4_FLD_rgs_xtp_project_code, (reg32), (val))

#define PEXTP_DIG_GLB_E8_SET_rg_xtp_glb_clk_sel(reg32, val)    REG_FLD_SET(PEXTP_DIG_GLB_E8_FLD_rg_xtp_glb_clk_sel, (reg32), (val))
#define PEXTP_DIG_GLB_E8_SET_rg_xtp_frc_glb_clk_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_E8_FLD_rg_xtp_frc_glb_clk_sel, (reg32), (val))

#define PEXTP_DIG_GLB_EC_SET_rg_xtp_glb_clk_sel_ep(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_ep, (reg32), (val))
#define PEXTP_DIG_GLB_EC_SET_rg_xtp_glb_clk_sel_rc(reg32, val) REG_FLD_SET(PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_rc, (reg32), (val))

#define PEXTP_DIG_GLB_00_VAL_rg_xtp_prb_sel_h(val)             REG_FLD_VAL(PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_h, (val))
#define PEXTP_DIG_GLB_00_VAL_rg_xtp_prb_sel_l(val)             REG_FLD_VAL(PEXTP_DIG_GLB_00_FLD_rg_xtp_prb_sel_l, (val))

#define PEXTP_DIG_GLB_04_VAL_rg_xtp_misc_prb_sel_h(val)        REG_FLD_VAL(PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_h, (val))
#define PEXTP_DIG_GLB_04_VAL_rg_xtp_misc_prb_sel_l(val)        REG_FLD_VAL(PEXTP_DIG_GLB_04_FLD_rg_xtp_misc_prb_sel_l, (val))

#define PEXTP_DIG_GLB_08_VAL_rg_xtp_ckgen_prb_sel_h(val)       REG_FLD_VAL(PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_h, (val))
#define PEXTP_DIG_GLB_08_VAL_rg_xtp_ckgen_prb_sel_l(val)       REG_FLD_VAL(PEXTP_DIG_GLB_08_FLD_rg_xtp_ckgen_prb_sel_l, (val))

#define PEXTP_DIG_GLB_0C_VAL_rg_xtp_efuse_prb_sel_h(val)       REG_FLD_VAL(PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_h, (val))
#define PEXTP_DIG_GLB_0C_VAL_rg_xtp_efuse_prb_sel_l(val)       REG_FLD_VAL(PEXTP_DIG_GLB_0C_FLD_rg_xtp_efuse_prb_sel_l, (val))

#define PEXTP_DIG_GLB_10_VAL_rg_xtp_ln0_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_h, (val))
#define PEXTP_DIG_GLB_10_VAL_rg_xtp_ln0_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_10_FLD_rg_xtp_ln0_prb_sel_l, (val))

#define PEXTP_DIG_GLB_14_VAL_rg_xtp_ln1_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_h, (val))
#define PEXTP_DIG_GLB_14_VAL_rg_xtp_ln1_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_14_FLD_rg_xtp_ln1_prb_sel_l, (val))

#define PEXTP_DIG_GLB_18_VAL_rg_xtp_ln2_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_h, (val))
#define PEXTP_DIG_GLB_18_VAL_rg_xtp_ln2_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_18_FLD_rg_xtp_ln2_prb_sel_l, (val))

#define PEXTP_DIG_GLB_1C_VAL_rg_xtp_ln3_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_h, (val))
#define PEXTP_DIG_GLB_1C_VAL_rg_xtp_ln3_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_1C_FLD_rg_xtp_ln3_prb_sel_l, (val))

#define PEXTP_DIG_GLB_20_VAL_rg_xtp_t2rlb_dig_en(val)          REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_t2rlb_dig_en, (val))
#define PEXTP_DIG_GLB_20_VAL_rg_xtp_rx_prb_div2(val)           REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_rx_prb_div2, (val))
#define PEXTP_DIG_GLB_20_VAL_rg_xtp_tx_prb_ext(val)            REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_ext, (val))
#define PEXTP_DIG_GLB_20_VAL_rg_xtp_tx_prb_div2_phsel(val)     REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2_phsel, (val))
#define PEXTP_DIG_GLB_20_VAL_rg_xtp_tx_prb_div2(val)           REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_tx_prb_div2, (val))
#define PEXTP_DIG_GLB_20_VAL_rg_xtp_vipsim(val)                REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_vipsim, (val))
#define PEXTP_DIG_GLB_20_VAL_rg_xtp_reset(val)                 REG_FLD_VAL(PEXTP_DIG_GLB_20_FLD_rg_xtp_reset, (val))

#define PEXTP_DIG_GLB_24_VAL_rg_xtp_cosim_cdrk(val)            REG_FLD_VAL(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_cdrk, (val))
#define PEXTP_DIG_GLB_24_VAL_rg_xtp_cosim_rx(val)              REG_FLD_VAL(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rx, (val))
#define PEXTP_DIG_GLB_24_VAL_rg_xtp_cosim_tx_vcm_stable(val)   REG_FLD_VAL(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tx_vcm_stable, (val))
#define PEXTP_DIG_GLB_24_VAL_rg_xtp_cosim_tpll_stable(val)     REG_FLD_VAL(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_tpll_stable, (val))
#define PEXTP_DIG_GLB_24_VAL_rg_xtp_cosim_rxdet_stable(val)    REG_FLD_VAL(PEXTP_DIG_GLB_24_FLD_rg_xtp_cosim_rxdet_stable, (val))

#define PEXTP_DIG_GLB_28_VAL_rg_xtp_tx_ptg_en(val)             REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_tx_ptg_en, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_tpll_rate(val)             REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_rate, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_tpll_rate(val)         REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_rate, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_txck_tpll_stable(val)      REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_tpll_stable, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_txck_tpll_stable(val)  REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_tpll_stable, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_tpll_stable(val)           REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_tpll_stable, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_tpll_stable(val)       REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_tpll_stable, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_txck_all_cal_done(val)     REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_txck_all_cal_done, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_txck_all_cal_done(val) REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_txck_all_cal_done, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_all_cal_done(val)          REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_all_cal_done, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_all_cal_done(val)      REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_all_cal_done, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_active_mac_clkreq_n(val)   REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_active_mac_clkreq_n, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_active(val)                REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_active, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_active(val)            REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_active, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_xtal_type(val)             REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_xtal_type, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_xtal_type(val)         REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_xtal_type, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_phy_clkreq_n_in(val)       REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_phy_clkreq_n_in(val)   REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_phy_clkreq_n_in, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_mac_tx_cm_dis(val)         REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_tx_cm_dis, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_mac_tx_cm_dis(val)     REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_tx_cm_dis, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_mac_rx_ei_dis(val)         REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_rx_ei_dis, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_mac_rx_ei_dis(val)     REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_rx_ei_dis, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_mac_clkreq_n(val)          REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_clkreq_n, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_mac_clkreq_n(val)      REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_clkreq_n, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_mac_l1ss_en(val)           REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_mac_l1ss_en, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_mac_l1ss_en(val)       REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_mac_l1ss_en, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_pcie_mode(val)             REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_pcie_mode, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_frc_pcie_mode(val)         REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_frc_pcie_mode, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_phy_clkreq_n_in_async(val) REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_clkreq_n_in_async, (val))
#define PEXTP_DIG_GLB_28_VAL_rg_xtp_phy_enable(val)            REG_FLD_VAL(PEXTP_DIG_GLB_28_FLD_rg_xtp_phy_enable, (val))

#define PEXTP_DIG_GLB_2C_VAL_rg_xtp_pipe_retime_en(val)        REG_FLD_VAL(PEXTP_DIG_GLB_2C_FLD_rg_xtp_pipe_retime_en, (val))
#define PEXTP_DIG_GLB_2C_VAL_rg_xtp_mac_l12_prd(val)           REG_FLD_VAL(PEXTP_DIG_GLB_2C_FLD_rg_xtp_mac_l12_prd, (val))
#define PEXTP_DIG_GLB_2C_VAL_rg_xtp_frc_mac_l12_prd(val)       REG_FLD_VAL(PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_mac_l12_prd, (val))
#define PEXTP_DIG_GLB_2C_VAL_rg_xtp_rx_in_sw(val)              REG_FLD_VAL(PEXTP_DIG_GLB_2C_FLD_rg_xtp_rx_in_sw, (val))
#define PEXTP_DIG_GLB_2C_VAL_rg_xtp_frc_rx_in_sw(val)          REG_FLD_VAL(PEXTP_DIG_GLB_2C_FLD_rg_xtp_frc_rx_in_sw, (val))

#define PEXTP_DIG_GLB_30_VAL_rg_xtp_misc_mac_l12_prd_dis(val)  REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_misc_mac_l12_prd_dis, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ckbg_xtal_stb_t_sel(val)   REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stb_t_sel, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ckbg_cfg_ck_req(val)       REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_cfg_ck_req, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_ckbg_cfg_ck_req(val)   REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_cfg_ck_req, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ckbg_bg_stable(val)        REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_bg_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_ckbg_bg_stable(val)    REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_bg_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ad_xtp_glb_ckdet_out(val)  REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ad_xtp_glb_ckdet_out, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_ad_xtp_glb_ckdet_out(val) REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ad_xtp_glb_ckdet_out, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ckbg_ckdet_en_stable(val)  REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_ckdet_en_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_ckbg_ckdet_en_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_ckdet_en_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ckbg_coarse_bg_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_coarse_bg_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_ckbg_coarse_bg_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_coarse_bg_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_ckbg_xtal_stable(val)      REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_ckbg_xtal_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_ckbg_xtal_stable(val)  REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_ckbg_xtal_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_xtal_req(val)              REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_req, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_xtal_req(val)          REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_req, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_xtal_stable(val)           REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_xtal_stable, (val))
#define PEXTP_DIG_GLB_30_VAL_rg_xtp_frc_xtal_stable(val)       REG_FLD_VAL(PEXTP_DIG_GLB_30_FLD_rg_xtp_frc_xtal_stable, (val))

#define PEXTP_DIG_GLB_34_VAL_rg_xtp_ckbg_ckdet_time_sel(val)   REG_FLD_VAL(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_ckdet_time_sel, (val))
#define PEXTP_DIG_GLB_34_VAL_rg_xtp_ad_ckdet_out_reach(val)    REG_FLD_VAL(PEXTP_DIG_GLB_34_FLD_rg_xtp_ad_ckdet_out_reach, (val))
#define PEXTP_DIG_GLB_34_VAL_rg_xtp_ckdet_en_stb_t_sel(val)    REG_FLD_VAL(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckdet_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_34_VAL_rg_xtp_ckbg_bg_stb_t_sel(val)     REG_FLD_VAL(PEXTP_DIG_GLB_34_FLD_rg_xtp_ckbg_bg_stb_t_sel, (val))

#define PEXTP_DIG_GLB_38_VAL_rg_xtp_pipe_rate_sel(val)         REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_pipe_rate_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_tpll_pre_off_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_pre_off_stb_t_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_tpll_en_off_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_off_stb_t_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_tpll_go_off_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_go_off_stb_t_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_tpll_iso_en_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_iso_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_tpll_en_stb_t_sel(val)     REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_tpll_set_stb_t_sel(val)    REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_tpll_set_stb_t_sel, (val))
#define PEXTP_DIG_GLB_38_VAL_rg_xtp_frc_tpll_req(val)          REG_FLD_VAL(PEXTP_DIG_GLB_38_FLD_rg_xtp_frc_tpll_req, (val))

#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_pre_off_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_pre_off_stb_t_sel, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_req(val)               REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_req, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_frc_req(val)           REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_frc_req, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_skp_wait_tx(val)       REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_wait_tx, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_skp_cal_done(val)      REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_skp_cal_done, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_tx_vcm_sel(val)        REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_tx_vcm_sel, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_drv_en_stb_t_sel(val)  REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_drv_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_3C_VAL_rg_xtp_vcm_cmkp_stb_t_sel(val)    REG_FLD_VAL(PEXTP_DIG_GLB_3C_FLD_rg_xtp_vcm_cmkp_stb_t_sel, (val))

#define PEXTP_DIG_GLB_40_VAL_rg_xtp_rxdet_drv_en_off_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_rxdet_drv_en_off_stb_t_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_e0_out_hang_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0_out_hang_t_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_drv_en_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_drv_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_bias_en_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_bias_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_e0stoe2_sel(val)      REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe2_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_e0stoe1_sel(val)      REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e0stoe1_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_e1toe2_sel(val)       REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe2_sel, (val))
#define PEXTP_DIG_GLB_40_VAL_rg_xtp_txpd_e1toe0s_sel(val)      REG_FLD_VAL(PEXTP_DIG_GLB_40_FLD_rg_xtp_txpd_e1toe0s_sel, (val))

#define PEXTP_DIG_GLB_44_VAL_rg_xtp_rxdet_latch_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_latch_stb_t_sel, (val))
#define PEXTP_DIG_GLB_44_VAL_rg_xtp_txpd_rxdet_done_cdt(val)   REG_FLD_VAL(PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_rxdet_done_cdt, (val))
#define PEXTP_DIG_GLB_44_VAL_rg_xtp_txpd_tx_data_en_dly(val)   REG_FLD_VAL(PEXTP_DIG_GLB_44_FLD_rg_xtp_txpd_tx_data_en_dly, (val))
#define PEXTP_DIG_GLB_44_VAL_rg_xtp_rxdet_finish_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_finish_stb_t_sel, (val))
#define PEXTP_DIG_GLB_44_VAL_rg_xtp_rxdet_en_stb_t_sel(val)    REG_FLD_VAL(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_en_stb_t_sel, (val))
#define PEXTP_DIG_GLB_44_VAL_rg_xtp_rxdet_vcm_off_stb_t_sel(val) REG_FLD_VAL(PEXTP_DIG_GLB_44_FLD_rg_xtp_rxdet_vcm_off_stb_t_sel, (val))

#define PEXTP_DIG_GLB_48_VAL_rg_xtp_txpd_tx_drv_en_raw(val)    REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_en_raw, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_txpd_tx_drv_g234_dly(val)  REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g234_dly, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_txpd_tx_drv_g1_dly(val)    REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_txpd_tx_drv_g1_dly, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_pipe_p0s_sel_rx(val)   REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_sel_rx, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_tx_ck_en(val)          REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tx_ck_en, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_vcm_req_sel(val)       REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req_sel, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_phy_status_updt(val)   REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_phy_status_updt, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_pipe_p2_ignore_rx(val) REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p2_ignore_rx, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_pipe_p1_ignore_rx(val) REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p1_ignore_rx, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_pipe_p0s_ignore_rx(val) REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0s_ignore_rx, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_pipe_p0_ignore_rx(val) REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_pipe_p0_ignore_rx, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_vcm_req(val)           REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_vcm_req, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_frc_pdc_vcm_req(val)       REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_vcm_req, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_pdc_tpll_req(val)          REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_pdc_tpll_req, (val))
#define PEXTP_DIG_GLB_48_VAL_rg_xtp_frc_pdc_tpll_req(val)      REG_FLD_VAL(PEXTP_DIG_GLB_48_FLD_rg_xtp_frc_pdc_tpll_req, (val))

#define PEXTP_DIG_GLB_4C_VAL_rg_xtp_cdrk_retry_cnt(val)        REG_FLD_VAL(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_retry_cnt, (val))
#define PEXTP_DIG_GLB_4C_VAL_rg_xtp_cdrk_cal_cnt(val)          REG_FLD_VAL(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_cal_cnt, (val))
#define PEXTP_DIG_GLB_4C_VAL_rg_xtp_cdrk_set_cnt(val)          REG_FLD_VAL(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_set_cnt, (val))
#define PEXTP_DIG_GLB_4C_VAL_rg_xtp_cdrk_tpll_req_cnt(val)     REG_FLD_VAL(PEXTP_DIG_GLB_4C_FLD_rg_xtp_cdrk_tpll_req_cnt, (val))

#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ldo_en(val)                REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ldo_en, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_frc_ldo_en(val)            REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ldo_en, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_phy_status_sync_dly(val)   REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_status_sync_dly, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_phy_clkreq_out_n_en_rc_lgc(val) REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_rc_lgc, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_phy_clkreq_out_n_en_ep_lgc(val) REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_out_n_en_ep_lgc, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_en_l1s2(val)           REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s2, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_en_l1s1(val)           REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s1, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_en_l1s0(val)           REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_l1s0, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_en_lgc_l1(val)         REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en_lgc_l1, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_padck_req(val)         REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_padck_req, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_frc_ckm_padck_req(val)     REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_padck_req, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_intck_req(val)         REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_intck_req, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_frc_ckm_intck_req(val)     REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_intck_req, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_ckm_en(val)                REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_ckm_en, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_frc_ckm_en(val)            REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_ckm_en, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_phy_clkreq_n_en(val)       REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_en, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_frc_phy_clkreq_n_en(val)   REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_en, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_phy_clkreq_n_out(val)      REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_phy_clkreq_n_out, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_frc_phy_clkreq_n_out(val)  REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_frc_phy_clkreq_n_out, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_clkreq_pad_wake_sel(val)   REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_pad_wake_sel, (val))
#define PEXTP_DIG_GLB_50_VAL_rg_xtp_clkreq_wake_sel(val)       REG_FLD_VAL(PEXTP_DIG_GLB_50_FLD_rg_xtp_clkreq_wake_sel, (val))

#define PEXTP_DIG_GLB_60_VAL_rg_xtp_ckgen_ref_ck_en(val)       REG_FLD_VAL(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ref_ck_en, (val))
#define PEXTP_DIG_GLB_60_VAL_rg_xtp_ckgen_ck_div4_en(val)      REG_FLD_VAL(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div4_en, (val))
#define PEXTP_DIG_GLB_60_VAL_rg_xtp_ckgen_ck_div2_en(val)      REG_FLD_VAL(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_ck_div2_en, (val))
#define PEXTP_DIG_GLB_60_VAL_rg_xtp_ckgen_tx_ck_en(val)        REG_FLD_VAL(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tx_ck_en, (val))
#define PEXTP_DIG_GLB_60_VAL_rg_xtp_ckgen_tpll_stable(val)     REG_FLD_VAL(PEXTP_DIG_GLB_60_FLD_rg_xtp_ckgen_tpll_stable, (val))

#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln3_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln3_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln3_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln3_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln3_rx_ck_stable, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln2_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln2_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln2_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln2_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln2_rx_ck_stable, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln1_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln1_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln1_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln1_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln1_rx_ck_stable, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln0_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln0_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_en, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln0_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_64_VAL_rg_xtp_ckgen_ln0_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_64_FLD_rg_xtp_ckgen_ln0_rx_ck_stable, (val))

#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln7_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln7_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln7_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln7_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln7_rx_ck_stable, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln6_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln6_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln6_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln6_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln6_rx_ck_stable, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln5_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln5_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln5_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln5_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln5_rx_ck_stable, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln4_rx_ck_div_en(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_div_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln4_rx_ck_en(val)    REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_en, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln4_rx_nt_ck_inv(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_nt_ck_inv, (val))
#define PEXTP_DIG_GLB_68_VAL_rg_xtp_ckgen_ln4_rx_ck_stable(val) REG_FLD_VAL(PEXTP_DIG_GLB_68_FLD_rg_xtp_ckgen_ln4_rx_ck_stable, (val))

#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_phy_status(val)       REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_phy_status, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_rx_eq_eval(val)       REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_eval, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_rx_eq_in_progress(val) REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rx_eq_in_progress, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_block_align_control(val) REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_block_align_control, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_tx_swing(val)         REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_swing, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_tx_margin(val)        REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_margin, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_tx_detect_rx(val)     REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_tx_detect_rx, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_rate(val)             REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_rate, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_power_down_sync(val)  REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_sync, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_power_down_async(val) REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_power_down_async, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_frc_pipe_power_down_async(val) REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_frc_pipe_power_down_async, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_updt(val)             REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_updt, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_out_fr_rg(val)        REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_out_fr_rg, (val))
#define PEXTP_DIG_GLB_70_VAL_rg_xtp_pipe_in_fr_rg(val)         REG_FLD_VAL(PEXTP_DIG_GLB_70_FLD_rg_xtp_pipe_in_fr_rg, (val))

#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glbs_ckdet_en(val)     REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_ckdet_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glbs_ckdet_en(val)         REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_ckdet_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glbs_bias_lpf_en(val)  REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_lpf_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glbs_bias_lpf_en(val)      REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_lpf_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glbs_bias_en(val)      REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_bias_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glbs_bias_en(val)          REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_bias_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glbs_avd10_on(val)     REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glbs_avd10_on, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glbs_avd10_on(val)         REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glbs_avd10_on, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glb_ckdet_en(val)      REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_ckdet_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glb_ckdet_en(val)          REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_ckdet_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glb_bias_lpf_en(val)   REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_lpf_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glb_bias_lpf_en(val)       REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_lpf_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glb_bias_en(val)       REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_bias_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glb_bias_en(val)           REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_bias_en, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_frc_glb_avd10_on(val)      REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_frc_glb_avd10_on, (val))
#define PEXTP_DIG_GLB_74_VAL_rg_xtp_glb_avd10_on(val)          REG_FLD_VAL(PEXTP_DIG_GLB_74_FLD_rg_xtp_glb_avd10_on, (val))

#define PEXTP_DIG_GLB_80_VAL_rg_xtp_ln4_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_h, (val))
#define PEXTP_DIG_GLB_80_VAL_rg_xtp_ln4_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_80_FLD_rg_xtp_ln4_prb_sel_l, (val))

#define PEXTP_DIG_GLB_84_VAL_rg_xtp_ln5_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_h, (val))
#define PEXTP_DIG_GLB_84_VAL_rg_xtp_ln5_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_84_FLD_rg_xtp_ln5_prb_sel_l, (val))

#define PEXTP_DIG_GLB_88_VAL_rg_xtp_ln6_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_h, (val))
#define PEXTP_DIG_GLB_88_VAL_rg_xtp_ln6_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_88_FLD_rg_xtp_ln6_prb_sel_l, (val))

#define PEXTP_DIG_GLB_8C_VAL_rg_xtp_ln7_prb_sel_h(val)         REG_FLD_VAL(PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_h, (val))
#define PEXTP_DIG_GLB_8C_VAL_rg_xtp_ln7_prb_sel_l(val)         REG_FLD_VAL(PEXTP_DIG_GLB_8C_FLD_rg_xtp_ln7_prb_sel_l, (val))

#define PEXTP_DIG_GLB_A0_VAL_rg_xtp_glb_dummy(val)             REG_FLD_VAL(PEXTP_DIG_GLB_A0_FLD_rg_xtp_glb_dummy, (val))

#define PEXTP_DIG_GLB_A4_VAL_rg_xtp_pclk_ddr_ck_sel(val)       REG_FLD_VAL(PEXTP_DIG_GLB_A4_FLD_rg_xtp_pclk_ddr_ck_sel, (val))
#define PEXTP_DIG_GLB_A4_VAL_rg_xtp_frc_rx_polarity(val)       REG_FLD_VAL(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_rx_polarity, (val))
#define PEXTP_DIG_GLB_A4_VAL_rg_xtp_frc_tx_swing(val)          REG_FLD_VAL(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_swing, (val))
#define PEXTP_DIG_GLB_A4_VAL_rg_xtp_frc_tx_margin(val)         REG_FLD_VAL(PEXTP_DIG_GLB_A4_FLD_rg_xtp_frc_tx_margin, (val))

#define PEXTP_DIG_GLB_B0_VAL_rgs_xtp_tpll_cs(val)              REG_FLD_VAL(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_tpll_cs, (val))
#define PEXTP_DIG_GLB_B0_VAL_rgs_xtp_vcm_cs(val)               REG_FLD_VAL(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_vcm_cs, (val))
#define PEXTP_DIG_GLB_B0_VAL_rgs_xtp_txpd_tx_cs(val)           REG_FLD_VAL(PEXTP_DIG_GLB_B0_FLD_rgs_xtp_txpd_tx_cs, (val))

#define PEXTP_DIG_GLB_C0_VAL_rg_xtp_ckm_en_l1s1_dev(val)       REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rg_xtp_ckm_en_l1s1_dev, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_phy_status(val)      REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_phy_status, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_rx_eq_eval(val)      REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_eval, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_rx_eq_in_progress(val) REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rx_eq_in_progress, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_block_align_control(val) REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_block_align_control, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_tx_swing(val)        REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_swing, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_tx_margin(val)       REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_margin, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_tx_detect_rx(val)    REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_tx_detect_rx, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_rate(val)            REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_rate, (val))
#define PEXTP_DIG_GLB_C0_VAL_rgs_xtp_pipe_power_down_sync(val) REG_FLD_VAL(PEXTP_DIG_GLB_C0_FLD_rgs_xtp_pipe_power_down_sync, (val))

#define PEXTP_DIG_GLB_D0_VAL_rgs_xtp_probe_out(val)            REG_FLD_VAL(PEXTP_DIG_GLB_D0_FLD_rgs_xtp_probe_out, (val))

#define PEXTP_DIG_GLB_E0_VAL_rgs_xtp_version_code(val)         REG_FLD_VAL(PEXTP_DIG_GLB_E0_FLD_rgs_xtp_version_code, (val))

#define PEXTP_DIG_GLB_E4_VAL_rgs_xtp_project_code(val)         REG_FLD_VAL(PEXTP_DIG_GLB_E4_FLD_rgs_xtp_project_code, (val))

#define PEXTP_DIG_GLB_E8_VAL_rg_xtp_glb_clk_sel(val)           REG_FLD_VAL(PEXTP_DIG_GLB_E8_FLD_rg_xtp_glb_clk_sel, (val))
#define PEXTP_DIG_GLB_E8_VAL_rg_xtp_frc_glb_clk_sel(val)       REG_FLD_VAL(PEXTP_DIG_GLB_E8_FLD_rg_xtp_frc_glb_clk_sel, (val))

#define PEXTP_DIG_GLB_EC_VAL_rg_xtp_glb_clk_sel_ep(val)        REG_FLD_VAL(PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_ep, (val))
#define PEXTP_DIG_GLB_EC_VAL_rg_xtp_glb_clk_sel_rc(val)        REG_FLD_VAL(PEXTP_DIG_GLB_EC_FLD_rg_xtp_glb_clk_sel_rc, (val))

#ifdef __cplusplus
}
#endif

#endif // __pextp_sifslv_dig_glb_p0_REGS_H__

