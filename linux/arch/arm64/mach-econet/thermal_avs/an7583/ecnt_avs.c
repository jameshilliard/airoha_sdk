#include <linux/version.h>
#include <asm/io.h>
#include <modules/avs/avs.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/of_platform.h>
#include <linux/platform_device.h>
#include <linux/delay.h>
#include <linux/timer.h>
#include <linux/kthread.h>
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
#include <linux/sched.h>
#include <linux/spinlock.h>
#else
#include <asm/tc3162.h>
#endif
//#include "avs/avs.h"
#include "ecnt_thermal_avs.h"
#include <linux/proc_fs.h>
#include <linux/uaccess.h>

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
	
#define AVS_DAC_step		140		//unit: 0.01mV
//#define TADC_step 		31	//unit: uV
//#define TADC_32_step		180		//standard slope for non-efuse case, unit: 0.01mV, for ADC divide 32
//#define TADC_32_step_shift		5
//#define TADC_16_step		90		//standard slope for non-efuse case, unit: 0.01mV, for ADC divide 16
//#define TADC_16_step_shift		4
#define TADC_gran_step		97			//standard slope for non-efuse case, unit: 0.01mV, granularity related
#define TADC_gran_step_shift		4	//TADC code divider, granularity related

#define FW_DAC_STEP_FINAL		1
#define ST_LV_code			(24576>>TADC_gran_step_shift)	//standard EF LV code for non-efuse case
#define EF_Vdiff			1000000	//1.0V, unit: 0.001mV
#define FT_LV_code  		50000	//0.5V, unit: 0.01mV		
#define Vcore_H_thd			1150 //1.15V, unit: 0.001V
#define Vcore_L_thd			850 //0.85V, unit: 0.001V
#define Vcore_H_thd_def			1060 //1.06V, unit: 0.001V
#define Vcore_L_thd_def			940 //0.94V, unit: 0.001V
#define MAX_AVS_LOOP		400	//400*AVS_DAC_step/2 = 400*0.7 = 280mV for approximate max. tuning range

#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
extern u32 get_chip_scu_data(u32 reg);
extern void set_chip_scu_data(u32 reg, u32 val);
//extern u32 get_ptp_dummy_AVS(void);
#else
#define get_chip_scu_data(reg) readl((0x1fa20000 + reg))
#define set_chip_scu_data(reg, val) writel(val, (0x1fa20000 + reg))
#define RG_AVS_DUMMY_REG 0x1efbdf2c
//#define	get_ptp_dummy_AVS()	readl(RG_AVS_DUMMY_REG)
#endif

#define	AVS_Voltage_AVS_Voltage_Cal_1_ADC_LSB /*[15:0]*/            841
#define	AVS_Voltage_AVS_Voltage_Cal_1_ADC_MSB /*[15:0]*/            856
#define	AVS_Voltage_AVS_Voltage_Cal_2_ADC_LSB /*[15:0]*/            857
#define	AVS_Voltage_AVS_Voltage_Cal_2_ADC_MSB /*[15:0]*/            872

#define	AVS_Voltage_AVS_Voltage_Cal_1_ADC_LEN /*[15:0]*/            16
#define	AVS_Voltage_AVS_Voltage_Cal_2_ADC_LEN /*[15:0]*/            16

/*for spin lock*/
static DEFINE_SPINLOCK(AVS_SET_ABS_lock);

/************************************************************************
*                  M A C R O S
*************************************************************************
*/
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
#else
#define printk printf
#endif

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/
struct ecnt_avs_phy {
	struct device *dev;
};

struct ecnt_avs_phy *avs_phy = NULL;

static const struct of_device_id ecnt_avs_phy_of_id[] = {
    { .compatible = "airoha,an7583-avs_phy"},
    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, ecnt_avs_phy_of_id);


/* APIs */
//kernel version
extern u32 get_avs_DAC(u32 *AVS_DAC);
extern void set_avs_DAC(u32 *AVS_DAC, u8 delay_cnt);
extern u32 read_TADC(ADC_MUX_T mux_num, u8 delay_cnt);
extern void avs_DAC_en(u32 DAC_EN);
extern u32 get_phy_efuse(u32 start_bit, u32 len);
extern void TADC_init(void);

