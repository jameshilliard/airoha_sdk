#include <linux/version.h>
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
#include <linux/module.h>
#include <linux/types.h>
#include <linux/of_platform.h>
#include <linux/platform_device.h>
#include <linux/interrupt.h>
#include <linux/delay.h>
#include <linux/spinlock.h>
#else
#include <drivers/delay_timer.h>
#include <asm/tc3162.h>
#endif
#include <asm/io.h>
#include <modules/avs/avs.h>
#include "ecnt_thermal_avs.h"

//RG address, base: 0x1fa20000
#define PLLRG_PROTECT      0x268
#define PROTECT_KEY        0x80

//TADC
#define MUX_TADC           0x2E4
#define DOUT_TADC          0x2F0
#define RESA_TADC          0x2E8
#define MUX_SENSOR         0x2A0

#define TADC_RST_OFST      0x4
#define TADC_MUX_OFST      0x1
#define TADC_SET_MASK      0x1ffff
#define TADC_MUX_MASK      0x7
#define LOD_ADJ_OFST       0x2
#define LOD_ADJ_MASK       0x3
//not sure
#define SCU_XTAL_SEL       0x254


/*for spin lock*/
//spinlock_t ADC_lock;
static DEFINE_SPINLOCK(ADC_lock);

// 1 Zero; 0 Dio0;2 Dio1;
static u16 SENSOR_MUX_SEL = 0;
// 0 BGPOR;5 GBE;6 CPU;
static u16 ADC_MUX_SEL = 0;
static u16 delay_in_ms = 10;

#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
extern u32 get_chip_scu_data(u32 reg);
extern void set_chip_scu_data(u32 reg, u32 val);
#else
#define get_chip_scu_data(reg) readl((0x1fa20000 + reg))
#define set_chip_scu_data(reg, val) writel(val, (0x1fa20000 + reg))
#endif
#if 1//LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)

void thermal_TADC_mode(u16 adc_sel,u16 sens_sel,u16 delayCnt);
u32 read_TADC(ADC_MUX_T mux_num, u8 delay_cnt);

u32 rw_chip_scu_data(u32 addr,u32 value,u32 mask,u16 ofst)
{
	u32 newValue=(get_chip_scu_data(addr) &(~(mask <<ofst)) ) | ((value&mask)<<ofst);
	set_chip_scu_data(addr, newValue);
	return newValue;
}

//------------------thermal sensor API----------------
void thermal_init(void)
{
  u32 temp=0;
  SENSOR_MUX_SEL = 0;
  ADC_MUX_SEL = 0;
  printk("thermal SCU version: 7583.4.20240604\n");
  //enable write protect reg, set 0x1fa20264 = 0x80
  temp=get_chip_scu_data(PLLRG_PROTECT);
  set_chip_scu_data(PLLRG_PROTECT,  PROTECT_KEY);
  //set TADC related registers
  //reset TADC, 0x1fa202ec = [4] = 0, 0x1fa202ec = [4] = 1
  rw_chip_scu_data(MUX_TADC,0,1,TADC_RST_OFST);
  rw_chip_scu_data(MUX_TADC,1,1,TADC_RST_OFST);
  //set TADC mode
  rw_chip_scu_data(MUX_TADC,0x33BC,TADC_SET_MASK,0);
  //default CPU
  thermal_TADC_mode(0,0,10);
  set_chip_scu_data(PLLRG_PROTECT,temp);
}
EXPORT_SYMBOL(thermal_init);

void thermal_TADC_mode(u16 adc_sel,u16 sens_sel,u16 delayCnt)
{
  switch (adc_sel)
  {
    case GBE_TEMP_SENSOR:
      ADC_MUX_SEL=GBE_TEMP_SENSOR;
      break;
    case CPU_TEMP_SENSOR:
      ADC_MUX_SEL=CPU_TEMP_SENSOR;
      break;
    default:
      ADC_MUX_SEL=BGP_TEMP_SENSOR;
      break;
  }
  switch (sens_sel)
  {
    case 1:
      SENSOR_MUX_SEL=1;
      break;
    case 2:
      SENSOR_MUX_SEL=2;
      break;
    default:
      SENSOR_MUX_SEL=0;
      break;
  }
  delay_in_ms=delayCnt;
}
EXPORT_SYMBOL(thermal_TADC_mode);

u32 GetTADC_Sel(void) //H: SENSOR_MUX_SEL // L:ADC_MUX_SEL
{
	return (SENSOR_MUX_SEL<<16)+ADC_MUX_SEL;
}
EXPORT_SYMBOL(GetTADC_Sel);


u32 get_thermal_ADC(void)
{
  spin_lock(&ADC_lock);
	
  if(SENSOR_MUX_SEL != ((get_chip_scu_data(MUX_SENSOR)>>LOD_ADJ_OFST)&LOD_ADJ_MASK))
  {
    set_chip_scu_data(PLLRG_PROTECT,  PROTECT_KEY);
    rw_chip_scu_data(MUX_SENSOR, SENSOR_MUX_SEL, LOD_ADJ_MASK, LOD_ADJ_OFST);
    if(ADC_MUX_SEL == ((get_chip_scu_data(MUX_TADC)>>TADC_MUX_OFST)&TADC_MUX_MASK)){
      mdelay(delay_in_ms);
      }
    set_chip_scu_data(PLLRG_PROTECT,  0x0);
  }
  spin_unlock(&ADC_lock);
	return read_TADC(ADC_MUX_SEL,delay_in_ms);
}
EXPORT_SYMBOL(get_thermal_ADC);


