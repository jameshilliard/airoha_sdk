#ifndef __pextp_sifslv_dig_ln0_tx_da_coef_p0_REGS_H__
#define __pextp_sifslv_dig_ln0_tx_da_coef_p0_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- pextp_sifslv_dig_ln0_tx_da_coef_p0 Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_gen34_mg1_sel : 3;
        FIELD rsv_3                     : 1;
        FIELD rg_xtp_ln_tx_gen34_mg2_sel : 3;
        FIELD rsv_7                     : 1;
        FIELD rg_xtp_ln_tx_gen34_mg3_sel : 3;
        FIELD rsv_11                    : 1;
        FIELD rg_xtp_ln_tx_gen34_mg4_sel : 3;
        FIELD rsv_15                    : 17;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_00, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_00;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_10, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_10;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_14, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_14;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_18, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_18;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_1C, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_1C;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_20, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_20;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_24, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_24;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_28, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_28;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_2C, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_2C;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_30, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_30;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_34, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_34;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_38, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_38;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_3C, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_3C;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_40, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_40;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_44, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_44;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_48, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_48;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_4C, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_4C;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_50, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_50;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_54, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_54;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_58, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_58;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_5C, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_5C;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_60, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_60;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_64, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_64;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_68, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_68;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_6C, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_6C;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_70, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_70;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_74, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_74;

typedef struct
{
    

        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0 : 6;
        FIELD rsv_6                     : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1 : 6;
        FIELD rsv_14                    : 2;
        FIELD rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2 : 6;
        FIELD rsv_22                    : 10;
    
    
} pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_78, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_78;

// ----------------- pextp_sifslv_dig_ln0_tx_da_coef_p0  Grouping Definitions -------------------
// ----------------- pextp_sifslv_dig_ln0_tx_da_coef_p0 Register Definition -------------------
#if 0
typedef volatile 
{
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_00 PEXTP_DIG_LN_TX_DA_COEF_00; // 7000
    UINT32                          rsv_7004[3];      // 7004..700C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_10 PEXTP_DIG_LN_TX_DA_COEF_10; // 7010
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_14 PEXTP_DIG_LN_TX_DA_COEF_14; // 7014
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_18 PEXTP_DIG_LN_TX_DA_COEF_18; // 7018
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_1C PEXTP_DIG_LN_TX_DA_COEF_1C; // 701C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_20 PEXTP_DIG_LN_TX_DA_COEF_20; // 7020
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_24 PEXTP_DIG_LN_TX_DA_COEF_24; // 7024
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_28 PEXTP_DIG_LN_TX_DA_COEF_28; // 7028
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_2C PEXTP_DIG_LN_TX_DA_COEF_2C; // 702C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_30 PEXTP_DIG_LN_TX_DA_COEF_30; // 7030
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_34 PEXTP_DIG_LN_TX_DA_COEF_34; // 7034
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_38 PEXTP_DIG_LN_TX_DA_COEF_38; // 7038
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_3C PEXTP_DIG_LN_TX_DA_COEF_3C; // 703C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_40 PEXTP_DIG_LN_TX_DA_COEF_40; // 7040
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_44 PEXTP_DIG_LN_TX_DA_COEF_44; // 7044
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_48 PEXTP_DIG_LN_TX_DA_COEF_48; // 7048
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_4C PEXTP_DIG_LN_TX_DA_COEF_4C; // 704C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_50 PEXTP_DIG_LN_TX_DA_COEF_50; // 7050
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_54 PEXTP_DIG_LN_TX_DA_COEF_54; // 7054
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_58 PEXTP_DIG_LN_TX_DA_COEF_58; // 7058
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_5C PEXTP_DIG_LN_TX_DA_COEF_5C; // 705C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_60 PEXTP_DIG_LN_TX_DA_COEF_60; // 7060
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_64 PEXTP_DIG_LN_TX_DA_COEF_64; // 7064
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_68 PEXTP_DIG_LN_TX_DA_COEF_68; // 7068
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_6C PEXTP_DIG_LN_TX_DA_COEF_6C; // 706C
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_70 PEXTP_DIG_LN_TX_DA_COEF_70; // 7070
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_74 PEXTP_DIG_LN_TX_DA_COEF_74; // 7074
    pextp_sifslv_dig_ln0_tx_da_coef_p0_REG_PEXTP_DIG_LN_TX_DA_COEF_78 PEXTP_DIG_LN_TX_DA_COEF_78; // 7078
}pextp_sifslv_dig_ln0_tx_da_coef_p0_REGS, *Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REGS;