/*global variables*/
static u32 g_EF_LV_code = 0, g_EF_HV_code = 0, g_ADC_slope = 0;
static u8 g_EF_OK_flag = 0, g_EF_LOAD_done = 0;
static u32 FW_DAC_STEP = 10, FW_DAC_ST_TIME = DAC_ST_Time;
static u32 wait_time = 500, V_AVS=1000;
static u8 MSG_EN = 1;
#define msg_printf(_x_, ...) {if(MSG_EN){printk(_x_,##__VA_ARGS__);}}


static struct proc_dir_entry *avs_proc_dir = NULL, *avs_proc = NULL;
static struct task_struct *Vcore_maintain_task = NULL;


//input: 1. target_ADC: target ADC code; 2. mux_sel: select ADC = Vcore/DAC_OUT
static AVS_STATUS_T DAC_approach_target(u32 target_ADC, ADC_MUX_T mux_sel)
{
	u32 AVS_ADC, AVS_DAC = 0, DAC_step = FW_DAC_STEP, cnt = 0;
	u8 init_state = 0, search_done = 0;

	if(mux_sel != CORE_POWER && mux_sel != AVSDAC_OUT)
	{
		msg_printf("[AVS][DAC_approach_target] un-supported mux_sel: %d\n", mux_sel);
		return OUT_RANGE_FAIL;
	}

	get_avs_DAC(&AVS_DAC);
	
	if(mux_sel == AVSDAC_OUT)
	{
	#if avs_dbg
		printk("AVS_DAC init.(1) = 0x%x\r\n", AVS_DAC);
	#endif
	}
	
	AVS_ADC = read_TADC(mux_sel, ADC_ST_Time)>>TADC_gran_step_shift;
	
	#if avs_dbg
	printk("target_ADC init(>>%d) = 0x%x\r\n", TADC_gran_step_shift, target_ADC);
	printk("AVS_ADC init(>>%d) = 0x%x\r\n", TADC_gran_step_shift, AVS_ADC);
	#endif
	
	if(AVS_ADC > target_ADC)
	{
		init_state = 1;	//init_state = 1, represent initial ADC > target ADC
		//decide init. step size
		for(DAC_step = FW_DAC_STEP; DAC_step > 2; DAC_step >>= 1)
		{
			if((AVS_ADC - target_ADC)*g_ADC_slope >= DAC_step*AVS_DAC_step)
				break;
		}
	}
	else
	{
		init_state = 0;	//init_state = 0, represent initial ADC <= target ADC
		//decide init. step size
		for(DAC_step = FW_DAC_STEP; DAC_step > 2; DAC_step >>= 1)
		{
			if((target_ADC - AVS_ADC)*g_ADC_slope >= DAC_step*AVS_DAC_step)
				break;
		}
	}
	#if avs_dbg
	printk("DAC_step init = 0x%x\r\n", DAC_step);
	#endif
	
	while(AVS_ADC != target_ADC && search_done == 0)
	{
		//error handler
		if(cnt > (MAX_AVS_LOOP>>1) || AVS_DAC > 0x350 || AVS_DAC < 0x80)
		{
			#if 1//avs_dbg
			msg_printf("AVS approach target FAIL!\r\n");
			msg_printf("AVS target ADC(>>%d) = 0x%x\r\n", TADC_gran_step_shift, target_ADC);
			msg_printf("AVS_ADC(>>%d) = 0x%x\r\n", TADC_gran_step_shift, AVS_ADC);
			msg_printf("AVS_DAC = 0x%x\r\n", AVS_DAC);
			msg_printf("AVS_DAC RG = 0x%x\r\n", (u32)get_chip_scu_data(RG_DATA_AVS_DAC));
			#endif
			
			return AVS_FAIL;
		}
		
		cnt++;
		
		if(AVS_ADC > target_ADC)
		{			
			if(init_state == 0)
			{
				//DAC tuning too much setp, decrease step size, and go reverse direction.
				DAC_step >>= 1;

				init_state = 1;
				
				if(DAC_step <= FW_DAC_STEP_FINAL)
				{
					search_done = 1;
				}
			}
			
			if(mux_sel == CORE_POWER)
			{
				//DAC+=x, make Vcore = Vupper - VDAC to decrease 
				AVS_DAC += DAC_step;
			}
			else
			{
				//DAC-=x, make VDAC/AVSMON to decrease 
				AVS_DAC -= DAC_step;
			}
		}
		else	//AVS_ADC < target_ADC
		{			
			if(init_state == 1)
			{
				//DAC tuning too much setp, decrease step size, and go reverse direction.
				DAC_step >>= 1;

				init_state = 0;
				
				if(DAC_step <= FW_DAC_STEP_FINAL)
				{
					search_done = 1;
				}
			}
			
			if(mux_sel == CORE_POWER)
			{
				//DAC-=x, make Vcore = Vupper - VDAC to increase
				AVS_DAC -= DAC_step;
			}
			else
			{
				//DAC+=x, make VDAC/AVSMON to increase 
				AVS_DAC += DAC_step;
			}
		}
		
		set_avs_DAC(&AVS_DAC, FW_DAC_ST_TIME);
		AVS_ADC = read_TADC(mux_sel, ADC_ST_Time)>>TADC_gran_step_shift;
	}

	if(mux_sel == AVSDAC_OUT)
	{
	#if avs_dbg
		printk("AVS_DAC init.(2) = 0x%x\r\n", AVS_DAC);
	#endif
	}

	#if avs_dbg
	printk("DAC_approach_target loop cnt = %d\n",cnt);
	printk("AVS_ADC(>>%d) = 0x%x\r\n", TADC_gran_step_shift, AVS_ADC);
	printk("AVS_DAC = 0x%x\r\n", AVS_DAC);
	printk("AVS_DAC RG = 0x%x\r\n", (u32)get_chip_scu_data(RG_DATA_AVS_DAC));
	#endif
	
	return AVS_OK;
}

