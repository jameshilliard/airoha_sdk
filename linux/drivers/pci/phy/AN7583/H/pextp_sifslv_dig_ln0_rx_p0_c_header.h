#ifndef __pextp_sifslv_dig_ln0_rx_p0_REGS_H__
#define __pextp_sifslv_dig_ln0_rx_p0_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- pextp_sifslv_dig_ln0_rx_p0 Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_slock_bpslock : 1;
        FIELD rsv_1                     : 3;
        FIELD rg_xtp_ln_rx_slock_comcnt : 4;
        FIELD rg_xtp_ln_rx_slock_rtcomcnt : 4;
        FIELD rg_xtp_ln_rx_slock_prbs_en : 1;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_slock_prbs_berth : 8;
        FIELD rg_xtp_ln_rx_slock_retrack_dis : 1;
        FIELD rsv_25                    : 7;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_00, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_00;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_ebuf12_ebuf_srst : 1;
        FIELD rg_xtp_ln_rx_ebuf12_valid_en : 1;
        FIELD rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_rx_ebuf12_pcie2_k_ful : 4;
        FIELD rg_xtp_ln_rx_ebuf12_pcie2_k_emp : 4;
        FIELD rg_xtp_ln_rx_ebuf12_rx_polarity_en : 1;
        FIELD rsv_13                    : 19;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_04, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_04;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_ebuf12_ebufctl : 32;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_08, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_08;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_ansid_test   : 3;
        FIELD rsv_3                     : 5;
        FIELD rg_xtp_ln_rx_rdm_prb_phsel : 1;
        FIELD rg_xtp_ln_rx_path_pplb_eiosdet_dis : 1;
        FIELD rsv_10                    : 22;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_0C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_0C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_balign_prb_phsel : 1;
        FIELD rg_xtp_ln_rx_balign_dis_pipe_ctl : 1;
        FIELD rg_xtp_ln_rx_balign_frc_eios_det : 1;
        FIELD rg_xtp_ln_rx_balign_chk_hdr : 1;
        FIELD rg_xtp_ln_rx_balign_lock_thr : 3;
        FIELD rg_xtp_ln_rx_balign_ctrl_rpls_det : 1;
        FIELD rg_xtp_ln_rx_cdr_locksel  : 1;
        FIELD rg_xtp_ln_rx_cdr_dig_stb_sel : 2;
        FIELD rg_xtp_ln_rx_prbs_inv     : 1;
        FIELD rsv_12                    : 4;
        FIELD rg_xtp_ln_rx_prbs_chk_cyc : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_10, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_10;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_ebuf3_prb_phsel : 1;
        FIELD rg_xtp_ln_rx_ebuf3_flush  : 1;
        FIELD rg_xtp_ln_rx_ebuf3_mask_2nd_skp : 1;
        FIELD rg_xtp_ln_rx_ebuf3_clr_sts : 1;
        FIELD rg_xtp_ln_rx_ebuf3_hsize_thr : 4;
        FIELD rg_xtp_ln_rx_ebuf3_wr_hsize_thr : 4;
        FIELD rg_xtp_ln_rx_ebuf3_fsm_bak : 1;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_ptc_chk_cyc  : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_14, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_14;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_prbs_prb_phsel : 1;
        FIELD rg_xtp_ln_rx_prbs_chk_cyc_en : 1;
        FIELD rsv_2                     : 2;
        FIELD rg_xtp_ln_rx_prbs_lock_thr : 4;
        FIELD rg_xtp_ln_rx_prbs_berth   : 8;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_18, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_18;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_ptc_prb_phsel : 1;
        FIELD rg_xtp_ln_rx_ptc_en       : 1;
        FIELD rg_xtp_ln_rx_ptc_chk_cyc_en : 1;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_rx_ptc_type     : 4;
        FIELD rg_xtp_ln_rx_ptc_lane_idx : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_rx_ptc_tx_preset : 4;
        FIELD rg_xtp_ln_rx_ptc_lock_thr : 4;
        FIELD rsv_20                    : 4;
        FIELD rg_xtp_ln_rx_ptc_rx_berth : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_1C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_1C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e2_goto_e1 : 1;
        FIELD rg_xtp_ln_rx_pdown_e1_goto_e0 : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_active_en : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_cken_rst_sel : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_caldone_exit : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_lck2ref_gate : 1;
        FIELD rg_xtp_ln_rx_pdown_retry_cnt_rst : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_aeq_done_sel : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_rstb_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0_rxen_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0_recal_wait : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_20, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_20;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_ckstb_cnt : 8;
        FIELD rsv_8                     : 16;
        FIELD rg_xtp_ln_rx_pdown_e0_caldone_cnt : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_24, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_24;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_track1_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0_track2_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0_aeqdis_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_28, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_28;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_cdrdis_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0s_st_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_e0_recal_cnt : 4;
        FIELD rg_xtp_ln_rx_pdown_e0s_hold : 1;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_pdown_e0_cal_cnt : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_2C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_2C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt : 8;
        FIELD rg_xtp_ln_rx_pdown_t2rlb_dig_en : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_xtp_ln_rx_pdown_e0_aeqen_wait_us : 13;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_30, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_30;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_34, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_34;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_lck2ref_cnt : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp1_cnt : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_38, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_38;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_dfetp2_cnt : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp3_cnt : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_3C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_3C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_dfetp4_cnt : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp5_cnt : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_40, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_40;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_dfetp6_cnt : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp7_cnt : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_44, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_44;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_no_response : 2;
        FIELD rg_xtp_ln_rx_aeq_re_eq    : 2;
        FIELD rg_xtp_ln_rx_aeq_rmtx_skip : 2;
        FIELD rg_xtp_ln_rx_aeq_rec_latch_sel : 1;
        FIELD rg_xtp_ln_rx_aeq_da_latch_sel : 1;
        FIELD rg_xtp_ln_rx_aeq_eqen_cnt : 8;
        FIELD rg_xtp_ln_rx_aeq_eqcoef_cnt : 8;
        FIELD rg_xtp_ln_rx_aeq_eqinvld_cnt : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_48, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_48;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_adpstrb_cnt : 8;
        FIELD rg_xtp_ln_rx_aeq_adpbase_cnt : 8;
        FIELD rg_xtp_ln_rx_aeq_adp_cnt  : 8;
        FIELD rsv_24                    : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_4C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_4C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_att : 3;
        FIELD rg_xtp_ln_rx_aeq_gen1_bypass : 1;
        FIELD rg_xtp_ln_rx_aeq_gen2_att : 3;
        FIELD rg_xtp_ln_rx_aeq_gen2_bypass : 1;
        FIELD rg_xtp_ln_rx_aeq_gen3_att : 3;
        FIELD rg_xtp_ln_rx_aeq_gen3_bypass : 1;
        FIELD rg_xtp_ln_rx_aeq_gen4_att : 3;
        FIELD rg_xtp_ln_rx_aeq_gen4_bypass : 1;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_50, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_50;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_vga : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_aeq_gen2_vga : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen3_vga : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen4_vga : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_54, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_54;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdtk_en_cnt : 8;
        FIELD rg_xtp_ln_rx_sgdtk_dur_cnt : 8;
        FIELD rg_xtp_ln_rx_sgdtk_iter_cnt : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_sgdtk_dis_cnt : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_58, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_58;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdtk_wait_cnt : 8;
        FIELD rg_xtp_ln_rx_sgdt_nbiasoff_cnt : 8;
        FIELD rg_xtp_ln_rx_sgdt_coarse2rdy_cnt : 8;
        FIELD rg_xtp_ln_rx_sgdt_off2rdy_cnt : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_5C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_5C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_acc_det_win123 : 10;
        FIELD rsv_10                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_con_det_mode : 4;
        FIELD rg_xtp_ln_rx_sgdt_acc_det_win4 : 10;
        FIELD rsv_26                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_acc_det_cnt : 4;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_60, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_60;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_e1_acccondet_sel : 2;
        FIELD rsv_2                     : 6;
        FIELD rg_xtp_ln_rx_sgdt_e2_sam_det_win : 8;
        FIELD rg_xtp_ln_rx_sgdt_e2_sam_det_cnt : 4;
        FIELD rg_xtp_ln_rx_sgdt_e2_cklatch_sel : 2;
        FIELD rg_xtp_ln_rx_sgdt_elecidle_sel : 1;
        FIELD rsv_23                    : 1;
        FIELD rg_xtp_ln_rx_sgdt_exit_coarse_sel : 2;
        FIELD rg_xtp_ln_rx_sgdt_exit_off_sel : 2;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_64, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_64;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_gen1_vth : 2;
        FIELD rsv_2                     : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen2_vth : 2;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen3_vth : 2;
        FIELD rsv_10                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen4_vth : 2;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen1_rleak : 2;
        FIELD rsv_18                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen2_rleak : 2;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen3_rleak : 2;
        FIELD rsv_26                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen4_rleak : 2;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_68, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_68;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_int1_lpfbw : 2;
        FIELD rg_xtp_ln_rx_cdr_gen2_int1_lpfbw : 2;
        FIELD rg_xtp_ln_rx_cdr_gen3_int1_lpfbw : 2;
        FIELD rg_xtp_ln_rx_cdr_gen4_int1_lpfbw : 2;
        FIELD rg_xtp_ln_rx_cdr_gen1_cfdok_th : 4;
        FIELD rg_xtp_ln_rx_cdr_gen2_cfdok_th : 4;
        FIELD rg_xtp_ln_rx_cdr_gen3_cfdok_th : 4;
        FIELD rg_xtp_ln_rx_cdr_gen4_cfdok_th : 4;
        FIELD rsv_24                    : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_6C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_6C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_rfdok_th : 8;
        FIELD rg_xtp_ln_rx_cdr_gen2_rfdok_th : 8;
        FIELD rg_xtp_ln_rx_cdr_gen3_rfdok_th : 8;
        FIELD rg_xtp_ln_rx_cdr_gen4_rfdok_th : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_70, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_70;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_rfdx2_th : 8;
        FIELD rg_xtp_ln_rx_cdr_gen2_rfdx2_th : 8;
        FIELD rg_xtp_ln_rx_cdr_gen3_rfdx2_th : 8;
        FIELD rg_xtp_ln_rx_cdr_gen4_rfdx2_th : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_74, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_74;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_cfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen2_cfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen3_cfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen4_cfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen1_rfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen2_rfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen3_rfdunit : 4;
        FIELD rg_xtp_ln_rx_cdr_gen4_rfdunit : 4;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_78, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_78;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_pdndvn : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdndvn : 3;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdndvn : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdndvn : 3;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen1_pdkdvn : 3;
        FIELD rsv_19                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdkdvn : 3;
        FIELD rsv_23                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdkdvn : 3;
        FIELD rsv_27                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdkdvn : 3;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_7C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_7C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_pdnunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdnunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdnunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdnunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen1_pdkunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdkunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdkunit : 2;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdkunit : 2;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_80, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_80;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_pdnkpc : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdnkpc : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdnkpc : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdnkpc : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_84, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_84;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_pdkkpc : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdkkpc : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdkkpc : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdkkpc : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_88, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_88;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_pdnkpf : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdnkpf : 3;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdnkpf : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdnkpf : 3;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen1_pdkkpf : 3;
        FIELD rsv_19                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen2_pdkkpf : 3;
        FIELD rsv_23                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen3_pdkkpf : 3;
        FIELD rsv_27                    : 1;
        FIELD rg_xtp_ln_rx_cdr_gen4_pdkkpf : 3;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_8C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_8C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdrk_gen1_autok_band : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_cdrk_gen2_autok_band : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_rx_cdrk_gen3_autok_band : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_cdrk_gen4_autok_band : 6;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_90, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_90;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_calib_acjtag_rxp_en : 1;
        FIELD rg_xtp_ln_rx_calib_acjtag_rxn_en : 1;
        FIELD rg_xtp_ln_rx_calib_acjtag_rxp_mode : 1;
        FIELD rg_xtp_ln_rx_calib_acjtag_rxn_mode : 1;
        FIELD rsv_4                     : 4;
        FIELD rg_xtp_ln_cdr_gen1_ipath_stb : 5;
        FIELD rg_xtp_ln_cdr_gen2_ipath_stb : 5;
        FIELD rg_xtp_ln_cdr_gen3_ipath_stb : 5;
        FIELD rg_xtp_ln_cdr_gen4_ipath_stb : 5;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_94, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_94;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_ctle : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_aeq_gen2_ctle : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen3_ctle : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen4_ctle : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_98, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_98;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1 : 9;
        FIELD rsv_9                     : 7;
        FIELD rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2 : 9;
        FIELD rsv_25                    : 3;
        FIELD rg_xtp_ln_rx_pdown_e0_aeq_done : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_cal_ok : 1;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_9C, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_9C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_gen1_hf : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen2_hf : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen3_hf : 2;
        FIELD rg_xtp_ln_rx_sgdt_gen4_hf : 2;
        FIELD rg_xtp_ln_rx_pdown_aeq_ini_latch_sel : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_rx_pdown_pp_exit_aeq_chk : 3;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_rx_pdown_aeq_adp_en : 1;
        FIELD rg_xtp_ln_rx_pdown_data_valid_en : 1;
        FIELD rsv_18                    : 2;
        FIELD rg_xtp_ln_rx_pdown_pp_exit_cal_done : 3;
        FIELD rsv_23                    : 9;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A0, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A0;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_strb_type_att : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_ctle : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_vga : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp7 : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp6 : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp5 : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp4 : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp3 : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp2 : 2;
        FIELD rg_xtp_ln_rx_aeq_strb_type_dfetp1 : 2;
        FIELD rsv_20                    : 12;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A4, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A4;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_vgaref : 8;
        FIELD rg_xtp_ln_rx_aeq_gen2_vgaref : 8;
        FIELD rg_xtp_ln_rx_aeq_gen3_vgaref : 8;
        FIELD rg_xtp_ln_rx_aeq_gen4_vgaref : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A8, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A8;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_eidle_det_win1 : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_eidle_det_win2 : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_AC, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_AC;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_eidle_det_win3 : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_pdown_eidle_det_win4 : 10;
        FIELD rsv_26                    : 4;
        FIELD rg_xtp_ln_rx_pdown_eidle_det_timer : 2;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B0, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B0;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_pdown_e0_aeqen_en_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_lck2ref_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp1_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp2_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp3_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp4_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp5_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp6_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_e0_dfetp7_dir : 1;
        FIELD rg_xtp_ln_rx_pdown_eidle_det_en : 1;
        FIELD rg_xtp_ln_rx_pdown_eidle_det_woe0s : 1;
        FIELD rg_xtp_ln_rx_sgdt_con_det_sel : 1;
        FIELD rg_xtp_ln_rx_sgdt_acc_det_cnt_ext : 4;
        FIELD rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext : 4;
        FIELD rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel : 2;
        FIELD rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext : 2;
        FIELD rg_xtp_ln_rx_sgdt_e2_cklatch_dis : 1;
        FIELD rg_xtp_ln_rx_pdown_eidle_det_vld_en : 1;
        FIELD rg_xtp_ln_rx_sgdt_e2_sam_rst_sel : 1;
        FIELD rsv_27                    : 5;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B4, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B4;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_con_det_cnt_gen1 : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_sgdt_con_det_cnt_gen2 : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B8, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B8;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_con_det_cnt_gen3 : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_sgdt_con_det_cnt_gen4 : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_BC, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_BC;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_slock_prbs_lock : 1;
        FIELD rgs_xtp_ln_rx_slock_prbs_pass : 1;
        FIELD rgs_xtp_ln_rx_slock_prbs_passth : 1;
        FIELD rsv_3                     : 1;
        FIELD rgs_xtp_ln_rx_slock_retrack : 4;
        FIELD rsv_8                     : 8;
        FIELD rgs_xtp_ln_rx_slock_prbs_errcnt : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C0, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C0;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_ebuf12_ebuf_ovf : 1;
        FIELD rgs_xtp_ln_rx_ebuf12_ebuf_udf : 1;
        FIELD rgs_xtp_ln_rx_ebuf3_fifo_full : 1;
        FIELD rgs_xtp_ln_rx_ebuf3_fifo_empty : 1;
        FIELD rsv_4                     : 12;
        FIELD rgs_xtp_ln_rx_ebuf12_ebufmsg : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C4, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C4;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_prbs_lock   : 1;
        FIELD rgs_xtp_ln_rx_prbs_pass   : 1;
        FIELD rgs_xtp_ln_rx_prbs_passth : 1;
        FIELD rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy : 1;
        FIELD rsv_4                     : 8;
        FIELD rgs_xtp_ln_rx_prbs_errcnt : 20;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C8, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C8;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_ptc_rx_lock : 1;
        FIELD rgs_xtp_ln_rx_ptc_rx_pass : 1;
        FIELD rgs_xtp_ln_rx_ptc_rx_passth : 1;
        FIELD rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy : 1;
        FIELD rsv_4                     : 8;
        FIELD rgs_xtp_ln_rx_ptc_rx_errcnt : 20;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_CC, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_CC;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_pdown_gen1_retry_cnt : 4;
        FIELD rgs_xtp_ln_rx_pdown_gen2_retry_cnt : 4;
        FIELD rgs_xtp_ln_rx_pdown_gen3_retry_cnt : 4;
        FIELD rgs_xtp_ln_rx_pdown_gen4_retry_cnt : 4;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D0, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D0;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_cdrk_gen1_autok_band : 6;
        FIELD rsv_6                     : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen1_fdlock : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen2_autok_band : 6;
        FIELD rsv_14                    : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen2_fdlock : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen3_autok_band : 6;
        FIELD rsv_22                    : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen3_fdlock : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen4_autok_band : 6;
        FIELD rsv_30                    : 1;
        FIELD rgs_xtp_ln_rx_cdrk_gen4_fdlock : 1;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D4, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D4;

