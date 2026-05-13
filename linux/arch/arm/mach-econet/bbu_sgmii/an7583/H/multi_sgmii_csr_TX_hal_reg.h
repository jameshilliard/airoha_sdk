#ifndef MULTI_SGMII_CSR_TX_HAL_REG
#define MULTI_SGMII_CSR_TX_HAL_REG

typedef struct {
uint32 rg_tx_5g_mode :1;
uint32 rg_tx_gpii_rst :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rg_tx_free_cnt_clr :1;
uint32 rg_qsgmii_txclk_ena :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_tx_data_rep2_sel :1;
uint32 rg_tx_data_rep4_sel :1;
uint32 rg_tx_data_re :1;
uint32 rsv_11 :1;
uint32 rsv_12 :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_qsgmii_mode :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rsv_20 :1;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_sgmii_mode_force :2;
uint32 rg_ssusb_hsgmii_sel :1;
uint32 rsv_27 :1;
uint32 rg_force_100fx_sigdet :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_msg_tx_ctrl_0, *pHAL_msg_tx_ctrl_0;

typedef struct {
uint32 rg_qsgmii_p0_tx500_mac_div_ck_sel :2;
uint32 rg_qsgmii_p1_tx500_mac_div_ck_sel :2;
uint32 rg_qsgmii_p2_tx500_mac_div_ck_sel :2;
uint32 rg_qsgmii_p3_tx500_mac_div_ck_sel :2;
uint32 rg_p1_mac_tx_div_ck_reset_n :1;
uint32 rg_p2_mac_tx_div_ck_reset_n :1;
uint32 rg_p3_mac_tx_div_ck_reset_n :1;
uint32 rg_qsgmii_tx500_pcs_div_ck_sel :1;
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
}HAL_msg_tx_ctrl_1, *pHAL_msg_tx_ctrl_1;

typedef struct {
uint32 rg_qsgmii_20b_tx_hl_swap :1;
uint32 rg_qsgmii_tx_rev :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rg_qsgmii_tx_idle_swap_en :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_qsgmii_tx_kd_rev :1;
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
}HAL_msg_tx_ctrl_2, *pHAL_msg_tx_ctrl_2;

typedef struct {
uint32 rg_efuse_tphy_rx_imp_sel :5;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_efuse_tphy_tx_imp_sel :5;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_efuse_tphy_iext_intr_ctrl :6;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_efuse_tphy_auto_load_valid :1;
uint32 rsv_25 :1;
uint32 rsv_26 :1;
uint32 rsv_27 :1;
uint32 rsv_28 :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_efuse_ctrl_dummy, *pHAL_efuse_ctrl_dummy;

typedef struct {
uint32 rg_ssusb_ip_sw_rst :1;
uint32 rg_hsgmii_mac_sw_rst_n :1;
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
}HAL_rst_ctrl_0, *pHAL_rst_ctrl_0;

typedef struct {
uint32 rg_pcs_int_en_0 :1;
uint32 rg_pcs_int_en_1 :1;
uint32 rg_pcs_int_en_2 :1;
uint32 rg_pcs_int_en_3 :1;
uint32 rg_sigdet_up_int_en :1;
uint32 rg_sigdet_down_int_en :1;
uint32 rg_sgmii_link_up_int_en :1;
uint32 rg_sgmii_link_down_int_en :1;
uint32 rg_cl22_wr_int_en :1;
uint32 rg_cl22_reset_wr_int_en :1;
uint32 rg_tx_eee_int_en :1;
uint32 rg_rx_eee_int_en :1;
uint32 rg_cl22_rg_phy_rst_cnt :4;
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
}HAL_INTERRUPT_EN_0, *pHAL_INTERRUPT_EN_0;

typedef struct {
uint32 rg_force_linkup_p0 :1;
uint32 rg_force_linkdown_p0 :1;
uint32 rg_force_spd_mode_p0 :1;
uint32 rsv_3 :1;
uint32 rg_link_mode_p0 :2;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_force_linkup_p1 :1;
uint32 rg_force_linkdown_p1 :1;
uint32 rg_force_spd_mode_p1 :1;
uint32 rg_link_mode_p1 :2;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_force_linkup_p2 :1;
uint32 rg_force_linkdown_p2 :1;
uint32 rg_force_spd_mode_p2 :1;
uint32 rg_link_mode_p2 :2;
uint32 rsv_21 :1;
uint32 rsv_22 :1;
uint32 rsv_23 :1;
uint32 rg_force_linkup_p3 :1;
uint32 rg_force_linkdown_p3 :1;
uint32 rg_force_spd_mode_p3 :1;
uint32 rg_link_mode_p3 :2;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_SGMII_STS_CTRL_0, *pHAL_SGMII_STS_CTRL_0;

typedef struct {
uint32 rg_tx_d_dummy :32;
}HAL_SGMII_STS_CTRL_1, *pHAL_SGMII_STS_CTRL_1;

typedef struct {
uint32 rg_tx_c_dummy :8;
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
}HAL_SGMII_STS_CTRL_2, *pHAL_SGMII_STS_CTRL_2;

typedef struct {
uint32 rg_fpga_ctrl_31_0 :32;
}HAL_FPGA_STS_CTRL, *pHAL_FPGA_STS_CTRL;

typedef struct {
uint32 rg_debug_ctrl :32;
}HAL_SYSYEM_DEBUG_CTRL, *pHAL_SYSYEM_DEBUG_CTRL;

typedef struct {
uint32 rg_fpga_ctrl_ben :32;
}HAL_FPGA_BEN_CTRL, *pHAL_FPGA_BEN_CTRL;

typedef struct {
uint32 rg_phy_id_0 :16;
uint32 rg_phy_id_1 :16;
}HAL_CL22_SETTING_0, *pHAL_CL22_SETTING_0;

typedef struct {
uint32 rg_cl22reg0_4_0_en :5;
uint32 rg_cl22reg0_5_en :1;
uint32 rg_cl22reg0_6_en :1;
uint32 rg_cl22reg0_7_en :1;
uint32 rg_cl22reg0_8_en :1;
uint32 rg_cl22reg0_9_en :1;
uint32 rg_cl22reg0_10_en :1;
uint32 rg_cl22reg0_11_en :1;
uint32 rg_cl22reg0_12_en :1;
uint32 rg_cl22reg0_13_en :1;
uint32 rg_cl22reg0_14_en :1;
uint32 rg_cl22reg0_15_en :1;
uint32 rg_cl22_an_function_en :1;
uint32 rsv_17 :1;
uint32 rsv_18 :1;
uint32 rsv_19 :1;
uint32 rg_cl22_rg_status_clr :1;
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
}HAL_CL22_SETTING_1, *pHAL_CL22_SETTING_1;

typedef struct {
uint32 rg_cl22_rg4_5_en :1;
uint32 rg_cl22_rg4_6_en :1;
uint32 rg_cl22_rg4_8_7_en :1;
uint32 rg_cl22_rg4_13_12_en :1;
uint32 rg_cl22_rg4_15_en :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_cl22_rg7_10_0_en :1;
uint32 rg_cl22_rg7_11_en :1;
uint32 rg_cl22_rg7_12_en :1;
uint32 rg_cl22_rg7_13_en :1;
uint32 rg_cl22_rg7_14_en :1;
uint32 rg_cl22_rg7_15_en :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_100base_t4 :1;
uint32 rg_100base_x_fdx :1;
uint32 rg_100base_x_hdx :1;
uint32 rg_10mbps_fdx :1;
uint32 rg_10mbps_hdx :1;
uint32 rg_100base_t2_fdx :1;
uint32 rg_100base_t2_hdx :1;
uint32 rg_ext_status :1;
uint32 rg_mf_pream_sup :1;
uint32 rg_jabber_det :1;
uint32 rg_ext_cap :1;
uint32 rg_uni_direct_en_reserve :1;
uint32 rg_an_ability_en_reserve :1;
uint32 rsv_29 :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_CL22_SETTING_2, *pHAL_CL22_SETTING_2;

typedef struct {
uint32 ro_cl22reg0_4_0 :5;
uint32 ro_cl22reg0_5 :1;
uint32 ro_cl22reg0_6 :1;
uint32 ro_cl22reg0_7 :1;
uint32 ro_cl22reg0_8 :1;
uint32 ro_cl22reg0_9 :1;
uint32 ro_cl22reg0_10 :1;
uint32 ro_cl22reg0_11 :1;
uint32 ro_cl22reg0_12 :1;
uint32 ro_cl22reg0_13 :1;
uint32 ro_cl22reg0_14 :1;
uint32 ro_cl22reg0_15 :1;
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
}HAL_CL22_STS_0, *pHAL_CL22_STS_0;

typedef struct {
uint32 rg_mac_t2r_fifo_rx_rst_n :1;
uint32 rg_mac_t2r_fifo_tx_rst_n :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rg_mac_t2r_fifo_rx_cnt_clr :1;
uint32 rg_mac_t2r_fifo_tx_cnt_clr :1;
uint32 rg_mac_t2r_fifo_ss_mode :1;
uint32 rsv_7 :1;
uint32 rg_mac_t2r_fifo_ss_hwm :8;
uint32 rg_mac_t2r_fifo_ss_lwm :8;
uint32 rg_mac_t2r_fifo_eee_test_mode :1;
uint32 rg_mac_t2r_fifo_lpi2idle_en :1;
uint32 rg_mac_t2r_fifo_rxer_mask :1;
uint32 rg_mac_t2r_fifo_odd_nibble_pream_deal_en :1;
uint32 rg_mac_t2r_fifo_undrun_intr_en :1;
uint32 rg_mac_t2r_fifo_ovrun_intr_en :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_MAC_T2R_LPBK_FIFO_CTRL_0, *pHAL_MAC_T2R_LPBK_FIFO_CTRL_0;

typedef struct {
uint32 rg_mac_t2r_fifo_min_ipg_num :5;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_mac_t2r_fifo_runt_ipg_num :5;
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
}HAL_MAC_T2R_LPBK_FIFO_CTRL_1, *pHAL_MAC_T2R_LPBK_FIFO_CTRL_1;

typedef struct {
uint32 ro_mac_t2r_fifo_rx_start_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_0, *pHAL_MAC_T2R_LPBK_FIFO_STS_0;

typedef struct {
uint32 ro_mac_t2r_fifo_tx_start_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_1, *pHAL_MAC_T2R_LPBK_FIFO_STS_1;

typedef struct {
uint32 ro_mac_t2r_fifo_rx_termi_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_2, *pHAL_MAC_T2R_LPBK_FIFO_STS_2;

typedef struct {
uint32 ro_mac_t2r_fifo_tx_termi_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_3, *pHAL_MAC_T2R_LPBK_FIFO_STS_3;

typedef struct {
uint32 ro_mac_t2r_fifo_ipg_del_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_4, *pHAL_MAC_T2R_LPBK_FIFO_STS_4;

typedef struct {
uint32 ro_mac_t2r_fifo_ipg_ins_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_5, *pHAL_MAC_T2R_LPBK_FIFO_STS_5;

typedef struct {
uint32 ro_mac_t2r_fifo_rx_runt_ipg_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_6, *pHAL_MAC_T2R_LPBK_FIFO_STS_6;

typedef struct {
uint32 ro_mac_t2r_fifo_tx_runt_ipg_cnt :32;
}HAL_MAC_T2R_LPBK_FIFO_STS_7, *pHAL_MAC_T2R_LPBK_FIFO_STS_7;

typedef struct {
uint32 rg_phy_r2t_fifo_rx_rst_n :1;
uint32 rg_phy_r2t_fifo_tx_rst_n :1;
uint32 rg_phy_r2t_fifo_en :1;
uint32 rsv_3 :1;
uint32 rg_phy_r2t_fifo_rx_cnt_clr :1;
uint32 rg_phy_r2t_fifo_tx_cnt_clr :1;
uint32 rg_phy_r2t_fifo_ss_mode :1;
uint32 rsv_7 :1;
uint32 rg_phy_r2t_fifo_ss_hwm :8;
uint32 rg_phy_r2t_fifo_ss_lwm :8;
uint32 rg_phy_r2t_fifo_eee_test_mode :1;
uint32 rg_phy_r2t_fifo_lpi2idle_en :1;
uint32 rg_phy_r2t_fifo_rxer_mask :1;
uint32 rg_phy_r2t_fifo_odd_nibble_pream_deal_en :1;
uint32 rg_phy_r2t_fifo_undrun_intr_en :1;
uint32 rg_phy_r2t_fifo_ovrun_intr_en :1;
uint32 rsv_30 :1;
uint32 rsv_31 :1;
}HAL_PHY_R2T_LPBK_FIFO_CTRL_0, *pHAL_PHY_R2T_LPBK_FIFO_CTRL_0;

typedef struct {
uint32 rg_phy_r2t_fifo_min_ipg_num :5;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_phy_r2t_fifo_runt_ipg_num :5;
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
}HAL_PHY_R2T_LPBK_FIFO_CTRL_1, *pHAL_PHY_R2T_LPBK_FIFO_CTRL_1;

typedef struct {
uint32 ro_phy_r2t_fifo_rx_start_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_0, *pHAL_PHY_R2T_LPBK_FIFO_STS_0;

typedef struct {
uint32 ro_phy_r2t_fifo_tx_start_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_1, *pHAL_PHY_R2T_LPBK_FIFO_STS_1;

typedef struct {
uint32 ro_phy_r2t_fifo_rx_termi_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_2, *pHAL_PHY_R2T_LPBK_FIFO_STS_2;

typedef struct {
uint32 ro_phy_r2t_fifo_tx_termi_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_3, *pHAL_PHY_R2T_LPBK_FIFO_STS_3;

typedef struct {
uint32 ro_phy_r2t_fifo_ipg_del_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_4, *pHAL_PHY_R2T_LPBK_FIFO_STS_4;

typedef struct {
uint32 ro_phy_r2t_fifo_ipg_ins_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_5, *pHAL_PHY_R2T_LPBK_FIFO_STS_5;

typedef struct {
uint32 ro_phy_r2t_fifo_rx_runt_ipg_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_6, *pHAL_PHY_R2T_LPBK_FIFO_STS_6;

typedef struct {
uint32 ro_phy_r2t_fifo_tx_runt_ipg_cnt :32;
}HAL_PHY_R2T_LPBK_FIFO_STS_7, *pHAL_PHY_R2T_LPBK_FIFO_STS_7;

typedef struct {
uint32 rg_force_txd_sel :1;
uint32 rsv_1 :1;
uint32 rsv_2 :1;
uint32 rsv_3 :1;
uint32 rg_force_txc_sel :1;
uint32 rsv_5 :1;
uint32 rsv_6 :1;
uint32 rsv_7 :1;
uint32 rg_force_txen_sel :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rg_force_txer_sel :1;
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
}HAL_PHY_TX_FORCE_CTRL_0, *pHAL_PHY_TX_FORCE_CTRL_0;

typedef struct {
uint32 rg_force_txd_h :32;
}HAL_PHY_TX_FORCE_CTRL_1, *pHAL_PHY_TX_FORCE_CTRL_1;

typedef struct {
uint32 rg_force_txd_l :32;
}HAL_PHY_TX_FORCE_CTRL_2, *pHAL_PHY_TX_FORCE_CTRL_2;

typedef struct {
uint32 rg_force_txc :8;
uint32 rsv_8 :1;
uint32 rsv_9 :1;
uint32 rsv_10 :1;
uint32 rsv_11 :1;
uint32 rg_force_txen :1;
uint32 rsv_13 :1;
uint32 rsv_14 :1;
uint32 rsv_15 :1;
uint32 rg_force_txer :1;
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
}HAL_PHY_TX_FORCE_CTRL_3, *pHAL_PHY_TX_FORCE_CTRL_3;

typedef struct {
uint32 rg_fpga_freq_meter_det_en :1;
uint32 rg_fpga_freq_meter_relck_num :4;
uint32 rg_fpga_freq_meter_clear_unlck_cnt :1;
uint32 ro_fpga_freq_meter_unlck_cnt :8;
uint32 ro_fpga_freq_meter_lock :1;
uint32 ro_fpga_freq_meter_state :4;
uint32 rg_freq_meter_reset_xilinx :1;
uint32 rg_force_xilinx_test_clk :1;
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
}HAL_FPGA_FRE_METER_CTRL_1, *pHAL_FPGA_FRE_METER_CTRL_1;

typedef struct {
uint32 rg_fpga_freq_meter_chk_cycle :20;
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
}HAL_FPGA_FRE_METER_CTRL_2, *pHAL_FPGA_FRE_METER_CTRL_2;

typedef struct {
uint32 rg_fpga_freq_meter_golden_cycle :20;
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
}HAL_FPGA_FRE_METER_CTRL_3, *pHAL_FPGA_FRE_METER_CTRL_3;

typedef struct {
uint32 rg_fpga_freq_meter_tolerate_cycle :20;
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
}HAL_FPGA_FRE_METER_CTRL_4, *pHAL_FPGA_FRE_METER_CTRL_4;

#endif