#ifndef _ECNT_THERMAL_AVS
#define _ECNT_THERMAL_AVS

typedef enum
{
	BGP_TEMP_SENSOR = 0,
	PAD_AVS = 1,
	CORE_POWER = 2,
	AVSDAC_OUT = 3,
	VCM = 4,
	GBE_TEMP_SENSOR = 5,
	CPU_TEMP_SENSOR = 6,
} ADC_MUX_T;

#define RG_DATA_AVS_DAC 0x2e0
#define RG_AVS_OUT_EN 0x2a0

#define DAC_CHG_OFST 16
#define DAC_EN_OFST 0

#define DAC_ST_Time 10	//unit ms
#define ADC_ST_Time 10	//unit ms

#define avs_dbg 0

#endif
