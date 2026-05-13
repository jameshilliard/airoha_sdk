#ifndef AIR_XPON_XSGMII_INI
#define AIR_XPON_XSGMII_INI

	
static void RG_W_PL(RgAddr Base,RgAddr Base_start,RgAddr Addr,u32 Data);
static u32 RG_R_PL(RgAddr Base,RgAddr Base_start,RgAddr Addr);

#if 0
static inline void xsgmii_ini(volatile xsgmii_base * _pxSGMII){
	printk("xsgmii_ini\n");
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CMN_EN,0x10040000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SPARE_H,0x1000ff);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY,0x3000004);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_IFM,0x30000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_HREN,0x5010100);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_DELTA,0x31b0082);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_TRI_EN,0x8201);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCO_TCLVAR,0x2301d);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_IB_EXT_EN,0x180000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BR,0x101f0a);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BWC,0x2ff0000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV,0x4010100);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_sdm_pcw,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_sdm_pcw,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_vos,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_MMD_PREDIV_MODE,0x10000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_KBAND_KFC,0x1000300);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_TCL_CMP_EN,0x10400);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _scan_mode,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_ckout_en,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_FREQ_MEAS_EN,0x10001);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_EN,0x300);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD,0x1000003);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_DELTA1,0x820082);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_EN,0x10000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_PERIOD,0x101031b);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_CHP_IBIAS,0x1f05000c);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_LPF_BP,0x5);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN,0x3000001);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VCO_HALFLSB_EN,0x4040401);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_sdm_pcw,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_sdm_pcw,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL,0x40001);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS,0x100);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_CODE,0x30003ff);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_KBAND_VREF,0x10010);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_AMP_GAIN,0x4000903);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VTP_EN,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_PHY_CK1_EN,0x101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_ckout_en,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_gain_ctrl,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_da_pxp_jcpll_sdm_scan,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_5,0x40003ff);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_D1_BYPASS_AEQ,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_PEAKING_CTRL_MSB,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_VCM_GEN_PWDB,0x2000400);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_1,0xc100a00);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_AEQ_CFORCE,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_OSCAL_WATCH_WNDW,0x8);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_4,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EXTRAL_CTRL,0x1000203);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PD_PICAL_CKD8_INV,0x100);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pd_pwdb,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_pwdb,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_scan_rst_b,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_bypass,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RX_SYS_EN_SEL_0,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_rstb,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_speed,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_MONPR_EN,0x70600);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_BETA_DAC,0x4010808);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_VREG_IBAND_VAL,0x80606);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_LPF_RATIO,0x2000000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV,0x100000a);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_SETTING_0,0x10001);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_EQ_HZEN,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_1,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_2,0x503);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_2,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_0,0x101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_6,0x2);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_1,0x3e80002);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_4,0x3e80002);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_2,0x3e80002);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_3,0x3e80002);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_5,0xc80064);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_2,0x20403);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RG_XPON_RX_RESERVED_1,0x2);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_REV_0,0xcaab1030);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_SIGDET_NOVTH,0x40000);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_RANGE,0x200);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_BUSBIT_SEL,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_8,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_9,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_0,0x100010);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_1,0x19000d);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_3,0x3307);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_2,0x19000d);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_1,0x100010);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4,0x3307);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_3,0x19000d);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_INJ_MODE,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_lpf_c_en,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_b,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_1,0x4010000);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_1,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_FORCE_CTRL_1,0x0);
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX_CKLDO_EN,0x10400);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_acjtag_en,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_term_sel,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_rate_ctrl,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_TX_RST_B,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c0b,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c1,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _xpon_tx_rate_ctrl,0x2);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _xpon_tx_rate_ctrl,0x2);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_0,0xc000c00);
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_13,0x31120009);
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_6,0x13);
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_4,0x1);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_7,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_2,0x7b);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_3,0x7b);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_4,0x7b);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_0,0x6330001);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_1,0x1601);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11,0x4);
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,0x1140);
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0,0x1140);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_pcs_ctrol_1,0x2040);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_vendor_define116,0x4c4c);
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1,0xc9cc000);
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1,0xc9cc000);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_6,0x100009c);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_8,0x11);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_8,0x11);
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_an_sgmii_mode_force,0x0);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,0x50f010f);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,0x10001000);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,0x4);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_user_define_xgmii_data_lsb,0x7070707);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_user_define_xgmii_control,0xff);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_user_define_sel,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1,0x10101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3,0x0);
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt,0x113);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,0x50f010f);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,0x10001000);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1,0x4);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_0,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_1,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_2,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_3,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4,0x0);
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4,0x0);
	
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) INTERRUPT_EN_0, 0x8300);	
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) multi_sgmii_reg_interrupt_sel, 0x01);

	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_0,0x5a000000);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_0,0x23801f0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_1,0x1967);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_2,0x18);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_3,0x10000);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEOPENING_CTRL_0,0x404);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEOPENING_CTRL_1,0x40004);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_1,0x1);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_1,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_fll_cor,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_0,0xa000a01);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_PI_CAL,0x700);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_0,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_6,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_7,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_5,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_6,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_0,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_FORCE_CTRL_0,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_3,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_3,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_6,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0,0xffff);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_0,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_0,0x0);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_2,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_1,0x101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_7,0x1010101);
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_7,0x1010101);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11,0x4);
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_2,0x0);
	}

