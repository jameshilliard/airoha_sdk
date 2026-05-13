/***************************************************************
Copyright Statement:

This software/firmware and related documentation (锟斤拷EcoNet Software锟斤拷) 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to EcoNet (HK) Limited (锟斤拷EcoNet锟斤拷) and/or 
its licensors. Without the prior written permission of EcoNet and/or its licensors, 
any reproduction, modification, use or disclosure of EcoNet Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (锟斤拷ECONET SOFTWARE锟斤拷) RECEIVED FROM ECONET 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 锟斤拷AS IS锟斤拷 
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVER锟斤拷S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES 
MADE TO RECEIVER锟斤拷S SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
ECONET'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE ECONET 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT ECONET'S SOLE OPTION, TO 
REVISE OR REPLACE THE ECONET SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO ECONET FOR SUCH 
ECONET SOFTWARE.
***************************************************************/

/************************************************************************
*                  I N C L U D E S
*************************************************************************
*/
#include <linux/module.h>
#include <linux/types.h>
#include <linux/of_platform.h>
#include <linux/platform_device.h>

#include <asm/io.h>

#include <linux/delay.h>

#include <linux/of_address.h>
#include <linux/fs.h>
#include <asm/tc3162/tc3162.h>
#include <asm/tc3162/ecnt_timer.h>
#include <linux/interrupt.h>

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
#define APB_TIMER_DBG			(0)

#define CR_TIMER_BASE  			(0x000000)	/*phys:0xBFBF0100*/
#define CR_TIMER_CTL    		(CR_TIMER_BASE + 0x000)
#define CR_TIMER0_LVR   		(CR_TIMER_BASE + 0x04)
#define CR_TIMER0_CVR			(CR_TIMER_BASE + 0x08)
#define CR_TIMER1_LVR			(CR_TIMER_BASE + 0x0C)
#define CR_TIMER1_CVR			(CR_TIMER_BASE + 0x10)
#define CR_TIMER2_LVR			(CR_TIMER_BASE + 0x14)
#define CR_TIMER2_CVR			(CR_TIMER_BASE + 0x18)
#define CR_TIMER5_LVR			(CR_TIMER_BASE + 0x1C)
#define CR_TIMER5_CVR			(CR_TIMER_BASE + 0x20)
#define CR_TIMER6_LVR			(CR_TIMER_BASE + 0x24)
#define CR_TIMER6_CVR			(CR_TIMER_BASE + 0x28)
#define CR_TIMER3_LVR			(CR_TIMER_BASE + 0x2C)
#define CR_TIMER3_CVR			(CR_TIMER_BASE + 0x30)
#define CR_WDOG0_THSLD          (CR_TIMER_BASE + 0x34)
#define CR_WDOG_RLD         	(CR_TIMER_BASE + 0x38)
#define CR_TIMER4_LVR			(CR_TIMER_BASE + 0x3C)
#define CR_TIMER4_CVR			(CR_TIMER_BASE + 0x40)
#define CR_WDOG1_THSLD          (CR_TIMER_BASE + 0x44)
#define CR_WDOG2_THSLD          (CR_TIMER_BASE + 0x48)
#define CR_WDOG3_THSLD          (CR_TIMER_BASE + 0x4C)
#define CR_TIMER7_LVR			(CR_TIMER_BASE + 0x50)
#define CR_TIMER7_CVR			(CR_TIMER_BASE + 0x54)


#define TIMERTICKS_1MS       (1)  
#define TIMERTICKS_10MS      (10)  // set timer ticks as 10 ms
#define TIMERTICKS_100MS     (100)
#define TIMERTICKS_1S        (1000) 
#define TIMERTICKS_10S       (10000)

#define ENABLE          (1)
#define DISABLE         (0)

#define TIMER_LOOP_DETECT_THRESHOLD		(10)
#define DELAY_US_MODE	(0)
#define DELAY_MS_MODE	(1)
#define DELAY_MAX_MODE	(2)

#define TIMER_NO_FOR_PON_PHY	(1)
#define TIMER_NO_FOR_DELAY_FUNC	(2)

