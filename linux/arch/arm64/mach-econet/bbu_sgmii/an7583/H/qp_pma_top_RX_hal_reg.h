#ifndef QP_PMA_TOP_RX_HAL_REG
#define QP_PMA_TOP_RX_HAL_REG

typedef struct {
uint32 rg_qp_rx_hz :1;
uint32 rg_qp_roc_ck_en :1;
uint32 rg_qp_ad_sleep_en :1;
uint32 rg_qp_prbs_sel :3;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_amp :3;
uint32 rg_qp_speed_sel :1;
uint32 rg_qp_speed_sel_1 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_SYS_CTRL_0, *pHAL_RX_SYS_CTRL_0;

typedef struct {
uint32 rg_qp_fll_dig_pro :1;
uint32 rg_qp_icdr_kband_done_force :1;
uint32 rg_qp_icdr_kband_done_force_en :1;
uint32 rg_qp_fll_dig_rstb_force :1;
uint32 rg_qp_fll_dig_rst_force_en :1;
uint32 rg_qp_fll_cor :1;
uint32 rg_qp_fll_repli :1;
uint32 rsv_7 :1;
uint32 rg_qp_debug_sel :3;
uint32 rg_qp_ro_fll_1_latch_en :1;
uint32 rg_qp_ro_fll_2_latch_en :1;
uint32 rg_qp_ro_fll_3_latch_en :1;
uint32 rg_qp_ro_fll_4_latch_en :1;
uint32 rsv_15 :1;
uint32 rg_qp_load_en :1;
uint32 rg_qp_ipath_idac :11;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_FLL_CTRL_0, *pHAL_FLL_CTRL_0;

typedef struct {
uint32 rg_qp_fll_idac_max :11;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_fll_idac_min :11;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_FLL_CTRL_1, *pHAL_FLL_CTRL_1;

typedef struct {
uint32 rg_qp_settle_time_sel :3;
uint32 rg_qp_symbol_wd :3;
uint32 rg_qp_ck_rate :3;
uint32 rg_qp_kband_prediv :3;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_fbkdiv :11;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_FLL_CTRL_2, *pHAL_FLL_CTRL_2;

typedef struct {
uint32 rg_qp_fll_idac_repli :11;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_FLL_CTRL_3, *pHAL_FLL_CTRL_3;

typedef struct {
uint32 rg_qp_rx_pi_cal_en_h_dly :8;
uint32 rg_qp_rx_saosc_en_h_dly :6;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_DLY_0, *pHAL_RX_DLY_0;

typedef struct {
uint32 rg_qp_sig_det_h_thres :10;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_sig_det_l_thres :10;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_DLY_1, *pHAL_RX_DLY_1;

typedef struct {
uint32 rg_qp_rx_afifo_adj :6;
uint32 rg_qp_rx_asic_uses_ff :1;
uint32 rg_qp_rx_data_inv :1;
uint32 rg_qp_pma_rx_fifo_rd_dly :4;
uint32 rg_qp_pma_rx_fifo_wr_clr :1;
uint32 rg_qp_pma_rx_fifo_rd_clr :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_pma_rx_fifo_wr_thr :7;
uint32 rsv_23 :1;
uint32 rg_qp_pma_rx_fifo_rd_thr :7;
uint32 rsv_31 :1;
}HAL_RX_AFIFO, *pHAL_RX_AFIFO;

typedef struct {
uint32 rg_qp_power_on :1;
uint32 rg_qp_impcal_out :1;
uint32 rg_qp_impcal_en :1;
uint32 rg_qp_force_impcal_en :1;
uint32 rg_qp_force_impsel :1;
uint32 rg_qp_impcal_cycnt :10;
uint32 rg_qp_impcal_stbcyc :5;
uint32 rg_qp_impcal_calcyc :6;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_IMP_CTRL_0, *pHAL_IMP_CTRL_0;

typedef struct {
uint32 rg_qp_fix_impsel :5;
uint32 rg_qp_imp_bias :4;
uint32 rg_qp_rx_imp_sel :5;
uint32 rg_qp_impcal_cal :5;
uint32 rg_qp_prb_out :8;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_IMP_CTRL_1, *pHAL_IMP_CTRL_1;

typedef struct {
uint32 rg_qp_cdr_vcocal_state :7;
uint32 rg_qp_cdr_vcocal_fail :1;
uint32 rg_qp_rosc_coarse_sel :4;
uint32 rg_qp_rosc_fine :4;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_UNUSE_0, *pHAL_RX_CTRL_UNUSE_0;

typedef struct {
uint32 rg_qp_cdr_bw_sel_dly :4;
uint32 rg_qp_cdr_re_calib :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_cdr_settle_dly :11;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_freq_det_en_wait_dly :4;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_1, *pHAL_RX_CTRL_1;

typedef struct {
uint32 rg_qp_freq_det_frc :1;
uint32 rg_qp_freq_det_frc_en :1;
uint32 rg_qp_lpf_window_sel :2;
uint32 rg_qp_phya_pwd :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_ppm_thres :6;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_rx_eq_en_h_dly :13;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rg_qp_rx_pwd :1;
}HAL_RX_CTRL_2, *pHAL_RX_CTRL_2;

typedef struct {
uint32 rg_qp_sig_det_wait_dly :16;
uint32 rg_qp_sigdet_wait_cond :1;
uint32 rg_qp_sigdet_wait_force :1;
uint32 rg_qp_speed_chg :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_cdr_band_fail :7;
uint32 rsv_31 :1;
}HAL_RX_CTRL_3, *pHAL_RX_CTRL_3;

typedef struct {
uint32 rg_rx_settle_rdy_time :8;
uint32 rg_rx_pi_cal_en_start_time :8;
uint32 rg_bias_dir :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_pcie_sig_cal_en_time_sel :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rg_qp_kband_kfc :2;
uint32 rsv_31 :1;
}HAL_RX_CTRL_4, *pHAL_RX_CTRL_4;

typedef struct {
uint32 rg_qp_impcal_cyccnt :10;
uint32 rg_fredet_chk_cycle :20;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_5, *pHAL_RX_CTRL_5;

typedef struct {
uint32 rg_fredet_golden_cycle :20;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_6, *pHAL_RX_CTRL_6;

typedef struct {
uint32 rg_fredet_tolerate_cycle :20;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_fredet_relck_num :4;
uint32 rg_fredet_clear_unlck_cnt :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_7, *pHAL_RX_CTRL_7;

typedef struct {
uint32 rg_da_qp_leqos_en_time :15;
uint32 rsv_15 :1;
uint32 rg_da_qp_saosc_done_time :12;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_8, *pHAL_RX_CTRL_8;

typedef struct {
uint32 rg_force_cdr_pd_pwdb_sel :1;
uint32 rg_force_cdr_pd_pwdb :1;
uint32 rg_force_rx_pi_cal_en_sel :1;
uint32 rg_force_rx_pi_cal_en :1;
uint32 rg_force_rx_data_rstb_sel :1;
uint32 rg_force_rx_data_rstb :1;
uint32 rg_force_dfe_rst_sel :1;
uint32 rg_force_dfe_rst :1;
uint32 rg_force_rx_sigdet_en_sel :1;
uint32 rg_force_rx_sigdet_en :1;
uint32 rg_force_dfe_en_sel :1;
uint32 rg_force_dfe_en :1;
uint32 rg_force_cdr_stable_sel :1;
uint32 rg_force_cdr_stable :1;
uint32 rg_force_cdr_lpf_rstb_sel :1;
uint32 rg_force_cdr_lpf_rstb :1;
uint32 rg_force_cdr_lck2ref_sel :1;
uint32 rg_force_cdr_lck2ref :1;
uint32 rg_force_rx_saos_en_sel :1;
uint32 rg_force_rx_saos_en :1;
uint32 rg_force_sigdet_cal_out_bypass_ana_sel :1;
uint32 rg_force_sigdet_cal_out_bypass_ana :1;
uint32 rg_force_sigdet_out_bypass_ana_sel :1;
uint32 rg_force_sigdet_out_bypass_ana :1;
uint32 rg_force_cdr_kband_done_bypass_ana_sel :1;
uint32 rg_force_cdr_kband_done_bypass_ana :1;
uint32 rg_force_bias_pwd_sel :1;
uint32 rg_force_bias_pwd :1;
uint32 rg_force_pll_stable_sel :1;
uint32 rg_force_pll_stable :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_9, *pHAL_RX_CTRL_9;

typedef struct {
uint32 rg_qp_crsdet_en :1;
uint32 rg_qp_crsdet_rstb :1;
uint32 rg_qp_rx_scan :1;
uint32 rg_force_eq_en_sel :1;
uint32 rg_force_eq_en :1;
uint32 rg_force_cdr_lck2ref_pre_sel :1;
uint32 rg_force_cdr_lck2ref_pre :1;
uint32 rg_qp_cdr_settle_rdy_cnt_pre_time :11;
uint32 rg_qp_cdr_settle_rdy_cnt_time :11;
uint32 rg_force_cdr_settle_ok_sel :1;
uint32 rg_force_cdr_settle_ok :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_10, *pHAL_RX_CTRL_10;

typedef struct {
uint32 rg_force_freq_lock_sel :1;
uint32 rg_force_freq_lock :1;
uint32 rg_force_saos_rdy_sel :1;
uint32 rg_force_saos_rdy :1;
uint32 rg_qp_eq_rstep1 :2;
uint32 rg_qp_eq_rstep2 :2;
uint32 rg_qp_force_eq_rdy_sel :1;
uint32 rg_qp_force_eq_rdy :1;
uint32 rg_qp_force_speed_sel :1;
uint32 rg_qp_force_eq_en_sel :1;
uint32 rg_qp_force_eq_en :1;
uint32 rg_qp_rx_dcleq_intf :4;
uint32 rg_qp_force_sigdet_sel :1;
uint32 rg_qp_force_sigdet :1;
uint32 rg_qp_force_sigdet_5g :1;
uint32 rg_qp_force_sigdet_10g :1;
uint32 rg_qp_sigdet_cal_sample_time :5;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_11, *pHAL_RX_CTRL_11;

typedef struct {
uint32 rg_sigdet_en :1;
uint32 rg_sigdet_win_size :8;
uint32 rg_sigdet_vld_time :8;
uint32 rg_sigdet_win_vld_times :5;
uint32 rg_sigdet_win_nonvld_times :5;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_12, *pHAL_RX_CTRL_12;

typedef struct {
uint32 rg_qp_reserve_0 :8;
uint32 rg_qp_reserve_1 :8;
uint32 rg_qp_reserve_2 :8;
uint32 rg_qp_reserve_3 :8;
}HAL_RX_CTRL_13, *pHAL_RX_CTRL_13;

typedef struct {
uint32 qphy_rx_ctrl_debug :8;
uint32 qphy_rx_ctrl_debug_1 :8;
uint32 qphy_rx_ctrl_debug_2 :8;
uint32 qphy_rx_ctrl_debug_3 :8;
}HAL_RX_CTRL_14, *pHAL_RX_CTRL_14;

typedef struct {
uint32 ro_adc_freq :20;
uint32 ro_fll_idac :11;
uint32 rsv_31 :1;
}HAL_RX_CTRL_15, *pHAL_RX_CTRL_15;

typedef struct {
uint32 ro_cor_gain :32;
}HAL_RX_CTRL_16, *pHAL_RX_CTRL_16;

typedef struct {
uint32 ro_idacf :11;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 ro_da_idac :11;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_17, *pHAL_RX_CTRL_17;

typedef struct {
uint32 ro_fll_idac_repli :11;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_18, *pHAL_RX_CTRL_18;

typedef struct {
uint32 ro_adc_freq_inv_output :21;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_19, *pHAL_RX_CTRL_19;

typedef struct {
uint32 ro_adc_freq_output :20;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_20, *pHAL_RX_CTRL_20;

typedef struct {
uint32 ro_cor_integ_output :32;
}HAL_RX_CTRL_21, *pHAL_RX_CTRL_21;

typedef struct {
uint32 ro_cor_integ_inv_output :32;
}HAL_RX_CTRL_22, *pHAL_RX_CTRL_22;

typedef struct {
uint32 ro_cor_gain_output_0 :16;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_23, *pHAL_RX_CTRL_23;

typedef struct {
uint32 ro_cor_gain_output_1 :17;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_24, *pHAL_RX_CTRL_24;

typedef struct {
uint32 rg_force_pr_stable_sel :1;
uint32 rsv_1 :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rsv_4 :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_force_pr_stable :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_sigdet_10g_force_en  :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_sigdet_force_en :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rg_qp_sigdet_force :1;
}HAL_RX_CTRL_25, *pHAL_RX_CTRL_25;

typedef struct {
uint32 rg_qp_sig_linkdown_sel :1;
uint32 rg_qp_force_sigdet_ln :1;
uint32 rg_qp_force_sigdet_lp :1;
uint32 rg_qp_bypass_cdr_settle_ok :1;
uint32 rg_qp_bypass_sig_det_wait_rdy_mask :1;
uint32 rg_qp_bypass_freq_lock :1;
uint32 rg_qp_bypass_saos_rdy :1;
uint32 rg_qp_bypass_cdr_settle_sig_det :1;
uint32 rg_qp_bypass_cdr_settle_freq_lock :1;
uint32 rg_qp_bypass_sig_det_freq_lock :1;
uint32 rg_qp_bypass_ok_sig_det_freq_lock :1;
uint32 rg_qp_add_pcs_link :1;
uint32 rg_qp_prbs_case :1;
uint32 rg_qp_bypass_cdr_settle_ok_relink :1;
uint32 rg_qp_bypass_sig_det_wait_rdy_mask_relink :1;
uint32 rg_qp_bypass_freq_lock_relink :1;
uint32 rg_qp_bypass_saos_rdy_relink :1;
uint32 rg_qp_bypass_cdr_settle_sig_det_relink :1;
uint32 rg_qp_bypass_cdr_settle_freq_lock_relink :1;
uint32 rg_qp_bypass_sig_det_freq_lock_relink :1;
uint32 rg_qp_bypass_ok_sig_det_freq_lock_relink :1;
uint32 rg_force_cdr_lck2ref_pre_relink_sel :1;
uint32 rg_force_cdr_lck2ref_pre_relink :1;
uint32 rg_link_erro_en :1;
uint32 rg_link_ne_en :1;
uint32 rg_qp_fifo_rstb_hw_en :1;
uint32 rg_qp_eq_retrain_only_en :1;
uint32 rg_qp_retrain_all_en :1;
uint32 rg_qp_saos_rdy_clr_by_lck2ref :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_26, *pHAL_RX_CTRL_26;

typedef struct {
uint32 rg_qp_link_erro_cnt :32;
}HAL_RX_CTRL_27, *pHAL_RX_CTRL_27;

typedef struct {
uint32 rg_qp_debug_sel_0 :1;
uint32 rg_qp_debug_sel_1 :1;
uint32 rg_qp_debug_sel_2 :1;
uint32 rg_qp_debug_sel_3 :1;
uint32 rg_qp_debug_sel_4 :1;
uint32 rg_qp_debug_sel_5 :1;
uint32 rg_qp_debug_sel_6 :1;
uint32 rsv_7 :1;
uint32 rsv_8 :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rsv_16 :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_28, *pHAL_RX_CTRL_28;

typedef struct {
uint32 qphy_rx_ctrl_debug_4 :32;
}HAL_RX_CTRL_29, *pHAL_RX_CTRL_29;

typedef struct {
uint32 qphy_rx_ctrl_debug_5 :32;
}HAL_RX_CTRL_30, *pHAL_RX_CTRL_30;

typedef struct {
uint32 qphy_rx_ctrl_debug_6 :32;
}HAL_RX_CTRL_31, *pHAL_RX_CTRL_31;

typedef struct {
uint32 qphy_rx_ctrl_debug_7 :32;
}HAL_RX_CTRL_32, *pHAL_RX_CTRL_32;

typedef struct {
uint32 qphy_rx_ctrl_debug_8 :32;
}HAL_RX_CTRL_33, *pHAL_RX_CTRL_33;

typedef struct {
uint32 qphy_rx_ctrl_debug_9 :32;
}HAL_RX_CTRL_34, *pHAL_RX_CTRL_34;

typedef struct {
uint32 rg_qp_force_pr_vco_en :1;
uint32 rg_qp_force_auto_vco_en :1;
uint32 rg_qp_force_pi_spd_chg_en :1;
uint32 rg_qp_force_pi_cal_done_sel :1;
uint32 rg_qp_force_pi_cal_done :1;
uint32 rg_qp_force_sig_det_cal_done_sel :1;
uint32 rg_qp_force_sig_det_cal_done :1;
uint32 rg_qp_force_ssusb_rx_saosc_rst_sel :1;
uint32 rg_qp_force_ssusb_rx_saosc_rst :1;
uint32 rg_qp_force_k_band_reset_sel :1;
uint32 rg_qp_pcie_speed_change_dly_time :10;
uint32 rg_qp_force_speed_change :1;
uint32 rg_qp_force_speed_change_sel :1;
uint32 rg_qp_force_pcie_usb_speed :2;
uint32 rg_qp_force_rx_path_rdy_sel :1;
uint32 rg_qp_force_rx_path_rdy :1;
uint32 rg_qp_force_rx_pr_pd_pwd_sel :1;
uint32 rg_qp_force_rx_pr_pd_pwd :1;
uint32 rg_qp_force_cdr_set_dly_clear :1;
uint32 rg_qp_force_cdr_pwd_sel :1;
uint32 rg_qp_force_cdr_pwd :1;
uint32 rg_qp_force_pcie_usb_speed_sel :1;
}HAL_RX_CTRL_35, *pHAL_RX_CTRL_35;

typedef struct {
uint32 rg_qp_force_speed_chg_all_re_en :1;
uint32 rg_qp_pcie_usb_sol_1 :1;
uint32 rg_qp_force_pcie_mode_sel :1;
uint32 rg_qp_force_pcie_mode :1;
uint32 rg_qp_force_spd_chg_all :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_force_rx_path_rdy_time :8;
uint32 rg_qp_lck2data_dly_time :10;
uint32 rg_qp_pcie_usb_system :1;
uint32 rg_qp_force_sigdet_or :1;
uint32 rg_qp_force_sigdet_and :1;
uint32 rg_qp_force_sigdet_usb :1;
uint32 rg_qp_force_usb_mode_sel :1;
uint32 rg_qp_force_usb_mode :1;
}HAL_RX_CTRL_36, *pHAL_RX_CTRL_36;

typedef struct {
uint32 rg_qp_reserve_16 :8;
uint32 rg_qp_reserve_17 :8;
uint32 rg_qp_reserve_18 :8;
uint32 rg_qp_reserve_19 :8;
}HAL_RX_CTRL_37, *pHAL_RX_CTRL_37;

typedef struct {
uint32 rg_qp_reserve_4 :8;
uint32 rg_qp_reserve_5 :8;
uint32 rg_qp_reserve_6 :8;
uint32 rg_qp_reserve_7 :8;
}HAL_RX_CTRL_38, *pHAL_RX_CTRL_38;

typedef struct {
uint32 rg_qp_reserve_8 :8;
uint32 rg_qp_reserve_9 :8;
uint32 rg_qp_reserve_10 :8;
uint32 rg_qp_reserve_11 :8;
}HAL_RX_CTRL_39, *pHAL_RX_CTRL_39;

typedef struct {
uint32 rg_qp_reserve_12 :8;
uint32 rg_qp_reserve_13 :8;
uint32 rg_qp_reserve_14 :8;
uint32 rg_qp_reserve_15 :8;
}HAL_RX_CTRL_40, *pHAL_RX_CTRL_40;

typedef struct {
uint32 ro_qp_reserve_0 :8;
uint32 ro_qp_reserve_1 :8;
uint32 ro_qp_reserve_2 :8;
uint32 ro_qp_reserve_3 :8;
}HAL_RX_CTRL_41, *pHAL_RX_CTRL_41;

typedef struct {
uint32 ro_qp_reserve_4 :8;
uint32 ro_qp_reserve_5 :8;
uint32 ro_qp_reserve_6 :8;
uint32 ro_qp_reserve_7 :8;
}HAL_RX_CTRL_42, *pHAL_RX_CTRL_42;

typedef struct {
uint32 ro_qp_reserve_8 :8;
uint32 ro_qp_reserve_9 :8;
uint32 ro_qp_reserve_10 :8;
uint32 ro_qp_reserve_11 :8;
}HAL_RX_CTRL_43, *pHAL_RX_CTRL_43;

typedef struct {
uint32 ro_qp_reserve_12 :8;
uint32 ro_qp_reserve_13 :8;
uint32 ro_qp_reserve_14 :8;
uint32 ro_qp_reserve_15 :8;
}HAL_RX_CTRL_44, *pHAL_RX_CTRL_44;

typedef struct {
uint32 rg_qp_eq_en_dly :13;
uint32 rg_qp_force_eq_dly_en_sel  :1;
uint32 rg_qp_force_eq_dly_en :1;
uint32 rg_qp_sgmii_eq_train_sel :1;
uint32 rg_qp_force_pcie_cdr_lpf_kp_gain_en :1;
uint32 rg_qp_pcie_gen1_cdr_lpf_kp_gain :3;
uint32 rg_qp_pcie_gen2_cdr_lpf_kp_gain :3;
uint32 rg_qp_force_pcie_cdr_lpf_ki_gain_en :1;
uint32 rg_qp_pcie_gen1_cdr_lpf_ki_gain :3;
uint32 rg_qp_pcie_gen2_cdr_lpf_ki_gain :3;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_45, *pHAL_RX_CTRL_45;

typedef struct {
uint32 rg_qp_force_usb_pcie_pd_pwd_sel :1;
uint32 rg_qp_force_usb_pcie_pd_pwd :1;
uint32 rg_qp_force_usb_pcie_pr_pwd_sel :1;
uint32 rg_qp_force_usb_pcie_pr_pwd :1;
uint32 rg_qp_force_usb_pcie_eye_pwd_sel :1;
uint32 rg_qp_force_usb_pcie_eye_pwd :1;
uint32 rg_qp_force_usb_pcie_afe_pwd_sel :1;
uint32 rg_qp_force_usb_pcie_afe_pwd :1;
uint32 rg_qp_force_usb_pcie_sigdet_en_sel :1;
uint32 rg_qp_force_usb_pcie_sigdet_en :1;
uint32 rg_qp_force_usb_pcie_power_st_sel :1;
uint32 rg_qp_force_usb_pcie_power_st :2;
uint32 rg_qp_fre_lock_sel :1;
uint32 rg_qp_force_power_st_change_sel :1;
uint32 rg_qp_force_power_st_change :1;
uint32 rg_qp_force_pcie_cdr_pr_kband_div_en :1;
uint32 rg_qp_pcie_gen2_cdr_pr_kband_div :3;
uint32 rg_qp_pcie_gen1_cdr_pr_kband_div :3;
uint32 rg_force_usb_sig_clr :1;
uint32 rg_qp_force_last_lfps_finish_sel :1;
uint32 rg_qp_force_last_lfps_finish :1;
uint32 rg_reback_p0_lck2ref_en :1;
uint32 rg_qp_pcie_usb_bypass_eq_p1_to_p0_en :1;
uint32 rg_qp_pcie_usb_bypass_eq_p2_to_p0_en :1;
uint32 rg_qp_pcie_usb_bypass_eq_p3_to_p0_en :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_46, *pHAL_RX_CTRL_46;

typedef struct {
uint32 rg_qp_force_pcie_cdr_lpf_ratio_en :1;
uint32 rg_qp_pcie_gen2_cdr_lpf_ratio :2;
uint32 rg_qp_pcie_gen1_cdr_lpf_ratio :2;
uint32 rg_qp_force_pcie_cdr_pr_beta_sel_en :1;
uint32 rg_qp_pcie_gen2_cdr_pr_beta_sel :4;
uint32 rg_qp_pcie_gen1_cdr_pr_beta_sel :4;
uint32 rg_qp_force_pcie_cdr_pr_buf_in_sr_en :1;
uint32 rg_qp_pcie_gen2_cdr_pr_buf_in_sr :3;
uint32 rg_qp_pcie_gen1_cdr_pr_buf_in_sr :3;
uint32 rg_qp_force_pcie_cdr_pr_dac_band_en :1;
uint32 rg_qp_pcie_gen2_cdr_pr_dac_band :5;
uint32 rg_qp_pcie_gen1_cdr_pr_dac_band :5;
}HAL_RX_CTRL_47, *pHAL_RX_CTRL_47;

typedef struct {
uint32 rg_qp_force_pcie_cdr_pr_kband_div_pcie_en :1;
uint32 rg_qp_pcie_gen2_cdr_pr_kband_div_pcie :6;
uint32 rg_qp_pcie_gen1_cdr_pr_kband_div_pcie :6;
uint32 rg_qp_force_pcie_cdr_phyck_div_en :1;
uint32 rg_qp_pcie_gen2_cdr_phyck_div :7;
uint32 rg_qp_pcie_gen1_cdr_phyck_div :7;
uint32 rg_qp_force_rosc_rstb :1;
uint32 rg_qp_force_rosc_rstb_sel :1;
uint32 rg_qp_force_pcie_crsdet_en :1;
uint32 rg_qp_force_pcie_crsdet_en_sel :1;
}HAL_RX_CTRL_48, *pHAL_RX_CTRL_48;

typedef struct {
uint32 ro_power_st_l11_l12 :1;
uint32 ro_power_st_l2 :1;
uint32 ro_ssusb_qp_powerdown :2;
uint32 ro_pcie_mode :1;
uint32 ro_usb_mode :1;
uint32 rg_qp_crsdet_rst_time :3;
uint32 rg_force_crsdet_lthout_sel :1;
uint32 rg_force_crsdet_lthout :1;
uint32 rg_force_signal_beacon_out_sel :1;
uint32 rg_force_ad_crsdet_out_sel :1;
uint32 rg_force_ad_crsdet_out :1;
uint32 rg_force_signal_crsdet_lthout_sel :1;
uint32 rg_force_signal_crsdet_out_sel :1;
uint32 rg_lfps_detect_num :4;
uint32 rg_force_last_lfps_finish_latch_clr :1;
uint32 rg_lfps_finish_time :11;
}HAL_RX_CTRL_49, *pHAL_RX_CTRL_49;

typedef struct {
uint32 rg_qp_rx_eq_en_h_dly_short :13;
uint32 rg_qp_eq_en_dly_short :13;
uint32 rg_p1_to_p0_do_eq_usb :1;
uint32 rg_p2_to_p0_do_eq_usb :1;
uint32 rg_p3_to_p0_do_eq_usb :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RX_CTRL_50, *pHAL_RX_CTRL_50;

#endif