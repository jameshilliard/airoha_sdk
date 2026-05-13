#ifndef QP_PMA_TOP_INTF_HAL_REG
#define QP_PMA_TOP_INTF_HAL_REG

typedef struct {
uint32 rg_ad_qp_sigdet_out_force :1;
uint32 rg_ad_qp_sigdet_out_sel :1;
uint32 rg_ad_qp_sigdet_cal_out_force :1;
uint32 rg_ad_qp_sigdet_cal_out_sel :1;
uint32 rg_ad_qp_rx_lfps_force :1;
uint32 rg_ad_qp_rx_lfps_sel :1;
uint32 rg_ad_qp_crsdet_out_force :1;
uint32 rg_ad_qp_crsdet_out_sel :1;
uint32 rg_ad_qp_crsdet_lthout_force :1;
uint32 rg_ad_qp_crsdet_lthout_sel :1;
uint32 rg_ad_qp_cdr_pi_pderr_force :1;
uint32 rg_ad_qp_cdr_pi_pderr_sel :1;
uint32 rg_ad_qp_cdr_lpf_oneshot_trig_force :1;
uint32 rg_ad_qp_cdr_lpf_oneshot_trig_sel :1;
uint32 rg_ad_qp_cdr_pr_fll_dig_rstb_force :1;
uint32 rg_ad_qp_cdr_pr_fll_dig_rstb_sel :1;
uint32 rg_ad_qp_cdr_pr_vco_overspeed_force :1;
uint32 rg_ad_qp_cdr_pr_vco_overspeed_sel :1;
uint32 rg_ad_qp_termcal_dir_force :1;
uint32 rg_ad_qp_termcal_dir_sel :1;
uint32 rg_ad_qp_tx_cmdet_force :1;
uint32 rg_ad_qp_tx_cmdet_sel :1;
uint32 rg_ad_pcie_ckdet_out_force :1;
uint32 rg_ad_pcie_ckdet_out_sel :1;
uint32 rg_ad_qp_pll_vcocal_cplt_force :1;
uint32 rg_ad_qp_pll_vcocal_cplt_sel :1;
uint32 rg_ad_qp_pll_ssc_dir_force :1;
uint32 rg_ad_qp_pll_ssc_dir_sel :1;
uint32 rg_ad_qp_pll_ssc_en_force :1;
uint32 rg_ad_qp_pll_ssc_en_sel :1;
uint32 rg_ad_qp_tdc_leadlag_force :1;
uint32 rg_ad_qp_tdc_leadlag_sel :1;
}HAL_INTF_CTRL_0, *pHAL_INTF_CTRL_0;