/************************************************************************
*                  M A C R O S
*************************************************************************
*/
#define ARHT_TIMER_CLK  (50) /*MHz (for fpga and asic after 7583)*/

#define ALL_FF  (0xffffffff)

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/
struct ecnt_timer {
	struct device *dev;
	void __iomem *base;
	u32 irq[NUM_TIMERS];
};



/************************************************************************
*                  STATIC VARIABLE DECLARATIONS
*************************************************************************
*/
struct ecnt_timer *ecnt_timer =NULL;
EXPORT_SYMBOL(ecnt_timer);

static const struct of_device_id ecnt_timer_of_ids[] = {
		{ .compatible = "econet,ecnt-timer"},
	    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, ecnt_timer_of_ids);

static DEFINE_RAW_SPINLOCK(timer_reg_lock);
static DEFINE_RAW_SPINLOCK(timer_data_lock);
void (*wdog_irq_callback)(void) = NULL;

int tmrIntrStsBit[] = {16,17,18,21,22,23,24,19};
int tmrEnBit[] = {0,1,2,5,6,7,8,3};
unsigned int tmrLvrReg[] = {CR_TIMER0_LVR,CR_TIMER1_LVR,CR_TIMER2_LVR,CR_TIMER3_LVR,CR_TIMER4_LVR,CR_TIMER5_LVR,CR_TIMER6_LVR,CR_TIMER7_LVR};
unsigned int tmrCvrReg[] = {CR_TIMER0_CVR,CR_TIMER1_CVR,CR_TIMER2_CVR,CR_TIMER3_CVR,CR_TIMER4_CVR,CR_TIMER5_CVR,CR_TIMER6_CVR,CR_TIMER7_CVR};
unsigned int wdogThsldReg[] = {CR_WDOG0_THSLD,CR_WDOG1_THSLD,CR_WDOG2_THSLD,CR_WDOG3_THSLD};
int wdogEnBit[] = {25,26,27,28};
char *tmrName[] = {"arht_timer0", "arht_timer1", "arht_timer2", "arht_timer3", "arht_timer4", "arht_timer5", "arht_timer6", "arht_timer7"};

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/
/* don't EXPORT this function. Create API for your purpose instead. */
static u32 get_timer_data(u32 reg)
{
    return readl(ecnt_timer->base + reg);
}

/* don't EXPORT this function. Create API for your purpose instead. */
static void set_timer_data(u32 reg, u32 val)
{
    writel(val, ecnt_timer->base + reg); 
}

int get_soft_ratelimit_timer_irq(void)
{
	/*0 is used for NPU*/ 
	return ecnt_timer->irq[2];
}
EXPORT_SYMBOL(get_soft_ratelimit_timer_irq);

struct device* get_ecnt_timer_dev(void)
{
	if( (ecnt_timer) && (ecnt_timer->dev) )
		return ecnt_timer->dev;
	else
		return NULL;
}
EXPORT_SYMBOL(get_ecnt_timer_dev);

void set_wdogTimer_threshold(u32 val)
{
	unsigned long flags;
	
    raw_spin_lock_irqsave(&timer_reg_lock, flags);

    writel(val, ecnt_timer->base + CR_WDOG0_THSLD); 

	raw_spin_unlock_irqrestore(&timer_reg_lock, flags);	
}
EXPORT_SYMBOL(set_wdogTimer_threshold);

