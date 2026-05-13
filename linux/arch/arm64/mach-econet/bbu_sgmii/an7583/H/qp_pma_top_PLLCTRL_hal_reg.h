#ifndef QP_PMA_TOP_PLLCTRL_HAL_REG
#define QP_PMA_TOP_PLLCTRL_HAL_REG

typedef struct {
uint32 rg_phya_auto_init :1;
uint32 rg_phya_pwd_mux :1;
uint32 rg_phya_pwd :1;
uint32 rsv_3 :1;
uint32 rg_tx_disable_mux :1;
uint32 rg_tx_disable :1;
uint32 rg_rx_pwd_mux :1;
uint32 rg_rx_pwd :1;
uint32 rg_force_da_pll_en :1;
uint32 rg_da_pll_en :1;
uint32 rg_da_pll_en_mux :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_da_pll_en_dly_cnt :8;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_PLL_CTRL_0, *pHAL_PLL_CTRL_0;

typedef struct {
uint32 rg_lpf_en_to_ssc_dly_cnt :16;
uint32 rg_bias_pwd_to_bg_lpf_en_dly :5;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_syspll_pwd_to_syspll_ready_dly :4;
uint32 rg_pll_autok_vco_to_pll_bias_lpf_en_dly :2;
uint32 rg_qp_pll_ssc_en :1;
uint32 rsv_31 :1;
}HAL_PLL_CTRL_1, *pHAL_PLL_CTRL_1;

typedef struct {
uint32 rg_da_qp_pll_bc_intf :2;
uint32 rg_da_qp_pll_bpa_intf :3;
uint32 rsv_5 :1;
uint32 rg_da_qp_pll_bpb_intf :2;
uint32 rg_da_qp_pll_br_intf :3;
uint32 rsv_11 :1;
uint32 rg_da_qp_pll_fbksel_intf :2;
uint32 rg_da_qp_pll_icoiq_en_intf :1;
uint32 rsv_15 :1;
uint32 rg_da_qp_pll_ir_intf :4;
uint32 rg_da_qp_pll_kband_prediv_intf :2;
uint32 rg_da_qp_pll_pck_sel_intf :1;
uint32 rsv_23 :1;
uint32 rg_da_qp_pll_pfd_offset_intf :2;
uint32 rg_da_qp_pll_pfd_offset_en_intf :1;
uint32 rg_da_qp_pll_phy_ck_en_intf :1;
uint32 rg_da_qp_pll_postdiv_en_intf :1;
uint32 rg_da_qp_pll_rico_sel_intf :1;
uint32 rg_da_qp_pll_sdm_ifm_intf :1;
uint32 rsv_31 :1;
}HAL_PLL_CTRL_2, *pHAL_PLL_CTRL_2;

typedef struct {
uint32 rg_da_qp_pll_ssc_delta_intf :16;
uint32 rg_da_qp_pll_ssc_period_intf :16;
}HAL_PLL_CTRL_3, *pHAL_PLL_CTRL_3;

typedef struct {
uint32 rg_da_qp_pll_ssc_dir_dly_intf :2;
uint32 rg_da_qp_pll_icolp_en_intf :1;
uint32 rg_da_qp_pll_sdm_hren_intf :2;
uint32 rsv_5 :1;
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
}HAL_PLL_CTRL_4, *pHAL_PLL_CTRL_4;

typedef struct {
uint32 rg_da_qp_xtal_ext_en_intf :2;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rg_da_pcie_clkrx_en_intf :1;
uint32 rg_da_pcie_clktx_en_intf :1;
uint32 rg_da_qp_xtal_rx_en_intf :1;
uint32 rg_da_pcie_ckdet_en_intf :1;
uint32 rg_da_qp_pll_sdm_di_en_intf  :1;
uint32 rg_da_qp_pll_tdc_txck_sel_intf :1;
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
}HAL_PLL_CK_CTRL_0, *pHAL_PLL_CK_CTRL_0;

typedef struct {
uint32 rg_pll_stabel_cnt :8;
uint32 rg_pll_cplt_stabel_cnt :8;
uint32 rg_pll_cplt_force_on :1;
uint32 rg_pll_cplt_force_off :1;
uint32 rg_pll_force_stable :1;
uint32 rg_pll_force_unstable :1;
uint32 rg_pll_stable_source_sel :1;
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
}HAL_PLL_CK_CTRL_1, *pHAL_PLL_CK_CTRL_1;

typedef struct {
uint32 rg_pcie_mode_pll_auto_en :1;
uint32 rg_pcie_mode_pll_auto_on_en :1;
uint32 rg_pcie_mode_pll_auto_off_en :1;
uint32 rsv_3 :1;
uint32 rsv_4 :1;
uint32 rsv_5 :1;
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
}HAL_PLL_CK_CTRL_2, *pHAL_PLL_CK_CTRL_2;

#endif