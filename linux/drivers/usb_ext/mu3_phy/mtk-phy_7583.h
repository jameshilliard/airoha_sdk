#ifndef __MTK_PHY_NEW_H
#define __MTK_PHY_NEW_H

/* include system library */
#include <linux/gfp.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/delay.h>

//#define CONFIG_U3D_HAL_SUPPORT
#ifdef CONFIG_U3D_HAL_SUPPORT
#include "mu3d_hal_hw.h"
#endif
#ifdef CONFIG_U3D_HAL_SUPPORT
#define REF_CK U3D_PHY_REF_CK
#else
#define REF_CK 20
#endif

/* CONSTANT DEFINE */
#define U2_SR_COEF                      (28)
#define HSTX_SRCTRL_MEASURE             (0x5)

//AN7583 power up/down
#define RG_c60802_gpio_ctlc_ADDR        0x080c
#define RG_c60802_gpio_ctlc_MASK        0xA0000000
#define RG_c60802_gpio_ctlc_OFST        0x0

//AN7583 USB2.0 init
#define RG_USB20_BC11_SW_EN_ADDR        0x0318
#define RG_USBPHYACR4_ADDR              0x0310
#define RG_USBPHYACR6_ADDR              0x0318

#define RG_USB20_BC11_SW_MASK           (0x01) 
#define RG_USB20_FS_CR_MASK             (0x07)
#define RG_USB20_FS_SR_MASK             (0x07)
#define RG_USB20_SQTH_MASK              (0xF)
#define RG_USB20_DISCTH_MASK            (0xF)

#define RG_USB20_BC11_SW_EN_OFST        (23)
#define RG_USB20_FS_CR_OFST             (0x08)
#define RG_USB20_FS_SR_OFST             (0x00)
#define RG_USB20_SQTH_OFST              (0)
#define RG_USB20_DISCTH_OFST            (4)

//AN7583 USB3.0 init 50Mhz XTAL
#define RG_QP_EQ_RX500M_CK_SEL_MASK     (0x01) //12
#define qp_pcie_usb_system_mask         (0x01) //26
#define qp_roc_ck_en_mask               (0x01) //1
#define RG_QP_CHPEN_MASK                (0x01) //1
#define RG_QP_BG_DIV_MASK               (0x03) //2:3
#define RG_QP_PLL_PREDIV_MASK           (0x03) //25:26
#define qp_pll_icolp_en_intf_mask       (0x01) //2
#define multi_phy_usb5_en_mask          (0x01) //25
#define multi_phy_usb2p5_en_mask        (0x01) //26
#define multi_phy_usb_mode_en_mask      (0x01) //24

#define RG_QP_EQ_RX500M_CK_SEL_OFST     (12)
#define qp_pcie_usb_system_ofst         (26)
#define qp_roc_ck_en_ofst               (1)
#define RG_QP_CHPEN_OFST                (1)
#define RG_QP_BG_DIV_OFST               (2)
#define RG_QP_PLL_PREDIV_OFST           (25)
#define qp_pll_icolp_en_intf_ofst       (2)
#define multi_phy_usb5_en_ofst          (25)
#define multi_phy_usb2p5_en_ofst        (26)
#define multi_phy_usb_mode_en_ofst      (24)

//AN7583 USB3.0 init PLL
#define qp_pll_pck_sel_intf_mask        (0x01) //22
#define qp_pll_ir_intf_mask             (0x0f) //16:19
#define qp_pll_fbksel_intf_mask         (0x03) //12:13
#define qp_pll_kband_prediv_intf_mask   (0x03) //20:21
#define qp_pll_bc_intf_mask             (0x03) //0:1
#define qp_pll_bpa_intf_mask            (0x07) //2:4
#define qp_pll_bpb_intf_mask            (0x03) //6:7
#define qp_pll_icoiq_en_intf_mask       (0x01) //14
#define qp_pll_phy_ck_en_intf_mask      (0x01) //27
#define qp_pll_sdm_hren_intf_mask       (0x03) //3:4
#define qp_pll_sdm_ifm_intf_mask        (0x01) //30
#define qp_pll_ssc_delta_intf_mask      (0xffff) //0:15
#define qp_pll_ssc_period_intf_mask     (0xffff) //16:31
#define qp_pll_ssc_en_mask              (0x01) //30
#define lcpll_pon_hrdds_pcw_ncpo_gpon_mask  (0x7fffffff) //0:30
#define ncpo_ana_msb_mask               (0x03) //16:17
#define lcpll_ncpo_value_mask           (0x7fffffff) //0:30