static int apb_timer_delay(uint32 mode, uint32 time)
{
	volatile uint32 timer_now, timer_last;
	volatile uint32 tick_acc;
	uint32 tick_per_unit;
	volatile uint32 tick_wait; 
	volatile uint32 timer2_ldv = get_timer_data(CR_TIMER2_LVR);
	uint32 same_count = 0;

	if(mode >= DELAY_MAX_MODE) {
		printk("%s: Delay mode error.\r\n", __func__);
		return -1;
	}

	if((get_timer_data(CR_TIMER_CTL) & 0x4) == 0) {
		printk("%s: Error, APB Timer2 does not be enabled.\r\n", __func__);
		return -1;
	}

	if(mode == DELAY_US_MODE) {
		tick_per_unit = SYS_HCLK >> 1;//SYS_HCLK *10^6 / 10^6 / 2
	} else {
		tick_per_unit = SYS_HCLK * 500;//SYS_HCLK *10^6 / 10^3 / 2
	}
	tick_wait = time * tick_per_unit;
	
	tick_acc = 0;
	timer_last = get_timer_data(CR_TIMER2_CVR);
	do {
		timer_now = get_timer_data(CR_TIMER2_CVR);
		if(timer_last == timer_now) {
			same_count++;
		}
		if(same_count >= TIMER_LOOP_DETECT_THRESHOLD) {
			printk("%s: dead loop, break;\r\n", __func__);
			return -1;
		}
	  	if (timer_last >= timer_now) {
	  		tick_acc += timer_last - timer_now;
		} else {
			tick_acc += timer2_ldv - timer_now + timer_last;
		}
		timer_last = timer_now;
	} while (tick_acc < tick_wait);

	return 0;
}

void delay1us(int us)
{
	if(apb_timer_delay(DELAY_US_MODE, us) != 0) {
		printk("%s: error;\r\n", __func__);
	}
}
EXPORT_SYMBOL(delay1us);

void delay1ms(int ms)
{
	if(apb_timer_delay(DELAY_MS_MODE, ms) != 0) {
		printk("%s: error;\r\n", __func__);
	}
}
EXPORT_SYMBOL(delay1ms);

u32 get_vlr(u32 timer_no)
{
	
	if(timer_no >= 3) {
		printk("Error, timer_no only 0 1 or 2 available.\n");
		return 0;
	}
	
	return get_timer_data(CR_TIMER0_CVR + timer_no * 0x8);
}
EXPORT_SYMBOL(get_vlr);

u32 get_ldv(u32 timer_no)
{
	
	if(timer_no >= 3) {
		printk("Error, timer_no only 0 1 or 2 available.\n");
		return 0;
	}
	
	return get_timer_data(CR_TIMER0_LVR + timer_no * 0x8);
}
EXPORT_SYMBOL(get_ldv);

uint32 timerCnt(void)
{	
	//volatile uint32 cnt = regRead32(CR_TIMER1_CVR);	
	volatile uint32 cnt = get_vlr(1);	
	return cnt;
}
uint32  timerCntAdjust(uint32 lastTimerCnt, uint32 currentTimerCnt)
{	//volatile uint32 freeTimerMaxCnt = regRead32(CR_TIMER1_LVR);
	volatile uint32 freeTimerMaxCnt = get_ldv(1);

	if (currentTimerCnt < lastTimerCnt)		
		return lastTimerCnt - currentTimerCnt;	
	else		
		return currentTimerCnt = freeTimerMaxCnt - currentTimerCnt + lastTimerCnt;
}

uint32 getOneMsTick(void)
{	
	return SYS_HCLK * 500;
}
EXPORT_SYMBOL(getOneMsTick);

uint32 getOneUsTick(void)
{	
	return SYS_HCLK >>1;
}
EXPORT_SYMBOL(getOneUsTick);


uint32 getOneTickUnit(void)
{	
	return getOneMsTick();
}
EXPORT_SYMBOL(timerCnt);
EXPORT_SYMBOL(timerCntAdjust);
EXPORT_SYMBOL(getOneTickUnit);


static void timer_Configure(uint8 timer_no, uint8 timer_enable, uint8 timer_halt)
{
	uint32 word, offset;

    offset = timer_no;

	word = get_timer_data(CR_TIMER_CTL);
	/* Set enable */
	if(timer_enable) {
		word |= (1 << offset);
	} else {
		word &= ~(1 << offset);
	}
	/* Set interrupt */
	if(timer_halt) {
		word |= (1 << (offset + 16));
	} else {
		word &= ~(1 << (offset + 16));
	}

	set_timer_data(CR_TIMER_CTL, word);
	
#if APB_TIMER_DBG
	printk("\rtimer_configure: set_timer_data = %x\n", word);
#endif
} 

