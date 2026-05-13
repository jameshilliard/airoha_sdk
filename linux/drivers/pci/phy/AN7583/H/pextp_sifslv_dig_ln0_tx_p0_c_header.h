#ifndef __pextp_sifslv_dig_ln0_tx_p0_REGS_H__
#define __pextp_sifslv_dig_ln0_tx_p0_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- pextp_sifslv_dig_ln0_tx_p0 Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_cmdet        : 1;
        FIELD rg_xtp_ln_tx_pcs_in_e0_skp : 1;
        FIELD rg_xtp_ln_tx_elec_idle_skp : 1;
        FIELD rg_xtp_ln_tx_r2t_pipe_loopback_en : 1;
        FIELD rg_xtp_ln_tx_polarity_inv : 1;
        FIELD rg_xtp_ln_tx_bp_enc       : 1;
        FIELD rg_xtp_ln_tx_drv_rate_sw_sel : 1;
        FIELD rg_xtp_ln_tx_preset_keep  : 1;
        FIELD rg_xtp_ln_tx_err_inject   : 1;
        FIELD rsv_9                     : 23;
    
    
} pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_00, *Ppextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_00;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_ptg_type     : 4;
        FIELD rsv_4                     : 2;
        FIELD rg_xtp_ln_tx_ptg_type_upd : 1;
        FIELD rg_xtp_ln_tx_ptg_en       : 1;
        FIELD rg_xtp_ln_tx_ptg_tx_preset : 4;
        FIELD rg_xtp_ln_tx_ptg_lane_idx : 3;
        FIELD rsv_15                    : 1;
        FIELD rg_xtp_ln_tx_ptg_prb_phsel : 1;
        FIELD rsv_17                    : 15;
    
    
} pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_10, *Ppextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_10;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_ptg_tx_data_19_0 : 20;
        FIELD rsv_20                    : 12;
    
    
} pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_14, *Ppextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_14;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_ptg_tx_data_39_20 : 20;
        FIELD rsv_20                    : 12;
    
    
} pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_18, *Ppextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_18;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_ser_loadsel_gen1 : 2;
        FIELD rg_xtp_ln_tx_ser_loadsel_gen2 : 2;
        FIELD rg_xtp_ln_tx_ser_loadsel_gen3 : 2;
        FIELD rg_xtp_ln_tx_ser_loadsel_gen4 : 2;
        FIELD rg_xtp_ln_tx_ser_loadsel  : 2;
        FIELD rg_xtp_ln_frc_tx_ser_loadsel : 1;
        FIELD rsv_11                    : 21;
    
    
} pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_1C, *Ppextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_1C;

typedef struct
{
    

        FIELD rgs_xtp_ln_tx_rxdet_result : 1;
        FIELD rg_xtp_ln_tx_ser_div_gen1 : 2;
        FIELD rg_xtp_ln_tx_ser_div_gen2 : 2;
        FIELD rg_xtp_ln_tx_ser_div_gen3 : 2;
        FIELD rg_xtp_ln_tx_ser_div_gen4 : 2;
        FIELD rsv_9                     : 2;
        FIELD rg_xtp_ln_tx_ser_dcc_en_gen1 : 1;
        FIELD rg_xtp_ln_tx_ser_dcc_en_gen2 : 1;
        FIELD rg_xtp_ln_tx_ser_dcc_en_gen3 : 1;
        FIELD rg_xtp_ln_tx_ser_dcc_en_gen4 : 1;
        FIELD rg_xtp_ln_tx_prbs_inv     : 1;
        FIELD rsv_16                    : 16;
    
    
} pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_RGS_D0, *Ppextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_RGS_D0;

// ----------------- pextp_sifslv_dig_ln0_tx_p0  Grouping Definitions -------------------
// ----------------- pextp_sifslv_dig_ln0_tx_p0 Register Definition -------------------
#if 0
typedef volatile 
{
    pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_00 PEXTP_DIG_LN_TX_00; // 4000
    UINT32                          rsv_4004[3];      // 4004..400C
    pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_10 PEXTP_DIG_LN_TX_10; // 4010
    pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_14 PEXTP_DIG_LN_TX_14; // 4014
    pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_18 PEXTP_DIG_LN_TX_18; // 4018
    pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_1C PEXTP_DIG_LN_TX_1C; // 401C
    UINT32                          rsv_4020[44];     // 4020..40CC
    pextp_sifslv_dig_ln0_tx_p0_REG_PEXTP_DIG_LN_TX_RGS_D0 PEXTP_DIG_LN_TX_RGS_D0; // 40D0
}pextp_sifslv_dig_ln0_tx_p0_REGS, *Ppextp_sifslv_dig_ln0_tx_p0_REGS;