//get ADC slope from efuse. Unit: 0.01mV per 32 code.
static u32 get_EF_slope(void)
{
	u32 ADC_slope = 0;
	u32 AVS_efuse_val = 0;

	AVS_efuse_val = get_phy_efuse(AVS_Voltage_AVS_Voltage_Cal_1_ADC_LSB, 32);

	if(AVS_efuse_val != -1 && AVS_efuse_val != 0)
	{
		g_EF_HV_code = (AVS_efuse_val >> 16) >> TADC_gran_step_shift;
		g_EF_LV_code = (AVS_efuse_val & 0xffff) >> TADC_gran_step_shift;
		//calculate value of 0.001mV per 32 code & roundup from 0.001mV to 0.01mV per 32 code
		ADC_slope = ((g_EF_HV_code > g_EF_LV_code) ? ((EF_Vdiff / (g_EF_HV_code - g_EF_LV_code)+5)/10) : 0);
	}

#if avs_dbg
	printk("ADC slope = %d\n", ADC_slope);
#endif	
	return ADC_slope;
}

static void get_avs_EF_K(void)
{	
	g_ADC_slope = get_EF_slope();

	if(g_ADC_slope == 0 || g_EF_LV_code == 0)
	{

		g_ADC_slope = TADC_gran_step;

		g_EF_LV_code = ST_LV_code;

		#if avs_dbg
			printk("No EF, ADC_slope = %d\nEF_LV_code = 0x%x\n", g_ADC_slope, g_EF_LV_code);
		#endif	

		g_EF_OK_flag = 0;
	}
	else
	{
		#if avs_dbg
			printk("With EF, ADC_slope = %d\nEF_LV_code = 0x%x\nEF_HV_code = 0x%x\n", g_ADC_slope, g_EF_LV_code, g_EF_HV_code);
		#endif	
		
		g_EF_OK_flag = 1;
		
	}
	
	g_EF_LOAD_done = 1;
}