static void timerLdvSet(uint8 timer_no, u32 val)
{
	uint32_t offset;	
    offset = timer_no;
	set_timer_data(CR_TIMER0_LVR+(offset*0x08),val);
	
#if APB_TIMER_DBG
	printk("\timerLdvSet: set_timer_data = %x\n", val);
#endif
}

static void timerCtlSet(uint8 timer_no, uint8 timer_enable, uint8 timer_halt)
{
	timer_Configure(timer_no, timer_enable, timer_halt);	
}

void timer_WatchDogConfigure(uint8 tick_enable, uint8 watchdog_enable)
{
	uint32 word;

	word = get_timer_data(CR_TIMER_CTL);
	word &= 0xfdffffdf;
	word |= ( tick_enable << 5)|(watchdog_enable<<25);
	set_timer_data(CR_TIMER_CTL, word);
}
EXPORT_SYMBOL(timer_WatchDogConfigure);

void wdog_kick(void)
{
	set_timer_data(CR_WDOG_RLD, 0x1);
}
EXPORT_SYMBOL(wdog_kick);


/* 
   Block out the wdog_kick_api function 
   since the fucntion is already moved to tcwdog.c file
   Date: 2020/10/08  
   Editor: Keng-Chih 
*/
#if 0
/* source==1 for WIFI->LAN/WAN offload
 * source==2 for Mcast WAN->WIFI offload */
void wdog_kick_api(int source)
{
#if 0 // should be moved to tcwdog.c once the tcwdog is ready
    if (source==1) { /* WIFI->LAN/WAN offload */
        wifi_rx_cnt--;
        if (wifi_rx_cnt<=0) {
            wifi_rx_cnt=wifi_rx_cnt_load_value;
            wdog_kick();
        }
    }
    else if (source==2) { /* Mcast WAN->WIFI offload */
        mcast_offload_cnt--;
        if (mcast_offload_cnt<=0) {
            mcast_offload_cnt=mcast_offload_cnt_load_value;
            wdog_kick();
        }
    }
#endif
	wdog_kick();

    return;
}
EXPORT_SYMBOL(wdog_kick_api);
#endif
extern int iswatchDogReset;
void timerSet(uint32 timer_no, uint32 timerTime, uint32 enable, uint8 timer_halt)
{   
    uint32_t word, offset;	


	if(timer_no == 2 || timer_no > 3) {		
        printk("Error, timer_no:%u is not allowed to use.\n", timer_no);		
        return;	
    }
	
	/* timer number 3 is mapping to offset 5, 
	   since timer3_enable_disable is located in bit5 position,
	   instead of bit3 position, relative to timer0~2 */
	if(timer_no == 3) {
        offset = 5;	
    } else {
        offset = timer_no;	
    }
    
    if((get_timer_data(CR_TIMER_CTL) & (1 << offset)) == (1 << offset)) {
        if(timer_no != 3){
            printk("%s: Error, APB Timer%d has been enabled.\r\n", __func__, timer_no); 	
            return;
        }
    }	

	/* when SYS_HCLK is large, it will cause overflow. The calculation will be wrong */
    /* word = (timerTime * SYS_HCLK) * 1000 / 2; */
    word = (timerTime * SYS_HCLK) * 500; 
    /* set timer3 countdown value */	
    timerLdvSet(offset, word);	
    /* enable or disable timer3 and its interrupt */	
    timerCtlSet(offset, enable, timer_halt);

}
EXPORT_SYMBOL(timerSet);

/*aip for softratelimit module, EN7523 timer_no is timer 0*/
void softRatelimitTimerCtlIntSet(uint8 timer_no, uint8 timer_halt)
{  
	uint32 word, offset;

	offset = timer_no;

	word = get_timer_data(CR_TIMER_CTL);

	/* Set interrupt */
	if(timer_halt) {
		word |= (1 << (offset + 16));
	} else {
		word &= ~(1 << (offset + 16));
	}

	set_timer_data(CR_TIMER_CTL, word);
}
EXPORT_SYMBOL(softRatelimitTimerCtlIntSet);