// ---------- pextp_sifslv_dig_ln0_tx_p0 Enum Definitions      ----------
// ---------- pextp_sifslv_dig_ln0_tx_p0 C Macro Definitions   ----------
extern Ppextp_sifslv_dig_ln0_tx_p0_REGS g_pextp_sifslv_dig_ln0_tx_p0_BASE;

#define pextp_sifslv_dig_ln0_tx_p0_BASE                        (g_pextp_sifslv_dig_ln0_tx_p0_BASE)
#endif

#define _pextp_sifslv_dig_ln0_tx_p0_PEXTP_DIG_LN_TX_00		0x4000
#define _pextp_sifslv_dig_ln0_tx_p0_PEXTP_DIG_LN_TX_10		0x4010
#define _pextp_sifslv_dig_ln0_tx_p0_PEXTP_DIG_LN_TX_14		0x4014
#define _pextp_sifslv_dig_ln0_tx_p0_PEXTP_DIG_LN_TX_18		0x4018
#define _pextp_sifslv_dig_ln0_tx_p0_PEXTP_DIG_LN_TX_1C		0x401C
#define _pextp_sifslv_dig_ln0_tx_p0_PEXTP_DIG_LN_TX_RGS_D0		0x40D0

#endif


#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_err_inject         REG_FLD(1, 8)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_preset_keep        REG_FLD(1, 7)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_drv_rate_sw_sel    REG_FLD(1, 6)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_bp_enc             REG_FLD(1, 5)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_polarity_inv       REG_FLD(1, 4)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_r2t_pipe_loopback_en REG_FLD(1, 3)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_elec_idle_skp      REG_FLD(1, 2)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_pcs_in_e0_skp      REG_FLD(1, 1)
#define PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_cmdet              REG_FLD(1, 0)

#define PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_prb_phsel      REG_FLD(1, 16)
#define PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_lane_idx       REG_FLD(3, 12)
#define PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_tx_preset      REG_FLD(4, 8)
#define PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_en             REG_FLD(1, 7)
#define PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type_upd       REG_FLD(1, 6)
#define PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type           REG_FLD(4, 0)

#define PEXTP_DIG_LN_TX_14_FLD_rg_xtp_ln_tx_ptg_tx_data_19_0   REG_FLD(20, 0)

#define PEXTP_DIG_LN_TX_18_FLD_rg_xtp_ln_tx_ptg_tx_data_39_20  REG_FLD(20, 0)

#define PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_frc_tx_ser_loadsel    REG_FLD(1, 10)
#define PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel        REG_FLD(2, 8)
#define PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen4   REG_FLD(2, 6)
#define PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen3   REG_FLD(2, 4)
#define PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen2   REG_FLD(2, 2)
#define PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen1   REG_FLD(2, 0)

#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_prbs_inv       REG_FLD(1, 15)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen4 REG_FLD(1, 14)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen3 REG_FLD(1, 13)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen2 REG_FLD(1, 12)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen1 REG_FLD(1, 11)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen4   REG_FLD(2, 7)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen3   REG_FLD(2, 5)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen2   REG_FLD(2, 3)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen1   REG_FLD(2, 1)
#define PEXTP_DIG_LN_TX_RGS_D0_FLD_rgs_xtp_ln_tx_rxdet_result  REG_FLD(1, 0)

#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_err_inject(reg32)  REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_err_inject, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_preset_keep(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_preset_keep, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_drv_rate_sw_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_drv_rate_sw_sel, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_bp_enc(reg32)      REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_bp_enc, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_polarity_inv(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_polarity_inv, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_r2t_pipe_loopback_en(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_r2t_pipe_loopback_en, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_elec_idle_skp(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_elec_idle_skp, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_pcs_in_e0_skp(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_pcs_in_e0_skp, (reg32))
#define PEXTP_DIG_LN_TX_00_GET_rg_xtp_ln_tx_cmdet(reg32)       REG_FLD_GET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_cmdet, (reg32))

#define PEXTP_DIG_LN_TX_10_GET_rg_xtp_ln_tx_ptg_prb_phsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_prb_phsel, (reg32))
#define PEXTP_DIG_LN_TX_10_GET_rg_xtp_ln_tx_ptg_lane_idx(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_lane_idx, (reg32))
#define PEXTP_DIG_LN_TX_10_GET_rg_xtp_ln_tx_ptg_tx_preset(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_tx_preset, (reg32))
#define PEXTP_DIG_LN_TX_10_GET_rg_xtp_ln_tx_ptg_en(reg32)      REG_FLD_GET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_en, (reg32))
#define PEXTP_DIG_LN_TX_10_GET_rg_xtp_ln_tx_ptg_type_upd(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type_upd, (reg32))
#define PEXTP_DIG_LN_TX_10_GET_rg_xtp_ln_tx_ptg_type(reg32)    REG_FLD_GET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type, (reg32))