#define qp_pll_pck_sel_intf_ofst        (22) //22
#define qp_pll_ir_intf_ofst             (16) //16:19
#define qp_pll_fbksel_intf_ofst         (12) //12:13
#define qp_pll_kband_prediv_intf_ofst   (20) //20:21
#define qp_pll_bc_intf_ofst             (0) //0:1
#define qp_pll_bpa_intf_ofst            (2) //2:4
#define qp_pll_bpb_intf_ofst            (6) //6:7
#define qp_pll_icoiq_en_intf_ofst       (14) //14
#define qp_pll_phy_ck_en_intf_ofst      (27) //27
#define qp_pll_sdm_hren_intf_ofst       (3) //3:4
#define qp_pll_sdm_ifm_intf_ofst        (30) //30
#define qp_pll_ssc_delta_intf_ofst      (0) //0:15
#define qp_pll_ssc_period_intf_ofst     (16) //16:31
#define qp_pll_ssc_en_ofst              (30) //30
#define lcpll_pon_hrdds_pcw_ncpo_gpon_ofst  (0) //0:30
#define ncpo_ana_msb_ofst               (16) //16:17
#define lcpll_ncpo_value_ofst           (0) //0:30

//AN7583 USB3.0 init RX RG
#define QP_CDR_LPF_RATIO_MASK           (0x03) //4:5
#define QP_CDR_PD_10B_EN_MASK           (0x01) //11
#define QP_CDR_PR_DAC_BAND_MASK         (0x1f) //8:12
#define QP_CDR_PHYCK_RSTB_MASK          (0x01) //13
#define QP_CDR_PR_XFICK_EN_MASK         (0x01) //30
#define QP_CDR_PR_KBAND_PCIE_MODE_MASK  (0x01) //6
#define QP_CDR_PR_KBAND_DIV_MASK        (0x07) //24:26
#define QP_CDR_PR_KBAND_DIV_PCIE_MASK   (0x3f) //0:5
#define reback_p0_lck2ref_en_mask       (0x01) //26
#define lfps_finish_time_mask           (0x7ff) //21:31

#define QP_CDR_LPF_RATIO_OFST           (4) //4:5
#define QP_CDR_PD_10B_EN_OFST           (11) //11
#define QP_CDR_PR_DAC_BAND_OFST         (8) //8:12
#define QP_CDR_PHYCK_RSTB_OFST          (13) //13
#define QP_CDR_PR_XFICK_EN_OFST         (30) //30
#define QP_CDR_PR_KBAND_PCIE_MODE_OFST  (6) //6
#define QP_CDR_PR_KBAND_DIV_OFST        (24) //24:26
#define QP_CDR_PR_KBAND_DIV_PCIE_OFST   (0) //0:5
#define reback_p0_lck2ref_en_ofst       (26) //26
#define lfps_finish_time_ofst           (21) //21:31

//AN7583 USB3.0 init EQ all
#define p3_to_p0_do_eq_usb_mask         (0x01) //28
#define p2_to_p0_do_eq_usb_mask         (0x01) //27
#define p1_to_p0_do_eq_usb_mask         (0x01) //26
#define qp_pcie_usb_bypass_eq_p3_to_p0_en_mask  (0x01) //29
#define qp_pcie_usb_bypass_eq_p2_to_p0_en_mask  (0x01) //28
#define qp_pcie_usb_bypass_eq_p1_to_p0_en_mask  (0x01) //27
#define qp_reserve_7_bit7_mask          (0x01) //31
#define qp_force_sigdet_5g_mask         (0x01) //19
#define qp_lck2data_dly_time_0_7_mask   (0xff) //16:23