//return value unit = 0.001V 
u32 AVS_Get_Vcore(void)
{

//AVS ADC get Vcore value.(accuracy: +/-10mV)
#if 1
	u32 Vcore_ADC, Vcore;

	Vcore_ADC = read_TADC(CORE_POWER, ADC_ST_Time)>>TADC_gran_step_shift;

	#if avs_dbg
	//printk("ADC_slope = %d\n", g_ADC_slope);
	//printk("EF_LV_code = 0x%x\n", g_EF_LV_code);
	printk("Vcore_ADC(>>%d) = 0x%x\n", TADC_gran_step_shift, Vcore_ADC);
	#endif
		
	if(Vcore_ADC > g_EF_LV_code)
	{	
		//calculate value of 0.01mV & roundup from 0.01mV to 0.001V
		Vcore = ((Vcore_ADC - g_EF_LV_code)*g_ADC_slope + FT_LV_code + 50)/100;
		#if avs_dbg
		printk("Vcore = %d mV\r\n", Vcore);
		#endif
	}
	else
	{	
		//calculate value of 0.01mV & transfer from 0.01mV to 0.01V
		//Vcore = (FT_LV_code - (EF_LV_code - Vcore_ADC)*ADC_slope + 500)/1000;
		//Vcore below 0.45V, show error message.
		msg_printf("AVS_Get_Vcore error: Vcore < 0.45V\r\n");
		Vcore = 0;
	}
	return Vcore;

	
#endif

}
//EXPORT_SYMBOL(AVS_Get_Vcore);