#define PEXTP_DIG_LN_TX_14_GET_rg_xtp_ln_tx_ptg_tx_data_19_0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_14_FLD_rg_xtp_ln_tx_ptg_tx_data_19_0, (reg32))

#define PEXTP_DIG_LN_TX_18_GET_rg_xtp_ln_tx_ptg_tx_data_39_20(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_18_FLD_rg_xtp_ln_tx_ptg_tx_data_39_20, (reg32))

#define PEXTP_DIG_LN_TX_1C_GET_rg_xtp_ln_frc_tx_ser_loadsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_frc_tx_ser_loadsel, (reg32))
#define PEXTP_DIG_LN_TX_1C_GET_rg_xtp_ln_tx_ser_loadsel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel, (reg32))
#define PEXTP_DIG_LN_TX_1C_GET_rg_xtp_ln_tx_ser_loadsel_gen4(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen4, (reg32))
#define PEXTP_DIG_LN_TX_1C_GET_rg_xtp_ln_tx_ser_loadsel_gen3(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen3, (reg32))
#define PEXTP_DIG_LN_TX_1C_GET_rg_xtp_ln_tx_ser_loadsel_gen2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen2, (reg32))
#define PEXTP_DIG_LN_TX_1C_GET_rg_xtp_ln_tx_ser_loadsel_gen1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen1, (reg32))

#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_prbs_inv(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_prbs_inv, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_dcc_en_gen4(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen4, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_dcc_en_gen3(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen3, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_dcc_en_gen2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen2, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_dcc_en_gen1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen1, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_div_gen4(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen4, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_div_gen3(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen3, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_div_gen2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen2, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rg_xtp_ln_tx_ser_div_gen1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen1, (reg32))
#define PEXTP_DIG_LN_TX_RGS_D0_GET_rgs_xtp_ln_tx_rxdet_result(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rgs_xtp_ln_tx_rxdet_result, (reg32))

#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_err_inject(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_err_inject, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_preset_keep(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_preset_keep, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_drv_rate_sw_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_drv_rate_sw_sel, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_bp_enc(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_bp_enc, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_polarity_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_polarity_inv, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_r2t_pipe_loopback_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_r2t_pipe_loopback_en, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_elec_idle_skp(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_elec_idle_skp, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_pcs_in_e0_skp(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_pcs_in_e0_skp, (reg32), (val))
#define PEXTP_DIG_LN_TX_00_SET_rg_xtp_ln_tx_cmdet(reg32, val)  REG_FLD_SET(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_cmdet, (reg32), (val))

#define PEXTP_DIG_LN_TX_10_SET_rg_xtp_ln_tx_ptg_prb_phsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_prb_phsel, (reg32), (val))
#define PEXTP_DIG_LN_TX_10_SET_rg_xtp_ln_tx_ptg_lane_idx(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_lane_idx, (reg32), (val))
#define PEXTP_DIG_LN_TX_10_SET_rg_xtp_ln_tx_ptg_tx_preset(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_tx_preset, (reg32), (val))
#define PEXTP_DIG_LN_TX_10_SET_rg_xtp_ln_tx_ptg_en(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_en, (reg32), (val))
#define PEXTP_DIG_LN_TX_10_SET_rg_xtp_ln_tx_ptg_type_upd(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type_upd, (reg32), (val))
#define PEXTP_DIG_LN_TX_10_SET_rg_xtp_ln_tx_ptg_type(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type, (reg32), (val))

#define PEXTP_DIG_LN_TX_14_SET_rg_xtp_ln_tx_ptg_tx_data_19_0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_14_FLD_rg_xtp_ln_tx_ptg_tx_data_19_0, (reg32), (val))

#define PEXTP_DIG_LN_TX_18_SET_rg_xtp_ln_tx_ptg_tx_data_39_20(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_18_FLD_rg_xtp_ln_tx_ptg_tx_data_39_20, (reg32), (val))

#define PEXTP_DIG_LN_TX_1C_SET_rg_xtp_ln_frc_tx_ser_loadsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_frc_tx_ser_loadsel, (reg32), (val))
#define PEXTP_DIG_LN_TX_1C_SET_rg_xtp_ln_tx_ser_loadsel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel, (reg32), (val))
#define PEXTP_DIG_LN_TX_1C_SET_rg_xtp_ln_tx_ser_loadsel_gen4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen4, (reg32), (val))
#define PEXTP_DIG_LN_TX_1C_SET_rg_xtp_ln_tx_ser_loadsel_gen3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen3, (reg32), (val))
#define PEXTP_DIG_LN_TX_1C_SET_rg_xtp_ln_tx_ser_loadsel_gen2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen2, (reg32), (val))
#define PEXTP_DIG_LN_TX_1C_SET_rg_xtp_ln_tx_ser_loadsel_gen1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen1, (reg32), (val))