// ---------- pextp_sifslv_dig_ln0_tx_da_coef_p0 Enum Definitions      ----------
// ---------- pextp_sifslv_dig_ln0_tx_da_coef_p0 C Macro Definitions   ----------
extern Ppextp_sifslv_dig_ln0_tx_da_coef_p0_REGS g_pextp_sifslv_dig_ln0_tx_da_coef_p0_BASE;

#define pextp_sifslv_dig_ln0_tx_da_coef_p0_BASE                (g_pextp_sifslv_dig_ln0_tx_da_coef_p0_BASE)
#endif

#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_00		0x7000
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_10		0x7010
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_14		0x7014
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_18		0x7018
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_1C		0x701C
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_20		0x7020
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_24		0x7024
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_28		0x7028
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_2C		0x702C
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_30		0x7030
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_34		0x7034
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_38		0x7038
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_3C		0x703C
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_40		0x7040
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_44		0x7044
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_48		0x7048
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_4C		0x704C
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_50		0x7050
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_54		0x7054
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_58		0x7058
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_5C		0x705C
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_60		0x7060
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_64		0x7064
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_68		0x7068
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_6C		0x706C
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_70		0x7070
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_74		0x7074
#define _pextp_sifslv_dig_ln0_tx_da_coef_p0_PEXTP_DIG_LN_TX_DA_COEF_78		0x7078

#endif


#define PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg4_sel REG_FLD(3, 12)
#define PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg3_sel REG_FLD(3, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg2_sel REG_FLD(3, 4)
#define PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg1_sel REG_FLD(3, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2 REG_FLD(6, 16)
#define PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1 REG_FLD(6, 8)
#define PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0 REG_FLD(6, 0)

#define PEXTP_DIG_LN_TX_DA_COEF_00_GET_rg_xtp_ln_tx_gen34_mg4_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg4_sel, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_00_GET_rg_xtp_ln_tx_gen34_mg3_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg3_sel, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_00_GET_rg_xtp_ln_tx_gen34_mg2_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg2_sel, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_00_GET_rg_xtp_ln_tx_gen34_mg1_sel(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg1_sel, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_10_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_10_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_10_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_14_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_14_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_14_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_18_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_18_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_18_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_1C_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_1C_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_1C_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_20_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_20_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_20_GET_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_24_GET_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_24_GET_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_24_GET_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_28_GET_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_28_GET_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_28_GET_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_2C_GET_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_2C_GET_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_2C_GET_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_30_GET_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_30_GET_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_30_GET_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_34_GET_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_34_GET_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_34_GET_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_38_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_38_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_38_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_3C_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_3C_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_3C_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_40_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_40_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_40_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_44_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_44_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_44_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_48_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_48_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_48_GET_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_4C_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_4C_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_4C_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_50_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_50_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_50_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_54_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_54_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_54_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_58_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_58_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_58_GET_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_5C_GET_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_5C_GET_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_5C_GET_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_60_GET_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_60_GET_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_60_GET_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_64_GET_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_64_GET_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_64_GET_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_68_GET_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_68_GET_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_68_GET_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_6C_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_6C_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_6C_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_70_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_70_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_70_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_74_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_74_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_74_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_78_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_78_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1, (reg32))
#define PEXTP_DIG_LN_TX_DA_COEF_78_GET_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0(reg32) REG_FLD_GET(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0, (reg32))