u32 get_xtal_sel(void)
{
    return ((get_chip_scu_data(SCU_XTAL_SEL)>>19)&0x1);
}
EXPORT_SYMBOL(get_xtal_sel);

u32 get_pdid(void)
{
	return GET_PDIDR();
}
EXPORT_SYMBOL(get_pdid);
u32 get_pkg_type(void)
{
	return ((get_chip_scu_data(SCU_XTAL_SEL)>>14)&0x3);
}
EXPORT_SYMBOL(get_pkg_type);
#endif

/************************************************************************
*                 AVS API
*************************************************************************
*/
static void AVS_DAC_CHG(void)
{
	u32 tmp_val;
	
	//toggle CHG bit
	tmp_val = get_chip_scu_data(RG_DATA_AVS_DAC) | (0x1<<DAC_CHG_OFST);
	set_chip_scu_data(RG_DATA_AVS_DAC, tmp_val);
	tmp_val = get_chip_scu_data(RG_DATA_AVS_DAC) & (~(0x1<<DAC_CHG_OFST));
	set_chip_scu_data(RG_DATA_AVS_DAC, tmp_val);
}

/*get AVS_DAC value & return AVS_OUT_EN value
*/ 
u32 get_avs_DAC(u32 *AVS_DAC)
{
	*AVS_DAC = get_chip_scu_data(RG_DATA_AVS_DAC) & 0x3ff;

	return (get_chip_scu_data(RG_AVS_OUT_EN)&0x1);
}
//EXPORT_SYMBOL(get_avs_DAC);

/*set AVS_DAC value & enable AVS_DAC output
*/ 
void set_avs_DAC(u32 *AVS_DAC, u8 delay_cnt)
{
	set_chip_scu_data(PLLRG_PROTECT, 0x80);
	set_chip_scu_data(RG_DATA_AVS_DAC, *AVS_DAC);
	AVS_DAC_CHG();
	mdelay(delay_cnt);
	set_chip_scu_data(PLLRG_PROTECT, 0x0);
}
//EXPORT_SYMBOL(set_avs_DAC);

/*DAC_EN = 1 to enable output; DAC_EN = 0 to disable output*/
void avs_DAC_en(u8 DAC_EN)
{
	set_chip_scu_data(PLLRG_PROTECT, 0x80);
	set_chip_scu_data(RG_AVS_OUT_EN, (get_chip_scu_data(RG_AVS_OUT_EN) & (~(0x1<<DAC_EN_OFST)))|((DAC_EN & 0x1)<<DAC_EN_OFST));
	set_chip_scu_data(PLLRG_PROTECT, 0x0);
}

/*return TADC value by mux_num: 0=BGP_thermal, 1=AVSMON, 2=Vcore, 3=AVS_DAC ,5=GBE_thermal, 6=CPU_thermal
*/
u32 read_TADC(ADC_MUX_T mux_num, u8 delay_cnt)
{
  u32 val=0;
  spin_lock(&ADC_lock);
	
  if(mux_num != ((get_chip_scu_data(MUX_TADC)>>TADC_MUX_OFST)&TADC_MUX_MASK))
  {
    set_chip_scu_data(PLLRG_PROTECT,  PROTECT_KEY);
    rw_chip_scu_data(MUX_TADC, mux_num, TADC_MUX_MASK, TADC_MUX_OFST);
    mdelay(delay_cnt);
    set_chip_scu_data(PLLRG_PROTECT,  0x0);
  }
	
  val = get_chip_scu_data(DOUT_TADC);
	
  spin_unlock(&ADC_lock);

	#if avs_dbg
  printk("MUX_SEL RG(0x1fa202e4) = 0x%x\r\n", get_chip_scu_data(0x2e4));
  printk("ADC_VAL1 RG(0x1fa202f0) = 0x%x\r\n", val);
  printk("ADC_VAL2 RG(0x1fa202f0) = 0x%x\r\n", get_chip_scu_data(0x2f0));
  #endif
  return val;
}

void TADC_init(void)
{
  //spin_lock_init(&ADC_lock);
  set_chip_scu_data(PLLRG_PROTECT,  PROTECT_KEY);
  //set TADC related registers
  //set TADC mode
  rw_chip_scu_data(MUX_TADC,0x33B0,TADC_SET_MASK,0);
  //reset TADC, 0x1fa202ec = [4] = 0, 0x1fa202ec = [4] = 1
  rw_chip_scu_data(MUX_TADC,0,1,TADC_RST_OFST);
  rw_chip_scu_data(MUX_TADC,1,1,TADC_RST_OFST);
  set_chip_scu_data(PLLRG_PROTECT,  0x0);
}

void set_BG_CKEN(void)
{

}