//input parameter Vcore_tar unit = 0.001V
static AVS_STATUS_T DAC_approach_Vcore(u32 Vcore_tar)
{
	u32 Vcore, AVS_DAC, DAC_step = FW_DAC_STEP;
	int DAC_cnt = 0;
	u8 init_state = 0, search_done = 0, close_tar_flag = 0;
	#if avs_dbg
	u32 cnt = 0
	#endif
	
	Vcore = AVS_Get_Vcore();

	get_avs_DAC(&AVS_DAC);
	
	#if avs_dbg
	printk("AVS_DAC init = 0x%x\r\n", AVS_DAC);
	printk("Vcore target = %d mV\r\n", Vcore_tar);
	printk("Vcore start = %d mV\r\n", Vcore);
	#endif

	if(Vcore > Vcore_tar)
	{
		init_state = 1;	//init_state = 1, represent initial Vcore > target Vcore
		//decide init. step size
		for(DAC_step = FW_DAC_STEP; DAC_step > 2; DAC_step >>= 1)
		{
			if((Vcore - Vcore_tar)*200 >= DAC_step*AVS_DAC_step)	//Vavs = Vref - Vdac*0.5, unit 0.01mV
				break;
		}
	}
	else
	{
		init_state = 0;	//init_state = 0, represent initial Vcore <= target Vcore
		//decide init. step size
		for(DAC_step = FW_DAC_STEP; DAC_step > 2; DAC_step >>= 1)
		{
			if((Vcore_tar - Vcore)*200 >= DAC_step*AVS_DAC_step)	//Vavs = Vref - Vdac*0.5, unit 0.01mV
				break;
		}
	}
	#if avs_dbg
	printk("DAC_step init = 0x%x\r\n", DAC_step);
	#endif
	
	while(Vcore != Vcore_tar && search_done == 0)
	{
		//error handling
		if(DAC_cnt > MAX_AVS_LOOP || DAC_cnt < (-1)*MAX_AVS_LOOP || Vcore > Vcore_H_thd || Vcore < Vcore_L_thd)
		{
			#if 1//avs_dbg
			msg_printf("AVS approach target FAIL!\r\n");
			msg_printf("Vcore_tar = %dmV\r\n", Vcore_tar);
			msg_printf("Vcore = %dmV\r\n", Vcore);
			msg_printf("AVS_DAC RG = 0x%x\r\n", (u32)get_chip_scu_data(RG_DATA_AVS_DAC));
			#endif
			
			//disable DAC output
			avs_DAC_en(0x0);
			return AVS_FAIL;
		}

		#if avs_dbg
		cnt++;
		#endif
		
		if(Vcore > Vcore_tar)
		{	
			#if 1
			if(DAC_step > 2 && init_state == 1)
			{
				if(close_tar_flag == 1)
				{
					DAC_step = 2;
					
					#if avs_dbg
					printk("close_tar_flag = %d\r\n", close_tar_flag);
					printk("DAC_step change to %d\r\n", DAC_step);
					#endif
				}
				else if((Vcore - Vcore_tar)*200 < (DAC_step*AVS_DAC_step)) //Vdiff < DAC_step*AVS_DAC_step/2 (0.01mV)
				{
					//calculate precise DAC step
					DAC_step = (Vcore - Vcore_tar)*200/AVS_DAC_step;

					DAC_step = (DAC_step > 2) ? DAC_step : 2;

					#if avs_dbg
					printk("close_tar_flag = %d\r\n", close_tar_flag);
					printk("DAC_step change to %d\r\n", DAC_step);
					#endif
					
					close_tar_flag = 1;
				}
				
			}
			else	//DAC_step <= 2 or init_state = 0(Vcore < V_tar)
			#endif
			{
				if(init_state == 0)
				{
					//in previous loop, minus too much DAC,  rollback DAC to mid value
					if(close_tar_flag == 1 && DAC_step > 2)
					{
						DAC_step = 2;
					}
					else
					{
						DAC_step >>= 1;
					}

					init_state = 1;
					
					if(DAC_step <= FW_DAC_STEP_FINAL)
					{
						search_done = 1;
					}
				}
			}
			
			//DAC+=x, make Vcore = Vupper - VDAC to decrease
			if(AVS_DAC == 0x3ff)
			{
				msg_printf("AVS approach target FAIL!\r\n");
				msg_printf("AVS_DAC = %d, can not add more DAC_step = %d!\n",AVS_DAC, DAC_step);
				msg_printf("Vcore_tar = %dmV\r\n", Vcore_tar);
				msg_printf("Vcore = %dmV\r\n", Vcore);
				//disable DAC output
				avs_DAC_en(0x0);
				return AVS_FAIL;
			}
			else
			{
				AVS_DAC += DAC_step;
				DAC_cnt += DAC_step;
			}
		}
		else //Vcore < Vcore_tar
		{
			#if 1
			if(DAC_step > 2 && init_state == 0)
			{
				if(close_tar_flag == 1)
				{
					DAC_step = 2;
				}
				else if((Vcore_tar - Vcore)*200 < (DAC_step*AVS_DAC_step)) //Vdiff < DAC_step*AVS_DAC_step/2 (0.01mV)
				{
					//calculate precise DAC step
					DAC_step = (Vcore_tar - Vcore)*200/AVS_DAC_step;

					DAC_step = (DAC_step > 2) ? DAC_step : 2;
					
					close_tar_flag = 1;
				}
				
			}
			else	//DAC_step <= 2 or init_state = 1(Vcore > V_tar)
			#endif
			{
				if(init_state == 1)
				{
					//in previous loop, add too much DAC,  rollback DAC to mid value
					if(close_tar_flag == 1 && DAC_step > 2)
					{
						DAC_step = 2;
					}
					else
					{
						DAC_step >>= 1;
					}

					init_state = 0;
					
					if(DAC_step <= FW_DAC_STEP_FINAL)
					{
						search_done = 1;
					}
				}
			}
			
			//DAC-=x, make Vcore = Vupper - VDAC to increase
			if(AVS_DAC == 0)
			{
				msg_printf("AVS approach target FAIL!\r\n");
				msg_printf("AVS_DAC = %d, can not minus more DAC_step = %d!\n",AVS_DAC, DAC_step);
				msg_printf("Vcore_tar = %dmV\r\n", Vcore_tar);
				msg_printf("Vcore = %dmV\r\n", Vcore);
				//disable DAC output
				avs_DAC_en(0x0);
				return AVS_FAIL;
			}
			else
			{
				AVS_DAC = (AVS_DAC <= DAC_step) ? 0 : (AVS_DAC-DAC_step);
				DAC_cnt -= DAC_step;
			}
		}

		set_avs_DAC(&AVS_DAC, FW_DAC_ST_TIME);
		Vcore = AVS_Get_Vcore();

	}

	#if avs_dbg
	printk("Final DAC_step = %d\n",DAC_step);
	printk("DAC_approach_Vcore loop cnt = %d\n",cnt);
	printk("Vcore end = %d mV\r\n", Vcore);
	#endif
	
	return AVS_OK;
}

