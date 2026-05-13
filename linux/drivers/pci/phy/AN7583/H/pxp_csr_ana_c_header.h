#ifndef __pxp_csr_ana_REGS_H__
#define __pxp_csr_ana_REGS_H__

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef REG_BASE_C_MODULE
// ----------------- pxp_csr_ana Bit Field Definitions -------------------

#define PACKING
typedef unsigned int UINT32;
typedef unsigned int FIELD;

typedef struct
{
    

        FIELD RG_PXP_CMN_EN             : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_CMN_MPXSELTOP_DC   : 6;
        FIELD rsv_14                    : 2;
        FIELD RG_PXP_CMN_VREFSEL        : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_CMN_TRIM           : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RG_PXP_CMN_EN, *PREG_RG_PXP_CMN_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_IB_EXT_EN    : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_LPF_SHCK_EN  : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_JCPLL_CHP_IBIAS    : 6;
        FIELD rsv_22                    : 2;
        FIELD RG_PXP_JCPLL_CHP_IOFST    : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_RG_PXP_JCPLL_IB_EXT_EN, *PREG_RG_PXP_JCPLL_IB_EXT_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_LPF_BR       : 5;
        FIELD rsv_5                     : 3;
        FIELD RG_PXP_JCPLL_LPF_BC       : 5;
        FIELD rsv_13                    : 3;
        FIELD RG_PXP_JCPLL_LPF_BP       : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_PXP_JCPLL_LPF_BWR      : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RG_PXP_JCPLL_LPF_BR, *PREG_RG_PXP_JCPLL_LPF_BR;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_LPF_BWC      : 5;
        FIELD rsv_5                     : 3;
        FIELD RG_PXP_JCPLL_KBAND_OPTION : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_JCPLL_KBAND_CODE   : 8;
        FIELD RG_PXP_JCPLL_KBAND_DIV    : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_JCPLL_LPF_BWC, *PREG_RG_PXP_JCPLL_LPF_BWC;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_KBAND_KFC    : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_JCPLL_KBAND_KF     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_KBAND_KS     : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_JCPLL_POSTDIV_EN   : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_JCPLL_KBAND_KFC, *PREG_RG_PXP_JCPLL_KBAND_KFC;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_MMD_PREDIV_MODE : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_JCPLL_MMD_DL_CODE  : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_JCPLL_POSTDIV_D2   : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_POSTDIV_D5   : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_JCPLL_MMD_PREDIV_MODE, *PREG_RG_PXP_JCPLL_MMD_PREDIV_MODE;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_MONCK_EN     : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_MONCK_SEL    : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_REFIN_INTERNAL : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_REFIN_DIV    : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_JCPLL_MONCK_EN, *PREG_RG_PXP_JCPLL_MONCK_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_RST_DLY      : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_PXP_JCPLL_PLL_RSTB     : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_JCPLL_SDM_DI_EN    : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_SDM_DI_LS    : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_JCPLL_RST_DLY, *PREG_RG_PXP_JCPLL_RST_DLY;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_SDM_IFM      : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_SDM_MODE     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_SDM_ORD      : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_JCPLL_SDM_OUT      : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_JCPLL_SDM_IFM, *PREG_RG_PXP_JCPLL_SDM_IFM;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_SDM_HREN     : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_TCL_AMP_EN   : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_JCPLL_TCL_AMP_GAIN : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_JCPLL_TCL_AMP_VREF : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RG_PXP_JCPLL_SDM_HREN, *PREG_RG_PXP_JCPLL_SDM_HREN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_TCL_CMP_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_TCL_CMP_VTH  : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_JCPLL_TCL_LPF_EN   : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_TCL_LPF_BW   : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_JCPLL_TCL_CMP_EN, *PREG_RG_PXP_JCPLL_TCL_CMP_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_VCODIV       : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_JCPLL_VCO_CFIX     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_VCO_HALFLSB_EN : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_VCO_SCAPWR   : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_JCPLL_VCODIV, *PREG_RG_PXP_JCPLL_VCODIV;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_VCO_TCLVAR   : 3;
        FIELD RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H : 3;
        FIELD rsv_6                     : 2;
        FIELD RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L : 3;
        FIELD RG_PXP_JCPLL_VCO_VAR_IBIAS_EN : 1;
        FIELD RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN : 1;
        FIELD RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN : 1;
        FIELD RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL : 1;
        FIELD RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL : 1;
        FIELD RG_PXP_JCPLL_SSC_EN       : 1;
        FIELD RG_PXP_JCPLL_SSC_PHASE_INI : 1;
        FIELD rsv_18                    : 14;
    
    
} REG_RG_PXP_JCPLL_VCO_TCLVAR, *PREG_RG_PXP_JCPLL_VCO_TCLVAR;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_SSC_TRI_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_SSC_DELTA1   : 16;
        FIELD rsv_24                    : 8;
    
    
} REG_RG_PXP_JCPLL_SSC_TRI_EN, *PREG_RG_PXP_JCPLL_SSC_TRI_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_SSC_DELTA    : 16;
        FIELD RG_PXP_JCPLL_SSC_PERIOD   : 16;
    
    
} REG_RG_PXP_JCPLL_SSC_DELTA, *PREG_RG_PXP_JCPLL_SSC_DELTA;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_LDO_OUT      : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_JCPLL_LDO_VCO_OUT  : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_VTP_EN       : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_VTP          : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_JCPLL_LDO_OUT, *PREG_RG_PXP_JCPLL_LDO_OUT;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_LDO_VCO_VTP_EN : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_LDO_VCO_VTP  : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_VCO_VTP_EN   : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_VCO_VTP      : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_JCPLL_LDO_VCO_VTP_EN, *PREG_RG_PXP_JCPLL_LDO_VCO_VTP_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_LDO_VTP_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_LDO_VTP      : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_JCPLL_TCL_VTP_EN   : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_JCPLL_TCL_VTP      : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_JCPLL_LDO_VTP_EN, *PREG_RG_PXP_JCPLL_LDO_VTP_EN;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_SPARE_H      : 8;
        FIELD RG_PXP_JCPLL_SPARE_L      : 8;
        FIELD RG_PXP_JCPLL_TCL_KBAND_VREF : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_PXP_JCPLL_VREF_SEL     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_JCPLL_SPARE_H, *PREG_RG_PXP_JCPLL_SPARE_H;

typedef struct
{
    

        FIELD RG_PXP_JCPLL_FREQ_MEAS_EN : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_JCPLL_VCO_KBAND_MEAS_EN : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_750M_SYS_CK_EN     : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_IB_EXT_EN    : 1;
        FIELD RG_PXP_TXPLL_LPF_SHCK_EN  : 1;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_JCPLL_FREQ_MEAS_EN, *PREG_RG_PXP_JCPLL_FREQ_MEAS_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_CHP_IBIAS    : 6;
        FIELD rsv_6                     : 2;
        FIELD RG_PXP_TXPLL_CHP_IOFST    : 6;
        FIELD rsv_14                    : 2;
        FIELD RG_PXP_TXPLL_LPF_BR       : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_PXP_TXPLL_LPF_BC       : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RG_PXP_TXPLL_CHP_IBIAS, *PREG_RG_PXP_TXPLL_CHP_IBIAS;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_LPF_BP       : 5;
        FIELD rsv_5                     : 3;
        FIELD RG_PXP_TXPLL_LPF_BWR      : 5;
        FIELD rsv_13                    : 3;
        FIELD RG_PXP_TXPLL_LPF_BWC      : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_PXP_TXPLL_KBAND_OPTION : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TXPLL_LPF_BP, *PREG_RG_PXP_TXPLL_LPF_BP;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_KBAND_CODE   : 8;
        FIELD RG_PXP_TXPLL_KBAND_DIV    : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_TXPLL_KBAND_KFC    : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_TXPLL_KBAND_KF     : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_KBAND_CODE, *PREG_RG_PXP_TXPLL_KBAND_CODE;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_KBAND_KS     : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_TXPLL_POSTDIV_EN   : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TXPLL_MMD_PREDIV_MODE : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_TXPLL_MMD_DL_CODE  : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_TXPLL_KBAND_KS, *PREG_RG_PXP_TXPLL_KBAND_KS;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_PHY_CK1_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_PHY_CK2_EN   : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TXPLL_MONCK_EN     : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_MONCK_SEL    : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_PHY_CK1_EN, *PREG_RG_PXP_TXPLL_PHY_CK1_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_REFIN_INTERNAL : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_REFIN_DIV    : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_TXPLL_RST_DLY      : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_TXPLL_PLL_RSTB     : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TXPLL_REFIN_INTERNAL, *PREG_RG_PXP_TXPLL_REFIN_INTERNAL;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_SDM_DI_EN    : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_SDM_DI_LS    : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_TXPLL_SDM_IFM      : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_SDM_MODE     : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_SDM_DI_EN, *PREG_RG_PXP_TXPLL_SDM_DI_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_SDM_ORD      : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_TXPLL_SDM_OUT      : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TXPLL_SDM_HREN     : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_TCL_AMP_EN   : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TXPLL_SDM_ORD, *PREG_RG_PXP_TXPLL_SDM_ORD;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_TCL_AMP_GAIN : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_PXP_TXPLL_TCL_AMP_VREF : 5;
        FIELD rsv_13                    : 3;
        FIELD RG_PXP_TXPLL_TCL_CMP_EN   : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_TCL_CMP_VTH  : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_TXPLL_TCL_AMP_GAIN, *PREG_RG_PXP_TXPLL_TCL_AMP_GAIN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_TCL_LPF_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_TCL_LPF_BW   : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_TXPLL_VCODIV       : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_TXPLL_VCO_CFIX     : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_TCL_LPF_EN, *PREG_RG_PXP_TXPLL_TCL_LPF_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_VCO_HALFLSB_EN : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_VCO_SCAPWR   : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_TXPLL_VCO_TCLVAR   : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H : 3;
        FIELD RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L : 3;
        FIELD rsv_30                    : 2;
    
    
} REG_RG_PXP_TXPLL_VCO_HALFLSB_EN, *PREG_RG_PXP_TXPLL_VCO_HALFLSB_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_SSC_EN       : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_SSC_PHASE_INI : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TXPLL_SSC_TRI_EN   : 1;
        FIELD rsv_17                    : 15;
    
    
} REG_RG_PXP_TXPLL_SSC_EN, *PREG_RG_PXP_TXPLL_SSC_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_SSC_DELTA1   : 16;
        FIELD RG_PXP_TXPLL_SSC_DELTA    : 16;
    
    
} REG_RG_PXP_TXPLL_SSC_DELTA1, *PREG_RG_PXP_TXPLL_SSC_DELTA1;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_SSC_PERIOD   : 16;
        FIELD RG_PXP_TXPLL_LDO_OUT      : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_TXPLL_LDO_VCO_OUT  : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_SSC_PERIOD, *PREG_RG_PXP_TXPLL_SSC_PERIOD;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_VTP_EN       : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_VTP          : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_TXPLL_LDO_VCO_VTP_EN : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_LDO_VCO_VTP  : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_VTP_EN, *PREG_RG_PXP_TXPLL_VTP_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_VCO_VTP_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_VCO_VTP      : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_TXPLL_LDO_VTP_EN   : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_LDO_VTP      : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_VCO_VTP_EN, *PREG_RG_PXP_TXPLL_VCO_VTP_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_TCL_VTP_EN   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TXPLL_TCL_VTP      : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_TXPLL_SPARE_H      : 8;
        FIELD RG_PXP_TXPLL_SPARE_L      : 8;
    
    
} REG_RG_PXP_TXPLL_TCL_VTP_EN, *PREG_RG_PXP_TXPLL_TCL_VTP_EN;