#else
static inline void xsgmii_ini(volatile xsgmii_base * _pxSGMII){
    printk("xsgmii_ini\n");
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x0 ,0x10040000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x48 ,0x1000ff );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1c ,0x3000004 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb828 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x20 ,0x30000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x24 ,0x5010100 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x38 ,0x31b0082 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x34 ,0x8201 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x30 ,0x2301d );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x4 ,0x180000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x8 ,0x101f0a );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xc ,0x2ff0000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x2c ,0x4010100 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb800 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb79c ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x14 ,0x10000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x10 ,0x1000300 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x28 ,0x10400 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x84 ,0x101031b );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x64 ,0x40001 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb854 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x68 ,0x300 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x6c ,0x1000003 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x80 ,0x820082 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x7c ,0x10000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x50 ,0x1f05000c );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x54 ,0x5 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x74 ,0x3000001 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x78 ,0x4040401 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb798 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb794 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x58 ,0x30003ff );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x5c ,0x100 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x94 ,0x10010 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x70 ,0x4000903 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb580 ,0x2 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xc4 ,0x10400 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb874 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb77c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb784 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb778 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb780 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb260 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb374 ,0x2 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb184 ,0x40003ff );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x148 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x144 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x11c ,0x2000400 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb004 ,0xc100a00 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x13c ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x120 ,0x8 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb320 ,0x1010101 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb48c ,0x1000203 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xdc ,0x100 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb80c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb814 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x10c ,0x70600 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb88c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb768 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb390 ,0x100010 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb394 ,0x19000d );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb39c ,0x3307 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xd4 ,0xcaab1030 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb100 ,0xc80064 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb08c ,0x101 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb104 ,0x2 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb090 ,0x3e80002 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb09c ,0x3e80002 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb094 ,0x3e80002 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb098 ,0x3e80002 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb76c ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xe8 ,0x2000000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xf8 ,0x4010808 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xfc ,0x80606 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb120 ,0x503 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb088 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb38c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb000 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb33c ,0x1010101 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb330 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x118 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb824 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb81c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb894 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb84c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb34c ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x114 ,0x40000 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x110 ,0x200 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb350 ,0x0 );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xd8 ,0x100000a );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xcc ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb818 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb460 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb150 ,0x19000d );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb14c ,0x100010 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb158 ,0x3307 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb154 ,0x19000d );
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xf4 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb820 ,0x0 );
	//RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb530 ,0x3cc00320 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb19c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb174 ,0x4010000 );
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x100 ,0x10001 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x900 ,0x2040 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xb2c ,0x4c4c );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc8 ,0x0 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbcc ,0x0 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe0 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb360 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb380 ,0x800a101 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf8 ,0x6330001 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x930 ,0x100d );
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x0 ,0xc000c00 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb474 ,0x0 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc0 ,0x0 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc4 ,0x0 );
    //+forced mode    
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf0 ,0xff );
	//RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbdc ,0x1010100 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf4 ,0x0 );
   	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb10c ,0x1010101 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb114 ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb47c ,0x100 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb16c ,0x0 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb208 ,0x10101 );
	//#U2
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe8 ,0x7070707 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbfc ,0x1601 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc20 ,0x0 );
	//RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe4 ,0x1 );
	RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c ,0x0 );
	//RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbdc ,0x1010100 );
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x2c ,0x4 );
	//RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbd8 ,0x1010001 );
	//#H1
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x100 ,0x80000000 );
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa00 ,0xc9cc000 );
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) 0xb178 ,0x20403 );
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x0 ,0x1140 );
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x18 ,0x0 );
	//#S1
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x34 ,0x31120009 );
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x14 ,0x0 );
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x20 ,0x11 );
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa14 ,0x13 );
	RG_W_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x10 ,0x1 );
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa20 ,0x113 );
	RG_W_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x14c ,0x1 );
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x18 ,0x100009c );
	//#S2
	RG_W_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) 0x4 ,0x50f010f );
	RG_W_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa24 ,0x0 );	
}
#endif
	