//input parameter Vcore_tar unit = 0.001V
u32 AVS_Set_ABS(u32 Vcore_tar)
{
	u32 RG_AVS_OUT_EN_val, AVS_DAC;
	u32 FB_V_ADC, Vcore;
	AVS_STATUS_T status = AVS_FAIL;

	spin_lock(&AVS_SET_ABS_lock);

	msg_printf("AVS set point: %d.%03dV\r\n", Vcore_tar/1000, Vcore_tar%1000);

	if(Vcore_tar > Vcore_H_thd || Vcore_tar < Vcore_L_thd)
	{
		msg_printf("AVS ERROR: Invalid Vcore target: %dmV\r\n", Vcore_tar);
		status = OUT_RANGE_FAIL;
		goto exit;
	}
	
	if(g_EF_LOAD_done == 0)
	{
		TADC_init();
		get_avs_EF_K();
	}

	#ifndef USE_DEF_K
	if(g_EF_OK_flag == 0)
	{
		msg_printf("AVS ERROR: efuse invalid\r\n");
		status = AVS_FAIL;
		goto exit;
	}
	#endif

	//check default Vcore
	if(get_avs_DAC(&AVS_DAC) == 0)
	{
		Vcore = AVS_Get_Vcore();
		if(Vcore > Vcore_H_thd_def || Vcore < Vcore_L_thd_def)
		{
			msg_printf("AVS ERROR: Detect HW default Volt. out of range.\r\n");
			msg_printf("AVS ERROR: HW default Volt. = %d.%03dV\r\n", Vcore/1000, Vcore%1000);
			status = AVS_FAIL;
			goto exit;
		}
	}

	RG_AVS_OUT_EN_val = get_avs_DAC(&AVS_DAC);

	if(RG_AVS_OUT_EN_val == 0)
	{
		//approach to AVSMON of buck & enable DAC
		//calculate initial DAC
		FB_V_ADC = read_TADC(PAD_AVS, ADC_ST_Time)>>TADC_gran_step_shift;

		AVS_DAC = ((FB_V_ADC - g_EF_LV_code)*g_ADC_slope + FT_LV_code)/AVS_DAC_step;
		
		set_avs_DAC(&AVS_DAC, FW_DAC_ST_TIME);
		
		if(DAC_approach_target(FB_V_ADC, AVSDAC_OUT) != AVS_OK)
		{
			msg_printf("AVS FAIL: DAC track to AVSMON fail\r\n");
			status = AVS_FAIL;
			goto exit;
		}
		else
		{
			//enable DAC output
			avs_DAC_en(0x1);
			#if avs_dbg
			printk("DAC_EN RG(0x1fa202a0) = 0x%x\r\n", get_chip_scu_data(0x2a0));
			#endif
		}
	}
	
#if 1
	//approach to target Vcore
	if(DAC_approach_Vcore(Vcore_tar) != AVS_OK)
	{
		msg_printf("AVS FAIL: track to Vcore fail\r\n");
	}
	else
	{
		status = AVS_OK;
		msg_printf("AVS set done.\r\n");
	}
#endif

exit:
	spin_unlock(&AVS_SET_ABS_lock);
	return status;
}
EXPORT_SYMBOL(AVS_Set_ABS);