typedef struct
{
    

        FIELD RG_PXP_TXPLL_TCL_KBAND_VREF : 5;
        FIELD rsv_5                     : 3;
        FIELD RG_PXP_TXPLL_VREF_SEL     : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TXPLL_FREQ_MEAS_EN : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TXPLL_VCO_KBAND_MEAS_EN : 1;
        FIELD RG_PXP_TXPLL_POSTDIV_D256_EN : 1;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_TXPLL_TCL_KBAND_VREF, *PREG_RG_PXP_TXPLL_TCL_KBAND_VREF;

typedef struct
{
    

        FIELD RG_PCIE_CLKTX0_AMP        : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_PCIE_CLKTX0_OFFSET     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PCIE_CLKTX0_SR         : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PCIE_CLKTX0_FORCE_OUT1 : 2;
        FIELD RG_PXP_PCIE_CLKTX0_HZ     : 1;
        FIELD RG_PXP_PCIE_CLKTX0_IMP_SEL : 5;
    
    
} REG_RG_PCIE_CLKTX0_AMP, *PREG_RG_PCIE_CLKTX0_AMP;

typedef struct
{
    

        FIELD RG_PCIE_CLKTX1_AMP        : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_PCIE_CLKTX1_OFFSET     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PCIE_CLKTX1_SR         : 2;
        FIELD rsv_18                    : 6;
        FIELD RG_PCIE_CLKTX1_FORCE_OUT1 : 2;
        FIELD RG_PXP_PCIE_CLKTX1_HZ     : 1;
        FIELD RG_PXP_PCIE_CLKTX1_IMP_SEL : 5;
    
    
} REG_RG_PCIE_CLKTX1_AMP, *PREG_RG_PCIE_CLKTX1_AMP;

typedef struct
{
    

        FIELD RG_PXP_PLL_MONCLK_SEL     : 2;
        FIELD RG_PXP_PLL_VTP            : 2;
        FIELD RG_PXP_PLL_VTP_EN         : 1;
        FIELD rsv_5                     : 3;
        FIELD RG_PXP_PLL_CMN_RESERVE0   : 8;
        FIELD RG_PXP_PLL_CMN_RESERVE1   : 8;
        FIELD RG_PXP_TDC_AUTOEN         : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_PLL_MONCLK_SEL, *PREG_RG_PXP_PLL_MONCLK_SEL;

typedef struct
{
    

        FIELD RG_PXP_TDC_TXCK_SEL       : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_TDC_RXCK_SEL       : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TDC_FT_CK_EN       : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TDC_MON_CK_EN      : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TDC_TXCK_SEL, *PREG_RG_PXP_TDC_TXCK_SEL;

typedef struct
{
    

        FIELD RG_PXP_TDC_SYNC_CK_SEL    : 1;
        FIELD rsv_1                     : 31;
    
    
} REG_RG_PXP_TDC_SYNC_CK_SEL, *PREG_RG_PXP_TDC_SYNC_CK_SEL;

typedef struct
{
    

        FIELD RGS_PXP_JCPLL_KBAND_CODE  : 8;
        FIELD rsv_8                     : 24;
    
    
} REG_RGS_PXP_JCPLL_KBAND_CODE, *PREG_RGS_PXP_JCPLL_KBAND_CODE;

typedef struct
{
    

        FIELD RGS_PXP_TXPLL_KBAND_CODE  : 8;
        FIELD rsv_8                     : 24;
    
    
} REG_RGS_PXP_TXPLL_KBAND_CODE, *PREG_RGS_PXP_TXPLL_KBAND_CODE;

typedef struct
{
    

        FIELD RG_PXP_TX_SER_LOADSEL     : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_TX_DIGFF_CK_INV    : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TX_SR_REDUCTION    : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_TX_CKMON_EN        : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TX_SER_LOADSEL, *PREG_RG_PXP_TX_SER_LOADSEL;

typedef struct
{
    

        FIELD RG_PXP_TX_CKMON_SEL       : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_TX_LSDATA_EN       : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TX_LSDATA          : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TX_FIR_CHGPLR_CN1  : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TX_CKMON_SEL, *PREG_RG_PXP_TX_CKMON_SEL;

typedef struct
{
    

        FIELD RG_PXP_TX_FIR_CHGPLR_C1   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TX_FIR_CHGPLR_C2   : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TX_VMON_EN         : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TX_VMON_SEL        : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_TX_FIR_CHGPLR_C1, *PREG_RG_PXP_TX_FIR_CHGPLR_C1;

typedef struct
{
    

        FIELD RG_PXP_TX_TXLBRX_EN       : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TX_INT_EN          : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TX_TERMCAL_VREF_H  : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_TX_TERMCAL_VREF_L  : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_TX_TXLBRX_EN, *PREG_RG_PXP_TX_TXLBRX_EN;

typedef struct
{
    

        FIELD RG_PXP_TX_CKLDO_EN        : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TX_CKLDO_LVR       : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_TX_RXDET_METHOD    : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_TX_DMEDGEGEN_EN    : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_TX_CKLDO_EN, *PREG_RG_PXP_TX_CKLDO_EN;

typedef struct
{
    

        FIELD RG_PXP_TX_MULTLANE_EN     : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_TX_TERMCAL_SELPN   : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_TX_TDC_CK_SEL      : 2;
        FIELD RG_PXP_TX_AUTOZERO_EN     : 1;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_TX_RESERVED        : 8;
    
    
} REG_RG_PXP_TX_MULTLANE_EN, *PREG_RG_PXP_TX_MULTLANE_EN;

typedef struct
{
    

        FIELD RG_PXP_RX_BUSBIT_SEL      : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_BUSBIT_SEL_FORCE : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_RX_PHY_CK_SEL      : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_RX_PHY_CK_SEL_FORCE : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_RX_BUSBIT_SEL, *PREG_RG_PXP_RX_BUSBIT_SEL;

typedef struct
{
    

        FIELD RG_PXP_RX_MPXSEL          : 8;
        FIELD RG_PXP_RX_DBGSEL          : 8;
        FIELD RG_PXP_RX_SYNC_INV        : 5;
        FIELD rsv_21                    : 11;
    
    
} REG_RG_PXP_RX_MPXSEL, *PREG_RG_PXP_RX_MPXSEL;

typedef struct
{
    

        FIELD RG_PXP_RX_REV_0           : 16;
        FIELD RG_PXP_RX_REV_1           : 16;
    
    
} REG_RG_PXP_RX_REV_0, *PREG_RG_PXP_RX_REV_0;

typedef struct
{
    

        FIELD RG_PXP_RX_PHYCK_DIV       : 8;
        FIELD RG_PXP_RX_PHYCK_SEL       : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_RX_PHYCK_RSTB      : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_RX_TDC_CK_SEL      : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_RX_PHYCK_DIV, *PREG_RG_PXP_RX_PHYCK_DIV;

typedef struct
{
    

        FIELD RG_PXP_CDR_PD_PICAL_CKD8_INV : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_CDR_PD_EDGE_DIS    : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RG_PXP_CDR_PD_PICAL_CKD8_INV, *PREG_RG_PXP_CDR_PD_PICAL_CKD8_INV;

typedef struct
{
    

        FIELD RG_PXP_CDR_LPF_BOT_LIM    : 19;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_CDR_LPF_KI_GAIN    : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_CDR_LPF_BOT_LIM, *PREG_RG_PXP_CDR_LPF_BOT_LIM;

typedef struct
{
    

        FIELD RG_PXP_CDR_LPF_KP_GAIN    : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_PXP_CDR_LPF_LIN_LIM    : 5;
        FIELD rsv_13                    : 3;
        FIELD RG_PXP_CDR_LPF_MJV_EN     : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_CDR_LPF_MJV_LIM    : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RG_PXP_CDR_LPF_KP_GAIN, *PREG_RG_PXP_CDR_LPF_KP_GAIN;

typedef struct
{
    

        FIELD RG_PXP_CDR_LPF_RATIO      : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_CDR_LPF_TOP_LIM    : 19;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_CDR_LPF_RATIO, *PREG_RG_PXP_CDR_LPF_RATIO;

typedef struct
{
    

        FIELD RG_PXP_CDR_LPF_SNAPSHOT   : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_CDR_LPF_SET        : 1;
        FIELD rsv_9                     : 23;
    
    
} REG_RG_PXP_CDR_LPF_SNAPSHOT, *PREG_RG_PXP_CDR_LPF_SNAPSHOT;

typedef struct
{
    

        FIELD RG_PXP_CDR_LPF_SETVALUE   : 19;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_CDR_LPF_PISTEP_CTRL : 8;
    
    
} REG_RG_PXP_CDR_LPF_SETVALUE, *PREG_RG_PXP_CDR_LPF_SETVALUE;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_INJ_MODE    : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_CDR_PR_INPUT_MODE  : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_CDR_PR_INJ_FORCE_ON : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_CDR_PR_INJ_FORCE_OFF : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_CDR_PR_INJ_MODE, *PREG_RG_PXP_CDR_PR_INJ_MODE;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_BETA_DAC    : 7;
        FIELD rsv_7                     : 1;
        FIELD RG_PXP_CDR_PR_VCOADC_OS   : 4;
        FIELD rsv_12                    : 4;
        FIELD RG_PXP_CDR_PR_BETA_SEL    : 4;
        FIELD rsv_20                    : 4;
        FIELD RG_PXP_CDR_PR_KBAND_DIV   : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_CDR_PR_BETA_DAC, *PREG_RG_PXP_CDR_PR_BETA_DAC;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_VREG_IBAND_VAL : 3;
        FIELD rsv_3                     : 5;
        FIELD RG_PXP_CDR_PR_VREG_CKBUF_VAL : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_CDR_PR_DAC_BAND    : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_PXP_CDR_PR_FBKSEL      : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_CDR_PR_VREG_IBAND_VAL, *PREG_RG_PXP_CDR_PR_VREG_IBAND_VAL;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_CKREF_DIV   : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_CDR_PR_RST_DLY     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_CDR_PR_RSTB_BYPASS : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_CDR_PR_MONMUXVC    : 8;
    
    
} REG_RG_PXP_CDR_PR_CKREF_DIV, *PREG_RG_PXP_CDR_PR_CKREF_DIV;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_MONCK_EN    : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_CDR_PR_MONCK_MUX   : 4;
        FIELD rsv_12                    : 4;
        FIELD RG_PXP_CDR_PR_RESERVE0    : 4;
        FIELD rsv_20                    : 4;
        FIELD RG_PXP_CDR_PR_RESERVE1    : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RG_PXP_CDR_PR_MONCK_EN, *PREG_RG_PXP_CDR_PR_MONCK_EN;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_TDC_REF_SEL : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_CDR_PR_COR_HBW_EN  : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_CDR_PR_LDO_FORCE_ON : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_CDR_PR_CKREF_DIV1  : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_CDR_PR_TDC_REF_SEL, *PREG_RG_PXP_CDR_PR_TDC_REF_SEL;

typedef struct
{
    

        FIELD RG_PXP_CDR_PR_MONPR_EN    : 1;
        FIELD RG_PXP_CDR_PR_MONPI_EN    : 1;
        FIELD RG_PXP_CDR_PR_XFICK_EN    : 1;
        FIELD rsv_3                     : 5;
        FIELD RG_PXP_CDR_PR_VREG_PI_VAL : 3;
        FIELD RG_PXP_CDR_PI_LDO_EN      : 1;
        FIELD rsv_12                    : 4;
        FIELD RG_PXP_CDR_PR_BUF_IN_SR   : 3;
        FIELD RG_PXP_CDR_PR_CAP_EN      : 1;
        FIELD rsv_20                    : 4;
        FIELD RG_PXP_RX_DAC_MON         : 5;
        FIELD rsv_29                    : 3;
    
    
} REG_RG_PXP_CDR_PR_MONPR_EN, *PREG_RG_PXP_CDR_PR_MONPR_EN;

typedef struct
{
    

        FIELD RG_PXP_RX_DAC_RANGE       : 2;
        FIELD rsv_2                     : 6;
        FIELD RG_PXP_RX_DAC_RANGE_EYE   : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_RX_SIGDET_DCTEST_EN : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_RX_SIGDET_LPF_CTRL : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_RX_DAC_RANGE, *PREG_RG_PXP_RX_DAC_RANGE;

typedef struct
{
    

        FIELD RG_PXP_RX_SIGDET_NOVTH    : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_SIGDET_PEAK     : 2;
        FIELD rsv_10                    : 6;
        FIELD RG_PXP_RX_SIGDET_VTH_SEL  : 5;
        FIELD rsv_21                    : 3;
        FIELD RG_PXP_RX_FE_50OHMS_SEL   : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_RX_SIGDET_NOVTH, *PREG_RG_PXP_RX_SIGDET_NOVTH;

typedef struct
{
    

        FIELD RG_PXP_RX_FE_EQ_HZEN      : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_FE_VB_EQ1_EN    : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_RX_FE_VB_EQ2_EN    : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_RX_FE_VB_EQ3_EN    : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_RX_FE_EQ_HZEN, *PREG_RG_PXP_RX_FE_EQ_HZEN;

typedef struct
{
    

        FIELD RG_PXP_RX_FE_VCM_GEN_PWDB : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_FE_VCM_SEL      : 3;
        FIELD rsv_11                    : 5;
        FIELD RG_PXP_RX_OSCAL_CK_INV    : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_RX_OSCAL_WAIT_WNDW : 3;
        FIELD rsv_27                    : 5;
    
    
} REG_RG_PXP_RX_FE_VCM_GEN_PWDB, *PREG_RG_PXP_RX_FE_VCM_GEN_PWDB;

typedef struct
{
    

        FIELD RG_PXP_RX_OSCAL_WATCH_WNDW : 4;
        FIELD rsv_4                     : 4;
        FIELD RG_PXP_RX_OSCAL_FORCE     : 10;
        FIELD rsv_18                    : 6;
        FIELD RG_PXP_RX_OSCAL_COMPOS    : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_RG_PXP_RX_OSCAL_WATCH_WNDW, *PREG_RG_PXP_RX_OSCAL_WATCH_WNDW;

typedef struct
{
    

        FIELD RG_PXP_RX_OSCAL_OPTION    : 16;
        FIELD RG_PXP_RX_OSCAL_LVSHOS    : 6;
        FIELD rsv_22                    : 2;
        FIELD RG_PXP_RX_OSCAL_CTLE1IOS  : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_RG_PXP_RX_OSCAL_OPTION, *PREG_RG_PXP_RX_OSCAL_OPTION;

typedef struct
{
    

        FIELD RG_PXP_RX_OSCAL_CTLE2IOS  : 6;
        FIELD rsv_6                     : 2;
        FIELD RG_PXP_RX_OSCAL_CTLE2VOS  : 6;
        FIELD rsv_14                    : 2;
        FIELD RG_PXP_RX_OSCAL_VGA1IOS   : 6;
        FIELD rsv_22                    : 2;
        FIELD RG_PXP_RX_OSCAL_VGA1VOS   : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_RG_PXP_RX_OSCAL_CTLE2IOS, *PREG_RG_PXP_RX_OSCAL_CTLE2IOS;

typedef struct
{
    

        FIELD RG_PXP_RX_OSCAL_VGA2IOS   : 6;
        FIELD rsv_6                     : 2;
        FIELD RG_PXP_RX_OSCAL_VGA2VOS   : 6;
        FIELD rsv_14                    : 2;
        FIELD RG_PXP_AEQ_CK_INV         : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_AEQ_WAIT_WNDW      : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RG_PXP_RX_OSCAL_VGA2IOS, *PREG_RG_PXP_RX_OSCAL_VGA2IOS;

typedef struct
{
    

        FIELD RG_PXP_AEQ_WATCH_WNDW     : 4;
        FIELD rsv_4                     : 4;
        FIELD RG_PXP_AEQ_FR2HR_MODE     : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_AEQ_FLAG_DFE_TUNE_RDY : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_AEQ_WATCH_WNDW, *PREG_RG_PXP_AEQ_WATCH_WNDW;

typedef struct
{
    

        FIELD RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_AEQ_STATE          : 8;
    
    
} REG_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY, *PREG_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY;

typedef struct
{
    

        FIELD RG_PXP_AEQ_OPTION         : 16;
        FIELD RG_PXP_AEQ_OPTION2        : 8;
        FIELD RG_PXP_AEQ_OPTION3        : 8;
    
    
} REG_RG_PXP_AEQ_OPTION, *PREG_RG_PXP_AEQ_OPTION;

typedef struct
{
    

        FIELD RG_PXP_AEQ_CFORCE         : 4;
        FIELD rsv_4                     : 4;
        FIELD RG_PXP_AEQ_OFORCE         : 12;
        FIELD rsv_20                    : 4;
        FIELD RG_PXP_AEQ_CTLE_ERR_TYPE  : 2;
        FIELD rsv_26                    : 6;
    
    
} REG_RG_PXP_AEQ_CFORCE, *PREG_RG_PXP_AEQ_CFORCE;

typedef struct
{
    

        FIELD RG_PXP_AEQ_CTLE_MAX       : 5;
        FIELD rsv_5                     : 3;
        FIELD RG_PXP_AEQ_CTLE_STTL      : 8;
        FIELD RG_PXP_AEQ_CTLE_TH        : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_AEQ_CTLE_WNDW      : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RG_PXP_AEQ_CTLE_MAX, *PREG_RG_PXP_AEQ_CTLE_MAX;

typedef struct
{
    

        FIELD RG_PXP_RX_FE_PEAKING_CTRL_MSB : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_FE_PEAKING_CTRL_LSB : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_AEQ_SAOS_TH        : 3;
        FIELD rsv_19                    : 5;
        FIELD RG_PXP_RX_DAC_D0_BYPASS_AEQ : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_RX_FE_PEAKING_CTRL_MSB, *PREG_RG_PXP_RX_FE_PEAKING_CTRL_MSB;

typedef struct
{
    

        FIELD RG_PXP_RX_DAC_D1_BYPASS_AEQ : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_DAC_E0_BYPASS_AEQ : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_RX_DAC_E1_BYPASS_AEQ : 1;
        FIELD rsv_17                    : 7;
        FIELD RG_PXP_RX_DAC_EYE_BYPASS_AEQ : 1;
        FIELD rsv_25                    : 7;
    
    
} REG_RG_PXP_RX_DAC_D1_BYPASS_AEQ, *PREG_RG_PXP_RX_DAC_D1_BYPASS_AEQ;

typedef struct
{
    

        FIELD RG_PXP_RX_DAC_ERR0_BYPASS_AEQ : 1;
        FIELD rsv_1                     : 7;
        FIELD RG_PXP_RX_DAC_ERR1_BYPASS_AEQ : 1;
        FIELD rsv_9                     : 7;
        FIELD RG_PXP_RX_DAC_ERR0        : 7;
        FIELD rsv_23                    : 1;
        FIELD RG_PXP_RX_DAC_ERR1        : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ, *PREG_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ;

typedef struct
{
    

        FIELD RG_PXP_AEQ_CM1_WNDW       : 4;
        FIELD rsv_4                     : 4;
        FIELD RG_PXP_AEQ_CP1_WNDW       : 4;
        FIELD rsv_12                    : 4;
        FIELD RG_PXP_AEQ_VGA_WNDW       : 4;
        FIELD rsv_20                    : 4;
        FIELD RG_PXP_AEQ_DFETP1_WNDW    : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RG_PXP_AEQ_CM1_WNDW, *PREG_RG_PXP_AEQ_CM1_WNDW;

typedef struct
{
    

        FIELD RG_PXP_AEQ_DFETP2_WNDW    : 4;
        FIELD rsv_4                     : 4;
        FIELD RG_PXP_AEQ_DFETP3_WNDW    : 4;
        FIELD rsv_12                    : 4;
        FIELD RG_PXP_AEQ_DFETP4_WNDW    : 4;
        FIELD rsv_20                    : 4;
        FIELD RG_PXP_AEQ_DFETP5_WNDW    : 4;
        FIELD rsv_28                    : 4;
    
    
} REG_RG_PXP_AEQ_DFETP2_WNDW, *PREG_RG_PXP_AEQ_DFETP2_WNDW;

typedef struct
{
    

        FIELD RG_PXP_AEQ_DFETP6_WNDW    : 4;
        FIELD rsv_4                     : 4;
        FIELD RG_PXP_AEQ_DFETP7_WNDW    : 4;
        FIELD rsv_12                    : 4;
        FIELD RG_PXP_AEQ_TRN_DFENUM     : 3;
        FIELD rsv_19                    : 13;
    
    
} REG_RG_PXP_AEQ_DFETP6_WNDW, *PREG_RG_PXP_AEQ_DFETP6_WNDW;

typedef struct
{
    

        FIELD RGS_PXP_RX_OSCAL_FE_VOS   : 6;
        FIELD rsv_6                     : 2;
        FIELD RGS_PXP_RX_OSCAL_COMPOS   : 6;
        FIELD rsv_14                    : 2;
        FIELD RGS_PXP_RX_OSCAL_LVSHOS   : 6;
        FIELD rsv_22                    : 2;
        FIELD RGS_PXP_RX_OSCAL_CTLE1IOS : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_RGS_PXP_RX_OSCAL_FE_VOS, *PREG_RGS_PXP_RX_OSCAL_FE_VOS;

typedef struct
{
    

        FIELD RGS_PXP_RX_OSCAL_CTLE2IOS : 6;
        FIELD rsv_6                     : 2;
        FIELD RGS_PXP_RX_OSCAL_CTLE2VOS : 6;
        FIELD rsv_14                    : 2;
        FIELD RGS_PXP_RX_OSCAL_VGA1IOS  : 6;
        FIELD rsv_22                    : 2;
        FIELD RGS_PXP_RX_OSCAL_VGA1VOS  : 6;
        FIELD rsv_30                    : 2;
    
    
} REG_RGS_PXP_RX_OSCAL_CTLE2IOS, *PREG_RGS_PXP_RX_OSCAL_CTLE2IOS;

typedef struct
{
    

        FIELD RGS_PXP_RX_OSCAL_VGA2IOS  : 6;
        FIELD rsv_6                     : 2;
        FIELD RGS_PXP_RX_OSCAL_VGA2VOS  : 6;
        FIELD rsv_14                    : 18;
    
    
} REG_RGS_PXP_RX_OSCAL_VGA2IOS, *PREG_RGS_PXP_RX_OSCAL_VGA2IOS;

typedef struct
{
    

        FIELD RGS_PXP_AEQ_CTLE          : 5;
        FIELD rsv_5                     : 27;
    
    
} REG_RGS_PXP_AEQ_CTLE, *PREG_RGS_PXP_AEQ_CTLE;

typedef struct
{
    

        FIELD RGS_PXP_AEQ_SAOSC_EN      : 1;
        FIELD rsv_1                     : 7;
        FIELD RGS_PXP_AEQ_D0_OS         : 7;
        FIELD rsv_15                    : 1;
        FIELD RGS_PXP_AEQ_D1_OS         : 7;
        FIELD rsv_23                    : 1;
        FIELD RGS_PXP_AEQ_E0_OS         : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RGS_PXP_AEQ_SAOSC_EN, *PREG_RGS_PXP_AEQ_SAOSC_EN;

typedef struct
{
    

        FIELD RGS_PXP_AEQ_E1_OS         : 7;
        FIELD rsv_7                     : 1;
        FIELD RGS_PXP_AEQ_EYE_OS        : 7;
        FIELD rsv_15                    : 1;
        FIELD RGS_PXP_AEQ_ERR0_OS       : 7;
        FIELD rsv_23                    : 1;
        FIELD RGS_PXP_AEQ_ERR1_OS       : 7;
        FIELD rsv_31                    : 1;
    
    
} REG_RGS_PXP_AEQ_E1_OS, *PREG_RGS_PXP_AEQ_E1_OS;

// ----------------- pxp_csr_ana  Grouping Definitions -------------------
// ----------------- pxp_csr_ana Register Definition -------------------
#if 0
typedef volatile 
{
    REG_RG_PXP_CMN_EN               RG_PXP_CMN_EN;    // F000
    REG_RG_PXP_JCPLL_IB_EXT_EN      RG_PXP_JCPLL_IB_EXT_EN; // F004
    REG_RG_PXP_JCPLL_LPF_BR         RG_PXP_JCPLL_LPF_BR; // F008
    REG_RG_PXP_JCPLL_LPF_BWC        RG_PXP_JCPLL_LPF_BWC; // F00C
    REG_RG_PXP_JCPLL_KBAND_KFC      RG_PXP_JCPLL_KBAND_KFC; // F010
    REG_RG_PXP_JCPLL_MMD_PREDIV_MODE RG_PXP_JCPLL_MMD_PREDIV_MODE; // F014
    REG_RG_PXP_JCPLL_MONCK_EN       RG_PXP_JCPLL_MONCK_EN; // F018
    REG_RG_PXP_JCPLL_RST_DLY        RG_PXP_JCPLL_RST_DLY; // F01C
    REG_RG_PXP_JCPLL_SDM_IFM        RG_PXP_JCPLL_SDM_IFM; // F020
    REG_RG_PXP_JCPLL_SDM_HREN       RG_PXP_JCPLL_SDM_HREN; // F024
    REG_RG_PXP_JCPLL_TCL_CMP_EN     RG_PXP_JCPLL_TCL_CMP_EN; // F028
    REG_RG_PXP_JCPLL_VCODIV         RG_PXP_JCPLL_VCODIV; // F02C
    REG_RG_PXP_JCPLL_VCO_TCLVAR     RG_PXP_JCPLL_VCO_TCLVAR; // F030
    REG_RG_PXP_JCPLL_SSC_TRI_EN     RG_PXP_JCPLL_SSC_TRI_EN; // F034
    REG_RG_PXP_JCPLL_SSC_DELTA      RG_PXP_JCPLL_SSC_DELTA; // F038
    REG_RG_PXP_JCPLL_LDO_OUT        RG_PXP_JCPLL_LDO_OUT; // F03C
    REG_RG_PXP_JCPLL_LDO_VCO_VTP_EN RG_PXP_JCPLL_LDO_VCO_VTP_EN; // F040
    REG_RG_PXP_JCPLL_LDO_VTP_EN     RG_PXP_JCPLL_LDO_VTP_EN; // F044
    REG_RG_PXP_JCPLL_SPARE_H        RG_PXP_JCPLL_SPARE_H; // F048
    REG_RG_PXP_JCPLL_FREQ_MEAS_EN   RG_PXP_JCPLL_FREQ_MEAS_EN; // F04C
    REG_RG_PXP_TXPLL_CHP_IBIAS      RG_PXP_TXPLL_CHP_IBIAS; // F050
    REG_RG_PXP_TXPLL_LPF_BP         RG_PXP_TXPLL_LPF_BP; // F054
    REG_RG_PXP_TXPLL_KBAND_CODE     RG_PXP_TXPLL_KBAND_CODE; // F058
    REG_RG_PXP_TXPLL_KBAND_KS       RG_PXP_TXPLL_KBAND_KS; // F05C
    REG_RG_PXP_TXPLL_PHY_CK1_EN     RG_PXP_TXPLL_PHY_CK1_EN; // F060
    REG_RG_PXP_TXPLL_REFIN_INTERNAL RG_PXP_TXPLL_REFIN_INTERNAL; // F064
    REG_RG_PXP_TXPLL_SDM_DI_EN      RG_PXP_TXPLL_SDM_DI_EN; // F068
    REG_RG_PXP_TXPLL_SDM_ORD        RG_PXP_TXPLL_SDM_ORD; // F06C
    REG_RG_PXP_TXPLL_TCL_AMP_GAIN   RG_PXP_TXPLL_TCL_AMP_GAIN; // F070
    REG_RG_PXP_TXPLL_TCL_LPF_EN     RG_PXP_TXPLL_TCL_LPF_EN; // F074
    REG_RG_PXP_TXPLL_VCO_HALFLSB_EN RG_PXP_TXPLL_VCO_HALFLSB_EN; // F078
    REG_RG_PXP_TXPLL_SSC_EN         RG_PXP_TXPLL_SSC_EN; // F07C
    REG_RG_PXP_TXPLL_SSC_DELTA1     RG_PXP_TXPLL_SSC_DELTA1; // F080
    REG_RG_PXP_TXPLL_SSC_PERIOD     RG_PXP_TXPLL_SSC_PERIOD; // F084
    REG_RG_PXP_TXPLL_VTP_EN         RG_PXP_TXPLL_VTP_EN; // F088
    REG_RG_PXP_TXPLL_VCO_VTP_EN     RG_PXP_TXPLL_VCO_VTP_EN; // F08C
    REG_RG_PXP_TXPLL_TCL_VTP_EN     RG_PXP_TXPLL_TCL_VTP_EN; // F090
    REG_RG_PXP_TXPLL_TCL_KBAND_VREF RG_PXP_TXPLL_TCL_KBAND_VREF; // F094
    REG_RG_PCIE_CLKTX0_AMP          RG_PCIE_CLKTX0_AMP; // F098
    REG_RG_PCIE_CLKTX1_AMP          RG_PCIE_CLKTX1_AMP; // F09C
    REG_RG_PXP_PLL_MONCLK_SEL       RG_PXP_PLL_MONCLK_SEL; // F0A0
    REG_RG_PXP_TDC_TXCK_SEL         RG_PXP_TDC_TXCK_SEL; // F0A4
    REG_RG_PXP_TDC_SYNC_CK_SEL      RG_PXP_TDC_SYNC_CK_SEL; // F0A8
    REG_RGS_PXP_JCPLL_KBAND_CODE    RGS_PXP_JCPLL_KBAND_CODE; // F0AC
    REG_RGS_PXP_TXPLL_KBAND_CODE    RGS_PXP_TXPLL_KBAND_CODE; // F0B0
    REG_RG_PXP_TX_SER_LOADSEL       RG_PXP_TX_SER_LOADSEL; // F0B4
    REG_RG_PXP_TX_CKMON_SEL         RG_PXP_TX_CKMON_SEL; // F0B8
    REG_RG_PXP_TX_FIR_CHGPLR_C1     RG_PXP_TX_FIR_CHGPLR_C1; // F0BC
    REG_RG_PXP_TX_TXLBRX_EN         RG_PXP_TX_TXLBRX_EN; // F0C0
    REG_RG_PXP_TX_CKLDO_EN          RG_PXP_TX_CKLDO_EN; // F0C4
    REG_RG_PXP_TX_MULTLANE_EN       RG_PXP_TX_MULTLANE_EN; // F0C8
    REG_RG_PXP_RX_BUSBIT_SEL        RG_PXP_RX_BUSBIT_SEL; // F0CC
    REG_RG_PXP_RX_MPXSEL            RG_PXP_RX_MPXSEL; // F0D0
    REG_RG_PXP_RX_REV_0             RG_PXP_RX_REV_0;  // F0D4
    REG_RG_PXP_RX_PHYCK_DIV         RG_PXP_RX_PHYCK_DIV; // F0D8
    REG_RG_PXP_CDR_PD_PICAL_CKD8_INV RG_PXP_CDR_PD_PICAL_CKD8_INV; // F0DC
    REG_RG_PXP_CDR_LPF_BOT_LIM      RG_PXP_CDR_LPF_BOT_LIM; // F0E0
    REG_RG_PXP_CDR_LPF_KP_GAIN      RG_PXP_CDR_LPF_KP_GAIN; // F0E4
    REG_RG_PXP_CDR_LPF_RATIO        RG_PXP_CDR_LPF_RATIO; // F0E8
    REG_RG_PXP_CDR_LPF_SNAPSHOT     RG_PXP_CDR_LPF_SNAPSHOT; // F0EC
    REG_RG_PXP_CDR_LPF_SETVALUE     RG_PXP_CDR_LPF_SETVALUE; // F0F0
    REG_RG_PXP_CDR_PR_INJ_MODE      RG_PXP_CDR_PR_INJ_MODE; // F0F4
    REG_RG_PXP_CDR_PR_BETA_DAC      RG_PXP_CDR_PR_BETA_DAC; // F0F8
    REG_RG_PXP_CDR_PR_VREG_IBAND_VAL RG_PXP_CDR_PR_VREG_IBAND_VAL; // F0FC
    REG_RG_PXP_CDR_PR_CKREF_DIV     RG_PXP_CDR_PR_CKREF_DIV; // F100
    REG_RG_PXP_CDR_PR_MONCK_EN      RG_PXP_CDR_PR_MONCK_EN; // F104
    REG_RG_PXP_CDR_PR_TDC_REF_SEL   RG_PXP_CDR_PR_TDC_REF_SEL; // F108
    REG_RG_PXP_CDR_PR_MONPR_EN      RG_PXP_CDR_PR_MONPR_EN; // F10C
    REG_RG_PXP_RX_DAC_RANGE         RG_PXP_RX_DAC_RANGE; // F110
    REG_RG_PXP_RX_SIGDET_NOVTH      RG_PXP_RX_SIGDET_NOVTH; // F114
    REG_RG_PXP_RX_FE_EQ_HZEN        RG_PXP_RX_FE_EQ_HZEN; // F118
    REG_RG_PXP_RX_FE_VCM_GEN_PWDB   RG_PXP_RX_FE_VCM_GEN_PWDB; // F11C
    REG_RG_PXP_RX_OSCAL_WATCH_WNDW  RG_PXP_RX_OSCAL_WATCH_WNDW; // F120
    REG_RG_PXP_RX_OSCAL_OPTION      RG_PXP_RX_OSCAL_OPTION; // F124
    REG_RG_PXP_RX_OSCAL_CTLE2IOS    RG_PXP_RX_OSCAL_CTLE2IOS; // F128
    REG_RG_PXP_RX_OSCAL_VGA2IOS     RG_PXP_RX_OSCAL_VGA2IOS; // F12C
    REG_RG_PXP_AEQ_WATCH_WNDW       RG_PXP_AEQ_WATCH_WNDW; // F130
    REG_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY; // F134
    REG_RG_PXP_AEQ_OPTION           RG_PXP_AEQ_OPTION; // F138
    REG_RG_PXP_AEQ_CFORCE           RG_PXP_AEQ_CFORCE; // F13C
    REG_RG_PXP_AEQ_CTLE_MAX         RG_PXP_AEQ_CTLE_MAX; // F140
    REG_RG_PXP_RX_FE_PEAKING_CTRL_MSB RG_PXP_RX_FE_PEAKING_CTRL_MSB; // F144
    REG_RG_PXP_RX_DAC_D1_BYPASS_AEQ RG_PXP_RX_DAC_D1_BYPASS_AEQ; // F148
    REG_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ RG_PXP_RX_DAC_ERR0_BYPASS_AEQ; // F14C
    REG_RG_PXP_AEQ_CM1_WNDW         RG_PXP_AEQ_CM1_WNDW; // F150
    REG_RG_PXP_AEQ_DFETP2_WNDW      RG_PXP_AEQ_DFETP2_WNDW; // F154
    REG_RG_PXP_AEQ_DFETP6_WNDW      RG_PXP_AEQ_DFETP6_WNDW; // F158
    REG_RGS_PXP_RX_OSCAL_FE_VOS     RGS_PXP_RX_OSCAL_FE_VOS; // F15C
    REG_RGS_PXP_RX_OSCAL_CTLE2IOS   RGS_PXP_RX_OSCAL_CTLE2IOS; // F160
    REG_RGS_PXP_RX_OSCAL_VGA2IOS    RGS_PXP_RX_OSCAL_VGA2IOS; // F164
    REG_RGS_PXP_AEQ_CTLE            RGS_PXP_AEQ_CTLE; // F168
    REG_RGS_PXP_AEQ_SAOSC_EN        RGS_PXP_AEQ_SAOSC_EN; // F16C
    REG_RGS_PXP_AEQ_E1_OS           RGS_PXP_AEQ_E1_OS; // F170
}pxp_csr_ana_REGS, *Ppxp_csr_ana_REGS;

// ---------- pxp_csr_ana Enum Definitions      ----------
// ---------- pxp_csr_ana C Macro Definitions   ----------
extern Ppxp_csr_ana_REGS g_pxp_csr_ana_BASE;

#define pxp_csr_ana_BASE                                       (g_pxp_csr_ana_BASE)
#endif

#define _RG_PXP_CMN_EN		0xF000
#define _RG_PXP_JCPLL_IB_EXT_EN		0xF004
#define _RG_PXP_JCPLL_LPF_BR		0xF008
#define _RG_PXP_JCPLL_LPF_BWC		0xF00C
#define _RG_PXP_JCPLL_KBAND_KFC		0xF010
#define _RG_PXP_JCPLL_MMD_PREDIV_MODE		0xF014
#define _RG_PXP_JCPLL_MONCK_EN		0xF018
#define _RG_PXP_JCPLL_RST_DLY		0xF01C
#define _RG_PXP_JCPLL_SDM_IFM		0xF020
#define _RG_PXP_JCPLL_SDM_HREN		0xF024
#define _RG_PXP_JCPLL_TCL_CMP_EN		0xF028
#define _RG_PXP_JCPLL_VCODIV		0xF02C
#define _RG_PXP_JCPLL_VCO_TCLVAR		0xF030
#define _RG_PXP_JCPLL_SSC_TRI_EN		0xF034
#define _RG_PXP_JCPLL_SSC_DELTA		0xF038
#define _RG_PXP_JCPLL_LDO_OUT		0xF03C
#define _RG_PXP_JCPLL_LDO_VCO_VTP_EN		0xF040
#define _RG_PXP_JCPLL_LDO_VTP_EN		0xF044
#define _RG_PXP_JCPLL_SPARE_H		0xF048
#define _RG_PXP_JCPLL_FREQ_MEAS_EN		0xF04C
#define _RG_PXP_TXPLL_CHP_IBIAS		0xF050
#define _RG_PXP_TXPLL_LPF_BP		0xF054
#define _RG_PXP_TXPLL_KBAND_CODE		0xF058
#define _RG_PXP_TXPLL_KBAND_KS		0xF05C
#define _RG_PXP_TXPLL_PHY_CK1_EN		0xF060
#define _RG_PXP_TXPLL_REFIN_INTERNAL		0xF064
#define _RG_PXP_TXPLL_SDM_DI_EN		0xF068
#define _RG_PXP_TXPLL_SDM_ORD		0xF06C
#define _RG_PXP_TXPLL_TCL_AMP_GAIN		0xF070
#define _RG_PXP_TXPLL_TCL_LPF_EN		0xF074
#define _RG_PXP_TXPLL_VCO_HALFLSB_EN		0xF078
#define _RG_PXP_TXPLL_SSC_EN		0xF07C
#define _RG_PXP_TXPLL_SSC_DELTA1		0xF080
#define _RG_PXP_TXPLL_SSC_PERIOD		0xF084
#define _RG_PXP_TXPLL_VTP_EN		0xF088
#define _RG_PXP_TXPLL_VCO_VTP_EN		0xF08C
#define _RG_PXP_TXPLL_TCL_VTP_EN		0xF090
#define _RG_PXP_TXPLL_TCL_KBAND_VREF		0xF094
#define _RG_PCIE_CLKTX0_AMP		0xF098
#define _RG_PCIE_CLKTX1_AMP		0xF09C
#define _RG_PXP_PLL_MONCLK_SEL		0xF0A0
#define _RG_PXP_TDC_TXCK_SEL		0xF0A4
#define _RG_PXP_TDC_SYNC_CK_SEL		0xF0A8
#define _RGS_PXP_JCPLL_KBAND_CODE		0xF0AC
#define _RGS_PXP_TXPLL_KBAND_CODE		0xF0B0
#define _RG_PXP_TX_SER_LOADSEL		0xF0B4
#define _RG_PXP_TX_CKMON_SEL		0xF0B8
#define _RG_PXP_TX_FIR_CHGPLR_C1		0xF0BC
#define _RG_PXP_TX_TXLBRX_EN		0xF0C0
#define _RG_PXP_TX_CKLDO_EN		0xF0C4
#define _RG_PXP_TX_MULTLANE_EN		0xF0C8
#define _RG_PXP_RX_BUSBIT_SEL		0xF0CC
#define _RG_PXP_RX_MPXSEL		0xF0D0
#define _RG_PXP_RX_REV_0		0xF0D4
#define _RG_PXP_RX_PHYCK_DIV		0xF0D8
#define _RG_PXP_CDR_PD_PICAL_CKD8_INV		0xF0DC
#define _RG_PXP_CDR_LPF_BOT_LIM		0xF0E0
#define _RG_PXP_CDR_LPF_KP_GAIN		0xF0E4
#define _RG_PXP_CDR_LPF_RATIO		0xF0E8
#define _RG_PXP_CDR_LPF_SNAPSHOT		0xF0EC
#define _RG_PXP_CDR_LPF_SETVALUE		0xF0F0
#define _RG_PXP_CDR_PR_INJ_MODE		0xF0F4
#define _RG_PXP_CDR_PR_BETA_DAC		0xF0F8
#define _RG_PXP_CDR_PR_VREG_IBAND_VAL		0xF0FC
#define _RG_PXP_CDR_PR_CKREF_DIV		0xF100
#define _RG_PXP_CDR_PR_MONCK_EN		0xF104
#define _RG_PXP_CDR_PR_TDC_REF_SEL		0xF108
#define _RG_PXP_CDR_PR_MONPR_EN		0xF10C
#define _RG_PXP_RX_DAC_RANGE		0xF110
#define _RG_PXP_RX_SIGDET_NOVTH		0xF114
#define _RG_PXP_RX_FE_EQ_HZEN		0xF118
#define _RG_PXP_RX_FE_VCM_GEN_PWDB		0xF11C
#define _RG_PXP_RX_OSCAL_WATCH_WNDW		0xF120
#define _RG_PXP_RX_OSCAL_OPTION		0xF124
#define _RG_PXP_RX_OSCAL_CTLE2IOS		0xF128
#define _RG_PXP_RX_OSCAL_VGA2IOS		0xF12C
#define _RG_PXP_AEQ_WATCH_WNDW		0xF130
#define _RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY		0xF134
#define _RG_PXP_AEQ_OPTION		0xF138
#define _RG_PXP_AEQ_CFORCE		0xF13C
#define _RG_PXP_AEQ_CTLE_MAX		0xF140
#define _RG_PXP_RX_FE_PEAKING_CTRL_MSB		0xF144
#define _RG_PXP_RX_DAC_D1_BYPASS_AEQ		0xF148
#define _RG_PXP_RX_DAC_ERR0_BYPASS_AEQ		0xF14C
#define _RG_PXP_AEQ_CM1_WNDW		0xF150
#define _RG_PXP_AEQ_DFETP2_WNDW		0xF154
#define _RG_PXP_AEQ_DFETP6_WNDW		0xF158
#define _RGS_PXP_RX_OSCAL_FE_VOS		0xF15C
#define _RGS_PXP_RX_OSCAL_CTLE2IOS		0xF160
#define _RGS_PXP_RX_OSCAL_VGA2IOS		0xF164
#define _RGS_PXP_AEQ_CTLE		0xF168
#define _RGS_PXP_AEQ_SAOSC_EN		0xF16C
#define _RGS_PXP_AEQ_E1_OS		0xF170

#endif


#define RG_PXP_CMN_EN_FLD_RG_PXP_CMN_TRIM                      REG_FLD(5, 24)
#define RG_PXP_CMN_EN_FLD_RG_PXP_CMN_VREFSEL                   REG_FLD(3, 16)
#define RG_PXP_CMN_EN_FLD_RG_PXP_CMN_MPXSELTOP_DC              REG_FLD(6, 8)
#define RG_PXP_CMN_EN_FLD_RG_PXP_CMN_EN                        REG_FLD(1, 0)

#define RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IOFST      REG_FLD(6, 24)
#define RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IBIAS      REG_FLD(6, 16)
#define RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_LPF_SHCK_EN    REG_FLD(1, 8)
#define RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_IB_EXT_EN      REG_FLD(1, 0)

#define RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BWR           REG_FLD(5, 24)
#define RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BP            REG_FLD(5, 16)
#define RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BC            REG_FLD(5, 8)
#define RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BR            REG_FLD(5, 0)

#define RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_DIV        REG_FLD(3, 24)
#define RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_CODE       REG_FLD(8, 16)
#define RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_OPTION     REG_FLD(1, 8)
#define RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_LPF_BWC          REG_FLD(5, 0)

#define RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_POSTDIV_EN     REG_FLD(1, 24)
#define RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KS       REG_FLD(2, 16)
#define RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KF       REG_FLD(2, 8)
#define RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KFC      REG_FLD(2, 0)

#define RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D5 REG_FLD(1, 24)
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D2 REG_FLD(1, 16)
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_DL_CODE REG_FLD(3, 8)
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_PREDIV_MODE REG_FLD(2, 0)

#define RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_DIV       REG_FLD(2, 24)
#define RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_INTERNAL  REG_FLD(1, 16)
#define RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_SEL       REG_FLD(2, 8)
#define RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_EN        REG_FLD(1, 0)

#define RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_LS        REG_FLD(2, 24)
#define RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_EN        REG_FLD(1, 16)
#define RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_PLL_RSTB         REG_FLD(1, 8)
#define RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_RST_DLY          REG_FLD(3, 0)

#define RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_OUT          REG_FLD(1, 24)
#define RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_ORD          REG_FLD(2, 16)
#define RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_MODE         REG_FLD(2, 8)
#define RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_IFM          REG_FLD(1, 0)

#define RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_VREF    REG_FLD(5, 24)
#define RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_GAIN    REG_FLD(3, 16)
#define RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_EN      REG_FLD(1, 8)
#define RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_SDM_HREN        REG_FLD(1, 0)

#define RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_BW    REG_FLD(3, 24)
#define RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_EN    REG_FLD(1, 16)
#define RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_VTH   REG_FLD(3, 8)
#define RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_EN    REG_FLD(1, 0)

#define RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_SCAPWR        REG_FLD(3, 24)
#define RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_HALFLSB_EN    REG_FLD(1, 16)
#define RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_CFIX          REG_FLD(2, 8)
#define RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCODIV            REG_FLD(2, 0)

#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_PHASE_INI REG_FLD(1, 17)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_EN        REG_FLD(1, 16)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL REG_FLD(1, 15)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL REG_FLD(1, 14)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN REG_FLD(1, 13)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN REG_FLD(1, 12)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN REG_FLD(1, 11)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L REG_FLD(3, 8)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H REG_FLD(3, 3)
#define RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR    REG_FLD(3, 0)

#define RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_DELTA1    REG_FLD(16, 8)
#define RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_TRI_EN    REG_FLD(1, 0)

#define RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_PERIOD     REG_FLD(16, 16)
#define RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_DELTA      REG_FLD(16, 0)

#define RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP              REG_FLD(3, 24)
#define RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP_EN           REG_FLD(1, 16)
#define RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_VCO_OUT      REG_FLD(2, 8)
#define RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_OUT          REG_FLD(2, 0)

#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP   REG_FLD(3, 24)
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP_EN REG_FLD(1, 16)
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP REG_FLD(2, 8)
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP_EN REG_FLD(1, 0)

#define RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP       REG_FLD(2, 24)
#define RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP_EN    REG_FLD(1, 16)
#define RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP       REG_FLD(2, 8)
#define RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP_EN    REG_FLD(1, 0)

#define RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_VREF_SEL         REG_FLD(1, 24)
#define RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_TCL_KBAND_VREF   REG_FLD(5, 16)
#define RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_L          REG_FLD(8, 8)
#define RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_H          REG_FLD(8, 0)

#define RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_LPF_SHCK_EN REG_FLD(1, 25)
#define RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_IB_EXT_EN   REG_FLD(1, 24)
#define RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_750M_SYS_CK_EN    REG_FLD(1, 16)
#define RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN REG_FLD(1, 8)
#define RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_FREQ_MEAS_EN REG_FLD(1, 0)

#define RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BC         REG_FLD(5, 24)
#define RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BR         REG_FLD(5, 16)
#define RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IOFST      REG_FLD(6, 8)
#define RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IBIAS      REG_FLD(6, 0)

#define RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_KBAND_OPTION      REG_FLD(1, 24)
#define RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWC           REG_FLD(5, 16)
#define RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWR           REG_FLD(5, 8)
#define RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BP            REG_FLD(5, 0)

#define RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KF      REG_FLD(2, 24)
#define RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KFC     REG_FLD(2, 16)
#define RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_DIV     REG_FLD(3, 8)
#define RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_CODE    REG_FLD(8, 0)

#define RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_DL_CODE     REG_FLD(3, 24)
#define RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_PREDIV_MODE REG_FLD(2, 16)
#define RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_POSTDIV_EN      REG_FLD(1, 8)
#define RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_KBAND_KS        REG_FLD(2, 0)

#define RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_SEL     REG_FLD(2, 24)
#define RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_EN      REG_FLD(1, 16)
#define RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK2_EN    REG_FLD(1, 8)
#define RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK1_EN    REG_FLD(1, 0)

#define RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_PLL_RSTB  REG_FLD(1, 24)
#define RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_RST_DLY   REG_FLD(3, 16)
#define RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_DIV REG_FLD(2, 8)
#define RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_INTERNAL REG_FLD(1, 0)

#define RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_MODE       REG_FLD(2, 24)
#define RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_IFM        REG_FLD(1, 16)
#define RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_LS      REG_FLD(2, 8)
#define RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_EN      REG_FLD(1, 0)

#define RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_TCL_AMP_EN       REG_FLD(1, 24)
#define RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_HREN         REG_FLD(1, 16)
#define RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_OUT          REG_FLD(1, 8)
#define RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_ORD          REG_FLD(2, 0)

#define RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_VTH REG_FLD(3, 24)
#define RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_EN  REG_FLD(1, 16)
#define RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_VREF REG_FLD(5, 8)
#define RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_GAIN REG_FLD(3, 0)

#define RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCO_CFIX      REG_FLD(2, 24)
#define RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCODIV        REG_FLD(2, 16)
#define RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_BW    REG_FLD(3, 8)
#define RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_EN    REG_FLD(1, 0)

#define RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L REG_FLD(3, 27)
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H REG_FLD(3, 24)
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_TCLVAR REG_FLD(3, 16)
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_SCAPWR REG_FLD(3, 8)
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_HALFLSB_EN REG_FLD(1, 0)

#define RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_TRI_EN        REG_FLD(1, 16)
#define RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_PHASE_INI     REG_FLD(1, 8)
#define RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_EN            REG_FLD(1, 0)

#define RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA     REG_FLD(16, 16)
#define RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA1    REG_FLD(16, 0)

#define RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_VCO_OUT   REG_FLD(2, 24)
#define RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_OUT       REG_FLD(2, 16)
#define RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_SSC_PERIOD    REG_FLD(16, 0)

#define RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP       REG_FLD(2, 24)
#define RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP_EN    REG_FLD(1, 16)
#define RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP               REG_FLD(3, 8)
#define RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP_EN            REG_FLD(1, 0)

#define RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP       REG_FLD(2, 24)
#define RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP_EN    REG_FLD(1, 16)
#define RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP       REG_FLD(3, 8)
#define RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP_EN    REG_FLD(1, 0)

#define RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_L       REG_FLD(8, 24)
#define RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_H       REG_FLD(8, 16)
#define RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP       REG_FLD(2, 8)
#define RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP_EN    REG_FLD(1, 0)

#define RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_POSTDIV_D256_EN REG_FLD(1, 25)
#define RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN REG_FLD(1, 24)
#define RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_FREQ_MEAS_EN REG_FLD(1, 16)
#define RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VREF_SEL  REG_FLD(1, 8)
#define RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_TCL_KBAND_VREF REG_FLD(5, 0)

#define RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_IMP_SEL      REG_FLD(5, 27)
#define RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_HZ           REG_FLD(1, 26)
#define RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_FORCE_OUT1       REG_FLD(2, 24)
#define RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_SR               REG_FLD(2, 16)
#define RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_OFFSET           REG_FLD(2, 8)
#define RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_AMP              REG_FLD(3, 0)

#define RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_IMP_SEL      REG_FLD(5, 27)
#define RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_HZ           REG_FLD(1, 26)
#define RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_FORCE_OUT1       REG_FLD(2, 24)
#define RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_SR               REG_FLD(2, 16)
#define RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_OFFSET           REG_FLD(2, 8)
#define RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_AMP              REG_FLD(3, 0)

#define RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_TDC_AUTOEN            REG_FLD(1, 24)
#define RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE1      REG_FLD(8, 16)
#define RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE0      REG_FLD(8, 8)
#define RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP_EN            REG_FLD(1, 4)
#define RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP               REG_FLD(2, 2)
#define RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_MONCLK_SEL        REG_FLD(2, 0)

#define RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_MON_CK_EN           REG_FLD(1, 24)
#define RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_FT_CK_EN            REG_FLD(1, 16)
#define RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_RXCK_SEL            REG_FLD(1, 8)
#define RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_TXCK_SEL            REG_FLD(2, 0)

#define RG_PXP_TDC_SYNC_CK_SEL_FLD_RG_PXP_TDC_SYNC_CK_SEL      REG_FLD(1, 0)

#define RGS_PXP_JCPLL_KBAND_CODE_FLD_RGS_PXP_JCPLL_KBAND_CODE  REG_FLD(8, 0)

#define RGS_PXP_TXPLL_KBAND_CODE_FLD_RGS_PXP_TXPLL_KBAND_CODE  REG_FLD(8, 0)

#define RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_CKMON_EN           REG_FLD(1, 24)
#define RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SR_REDUCTION       REG_FLD(3, 16)
#define RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_DIGFF_CK_INV       REG_FLD(1, 8)
#define RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SER_LOADSEL        REG_FLD(2, 0)

#define RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_FIR_CHGPLR_CN1       REG_FLD(1, 24)
#define RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA               REG_FLD(1, 16)
#define RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA_EN            REG_FLD(1, 8)
#define RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_CKMON_SEL            REG_FLD(2, 0)

#define RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_SEL         REG_FLD(3, 24)
#define RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_EN          REG_FLD(1, 16)
#define RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C2    REG_FLD(1, 8)
#define RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C1    REG_FLD(1, 0)

#define RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_L       REG_FLD(3, 24)
#define RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_H       REG_FLD(3, 16)
#define RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_INT_EN               REG_FLD(1, 8)
#define RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TXLBRX_EN            REG_FLD(1, 0)

#define RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_DMEDGEGEN_EN          REG_FLD(1, 24)
#define RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_RXDET_METHOD          REG_FLD(1, 16)
#define RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_LVR             REG_FLD(3, 8)
#define RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_EN              REG_FLD(1, 0)

#define RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_RESERVED           REG_FLD(8, 24)
#define RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_AUTOZERO_EN        REG_FLD(1, 18)
#define RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TDC_CK_SEL         REG_FLD(2, 16)
#define RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TERMCAL_SELPN      REG_FLD(1, 8)
#define RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_MULTLANE_EN        REG_FLD(1, 0)

#define RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL_FORCE    REG_FLD(1, 24)
#define RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL          REG_FLD(1, 16)
#define RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL_FORCE    REG_FLD(1, 8)
#define RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL          REG_FLD(1, 0)

#define RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_SYNC_INV                REG_FLD(5, 16)
#define RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_DBGSEL                  REG_FLD(8, 8)
#define RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_MPXSEL                  REG_FLD(8, 0)

#define RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_1                    REG_FLD(16, 16)
#define RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_0                    REG_FLD(16, 0)

#define RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_TDC_CK_SEL           REG_FLD(1, 24)
#define RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_RSTB           REG_FLD(1, 16)
#define RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_SEL            REG_FLD(2, 8)
#define RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_DIV            REG_FLD(8, 0)

#define RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_EDGE_DIS REG_FLD(1, 8)
#define RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_PICAL_CKD8_INV REG_FLD(1, 0)

#define RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_KI_GAIN      REG_FLD(3, 24)
#define RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_BOT_LIM      REG_FLD(19, 0)

#define RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_LIM      REG_FLD(5, 24)
#define RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_EN       REG_FLD(1, 16)
#define RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_LIN_LIM      REG_FLD(5, 8)
#define RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_KP_GAIN      REG_FLD(3, 0)

#define RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_TOP_LIM        REG_FLD(19, 8)
#define RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_RATIO          REG_FLD(2, 0)

#define RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SET         REG_FLD(1, 8)
#define RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SNAPSHOT    REG_FLD(1, 0)

#define RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_PISTEP_CTRL REG_FLD(8, 24)
#define RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_SETVALUE    REG_FLD(19, 0)

#define RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_OFF REG_FLD(1, 24)
#define RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_ON  REG_FLD(1, 16)
#define RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INPUT_MODE    REG_FLD(2, 8)
#define RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_MODE      REG_FLD(2, 0)

#define RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_KBAND_DIV     REG_FLD(3, 24)
#define RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_SEL      REG_FLD(4, 16)
#define RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_VCOADC_OS     REG_FLD(4, 8)
#define RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_DAC      REG_FLD(7, 0)

#define RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_FBKSEL  REG_FLD(2, 24)
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_DAC_BAND REG_FLD(5, 16)
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_CKBUF_VAL REG_FLD(3, 8)
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_IBAND_VAL REG_FLD(3, 0)

#define RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_MONMUXVC     REG_FLD(8, 24)
#define RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RSTB_BYPASS  REG_FLD(1, 16)
#define RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RST_DLY      REG_FLD(2, 8)
#define RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_CKREF_DIV    REG_FLD(2, 0)

#define RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE1      REG_FLD(4, 24)
#define RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE0      REG_FLD(4, 16)
#define RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_MUX     REG_FLD(4, 8)
#define RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_EN      REG_FLD(1, 0)

#define RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_CKREF_DIV1 REG_FLD(2, 24)
#define RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_LDO_FORCE_ON REG_FLD(1, 16)
#define RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_COR_HBW_EN REG_FLD(1, 8)
#define RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_TDC_REF_SEL REG_FLD(2, 0)

#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_RX_DAC_MON           REG_FLD(5, 24)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_CAP_EN        REG_FLD(1, 19)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_BUF_IN_SR     REG_FLD(3, 16)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PI_LDO_EN        REG_FLD(1, 11)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_VREG_PI_VAL   REG_FLD(3, 8)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_XFICK_EN      REG_FLD(1, 2)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPI_EN      REG_FLD(1, 1)
#define RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPR_EN      REG_FLD(1, 0)

#define RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_LPF_CTRL      REG_FLD(2, 24)
#define RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_DCTEST_EN     REG_FLD(1, 16)
#define RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE_EYE        REG_FLD(2, 8)
#define RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE            REG_FLD(2, 0)

#define RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_FE_50OHMS_SEL     REG_FLD(2, 24)
#define RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_VTH_SEL    REG_FLD(5, 16)
#define RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_PEAK       REG_FLD(2, 8)
#define RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_NOVTH      REG_FLD(1, 0)

#define RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ3_EN        REG_FLD(1, 24)
#define RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ2_EN        REG_FLD(1, 16)
#define RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ1_EN        REG_FLD(1, 8)
#define RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_EQ_HZEN          REG_FLD(1, 0)

#define RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_WAIT_WNDW REG_FLD(3, 24)
#define RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_CK_INV   REG_FLD(1, 16)
#define RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_SEL     REG_FLD(3, 8)
#define RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_GEN_PWDB REG_FLD(1, 0)

#define RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_COMPOS  REG_FLD(6, 24)
#define RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_FORCE   REG_FLD(10, 8)
#define RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_WATCH_WNDW REG_FLD(4, 0)

#define RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_CTLE1IOS    REG_FLD(6, 24)
#define RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_LVSHOS      REG_FLD(6, 16)
#define RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_OPTION      REG_FLD(16, 0)

#define RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1VOS   REG_FLD(6, 24)
#define RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1IOS   REG_FLD(6, 16)
#define RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2VOS  REG_FLD(6, 8)
#define RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2IOS  REG_FLD(6, 0)

#define RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_WAIT_WNDW       REG_FLD(4, 24)
#define RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_CK_INV          REG_FLD(1, 16)
#define RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2VOS    REG_FLD(6, 8)
#define RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2IOS    REG_FLD(6, 0)

#define RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK REG_FLD(1, 24)
#define RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY REG_FLD(1, 16)
#define RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FR2HR_MODE        REG_FLD(1, 8)
#define RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_WATCH_WNDW        REG_FLD(4, 0)

#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_STATE     REG_FLD(8, 24)
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY REG_FLD(1, 16)
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE REG_FLD(1, 8)
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY REG_FLD(1, 0)

#define RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION3               REG_FLD(8, 24)
#define RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION2               REG_FLD(8, 16)
#define RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION                REG_FLD(16, 0)

#define RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CTLE_ERR_TYPE         REG_FLD(2, 24)
#define RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_OFORCE                REG_FLD(12, 8)
#define RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CFORCE                REG_FLD(4, 0)

#define RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_WNDW           REG_FLD(4, 24)
#define RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_TH             REG_FLD(3, 16)
#define RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_STTL           REG_FLD(8, 8)
#define RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_MAX            REG_FLD(5, 0)

#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_DAC_D0_BYPASS_AEQ REG_FLD(1, 24)
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_AEQ_SAOS_TH   REG_FLD(3, 16)
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_LSB REG_FLD(1, 8)
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_MSB REG_FLD(1, 0)

#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_EYE_BYPASS_AEQ REG_FLD(1, 24)
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E1_BYPASS_AEQ REG_FLD(1, 16)
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E0_BYPASS_AEQ REG_FLD(1, 8)
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_D1_BYPASS_AEQ REG_FLD(1, 0)

#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1   REG_FLD(7, 24)
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0   REG_FLD(7, 16)
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ REG_FLD(1, 8)
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ REG_FLD(1, 0)

#define RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_DFETP1_WNDW         REG_FLD(4, 24)
#define RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_VGA_WNDW            REG_FLD(4, 16)
#define RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CP1_WNDW            REG_FLD(4, 8)
#define RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CM1_WNDW            REG_FLD(4, 0)

#define RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP5_WNDW      REG_FLD(4, 24)
#define RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP4_WNDW      REG_FLD(4, 16)
#define RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP3_WNDW      REG_FLD(4, 8)
#define RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP2_WNDW      REG_FLD(4, 0)

#define RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_TRN_DFENUM       REG_FLD(3, 16)
#define RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP7_WNDW      REG_FLD(4, 8)
#define RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP6_WNDW      REG_FLD(4, 0)

#define RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_CTLE1IOS  REG_FLD(6, 24)
#define RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_LVSHOS    REG_FLD(6, 16)
#define RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_COMPOS    REG_FLD(6, 8)
#define RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_FE_VOS    REG_FLD(6, 0)

#define RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1VOS REG_FLD(6, 24)
#define RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1IOS REG_FLD(6, 16)
#define RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2VOS REG_FLD(6, 8)
#define RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2IOS REG_FLD(6, 0)

#define RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2VOS  REG_FLD(6, 8)
#define RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2IOS  REG_FLD(6, 0)

#define RGS_PXP_AEQ_CTLE_FLD_RGS_PXP_AEQ_CTLE                  REG_FLD(5, 0)

#define RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_E0_OS             REG_FLD(7, 24)
#define RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D1_OS             REG_FLD(7, 16)
#define RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D0_OS             REG_FLD(7, 8)
#define RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_SAOSC_EN          REG_FLD(1, 0)

#define RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR1_OS              REG_FLD(7, 24)
#define RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR0_OS              REG_FLD(7, 16)
#define RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_EYE_OS               REG_FLD(7, 8)
#define RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_E1_OS                REG_FLD(7, 0)

#define RG_PXP_CMN_EN_GET_RG_PXP_CMN_TRIM(reg32)               REG_FLD_GET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_TRIM, (reg32))
#define RG_PXP_CMN_EN_GET_RG_PXP_CMN_VREFSEL(reg32)            REG_FLD_GET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_VREFSEL, (reg32))
#define RG_PXP_CMN_EN_GET_RG_PXP_CMN_MPXSELTOP_DC(reg32)       REG_FLD_GET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_MPXSELTOP_DC, (reg32))
#define RG_PXP_CMN_EN_GET_RG_PXP_CMN_EN(reg32)                 REG_FLD_GET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_EN, (reg32))

#define RG_PXP_JCPLL_IB_EXT_EN_GET_RG_PXP_JCPLL_CHP_IOFST(reg32) REG_FLD_GET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IOFST, (reg32))
#define RG_PXP_JCPLL_IB_EXT_EN_GET_RG_PXP_JCPLL_CHP_IBIAS(reg32) REG_FLD_GET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IBIAS, (reg32))
#define RG_PXP_JCPLL_IB_EXT_EN_GET_RG_PXP_JCPLL_LPF_SHCK_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_LPF_SHCK_EN, (reg32))
#define RG_PXP_JCPLL_IB_EXT_EN_GET_RG_PXP_JCPLL_IB_EXT_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_IB_EXT_EN, (reg32))

#define RG_PXP_JCPLL_LPF_BR_GET_RG_PXP_JCPLL_LPF_BWR(reg32)    REG_FLD_GET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BWR, (reg32))
#define RG_PXP_JCPLL_LPF_BR_GET_RG_PXP_JCPLL_LPF_BP(reg32)     REG_FLD_GET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BP, (reg32))
#define RG_PXP_JCPLL_LPF_BR_GET_RG_PXP_JCPLL_LPF_BC(reg32)     REG_FLD_GET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BC, (reg32))
#define RG_PXP_JCPLL_LPF_BR_GET_RG_PXP_JCPLL_LPF_BR(reg32)     REG_FLD_GET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BR, (reg32))

#define RG_PXP_JCPLL_LPF_BWC_GET_RG_PXP_JCPLL_KBAND_DIV(reg32) REG_FLD_GET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_DIV, (reg32))
#define RG_PXP_JCPLL_LPF_BWC_GET_RG_PXP_JCPLL_KBAND_CODE(reg32) REG_FLD_GET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_CODE, (reg32))
#define RG_PXP_JCPLL_LPF_BWC_GET_RG_PXP_JCPLL_KBAND_OPTION(reg32) REG_FLD_GET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_OPTION, (reg32))
#define RG_PXP_JCPLL_LPF_BWC_GET_RG_PXP_JCPLL_LPF_BWC(reg32)   REG_FLD_GET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_LPF_BWC, (reg32))

#define RG_PXP_JCPLL_KBAND_KFC_GET_RG_PXP_JCPLL_POSTDIV_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_POSTDIV_EN, (reg32))
#define RG_PXP_JCPLL_KBAND_KFC_GET_RG_PXP_JCPLL_KBAND_KS(reg32) REG_FLD_GET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KS, (reg32))
#define RG_PXP_JCPLL_KBAND_KFC_GET_RG_PXP_JCPLL_KBAND_KF(reg32) REG_FLD_GET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KF, (reg32))
#define RG_PXP_JCPLL_KBAND_KFC_GET_RG_PXP_JCPLL_KBAND_KFC(reg32) REG_FLD_GET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KFC, (reg32))

#define RG_PXP_JCPLL_MMD_PREDIV_MODE_GET_RG_PXP_JCPLL_POSTDIV_D5(reg32) REG_FLD_GET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D5, (reg32))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_GET_RG_PXP_JCPLL_POSTDIV_D2(reg32) REG_FLD_GET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D2, (reg32))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_GET_RG_PXP_JCPLL_MMD_DL_CODE(reg32) REG_FLD_GET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_DL_CODE, (reg32))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_GET_RG_PXP_JCPLL_MMD_PREDIV_MODE(reg32) REG_FLD_GET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_PREDIV_MODE, (reg32))

#define RG_PXP_JCPLL_MONCK_EN_GET_RG_PXP_JCPLL_REFIN_DIV(reg32) REG_FLD_GET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_DIV, (reg32))
#define RG_PXP_JCPLL_MONCK_EN_GET_RG_PXP_JCPLL_REFIN_INTERNAL(reg32) REG_FLD_GET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_INTERNAL, (reg32))
#define RG_PXP_JCPLL_MONCK_EN_GET_RG_PXP_JCPLL_MONCK_SEL(reg32) REG_FLD_GET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_SEL, (reg32))
#define RG_PXP_JCPLL_MONCK_EN_GET_RG_PXP_JCPLL_MONCK_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_EN, (reg32))

#define RG_PXP_JCPLL_RST_DLY_GET_RG_PXP_JCPLL_SDM_DI_LS(reg32) REG_FLD_GET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_LS, (reg32))
#define RG_PXP_JCPLL_RST_DLY_GET_RG_PXP_JCPLL_SDM_DI_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_EN, (reg32))
#define RG_PXP_JCPLL_RST_DLY_GET_RG_PXP_JCPLL_PLL_RSTB(reg32)  REG_FLD_GET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_PLL_RSTB, (reg32))
#define RG_PXP_JCPLL_RST_DLY_GET_RG_PXP_JCPLL_RST_DLY(reg32)   REG_FLD_GET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_RST_DLY, (reg32))

#define RG_PXP_JCPLL_SDM_IFM_GET_RG_PXP_JCPLL_SDM_OUT(reg32)   REG_FLD_GET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_OUT, (reg32))
#define RG_PXP_JCPLL_SDM_IFM_GET_RG_PXP_JCPLL_SDM_ORD(reg32)   REG_FLD_GET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_ORD, (reg32))
#define RG_PXP_JCPLL_SDM_IFM_GET_RG_PXP_JCPLL_SDM_MODE(reg32)  REG_FLD_GET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_MODE, (reg32))
#define RG_PXP_JCPLL_SDM_IFM_GET_RG_PXP_JCPLL_SDM_IFM(reg32)   REG_FLD_GET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_IFM, (reg32))

#define RG_PXP_JCPLL_SDM_HREN_GET_RG_PXP_JCPLL_TCL_AMP_VREF(reg32) REG_FLD_GET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_VREF, (reg32))
#define RG_PXP_JCPLL_SDM_HREN_GET_RG_PXP_JCPLL_TCL_AMP_GAIN(reg32) REG_FLD_GET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_GAIN, (reg32))
#define RG_PXP_JCPLL_SDM_HREN_GET_RG_PXP_JCPLL_TCL_AMP_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_EN, (reg32))
#define RG_PXP_JCPLL_SDM_HREN_GET_RG_PXP_JCPLL_SDM_HREN(reg32) REG_FLD_GET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_SDM_HREN, (reg32))

#define RG_PXP_JCPLL_TCL_CMP_EN_GET_RG_PXP_JCPLL_TCL_LPF_BW(reg32) REG_FLD_GET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_BW, (reg32))
#define RG_PXP_JCPLL_TCL_CMP_EN_GET_RG_PXP_JCPLL_TCL_LPF_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_EN, (reg32))
#define RG_PXP_JCPLL_TCL_CMP_EN_GET_RG_PXP_JCPLL_TCL_CMP_VTH(reg32) REG_FLD_GET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_VTH, (reg32))
#define RG_PXP_JCPLL_TCL_CMP_EN_GET_RG_PXP_JCPLL_TCL_CMP_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_EN, (reg32))

#define RG_PXP_JCPLL_VCODIV_GET_RG_PXP_JCPLL_VCO_SCAPWR(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_SCAPWR, (reg32))
#define RG_PXP_JCPLL_VCODIV_GET_RG_PXP_JCPLL_VCO_HALFLSB_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_HALFLSB_EN, (reg32))
#define RG_PXP_JCPLL_VCODIV_GET_RG_PXP_JCPLL_VCO_CFIX(reg32)   REG_FLD_GET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_CFIX, (reg32))
#define RG_PXP_JCPLL_VCODIV_GET_RG_PXP_JCPLL_VCODIV(reg32)     REG_FLD_GET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCODIV, (reg32))

#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_SSC_PHASE_INI(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_PHASE_INI, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_SSC_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_EN, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H, (reg32))
#define RG_PXP_JCPLL_VCO_TCLVAR_GET_RG_PXP_JCPLL_VCO_TCLVAR(reg32) REG_FLD_GET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR, (reg32))

#define RG_PXP_JCPLL_SSC_TRI_EN_GET_RG_PXP_JCPLL_SSC_DELTA1(reg32) REG_FLD_GET(RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_DELTA1, (reg32))
#define RG_PXP_JCPLL_SSC_TRI_EN_GET_RG_PXP_JCPLL_SSC_TRI_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_TRI_EN, (reg32))

#define RG_PXP_JCPLL_SSC_DELTA_GET_RG_PXP_JCPLL_SSC_PERIOD(reg32) REG_FLD_GET(RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_PERIOD, (reg32))
#define RG_PXP_JCPLL_SSC_DELTA_GET_RG_PXP_JCPLL_SSC_DELTA(reg32) REG_FLD_GET(RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_DELTA, (reg32))

#define RG_PXP_JCPLL_LDO_OUT_GET_RG_PXP_JCPLL_VTP(reg32)       REG_FLD_GET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP, (reg32))
#define RG_PXP_JCPLL_LDO_OUT_GET_RG_PXP_JCPLL_VTP_EN(reg32)    REG_FLD_GET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP_EN, (reg32))
#define RG_PXP_JCPLL_LDO_OUT_GET_RG_PXP_JCPLL_LDO_VCO_OUT(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_VCO_OUT, (reg32))
#define RG_PXP_JCPLL_LDO_OUT_GET_RG_PXP_JCPLL_LDO_OUT(reg32)   REG_FLD_GET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_OUT, (reg32))

#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_GET_RG_PXP_JCPLL_VCO_VTP(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP, (reg32))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_GET_RG_PXP_JCPLL_VCO_VTP_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP_EN, (reg32))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_GET_RG_PXP_JCPLL_LDO_VCO_VTP(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP, (reg32))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_GET_RG_PXP_JCPLL_LDO_VCO_VTP_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP_EN, (reg32))

#define RG_PXP_JCPLL_LDO_VTP_EN_GET_RG_PXP_JCPLL_TCL_VTP(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP, (reg32))
#define RG_PXP_JCPLL_LDO_VTP_EN_GET_RG_PXP_JCPLL_TCL_VTP_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP_EN, (reg32))
#define RG_PXP_JCPLL_LDO_VTP_EN_GET_RG_PXP_JCPLL_LDO_VTP(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP, (reg32))
#define RG_PXP_JCPLL_LDO_VTP_EN_GET_RG_PXP_JCPLL_LDO_VTP_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP_EN, (reg32))

#define RG_PXP_JCPLL_SPARE_H_GET_RG_PXP_JCPLL_VREF_SEL(reg32)  REG_FLD_GET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_VREF_SEL, (reg32))
#define RG_PXP_JCPLL_SPARE_H_GET_RG_PXP_JCPLL_TCL_KBAND_VREF(reg32) REG_FLD_GET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_TCL_KBAND_VREF, (reg32))
#define RG_PXP_JCPLL_SPARE_H_GET_RG_PXP_JCPLL_SPARE_L(reg32)   REG_FLD_GET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_L, (reg32))
#define RG_PXP_JCPLL_SPARE_H_GET_RG_PXP_JCPLL_SPARE_H(reg32)   REG_FLD_GET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_H, (reg32))

#define RG_PXP_JCPLL_FREQ_MEAS_EN_GET_RG_PXP_TXPLL_LPF_SHCK_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_LPF_SHCK_EN, (reg32))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_GET_RG_PXP_TXPLL_IB_EXT_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_IB_EXT_EN, (reg32))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_GET_RG_PXP_750M_SYS_CK_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_750M_SYS_CK_EN, (reg32))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_GET_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN, (reg32))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_GET_RG_PXP_JCPLL_FREQ_MEAS_EN(reg32) REG_FLD_GET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_FREQ_MEAS_EN, (reg32))

#define RG_PXP_TXPLL_CHP_IBIAS_GET_RG_PXP_TXPLL_LPF_BC(reg32)  REG_FLD_GET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BC, (reg32))
#define RG_PXP_TXPLL_CHP_IBIAS_GET_RG_PXP_TXPLL_LPF_BR(reg32)  REG_FLD_GET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BR, (reg32))
#define RG_PXP_TXPLL_CHP_IBIAS_GET_RG_PXP_TXPLL_CHP_IOFST(reg32) REG_FLD_GET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IOFST, (reg32))
#define RG_PXP_TXPLL_CHP_IBIAS_GET_RG_PXP_TXPLL_CHP_IBIAS(reg32) REG_FLD_GET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IBIAS, (reg32))

#define RG_PXP_TXPLL_LPF_BP_GET_RG_PXP_TXPLL_KBAND_OPTION(reg32) REG_FLD_GET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_KBAND_OPTION, (reg32))
#define RG_PXP_TXPLL_LPF_BP_GET_RG_PXP_TXPLL_LPF_BWC(reg32)    REG_FLD_GET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWC, (reg32))
#define RG_PXP_TXPLL_LPF_BP_GET_RG_PXP_TXPLL_LPF_BWR(reg32)    REG_FLD_GET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWR, (reg32))
#define RG_PXP_TXPLL_LPF_BP_GET_RG_PXP_TXPLL_LPF_BP(reg32)     REG_FLD_GET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BP, (reg32))

#define RG_PXP_TXPLL_KBAND_CODE_GET_RG_PXP_TXPLL_KBAND_KF(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KF, (reg32))
#define RG_PXP_TXPLL_KBAND_CODE_GET_RG_PXP_TXPLL_KBAND_KFC(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KFC, (reg32))
#define RG_PXP_TXPLL_KBAND_CODE_GET_RG_PXP_TXPLL_KBAND_DIV(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_DIV, (reg32))
#define RG_PXP_TXPLL_KBAND_CODE_GET_RG_PXP_TXPLL_KBAND_CODE(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_CODE, (reg32))

#define RG_PXP_TXPLL_KBAND_KS_GET_RG_PXP_TXPLL_MMD_DL_CODE(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_DL_CODE, (reg32))
#define RG_PXP_TXPLL_KBAND_KS_GET_RG_PXP_TXPLL_MMD_PREDIV_MODE(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_PREDIV_MODE, (reg32))
#define RG_PXP_TXPLL_KBAND_KS_GET_RG_PXP_TXPLL_POSTDIV_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_POSTDIV_EN, (reg32))
#define RG_PXP_TXPLL_KBAND_KS_GET_RG_PXP_TXPLL_KBAND_KS(reg32) REG_FLD_GET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_KBAND_KS, (reg32))

#define RG_PXP_TXPLL_PHY_CK1_EN_GET_RG_PXP_TXPLL_MONCK_SEL(reg32) REG_FLD_GET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_SEL, (reg32))
#define RG_PXP_TXPLL_PHY_CK1_EN_GET_RG_PXP_TXPLL_MONCK_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_EN, (reg32))
#define RG_PXP_TXPLL_PHY_CK1_EN_GET_RG_PXP_TXPLL_PHY_CK2_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK2_EN, (reg32))
#define RG_PXP_TXPLL_PHY_CK1_EN_GET_RG_PXP_TXPLL_PHY_CK1_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK1_EN, (reg32))

#define RG_PXP_TXPLL_REFIN_INTERNAL_GET_RG_PXP_TXPLL_PLL_RSTB(reg32) REG_FLD_GET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_PLL_RSTB, (reg32))
#define RG_PXP_TXPLL_REFIN_INTERNAL_GET_RG_PXP_TXPLL_RST_DLY(reg32) REG_FLD_GET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_RST_DLY, (reg32))
#define RG_PXP_TXPLL_REFIN_INTERNAL_GET_RG_PXP_TXPLL_REFIN_DIV(reg32) REG_FLD_GET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_DIV, (reg32))
#define RG_PXP_TXPLL_REFIN_INTERNAL_GET_RG_PXP_TXPLL_REFIN_INTERNAL(reg32) REG_FLD_GET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_INTERNAL, (reg32))

#define RG_PXP_TXPLL_SDM_DI_EN_GET_RG_PXP_TXPLL_SDM_MODE(reg32) REG_FLD_GET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_MODE, (reg32))
#define RG_PXP_TXPLL_SDM_DI_EN_GET_RG_PXP_TXPLL_SDM_IFM(reg32) REG_FLD_GET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_IFM, (reg32))
#define RG_PXP_TXPLL_SDM_DI_EN_GET_RG_PXP_TXPLL_SDM_DI_LS(reg32) REG_FLD_GET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_LS, (reg32))
#define RG_PXP_TXPLL_SDM_DI_EN_GET_RG_PXP_TXPLL_SDM_DI_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_EN, (reg32))

#define RG_PXP_TXPLL_SDM_ORD_GET_RG_PXP_TXPLL_TCL_AMP_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_TCL_AMP_EN, (reg32))
#define RG_PXP_TXPLL_SDM_ORD_GET_RG_PXP_TXPLL_SDM_HREN(reg32)  REG_FLD_GET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_HREN, (reg32))
#define RG_PXP_TXPLL_SDM_ORD_GET_RG_PXP_TXPLL_SDM_OUT(reg32)   REG_FLD_GET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_OUT, (reg32))
#define RG_PXP_TXPLL_SDM_ORD_GET_RG_PXP_TXPLL_SDM_ORD(reg32)   REG_FLD_GET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_ORD, (reg32))

#define RG_PXP_TXPLL_TCL_AMP_GAIN_GET_RG_PXP_TXPLL_TCL_CMP_VTH(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_VTH, (reg32))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_GET_RG_PXP_TXPLL_TCL_CMP_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_EN, (reg32))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_GET_RG_PXP_TXPLL_TCL_AMP_VREF(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_VREF, (reg32))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_GET_RG_PXP_TXPLL_TCL_AMP_GAIN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_GAIN, (reg32))

#define RG_PXP_TXPLL_TCL_LPF_EN_GET_RG_PXP_TXPLL_VCO_CFIX(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCO_CFIX, (reg32))
#define RG_PXP_TXPLL_TCL_LPF_EN_GET_RG_PXP_TXPLL_VCODIV(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCODIV, (reg32))
#define RG_PXP_TXPLL_TCL_LPF_EN_GET_RG_PXP_TXPLL_TCL_LPF_BW(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_BW, (reg32))
#define RG_PXP_TXPLL_TCL_LPF_EN_GET_RG_PXP_TXPLL_TCL_LPF_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_EN, (reg32))

#define RG_PXP_TXPLL_VCO_HALFLSB_EN_GET_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L, (reg32))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_GET_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H, (reg32))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_GET_RG_PXP_TXPLL_VCO_TCLVAR(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_TCLVAR, (reg32))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_GET_RG_PXP_TXPLL_VCO_SCAPWR(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_SCAPWR, (reg32))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_GET_RG_PXP_TXPLL_VCO_HALFLSB_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_HALFLSB_EN, (reg32))

#define RG_PXP_TXPLL_SSC_EN_GET_RG_PXP_TXPLL_SSC_TRI_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_TRI_EN, (reg32))
#define RG_PXP_TXPLL_SSC_EN_GET_RG_PXP_TXPLL_SSC_PHASE_INI(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_PHASE_INI, (reg32))
#define RG_PXP_TXPLL_SSC_EN_GET_RG_PXP_TXPLL_SSC_EN(reg32)     REG_FLD_GET(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_EN, (reg32))

#define RG_PXP_TXPLL_SSC_DELTA1_GET_RG_PXP_TXPLL_SSC_DELTA(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA, (reg32))
#define RG_PXP_TXPLL_SSC_DELTA1_GET_RG_PXP_TXPLL_SSC_DELTA1(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA1, (reg32))

#define RG_PXP_TXPLL_SSC_PERIOD_GET_RG_PXP_TXPLL_LDO_VCO_OUT(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_VCO_OUT, (reg32))
#define RG_PXP_TXPLL_SSC_PERIOD_GET_RG_PXP_TXPLL_LDO_OUT(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_OUT, (reg32))
#define RG_PXP_TXPLL_SSC_PERIOD_GET_RG_PXP_TXPLL_SSC_PERIOD(reg32) REG_FLD_GET(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_SSC_PERIOD, (reg32))

#define RG_PXP_TXPLL_VTP_EN_GET_RG_PXP_TXPLL_LDO_VCO_VTP(reg32) REG_FLD_GET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP, (reg32))
#define RG_PXP_TXPLL_VTP_EN_GET_RG_PXP_TXPLL_LDO_VCO_VTP_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP_EN, (reg32))
#define RG_PXP_TXPLL_VTP_EN_GET_RG_PXP_TXPLL_VTP(reg32)        REG_FLD_GET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP, (reg32))
#define RG_PXP_TXPLL_VTP_EN_GET_RG_PXP_TXPLL_VTP_EN(reg32)     REG_FLD_GET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP_EN, (reg32))

#define RG_PXP_TXPLL_VCO_VTP_EN_GET_RG_PXP_TXPLL_LDO_VTP(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP, (reg32))
#define RG_PXP_TXPLL_VCO_VTP_EN_GET_RG_PXP_TXPLL_LDO_VTP_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP_EN, (reg32))
#define RG_PXP_TXPLL_VCO_VTP_EN_GET_RG_PXP_TXPLL_VCO_VTP(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP, (reg32))
#define RG_PXP_TXPLL_VCO_VTP_EN_GET_RG_PXP_TXPLL_VCO_VTP_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP_EN, (reg32))

#define RG_PXP_TXPLL_TCL_VTP_EN_GET_RG_PXP_TXPLL_SPARE_L(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_L, (reg32))
#define RG_PXP_TXPLL_TCL_VTP_EN_GET_RG_PXP_TXPLL_SPARE_H(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_H, (reg32))
#define RG_PXP_TXPLL_TCL_VTP_EN_GET_RG_PXP_TXPLL_TCL_VTP(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP, (reg32))
#define RG_PXP_TXPLL_TCL_VTP_EN_GET_RG_PXP_TXPLL_TCL_VTP_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP_EN, (reg32))

#define RG_PXP_TXPLL_TCL_KBAND_VREF_GET_RG_PXP_TXPLL_POSTDIV_D256_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_POSTDIV_D256_EN, (reg32))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_GET_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN, (reg32))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_GET_RG_PXP_TXPLL_FREQ_MEAS_EN(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_FREQ_MEAS_EN, (reg32))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_GET_RG_PXP_TXPLL_VREF_SEL(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VREF_SEL, (reg32))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_GET_RG_PXP_TXPLL_TCL_KBAND_VREF(reg32) REG_FLD_GET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_TCL_KBAND_VREF, (reg32))

#define RG_PCIE_CLKTX0_AMP_GET_RG_PXP_PCIE_CLKTX0_IMP_SEL(reg32) REG_FLD_GET(RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_IMP_SEL, (reg32))
#define RG_PCIE_CLKTX0_AMP_GET_RG_PXP_PCIE_CLKTX0_HZ(reg32)    REG_FLD_GET(RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_HZ, (reg32))
#define RG_PCIE_CLKTX0_AMP_GET_RG_PCIE_CLKTX0_FORCE_OUT1(reg32) REG_FLD_GET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_FORCE_OUT1, (reg32))
#define RG_PCIE_CLKTX0_AMP_GET_RG_PCIE_CLKTX0_SR(reg32)        REG_FLD_GET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_SR, (reg32))
#define RG_PCIE_CLKTX0_AMP_GET_RG_PCIE_CLKTX0_OFFSET(reg32)    REG_FLD_GET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_OFFSET, (reg32))
#define RG_PCIE_CLKTX0_AMP_GET_RG_PCIE_CLKTX0_AMP(reg32)       REG_FLD_GET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_AMP, (reg32))

#define RG_PCIE_CLKTX1_AMP_GET_RG_PXP_PCIE_CLKTX1_IMP_SEL(reg32) REG_FLD_GET(RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_IMP_SEL, (reg32))
#define RG_PCIE_CLKTX1_AMP_GET_RG_PXP_PCIE_CLKTX1_HZ(reg32)    REG_FLD_GET(RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_HZ, (reg32))
#define RG_PCIE_CLKTX1_AMP_GET_RG_PCIE_CLKTX1_FORCE_OUT1(reg32) REG_FLD_GET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_FORCE_OUT1, (reg32))
#define RG_PCIE_CLKTX1_AMP_GET_RG_PCIE_CLKTX1_SR(reg32)        REG_FLD_GET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_SR, (reg32))
#define RG_PCIE_CLKTX1_AMP_GET_RG_PCIE_CLKTX1_OFFSET(reg32)    REG_FLD_GET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_OFFSET, (reg32))
#define RG_PCIE_CLKTX1_AMP_GET_RG_PCIE_CLKTX1_AMP(reg32)       REG_FLD_GET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_AMP, (reg32))

#define RG_PXP_PLL_MONCLK_SEL_GET_RG_PXP_TDC_AUTOEN(reg32)     REG_FLD_GET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_TDC_AUTOEN, (reg32))
#define RG_PXP_PLL_MONCLK_SEL_GET_RG_PXP_PLL_CMN_RESERVE1(reg32) REG_FLD_GET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE1, (reg32))
#define RG_PXP_PLL_MONCLK_SEL_GET_RG_PXP_PLL_CMN_RESERVE0(reg32) REG_FLD_GET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE0, (reg32))
#define RG_PXP_PLL_MONCLK_SEL_GET_RG_PXP_PLL_VTP_EN(reg32)     REG_FLD_GET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP_EN, (reg32))
#define RG_PXP_PLL_MONCLK_SEL_GET_RG_PXP_PLL_VTP(reg32)        REG_FLD_GET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP, (reg32))
#define RG_PXP_PLL_MONCLK_SEL_GET_RG_PXP_PLL_MONCLK_SEL(reg32) REG_FLD_GET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_MONCLK_SEL, (reg32))

#define RG_PXP_TDC_TXCK_SEL_GET_RG_PXP_TDC_MON_CK_EN(reg32)    REG_FLD_GET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_MON_CK_EN, (reg32))
#define RG_PXP_TDC_TXCK_SEL_GET_RG_PXP_TDC_FT_CK_EN(reg32)     REG_FLD_GET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_FT_CK_EN, (reg32))
#define RG_PXP_TDC_TXCK_SEL_GET_RG_PXP_TDC_RXCK_SEL(reg32)     REG_FLD_GET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_RXCK_SEL, (reg32))
#define RG_PXP_TDC_TXCK_SEL_GET_RG_PXP_TDC_TXCK_SEL(reg32)     REG_FLD_GET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_TXCK_SEL, (reg32))

#define RG_PXP_TDC_SYNC_CK_SEL_GET_RG_PXP_TDC_SYNC_CK_SEL(reg32) REG_FLD_GET(RG_PXP_TDC_SYNC_CK_SEL_FLD_RG_PXP_TDC_SYNC_CK_SEL, (reg32))

#define RGS_PXP_JCPLL_KBAND_CODE_GET_RGS_PXP_JCPLL_KBAND_CODE(reg32) REG_FLD_GET(RGS_PXP_JCPLL_KBAND_CODE_FLD_RGS_PXP_JCPLL_KBAND_CODE, (reg32))

#define RGS_PXP_TXPLL_KBAND_CODE_GET_RGS_PXP_TXPLL_KBAND_CODE(reg32) REG_FLD_GET(RGS_PXP_TXPLL_KBAND_CODE_FLD_RGS_PXP_TXPLL_KBAND_CODE, (reg32))

#define RG_PXP_TX_SER_LOADSEL_GET_RG_PXP_TX_CKMON_EN(reg32)    REG_FLD_GET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_CKMON_EN, (reg32))
#define RG_PXP_TX_SER_LOADSEL_GET_RG_PXP_TX_SR_REDUCTION(reg32) REG_FLD_GET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SR_REDUCTION, (reg32))
#define RG_PXP_TX_SER_LOADSEL_GET_RG_PXP_TX_DIGFF_CK_INV(reg32) REG_FLD_GET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_DIGFF_CK_INV, (reg32))
#define RG_PXP_TX_SER_LOADSEL_GET_RG_PXP_TX_SER_LOADSEL(reg32) REG_FLD_GET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SER_LOADSEL, (reg32))

#define RG_PXP_TX_CKMON_SEL_GET_RG_PXP_TX_FIR_CHGPLR_CN1(reg32) REG_FLD_GET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_FIR_CHGPLR_CN1, (reg32))
#define RG_PXP_TX_CKMON_SEL_GET_RG_PXP_TX_LSDATA(reg32)        REG_FLD_GET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA, (reg32))
#define RG_PXP_TX_CKMON_SEL_GET_RG_PXP_TX_LSDATA_EN(reg32)     REG_FLD_GET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA_EN, (reg32))
#define RG_PXP_TX_CKMON_SEL_GET_RG_PXP_TX_CKMON_SEL(reg32)     REG_FLD_GET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_CKMON_SEL, (reg32))

#define RG_PXP_TX_FIR_CHGPLR_C1_GET_RG_PXP_TX_VMON_SEL(reg32)  REG_FLD_GET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_SEL, (reg32))
#define RG_PXP_TX_FIR_CHGPLR_C1_GET_RG_PXP_TX_VMON_EN(reg32)   REG_FLD_GET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_EN, (reg32))
#define RG_PXP_TX_FIR_CHGPLR_C1_GET_RG_PXP_TX_FIR_CHGPLR_C2(reg32) REG_FLD_GET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C2, (reg32))
#define RG_PXP_TX_FIR_CHGPLR_C1_GET_RG_PXP_TX_FIR_CHGPLR_C1(reg32) REG_FLD_GET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C1, (reg32))

#define RG_PXP_TX_TXLBRX_EN_GET_RG_PXP_TX_TERMCAL_VREF_L(reg32) REG_FLD_GET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_L, (reg32))
#define RG_PXP_TX_TXLBRX_EN_GET_RG_PXP_TX_TERMCAL_VREF_H(reg32) REG_FLD_GET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_H, (reg32))
#define RG_PXP_TX_TXLBRX_EN_GET_RG_PXP_TX_INT_EN(reg32)        REG_FLD_GET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_INT_EN, (reg32))
#define RG_PXP_TX_TXLBRX_EN_GET_RG_PXP_TX_TXLBRX_EN(reg32)     REG_FLD_GET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TXLBRX_EN, (reg32))

#define RG_PXP_TX_CKLDO_EN_GET_RG_PXP_TX_DMEDGEGEN_EN(reg32)   REG_FLD_GET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_DMEDGEGEN_EN, (reg32))
#define RG_PXP_TX_CKLDO_EN_GET_RG_PXP_TX_RXDET_METHOD(reg32)   REG_FLD_GET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_RXDET_METHOD, (reg32))
#define RG_PXP_TX_CKLDO_EN_GET_RG_PXP_TX_CKLDO_LVR(reg32)      REG_FLD_GET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_LVR, (reg32))
#define RG_PXP_TX_CKLDO_EN_GET_RG_PXP_TX_CKLDO_EN(reg32)       REG_FLD_GET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_EN, (reg32))

#define RG_PXP_TX_MULTLANE_EN_GET_RG_PXP_TX_RESERVED(reg32)    REG_FLD_GET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_RESERVED, (reg32))
#define RG_PXP_TX_MULTLANE_EN_GET_RG_PXP_TX_AUTOZERO_EN(reg32) REG_FLD_GET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_AUTOZERO_EN, (reg32))
#define RG_PXP_TX_MULTLANE_EN_GET_RG_PXP_TX_TDC_CK_SEL(reg32)  REG_FLD_GET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TDC_CK_SEL, (reg32))
#define RG_PXP_TX_MULTLANE_EN_GET_RG_PXP_TX_TERMCAL_SELPN(reg32) REG_FLD_GET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TERMCAL_SELPN, (reg32))
#define RG_PXP_TX_MULTLANE_EN_GET_RG_PXP_TX_MULTLANE_EN(reg32) REG_FLD_GET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_MULTLANE_EN, (reg32))

#define RG_PXP_RX_BUSBIT_SEL_GET_RG_PXP_RX_PHY_CK_SEL_FORCE(reg32) REG_FLD_GET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL_FORCE, (reg32))
#define RG_PXP_RX_BUSBIT_SEL_GET_RG_PXP_RX_PHY_CK_SEL(reg32)   REG_FLD_GET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL, (reg32))
#define RG_PXP_RX_BUSBIT_SEL_GET_RG_PXP_RX_BUSBIT_SEL_FORCE(reg32) REG_FLD_GET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL_FORCE, (reg32))
#define RG_PXP_RX_BUSBIT_SEL_GET_RG_PXP_RX_BUSBIT_SEL(reg32)   REG_FLD_GET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL, (reg32))

#define RG_PXP_RX_MPXSEL_GET_RG_PXP_RX_SYNC_INV(reg32)         REG_FLD_GET(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_SYNC_INV, (reg32))
#define RG_PXP_RX_MPXSEL_GET_RG_PXP_RX_DBGSEL(reg32)           REG_FLD_GET(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_DBGSEL, (reg32))
#define RG_PXP_RX_MPXSEL_GET_RG_PXP_RX_MPXSEL(reg32)           REG_FLD_GET(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_MPXSEL, (reg32))

#define RG_PXP_RX_REV_0_GET_RG_PXP_RX_REV_1(reg32)             REG_FLD_GET(RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_1, (reg32))
#define RG_PXP_RX_REV_0_GET_RG_PXP_RX_REV_0(reg32)             REG_FLD_GET(RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_0, (reg32))

#define RG_PXP_RX_PHYCK_DIV_GET_RG_PXP_RX_TDC_CK_SEL(reg32)    REG_FLD_GET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_TDC_CK_SEL, (reg32))
#define RG_PXP_RX_PHYCK_DIV_GET_RG_PXP_RX_PHYCK_RSTB(reg32)    REG_FLD_GET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_RSTB, (reg32))
#define RG_PXP_RX_PHYCK_DIV_GET_RG_PXP_RX_PHYCK_SEL(reg32)     REG_FLD_GET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_SEL, (reg32))
#define RG_PXP_RX_PHYCK_DIV_GET_RG_PXP_RX_PHYCK_DIV(reg32)     REG_FLD_GET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_DIV, (reg32))

#define RG_PXP_CDR_PD_PICAL_CKD8_INV_GET_RG_PXP_CDR_PD_EDGE_DIS(reg32) REG_FLD_GET(RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_EDGE_DIS, (reg32))
#define RG_PXP_CDR_PD_PICAL_CKD8_INV_GET_RG_PXP_CDR_PD_PICAL_CKD8_INV(reg32) REG_FLD_GET(RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_PICAL_CKD8_INV, (reg32))

#define RG_PXP_CDR_LPF_BOT_LIM_GET_RG_PXP_CDR_LPF_KI_GAIN(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_KI_GAIN, (reg32))
#define RG_PXP_CDR_LPF_BOT_LIM_GET_RG_PXP_CDR_LPF_BOT_LIM(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_BOT_LIM, (reg32))

#define RG_PXP_CDR_LPF_KP_GAIN_GET_RG_PXP_CDR_LPF_MJV_LIM(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_LIM, (reg32))
#define RG_PXP_CDR_LPF_KP_GAIN_GET_RG_PXP_CDR_LPF_MJV_EN(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_EN, (reg32))
#define RG_PXP_CDR_LPF_KP_GAIN_GET_RG_PXP_CDR_LPF_LIN_LIM(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_LIN_LIM, (reg32))
#define RG_PXP_CDR_LPF_KP_GAIN_GET_RG_PXP_CDR_LPF_KP_GAIN(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_KP_GAIN, (reg32))

#define RG_PXP_CDR_LPF_RATIO_GET_RG_PXP_CDR_LPF_TOP_LIM(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_TOP_LIM, (reg32))
#define RG_PXP_CDR_LPF_RATIO_GET_RG_PXP_CDR_LPF_RATIO(reg32)   REG_FLD_GET(RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_RATIO, (reg32))

#define RG_PXP_CDR_LPF_SNAPSHOT_GET_RG_PXP_CDR_LPF_SET(reg32)  REG_FLD_GET(RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SET, (reg32))
#define RG_PXP_CDR_LPF_SNAPSHOT_GET_RG_PXP_CDR_LPF_SNAPSHOT(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SNAPSHOT, (reg32))

#define RG_PXP_CDR_LPF_SETVALUE_GET_RG_PXP_CDR_LPF_PISTEP_CTRL(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_PISTEP_CTRL, (reg32))
#define RG_PXP_CDR_LPF_SETVALUE_GET_RG_PXP_CDR_LPF_SETVALUE(reg32) REG_FLD_GET(RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_SETVALUE, (reg32))

#define RG_PXP_CDR_PR_INJ_MODE_GET_RG_PXP_CDR_PR_INJ_FORCE_OFF(reg32) REG_FLD_GET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_OFF, (reg32))
#define RG_PXP_CDR_PR_INJ_MODE_GET_RG_PXP_CDR_PR_INJ_FORCE_ON(reg32) REG_FLD_GET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_ON, (reg32))
#define RG_PXP_CDR_PR_INJ_MODE_GET_RG_PXP_CDR_PR_INPUT_MODE(reg32) REG_FLD_GET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INPUT_MODE, (reg32))
#define RG_PXP_CDR_PR_INJ_MODE_GET_RG_PXP_CDR_PR_INJ_MODE(reg32) REG_FLD_GET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_MODE, (reg32))

#define RG_PXP_CDR_PR_BETA_DAC_GET_RG_PXP_CDR_PR_KBAND_DIV(reg32) REG_FLD_GET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_KBAND_DIV, (reg32))
#define RG_PXP_CDR_PR_BETA_DAC_GET_RG_PXP_CDR_PR_BETA_SEL(reg32) REG_FLD_GET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_SEL, (reg32))
#define RG_PXP_CDR_PR_BETA_DAC_GET_RG_PXP_CDR_PR_VCOADC_OS(reg32) REG_FLD_GET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_VCOADC_OS, (reg32))
#define RG_PXP_CDR_PR_BETA_DAC_GET_RG_PXP_CDR_PR_BETA_DAC(reg32) REG_FLD_GET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_DAC, (reg32))

#define RG_PXP_CDR_PR_VREG_IBAND_VAL_GET_RG_PXP_CDR_PR_FBKSEL(reg32) REG_FLD_GET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_FBKSEL, (reg32))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_GET_RG_PXP_CDR_PR_DAC_BAND(reg32) REG_FLD_GET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_DAC_BAND, (reg32))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_GET_RG_PXP_CDR_PR_VREG_CKBUF_VAL(reg32) REG_FLD_GET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_CKBUF_VAL, (reg32))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_GET_RG_PXP_CDR_PR_VREG_IBAND_VAL(reg32) REG_FLD_GET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_IBAND_VAL, (reg32))

#define RG_PXP_CDR_PR_CKREF_DIV_GET_RG_PXP_CDR_PR_MONMUXVC(reg32) REG_FLD_GET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_MONMUXVC, (reg32))
#define RG_PXP_CDR_PR_CKREF_DIV_GET_RG_PXP_CDR_PR_RSTB_BYPASS(reg32) REG_FLD_GET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RSTB_BYPASS, (reg32))
#define RG_PXP_CDR_PR_CKREF_DIV_GET_RG_PXP_CDR_PR_RST_DLY(reg32) REG_FLD_GET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RST_DLY, (reg32))
#define RG_PXP_CDR_PR_CKREF_DIV_GET_RG_PXP_CDR_PR_CKREF_DIV(reg32) REG_FLD_GET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_CKREF_DIV, (reg32))

#define RG_PXP_CDR_PR_MONCK_EN_GET_RG_PXP_CDR_PR_RESERVE1(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE1, (reg32))
#define RG_PXP_CDR_PR_MONCK_EN_GET_RG_PXP_CDR_PR_RESERVE0(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE0, (reg32))
#define RG_PXP_CDR_PR_MONCK_EN_GET_RG_PXP_CDR_PR_MONCK_MUX(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_MUX, (reg32))
#define RG_PXP_CDR_PR_MONCK_EN_GET_RG_PXP_CDR_PR_MONCK_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_EN, (reg32))

#define RG_PXP_CDR_PR_TDC_REF_SEL_GET_RG_PXP_CDR_PR_CKREF_DIV1(reg32) REG_FLD_GET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_CKREF_DIV1, (reg32))
#define RG_PXP_CDR_PR_TDC_REF_SEL_GET_RG_PXP_CDR_PR_LDO_FORCE_ON(reg32) REG_FLD_GET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_LDO_FORCE_ON, (reg32))
#define RG_PXP_CDR_PR_TDC_REF_SEL_GET_RG_PXP_CDR_PR_COR_HBW_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_COR_HBW_EN, (reg32))
#define RG_PXP_CDR_PR_TDC_REF_SEL_GET_RG_PXP_CDR_PR_TDC_REF_SEL(reg32) REG_FLD_GET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_TDC_REF_SEL, (reg32))

#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_RX_DAC_MON(reg32)    REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_RX_DAC_MON, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PR_CAP_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_CAP_EN, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PR_BUF_IN_SR(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_BUF_IN_SR, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PI_LDO_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PI_LDO_EN, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PR_VREG_PI_VAL(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_VREG_PI_VAL, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PR_XFICK_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_XFICK_EN, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PR_MONPI_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPI_EN, (reg32))
#define RG_PXP_CDR_PR_MONPR_EN_GET_RG_PXP_CDR_PR_MONPR_EN(reg32) REG_FLD_GET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPR_EN, (reg32))

#define RG_PXP_RX_DAC_RANGE_GET_RG_PXP_RX_SIGDET_LPF_CTRL(reg32) REG_FLD_GET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_LPF_CTRL, (reg32))
#define RG_PXP_RX_DAC_RANGE_GET_RG_PXP_RX_SIGDET_DCTEST_EN(reg32) REG_FLD_GET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_DCTEST_EN, (reg32))
#define RG_PXP_RX_DAC_RANGE_GET_RG_PXP_RX_DAC_RANGE_EYE(reg32) REG_FLD_GET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE_EYE, (reg32))
#define RG_PXP_RX_DAC_RANGE_GET_RG_PXP_RX_DAC_RANGE(reg32)     REG_FLD_GET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE, (reg32))

#define RG_PXP_RX_SIGDET_NOVTH_GET_RG_PXP_RX_FE_50OHMS_SEL(reg32) REG_FLD_GET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_FE_50OHMS_SEL, (reg32))
#define RG_PXP_RX_SIGDET_NOVTH_GET_RG_PXP_RX_SIGDET_VTH_SEL(reg32) REG_FLD_GET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_VTH_SEL, (reg32))
#define RG_PXP_RX_SIGDET_NOVTH_GET_RG_PXP_RX_SIGDET_PEAK(reg32) REG_FLD_GET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_PEAK, (reg32))
#define RG_PXP_RX_SIGDET_NOVTH_GET_RG_PXP_RX_SIGDET_NOVTH(reg32) REG_FLD_GET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_NOVTH, (reg32))

#define RG_PXP_RX_FE_EQ_HZEN_GET_RG_PXP_RX_FE_VB_EQ3_EN(reg32) REG_FLD_GET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ3_EN, (reg32))
#define RG_PXP_RX_FE_EQ_HZEN_GET_RG_PXP_RX_FE_VB_EQ2_EN(reg32) REG_FLD_GET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ2_EN, (reg32))
#define RG_PXP_RX_FE_EQ_HZEN_GET_RG_PXP_RX_FE_VB_EQ1_EN(reg32) REG_FLD_GET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ1_EN, (reg32))
#define RG_PXP_RX_FE_EQ_HZEN_GET_RG_PXP_RX_FE_EQ_HZEN(reg32)   REG_FLD_GET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_EQ_HZEN, (reg32))

#define RG_PXP_RX_FE_VCM_GEN_PWDB_GET_RG_PXP_RX_OSCAL_WAIT_WNDW(reg32) REG_FLD_GET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_WAIT_WNDW, (reg32))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_GET_RG_PXP_RX_OSCAL_CK_INV(reg32) REG_FLD_GET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_CK_INV, (reg32))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_GET_RG_PXP_RX_FE_VCM_SEL(reg32) REG_FLD_GET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_SEL, (reg32))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_GET_RG_PXP_RX_FE_VCM_GEN_PWDB(reg32) REG_FLD_GET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_GEN_PWDB, (reg32))

#define RG_PXP_RX_OSCAL_WATCH_WNDW_GET_RG_PXP_RX_OSCAL_COMPOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_COMPOS, (reg32))
#define RG_PXP_RX_OSCAL_WATCH_WNDW_GET_RG_PXP_RX_OSCAL_FORCE(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_FORCE, (reg32))
#define RG_PXP_RX_OSCAL_WATCH_WNDW_GET_RG_PXP_RX_OSCAL_WATCH_WNDW(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_WATCH_WNDW, (reg32))

#define RG_PXP_RX_OSCAL_OPTION_GET_RG_PXP_RX_OSCAL_CTLE1IOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_CTLE1IOS, (reg32))
#define RG_PXP_RX_OSCAL_OPTION_GET_RG_PXP_RX_OSCAL_LVSHOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_LVSHOS, (reg32))
#define RG_PXP_RX_OSCAL_OPTION_GET_RG_PXP_RX_OSCAL_OPTION(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_OPTION, (reg32))

#define RG_PXP_RX_OSCAL_CTLE2IOS_GET_RG_PXP_RX_OSCAL_VGA1VOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1VOS, (reg32))
#define RG_PXP_RX_OSCAL_CTLE2IOS_GET_RG_PXP_RX_OSCAL_VGA1IOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1IOS, (reg32))
#define RG_PXP_RX_OSCAL_CTLE2IOS_GET_RG_PXP_RX_OSCAL_CTLE2VOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2VOS, (reg32))
#define RG_PXP_RX_OSCAL_CTLE2IOS_GET_RG_PXP_RX_OSCAL_CTLE2IOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2IOS, (reg32))

#define RG_PXP_RX_OSCAL_VGA2IOS_GET_RG_PXP_AEQ_WAIT_WNDW(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_WAIT_WNDW, (reg32))
#define RG_PXP_RX_OSCAL_VGA2IOS_GET_RG_PXP_AEQ_CK_INV(reg32)   REG_FLD_GET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_CK_INV, (reg32))
#define RG_PXP_RX_OSCAL_VGA2IOS_GET_RG_PXP_RX_OSCAL_VGA2VOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2VOS, (reg32))
#define RG_PXP_RX_OSCAL_VGA2IOS_GET_RG_PXP_RX_OSCAL_VGA2IOS(reg32) REG_FLD_GET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2IOS, (reg32))

#define RG_PXP_AEQ_WATCH_WNDW_GET_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK(reg32) REG_FLD_GET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK, (reg32))
#define RG_PXP_AEQ_WATCH_WNDW_GET_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY(reg32) REG_FLD_GET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY, (reg32))
#define RG_PXP_AEQ_WATCH_WNDW_GET_RG_PXP_AEQ_FR2HR_MODE(reg32) REG_FLD_GET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FR2HR_MODE, (reg32))
#define RG_PXP_AEQ_WATCH_WNDW_GET_RG_PXP_AEQ_WATCH_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_WATCH_WNDW, (reg32))

#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_GET_RG_PXP_AEQ_STATE(reg32) REG_FLD_GET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_STATE, (reg32))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_GET_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY(reg32) REG_FLD_GET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY, (reg32))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_GET_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE(reg32) REG_FLD_GET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE, (reg32))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_GET_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY(reg32) REG_FLD_GET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY, (reg32))

#define RG_PXP_AEQ_OPTION_GET_RG_PXP_AEQ_OPTION3(reg32)        REG_FLD_GET(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION3, (reg32))
#define RG_PXP_AEQ_OPTION_GET_RG_PXP_AEQ_OPTION2(reg32)        REG_FLD_GET(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION2, (reg32))
#define RG_PXP_AEQ_OPTION_GET_RG_PXP_AEQ_OPTION(reg32)         REG_FLD_GET(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION, (reg32))

#define RG_PXP_AEQ_CFORCE_GET_RG_PXP_AEQ_CTLE_ERR_TYPE(reg32)  REG_FLD_GET(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CTLE_ERR_TYPE, (reg32))
#define RG_PXP_AEQ_CFORCE_GET_RG_PXP_AEQ_OFORCE(reg32)         REG_FLD_GET(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_OFORCE, (reg32))
#define RG_PXP_AEQ_CFORCE_GET_RG_PXP_AEQ_CFORCE(reg32)         REG_FLD_GET(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CFORCE, (reg32))

#define RG_PXP_AEQ_CTLE_MAX_GET_RG_PXP_AEQ_CTLE_WNDW(reg32)    REG_FLD_GET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_WNDW, (reg32))
#define RG_PXP_AEQ_CTLE_MAX_GET_RG_PXP_AEQ_CTLE_TH(reg32)      REG_FLD_GET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_TH, (reg32))
#define RG_PXP_AEQ_CTLE_MAX_GET_RG_PXP_AEQ_CTLE_STTL(reg32)    REG_FLD_GET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_STTL, (reg32))
#define RG_PXP_AEQ_CTLE_MAX_GET_RG_PXP_AEQ_CTLE_MAX(reg32)     REG_FLD_GET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_MAX, (reg32))

#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_GET_RG_PXP_RX_DAC_D0_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_DAC_D0_BYPASS_AEQ, (reg32))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_GET_RG_PXP_AEQ_SAOS_TH(reg32) REG_FLD_GET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_AEQ_SAOS_TH, (reg32))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_GET_RG_PXP_RX_FE_PEAKING_CTRL_LSB(reg32) REG_FLD_GET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_LSB, (reg32))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_GET_RG_PXP_RX_FE_PEAKING_CTRL_MSB(reg32) REG_FLD_GET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_MSB, (reg32))

#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_GET_RG_PXP_RX_DAC_EYE_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_EYE_BYPASS_AEQ, (reg32))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_GET_RG_PXP_RX_DAC_E1_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E1_BYPASS_AEQ, (reg32))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_GET_RG_PXP_RX_DAC_E0_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E0_BYPASS_AEQ, (reg32))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_GET_RG_PXP_RX_DAC_D1_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_D1_BYPASS_AEQ, (reg32))

#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_GET_RG_PXP_RX_DAC_ERR1(reg32) REG_FLD_GET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1, (reg32))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_GET_RG_PXP_RX_DAC_ERR0(reg32) REG_FLD_GET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0, (reg32))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_GET_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ, (reg32))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_GET_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ(reg32) REG_FLD_GET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ, (reg32))

#define RG_PXP_AEQ_CM1_WNDW_GET_RG_PXP_AEQ_DFETP1_WNDW(reg32)  REG_FLD_GET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_DFETP1_WNDW, (reg32))
#define RG_PXP_AEQ_CM1_WNDW_GET_RG_PXP_AEQ_VGA_WNDW(reg32)     REG_FLD_GET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_VGA_WNDW, (reg32))
#define RG_PXP_AEQ_CM1_WNDW_GET_RG_PXP_AEQ_CP1_WNDW(reg32)     REG_FLD_GET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CP1_WNDW, (reg32))
#define RG_PXP_AEQ_CM1_WNDW_GET_RG_PXP_AEQ_CM1_WNDW(reg32)     REG_FLD_GET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CM1_WNDW, (reg32))

#define RG_PXP_AEQ_DFETP2_WNDW_GET_RG_PXP_AEQ_DFETP5_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP5_WNDW, (reg32))
#define RG_PXP_AEQ_DFETP2_WNDW_GET_RG_PXP_AEQ_DFETP4_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP4_WNDW, (reg32))
#define RG_PXP_AEQ_DFETP2_WNDW_GET_RG_PXP_AEQ_DFETP3_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP3_WNDW, (reg32))
#define RG_PXP_AEQ_DFETP2_WNDW_GET_RG_PXP_AEQ_DFETP2_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP2_WNDW, (reg32))

#define RG_PXP_AEQ_DFETP6_WNDW_GET_RG_PXP_AEQ_TRN_DFENUM(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_TRN_DFENUM, (reg32))
#define RG_PXP_AEQ_DFETP6_WNDW_GET_RG_PXP_AEQ_DFETP7_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP7_WNDW, (reg32))
#define RG_PXP_AEQ_DFETP6_WNDW_GET_RG_PXP_AEQ_DFETP6_WNDW(reg32) REG_FLD_GET(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP6_WNDW, (reg32))

#define RGS_PXP_RX_OSCAL_FE_VOS_GET_RGS_PXP_RX_OSCAL_CTLE1IOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_CTLE1IOS, (reg32))
#define RGS_PXP_RX_OSCAL_FE_VOS_GET_RGS_PXP_RX_OSCAL_LVSHOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_LVSHOS, (reg32))
#define RGS_PXP_RX_OSCAL_FE_VOS_GET_RGS_PXP_RX_OSCAL_COMPOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_COMPOS, (reg32))
#define RGS_PXP_RX_OSCAL_FE_VOS_GET_RGS_PXP_RX_OSCAL_FE_VOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_FE_VOS, (reg32))

#define RGS_PXP_RX_OSCAL_CTLE2IOS_GET_RGS_PXP_RX_OSCAL_VGA1VOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1VOS, (reg32))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_GET_RGS_PXP_RX_OSCAL_VGA1IOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1IOS, (reg32))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_GET_RGS_PXP_RX_OSCAL_CTLE2VOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2VOS, (reg32))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_GET_RGS_PXP_RX_OSCAL_CTLE2IOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2IOS, (reg32))

#define RGS_PXP_RX_OSCAL_VGA2IOS_GET_RGS_PXP_RX_OSCAL_VGA2VOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2VOS, (reg32))
#define RGS_PXP_RX_OSCAL_VGA2IOS_GET_RGS_PXP_RX_OSCAL_VGA2IOS(reg32) REG_FLD_GET(RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2IOS, (reg32))

#define RGS_PXP_AEQ_CTLE_GET_RGS_PXP_AEQ_CTLE(reg32)           REG_FLD_GET(RGS_PXP_AEQ_CTLE_FLD_RGS_PXP_AEQ_CTLE, (reg32))

#define RGS_PXP_AEQ_SAOSC_EN_GET_RGS_PXP_AEQ_E0_OS(reg32)      REG_FLD_GET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_E0_OS, (reg32))
#define RGS_PXP_AEQ_SAOSC_EN_GET_RGS_PXP_AEQ_D1_OS(reg32)      REG_FLD_GET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D1_OS, (reg32))
#define RGS_PXP_AEQ_SAOSC_EN_GET_RGS_PXP_AEQ_D0_OS(reg32)      REG_FLD_GET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D0_OS, (reg32))
#define RGS_PXP_AEQ_SAOSC_EN_GET_RGS_PXP_AEQ_SAOSC_EN(reg32)   REG_FLD_GET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_SAOSC_EN, (reg32))

#define RGS_PXP_AEQ_E1_OS_GET_RGS_PXP_AEQ_ERR1_OS(reg32)       REG_FLD_GET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR1_OS, (reg32))
#define RGS_PXP_AEQ_E1_OS_GET_RGS_PXP_AEQ_ERR0_OS(reg32)       REG_FLD_GET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR0_OS, (reg32))
#define RGS_PXP_AEQ_E1_OS_GET_RGS_PXP_AEQ_EYE_OS(reg32)        REG_FLD_GET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_EYE_OS, (reg32))
#define RGS_PXP_AEQ_E1_OS_GET_RGS_PXP_AEQ_E1_OS(reg32)         REG_FLD_GET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_E1_OS, (reg32))

#define RG_PXP_CMN_EN_SET_RG_PXP_CMN_TRIM(reg32, val)          REG_FLD_SET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_TRIM, (reg32), (val))
#define RG_PXP_CMN_EN_SET_RG_PXP_CMN_VREFSEL(reg32, val)       REG_FLD_SET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_VREFSEL, (reg32), (val))
#define RG_PXP_CMN_EN_SET_RG_PXP_CMN_MPXSELTOP_DC(reg32, val)  REG_FLD_SET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_MPXSELTOP_DC, (reg32), (val))
#define RG_PXP_CMN_EN_SET_RG_PXP_CMN_EN(reg32, val)            REG_FLD_SET(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_EN, (reg32), (val))

#define RG_PXP_JCPLL_IB_EXT_EN_SET_RG_PXP_JCPLL_CHP_IOFST(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IOFST, (reg32), (val))
#define RG_PXP_JCPLL_IB_EXT_EN_SET_RG_PXP_JCPLL_CHP_IBIAS(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IBIAS, (reg32), (val))
#define RG_PXP_JCPLL_IB_EXT_EN_SET_RG_PXP_JCPLL_LPF_SHCK_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_LPF_SHCK_EN, (reg32), (val))
#define RG_PXP_JCPLL_IB_EXT_EN_SET_RG_PXP_JCPLL_IB_EXT_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_IB_EXT_EN, (reg32), (val))

#define RG_PXP_JCPLL_LPF_BR_SET_RG_PXP_JCPLL_LPF_BWR(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BWR, (reg32), (val))
#define RG_PXP_JCPLL_LPF_BR_SET_RG_PXP_JCPLL_LPF_BP(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BP, (reg32), (val))
#define RG_PXP_JCPLL_LPF_BR_SET_RG_PXP_JCPLL_LPF_BC(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BC, (reg32), (val))
#define RG_PXP_JCPLL_LPF_BR_SET_RG_PXP_JCPLL_LPF_BR(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BR, (reg32), (val))

#define RG_PXP_JCPLL_LPF_BWC_SET_RG_PXP_JCPLL_KBAND_DIV(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_DIV, (reg32), (val))
#define RG_PXP_JCPLL_LPF_BWC_SET_RG_PXP_JCPLL_KBAND_CODE(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_CODE, (reg32), (val))
#define RG_PXP_JCPLL_LPF_BWC_SET_RG_PXP_JCPLL_KBAND_OPTION(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_OPTION, (reg32), (val))
#define RG_PXP_JCPLL_LPF_BWC_SET_RG_PXP_JCPLL_LPF_BWC(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_LPF_BWC, (reg32), (val))

#define RG_PXP_JCPLL_KBAND_KFC_SET_RG_PXP_JCPLL_POSTDIV_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_POSTDIV_EN, (reg32), (val))
#define RG_PXP_JCPLL_KBAND_KFC_SET_RG_PXP_JCPLL_KBAND_KS(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KS, (reg32), (val))
#define RG_PXP_JCPLL_KBAND_KFC_SET_RG_PXP_JCPLL_KBAND_KF(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KF, (reg32), (val))
#define RG_PXP_JCPLL_KBAND_KFC_SET_RG_PXP_JCPLL_KBAND_KFC(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KFC, (reg32), (val))

#define RG_PXP_JCPLL_MMD_PREDIV_MODE_SET_RG_PXP_JCPLL_POSTDIV_D5(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D5, (reg32), (val))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_SET_RG_PXP_JCPLL_POSTDIV_D2(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D2, (reg32), (val))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_SET_RG_PXP_JCPLL_MMD_DL_CODE(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_DL_CODE, (reg32), (val))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_SET_RG_PXP_JCPLL_MMD_PREDIV_MODE(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_PREDIV_MODE, (reg32), (val))

#define RG_PXP_JCPLL_MONCK_EN_SET_RG_PXP_JCPLL_REFIN_DIV(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_DIV, (reg32), (val))
#define RG_PXP_JCPLL_MONCK_EN_SET_RG_PXP_JCPLL_REFIN_INTERNAL(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_INTERNAL, (reg32), (val))
#define RG_PXP_JCPLL_MONCK_EN_SET_RG_PXP_JCPLL_MONCK_SEL(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_SEL, (reg32), (val))
#define RG_PXP_JCPLL_MONCK_EN_SET_RG_PXP_JCPLL_MONCK_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_EN, (reg32), (val))

#define RG_PXP_JCPLL_RST_DLY_SET_RG_PXP_JCPLL_SDM_DI_LS(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_LS, (reg32), (val))
#define RG_PXP_JCPLL_RST_DLY_SET_RG_PXP_JCPLL_SDM_DI_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_EN, (reg32), (val))
#define RG_PXP_JCPLL_RST_DLY_SET_RG_PXP_JCPLL_PLL_RSTB(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_PLL_RSTB, (reg32), (val))
#define RG_PXP_JCPLL_RST_DLY_SET_RG_PXP_JCPLL_RST_DLY(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_RST_DLY, (reg32), (val))

#define RG_PXP_JCPLL_SDM_IFM_SET_RG_PXP_JCPLL_SDM_OUT(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_OUT, (reg32), (val))
#define RG_PXP_JCPLL_SDM_IFM_SET_RG_PXP_JCPLL_SDM_ORD(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_ORD, (reg32), (val))
#define RG_PXP_JCPLL_SDM_IFM_SET_RG_PXP_JCPLL_SDM_MODE(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_MODE, (reg32), (val))
#define RG_PXP_JCPLL_SDM_IFM_SET_RG_PXP_JCPLL_SDM_IFM(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_IFM, (reg32), (val))

#define RG_PXP_JCPLL_SDM_HREN_SET_RG_PXP_JCPLL_TCL_AMP_VREF(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_VREF, (reg32), (val))
#define RG_PXP_JCPLL_SDM_HREN_SET_RG_PXP_JCPLL_TCL_AMP_GAIN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_GAIN, (reg32), (val))
#define RG_PXP_JCPLL_SDM_HREN_SET_RG_PXP_JCPLL_TCL_AMP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_EN, (reg32), (val))
#define RG_PXP_JCPLL_SDM_HREN_SET_RG_PXP_JCPLL_SDM_HREN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_SDM_HREN, (reg32), (val))

#define RG_PXP_JCPLL_TCL_CMP_EN_SET_RG_PXP_JCPLL_TCL_LPF_BW(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_BW, (reg32), (val))
#define RG_PXP_JCPLL_TCL_CMP_EN_SET_RG_PXP_JCPLL_TCL_LPF_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_EN, (reg32), (val))
#define RG_PXP_JCPLL_TCL_CMP_EN_SET_RG_PXP_JCPLL_TCL_CMP_VTH(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_VTH, (reg32), (val))
#define RG_PXP_JCPLL_TCL_CMP_EN_SET_RG_PXP_JCPLL_TCL_CMP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_EN, (reg32), (val))

#define RG_PXP_JCPLL_VCODIV_SET_RG_PXP_JCPLL_VCO_SCAPWR(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_SCAPWR, (reg32), (val))
#define RG_PXP_JCPLL_VCODIV_SET_RG_PXP_JCPLL_VCO_HALFLSB_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_HALFLSB_EN, (reg32), (val))
#define RG_PXP_JCPLL_VCODIV_SET_RG_PXP_JCPLL_VCO_CFIX(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_CFIX, (reg32), (val))
#define RG_PXP_JCPLL_VCODIV_SET_RG_PXP_JCPLL_VCODIV(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCODIV, (reg32), (val))

#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_SSC_PHASE_INI(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_PHASE_INI, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_SSC_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_EN, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H, (reg32), (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_SET_RG_PXP_JCPLL_VCO_TCLVAR(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR, (reg32), (val))

#define RG_PXP_JCPLL_SSC_TRI_EN_SET_RG_PXP_JCPLL_SSC_DELTA1(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_DELTA1, (reg32), (val))
#define RG_PXP_JCPLL_SSC_TRI_EN_SET_RG_PXP_JCPLL_SSC_TRI_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_TRI_EN, (reg32), (val))

#define RG_PXP_JCPLL_SSC_DELTA_SET_RG_PXP_JCPLL_SSC_PERIOD(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_PERIOD, (reg32), (val))
#define RG_PXP_JCPLL_SSC_DELTA_SET_RG_PXP_JCPLL_SSC_DELTA(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_DELTA, (reg32), (val))

#define RG_PXP_JCPLL_LDO_OUT_SET_RG_PXP_JCPLL_VTP(reg32, val)  REG_FLD_SET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP, (reg32), (val))
#define RG_PXP_JCPLL_LDO_OUT_SET_RG_PXP_JCPLL_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP_EN, (reg32), (val))
#define RG_PXP_JCPLL_LDO_OUT_SET_RG_PXP_JCPLL_LDO_VCO_OUT(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_VCO_OUT, (reg32), (val))
#define RG_PXP_JCPLL_LDO_OUT_SET_RG_PXP_JCPLL_LDO_OUT(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_OUT, (reg32), (val))

#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_SET_RG_PXP_JCPLL_VCO_VTP(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP, (reg32), (val))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_SET_RG_PXP_JCPLL_VCO_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP_EN, (reg32), (val))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_SET_RG_PXP_JCPLL_LDO_VCO_VTP(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP, (reg32), (val))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_SET_RG_PXP_JCPLL_LDO_VCO_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP_EN, (reg32), (val))

#define RG_PXP_JCPLL_LDO_VTP_EN_SET_RG_PXP_JCPLL_TCL_VTP(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP, (reg32), (val))
#define RG_PXP_JCPLL_LDO_VTP_EN_SET_RG_PXP_JCPLL_TCL_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP_EN, (reg32), (val))
#define RG_PXP_JCPLL_LDO_VTP_EN_SET_RG_PXP_JCPLL_LDO_VTP(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP, (reg32), (val))
#define RG_PXP_JCPLL_LDO_VTP_EN_SET_RG_PXP_JCPLL_LDO_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP_EN, (reg32), (val))

#define RG_PXP_JCPLL_SPARE_H_SET_RG_PXP_JCPLL_VREF_SEL(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_VREF_SEL, (reg32), (val))
#define RG_PXP_JCPLL_SPARE_H_SET_RG_PXP_JCPLL_TCL_KBAND_VREF(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_TCL_KBAND_VREF, (reg32), (val))
#define RG_PXP_JCPLL_SPARE_H_SET_RG_PXP_JCPLL_SPARE_L(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_L, (reg32), (val))
#define RG_PXP_JCPLL_SPARE_H_SET_RG_PXP_JCPLL_SPARE_H(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_H, (reg32), (val))

#define RG_PXP_JCPLL_FREQ_MEAS_EN_SET_RG_PXP_TXPLL_LPF_SHCK_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_LPF_SHCK_EN, (reg32), (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_SET_RG_PXP_TXPLL_IB_EXT_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_IB_EXT_EN, (reg32), (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_SET_RG_PXP_750M_SYS_CK_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_750M_SYS_CK_EN, (reg32), (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_SET_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN, (reg32), (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_SET_RG_PXP_JCPLL_FREQ_MEAS_EN(reg32, val) REG_FLD_SET(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_FREQ_MEAS_EN, (reg32), (val))

#define RG_PXP_TXPLL_CHP_IBIAS_SET_RG_PXP_TXPLL_LPF_BC(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BC, (reg32), (val))
#define RG_PXP_TXPLL_CHP_IBIAS_SET_RG_PXP_TXPLL_LPF_BR(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BR, (reg32), (val))
#define RG_PXP_TXPLL_CHP_IBIAS_SET_RG_PXP_TXPLL_CHP_IOFST(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IOFST, (reg32), (val))
#define RG_PXP_TXPLL_CHP_IBIAS_SET_RG_PXP_TXPLL_CHP_IBIAS(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IBIAS, (reg32), (val))

#define RG_PXP_TXPLL_LPF_BP_SET_RG_PXP_TXPLL_KBAND_OPTION(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_KBAND_OPTION, (reg32), (val))
#define RG_PXP_TXPLL_LPF_BP_SET_RG_PXP_TXPLL_LPF_BWC(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWC, (reg32), (val))
#define RG_PXP_TXPLL_LPF_BP_SET_RG_PXP_TXPLL_LPF_BWR(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWR, (reg32), (val))
#define RG_PXP_TXPLL_LPF_BP_SET_RG_PXP_TXPLL_LPF_BP(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BP, (reg32), (val))

#define RG_PXP_TXPLL_KBAND_CODE_SET_RG_PXP_TXPLL_KBAND_KF(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KF, (reg32), (val))
#define RG_PXP_TXPLL_KBAND_CODE_SET_RG_PXP_TXPLL_KBAND_KFC(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KFC, (reg32), (val))
#define RG_PXP_TXPLL_KBAND_CODE_SET_RG_PXP_TXPLL_KBAND_DIV(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_DIV, (reg32), (val))
#define RG_PXP_TXPLL_KBAND_CODE_SET_RG_PXP_TXPLL_KBAND_CODE(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_CODE, (reg32), (val))

#define RG_PXP_TXPLL_KBAND_KS_SET_RG_PXP_TXPLL_MMD_DL_CODE(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_DL_CODE, (reg32), (val))
#define RG_PXP_TXPLL_KBAND_KS_SET_RG_PXP_TXPLL_MMD_PREDIV_MODE(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_PREDIV_MODE, (reg32), (val))
#define RG_PXP_TXPLL_KBAND_KS_SET_RG_PXP_TXPLL_POSTDIV_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_POSTDIV_EN, (reg32), (val))
#define RG_PXP_TXPLL_KBAND_KS_SET_RG_PXP_TXPLL_KBAND_KS(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_KBAND_KS, (reg32), (val))

#define RG_PXP_TXPLL_PHY_CK1_EN_SET_RG_PXP_TXPLL_MONCK_SEL(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_SEL, (reg32), (val))
#define RG_PXP_TXPLL_PHY_CK1_EN_SET_RG_PXP_TXPLL_MONCK_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_EN, (reg32), (val))
#define RG_PXP_TXPLL_PHY_CK1_EN_SET_RG_PXP_TXPLL_PHY_CK2_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK2_EN, (reg32), (val))
#define RG_PXP_TXPLL_PHY_CK1_EN_SET_RG_PXP_TXPLL_PHY_CK1_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK1_EN, (reg32), (val))

#define RG_PXP_TXPLL_REFIN_INTERNAL_SET_RG_PXP_TXPLL_PLL_RSTB(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_PLL_RSTB, (reg32), (val))
#define RG_PXP_TXPLL_REFIN_INTERNAL_SET_RG_PXP_TXPLL_RST_DLY(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_RST_DLY, (reg32), (val))
#define RG_PXP_TXPLL_REFIN_INTERNAL_SET_RG_PXP_TXPLL_REFIN_DIV(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_DIV, (reg32), (val))
#define RG_PXP_TXPLL_REFIN_INTERNAL_SET_RG_PXP_TXPLL_REFIN_INTERNAL(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_INTERNAL, (reg32), (val))

#define RG_PXP_TXPLL_SDM_DI_EN_SET_RG_PXP_TXPLL_SDM_MODE(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_MODE, (reg32), (val))
#define RG_PXP_TXPLL_SDM_DI_EN_SET_RG_PXP_TXPLL_SDM_IFM(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_IFM, (reg32), (val))
#define RG_PXP_TXPLL_SDM_DI_EN_SET_RG_PXP_TXPLL_SDM_DI_LS(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_LS, (reg32), (val))
#define RG_PXP_TXPLL_SDM_DI_EN_SET_RG_PXP_TXPLL_SDM_DI_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_EN, (reg32), (val))

#define RG_PXP_TXPLL_SDM_ORD_SET_RG_PXP_TXPLL_TCL_AMP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_TCL_AMP_EN, (reg32), (val))
#define RG_PXP_TXPLL_SDM_ORD_SET_RG_PXP_TXPLL_SDM_HREN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_HREN, (reg32), (val))
#define RG_PXP_TXPLL_SDM_ORD_SET_RG_PXP_TXPLL_SDM_OUT(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_OUT, (reg32), (val))
#define RG_PXP_TXPLL_SDM_ORD_SET_RG_PXP_TXPLL_SDM_ORD(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_ORD, (reg32), (val))

#define RG_PXP_TXPLL_TCL_AMP_GAIN_SET_RG_PXP_TXPLL_TCL_CMP_VTH(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_VTH, (reg32), (val))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_SET_RG_PXP_TXPLL_TCL_CMP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_EN, (reg32), (val))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_SET_RG_PXP_TXPLL_TCL_AMP_VREF(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_VREF, (reg32), (val))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_SET_RG_PXP_TXPLL_TCL_AMP_GAIN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_GAIN, (reg32), (val))

#define RG_PXP_TXPLL_TCL_LPF_EN_SET_RG_PXP_TXPLL_VCO_CFIX(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCO_CFIX, (reg32), (val))
#define RG_PXP_TXPLL_TCL_LPF_EN_SET_RG_PXP_TXPLL_VCODIV(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCODIV, (reg32), (val))
#define RG_PXP_TXPLL_TCL_LPF_EN_SET_RG_PXP_TXPLL_TCL_LPF_BW(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_BW, (reg32), (val))
#define RG_PXP_TXPLL_TCL_LPF_EN_SET_RG_PXP_TXPLL_TCL_LPF_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_EN, (reg32), (val))

#define RG_PXP_TXPLL_VCO_HALFLSB_EN_SET_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L, (reg32), (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_SET_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H, (reg32), (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_SET_RG_PXP_TXPLL_VCO_TCLVAR(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_TCLVAR, (reg32), (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_SET_RG_PXP_TXPLL_VCO_SCAPWR(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_SCAPWR, (reg32), (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_SET_RG_PXP_TXPLL_VCO_HALFLSB_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_HALFLSB_EN, (reg32), (val))

#define RG_PXP_TXPLL_SSC_EN_SET_RG_PXP_TXPLL_SSC_TRI_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_TRI_EN, (reg32), (val))
#define RG_PXP_TXPLL_SSC_EN_SET_RG_PXP_TXPLL_SSC_PHASE_INI(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_PHASE_INI, (reg32), (val))
#define RG_PXP_TXPLL_SSC_EN_SET_RG_PXP_TXPLL_SSC_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_EN, (reg32), (val))

#define RG_PXP_TXPLL_SSC_DELTA1_SET_RG_PXP_TXPLL_SSC_DELTA(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA, (reg32), (val))
#define RG_PXP_TXPLL_SSC_DELTA1_SET_RG_PXP_TXPLL_SSC_DELTA1(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA1, (reg32), (val))

#define RG_PXP_TXPLL_SSC_PERIOD_SET_RG_PXP_TXPLL_LDO_VCO_OUT(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_VCO_OUT, (reg32), (val))
#define RG_PXP_TXPLL_SSC_PERIOD_SET_RG_PXP_TXPLL_LDO_OUT(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_OUT, (reg32), (val))
#define RG_PXP_TXPLL_SSC_PERIOD_SET_RG_PXP_TXPLL_SSC_PERIOD(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_SSC_PERIOD, (reg32), (val))

#define RG_PXP_TXPLL_VTP_EN_SET_RG_PXP_TXPLL_LDO_VCO_VTP(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP, (reg32), (val))
#define RG_PXP_TXPLL_VTP_EN_SET_RG_PXP_TXPLL_LDO_VCO_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP_EN, (reg32), (val))
#define RG_PXP_TXPLL_VTP_EN_SET_RG_PXP_TXPLL_VTP(reg32, val)   REG_FLD_SET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP, (reg32), (val))
#define RG_PXP_TXPLL_VTP_EN_SET_RG_PXP_TXPLL_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP_EN, (reg32), (val))

#define RG_PXP_TXPLL_VCO_VTP_EN_SET_RG_PXP_TXPLL_LDO_VTP(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP, (reg32), (val))
#define RG_PXP_TXPLL_VCO_VTP_EN_SET_RG_PXP_TXPLL_LDO_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP_EN, (reg32), (val))
#define RG_PXP_TXPLL_VCO_VTP_EN_SET_RG_PXP_TXPLL_VCO_VTP(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP, (reg32), (val))
#define RG_PXP_TXPLL_VCO_VTP_EN_SET_RG_PXP_TXPLL_VCO_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP_EN, (reg32), (val))

#define RG_PXP_TXPLL_TCL_VTP_EN_SET_RG_PXP_TXPLL_SPARE_L(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_L, (reg32), (val))
#define RG_PXP_TXPLL_TCL_VTP_EN_SET_RG_PXP_TXPLL_SPARE_H(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_H, (reg32), (val))
#define RG_PXP_TXPLL_TCL_VTP_EN_SET_RG_PXP_TXPLL_TCL_VTP(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP, (reg32), (val))
#define RG_PXP_TXPLL_TCL_VTP_EN_SET_RG_PXP_TXPLL_TCL_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP_EN, (reg32), (val))

#define RG_PXP_TXPLL_TCL_KBAND_VREF_SET_RG_PXP_TXPLL_POSTDIV_D256_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_POSTDIV_D256_EN, (reg32), (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_SET_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN, (reg32), (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_SET_RG_PXP_TXPLL_FREQ_MEAS_EN(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_FREQ_MEAS_EN, (reg32), (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_SET_RG_PXP_TXPLL_VREF_SEL(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VREF_SEL, (reg32), (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_SET_RG_PXP_TXPLL_TCL_KBAND_VREF(reg32, val) REG_FLD_SET(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_TCL_KBAND_VREF, (reg32), (val))

#define RG_PCIE_CLKTX0_AMP_SET_RG_PXP_PCIE_CLKTX0_IMP_SEL(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_IMP_SEL, (reg32), (val))
#define RG_PCIE_CLKTX0_AMP_SET_RG_PXP_PCIE_CLKTX0_HZ(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_HZ, (reg32), (val))
#define RG_PCIE_CLKTX0_AMP_SET_RG_PCIE_CLKTX0_FORCE_OUT1(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_FORCE_OUT1, (reg32), (val))
#define RG_PCIE_CLKTX0_AMP_SET_RG_PCIE_CLKTX0_SR(reg32, val)   REG_FLD_SET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_SR, (reg32), (val))
#define RG_PCIE_CLKTX0_AMP_SET_RG_PCIE_CLKTX0_OFFSET(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_OFFSET, (reg32), (val))
#define RG_PCIE_CLKTX0_AMP_SET_RG_PCIE_CLKTX0_AMP(reg32, val)  REG_FLD_SET(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_AMP, (reg32), (val))

#define RG_PCIE_CLKTX1_AMP_SET_RG_PXP_PCIE_CLKTX1_IMP_SEL(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_IMP_SEL, (reg32), (val))
#define RG_PCIE_CLKTX1_AMP_SET_RG_PXP_PCIE_CLKTX1_HZ(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_HZ, (reg32), (val))
#define RG_PCIE_CLKTX1_AMP_SET_RG_PCIE_CLKTX1_FORCE_OUT1(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_FORCE_OUT1, (reg32), (val))
#define RG_PCIE_CLKTX1_AMP_SET_RG_PCIE_CLKTX1_SR(reg32, val)   REG_FLD_SET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_SR, (reg32), (val))
#define RG_PCIE_CLKTX1_AMP_SET_RG_PCIE_CLKTX1_OFFSET(reg32, val) REG_FLD_SET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_OFFSET, (reg32), (val))
#define RG_PCIE_CLKTX1_AMP_SET_RG_PCIE_CLKTX1_AMP(reg32, val)  REG_FLD_SET(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_AMP, (reg32), (val))

#define RG_PXP_PLL_MONCLK_SEL_SET_RG_PXP_TDC_AUTOEN(reg32, val) REG_FLD_SET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_TDC_AUTOEN, (reg32), (val))
#define RG_PXP_PLL_MONCLK_SEL_SET_RG_PXP_PLL_CMN_RESERVE1(reg32, val) REG_FLD_SET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE1, (reg32), (val))
#define RG_PXP_PLL_MONCLK_SEL_SET_RG_PXP_PLL_CMN_RESERVE0(reg32, val) REG_FLD_SET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE0, (reg32), (val))
#define RG_PXP_PLL_MONCLK_SEL_SET_RG_PXP_PLL_VTP_EN(reg32, val) REG_FLD_SET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP_EN, (reg32), (val))
#define RG_PXP_PLL_MONCLK_SEL_SET_RG_PXP_PLL_VTP(reg32, val)   REG_FLD_SET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP, (reg32), (val))
#define RG_PXP_PLL_MONCLK_SEL_SET_RG_PXP_PLL_MONCLK_SEL(reg32, val) REG_FLD_SET(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_MONCLK_SEL, (reg32), (val))

#define RG_PXP_TDC_TXCK_SEL_SET_RG_PXP_TDC_MON_CK_EN(reg32, val) REG_FLD_SET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_MON_CK_EN, (reg32), (val))
#define RG_PXP_TDC_TXCK_SEL_SET_RG_PXP_TDC_FT_CK_EN(reg32, val) REG_FLD_SET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_FT_CK_EN, (reg32), (val))
#define RG_PXP_TDC_TXCK_SEL_SET_RG_PXP_TDC_RXCK_SEL(reg32, val) REG_FLD_SET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_RXCK_SEL, (reg32), (val))
#define RG_PXP_TDC_TXCK_SEL_SET_RG_PXP_TDC_TXCK_SEL(reg32, val) REG_FLD_SET(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_TXCK_SEL, (reg32), (val))

#define RG_PXP_TDC_SYNC_CK_SEL_SET_RG_PXP_TDC_SYNC_CK_SEL(reg32, val) REG_FLD_SET(RG_PXP_TDC_SYNC_CK_SEL_FLD_RG_PXP_TDC_SYNC_CK_SEL, (reg32), (val))

#define RGS_PXP_JCPLL_KBAND_CODE_SET_RGS_PXP_JCPLL_KBAND_CODE(reg32, val) REG_FLD_SET(RGS_PXP_JCPLL_KBAND_CODE_FLD_RGS_PXP_JCPLL_KBAND_CODE, (reg32), (val))

#define RGS_PXP_TXPLL_KBAND_CODE_SET_RGS_PXP_TXPLL_KBAND_CODE(reg32, val) REG_FLD_SET(RGS_PXP_TXPLL_KBAND_CODE_FLD_RGS_PXP_TXPLL_KBAND_CODE, (reg32), (val))

#define RG_PXP_TX_SER_LOADSEL_SET_RG_PXP_TX_CKMON_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_CKMON_EN, (reg32), (val))
#define RG_PXP_TX_SER_LOADSEL_SET_RG_PXP_TX_SR_REDUCTION(reg32, val) REG_FLD_SET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SR_REDUCTION, (reg32), (val))
#define RG_PXP_TX_SER_LOADSEL_SET_RG_PXP_TX_DIGFF_CK_INV(reg32, val) REG_FLD_SET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_DIGFF_CK_INV, (reg32), (val))
#define RG_PXP_TX_SER_LOADSEL_SET_RG_PXP_TX_SER_LOADSEL(reg32, val) REG_FLD_SET(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SER_LOADSEL, (reg32), (val))

#define RG_PXP_TX_CKMON_SEL_SET_RG_PXP_TX_FIR_CHGPLR_CN1(reg32, val) REG_FLD_SET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_FIR_CHGPLR_CN1, (reg32), (val))
#define RG_PXP_TX_CKMON_SEL_SET_RG_PXP_TX_LSDATA(reg32, val)   REG_FLD_SET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA, (reg32), (val))
#define RG_PXP_TX_CKMON_SEL_SET_RG_PXP_TX_LSDATA_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA_EN, (reg32), (val))
#define RG_PXP_TX_CKMON_SEL_SET_RG_PXP_TX_CKMON_SEL(reg32, val) REG_FLD_SET(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_CKMON_SEL, (reg32), (val))

#define RG_PXP_TX_FIR_CHGPLR_C1_SET_RG_PXP_TX_VMON_SEL(reg32, val) REG_FLD_SET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_SEL, (reg32), (val))
#define RG_PXP_TX_FIR_CHGPLR_C1_SET_RG_PXP_TX_VMON_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_EN, (reg32), (val))
#define RG_PXP_TX_FIR_CHGPLR_C1_SET_RG_PXP_TX_FIR_CHGPLR_C2(reg32, val) REG_FLD_SET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C2, (reg32), (val))
#define RG_PXP_TX_FIR_CHGPLR_C1_SET_RG_PXP_TX_FIR_CHGPLR_C1(reg32, val) REG_FLD_SET(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C1, (reg32), (val))

#define RG_PXP_TX_TXLBRX_EN_SET_RG_PXP_TX_TERMCAL_VREF_L(reg32, val) REG_FLD_SET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_L, (reg32), (val))
#define RG_PXP_TX_TXLBRX_EN_SET_RG_PXP_TX_TERMCAL_VREF_H(reg32, val) REG_FLD_SET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_H, (reg32), (val))
#define RG_PXP_TX_TXLBRX_EN_SET_RG_PXP_TX_INT_EN(reg32, val)   REG_FLD_SET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_INT_EN, (reg32), (val))
#define RG_PXP_TX_TXLBRX_EN_SET_RG_PXP_TX_TXLBRX_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TXLBRX_EN, (reg32), (val))

#define RG_PXP_TX_CKLDO_EN_SET_RG_PXP_TX_DMEDGEGEN_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_DMEDGEGEN_EN, (reg32), (val))
#define RG_PXP_TX_CKLDO_EN_SET_RG_PXP_TX_RXDET_METHOD(reg32, val) REG_FLD_SET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_RXDET_METHOD, (reg32), (val))
#define RG_PXP_TX_CKLDO_EN_SET_RG_PXP_TX_CKLDO_LVR(reg32, val) REG_FLD_SET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_LVR, (reg32), (val))
#define RG_PXP_TX_CKLDO_EN_SET_RG_PXP_TX_CKLDO_EN(reg32, val)  REG_FLD_SET(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_EN, (reg32), (val))

#define RG_PXP_TX_MULTLANE_EN_SET_RG_PXP_TX_RESERVED(reg32, val) REG_FLD_SET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_RESERVED, (reg32), (val))
#define RG_PXP_TX_MULTLANE_EN_SET_RG_PXP_TX_AUTOZERO_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_AUTOZERO_EN, (reg32), (val))
#define RG_PXP_TX_MULTLANE_EN_SET_RG_PXP_TX_TDC_CK_SEL(reg32, val) REG_FLD_SET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TDC_CK_SEL, (reg32), (val))
#define RG_PXP_TX_MULTLANE_EN_SET_RG_PXP_TX_TERMCAL_SELPN(reg32, val) REG_FLD_SET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TERMCAL_SELPN, (reg32), (val))
#define RG_PXP_TX_MULTLANE_EN_SET_RG_PXP_TX_MULTLANE_EN(reg32, val) REG_FLD_SET(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_MULTLANE_EN, (reg32), (val))

#define RG_PXP_RX_BUSBIT_SEL_SET_RG_PXP_RX_PHY_CK_SEL_FORCE(reg32, val) REG_FLD_SET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL_FORCE, (reg32), (val))
#define RG_PXP_RX_BUSBIT_SEL_SET_RG_PXP_RX_PHY_CK_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL, (reg32), (val))
#define RG_PXP_RX_BUSBIT_SEL_SET_RG_PXP_RX_BUSBIT_SEL_FORCE(reg32, val) REG_FLD_SET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL_FORCE, (reg32), (val))
#define RG_PXP_RX_BUSBIT_SEL_SET_RG_PXP_RX_BUSBIT_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL, (reg32), (val))

#define RG_PXP_RX_MPXSEL_SET_RG_PXP_RX_SYNC_INV(reg32, val)    REG_FLD_SET(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_SYNC_INV, (reg32), (val))
#define RG_PXP_RX_MPXSEL_SET_RG_PXP_RX_DBGSEL(reg32, val)      REG_FLD_SET(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_DBGSEL, (reg32), (val))
#define RG_PXP_RX_MPXSEL_SET_RG_PXP_RX_MPXSEL(reg32, val)      REG_FLD_SET(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_MPXSEL, (reg32), (val))

#define RG_PXP_RX_REV_0_SET_RG_PXP_RX_REV_1(reg32, val)        REG_FLD_SET(RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_1, (reg32), (val))
#define RG_PXP_RX_REV_0_SET_RG_PXP_RX_REV_0(reg32, val)        REG_FLD_SET(RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_0, (reg32), (val))

#define RG_PXP_RX_PHYCK_DIV_SET_RG_PXP_RX_TDC_CK_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_TDC_CK_SEL, (reg32), (val))
#define RG_PXP_RX_PHYCK_DIV_SET_RG_PXP_RX_PHYCK_RSTB(reg32, val) REG_FLD_SET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_RSTB, (reg32), (val))
#define RG_PXP_RX_PHYCK_DIV_SET_RG_PXP_RX_PHYCK_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_SEL, (reg32), (val))
#define RG_PXP_RX_PHYCK_DIV_SET_RG_PXP_RX_PHYCK_DIV(reg32, val) REG_FLD_SET(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_DIV, (reg32), (val))

#define RG_PXP_CDR_PD_PICAL_CKD8_INV_SET_RG_PXP_CDR_PD_EDGE_DIS(reg32, val) REG_FLD_SET(RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_EDGE_DIS, (reg32), (val))
#define RG_PXP_CDR_PD_PICAL_CKD8_INV_SET_RG_PXP_CDR_PD_PICAL_CKD8_INV(reg32, val) REG_FLD_SET(RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_PICAL_CKD8_INV, (reg32), (val))

#define RG_PXP_CDR_LPF_BOT_LIM_SET_RG_PXP_CDR_LPF_KI_GAIN(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_KI_GAIN, (reg32), (val))
#define RG_PXP_CDR_LPF_BOT_LIM_SET_RG_PXP_CDR_LPF_BOT_LIM(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_BOT_LIM, (reg32), (val))

#define RG_PXP_CDR_LPF_KP_GAIN_SET_RG_PXP_CDR_LPF_MJV_LIM(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_LIM, (reg32), (val))
#define RG_PXP_CDR_LPF_KP_GAIN_SET_RG_PXP_CDR_LPF_MJV_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_EN, (reg32), (val))
#define RG_PXP_CDR_LPF_KP_GAIN_SET_RG_PXP_CDR_LPF_LIN_LIM(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_LIN_LIM, (reg32), (val))
#define RG_PXP_CDR_LPF_KP_GAIN_SET_RG_PXP_CDR_LPF_KP_GAIN(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_KP_GAIN, (reg32), (val))

#define RG_PXP_CDR_LPF_RATIO_SET_RG_PXP_CDR_LPF_TOP_LIM(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_TOP_LIM, (reg32), (val))
#define RG_PXP_CDR_LPF_RATIO_SET_RG_PXP_CDR_LPF_RATIO(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_RATIO, (reg32), (val))

#define RG_PXP_CDR_LPF_SNAPSHOT_SET_RG_PXP_CDR_LPF_SET(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SET, (reg32), (val))
#define RG_PXP_CDR_LPF_SNAPSHOT_SET_RG_PXP_CDR_LPF_SNAPSHOT(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SNAPSHOT, (reg32), (val))

#define RG_PXP_CDR_LPF_SETVALUE_SET_RG_PXP_CDR_LPF_PISTEP_CTRL(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_PISTEP_CTRL, (reg32), (val))
#define RG_PXP_CDR_LPF_SETVALUE_SET_RG_PXP_CDR_LPF_SETVALUE(reg32, val) REG_FLD_SET(RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_SETVALUE, (reg32), (val))

#define RG_PXP_CDR_PR_INJ_MODE_SET_RG_PXP_CDR_PR_INJ_FORCE_OFF(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_OFF, (reg32), (val))
#define RG_PXP_CDR_PR_INJ_MODE_SET_RG_PXP_CDR_PR_INJ_FORCE_ON(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_ON, (reg32), (val))
#define RG_PXP_CDR_PR_INJ_MODE_SET_RG_PXP_CDR_PR_INPUT_MODE(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INPUT_MODE, (reg32), (val))
#define RG_PXP_CDR_PR_INJ_MODE_SET_RG_PXP_CDR_PR_INJ_MODE(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_MODE, (reg32), (val))

#define RG_PXP_CDR_PR_BETA_DAC_SET_RG_PXP_CDR_PR_KBAND_DIV(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_KBAND_DIV, (reg32), (val))
#define RG_PXP_CDR_PR_BETA_DAC_SET_RG_PXP_CDR_PR_BETA_SEL(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_SEL, (reg32), (val))
#define RG_PXP_CDR_PR_BETA_DAC_SET_RG_PXP_CDR_PR_VCOADC_OS(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_VCOADC_OS, (reg32), (val))
#define RG_PXP_CDR_PR_BETA_DAC_SET_RG_PXP_CDR_PR_BETA_DAC(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_DAC, (reg32), (val))

#define RG_PXP_CDR_PR_VREG_IBAND_VAL_SET_RG_PXP_CDR_PR_FBKSEL(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_FBKSEL, (reg32), (val))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_SET_RG_PXP_CDR_PR_DAC_BAND(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_DAC_BAND, (reg32), (val))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_SET_RG_PXP_CDR_PR_VREG_CKBUF_VAL(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_CKBUF_VAL, (reg32), (val))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_SET_RG_PXP_CDR_PR_VREG_IBAND_VAL(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_IBAND_VAL, (reg32), (val))

#define RG_PXP_CDR_PR_CKREF_DIV_SET_RG_PXP_CDR_PR_MONMUXVC(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_MONMUXVC, (reg32), (val))
#define RG_PXP_CDR_PR_CKREF_DIV_SET_RG_PXP_CDR_PR_RSTB_BYPASS(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RSTB_BYPASS, (reg32), (val))
#define RG_PXP_CDR_PR_CKREF_DIV_SET_RG_PXP_CDR_PR_RST_DLY(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RST_DLY, (reg32), (val))
#define RG_PXP_CDR_PR_CKREF_DIV_SET_RG_PXP_CDR_PR_CKREF_DIV(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_CKREF_DIV, (reg32), (val))

#define RG_PXP_CDR_PR_MONCK_EN_SET_RG_PXP_CDR_PR_RESERVE1(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE1, (reg32), (val))
#define RG_PXP_CDR_PR_MONCK_EN_SET_RG_PXP_CDR_PR_RESERVE0(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE0, (reg32), (val))
#define RG_PXP_CDR_PR_MONCK_EN_SET_RG_PXP_CDR_PR_MONCK_MUX(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_MUX, (reg32), (val))
#define RG_PXP_CDR_PR_MONCK_EN_SET_RG_PXP_CDR_PR_MONCK_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_EN, (reg32), (val))

#define RG_PXP_CDR_PR_TDC_REF_SEL_SET_RG_PXP_CDR_PR_CKREF_DIV1(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_CKREF_DIV1, (reg32), (val))
#define RG_PXP_CDR_PR_TDC_REF_SEL_SET_RG_PXP_CDR_PR_LDO_FORCE_ON(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_LDO_FORCE_ON, (reg32), (val))
#define RG_PXP_CDR_PR_TDC_REF_SEL_SET_RG_PXP_CDR_PR_COR_HBW_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_COR_HBW_EN, (reg32), (val))
#define RG_PXP_CDR_PR_TDC_REF_SEL_SET_RG_PXP_CDR_PR_TDC_REF_SEL(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_TDC_REF_SEL, (reg32), (val))

#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_RX_DAC_MON(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_RX_DAC_MON, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PR_CAP_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_CAP_EN, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PR_BUF_IN_SR(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_BUF_IN_SR, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PI_LDO_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PI_LDO_EN, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PR_VREG_PI_VAL(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_VREG_PI_VAL, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PR_XFICK_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_XFICK_EN, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PR_MONPI_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPI_EN, (reg32), (val))
#define RG_PXP_CDR_PR_MONPR_EN_SET_RG_PXP_CDR_PR_MONPR_EN(reg32, val) REG_FLD_SET(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPR_EN, (reg32), (val))

#define RG_PXP_RX_DAC_RANGE_SET_RG_PXP_RX_SIGDET_LPF_CTRL(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_LPF_CTRL, (reg32), (val))
#define RG_PXP_RX_DAC_RANGE_SET_RG_PXP_RX_SIGDET_DCTEST_EN(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_DCTEST_EN, (reg32), (val))
#define RG_PXP_RX_DAC_RANGE_SET_RG_PXP_RX_DAC_RANGE_EYE(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE_EYE, (reg32), (val))
#define RG_PXP_RX_DAC_RANGE_SET_RG_PXP_RX_DAC_RANGE(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE, (reg32), (val))

#define RG_PXP_RX_SIGDET_NOVTH_SET_RG_PXP_RX_FE_50OHMS_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_FE_50OHMS_SEL, (reg32), (val))
#define RG_PXP_RX_SIGDET_NOVTH_SET_RG_PXP_RX_SIGDET_VTH_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_VTH_SEL, (reg32), (val))
#define RG_PXP_RX_SIGDET_NOVTH_SET_RG_PXP_RX_SIGDET_PEAK(reg32, val) REG_FLD_SET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_PEAK, (reg32), (val))
#define RG_PXP_RX_SIGDET_NOVTH_SET_RG_PXP_RX_SIGDET_NOVTH(reg32, val) REG_FLD_SET(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_NOVTH, (reg32), (val))

#define RG_PXP_RX_FE_EQ_HZEN_SET_RG_PXP_RX_FE_VB_EQ3_EN(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ3_EN, (reg32), (val))
#define RG_PXP_RX_FE_EQ_HZEN_SET_RG_PXP_RX_FE_VB_EQ2_EN(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ2_EN, (reg32), (val))
#define RG_PXP_RX_FE_EQ_HZEN_SET_RG_PXP_RX_FE_VB_EQ1_EN(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ1_EN, (reg32), (val))
#define RG_PXP_RX_FE_EQ_HZEN_SET_RG_PXP_RX_FE_EQ_HZEN(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_EQ_HZEN, (reg32), (val))

#define RG_PXP_RX_FE_VCM_GEN_PWDB_SET_RG_PXP_RX_OSCAL_WAIT_WNDW(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_WAIT_WNDW, (reg32), (val))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_SET_RG_PXP_RX_OSCAL_CK_INV(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_CK_INV, (reg32), (val))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_SET_RG_PXP_RX_FE_VCM_SEL(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_SEL, (reg32), (val))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_SET_RG_PXP_RX_FE_VCM_GEN_PWDB(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_GEN_PWDB, (reg32), (val))

#define RG_PXP_RX_OSCAL_WATCH_WNDW_SET_RG_PXP_RX_OSCAL_COMPOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_COMPOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_WATCH_WNDW_SET_RG_PXP_RX_OSCAL_FORCE(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_FORCE, (reg32), (val))
#define RG_PXP_RX_OSCAL_WATCH_WNDW_SET_RG_PXP_RX_OSCAL_WATCH_WNDW(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_WATCH_WNDW, (reg32), (val))

#define RG_PXP_RX_OSCAL_OPTION_SET_RG_PXP_RX_OSCAL_CTLE1IOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_CTLE1IOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_OPTION_SET_RG_PXP_RX_OSCAL_LVSHOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_LVSHOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_OPTION_SET_RG_PXP_RX_OSCAL_OPTION(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_OPTION, (reg32), (val))

#define RG_PXP_RX_OSCAL_CTLE2IOS_SET_RG_PXP_RX_OSCAL_VGA1VOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1VOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_CTLE2IOS_SET_RG_PXP_RX_OSCAL_VGA1IOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1IOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_CTLE2IOS_SET_RG_PXP_RX_OSCAL_CTLE2VOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2VOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_CTLE2IOS_SET_RG_PXP_RX_OSCAL_CTLE2IOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2IOS, (reg32), (val))

#define RG_PXP_RX_OSCAL_VGA2IOS_SET_RG_PXP_AEQ_WAIT_WNDW(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_WAIT_WNDW, (reg32), (val))
#define RG_PXP_RX_OSCAL_VGA2IOS_SET_RG_PXP_AEQ_CK_INV(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_CK_INV, (reg32), (val))
#define RG_PXP_RX_OSCAL_VGA2IOS_SET_RG_PXP_RX_OSCAL_VGA2VOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2VOS, (reg32), (val))
#define RG_PXP_RX_OSCAL_VGA2IOS_SET_RG_PXP_RX_OSCAL_VGA2IOS(reg32, val) REG_FLD_SET(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2IOS, (reg32), (val))

#define RG_PXP_AEQ_WATCH_WNDW_SET_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK(reg32, val) REG_FLD_SET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK, (reg32), (val))
#define RG_PXP_AEQ_WATCH_WNDW_SET_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY(reg32, val) REG_FLD_SET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY, (reg32), (val))
#define RG_PXP_AEQ_WATCH_WNDW_SET_RG_PXP_AEQ_FR2HR_MODE(reg32, val) REG_FLD_SET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FR2HR_MODE, (reg32), (val))
#define RG_PXP_AEQ_WATCH_WNDW_SET_RG_PXP_AEQ_WATCH_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_WATCH_WNDW, (reg32), (val))

#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_SET_RG_PXP_AEQ_STATE(reg32, val) REG_FLD_SET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_STATE, (reg32), (val))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_SET_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY(reg32, val) REG_FLD_SET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY, (reg32), (val))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_SET_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE(reg32, val) REG_FLD_SET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE, (reg32), (val))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_SET_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY(reg32, val) REG_FLD_SET(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY, (reg32), (val))

#define RG_PXP_AEQ_OPTION_SET_RG_PXP_AEQ_OPTION3(reg32, val)   REG_FLD_SET(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION3, (reg32), (val))
#define RG_PXP_AEQ_OPTION_SET_RG_PXP_AEQ_OPTION2(reg32, val)   REG_FLD_SET(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION2, (reg32), (val))
#define RG_PXP_AEQ_OPTION_SET_RG_PXP_AEQ_OPTION(reg32, val)    REG_FLD_SET(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION, (reg32), (val))

#define RG_PXP_AEQ_CFORCE_SET_RG_PXP_AEQ_CTLE_ERR_TYPE(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CTLE_ERR_TYPE, (reg32), (val))
#define RG_PXP_AEQ_CFORCE_SET_RG_PXP_AEQ_OFORCE(reg32, val)    REG_FLD_SET(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_OFORCE, (reg32), (val))
#define RG_PXP_AEQ_CFORCE_SET_RG_PXP_AEQ_CFORCE(reg32, val)    REG_FLD_SET(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CFORCE, (reg32), (val))

#define RG_PXP_AEQ_CTLE_MAX_SET_RG_PXP_AEQ_CTLE_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_WNDW, (reg32), (val))
#define RG_PXP_AEQ_CTLE_MAX_SET_RG_PXP_AEQ_CTLE_TH(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_TH, (reg32), (val))
#define RG_PXP_AEQ_CTLE_MAX_SET_RG_PXP_AEQ_CTLE_STTL(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_STTL, (reg32), (val))
#define RG_PXP_AEQ_CTLE_MAX_SET_RG_PXP_AEQ_CTLE_MAX(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_MAX, (reg32), (val))

#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_SET_RG_PXP_RX_DAC_D0_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_DAC_D0_BYPASS_AEQ, (reg32), (val))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_SET_RG_PXP_AEQ_SAOS_TH(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_AEQ_SAOS_TH, (reg32), (val))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_SET_RG_PXP_RX_FE_PEAKING_CTRL_LSB(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_LSB, (reg32), (val))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_SET_RG_PXP_RX_FE_PEAKING_CTRL_MSB(reg32, val) REG_FLD_SET(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_MSB, (reg32), (val))

#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_SET_RG_PXP_RX_DAC_EYE_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_EYE_BYPASS_AEQ, (reg32), (val))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_SET_RG_PXP_RX_DAC_E1_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E1_BYPASS_AEQ, (reg32), (val))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_SET_RG_PXP_RX_DAC_E0_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E0_BYPASS_AEQ, (reg32), (val))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_SET_RG_PXP_RX_DAC_D1_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_D1_BYPASS_AEQ, (reg32), (val))

#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_SET_RG_PXP_RX_DAC_ERR1(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1, (reg32), (val))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_SET_RG_PXP_RX_DAC_ERR0(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0, (reg32), (val))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_SET_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ, (reg32), (val))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_SET_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ(reg32, val) REG_FLD_SET(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ, (reg32), (val))

#define RG_PXP_AEQ_CM1_WNDW_SET_RG_PXP_AEQ_DFETP1_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_DFETP1_WNDW, (reg32), (val))
#define RG_PXP_AEQ_CM1_WNDW_SET_RG_PXP_AEQ_VGA_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_VGA_WNDW, (reg32), (val))
#define RG_PXP_AEQ_CM1_WNDW_SET_RG_PXP_AEQ_CP1_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CP1_WNDW, (reg32), (val))
#define RG_PXP_AEQ_CM1_WNDW_SET_RG_PXP_AEQ_CM1_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CM1_WNDW, (reg32), (val))

#define RG_PXP_AEQ_DFETP2_WNDW_SET_RG_PXP_AEQ_DFETP5_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP5_WNDW, (reg32), (val))
#define RG_PXP_AEQ_DFETP2_WNDW_SET_RG_PXP_AEQ_DFETP4_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP4_WNDW, (reg32), (val))
#define RG_PXP_AEQ_DFETP2_WNDW_SET_RG_PXP_AEQ_DFETP3_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP3_WNDW, (reg32), (val))
#define RG_PXP_AEQ_DFETP2_WNDW_SET_RG_PXP_AEQ_DFETP2_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP2_WNDW, (reg32), (val))

#define RG_PXP_AEQ_DFETP6_WNDW_SET_RG_PXP_AEQ_TRN_DFENUM(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_TRN_DFENUM, (reg32), (val))
#define RG_PXP_AEQ_DFETP6_WNDW_SET_RG_PXP_AEQ_DFETP7_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP7_WNDW, (reg32), (val))
#define RG_PXP_AEQ_DFETP6_WNDW_SET_RG_PXP_AEQ_DFETP6_WNDW(reg32, val) REG_FLD_SET(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP6_WNDW, (reg32), (val))

#define RGS_PXP_RX_OSCAL_FE_VOS_SET_RGS_PXP_RX_OSCAL_CTLE1IOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_CTLE1IOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_FE_VOS_SET_RGS_PXP_RX_OSCAL_LVSHOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_LVSHOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_FE_VOS_SET_RGS_PXP_RX_OSCAL_COMPOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_COMPOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_FE_VOS_SET_RGS_PXP_RX_OSCAL_FE_VOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_FE_VOS, (reg32), (val))

#define RGS_PXP_RX_OSCAL_CTLE2IOS_SET_RGS_PXP_RX_OSCAL_VGA1VOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1VOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_SET_RGS_PXP_RX_OSCAL_VGA1IOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1IOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_SET_RGS_PXP_RX_OSCAL_CTLE2VOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2VOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_SET_RGS_PXP_RX_OSCAL_CTLE2IOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2IOS, (reg32), (val))

#define RGS_PXP_RX_OSCAL_VGA2IOS_SET_RGS_PXP_RX_OSCAL_VGA2VOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2VOS, (reg32), (val))
#define RGS_PXP_RX_OSCAL_VGA2IOS_SET_RGS_PXP_RX_OSCAL_VGA2IOS(reg32, val) REG_FLD_SET(RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2IOS, (reg32), (val))

#define RGS_PXP_AEQ_CTLE_SET_RGS_PXP_AEQ_CTLE(reg32, val)      REG_FLD_SET(RGS_PXP_AEQ_CTLE_FLD_RGS_PXP_AEQ_CTLE, (reg32), (val))

#define RGS_PXP_AEQ_SAOSC_EN_SET_RGS_PXP_AEQ_E0_OS(reg32, val) REG_FLD_SET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_E0_OS, (reg32), (val))
#define RGS_PXP_AEQ_SAOSC_EN_SET_RGS_PXP_AEQ_D1_OS(reg32, val) REG_FLD_SET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D1_OS, (reg32), (val))
#define RGS_PXP_AEQ_SAOSC_EN_SET_RGS_PXP_AEQ_D0_OS(reg32, val) REG_FLD_SET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D0_OS, (reg32), (val))
#define RGS_PXP_AEQ_SAOSC_EN_SET_RGS_PXP_AEQ_SAOSC_EN(reg32, val) REG_FLD_SET(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_SAOSC_EN, (reg32), (val))

#define RGS_PXP_AEQ_E1_OS_SET_RGS_PXP_AEQ_ERR1_OS(reg32, val)  REG_FLD_SET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR1_OS, (reg32), (val))
#define RGS_PXP_AEQ_E1_OS_SET_RGS_PXP_AEQ_ERR0_OS(reg32, val)  REG_FLD_SET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR0_OS, (reg32), (val))
#define RGS_PXP_AEQ_E1_OS_SET_RGS_PXP_AEQ_EYE_OS(reg32, val)   REG_FLD_SET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_EYE_OS, (reg32), (val))
#define RGS_PXP_AEQ_E1_OS_SET_RGS_PXP_AEQ_E1_OS(reg32, val)    REG_FLD_SET(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_E1_OS, (reg32), (val))

#define RG_PXP_CMN_EN_VAL_RG_PXP_CMN_TRIM(val)                 REG_FLD_VAL(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_TRIM, (val))
#define RG_PXP_CMN_EN_VAL_RG_PXP_CMN_VREFSEL(val)              REG_FLD_VAL(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_VREFSEL, (val))
#define RG_PXP_CMN_EN_VAL_RG_PXP_CMN_MPXSELTOP_DC(val)         REG_FLD_VAL(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_MPXSELTOP_DC, (val))
#define RG_PXP_CMN_EN_VAL_RG_PXP_CMN_EN(val)                   REG_FLD_VAL(RG_PXP_CMN_EN_FLD_RG_PXP_CMN_EN, (val))

#define RG_PXP_JCPLL_IB_EXT_EN_VAL_RG_PXP_JCPLL_CHP_IOFST(val) REG_FLD_VAL(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IOFST, (val))
#define RG_PXP_JCPLL_IB_EXT_EN_VAL_RG_PXP_JCPLL_CHP_IBIAS(val) REG_FLD_VAL(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_CHP_IBIAS, (val))
#define RG_PXP_JCPLL_IB_EXT_EN_VAL_RG_PXP_JCPLL_LPF_SHCK_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_LPF_SHCK_EN, (val))
#define RG_PXP_JCPLL_IB_EXT_EN_VAL_RG_PXP_JCPLL_IB_EXT_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_IB_EXT_EN_FLD_RG_PXP_JCPLL_IB_EXT_EN, (val))

#define RG_PXP_JCPLL_LPF_BR_VAL_RG_PXP_JCPLL_LPF_BWR(val)      REG_FLD_VAL(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BWR, (val))
#define RG_PXP_JCPLL_LPF_BR_VAL_RG_PXP_JCPLL_LPF_BP(val)       REG_FLD_VAL(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BP, (val))
#define RG_PXP_JCPLL_LPF_BR_VAL_RG_PXP_JCPLL_LPF_BC(val)       REG_FLD_VAL(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BC, (val))
#define RG_PXP_JCPLL_LPF_BR_VAL_RG_PXP_JCPLL_LPF_BR(val)       REG_FLD_VAL(RG_PXP_JCPLL_LPF_BR_FLD_RG_PXP_JCPLL_LPF_BR, (val))

#define RG_PXP_JCPLL_LPF_BWC_VAL_RG_PXP_JCPLL_KBAND_DIV(val)   REG_FLD_VAL(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_DIV, (val))
#define RG_PXP_JCPLL_LPF_BWC_VAL_RG_PXP_JCPLL_KBAND_CODE(val)  REG_FLD_VAL(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_CODE, (val))
#define RG_PXP_JCPLL_LPF_BWC_VAL_RG_PXP_JCPLL_KBAND_OPTION(val) REG_FLD_VAL(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_KBAND_OPTION, (val))
#define RG_PXP_JCPLL_LPF_BWC_VAL_RG_PXP_JCPLL_LPF_BWC(val)     REG_FLD_VAL(RG_PXP_JCPLL_LPF_BWC_FLD_RG_PXP_JCPLL_LPF_BWC, (val))

#define RG_PXP_JCPLL_KBAND_KFC_VAL_RG_PXP_JCPLL_POSTDIV_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_POSTDIV_EN, (val))
#define RG_PXP_JCPLL_KBAND_KFC_VAL_RG_PXP_JCPLL_KBAND_KS(val)  REG_FLD_VAL(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KS, (val))
#define RG_PXP_JCPLL_KBAND_KFC_VAL_RG_PXP_JCPLL_KBAND_KF(val)  REG_FLD_VAL(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KF, (val))
#define RG_PXP_JCPLL_KBAND_KFC_VAL_RG_PXP_JCPLL_KBAND_KFC(val) REG_FLD_VAL(RG_PXP_JCPLL_KBAND_KFC_FLD_RG_PXP_JCPLL_KBAND_KFC, (val))

#define RG_PXP_JCPLL_MMD_PREDIV_MODE_VAL_RG_PXP_JCPLL_POSTDIV_D5(val) REG_FLD_VAL(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D5, (val))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_VAL_RG_PXP_JCPLL_POSTDIV_D2(val) REG_FLD_VAL(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_POSTDIV_D2, (val))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_VAL_RG_PXP_JCPLL_MMD_DL_CODE(val) REG_FLD_VAL(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_DL_CODE, (val))
#define RG_PXP_JCPLL_MMD_PREDIV_MODE_VAL_RG_PXP_JCPLL_MMD_PREDIV_MODE(val) REG_FLD_VAL(RG_PXP_JCPLL_MMD_PREDIV_MODE_FLD_RG_PXP_JCPLL_MMD_PREDIV_MODE, (val))

#define RG_PXP_JCPLL_MONCK_EN_VAL_RG_PXP_JCPLL_REFIN_DIV(val)  REG_FLD_VAL(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_DIV, (val))
#define RG_PXP_JCPLL_MONCK_EN_VAL_RG_PXP_JCPLL_REFIN_INTERNAL(val) REG_FLD_VAL(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_REFIN_INTERNAL, (val))
#define RG_PXP_JCPLL_MONCK_EN_VAL_RG_PXP_JCPLL_MONCK_SEL(val)  REG_FLD_VAL(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_SEL, (val))
#define RG_PXP_JCPLL_MONCK_EN_VAL_RG_PXP_JCPLL_MONCK_EN(val)   REG_FLD_VAL(RG_PXP_JCPLL_MONCK_EN_FLD_RG_PXP_JCPLL_MONCK_EN, (val))

#define RG_PXP_JCPLL_RST_DLY_VAL_RG_PXP_JCPLL_SDM_DI_LS(val)   REG_FLD_VAL(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_LS, (val))
#define RG_PXP_JCPLL_RST_DLY_VAL_RG_PXP_JCPLL_SDM_DI_EN(val)   REG_FLD_VAL(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_SDM_DI_EN, (val))
#define RG_PXP_JCPLL_RST_DLY_VAL_RG_PXP_JCPLL_PLL_RSTB(val)    REG_FLD_VAL(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_PLL_RSTB, (val))
#define RG_PXP_JCPLL_RST_DLY_VAL_RG_PXP_JCPLL_RST_DLY(val)     REG_FLD_VAL(RG_PXP_JCPLL_RST_DLY_FLD_RG_PXP_JCPLL_RST_DLY, (val))

#define RG_PXP_JCPLL_SDM_IFM_VAL_RG_PXP_JCPLL_SDM_OUT(val)     REG_FLD_VAL(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_OUT, (val))
#define RG_PXP_JCPLL_SDM_IFM_VAL_RG_PXP_JCPLL_SDM_ORD(val)     REG_FLD_VAL(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_ORD, (val))
#define RG_PXP_JCPLL_SDM_IFM_VAL_RG_PXP_JCPLL_SDM_MODE(val)    REG_FLD_VAL(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_MODE, (val))
#define RG_PXP_JCPLL_SDM_IFM_VAL_RG_PXP_JCPLL_SDM_IFM(val)     REG_FLD_VAL(RG_PXP_JCPLL_SDM_IFM_FLD_RG_PXP_JCPLL_SDM_IFM, (val))

#define RG_PXP_JCPLL_SDM_HREN_VAL_RG_PXP_JCPLL_TCL_AMP_VREF(val) REG_FLD_VAL(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_VREF, (val))
#define RG_PXP_JCPLL_SDM_HREN_VAL_RG_PXP_JCPLL_TCL_AMP_GAIN(val) REG_FLD_VAL(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_GAIN, (val))
#define RG_PXP_JCPLL_SDM_HREN_VAL_RG_PXP_JCPLL_TCL_AMP_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_TCL_AMP_EN, (val))
#define RG_PXP_JCPLL_SDM_HREN_VAL_RG_PXP_JCPLL_SDM_HREN(val)   REG_FLD_VAL(RG_PXP_JCPLL_SDM_HREN_FLD_RG_PXP_JCPLL_SDM_HREN, (val))

#define RG_PXP_JCPLL_TCL_CMP_EN_VAL_RG_PXP_JCPLL_TCL_LPF_BW(val) REG_FLD_VAL(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_BW, (val))
#define RG_PXP_JCPLL_TCL_CMP_EN_VAL_RG_PXP_JCPLL_TCL_LPF_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_LPF_EN, (val))
#define RG_PXP_JCPLL_TCL_CMP_EN_VAL_RG_PXP_JCPLL_TCL_CMP_VTH(val) REG_FLD_VAL(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_VTH, (val))
#define RG_PXP_JCPLL_TCL_CMP_EN_VAL_RG_PXP_JCPLL_TCL_CMP_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_TCL_CMP_EN_FLD_RG_PXP_JCPLL_TCL_CMP_EN, (val))

#define RG_PXP_JCPLL_VCODIV_VAL_RG_PXP_JCPLL_VCO_SCAPWR(val)   REG_FLD_VAL(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_SCAPWR, (val))
#define RG_PXP_JCPLL_VCODIV_VAL_RG_PXP_JCPLL_VCO_HALFLSB_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_HALFLSB_EN, (val))
#define RG_PXP_JCPLL_VCODIV_VAL_RG_PXP_JCPLL_VCO_CFIX(val)     REG_FLD_VAL(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCO_CFIX, (val))
#define RG_PXP_JCPLL_VCODIV_VAL_RG_PXP_JCPLL_VCODIV(val)       REG_FLD_VAL(RG_PXP_JCPLL_VCODIV_FLD_RG_PXP_JCPLL_VCODIV, (val))

#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_SSC_PHASE_INI(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_PHASE_INI, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_SSC_EN(val)   REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_SSC_EN, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_SEL, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_SEL, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_VBIAS_EN, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR_VBIAS_EN, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VAR_IBIAS_EN, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_L, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_VCOVAR_BIAS_H, (val))
#define RG_PXP_JCPLL_VCO_TCLVAR_VAL_RG_PXP_JCPLL_VCO_TCLVAR(val) REG_FLD_VAL(RG_PXP_JCPLL_VCO_TCLVAR_FLD_RG_PXP_JCPLL_VCO_TCLVAR, (val))

#define RG_PXP_JCPLL_SSC_TRI_EN_VAL_RG_PXP_JCPLL_SSC_DELTA1(val) REG_FLD_VAL(RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_DELTA1, (val))
#define RG_PXP_JCPLL_SSC_TRI_EN_VAL_RG_PXP_JCPLL_SSC_TRI_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_SSC_TRI_EN_FLD_RG_PXP_JCPLL_SSC_TRI_EN, (val))

#define RG_PXP_JCPLL_SSC_DELTA_VAL_RG_PXP_JCPLL_SSC_PERIOD(val) REG_FLD_VAL(RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_PERIOD, (val))
#define RG_PXP_JCPLL_SSC_DELTA_VAL_RG_PXP_JCPLL_SSC_DELTA(val) REG_FLD_VAL(RG_PXP_JCPLL_SSC_DELTA_FLD_RG_PXP_JCPLL_SSC_DELTA, (val))

#define RG_PXP_JCPLL_LDO_OUT_VAL_RG_PXP_JCPLL_VTP(val)         REG_FLD_VAL(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP, (val))
#define RG_PXP_JCPLL_LDO_OUT_VAL_RG_PXP_JCPLL_VTP_EN(val)      REG_FLD_VAL(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_VTP_EN, (val))
#define RG_PXP_JCPLL_LDO_OUT_VAL_RG_PXP_JCPLL_LDO_VCO_OUT(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_VCO_OUT, (val))
#define RG_PXP_JCPLL_LDO_OUT_VAL_RG_PXP_JCPLL_LDO_OUT(val)     REG_FLD_VAL(RG_PXP_JCPLL_LDO_OUT_FLD_RG_PXP_JCPLL_LDO_OUT, (val))

#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_VAL_RG_PXP_JCPLL_VCO_VTP(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP, (val))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_VAL_RG_PXP_JCPLL_VCO_VTP_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_VCO_VTP_EN, (val))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_VAL_RG_PXP_JCPLL_LDO_VCO_VTP(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP, (val))
#define RG_PXP_JCPLL_LDO_VCO_VTP_EN_VAL_RG_PXP_JCPLL_LDO_VCO_VTP_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_VCO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VCO_VTP_EN, (val))

#define RG_PXP_JCPLL_LDO_VTP_EN_VAL_RG_PXP_JCPLL_TCL_VTP(val)  REG_FLD_VAL(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP, (val))
#define RG_PXP_JCPLL_LDO_VTP_EN_VAL_RG_PXP_JCPLL_TCL_VTP_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_TCL_VTP_EN, (val))
#define RG_PXP_JCPLL_LDO_VTP_EN_VAL_RG_PXP_JCPLL_LDO_VTP(val)  REG_FLD_VAL(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP, (val))
#define RG_PXP_JCPLL_LDO_VTP_EN_VAL_RG_PXP_JCPLL_LDO_VTP_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_LDO_VTP_EN_FLD_RG_PXP_JCPLL_LDO_VTP_EN, (val))

#define RG_PXP_JCPLL_SPARE_H_VAL_RG_PXP_JCPLL_VREF_SEL(val)    REG_FLD_VAL(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_VREF_SEL, (val))
#define RG_PXP_JCPLL_SPARE_H_VAL_RG_PXP_JCPLL_TCL_KBAND_VREF(val) REG_FLD_VAL(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_TCL_KBAND_VREF, (val))
#define RG_PXP_JCPLL_SPARE_H_VAL_RG_PXP_JCPLL_SPARE_L(val)     REG_FLD_VAL(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_L, (val))
#define RG_PXP_JCPLL_SPARE_H_VAL_RG_PXP_JCPLL_SPARE_H(val)     REG_FLD_VAL(RG_PXP_JCPLL_SPARE_H_FLD_RG_PXP_JCPLL_SPARE_H, (val))

#define RG_PXP_JCPLL_FREQ_MEAS_EN_VAL_RG_PXP_TXPLL_LPF_SHCK_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_LPF_SHCK_EN, (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_VAL_RG_PXP_TXPLL_IB_EXT_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_TXPLL_IB_EXT_EN, (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_VAL_RG_PXP_750M_SYS_CK_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_750M_SYS_CK_EN, (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_VAL_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_VCO_KBAND_MEAS_EN, (val))
#define RG_PXP_JCPLL_FREQ_MEAS_EN_VAL_RG_PXP_JCPLL_FREQ_MEAS_EN(val) REG_FLD_VAL(RG_PXP_JCPLL_FREQ_MEAS_EN_FLD_RG_PXP_JCPLL_FREQ_MEAS_EN, (val))

#define RG_PXP_TXPLL_CHP_IBIAS_VAL_RG_PXP_TXPLL_LPF_BC(val)    REG_FLD_VAL(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BC, (val))
#define RG_PXP_TXPLL_CHP_IBIAS_VAL_RG_PXP_TXPLL_LPF_BR(val)    REG_FLD_VAL(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_LPF_BR, (val))
#define RG_PXP_TXPLL_CHP_IBIAS_VAL_RG_PXP_TXPLL_CHP_IOFST(val) REG_FLD_VAL(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IOFST, (val))
#define RG_PXP_TXPLL_CHP_IBIAS_VAL_RG_PXP_TXPLL_CHP_IBIAS(val) REG_FLD_VAL(RG_PXP_TXPLL_CHP_IBIAS_FLD_RG_PXP_TXPLL_CHP_IBIAS, (val))

#define RG_PXP_TXPLL_LPF_BP_VAL_RG_PXP_TXPLL_KBAND_OPTION(val) REG_FLD_VAL(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_KBAND_OPTION, (val))
#define RG_PXP_TXPLL_LPF_BP_VAL_RG_PXP_TXPLL_LPF_BWC(val)      REG_FLD_VAL(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWC, (val))
#define RG_PXP_TXPLL_LPF_BP_VAL_RG_PXP_TXPLL_LPF_BWR(val)      REG_FLD_VAL(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BWR, (val))
#define RG_PXP_TXPLL_LPF_BP_VAL_RG_PXP_TXPLL_LPF_BP(val)       REG_FLD_VAL(RG_PXP_TXPLL_LPF_BP_FLD_RG_PXP_TXPLL_LPF_BP, (val))

#define RG_PXP_TXPLL_KBAND_CODE_VAL_RG_PXP_TXPLL_KBAND_KF(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KF, (val))
#define RG_PXP_TXPLL_KBAND_CODE_VAL_RG_PXP_TXPLL_KBAND_KFC(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_KFC, (val))
#define RG_PXP_TXPLL_KBAND_CODE_VAL_RG_PXP_TXPLL_KBAND_DIV(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_DIV, (val))
#define RG_PXP_TXPLL_KBAND_CODE_VAL_RG_PXP_TXPLL_KBAND_CODE(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_CODE_FLD_RG_PXP_TXPLL_KBAND_CODE, (val))

#define RG_PXP_TXPLL_KBAND_KS_VAL_RG_PXP_TXPLL_MMD_DL_CODE(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_DL_CODE, (val))
#define RG_PXP_TXPLL_KBAND_KS_VAL_RG_PXP_TXPLL_MMD_PREDIV_MODE(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_MMD_PREDIV_MODE, (val))
#define RG_PXP_TXPLL_KBAND_KS_VAL_RG_PXP_TXPLL_POSTDIV_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_POSTDIV_EN, (val))
#define RG_PXP_TXPLL_KBAND_KS_VAL_RG_PXP_TXPLL_KBAND_KS(val)   REG_FLD_VAL(RG_PXP_TXPLL_KBAND_KS_FLD_RG_PXP_TXPLL_KBAND_KS, (val))

#define RG_PXP_TXPLL_PHY_CK1_EN_VAL_RG_PXP_TXPLL_MONCK_SEL(val) REG_FLD_VAL(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_SEL, (val))
#define RG_PXP_TXPLL_PHY_CK1_EN_VAL_RG_PXP_TXPLL_MONCK_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_MONCK_EN, (val))
#define RG_PXP_TXPLL_PHY_CK1_EN_VAL_RG_PXP_TXPLL_PHY_CK2_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK2_EN, (val))
#define RG_PXP_TXPLL_PHY_CK1_EN_VAL_RG_PXP_TXPLL_PHY_CK1_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_PHY_CK1_EN_FLD_RG_PXP_TXPLL_PHY_CK1_EN, (val))

#define RG_PXP_TXPLL_REFIN_INTERNAL_VAL_RG_PXP_TXPLL_PLL_RSTB(val) REG_FLD_VAL(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_PLL_RSTB, (val))
#define RG_PXP_TXPLL_REFIN_INTERNAL_VAL_RG_PXP_TXPLL_RST_DLY(val) REG_FLD_VAL(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_RST_DLY, (val))
#define RG_PXP_TXPLL_REFIN_INTERNAL_VAL_RG_PXP_TXPLL_REFIN_DIV(val) REG_FLD_VAL(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_DIV, (val))
#define RG_PXP_TXPLL_REFIN_INTERNAL_VAL_RG_PXP_TXPLL_REFIN_INTERNAL(val) REG_FLD_VAL(RG_PXP_TXPLL_REFIN_INTERNAL_FLD_RG_PXP_TXPLL_REFIN_INTERNAL, (val))

#define RG_PXP_TXPLL_SDM_DI_EN_VAL_RG_PXP_TXPLL_SDM_MODE(val)  REG_FLD_VAL(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_MODE, (val))
#define RG_PXP_TXPLL_SDM_DI_EN_VAL_RG_PXP_TXPLL_SDM_IFM(val)   REG_FLD_VAL(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_IFM, (val))
#define RG_PXP_TXPLL_SDM_DI_EN_VAL_RG_PXP_TXPLL_SDM_DI_LS(val) REG_FLD_VAL(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_LS, (val))
#define RG_PXP_TXPLL_SDM_DI_EN_VAL_RG_PXP_TXPLL_SDM_DI_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_SDM_DI_EN_FLD_RG_PXP_TXPLL_SDM_DI_EN, (val))

#define RG_PXP_TXPLL_SDM_ORD_VAL_RG_PXP_TXPLL_TCL_AMP_EN(val)  REG_FLD_VAL(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_TCL_AMP_EN, (val))
#define RG_PXP_TXPLL_SDM_ORD_VAL_RG_PXP_TXPLL_SDM_HREN(val)    REG_FLD_VAL(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_HREN, (val))
#define RG_PXP_TXPLL_SDM_ORD_VAL_RG_PXP_TXPLL_SDM_OUT(val)     REG_FLD_VAL(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_OUT, (val))
#define RG_PXP_TXPLL_SDM_ORD_VAL_RG_PXP_TXPLL_SDM_ORD(val)     REG_FLD_VAL(RG_PXP_TXPLL_SDM_ORD_FLD_RG_PXP_TXPLL_SDM_ORD, (val))

#define RG_PXP_TXPLL_TCL_AMP_GAIN_VAL_RG_PXP_TXPLL_TCL_CMP_VTH(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_VTH, (val))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_VAL_RG_PXP_TXPLL_TCL_CMP_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_CMP_EN, (val))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_VAL_RG_PXP_TXPLL_TCL_AMP_VREF(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_VREF, (val))
#define RG_PXP_TXPLL_TCL_AMP_GAIN_VAL_RG_PXP_TXPLL_TCL_AMP_GAIN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_AMP_GAIN_FLD_RG_PXP_TXPLL_TCL_AMP_GAIN, (val))

#define RG_PXP_TXPLL_TCL_LPF_EN_VAL_RG_PXP_TXPLL_VCO_CFIX(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCO_CFIX, (val))
#define RG_PXP_TXPLL_TCL_LPF_EN_VAL_RG_PXP_TXPLL_VCODIV(val)   REG_FLD_VAL(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_VCODIV, (val))
#define RG_PXP_TXPLL_TCL_LPF_EN_VAL_RG_PXP_TXPLL_TCL_LPF_BW(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_BW, (val))
#define RG_PXP_TXPLL_TCL_LPF_EN_VAL_RG_PXP_TXPLL_TCL_LPF_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_LPF_EN_FLD_RG_PXP_TXPLL_TCL_LPF_EN, (val))

#define RG_PXP_TXPLL_VCO_HALFLSB_EN_VAL_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_L, (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_VAL_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_VCOVAR_BIAS_H, (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_VAL_RG_PXP_TXPLL_VCO_TCLVAR(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_TCLVAR, (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_VAL_RG_PXP_TXPLL_VCO_SCAPWR(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_SCAPWR, (val))
#define RG_PXP_TXPLL_VCO_HALFLSB_EN_VAL_RG_PXP_TXPLL_VCO_HALFLSB_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_HALFLSB_EN_FLD_RG_PXP_TXPLL_VCO_HALFLSB_EN, (val))

#define RG_PXP_TXPLL_SSC_EN_VAL_RG_PXP_TXPLL_SSC_TRI_EN(val)   REG_FLD_VAL(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_TRI_EN, (val))
#define RG_PXP_TXPLL_SSC_EN_VAL_RG_PXP_TXPLL_SSC_PHASE_INI(val) REG_FLD_VAL(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_PHASE_INI, (val))
#define RG_PXP_TXPLL_SSC_EN_VAL_RG_PXP_TXPLL_SSC_EN(val)       REG_FLD_VAL(RG_PXP_TXPLL_SSC_EN_FLD_RG_PXP_TXPLL_SSC_EN, (val))

#define RG_PXP_TXPLL_SSC_DELTA1_VAL_RG_PXP_TXPLL_SSC_DELTA(val) REG_FLD_VAL(RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA, (val))
#define RG_PXP_TXPLL_SSC_DELTA1_VAL_RG_PXP_TXPLL_SSC_DELTA1(val) REG_FLD_VAL(RG_PXP_TXPLL_SSC_DELTA1_FLD_RG_PXP_TXPLL_SSC_DELTA1, (val))

#define RG_PXP_TXPLL_SSC_PERIOD_VAL_RG_PXP_TXPLL_LDO_VCO_OUT(val) REG_FLD_VAL(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_VCO_OUT, (val))
#define RG_PXP_TXPLL_SSC_PERIOD_VAL_RG_PXP_TXPLL_LDO_OUT(val)  REG_FLD_VAL(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_LDO_OUT, (val))
#define RG_PXP_TXPLL_SSC_PERIOD_VAL_RG_PXP_TXPLL_SSC_PERIOD(val) REG_FLD_VAL(RG_PXP_TXPLL_SSC_PERIOD_FLD_RG_PXP_TXPLL_SSC_PERIOD, (val))

#define RG_PXP_TXPLL_VTP_EN_VAL_RG_PXP_TXPLL_LDO_VCO_VTP(val)  REG_FLD_VAL(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP, (val))
#define RG_PXP_TXPLL_VTP_EN_VAL_RG_PXP_TXPLL_LDO_VCO_VTP_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VCO_VTP_EN, (val))
#define RG_PXP_TXPLL_VTP_EN_VAL_RG_PXP_TXPLL_VTP(val)          REG_FLD_VAL(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP, (val))
#define RG_PXP_TXPLL_VTP_EN_VAL_RG_PXP_TXPLL_VTP_EN(val)       REG_FLD_VAL(RG_PXP_TXPLL_VTP_EN_FLD_RG_PXP_TXPLL_VTP_EN, (val))

#define RG_PXP_TXPLL_VCO_VTP_EN_VAL_RG_PXP_TXPLL_LDO_VTP(val)  REG_FLD_VAL(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP, (val))
#define RG_PXP_TXPLL_VCO_VTP_EN_VAL_RG_PXP_TXPLL_LDO_VTP_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_LDO_VTP_EN, (val))
#define RG_PXP_TXPLL_VCO_VTP_EN_VAL_RG_PXP_TXPLL_VCO_VTP(val)  REG_FLD_VAL(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP, (val))
#define RG_PXP_TXPLL_VCO_VTP_EN_VAL_RG_PXP_TXPLL_VCO_VTP_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_VCO_VTP_EN_FLD_RG_PXP_TXPLL_VCO_VTP_EN, (val))

#define RG_PXP_TXPLL_TCL_VTP_EN_VAL_RG_PXP_TXPLL_SPARE_L(val)  REG_FLD_VAL(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_L, (val))
#define RG_PXP_TXPLL_TCL_VTP_EN_VAL_RG_PXP_TXPLL_SPARE_H(val)  REG_FLD_VAL(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_SPARE_H, (val))
#define RG_PXP_TXPLL_TCL_VTP_EN_VAL_RG_PXP_TXPLL_TCL_VTP(val)  REG_FLD_VAL(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP, (val))
#define RG_PXP_TXPLL_TCL_VTP_EN_VAL_RG_PXP_TXPLL_TCL_VTP_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_VTP_EN_FLD_RG_PXP_TXPLL_TCL_VTP_EN, (val))

#define RG_PXP_TXPLL_TCL_KBAND_VREF_VAL_RG_PXP_TXPLL_POSTDIV_D256_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_POSTDIV_D256_EN, (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_VAL_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VCO_KBAND_MEAS_EN, (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_VAL_RG_PXP_TXPLL_FREQ_MEAS_EN(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_FREQ_MEAS_EN, (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_VAL_RG_PXP_TXPLL_VREF_SEL(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_VREF_SEL, (val))
#define RG_PXP_TXPLL_TCL_KBAND_VREF_VAL_RG_PXP_TXPLL_TCL_KBAND_VREF(val) REG_FLD_VAL(RG_PXP_TXPLL_TCL_KBAND_VREF_FLD_RG_PXP_TXPLL_TCL_KBAND_VREF, (val))

#define RG_PCIE_CLKTX0_AMP_VAL_RG_PXP_PCIE_CLKTX0_IMP_SEL(val) REG_FLD_VAL(RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_IMP_SEL, (val))
#define RG_PCIE_CLKTX0_AMP_VAL_RG_PXP_PCIE_CLKTX0_HZ(val)      REG_FLD_VAL(RG_PCIE_CLKTX0_AMP_FLD_RG_PXP_PCIE_CLKTX0_HZ, (val))
#define RG_PCIE_CLKTX0_AMP_VAL_RG_PCIE_CLKTX0_FORCE_OUT1(val)  REG_FLD_VAL(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_FORCE_OUT1, (val))
#define RG_PCIE_CLKTX0_AMP_VAL_RG_PCIE_CLKTX0_SR(val)          REG_FLD_VAL(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_SR, (val))
#define RG_PCIE_CLKTX0_AMP_VAL_RG_PCIE_CLKTX0_OFFSET(val)      REG_FLD_VAL(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_OFFSET, (val))
#define RG_PCIE_CLKTX0_AMP_VAL_RG_PCIE_CLKTX0_AMP(val)         REG_FLD_VAL(RG_PCIE_CLKTX0_AMP_FLD_RG_PCIE_CLKTX0_AMP, (val))

#define RG_PCIE_CLKTX1_AMP_VAL_RG_PXP_PCIE_CLKTX1_IMP_SEL(val) REG_FLD_VAL(RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_IMP_SEL, (val))
#define RG_PCIE_CLKTX1_AMP_VAL_RG_PXP_PCIE_CLKTX1_HZ(val)      REG_FLD_VAL(RG_PCIE_CLKTX1_AMP_FLD_RG_PXP_PCIE_CLKTX1_HZ, (val))
#define RG_PCIE_CLKTX1_AMP_VAL_RG_PCIE_CLKTX1_FORCE_OUT1(val)  REG_FLD_VAL(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_FORCE_OUT1, (val))
#define RG_PCIE_CLKTX1_AMP_VAL_RG_PCIE_CLKTX1_SR(val)          REG_FLD_VAL(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_SR, (val))
#define RG_PCIE_CLKTX1_AMP_VAL_RG_PCIE_CLKTX1_OFFSET(val)      REG_FLD_VAL(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_OFFSET, (val))
#define RG_PCIE_CLKTX1_AMP_VAL_RG_PCIE_CLKTX1_AMP(val)         REG_FLD_VAL(RG_PCIE_CLKTX1_AMP_FLD_RG_PCIE_CLKTX1_AMP, (val))

#define RG_PXP_PLL_MONCLK_SEL_VAL_RG_PXP_TDC_AUTOEN(val)       REG_FLD_VAL(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_TDC_AUTOEN, (val))
#define RG_PXP_PLL_MONCLK_SEL_VAL_RG_PXP_PLL_CMN_RESERVE1(val) REG_FLD_VAL(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE1, (val))
#define RG_PXP_PLL_MONCLK_SEL_VAL_RG_PXP_PLL_CMN_RESERVE0(val) REG_FLD_VAL(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_CMN_RESERVE0, (val))
#define RG_PXP_PLL_MONCLK_SEL_VAL_RG_PXP_PLL_VTP_EN(val)       REG_FLD_VAL(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP_EN, (val))
#define RG_PXP_PLL_MONCLK_SEL_VAL_RG_PXP_PLL_VTP(val)          REG_FLD_VAL(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_VTP, (val))
#define RG_PXP_PLL_MONCLK_SEL_VAL_RG_PXP_PLL_MONCLK_SEL(val)   REG_FLD_VAL(RG_PXP_PLL_MONCLK_SEL_FLD_RG_PXP_PLL_MONCLK_SEL, (val))

#define RG_PXP_TDC_TXCK_SEL_VAL_RG_PXP_TDC_MON_CK_EN(val)      REG_FLD_VAL(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_MON_CK_EN, (val))
#define RG_PXP_TDC_TXCK_SEL_VAL_RG_PXP_TDC_FT_CK_EN(val)       REG_FLD_VAL(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_FT_CK_EN, (val))
#define RG_PXP_TDC_TXCK_SEL_VAL_RG_PXP_TDC_RXCK_SEL(val)       REG_FLD_VAL(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_RXCK_SEL, (val))
#define RG_PXP_TDC_TXCK_SEL_VAL_RG_PXP_TDC_TXCK_SEL(val)       REG_FLD_VAL(RG_PXP_TDC_TXCK_SEL_FLD_RG_PXP_TDC_TXCK_SEL, (val))

#define RG_PXP_TDC_SYNC_CK_SEL_VAL_RG_PXP_TDC_SYNC_CK_SEL(val) REG_FLD_VAL(RG_PXP_TDC_SYNC_CK_SEL_FLD_RG_PXP_TDC_SYNC_CK_SEL, (val))

#define RGS_PXP_JCPLL_KBAND_CODE_VAL_RGS_PXP_JCPLL_KBAND_CODE(val) REG_FLD_VAL(RGS_PXP_JCPLL_KBAND_CODE_FLD_RGS_PXP_JCPLL_KBAND_CODE, (val))

#define RGS_PXP_TXPLL_KBAND_CODE_VAL_RGS_PXP_TXPLL_KBAND_CODE(val) REG_FLD_VAL(RGS_PXP_TXPLL_KBAND_CODE_FLD_RGS_PXP_TXPLL_KBAND_CODE, (val))

#define RG_PXP_TX_SER_LOADSEL_VAL_RG_PXP_TX_CKMON_EN(val)      REG_FLD_VAL(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_CKMON_EN, (val))
#define RG_PXP_TX_SER_LOADSEL_VAL_RG_PXP_TX_SR_REDUCTION(val)  REG_FLD_VAL(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SR_REDUCTION, (val))
#define RG_PXP_TX_SER_LOADSEL_VAL_RG_PXP_TX_DIGFF_CK_INV(val)  REG_FLD_VAL(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_DIGFF_CK_INV, (val))
#define RG_PXP_TX_SER_LOADSEL_VAL_RG_PXP_TX_SER_LOADSEL(val)   REG_FLD_VAL(RG_PXP_TX_SER_LOADSEL_FLD_RG_PXP_TX_SER_LOADSEL, (val))

#define RG_PXP_TX_CKMON_SEL_VAL_RG_PXP_TX_FIR_CHGPLR_CN1(val)  REG_FLD_VAL(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_FIR_CHGPLR_CN1, (val))
#define RG_PXP_TX_CKMON_SEL_VAL_RG_PXP_TX_LSDATA(val)          REG_FLD_VAL(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA, (val))
#define RG_PXP_TX_CKMON_SEL_VAL_RG_PXP_TX_LSDATA_EN(val)       REG_FLD_VAL(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_LSDATA_EN, (val))
#define RG_PXP_TX_CKMON_SEL_VAL_RG_PXP_TX_CKMON_SEL(val)       REG_FLD_VAL(RG_PXP_TX_CKMON_SEL_FLD_RG_PXP_TX_CKMON_SEL, (val))

#define RG_PXP_TX_FIR_CHGPLR_C1_VAL_RG_PXP_TX_VMON_SEL(val)    REG_FLD_VAL(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_SEL, (val))
#define RG_PXP_TX_FIR_CHGPLR_C1_VAL_RG_PXP_TX_VMON_EN(val)     REG_FLD_VAL(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_VMON_EN, (val))
#define RG_PXP_TX_FIR_CHGPLR_C1_VAL_RG_PXP_TX_FIR_CHGPLR_C2(val) REG_FLD_VAL(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C2, (val))
#define RG_PXP_TX_FIR_CHGPLR_C1_VAL_RG_PXP_TX_FIR_CHGPLR_C1(val) REG_FLD_VAL(RG_PXP_TX_FIR_CHGPLR_C1_FLD_RG_PXP_TX_FIR_CHGPLR_C1, (val))

#define RG_PXP_TX_TXLBRX_EN_VAL_RG_PXP_TX_TERMCAL_VREF_L(val)  REG_FLD_VAL(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_L, (val))
#define RG_PXP_TX_TXLBRX_EN_VAL_RG_PXP_TX_TERMCAL_VREF_H(val)  REG_FLD_VAL(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TERMCAL_VREF_H, (val))
#define RG_PXP_TX_TXLBRX_EN_VAL_RG_PXP_TX_INT_EN(val)          REG_FLD_VAL(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_INT_EN, (val))
#define RG_PXP_TX_TXLBRX_EN_VAL_RG_PXP_TX_TXLBRX_EN(val)       REG_FLD_VAL(RG_PXP_TX_TXLBRX_EN_FLD_RG_PXP_TX_TXLBRX_EN, (val))

#define RG_PXP_TX_CKLDO_EN_VAL_RG_PXP_TX_DMEDGEGEN_EN(val)     REG_FLD_VAL(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_DMEDGEGEN_EN, (val))
#define RG_PXP_TX_CKLDO_EN_VAL_RG_PXP_TX_RXDET_METHOD(val)     REG_FLD_VAL(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_RXDET_METHOD, (val))
#define RG_PXP_TX_CKLDO_EN_VAL_RG_PXP_TX_CKLDO_LVR(val)        REG_FLD_VAL(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_LVR, (val))
#define RG_PXP_TX_CKLDO_EN_VAL_RG_PXP_TX_CKLDO_EN(val)         REG_FLD_VAL(RG_PXP_TX_CKLDO_EN_FLD_RG_PXP_TX_CKLDO_EN, (val))

#define RG_PXP_TX_MULTLANE_EN_VAL_RG_PXP_TX_RESERVED(val)      REG_FLD_VAL(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_RESERVED, (val))
#define RG_PXP_TX_MULTLANE_EN_VAL_RG_PXP_TX_AUTOZERO_EN(val)   REG_FLD_VAL(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_AUTOZERO_EN, (val))
#define RG_PXP_TX_MULTLANE_EN_VAL_RG_PXP_TX_TDC_CK_SEL(val)    REG_FLD_VAL(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TDC_CK_SEL, (val))
#define RG_PXP_TX_MULTLANE_EN_VAL_RG_PXP_TX_TERMCAL_SELPN(val) REG_FLD_VAL(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_TERMCAL_SELPN, (val))
#define RG_PXP_TX_MULTLANE_EN_VAL_RG_PXP_TX_MULTLANE_EN(val)   REG_FLD_VAL(RG_PXP_TX_MULTLANE_EN_FLD_RG_PXP_TX_MULTLANE_EN, (val))

#define RG_PXP_RX_BUSBIT_SEL_VAL_RG_PXP_RX_PHY_CK_SEL_FORCE(val) REG_FLD_VAL(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL_FORCE, (val))
#define RG_PXP_RX_BUSBIT_SEL_VAL_RG_PXP_RX_PHY_CK_SEL(val)     REG_FLD_VAL(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_PHY_CK_SEL, (val))
#define RG_PXP_RX_BUSBIT_SEL_VAL_RG_PXP_RX_BUSBIT_SEL_FORCE(val) REG_FLD_VAL(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL_FORCE, (val))
#define RG_PXP_RX_BUSBIT_SEL_VAL_RG_PXP_RX_BUSBIT_SEL(val)     REG_FLD_VAL(RG_PXP_RX_BUSBIT_SEL_FLD_RG_PXP_RX_BUSBIT_SEL, (val))

#define RG_PXP_RX_MPXSEL_VAL_RG_PXP_RX_SYNC_INV(val)           REG_FLD_VAL(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_SYNC_INV, (val))
#define RG_PXP_RX_MPXSEL_VAL_RG_PXP_RX_DBGSEL(val)             REG_FLD_VAL(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_DBGSEL, (val))
#define RG_PXP_RX_MPXSEL_VAL_RG_PXP_RX_MPXSEL(val)             REG_FLD_VAL(RG_PXP_RX_MPXSEL_FLD_RG_PXP_RX_MPXSEL, (val))

#define RG_PXP_RX_REV_0_VAL_RG_PXP_RX_REV_1(val)               REG_FLD_VAL(RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_1, (val))
#define RG_PXP_RX_REV_0_VAL_RG_PXP_RX_REV_0(val)               REG_FLD_VAL(RG_PXP_RX_REV_0_FLD_RG_PXP_RX_REV_0, (val))

#define RG_PXP_RX_PHYCK_DIV_VAL_RG_PXP_RX_TDC_CK_SEL(val)      REG_FLD_VAL(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_TDC_CK_SEL, (val))
#define RG_PXP_RX_PHYCK_DIV_VAL_RG_PXP_RX_PHYCK_RSTB(val)      REG_FLD_VAL(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_RSTB, (val))
#define RG_PXP_RX_PHYCK_DIV_VAL_RG_PXP_RX_PHYCK_SEL(val)       REG_FLD_VAL(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_SEL, (val))
#define RG_PXP_RX_PHYCK_DIV_VAL_RG_PXP_RX_PHYCK_DIV(val)       REG_FLD_VAL(RG_PXP_RX_PHYCK_DIV_FLD_RG_PXP_RX_PHYCK_DIV, (val))

#define RG_PXP_CDR_PD_PICAL_CKD8_INV_VAL_RG_PXP_CDR_PD_EDGE_DIS(val) REG_FLD_VAL(RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_EDGE_DIS, (val))
#define RG_PXP_CDR_PD_PICAL_CKD8_INV_VAL_RG_PXP_CDR_PD_PICAL_CKD8_INV(val) REG_FLD_VAL(RG_PXP_CDR_PD_PICAL_CKD8_INV_FLD_RG_PXP_CDR_PD_PICAL_CKD8_INV, (val))

#define RG_PXP_CDR_LPF_BOT_LIM_VAL_RG_PXP_CDR_LPF_KI_GAIN(val) REG_FLD_VAL(RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_KI_GAIN, (val))
#define RG_PXP_CDR_LPF_BOT_LIM_VAL_RG_PXP_CDR_LPF_BOT_LIM(val) REG_FLD_VAL(RG_PXP_CDR_LPF_BOT_LIM_FLD_RG_PXP_CDR_LPF_BOT_LIM, (val))

#define RG_PXP_CDR_LPF_KP_GAIN_VAL_RG_PXP_CDR_LPF_MJV_LIM(val) REG_FLD_VAL(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_LIM, (val))
#define RG_PXP_CDR_LPF_KP_GAIN_VAL_RG_PXP_CDR_LPF_MJV_EN(val)  REG_FLD_VAL(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_MJV_EN, (val))
#define RG_PXP_CDR_LPF_KP_GAIN_VAL_RG_PXP_CDR_LPF_LIN_LIM(val) REG_FLD_VAL(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_LIN_LIM, (val))
#define RG_PXP_CDR_LPF_KP_GAIN_VAL_RG_PXP_CDR_LPF_KP_GAIN(val) REG_FLD_VAL(RG_PXP_CDR_LPF_KP_GAIN_FLD_RG_PXP_CDR_LPF_KP_GAIN, (val))

#define RG_PXP_CDR_LPF_RATIO_VAL_RG_PXP_CDR_LPF_TOP_LIM(val)   REG_FLD_VAL(RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_TOP_LIM, (val))
#define RG_PXP_CDR_LPF_RATIO_VAL_RG_PXP_CDR_LPF_RATIO(val)     REG_FLD_VAL(RG_PXP_CDR_LPF_RATIO_FLD_RG_PXP_CDR_LPF_RATIO, (val))

#define RG_PXP_CDR_LPF_SNAPSHOT_VAL_RG_PXP_CDR_LPF_SET(val)    REG_FLD_VAL(RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SET, (val))
#define RG_PXP_CDR_LPF_SNAPSHOT_VAL_RG_PXP_CDR_LPF_SNAPSHOT(val) REG_FLD_VAL(RG_PXP_CDR_LPF_SNAPSHOT_FLD_RG_PXP_CDR_LPF_SNAPSHOT, (val))

#define RG_PXP_CDR_LPF_SETVALUE_VAL_RG_PXP_CDR_LPF_PISTEP_CTRL(val) REG_FLD_VAL(RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_PISTEP_CTRL, (val))
#define RG_PXP_CDR_LPF_SETVALUE_VAL_RG_PXP_CDR_LPF_SETVALUE(val) REG_FLD_VAL(RG_PXP_CDR_LPF_SETVALUE_FLD_RG_PXP_CDR_LPF_SETVALUE, (val))

#define RG_PXP_CDR_PR_INJ_MODE_VAL_RG_PXP_CDR_PR_INJ_FORCE_OFF(val) REG_FLD_VAL(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_OFF, (val))
#define RG_PXP_CDR_PR_INJ_MODE_VAL_RG_PXP_CDR_PR_INJ_FORCE_ON(val) REG_FLD_VAL(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_FORCE_ON, (val))
#define RG_PXP_CDR_PR_INJ_MODE_VAL_RG_PXP_CDR_PR_INPUT_MODE(val) REG_FLD_VAL(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INPUT_MODE, (val))
#define RG_PXP_CDR_PR_INJ_MODE_VAL_RG_PXP_CDR_PR_INJ_MODE(val) REG_FLD_VAL(RG_PXP_CDR_PR_INJ_MODE_FLD_RG_PXP_CDR_PR_INJ_MODE, (val))

#define RG_PXP_CDR_PR_BETA_DAC_VAL_RG_PXP_CDR_PR_KBAND_DIV(val) REG_FLD_VAL(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_KBAND_DIV, (val))
#define RG_PXP_CDR_PR_BETA_DAC_VAL_RG_PXP_CDR_PR_BETA_SEL(val) REG_FLD_VAL(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_SEL, (val))
#define RG_PXP_CDR_PR_BETA_DAC_VAL_RG_PXP_CDR_PR_VCOADC_OS(val) REG_FLD_VAL(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_VCOADC_OS, (val))
#define RG_PXP_CDR_PR_BETA_DAC_VAL_RG_PXP_CDR_PR_BETA_DAC(val) REG_FLD_VAL(RG_PXP_CDR_PR_BETA_DAC_FLD_RG_PXP_CDR_PR_BETA_DAC, (val))

#define RG_PXP_CDR_PR_VREG_IBAND_VAL_VAL_RG_PXP_CDR_PR_FBKSEL(val) REG_FLD_VAL(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_FBKSEL, (val))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_VAL_RG_PXP_CDR_PR_DAC_BAND(val) REG_FLD_VAL(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_DAC_BAND, (val))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_VAL_RG_PXP_CDR_PR_VREG_CKBUF_VAL(val) REG_FLD_VAL(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_CKBUF_VAL, (val))
#define RG_PXP_CDR_PR_VREG_IBAND_VAL_VAL_RG_PXP_CDR_PR_VREG_IBAND_VAL(val) REG_FLD_VAL(RG_PXP_CDR_PR_VREG_IBAND_VAL_FLD_RG_PXP_CDR_PR_VREG_IBAND_VAL, (val))

#define RG_PXP_CDR_PR_CKREF_DIV_VAL_RG_PXP_CDR_PR_MONMUXVC(val) REG_FLD_VAL(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_MONMUXVC, (val))
#define RG_PXP_CDR_PR_CKREF_DIV_VAL_RG_PXP_CDR_PR_RSTB_BYPASS(val) REG_FLD_VAL(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RSTB_BYPASS, (val))
#define RG_PXP_CDR_PR_CKREF_DIV_VAL_RG_PXP_CDR_PR_RST_DLY(val) REG_FLD_VAL(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_RST_DLY, (val))
#define RG_PXP_CDR_PR_CKREF_DIV_VAL_RG_PXP_CDR_PR_CKREF_DIV(val) REG_FLD_VAL(RG_PXP_CDR_PR_CKREF_DIV_FLD_RG_PXP_CDR_PR_CKREF_DIV, (val))

#define RG_PXP_CDR_PR_MONCK_EN_VAL_RG_PXP_CDR_PR_RESERVE1(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE1, (val))
#define RG_PXP_CDR_PR_MONCK_EN_VAL_RG_PXP_CDR_PR_RESERVE0(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_RESERVE0, (val))
#define RG_PXP_CDR_PR_MONCK_EN_VAL_RG_PXP_CDR_PR_MONCK_MUX(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_MUX, (val))
#define RG_PXP_CDR_PR_MONCK_EN_VAL_RG_PXP_CDR_PR_MONCK_EN(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONCK_EN_FLD_RG_PXP_CDR_PR_MONCK_EN, (val))

#define RG_PXP_CDR_PR_TDC_REF_SEL_VAL_RG_PXP_CDR_PR_CKREF_DIV1(val) REG_FLD_VAL(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_CKREF_DIV1, (val))
#define RG_PXP_CDR_PR_TDC_REF_SEL_VAL_RG_PXP_CDR_PR_LDO_FORCE_ON(val) REG_FLD_VAL(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_LDO_FORCE_ON, (val))
#define RG_PXP_CDR_PR_TDC_REF_SEL_VAL_RG_PXP_CDR_PR_COR_HBW_EN(val) REG_FLD_VAL(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_COR_HBW_EN, (val))
#define RG_PXP_CDR_PR_TDC_REF_SEL_VAL_RG_PXP_CDR_PR_TDC_REF_SEL(val) REG_FLD_VAL(RG_PXP_CDR_PR_TDC_REF_SEL_FLD_RG_PXP_CDR_PR_TDC_REF_SEL, (val))

#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_RX_DAC_MON(val)      REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_RX_DAC_MON, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PR_CAP_EN(val)   REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_CAP_EN, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PR_BUF_IN_SR(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_BUF_IN_SR, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PI_LDO_EN(val)   REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PI_LDO_EN, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PR_VREG_PI_VAL(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_VREG_PI_VAL, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PR_XFICK_EN(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_XFICK_EN, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PR_MONPI_EN(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPI_EN, (val))
#define RG_PXP_CDR_PR_MONPR_EN_VAL_RG_PXP_CDR_PR_MONPR_EN(val) REG_FLD_VAL(RG_PXP_CDR_PR_MONPR_EN_FLD_RG_PXP_CDR_PR_MONPR_EN, (val))

#define RG_PXP_RX_DAC_RANGE_VAL_RG_PXP_RX_SIGDET_LPF_CTRL(val) REG_FLD_VAL(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_LPF_CTRL, (val))
#define RG_PXP_RX_DAC_RANGE_VAL_RG_PXP_RX_SIGDET_DCTEST_EN(val) REG_FLD_VAL(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_SIGDET_DCTEST_EN, (val))
#define RG_PXP_RX_DAC_RANGE_VAL_RG_PXP_RX_DAC_RANGE_EYE(val)   REG_FLD_VAL(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE_EYE, (val))
#define RG_PXP_RX_DAC_RANGE_VAL_RG_PXP_RX_DAC_RANGE(val)       REG_FLD_VAL(RG_PXP_RX_DAC_RANGE_FLD_RG_PXP_RX_DAC_RANGE, (val))

#define RG_PXP_RX_SIGDET_NOVTH_VAL_RG_PXP_RX_FE_50OHMS_SEL(val) REG_FLD_VAL(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_FE_50OHMS_SEL, (val))
#define RG_PXP_RX_SIGDET_NOVTH_VAL_RG_PXP_RX_SIGDET_VTH_SEL(val) REG_FLD_VAL(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_VTH_SEL, (val))
#define RG_PXP_RX_SIGDET_NOVTH_VAL_RG_PXP_RX_SIGDET_PEAK(val)  REG_FLD_VAL(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_PEAK, (val))
#define RG_PXP_RX_SIGDET_NOVTH_VAL_RG_PXP_RX_SIGDET_NOVTH(val) REG_FLD_VAL(RG_PXP_RX_SIGDET_NOVTH_FLD_RG_PXP_RX_SIGDET_NOVTH, (val))

#define RG_PXP_RX_FE_EQ_HZEN_VAL_RG_PXP_RX_FE_VB_EQ3_EN(val)   REG_FLD_VAL(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ3_EN, (val))
#define RG_PXP_RX_FE_EQ_HZEN_VAL_RG_PXP_RX_FE_VB_EQ2_EN(val)   REG_FLD_VAL(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ2_EN, (val))
#define RG_PXP_RX_FE_EQ_HZEN_VAL_RG_PXP_RX_FE_VB_EQ1_EN(val)   REG_FLD_VAL(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_VB_EQ1_EN, (val))
#define RG_PXP_RX_FE_EQ_HZEN_VAL_RG_PXP_RX_FE_EQ_HZEN(val)     REG_FLD_VAL(RG_PXP_RX_FE_EQ_HZEN_FLD_RG_PXP_RX_FE_EQ_HZEN, (val))

#define RG_PXP_RX_FE_VCM_GEN_PWDB_VAL_RG_PXP_RX_OSCAL_WAIT_WNDW(val) REG_FLD_VAL(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_WAIT_WNDW, (val))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_VAL_RG_PXP_RX_OSCAL_CK_INV(val) REG_FLD_VAL(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_OSCAL_CK_INV, (val))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_VAL_RG_PXP_RX_FE_VCM_SEL(val) REG_FLD_VAL(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_SEL, (val))
#define RG_PXP_RX_FE_VCM_GEN_PWDB_VAL_RG_PXP_RX_FE_VCM_GEN_PWDB(val) REG_FLD_VAL(RG_PXP_RX_FE_VCM_GEN_PWDB_FLD_RG_PXP_RX_FE_VCM_GEN_PWDB, (val))

#define RG_PXP_RX_OSCAL_WATCH_WNDW_VAL_RG_PXP_RX_OSCAL_COMPOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_COMPOS, (val))
#define RG_PXP_RX_OSCAL_WATCH_WNDW_VAL_RG_PXP_RX_OSCAL_FORCE(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_FORCE, (val))
#define RG_PXP_RX_OSCAL_WATCH_WNDW_VAL_RG_PXP_RX_OSCAL_WATCH_WNDW(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_WATCH_WNDW_FLD_RG_PXP_RX_OSCAL_WATCH_WNDW, (val))

#define RG_PXP_RX_OSCAL_OPTION_VAL_RG_PXP_RX_OSCAL_CTLE1IOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_CTLE1IOS, (val))
#define RG_PXP_RX_OSCAL_OPTION_VAL_RG_PXP_RX_OSCAL_LVSHOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_LVSHOS, (val))
#define RG_PXP_RX_OSCAL_OPTION_VAL_RG_PXP_RX_OSCAL_OPTION(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_OPTION_FLD_RG_PXP_RX_OSCAL_OPTION, (val))

#define RG_PXP_RX_OSCAL_CTLE2IOS_VAL_RG_PXP_RX_OSCAL_VGA1VOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1VOS, (val))
#define RG_PXP_RX_OSCAL_CTLE2IOS_VAL_RG_PXP_RX_OSCAL_VGA1IOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_VGA1IOS, (val))
#define RG_PXP_RX_OSCAL_CTLE2IOS_VAL_RG_PXP_RX_OSCAL_CTLE2VOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2VOS, (val))
#define RG_PXP_RX_OSCAL_CTLE2IOS_VAL_RG_PXP_RX_OSCAL_CTLE2IOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_CTLE2IOS_FLD_RG_PXP_RX_OSCAL_CTLE2IOS, (val))

#define RG_PXP_RX_OSCAL_VGA2IOS_VAL_RG_PXP_AEQ_WAIT_WNDW(val)  REG_FLD_VAL(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_WAIT_WNDW, (val))
#define RG_PXP_RX_OSCAL_VGA2IOS_VAL_RG_PXP_AEQ_CK_INV(val)     REG_FLD_VAL(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_AEQ_CK_INV, (val))
#define RG_PXP_RX_OSCAL_VGA2IOS_VAL_RG_PXP_RX_OSCAL_VGA2VOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2VOS, (val))
#define RG_PXP_RX_OSCAL_VGA2IOS_VAL_RG_PXP_RX_OSCAL_VGA2IOS(val) REG_FLD_VAL(RG_PXP_RX_OSCAL_VGA2IOS_FLD_RG_PXP_RX_OSCAL_VGA2IOS, (val))

#define RG_PXP_AEQ_WATCH_WNDW_VAL_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK(val) REG_FLD_VAL(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_TXFIR_CP1_BACK, (val))
#define RG_PXP_AEQ_WATCH_WNDW_VAL_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY(val) REG_FLD_VAL(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FLAG_DFE_TUNE_RDY, (val))
#define RG_PXP_AEQ_WATCH_WNDW_VAL_RG_PXP_AEQ_FR2HR_MODE(val)   REG_FLD_VAL(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_FR2HR_MODE, (val))
#define RG_PXP_AEQ_WATCH_WNDW_VAL_RG_PXP_AEQ_WATCH_WNDW(val)   REG_FLD_VAL(RG_PXP_AEQ_WATCH_WNDW_FLD_RG_PXP_AEQ_WATCH_WNDW, (val))

#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_VAL_RG_PXP_AEQ_STATE(val) REG_FLD_VAL(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_STATE, (val))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_VAL_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY(val) REG_FLD_VAL(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_TUNE_RDY, (val))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_VAL_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE(val) REG_FLD_VAL(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_UPDATE, (val))
#define RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_VAL_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY(val) REG_FLD_VAL(RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY_FLD_RG_PXP_AEQ_FLAG_TXFIR_REQ_RDY, (val))

#define RG_PXP_AEQ_OPTION_VAL_RG_PXP_AEQ_OPTION3(val)          REG_FLD_VAL(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION3, (val))
#define RG_PXP_AEQ_OPTION_VAL_RG_PXP_AEQ_OPTION2(val)          REG_FLD_VAL(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION2, (val))
#define RG_PXP_AEQ_OPTION_VAL_RG_PXP_AEQ_OPTION(val)           REG_FLD_VAL(RG_PXP_AEQ_OPTION_FLD_RG_PXP_AEQ_OPTION, (val))

#define RG_PXP_AEQ_CFORCE_VAL_RG_PXP_AEQ_CTLE_ERR_TYPE(val)    REG_FLD_VAL(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CTLE_ERR_TYPE, (val))
#define RG_PXP_AEQ_CFORCE_VAL_RG_PXP_AEQ_OFORCE(val)           REG_FLD_VAL(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_OFORCE, (val))
#define RG_PXP_AEQ_CFORCE_VAL_RG_PXP_AEQ_CFORCE(val)           REG_FLD_VAL(RG_PXP_AEQ_CFORCE_FLD_RG_PXP_AEQ_CFORCE, (val))

#define RG_PXP_AEQ_CTLE_MAX_VAL_RG_PXP_AEQ_CTLE_WNDW(val)      REG_FLD_VAL(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_WNDW, (val))
#define RG_PXP_AEQ_CTLE_MAX_VAL_RG_PXP_AEQ_CTLE_TH(val)        REG_FLD_VAL(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_TH, (val))
#define RG_PXP_AEQ_CTLE_MAX_VAL_RG_PXP_AEQ_CTLE_STTL(val)      REG_FLD_VAL(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_STTL, (val))
#define RG_PXP_AEQ_CTLE_MAX_VAL_RG_PXP_AEQ_CTLE_MAX(val)       REG_FLD_VAL(RG_PXP_AEQ_CTLE_MAX_FLD_RG_PXP_AEQ_CTLE_MAX, (val))

#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_VAL_RG_PXP_RX_DAC_D0_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_DAC_D0_BYPASS_AEQ, (val))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_VAL_RG_PXP_AEQ_SAOS_TH(val) REG_FLD_VAL(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_AEQ_SAOS_TH, (val))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_VAL_RG_PXP_RX_FE_PEAKING_CTRL_LSB(val) REG_FLD_VAL(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_LSB, (val))
#define RG_PXP_RX_FE_PEAKING_CTRL_MSB_VAL_RG_PXP_RX_FE_PEAKING_CTRL_MSB(val) REG_FLD_VAL(RG_PXP_RX_FE_PEAKING_CTRL_MSB_FLD_RG_PXP_RX_FE_PEAKING_CTRL_MSB, (val))

#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_EYE_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_EYE_BYPASS_AEQ, (val))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_E1_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E1_BYPASS_AEQ, (val))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_E0_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_E0_BYPASS_AEQ, (val))
#define RG_PXP_RX_DAC_D1_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_D1_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_DAC_D1_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_D1_BYPASS_AEQ, (val))

#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_ERR1(val) REG_FLD_VAL(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1, (val))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_ERR0(val) REG_FLD_VAL(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0, (val))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR1_BYPASS_AEQ, (val))
#define RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_VAL_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ(val) REG_FLD_VAL(RG_PXP_RX_DAC_ERR0_BYPASS_AEQ_FLD_RG_PXP_RX_DAC_ERR0_BYPASS_AEQ, (val))

#define RG_PXP_AEQ_CM1_WNDW_VAL_RG_PXP_AEQ_DFETP1_WNDW(val)    REG_FLD_VAL(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_DFETP1_WNDW, (val))
#define RG_PXP_AEQ_CM1_WNDW_VAL_RG_PXP_AEQ_VGA_WNDW(val)       REG_FLD_VAL(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_VGA_WNDW, (val))
#define RG_PXP_AEQ_CM1_WNDW_VAL_RG_PXP_AEQ_CP1_WNDW(val)       REG_FLD_VAL(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CP1_WNDW, (val))
#define RG_PXP_AEQ_CM1_WNDW_VAL_RG_PXP_AEQ_CM1_WNDW(val)       REG_FLD_VAL(RG_PXP_AEQ_CM1_WNDW_FLD_RG_PXP_AEQ_CM1_WNDW, (val))

#define RG_PXP_AEQ_DFETP2_WNDW_VAL_RG_PXP_AEQ_DFETP5_WNDW(val) REG_FLD_VAL(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP5_WNDW, (val))
#define RG_PXP_AEQ_DFETP2_WNDW_VAL_RG_PXP_AEQ_DFETP4_WNDW(val) REG_FLD_VAL(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP4_WNDW, (val))
#define RG_PXP_AEQ_DFETP2_WNDW_VAL_RG_PXP_AEQ_DFETP3_WNDW(val) REG_FLD_VAL(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP3_WNDW, (val))
#define RG_PXP_AEQ_DFETP2_WNDW_VAL_RG_PXP_AEQ_DFETP2_WNDW(val) REG_FLD_VAL(RG_PXP_AEQ_DFETP2_WNDW_FLD_RG_PXP_AEQ_DFETP2_WNDW, (val))

#define RG_PXP_AEQ_DFETP6_WNDW_VAL_RG_PXP_AEQ_TRN_DFENUM(val)  REG_FLD_VAL(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_TRN_DFENUM, (val))
#define RG_PXP_AEQ_DFETP6_WNDW_VAL_RG_PXP_AEQ_DFETP7_WNDW(val) REG_FLD_VAL(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP7_WNDW, (val))
#define RG_PXP_AEQ_DFETP6_WNDW_VAL_RG_PXP_AEQ_DFETP6_WNDW(val) REG_FLD_VAL(RG_PXP_AEQ_DFETP6_WNDW_FLD_RG_PXP_AEQ_DFETP6_WNDW, (val))

#define RGS_PXP_RX_OSCAL_FE_VOS_VAL_RGS_PXP_RX_OSCAL_CTLE1IOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_CTLE1IOS, (val))
#define RGS_PXP_RX_OSCAL_FE_VOS_VAL_RGS_PXP_RX_OSCAL_LVSHOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_LVSHOS, (val))
#define RGS_PXP_RX_OSCAL_FE_VOS_VAL_RGS_PXP_RX_OSCAL_COMPOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_COMPOS, (val))
#define RGS_PXP_RX_OSCAL_FE_VOS_VAL_RGS_PXP_RX_OSCAL_FE_VOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_FE_VOS_FLD_RGS_PXP_RX_OSCAL_FE_VOS, (val))

#define RGS_PXP_RX_OSCAL_CTLE2IOS_VAL_RGS_PXP_RX_OSCAL_VGA1VOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1VOS, (val))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_VAL_RGS_PXP_RX_OSCAL_VGA1IOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_VGA1IOS, (val))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_VAL_RGS_PXP_RX_OSCAL_CTLE2VOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2VOS, (val))
#define RGS_PXP_RX_OSCAL_CTLE2IOS_VAL_RGS_PXP_RX_OSCAL_CTLE2IOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_CTLE2IOS_FLD_RGS_PXP_RX_OSCAL_CTLE2IOS, (val))

#define RGS_PXP_RX_OSCAL_VGA2IOS_VAL_RGS_PXP_RX_OSCAL_VGA2VOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2VOS, (val))
#define RGS_PXP_RX_OSCAL_VGA2IOS_VAL_RGS_PXP_RX_OSCAL_VGA2IOS(val) REG_FLD_VAL(RGS_PXP_RX_OSCAL_VGA2IOS_FLD_RGS_PXP_RX_OSCAL_VGA2IOS, (val))

#define RGS_PXP_AEQ_CTLE_VAL_RGS_PXP_AEQ_CTLE(val)             REG_FLD_VAL(RGS_PXP_AEQ_CTLE_FLD_RGS_PXP_AEQ_CTLE, (val))

#define RGS_PXP_AEQ_SAOSC_EN_VAL_RGS_PXP_AEQ_E0_OS(val)        REG_FLD_VAL(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_E0_OS, (val))
#define RGS_PXP_AEQ_SAOSC_EN_VAL_RGS_PXP_AEQ_D1_OS(val)        REG_FLD_VAL(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D1_OS, (val))
#define RGS_PXP_AEQ_SAOSC_EN_VAL_RGS_PXP_AEQ_D0_OS(val)        REG_FLD_VAL(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_D0_OS, (val))
#define RGS_PXP_AEQ_SAOSC_EN_VAL_RGS_PXP_AEQ_SAOSC_EN(val)     REG_FLD_VAL(RGS_PXP_AEQ_SAOSC_EN_FLD_RGS_PXP_AEQ_SAOSC_EN, (val))

#define RGS_PXP_AEQ_E1_OS_VAL_RGS_PXP_AEQ_ERR1_OS(val)         REG_FLD_VAL(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR1_OS, (val))
#define RGS_PXP_AEQ_E1_OS_VAL_RGS_PXP_AEQ_ERR0_OS(val)         REG_FLD_VAL(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_ERR0_OS, (val))
#define RGS_PXP_AEQ_E1_OS_VAL_RGS_PXP_AEQ_EYE_OS(val)          REG_FLD_VAL(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_EYE_OS, (val))
#define RGS_PXP_AEQ_E1_OS_VAL_RGS_PXP_AEQ_E1_OS(val)           REG_FLD_VAL(RGS_PXP_AEQ_E1_OS_FLD_RGS_PXP_AEQ_E1_OS, (val))

#ifdef __cplusplus
}
#endif

#endif // __pxp_csr_ana_REGS_H__