/*aip for softratelimit module, EN7523 timer_no is timer 0*/
void softRatelimittimerCtlEnableSet(uint8 timer_no, uint8 timer_enable)
{  
	uint32 word, offset;

    offset = timer_no;

	word = get_timer_data(CR_TIMER_CTL);
	/* Set enable */
	if(timer_enable) {
		word |= (1 << offset);
	} else {
		word &= ~(1 << offset);
	}

	set_timer_data(CR_TIMER_CTL, word);
}
EXPORT_SYMBOL(softRatelimittimerCtlEnableSet);

/*aip for softratelimit module, EN7523 timer_no is timer 0*/
void softRatelimittimerLdvSet(uint32 timer_no, uint32 timerTime)
{   	    
    timerLdvSet(timer_no, timerTime);	
}
EXPORT_SYMBOL(softRatelimittimerLdvSet);

static void delay_func_timerSet(uint32 timerTime, uint32 enable, uint8 timer_halt)
{   
    uint32 word;

	/* when SYS_HCLK is large, it will cause overflow. The calculation will be wrong */
    /* word = (timerTime * SYS_HCLK) * 1000 / 2; */
    word = (timerTime * SYS_HCLK) * 500; 
    timerLdvSet(TIMER_NO_FOR_DELAY_FUNC,word);
    timerCtlSet(TIMER_NO_FOR_DELAY_FUNC,enable,timer_halt);
}

#if defined(TCSUPPORT_CPU_AN7583) || defined(TCSUPPORT_CPU_EN7581)
static void restart_timer1_timerSet (uint32 timerTime)
{   
    uint32 word;

    timerCtlSet(TIMER_NO_FOR_PON_PHY,DISABLE,DISABLE);

	/* when SYS_HCLK is large, it will cause overflow. The calculation will be wrong */
    /* word = (timerTime * SYS_HCLK) * 1000 / 2; */
    word = (timerTime * SYS_HCLK) * 500; 
    timerLdvSet(TIMER_NO_FOR_PON_PHY,word);
    timerCtlSet(TIMER_NO_FOR_PON_PHY,ENABLE,DISABLE);
}
#endif

static irqreturn_t watchdog_timer_interrupt(int irq, void *dev_id)
{
    u32 word;

	word = get_timer_data(CR_TIMER_CTL); 
	word &= 0xffc0ffff;
	word |= 0x00200000;
	set_timer_data(CR_TIMER_CTL, word);
	
	if(!wdog_irq_callback){
		printk("[Warning] wdog_irq_callback function pointer is NULL!\n");
	}else{
        wdog_irq_callback();
    }

	return IRQ_HANDLED;	
}

int ecnt_timer_register(void (*callback)(void), void *data)
{
	unsigned long flags;
	int ret;

	ret = 0;
	raw_spin_lock_irqsave(&timer_data_lock, flags);
	if (wdog_irq_callback) {
		printk("[Warning] wdog_irq_callback function pointer is not NULL!\n");
		ret = -EBUSY;
		goto out;
	}

	wdog_irq_callback = callback;

out:
	raw_spin_unlock_irqrestore(&timer_data_lock, flags);	
	return ret;
}

EXPORT_SYMBOL(ecnt_timer_register);

int arht_timer_request_irq(int tmr_no, irq_handler_t handler)
{
    int ret;
    
    ret = devm_request_irq(ecnt_timer->dev, ecnt_timer->irq[tmr_no], handler, 0, tmrName[tmr_no], ecnt_timer);

	if(ret){
		dev_err(ecnt_timer->dev, "%s failed with err %d\n", __func__, ret);
		return -EINVAL;
	}
	return 0;
}
EXPORT_SYMBOL(arht_timer_request_irq);

void arht_timer_free_irq(int tmr_no)
{
    devm_free_irq(ecnt_timer->dev, ecnt_timer->irq[tmr_no], ecnt_timer);
	return;
}
EXPORT_SYMBOL(arht_timer_free_irq);

int arht_timer_intr_sts_check(int tmr_no)
{
    unsigned int word;
    int intrStsBit = tmrIntrStsBit[tmr_no];

    word = get_timer_data(CR_TIMER_CTL);
    return ((word>>intrStsBit)&0x1);
}
EXPORT_SYMBOL(arht_timer_intr_sts_check);