#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_prbs_inv(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_prbs_inv, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_dcc_en_gen4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen4, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_dcc_en_gen3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen3, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_dcc_en_gen2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen2, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_dcc_en_gen1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen1, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_div_gen4(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen4, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_div_gen3(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen3, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_div_gen2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen2, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rg_xtp_ln_tx_ser_div_gen1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen1, (reg32), (val))
#define PEXTP_DIG_LN_TX_RGS_D0_SET_rgs_xtp_ln_tx_rxdet_result(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_RGS_D0_FLD_rgs_xtp_ln_tx_rxdet_result, (reg32), (val))

#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_err_inject(val)    REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_err_inject, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_preset_keep(val)   REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_preset_keep, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_drv_rate_sw_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_drv_rate_sw_sel, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_bp_enc(val)        REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_bp_enc, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_polarity_inv(val)  REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_polarity_inv, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_r2t_pipe_loopback_en(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_r2t_pipe_loopback_en, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_elec_idle_skp(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_elec_idle_skp, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_pcs_in_e0_skp(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_pcs_in_e0_skp, (val))
#define PEXTP_DIG_LN_TX_00_VAL_rg_xtp_ln_tx_cmdet(val)         REG_FLD_VAL(PEXTP_DIG_LN_TX_00_FLD_rg_xtp_ln_tx_cmdet, (val))

#define PEXTP_DIG_LN_TX_10_VAL_rg_xtp_ln_tx_ptg_prb_phsel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_prb_phsel, (val))
#define PEXTP_DIG_LN_TX_10_VAL_rg_xtp_ln_tx_ptg_lane_idx(val)  REG_FLD_VAL(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_lane_idx, (val))
#define PEXTP_DIG_LN_TX_10_VAL_rg_xtp_ln_tx_ptg_tx_preset(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_tx_preset, (val))
#define PEXTP_DIG_LN_TX_10_VAL_rg_xtp_ln_tx_ptg_en(val)        REG_FLD_VAL(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_en, (val))
#define PEXTP_DIG_LN_TX_10_VAL_rg_xtp_ln_tx_ptg_type_upd(val)  REG_FLD_VAL(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type_upd, (val))
#define PEXTP_DIG_LN_TX_10_VAL_rg_xtp_ln_tx_ptg_type(val)      REG_FLD_VAL(PEXTP_DIG_LN_TX_10_FLD_rg_xtp_ln_tx_ptg_type, (val))

#define PEXTP_DIG_LN_TX_14_VAL_rg_xtp_ln_tx_ptg_tx_data_19_0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_14_FLD_rg_xtp_ln_tx_ptg_tx_data_19_0, (val))

#define PEXTP_DIG_LN_TX_18_VAL_rg_xtp_ln_tx_ptg_tx_data_39_20(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_18_FLD_rg_xtp_ln_tx_ptg_tx_data_39_20, (val))

#define PEXTP_DIG_LN_TX_1C_VAL_rg_xtp_ln_frc_tx_ser_loadsel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_frc_tx_ser_loadsel, (val))
#define PEXTP_DIG_LN_TX_1C_VAL_rg_xtp_ln_tx_ser_loadsel(val)   REG_FLD_VAL(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel, (val))
#define PEXTP_DIG_LN_TX_1C_VAL_rg_xtp_ln_tx_ser_loadsel_gen4(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen4, (val))
#define PEXTP_DIG_LN_TX_1C_VAL_rg_xtp_ln_tx_ser_loadsel_gen3(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen3, (val))
#define PEXTP_DIG_LN_TX_1C_VAL_rg_xtp_ln_tx_ser_loadsel_gen2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen2, (val))
#define PEXTP_DIG_LN_TX_1C_VAL_rg_xtp_ln_tx_ser_loadsel_gen1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_1C_FLD_rg_xtp_ln_tx_ser_loadsel_gen1, (val))

#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_prbs_inv(val)  REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_prbs_inv, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_dcc_en_gen4(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen4, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_dcc_en_gen3(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen3, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_dcc_en_gen2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen2, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_dcc_en_gen1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_dcc_en_gen1, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_div_gen4(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen4, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_div_gen3(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen3, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_div_gen2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen2, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rg_xtp_ln_tx_ser_div_gen1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rg_xtp_ln_tx_ser_div_gen1, (val))
#define PEXTP_DIG_LN_TX_RGS_D0_VAL_rgs_xtp_ln_tx_rxdet_result(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_RGS_D0_FLD_rgs_xtp_ln_tx_rxdet_result, (val))

#ifdef __cplusplus
}
#endif

#endif // __pextp_sifslv_dig_ln0_tx_p0_REGS_H__