/*input argument V_SEL:
  0: NV, 1V
  1: LV, 0.9V
  2: HV, 1.05V
  3: OFF, HW default voltage
*/
u32 SET_AVS(u32 V_SEL)
{
	AVS_STATUS_T status = AVS_FAIL;
	u32 Vcore, AVS_DAC;
	
	if(g_EF_LOAD_done == 0)
	{
		TADC_init();
		get_avs_EF_K();
	}

	#ifndef USE_DEF_K
	if(g_EF_OK_flag == 0)
	{
		printk("AVS ERROR: No efuse\r\n");
		return AVS_FAIL;
	}
	#endif

	//check default Vcore
	if(get_avs_DAC(&AVS_DAC) == 0)
	{
		Vcore = AVS_Get_Vcore();
		if(Vcore > Vcore_H_thd_def || Vcore < Vcore_L_thd_def)
		{
			printk("AVS ERROR: Detect default Volt. out of range.\r\n");
			printk("AVS ERROR: Default Volt. = %d.%03dV\r\n", Vcore/1000, Vcore%1000);
			return AVS_FAIL;
		}
	}

	if(V_SEL == OFF)
	{
		if(get_avs_DAC(&AVS_DAC) == 1)
		{
			status = AVS_Set_ABS(1000);
			//disable DAC output
			avs_DAC_en(0x0);
		}
	}
	else if(V_SEL == NV)
	{
		status = AVS_Set_ABS(1000);
	}
	else if(V_SEL == LV)
	{
		status = (g_EF_OK_flag == 1 ? AVS_Set_ABS(900) : AVS_Set_ABS(925));
	}
	else if(V_SEL == HV)
	{
		status = AVS_Set_ABS(1050);
	}
	else
	{
		printk("AVS ERROR: input V_SEL out of range\r\n");
		status = OUT_RANGE_FAIL;
	}
	
	return status;
}
EXPORT_SYMBOL(SET_AVS);

static int __avs_maintain_Vcore(void *arg)
{	
	while(!kthread_should_stop()) {
		
		AVS_Set_ABS(V_AVS);
		
		msleep(wait_time);
	}
	return 0;
}

/*
input argument 1: Vcore_tar, unit 0.001V, 850<=val<=1150
input argument 2: ms_time, unit ms, val>=200
Start a timer to set Vcore_tar every ms_time period.
*/
void Set_AVS_Timer(u32 Vcore_tar, u32 ms_time)
{
	wait_time = (ms_time >= 200) ? ms_time : 200;

	if(Vcore_tar > Vcore_H_thd || Vcore_tar < Vcore_L_thd)
	{
		printk("Set_AVS_Timer ERROR: Invalid Vcore target: %dmV\r\n", Vcore_tar);
		return;
	}
	else
	{
		V_AVS = Vcore_tar;
	}

	printk("Set_AVS_Timer: Vcore target: %dmV, wait time = %dms\r\n", V_AVS, wait_time);
	
	if(Vcore_maintain_task == NULL)
	{
		printk("Start_AVS_Timer\n");
		Vcore_maintain_task = kthread_run(__avs_maintain_Vcore, NULL, "AVS_Timer");
		if (IS_ERR(Vcore_maintain_task)) 
		{
			Vcore_maintain_task = NULL;
		    printk("\nERROR(%s) kthread_run failed.\n", __func__);
			return;
		}
	}

	//Avoid AVS MSG frequently print.
	MSG_EN = 0;
}
EXPORT_SYMBOL(Set_AVS_Timer);

void Stop_AVS_Timer(void)
{
	if(Vcore_maintain_task)
	{
		kthread_stop(Vcore_maintain_task);
		Vcore_maintain_task = NULL;
		MSG_EN = 1;
		printk("Stop_AVS_Timer\n");
	}
}
EXPORT_SYMBOL(Stop_AVS_Timer);

