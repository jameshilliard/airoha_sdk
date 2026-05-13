#ifndef __pextp_sifslv_dig_ln0_trx_p0_REGS_H__
#define __pextp_sifslv_dig_ln0_trx_p0_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- pextp_sifslv_dig_ln0_trx_p0 Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_xtp_ln_t2rlb_ana_en    : 1;
        FIELD rg_xtp_ln_enable_scheme_sel : 1;
        FIELD rg_xtp_ln_frc_enable      : 1;
        FIELD rg_xtp_ln_enable          : 1;
        FIELD rg_xtp_ln_frc_pdck_enable : 1;
        FIELD rg_xtp_ln_pdck_enable     : 1;
        FIELD rg_xtp_ln_frc_cal_done    : 1;
        FIELD rg_xtp_ln_cal_done        : 1;
        FIELD rsv_8                     : 24;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_00, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_00;

typedef struct
{
    

        FIELD rg_xtp_ln_t2rlb_tx_lctxcm1 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_t2rlb_tx_lctxc0 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_t2rlb_tx_lctxcp1 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_04, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_04;

typedef struct
{
    

        FIELD rg_xtp_ln_t2rlb_tx_lctxcm1_max : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_t2rlb_tx_lctxc0_max : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_t2rlb_tx_lctxcp1_max : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_08, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_08;

typedef struct
{
    

        FIELD rg_xtp_ln_t2rlb_tx_lctxcm1_min : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_t2rlb_tx_lctxc0_min : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_t2rlb_tx_lctxcp1_min : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_0C, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_0C;

typedef struct
{
    

        FIELD rg_xtp_ln_dareg_mode      : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_dareg_speed_0   : 3;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_dareg_speed_1   : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_dareg_speed_2   : 3;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_dareg_speed_3   : 3;
        FIELD rsv_19                    : 1;
        FIELD rg_xtp_ln_dareg_tpllsel_0 : 1;
        FIELD rg_xtp_ln_dareg_tpllsel_1 : 1;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_10, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_10;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn : 8;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_14, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_14;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn : 8;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_18, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_18;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn : 8;
        FIELD rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn : 8;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_1C, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_1C;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_tx_data    : 32;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_20, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_20;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_tx_compliance : 1;
        FIELD rg_xtp_ln_pipe_tx_elec_idle : 1;
        FIELD rg_xtp_ln_pipe_tx_datak   : 2;
        FIELD rg_xtp_ln_pipe_tx_data_valid : 1;
        FIELD rg_xtp_ln_pipe_tx_start_block : 1;
        FIELD rg_xtp_ln_pipe_tx_sync_header : 2;
        FIELD rg_xtp_ln_pipe_fs         : 6;
        FIELD rsv_14                    : 1;
        FIELD rg_xtp_ln_pipe_lf         : 6;
        FIELD rg_xtp_ln_pipe_rx_polarity : 1;
        FIELD rg_xtp_ln_pipe_invalid_request : 1;
        FIELD rsv_23                    : 1;
        FIELD rg_xtp_ln_pipe_lc_preset_index : 4;
        FIELD rg_xtp_ln_pipe_get_lc_preset_coef : 1;
        FIELD rg_xtp_ln_frc_pipe_rx_elec_idle : 1;
        FIELD rg_xtp_ln_pipe_rx_elec_idle : 1;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_24, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_24;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_tx_deemph  : 18;
        FIELD rsv_18                    : 14;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_28, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_28;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_tx_preset_coef : 18;
        FIELD rg_xtp_ln_pipe_rx_status  : 3;
        FIELD rg_xtp_ln_pipe_rx_valid   : 1;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_2C, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_2C;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_rx_data    : 32;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_30, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_30;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_rx_datak   : 2;
        FIELD rg_xtp_ln_pipe_rx_data_valid : 1;
        FIELD rg_xtp_ln_pipe_rx_start_block : 1;
        FIELD rg_xtp_ln_pipe_rx_sync_header : 2;
        FIELD rg_xtp_ln_pipe_fb_figure_merit : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_pipe_fb_direction_change : 6;
        FIELD rg_xtp_ln_pipe_lc_tx_coef_valid : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_pipe_lc_fs      : 6;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_pipe_lc_lf      : 6;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_34, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_34;

typedef struct
{
    

        FIELD rg_xtp_ln_pipe_lc_tx_preset_coef : 18;
        FIELD rsv_18                    : 14;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_38, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_38;

typedef struct
{
    

        FIELD rg_xtp_ln_mode            : 3;
        FIELD rg_xtp_ln_frc_mode        : 1;
        FIELD rg_xtp_ln_speed           : 3;
        FIELD rg_xtp_ln_frc_speed       : 1;
        FIELD rg_xtp_ln_tpllsel         : 1;
        FIELD rg_xtp_ln_frc_tpllsel     : 1;
        FIELD rg_xtp_ln_tx_acjtag_en    : 1;
        FIELD rg_xtp_ln_frc_tx_acjtag_en : 1;
        FIELD rg_xtp_ln_tx_acjtag_data  : 1;
        FIELD rg_xtp_ln_frc_tx_acjtag_data : 1;
        FIELD rg_xtp_ln_tx_rxdet_en     : 1;
        FIELD rg_xtp_ln_frc_tx_rxdet_en : 1;
        FIELD rg_xtp_ln_tx_cmkp_en      : 1;
        FIELD rg_xtp_ln_frc_tx_cmkp_en  : 1;
        FIELD rg_xtp_ln_tx_bias_en      : 1;
        FIELD rg_xtp_ln_frc_tx_bias_en  : 1;
        FIELD rg_xtp_ln_tx_drv_en       : 1;
        FIELD rg_xtp_ln_frc_tx_drv_en   : 1;
        FIELD rg_xtp_ln_tx_ser_en       : 1;
        FIELD rg_xtp_ln_frc_tx_ser_en   : 1;
        FIELD rg_xtp_ln_tx_lfps_en      : 1;
        FIELD rg_xtp_ln_frc_tx_lfps_en  : 1;
        FIELD rg_xtp_ln_tx_lfps         : 1;
        FIELD rg_xtp_ln_frc_tx_lfps     : 1;
        FIELD rg_xtp_ln_tx_data_en      : 1;
        FIELD rg_xtp_ln_frc_tx_data_en  : 1;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_40, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_40;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_data         : 32;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_44, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_44;

typedef struct
{
    

        FIELD rg_xtp_ln_frc_tx_data     : 1;
        FIELD rsv_1                     : 7;
        FIELD rg_xtp_ln_tx_lctxcm1      : 6;
        FIELD rg_xtp_ln_frc_tx_lctxcm1  : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_tx_lctxc0       : 6;
        FIELD rg_xtp_ln_frc_tx_lctxc0   : 1;
        FIELD rsv_23                    : 1;
        FIELD rg_xtp_ln_tx_lctxcp1      : 6;
        FIELD rg_xtp_ln_frc_tx_lctxcp1  : 1;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_48, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_48;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_margin       : 3;
        FIELD rg_xtp_ln_frc_tx_margin   : 1;
        FIELD rg_xtp_ln_rx_acjtag_rxp_en : 1;
        FIELD rg_xtp_ln_frc_rx_acjtag_rxp_en : 1;
        FIELD rg_xtp_ln_rx_acjtag_rxn_en : 1;
        FIELD rg_xtp_ln_frc_rx_acjtag_rxn_en : 1;
        FIELD rg_xtp_ln_rx_acjtag_rxp_mode : 1;
        FIELD rg_xtp_ln_frc_rx_acjtag_rxp_mode : 1;
        FIELD rg_xtp_ln_rx_acjtag_rxn_mode : 1;
        FIELD rg_xtp_ln_frc_rx_acjtag_rxn_mode : 1;
        FIELD rg_xtp_ln_rx_hz           : 1;
        FIELD rg_xtp_ln_frc_rx_hz       : 1;
        FIELD rg_xtp_ln_rx_lfps_en      : 1;
        FIELD rg_xtp_ln_frc_rx_lfps_en  : 1;
        FIELD rg_xtp_ln_rx_lfps_nbias_en : 1;
        FIELD rg_xtp_ln_frc_rx_lfps_nbias_en : 1;
        FIELD rg_xtp_ln_rx_lfps_cal_en  : 1;
        FIELD rg_xtp_ln_frc_rx_lfps_cal_en : 1;
        FIELD rg_xtp_ln_rx_lfps_os      : 5;
        FIELD rg_xtp_ln_frc_rx_lfps_os  : 1;
        FIELD rg_xtp_ln_rx_sgdt_en      : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_en  : 1;
        FIELD rg_xtp_ln_rx_sgdt_nbias_en : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_nbias_en : 1;
        FIELD rg_xtp_ln_rx_sgdt_cal_en  : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_cal_en : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_4C, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_4C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_sgdt_pos     : 5;
        FIELD rg_xtp_ln_frc_rx_sgdt_pos : 1;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_sgdt_nos     : 5;
        FIELD rg_xtp_ln_frc_rx_sgdt_nos : 1;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_rx_sgdt_vth     : 2;
        FIELD rsv_18                    : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_vth : 1;
        FIELD rg_xtp_ln_rx_sgdt_rleak   : 2;
        FIELD rsv_22                    : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_rleak : 1;
        FIELD rg_xtp_ln_rx_afe_en       : 1;
        FIELD rg_xtp_ln_frc_rx_afe_en   : 1;
        FIELD rg_xtp_ln_rx_dfetp7_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp7_en : 1;
        FIELD rg_xtp_ln_rx_dfetp6_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp6_en : 1;
        FIELD rg_xtp_ln_rx_dfetp5_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp5_en : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_50, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_50;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_dfetp4_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp4_en : 1;
        FIELD rg_xtp_ln_rx_dfetp3_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp3_en : 1;
        FIELD rg_xtp_ln_rx_dfetp2_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp2_en : 1;
        FIELD rg_xtp_ln_rx_dfetp1_en    : 1;
        FIELD rg_xtp_ln_frc_rx_dfetp1_en : 1;
        FIELD rg_xtp_ln_rx_cdr_en       : 1;
        FIELD rg_xtp_ln_frc_rx_cdr_en   : 1;
        FIELD rg_xtp_ln_rx_cdr_lck2ref  : 1;
        FIELD rg_xtp_ln_frc_rx_cdr_lck2ref : 1;
        FIELD rg_xtp_ln_rx_cdr_lck2dt   : 1;
        FIELD rg_xtp_ln_frc_rx_cdr_lck2dt : 1;
        FIELD rg_xtp_ln_rx_cdr_track    : 1;
        FIELD rg_xtp_ln_frc_rx_cdr_track : 1;
        FIELD rg_xtp_ln_rx_cdr_int1_lpfbw : 2;
        FIELD rg_xtp_ln_frc_rx_cdr_int1_lpfbw : 1;
        FIELD rsv_19                    : 1;
        FIELD rg_xtp_ln_rx_cdr_cfdok_th : 4;
        FIELD rg_xtp_ln_frc_rx_cdr_cfdok_th : 1;
        FIELD rg_xtp_ln_rx_sgdt_hf      : 2;
        FIELD rg_xtp_ln_frc_rx_sgdt_hf  : 1;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_54, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_54;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_rfdok_th : 8;
        FIELD rg_xtp_ln_frc_rx_cdr_rfdok_th : 1;
        FIELD rsv_9                     : 7;
        FIELD rg_xtp_ln_rx_cdr_rfdx2_th : 8;
        FIELD rg_xtp_ln_frc_rx_cdr_rfdx2_th : 1;
        FIELD rsv_25                    : 7;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_58, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_58;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_cfdunit  : 4;
        FIELD rg_xtp_ln_frc_rx_cdr_cfdunit : 1;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_cdr_rfdunit  : 4;
        FIELD rg_xtp_ln_frc_rx_cdr_rfdunit : 1;
        FIELD rsv_13                    : 3;
        FIELD rg_xtp_ln_rx_cdr_pdndvn   : 3;
        FIELD rg_xtp_ln_frc_rx_cdr_pdndvn : 1;
        FIELD rg_xtp_ln_rx_cdr_pdkdvn   : 3;
        FIELD rg_xtp_ln_frc_rx_cdr_pdkdvn : 1;
        FIELD rg_xtp_ln_rx_cdr_pdnunit  : 2;
        FIELD rg_xtp_ln_frc_rx_cdr_pdnunit : 1;
        FIELD rsv_27                    : 1;
        FIELD rg_xtp_ln_rx_cdr_pdkunit  : 2;
        FIELD rg_xtp_ln_frc_rx_cdr_pdkunit : 1;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_5C, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_5C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_pdnkpc   : 5;
        FIELD rg_xtp_ln_frc_rx_cdr_pdnkpc : 1;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_cdr_pdkkpc   : 5;
        FIELD rg_xtp_ln_frc_rx_cdr_pdkkpc : 1;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_rx_cdr_pdnkpf   : 3;
        FIELD rg_xtp_ln_frc_rx_cdr_pdnkpf : 1;
        FIELD rg_xtp_ln_rx_cdr_pdkkpf   : 3;
        FIELD rg_xtp_ln_frc_rx_cdr_pdkkpf : 1;
        FIELD rg_xtp_ln_rx_cdr_autok_en : 1;
        FIELD rg_xtp_ln_frc_rx_cdr_autok_en : 1;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_60, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_60;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_autok_band : 6;
        FIELD rg_xtp_ln_frc_rx_cdr_autok_band : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_rx_cal_rstb     : 1;
        FIELD rg_xtp_ln_frc_rx_cal_rstb : 1;
        FIELD rg_xtp_ln_rx_cal_ckon     : 1;
        FIELD rg_xtp_ln_frc_rx_cal_ckon : 1;
        FIELD rg_xtp_ln_rx_cal_en       : 1;
        FIELD rg_xtp_ln_frc_rx_cal_en   : 1;
        FIELD rg_xtp_ln_rx_aeq_bypass   : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_bypass : 1;
        FIELD rg_xtp_ln_rx_aeq_rstb     : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_rstb : 1;
        FIELD rg_xtp_ln_rx_aeq_ckon     : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_ckon : 1;
        FIELD rg_xtp_ln_rx_aeq_en       : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_en   : 1;
        FIELD rg_xtp_ln_rx_aeq_inprgrss : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_inprgrss : 1;
        FIELD rg_xtp_ln_rx_aeq_rxeqeval : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_rxeqeval : 1;
        FIELD rg_xtp_ln_rx_aeq_invldreq : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_invldreq : 1;
        FIELD rg_xtp_ln_rx_aeq_rmtxskip : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_rmtxskip : 1;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_64, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_64;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_rmtxfs   : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_rmtxfs : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_rx_aeq_rmtxlf   : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_rmtxlf : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_rx_aeq_rmtxcm1  : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_rmtxcm1 : 1;
        FIELD rsv_23                    : 1;
        FIELD rg_xtp_ln_rx_aeq_rmtxc0   : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_rmtxc0 : 1;
        FIELD rsv_31                    : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_68, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_68;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_rmtxcp1  : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_rmtxcp1 : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_rx_aeq_att      : 3;
        FIELD rg_xtp_ln_frc_rx_aeq_att  : 1;
        FIELD rsv_12                    : 4;
        FIELD rg_xtp_ln_rx_aeq_ctle     : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_ctle : 1;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_aeq_vga      : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_vga  : 1;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_6C, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_6C;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_dfetp7   : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp7 : 1;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_aeq_dfetp6   : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp6 : 1;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_rx_aeq_dfetp5   : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp5 : 1;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_aeq_dfetp4   : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp4 : 1;
        FIELD rsv_30                    : 2;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_70, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_70;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_dfetp3   : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp3 : 1;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_rx_aeq_dfetp2   : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp2 : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_rx_aeq_dfetp1   : 7;
        FIELD rg_xtp_ln_frc_rx_aeq_dfetp1 : 1;
        FIELD rg_xtp_ln_rx_aeq_strb     : 1;
        FIELD rg_xtp_ln_frc_rx_aeq_strb : 1;
        FIELD rsv_26                    : 6;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_74, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_74;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_vgaref   : 8;
        FIELD rg_xtp_ln_frc_rx_aeq_vgaref : 1;
        FIELD rg_xtp_ln_rx_aeq_ctle2cp1_max : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_ctle2cp1_max : 1;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_rx_aeq_ctle2cp1_min : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_ctle2cp1_min : 1;
        FIELD rsv_22                    : 2;
        FIELD rg_xtp_ln_rx_aeq_ctle_max : 5;
        FIELD rg_xtp_ln_frc_rx_aeq_ctle_max : 1;
        FIELD rg_xtp_ln_rx_afe_bwsel    : 1;
        FIELD rg_xtp_ln_frc_rx_afe_bwsel : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_78, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_78;

typedef struct
{
    

        FIELD rgs_xtp_ln_pipe_tx_compliance : 1;
        FIELD rgs_xtp_ln_pipe_tx_elec_idle : 1;
        FIELD rgs_xtp_ln_pipe_rx_polarity : 1;
        FIELD rsv_3                     : 29;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C0, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C0;

typedef struct
{
    

        FIELD rgs_xtp_ln_pipe_tx_deemph : 18;
        FIELD rsv_18                    : 14;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C4, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C4;

typedef struct
{
    

        FIELD rgs_xtp_ln_pipe_tx_preset_coef : 18;
        FIELD rsv_18                    : 14;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C8, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C8;

typedef struct
{
    

        FIELD rgs_xtp_ln_pipe_fs        : 6;
        FIELD rsv_6                     : 2;
        FIELD rgs_xtp_ln_pipe_lf        : 6;
        FIELD rgs_xtp_ln_pipe_rx_elec_idle : 1;
        FIELD rsv_15                    : 1;
        FIELD rgs_xtp_ln_pipe_rx_status : 3;
        FIELD rgs_xtp_ln_pipe_rx_valid  : 1;
        FIELD rsv_20                    : 12;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_CC, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_CC;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_ctle1_csel   : 4;
        FIELD rg_xtp_ln_rx_vga_ccp_cdec : 2;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_rx_vga_ccp_rdec : 2;
        FIELD rsv_10                    : 2;
        FIELD rg_xtp_ln_rx_ctle_ccp_cdec : 2;
        FIELD rsv_14                    : 1;
        FIELD rg_xtp_ln_frc_rx_ctle1_csel : 1;
        FIELD rg_xtp_ln_frc_rx_vga_ccp_cdec : 1;
        FIELD rg_xtp_ln_frc_rx_vga_ccp_rdec : 1;
        FIELD rg_xtp_ln_frc_rx_ctle_ccp_cdec : 1;
        FIELD rg_xtp_ln_rx_fedig_pwr_on : 1;
        FIELD rg_xtp_ln_rx_fedig_pwr_on_2nd : 1;
        FIELD rg_xtp_ln_rx_fedig_iso_en : 1;
        FIELD rg_xtp_ln_frc_rx_fedig_pwr_on : 1;
        FIELD rg_xtp_ln_frc_rx_fedig_pwr_on_2nd : 1;
        FIELD rg_xtp_ln_frc_rx_fedig_iso_en : 1;
        FIELD rg_xtp_ln_cdr_gen1_pi_slew : 2;
        FIELD rg_xtp_ln_cdr_gen2_pi_slew : 2;
        FIELD rg_xtp_ln_cdr_gen3_pi_slew : 2;
        FIELD rg_xtp_ln_frc_cdr_pi_slew : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_D0, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_D0;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_egeq_gen1_max : 6;
        FIELD rg_xtp_ln_rx_aeq_egeq_gen2_max : 6;
        FIELD rg_xtp_ln_rx_aeq_egeq_gen3_max : 6;
        FIELD rg_xtp_ln_rx_aeq_egeq_max : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_egeq_max : 1;
        FIELD rsv_25                    : 7;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_D4, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_D4;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_aeq_egeq_gen1_ratio : 6;
        FIELD rg_xtp_ln_rx_aeq_egeq_gen2_ratio : 6;
        FIELD rg_xtp_ln_rx_aeq_egeq_gen3_ratio : 6;
        FIELD rg_xtp_ln_rx_aeq_egeq_ratio : 6;
        FIELD rg_xtp_ln_frc_rx_aeq_egeq_ratio : 1;
        FIELD rsv_25                    : 7;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_DC, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_DC;

typedef struct
{
    

        FIELD rg_xtp_ln_frc_tx_ser_div  : 1;
        FIELD rg_xtp_ln_frc_rx_ctle_ccp_rdec : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_slc_en : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_cal_offset : 1;
        FIELD rg_xtp_ln_frc_rx_sgdt_selfbias_en : 1;
        FIELD rg_xtp_ln_frc_cdr_en      : 1;
        FIELD rg_xtp_ln_frc_cdr_dig_en  : 1;
        FIELD rg_xtp_ln_frc_cdr_lck2ref : 1;
        FIELD rg_xtp_ln_frc_cdr_dessc_en : 1;
        FIELD rg_xtp_ln_frc_cdr_iir_en  : 1;
        FIELD rg_xtp_ln_frc_cdr_piclk_div : 1;
        FIELD rg_xtp_ln_frc_cdr_digclk_div : 1;
        FIELD rg_xtp_ln_frc_cdr_digspeed : 1;
        FIELD rg_xtp_ln_frc_cdr_ppath_dvn : 1;
        FIELD rg_xtp_ln_frc_cdr_ipath_stb : 1;
        FIELD rg_xtp_ln_frc_cdr_iir_gain : 1;
        FIELD rg_xtp_ln_frc_cdr_iir_corner : 1;
        FIELD rg_xtp_ln_frc_cdr_dessc_delta : 1;
        FIELD rg_xtp_ln_frc_cdr_chg     : 1;
        FIELD rg_xtp_ln_cdr_gen4_pi_slew : 2;
        FIELD rg_xtp_ln_cdr_pi_slew     : 2;
        FIELD rsv_23                    : 9;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E0, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E0;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_ser_div      : 2;
        FIELD rg_xtp_ln_rx_ctle_ccp_rdec : 2;
        FIELD rg_xtp_ln_rx_sgdt_slc_en  : 1;
        FIELD rg_xtp_ln_rx_sgdt_cal_offset : 5;
        FIELD rg_xtp_ln_rx_sgdt_selfbias_en : 1;
        FIELD rg_xtp_ln_cdr_dessc_delta : 9;
        FIELD rsv_20                    : 12;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E4, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E4;

typedef struct
{
    

        FIELD rg_xtp_ln_cdr_en          : 1;
        FIELD rg_xtp_ln_cdr_dig_en      : 1;
        FIELD rg_xtp_ln_cdr_lck2ref     : 1;
        FIELD rg_xtp_ln_cdr_dessc_en    : 1;
        FIELD rg_xtp_ln_cdr_iir_en      : 1;
        FIELD rg_xtp_ln_cdr_piclk_div   : 2;
        FIELD rg_xtp_ln_cdr_digclk_div  : 2;
        FIELD rg_xtp_ln_cdr_digspeed    : 2;
        FIELD rg_xtp_ln_cdr_ppath_dvn   : 8;
        FIELD rg_xtp_ln_cdr_ipath_stb   : 5;
        FIELD rg_xtp_ln_cdr_iir_gain    : 3;
        FIELD rsv_27                    : 1;
        FIELD rg_xtp_ln_cdr_iir_corner  : 3;
        FIELD rg_xtp_ln_cdr_chg         : 1;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E8, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E8;

typedef struct
{
    

        FIELD rg_xtp_ln_rx_cdr_chg_rsie : 5;
        FIELD rsv_5                     : 3;
        FIELD rg_xtp_ln_rx_cdr_chg_fall : 5;
        FIELD rsv_13                    : 19;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_EC, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_EC;

typedef struct
{
    

        FIELD rg_xtp_ln_cdr_gen1_iir_gain : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_cdr_gen2_iir_gain : 3;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_cdr_gen3_iir_gain : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_cdr_gen4_iir_gain : 3;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_cdr_gen1_iir_corner : 3;
        FIELD rg_xtp_ln_cdr_gen2_iir_corner : 3;
        FIELD rg_xtp_ln_cdr_gen3_iir_corner : 3;
        FIELD rg_xtp_ln_cdr_gen4_iir_corner : 3;
        FIELD rsv_28                    : 4;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F0, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F0;

typedef struct
{
    

        FIELD rg_xtp_ln_cdr_gen1_dessc_delta : 9;
        FIELD rg_xtp_ln_cdr_gen2_dessc_delta : 9;
        FIELD rg_xtp_ln_cdr_gen3_dessc_delta : 9;
        FIELD rsv_27                    : 5;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F4, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F4;

typedef struct
{
    

        FIELD rg_xtp_ln_cdr_gen4_dessc_delta : 9;
        FIELD rg_xtp_ln_frc_tx_ser_dcc_en : 1;
        FIELD rg_xtp_ln_tx_ser_dcc_en   : 1;
        FIELD rsv_11                    : 5;
        FIELD rg_xtp_ln_frc_cdr_busclk_div : 1;
        FIELD rg_xtp_ln_cdr_busclk_div  : 3;
        FIELD rg_xtp_ln_cdr_gen1_busclk_div : 3;
        FIELD rg_xtp_ln_cdr_gen2_busclk_div : 3;
        FIELD rg_xtp_ln_cdr_gen3_busclk_div : 3;
        FIELD rg_xtp_ln_cdr_gen4_busclk_div : 3;
    
    
} pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F8, *Ppextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F8;

// ----------------- pextp_sifslv_dig_ln0_trx_p0  Grouping Definitions -------------------
// ----------------- pextp_sifslv_dig_ln0_trx_p0 Register Definition -------------------
#if 0
typedef volatile 
{
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_00 PEXTP_DIG_LN_TRX_00; // 3000
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_04 PEXTP_DIG_LN_TRX_04; // 3004
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_08 PEXTP_DIG_LN_TRX_08; // 3008
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_0C PEXTP_DIG_LN_TRX_0C; // 300C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_10 PEXTP_DIG_LN_TRX_10; // 3010
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_14 PEXTP_DIG_LN_TRX_14; // 3014
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_18 PEXTP_DIG_LN_TRX_18; // 3018
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_1C PEXTP_DIG_LN_TRX_1C; // 301C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_20 PEXTP_DIG_LN_TRX_20; // 3020
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_24 PEXTP_DIG_LN_TRX_24; // 3024
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_28 PEXTP_DIG_LN_TRX_28; // 3028
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_2C PEXTP_DIG_LN_TRX_2C; // 302C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_30 PEXTP_DIG_LN_TRX_30; // 3030
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_34 PEXTP_DIG_LN_TRX_34; // 3034
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_38 PEXTP_DIG_LN_TRX_38; // 3038
    UINT32                          rsv_303C;         // 303C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_40 PEXTP_DIG_LN_TRX_40; // 3040
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_44 PEXTP_DIG_LN_TRX_44; // 3044
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_48 PEXTP_DIG_LN_TRX_48; // 3048
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_4C PEXTP_DIG_LN_TRX_4C; // 304C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_50 PEXTP_DIG_LN_TRX_50; // 3050
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_54 PEXTP_DIG_LN_TRX_54; // 3054
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_58 PEXTP_DIG_LN_TRX_58; // 3058
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_5C PEXTP_DIG_LN_TRX_5C; // 305C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_60 PEXTP_DIG_LN_TRX_60; // 3060
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_64 PEXTP_DIG_LN_TRX_64; // 3064
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_68 PEXTP_DIG_LN_TRX_68; // 3068
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_6C PEXTP_DIG_LN_TRX_6C; // 306C
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_70 PEXTP_DIG_LN_TRX_70; // 3070
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_74 PEXTP_DIG_LN_TRX_74; // 3074
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_78 PEXTP_DIG_LN_TRX_78; // 3078
    UINT32                          rsv_307C[17];     // 307C..30BC
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C0 PEXTP_DIG_LN_TRX_C0; // 30C0
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C4 PEXTP_DIG_LN_TRX_C4; // 30C4
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_C8 PEXTP_DIG_LN_TRX_C8; // 30C8
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_CC PEXTP_DIG_LN_TRX_CC; // 30CC
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_D0 PEXTP_DIG_LN_TRX_D0; // 30D0
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_D4 PEXTP_DIG_LN_TRX_D4; // 30D4
    UINT32                          rsv_30D8;         // 30D8
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_DC PEXTP_DIG_LN_TRX_DC; // 30DC
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E0 PEXTP_DIG_LN_TRX_E0; // 30E0
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E4 PEXTP_DIG_LN_TRX_E4; // 30E4
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_E8 PEXTP_DIG_LN_TRX_E8; // 30E8
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_EC PEXTP_DIG_LN_TRX_EC; // 30EC
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F0 PEXTP_DIG_LN_TRX_F0; // 30F0
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F4 PEXTP_DIG_LN_TRX_F4; // 30F4
    pextp_sifslv_dig_ln0_trx_p0_REG_PEXTP_DIG_LN_TRX_F8 PEXTP_DIG_LN_TRX_F8; // 30F8
}pextp_sifslv_dig_ln0_trx_p0_REGS, *Ppextp_sifslv_dig_ln0_trx_p0_REGS;

// ---------- pextp_sifslv_dig_ln0_trx_p0 Enum Definitions      ----------
// ---------- pextp_sifslv_dig_ln0_trx_p0 C Macro Definitions   ----------
extern Ppextp_sifslv_dig_ln0_trx_p0_REGS g_pextp_sifslv_dig_ln0_trx_p0_BASE;

#define pextp_sifslv_dig_ln0_trx_p0_BASE                       (g_pextp_sifslv_dig_ln0_trx_p0_BASE)
#endif

#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_00		0x3000
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_04		0x3004
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_08		0x3008
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_0C		0x300C
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_10		0x3010
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_14		0x3014
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_18		0x3018
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_1C		0x301C
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_20		0x3020
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_24		0x3024
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_28		0x3028
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_2C		0x302C
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_30		0x3030
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_34		0x3034
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_38		0x3038
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_40		0x3040
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_44		0x3044
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_48		0x3048
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_4C		0x304C
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_50		0x3050
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_54		0x3054
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_58		0x3058
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_5C		0x305C
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_60		0x3060
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_64		0x3064
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_68		0x3068
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_6C		0x306C
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_70		0x3070
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_74		0x3074
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_78		0x3078
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_C0		0x30C0
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_C4		0x30C4
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_C8		0x30C8
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_CC		0x30CC
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_D0		0x30D0
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_D4		0x30D4
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_DC		0x30DC
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_E0		0x30E0
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_E4		0x30E4
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_E8		0x30E8
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_EC		0x30EC
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_F0		0x30F0
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_F4		0x30F4
#define _pextp_sifslv_dig_ln0_trx_p0_PEXTP_DIG_LN_TRX_F8		0x30F8

#endif


#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_cal_done             REG_FLD(1, 7)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_cal_done         REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_pdck_enable          REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_pdck_enable      REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable               REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_enable           REG_FLD(1, 2)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable_scheme_sel    REG_FLD(1, 1)
#define PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_t2rlb_ana_en         REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1     REG_FLD(6, 16)
#define PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxc0      REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1     REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_max REG_FLD(6, 16)
#define PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_max  REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_max REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_min REG_FLD(6, 16)
#define PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_min  REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_min REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_1      REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_0      REG_FLD(1, 20)
#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_3        REG_FLD(3, 16)
#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_2        REG_FLD(3, 12)
#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_1        REG_FLD(3, 8)
#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_0        REG_FLD(3, 4)
#define PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_mode           REG_FLD(3, 0)

#define PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn REG_FLD(8, 24)
#define PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn REG_FLD(8, 16)
#define PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn REG_FLD(8, 8)
#define PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn REG_FLD(8, 0)

#define PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn REG_FLD(8, 24)
#define PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn REG_FLD(8, 16)
#define PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn REG_FLD(8, 8)
#define PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn REG_FLD(8, 0)

#define PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn REG_FLD(8, 24)
#define PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn REG_FLD(8, 16)
#define PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn REG_FLD(8, 8)
#define PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn REG_FLD(8, 0)

#define PEXTP_DIG_LN_TRX_20_FLD_rg_xtp_ln_pipe_tx_data         REG_FLD(32, 0)

#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_elec_idle    REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_frc_pipe_rx_elec_idle REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_get_lc_preset_coef REG_FLD(1, 28)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lc_preset_index REG_FLD(4, 24)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_invalid_request REG_FLD(1, 22)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_polarity     REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lf              REG_FLD(6, 15)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_fs              REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_sync_header  REG_FLD(2, 6)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_start_block  REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_data_valid   REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_datak        REG_FLD(2, 2)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_elec_idle    REG_FLD(1, 1)
#define PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_compliance   REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_28_FLD_rg_xtp_ln_pipe_tx_deemph       REG_FLD(18, 0)

#define PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_valid        REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_status       REG_FLD(3, 18)
#define PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_tx_preset_coef  REG_FLD(18, 0)

#define PEXTP_DIG_LN_TRX_30_FLD_rg_xtp_ln_pipe_rx_data         REG_FLD(32, 0)

#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_lf           REG_FLD(6, 24)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_fs           REG_FLD(6, 16)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_tx_coef_valid REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_direction_change REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_figure_merit REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_sync_header  REG_FLD(2, 4)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_start_block  REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_data_valid   REG_FLD(1, 2)
#define PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_datak        REG_FLD(2, 0)

#define PEXTP_DIG_LN_TRX_38_FLD_rg_xtp_ln_pipe_lc_tx_preset_coef REG_FLD(18, 0)

#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_data_en       REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_data_en           REG_FLD(1, 28)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps          REG_FLD(1, 27)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps              REG_FLD(1, 26)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps_en       REG_FLD(1, 25)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps_en           REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_ser_en        REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_ser_en            REG_FLD(1, 22)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_drv_en        REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_drv_en            REG_FLD(1, 20)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_bias_en       REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_bias_en           REG_FLD(1, 18)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_cmkp_en       REG_FLD(1, 17)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_cmkp_en           REG_FLD(1, 16)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_rxdet_en      REG_FLD(1, 15)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_rxdet_en          REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_data   REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_data       REG_FLD(1, 12)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_en     REG_FLD(1, 11)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_en         REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tpllsel          REG_FLD(1, 9)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tpllsel              REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_speed            REG_FLD(1, 7)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_speed                REG_FLD(3, 4)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_mode             REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_mode                 REG_FLD(3, 0)

#define PEXTP_DIG_LN_TRX_44_FLD_rg_xtp_ln_tx_data              REG_FLD(32, 0)

#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcp1       REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcp1           REG_FLD(6, 24)
#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxc0        REG_FLD(1, 22)
#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxc0            REG_FLD(6, 16)
#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcm1       REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcm1           REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_data          REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_cal_en   REG_FLD(1, 31)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_cal_en       REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_nbias_en REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_nbias_en     REG_FLD(1, 28)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_en       REG_FLD(1, 27)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_en           REG_FLD(1, 26)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_os       REG_FLD(1, 25)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_os           REG_FLD(5, 20)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_cal_en   REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_cal_en       REG_FLD(1, 18)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_nbias_en REG_FLD(1, 17)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_nbias_en     REG_FLD(1, 16)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_en       REG_FLD(1, 15)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_en           REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_hz            REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_hz                REG_FLD(1, 12)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_mode REG_FLD(1, 11)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_mode   REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_mode REG_FLD(1, 9)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_mode   REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_en REG_FLD(1, 7)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_en     REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_en REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_en     REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_tx_margin        REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_tx_margin            REG_FLD(3, 0)

#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp5_en     REG_FLD(1, 31)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp5_en         REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp6_en     REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp6_en         REG_FLD(1, 28)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp7_en     REG_FLD(1, 27)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp7_en         REG_FLD(1, 26)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_afe_en        REG_FLD(1, 25)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_afe_en            REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_rleak    REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_rleak        REG_FLD(2, 20)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_vth      REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_vth          REG_FLD(2, 16)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_nos      REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_nos          REG_FLD(5, 8)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_pos      REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_pos          REG_FLD(5, 0)

#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_sgdt_hf       REG_FLD(1, 27)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_sgdt_hf           REG_FLD(2, 25)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_cfdok_th  REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_cfdok_th      REG_FLD(4, 20)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_int1_lpfbw REG_FLD(1, 18)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_int1_lpfbw    REG_FLD(2, 16)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_track     REG_FLD(1, 15)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_track         REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2dt    REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2dt        REG_FLD(1, 12)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2ref   REG_FLD(1, 11)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2ref       REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_en        REG_FLD(1, 9)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_en            REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp1_en     REG_FLD(1, 7)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp1_en         REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp2_en     REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp2_en         REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp3_en     REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp3_en         REG_FLD(1, 2)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp4_en     REG_FLD(1, 1)
#define PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp4_en         REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdx2_th  REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdx2_th      REG_FLD(8, 16)
#define PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdok_th  REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdok_th      REG_FLD(8, 0)

#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkunit   REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkunit       REG_FLD(2, 28)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdnunit   REG_FLD(1, 26)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdnunit       REG_FLD(2, 24)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkdvn    REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkdvn        REG_FLD(3, 20)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdndvn    REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdndvn        REG_FLD(3, 16)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_rfdunit   REG_FLD(1, 12)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_rfdunit       REG_FLD(4, 8)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_cfdunit   REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_cfdunit       REG_FLD(4, 0)

#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_autok_en  REG_FLD(1, 25)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_autok_en      REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpf    REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpf        REG_FLD(3, 20)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpf    REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpf        REG_FLD(3, 16)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpc    REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpc        REG_FLD(5, 8)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpc    REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpc        REG_FLD(5, 0)

#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rmtxskip  REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rmtxskip      REG_FLD(1, 28)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_invldreq  REG_FLD(1, 27)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_invldreq      REG_FLD(1, 26)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rxeqeval  REG_FLD(1, 25)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rxeqeval      REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_inprgrss  REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_inprgrss      REG_FLD(1, 22)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_en        REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_en            REG_FLD(1, 20)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_ckon      REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_ckon          REG_FLD(1, 18)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rstb      REG_FLD(1, 17)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rstb          REG_FLD(1, 16)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_bypass    REG_FLD(1, 15)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_bypass        REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_en        REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_en            REG_FLD(1, 12)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_ckon      REG_FLD(1, 11)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_ckon          REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_rstb      REG_FLD(1, 9)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_rstb          REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cdr_autok_band REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cdr_autok_band    REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxc0    REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxc0        REG_FLD(6, 24)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcm1   REG_FLD(1, 22)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxcm1       REG_FLD(6, 16)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxlf    REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxlf        REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxfs    REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxfs        REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_vga       REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_vga           REG_FLD(5, 24)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_ctle      REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_ctle          REG_FLD(5, 16)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_att       REG_FLD(1, 11)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_att           REG_FLD(3, 8)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcp1   REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_rmtxcp1       REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp4    REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp4        REG_FLD(5, 24)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp5    REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp5        REG_FLD(5, 16)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp6    REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp6        REG_FLD(5, 8)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp7    REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp7        REG_FLD(5, 0)

#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_strb      REG_FLD(1, 25)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_strb          REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp1    REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp1        REG_FLD(7, 16)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp2    REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp2        REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp3    REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp3        REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_afe_bwsel     REG_FLD(1, 31)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_afe_bwsel         REG_FLD(1, 30)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle_max  REG_FLD(1, 29)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle_max      REG_FLD(5, 24)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_min  REG_FLD(5, 16)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_max  REG_FLD(5, 9)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_vgaref    REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_vgaref        REG_FLD(8, 0)

#define PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_rx_polarity    REG_FLD(1, 2)
#define PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_elec_idle   REG_FLD(1, 1)
#define PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_compliance  REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_C4_FLD_rgs_xtp_ln_pipe_tx_deemph      REG_FLD(18, 0)

#define PEXTP_DIG_LN_TRX_C8_FLD_rgs_xtp_ln_pipe_tx_preset_coef REG_FLD(18, 0)

#define PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_valid       REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_status      REG_FLD(3, 16)
#define PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_elec_idle   REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_lf             REG_FLD(6, 8)
#define PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_fs             REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_cdr_pi_slew      REG_FLD(1, 31)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen3_pi_slew     REG_FLD(2, 29)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen2_pi_slew     REG_FLD(2, 27)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen1_pi_slew     REG_FLD(2, 25)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_iso_en  REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd REG_FLD(1, 23)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on  REG_FLD(1, 22)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_iso_en      REG_FLD(1, 21)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on_2nd  REG_FLD(1, 20)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on      REG_FLD(1, 19)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_cdec REG_FLD(1, 18)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_rdec  REG_FLD(1, 17)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_cdec  REG_FLD(1, 16)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle1_csel    REG_FLD(1, 15)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle_ccp_cdec     REG_FLD(2, 12)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_rdec      REG_FLD(2, 8)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_cdec      REG_FLD(2, 4)
#define PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle1_csel        REG_FLD(4, 0)

#define PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_frc_rx_aeq_egeq_max  REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_max      REG_FLD(6, 18)
#define PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_max REG_FLD(6, 12)
#define PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_max REG_FLD(6, 6)
#define PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_max REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_frc_rx_aeq_egeq_ratio REG_FLD(1, 24)
#define PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_ratio    REG_FLD(6, 18)
#define PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_ratio REG_FLD(6, 12)
#define PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_ratio REG_FLD(6, 6)
#define PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_ratio REG_FLD(6, 0)

#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_pi_slew          REG_FLD(2, 21)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_gen4_pi_slew     REG_FLD(2, 19)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_chg          REG_FLD(1, 18)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_delta  REG_FLD(1, 17)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_corner   REG_FLD(1, 16)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_gain     REG_FLD(1, 15)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ipath_stb    REG_FLD(1, 14)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ppath_dvn    REG_FLD(1, 13)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digspeed     REG_FLD(1, 12)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digclk_div   REG_FLD(1, 11)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_piclk_div    REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_en       REG_FLD(1, 9)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_en     REG_FLD(1, 8)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_lck2ref      REG_FLD(1, 7)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dig_en       REG_FLD(1, 6)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_en           REG_FLD(1, 5)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_selfbias_en REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_cal_offset REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_slc_en   REG_FLD(1, 2)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_rdec REG_FLD(1, 1)
#define PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_tx_ser_div       REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_cdr_dessc_delta      REG_FLD(9, 11)
#define PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_selfbias_en  REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_cal_offset   REG_FLD(5, 5)
#define PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_slc_en       REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_ctle_ccp_rdec     REG_FLD(2, 2)
#define PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_tx_ser_div           REG_FLD(2, 0)

#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_chg              REG_FLD(1, 31)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_corner       REG_FLD(3, 28)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_gain         REG_FLD(3, 24)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ipath_stb        REG_FLD(5, 19)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ppath_dvn        REG_FLD(8, 11)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digspeed         REG_FLD(2, 9)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digclk_div       REG_FLD(2, 7)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_piclk_div        REG_FLD(2, 5)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_en           REG_FLD(1, 4)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dessc_en         REG_FLD(1, 3)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_lck2ref          REG_FLD(1, 2)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dig_en           REG_FLD(1, 1)
#define PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_en               REG_FLD(1, 0)

#define PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_fall      REG_FLD(5, 8)
#define PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_rsie      REG_FLD(5, 0)

#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_corner  REG_FLD(3, 25)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_corner  REG_FLD(3, 22)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_corner  REG_FLD(3, 19)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_corner  REG_FLD(3, 16)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_gain    REG_FLD(3, 12)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_gain    REG_FLD(3, 8)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_gain    REG_FLD(3, 4)
#define PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_gain    REG_FLD(3, 0)

#define PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen3_dessc_delta REG_FLD(9, 18)
#define PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen2_dessc_delta REG_FLD(9, 9)
#define PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen1_dessc_delta REG_FLD(9, 0)

#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_busclk_div  REG_FLD(3, 29)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen3_busclk_div  REG_FLD(3, 26)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen2_busclk_div  REG_FLD(3, 23)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen1_busclk_div  REG_FLD(3, 20)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_busclk_div       REG_FLD(3, 17)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_cdr_busclk_div   REG_FLD(1, 16)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_tx_ser_dcc_en        REG_FLD(1, 10)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_tx_ser_dcc_en    REG_FLD(1, 9)
#define PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_delta REG_FLD(9, 0)

#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_cal_done(reg32)      REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_cal_done, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_frc_cal_done(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_cal_done, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_pdck_enable(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_pdck_enable, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_frc_pdck_enable(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_pdck_enable, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_enable(reg32)        REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_frc_enable(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_enable, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_enable_scheme_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable_scheme_sel, (reg32))
#define PEXTP_DIG_LN_TRX_00_GET_rg_xtp_ln_t2rlb_ana_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_t2rlb_ana_en, (reg32))

#define PEXTP_DIG_LN_TRX_04_GET_rg_xtp_ln_t2rlb_tx_lctxcp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1, (reg32))
#define PEXTP_DIG_LN_TRX_04_GET_rg_xtp_ln_t2rlb_tx_lctxc0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxc0, (reg32))
#define PEXTP_DIG_LN_TRX_04_GET_rg_xtp_ln_t2rlb_tx_lctxcm1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1, (reg32))

#define PEXTP_DIG_LN_TRX_08_GET_rg_xtp_ln_t2rlb_tx_lctxcp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_max, (reg32))
#define PEXTP_DIG_LN_TRX_08_GET_rg_xtp_ln_t2rlb_tx_lctxc0_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_max, (reg32))
#define PEXTP_DIG_LN_TRX_08_GET_rg_xtp_ln_t2rlb_tx_lctxcm1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_max, (reg32))

#define PEXTP_DIG_LN_TRX_0C_GET_rg_xtp_ln_t2rlb_tx_lctxcp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_min, (reg32))
#define PEXTP_DIG_LN_TRX_0C_GET_rg_xtp_ln_t2rlb_tx_lctxc0_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_min, (reg32))
#define PEXTP_DIG_LN_TRX_0C_GET_rg_xtp_ln_t2rlb_tx_lctxcm1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_min, (reg32))

#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_tpllsel_1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_1, (reg32))
#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_tpllsel_0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_0, (reg32))
#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_speed_3(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_3, (reg32))
#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_speed_2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_2, (reg32))
#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_speed_1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_1, (reg32))
#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_speed_0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_0, (reg32))
#define PEXTP_DIG_LN_TRX_10_GET_rg_xtp_ln_dareg_mode(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_mode, (reg32))

#define PEXTP_DIG_LN_TRX_14_GET_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_14_GET_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_14_GET_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_14_GET_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn, (reg32))

#define PEXTP_DIG_LN_TRX_18_GET_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_18_GET_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_18_GET_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_18_GET_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn, (reg32))

#define PEXTP_DIG_LN_TRX_1C_GET_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_1C_GET_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_1C_GET_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_1C_GET_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn, (reg32))

#define PEXTP_DIG_LN_TRX_20_GET_rg_xtp_ln_pipe_tx_data(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_20_FLD_rg_xtp_ln_pipe_tx_data, (reg32))

#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_rx_elec_idle(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_elec_idle, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_frc_pipe_rx_elec_idle(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_frc_pipe_rx_elec_idle, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_get_lc_preset_coef(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_get_lc_preset_coef, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_lc_preset_index(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lc_preset_index, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_invalid_request(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_invalid_request, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_rx_polarity(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_polarity, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_lf(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lf, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_fs(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_fs, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_tx_sync_header(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_sync_header, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_tx_start_block(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_start_block, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_tx_data_valid(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_data_valid, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_tx_datak(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_datak, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_tx_elec_idle(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_elec_idle, (reg32))
#define PEXTP_DIG_LN_TRX_24_GET_rg_xtp_ln_pipe_tx_compliance(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_compliance, (reg32))

#define PEXTP_DIG_LN_TRX_28_GET_rg_xtp_ln_pipe_tx_deemph(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_28_FLD_rg_xtp_ln_pipe_tx_deemph, (reg32))

#define PEXTP_DIG_LN_TRX_2C_GET_rg_xtp_ln_pipe_rx_valid(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_valid, (reg32))
#define PEXTP_DIG_LN_TRX_2C_GET_rg_xtp_ln_pipe_rx_status(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_status, (reg32))
#define PEXTP_DIG_LN_TRX_2C_GET_rg_xtp_ln_pipe_tx_preset_coef(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_tx_preset_coef, (reg32))

#define PEXTP_DIG_LN_TRX_30_GET_rg_xtp_ln_pipe_rx_data(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_30_FLD_rg_xtp_ln_pipe_rx_data, (reg32))

#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_lc_lf(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_lf, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_lc_fs(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_fs, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_lc_tx_coef_valid(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_tx_coef_valid, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_fb_direction_change(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_direction_change, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_fb_figure_merit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_figure_merit, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_rx_sync_header(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_sync_header, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_rx_start_block(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_start_block, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_rx_data_valid(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_data_valid, (reg32))
#define PEXTP_DIG_LN_TRX_34_GET_rg_xtp_ln_pipe_rx_datak(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_datak, (reg32))

#define PEXTP_DIG_LN_TRX_38_GET_rg_xtp_ln_pipe_lc_tx_preset_coef(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_38_FLD_rg_xtp_ln_pipe_lc_tx_preset_coef, (reg32))

#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_data_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_data_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_data_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_data_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_lfps(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_lfps(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_lfps_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_lfps_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_ser_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_ser_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_ser_en(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_ser_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_drv_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_drv_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_drv_en(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_drv_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_bias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_bias_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_bias_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_bias_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_cmkp_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_cmkp_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_cmkp_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_cmkp_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_rxdet_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_rxdet_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_rxdet_en(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_rxdet_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_acjtag_data(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_data, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_acjtag_data(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_data, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tx_acjtag_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tx_acjtag_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_en, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_tpllsel(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tpllsel, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_tpllsel(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tpllsel, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_speed(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_speed, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_speed(reg32)         REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_speed, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_frc_mode(reg32)      REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_mode, (reg32))
#define PEXTP_DIG_LN_TRX_40_GET_rg_xtp_ln_mode(reg32)          REG_FLD_GET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_mode, (reg32))

#define PEXTP_DIG_LN_TRX_44_GET_rg_xtp_ln_tx_data(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TRX_44_FLD_rg_xtp_ln_tx_data, (reg32))

#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_frc_tx_lctxcp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcp1, (reg32))
#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_tx_lctxcp1(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcp1, (reg32))
#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_frc_tx_lctxc0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxc0, (reg32))
#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_tx_lctxc0(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxc0, (reg32))
#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_frc_tx_lctxcm1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcm1, (reg32))
#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_tx_lctxcm1(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcm1, (reg32))
#define PEXTP_DIG_LN_TRX_48_GET_rg_xtp_ln_frc_tx_data(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_data, (reg32))

#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_sgdt_cal_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_cal_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_sgdt_cal_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_cal_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_sgdt_nbias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_nbias_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_sgdt_nbias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_nbias_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_sgdt_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_sgdt_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_lfps_os(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_os, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_lfps_os(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_os, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_lfps_cal_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_cal_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_lfps_cal_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_cal_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_lfps_nbias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_nbias_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_lfps_nbias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_nbias_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_lfps_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_lfps_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_hz(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_hz, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_hz(reg32)         REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_hz, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_acjtag_rxn_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_mode, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_acjtag_rxn_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_mode, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_acjtag_rxp_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_mode, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_acjtag_rxp_mode(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_mode, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_acjtag_rxn_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_acjtag_rxn_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_rx_acjtag_rxp_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_rx_acjtag_rxp_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_en, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_frc_tx_margin(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_tx_margin, (reg32))
#define PEXTP_DIG_LN_TRX_4C_GET_rg_xtp_ln_tx_margin(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_tx_margin, (reg32))

#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_dfetp5_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp5_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_dfetp5_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp5_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_dfetp6_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp6_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_dfetp6_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp6_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_dfetp7_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp7_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_dfetp7_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp7_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_afe_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_afe_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_afe_en(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_afe_en, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_sgdt_rleak(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_rleak, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_sgdt_rleak(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_rleak, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_sgdt_vth(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_vth, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_sgdt_vth(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_vth, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_sgdt_nos(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_nos, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_sgdt_nos(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_nos, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_frc_rx_sgdt_pos(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_pos, (reg32))
#define PEXTP_DIG_LN_TRX_50_GET_rg_xtp_ln_rx_sgdt_pos(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_pos, (reg32))

#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_sgdt_hf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_sgdt_hf, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_sgdt_hf(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_sgdt_hf, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_cdr_cfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_cfdok_th, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_cdr_cfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_cfdok_th, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_cdr_int1_lpfbw(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_int1_lpfbw, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_cdr_int1_lpfbw(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_int1_lpfbw, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_cdr_track(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_track, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_cdr_track(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_track, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_cdr_lck2dt(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2dt, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_cdr_lck2dt(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2dt, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_cdr_lck2ref(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2ref, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_cdr_lck2ref(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2ref, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_cdr_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_cdr_en(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_dfetp1_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp1_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_dfetp1_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp1_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_dfetp2_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp2_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_dfetp2_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp2_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_dfetp3_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp3_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_dfetp3_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp3_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_frc_rx_dfetp4_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp4_en, (reg32))
#define PEXTP_DIG_LN_TRX_54_GET_rg_xtp_ln_rx_dfetp4_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp4_en, (reg32))

#define PEXTP_DIG_LN_TRX_58_GET_rg_xtp_ln_frc_rx_cdr_rfdx2_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdx2_th, (reg32))
#define PEXTP_DIG_LN_TRX_58_GET_rg_xtp_ln_rx_cdr_rfdx2_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdx2_th, (reg32))
#define PEXTP_DIG_LN_TRX_58_GET_rg_xtp_ln_frc_rx_cdr_rfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdok_th, (reg32))
#define PEXTP_DIG_LN_TRX_58_GET_rg_xtp_ln_rx_cdr_rfdok_th(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdok_th, (reg32))

#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_frc_rx_cdr_pdkunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_rx_cdr_pdkunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_frc_rx_cdr_pdnunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdnunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_rx_cdr_pdnunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdnunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_frc_rx_cdr_pdkdvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkdvn, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_rx_cdr_pdkdvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkdvn, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_frc_rx_cdr_pdndvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdndvn, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_rx_cdr_pdndvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdndvn, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_frc_rx_cdr_rfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_rfdunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_rx_cdr_rfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_rfdunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_frc_rx_cdr_cfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_cfdunit, (reg32))
#define PEXTP_DIG_LN_TRX_5C_GET_rg_xtp_ln_rx_cdr_cfdunit(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_cfdunit, (reg32))

#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_frc_rx_cdr_autok_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_autok_en, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_rx_cdr_autok_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_autok_en, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_frc_rx_cdr_pdkkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpf, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_rx_cdr_pdkkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpf, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_frc_rx_cdr_pdnkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpf, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_rx_cdr_pdnkpf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpf, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_frc_rx_cdr_pdkkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpc, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_rx_cdr_pdkkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpc, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_frc_rx_cdr_pdnkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpc, (reg32))
#define PEXTP_DIG_LN_TRX_60_GET_rg_xtp_ln_rx_cdr_pdnkpc(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpc, (reg32))

#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_rmtxskip(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rmtxskip, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_rmtxskip(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rmtxskip, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_invldreq(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_invldreq, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_invldreq(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_invldreq, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_rxeqeval(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rxeqeval, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_rxeqeval(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rxeqeval, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_inprgrss(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_inprgrss, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_inprgrss(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_inprgrss, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_en, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_en(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_en, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_ckon(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_ckon, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_ckon(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_ckon, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_rstb(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rstb, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_rstb(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rstb, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_aeq_bypass(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_bypass, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_aeq_bypass(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_bypass, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_cal_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_en, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_cal_en(reg32)     REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_en, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_cal_ckon(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_ckon, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_cal_ckon(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_ckon, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_cal_rstb(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_rstb, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_cal_rstb(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_rstb, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_frc_rx_cdr_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cdr_autok_band, (reg32))
#define PEXTP_DIG_LN_TRX_64_GET_rg_xtp_ln_rx_cdr_autok_band(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cdr_autok_band, (reg32))

#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_frc_rx_aeq_rmtxc0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxc0, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_rx_aeq_rmtxc0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxc0, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_frc_rx_aeq_rmtxcm1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcm1, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_rx_aeq_rmtxcm1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxcm1, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_frc_rx_aeq_rmtxlf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxlf, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_rx_aeq_rmtxlf(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxlf, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_frc_rx_aeq_rmtxfs(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxfs, (reg32))
#define PEXTP_DIG_LN_TRX_68_GET_rg_xtp_ln_rx_aeq_rmtxfs(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxfs, (reg32))

#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_frc_rx_aeq_vga(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_vga, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_rx_aeq_vga(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_vga, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_frc_rx_aeq_ctle(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_ctle, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_rx_aeq_ctle(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_ctle, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_frc_rx_aeq_att(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_att, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_rx_aeq_att(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_att, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_frc_rx_aeq_rmtxcp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcp1, (reg32))
#define PEXTP_DIG_LN_TRX_6C_GET_rg_xtp_ln_rx_aeq_rmtxcp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_rmtxcp1, (reg32))

#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_frc_rx_aeq_dfetp4(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp4, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_rx_aeq_dfetp4(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp4, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_frc_rx_aeq_dfetp5(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp5, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_rx_aeq_dfetp5(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp5, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_frc_rx_aeq_dfetp6(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp6, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_rx_aeq_dfetp6(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp6, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_frc_rx_aeq_dfetp7(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp7, (reg32))
#define PEXTP_DIG_LN_TRX_70_GET_rg_xtp_ln_rx_aeq_dfetp7(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp7, (reg32))

#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_frc_rx_aeq_strb(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_strb, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_rx_aeq_strb(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_strb, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_frc_rx_aeq_dfetp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp1, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_rx_aeq_dfetp1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp1, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_frc_rx_aeq_dfetp2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp2, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_rx_aeq_dfetp2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp2, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_frc_rx_aeq_dfetp3(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp3, (reg32))
#define PEXTP_DIG_LN_TRX_74_GET_rg_xtp_ln_rx_aeq_dfetp3(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp3, (reg32))

#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_frc_rx_afe_bwsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_afe_bwsel, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_rx_afe_bwsel(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_afe_bwsel, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_frc_rx_aeq_ctle_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle_max, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_rx_aeq_ctle_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle_max, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_rx_aeq_ctle2cp1_min(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_min, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_rx_aeq_ctle2cp1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_max, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_frc_rx_aeq_vgaref(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_vgaref, (reg32))
#define PEXTP_DIG_LN_TRX_78_GET_rg_xtp_ln_rx_aeq_vgaref(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_vgaref, (reg32))

#define PEXTP_DIG_LN_TRX_C0_GET_rgs_xtp_ln_pipe_rx_polarity(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_rx_polarity, (reg32))
#define PEXTP_DIG_LN_TRX_C0_GET_rgs_xtp_ln_pipe_tx_elec_idle(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_elec_idle, (reg32))
#define PEXTP_DIG_LN_TRX_C0_GET_rgs_xtp_ln_pipe_tx_compliance(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_compliance, (reg32))

#define PEXTP_DIG_LN_TRX_C4_GET_rgs_xtp_ln_pipe_tx_deemph(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_C4_FLD_rgs_xtp_ln_pipe_tx_deemph, (reg32))

#define PEXTP_DIG_LN_TRX_C8_GET_rgs_xtp_ln_pipe_tx_preset_coef(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_C8_FLD_rgs_xtp_ln_pipe_tx_preset_coef, (reg32))

#define PEXTP_DIG_LN_TRX_CC_GET_rgs_xtp_ln_pipe_rx_valid(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_valid, (reg32))
#define PEXTP_DIG_LN_TRX_CC_GET_rgs_xtp_ln_pipe_rx_status(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_status, (reg32))
#define PEXTP_DIG_LN_TRX_CC_GET_rgs_xtp_ln_pipe_rx_elec_idle(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_elec_idle, (reg32))
#define PEXTP_DIG_LN_TRX_CC_GET_rgs_xtp_ln_pipe_lf(reg32)      REG_FLD_GET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_lf, (reg32))
#define PEXTP_DIG_LN_TRX_CC_GET_rgs_xtp_ln_pipe_fs(reg32)      REG_FLD_GET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_fs, (reg32))

#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_cdr_pi_slew(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_cdr_pi_slew, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_cdr_gen3_pi_slew(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen3_pi_slew, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_cdr_gen2_pi_slew(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen2_pi_slew, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_cdr_gen1_pi_slew(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen1_pi_slew, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_fedig_iso_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_iso_en, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_fedig_pwr_on(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_fedig_iso_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_iso_en, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_fedig_pwr_on_2nd(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on_2nd, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_fedig_pwr_on(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_ctle_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_vga_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_vga_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_frc_rx_ctle1_csel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle1_csel, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_ctle_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_vga_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_vga_ccp_cdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_cdec, (reg32))
#define PEXTP_DIG_LN_TRX_D0_GET_rg_xtp_ln_rx_ctle1_csel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle1_csel, (reg32))

#define PEXTP_DIG_LN_TRX_D4_GET_rg_xtp_ln_frc_rx_aeq_egeq_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_frc_rx_aeq_egeq_max, (reg32))
#define PEXTP_DIG_LN_TRX_D4_GET_rg_xtp_ln_rx_aeq_egeq_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_max, (reg32))
#define PEXTP_DIG_LN_TRX_D4_GET_rg_xtp_ln_rx_aeq_egeq_gen3_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_max, (reg32))
#define PEXTP_DIG_LN_TRX_D4_GET_rg_xtp_ln_rx_aeq_egeq_gen2_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_max, (reg32))
#define PEXTP_DIG_LN_TRX_D4_GET_rg_xtp_ln_rx_aeq_egeq_gen1_max(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_max, (reg32))

#define PEXTP_DIG_LN_TRX_DC_GET_rg_xtp_ln_frc_rx_aeq_egeq_ratio(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_frc_rx_aeq_egeq_ratio, (reg32))
#define PEXTP_DIG_LN_TRX_DC_GET_rg_xtp_ln_rx_aeq_egeq_ratio(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_ratio, (reg32))
#define PEXTP_DIG_LN_TRX_DC_GET_rg_xtp_ln_rx_aeq_egeq_gen3_ratio(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_ratio, (reg32))
#define PEXTP_DIG_LN_TRX_DC_GET_rg_xtp_ln_rx_aeq_egeq_gen2_ratio(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_ratio, (reg32))
#define PEXTP_DIG_LN_TRX_DC_GET_rg_xtp_ln_rx_aeq_egeq_gen1_ratio(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_ratio, (reg32))

#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_cdr_pi_slew(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_pi_slew, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_cdr_gen4_pi_slew(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_gen4_pi_slew, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_chg(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_chg, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_dessc_delta(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_delta, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_iir_corner(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_corner, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_iir_gain(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_gain, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_ipath_stb(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ipath_stb, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_digspeed(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digspeed, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_digclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_piclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_piclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_iir_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_en, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_dessc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_en, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_lck2ref(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_lck2ref, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_dig_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dig_en, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_cdr_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_en, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_rx_sgdt_selfbias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_selfbias_en, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_rx_sgdt_cal_offset(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_cal_offset, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_rx_sgdt_slc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_slc_en, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_rx_ctle_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_TRX_E0_GET_rg_xtp_ln_frc_tx_ser_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_tx_ser_div, (reg32))

#define PEXTP_DIG_LN_TRX_E4_GET_rg_xtp_ln_cdr_dessc_delta(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_cdr_dessc_delta, (reg32))
#define PEXTP_DIG_LN_TRX_E4_GET_rg_xtp_ln_rx_sgdt_selfbias_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_selfbias_en, (reg32))
#define PEXTP_DIG_LN_TRX_E4_GET_rg_xtp_ln_rx_sgdt_cal_offset(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_cal_offset, (reg32))
#define PEXTP_DIG_LN_TRX_E4_GET_rg_xtp_ln_rx_sgdt_slc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_slc_en, (reg32))
#define PEXTP_DIG_LN_TRX_E4_GET_rg_xtp_ln_rx_ctle_ccp_rdec(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_ctle_ccp_rdec, (reg32))
#define PEXTP_DIG_LN_TRX_E4_GET_rg_xtp_ln_tx_ser_div(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_tx_ser_div, (reg32))

#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_chg(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_chg, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_iir_corner(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_corner, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_iir_gain(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_gain, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_ipath_stb(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ipath_stb, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_ppath_dvn(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ppath_dvn, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_digspeed(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digspeed, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_digclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_piclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_piclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_iir_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_en, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_dessc_en(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dessc_en, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_lck2ref(reg32)   REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_lck2ref, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_dig_en(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dig_en, (reg32))
#define PEXTP_DIG_LN_TRX_E8_GET_rg_xtp_ln_cdr_en(reg32)        REG_FLD_GET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_en, (reg32))

#define PEXTP_DIG_LN_TRX_EC_GET_rg_xtp_ln_rx_cdr_chg_fall(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_fall, (reg32))
#define PEXTP_DIG_LN_TRX_EC_GET_rg_xtp_ln_rx_cdr_chg_rsie(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_rsie, (reg32))

#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen4_iir_corner(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_corner, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen3_iir_corner(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_corner, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen2_iir_corner(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_corner, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen1_iir_corner(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_corner, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen4_iir_gain(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_gain, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen3_iir_gain(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_gain, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen2_iir_gain(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_gain, (reg32))
#define PEXTP_DIG_LN_TRX_F0_GET_rg_xtp_ln_cdr_gen1_iir_gain(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_gain, (reg32))

#define PEXTP_DIG_LN_TRX_F4_GET_rg_xtp_ln_cdr_gen3_dessc_delta(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen3_dessc_delta, (reg32))
#define PEXTP_DIG_LN_TRX_F4_GET_rg_xtp_ln_cdr_gen2_dessc_delta(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen2_dessc_delta, (reg32))
#define PEXTP_DIG_LN_TRX_F4_GET_rg_xtp_ln_cdr_gen1_dessc_delta(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen1_dessc_delta, (reg32))

#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_cdr_gen4_busclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_busclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_cdr_gen3_busclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen3_busclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_cdr_gen2_busclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen2_busclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_cdr_gen1_busclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen1_busclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_cdr_busclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_busclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_frc_cdr_busclk_div(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_cdr_busclk_div, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_tx_ser_dcc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_tx_ser_dcc_en, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_frc_tx_ser_dcc_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_tx_ser_dcc_en, (reg32))
#define PEXTP_DIG_LN_TRX_F8_GET_rg_xtp_ln_cdr_gen4_dessc_delta(reg32) REG_FLD_GET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_delta, (reg32))

#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_cal_done, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_frc_cal_done(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_cal_done, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_pdck_enable(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_pdck_enable, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_frc_pdck_enable(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_pdck_enable, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_enable(reg32, val)   REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_frc_enable(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_enable, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_enable_scheme_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable_scheme_sel, (reg32), (val))
#define PEXTP_DIG_LN_TRX_00_SET_rg_xtp_ln_t2rlb_ana_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_t2rlb_ana_en, (reg32), (val))

#define PEXTP_DIG_LN_TRX_04_SET_rg_xtp_ln_t2rlb_tx_lctxcp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_04_SET_rg_xtp_ln_t2rlb_tx_lctxc0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxc0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_04_SET_rg_xtp_ln_t2rlb_tx_lctxcm1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1, (reg32), (val))

#define PEXTP_DIG_LN_TRX_08_SET_rg_xtp_ln_t2rlb_tx_lctxcp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_08_SET_rg_xtp_ln_t2rlb_tx_lctxc0_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_08_SET_rg_xtp_ln_t2rlb_tx_lctxcm1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_max, (reg32), (val))

#define PEXTP_DIG_LN_TRX_0C_SET_rg_xtp_ln_t2rlb_tx_lctxcp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_min, (reg32), (val))
#define PEXTP_DIG_LN_TRX_0C_SET_rg_xtp_ln_t2rlb_tx_lctxc0_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_min, (reg32), (val))
#define PEXTP_DIG_LN_TRX_0C_SET_rg_xtp_ln_t2rlb_tx_lctxcm1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_min, (reg32), (val))

#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_tpllsel_1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_tpllsel_0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_speed_3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_3, (reg32), (val))
#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_speed_2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_2, (reg32), (val))
#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_speed_1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_speed_0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_10_SET_rg_xtp_ln_dareg_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_mode, (reg32), (val))

#define PEXTP_DIG_LN_TRX_14_SET_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_14_SET_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_14_SET_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_14_SET_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn, (reg32), (val))

#define PEXTP_DIG_LN_TRX_18_SET_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_18_SET_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_18_SET_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_18_SET_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn, (reg32), (val))

#define PEXTP_DIG_LN_TRX_1C_SET_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_1C_SET_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_1C_SET_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_1C_SET_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn, (reg32), (val))

#define PEXTP_DIG_LN_TRX_20_SET_rg_xtp_ln_pipe_tx_data(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_20_FLD_rg_xtp_ln_pipe_tx_data, (reg32), (val))

#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_rx_elec_idle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_elec_idle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_frc_pipe_rx_elec_idle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_frc_pipe_rx_elec_idle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_get_lc_preset_coef(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_get_lc_preset_coef, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_lc_preset_index(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lc_preset_index, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_invalid_request(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_invalid_request, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_rx_polarity(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_polarity, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_lf(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_fs(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_fs, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_tx_sync_header(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_sync_header, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_tx_start_block(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_start_block, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_tx_data_valid(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_data_valid, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_tx_datak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_datak, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_tx_elec_idle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_elec_idle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_24_SET_rg_xtp_ln_pipe_tx_compliance(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_compliance, (reg32), (val))

#define PEXTP_DIG_LN_TRX_28_SET_rg_xtp_ln_pipe_tx_deemph(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_28_FLD_rg_xtp_ln_pipe_tx_deemph, (reg32), (val))

#define PEXTP_DIG_LN_TRX_2C_SET_rg_xtp_ln_pipe_rx_valid(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_valid, (reg32), (val))
#define PEXTP_DIG_LN_TRX_2C_SET_rg_xtp_ln_pipe_rx_status(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_status, (reg32), (val))
#define PEXTP_DIG_LN_TRX_2C_SET_rg_xtp_ln_pipe_tx_preset_coef(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_tx_preset_coef, (reg32), (val))

#define PEXTP_DIG_LN_TRX_30_SET_rg_xtp_ln_pipe_rx_data(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_30_FLD_rg_xtp_ln_pipe_rx_data, (reg32), (val))

#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_lc_lf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_lf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_lc_fs(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_fs, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_lc_tx_coef_valid(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_tx_coef_valid, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_fb_direction_change(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_direction_change, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_fb_figure_merit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_figure_merit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_rx_sync_header(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_sync_header, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_rx_start_block(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_start_block, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_rx_data_valid(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_data_valid, (reg32), (val))
#define PEXTP_DIG_LN_TRX_34_SET_rg_xtp_ln_pipe_rx_datak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_datak, (reg32), (val))

#define PEXTP_DIG_LN_TRX_38_SET_rg_xtp_ln_pipe_lc_tx_preset_coef(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_38_FLD_rg_xtp_ln_pipe_lc_tx_preset_coef, (reg32), (val))

#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_data_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_data_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_data_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_data_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_lfps(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_lfps(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_lfps_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_lfps_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_ser_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_ser_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_ser_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_ser_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_drv_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_drv_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_drv_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_drv_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_bias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_bias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_bias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_bias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_cmkp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_cmkp_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_cmkp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_cmkp_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_rxdet_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_rxdet_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_rxdet_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_rxdet_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_acjtag_data(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_data, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_acjtag_data(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_data, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tx_acjtag_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tx_acjtag_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_tpllsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tpllsel, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_tpllsel(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tpllsel, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_speed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_speed, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_speed(reg32, val)    REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_speed, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_frc_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_mode, (reg32), (val))
#define PEXTP_DIG_LN_TRX_40_SET_rg_xtp_ln_mode(reg32, val)     REG_FLD_SET(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_mode, (reg32), (val))

#define PEXTP_DIG_LN_TRX_44_SET_rg_xtp_ln_tx_data(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TRX_44_FLD_rg_xtp_ln_tx_data, (reg32), (val))

#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_frc_tx_lctxcp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcp1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_tx_lctxcp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcp1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_frc_tx_lctxc0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxc0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_tx_lctxc0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxc0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_frc_tx_lctxcm1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcm1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_tx_lctxcm1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcm1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_48_SET_rg_xtp_ln_frc_tx_data(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_data, (reg32), (val))

#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_sgdt_cal_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_cal_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_sgdt_cal_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_cal_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_sgdt_nbias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_nbias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_sgdt_nbias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_nbias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_sgdt_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_sgdt_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_lfps_os(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_os, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_lfps_os(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_os, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_lfps_cal_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_cal_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_lfps_cal_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_cal_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_lfps_nbias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_nbias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_lfps_nbias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_nbias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_lfps_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_lfps_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_hz(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_hz, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_hz(reg32, val)    REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_hz, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_acjtag_rxn_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_mode, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_acjtag_rxn_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_mode, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_acjtag_rxp_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_mode, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_acjtag_rxp_mode(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_mode, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_acjtag_rxn_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_acjtag_rxn_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_rx_acjtag_rxp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_rx_acjtag_rxp_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_frc_tx_margin(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_tx_margin, (reg32), (val))
#define PEXTP_DIG_LN_TRX_4C_SET_rg_xtp_ln_tx_margin(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_tx_margin, (reg32), (val))

#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_dfetp5_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp5_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_dfetp5_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp5_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_dfetp6_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp6_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_dfetp6_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp6_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_dfetp7_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp7_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_dfetp7_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp7_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_afe_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_afe_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_afe_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_afe_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_sgdt_rleak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_rleak, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_sgdt_rleak(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_rleak, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_sgdt_vth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_vth, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_sgdt_vth(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_vth, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_sgdt_nos(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_nos, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_sgdt_nos(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_nos, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_frc_rx_sgdt_pos(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_pos, (reg32), (val))
#define PEXTP_DIG_LN_TRX_50_SET_rg_xtp_ln_rx_sgdt_pos(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_pos, (reg32), (val))

#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_sgdt_hf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_sgdt_hf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_sgdt_hf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_sgdt_hf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_cdr_cfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_cfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_cdr_cfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_cfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_cdr_int1_lpfbw(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_int1_lpfbw, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_cdr_int1_lpfbw(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_int1_lpfbw, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_cdr_track(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_track, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_cdr_track(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_track, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_cdr_lck2dt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2dt, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_cdr_lck2dt(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2dt, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_cdr_lck2ref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2ref, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_cdr_lck2ref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2ref, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_cdr_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_cdr_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_dfetp1_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp1_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_dfetp1_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp1_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_dfetp2_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp2_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_dfetp2_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp2_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_dfetp3_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp3_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_dfetp3_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp3_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_frc_rx_dfetp4_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp4_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_54_SET_rg_xtp_ln_rx_dfetp4_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp4_en, (reg32), (val))

#define PEXTP_DIG_LN_TRX_58_SET_rg_xtp_ln_frc_rx_cdr_rfdx2_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdx2_th, (reg32), (val))
#define PEXTP_DIG_LN_TRX_58_SET_rg_xtp_ln_rx_cdr_rfdx2_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdx2_th, (reg32), (val))
#define PEXTP_DIG_LN_TRX_58_SET_rg_xtp_ln_frc_rx_cdr_rfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdok_th, (reg32), (val))
#define PEXTP_DIG_LN_TRX_58_SET_rg_xtp_ln_rx_cdr_rfdok_th(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdok_th, (reg32), (val))

#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_frc_rx_cdr_pdkunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_rx_cdr_pdkunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_frc_rx_cdr_pdnunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdnunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_rx_cdr_pdnunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdnunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_frc_rx_cdr_pdkdvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkdvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_rx_cdr_pdkdvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkdvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_frc_rx_cdr_pdndvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdndvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_rx_cdr_pdndvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdndvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_frc_rx_cdr_rfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_rfdunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_rx_cdr_rfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_rfdunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_frc_rx_cdr_cfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_cfdunit, (reg32), (val))
#define PEXTP_DIG_LN_TRX_5C_SET_rg_xtp_ln_rx_cdr_cfdunit(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_cfdunit, (reg32), (val))

#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_frc_rx_cdr_autok_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_autok_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_rx_cdr_autok_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_autok_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_frc_rx_cdr_pdkkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_rx_cdr_pdkkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_frc_rx_cdr_pdnkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_rx_cdr_pdnkpf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_frc_rx_cdr_pdkkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpc, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_rx_cdr_pdkkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpc, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_frc_rx_cdr_pdnkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpc, (reg32), (val))
#define PEXTP_DIG_LN_TRX_60_SET_rg_xtp_ln_rx_cdr_pdnkpc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpc, (reg32), (val))

#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_rmtxskip(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rmtxskip, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_rmtxskip(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rmtxskip, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_invldreq(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_invldreq, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_invldreq(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_invldreq, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_rxeqeval(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rxeqeval, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_rxeqeval(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rxeqeval, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_inprgrss(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_inprgrss, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_inprgrss(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_inprgrss, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_ckon(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_ckon, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_ckon(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_ckon, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_rstb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rstb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_rstb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rstb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_aeq_bypass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_bypass, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_aeq_bypass(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_bypass, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_cal_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_cal_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_cal_ckon(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_ckon, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_cal_ckon(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_ckon, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_cal_rstb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_rstb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_cal_rstb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_rstb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_frc_rx_cdr_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cdr_autok_band, (reg32), (val))
#define PEXTP_DIG_LN_TRX_64_SET_rg_xtp_ln_rx_cdr_autok_band(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cdr_autok_band, (reg32), (val))

#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_frc_rx_aeq_rmtxc0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxc0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_rx_aeq_rmtxc0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxc0, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_frc_rx_aeq_rmtxcm1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcm1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_rx_aeq_rmtxcm1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxcm1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_frc_rx_aeq_rmtxlf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxlf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_rx_aeq_rmtxlf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxlf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_frc_rx_aeq_rmtxfs(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxfs, (reg32), (val))
#define PEXTP_DIG_LN_TRX_68_SET_rg_xtp_ln_rx_aeq_rmtxfs(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxfs, (reg32), (val))

#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_frc_rx_aeq_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_vga, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_rx_aeq_vga(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_vga, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_frc_rx_aeq_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_ctle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_rx_aeq_ctle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_ctle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_frc_rx_aeq_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_att, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_rx_aeq_att(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_att, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_frc_rx_aeq_rmtxcp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcp1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_6C_SET_rg_xtp_ln_rx_aeq_rmtxcp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_rmtxcp1, (reg32), (val))

#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_frc_rx_aeq_dfetp4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp4, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_rx_aeq_dfetp4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp4, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_frc_rx_aeq_dfetp5(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp5, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_rx_aeq_dfetp5(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp5, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_frc_rx_aeq_dfetp6(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp6, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_rx_aeq_dfetp6(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp6, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_frc_rx_aeq_dfetp7(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp7, (reg32), (val))
#define PEXTP_DIG_LN_TRX_70_SET_rg_xtp_ln_rx_aeq_dfetp7(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp7, (reg32), (val))

#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_frc_rx_aeq_strb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_strb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_rx_aeq_strb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_strb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_frc_rx_aeq_dfetp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_rx_aeq_dfetp1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp1, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_frc_rx_aeq_dfetp2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp2, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_rx_aeq_dfetp2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp2, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_frc_rx_aeq_dfetp3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp3, (reg32), (val))
#define PEXTP_DIG_LN_TRX_74_SET_rg_xtp_ln_rx_aeq_dfetp3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp3, (reg32), (val))

#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_frc_rx_afe_bwsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_afe_bwsel, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_rx_afe_bwsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_afe_bwsel, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_frc_rx_aeq_ctle_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_rx_aeq_ctle_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_rx_aeq_ctle2cp1_min(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_min, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_rx_aeq_ctle2cp1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_frc_rx_aeq_vgaref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_vgaref, (reg32), (val))
#define PEXTP_DIG_LN_TRX_78_SET_rg_xtp_ln_rx_aeq_vgaref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_vgaref, (reg32), (val))

#define PEXTP_DIG_LN_TRX_C0_SET_rgs_xtp_ln_pipe_rx_polarity(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_rx_polarity, (reg32), (val))
#define PEXTP_DIG_LN_TRX_C0_SET_rgs_xtp_ln_pipe_tx_elec_idle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_elec_idle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_C0_SET_rgs_xtp_ln_pipe_tx_compliance(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_compliance, (reg32), (val))

#define PEXTP_DIG_LN_TRX_C4_SET_rgs_xtp_ln_pipe_tx_deemph(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_C4_FLD_rgs_xtp_ln_pipe_tx_deemph, (reg32), (val))

#define PEXTP_DIG_LN_TRX_C8_SET_rgs_xtp_ln_pipe_tx_preset_coef(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_C8_FLD_rgs_xtp_ln_pipe_tx_preset_coef, (reg32), (val))

#define PEXTP_DIG_LN_TRX_CC_SET_rgs_xtp_ln_pipe_rx_valid(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_valid, (reg32), (val))
#define PEXTP_DIG_LN_TRX_CC_SET_rgs_xtp_ln_pipe_rx_status(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_status, (reg32), (val))
#define PEXTP_DIG_LN_TRX_CC_SET_rgs_xtp_ln_pipe_rx_elec_idle(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_elec_idle, (reg32), (val))
#define PEXTP_DIG_LN_TRX_CC_SET_rgs_xtp_ln_pipe_lf(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_lf, (reg32), (val))
#define PEXTP_DIG_LN_TRX_CC_SET_rgs_xtp_ln_pipe_fs(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_fs, (reg32), (val))

#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_cdr_pi_slew(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_cdr_pi_slew, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_cdr_gen3_pi_slew(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen3_pi_slew, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_cdr_gen2_pi_slew(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen2_pi_slew, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_cdr_gen1_pi_slew(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen1_pi_slew, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_fedig_iso_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_iso_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_fedig_pwr_on(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_fedig_iso_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_iso_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_fedig_pwr_on_2nd(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on_2nd, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_fedig_pwr_on(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_ctle_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_vga_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_vga_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_frc_rx_ctle1_csel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle1_csel, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_ctle_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_vga_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_vga_ccp_cdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_cdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D0_SET_rg_xtp_ln_rx_ctle1_csel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle1_csel, (reg32), (val))

#define PEXTP_DIG_LN_TRX_D4_SET_rg_xtp_ln_frc_rx_aeq_egeq_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_frc_rx_aeq_egeq_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D4_SET_rg_xtp_ln_rx_aeq_egeq_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D4_SET_rg_xtp_ln_rx_aeq_egeq_gen3_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D4_SET_rg_xtp_ln_rx_aeq_egeq_gen2_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_max, (reg32), (val))
#define PEXTP_DIG_LN_TRX_D4_SET_rg_xtp_ln_rx_aeq_egeq_gen1_max(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_max, (reg32), (val))

#define PEXTP_DIG_LN_TRX_DC_SET_rg_xtp_ln_frc_rx_aeq_egeq_ratio(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_frc_rx_aeq_egeq_ratio, (reg32), (val))
#define PEXTP_DIG_LN_TRX_DC_SET_rg_xtp_ln_rx_aeq_egeq_ratio(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_ratio, (reg32), (val))
#define PEXTP_DIG_LN_TRX_DC_SET_rg_xtp_ln_rx_aeq_egeq_gen3_ratio(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_ratio, (reg32), (val))
#define PEXTP_DIG_LN_TRX_DC_SET_rg_xtp_ln_rx_aeq_egeq_gen2_ratio(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_ratio, (reg32), (val))
#define PEXTP_DIG_LN_TRX_DC_SET_rg_xtp_ln_rx_aeq_egeq_gen1_ratio(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_ratio, (reg32), (val))

#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_cdr_pi_slew(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_pi_slew, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_cdr_gen4_pi_slew(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_gen4_pi_slew, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_chg(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_chg, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_dessc_delta(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_delta, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_iir_corner(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_corner, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_iir_gain(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_gain, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_ipath_stb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ipath_stb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_digspeed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digspeed, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_digclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_piclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_piclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_iir_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_dessc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_lck2ref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_lck2ref, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_dig_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dig_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_cdr_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_rx_sgdt_selfbias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_selfbias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_rx_sgdt_cal_offset(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_cal_offset, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_rx_sgdt_slc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_slc_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_rx_ctle_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E0_SET_rg_xtp_ln_frc_tx_ser_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_tx_ser_div, (reg32), (val))

#define PEXTP_DIG_LN_TRX_E4_SET_rg_xtp_ln_cdr_dessc_delta(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_cdr_dessc_delta, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E4_SET_rg_xtp_ln_rx_sgdt_selfbias_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_selfbias_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E4_SET_rg_xtp_ln_rx_sgdt_cal_offset(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_cal_offset, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E4_SET_rg_xtp_ln_rx_sgdt_slc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_slc_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E4_SET_rg_xtp_ln_rx_ctle_ccp_rdec(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_ctle_ccp_rdec, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E4_SET_rg_xtp_ln_tx_ser_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_tx_ser_div, (reg32), (val))

#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_chg(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_chg, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_iir_corner(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_corner, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_iir_gain(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_gain, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_ipath_stb(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ipath_stb, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_ppath_dvn(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ppath_dvn, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_digspeed(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digspeed, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_digclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_piclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_piclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_iir_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_dessc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dessc_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_lck2ref(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_lck2ref, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_dig_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dig_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_E8_SET_rg_xtp_ln_cdr_en(reg32, val)   REG_FLD_SET(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_en, (reg32), (val))

#define PEXTP_DIG_LN_TRX_EC_SET_rg_xtp_ln_rx_cdr_chg_fall(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_fall, (reg32), (val))
#define PEXTP_DIG_LN_TRX_EC_SET_rg_xtp_ln_rx_cdr_chg_rsie(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_rsie, (reg32), (val))

#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen4_iir_corner(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_corner, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen3_iir_corner(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_corner, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen2_iir_corner(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_corner, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen1_iir_corner(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_corner, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen4_iir_gain(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_gain, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen3_iir_gain(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_gain, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen2_iir_gain(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_gain, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F0_SET_rg_xtp_ln_cdr_gen1_iir_gain(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_gain, (reg32), (val))

#define PEXTP_DIG_LN_TRX_F4_SET_rg_xtp_ln_cdr_gen3_dessc_delta(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen3_dessc_delta, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F4_SET_rg_xtp_ln_cdr_gen2_dessc_delta(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen2_dessc_delta, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F4_SET_rg_xtp_ln_cdr_gen1_dessc_delta(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen1_dessc_delta, (reg32), (val))

#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_cdr_gen4_busclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_busclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_cdr_gen3_busclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen3_busclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_cdr_gen2_busclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen2_busclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_cdr_gen1_busclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen1_busclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_cdr_busclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_busclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_frc_cdr_busclk_div(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_cdr_busclk_div, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_tx_ser_dcc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_tx_ser_dcc_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_frc_tx_ser_dcc_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_tx_ser_dcc_en, (reg32), (val))
#define PEXTP_DIG_LN_TRX_F8_SET_rg_xtp_ln_cdr_gen4_dessc_delta(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_delta, (reg32), (val))

#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_cal_done(val)        REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_cal_done, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_frc_cal_done(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_cal_done, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_pdck_enable(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_pdck_enable, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_frc_pdck_enable(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_pdck_enable, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_enable(val)          REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_frc_enable(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_frc_enable, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_enable_scheme_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_enable_scheme_sel, (val))
#define PEXTP_DIG_LN_TRX_00_VAL_rg_xtp_ln_t2rlb_ana_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_00_FLD_rg_xtp_ln_t2rlb_ana_en, (val))

#define PEXTP_DIG_LN_TRX_04_VAL_rg_xtp_ln_t2rlb_tx_lctxcp1(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1, (val))
#define PEXTP_DIG_LN_TRX_04_VAL_rg_xtp_ln_t2rlb_tx_lctxc0(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxc0, (val))
#define PEXTP_DIG_LN_TRX_04_VAL_rg_xtp_ln_t2rlb_tx_lctxcm1(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_04_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1, (val))

#define PEXTP_DIG_LN_TRX_08_VAL_rg_xtp_ln_t2rlb_tx_lctxcp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_max, (val))
#define PEXTP_DIG_LN_TRX_08_VAL_rg_xtp_ln_t2rlb_tx_lctxc0_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_max, (val))
#define PEXTP_DIG_LN_TRX_08_VAL_rg_xtp_ln_t2rlb_tx_lctxcm1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_08_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_max, (val))

#define PEXTP_DIG_LN_TRX_0C_VAL_rg_xtp_ln_t2rlb_tx_lctxcp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcp1_min, (val))
#define PEXTP_DIG_LN_TRX_0C_VAL_rg_xtp_ln_t2rlb_tx_lctxc0_min(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxc0_min, (val))
#define PEXTP_DIG_LN_TRX_0C_VAL_rg_xtp_ln_t2rlb_tx_lctxcm1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_0C_FLD_rg_xtp_ln_t2rlb_tx_lctxcm1_min, (val))

#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_tpllsel_1(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_1, (val))
#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_tpllsel_0(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_tpllsel_0, (val))
#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_speed_3(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_3, (val))
#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_speed_2(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_2, (val))
#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_speed_1(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_1, (val))
#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_speed_0(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_speed_0, (val))
#define PEXTP_DIG_LN_TRX_10_VAL_rg_xtp_ln_dareg_mode(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_10_FLD_rg_xtp_ln_dareg_mode, (val))

#define PEXTP_DIG_LN_TRX_14_VAL_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen4_ltr_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_14_VAL_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen3_ltr_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_14_VAL_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen2_ltr_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_14_VAL_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_14_FLD_rg_xtp_ln_rx_cdr_gen1_ltr_ppath_dvn, (val))

#define PEXTP_DIG_LN_TRX_18_VAL_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen4_ltd0_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_18_VAL_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen3_ltd0_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_18_VAL_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen2_ltd0_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_18_VAL_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_18_FLD_rg_xtp_ln_rx_cdr_gen1_ltd0_ppath_dvn, (val))

#define PEXTP_DIG_LN_TRX_1C_VAL_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen4_ltd1_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_1C_VAL_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen3_ltd1_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_1C_VAL_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen2_ltd1_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_1C_VAL_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_1C_FLD_rg_xtp_ln_rx_cdr_gen1_ltd1_ppath_dvn, (val))

#define PEXTP_DIG_LN_TRX_20_VAL_rg_xtp_ln_pipe_tx_data(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_20_FLD_rg_xtp_ln_pipe_tx_data, (val))

#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_rx_elec_idle(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_elec_idle, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_frc_pipe_rx_elec_idle(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_frc_pipe_rx_elec_idle, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_get_lc_preset_coef(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_get_lc_preset_coef, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_lc_preset_index(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lc_preset_index, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_invalid_request(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_invalid_request, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_rx_polarity(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_rx_polarity, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_lf(val)         REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_lf, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_fs(val)         REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_fs, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_tx_sync_header(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_sync_header, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_tx_start_block(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_start_block, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_tx_data_valid(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_data_valid, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_tx_datak(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_datak, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_tx_elec_idle(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_elec_idle, (val))
#define PEXTP_DIG_LN_TRX_24_VAL_rg_xtp_ln_pipe_tx_compliance(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_24_FLD_rg_xtp_ln_pipe_tx_compliance, (val))

#define PEXTP_DIG_LN_TRX_28_VAL_rg_xtp_ln_pipe_tx_deemph(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_28_FLD_rg_xtp_ln_pipe_tx_deemph, (val))

#define PEXTP_DIG_LN_TRX_2C_VAL_rg_xtp_ln_pipe_rx_valid(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_valid, (val))
#define PEXTP_DIG_LN_TRX_2C_VAL_rg_xtp_ln_pipe_rx_status(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_rx_status, (val))
#define PEXTP_DIG_LN_TRX_2C_VAL_rg_xtp_ln_pipe_tx_preset_coef(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_2C_FLD_rg_xtp_ln_pipe_tx_preset_coef, (val))

#define PEXTP_DIG_LN_TRX_30_VAL_rg_xtp_ln_pipe_rx_data(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_30_FLD_rg_xtp_ln_pipe_rx_data, (val))

#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_lc_lf(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_lf, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_lc_fs(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_fs, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_lc_tx_coef_valid(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_lc_tx_coef_valid, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_fb_direction_change(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_direction_change, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_fb_figure_merit(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_fb_figure_merit, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_rx_sync_header(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_sync_header, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_rx_start_block(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_start_block, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_rx_data_valid(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_data_valid, (val))
#define PEXTP_DIG_LN_TRX_34_VAL_rg_xtp_ln_pipe_rx_datak(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_34_FLD_rg_xtp_ln_pipe_rx_datak, (val))

#define PEXTP_DIG_LN_TRX_38_VAL_rg_xtp_ln_pipe_lc_tx_preset_coef(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_38_FLD_rg_xtp_ln_pipe_lc_tx_preset_coef, (val))

#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_data_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_data_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_data_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_data_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_lfps(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_lfps(val)         REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_lfps_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_lfps_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_lfps_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_lfps_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_ser_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_ser_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_ser_en(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_ser_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_drv_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_drv_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_drv_en(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_drv_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_bias_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_bias_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_bias_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_bias_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_cmkp_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_cmkp_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_cmkp_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_cmkp_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_rxdet_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_rxdet_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_rxdet_en(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_rxdet_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_acjtag_data(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_data, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_acjtag_data(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_data, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tx_acjtag_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tx_acjtag_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tx_acjtag_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tx_acjtag_en, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_tpllsel(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_tpllsel, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_tpllsel(val)         REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_tpllsel, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_speed(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_speed, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_speed(val)           REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_speed, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_frc_mode(val)        REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_frc_mode, (val))
#define PEXTP_DIG_LN_TRX_40_VAL_rg_xtp_ln_mode(val)            REG_FLD_VAL(PEXTP_DIG_LN_TRX_40_FLD_rg_xtp_ln_mode, (val))

#define PEXTP_DIG_LN_TRX_44_VAL_rg_xtp_ln_tx_data(val)         REG_FLD_VAL(PEXTP_DIG_LN_TRX_44_FLD_rg_xtp_ln_tx_data, (val))

#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_frc_tx_lctxcp1(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcp1, (val))
#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_tx_lctxcp1(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcp1, (val))
#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_frc_tx_lctxc0(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxc0, (val))
#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_tx_lctxc0(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxc0, (val))
#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_frc_tx_lctxcm1(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_lctxcm1, (val))
#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_tx_lctxcm1(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_tx_lctxcm1, (val))
#define PEXTP_DIG_LN_TRX_48_VAL_rg_xtp_ln_frc_tx_data(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_48_FLD_rg_xtp_ln_frc_tx_data, (val))

#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_sgdt_cal_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_cal_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_sgdt_cal_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_cal_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_sgdt_nbias_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_nbias_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_sgdt_nbias_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_nbias_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_sgdt_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_sgdt_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_sgdt_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_sgdt_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_lfps_os(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_os, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_lfps_os(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_os, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_lfps_cal_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_cal_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_lfps_cal_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_cal_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_lfps_nbias_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_nbias_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_lfps_nbias_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_nbias_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_lfps_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_lfps_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_lfps_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_lfps_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_hz(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_hz, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_hz(val)           REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_hz, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_acjtag_rxn_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_mode, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_acjtag_rxn_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_mode, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_acjtag_rxp_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_mode, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_acjtag_rxp_mode(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_mode, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_acjtag_rxn_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxn_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_acjtag_rxn_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxn_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_rx_acjtag_rxp_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_rx_acjtag_rxp_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_rx_acjtag_rxp_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_rx_acjtag_rxp_en, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_frc_tx_margin(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_frc_tx_margin, (val))
#define PEXTP_DIG_LN_TRX_4C_VAL_rg_xtp_ln_tx_margin(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_4C_FLD_rg_xtp_ln_tx_margin, (val))

#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_dfetp5_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp5_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_dfetp5_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp5_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_dfetp6_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp6_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_dfetp6_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp6_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_dfetp7_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_dfetp7_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_dfetp7_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_dfetp7_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_afe_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_afe_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_afe_en(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_afe_en, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_sgdt_rleak(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_rleak, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_sgdt_rleak(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_rleak, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_sgdt_vth(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_vth, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_sgdt_vth(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_vth, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_sgdt_nos(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_nos, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_sgdt_nos(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_nos, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_frc_rx_sgdt_pos(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_frc_rx_sgdt_pos, (val))
#define PEXTP_DIG_LN_TRX_50_VAL_rg_xtp_ln_rx_sgdt_pos(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_50_FLD_rg_xtp_ln_rx_sgdt_pos, (val))

#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_sgdt_hf(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_sgdt_hf, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_sgdt_hf(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_sgdt_hf, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_cdr_cfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_cfdok_th, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_cdr_cfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_cfdok_th, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_cdr_int1_lpfbw(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_int1_lpfbw, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_cdr_int1_lpfbw(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_int1_lpfbw, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_cdr_track(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_track, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_cdr_track(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_track, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_cdr_lck2dt(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2dt, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_cdr_lck2dt(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2dt, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_cdr_lck2ref(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_lck2ref, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_cdr_lck2ref(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_lck2ref, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_cdr_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_cdr_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_cdr_en(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_cdr_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_dfetp1_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp1_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_dfetp1_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp1_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_dfetp2_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp2_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_dfetp2_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp2_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_dfetp3_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp3_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_dfetp3_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp3_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_frc_rx_dfetp4_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_frc_rx_dfetp4_en, (val))
#define PEXTP_DIG_LN_TRX_54_VAL_rg_xtp_ln_rx_dfetp4_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_54_FLD_rg_xtp_ln_rx_dfetp4_en, (val))

#define PEXTP_DIG_LN_TRX_58_VAL_rg_xtp_ln_frc_rx_cdr_rfdx2_th(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdx2_th, (val))
#define PEXTP_DIG_LN_TRX_58_VAL_rg_xtp_ln_rx_cdr_rfdx2_th(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdx2_th, (val))
#define PEXTP_DIG_LN_TRX_58_VAL_rg_xtp_ln_frc_rx_cdr_rfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_frc_rx_cdr_rfdok_th, (val))
#define PEXTP_DIG_LN_TRX_58_VAL_rg_xtp_ln_rx_cdr_rfdok_th(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_58_FLD_rg_xtp_ln_rx_cdr_rfdok_th, (val))

#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_frc_rx_cdr_pdkunit(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_rx_cdr_pdkunit(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_frc_rx_cdr_pdnunit(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdnunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_rx_cdr_pdnunit(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdnunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_frc_rx_cdr_pdkdvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdkdvn, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_rx_cdr_pdkdvn(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdkdvn, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_frc_rx_cdr_pdndvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_pdndvn, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_rx_cdr_pdndvn(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_pdndvn, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_frc_rx_cdr_rfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_rfdunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_rx_cdr_rfdunit(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_rfdunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_frc_rx_cdr_cfdunit(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_frc_rx_cdr_cfdunit, (val))
#define PEXTP_DIG_LN_TRX_5C_VAL_rg_xtp_ln_rx_cdr_cfdunit(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_5C_FLD_rg_xtp_ln_rx_cdr_cfdunit, (val))

#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_frc_rx_cdr_autok_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_autok_en, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_rx_cdr_autok_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_autok_en, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_frc_rx_cdr_pdkkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpf, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_rx_cdr_pdkkpf(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpf, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_frc_rx_cdr_pdnkpf(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpf, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_rx_cdr_pdnkpf(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpf, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_frc_rx_cdr_pdkkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdkkpc, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_rx_cdr_pdkkpc(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdkkpc, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_frc_rx_cdr_pdnkpc(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_frc_rx_cdr_pdnkpc, (val))
#define PEXTP_DIG_LN_TRX_60_VAL_rg_xtp_ln_rx_cdr_pdnkpc(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_60_FLD_rg_xtp_ln_rx_cdr_pdnkpc, (val))

#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_rmtxskip(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rmtxskip, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_rmtxskip(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rmtxskip, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_invldreq(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_invldreq, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_invldreq(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_invldreq, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_rxeqeval(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rxeqeval, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_rxeqeval(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rxeqeval, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_inprgrss(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_inprgrss, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_inprgrss(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_inprgrss, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_en, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_en(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_en, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_ckon(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_ckon, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_ckon(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_ckon, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_rstb(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_rstb, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_rstb(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_rstb, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_aeq_bypass(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_aeq_bypass, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_aeq_bypass(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_aeq_bypass, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_cal_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_en, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_cal_en(val)       REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_en, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_cal_ckon(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_ckon, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_cal_ckon(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_ckon, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_cal_rstb(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cal_rstb, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_cal_rstb(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cal_rstb, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_frc_rx_cdr_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_frc_rx_cdr_autok_band, (val))
#define PEXTP_DIG_LN_TRX_64_VAL_rg_xtp_ln_rx_cdr_autok_band(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_64_FLD_rg_xtp_ln_rx_cdr_autok_band, (val))

#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_frc_rx_aeq_rmtxc0(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxc0, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_rx_aeq_rmtxc0(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxc0, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_frc_rx_aeq_rmtxcm1(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcm1, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_rx_aeq_rmtxcm1(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxcm1, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_frc_rx_aeq_rmtxlf(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxlf, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_rx_aeq_rmtxlf(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxlf, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_frc_rx_aeq_rmtxfs(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_frc_rx_aeq_rmtxfs, (val))
#define PEXTP_DIG_LN_TRX_68_VAL_rg_xtp_ln_rx_aeq_rmtxfs(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_68_FLD_rg_xtp_ln_rx_aeq_rmtxfs, (val))

#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_frc_rx_aeq_vga(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_vga, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_rx_aeq_vga(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_vga, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_frc_rx_aeq_ctle(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_ctle, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_rx_aeq_ctle(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_ctle, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_frc_rx_aeq_att(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_att, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_rx_aeq_att(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_att, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_frc_rx_aeq_rmtxcp1(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_frc_rx_aeq_rmtxcp1, (val))
#define PEXTP_DIG_LN_TRX_6C_VAL_rg_xtp_ln_rx_aeq_rmtxcp1(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_6C_FLD_rg_xtp_ln_rx_aeq_rmtxcp1, (val))

#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_frc_rx_aeq_dfetp4(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp4, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_rx_aeq_dfetp4(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp4, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_frc_rx_aeq_dfetp5(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp5, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_rx_aeq_dfetp5(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp5, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_frc_rx_aeq_dfetp6(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp6, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_rx_aeq_dfetp6(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp6, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_frc_rx_aeq_dfetp7(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_frc_rx_aeq_dfetp7, (val))
#define PEXTP_DIG_LN_TRX_70_VAL_rg_xtp_ln_rx_aeq_dfetp7(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_70_FLD_rg_xtp_ln_rx_aeq_dfetp7, (val))

#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_frc_rx_aeq_strb(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_strb, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_rx_aeq_strb(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_strb, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_frc_rx_aeq_dfetp1(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp1, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_rx_aeq_dfetp1(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp1, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_frc_rx_aeq_dfetp2(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp2, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_rx_aeq_dfetp2(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp2, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_frc_rx_aeq_dfetp3(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_frc_rx_aeq_dfetp3, (val))
#define PEXTP_DIG_LN_TRX_74_VAL_rg_xtp_ln_rx_aeq_dfetp3(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_74_FLD_rg_xtp_ln_rx_aeq_dfetp3, (val))

#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_frc_rx_afe_bwsel(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_afe_bwsel, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_rx_afe_bwsel(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_afe_bwsel, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_frc_rx_aeq_ctle_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle_max, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_rx_aeq_ctle_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle_max, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_min, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_rx_aeq_ctle2cp1_min(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_min, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_ctle2cp1_max, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_rx_aeq_ctle2cp1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_ctle2cp1_max, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_frc_rx_aeq_vgaref(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_frc_rx_aeq_vgaref, (val))
#define PEXTP_DIG_LN_TRX_78_VAL_rg_xtp_ln_rx_aeq_vgaref(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_78_FLD_rg_xtp_ln_rx_aeq_vgaref, (val))

#define PEXTP_DIG_LN_TRX_C0_VAL_rgs_xtp_ln_pipe_rx_polarity(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_rx_polarity, (val))
#define PEXTP_DIG_LN_TRX_C0_VAL_rgs_xtp_ln_pipe_tx_elec_idle(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_elec_idle, (val))
#define PEXTP_DIG_LN_TRX_C0_VAL_rgs_xtp_ln_pipe_tx_compliance(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_C0_FLD_rgs_xtp_ln_pipe_tx_compliance, (val))

#define PEXTP_DIG_LN_TRX_C4_VAL_rgs_xtp_ln_pipe_tx_deemph(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_C4_FLD_rgs_xtp_ln_pipe_tx_deemph, (val))

#define PEXTP_DIG_LN_TRX_C8_VAL_rgs_xtp_ln_pipe_tx_preset_coef(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_C8_FLD_rgs_xtp_ln_pipe_tx_preset_coef, (val))

#define PEXTP_DIG_LN_TRX_CC_VAL_rgs_xtp_ln_pipe_rx_valid(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_valid, (val))
#define PEXTP_DIG_LN_TRX_CC_VAL_rgs_xtp_ln_pipe_rx_status(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_status, (val))
#define PEXTP_DIG_LN_TRX_CC_VAL_rgs_xtp_ln_pipe_rx_elec_idle(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_rx_elec_idle, (val))
#define PEXTP_DIG_LN_TRX_CC_VAL_rgs_xtp_ln_pipe_lf(val)        REG_FLD_VAL(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_lf, (val))
#define PEXTP_DIG_LN_TRX_CC_VAL_rgs_xtp_ln_pipe_fs(val)        REG_FLD_VAL(PEXTP_DIG_LN_TRX_CC_FLD_rgs_xtp_ln_pipe_fs, (val))

#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_cdr_pi_slew(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_cdr_pi_slew, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_cdr_gen3_pi_slew(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen3_pi_slew, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_cdr_gen2_pi_slew(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen2_pi_slew, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_cdr_gen1_pi_slew(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_cdr_gen1_pi_slew, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_fedig_iso_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_iso_en, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on_2nd, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_fedig_pwr_on(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_fedig_pwr_on, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_fedig_iso_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_iso_en, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_fedig_pwr_on_2nd(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on_2nd, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_fedig_pwr_on(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_fedig_pwr_on, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_ctle_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_cdec, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_vga_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_rdec, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_vga_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_vga_ccp_cdec, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_frc_rx_ctle1_csel(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_frc_rx_ctle1_csel, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_ctle_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle_ccp_cdec, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_vga_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_rdec, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_vga_ccp_cdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_vga_ccp_cdec, (val))
#define PEXTP_DIG_LN_TRX_D0_VAL_rg_xtp_ln_rx_ctle1_csel(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_D0_FLD_rg_xtp_ln_rx_ctle1_csel, (val))

#define PEXTP_DIG_LN_TRX_D4_VAL_rg_xtp_ln_frc_rx_aeq_egeq_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_frc_rx_aeq_egeq_max, (val))
#define PEXTP_DIG_LN_TRX_D4_VAL_rg_xtp_ln_rx_aeq_egeq_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_max, (val))
#define PEXTP_DIG_LN_TRX_D4_VAL_rg_xtp_ln_rx_aeq_egeq_gen3_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_max, (val))
#define PEXTP_DIG_LN_TRX_D4_VAL_rg_xtp_ln_rx_aeq_egeq_gen2_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_max, (val))
#define PEXTP_DIG_LN_TRX_D4_VAL_rg_xtp_ln_rx_aeq_egeq_gen1_max(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_D4_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_max, (val))

#define PEXTP_DIG_LN_TRX_DC_VAL_rg_xtp_ln_frc_rx_aeq_egeq_ratio(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_frc_rx_aeq_egeq_ratio, (val))
#define PEXTP_DIG_LN_TRX_DC_VAL_rg_xtp_ln_rx_aeq_egeq_ratio(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_ratio, (val))
#define PEXTP_DIG_LN_TRX_DC_VAL_rg_xtp_ln_rx_aeq_egeq_gen3_ratio(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen3_ratio, (val))
#define PEXTP_DIG_LN_TRX_DC_VAL_rg_xtp_ln_rx_aeq_egeq_gen2_ratio(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen2_ratio, (val))
#define PEXTP_DIG_LN_TRX_DC_VAL_rg_xtp_ln_rx_aeq_egeq_gen1_ratio(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_DC_FLD_rg_xtp_ln_rx_aeq_egeq_gen1_ratio, (val))

#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_cdr_pi_slew(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_pi_slew, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_cdr_gen4_pi_slew(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_cdr_gen4_pi_slew, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_chg(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_chg, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_dessc_delta(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_delta, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_iir_corner(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_corner, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_iir_gain(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_gain, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_ipath_stb(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ipath_stb, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_ppath_dvn(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_digspeed(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digspeed, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_digclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_digclk_div, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_piclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_piclk_div, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_iir_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_iir_en, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_dessc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dessc_en, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_lck2ref(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_lck2ref, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_dig_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_dig_en, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_cdr_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_cdr_en, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_rx_sgdt_selfbias_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_selfbias_en, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_rx_sgdt_cal_offset(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_cal_offset, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_rx_sgdt_slc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_sgdt_slc_en, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_rx_ctle_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_rx_ctle_ccp_rdec, (val))
#define PEXTP_DIG_LN_TRX_E0_VAL_rg_xtp_ln_frc_tx_ser_div(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_E0_FLD_rg_xtp_ln_frc_tx_ser_div, (val))

#define PEXTP_DIG_LN_TRX_E4_VAL_rg_xtp_ln_cdr_dessc_delta(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_cdr_dessc_delta, (val))
#define PEXTP_DIG_LN_TRX_E4_VAL_rg_xtp_ln_rx_sgdt_selfbias_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_selfbias_en, (val))
#define PEXTP_DIG_LN_TRX_E4_VAL_rg_xtp_ln_rx_sgdt_cal_offset(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_cal_offset, (val))
#define PEXTP_DIG_LN_TRX_E4_VAL_rg_xtp_ln_rx_sgdt_slc_en(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_sgdt_slc_en, (val))
#define PEXTP_DIG_LN_TRX_E4_VAL_rg_xtp_ln_rx_ctle_ccp_rdec(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_rx_ctle_ccp_rdec, (val))
#define PEXTP_DIG_LN_TRX_E4_VAL_rg_xtp_ln_tx_ser_div(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_E4_FLD_rg_xtp_ln_tx_ser_div, (val))

#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_chg(val)         REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_chg, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_iir_corner(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_corner, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_iir_gain(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_gain, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_ipath_stb(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ipath_stb, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_ppath_dvn(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_ppath_dvn, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_digspeed(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digspeed, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_digclk_div(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_digclk_div, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_piclk_div(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_piclk_div, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_iir_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_iir_en, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_dessc_en(val)    REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dessc_en, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_lck2ref(val)     REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_lck2ref, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_dig_en(val)      REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_dig_en, (val))
#define PEXTP_DIG_LN_TRX_E8_VAL_rg_xtp_ln_cdr_en(val)          REG_FLD_VAL(PEXTP_DIG_LN_TRX_E8_FLD_rg_xtp_ln_cdr_en, (val))

#define PEXTP_DIG_LN_TRX_EC_VAL_rg_xtp_ln_rx_cdr_chg_fall(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_fall, (val))
#define PEXTP_DIG_LN_TRX_EC_VAL_rg_xtp_ln_rx_cdr_chg_rsie(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_EC_FLD_rg_xtp_ln_rx_cdr_chg_rsie, (val))

#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen4_iir_corner(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_corner, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen3_iir_corner(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_corner, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen2_iir_corner(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_corner, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen1_iir_corner(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_corner, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen4_iir_gain(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen4_iir_gain, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen3_iir_gain(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen3_iir_gain, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen2_iir_gain(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen2_iir_gain, (val))
#define PEXTP_DIG_LN_TRX_F0_VAL_rg_xtp_ln_cdr_gen1_iir_gain(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F0_FLD_rg_xtp_ln_cdr_gen1_iir_gain, (val))

#define PEXTP_DIG_LN_TRX_F4_VAL_rg_xtp_ln_cdr_gen3_dessc_delta(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen3_dessc_delta, (val))
#define PEXTP_DIG_LN_TRX_F4_VAL_rg_xtp_ln_cdr_gen2_dessc_delta(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen2_dessc_delta, (val))
#define PEXTP_DIG_LN_TRX_F4_VAL_rg_xtp_ln_cdr_gen1_dessc_delta(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F4_FLD_rg_xtp_ln_cdr_gen1_dessc_delta, (val))

#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_cdr_gen4_busclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_busclk_div, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_cdr_gen3_busclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen3_busclk_div, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_cdr_gen2_busclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen2_busclk_div, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_cdr_gen1_busclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen1_busclk_div, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_cdr_busclk_div(val)  REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_busclk_div, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_frc_cdr_busclk_div(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_cdr_busclk_div, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_tx_ser_dcc_en(val)   REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_tx_ser_dcc_en, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_frc_tx_ser_dcc_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_frc_tx_ser_dcc_en, (val))
#define PEXTP_DIG_LN_TRX_F8_VAL_rg_xtp_ln_cdr_gen4_dessc_delta(val) REG_FLD_VAL(PEXTP_DIG_LN_TRX_F8_FLD_rg_xtp_ln_cdr_gen4_dessc_delta, (val))

#ifdef __cplusplus
}
#endif

#endif // __pextp_sifslv_dig_ln0_trx_p0_REGS_H__