inline static void dump(volatile xsgmii_base * _pxSGMII){
	printk("RG_PXP_CMN_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CMN_EN));
	printk("RG_PXP_JCPLL_SPARE_H = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SPARE_H));
	printk("RG_PXP_JCPLL_RST_DLY = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_RST_DLY));
	printk("RG_PXP_JCPLL_SDM_IFM = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_IFM));
	printk("RG_PXP_JCPLL_SDM_HREN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SDM_HREN));
	printk("RG_PXP_JCPLL_SSC_DELTA = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_DELTA));
	printk("RG_PXP_JCPLL_SSC_TRI_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_SSC_TRI_EN));
	printk("RG_PXP_JCPLL_VCO_TCLVAR = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCO_TCLVAR));
	printk("RG_PXP_JCPLL_IB_EXT_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_IB_EXT_EN));
	printk("RG_PXP_JCPLL_LPF_BR = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BR));
	printk("RG_PXP_JCPLL_LPF_BWC = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_LPF_BWC));
	printk("RG_PXP_JCPLL_VCODIV = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_VCODIV));
	printk("rg_force_da_pxp_jcpll_sdm_pcw = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_sdm_pcw));
	printk("rg_force_da_pxp_jcpll_sdm_pcw = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_sdm_pcw));
	printk("rg_force_da_pxp_rx_fe_vos = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_vos));
	printk("RG_PXP_JCPLL_MMD_PREDIV_MODE = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_MMD_PREDIV_MODE));
	printk("RG_PXP_JCPLL_KBAND_KFC = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_KBAND_KFC));
	printk("RG_PXP_JCPLL_TCL_CMP_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_TCL_CMP_EN));
	printk("scan_mode = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _scan_mode));
	printk("rg_force_da_pxp_jcpll_ckout_en = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_jcpll_ckout_en));
	printk("RG_PXP_JCPLL_FREQ_MEAS_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_JCPLL_FREQ_MEAS_EN));
	printk("RG_PXP_TXPLL_SDM_DI_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_EN));
	printk("RG_PXP_TXPLL_SDM_ORD = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD));
	printk("RG_PXP_TXPLL_SSC_DELTA1 = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_DELTA1));
	printk("RG_PXP_TXPLL_SSC_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_EN));
	printk("RG_PXP_TXPLL_SSC_PERIOD = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SSC_PERIOD));
	printk("RG_PXP_TXPLL_CHP_IBIAS = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_CHP_IBIAS));
	printk("RG_PXP_TXPLL_LPF_BP = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_LPF_BP));
	printk("RG_PXP_TXPLL_TCL_LPF_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_LPF_EN));
	printk("RG_PXP_TXPLL_VCO_HALFLSB_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VCO_HALFLSB_EN));
	printk("rg_force_da_pxp_txpll_sdm_pcw = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_sdm_pcw));
	printk("rg_force_da_pxp_txpll_sdm_pcw = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_sdm_pcw));
	printk("rg_force_da_pxp_cdr_pr_idac = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac));
	printk("RG_PXP_TXPLL_REFIN_INTERNAL = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_INTERNAL));
	printk("RG_PXP_TXPLL_KBAND_KS = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS));
	printk("RG_PXP_TXPLL_KBAND_CODE = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_CODE));
	printk("RG_PXP_TXPLL_TCL_KBAND_VREF = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_KBAND_VREF));
	printk("RG_PXP_TXPLL_TCL_AMP_GAIN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_AMP_GAIN));
	printk("RG_PXP_TXPLL_VTP_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_VTP_EN));
	printk("RG_PXP_TXPLL_PHY_CK1_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_PHY_CK1_EN));
	printk("rg_force_da_pxp_txpll_ckout_en = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_txpll_ckout_en));
	printk("rg_force_da_pxp_rx_fe_gain_ctrl = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_gain_ctrl));
	printk("rg_da_pxp_jcpll_sdm_scan = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_da_pxp_jcpll_sdm_scan));
	printk("SS_RX_FLL_5 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_5));
	printk("RG_PXP_RX_DAC_D1_BYPASS_AEQ = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_D1_BYPASS_AEQ));
	printk("RG_PXP_RX_FE_PEAKING_CTRL_MSB = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_PEAKING_CTRL_MSB));
	printk("RG_PXP_RX_FE_VCM_GEN_PWDB = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_VCM_GEN_PWDB));
	printk("SS_LCPLL_PWCTL_SETTING_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_1));
	printk("RG_PXP_AEQ_CFORCE = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_AEQ_CFORCE));
	printk("RG_PXP_RX_OSCAL_WATCH_WNDW = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_OSCAL_WATCH_WNDW));
	printk("RX_DISB_MODE_4 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_4));
	printk("RX_EXTRAL_CTRL = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EXTRAL_CTRL));
	printk("RG_PXP_CDR_PD_PICAL_CKD8_INV = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PD_PICAL_CKD8_INV));
	printk("rg_force_da_pxp_cdr_pr_pieye_pwdb = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_pieye_pwdb));
	printk("rg_force_da_pxp_cdr_pd_pwdb = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pd_pwdb));
	printk("rg_force_da_pxp_rx_fe_pwdb = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_fe_pwdb));
	printk("rg_force_da_pxp_rx_scan_rst_b = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_rx_scan_rst_b));
	printk("SS_DA_XPON_PWDB_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0));
	printk("rg_force_da_pxp_aeq_bypass = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_bypass));
	printk("ADD_RX_SYS_EN_SEL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RX_SYS_EN_SEL_0));
	printk("rg_force_da_pxp_aeq_rstb = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_rstb));
	printk("rg_force_da_pxp_aeq_speed = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_aeq_speed));
	printk("RG_PXP_CDR_PR_MONPR_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_MONPR_EN));
	printk("RG_PXP_CDR_PR_BETA_DAC = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_BETA_DAC));
	printk("RG_PXP_CDR_PR_VREG_IBAND_VAL = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_VREG_IBAND_VAL));
	printk("RG_PXP_CDR_LPF_RATIO = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_LPF_RATIO));
	printk("RG_PXP_RX_PHYCK_DIV = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV));
	printk("SS_LCPLL_PWCTL_SETTING_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0));
	printk("XPON_SETTING_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_SETTING_0));
	printk("ADD_DIG_RESERVE_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0));
	printk("RG_PXP_RX_FE_EQ_HZEN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_FE_EQ_HZEN));
	printk("SS_DA_XPON_PWDB_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_1));
	printk("PHY_EQ_CTRL_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_2));
	printk("RX_EYE_TOP_EYECNT_CTRL_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_2));
	printk("RX_CTRL_SEQUENCE_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_0));
	printk("RX_CTRL_SEQUENCE_CTRL_6 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_6));
	printk("RX_CTRL_SEQUENCE_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_1));
	printk("RX_CTRL_SEQUENCE_CTRL_4 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_4));
	printk("RX_CTRL_SEQUENCE_CTRL_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_2));
	printk("RX_CTRL_SEQUENCE_CTRL_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_3));
	printk("RX_CTRL_SEQUENCE_CTRL_5 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_CTRL_5));
	printk("SW_RST_SET = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SW_RST_SET));
	printk("SS_RX_FLL_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_2));
	printk("RG_XPON_RX_RESERVED_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RG_XPON_RX_RESERVED_1));
	printk("RG_PXP_RX_REV_0 = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_REV_0));
	printk("RG_PXP_RX_SIGDET_NOVTH = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_SIGDET_NOVTH));
	printk("RG_PXP_RX_DAC_RANGE = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_DAC_RANGE));
	printk("RG_PXP_RX_BUSBIT_SEL = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_BUSBIT_SEL));
	printk("RX_DISB_MODE_8 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_8));
	printk("RX_FORCE_MODE_9 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_9));
	printk("PLL_TDC_FREQDET_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_0));
	printk("PLL_TDC_FREQDET_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_1));
	printk("PLL_TDC_FREQDET_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PLL_TDC_FREQDET_3));
	printk("SS_RX_FREQ_DET_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_2));
	printk("SS_RX_FREQ_DET_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_1));
	printk("SS_RX_FREQ_DET_4 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_4));
	printk("SS_RX_FREQ_DET_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FREQ_DET_3));
	printk("RG_PXP_CDR_PR_INJ_MODE = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_CDR_PR_INJ_MODE));
	printk("rg_force_da_pxp_cdr_pr_lpf_c_en = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_lpf_c_en));
	printk("SS_RX_FLL_b = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_b));
	printk("SS_RX_FLL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_1));
	printk("rg_force_da_pxp_cdr_lpf_lck2data = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data));
	printk("RX_CTRL_SEQUENCE_DISB_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_1));
	printk("RX_CTRL_SEQUENCE_FORCE_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_FORCE_CTRL_1));
	printk("RG_PXP_TX_CKLDO_EN = %x \n",RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX_CKLDO_EN));
	printk("rg_force_da_pxp_tx_acjtag_en = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_acjtag_en));
	printk("rg_force_da_pxp_tx_term_sel = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_term_sel));
	printk("rg_force_da_pxp_tx_rate_ctrl = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_rate_ctrl));
	printk("SS_TX_RST_B = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_TX_RST_B));
	printk("rg_force_da_pxp_tx_fir_c0b = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c0b));
	printk("rg_force_da_pxp_tx_fir_c1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_tx_fir_c1));
	printk("xpon_tx_rate_ctrl = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _xpon_tx_rate_ctrl));
	printk("xpon_tx_rate_ctrl = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _xpon_tx_rate_ctrl));
	printk("rg_rate_adapt_ctrl_0 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_0));
	printk("sgmii_reg_an_13 = %x \n",RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_13));
	printk("rg_hsgmii_pcs_ctrol_6 = %x \n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_6));
	printk("sgmii_reg_an_4 = %x \n",RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_4));
	printk("rg_usxgmii_an_control_7 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_7));
	printk("rg_usxgmii_an_control_6 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6));
	printk("rg_usxgmii_an_control_2 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_2));
	printk("rg_usxgmii_an_control_3 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_3));
	printk("rg_usxgmii_an_control_4 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_4));
	printk("rg_usxgmii_an_control_0 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_0));
	printk("rg_usxgmii_an_control_1 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_1));
	printk("rg_rate_adapt_ctrl_11 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11));
	printk("sgmii_reg_an0 = %x \n",RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0));
	printk("sgmii_reg_an0 = %x \n",RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an0));
	printk("rg_pcs_ctrol_1 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_pcs_ctrol_1));
	printk("rg_vendor_define116 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_vendor_define116));
	printk("rg_hsgmii_pcs_ctrol_1 = %x \n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1));
	printk("rg_hsgmii_pcs_ctrol_1 = %x \n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_ctrol_1));
	printk("rg_rate_adapt_ctrl_6 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_6));
	printk("rg_rate_adapt_ctrl_8 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_8));
	printk("rg_rate_adapt_ctrl_8 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_8));
	printk("rg_an_sgmii_mode_force = %x \n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_an_sgmii_mode_force));
	printk("rg_rate_adapt_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1));
	printk("rg_rate_adapt_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1));
	printk("rg_rate_adapt_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1));
	printk("rg_user_define_xgmii_data_lsb = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_user_define_xgmii_data_lsb));
	printk("rg_user_define_xgmii_control = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_user_define_xgmii_control));
	printk("rg_user_define_sel = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_user_define_sel));
	printk("rg_usxgmii_an_control_6 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6));
	printk("XPON_INT_EN_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_EN_3));
	printk("SS_RX_SIGDET_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_SIGDET_1));
	printk("RX_RESET_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_1));
	printk("XPON_INT_STA_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _XPON_INT_STA_3));
	printk("rg_hsgmii_mode_interrupt = %x \n",RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_mode_interrupt));
	printk("rg_rate_adapt_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1));
	printk("rg_rate_adapt_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1));
	printk("rg_rate_adapt_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_1));
	printk("xfi_pcs_int_sta_2 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_2));
	printk("xfi_pcs_int_sta_3 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_3));
	printk("xfi_pcs_int_sta_4 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _xfi_pcs_int_sta_4));
	printk("rg_xfi_pcs_int_ctrl_0 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_0));
	printk("rg_xfi_pcs_int_ctrl_1 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_1));
	printk("rg_xfi_pcs_int_ctrl_2 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_2));
	printk("rg_xfi_pcs_int_ctrl_3 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_3));
	printk("rg_xfi_pcs_int_ctrl_4 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4));
	printk("rg_xfi_pcs_int_ctrl_4 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4));
	printk("rg_xfi_pcs_int_ctrl_4 = %x \n",RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_xfi_pcs_int_ctrl_4));
	printk("RX_EYE_TOP_EYECNT_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_0));
	printk("RX_EYE_TOP_EYEINDEX_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_0));
	printk("RX_EYE_TOP_EYEINDEX_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_1));
	printk("RX_EYE_TOP_EYEINDEX_CTRL_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_2));
	printk("RX_EYE_TOP_EYEINDEX_CTRL_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEINDEX_CTRL_3));
	printk("RX_EYE_TOP_EYEOPENING_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEOPENING_CTRL_0));
	printk("RX_EYE_TOP_EYEOPENING_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYEOPENING_CTRL_1));
	printk("PHY_EQ_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_1));
	printk("PHY_EQ_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_1));
	printk("rg_force_da_pxp_cdr_pr_fll_cor = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_fll_cor));
	printk("PHY_EQ_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _PHY_EQ_CTRL_0));
	printk("SS_RX_PI_CAL = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_PI_CAL));
	printk("RX_RESET_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_RESET_0));
	printk("RX_DISB_MODE_6 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_6));
	printk("RX_FORCE_MODE_7 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_7));
	printk("RX_DISB_MODE_5 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_5));
	printk("RX_FORCE_MODE_6 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_6));
	printk("RX_CTRL_SEQUENCE_DISB_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_DISB_CTRL_0));
	printk("RX_CTRL_SEQUENCE_FORCE_CTRL_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_CTRL_SEQUENCE_FORCE_CTRL_0));
	printk("RX_DISB_MODE_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_3));
	printk("RX_FORCE_MODE_3 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_3));
	printk("SS_RX_FLL_6 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_6));
	printk("RX_DEBUG_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0));
	printk("RX_DISB_MODE_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_0));
	printk("RX_FORCE_MODE_0 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_FORCE_MODE_0));
	printk("RX_DISB_MODE_2 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_2));
	printk("RX_EYE_TOP_EYECNT_CTRL_1 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_EYE_TOP_EYECNT_CTRL_1));
	printk("RX_DISB_MODE_7 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_7));
	printk("RX_DISB_MODE_7 = %x \n",RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DISB_MODE_7));
	printk("rg_rate_adapt_ctrl_11 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_11));	
	printk("rg_rate_adapt_ctrl_2 = %x \n",RG_R_PL(_pxSGMII->ra_base,SGMII_AN_BASE_OFFSET,(RgAddr) _rg_rate_adapt_ctrl_2));
}	
	
#endif

#ifndef AIR_XPON_DBG_FUNCTION
#define AIR_XPON_DBG_FUNCTION

#include <asm/delay.h>


inline static void RX_OSCAL_READ(volatile xsgmii_base * _pxSGMII){
	rg_type_t(HAL_RX_DEBUG_0) RX_DEBUG_0;
    rg_type_t(HAL_RX_TORGS_DEBUG_2) RX_TORGS_DEBUG_2;
    rg_type_t(HAL_RX_TORGS_DEBUG_0) RX_TORGS_DEBUG_0;
    rg_type_t(HAL_RX_TORGS_DEBUG_1) RX_TORGS_DEBUG_1;
    rg_type_t(HAL_RGS_PXP_RX_OSCAL_FE_VOS) RGS_PXP_RX_OSCAL_FE_VOS;
	rg_type_t(HAL_ADD_RO_RX2ANA_2) ADD_RO_RX2ANA_2;
	
	u8 ro_pi_cal_data_out = 0;
	u8 ro_dac_do = 0;
	u8 ro_dac_d1 = 0;
	u8 ro_dac_eo = 0;
	u8 ro_dac_e1 = 0;
	u8 ro_dac_eye = 0;
	u8 rgs_pxp_rx_oscal_fe_vos = 0;
	u8 ro_da_xpon_rx_sigdet_os = 0;

    RX_DEBUG_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x1;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);
	udelay(10);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);

    RX_TORGS_DEBUG_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_TORGS_DEBUG_2);
    ro_pi_cal_data_out = RX_TORGS_DEBUG_2.hal.ro_pi_cal_data_out;

    RX_TORGS_DEBUG_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_TORGS_DEBUG_0);
    ro_dac_do = RX_TORGS_DEBUG_0.hal.ro_dac_do;
    ro_dac_d1 = RX_TORGS_DEBUG_0.hal.ro_dac_d1;
    ro_dac_eo = RX_TORGS_DEBUG_0.hal.ro_dac_eo;
    ro_dac_e1 = RX_TORGS_DEBUG_0.hal.ro_dac_e1;

    RX_TORGS_DEBUG_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_TORGS_DEBUG_1);
    ro_dac_eye = RX_TORGS_DEBUG_1.hal.ro_dac_eye;

	RGS_PXP_RX_OSCAL_FE_VOS.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RGS_PXP_RX_OSCAL_FE_VOS);
	rgs_pxp_rx_oscal_fe_vos = RGS_PXP_RX_OSCAL_FE_VOS.hal.rgs_pxp_rx_oscal_fe_vos;

    ADD_RO_RX2ANA_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_RO_RX2ANA_2);
    ro_da_xpon_rx_sigdet_os = ADD_RO_RX2ANA_2.hal.ro_da_xpon_rx_sigdet_os;	

	printk("ro_pi_cal_data_out = 0x%x\n",ro_pi_cal_data_out);
	printk("ro_dac_do = 0x%x\n",ro_dac_do);
	printk("ro_dac_d1 = 0x%x\n",ro_dac_d1);
	printk("ro_dac_eo = 0x%x\n",ro_dac_eo);
	printk("ro_dac_e1 = 0x%x\n",ro_dac_e1);
	printk("ro_dac_eye = 0x%x\n",ro_dac_eye);
	printk("rgs_pxp_rx_oscal_fe_vos = 0x%x\n",rgs_pxp_rx_oscal_fe_vos);
	printk("ro_da_xpon_rx_sigdet_os = 0x%x\n",ro_da_xpon_rx_sigdet_os);
}

inline static void xSGMII_RX_OSCAL_Read_and_Sync_Test(volatile xsgmii_base * _pxSGMII, u8 xsgmii, u8 flag){
	u32 sync[100]={};
	u32 an[100]={};
	u8 sync_cnt = 0;
	u8 i = 0;
	printk("RX_OSCAL_Result_Read\n");
	
	RX_OSCAL_READ(_pxSGMII);	

	for (i =0;i<100;i++)
	{
		if(xsgmii==USXGMII)
		{
			sync[i] = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
			if (sync[i] == 0x100d) sync_cnt+=1;
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x01);
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x00);
			an[i] = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
			udelay(10);
		}
		else
		{
			sync[i] = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_state_2);
			if (((sync[i]>>5)&1) == 1) sync_cnt+=1;
			an[i] = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_5);
			udelay(10);
		}
	}
	printk("\nSync = %d in 100 rounds\n\n",sync_cnt);

	if (flag == 1)
	{
		for (i =0;i<100;i++)
		{
			printk("Round %d : 0x%x, AN= 0x%x\n",i+1,sync[i],an[i]);
		}
	}
}

inline static void xSGMII_Dbg_Cal2(volatile xsgmii_base * _pxSGMII, u8 xsgmii){
    rg_type_t(HAL_RGS_PXP_JCPLL_KBAND_CODE) RGS_PXP_JCPLL_KBAND_CODE;
    rg_type_t(HAL_RGS_PXP_TXPLL_KBAND_CODE) RGS_PXP_TXPLL_KBAND_CODE;
    rg_type_t(HAL_rg_usxgmii_an_control_6) rg_usxgmii_an_control_6;
    rg_type_t(HAL_ADD_DIG_RESERVE_0) ADD_DIG_RESERVE_0;
    rg_type_t(HAL_ADD_DIG_RO_RESERVE_2) ADD_DIG_RO_RESERVE_2;
    rg_type_t(HAL_SS_RX_FLL_6) SS_RX_FLL_6;
    rg_type_t(HAL_RX_DEBUG_0) RX_DEBUG_0;
    rg_type_t(HAL_ADD_LCPLL_RO_1) ADD_LCPLL_RO_1;
    rg_type_t(HAL_RX_TORGS_DEBUG_12) RX_TORGS_DEBUG_12;
    rg_type_t(HAL_SS_RX_FLL_9) SS_RX_FLL_9;
    rg_type_t(HAL_SS_RX_FLL_a) SS_RX_FLL_a;
    rg_type_t(HAL_RO_RX_FREQDET) RO_RX_FREQDET;
	
	rg_type_t(HAL_msg_rx_sts_15) _msg_rx_sts_15;
	//rg_type_t(HAL_ro_usxgmii_an_stats_0)ro_usxgmii_an_stats_0;
	//RGDATA_t rg;

	//u8 jc,tx,pcs_rdy,rx_rdy1,rx_os_rdy,rx_injosc_rdy,ad_pxp_cdr_lpf_lck2data,fblock,ad_pxp_rx_sigdet_out;
	u16 sync = 0;//,ad_pxp_cdr_pr_idac,ro_idacf,ro_fll_idac,ro_da_idacf;
	u32 ANability = 0;//,probe1,ad_pxp_cdr_lpf_snapshotvalue,probe3,probe4;
	
	switch (xsgmii)
	{
		case USXGMII:			
			sync = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
			//RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c,0x1);
			//RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c,0x0);
			
			rg_usxgmii_an_control_6.dat.value =RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6);
			rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 0x1;
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
			rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 0x0;
			RG_W_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
	
			ANability = RG_R_PL(_pxSGMII->pcs1_base,USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
			break;
		case HSGMII:	
		case SGMII:
			sync = RG_R_PL(_pxSGMII->pcs2_base,USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_state_2);
			_msg_rx_sts_15.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base,USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) msg_rx_sts_15);
			//printk("link status %x,link spd %x\n",_msg_rx_sts_15.hal.ro_lnk_sts_p0,_msg_rx_sts_15.hal.ro_speed_sts_p0);
			
			//ANability = _msg_rx_sts_15.hal.ro_speed_sts_p0;
			ANability = RG_R_PL(_pxSGMII->an_base,SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_5);
			break;	
	}
	printk("pcs---------------------------------------------\n");
	printk("sync 0x%x\n",sync);
	printk("AN ability 0x%x\n",ANability);

    RGS_PXP_JCPLL_KBAND_CODE.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RGS_PXP_JCPLL_KBAND_CODE);
    RGS_PXP_TXPLL_KBAND_CODE.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RGS_PXP_TXPLL_KBAND_CODE);
	printk("pll---------------------------------------------\n");
	printk("load band 0x%x, 0x%x\n",RGS_PXP_JCPLL_KBAND_CODE.hal.rgs_pxp_jcpll_kband_code,RGS_PXP_TXPLL_KBAND_CODE.hal.rgs_pxp_txpll_kband_code);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= (0xd << 16);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RO_RESERVE_2);
    //pcs_rdy = ;
    SS_RX_FLL_6.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_6);
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_1_latch_en = 0x0;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_2_latch_en = 0x0;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_3_latch_en = 0x0;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_4_latch_en = 0x0;
	RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_6,SS_RX_FLL_6.dat.value);
	udelay(100);
	SS_RX_FLL_6.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_6);
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_1_latch_en = 0x1;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_2_latch_en = 0x1;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_3_latch_en = 0x1;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_4_latch_en = 0x1;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_6,SS_RX_FLL_6.dat.value);
    RX_DEBUG_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x1;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);
	udelay(100);
    RX_DEBUG_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);
    ADD_LCPLL_RO_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_LCPLL_RO_1);
    RX_TORGS_DEBUG_12.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RX_TORGS_DEBUG_12);
	printk("rx----------------------------------------------\n");
	printk("pcs_rdy=  0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 5) & 0x1);
	printk("rx rdy=  0x%x\n",(ADD_LCPLL_RO_1.hal.ro_rx_sequence >> 0) & 0x1);
	printk("rx_os_rdy=  0x%x\n",(ADD_LCPLL_RO_1.hal.ro_rx_sequence >> 2) & 0x1);
	printk("rx_injosc_rdy=  0x%x\n",RX_TORGS_DEBUG_12.hal.ro_injosc_rdy);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= (0x1 << 16);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("cdr cal---------------------------------------------\n");
	printk("probe1 = 0x%x\n",ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2);
	printk("ad_pxp_cdr_pr_idac = 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 19) & 0x1fff);
	printk("fll ad_pxp_cdr_lpf_snapshotvalue = 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 0) & 0x7ffff);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("ad_pxp_cdr_lpf_lck2data 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 2) & 0x1);

    SS_RX_FLL_9.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_9);
    SS_RX_FLL_a.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_RX_FLL_a);
    RO_RX_FREQDET.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _RO_RX_FREQDET);
	printk("ro_idacf 0x%x\n",SS_RX_FLL_9.hal.ro_idacf);
	printk("ro_fll_idac 0x%x\n",SS_RX_FLL_9.hal.ro_fll_idac);
	printk("ro_da_idacf 0x%x\n",SS_RX_FLL_a.hal.ro_da_idac);
	printk("fblock 0x%x\n",RO_RX_FREQDET.hal.ro_fbck_lock);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= (0x3 << 16);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("FE TOP---------------------------------------------\n");
	printk("probe3 = 0x%x\n",ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2);
	printk("ad_pxp_rx_sigdet_out = 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 8) & 0x1);

    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= (0x4 << 16);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);

    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("probe4 = 0x%x\n",ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2);
}

inline static void xSGMII_R2T(volatile xsgmii_base * _pxSGMII, u8 xsgmii, u8 delay){
    //rg_type_t(HAL_rg_force_da_pxp_cdr_lpf_lck2data) rg_force_da_pxp_cdr_lpf_lck2data;
    //rg_type_t(HAL_BISTCTL_CONTROL) BISTCTL_CONTROL;
    rg_type_t(HAL_SS_LCPLL_TDC_PCW_1) SS_LCPLL_TDC_PCW_1;
    rg_type_t(HAL_SS_LCPLL_TDC_PCW_2) SS_LCPLL_TDC_PCW_2;
    rg_type_t(HAL_RG_PXP_TXPLL_SDM_DI_EN) RG_PXP_TXPLL_SDM_DI_EN;
    rg_type_t(HAL_RG_PXP_TXPLL_SDM_ORD) RG_PXP_TXPLL_SDM_ORD;
    rg_type_t(HAL_RG_PXP_TXPLL_KBAND_KS) RG_PXP_TXPLL_KBAND_KS;
    rg_type_t(HAL_RG_PXP_TXPLL_TCL_KBAND_VREF) RG_PXP_TXPLL_TCL_KBAND_VREF;
    rg_type_t(HAL_RG_PXP_TDC_TXCK_SEL) RG_PXP_TDC_TXCK_SEL;
    rg_type_t(HAL_RG_PXP_RX_PHYCK_DIV) RG_PXP_RX_PHYCK_DIV;
    //rg_type_t(HAL_RG_PXP_TX_MULTLANE_EN) RG_PXP_TX_MULTLANE_EN;
	rg_type_t(HAL_RG_PXP_PLL_MONCLK_SEL) RG_PXP_PLL_MONCLK_SEL;
    rg_type_t(HAL_rg_force_da_pxp_cdr_pr_idac) rg_force_da_pxp_cdr_pr_idac;
    rg_type_t(HAL_SS_LCPLL_TDC_FLT_1) SS_LCPLL_TDC_FLT_1;
    rg_type_t(HAL_SS_LCPLL_TDC_FLT_3) SS_LCPLL_TDC_FLT_3;
    rg_type_t(HAL_SS_LCPLL_TDC_FLT_5) SS_LCPLL_TDC_FLT_5;
    rg_type_t(HAL_SS_LCPLL_TDC_PW_4) SS_LCPLL_TDC_PW_4;
	rg_type_t(HAL_SS_LCPLL_TDC_PW_0) SS_LCPLL_TDC_PW_0;
	rg_type_t(HAL_ADD_XPON_MODE_1) ADD_XPON_MODE_1;
	
	u8 i,j=0;
	
	// turn it off at the beginning ***
    ADD_XPON_MODE_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_XPON_MODE_1);
    ADD_XPON_MODE_1.hal.rg_r2t_fifo_en = 0x0;
    ADD_XPON_MODE_1.hal.rg_r2t_mode = 0x0;
    ADD_XPON_MODE_1.hal.rg_tx_bist_gen_en = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_XPON_MODE_1,ADD_XPON_MODE_1.dat.value);
	
    SS_LCPLL_TDC_PW_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0);
    SS_LCPLL_TDC_PW_0.hal.rg_lcpll_tdc_dig_pwdb = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0,SS_LCPLL_TDC_PW_0.dat.value);
	// turn it off at the beginning ***
	
    //rg_force_da_pxp_cdr_lpf_lck2data.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data);
    //rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_lck2data = 0x1;
    //rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_da_pxp_cdr_lpf_lck2data = 0x1;
    //RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data,rg_force_da_pxp_cdr_lpf_lck2data.dat.value);

    //BISTCTL_CONTROL.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _BISTCTL_CONTROL);
    //BISTCTL_CONTROL.hal.rg_bistctl_pat_rx_check_en = 0x0;
    //RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _BISTCTL_CONTROL,BISTCTL_CONTROL.dat.value);

	SS_LCPLL_TDC_PCW_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_1);
    SS_LCPLL_TDC_PCW_2.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_2);
	
	if(xsgmii == USXGMII)
	{
		SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x10800000;
		SS_LCPLL_TDC_PCW_2.hal.rg_lcpll_pon_hrdds_pcw_ncpo_epon = 0x10800000;
	}
	else if (xsgmii == HSGMII)
	{
		SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x14000000;
		SS_LCPLL_TDC_PCW_2.hal.rg_lcpll_pon_hrdds_pcw_ncpo_epon = 0x14000000;
	}
	else  // SGMII
	{
		SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x10000000;
		SS_LCPLL_TDC_PCW_2.hal.rg_lcpll_pon_hrdds_pcw_ncpo_epon = 0x10000000;
	}
	
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_1,SS_LCPLL_TDC_PCW_1.dat.value);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_2,SS_LCPLL_TDC_PCW_2.dat.value);

    RG_PXP_TXPLL_SDM_DI_EN.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_EN);
    RG_PXP_TXPLL_SDM_DI_EN.hal.rg_pxp_txpll_sdm_ifm = 0x1;
    RG_PXP_TXPLL_SDM_DI_EN.hal.rg_pxp_txpll_sdm_di_en = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_EN,RG_PXP_TXPLL_SDM_DI_EN.dat.value);

    RG_PXP_TXPLL_SDM_ORD.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD);
    RG_PXP_TXPLL_SDM_ORD.hal.rg_pxp_txpll_sdm_hren = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_ORD,RG_PXP_TXPLL_SDM_ORD.dat.value);

    RG_PXP_TXPLL_KBAND_KS.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS);
    RG_PXP_TXPLL_KBAND_KS.hal.rg_pxp_txpll_postdiv_en = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_KBAND_KS,RG_PXP_TXPLL_KBAND_KS.dat.value);
	
	if(xsgmii == HSGMII)
	{
		RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_KBAND_VREF);
		RG_PXP_TXPLL_TCL_KBAND_VREF.hal.rg_pxp_txpll_postdiv_d256_en = 0x1;
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_TCL_KBAND_VREF,RG_PXP_TXPLL_TCL_KBAND_VREF.dat.value);
	}

    RG_PXP_TDC_TXCK_SEL.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TDC_TXCK_SEL);
    RG_PXP_TDC_TXCK_SEL.hal.rg_pxp_tdc_rxck_sel = 0x0;
    RG_PXP_TDC_TXCK_SEL.hal.rg_pxp_tdc_ft_ck_en = 0x0;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TDC_TXCK_SEL,RG_PXP_TDC_TXCK_SEL.dat.value);

    RG_PXP_RX_PHYCK_DIV.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV);
    RG_PXP_RX_PHYCK_DIV.hal.rg_pxp_rx_tdc_ck_sel = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX_PHYCK_DIV,RG_PXP_RX_PHYCK_DIV.dat.value);

    //RG_PXP_TX_MULTLANE_EN.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX_MULTLANE_EN);
    //RG_PXP_TX_MULTLANE_EN.hal.rg_pxp_tx_tdc_ck_sel = 0x1;
    //RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX_MULTLANE_EN,RG_PXP_TX_MULTLANE_EN.dat.value);
	
    RG_PXP_PLL_MONCLK_SEL.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_PLL_MONCLK_SEL);
    RG_PXP_PLL_MONCLK_SEL.hal.rg_pxp_tdc_autoen = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_PLL_MONCLK_SEL,RG_PXP_PLL_MONCLK_SEL.dat.value);

    rg_force_da_pxp_cdr_pr_idac.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac);
    rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_txpll_sdm_pcw = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);

    SS_LCPLL_TDC_FLT_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1);
    SS_LCPLL_TDC_FLT_1.hal.rg_lcpll_a_tdc &= ~(0x7 << 0);
    SS_LCPLL_TDC_FLT_1.hal.rg_lcpll_a_tdc |= (0x5 << 0);
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1,SS_LCPLL_TDC_FLT_1.dat.value);

    SS_LCPLL_TDC_FLT_3.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_3);
    SS_LCPLL_TDC_FLT_3.hal.rg_lcpll_ncpo_shift = 0x1;
    SS_LCPLL_TDC_FLT_3.hal.rg_lcpll_ncpo_load = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_3,SS_LCPLL_TDC_FLT_3.dat.value);

    SS_LCPLL_TDC_FLT_5.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_5);
    SS_LCPLL_TDC_FLT_5.hal.rg_lcpll_tdc_autopw_ncpo = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_5,SS_LCPLL_TDC_FLT_5.dat.value);
	
    SS_LCPLL_TDC_PW_4.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_4);
    SS_LCPLL_TDC_PW_4.hal.rg_lcpll_tdc_en = 0x1;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_4,SS_LCPLL_TDC_PW_4.dat.value);

    SS_LCPLL_TDC_FLT_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1);
    SS_LCPLL_TDC_FLT_1.hal.rg_lcpll_gpon_sel = 0x1;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1,SS_LCPLL_TDC_FLT_1.dat.value);
	
	//printk("R2T delay sec = %d ms\n",delay*10);
	for(i=0;i<delay;i++)
	{
		for(j=0;j<10;j++)
			udelay(1000);    // For Lane1 HSGMII
	}
	
    SS_LCPLL_TDC_PW_0.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0);
    SS_LCPLL_TDC_PW_0.hal.rg_lcpll_tdc_dig_pwdb = 0x1;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0,SS_LCPLL_TDC_PW_0.dat.value);
	
	udelay(1000);
	
    ADD_XPON_MODE_1.dat.value =RG_R_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_XPON_MODE_1);
    ADD_XPON_MODE_1.hal.rg_r2t_fifo_en = 0x1;
    ADD_XPON_MODE_1.hal.rg_r2t_mode = 0x1;
    ADD_XPON_MODE_1.hal.rg_tx_bist_gen_en = 0x0;
    RG_W_PL(_pxSGMII->pma_base,PMA_BASE_OFFSET,(RgAddr) _ADD_XPON_MODE_1,ADD_XPON_MODE_1.dat.value);
}
#endif

