#ifndef QP_PMA_TOP_RO_HAL_REG
#define QP_PMA_TOP_RO_HAL_REG

typedef struct {
uint32 ro_qp_tx_debug0 :8;
uint32 ro_qp_tx_debug1 :8;
uint32 ro_qp_tx_debug2 :8;
uint32 ro_qp_tx_debug3 :8;
}HAL_QP_TX_DBG_0, *pHAL_QP_TX_DBG_0;

typedef struct {
uint32 ro_qp_tx_debug4 :8;
uint32 ro_qp_tx_debug5 :8;
uint32 ro_qp_tx_debug6 :8;
uint32 ro_qp_tx_debug7 :8;
}HAL_QP_TX_DBG_1, *pHAL_QP_TX_DBG_1;

typedef struct {
uint32 ro_rx_lfps_debug0 :8;
uint32 ro_rx_lfps_debug1 :8;
uint32 ro_rx_lfps_debug2 :8;
uint32 ro_rx_lfps_debug3 :8;
}HAL_QP_LFPS_DBG_0, *pHAL_QP_LFPS_DBG_0;

typedef struct {
uint32 ro_rx_lfps_debug4 :8;
uint32 ro_rx_lfps_debug5 :8;
uint32 ro_rx_lfps_debug6 :8;
uint32 ro_rx_lfps_debug7 :8;
}HAL_QP_LFPS_DBG_1, *pHAL_QP_LFPS_DBG_1;

typedef struct {
uint32 ro_rx_lfps_debug8 :8;
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
}HAL_QP_LFPS_DBG_2, *pHAL_QP_LFPS_DBG_2;

typedef struct {
uint32 ro_bistctl_prbs_done :1;
uint32 ro_bistctl_prbs_fail :1;
uint32 ro_bistctl_prbs_compare :1;
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
uint32 ro_bistctl_prbs_err_cnt :16;
}HAL_QP_PRBS_DBG_0, *pHAL_QP_PRBS_DBG_0;

typedef struct {
uint32 ro_bistctl_prbs_bit_err_fw_using :16;
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
}HAL_QP_PRBS_DBG_1, *pHAL_QP_PRBS_DBG_1;

typedef struct {
uint32 ro_bistctl_prbs_bit_err_period_num :24;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_QP_PRBS_DBG_2, *pHAL_QP_PRBS_DBG_2;

typedef struct {
uint32 ro_prbs_bist_debug_0 :8;
uint32 ro_prbs_bist_debug_1 :8;
uint32 ro_prbs_bist_debug_2 :8;
uint32 ro_prbs_bist_debug_3 :8;
}HAL_QP_PRBS_DBG_3, *pHAL_QP_PRBS_DBG_3;

typedef struct {
uint32 ro_prbs_bist_debug_4 :8;
uint32 ro_prbs_bist_debug_5 :8;
uint32 ro_prbs_bist_debug_6 :8;
uint32 ro_prbs_bist_debug_7 :8;
}HAL_QP_PRBS_DBG_4, *pHAL_QP_PRBS_DBG_4;

typedef struct {
uint32 ro_prbs_bist_debug_8 :8;
uint32 ro_prbs_bist_debug_9 :8;
uint32 ro_prbs_bist_debug_10 :8;
uint32 rsv_24 :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_QP_PRBS_DBG_5, *pHAL_QP_PRBS_DBG_5;

typedef struct {
uint32 ro_bist_error_cnt :9;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 ro_bist_chk_done :1;
uint32 ro_bist_len_error :1;
uint32 ro_bist_status :1;
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
}HAL_QP_TX_BIST_DBG_0, *pHAL_QP_TX_BIST_DBG_0;

typedef struct {
uint32 ro_pcs_bist_debug :32;
}HAL_QP_TX_BIST_DBG_1, *pHAL_QP_TX_BIST_DBG_1;

typedef struct {
uint32 ro_r2t_afifo_debug :32;
}HAL_QP_R2T_AFIFO_DBG, *pHAL_QP_R2T_AFIFO_DBG;

typedef struct {
uint32 ro_t2r_afifo_debug :32;
}HAL_QP_T2R_AFIFO_DBG, *pHAL_QP_T2R_AFIFO_DBG;

#endif