typedef struct
{
    

        FIELD rgs_xtp_ln_rx_cdrk_gen1_retry_cnt : 4;
        FIELD rgs_xtp_ln_rx_cdrk_gen2_retry_cnt : 4;
        FIELD rgs_xtp_ln_rx_cdrk_gen3_retry_cnt : 4;
        FIELD rgs_xtp_ln_rx_cdrk_gen4_retry_cnt : 4;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D8, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D8;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_acc_det_win1 : 10;
        FIELD rsv_10                    : 6;
        FIELD rg_xtp_ln_rx_sgdt_acc_det_win2 : 10;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_DC, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_DC;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_acc_det_win3 : 10;
        FIELD rsv_10                    : 2;
        FIELD rg_xtp_ln_rx_afe_gen1_bwsel : 1;
        FIELD rg_xtp_ln_rx_afe_gen2_bwsel : 1;
        FIELD rg_xtp_ln_rx_afe_gen3_bwsel : 1;
        FIELD rg_xtp_ln_rx_afe_gen4_bwsel : 1;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E0, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E0;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E4, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E4;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E8, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E8;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_gen1_ctle_max : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_aeq_gen2_ctle_max : 5;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen3_ctle_max : 5;
        FIELD rsv_21                    : 3;
        FIELD rg_xtp_ln_rx_aeq_gen4_ctle_max : 5;
        FIELD rsv_29                    : 3;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_EC, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_EC;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_gen1_ctle1_csel : 4;
        FIELD rg_xtp_ln_rx_gen2_ctle1_csel : 4;
        FIELD rg_xtp_ln_rx_gen3_ctle1_csel : 4;
        FIELD rg_xtp_ln_rx_gen4_ctle1_csel : 4;
        FIELD rg_xtp_ln_rx_gen1_ctle_ccp_cdec : 2;
        FIELD rg_xtp_ln_rx_gen2_ctle_ccp_cdec : 2;
        FIELD rg_xtp_ln_rx_gen3_ctle_ccp_cdec : 2;
        FIELD rg_xtp_ln_rx_gen4_ctle_ccp_cdec : 2;
        FIELD rsv_24                    : 8;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F0, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F0;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_gen1_vga_ccp_cdec : 2;
        FIELD rsv_2                     : 2;
        FIELD rg_xtp_ln_rx_gen2_vga_ccp_cdec : 2;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_gen3_vga_ccp_cdec : 2;
        FIELD rsv_10                    : 2;
        FIELD rg_xtp_ln_rx_gen4_vga_ccp_cdec : 2;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_rx_gen1_vga_ccp_rdec : 2;
        FIELD rsv_18                    : 2;
        FIELD rg_xtp_ln_rx_gen2_vga_ccp_rdec : 2;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_gen3_vga_ccp_rdec : 2;
        FIELD rsv_26                    : 2;
        FIELD rg_xtp_ln_rx_gen4_vga_ccp_rdec : 2;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F4, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F4;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_gen1_ctle_ccp_rdec : 2;
        FIELD rg_xtp_ln_rx_gen2_ctle_ccp_rdec : 2;
        FIELD rg_xtp_ln_rx_gen3_ctle_ccp_rdec : 2;
        FIELD rg_xtp_ln_rx_gen4_ctle_ccp_rdec : 2;
        FIELD rg_xtp_ln_cdr_gen1_dessc_en : 1;
        FIELD rg_xtp_ln_cdr_gen2_dessc_en : 1;
        FIELD rg_xtp_ln_cdr_gen3_dessc_en : 1;
        FIELD rg_xtp_ln_cdr_gen4_dessc_en : 1;
        FIELD rg_xtp_ln_cdr_gen1_iir_en : 1;
        FIELD rg_xtp_ln_cdr_gen2_iir_en : 1;
        FIELD rg_xtp_ln_cdr_gen3_iir_en : 1;
        FIELD rg_xtp_ln_cdr_gen4_iir_en : 1;
        FIELD rg_xtp_ln_cdr_gen1_piclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen2_piclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen3_piclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen4_piclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen1_digclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen2_digclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen3_digclk_div : 2;
        FIELD rg_xtp_ln_cdr_gen4_digclk_div : 2;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F8, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F8;

typedef struct
{
    

        FIELD rg_xtp_ln_cdr_gen1_digspeed : 2;
        FIELD rg_xtp_ln_cdr_gen2_digspeed : 2;
        FIELD rg_xtp_ln_cdr_gen3_digspeed : 2;
        FIELD rg_xtp_ln_cdr_gen4_digspeed : 2;
        FIELD rsv_8                     : 24;
    
    
} pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_FC, *Ppextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_FC;

// ----------------- pextp_sifslv_dig_ln0_rx_p0  Grouping Definitions -------------------
// ----------------- pextp_sifslv_dig_ln0_rx_p0 Register Definition -------------------
#if 0
typedef volatile 
{
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_00 PEXTP_DIG_LN_RX_00; // 5000
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_04 PEXTP_DIG_LN_RX_04; // 5004
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_08 PEXTP_DIG_LN_RX_08; // 5008
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_0C PEXTP_DIG_LN_RX_0C; // 500C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_10 PEXTP_DIG_LN_RX_10; // 5010
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_14 PEXTP_DIG_LN_RX_14; // 5014
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_18 PEXTP_DIG_LN_RX_18; // 5018
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_1C PEXTP_DIG_LN_RX_1C; // 501C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_20 PEXTP_DIG_LN_RX_20; // 5020
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_24 PEXTP_DIG_LN_RX_24; // 5024
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_28 PEXTP_DIG_LN_RX_28; // 5028
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_2C PEXTP_DIG_LN_RX_2C; // 502C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_30 PEXTP_DIG_LN_RX_30; // 5030
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_34 PEXTP_DIG_LN_RX_34; // 5034
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_38 PEXTP_DIG_LN_RX_38; // 5038
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_3C PEXTP_DIG_LN_RX_3C; // 503C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_40 PEXTP_DIG_LN_RX_40; // 5040
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_44 PEXTP_DIG_LN_RX_44; // 5044
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_48 PEXTP_DIG_LN_RX_48; // 5048
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_4C PEXTP_DIG_LN_RX_4C; // 504C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_50 PEXTP_DIG_LN_RX_50; // 5050
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_54 PEXTP_DIG_LN_RX_54; // 5054
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_58 PEXTP_DIG_LN_RX_58; // 5058
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_5C PEXTP_DIG_LN_RX_5C; // 505C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_60 PEXTP_DIG_LN_RX_60; // 5060
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_64 PEXTP_DIG_LN_RX_64; // 5064
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_68 PEXTP_DIG_LN_RX_68; // 5068
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_6C PEXTP_DIG_LN_RX_6C; // 506C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_70 PEXTP_DIG_LN_RX_70; // 5070
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_74 PEXTP_DIG_LN_RX_74; // 5074
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_78 PEXTP_DIG_LN_RX_78; // 5078
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_7C PEXTP_DIG_LN_RX_7C; // 507C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_80 PEXTP_DIG_LN_RX_80; // 5080
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_84 PEXTP_DIG_LN_RX_84; // 5084
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_88 PEXTP_DIG_LN_RX_88; // 5088
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_8C PEXTP_DIG_LN_RX_8C; // 508C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_90 PEXTP_DIG_LN_RX_90; // 5090
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_94 PEXTP_DIG_LN_RX_94; // 5094
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_98 PEXTP_DIG_LN_RX_98; // 5098
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_9C PEXTP_DIG_LN_RX_9C; // 509C
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A0 PEXTP_DIG_LN_RX_A0; // 50A0
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A4 PEXTP_DIG_LN_RX_A4; // 50A4
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_A8 PEXTP_DIG_LN_RX_A8; // 50A8
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_AC PEXTP_DIG_LN_RX_AC; // 50AC
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B0 PEXTP_DIG_LN_RX_B0; // 50B0
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B4 PEXTP_DIG_LN_RX_B4; // 50B4
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_B8 PEXTP_DIG_LN_RX_B8; // 50B8
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_BC PEXTP_DIG_LN_RX_BC; // 50BC
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C0 PEXTP_DIG_LN_RX_RGS_C0; // 50C0
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C4 PEXTP_DIG_LN_RX_RGS_C4; // 50C4
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_C8 PEXTP_DIG_LN_RX_RGS_C8; // 50C8
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_CC PEXTP_DIG_LN_RX_RGS_CC; // 50CC
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D0 PEXTP_DIG_LN_RX_RGS_D0; // 50D0
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D4 PEXTP_DIG_LN_RX_RGS_D4; // 50D4
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_D8 PEXTP_DIG_LN_RX_RGS_D8; // 50D8
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_DC PEXTP_DIG_LN_RX_RGS_DC; // 50DC
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E0 PEXTP_DIG_LN_RX_RGS_E0; // 50E0
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E4 PEXTP_DIG_LN_RX_RGS_E4; // 50E4
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_E8 PEXTP_DIG_LN_RX_RGS_E8; // 50E8
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_RGS_EC PEXTP_DIG_LN_RX_RGS_EC; // 50EC
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F0 PEXTP_DIG_LN_RX_F0; // 50F0
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F4 PEXTP_DIG_LN_RX_F4; // 50F4
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_F8 PEXTP_DIG_LN_RX_F8; // 50F8
    pextp_sifslv_dig_ln0_rx_p0_REG_PEXTP_DIG_LN_RX_FC PEXTP_DIG_LN_RX_FC; // 50FC
}pextp_sifslv_dig_ln0_rx_p0_REGS, *Ppextp_sifslv_dig_ln0_rx_p0_REGS;

// ---------- pextp_sifslv_dig_ln0_rx_p0 Enum Definitions      ----------
// ---------- pextp_sifslv_dig_ln0_rx_p0 C Macro Definitions   ----------
extern Ppextp_sifslv_dig_ln0_rx_p0_REGS g_pextp_sifslv_dig_ln0_rx_p0_BASE;

#define pextp_sifslv_dig_ln0_rx_p0_BASE                        (g_pextp_sifslv_dig_ln0_rx_p0_BASE)
#endif

#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_00		0x5000
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_04		0x5004
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_08		0x5008
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_0C		0x500C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_10		0x5010
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_14		0x5014
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_18		0x5018
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_1C		0x501C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_20		0x5020
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_24		0x5024
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_28		0x5028
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_2C		0x502C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_30		0x5030
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_34		0x5034
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_38		0x5038
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_3C		0x503C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_40		0x5040
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_44		0x5044
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_48		0x5048
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_4C		0x504C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_50		0x5050
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_54		0x5054
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_58		0x5058
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_5C		0x505C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_60		0x5060
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_64		0x5064
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_68		0x5068
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_6C		0x506C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_70		0x5070
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_74		0x5074
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_78		0x5078
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_7C		0x507C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_80		0x5080
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_84		0x5084
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_88		0x5088
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_8C		0x508C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_90		0x5090
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_94		0x5094
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_98		0x5098
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_9C		0x509C
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_A0		0x50A0
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_A4		0x50A4
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_A8		0x50A8
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_AC		0x50AC
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_B0		0x50B0
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_B4		0x50B4
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_B8		0x50B8
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_BC		0x50BC
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_C0		0x50C0
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_C4		0x50C4
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_C8		0x50C8
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_CC		0x50CC
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_D0		0x50D0
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_D4		0x50D4
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_D8		0x50D8
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_DC		0x50DC
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_E0		0x50E0
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_E4		0x50E4
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_E8		0x50E8
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_RGS_EC		0x50EC
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_F0		0x50F0
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_F4		0x50F4
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_F8		0x50F8
#define _pextp_sifslv_dig_ln0_rx_p0_PEXTP_DIG_LN_RX_FC		0x50FC

#endif


#define PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_retrack_dis  REG_FLD(1, 24)
#define PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_berth   REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_en      REG_FLD(1, 12)
#define PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_rtcomcnt     REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_comcnt       REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_bpslock      REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_rx_polarity_en REG_FLD(1, 12)
#define PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_emp REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_ful REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_valid_en    REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_ebuf_srst   REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_08_FLD_rg_xtp_ln_rx_ebuf12_ebufctl     REG_FLD(32, 0)

#define PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_path_pplb_eiosdet_dis REG_FLD(1, 9)
#define PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_rdm_prb_phsel      REG_FLD(1, 8)
#define PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_ansid_test         REG_FLD(3, 0)

#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_chk_cyc       REG_FLD(16, 16)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_inv           REG_FLD(1, 11)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_dig_stb_sel    REG_FLD(2, 9)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_locksel        REG_FLD(1, 8)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_ctrl_rpls_det REG_FLD(1, 7)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_lock_thr    REG_FLD(3, 4)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_chk_hdr     REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_frc_eios_det REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_dis_pipe_ctl REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_prb_phsel   REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ptc_chk_cyc        REG_FLD(16, 16)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_fsm_bak      REG_FLD(1, 12)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_wr_hsize_thr REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_hsize_thr    REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_clr_sts      REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_mask_2nd_skp REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_flush        REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_prb_phsel    REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_berth         REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_lock_thr      REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_chk_cyc_en    REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_prb_phsel     REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_rx_berth       REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lock_thr       REG_FLD(4, 16)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_tx_preset      REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lane_idx       REG_FLD(3, 8)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_type           REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_chk_cyc_en     REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_en             REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_prb_phsel      REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_recal_wait REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rxen_cnt  REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rstb_cnt  REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done_sel REG_FLD(1, 7)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_retry_cnt_rst REG_FLD(1, 6)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_gate REG_FLD(1, 5)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_caldone_exit REG_FLD(1, 4)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_cken_rst_sel REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_active_en REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e1_goto_e0   REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e2_goto_e1   REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_caldone_cnt REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_ckstb_cnt REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track2_cnt REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track1_cnt REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cal_cnt   REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_hold     REG_FLD(1, 20)
#define PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_recal_cnt REG_FLD(4, 16)
#define PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_st_cnt   REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us REG_FLD(13, 16)
#define PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_t2rlb_dig_en REG_FLD(1, 8)
#define PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqinvld_cnt    REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqcoef_cnt     REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqen_cnt       REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_da_latch_sel   REG_FLD(1, 7)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rec_latch_sel  REG_FLD(1, 6)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rmtx_skip      REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_re_eq          REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_no_response    REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adp_cnt        REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpbase_cnt    REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpstrb_cnt    REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_bypass    REG_FLD(1, 15)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_att       REG_FLD(3, 12)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_bypass    REG_FLD(1, 11)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_att       REG_FLD(3, 8)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_bypass    REG_FLD(1, 7)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_att       REG_FLD(3, 4)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_bypass    REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_att       REG_FLD(3, 0)

#define PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen4_vga       REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen3_vga       REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen2_vga       REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen1_vga       REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dis_cnt      REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_iter_cnt     REG_FLD(6, 16)
#define PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dur_cnt      REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_en_cnt       REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_off2rdy_cnt   REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_nbiasoff_cnt  REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdtk_wait_cnt     REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt   REG_FLD(4, 28)
#define PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win4  REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_con_det_mode  REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win123 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_off_sel  REG_FLD(2, 26)
#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_coarse_sel REG_FLD(2, 24)
#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_elecidle_sel  REG_FLD(1, 22)
#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel REG_FLD(2, 20)
#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt REG_FLD(4, 16)
#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_win REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_sel REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_rleak    REG_FLD(2, 28)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_rleak    REG_FLD(2, 24)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_rleak    REG_FLD(2, 20)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_rleak    REG_FLD(2, 16)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_vth      REG_FLD(2, 12)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_vth      REG_FLD(2, 8)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_vth      REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_vth      REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_cfdok_th  REG_FLD(4, 20)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_cfdok_th  REG_FLD(4, 16)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_cfdok_th  REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_cfdok_th  REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw REG_FLD(2, 6)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen4_rfdok_th  REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen3_rfdok_th  REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen2_rfdok_th  REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen1_rfdok_th  REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen4_rfdx2_th  REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen3_rfdx2_th  REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen2_rfdx2_th  REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen1_rfdx2_th  REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_rfdunit   REG_FLD(4, 28)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_rfdunit   REG_FLD(4, 24)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_rfdunit   REG_FLD(4, 20)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_rfdunit   REG_FLD(4, 16)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_cfdunit   REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_cfdunit   REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_cfdunit   REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_cfdunit   REG_FLD(4, 0)

#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkdvn    REG_FLD(3, 28)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkdvn    REG_FLD(3, 24)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkdvn    REG_FLD(3, 20)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkdvn    REG_FLD(3, 16)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdndvn    REG_FLD(3, 12)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdndvn    REG_FLD(3, 8)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdndvn    REG_FLD(3, 4)
#define PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdndvn    REG_FLD(3, 0)

#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdkunit   REG_FLD(2, 14)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdkunit   REG_FLD(2, 12)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdkunit   REG_FLD(2, 10)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdkunit   REG_FLD(2, 8)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdnunit   REG_FLD(2, 6)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdnunit   REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdnunit   REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdnunit   REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpc    REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpc    REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpc    REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpc    REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpc    REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpc    REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpc    REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpc    REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpf    REG_FLD(3, 28)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpf    REG_FLD(3, 24)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpf    REG_FLD(3, 20)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpf    REG_FLD(3, 16)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpf    REG_FLD(3, 12)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpf    REG_FLD(3, 8)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpf    REG_FLD(3, 4)
#define PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpf    REG_FLD(3, 0)

#define PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen4_autok_band REG_FLD(6, 24)
#define PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen3_autok_band REG_FLD(6, 16)
#define PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen2_autok_band REG_FLD(6, 8)
#define PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen1_autok_band REG_FLD(6, 0)

#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen4_ipath_stb    REG_FLD(5, 23)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen3_ipath_stb    REG_FLD(5, 18)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen2_ipath_stb    REG_FLD(5, 13)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen1_ipath_stb    REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_mode REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_mode REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_en REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_en REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen4_ctle      REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen3_ctle      REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen2_ctle      REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen1_ctle      REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_cal_ok    REG_FLD(1, 29)
#define PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done  REG_FLD(1, 28)
#define PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2 REG_FLD(9, 16)
#define PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1 REG_FLD(9, 0)

#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_cal_done REG_FLD(3, 20)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_data_valid_en REG_FLD(1, 17)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_adp_en   REG_FLD(1, 16)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk REG_FLD(3, 12)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel REG_FLD(3, 8)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen4_hf       REG_FLD(2, 6)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen3_hf       REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen2_hf       REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen1_hf       REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp1 REG_FLD(2, 18)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp2 REG_FLD(2, 16)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp3 REG_FLD(2, 14)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp4 REG_FLD(2, 12)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp5 REG_FLD(2, 10)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp6 REG_FLD(2, 8)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp7 REG_FLD(2, 6)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_vga  REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_ctle REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_att  REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen4_vgaref    REG_FLD(8, 24)
#define PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen3_vgaref    REG_FLD(8, 16)
#define PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen2_vgaref    REG_FLD(8, 8)
#define PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen1_vgaref    REG_FLD(8, 0)

#define PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win2 REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win1 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_timer REG_FLD(2, 30)
#define PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win4 REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win3 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel REG_FLD(1, 26)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_vld_en REG_FLD(1, 25)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_dis REG_FLD(1, 24)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext REG_FLD(2, 22)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel REG_FLD(2, 20)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext REG_FLD(4, 16)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_con_det_sel   REG_FLD(1, 11)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_woe0s REG_FLD(1, 10)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_en REG_FLD(1, 9)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_dir REG_FLD(1, 8)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_dir REG_FLD(1, 7)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_dir REG_FLD(1, 6)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_dir REG_FLD(1, 5)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_dir REG_FLD(1, 4)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_dir REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_dir REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_dir REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2 REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4 REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_errcnt REG_FLD(16, 16)
#define PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_retrack REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_passth REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_pass REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_lock REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebufmsg REG_FLD(16, 16)
#define PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_empty REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_full REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_udf REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_ovf REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_errcnt   REG_FLD(20, 12)
#define PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_passth   REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_pass     REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_lock     REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_errcnt REG_FLD(20, 12)
#define PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy REG_FLD(1, 3)
#define PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_passth REG_FLD(1, 2)
#define PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_pass   REG_FLD(1, 1)
#define PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_lock   REG_FLD(1, 0)

#define PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen4_retry_cnt REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen3_retry_cnt REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen2_retry_cnt REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen1_retry_cnt REG_FLD(4, 0)

#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_fdlock REG_FLD(1, 31)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_autok_band REG_FLD(6, 24)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_fdlock REG_FLD(1, 23)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_autok_band REG_FLD(6, 16)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_fdlock REG_FLD(1, 15)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_autok_band REG_FLD(6, 8)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_fdlock REG_FLD(1, 7)
#define PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_autok_band REG_FLD(6, 0)

#define PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt REG_FLD(4, 0)

#define PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win2 REG_FLD(10, 16)
#define PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win1 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen4_bwsel REG_FLD(1, 15)
#define PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen3_bwsel REG_FLD(1, 14)
#define PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen2_bwsel REG_FLD(1, 13)
#define PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen1_bwsel REG_FLD(1, 12)
#define PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_sgdt_acc_det_win3 REG_FLD(10, 0)

#define PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen4_ctle_max REG_FLD(5, 24)
#define PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen3_ctle_max REG_FLD(5, 16)
#define PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen2_ctle_max REG_FLD(5, 8)
#define PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen1_ctle_max REG_FLD(5, 0)

#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_cdec REG_FLD(2, 22)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_cdec REG_FLD(2, 20)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_cdec REG_FLD(2, 18)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_cdec REG_FLD(2, 16)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle1_csel    REG_FLD(4, 12)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle1_csel    REG_FLD(4, 8)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle1_csel    REG_FLD(4, 4)
#define PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle1_csel    REG_FLD(4, 0)

#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_rdec  REG_FLD(2, 28)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_rdec  REG_FLD(2, 24)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_rdec  REG_FLD(2, 20)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_rdec  REG_FLD(2, 16)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_cdec  REG_FLD(2, 12)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_cdec  REG_FLD(2, 8)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_cdec  REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_cdec  REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_digclk_div   REG_FLD(2, 30)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_digclk_div   REG_FLD(2, 28)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_digclk_div   REG_FLD(2, 26)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_digclk_div   REG_FLD(2, 24)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_piclk_div    REG_FLD(2, 22)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_piclk_div    REG_FLD(2, 20)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_piclk_div    REG_FLD(2, 18)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_piclk_div    REG_FLD(2, 16)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_iir_en       REG_FLD(1, 15)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_iir_en       REG_FLD(1, 14)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_iir_en       REG_FLD(1, 13)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_iir_en       REG_FLD(1, 12)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_en     REG_FLD(1, 11)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_dessc_en     REG_FLD(1, 10)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_dessc_en     REG_FLD(1, 9)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_dessc_en     REG_FLD(1, 8)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_rdec REG_FLD(2, 6)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_rdec REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_rdec REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_rdec REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen4_digspeed     REG_FLD(2, 6)
#define PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen3_digspeed     REG_FLD(2, 4)
#define PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen2_digspeed     REG_FLD(2, 2)
#define PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen1_digspeed     REG_FLD(2, 0)

#define PEXTP_DIG_LN_RX_00_GET_rg_xtp_ln_rx_slock_retrack_dis(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_retrack_dis, (reg32))
#define PEXTP_DIG_LN_RX_00_GET_rg_xtp_ln_rx_slock_prbs_berth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_berth, (reg32))
#define PEXTP_DIG_LN_RX_00_GET_rg_xtp_ln_rx_slock_prbs_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_en, (reg32))
#define PEXTP_DIG_LN_RX_00_GET_rg_xtp_ln_rx_slock_rtcomcnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_rtcomcnt, (reg32))
#define PEXTP_DIG_LN_RX_00_GET_rg_xtp_ln_rx_slock_comcnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_comcnt, (reg32))
#define PEXTP_DIG_LN_RX_00_GET_rg_xtp_ln_rx_slock_bpslock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_bpslock, (reg32))

#define PEXTP_DIG_LN_RX_04_GET_rg_xtp_ln_rx_ebuf12_rx_polarity_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_rx_polarity_en, (reg32))
#define PEXTP_DIG_LN_RX_04_GET_rg_xtp_ln_rx_ebuf12_pcie2_k_emp(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_emp, (reg32))
#define PEXTP_DIG_LN_RX_04_GET_rg_xtp_ln_rx_ebuf12_pcie2_k_ful(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_ful, (reg32))
#define PEXTP_DIG_LN_RX_04_GET_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en, (reg32))
#define PEXTP_DIG_LN_RX_04_GET_rg_xtp_ln_rx_ebuf12_valid_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_valid_en, (reg32))
#define PEXTP_DIG_LN_RX_04_GET_rg_xtp_ln_rx_ebuf12_ebuf_srst(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_ebuf_srst, (reg32))

#define PEXTP_DIG_LN_RX_08_GET_rg_xtp_ln_rx_ebuf12_ebufctl(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_08_FLD_rg_xtp_ln_rx_ebuf12_ebufctl, (reg32))

#define PEXTP_DIG_LN_RX_0C_GET_rg_xtp_ln_rx_path_pplb_eiosdet_dis(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_path_pplb_eiosdet_dis, (reg32))
#define PEXTP_DIG_LN_RX_0C_GET_rg_xtp_ln_rx_rdm_prb_phsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_rdm_prb_phsel, (reg32))
#define PEXTP_DIG_LN_RX_0C_GET_rg_xtp_ln_rx_ansid_test(reg32)  REG_FLD_GET(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_ansid_test, (reg32))

#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_prbs_chk_cyc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_chk_cyc, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_prbs_inv(reg32)    REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_inv, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_cdr_dig_stb_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_dig_stb_sel, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_cdr_locksel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_locksel, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_balign_ctrl_rpls_det(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_ctrl_rpls_det, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_balign_lock_thr(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_lock_thr, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_balign_chk_hdr(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_chk_hdr, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_balign_frc_eios_det(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_frc_eios_det, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_balign_dis_pipe_ctl(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_dis_pipe_ctl, (reg32))
#define PEXTP_DIG_LN_RX_10_GET_rg_xtp_ln_rx_balign_prb_phsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_prb_phsel, (reg32))

#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ptc_chk_cyc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ptc_chk_cyc, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_fsm_bak(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_fsm_bak, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_wr_hsize_thr(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_wr_hsize_thr, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_hsize_thr(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_hsize_thr, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_clr_sts(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_clr_sts, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_mask_2nd_skp(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_mask_2nd_skp, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_flush(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_flush, (reg32))
#define PEXTP_DIG_LN_RX_14_GET_rg_xtp_ln_rx_ebuf3_prb_phsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_prb_phsel, (reg32))

#define PEXTP_DIG_LN_RX_18_GET_rg_xtp_ln_rx_prbs_berth(reg32)  REG_FLD_GET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_berth, (reg32))
#define PEXTP_DIG_LN_RX_18_GET_rg_xtp_ln_rx_prbs_lock_thr(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_lock_thr, (reg32))
#define PEXTP_DIG_LN_RX_18_GET_rg_xtp_ln_rx_prbs_chk_cyc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_chk_cyc_en, (reg32))
#define PEXTP_DIG_LN_RX_18_GET_rg_xtp_ln_rx_prbs_prb_phsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_prb_phsel, (reg32))

#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_rx_berth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_rx_berth, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_lock_thr(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lock_thr, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_tx_preset(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_tx_preset, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_lane_idx(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lane_idx, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_type(reg32)    REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_type, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_chk_cyc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_chk_cyc_en, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_en(reg32)      REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_en, (reg32))
#define PEXTP_DIG_LN_RX_1C_GET_rg_xtp_ln_rx_ptc_prb_phsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_prb_phsel, (reg32))

#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_recal_wait(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_recal_wait, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_rxen_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rxen_cnt, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_rstb_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rstb_cnt, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_aeq_done_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done_sel, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_retry_cnt_rst(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_retry_cnt_rst, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_lck2ref_gate(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_gate, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_caldone_exit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_caldone_exit, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_cken_rst_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_cken_rst_sel, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e0_active_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_active_en, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e1_goto_e0(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e1_goto_e0, (reg32))
#define PEXTP_DIG_LN_RX_20_GET_rg_xtp_ln_rx_pdown_e2_goto_e1(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e2_goto_e1, (reg32))

#define PEXTP_DIG_LN_RX_24_GET_rg_xtp_ln_rx_pdown_e0_caldone_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_caldone_cnt, (reg32))
#define PEXTP_DIG_LN_RX_24_GET_rg_xtp_ln_rx_pdown_e0_ckstb_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_ckstb_cnt, (reg32))

#define PEXTP_DIG_LN_RX_28_GET_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt, (reg32))
#define PEXTP_DIG_LN_RX_28_GET_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt, (reg32))
#define PEXTP_DIG_LN_RX_28_GET_rg_xtp_ln_rx_pdown_e0_track2_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track2_cnt, (reg32))
#define PEXTP_DIG_LN_RX_28_GET_rg_xtp_ln_rx_pdown_e0_track1_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track1_cnt, (reg32))

#define PEXTP_DIG_LN_RX_2C_GET_rg_xtp_ln_rx_pdown_e0_cal_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cal_cnt, (reg32))
#define PEXTP_DIG_LN_RX_2C_GET_rg_xtp_ln_rx_pdown_e0s_hold(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_hold, (reg32))
#define PEXTP_DIG_LN_RX_2C_GET_rg_xtp_ln_rx_pdown_e0_recal_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_recal_cnt, (reg32))
#define PEXTP_DIG_LN_RX_2C_GET_rg_xtp_ln_rx_pdown_e0s_st_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_st_cnt, (reg32))
#define PEXTP_DIG_LN_RX_2C_GET_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt, (reg32))

#define PEXTP_DIG_LN_RX_30_GET_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us, (reg32))
#define PEXTP_DIG_LN_RX_30_GET_rg_xtp_ln_rx_pdown_t2rlb_dig_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_t2rlb_dig_en, (reg32))
#define PEXTP_DIG_LN_RX_30_GET_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt, (reg32))

#define PEXTP_DIG_LN_RX_34_GET_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt, (reg32))
#define PEXTP_DIG_LN_RX_34_GET_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns, (reg32))

#define PEXTP_DIG_LN_RX_38_GET_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt, (reg32))
#define PEXTP_DIG_LN_RX_38_GET_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt, (reg32))

#define PEXTP_DIG_LN_RX_3C_GET_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt, (reg32))
#define PEXTP_DIG_LN_RX_3C_GET_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt, (reg32))

#define PEXTP_DIG_LN_RX_40_GET_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt, (reg32))
#define PEXTP_DIG_LN_RX_40_GET_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt, (reg32))

#define PEXTP_DIG_LN_RX_44_GET_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt, (reg32))
#define PEXTP_DIG_LN_RX_44_GET_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt, (reg32))

#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_eqinvld_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqinvld_cnt, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_eqcoef_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqcoef_cnt, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_eqen_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqen_cnt, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_da_latch_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_da_latch_sel, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_rec_latch_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rec_latch_sel, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_rmtx_skip(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rmtx_skip, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_re_eq(reg32)   REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_re_eq, (reg32))
#define PEXTP_DIG_LN_RX_48_GET_rg_xtp_ln_rx_aeq_no_response(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_no_response, (reg32))

#define PEXTP_DIG_LN_RX_4C_GET_rg_xtp_ln_rx_aeq_adp_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adp_cnt, (reg32))
#define PEXTP_DIG_LN_RX_4C_GET_rg_xtp_ln_rx_aeq_adpbase_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpbase_cnt, (reg32))
#define PEXTP_DIG_LN_RX_4C_GET_rg_xtp_ln_rx_aeq_adpstrb_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpstrb_cnt, (reg32))

#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen4_bypass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_bypass, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen4_att(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_att, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen3_bypass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_bypass, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen3_att(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_att, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen2_bypass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_bypass, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen2_att(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_att, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen1_bypass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_bypass, (reg32))
#define PEXTP_DIG_LN_RX_50_GET_rg_xtp_ln_rx_aeq_gen1_att(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_att, (reg32))

#define PEXTP_DIG_LN_RX_54_GET_rg_xtp_ln_rx_aeq_gen4_vga(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen4_vga, (reg32))
#define PEXTP_DIG_LN_RX_54_GET_rg_xtp_ln_rx_aeq_gen3_vga(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen3_vga, (reg32))
#define PEXTP_DIG_LN_RX_54_GET_rg_xtp_ln_rx_aeq_gen2_vga(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen2_vga, (reg32))
#define PEXTP_DIG_LN_RX_54_GET_rg_xtp_ln_rx_aeq_gen1_vga(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen1_vga, (reg32))

#define PEXTP_DIG_LN_RX_58_GET_rg_xtp_ln_rx_sgdtk_dis_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dis_cnt, (reg32))
#define PEXTP_DIG_LN_RX_58_GET_rg_xtp_ln_rx_sgdtk_iter_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_iter_cnt, (reg32))
#define PEXTP_DIG_LN_RX_58_GET_rg_xtp_ln_rx_sgdtk_dur_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dur_cnt, (reg32))
#define PEXTP_DIG_LN_RX_58_GET_rg_xtp_ln_rx_sgdtk_en_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_en_cnt, (reg32))

#define PEXTP_DIG_LN_RX_5C_GET_rg_xtp_ln_rx_sgdt_off2rdy_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_off2rdy_cnt, (reg32))
#define PEXTP_DIG_LN_RX_5C_GET_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt, (reg32))
#define PEXTP_DIG_LN_RX_5C_GET_rg_xtp_ln_rx_sgdt_nbiasoff_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_nbiasoff_cnt, (reg32))
#define PEXTP_DIG_LN_RX_5C_GET_rg_xtp_ln_rx_sgdtk_wait_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdtk_wait_cnt, (reg32))

#define PEXTP_DIG_LN_RX_60_GET_rg_xtp_ln_rx_sgdt_acc_det_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt, (reg32))
#define PEXTP_DIG_LN_RX_60_GET_rg_xtp_ln_rx_sgdt_acc_det_win4(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win4, (reg32))
#define PEXTP_DIG_LN_RX_60_GET_rg_xtp_ln_rx_sgdt_con_det_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_con_det_mode, (reg32))
#define PEXTP_DIG_LN_RX_60_GET_rg_xtp_ln_rx_sgdt_acc_det_win123(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win123, (reg32))

#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_exit_off_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_off_sel, (reg32))
#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_exit_coarse_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_coarse_sel, (reg32))
#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_elecidle_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_elecidle_sel, (reg32))
#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_e2_cklatch_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel, (reg32))
#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt, (reg32))
#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_e2_sam_det_win(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_win, (reg32))
#define PEXTP_DIG_LN_RX_64_GET_rg_xtp_ln_rx_sgdt_e1_acccondet_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_sel, (reg32))

#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen4_rleak(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_rleak, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen3_rleak(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_rleak, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen2_rleak(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_rleak, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen1_rleak(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_rleak, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen4_vth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_vth, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen3_vth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_vth, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen2_vth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_vth, (reg32))
#define PEXTP_DIG_LN_RX_68_GET_rg_xtp_ln_rx_sgdt_gen1_vth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_vth, (reg32))

#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen4_cfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_cfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen3_cfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_cfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen2_cfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_cfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen1_cfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_cfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw, (reg32))
#define PEXTP_DIG_LN_RX_6C_GET_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw, (reg32))

#define PEXTP_DIG_LN_RX_70_GET_rg_xtp_ln_rx_cdr_gen4_rfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen4_rfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_70_GET_rg_xtp_ln_rx_cdr_gen3_rfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen3_rfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_70_GET_rg_xtp_ln_rx_cdr_gen2_rfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen2_rfdok_th, (reg32))
#define PEXTP_DIG_LN_RX_70_GET_rg_xtp_ln_rx_cdr_gen1_rfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen1_rfdok_th, (reg32))

#define PEXTP_DIG_LN_RX_74_GET_rg_xtp_ln_rx_cdr_gen4_rfdx2_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen4_rfdx2_th, (reg32))
#define PEXTP_DIG_LN_RX_74_GET_rg_xtp_ln_rx_cdr_gen3_rfdx2_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen3_rfdx2_th, (reg32))
#define PEXTP_DIG_LN_RX_74_GET_rg_xtp_ln_rx_cdr_gen2_rfdx2_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen2_rfdx2_th, (reg32))
#define PEXTP_DIG_LN_RX_74_GET_rg_xtp_ln_rx_cdr_gen1_rfdx2_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen1_rfdx2_th, (reg32))

#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen4_rfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_rfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen3_rfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_rfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen2_rfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_rfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen1_rfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_rfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen4_cfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_cfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen3_cfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_cfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen2_cfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_cfdunit, (reg32))
#define PEXTP_DIG_LN_RX_78_GET_rg_xtp_ln_rx_cdr_gen1_cfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_cfdunit, (reg32))

#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen4_pdkdvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkdvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen3_pdkdvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkdvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen2_pdkdvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkdvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen1_pdkdvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkdvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen4_pdndvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdndvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen3_pdndvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdndvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen2_pdndvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdndvn, (reg32))
#define PEXTP_DIG_LN_RX_7C_GET_rg_xtp_ln_rx_cdr_gen1_pdndvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdndvn, (reg32))

#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen4_pdkunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdkunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen3_pdkunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdkunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen2_pdkunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdkunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen1_pdkunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdkunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen4_pdnunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdnunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen3_pdnunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdnunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen2_pdnunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdnunit, (reg32))
#define PEXTP_DIG_LN_RX_80_GET_rg_xtp_ln_rx_cdr_gen1_pdnunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdnunit, (reg32))

#define PEXTP_DIG_LN_RX_84_GET_rg_xtp_ln_rx_cdr_gen4_pdnkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpc, (reg32))
#define PEXTP_DIG_LN_RX_84_GET_rg_xtp_ln_rx_cdr_gen3_pdnkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpc, (reg32))
#define PEXTP_DIG_LN_RX_84_GET_rg_xtp_ln_rx_cdr_gen2_pdnkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpc, (reg32))
#define PEXTP_DIG_LN_RX_84_GET_rg_xtp_ln_rx_cdr_gen1_pdnkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpc, (reg32))

#define PEXTP_DIG_LN_RX_88_GET_rg_xtp_ln_rx_cdr_gen4_pdkkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpc, (reg32))
#define PEXTP_DIG_LN_RX_88_GET_rg_xtp_ln_rx_cdr_gen3_pdkkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpc, (reg32))
#define PEXTP_DIG_LN_RX_88_GET_rg_xtp_ln_rx_cdr_gen2_pdkkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpc, (reg32))
#define PEXTP_DIG_LN_RX_88_GET_rg_xtp_ln_rx_cdr_gen1_pdkkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpc, (reg32))

#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen4_pdkkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen3_pdkkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen2_pdkkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen1_pdkkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen4_pdnkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen3_pdnkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen2_pdnkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpf, (reg32))
#define PEXTP_DIG_LN_RX_8C_GET_rg_xtp_ln_rx_cdr_gen1_pdnkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpf, (reg32))

#define PEXTP_DIG_LN_RX_90_GET_rg_xtp_ln_rx_cdrk_gen4_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen4_autok_band, (reg32))
#define PEXTP_DIG_LN_RX_90_GET_rg_xtp_ln_rx_cdrk_gen3_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen3_autok_band, (reg32))
#define PEXTP_DIG_LN_RX_90_GET_rg_xtp_ln_rx_cdrk_gen2_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen2_autok_band, (reg32))
#define PEXTP_DIG_LN_RX_90_GET_rg_xtp_ln_rx_cdrk_gen1_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen1_autok_band, (reg32))

#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_cdr_gen4_ipath_stb(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen4_ipath_stb, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_cdr_gen3_ipath_stb(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen3_ipath_stb, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_cdr_gen2_ipath_stb(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen2_ipath_stb, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_cdr_gen1_ipath_stb(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen1_ipath_stb, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_rx_calib_acjtag_rxn_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_mode, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_rx_calib_acjtag_rxp_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_mode, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_rx_calib_acjtag_rxn_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_en, (reg32))
#define PEXTP_DIG_LN_RX_94_GET_rg_xtp_ln_rx_calib_acjtag_rxp_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_en, (reg32))

#define PEXTP_DIG_LN_RX_98_GET_rg_xtp_ln_rx_aeq_gen4_ctle(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen4_ctle, (reg32))
#define PEXTP_DIG_LN_RX_98_GET_rg_xtp_ln_rx_aeq_gen3_ctle(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen3_ctle, (reg32))
#define PEXTP_DIG_LN_RX_98_GET_rg_xtp_ln_rx_aeq_gen2_ctle(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen2_ctle, (reg32))
#define PEXTP_DIG_LN_RX_98_GET_rg_xtp_ln_rx_aeq_gen1_ctle(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen1_ctle, (reg32))

#define PEXTP_DIG_LN_RX_9C_GET_rg_xtp_ln_rx_pdown_e0_cal_ok(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_cal_ok, (reg32))
#define PEXTP_DIG_LN_RX_9C_GET_rg_xtp_ln_rx_pdown_e0_aeq_done(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done, (reg32))
#define PEXTP_DIG_LN_RX_9C_GET_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2, (reg32))
#define PEXTP_DIG_LN_RX_9C_GET_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1, (reg32))

#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_pdown_pp_exit_cal_done(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_cal_done, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_pdown_data_valid_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_data_valid_en, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_pdown_aeq_adp_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_adp_en, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_sgdt_gen4_hf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen4_hf, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_sgdt_gen3_hf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen3_hf, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_sgdt_gen2_hf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen2_hf, (reg32))
#define PEXTP_DIG_LN_RX_A0_GET_rg_xtp_ln_rx_sgdt_gen1_hf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen1_hf, (reg32))

#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp1, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp2(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp2, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp3(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp3, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp4(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp4, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp5(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp5, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp6(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp6, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_dfetp7(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp7, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_vga(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_vga, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_ctle(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_ctle, (reg32))
#define PEXTP_DIG_LN_RX_A4_GET_rg_xtp_ln_rx_aeq_strb_type_att(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_att, (reg32))

#define PEXTP_DIG_LN_RX_A8_GET_rg_xtp_ln_rx_aeq_gen4_vgaref(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen4_vgaref, (reg32))
#define PEXTP_DIG_LN_RX_A8_GET_rg_xtp_ln_rx_aeq_gen3_vgaref(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen3_vgaref, (reg32))
#define PEXTP_DIG_LN_RX_A8_GET_rg_xtp_ln_rx_aeq_gen2_vgaref(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen2_vgaref, (reg32))
#define PEXTP_DIG_LN_RX_A8_GET_rg_xtp_ln_rx_aeq_gen1_vgaref(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen1_vgaref, (reg32))

#define PEXTP_DIG_LN_RX_AC_GET_rg_xtp_ln_rx_pdown_eidle_det_win2(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win2, (reg32))
#define PEXTP_DIG_LN_RX_AC_GET_rg_xtp_ln_rx_pdown_eidle_det_win1(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win1, (reg32))

#define PEXTP_DIG_LN_RX_B0_GET_rg_xtp_ln_rx_pdown_eidle_det_timer(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_timer, (reg32))
#define PEXTP_DIG_LN_RX_B0_GET_rg_xtp_ln_rx_pdown_eidle_det_win4(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win4, (reg32))
#define PEXTP_DIG_LN_RX_B0_GET_rg_xtp_ln_rx_pdown_eidle_det_win3(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win3, (reg32))

#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_eidle_det_vld_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_vld_en, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_e2_cklatch_dis(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_dis, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_sgdt_con_det_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_con_det_sel, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_eidle_det_woe0s(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_woe0s, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_eidle_det_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_en, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp7_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp6_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp5_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp4_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp3_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp2_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_dfetp1_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_lck2ref_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_dir, (reg32))
#define PEXTP_DIG_LN_RX_B4_GET_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir, (reg32))

#define PEXTP_DIG_LN_RX_B8_GET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2, (reg32))
#define PEXTP_DIG_LN_RX_B8_GET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1, (reg32))

#define PEXTP_DIG_LN_RX_BC_GET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4, (reg32))
#define PEXTP_DIG_LN_RX_BC_GET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3, (reg32))

#define PEXTP_DIG_LN_RX_RGS_C0_GET_rgs_xtp_ln_rx_slock_prbs_errcnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_errcnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C0_GET_rgs_xtp_ln_rx_slock_retrack(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_retrack, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C0_GET_rgs_xtp_ln_rx_slock_prbs_passth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_passth, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C0_GET_rgs_xtp_ln_rx_slock_prbs_pass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_pass, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C0_GET_rgs_xtp_ln_rx_slock_prbs_lock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_lock, (reg32))

#define PEXTP_DIG_LN_RX_RGS_C4_GET_rgs_xtp_ln_rx_ebuf12_ebufmsg(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebufmsg, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C4_GET_rgs_xtp_ln_rx_ebuf3_fifo_empty(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_empty, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C4_GET_rgs_xtp_ln_rx_ebuf3_fifo_full(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_full, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C4_GET_rgs_xtp_ln_rx_ebuf12_ebuf_udf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_udf, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C4_GET_rgs_xtp_ln_rx_ebuf12_ebuf_ovf(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_ovf, (reg32))

#define PEXTP_DIG_LN_RX_RGS_C8_GET_rgs_xtp_ln_rx_prbs_errcnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_errcnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C8_GET_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C8_GET_rgs_xtp_ln_rx_prbs_passth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_passth, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C8_GET_rgs_xtp_ln_rx_prbs_pass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_pass, (reg32))
#define PEXTP_DIG_LN_RX_RGS_C8_GET_rgs_xtp_ln_rx_prbs_lock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_lock, (reg32))

#define PEXTP_DIG_LN_RX_RGS_CC_GET_rgs_xtp_ln_rx_ptc_rx_errcnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_errcnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_CC_GET_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy, (reg32))
#define PEXTP_DIG_LN_RX_RGS_CC_GET_rgs_xtp_ln_rx_ptc_rx_passth(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_passth, (reg32))
#define PEXTP_DIG_LN_RX_RGS_CC_GET_rgs_xtp_ln_rx_ptc_rx_pass(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_pass, (reg32))
#define PEXTP_DIG_LN_RX_RGS_CC_GET_rgs_xtp_ln_rx_ptc_rx_lock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_lock, (reg32))

#define PEXTP_DIG_LN_RX_RGS_D0_GET_rgs_xtp_ln_rx_pdown_gen4_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen4_retry_cnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D0_GET_rgs_xtp_ln_rx_pdown_gen3_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen3_retry_cnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D0_GET_rgs_xtp_ln_rx_pdown_gen2_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen2_retry_cnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D0_GET_rgs_xtp_ln_rx_pdown_gen1_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen1_retry_cnt, (reg32))

#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen4_fdlock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_fdlock, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen4_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_autok_band, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen3_fdlock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_fdlock, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen3_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_autok_band, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen2_fdlock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_fdlock, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen2_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_autok_band, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen1_fdlock(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_fdlock, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D4_GET_rgs_xtp_ln_rx_cdrk_gen1_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_autok_band, (reg32))

#define PEXTP_DIG_LN_RX_RGS_D8_GET_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D8_GET_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D8_GET_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt, (reg32))
#define PEXTP_DIG_LN_RX_RGS_D8_GET_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt, (reg32))

#define PEXTP_DIG_LN_RX_RGS_DC_GET_rg_xtp_ln_rx_sgdt_acc_det_win2(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win2, (reg32))
#define PEXTP_DIG_LN_RX_RGS_DC_GET_rg_xtp_ln_rx_sgdt_acc_det_win1(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win1, (reg32))

#define PEXTP_DIG_LN_RX_RGS_E0_GET_rg_xtp_ln_rx_afe_gen4_bwsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen4_bwsel, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E0_GET_rg_xtp_ln_rx_afe_gen3_bwsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen3_bwsel, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E0_GET_rg_xtp_ln_rx_afe_gen2_bwsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen2_bwsel, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E0_GET_rg_xtp_ln_rx_afe_gen1_bwsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen1_bwsel, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E0_GET_rg_xtp_ln_rx_sgdt_acc_det_win3(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_sgdt_acc_det_win3, (reg32))

#define PEXTP_DIG_LN_RX_RGS_E4_GET_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E4_GET_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E4_GET_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E4_GET_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max, (reg32))

#define PEXTP_DIG_LN_RX_RGS_E8_GET_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E8_GET_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E8_GET_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min, (reg32))
#define PEXTP_DIG_LN_RX_RGS_E8_GET_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min, (reg32))

#define PEXTP_DIG_LN_RX_RGS_EC_GET_rg_xtp_ln_rx_aeq_gen4_ctle_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen4_ctle_max, (reg32))
#define PEXTP_DIG_LN_RX_RGS_EC_GET_rg_xtp_ln_rx_aeq_gen3_ctle_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen3_ctle_max, (reg32))
#define PEXTP_DIG_LN_RX_RGS_EC_GET_rg_xtp_ln_rx_aeq_gen2_ctle_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen2_ctle_max, (reg32))
#define PEXTP_DIG_LN_RX_RGS_EC_GET_rg_xtp_ln_rx_aeq_gen1_ctle_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen1_ctle_max, (reg32))

#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen4_ctle_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen3_ctle_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen2_ctle_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen1_ctle_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen4_ctle1_csel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle1_csel, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen3_ctle1_csel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle1_csel, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen2_ctle1_csel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle1_csel, (reg32))
#define PEXTP_DIG_LN_RX_F0_GET_rg_xtp_ln_rx_gen1_ctle1_csel(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle1_csel, (reg32))

#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen4_vga_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen3_vga_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen2_vga_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen1_vga_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen4_vga_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen3_vga_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen2_vga_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_RX_F4_GET_rg_xtp_ln_rx_gen1_vga_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_cdec, (reg32))

#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen4_digclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_digclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen3_digclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_digclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen2_digclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_digclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen1_digclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_digclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen4_piclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_piclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen3_piclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_piclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen2_piclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_piclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen1_piclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_piclk_div, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen4_iir_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_iir_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen3_iir_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_iir_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen2_iir_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_iir_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen1_iir_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_iir_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen4_dessc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen3_dessc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_dessc_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen2_dessc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_dessc_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_cdr_gen1_dessc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_dessc_en, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_rx_gen4_ctle_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_rx_gen3_ctle_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_rx_gen2_ctle_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_RX_F8_GET_rg_xtp_ln_rx_gen1_ctle_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_rdec, (reg32))

#define PEXTP_DIG_LN_RX_FC_GET_rg_xtp_ln_cdr_gen4_digspeed(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen4_digspeed, (reg32))
#define PEXTP_DIG_LN_RX_FC_GET_rg_xtp_ln_cdr_gen3_digspeed(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen3_digspeed, (reg32))
#define PEXTP_DIG_LN_RX_FC_GET_rg_xtp_ln_cdr_gen2_digspeed(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen2_digspeed, (reg32))
#define PEXTP_DIG_LN_RX_FC_GET_rg_xtp_ln_cdr_gen1_digspeed(reg32) REG_FLD_GET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen1_digspeed, (reg32))

#define PEXTP_DIG_LN_RX_00_SET_rg_xtp_ln_rx_slock_retrack_dis(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_retrack_dis, (reg32), (val))
#define PEXTP_DIG_LN_RX_00_SET_rg_xtp_ln_rx_slock_prbs_berth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_berth, (reg32), (val))
#define PEXTP_DIG_LN_RX_00_SET_rg_xtp_ln_rx_slock_prbs_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_00_SET_rg_xtp_ln_rx_slock_rtcomcnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_rtcomcnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_00_SET_rg_xtp_ln_rx_slock_comcnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_comcnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_00_SET_rg_xtp_ln_rx_slock_bpslock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_bpslock, (reg32), (val))

#define PEXTP_DIG_LN_RX_04_SET_rg_xtp_ln_rx_ebuf12_rx_polarity_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_rx_polarity_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_04_SET_rg_xtp_ln_rx_ebuf12_pcie2_k_emp(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_emp, (reg32), (val))
#define PEXTP_DIG_LN_RX_04_SET_rg_xtp_ln_rx_ebuf12_pcie2_k_ful(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_ful, (reg32), (val))
#define PEXTP_DIG_LN_RX_04_SET_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_04_SET_rg_xtp_ln_rx_ebuf12_valid_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_valid_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_04_SET_rg_xtp_ln_rx_ebuf12_ebuf_srst(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_ebuf_srst, (reg32), (val))

#define PEXTP_DIG_LN_RX_08_SET_rg_xtp_ln_rx_ebuf12_ebufctl(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_08_FLD_rg_xtp_ln_rx_ebuf12_ebufctl, (reg32), (val))

#define PEXTP_DIG_LN_RX_0C_SET_rg_xtp_ln_rx_path_pplb_eiosdet_dis(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_path_pplb_eiosdet_dis, (reg32), (val))
#define PEXTP_DIG_LN_RX_0C_SET_rg_xtp_ln_rx_rdm_prb_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_rdm_prb_phsel, (reg32), (val))
#define PEXTP_DIG_LN_RX_0C_SET_rg_xtp_ln_rx_ansid_test(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_ansid_test, (reg32), (val))

#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_prbs_chk_cyc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_chk_cyc, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_prbs_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_inv, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_cdr_dig_stb_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_dig_stb_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_cdr_locksel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_locksel, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_balign_ctrl_rpls_det(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_ctrl_rpls_det, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_balign_lock_thr(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_lock_thr, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_balign_chk_hdr(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_chk_hdr, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_balign_frc_eios_det(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_frc_eios_det, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_balign_dis_pipe_ctl(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_dis_pipe_ctl, (reg32), (val))
#define PEXTP_DIG_LN_RX_10_SET_rg_xtp_ln_rx_balign_prb_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_prb_phsel, (reg32), (val))

#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ptc_chk_cyc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ptc_chk_cyc, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_fsm_bak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_fsm_bak, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_wr_hsize_thr(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_wr_hsize_thr, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_hsize_thr(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_hsize_thr, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_clr_sts(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_clr_sts, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_mask_2nd_skp(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_mask_2nd_skp, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_flush(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_flush, (reg32), (val))
#define PEXTP_DIG_LN_RX_14_SET_rg_xtp_ln_rx_ebuf3_prb_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_prb_phsel, (reg32), (val))

#define PEXTP_DIG_LN_RX_18_SET_rg_xtp_ln_rx_prbs_berth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_berth, (reg32), (val))
#define PEXTP_DIG_LN_RX_18_SET_rg_xtp_ln_rx_prbs_lock_thr(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_lock_thr, (reg32), (val))
#define PEXTP_DIG_LN_RX_18_SET_rg_xtp_ln_rx_prbs_chk_cyc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_chk_cyc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_18_SET_rg_xtp_ln_rx_prbs_prb_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_prb_phsel, (reg32), (val))

#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_rx_berth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_rx_berth, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_lock_thr(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lock_thr, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_tx_preset(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_tx_preset, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_lane_idx(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lane_idx, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_type(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_type, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_chk_cyc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_chk_cyc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_1C_SET_rg_xtp_ln_rx_ptc_prb_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_prb_phsel, (reg32), (val))

#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_recal_wait(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_recal_wait, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_rxen_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rxen_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_rstb_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rstb_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_aeq_done_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_retry_cnt_rst(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_retry_cnt_rst, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_lck2ref_gate(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_gate, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_caldone_exit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_caldone_exit, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_cken_rst_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_cken_rst_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e0_active_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_active_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e1_goto_e0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e1_goto_e0, (reg32), (val))
#define PEXTP_DIG_LN_RX_20_SET_rg_xtp_ln_rx_pdown_e2_goto_e1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e2_goto_e1, (reg32), (val))

#define PEXTP_DIG_LN_RX_24_SET_rg_xtp_ln_rx_pdown_e0_caldone_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_caldone_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_24_SET_rg_xtp_ln_rx_pdown_e0_ckstb_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_ckstb_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_28_SET_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_28_SET_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_28_SET_rg_xtp_ln_rx_pdown_e0_track2_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track2_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_28_SET_rg_xtp_ln_rx_pdown_e0_track1_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track1_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_2C_SET_rg_xtp_ln_rx_pdown_e0_cal_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cal_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_2C_SET_rg_xtp_ln_rx_pdown_e0s_hold(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_hold, (reg32), (val))
#define PEXTP_DIG_LN_RX_2C_SET_rg_xtp_ln_rx_pdown_e0_recal_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_recal_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_2C_SET_rg_xtp_ln_rx_pdown_e0s_st_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_st_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_2C_SET_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_30_SET_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us, (reg32), (val))
#define PEXTP_DIG_LN_RX_30_SET_rg_xtp_ln_rx_pdown_t2rlb_dig_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_t2rlb_dig_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_30_SET_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_34_SET_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_34_SET_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns, (reg32), (val))

#define PEXTP_DIG_LN_RX_38_SET_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_38_SET_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_3C_SET_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_3C_SET_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_40_SET_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_40_SET_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_44_SET_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_44_SET_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_eqinvld_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqinvld_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_eqcoef_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqcoef_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_eqen_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqen_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_da_latch_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_da_latch_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_rec_latch_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rec_latch_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_rmtx_skip(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rmtx_skip, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_re_eq(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_re_eq, (reg32), (val))
#define PEXTP_DIG_LN_RX_48_SET_rg_xtp_ln_rx_aeq_no_response(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_no_response, (reg32), (val))

#define PEXTP_DIG_LN_RX_4C_SET_rg_xtp_ln_rx_aeq_adp_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adp_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_4C_SET_rg_xtp_ln_rx_aeq_adpbase_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpbase_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_4C_SET_rg_xtp_ln_rx_aeq_adpstrb_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpstrb_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen4_bypass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_bypass, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen4_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_att, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen3_bypass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_bypass, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen3_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_att, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen2_bypass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_bypass, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen2_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_att, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen1_bypass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_bypass, (reg32), (val))
#define PEXTP_DIG_LN_RX_50_SET_rg_xtp_ln_rx_aeq_gen1_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_att, (reg32), (val))

#define PEXTP_DIG_LN_RX_54_SET_rg_xtp_ln_rx_aeq_gen4_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen4_vga, (reg32), (val))
#define PEXTP_DIG_LN_RX_54_SET_rg_xtp_ln_rx_aeq_gen3_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen3_vga, (reg32), (val))
#define PEXTP_DIG_LN_RX_54_SET_rg_xtp_ln_rx_aeq_gen2_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen2_vga, (reg32), (val))
#define PEXTP_DIG_LN_RX_54_SET_rg_xtp_ln_rx_aeq_gen1_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen1_vga, (reg32), (val))

#define PEXTP_DIG_LN_RX_58_SET_rg_xtp_ln_rx_sgdtk_dis_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dis_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_58_SET_rg_xtp_ln_rx_sgdtk_iter_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_iter_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_58_SET_rg_xtp_ln_rx_sgdtk_dur_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dur_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_58_SET_rg_xtp_ln_rx_sgdtk_en_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_en_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_5C_SET_rg_xtp_ln_rx_sgdt_off2rdy_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_off2rdy_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_5C_SET_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_5C_SET_rg_xtp_ln_rx_sgdt_nbiasoff_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_nbiasoff_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_5C_SET_rg_xtp_ln_rx_sgdtk_wait_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdtk_wait_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_60_SET_rg_xtp_ln_rx_sgdt_acc_det_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_60_SET_rg_xtp_ln_rx_sgdt_acc_det_win4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win4, (reg32), (val))
#define PEXTP_DIG_LN_RX_60_SET_rg_xtp_ln_rx_sgdt_con_det_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_con_det_mode, (reg32), (val))
#define PEXTP_DIG_LN_RX_60_SET_rg_xtp_ln_rx_sgdt_acc_det_win123(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win123, (reg32), (val))

#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_exit_off_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_off_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_exit_coarse_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_coarse_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_elecidle_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_elecidle_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_e2_cklatch_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_e2_sam_det_win(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_win, (reg32), (val))
#define PEXTP_DIG_LN_RX_64_SET_rg_xtp_ln_rx_sgdt_e1_acccondet_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_sel, (reg32), (val))

#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen4_rleak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_rleak, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen3_rleak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_rleak, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen2_rleak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_rleak, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen1_rleak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_rleak, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen4_vth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_vth, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen3_vth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_vth, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen2_vth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_vth, (reg32), (val))
#define PEXTP_DIG_LN_RX_68_SET_rg_xtp_ln_rx_sgdt_gen1_vth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_vth, (reg32), (val))

#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen4_cfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_cfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen3_cfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_cfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen2_cfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_cfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen1_cfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_cfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw, (reg32), (val))
#define PEXTP_DIG_LN_RX_6C_SET_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw, (reg32), (val))

#define PEXTP_DIG_LN_RX_70_SET_rg_xtp_ln_rx_cdr_gen4_rfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen4_rfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_70_SET_rg_xtp_ln_rx_cdr_gen3_rfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen3_rfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_70_SET_rg_xtp_ln_rx_cdr_gen2_rfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen2_rfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_70_SET_rg_xtp_ln_rx_cdr_gen1_rfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen1_rfdok_th, (reg32), (val))

#define PEXTP_DIG_LN_RX_74_SET_rg_xtp_ln_rx_cdr_gen4_rfdx2_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen4_rfdx2_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_74_SET_rg_xtp_ln_rx_cdr_gen3_rfdx2_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen3_rfdx2_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_74_SET_rg_xtp_ln_rx_cdr_gen2_rfdx2_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen2_rfdx2_th, (reg32), (val))
#define PEXTP_DIG_LN_RX_74_SET_rg_xtp_ln_rx_cdr_gen1_rfdx2_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen1_rfdx2_th, (reg32), (val))

#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen4_rfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_rfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen3_rfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_rfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen2_rfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_rfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen1_rfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_rfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen4_cfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_cfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen3_cfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_cfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen2_cfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_cfdunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_78_SET_rg_xtp_ln_rx_cdr_gen1_cfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_cfdunit, (reg32), (val))

#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen4_pdkdvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkdvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen3_pdkdvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkdvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen2_pdkdvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkdvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen1_pdkdvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkdvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen4_pdndvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdndvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen3_pdndvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdndvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen2_pdndvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdndvn, (reg32), (val))
#define PEXTP_DIG_LN_RX_7C_SET_rg_xtp_ln_rx_cdr_gen1_pdndvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdndvn, (reg32), (val))

#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen4_pdkunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdkunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen3_pdkunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdkunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen2_pdkunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdkunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen1_pdkunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdkunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen4_pdnunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdnunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen3_pdnunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdnunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen2_pdnunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdnunit, (reg32), (val))
#define PEXTP_DIG_LN_RX_80_SET_rg_xtp_ln_rx_cdr_gen1_pdnunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdnunit, (reg32), (val))

#define PEXTP_DIG_LN_RX_84_SET_rg_xtp_ln_rx_cdr_gen4_pdnkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpc, (reg32), (val))
#define PEXTP_DIG_LN_RX_84_SET_rg_xtp_ln_rx_cdr_gen3_pdnkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpc, (reg32), (val))
#define PEXTP_DIG_LN_RX_84_SET_rg_xtp_ln_rx_cdr_gen2_pdnkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpc, (reg32), (val))
#define PEXTP_DIG_LN_RX_84_SET_rg_xtp_ln_rx_cdr_gen1_pdnkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpc, (reg32), (val))

#define PEXTP_DIG_LN_RX_88_SET_rg_xtp_ln_rx_cdr_gen4_pdkkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpc, (reg32), (val))
#define PEXTP_DIG_LN_RX_88_SET_rg_xtp_ln_rx_cdr_gen3_pdkkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpc, (reg32), (val))
#define PEXTP_DIG_LN_RX_88_SET_rg_xtp_ln_rx_cdr_gen2_pdkkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpc, (reg32), (val))
#define PEXTP_DIG_LN_RX_88_SET_rg_xtp_ln_rx_cdr_gen1_pdkkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpc, (reg32), (val))

#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen4_pdkkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen3_pdkkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen2_pdkkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen1_pdkkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen4_pdnkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen3_pdnkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen2_pdnkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpf, (reg32), (val))
#define PEXTP_DIG_LN_RX_8C_SET_rg_xtp_ln_rx_cdr_gen1_pdnkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpf, (reg32), (val))

#define PEXTP_DIG_LN_RX_90_SET_rg_xtp_ln_rx_cdrk_gen4_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen4_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_RX_90_SET_rg_xtp_ln_rx_cdrk_gen3_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen3_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_RX_90_SET_rg_xtp_ln_rx_cdrk_gen2_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen2_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_RX_90_SET_rg_xtp_ln_rx_cdrk_gen1_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen1_autok_band, (reg32), (val))

#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_cdr_gen4_ipath_stb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen4_ipath_stb, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_cdr_gen3_ipath_stb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen3_ipath_stb, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_cdr_gen2_ipath_stb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen2_ipath_stb, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_cdr_gen1_ipath_stb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen1_ipath_stb, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_rx_calib_acjtag_rxn_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_mode, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_rx_calib_acjtag_rxp_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_mode, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_rx_calib_acjtag_rxn_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_94_SET_rg_xtp_ln_rx_calib_acjtag_rxp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_en, (reg32), (val))

#define PEXTP_DIG_LN_RX_98_SET_rg_xtp_ln_rx_aeq_gen4_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen4_ctle, (reg32), (val))
#define PEXTP_DIG_LN_RX_98_SET_rg_xtp_ln_rx_aeq_gen3_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen3_ctle, (reg32), (val))
#define PEXTP_DIG_LN_RX_98_SET_rg_xtp_ln_rx_aeq_gen2_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen2_ctle, (reg32), (val))
#define PEXTP_DIG_LN_RX_98_SET_rg_xtp_ln_rx_aeq_gen1_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen1_ctle, (reg32), (val))

#define PEXTP_DIG_LN_RX_9C_SET_rg_xtp_ln_rx_pdown_e0_cal_ok(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_cal_ok, (reg32), (val))
#define PEXTP_DIG_LN_RX_9C_SET_rg_xtp_ln_rx_pdown_e0_aeq_done(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done, (reg32), (val))
#define PEXTP_DIG_LN_RX_9C_SET_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2, (reg32), (val))
#define PEXTP_DIG_LN_RX_9C_SET_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1, (reg32), (val))

#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_pdown_pp_exit_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_cal_done, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_pdown_data_valid_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_data_valid_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_pdown_aeq_adp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_adp_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_sgdt_gen4_hf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen4_hf, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_sgdt_gen3_hf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen3_hf, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_sgdt_gen2_hf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen2_hf, (reg32), (val))
#define PEXTP_DIG_LN_RX_A0_SET_rg_xtp_ln_rx_sgdt_gen1_hf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen1_hf, (reg32), (val))

#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp1, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp2, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp3, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp4, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp5(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp5, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp6(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp6, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_dfetp7(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp7, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_vga, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_ctle, (reg32), (val))
#define PEXTP_DIG_LN_RX_A4_SET_rg_xtp_ln_rx_aeq_strb_type_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_att, (reg32), (val))

#define PEXTP_DIG_LN_RX_A8_SET_rg_xtp_ln_rx_aeq_gen4_vgaref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen4_vgaref, (reg32), (val))
#define PEXTP_DIG_LN_RX_A8_SET_rg_xtp_ln_rx_aeq_gen3_vgaref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen3_vgaref, (reg32), (val))
#define PEXTP_DIG_LN_RX_A8_SET_rg_xtp_ln_rx_aeq_gen2_vgaref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen2_vgaref, (reg32), (val))
#define PEXTP_DIG_LN_RX_A8_SET_rg_xtp_ln_rx_aeq_gen1_vgaref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen1_vgaref, (reg32), (val))

#define PEXTP_DIG_LN_RX_AC_SET_rg_xtp_ln_rx_pdown_eidle_det_win2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win2, (reg32), (val))
#define PEXTP_DIG_LN_RX_AC_SET_rg_xtp_ln_rx_pdown_eidle_det_win1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win1, (reg32), (val))

#define PEXTP_DIG_LN_RX_B0_SET_rg_xtp_ln_rx_pdown_eidle_det_timer(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_timer, (reg32), (val))
#define PEXTP_DIG_LN_RX_B0_SET_rg_xtp_ln_rx_pdown_eidle_det_win4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win4, (reg32), (val))
#define PEXTP_DIG_LN_RX_B0_SET_rg_xtp_ln_rx_pdown_eidle_det_win3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win3, (reg32), (val))

#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_eidle_det_vld_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_vld_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_e2_cklatch_dis(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_dis, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_sgdt_con_det_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_con_det_sel, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_eidle_det_woe0s(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_woe0s, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_eidle_det_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp7_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp6_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp5_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp4_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp3_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp2_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_dfetp1_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_lck2ref_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_dir, (reg32), (val))
#define PEXTP_DIG_LN_RX_B4_SET_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir, (reg32), (val))

#define PEXTP_DIG_LN_RX_B8_SET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2, (reg32), (val))
#define PEXTP_DIG_LN_RX_B8_SET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1, (reg32), (val))

#define PEXTP_DIG_LN_RX_BC_SET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4, (reg32), (val))
#define PEXTP_DIG_LN_RX_BC_SET_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_C0_SET_rgs_xtp_ln_rx_slock_prbs_errcnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_errcnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C0_SET_rgs_xtp_ln_rx_slock_retrack(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_retrack, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C0_SET_rgs_xtp_ln_rx_slock_prbs_passth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_passth, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C0_SET_rgs_xtp_ln_rx_slock_prbs_pass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_pass, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C0_SET_rgs_xtp_ln_rx_slock_prbs_lock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_lock, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_C4_SET_rgs_xtp_ln_rx_ebuf12_ebufmsg(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebufmsg, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C4_SET_rgs_xtp_ln_rx_ebuf3_fifo_empty(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_empty, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C4_SET_rgs_xtp_ln_rx_ebuf3_fifo_full(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_full, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C4_SET_rgs_xtp_ln_rx_ebuf12_ebuf_udf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_udf, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C4_SET_rgs_xtp_ln_rx_ebuf12_ebuf_ovf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_ovf, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_C8_SET_rgs_xtp_ln_rx_prbs_errcnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_errcnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C8_SET_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C8_SET_rgs_xtp_ln_rx_prbs_passth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_passth, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C8_SET_rgs_xtp_ln_rx_prbs_pass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_pass, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_C8_SET_rgs_xtp_ln_rx_prbs_lock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_lock, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_CC_SET_rgs_xtp_ln_rx_ptc_rx_errcnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_errcnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_CC_SET_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_CC_SET_rgs_xtp_ln_rx_ptc_rx_passth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_passth, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_CC_SET_rgs_xtp_ln_rx_ptc_rx_pass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_pass, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_CC_SET_rgs_xtp_ln_rx_ptc_rx_lock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_lock, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_D0_SET_rgs_xtp_ln_rx_pdown_gen4_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen4_retry_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D0_SET_rgs_xtp_ln_rx_pdown_gen3_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen3_retry_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D0_SET_rgs_xtp_ln_rx_pdown_gen2_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen2_retry_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D0_SET_rgs_xtp_ln_rx_pdown_gen1_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen1_retry_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen4_fdlock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_fdlock, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen4_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen3_fdlock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_fdlock, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen3_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen2_fdlock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_fdlock, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen2_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen1_fdlock(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_fdlock, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D4_SET_rgs_xtp_ln_rx_cdrk_gen1_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_autok_band, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_D8_SET_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D8_SET_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D8_SET_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_D8_SET_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_DC_SET_rg_xtp_ln_rx_sgdt_acc_det_win2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win2, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_DC_SET_rg_xtp_ln_rx_sgdt_acc_det_win1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win1, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_E0_SET_rg_xtp_ln_rx_afe_gen4_bwsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen4_bwsel, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E0_SET_rg_xtp_ln_rx_afe_gen3_bwsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen3_bwsel, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E0_SET_rg_xtp_ln_rx_afe_gen2_bwsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen2_bwsel, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E0_SET_rg_xtp_ln_rx_afe_gen1_bwsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen1_bwsel, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E0_SET_rg_xtp_ln_rx_sgdt_acc_det_win3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_sgdt_acc_det_win3, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_E4_SET_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E4_SET_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E4_SET_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E4_SET_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_E8_SET_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E8_SET_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E8_SET_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_E8_SET_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min, (reg32), (val))

#define PEXTP_DIG_LN_RX_RGS_EC_SET_rg_xtp_ln_rx_aeq_gen4_ctle_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen4_ctle_max, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_EC_SET_rg_xtp_ln_rx_aeq_gen3_ctle_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen3_ctle_max, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_EC_SET_rg_xtp_ln_rx_aeq_gen2_ctle_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen2_ctle_max, (reg32), (val))
#define PEXTP_DIG_LN_RX_RGS_EC_SET_rg_xtp_ln_rx_aeq_gen1_ctle_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen1_ctle_max, (reg32), (val))

#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen4_ctle_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen3_ctle_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen2_ctle_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen1_ctle_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen4_ctle1_csel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle1_csel, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen3_ctle1_csel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle1_csel, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen2_ctle1_csel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle1_csel, (reg32), (val))
#define PEXTP_DIG_LN_RX_F0_SET_rg_xtp_ln_rx_gen1_ctle1_csel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle1_csel, (reg32), (val))

#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen4_vga_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen3_vga_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen2_vga_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen1_vga_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen4_vga_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen3_vga_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen2_vga_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F4_SET_rg_xtp_ln_rx_gen1_vga_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_cdec, (reg32), (val))

#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen4_digclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_digclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen3_digclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_digclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen2_digclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_digclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen1_digclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_digclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen4_piclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_piclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen3_piclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_piclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen2_piclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_piclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen1_piclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_piclk_div, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen4_iir_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_iir_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen3_iir_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_iir_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen2_iir_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_iir_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen1_iir_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_iir_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen4_dessc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen3_dessc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_dessc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen2_dessc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_dessc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_cdr_gen1_dessc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_dessc_en, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_rx_gen4_ctle_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_rx_gen3_ctle_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_rx_gen2_ctle_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_RX_F8_SET_rg_xtp_ln_rx_gen1_ctle_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_rdec, (reg32), (val))

#define PEXTP_DIG_LN_RX_FC_SET_rg_xtp_ln_cdr_gen4_digspeed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen4_digspeed, (reg32), (val))
#define PEXTP_DIG_LN_RX_FC_SET_rg_xtp_ln_cdr_gen3_digspeed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen3_digspeed, (reg32), (val))
#define PEXTP_DIG_LN_RX_FC_SET_rg_xtp_ln_cdr_gen2_digspeed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen2_digspeed, (reg32), (val))
#define PEXTP_DIG_LN_RX_FC_SET_rg_xtp_ln_cdr_gen1_digspeed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen1_digspeed, (reg32), (val))

#define PEXTP_DIG_LN_RX_00_VAL_rg_xtp_ln_rx_slock_retrack_dis(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_retrack_dis, (val))
#define PEXTP_DIG_LN_RX_00_VAL_rg_xtp_ln_rx_slock_prbs_berth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_berth, (val))
#define PEXTP_DIG_LN_RX_00_VAL_rg_xtp_ln_rx_slock_prbs_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_prbs_en, (val))
#define PEXTP_DIG_LN_RX_00_VAL_rg_xtp_ln_rx_slock_rtcomcnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_rtcomcnt, (val))
#define PEXTP_DIG_LN_RX_00_VAL_rg_xtp_ln_rx_slock_comcnt(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_comcnt, (val))
#define PEXTP_DIG_LN_RX_00_VAL_rg_xtp_ln_rx_slock_bpslock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_00_FLD_rg_xtp_ln_rx_slock_bpslock, (val))

#define PEXTP_DIG_LN_RX_04_VAL_rg_xtp_ln_rx_ebuf12_rx_polarity_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_rx_polarity_en, (val))
#define PEXTP_DIG_LN_RX_04_VAL_rg_xtp_ln_rx_ebuf12_pcie2_k_emp(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_emp, (val))
#define PEXTP_DIG_LN_RX_04_VAL_rg_xtp_ln_rx_ebuf12_pcie2_k_ful(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_pcie2_k_ful, (val))
#define PEXTP_DIG_LN_RX_04_VAL_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_p_t2rlb_skp_en, (val))
#define PEXTP_DIG_LN_RX_04_VAL_rg_xtp_ln_rx_ebuf12_valid_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_valid_en, (val))
#define PEXTP_DIG_LN_RX_04_VAL_rg_xtp_ln_rx_ebuf12_ebuf_srst(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_04_FLD_rg_xtp_ln_rx_ebuf12_ebuf_srst, (val))

#define PEXTP_DIG_LN_RX_08_VAL_rg_xtp_ln_rx_ebuf12_ebufctl(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_08_FLD_rg_xtp_ln_rx_ebuf12_ebufctl, (val))

#define PEXTP_DIG_LN_RX_0C_VAL_rg_xtp_ln_rx_path_pplb_eiosdet_dis(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_path_pplb_eiosdet_dis, (val))
#define PEXTP_DIG_LN_RX_0C_VAL_rg_xtp_ln_rx_rdm_prb_phsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_rdm_prb_phsel, (val))
#define PEXTP_DIG_LN_RX_0C_VAL_rg_xtp_ln_rx_ansid_test(val)    REG_FLD_VAL(PEXTP_DIG_LN_RX_0C_FLD_rg_xtp_ln_rx_ansid_test, (val))

#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_prbs_chk_cyc(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_chk_cyc, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_prbs_inv(val)      REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_prbs_inv, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_cdr_dig_stb_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_dig_stb_sel, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_cdr_locksel(val)   REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_cdr_locksel, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_balign_ctrl_rpls_det(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_ctrl_rpls_det, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_balign_lock_thr(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_lock_thr, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_balign_chk_hdr(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_chk_hdr, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_balign_frc_eios_det(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_frc_eios_det, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_balign_dis_pipe_ctl(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_dis_pipe_ctl, (val))
#define PEXTP_DIG_LN_RX_10_VAL_rg_xtp_ln_rx_balign_prb_phsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_10_FLD_rg_xtp_ln_rx_balign_prb_phsel, (val))

#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ptc_chk_cyc(val)   REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ptc_chk_cyc, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_fsm_bak(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_fsm_bak, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_wr_hsize_thr(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_wr_hsize_thr, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_hsize_thr(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_hsize_thr, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_clr_sts(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_clr_sts, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_mask_2nd_skp(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_mask_2nd_skp, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_flush(val)   REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_flush, (val))
#define PEXTP_DIG_LN_RX_14_VAL_rg_xtp_ln_rx_ebuf3_prb_phsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_14_FLD_rg_xtp_ln_rx_ebuf3_prb_phsel, (val))

#define PEXTP_DIG_LN_RX_18_VAL_rg_xtp_ln_rx_prbs_berth(val)    REG_FLD_VAL(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_berth, (val))
#define PEXTP_DIG_LN_RX_18_VAL_rg_xtp_ln_rx_prbs_lock_thr(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_lock_thr, (val))
#define PEXTP_DIG_LN_RX_18_VAL_rg_xtp_ln_rx_prbs_chk_cyc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_chk_cyc_en, (val))
#define PEXTP_DIG_LN_RX_18_VAL_rg_xtp_ln_rx_prbs_prb_phsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_18_FLD_rg_xtp_ln_rx_prbs_prb_phsel, (val))

#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_rx_berth(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_rx_berth, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_lock_thr(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lock_thr, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_tx_preset(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_tx_preset, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_lane_idx(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_lane_idx, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_type(val)      REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_type, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_chk_cyc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_chk_cyc_en, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_en(val)        REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_en, (val))
#define PEXTP_DIG_LN_RX_1C_VAL_rg_xtp_ln_rx_ptc_prb_phsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_1C_FLD_rg_xtp_ln_rx_ptc_prb_phsel, (val))

#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_recal_wait(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_recal_wait, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_rxen_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rxen_cnt, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_rstb_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_rstb_cnt, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_aeq_done_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done_sel, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_retry_cnt_rst(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_retry_cnt_rst, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_lck2ref_gate(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_gate, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_caldone_exit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_caldone_exit, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_cken_rst_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_cken_rst_sel, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e0_active_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e0_active_en, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e1_goto_e0(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e1_goto_e0, (val))
#define PEXTP_DIG_LN_RX_20_VAL_rg_xtp_ln_rx_pdown_e2_goto_e1(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_20_FLD_rg_xtp_ln_rx_pdown_e2_goto_e1, (val))

#define PEXTP_DIG_LN_RX_24_VAL_rg_xtp_ln_rx_pdown_e0_caldone_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_caldone_cnt, (val))
#define PEXTP_DIG_LN_RX_24_VAL_rg_xtp_ln_rx_pdown_e0_ckstb_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_24_FLD_rg_xtp_ln_rx_pdown_e0_ckstb_cnt, (val))

#define PEXTP_DIG_LN_RX_28_VAL_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_sgdtrst_cnt, (val))
#define PEXTP_DIG_LN_RX_28_VAL_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_aeqdis_cnt, (val))
#define PEXTP_DIG_LN_RX_28_VAL_rg_xtp_ln_rx_pdown_e0_track2_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track2_cnt, (val))
#define PEXTP_DIG_LN_RX_28_VAL_rg_xtp_ln_rx_pdown_e0_track1_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_28_FLD_rg_xtp_ln_rx_pdown_e0_track1_cnt, (val))

#define PEXTP_DIG_LN_RX_2C_VAL_rg_xtp_ln_rx_pdown_e0_cal_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cal_cnt, (val))
#define PEXTP_DIG_LN_RX_2C_VAL_rg_xtp_ln_rx_pdown_e0s_hold(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_hold, (val))
#define PEXTP_DIG_LN_RX_2C_VAL_rg_xtp_ln_rx_pdown_e0_recal_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_recal_cnt, (val))
#define PEXTP_DIG_LN_RX_2C_VAL_rg_xtp_ln_rx_pdown_e0s_st_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0s_st_cnt, (val))
#define PEXTP_DIG_LN_RX_2C_VAL_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_2C_FLD_rg_xtp_ln_rx_pdown_e0_cdrdis_cnt, (val))

#define PEXTP_DIG_LN_RX_30_VAL_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_us, (val))
#define PEXTP_DIG_LN_RX_30_VAL_rg_xtp_ln_rx_pdown_t2rlb_dig_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_t2rlb_dig_en, (val))
#define PEXTP_DIG_LN_RX_30_VAL_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_30_FLD_rg_xtp_ln_rx_pdown_l1p2_exit_wait_cnt, (val))

#define PEXTP_DIG_LN_RX_34_VAL_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_cnt, (val))
#define PEXTP_DIG_LN_RX_34_VAL_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_34_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_wait_ns, (val))

#define PEXTP_DIG_LN_RX_38_VAL_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_cnt, (val))
#define PEXTP_DIG_LN_RX_38_VAL_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_38_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_cnt, (val))

#define PEXTP_DIG_LN_RX_3C_VAL_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_cnt, (val))
#define PEXTP_DIG_LN_RX_3C_VAL_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_3C_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_cnt, (val))

#define PEXTP_DIG_LN_RX_40_VAL_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_cnt, (val))
#define PEXTP_DIG_LN_RX_40_VAL_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_40_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_cnt, (val))

#define PEXTP_DIG_LN_RX_44_VAL_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_cnt, (val))
#define PEXTP_DIG_LN_RX_44_VAL_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_44_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_cnt, (val))

#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_eqinvld_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqinvld_cnt, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_eqcoef_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqcoef_cnt, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_eqen_cnt(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_eqen_cnt, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_da_latch_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_da_latch_sel, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_rec_latch_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rec_latch_sel, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_rmtx_skip(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_rmtx_skip, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_re_eq(val)     REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_re_eq, (val))
#define PEXTP_DIG_LN_RX_48_VAL_rg_xtp_ln_rx_aeq_no_response(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_48_FLD_rg_xtp_ln_rx_aeq_no_response, (val))

#define PEXTP_DIG_LN_RX_4C_VAL_rg_xtp_ln_rx_aeq_adp_cnt(val)   REG_FLD_VAL(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adp_cnt, (val))
#define PEXTP_DIG_LN_RX_4C_VAL_rg_xtp_ln_rx_aeq_adpbase_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpbase_cnt, (val))
#define PEXTP_DIG_LN_RX_4C_VAL_rg_xtp_ln_rx_aeq_adpstrb_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_4C_FLD_rg_xtp_ln_rx_aeq_adpstrb_cnt, (val))

#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen4_bypass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_bypass, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen4_att(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen4_att, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen3_bypass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_bypass, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen3_att(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen3_att, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen2_bypass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_bypass, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen2_att(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen2_att, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen1_bypass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_bypass, (val))
#define PEXTP_DIG_LN_RX_50_VAL_rg_xtp_ln_rx_aeq_gen1_att(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_50_FLD_rg_xtp_ln_rx_aeq_gen1_att, (val))

#define PEXTP_DIG_LN_RX_54_VAL_rg_xtp_ln_rx_aeq_gen4_vga(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen4_vga, (val))
#define PEXTP_DIG_LN_RX_54_VAL_rg_xtp_ln_rx_aeq_gen3_vga(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen3_vga, (val))
#define PEXTP_DIG_LN_RX_54_VAL_rg_xtp_ln_rx_aeq_gen2_vga(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen2_vga, (val))
#define PEXTP_DIG_LN_RX_54_VAL_rg_xtp_ln_rx_aeq_gen1_vga(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_54_FLD_rg_xtp_ln_rx_aeq_gen1_vga, (val))

#define PEXTP_DIG_LN_RX_58_VAL_rg_xtp_ln_rx_sgdtk_dis_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dis_cnt, (val))
#define PEXTP_DIG_LN_RX_58_VAL_rg_xtp_ln_rx_sgdtk_iter_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_iter_cnt, (val))
#define PEXTP_DIG_LN_RX_58_VAL_rg_xtp_ln_rx_sgdtk_dur_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_dur_cnt, (val))
#define PEXTP_DIG_LN_RX_58_VAL_rg_xtp_ln_rx_sgdtk_en_cnt(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_58_FLD_rg_xtp_ln_rx_sgdtk_en_cnt, (val))

#define PEXTP_DIG_LN_RX_5C_VAL_rg_xtp_ln_rx_sgdt_off2rdy_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_off2rdy_cnt, (val))
#define PEXTP_DIG_LN_RX_5C_VAL_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_coarse2rdy_cnt, (val))
#define PEXTP_DIG_LN_RX_5C_VAL_rg_xtp_ln_rx_sgdt_nbiasoff_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdt_nbiasoff_cnt, (val))
#define PEXTP_DIG_LN_RX_5C_VAL_rg_xtp_ln_rx_sgdtk_wait_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_5C_FLD_rg_xtp_ln_rx_sgdtk_wait_cnt, (val))

#define PEXTP_DIG_LN_RX_60_VAL_rg_xtp_ln_rx_sgdt_acc_det_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt, (val))
#define PEXTP_DIG_LN_RX_60_VAL_rg_xtp_ln_rx_sgdt_acc_det_win4(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win4, (val))
#define PEXTP_DIG_LN_RX_60_VAL_rg_xtp_ln_rx_sgdt_con_det_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_con_det_mode, (val))
#define PEXTP_DIG_LN_RX_60_VAL_rg_xtp_ln_rx_sgdt_acc_det_win123(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_60_FLD_rg_xtp_ln_rx_sgdt_acc_det_win123, (val))

#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_exit_off_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_off_sel, (val))
#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_exit_coarse_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_exit_coarse_sel, (val))
#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_elecidle_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_elecidle_sel, (val))
#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_e2_cklatch_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel, (val))
#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt, (val))
#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_e2_sam_det_win(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_win, (val))
#define PEXTP_DIG_LN_RX_64_VAL_rg_xtp_ln_rx_sgdt_e1_acccondet_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_64_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_sel, (val))

#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen4_rleak(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_rleak, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen3_rleak(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_rleak, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen2_rleak(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_rleak, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen1_rleak(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_rleak, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen4_vth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen4_vth, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen3_vth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen3_vth, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen2_vth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen2_vth, (val))
#define PEXTP_DIG_LN_RX_68_VAL_rg_xtp_ln_rx_sgdt_gen1_vth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_68_FLD_rg_xtp_ln_rx_sgdt_gen1_vth, (val))

#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen4_cfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_cfdok_th, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen3_cfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_cfdok_th, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen2_cfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_cfdok_th, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen1_cfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_cfdok_th, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen4_int1_lpfbw, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen3_int1_lpfbw, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen2_int1_lpfbw, (val))
#define PEXTP_DIG_LN_RX_6C_VAL_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_6C_FLD_rg_xtp_ln_rx_cdr_gen1_int1_lpfbw, (val))

#define PEXTP_DIG_LN_RX_70_VAL_rg_xtp_ln_rx_cdr_gen4_rfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen4_rfdok_th, (val))
#define PEXTP_DIG_LN_RX_70_VAL_rg_xtp_ln_rx_cdr_gen3_rfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen3_rfdok_th, (val))
#define PEXTP_DIG_LN_RX_70_VAL_rg_xtp_ln_rx_cdr_gen2_rfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen2_rfdok_th, (val))
#define PEXTP_DIG_LN_RX_70_VAL_rg_xtp_ln_rx_cdr_gen1_rfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_70_FLD_rg_xtp_ln_rx_cdr_gen1_rfdok_th, (val))

#define PEXTP_DIG_LN_RX_74_VAL_rg_xtp_ln_rx_cdr_gen4_rfdx2_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen4_rfdx2_th, (val))
#define PEXTP_DIG_LN_RX_74_VAL_rg_xtp_ln_rx_cdr_gen3_rfdx2_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen3_rfdx2_th, (val))
#define PEXTP_DIG_LN_RX_74_VAL_rg_xtp_ln_rx_cdr_gen2_rfdx2_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen2_rfdx2_th, (val))
#define PEXTP_DIG_LN_RX_74_VAL_rg_xtp_ln_rx_cdr_gen1_rfdx2_th(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_74_FLD_rg_xtp_ln_rx_cdr_gen1_rfdx2_th, (val))

#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen4_rfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_rfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen3_rfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_rfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen2_rfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_rfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen1_rfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_rfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen4_cfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen4_cfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen3_cfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen3_cfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen2_cfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen2_cfdunit, (val))
#define PEXTP_DIG_LN_RX_78_VAL_rg_xtp_ln_rx_cdr_gen1_cfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_78_FLD_rg_xtp_ln_rx_cdr_gen1_cfdunit, (val))

#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen4_pdkdvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkdvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen3_pdkdvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkdvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen2_pdkdvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkdvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen1_pdkdvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkdvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen4_pdndvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen4_pdndvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen3_pdndvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen3_pdndvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen2_pdndvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen2_pdndvn, (val))
#define PEXTP_DIG_LN_RX_7C_VAL_rg_xtp_ln_rx_cdr_gen1_pdndvn(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_7C_FLD_rg_xtp_ln_rx_cdr_gen1_pdndvn, (val))

#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen4_pdkunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdkunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen3_pdkunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdkunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen2_pdkunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdkunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen1_pdkunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdkunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen4_pdnunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen4_pdnunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen3_pdnunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen3_pdnunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen2_pdnunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen2_pdnunit, (val))
#define PEXTP_DIG_LN_RX_80_VAL_rg_xtp_ln_rx_cdr_gen1_pdnunit(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_80_FLD_rg_xtp_ln_rx_cdr_gen1_pdnunit, (val))

#define PEXTP_DIG_LN_RX_84_VAL_rg_xtp_ln_rx_cdr_gen4_pdnkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpc, (val))
#define PEXTP_DIG_LN_RX_84_VAL_rg_xtp_ln_rx_cdr_gen3_pdnkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpc, (val))
#define PEXTP_DIG_LN_RX_84_VAL_rg_xtp_ln_rx_cdr_gen2_pdnkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpc, (val))
#define PEXTP_DIG_LN_RX_84_VAL_rg_xtp_ln_rx_cdr_gen1_pdnkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_84_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpc, (val))

#define PEXTP_DIG_LN_RX_88_VAL_rg_xtp_ln_rx_cdr_gen4_pdkkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpc, (val))
#define PEXTP_DIG_LN_RX_88_VAL_rg_xtp_ln_rx_cdr_gen3_pdkkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpc, (val))
#define PEXTP_DIG_LN_RX_88_VAL_rg_xtp_ln_rx_cdr_gen2_pdkkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpc, (val))
#define PEXTP_DIG_LN_RX_88_VAL_rg_xtp_ln_rx_cdr_gen1_pdkkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_88_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpc, (val))

#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen4_pdkkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdkkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen3_pdkkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdkkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen2_pdkkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdkkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen1_pdkkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdkkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen4_pdnkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen4_pdnkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen3_pdnkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen3_pdnkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen2_pdnkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen2_pdnkpf, (val))
#define PEXTP_DIG_LN_RX_8C_VAL_rg_xtp_ln_rx_cdr_gen1_pdnkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_8C_FLD_rg_xtp_ln_rx_cdr_gen1_pdnkpf, (val))

#define PEXTP_DIG_LN_RX_90_VAL_rg_xtp_ln_rx_cdrk_gen4_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen4_autok_band, (val))
#define PEXTP_DIG_LN_RX_90_VAL_rg_xtp_ln_rx_cdrk_gen3_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen3_autok_band, (val))
#define PEXTP_DIG_LN_RX_90_VAL_rg_xtp_ln_rx_cdrk_gen2_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen2_autok_band, (val))
#define PEXTP_DIG_LN_RX_90_VAL_rg_xtp_ln_rx_cdrk_gen1_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_90_FLD_rg_xtp_ln_rx_cdrk_gen1_autok_band, (val))

#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_cdr_gen4_ipath_stb(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen4_ipath_stb, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_cdr_gen3_ipath_stb(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen3_ipath_stb, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_cdr_gen2_ipath_stb(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen2_ipath_stb, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_cdr_gen1_ipath_stb(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_cdr_gen1_ipath_stb, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_rx_calib_acjtag_rxn_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_mode, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_rx_calib_acjtag_rxp_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_mode, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_rx_calib_acjtag_rxn_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxn_en, (val))
#define PEXTP_DIG_LN_RX_94_VAL_rg_xtp_ln_rx_calib_acjtag_rxp_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_94_FLD_rg_xtp_ln_rx_calib_acjtag_rxp_en, (val))

#define PEXTP_DIG_LN_RX_98_VAL_rg_xtp_ln_rx_aeq_gen4_ctle(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen4_ctle, (val))
#define PEXTP_DIG_LN_RX_98_VAL_rg_xtp_ln_rx_aeq_gen3_ctle(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen3_ctle, (val))
#define PEXTP_DIG_LN_RX_98_VAL_rg_xtp_ln_rx_aeq_gen2_ctle(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen2_ctle, (val))
#define PEXTP_DIG_LN_RX_98_VAL_rg_xtp_ln_rx_aeq_gen1_ctle(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_98_FLD_rg_xtp_ln_rx_aeq_gen1_ctle, (val))

#define PEXTP_DIG_LN_RX_9C_VAL_rg_xtp_ln_rx_pdown_e0_cal_ok(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_cal_ok, (val))
#define PEXTP_DIG_LN_RX_9C_VAL_rg_xtp_ln_rx_pdown_e0_aeq_done(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeq_done, (val))
#define PEXTP_DIG_LN_RX_9C_VAL_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt2, (val))
#define PEXTP_DIG_LN_RX_9C_VAL_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_9C_FLD_rg_xtp_ln_rx_pdown_e0_aeqckon_cnt1, (val))

#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_pdown_pp_exit_cal_done(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_cal_done, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_pdown_data_valid_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_data_valid_en, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_pdown_aeq_adp_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_adp_en, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_pp_exit_aeq_chk, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_pdown_aeq_ini_latch_sel, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_sgdt_gen4_hf(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen4_hf, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_sgdt_gen3_hf(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen3_hf, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_sgdt_gen2_hf(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen2_hf, (val))
#define PEXTP_DIG_LN_RX_A0_VAL_rg_xtp_ln_rx_sgdt_gen1_hf(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_A0_FLD_rg_xtp_ln_rx_sgdt_gen1_hf, (val))

#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp1(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp1, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp2(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp2, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp3(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp3, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp4(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp4, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp5(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp5, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp6(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp6, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_dfetp7(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_dfetp7, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_vga(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_vga, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_ctle(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_ctle, (val))
#define PEXTP_DIG_LN_RX_A4_VAL_rg_xtp_ln_rx_aeq_strb_type_att(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A4_FLD_rg_xtp_ln_rx_aeq_strb_type_att, (val))

#define PEXTP_DIG_LN_RX_A8_VAL_rg_xtp_ln_rx_aeq_gen4_vgaref(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen4_vgaref, (val))
#define PEXTP_DIG_LN_RX_A8_VAL_rg_xtp_ln_rx_aeq_gen3_vgaref(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen3_vgaref, (val))
#define PEXTP_DIG_LN_RX_A8_VAL_rg_xtp_ln_rx_aeq_gen2_vgaref(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen2_vgaref, (val))
#define PEXTP_DIG_LN_RX_A8_VAL_rg_xtp_ln_rx_aeq_gen1_vgaref(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_A8_FLD_rg_xtp_ln_rx_aeq_gen1_vgaref, (val))

#define PEXTP_DIG_LN_RX_AC_VAL_rg_xtp_ln_rx_pdown_eidle_det_win2(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win2, (val))
#define PEXTP_DIG_LN_RX_AC_VAL_rg_xtp_ln_rx_pdown_eidle_det_win1(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_AC_FLD_rg_xtp_ln_rx_pdown_eidle_det_win1, (val))

#define PEXTP_DIG_LN_RX_B0_VAL_rg_xtp_ln_rx_pdown_eidle_det_timer(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_timer, (val))
#define PEXTP_DIG_LN_RX_B0_VAL_rg_xtp_ln_rx_pdown_eidle_det_win4(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win4, (val))
#define PEXTP_DIG_LN_RX_B0_VAL_rg_xtp_ln_rx_pdown_eidle_det_win3(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B0_FLD_rg_xtp_ln_rx_pdown_eidle_det_win3, (val))

#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_rst_sel, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_eidle_det_vld_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_vld_en, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_e2_cklatch_dis(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_dis, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_cklatch_sel_ext, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e1_acccondet_chk_sel, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_e2_sam_det_cnt_ext, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_acc_det_cnt_ext, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_sgdt_con_det_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_sgdt_con_det_sel, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_eidle_det_woe0s(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_woe0s, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_eidle_det_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_eidle_det_en, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp7_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp7_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp6_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp6_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp5_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp5_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp4_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp4_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp3_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp3_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp2_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp2_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_dfetp1_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_dfetp1_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_lck2ref_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_lck2ref_dir, (val))
#define PEXTP_DIG_LN_RX_B4_VAL_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B4_FLD_rg_xtp_ln_rx_pdown_e0_aeqen_en_dir, (val))

#define PEXTP_DIG_LN_RX_B8_VAL_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen2, (val))
#define PEXTP_DIG_LN_RX_B8_VAL_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_B8_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen1, (val))

#define PEXTP_DIG_LN_RX_BC_VAL_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen4, (val))
#define PEXTP_DIG_LN_RX_BC_VAL_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_BC_FLD_rg_xtp_ln_rx_sgdt_con_det_cnt_gen3, (val))

#define PEXTP_DIG_LN_RX_RGS_C0_VAL_rgs_xtp_ln_rx_slock_prbs_errcnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_errcnt, (val))
#define PEXTP_DIG_LN_RX_RGS_C0_VAL_rgs_xtp_ln_rx_slock_retrack(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_retrack, (val))
#define PEXTP_DIG_LN_RX_RGS_C0_VAL_rgs_xtp_ln_rx_slock_prbs_passth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_passth, (val))
#define PEXTP_DIG_LN_RX_RGS_C0_VAL_rgs_xtp_ln_rx_slock_prbs_pass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_pass, (val))
#define PEXTP_DIG_LN_RX_RGS_C0_VAL_rgs_xtp_ln_rx_slock_prbs_lock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C0_FLD_rgs_xtp_ln_rx_slock_prbs_lock, (val))

#define PEXTP_DIG_LN_RX_RGS_C4_VAL_rgs_xtp_ln_rx_ebuf12_ebufmsg(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebufmsg, (val))
#define PEXTP_DIG_LN_RX_RGS_C4_VAL_rgs_xtp_ln_rx_ebuf3_fifo_empty(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_empty, (val))
#define PEXTP_DIG_LN_RX_RGS_C4_VAL_rgs_xtp_ln_rx_ebuf3_fifo_full(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf3_fifo_full, (val))
#define PEXTP_DIG_LN_RX_RGS_C4_VAL_rgs_xtp_ln_rx_ebuf12_ebuf_udf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_udf, (val))
#define PEXTP_DIG_LN_RX_RGS_C4_VAL_rgs_xtp_ln_rx_ebuf12_ebuf_ovf(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C4_FLD_rgs_xtp_ln_rx_ebuf12_ebuf_ovf, (val))

#define PEXTP_DIG_LN_RX_RGS_C8_VAL_rgs_xtp_ln_rx_prbs_errcnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_errcnt, (val))
#define PEXTP_DIG_LN_RX_RGS_C8_VAL_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_chk_cyc_errcnt_rdy, (val))
#define PEXTP_DIG_LN_RX_RGS_C8_VAL_rgs_xtp_ln_rx_prbs_passth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_passth, (val))
#define PEXTP_DIG_LN_RX_RGS_C8_VAL_rgs_xtp_ln_rx_prbs_pass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_pass, (val))
#define PEXTP_DIG_LN_RX_RGS_C8_VAL_rgs_xtp_ln_rx_prbs_lock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_C8_FLD_rgs_xtp_ln_rx_prbs_lock, (val))

#define PEXTP_DIG_LN_RX_RGS_CC_VAL_rgs_xtp_ln_rx_ptc_rx_errcnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_errcnt, (val))
#define PEXTP_DIG_LN_RX_RGS_CC_VAL_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_chk_cyc_errcnt_rdy, (val))
#define PEXTP_DIG_LN_RX_RGS_CC_VAL_rgs_xtp_ln_rx_ptc_rx_passth(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_passth, (val))
#define PEXTP_DIG_LN_RX_RGS_CC_VAL_rgs_xtp_ln_rx_ptc_rx_pass(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_pass, (val))
#define PEXTP_DIG_LN_RX_RGS_CC_VAL_rgs_xtp_ln_rx_ptc_rx_lock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_CC_FLD_rgs_xtp_ln_rx_ptc_rx_lock, (val))

#define PEXTP_DIG_LN_RX_RGS_D0_VAL_rgs_xtp_ln_rx_pdown_gen4_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen4_retry_cnt, (val))
#define PEXTP_DIG_LN_RX_RGS_D0_VAL_rgs_xtp_ln_rx_pdown_gen3_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen3_retry_cnt, (val))
#define PEXTP_DIG_LN_RX_RGS_D0_VAL_rgs_xtp_ln_rx_pdown_gen2_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen2_retry_cnt, (val))
#define PEXTP_DIG_LN_RX_RGS_D0_VAL_rgs_xtp_ln_rx_pdown_gen1_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D0_FLD_rgs_xtp_ln_rx_pdown_gen1_retry_cnt, (val))

#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen4_fdlock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_fdlock, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen4_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen4_autok_band, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen3_fdlock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_fdlock, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen3_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen3_autok_band, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen2_fdlock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_fdlock, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen2_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen2_autok_band, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen1_fdlock(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_fdlock, (val))
#define PEXTP_DIG_LN_RX_RGS_D4_VAL_rgs_xtp_ln_rx_cdrk_gen1_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D4_FLD_rgs_xtp_ln_rx_cdrk_gen1_autok_band, (val))

#define PEXTP_DIG_LN_RX_RGS_D8_VAL_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen4_retry_cnt, (val))
#define PEXTP_DIG_LN_RX_RGS_D8_VAL_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen3_retry_cnt, (val))
#define PEXTP_DIG_LN_RX_RGS_D8_VAL_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen2_retry_cnt, (val))
#define PEXTP_DIG_LN_RX_RGS_D8_VAL_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_D8_FLD_rgs_xtp_ln_rx_cdrk_gen1_retry_cnt, (val))

#define PEXTP_DIG_LN_RX_RGS_DC_VAL_rg_xtp_ln_rx_sgdt_acc_det_win2(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win2, (val))
#define PEXTP_DIG_LN_RX_RGS_DC_VAL_rg_xtp_ln_rx_sgdt_acc_det_win1(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_DC_FLD_rg_xtp_ln_rx_sgdt_acc_det_win1, (val))

#define PEXTP_DIG_LN_RX_RGS_E0_VAL_rg_xtp_ln_rx_afe_gen4_bwsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen4_bwsel, (val))
#define PEXTP_DIG_LN_RX_RGS_E0_VAL_rg_xtp_ln_rx_afe_gen3_bwsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen3_bwsel, (val))
#define PEXTP_DIG_LN_RX_RGS_E0_VAL_rg_xtp_ln_rx_afe_gen2_bwsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen2_bwsel, (val))
#define PEXTP_DIG_LN_RX_RGS_E0_VAL_rg_xtp_ln_rx_afe_gen1_bwsel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_afe_gen1_bwsel, (val))
#define PEXTP_DIG_LN_RX_RGS_E0_VAL_rg_xtp_ln_rx_sgdt_acc_det_win3(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E0_FLD_rg_xtp_ln_rx_sgdt_acc_det_win3, (val))

#define PEXTP_DIG_LN_RX_RGS_E4_VAL_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_max, (val))
#define PEXTP_DIG_LN_RX_RGS_E4_VAL_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_max, (val))
#define PEXTP_DIG_LN_RX_RGS_E4_VAL_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_max, (val))
#define PEXTP_DIG_LN_RX_RGS_E4_VAL_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E4_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_max, (val))

#define PEXTP_DIG_LN_RX_RGS_E8_VAL_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen4_ctle2cp1_min, (val))
#define PEXTP_DIG_LN_RX_RGS_E8_VAL_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen3_ctle2cp1_min, (val))
#define PEXTP_DIG_LN_RX_RGS_E8_VAL_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen2_ctle2cp1_min, (val))
#define PEXTP_DIG_LN_RX_RGS_E8_VAL_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_E8_FLD_rg_xtp_ln_rx_aeq_gen1_ctle2cp1_min, (val))

#define PEXTP_DIG_LN_RX_RGS_EC_VAL_rg_xtp_ln_rx_aeq_gen4_ctle_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen4_ctle_max, (val))
#define PEXTP_DIG_LN_RX_RGS_EC_VAL_rg_xtp_ln_rx_aeq_gen3_ctle_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen3_ctle_max, (val))
#define PEXTP_DIG_LN_RX_RGS_EC_VAL_rg_xtp_ln_rx_aeq_gen2_ctle_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen2_ctle_max, (val))
#define PEXTP_DIG_LN_RX_RGS_EC_VAL_rg_xtp_ln_rx_aeq_gen1_ctle_max(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_RGS_EC_FLD_rg_xtp_ln_rx_aeq_gen1_ctle_max, (val))

#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen4_ctle_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen3_ctle_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen2_ctle_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen1_ctle_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen4_ctle1_csel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen4_ctle1_csel, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen3_ctle1_csel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen3_ctle1_csel, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen2_ctle1_csel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen2_ctle1_csel, (val))
#define PEXTP_DIG_LN_RX_F0_VAL_rg_xtp_ln_rx_gen1_ctle1_csel(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F0_FLD_rg_xtp_ln_rx_gen1_ctle1_csel, (val))

#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen4_vga_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen3_vga_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen2_vga_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen1_vga_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen4_vga_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen4_vga_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen3_vga_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen3_vga_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen2_vga_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen2_vga_ccp_cdec, (val))
#define PEXTP_DIG_LN_RX_F4_VAL_rg_xtp_ln_rx_gen1_vga_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F4_FLD_rg_xtp_ln_rx_gen1_vga_ccp_cdec, (val))

#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen4_digclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_digclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen3_digclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_digclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen2_digclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_digclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen1_digclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_digclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen4_piclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_piclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen3_piclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_piclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen2_piclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_piclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen1_piclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_piclk_div, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen4_iir_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_iir_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen3_iir_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_iir_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen2_iir_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_iir_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen1_iir_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_iir_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen4_dessc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen3_dessc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen3_dessc_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen2_dessc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen2_dessc_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_cdr_gen1_dessc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_cdr_gen1_dessc_en, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_rx_gen4_ctle_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen4_ctle_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_rx_gen3_ctle_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen3_ctle_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_rx_gen2_ctle_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen2_ctle_ccp_rdec, (val))
#define PEXTP_DIG_LN_RX_F8_VAL_rg_xtp_ln_rx_gen1_ctle_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_F8_FLD_rg_xtp_ln_rx_gen1_ctle_ccp_rdec, (val))

#define PEXTP_DIG_LN_RX_FC_VAL_rg_xtp_ln_cdr_gen4_digspeed(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen4_digspeed, (val))
#define PEXTP_DIG_LN_RX_FC_VAL_rg_xtp_ln_cdr_gen3_digspeed(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen3_digspeed, (val))
#define PEXTP_DIG_LN_RX_FC_VAL_rg_xtp_ln_cdr_gen2_digspeed(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen2_digspeed, (val))
#define PEXTP_DIG_LN_RX_FC_VAL_rg_xtp_ln_cdr_gen1_digspeed(val) REG_FLD_VAL(PEXTP_DIG_LN_RX_FC_FLD_rg_xtp_ln_cdr_gen1_digspeed, (val))

#ifdef __cplusplus
}
#endif

#endif // __pextp_sifslv_dig_ln0_rx_p0_REGS_H__

