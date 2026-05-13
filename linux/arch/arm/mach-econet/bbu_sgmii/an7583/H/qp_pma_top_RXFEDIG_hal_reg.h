#ifndef QP_PMA_TOP_RXFEDIG_HAL_REG
#define QP_PMA_TOP_RXFEDIG_HAL_REG

typedef struct {
uint32 rg_qp_eq_algrthm_sel :1;
uint32 rg_qp_eq_chk_eye_h :1;
uint32 rg_qp_eq_dfexen_sel :1;
uint32 rg_qp_eq_dfex_dis :1;
uint32 rg_qp_eq_dfex_en :1;
uint32 rg_qp_eq_dfex_rst :1;
uint32 rg_qp_eq_dfeyen_stop_dis :1;
uint32 rg_qp_eq_dfe_tog :1;
uint32 rg_qp_eq_eye_cnt_en :1;
uint32 rg_qp_eq_eye_mon_en :1;
uint32 rg_qp_eq_gated_rxd_b :1;
uint32 rg_qp_eq_pilpo_rout :1;
uint32 rg_qp_eq_rx500m_ck_sel :1;
uint32 rg_qp_eq_stoptime :1;
uint32 rg_qp_eq_tri_det_en :1;
uint32 rg_ssusb_force_rx_fr_mode :1;
uint32 rg_ssusb_rx_fr_mode :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_ssusb_rx_dfe_en :1;
uint32 rg_ssusb_rx_dfe_rst :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_0, *pHAL_PON_RXFEDIG_CTRL_0;

typedef struct {
uint32 rg_qp_eq_dd0hos_lfi :7;
uint32 rsv_7 :1;
uint32 rg_qp_eq_dd0los_lfi :7;
uint32 rsv_15 :1;
uint32 rg_qp_eq_dd1hos_lfi :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_dd1los_lfi :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_1, *pHAL_PON_RXFEDIG_CTRL_1;

typedef struct {
uint32 rg_qp_eq_de0os_lfi :7;
uint32 rsv_7 :1;
uint32 rg_qp_eq_de1os_lfi :7;
uint32 rsv_15 :1;
uint32 rg_qp_eq_deye0os_lfi :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_deye1os_lfi :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_2, *pHAL_PON_RXFEDIG_CTRL_2;

typedef struct {
uint32 rg_qp_eq_dfexen_dur :3;
uint32 rsv_3 :1;
uint32 rg_qp_eq_dfex_lf_sel :3;
uint32 rsv_7 :1;
uint32 rg_qp_eq_dfeyen_dur :3;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_eq_dhhlos_lfi :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_dhhl_lfi :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_3, *pHAL_PON_RXFEDIG_CTRL_3;

typedef struct {
uint32 rg_qp_eq_dhhl_lf_sel :3;
uint32 rsv_3 :1;
uint32 rsv_4 :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_eq_dleqos_lfi :5;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_eq_dleq_lfi_gen1 :4;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_eq_dleq_lfi_gen2 :4;
uint32 rg_qp_eq_dleq_lfi_gen3 :4;
}HAL_PON_RXFEDIG_CTRL_4, *pHAL_PON_RXFEDIG_CTRL_4;

typedef struct {
uint32 rg_qp_eq_dleq_lfi_gen4 :4;
uint32 rg_qp_eq_dleq_lf_sel :3;
uint32 rsv_7 :1;
uint32 rg_qp_eq_dlhlos_lfi :7;
uint32 rsv_15 :1;
uint32 rg_qp_eq_dlhl_lfi :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_dlhl_lf_sel :3;
uint32 rsv_27 :1;
uint32 rg_qp_eq_dsaos_lf_sel :3;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_5, *pHAL_PON_RXFEDIG_CTRL_5;

typedef struct {
uint32 rg_qp_eq_eye0_y :7;
uint32 rsv_7 :1;
uint32 rg_qp_eq_eye1_y :7;
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
}HAL_PON_RXFEDIG_CTRL_6, *pHAL_PON_RXFEDIG_CTRL_6;

typedef struct {
uint32 rg_qp_eq_eye_cnt :20;
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
}HAL_PON_RXFEDIG_CTRL_7, *pHAL_PON_RXFEDIG_CTRL_7;

typedef struct {
uint32 rg_qp_eq_eye_mask :10;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_eq_eye_xoffset :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_isiflag_sel :2;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rg_qp_eq_leqmax :4;
}HAL_PON_RXFEDIG_CTRL_8, *pHAL_PON_RXFEDIG_CTRL_8;

typedef struct {
uint32 rg_qp_eq_leqosc_dlycnt :3;
uint32 rsv_3 :1;
uint32 rg_qp_eq_leq_shift :3;
uint32 rsv_7 :1;
uint32 rg_qp_eq_leq_stop_to :2;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_eq_mon_sel :5;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_qp_eq_pi0_ini :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_9, *pHAL_PON_RXFEDIG_CTRL_9;

typedef struct {
uint32 rg_qp_eq_pi90ck_sel :2;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rsv_4 :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_eq_pi90_ini :7;
uint32 rsv_15 :1;
uint32 rg_qp_eq_pieye_ini :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_pi_kpgain :3;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_10, *pHAL_PON_RXFEDIG_CTRL_10;

typedef struct {
uint32 rg_qp_eq_reserved :32;
}HAL_PON_RXFEDIG_CTRL_11, *pHAL_PON_RXFEDIG_CTRL_11;

typedef struct {
uint32 rg_qp_eq_rev_1 :16;
uint32 rg_qp_eq_rev :16;
}HAL_PON_RXFEDIG_CTRL_12, *pHAL_PON_RXFEDIG_CTRL_12;

typedef struct {
uint32 rg_qp_eq_sd_cnt0 :6;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qp_eq_sd_cnt1 :6;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qp_eq_sigdet :7;
uint32 rsv_23 :1;
uint32 rg_qp_eq_starttime :2;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_CTRL_13, *pHAL_PON_RXFEDIG_CTRL_13;

typedef struct {
uint32 rg_qp_eq_tri_det_th :7;
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
}HAL_PON_RXFEDIG_CTRL_14, *pHAL_PON_RXFEDIG_CTRL_14;

typedef struct {
uint32 rgs_ssusb_eq_eye_cnt_rdy :1;
uint32 rgs_ssusb_eq_leq_stop :1;
uint32 rsv_2 :1;
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
}HAL_PON_RXFEDIG_STS_0, *pHAL_PON_RXFEDIG_STS_0;

typedef struct {
uint32 rgs_ssusb_eq_dcd0h :7;
uint32 rsv_7 :1;
uint32 rgs_ssusb_eq_dcd0l :7;
uint32 rsv_15 :1;
uint32 rgs_ssusb_eq_dcd1h :7;
uint32 rsv_23 :1;
uint32 rgs_ssusb_eq_dcd1l :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_STS_1, *pHAL_PON_RXFEDIG_STS_1;

typedef struct {
uint32 rgs_ssusb_eq_dce0 :7;
uint32 rsv_7 :1;
uint32 rgs_ssusb_eq_dce1 :7;
uint32 rsv_15 :1;
uint32 rgs_ssusb_eq_dceye0 :7;
uint32 rsv_23 :1;
uint32 rgs_ssusb_eq_dceye1 :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_STS_2, *pHAL_PON_RXFEDIG_STS_2;

typedef struct {
uint32 rgs_ssusb_eq_dchhl :7;
uint32 rsv_7 :1;
uint32 rgs_ssusb_eq_dcleq :4;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rgs_ssusb_eq_dcleqos :5;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rgs_ssusb_eq_dclhl :7;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_STS_3, *pHAL_PON_RXFEDIG_STS_3;

typedef struct {
uint32 rgs_ssusb_eq_eye_monitor_errcnt_0 :20;
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
}HAL_PON_RXFEDIG_STS_4, *pHAL_PON_RXFEDIG_STS_4;

typedef struct {
uint32 rgs_ssusb_eq_eye_monitor_errcnt_1 :20;
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
}HAL_PON_RXFEDIG_STS_5, *pHAL_PON_RXFEDIG_STS_5;

typedef struct {
uint32 rgs_ssusb_eq_pilpo :7;
uint32 rsv_7 :1;
uint32 rsv_8 :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rgs_ssusb_eq_status :8;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_PON_RXFEDIG_STS_7, *pHAL_PON_RXFEDIG_STS_7;

typedef struct {
uint32 rgs_ssusb_eq_probe_out :8;
uint32 rgs_ssusb_rx_sd_out :1;
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
}HAL_PON_RXFEDIG_STS_8, *pHAL_PON_RXFEDIG_STS_8;

typedef struct {
uint32 rg_pq_fedig_speed :2;
uint32 rg_pq_fedig_mode :2;
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
}HAL_PON_RXFEDIG_CTRL_15, *pHAL_PON_RXFEDIG_CTRL_15;

#endif