typedef struct {
uint32 rg_ad_qp_pll_vcocal_state_force :8;
uint32 rg_ad_qp_pll_vcocal_state_sel :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_ad_qp_tdc_c_force :8;
uint32 rg_ad_qp_tdc_c_sel :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_INTF_CTRL_1, *pHAL_INTF_CTRL_1;

typedef struct {
uint32 rg_ad_qp_tdc_d_force :8;
uint32 rg_ad_qp_tdc_d_sel :1;
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
}HAL_INTF_CTRL_2, *pHAL_INTF_CTRL_2;

typedef struct {
uint32 rg_ad_qp_cdr_lpf_snapshotvalue_force :19;
uint32 rg_ad_qp_cdr_lpf_snapshotvalue_sel :1;
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
}HAL_INTF_CTRL_3, *pHAL_INTF_CTRL_3;

typedef struct {
uint32 rg_ad_qp_cdr_pr_adc_force :20;
uint32 rg_ad_qp_cdr_pr_adc_sel :1;
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
}HAL_INTF_CTRL_4, *pHAL_INTF_CTRL_4;

typedef struct {
uint32 rg_da_qp_lfps_pwd_force :1;
uint32 rg_da_qp_lfps_pwd_sel :1;
uint32 rg_da_qp_rx_afe_pwd_force :1;
uint32 rg_da_qp_rx_afe_pwd_sel :1;
uint32 rg_da_qp_rx_hz_force :1;
uint32 rg_da_qp_rx_hz_sel :1;
uint32 rg_da_qp_rx_p3_entry_force :1;
uint32 rg_da_qp_rx_p3_entry_sel :1;
uint32 rg_da_qp_sigdet_en_force :1;
uint32 rg_da_qp_sigdet_en_sel :1;
uint32 rg_da_qp_sigdet_cal_en_force :1;
uint32 rg_da_qp_sigdet_cal_en_sel :1;
uint32 rg_da_qp_crsdet_en_force :1;
uint32 rg_da_qp_crsdet_en_sel :1;
uint32 rg_da_qp_rx_saosc_en_force :1;
uint32 rg_da_qp_rx_saosc_en_sel :1;
uint32 rg_da_qp_crsdet_rstb_force :1;
uint32 rg_da_qp_crsdet_rstb_sel :1;
uint32 rg_da_qp_rx_scan_force :1;
uint32 rg_da_qp_rx_scan_sel :1;
uint32 rg_da_qp_cdr_lpf_rstb_force :1;
uint32 rg_da_qp_cdr_lpf_rstb_sel :1;
uint32 rg_da_qp_cdr_lck2data_force :1;
uint32 rg_da_qp_cdr_lck2data_sel :1;
uint32 rg_da_qp_cdr_pr_pwdb_force :1;
uint32 rg_da_qp_cdr_pr_pwdb_sel :1;
uint32 rg_da_qp_cdr_pr_kband_rstb_force :1;
uint32 rg_da_qp_cdr_pr_kband_rstb_sel :1;
uint32 rg_da_qp_cdr_pr_lpf_c_en_force :1;
uint32 rg_da_qp_cdr_pr_lpf_c_en_sel :1;
uint32 rg_da_qp_cdr_pr_lpf_r_en_force :1;
uint32 rg_da_qp_cdr_pr_lpf_r_en_sel :1;
}HAL_INTF_CTRL_5, *pHAL_INTF_CTRL_5;

typedef struct {
uint32 rg_da_qp_cdr_pr_pieye_pwdb_force :1;
uint32 rg_da_qp_cdr_pr_pieye_pwdb_sel :1;
uint32 rg_da_qp_cdr_pd_pwdb_force :1;
uint32 rg_da_qp_cdr_pd_pwdb_sel :1;
uint32 rg_da_qp_tx_term_vref_sel_force :1;
uint32 rg_da_qp_tx_term_vref_sel_sel :1;
uint32 rg_da_qp_tx_drv_en_force :1;
uint32 rg_da_qp_tx_drv_en_sel :1;
uint32 rg_da_qp_tx_impcalib_en_force :1;
uint32 rg_da_qp_tx_impcalib_en_sel :1;
uint32 rg_da_qp_rxdet_en_force :1;
uint32 rg_da_qp_rxdet_en_sel :1;
uint32 rg_da_qp_tx_data_en_force :1;
uint32 rg_da_qp_tx_data_en_sel :1;
uint32 rg_da_qp_tx_ser_en_force :1;
uint32 rg_da_qp_tx_ser_en_sel :1;
uint32 rg_da_qp_tx_eidle_lp_en_force :1;
uint32 rg_da_qp_tx_eidle_lp_en_sel :1;
uint32 rg_da_qp_tx_lfps_en_force :1;
uint32 rg_da_qp_tx_lfps_en_sel :1;
uint32 rg_da_qp_tx_lfps_force :1;
uint32 rg_da_qp_tx_lfps_sel :1;
uint32 rg_da_qp_bias_en_force :1;
uint32 rg_da_qp_bias_en_sel :1;
uint32 rg_da_qp_bg_lpf_en_force :1;
uint32 rg_da_qp_bg_lpf_en_sel :1;
uint32 rg_da_pcie_clkrx_en_force :1;
uint32 rg_da_pcie_clkrx_en_sel :1;
uint32 rg_da_pcie_clktx_en_force :1;
uint32 rg_da_pcie_clktx_en_sel :1;
uint32 rg_da_qp_xtal_rx_en_force :1;
uint32 rg_da_qp_xtal_rx_en_sel :1;
}HAL_INTF_CTRL_6, *pHAL_INTF_CTRL_6;

typedef struct {
uint32 rg_da_pcie_ckdet_en_force :1;
uint32 rg_da_pcie_ckdet_en_sel :1;
uint32 rg_da_qp_pll_sdm_di_en_force :1;
uint32 rg_da_qp_pll_sdm_di_en_sel :1;
uint32 rg_da_qp_pll_en_force :1;
uint32 rg_da_qp_pll_en_sel :1;
uint32 rg_da_qp_pll_icoiq_en_force :1;
uint32 rg_da_qp_pll_icoiq_en_sel :1;
uint32 rg_da_qp_pll_pck_sel_force :1;
uint32 rg_da_qp_pll_pck_sel_sel :1;
uint32 rg_da_qp_pll_pfd_offset_en_force :1;
uint32 rg_da_qp_pll_pfd_offset_en_sel :1;
uint32 rg_da_qp_pll_phy_ck_en_force :1;
uint32 rg_da_qp_pll_phy_ck_en_sel :1;
uint32 rg_da_qp_pll_postdiv_en_force :1;
uint32 rg_da_qp_pll_postdiv_en_sel :1;
uint32 rg_da_qp_pll_rico_sel_force :1;
uint32 rg_da_qp_pll_rico_sel_sel :1;
uint32 rg_da_qp_pll_sdm_chg_force :1;
uint32 rg_da_qp_pll_sdm_chg_sel :1;
uint32 rg_da_qp_pll_sdm_ifm_force :1;
uint32 rg_da_qp_pll_sdm_ifm_sel :1;
uint32 rg_da_qp_pll_ssc_en_force :1;
uint32 rg_da_qp_pll_ssc_en_sel :1;
uint32 rg_da_qp_pll_icolp_en_force :1;
uint32 rg_da_qp_pll_icolp_en_sel :1;
uint32 rg_da_qp_pll_tdc_txck_sel_force :1;
uint32 rg_da_qp_pll_tdc_txck_sel_sel :1;
uint32 rg_da_qp_tdc_cal_bw_force :1;
uint32 rg_da_qp_tdc_cal_bw_sel :1;
uint32 rg_da_qp_tdc_cal_offset_force :1;
uint32 rg_da_qp_tdc_cal_offset_sel :1;
}HAL_INTF_CTRL_7, *pHAL_INTF_CTRL_7;

typedef struct {
uint32 rg_da_qp_tdc_en_force :1;
uint32 rg_da_qp_tdc_en_sel :1;
uint32 rg_da_qp_lfps_deglitch_force :2;
uint32 rg_da_qp_lfps_deglitch_sel :1;
uint32 rg_da_qp_tx_term_sel_force :2;
uint32 rg_da_qp_tx_term_sel_sel :1;
uint32 rg_da_qp_tx_dem_force :2;
uint32 rg_da_qp_tx_dem_sel :1;
uint32 rg_da_qp_xtal_ext_en_force :2;
uint32 rg_da_qp_xtal_ext_en_sel :1;
uint32 rg_da_qp_pll_bc_force :2;
uint32 rg_da_qp_pll_bc_sel :1;
uint32 rg_da_qp_pll_bpb_force :2;
uint32 rg_da_qp_pll_bpb_sel :1;
uint32 rg_da_qp_pll_fbksel_force :2;
uint32 rg_da_qp_pll_fbksel_sel :1;
uint32 rg_da_qp_pll_kband_prediv_force :2;
uint32 rg_da_qp_pll_kband_prediv_sel :1;
uint32 rg_da_qp_pll_pfd_offset_force :2;
uint32 rg_da_qp_pll_pfd_offset_sel :1;
uint32 rg_da_qp_pll_sdm_hren_force :2;
uint32 rg_da_qp_pll_sdm_hren_sel :1;
}HAL_INTF_CTRL_8, *pHAL_INTF_CTRL_8;

typedef struct {
uint32 rg_da_qp_pll_ssc_dir_dly_force :2;
uint32 rg_da_qp_pll_ssc_dir_dly_sel :1;
uint32 rsv_3 :1;
uint32 rg_da_qp_tx_fir_cn1_force :3;
uint32 rg_da_qp_tx_fir_cn1_sel :1;
uint32 rg_da_qp_pll_bpa_force :3;
uint32 rg_da_qp_pll_bpa_sel :1;
uint32 rg_da_qp_pll_br_force :3;
uint32 rg_da_qp_pll_br_sel :1;
uint32 rg_da_qp_rx_dcleq_force :4;
uint32 rg_da_qp_rx_dcleq_sel :1;
uint32 rg_da_qp_pll_ir_force :4;
uint32 rg_da_qp_pll_ir_sel :1;
uint32 rg_da_qp_rx_imp_sel_force :5;
uint32 rg_da_qp_rx_imp_sel_sel :1;
}HAL_INTF_CTRL_9, *pHAL_INTF_CTRL_9;

typedef struct {
uint32 rg_da_qp_sigdet_cal_offset_force :5;
uint32 rg_da_qp_sigdet_cal_offset_sel :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_da_qp_cdr_pr_fll_cor_force :5;
uint32 rg_da_qp_cdr_pr_fll_cor_sel :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_da_qp_tx_fir_c1_force :5;
uint32 rg_da_qp_tx_fir_c1_sel :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_da_qp_tx_fir_c2_force :5;
uint32 rg_da_qp_tx_fir_c2_sel :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_INTF_CTRL_10, *pHAL_INTF_CTRL_10;

typedef struct {
uint32 rg_da_qp_tx_fir_c0b_force :6;
uint32 rg_da_qp_tx_fir_c0b_sel :1;
uint32 rsv_7 :1;
uint32 rg_da_qp_cdr_pr_pieye_force :7;
uint32 rg_da_qp_cdr_pr_pieye_sel :1;
uint32 rg_da_qp_cdr_pr_idac_force :11;
uint32 rg_da_qp_cdr_pr_idac_sel :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_INTF_CTRL_11, *pHAL_INTF_CTRL_11;

typedef struct {
uint32 rg_da_qp_pll_ssc_delta_force :16;
uint32 rg_da_qp_pll_ssc_delta_sel :1;
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
}HAL_INTF_CTRL_12, *pHAL_INTF_CTRL_12;

typedef struct {
uint32 rg_da_qp_pll_ssc_period_force :16;
uint32 rg_da_qp_pll_ssc_period_sel :1;
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
}HAL_INTF_CTRL_13, *pHAL_INTF_CTRL_13;

typedef struct {
uint32 rg_da_qp_pll_sdm_pcw_force_31_0 :32;
}HAL_INTF_CTRL_14, *pHAL_INTF_CTRL_14;

typedef struct {
uint32 rg_da_qp_tx_data_force :20;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_da_qp_tx_data_sel :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rg_da_qp_pll_sdm_pcw_force_33_32 :2;
uint32 rsv_30 :1;
uint32 rg_da_qp_pll_sdm_pcw_sel :1;
}HAL_INTF_CTRL_15, *pHAL_INTF_CTRL_15;

typedef struct {
uint32 ro_da_qp_lfps_pwd :1;
uint32 ro_da_qp_rx_afe_pwd :1;
uint32 ro_da_qp_rx_hz :1;
uint32 ro_da_qp_rx_p3_entry :1;
uint32 ro_da_qp_sigdet_en :1;
uint32 ro_da_qp_sigdet_cal_en :1;
uint32 ro_da_qp_crsdet_en :1;
uint32 ro_da_qp_rx_saosc_en :1;
uint32 ro_da_qp_crsdet_rstb :1;
uint32 ro_da_qp_rx_scan :1;
uint32 ro_da_qp_cdr_lpf_rstb :1;
uint32 ro_da_qp_cdr_lck2data :1;
uint32 ro_da_qp_cdr_pr_pwdb :1;
uint32 ro_da_qp_cdr_pr_kband_rstb :1;
uint32 ro_da_qp_cdr_pr_lpf_c_en :1;
uint32 ro_da_qp_cdr_pr_lpf_r_en :1;
uint32 ro_da_qp_cdr_pr_pieye_pwdb :1;
uint32 ro_da_qp_cdr_pd_pwdb :1;
uint32 ro_da_qp_tx_term_vref_sel :1;
uint32 ro_da_qp_tx_drv_en :1;
uint32 ro_da_qp_tx_impcalib_en :1;
uint32 ro_da_qp_rxdet_en :1;
uint32 ro_da_qp_tx_data_en :1;
uint32 ro_da_qp_tx_ser_en :1;
uint32 ro_da_qp_tx_eidle_lp_en :1;
uint32 ro_da_qp_tx_lfps_en :1;
uint32 ro_da_qp_tx_lfps :1;
uint32 ro_da_qp_bias_en :1;
uint32 ro_da_qp_bg_lpf_en :1;
uint32 ro_da_pcie_clkrx_en :1;
uint32 ro_da_pcie_clktx_en :1;
uint32 ro_da_qp_xtal_rx_en :1;
}HAL_INTF_STS_0, *pHAL_INTF_STS_0;

typedef struct {
uint32 ro_da_pcie_ckdet_en :1;
uint32 ro_da_qp_pll_sdm_di_en :1;
uint32 ro_da_qp_pll_en :1;
uint32 ro_da_qp_pll_icoiq_en :1;
uint32 ro_da_qp_pll_pck_sel :1;
uint32 ro_da_qp_pll_pfd_offset_en :1;
uint32 ro_da_qp_pll_phy_ck_en :1;
uint32 ro_da_qp_pll_postdiv_en :1;
uint32 ro_da_qp_pll_rico_sel :1;
uint32 ro_da_qp_pll_sdm_chg :1;
uint32 ro_da_qp_pll_sdm_ifm :1;
uint32 ro_da_qp_pll_ssc_en :1;
uint32 ro_da_qp_pll_icolp_en :1;
uint32 ro_da_qp_pll_tdc_txck_sel :1;
uint32 ro_da_qp_tdc_cal_bw :1;
uint32 ro_da_qp_tdc_cal_offset :1;
uint32 ro_da_qp_tdc_en :1;
uint32 rsv_17 :1;
uint32 ro_da_qp_lfps_deglitch :2;
uint32 ro_da_qp_tx_term_sel :2;
uint32 ro_da_qp_tx_dem :2;
uint32 ro_da_qp_xtal_ext_en :2;
uint32 ro_da_qp_pll_bc :2;
uint32 ro_da_qp_pll_bpb :2;
uint32 ro_da_qp_pll_fbksel :2;
}HAL_INTF_STS_1, *pHAL_INTF_STS_1;

typedef struct {
uint32 ro_da_qp_pll_kband_prediv :2;
uint32 ro_da_qp_pll_pfd_offset :2;
uint32 ro_da_qp_pll_sdm_hren :2;
uint32 ro_da_qp_pll_ssc_dir_dly :2;
uint32 ro_da_qp_tx_fir_cn1 :3;
uint32 rsv_11 :1;
uint32 ro_da_qp_pll_bpa :3;
uint32 rsv_15 :1;
uint32 ro_da_qp_pll_br :3;
uint32 rsv_19 :1;
uint32 ro_da_qp_rx_dcleq :4;
uint32 ro_da_qp_pll_ir :4;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_INTF_STS_2, *pHAL_INTF_STS_2;

typedef struct {
uint32 ro_da_qp_rx_imp_sel :5;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 ro_da_qp_sigdet_cal_offset :5;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 ro_da_qp_cdr_pr_fll_cor :5;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 ro_da_qp_tx_fir_c1 :5;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_INTF_STS_3, *pHAL_INTF_STS_3;

typedef struct {
uint32 ro_da_qp_tx_fir_c2 :5;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 ro_da_qp_tx_fir_c0b :6;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 ro_da_qp_cdr_pr_pieye :7;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_INTF_STS_4, *pHAL_INTF_STS_4;

typedef struct {
uint32 ro_da_qp_cdr_pr_idac :11;
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
}HAL_INTF_STS_5, *pHAL_INTF_STS_5;

typedef struct {
uint32 ro_da_qp_pll_ssc_delta :16;
uint32 ro_da_qp_pll_ssc_period :16;
}HAL_INTF_STS_6, *pHAL_INTF_STS_6;

typedef struct {
uint32 ro_da_qp_tx_data :20;
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
}HAL_INTF_STS_7, *pHAL_INTF_STS_7;

typedef struct {
uint32 ro_da_qp_pll_sdm_pcw_31_0 :32;
}HAL_INTF_STS_8, *pHAL_INTF_STS_8;

typedef struct {
uint32 ro_ad_qp_sigdet_out_intf :1;
uint32 ro_ad_qp_sigdet_cal_out_intf :1;
uint32 ro_ad_qp_rx_lfps_intf :1;
uint32 ro_ad_qp_crsdet_out_intf :1;
uint32 ro_ad_qp_crsdet_lthout_intf :1;
uint32 ro_ad_qp_cdr_pi_pderr_intf :1;
uint32 ro_ad_qp_cdr_lpf_oneshot_trig_intf :1;
uint32 ro_ad_qp_cdr_pr_fll_dig_rstb_intf :1;
uint32 ro_ad_qp_cdr_pr_vco_overspeed_intf :1;
uint32 ro_ad_qp_termcal_dir_intf :1;
uint32 ro_ad_qp_tx_cmdet_intf :1;
uint32 ro_ad_pcie_ckdet_out_intf :1;
uint32 ro_ad_qp_pll_ssc_dir_intf :1;
uint32 ro_ad_qp_pll_ssc_en_intf :1;
uint32 ro_ad_qp_tdc_leadlag_intf :1;
uint32 rsv_15 :1;
uint32 ro_ad_qp_pll_vcocal_state_intf :8;
uint32 ro_ad_qp_tdc_c_intf :8;
}HAL_INTF_STS_9, *pHAL_INTF_STS_9;

typedef struct {
uint32 ro_ad_qp_tdc_d_intf :8;
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
}HAL_INTF_STS_10, *pHAL_INTF_STS_10;

typedef struct {
uint32 ro_ad_qp_cdr_lpf_snapshotvalue_intf :19;
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
}HAL_INTF_STS_11, *pHAL_INTF_STS_11;

typedef struct {
uint32 ro_ad_qp_cdr_pr_adc_intf :20;
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
}HAL_INTF_STS_12, *pHAL_INTF_STS_12;

#endif