int arht_timer_intr_sts_clear(int tmr_no)
{
    unsigned int word;
    int intrStsBit = tmrIntrStsBit[tmr_no];

    word = get_timer_data(CR_TIMER_CTL);
    word &= 0xfe00ffff; /* clear all intr bits */
    word |= (1<<intrStsBit); /* write 1 to clear intr */
    set_timer_data(CR_TIMER_CTL, word);	

    return arht_timer_intr_sts_check(tmr_no);
}
EXPORT_SYMBOL(arht_timer_intr_sts_clear);

int arht_irq_to_tmrNo(int irq, void* dev_id)
{
    int i;

    ecnt_timer = (struct ecnt_timer *)dev_id;
    for (i=0; i<NUM_TIMERS; i++) {
        if (irq == ecnt_timer->irq[i])
            return i;
    }
    printk("Error(%s) can't find tmr_no for irq:%d\n", __func__, irq);
    return 0;
}
EXPORT_SYMBOL(arht_irq_to_tmrNo);

int is_arht_timer_en(int tmr_no)
{
    unsigned int word;

    word = get_timer_data(CR_TIMER_CTL);
    if ((word>>tmrEnBit[tmr_no])&0x1)
        return 1;
    else
        return 0;
}
EXPORT_SYMBOL(is_arht_timer_en);

void timer_wdog_en_set(int tmr_wdog_no, int enable, int isWdog)
{
    uint32 word;
    int tmr_no, wdog_no;

    if (isWdog) {
        if (tmr_wdog_no>=NUM_WDOGS) {
            printk("Error(%s) wdog_no:%d >= NUM_WDOGS:%d\n", __func__, tmr_wdog_no, NUM_WDOGS);
            return;
        }
        tmr_no = tmr_wdog_no+3;
        wdog_no = tmr_wdog_no;
    }
    else {
        if (tmr_wdog_no>=NUM_TIMERS) {
            printk("Error(%s) timer_no:%d >= NUM_TIMERS:%d\n", __func__, tmr_wdog_no, NUM_TIMERS);
            return;
        }
        tmr_no = tmr_wdog_no;
        wdog_no = tmr_wdog_no-3;
    }

	word = get_timer_data(CR_TIMER_CTL);

	if(enable) {
		word |= (1 << tmrEnBit[tmr_no]);
		if (isWdog)
		    word |= (1 << wdogEnBit[wdog_no]);
	} else {
		word &= ~(1 << tmrEnBit[tmr_no]);
		word |= (1 << tmrIntrStsBit[tmr_no]); /*w1c*/
		if ((3<=tmr_no)&&(tmr_no<=6)) /* tmr3~6 may be wdog0~3 */
		    word &= ~(1 << wdogEnBit[wdog_no]);
	}

	set_timer_data(CR_TIMER_CTL, word);	
	return;
}

void arht_timer_en_set(int tmr_no, int tmr_en)
{
    timer_wdog_en_set(tmr_no, tmr_en, 0);
	return;
}
EXPORT_SYMBOL(arht_timer_en_set);

void arht_wdog_en_set(int wdog_no, int wdog_en)
{
    timer_wdog_en_set(wdog_no, wdog_en, 1);	
	return;
}
EXPORT_SYMBOL(arht_wdog_en_set);

unsigned int arht_msec_to_ticks (unsigned int msec, unsigned int clk_freq/*MHz*/)
{
    unsigned long long ticks;

    ticks = (unsigned long long)(clk_freq*1000*msec);
    
    if (ticks==0) {
        printk("Error(%s) ticks is 0\n", __func__);
    }
    else if (ticks >= ((unsigned long long)ALL_FF)) {
        printk("Error(%s) ticks:0x%llx is overflow\n", __func__, ticks);
        ticks=0;
    }
    else {
        #if 0 //debug
        printk("msec:%d to ticks:0x%x (with clk_freq:%d MHz)\n", (int)msec, (unsigned int)ticks, (int)clk_freq);
        #endif
    }

    return (unsigned int)ticks;
}
EXPORT_SYMBOL(arht_msec_to_ticks);