#define p3_to_p0_do_eq_usb_ofst         (28) //28
#define p2_to_p0_do_eq_usb_ofst         (27) //27
#define p1_to_p0_do_eq_usb_ofst         (26) //26
#define qp_pcie_usb_bypass_eq_p3_to_p0_en_ofst  (29) //29
#define qp_pcie_usb_bypass_eq_p2_to_p0_en_ofst  (28) //28
#define qp_pcie_usb_bypass_eq_p1_to_p0_en_ofst  (27) //27
#define qp_reserve_7_bit7_ofst          (31) //31
#define qp_force_sigdet_5g_ofst         (19) //19
#define qp_lck2data_dly_time_0_7_ofst   (16) //16:23

//AN7583 USB3.0 init PI CAL
#define qp_rx_pi_cal_en_h_dly_mask      (0xff) //0:7
#define QP_PLL_SSC_PHASE_INI_MASK       (0x01) //3
#define QP_PLL_SSC_TRI_EN_MASK          (0x01) //4
#define tx_data_rate_sel_mask           (0x07) //28:30
#define QP_CDR_PD_EDGE_DIS_MASK         (0x01) //10

#define qp_rx_pi_cal_en_h_dly_ofst      (0) //0:7
#define QP_PLL_SSC_PHASE_INI_OFST       (3) //3
#define QP_PLL_SSC_TRI_EN_OFST          (4) //4
#define tx_data_rate_sel_ofst           (28) //28:30
#define QP_CDR_PD_EDGE_DIS_OFST         (10) //10

//AN7583 USB3.0 init Common Setting
#define us_ck_div_sel_mask              (0x01) //24
#define ns_ck_div_sel_mask              (0x01) //25
#define rxdet_en_window_mask            (0x3f) //4:9
#define rxdet_rd_wait_timer_mask        (0x0f) //12:15
#define QP_TX_RXDET_METHOD_MASK         (0x01) //25
#define QP_TX_DMEDGEGEN_EN_MASK         (0x01) //27
#define pcie_mode_pll_auto_en_mask      (0x01) //0
#define pcie_mode_pll_auto_on_en_mask   (0x01) //1
#define pcie_mode_pll_auto_off_en_mask  (0x01) //2
#define RG_QP_TX_RESERVE_8_MASK         (0x01) //24
#define phya_auto_init_mask             (0x01) //0

#define us_ck_div_sel_ofst              (24) //24
#define ns_ck_div_sel_ofst              (25) //25
#define rxdet_en_window_ofst            (4) //4:9
#define rxdet_rd_wait_timer_ofst        (12) //12:15
#define QP_TX_RXDET_METHOD_OFST         (25) //25
#define QP_TX_DMEDGEGEN_EN_OFST         (27) //27
#define pcie_mode_pll_auto_en_ofst      (0) //0
#define pcie_mode_pll_auto_on_en_ofst   (1) //1
#define pcie_mode_pll_auto_off_en_ofst  (2) //2
#define RG_QP_TX_RESERVE_8_OFST         (24) //24
#define phya_auto_init_ofst             (0) //0

//AN7583 USB3.0 init RX Speed up
#define rg_fredet_chk_cycle_mask             (0xFFFFF) //10:29
#define rg_fredet_golden_cycle_mask          (0xFFFFF) //0:19
#define rg_fredet_tolerate_cycle_mask        (0xFFFFF) //0:19
#define rg_qp_rx_eq_en_h_dly_mask            (0x1FFF) //16:28
#define rg_qp_eq_en_dly_mask                 (0x1FFF) //0:12

#define rg_fredet_chk_cycle_ofst             (10) //10:29
#define rg_fredet_golden_cycle_ofst          (0) //0:19
#define rg_fredet_tolerate_cycle_ofst        (0) //0:19
#define rg_qp_rx_eq_en_h_dly_ofst            (16) //16:28
#define rg_qp_eq_en_dly_ofst                 (0) //0:12

//AN7583 USB3.0 L2D -> EQ delay timing
#define rg_qp_eq_en_dly_short_mask           (0x1FFF) //13:25
#define rg_qp_rx_eq_en_h_dly_short_mask      (0x1FFF) //0:12