static int avs_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char val_string[64], cmd[64], subcmd[64];
	u32 dec1, dec2;

	memset(val_string,0,(sizeof(char)*64));
	memset(cmd,0,(sizeof(char)*64));
	memset(subcmd,0,(sizeof(char)*64));
	
	if (count > sizeof(val_string) - 1)
		return -EINVAL ;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT ;
	
	sscanf(val_string, "%s %s", cmd, subcmd) ;
	sscanf(val_string, "%s %d %d", cmd, &dec1, &dec2) ;

	if(!strcmp(cmd, "AVS_SET"))
	{
		if(!strcmp(subcmd, "NV"))
		{
			SET_AVS(NV);
		}
		else if(!strcmp(subcmd, "LV"))
		{
			SET_AVS(LV);
		}
		else if(!strcmp(subcmd, "HV"))
		{
			SET_AVS(HV);
		}
		else if(!strcmp(subcmd, "OFF"))
		{
			SET_AVS(OFF);
		}
	}
	else if(!strcmp(cmd, "GET_Vcore"))
	{
		printk("Vcore = %d mV\r\n", AVS_Get_Vcore());
	}
	else if(!strcmp(cmd, "GET_EF"))
	{
		get_avs_EF_K();
		printk("ADC_slope = %d\nEF_LV_code = 0x%x\nEF_HV_code = 0x%x\nEF_OK_flag = %d\n", \
				g_ADC_slope, g_EF_LV_code, g_EF_HV_code, g_EF_OK_flag);
	}
	else if(!strcmp(cmd, "DAC_TIME_SET"))
	{
		FW_DAC_STEP = dec1;
		FW_DAC_ST_TIME = dec2;
		printk("DAC_STEP = %d, DAC_ST_TIME = %d\n", FW_DAC_STEP, FW_DAC_ST_TIME);
	}
	else if(!strcmp(cmd, "AVS_SET_mV"))
	{
		if(dec1 <= 1050 && dec1 >= 855)
		{
			printk("Vcore target = %dmV\n", dec1);
			AVS_Set_ABS(dec1);
		}
		else
		{
			printk("Set Vcore = %dmV, out of range\n",dec1);
		}
	}
	else if(!strcmp(cmd, "AVS_Timer"))
	{
		if(!strcmp(subcmd, "OFF"))
		{
			Stop_AVS_Timer();
		}
		else
		{
			printk("Set Vcore target = %dmV, wait time = %dms\n", dec1, dec2);
			Set_AVS_Timer(dec1, dec2);
		}
	}
	else if(!strcmp(cmd, "MSG_EN"))
	{
		MSG_EN = dec1;
		printk("MSG_EN = %d\n", MSG_EN);
	}
	
	return count;
}

int avs_debug_init(void) 
{
	/* create proc node */
	avs_proc_dir = proc_mkdir("avs_proc", NULL);
	if(avs_proc_dir)
	{
		avs_proc = create_proc_entry("debug", 0, avs_proc_dir);
		
	    if(avs_proc) 
		{
		    avs_proc->write_proc = avs_write_proc;
			return 0;
	    }      
	}

	return -1;
}



u32 AVS_Get_Affinity(u32 pid, u32 *mask)
{
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
	return sched_getaffinity( pid, mask);
#else
	printk("AVS_Get_Affinity only support when linux version bigger than 2.6.30\r\n");
	return 0;
#endif
}
EXPORT_SYMBOL(AVS_Get_Affinity);

u32 AVS_Set_Affinity(u32 pid, u32 *mask)
{
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,30)
	return sched_setaffinity( pid, mask);
#else
	printk("AVS_Get_Affinity only support when linux version bigger than 2.6.30\r\n");
	return 0;
#endif
}
EXPORT_SYMBOL(AVS_Set_Affinity);

static int avs_phy_drv_probe(struct platform_device *pdev)
{
	printk("AVS API version: 7583.1.20240715\n");
	
	if(avs_debug_init()!=0)
	{
		printk("AVS proc init fail\n");
	}
		
    return 0;
}

static int avs_phy_drv_remove(struct platform_device *pdev)
{
	if(avs_phy)  {
  		printk("avs_phy_drv_remove\n");
	}
    return 0;
}

/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/
static struct platform_driver avs_phy_driver = {
    .probe = avs_phy_drv_probe,
    .remove = avs_phy_drv_remove,
    .driver = {
	    .name = "an7583-avs_phy",
	    .of_match_table = ecnt_avs_phy_of_id
    },
};

//builtin_platform_driver(thermal_phy_driver);
module_platform_driver(avs_phy_driver); 

MODULE_DESCRIPTION("EcoNet avs Driver");