#define PEXTP_DIG_LN_TX_DA_COEF_00_SET_rg_xtp_ln_tx_gen34_mg4_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg4_sel, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_00_SET_rg_xtp_ln_tx_gen34_mg3_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg3_sel, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_00_SET_rg_xtp_ln_tx_gen34_mg2_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg2_sel, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_00_SET_rg_xtp_ln_tx_gen34_mg1_sel(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg1_sel, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_10_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_10_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_10_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_14_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_14_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_14_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_18_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_18_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_18_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_1C_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_1C_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_1C_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_20_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_20_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_20_SET_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_24_SET_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_24_SET_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_24_SET_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_28_SET_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_28_SET_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_28_SET_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_2C_SET_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_2C_SET_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_2C_SET_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_30_SET_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_30_SET_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_30_SET_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_34_SET_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_34_SET_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_34_SET_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_38_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_38_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_38_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_3C_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_3C_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_3C_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_40_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_40_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_40_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_44_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_44_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_44_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_48_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_48_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_48_SET_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_4C_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_4C_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_4C_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_50_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_50_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_50_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_54_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_54_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_54_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_58_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_58_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_58_SET_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_5C_SET_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_5C_SET_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_5C_SET_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_60_SET_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_60_SET_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_60_SET_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_64_SET_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_64_SET_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_64_SET_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_68_SET_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_68_SET_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_68_SET_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_6C_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_6C_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_6C_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_70_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_70_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_70_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_74_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_74_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_74_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_78_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_78_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1, (reg32), (val))
#define PEXTP_DIG_LN_TX_DA_COEF_78_SET_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0(reg32, val) REG_FLD_SET(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0, (reg32), (val))

#define PEXTP_DIG_LN_TX_DA_COEF_00_VAL_rg_xtp_ln_tx_gen34_mg4_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg4_sel, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_00_VAL_rg_xtp_ln_tx_gen34_mg3_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg3_sel, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_00_VAL_rg_xtp_ln_tx_gen34_mg2_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg2_sel, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_00_VAL_rg_xtp_ln_tx_gen34_mg1_sel(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_00_FLD_rg_xtp_ln_tx_gen34_mg1_sel, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_10_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_10_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_10_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_10_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg0_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_14_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_14_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_14_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_14_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg1_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_18_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_18_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_18_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_18_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg2_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_1C_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_1C_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_1C_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_1C_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg3_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_20_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_20_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_20_VAL_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_20_FLD_rg_xtp_ln_tx_lctxcm1_gen12_mg4_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_24_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_24_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_24_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_24_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg0_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_28_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_28_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_28_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_28_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg1_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_2C_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_2C_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_2C_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_2C_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg2_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_30_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_30_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_30_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_30_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg3_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_34_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_34_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_34_VAL_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_34_FLD_rg_xtp_ln_tx_lctxc0_gen12_mg4_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_38_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_38_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_38_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_38_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg0_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_3C_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_3C_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_3C_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_3C_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg1_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_40_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_40_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_40_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_40_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg2_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_44_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_44_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_44_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_44_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg3_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_48_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_48_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_48_VAL_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_48_FLD_rg_xtp_ln_tx_lctxcp1_gen12_mg4_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_4C_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_4C_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_4C_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_4C_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg1_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_50_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_50_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_50_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_50_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg2_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_54_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_54_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_54_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_54_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg3_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_58_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_58_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_58_VAL_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_58_FLD_rg_xtp_ln_tx_lctxcm1_gen34_mg4_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_5C_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_5C_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_5C_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_5C_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg1_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_60_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_60_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_60_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_60_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg2_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_64_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_64_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_64_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_64_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg3_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_68_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_68_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_68_VAL_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_68_FLD_rg_xtp_ln_tx_lctxc0_gen34_mg4_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_6C_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_6C_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_6C_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_6C_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg1_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_70_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_70_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_70_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_70_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg2_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_74_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_74_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_74_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_74_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg3_dep0, (val))

#define PEXTP_DIG_LN_TX_DA_COEF_78_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep2, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_78_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep1, (val))
#define PEXTP_DIG_LN_TX_DA_COEF_78_VAL_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0(val) REG_FLD_VAL(PEXTP_DIG_LN_TX_DA_COEF_78_FLD_rg_xtp_ln_tx_lctxcp1_gen34_mg4_dep0, (val))

#ifdef __cplusplus
}
#endif

#endif // __pextp_sifslv_dig_ln0_tx_da_coef_p0_REGS_H__