#define rg_qp_eq_en_dly_short_ofst           (13)    //13
#define rg_qp_rx_eq_en_h_dly_short_ofst      (0)    //0:12

/*AN7583 RG location used for u2 slew rate calibration*/
#define RG_USB20_HSTX_SRCAL_EN_ADDR     0x0314
#define RG_USB20_HSTX_SRCTRL_ADDR       0x0314
#define RG_FRCK_EN_ADDR                 0x0110
#define RG_CYCLECNT_ADDR                0x0100
#define RG_FREQDET_EN_ADDR              0x0100
#define RG_MONCLK_SEL_ADDR              0x0100
#define FM_OUT_ADDR                     0x010c

//AN7583 USB init
#define RG_USB20_INTR_EN_ADDR           0x0300
#define RG_SSUSB_IEXT_INTR_CTRL_ADDR    0x0b00
#define RG_USB20_HS_100U_U3_EN_ADDR     0x0314
#define RG_USB20_INTR_CAL_ADDR          0x0304
#define RG_SSUSB_INTR_EN_ADDR           0x0b00
#define RG_SSUSB_LN0_TX_IMP_SEL_ADDR    0x0910
#define RG_SSUSB_LN0_RX_IMP_SEL_ADDR    0x0914

//AN7583 K slew rate
#define RG_USB20_HSTX_SRCAL_EN          (0x1) //15:15
#define RG_USB20_HSTX_SRCTRL            (0x7) //14:12
#define RG_MONCLK_SEL                   (0x3) //27:26

#define RG_USB20_HSTX_SRCAL_EN_OFST     (15)
#define RG_USB20_HSTX_SRCTRL_OFST       (12)
#define RG_MONCLK_SEL_OFST              (26)

//20MHz PLL setting
#define rg_SCU_Xtal_SEL                 0x254
#define RG_FM_MODE                      (0x1) //25:25
#define RG_FREQDET_EN                   (0x1) //24:24
#define RG_CYCLECNT                     (0xffffff) //23:0
#define RG_FRCK_EN                      (0x1) //8:8
#define RG_USB20_INTR_EN                (0x1) //5:5
#define RG_SSUSB_IEXT_INTR_CTRL         (0x3f) //15:10
#define RG_USB20_HS_100U_U3_EN          (0x1) //11:11
#define RG_USB20_INTR_CAL               (0x1f) //23:19
#define RG_SSUSB_INTR_EN                (0x1) //26:26
#define RG_SSUSB_LN0_TX_IMP_SEL         (0x1f) //28:24
#define RG_SSUSB_LN0_RX_IMP_SEL         (0x1f) //28:24
#define RG_SSUSB_IDEM_3p5db             (0x3f) //21:16
#define RG_SSUSB_FORCE_IDEM_3p5db       (0x1) //22:22

/*offset*/
#define RG_FM_MODE_OFST                 (25)
#define RG_FREQDET_EN_OFST              (24)
#define RG_CYCLECNT_OFST                (0)
#define RG_FRCK_EN_OFST                 (8)
#define RG_USB20_INTR_EN_OFST           (5)
#define RG_SSUSB_IEXT_INTR_CTRL_OFST    (10)
#define RG_USB20_HS_100U_U3_EN_OFST     (11)
#define RG_USB20_INTR_CAL_OFST          (19)
#define RG_SSUSB_INTR_EN_OFST           (26)
#define RG_SSUSB_LN0_TX_IMP_SEL_OFST    (24)
#define RG_SSUSB_LN0_RX_IMP_SEL_OFST    (24)
#define RG_SSUSB_IDEM_3p5db_OFST        (16) 
#define RG_SSUSB_FORCE_IDEM_3p5db_OFST  (22) 

//Read AN7583 EFUSE
#define	SerDes_USB_efuse_valid_LSB                                  34
#define	RG_USB20_P0_INTR_CTRL_LSB /*[4:0]*/                         89
#define	RG_USB20_P1_INTR_CTRL_LSB /*[4:0]*/                         94
#define	DA_QP_SSUSB_TX_TERM_SEL_LSB /*[1:0]*/                       47
#define	DA_QP_SSUSB_RX_IMP_SEL_LSB /*[4:0]*/                        49

#endif