void arht_timer_load_ms_set(int tmr_no, unsigned int msec)
{
    unsigned int tmr_tick = arht_msec_to_ticks(msec, ARHT_TIMER_CLK);

    if (tmr_tick)
	    set_timer_data(tmrLvrReg[tmr_no], tmr_tick);

	return;
}
EXPORT_SYMBOL(arht_timer_load_ms_set);

void arht_wdog_thsld_ms_set(int wdog_no, unsigned int msec)
{
    unsigned int tmr_tick = arht_msec_to_ticks(msec, ARHT_TIMER_CLK);

    if (tmr_tick)
	    set_timer_data(wdogThsldReg[wdog_no], tmr_tick);

	return;
}
EXPORT_SYMBOL(arht_wdog_thsld_ms_set);

void arht_wdog_reload(int wdog_no)
{
    set_timer_data(CR_WDOG_RLD, 1<<wdog_no);
	return;
}
EXPORT_SYMBOL(arht_wdog_reload);

static int ecnt_timer_drv_probe(struct platform_device *pdev)
{
    struct resource *res = NULL;
    int ret, i;

	printk("[apb_timer] ecnt_timer_drv_probe\n");

    if (!pdev->dev.of_node) {
        dev_err(&pdev->dev, "No timer DT node found\n");
        return -EINVAL;
    }

    ecnt_timer = devm_kzalloc(&pdev->dev, sizeof(struct ecnt_timer), GFP_KERNEL);
    if (!ecnt_timer) {
		printk("[apb_timer] devm_kzalloc error.\n");
        return -ENOMEM;
    }

    platform_set_drvdata(pdev, ecnt_timer);

	/* get irq num */
	for (i=0; i<NUM_TIMERS; i++) {
	    ecnt_timer->irq[i] = platform_get_irq(pdev, i);	
	}

	ret = devm_request_irq(&pdev->dev, ecnt_timer->irq[3], watchdog_timer_interrupt, 
	                           0, dev_name(&pdev->dev), ecnt_timer);
	if(ret){
		dev_err(&(pdev->dev), "devm_request_irq failed with err %d\n", ret);
		return -EINVAL;
	}

    /* get timer base address */
    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    ecnt_timer->base = devm_ioremap_resource(&pdev->dev, res);
    if (IS_ERR(ecnt_timer->base)) {
		printk("[apb_timer] devm_ioremap_resource error.\n");
        return PTR_ERR(ecnt_timer->base);
    }

    ecnt_timer->dev = &pdev->dev;

	/* Enable timer2 for delay1us and delay1ms function. */
	delay_func_timerSet(TIMERTICKS_10MS, ENABLE, DISABLE);

#if defined(TCSUPPORT_CPU_AN7583) || defined(TCSUPPORT_CPU_EN7581)
	/* Disable and enable timer1 for phy delay function. */
	restart_timer1_timerSet(TIMERTICKS_10MS);
#endif

	printk("[timer] res->name:%s\n", res->name);
#if APB_TIMER_DBG
	printk("[timer] res->start:0x%llx ===\n", res->start);
	printk("[timer] res->end:0x%llx ===\n", res->end);
	printk("[timer] ecnt_timer->base:0x%lx\n", (unsigned long)ecnt_timer->base);
	printk("[timer] ecnt_timer:0x%lx\n", (unsigned long)ecnt_timer);
	for (i=0; i<NUM_TIMERS; i++) {
	    printk("[timer] ecnt_timer->irq[%d]:%d\n", i, (int)ecnt_timer->irq[i]);
	}
#endif
    return 0;
}

static int ecnt_timer_drv_remove(struct platform_device *pdev)
{
    return 0;
}


/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/

static struct platform_driver ecnt_timer_driver = {
	.probe = ecnt_timer_drv_probe,
	.remove = ecnt_timer_drv_remove,
	.driver = {
		.name = "ecnt-timer",
		.of_match_table = ecnt_timer_of_ids,
	},
};
module_platform_driver(ecnt_timer_driver);


MODULE_DESCRIPTION("EcoNet timer");


