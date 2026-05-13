#ifndef QP_ANA_HAL_REG
#define QP_ANA_HAL_REG

typedef struct {
uint32 rg_qp_rx_dac_en :1;
uint32 rg_qp_rx_dac_pwd :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rg_qp_rx_dac_mux :4;
uint32 rg_qp_rx_t2r_en :1;
uint32 rg_qp_rx_50_lower :3;
uint32 rg_qp_sigdet_vth :2;
uint32 rg_qp_sigdet_lpf :2;
uint32 rg_qp_sigdet_hf :2;
uint32 rg_qp_lfps_lpf_aux :1;
uint32 rg_qp_lfps_cmpout_sel :1;
uint32 rg_qp_lfps_slcout_sel :1;
uint32 rg_qp_lfps_lpf :2;
uint32 rg_qp_lfps_lpf_i :2;
uint32 rg_qp_lfps_lpf_i_sel :1;
uint32 rg_qp_lfps_mon_en :1;
uint32 rg_qp_rxafe_dcmon_sel :3;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RG_QP_RX_DAC_EN, *pHAL_RG_QP_RX_DAC_EN;

typedef struct {
uint32 rg_qp_rxafe_reserve :8;
uint32 rg_qp_rx_dac_meas_en :1;
uint32 rg_qp_rx_vcmhpfsel :1;
uint32 rg_qp_cdr_pd_edge_dis :1;
uint32 rg_qp_cdr_pd_10b_en :1;
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
}HAL_RG_QP_RXAFE_RESERVE, *pHAL_RG_QP_RXAFE_RESERVE;

typedef struct {
uint32 rg_qp_cdr_lpf_bot_lim :19;
uint32 rsv_19 :1;
uint32 rg_qp_cdr_lpf_ki_gain :3;
uint32 rsv_23 :1;
uint32 rg_qp_cdr_lpf_kp_gain :3;
uint32 rg_qp_cdr_lpf_lin_lim :4;
uint32 rg_qp_cdr_lpf_mjv_en :1;
}HAL_RG_QP_CDR_LPF_BOT_LIM, *pHAL_RG_QP_CDR_LPF_BOT_LIM;

typedef struct {
uint32 rg_qp_cdr_lpf_mjv_lim :4;
uint32 rg_qp_cdr_lpf_ratio :2;
uint32 rsv_6 :1;
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
}HAL_RG_QP_CDR_LPF_MJV_LIM, *pHAL_RG_QP_CDR_LPF_MJV_LIM;

typedef struct {
uint32 rg_qp_cdr_lpf_top_lim :19;
uint32 rg_qp_cdr_lpf_snapshot :1;
uint32 rg_qp_cdr_lpf_set :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rg_qp_cdr_lpf_oneshot_out_sel :2;
}HAL_RG_QP_CDR_LPF_TOP_LIM, *pHAL_RG_QP_CDR_LPF_TOP_LIM;

typedef struct {
uint32 rg_qp_cdr_lpf_setvalue :19;
uint32 rg_qp_cdr_lpf_oneshot_step :3;
uint32 rg_qp_cdr_lpf_pistep_oneshot :1;
uint32 rg_qp_cdr_lpf_pistep_sel :1;
uint32 rg_qp_cdr_lpf_ud_gating :1;
uint32 rg_qp_cdr_pr_beta_sel :4;
uint32 rg_qp_cdr_pr_buf_in_sr :3;
}HAL_RG_QP_CDR_LPF_SETVALUE, *pHAL_RG_QP_CDR_LPF_SETVALUE;

typedef struct {
uint32 rg_qp_cdr_pr_ckref_div1 :2;
uint32 rg_qp_cdr_pr_ckref_div :2;
uint32 rg_qp_cdr_pr_corsig_opt :2;
uint32 rg_qp_cdr_pr_cor_hbw_en :1;
uint32 rsv_7 :1;
uint32 rg_qp_cdr_pr_dac_band :5;
uint32 rg_qp_cdr_pr_dcmon_en :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_cdr_pr_dcmon_sel :3;
uint32 rg_qp_cdr_pr_inj_force_off :1;
uint32 rg_qp_cdr_pr_inj_force_on :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_cdr_pr_kband_div :3;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RG_QP_CDR_PR_CKREF_DIV1, *pHAL_RG_QP_CDR_PR_CKREF_DIV1;

typedef struct {
uint32 rg_qp_cdr_pr_kband_div_pcie :6;
uint32 rg_qp_cdr_pr_kband_pcie_mode :1;
uint32 rg_qp_cdr_pr_ldo_force_on :1;
uint32 rg_qp_cdr_pr_monck_en :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rg_qp_cdr_pr_monck_mux :3;
uint32 rg_qp_cdr_pr_monpi_en :1;
uint32 rg_qp_cdr_pr_monpr_en :1;
uint32 rg_qp_cdr_pr_rstb_bypass :1;
uint32 rg_qp_cdr_pr_rst_dly :2;
uint32 rg_qp_cdr_pr_tdc_ref_sel :2;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_cdr_pr_vcoadc_os :4;
uint32 rg_qp_cdr_pr_vreg_ckbuf_val :2;
uint32 rg_qp_cdr_pr_xfick_en :1;
uint32 rg_qp_cdr_force_ibandlpf_c_off :1;
}HAL_RG_QP_CDR_PR_KBAND_DIV_PCIE, *pHAL_RG_QP_CDR_PR_KBAND_DIV_PCIE;

typedef struct {
uint32 rg_qp_cdr_force_ibandlpf_r_off :1;
uint32 rg_qp_cdr_pical_inv :1;
uint32 rg_qp_cdr_pical_sel :1;
uint32 rg_qp_cdr_pieyebd4_sel :1;
uint32 rg_qp_cdr_pieye_xor_en :1;
uint32 rg_qp_cdr_pi_ck_inv :1;
uint32 rg_qp_cdr_phyck_div :7;
uint32 rg_qp_cdr_phyck_rstb :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_cdr_phyck_sel :2;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rg_qp_rx_mpx_sel :3;
uint32 rsv_23 :1;
uint32 rg_qp_cdr_refck_div2_en :1;
uint32 rg_qp_rx_d0_ll_reserved :6;
uint32 rsv_31 :1;
}HAL_RG_QP_CDR_FORCE_IBANDLPF_R_OFF, *pHAL_RG_QP_CDR_FORCE_IBANDLPF_R_OFF;

typedef struct {
uint32 rg_qp_rx_d0_hs_reserved :14;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_rx_d1_hs_reserved :15;
uint32 rsv_31 :1;
}HAL_RG_QP_RX_D0_HS_RESERVED, *pHAL_RG_QP_RX_D0_HS_RESERVED;

typedef struct {
uint32 rg_qp_tx_mode_16b_en :1;
uint32 rg_qp_txlbrx_en :1;
uint32 rg_qp_tx_vlmon_en :1;
uint32 rg_qp_tx_vlmon_sel :3;
uint32 rg_qp_tx_ckmon_en :1;
uint32 rsv_7 :1;
uint32 rsv_8 :1;
uint32 rg_qp_tx_ckmon_sel :4;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_tx_reserve :16;
}HAL_RG_QP_TX_MODE_16B_EN, *pHAL_RG_QP_TX_MODE_16B_EN;

typedef struct {
uint32 rg_qp_rxlbtx_en :1;
uint32 rg_qp_tx250mck_invb :1;
uint32 rg_qp_tx_chgplr_cn1 :1;
uint32 rg_qp_tx_chgplr_c1 :1;
uint32 rg_qp_tx_chgplr_c2 :1;
uint32 rg_qp_tx_sr_reduction :3;
uint32 rg_qp_tx_int_en :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_tx_termcal_vref_h :3;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rg_qp_tx_termcal_vref_l :3;
uint32 rg_qp_tx_termcal_selpn :1;
uint32 rg_qp_tx_rxdet_method :1;
uint32 rg_qp_tx_autozero_en :1;
uint32 rg_qp_tx_dmedgegen_en :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RG_QP_RXLBTX_EN, *pHAL_RG_QP_RXLBTX_EN;

typedef struct {
uint32 rg_qp_bgr_en :1;
uint32 rg_qp_chpen :1;
uint32 rg_qp_bg_div :2;
uint32 rg_qp_mpx_en :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rsv_8 :1;
uint32 rg_qp_mpx_sel :5;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rsv_16 :1;
uint32 rg_qp_vrt_vref_sel :4;
uint32 rg_qp_bias_v2v_cal :6;
uint32 rg_qp_bg_monen :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_RG_QP_BGR_EN, *pHAL_RG_QP_BGR_EN;

typedef struct {
uint32 rg_pcie_clkdrv_impsel :5;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rsv_8 :1;
uint32 rg_pcie_clkdrv_rp :5;
uint32 rg_pcie_clkdrv_hz :1;
uint32 rsv_15 :1;
uint32 rg_pcie_clkdrv_offset :3;
uint32 rg_pcie_clkdrv_slew :2;
uint32 rg_pcie_clkdrv_duty :2;
uint32 rg_pcie_clkdrv_forcein :2;
uint32 rg_pcie_clkdrv_amp :3;
uint32 rsv_28 :1;
uint32 rg_pcie_clkdet_vth :2;
uint32 rg_qp_tdc_autoen :1;
}HAL_RG_PCIE_CLKDRV_IMPSEL, *pHAL_RG_PCIE_CLKDRV_IMPSEL;

typedef struct {
uint32 rg_qp_tdc_ft_ck_en :1;
uint32 rg_qp_tdc_mon_ck_en :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rsv_4 :1;
uint32 rg_qp_pll_monck_sel :3;
uint32 rg_vusb10_on :1;
uint32 rg_qp_xtal_top_reserve0 :8;
uint32 rg_qp_pll_rst_dly :2;
uint32 rg_qp_pll_debug_sel :1;
uint32 rsv_20 :1;
uint32 rg_qp_pll_iband :11;
}HAL_RG_QP_TDC_FT_CK_EN, *pHAL_RG_QP_TDC_FT_CK_EN;

typedef struct {
uint32 rg_qp_pll_ipll_dig_pwr_sel :1;
uint32 rg_qp_pll_kband_kfc :2;
uint32 rg_qp_pll_kband_meas_en :1;
uint32 rg_qp_pll_load_en :1;
uint32 rg_qp_pll_ldolpf_vsel :2;
uint32 rg_qp_pll_ldopfd_vsel :2;
uint32 rg_qp_pll_ldovco_vsel :2;
uint32 rg_qp_pll_monck_div4_en :1;
uint32 rg_qp_pll_monck_en :1;
uint32 rg_qp_pll_monref_en :1;
uint32 rg_qp_pll_monvc_en :1;
uint32 rsv_15 :1;
uint32 rg_qp_pll_mon_ldo_sel :3;
uint32 rg_qp_pll_oscal_enb :1;
uint32 rsv_20 :1;
uint32 rg_qp_pll_postdiv :2;
uint32 rsv_23 :1;
uint32 rsv_24 :1;
uint32 rg_qp_pll_prediv :2;
uint32 rg_qp_pll_rlp_sel :1;
uint32 rg_qp_pll_tcl_en :1;
uint32 rg_qp_pll_sdm_di_ls :2;
uint32 rsv_31 :1;
}HAL_RG_QP_PLL_IPLL_DIG_PWR_SEL, *pHAL_RG_QP_PLL_IPLL_DIG_PWR_SEL;

typedef struct {
uint32 rg_qp_pll_sdm_ord :2;
uint32 rg_qp_pll_sdm_out :1;
uint32 rg_qp_pll_ssc_phase_ini :1;
uint32 rg_qp_pll_ssc_tri_en :1;
uint32 rg_qp_pll_post_monck_en :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rsv_8 :1;
uint32 rg_qp_pll_post_monck_sel :2;
uint32 rg_qp_pll_freq_meas_en :1;
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
}HAL_RG_QP_PLL_SDM_ORD, *pHAL_RG_QP_PLL_SDM_ORD;

#endif