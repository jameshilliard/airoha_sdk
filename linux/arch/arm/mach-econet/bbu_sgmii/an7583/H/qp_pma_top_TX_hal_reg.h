#ifndef QP_PMA_TOP_TX_HAL_REG
#define QP_PMA_TOP_TX_HAL_REG

typedef struct {
uint32 rg_fval_tx_eidle_lp_off :1;
uint32 rg_force_rx_det_ctrl :1;
uint32 rg_fval_rx_det_en :1;
uint32 rg_tx_rxdet_en :1;
uint32 rg_rxdet_en_window :6;
uint32 rg_force_qp_tx_reserve :1;
uint32 rg_rxdet_mask_clr :1;
uint32 rg_rxdet_rd_wait_timer :4;
uint32 rg_impcalib_en :1;
uint32 rg_force_tx_calib_en :1;
uint32 rg_termcal_vsel_timer :6;
uint32 rg_tx_termcal_count :3;
uint32 rg_fval_tx_impcalib_en :1;
uint32 rg_fval_tx_term_sel :2;
uint32 rg_fval_tx_term_vref_sel :1;
uint32 rg_ssusb_tx_eidle_sel :1;
}HAL_QP_TX_DA_CTRL_0, *pHAL_QP_TX_DA_CTRL_0;

typedef struct {
uint32 rg_force_tx_lfps_ctrl :1;
uint32 rg_fval_tx_lfps_en :1;
uint32 rg_fval_tx_lfps :1;
uint32 rg_tx_ser_en_ps_mode :1;
uint32 rg_tfifo_rst :1;
uint32 rg_force_tx_bit_reverse :1;
uint32 rg_tfifo_bypass :1;
uint32 rg_force_tx_bit_inverse :1;
uint32 rg_force_tx_data_ctrl :1;
uint32 rg_txff_redun_en :1;
uint32 rg_fval_tx_ser_en :1;
uint32 rg_fval_tx_data_en :1;
uint32 rg_fval_tx_data :20;
}HAL_QP_TX_DA_CTRL_1, *pHAL_QP_TX_DA_CTRL_1;

typedef struct {
uint32 rg_force_tx_dem :1;
uint32 rg_tx_fir_cn1 :3;
uint32 rg_tx_fir_c0b :6;
uint32 rg_tx_fir_c1 :5;
uint32 rsv_15 :1;
uint32 rg_tx_fir_c2 :5;
uint32 rg_da_qp_tx_dem :2;
uint32 rg_da_qp_tx_drv_en :1;
uint32 rg_qp_tx_dem_sel :2;
uint32 rsv_26 :1;
uint32 rg_force_tx_dem_sel :1;
uint32 rg_qp_tx_dem_mode :4;
}HAL_QP_TX_DA_CTRL_2, *pHAL_QP_TX_DA_CTRL_2;

typedef struct {
uint32 rg_tx_data_test_mode :1;
uint32 rg_test_tx_lfps_en :1;
uint32 rg_test_tx_data_en :1;
uint32 rg_test_tx_cp8 :1;
uint32 rg_test_tx_lfps_type :3;
uint32 rsv_7 :1;
uint32 rg_test_tx_data_count :9;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qphy_redun_sel :2;
uint32 rg_force_tphy_mode :1;
uint32 rsv_27 :1;
uint32 rg_tx_data_rate_sel :3;
uint32 rg_ssusb_tx_ser_en_sel :1;
}HAL_QP_TX_DA_CTRL_3, *pHAL_QP_TX_DA_CTRL_3;

typedef struct {
uint32 rg_test_tx_patt_sel :3;
uint32 rg_test_tx_add_id_en :1;
uint32 rg_bist_add_error_en :1;
uint32 rg_test_rx_bist_en :1;
uint32 rg_lock_rx20b_inv :1;
uint32 rsv_7 :1;
uint32 rg_bist_error_patt :20;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_QP_TX_DA_CTRL_4, *pHAL_QP_TX_DA_CTRL_4;

typedef struct {
uint32 rg_test_tx_patt0 :20;
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
}HAL_QP_TX_DA_CTRL_5, *pHAL_QP_TX_DA_CTRL_5;

typedef struct {
uint32 rg_test_tx_patt1 :20;
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
}HAL_QP_TX_DA_CTRL_6, *pHAL_QP_TX_DA_CTRL_6;

typedef struct {
uint32 rg_test_tx_patt2 :20;
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
}HAL_QP_TX_DA_CTRL_7, *pHAL_QP_TX_DA_CTRL_7;

typedef struct {
uint32 rg_test_tx_patt3 :20;
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
}HAL_QP_TX_DA_CTRL_8, *pHAL_QP_TX_DA_CTRL_8;

typedef struct {
uint32 rg_test_tseq_mode :1;
uint32 rg_r2tlb_mode :1;
uint32 rg_t2rlb_int_en :1;
uint32 rg_t2rlb_fiforst :1;
uint32 rg_r2tlb_bypass :1;
uint32 rg_r2tlb_fiforst :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_r2t_data_en_dly :4;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_test_tseq_cnt :16;
}HAL_QP_TX_DA_CTRL_9, *pHAL_QP_TX_DA_CTRL_9;

typedef struct {
uint32 rg_bistctl_pat_sel :3;
uint32 rg_bistctl_pat_tx_en :1;
uint32 rg_bistctl_pat_rx_check_en :1;
uint32 rg_bistctl_bit_error_rst_sel :1;
uint32 rg_bistctl_io_data_inv :2;
uint32 rg_bistctl_prbs_check_cnt :2;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_bistctl_prbs_fail_threshold :16;
}HAL_QP_PMA_BIST_CTRL_0, *pHAL_QP_PMA_BIST_CTRL_0;

typedef struct {
uint32 rg_bistctl_prbs_init_seed :32;
}HAL_QP_PMA_BIST_CTRL_1, *pHAL_QP_PMA_BIST_CTRL_1;

typedef struct {
uint32 rg_bistctl_align_pattern :32;
}HAL_QP_PMA_BIST_CTRL_2, *pHAL_QP_PMA_BIST_CTRL_2;

typedef struct {
uint32 rg_bist_tx_data_pollution :20;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_bist_tx_data_pollution_latch :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_QP_PMA_BIST_CTRL_3, *pHAL_QP_PMA_BIST_CTRL_3;

typedef struct {
uint32 rg_bistctl_prbs_check_timer :24;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_QP_PMA_BIST_CTRL_4, *pHAL_QP_PMA_BIST_CTRL_4;

typedef struct {
uint32 rg_rxlfps_mon_en :1;
uint32 rg_rxlfps_pwd :1;
uint32 rg_rxlfps_deglitch :2;
uint32 rg_ssusb_rxlfps_ovf :5;
uint32 rg_ssusb_rxlfps_udf :5;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_ssusb_rxlfps_upb :5;
uint32 rg_ssusb_rxlfps_lob :5;
uint32 rsv_26 :1;
uint32 rg_ssusb_lfps_sel :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rg_rxlfps_p3_entry :1;
}HAL_QP_RX_LFPS_CTRL_0, *pHAL_QP_RX_LFPS_CTRL_0;

typedef struct {
uint32 rg_tx_detrx_wait_timer :14;
uint32 rg_force_tx_detrx_out :1;
uint32 rg_force_tx_detrx_out_val :1;
uint32 rg_tx_reserved_bit :16;
}HAL_QP_TX_DETRX_TMR, *pHAL_QP_TX_DETRX_TMR;

#endif