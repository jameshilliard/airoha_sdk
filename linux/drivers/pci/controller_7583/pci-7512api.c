#ifdef TCSUPPORT_CPU_ARMV8


/************************************************************************
*               I N C L U D E S
*************************************************************************
*/
#include <linux/version.h>
#include <linux/types.h>
#include <linux/pci.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/interrupt.h> 
#include <asm/tc3162/tc3162.h>
#include <linux/proc_fs.h>
#include <linux/io.h>
#include <ecnt_hook/ecnt_hook_pcie.h>
#if defined(TCSUPPORT_CPU_EN7523)

#if defined(TCSUPPORT_CPU_EN7581) && defined(TCSUPPORT_AUTOBENCH)
/*==pcie slt test=============================================*/
#include <linux/module.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/spinlock.h>
#include <linux/signal.h>
#include <linux/sched.h>
#include <linux/mm.h>
#include <linux/timer.h>
#include <cpu/pkgid.h>
/*==pcie slt test=============================================*/
#endif

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/



/************************************************************************
*                  M A C R O S
*************************************************************************
*/
extern void pcie_PhyDebug(unsigned int sel);
extern void pcie_PowerDown(unsigned int sel);
extern void pcie_PowerUp(unsigned int sel);
extern u32 regRead_PCIe(u32 reg);	
extern void regWrite_PCIe(u32 reg, u32 val);	

extern u32 regRead_PCIe1(u32 reg);	
extern void regWrite_PCIe1(u32 reg, u32 val);	

#define isRC0_LINKUP		((regRead_PCIe(0x1fc20154) & 0x100) ? 1 : 0)  
#define isRC1_LINKUP		((regRead_PCIe1(0x1fa92804) & 0x400) ? 1 : 0)

#define PCIE_MAJOR 225
#define PCIE_CNT_NUMBER 6

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/
typedef int (*pcie_api_op_t)(struct ecnt_pcie_data * data);
enum {
	PCIE_DEV_RC0 = 0,
	PCIE_DEV_RC1,
	PCIE_DEV_EP0,
	PCIE_DEV_EP1,
};

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/


/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/

#if 0//defined(TCSUPPORT_CPU_EN7581) && defined(TCSUPPORT_AUTOBENCH)
/*==pcie slt test=============================================*/
#define RG_RC0_ERR1		0x1FC00E08
#define RG_RC1_ERR1		0x1FC20E08
#define RG_RC2_ERR1		0x1FC40E08

#define RG_RC0_ERR2		0x1FC00154
#define RG_RC1_ERR2		0x1FC20154
#define RG_RC2_ERR2		0x1FC40154


int print_mem_reg(unsigned int *physAddr, unsigned int len)
{
    void *virtAddr;
	int ret=0;

    virtAddr = ioremap((phys_addr_t)physAddr, len);

    ret= readl(virtAddr);
    printk("0x%lx\t0x%08lx\r\n", (unsigned int)physAddr, ret);
    
    iounmap(virtAddr);
    return ret;
}

/*=========================================================================
===========================================================================
                          |  port0(PCIE0)  |  port1(PCIE1)  |  port2(USB1)
===========================================================================
 isAN7581GT		  |     Y,2Lane    |                |       Y
--------------------------------------------------------------------------- 
 isAN7581PT		  |     Y,1Lane    |       Y        |
--------------------------------------------------------------------------- 
 isAN7581CT		  |     Y,1Lane    |       Y        |  
--------------------------------------------------------------------------- 
 isAN7581DT		  |                |                |
--------------------------------------------------------------------------- 
 isAN7581ST		  |                |                |
--------------------------------------------------------------------------- 
 isAN7551PT		  |     Y,1Lane    |       Y        |
--------------------------------------------------------------------------- 
 isAN7566PT		  |     Y,1Lane    |       Y        |
--------------------------------------------------------------------------- 
 isAN7581IT	          |     Y,1Lane    |       Y        |
===========================================================================
 port0 + port2, isAN7581GT
 port0 + port1, isAN7581PT,isAN7581CT,isAN7551PT,isAN7566PT,isAN7581IT
 all link down, isAN7581DT,isAN7581ST
=========================================================================*/

int pcie_7581_slt_test(void){
	unsigned long val;
	unsigned int count, temp;

	printk("7581 PCIe slt testing!!\n");

	if(isAN7581DT || isAN7581ST || isAN7581FD){
			printk(" isAN7581DT || isAN7581ST || isAN7581FD has no PCIE(RC0/1/2) ,no need to check\n");
			return 0;
	}

	regWrite_PCIe(0x1fc00154, 0x11010000);//reset before slt
	regWrite_PCIe(0x1fc20154, 0x11010000);
	mdelay(5000);

	if(isAN7581GT ||  isAN7581PT ||  isAN7581FP || isAN7581CT || isAN7551PT || isAN7566PT ||isAN7581IT ||isAN7581FG ||isAN7551GT ||isAN7566GT)
	{
		printk(" isAN7581GT ||  isAN7581PT ||  isAN7581FP || isAN7581CT || isAN7551PT || isAN7566PT ||isAN7581IT has PCIE(RC0) \n");

		if(!isRC0_LINKUP){
			printk(" PCIE(RC0) link down\n");
			return 1;
		}

		val = print_mem_reg(RG_RC0_ERR1,4);
		if (val != 0){
				printk(" PCIE have RC0 AXI ERROR (0x%x):%ld\n", RG_RC0_ERR1, val);
			return 1;
		}

		val = print_mem_reg(RG_RC0_ERR2,4);
		val = val & 0xFFFF0600;
		if (val != 0){
				printk(" PCIE have RC0 TLP ERROR (0x%x):%ld\n", RG_RC0_ERR2, val);
			return 1;
		}

	}

	if(isAN7581PT ||  isAN7581FP || isAN7581CT || isAN7551PT || isAN7566PT ||isAN7581IT)
	{
		printk(" isAN7581PT || isAN7581FP || isAN7581CT || isAN7551PT || isAN7566PT ||isAN7581IT has PCIE(RC1) \n");


			if(!isRC1_LINKUP){
				printk(" PCIE(RC1) link down\n");
				return 1;
			}
		
		val = print_mem_reg(RG_RC1_ERR1,4);
			if (val != 0){
					printk(" PCIE have RC1 AXI ERROR (0x%x):%ld\n", RG_RC1_ERR1, val);
				return 1;
			}

		val = print_mem_reg(RG_RC1_ERR2,4);
		val = val & 0xFFFF0600;
			if (val != 0){
				printk(" PCIE have RC1 TLP ERROR (0x%x):%ld\n", RG_RC1_ERR2, val);
				return 1;
			}

	}

	if(isAN7581GT ||isAN7581FG ||isAN7551GT ||isAN7566GT)
	{
		printk(" isAN7581GT has PCIE(RC2) \n");

		if(!isRC2_LINKUP){
					printk(" PCIE(RC2) link down\n");
					return 1;
		}	
	
		val = print_mem_reg(RG_RC2_ERR1,4);
		if (val != 0){
					printk(" PCIE have RC2 AXI ERROR (0x%x):%ld\n", RG_RC2_ERR1, val);
					return 1;
		}

		val = print_mem_reg(RG_RC2_ERR2,4);
		val = val & 0xFFFF0600;
		if (val != 0){
				printk(" PCIE have RC2 TLP ERROR (0x%x):%ld\n", RG_RC2_ERR2, val);
				return 1;
		}

	}


	
	return 0;
}
/*==pcie slt test=============================================*/
#endif
int pcie_write_config_word_extend(unsigned char bus, unsigned char dev,unsigned char func, unsigned int reg, unsigned long int value);
unsigned int pcie_read_config_word_extend(unsigned char bus,unsigned char dev,unsigned char func ,unsigned int reg);

int pcie_write_config_word(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum, unsigned long int value);
unsigned long  pcie_read_config_word(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum);

int pcie_write_config_word_extend1(unsigned char bus, unsigned char dev,unsigned char func, unsigned int reg, unsigned long int value);
unsigned int pcie_read_config_word_extend1(unsigned char bus,unsigned char dev,unsigned char func ,unsigned int reg);

int pcie_write_config_word1(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum, unsigned long int value);
unsigned long  pcie_read_config_word1(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum);

int pcie_api_get_confreg(struct ecnt_pcie_data *data);
int pcie_api_set_confreg(struct ecnt_pcie_data *data);
int pcie_api_get_aspm(struct ecnt_pcie_data *data);
int pcie_api_set_aspm(struct ecnt_pcie_data *data);
int pcie_api_get_speed(struct ecnt_pcie_data *data);
int pcie_api_set_speed(struct ecnt_pcie_data *data);
int pcie_api_get_count(struct ecnt_pcie_data *data);
int pcie_api_get_linkstate(struct ecnt_pcie_data *data);
int pcie_api_set_phy_dbg(struct ecnt_pcie_data *data);
int pcie_api_set_power(struct ecnt_pcie_data *data);
int pcie_function_autobench_loopback(struct ecnt_pcie_data *data);
int pcie_function_get_chipid(struct ecnt_pcie_data *data);

ecnt_ret_val ecnt_pcie_api_hook(struct ecnt_data *in_data);
static long pcie_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
static long pcie_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);

/************************************************************************
*                  P U B L I C   D A T A
*************************************************************************
*/

struct ecnt_hook_ops ecnt_pcie_api_op = {
	.name = "pcie_api_hook",
	.is_execute = 1,
	.hookfn = ecnt_pcie_api_hook,
	.maintype = ECNT_PCIE,
	.subtype = ECNT_PCIE_API,
	.priority = 1
};

struct file_operations pcie_fops = {
	.owner 			= THIS_MODULE,
	.unlocked_ioctl	= pcie_ioctl,
#ifdef CONFIG_COMPAT
	.compat_ioctl = pcie_compat_ioctl,	
#endif
};


/************************************************************************
*                  P R I V A T E   D A T A
*************************************************************************
*/
#if LINUX_VERSION_CODE > KERNEL_VERSION(4,4,90)
static DEFINE_SPINLOCK(pcie_api_lock);
#else
static spinlock_t pcie_api_lock = SPIN_LOCK_UNLOCKED;
#endif

static unsigned int pcie_err_reg[2][PCIE_CNT_NUMBER] = 
{
	{0x1fa90054,0x1fa901d8,0x1fa901dc,0x1fa901e0,0x1fa901e4,0x1fa901e8},
	{0x1fa90058,0x1fa901ec,0x1fa901f0,0x1fa901f4,0x1fa901f8,0x1fa901fc}
};

static pcie_api_op_t pcie_operation[] = {
	pcie_api_get_confreg,
	pcie_api_set_confreg,
	pcie_api_get_aspm,
	pcie_api_set_aspm,
	pcie_api_get_speed,
	pcie_api_set_speed,
	pcie_api_get_count,
	pcie_api_get_linkstate,
	pcie_function_autobench_loopback,
	pcie_function_get_chipid,
	pcie_api_set_phy_dbg,
        pcie_api_set_power
};

/************************************************************************
*                  F U N C T I O N   D E F I N I T I O N S
*************************************************************************
*/
int pcie_write_config_word(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum, unsigned long int value)
{
	return pcie_write_config_word_extend(bus,devnum,0,regnum,value);
}

unsigned long int pcie_read_config_word(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum)
{
	return pcie_read_config_word_extend(bus,devnum,0,regnum);
}

int pcie_write_config_word_hw(unsigned char bus, unsigned char dev,unsigned char func, unsigned int reg, unsigned long int value)
{
	return pcie_write_config_word(0,bus,dev,reg,value);
}

unsigned int pcie_read_config_word_hw(unsigned char bus,unsigned char dev,unsigned char func ,unsigned int reg)
{
	return pcie_read_config_word(0,bus,dev,reg);
}

int pcie_write_config_word1(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum, unsigned long int value)
{
	return pcie_write_config_word_extend1(bus,devnum,0,regnum,value);
}

unsigned long int pcie_read_config_word1(unsigned char type, unsigned char bus, unsigned char devnum, unsigned int regnum)
{
	return pcie_read_config_word_extend1(bus,devnum,0,regnum);
}

int pcie_write_config_word_hw1(unsigned char bus, unsigned char dev,unsigned char func, unsigned int reg, unsigned long int value)
{
	return pcie_write_config_word1(0,bus,dev,reg,value);
}

unsigned int pcie_read_config_word_hw1(unsigned char bus,unsigned char dev,unsigned char func ,unsigned int reg)
{
	return pcie_read_config_word1(0,bus,dev,reg);
}

static int get_cap_pos(char bus,char dev,char func, char id)
{
	unsigned int val,pos;

	val = pcie_read_config_word_hw(bus,dev,func,0x34);
	pos = val&0xff;
	while(pos && pos != 0xff)
	{
		val = pcie_read_config_word_hw(bus,dev,func,pos);
		if ( (val&0xff) == id)
			return pos;
		pos = (val >> 0x08) & 0xff;
	}
	return 0;
}

static int get_cap_pos1(char bus,char dev,char func, char id)
{
	unsigned int val,pos;

	val = pcie_read_config_word_hw1(bus,dev,func,0x34);
	pos = val&0xff;
	while(pos && pos != 0xff)
	{
		val = pcie_read_config_word_hw1(bus,dev,func,pos);
		if ( (val&0xff) == id)
			return pos;
		pos = (val >> 0x08) & 0xff;
	}
	return 0;
}

static int pcie_get_confreg(int idx,int offset)
{
	unsigned char bus,dev,func;
	unsigned  int val;
	
	if (offset >= 0x1000 || offset < 0)
		return -1;

	if (isRC0_LINKUP == 0 && idx == PCIE_DEV_EP0)
		return -1;
	
	if (isRC1_LINKUP == 0 && idx == PCIE_DEV_EP1)
		return -1;	
	
	if (idx == PCIE_DEV_RC0){
		bus = 0; dev = 0; func = 0;
	}else if (idx == PCIE_DEV_RC1){
		bus = 0; dev = 1; func = 0;
	}else if (idx == PCIE_DEV_EP0){
		bus = 1; dev = 0; func = 0;
	}else if (idx == PCIE_DEV_EP1){
		bus = 2; dev = 0; func = 0;
	}else{
		return -1;
	}
	
	offset &= 0xffc;

	if(idx == PCIE_DEV_RC0 || idx == PCIE_DEV_EP0)
		val = pcie_read_config_word_hw(bus,dev,func,offset);
	else
		val = pcie_read_config_word_hw1(bus,dev,func,offset);
	
	return val;
}

static int pcie_get_chipid(int idx)
{	
	int ret = -1;	
	int realidx;	
	switch(idx)	{	
		case 0:			
			realidx = 2;		
			break;				
		case 1:			
			realidx = 3;		
			break;	
		default:			
			goto retvalue;		
			break;				
	}	
	printk("\n ===========pcie_get_chipid==realidx=%d============= \n",realidx);
	ret = pcie_get_confreg(realidx,0);
	retvalue:	
		return ret;	
}


static int pcie_set_confreg(int idx,int offset,unsigned int val)
{
	unsigned char bus,dev,func;
	
	if (offset >= 0x1000 || offset < 0)
		return -1;

	if (isRC0_LINKUP == 0 && idx == PCIE_DEV_EP0)
		return -1;
	
	if (isRC1_LINKUP == 0 && idx == PCIE_DEV_EP1)
		return -1;	
	
	if (idx == PCIE_DEV_RC0){
		bus = 0; dev = 0; func = 0;
	}else if (idx == PCIE_DEV_RC1){
		bus = 0; dev = 1; func = 0;
	}else if (idx == PCIE_DEV_EP0){
		bus = 1; dev = 0; func = 0;
	}else if (idx == PCIE_DEV_EP1){
		bus = 2; dev = 0; func = 0;
	}else{
		return -1;
	}
	
	offset &= 0xffc;
	
	if(idx == PCIE_DEV_RC0 || idx == PCIE_DEV_EP0)
		pcie_write_config_word_hw(bus,dev,func,offset,val);
	else
		pcie_write_config_word_hw1(bus,dev,func,offset,val);

	return 0;
}



static int pcie_set_aspm_ext(char bus,char dev,char func,unsigned int val)
{
	unsigned int pos = 0,value = 0;

	pos = get_cap_pos(bus,dev,func,0x10);
	
	if (pos < 0x40)
		return -1;

	if (val){
		value = pcie_read_config_word_hw(bus,dev,func,pos+12);
		value &= 0x0c00;
		value = value >> 10;
		if ((val > value) || ((val & value) == 0))
			return -1;
	}

	value = pcie_read_config_word_hw(bus,dev,func,pos+16);
	
	value &= 0xfffffffc;
	
	value |= val;
	
	pcie_write_config_word_hw(bus,dev,func,pos+16,value);
	
	return 0;
}

static int pcie_set_aspm_ext1(char bus,char dev,char func,unsigned int val)
{
	unsigned int pos = 0,value = 0;

	pos = get_cap_pos1(bus,dev,func,0x10);
	
	if (pos < 0x40)
		return -1;

	if (val){
		value = pcie_read_config_word_hw1(bus,dev,func,pos+12);
		value &= 0x0c00;
		value = value >> 10;
		if ((val > value) || ((val & value) == 0))
			return -1;
	}

	value = pcie_read_config_word_hw1(bus,dev,func,pos+16);
	
	value &= 0xfffffffc;
	
	value |= val;
	
	pcie_write_config_word_hw1(bus,dev,func,pos+16,value);
	
	return 0;
}

static int pcie_set_aspm(int idx,int sw)
{
	sw &= 0x3;

	if (idx == PCIE_DEV_RC0)
		return pcie_set_aspm_ext(0,0,0,sw);

	if (idx == PCIE_DEV_RC1)
		return pcie_set_aspm_ext1(0,1,0,sw);

	if (idx == PCIE_DEV_EP0 && isRC0_LINKUP)
		return pcie_set_aspm_ext(1,0,0,sw);
	
	if (idx == PCIE_DEV_EP1 && isRC1_LINKUP)
		return pcie_set_aspm_ext1(2,0,0,sw);

	return -1;
}

static int pcie_get_aspm_ext(char bus,char dev,char func)
{
	unsigned int pos = 0,value = 0;

	pos = get_cap_pos(bus,dev,func,0x10);
	
	if (pos < 0x40)
		return -1;

	value = pcie_read_config_word_hw(bus,dev,func,pos+16);
	
	value &= 0x3;
	
	return value;
}

static int pcie_get_aspm_ext1(char bus,char dev,char func)
{
	unsigned int pos = 0,value = 0;

	pos = get_cap_pos1(bus,dev,func,0x10);
	
	if (pos < 0x40)
		return -1;

	value = pcie_read_config_word_hw1(bus,dev,func,pos+16);
	
	value &= 0x3;
	
	return value;
}

static int pcie_get_aspm(int idx)
{
	if (idx == PCIE_DEV_RC0)
		return pcie_get_aspm_ext(0,0,0);

	if (idx == PCIE_DEV_RC1)
		return pcie_get_aspm_ext1(0,1,0);

	if (idx == PCIE_DEV_EP0 && isRC0_LINKUP)
		return pcie_get_aspm_ext(1,0,0);
	
	if (idx == PCIE_DEV_EP1 && isRC1_LINKUP)
		return pcie_get_aspm_ext1(2,0,0);

	return -1;
}


static int pcie_set_speed_ext(char bus,char dev,char func,unsigned int val)
{
	unsigned int pos = 0,value = 0;

	pos = get_cap_pos(bus,dev,func,0x10);
	if (pos < 0x40)
		return -1;

	value = pcie_read_config_word_hw(bus,dev,func,pos+0x30);
	value &= (~0x0f);
	value |= val ;
	pcie_write_config_word_hw(bus,dev,func,pos+0x30,value);
	return 0;
}

static int pcie_set_speed_ext1(char bus,char dev,char func,unsigned int val)
{
	unsigned int pos = 0,value = 0;

	pos = get_cap_pos1(bus,dev,func,0x10);
	if (pos < 0x40)
		return -1;

	value = pcie_read_config_word_hw1(bus,dev,func,pos+0x30);
	value &= (~0x0f);
	value |= val ;
	pcie_write_config_word_hw1(bus,dev,func,pos+0x30,value);
	return 0;
}

static int pcie_set_speed(int idx,unsigned int mode)
{
	unsigned int pos = 0,val = 0,dev ,bus;

	if (idx != PCIE_DEV_EP0 && idx != PCIE_DEV_EP1 )
		return -1;
	
	if (isRC0_LINKUP == 0 && idx == PCIE_DEV_EP0)
		return -1;
	
	if (isRC1_LINKUP == 0 && idx == PCIE_DEV_EP1)
		return -1;

	if (idx == PCIE_DEV_EP0)
	{
		dev = 0;
		bus = 1;
	}
	else if (idx == PCIE_DEV_EP1) 
	{
		dev = 1;
		bus = 2;
	}

	mode &= 0x3;

	if(idx == PCIE_DEV_EP0){	
		pos = get_cap_pos(0,dev,0,0x10);
		if (pos < 0x40)
			return -1;
		
		val = pcie_read_config_word_hw(0,dev,0,pos+0x0c);
		if ((val&0x0f) < mode)
			return -1;

		pos = get_cap_pos(bus,0,0,0x10);
		if (pos < 0x40)
			return -1;
		
		val = pcie_read_config_word_hw(bus,0,0,pos+0x0c);
		if ((val&0x0f) < mode)
			return -1;

		pcie_set_speed_ext(0,dev,0,mode);
		pcie_set_speed_ext(bus,0,0,mode);
		
		pos = get_cap_pos(0,dev,0,0x10);
		val = pcie_read_config_word_hw(0,dev,0,pos+0x10);
		val |=  (1 << 5); 
		pcie_write_config_word_hw(0,dev,0,pos+0x10,val);
	}
	else if(idx == PCIE_DEV_EP1){	
		pos = get_cap_pos1(0,dev,0,0x10);
		if (pos < 0x40)
			return -1;
		
		val = pcie_read_config_word_hw1(0,dev,0,pos+0x0c);
		if ((val&0x0f) < mode)
			return -1;

		pos = get_cap_pos1(bus,0,0,0x10);
		if (pos < 0x40)
			return -1;
		
		val = pcie_read_config_word_hw1(bus,0,0,pos+0x0c);
		if ((val&0x0f) < mode)
			return -1;

		pcie_set_speed_ext1(0,dev,0,mode);
		pcie_set_speed_ext1(bus,0,0,mode);
		
		pos = get_cap_pos1(0,dev,0,0x10);
		val = pcie_read_config_word_hw1(0,dev,0,pos+0x10);
		val |=  (1 << 5); 
		pcie_write_config_word_hw1(0,dev,0,pos+0x10,val);
	}
	
	mdelay(100);
	
	return 0;
}


static int pcie_get_speed(int idx)
{
	unsigned int pos = 0,val = 0,dev = 0;

	if (idx != PCIE_DEV_EP0 && idx != PCIE_DEV_EP1)
		return -1;
	
	if (isRC0_LINKUP == 0 && idx == PCIE_DEV_EP0)
		return -1;
	
	if (isRC1_LINKUP == 0 && idx == PCIE_DEV_EP1)
		return -1;
	
	if (idx == PCIE_DEV_EP0)
		dev = 0;
	else if (idx == PCIE_DEV_EP1)
		dev = 1;

	if(idx == PCIE_DEV_EP0){	
		pos = get_cap_pos(0,dev,0,0x10);
		if (pos < 0x40)
			return -1;
		
		val = pcie_read_config_word_hw(0,dev,0,pos+0x10);
		val = (val >> 16) & 0x0f ;
	}
	else if(idx == PCIE_DEV_EP1){	
		pos = get_cap_pos1(0,dev,0,0x10);
		if (pos < 0x40)
			return -1;
		
		val = pcie_read_config_word_hw1(0,dev,0,pos+0x10);
		val = (val >> 16) & 0x0f ;
	}
	
	return val;
}


static int pcie_get_count(int idx, struct ecnt_pcie_count_data* pcnt)
{
	int i;

	if (idx != PCIE_DEV_RC0 && idx != PCIE_DEV_RC1)
		return -1;
#ifndef TCSUPPORT_CPU_EN7523	
	for(i=0; i < PCIE_CNT_NUMBER; i++){
		//pcnt->err[i] = regRead32(pcie_err_reg[idx][i]);
		pcnt->err[i] = 0;
	}
#endif
	return 0;
}

static int pcie_get_linkstate(int idx)
{
	if (idx == PCIE_DEV_RC0)
		return isRC0_LINKUP;
	
	if (idx == PCIE_DEV_RC1)
		return isRC1_LINKUP;

	return -1;
}

#if defined(TCSUPPORT_CPU_AN7583) && defined(TCSUPPORT_AUTOBENCH)
/*==pcie slt test=============================================*/
#define RG_RC0_ERR1		0x1FC20E08
#define RG_RC0_ERR2		0x1FC20154

#define RG_RC1_ECRC_CNT		0x1fa90058
#define RG_RC1_TLPCRC		0x1fa901EC
#define RG_RC1_DLLPCRC		0x1fa901F0
#define RG_RC1_RPL_TimeOut	0x1fa901F4
#define RG_RC1_RPL_Rollover	0x1fa901F8
#define RG_RC1_CPLERR		0x1fa901FC

extern void PCIe_LTSSM_Monitor(void);
extern void PCIe_SLT_Err_Msg(u32 port);


int print_mem_reg(unsigned int *physAddr, unsigned int len)
{
    void *virtAddr;
	int ret=0;

    virtAddr = ioremap((phys_addr_t)physAddr, len);

    ret= readl(virtAddr);
    printk("0x%lx\t0x%08lx\r\n", (unsigned int)physAddr, ret);
    
    iounmap(virtAddr);
    return ret;
}

int check_speed0(int port){

	unsigned int ret=0;

	unsigned int pos = 0,val = 0;

	unsigned int EP_h_speed=0,RC_h_speed=0,link_speed=0;

	printk(" check_speed0 11 port=%x,ret=%x \n", port, ret);

	pos = get_cap_pos(port+1,0,0,0x10);
	if (pos < 0x40)
		return -1;
	val = pcie_read_config_word_hw(port+1,0,0,pos+0x0c);
	EP_h_speed = (val&0x0f);

	pos = get_cap_pos(0,port,0,0x10);
	if (pos < 0x40)
		return -1;
	val = pcie_read_config_word_hw(0,port,0,pos+0x0c);
	RC_h_speed = (val&0x0f);
	
	val = pcie_read_config_word_hw(0,port,0,pos+0x10);
	link_speed = (val >> 16) & 0x0f ;
	
	printk(" check_speed0 EP_h_speed=%x,RC_h_speed=%x;link_speed=%x \n", EP_h_speed, RC_h_speed,link_speed);

	if((link_speed==RC_h_speed)||(link_speed==EP_h_speed))
		ret = 0;
	else
		ret = 1;

	printk(" check_speed0 22 port=%x,ret=%x \n", port, ret);

	return ret;
}

int check_speed1(int port){

	unsigned int ret=0;

	unsigned int pos = 0,val = 0;

	unsigned int EP_h_speed=0,RC_h_speed=0,link_speed=0;

	printk(" check_speed1 11 port=%x,ret=%x \n", port, ret);

	pos = get_cap_pos1(port+1,0,0,0x10);
	if (pos < 0x40)
		return -1;
	val = pcie_read_config_word_hw1(port+1,0,0,pos+0x0c);
	EP_h_speed = (val&0x0f);

	pos = get_cap_pos1(0,port,0,0x10);
	if (pos < 0x40)
		return -1;
	val = pcie_read_config_word_hw1(0,port,0,pos+0x0c);
	RC_h_speed = (val&0x0f);
	
	val = pcie_read_config_word_hw1(0,port,0,pos+0x10);
	link_speed = (val >> 16) & 0x0f ;
	
	printk(" check_speed1 EP_h_speed=%x,RC_h_speed=%x;link_speed=%x \n", EP_h_speed, RC_h_speed,link_speed);

	if((link_speed==RC_h_speed)||(link_speed==EP_h_speed))
		ret = 0;
	else
		ret = 1;

	printk(" check_speed1 22 port=%x,ret=%x \n", port, ret);

	return ret;
}


/*
7583 SLT PCIE---Chipid
1. G3+G2
   isAN7583GT\isAN7583GIT\isAN7583CT\
   isAN7210GT\
   isAN7553GT\isAN7553CT\isAN7567GT\isAN7567CT

   isAN7583FG\isAN7583FC\isAN7210FG


2.no PCIe
   isAN7583DT\isAN7583DIT\isAN7583ST
   isAN7210FT\
   
   isAN7583FD\isAN7583FS
*/
			

int pcie_7583_slt_test(void){
	unsigned long val;
	unsigned int count, temp;

	unsigned int ret=0;

	printk("7583 PCIe slt testing!!\n");

	if(isAN7583DT||isAN7583DIT||isAN7583ST||isAN7210FT||isAN7583FD||isAN7583FS)
	{
			printk(" isAN7583DT||isAN7583DIT||isAN7583ST||isAN7210FT||isAN7583FD||isAN7583FS has no PCIE ,no need to check\n");
			return 0;
	}

	regWrite_PCIe(0x1fc20154, 0x11010000);//reset before slt
	mdelay(5000);

	if(isAN7583GT||isAN7583GIT||isAN7583CT||isAN7210GT||isAN7553GT||isAN7553CT||isAN7567GT||isAN7567CT||isAN7583FG||isAN7583FC||isAN7210FG)
	{
		printk(" isAN7583GT||isAN7583GIT||isAN7583CT||isAN7210GT||isAN7553GT||isAN7553CT||isAN7567GT||isAN7567CT||isAN7583FG||isAN7583FC||isAN7210FG has PCIE(RC0 G3 + RC1 G2) \n");

		if(!isRC0_LINKUP){
			printk(" PCIE(RC0) link down\n");
			return 1;
		}

		val = print_mem_reg(RG_RC0_ERR1,4);
		if (val != 0){
			printk(" PCIE have RC0 AXI ERROR (0x%x):%ld\n", RG_RC0_ERR1, val);
			PCIe_SLT_Err_Msg(0);
			return 1;
		}

		val = print_mem_reg(RG_RC0_ERR2,4);
		val = val & 0xFFFF0600;
		if (val != 0){
			printk(" PCIE have RC0 TLP ERROR (0x%x):%ld\n", RG_RC0_ERR2, val);
			PCIe_SLT_Err_Msg(0);
			return 1;
		}

		ret=check_speed0(0);//port
	    printk(" after check_speed0(0) ret=%x \n",ret);

		if(1==ret)
			return 1;




		if(!isRC1_LINKUP){
			printk(" PCIE(RC1) link down\n");
			return 1;
		}

		val = print_mem_reg(RG_RC1_ECRC_CNT,4); 		
		if (val != 0){				
			printk(" PCIE have RC1 ECRC (0x%x):%ld\n", RG_RC1_ECRC_CNT, val);			
			PCIe_SLT_Err_Msg(1);
			return 1;			
		}	

		val = print_mem_reg(RG_RC1_TLPCRC,4);			
		if (val != 0){				
			printk(" PCIE have RC1 TLPCRC (0x%x):%ld\n", RG_RC1_TLPCRC, val);				
			PCIe_SLT_Err_Msg(1);
			return 1;			
		}	

		val = print_mem_reg(RG_RC1_DLLPCRC,4);			
		if (val != 0){				
			printk(" PCIE have RC1 DLLPCRC (0x%x):%ld\n", RG_RC1_DLLPCRC, val); 			
			PCIe_SLT_Err_Msg(1);
			return 1;			
		}	

		val = print_mem_reg(RG_RC1_RPL_TimeOut,4);			
		if (val != 0){				
			printk(" PCIE have RC1 RPL TimeOut (0x%x):%ld\n", RG_RC1_RPL_TimeOut, val); 			
			PCIe_SLT_Err_Msg(1);
			return 1;			
		}	

		val = print_mem_reg(RG_RC1_RPL_Rollover,4); 		
		if (val != 0){				
			printk(" PCIE have RC1 RPL Rollover (0x%x):%ld\n", RG_RC1_RPL_Rollover, val);				
			PCIe_SLT_Err_Msg(1);
			return 1;			
		}	

		val = print_mem_reg(RG_RC1_CPLERR,4);			
		if (val != 0){				
			printk(" PCIE have RC1 CPLERR (0x%x):%ld\n", RG_RC1_CPLERR, val);				
			PCIe_SLT_Err_Msg(1);
			return 1;			
		}


		ret = check_speed1(1);//port
	    printk(" after check_speed1(1) ret=%x \n",ret);

		if(1==ret)
			return 1;
	}
	
	return 0;
}


int pcie_7583_slt_test_gen2(void){
	unsigned long val;
	
	printk("7583 PCIe slt testing for gen2!!\n");
	/* pcie gen2 reset */	
	unsigned int tmp;
	void *virtAddr;
	
	unsigned int ret=0;

    tmp = regRead_PCIe(0x1fb00834);
    regWrite_PCIe(0x1fb00834, (tmp | ( (1<<26) | (1<<27) )));
    mdelay(100);

	/*before reset host,need to pull device low*/
	//port0 port1 0x1fb00088 bit29 bit 26
	tmp = regRead_PCIe(0x1fb00088);
	regWrite_PCIe(0x1fb00088, (tmp & (~((1<<29) | (1<<26)))));
	mdelay(1);
	
	//regWrite_PCIe(0x1fc10044, 0x23020133);
	//virtAddr = ioremap ((phys_addr_t)0x1fc30044,4);
	//writel(0x23020133 ,virtAddr);
	//regWrite_PCIe(0x1fc15030, 0x50500032);
	//regWrite_PCIe(0x1fc15130, 0x50500032);
	
	mdelay(30);//fix 7916 pbus timeout
	/*first reset to default*///0xbfb00834-pulse-0000_11111_0000
    
    //hostcontroller port0 port1 0x1fb00834 bit29 bit26 bit27
    tmp = regRead_PCIe(0x1fb00834);
    regWrite_PCIe(0x1fb00834, (tmp & (~( (1<<26) | (1<<27)  ))));
	//mdelay(1000);	
	
	//port0 force gen2
	tmp = regRead_PCIe(0x1fc20080);
	regWrite_PCIe(0x1fc20080, (tmp &(~(1<<13))));
	tmp = regRead_PCIe(0x1fc20080);
	printk("\n ===== after set 1fc00080=%x \n",tmp);

	/*=========== for PCIe gen3 mac skip eq phase2/3 ============================================ */
    tmp = regRead_PCIe(0x1fc2033c);
    regWrite_PCIe(0x1fc2033c, (tmp & (~1)));

	#if 0
        /*==========some phy setting after mac reset begin======================*/
	/* mac setting, after mac reset, before release device reset */
	regWrite_PCIe(0x1fc00100, 0x41474147);//Preset 1 (initial), add by Carl 10/11
	virtAddr = ioremap ((phys_addr_t)0x1fc20100,4);
	writel(0x41474147 ,virtAddr);
	
	regWrite_PCIe(0x1fc00338, 0x1018020F);//preset to use (final)
	virtAddr = ioremap ((phys_addr_t)0x1fc20338,4);
	writel(0x1018020F ,virtAddr);
	/*==========some phy setting after mac reset end=========================*/
	#endif

	mdelay(10);

    /*release device*///0xbfb00088-0000_11111
    tmp = regRead_PCIe(0x1fb00088);
    regWrite_PCIe(0x1fb00088, (tmp | ((1<<29) | (1<<26))));
	
	PCIe_LTSSM_Monitor();//monitor LTSSM 	
	
	/*wait link up*/
	mdelay(400); 
	/* pcie gen2 reset */
	
	//port0
	printk("debug check 1fc20154 = 0x%x , 1fc20150 = %x, 1fc20018 = %x \n", regRead_PCIe(0x1fc20154), regRead_PCIe(0x1fc20150), regRead_PCIe(0x1fc20018) );
	
	regWrite_PCIe(RG_RC0_ERR2, 0x11010000);//reset before slt
	regWrite_PCIe(RG_RC0_ERR1, 0x1);

	virtAddr = ioremap ((phys_addr_t)RG_RC1_ECRC_CNT,4);
	writel(0xFFFFFFFF ,virtAddr);		
	virtAddr = ioremap ((phys_addr_t)RG_RC1_TLPCRC,4);
	writel(0xFFFFFFFF ,virtAddr);	
	virtAddr = ioremap ((phys_addr_t)RG_RC1_DLLPCRC,4);
	writel(0xFFFFFFFF ,virtAddr);	
	virtAddr = ioremap ((phys_addr_t)RG_RC1_RPL_TimeOut,4);
	writel(0xFFFFFFFF ,virtAddr);	
	virtAddr = ioremap ((phys_addr_t)RG_RC1_RPL_Rollover,4);
	writel(0xFFFFFFFF ,virtAddr);	
	virtAddr = ioremap ((phys_addr_t)RG_RC1_CPLERR,4);
	writel(0xFFFFFFFF ,virtAddr);	

	mdelay(400);

	printk(" isAN7583 has PCIE(RC0) \n");
	
	if(!isRC0_LINKUP){
		printk(" PCIE(RC0) link down\n");
		return 1;
	}
	
	val = print_mem_reg(RG_RC0_ERR1,4);
	if (val != 0){
			printk(" PCIE have RC0 AXI ERROR (0x%x):%ld\n", RG_RC0_ERR1, val);
			PCIe_SLT_Err_Msg(0);
		return 1;
	}
	
	val = print_mem_reg(RG_RC0_ERR2,4);
	val = val & 0xFFFF0600;
	if (val != 0){
			printk(" PCIE have RC0 TLP ERROR (0x%x):%ld\n", RG_RC0_ERR2, val);
			PCIe_SLT_Err_Msg(0);
		return 1;
	}
	ret=check_speed0(0);//port
	printk(" after check_speed0(0) ret=%x \n",ret);
	
	if(1==ret)
		return 1;

	
	printk(" isAN7583 has PCIE(RC1) \n");
	
	if(!isRC1_LINKUP){
		printk(" PCIE(RC1) link down\n");
		return 1;
	}	
	
	val = print_mem_reg(RG_RC1_ECRC_CNT,4); 		
	if (val != 0){				
		printk(" PCIE have RC1 ECRC (0x%x):%ld\n", RG_RC1_ECRC_CNT, val);			
		PCIe_SLT_Err_Msg(1);
		return 1;			
	}	
	
	val = print_mem_reg(RG_RC1_TLPCRC,4);			
	if (val != 0){				
		printk(" PCIE have RC1 TLPCRC (0x%x):%ld\n", RG_RC1_TLPCRC, val);				
		PCIe_SLT_Err_Msg(1);
		return 1;			
	}	
	
	val = print_mem_reg(RG_RC1_DLLPCRC,4);			
	if (val != 0){				
		printk(" PCIE have RC1 DLLPCRC (0x%x):%ld\n", RG_RC1_DLLPCRC, val); 			
		PCIe_SLT_Err_Msg(1);
		return 1;			
	}	
	
	val = print_mem_reg(RG_RC1_RPL_TimeOut,4);			
	if (val != 0){				
		printk(" PCIE have RC1 RPL TimeOut (0x%x):%ld\n", RG_RC1_RPL_TimeOut, val); 			
		PCIe_SLT_Err_Msg(1);
		return 1;			
	}	
	
	val = print_mem_reg(RG_RC1_RPL_Rollover,4); 		
	if (val != 0){				
		printk(" PCIE have RC1 RPL Rollover (0x%x):%ld\n", RG_RC1_RPL_Rollover, val);				
		PCIe_SLT_Err_Msg(1);
		return 1;			
	}	
	
	val = print_mem_reg(RG_RC1_CPLERR,4);			
	if (val != 0){				
		printk(" PCIE have RC1 CPLERR (0x%x):%ld\n", RG_RC1_CPLERR, val);				
		PCIe_SLT_Err_Msg(1);
		return 1;			
	}
	
	
	ret = check_speed1(1);//port
	printk(" after check_speed1(1) ret=%x \n",ret);
	
	if(1==ret)
		return 1;

	
	return 0;
}

/*==pcie slt test=============================================*/
#endif

int pcie_api_get_confreg(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	int off = data->conf.off;
	data->retValue = pcie_get_confreg(idx,off);
	return 0;
}

int pcie_api_set_confreg(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	unsigned int off = data->conf.off;
	unsigned int val = data->conf.val;
	data->retValue = pcie_set_confreg(idx,off,val);
	return 0;
}

int pcie_api_get_aspm(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	data->retValue = pcie_get_aspm(idx);
	return 0;
}

int pcie_api_set_aspm(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	unsigned int val = data->conf.val;
	data->retValue = pcie_set_aspm(idx,val);
	return 0;
}

int pcie_api_get_speed(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	data->retValue = pcie_get_speed(idx);
	return 0;
}

int pcie_api_set_speed(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	unsigned int val = data->conf.val;
	data->retValue = pcie_set_speed(idx,val);
	return 0;
}

int pcie_api_get_count(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	data->retValue = pcie_get_count(idx, &data->cnt);
	return 0;
}

 int pcie_api_get_linkstate(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
	data->retValue = pcie_get_linkstate(idx);
	return 0;
}

  int pcie_api_set_phy_dbg(struct ecnt_pcie_data *data)
{
	unsigned int val = data->conf.val;
	if(isFPGA) {
		printk("pcie_PhyDebug val %d for FPGA \n",val);
	}
	else
		pcie_PhyDebug(val);

	return 0;
}

static int pcie_set_power(int idx,unsigned int mode)
{
	if (idx != PCIE_DEV_RC0 && idx != PCIE_DEV_RC1 )
		return -1;

	if(0==mode)//power down
	{
		if(idx == PCIE_DEV_RC0)
		{
			printk("\n===power down port0=====\n");
			pcie_PowerDown(0);
		}
		else if(idx == PCIE_DEV_RC1)
			{
				printk("\n===power down port1=====\n");
				pcie_PowerDown(1);
			}
	}
	else if(1==mode)//power on
		{
			if(idx == PCIE_DEV_RC0)
			{			
				printk("\n===power up port0=====\n");
				pcie_PowerUp(0);
			}
			else if(idx == PCIE_DEV_RC1)
				{
					printk("\n===power up port0=====\n");
					pcie_PowerUp(1);
				}
		}
	
	return 0;
}


  int pcie_api_set_power(struct ecnt_pcie_data *data)
{
	int idx = data->idx;
    unsigned int val = data->conf.val;

	printk("pcie set power val %d ==== \n",val);

    data->retValue = pcie_set_power(idx,val);

	return 0;
}

  int pcie_function_autobench_loopback(struct ecnt_pcie_data *data)
 {
 	int ret = -1;
#if defined(TCSUPPORT_CPU_AN7583) && defined(TCSUPPORT_AUTOBENCH)
	 data->retValue = pcie_7583_slt_test();

	 if(data->retValue == 1){
	 		ret = pcie_7583_slt_test_gen2();		
			if( ret == 0 )
				printk("7583 PCIE gen2 loopback testing OK!!\n\n");
			else{
				printk("7583 PCIE gen2 loopback testing fail!!\n\n");
			}
	 }
#else
	 data->retValue =0;
#endif

	 return 0;
 }

int pcie_function_get_chipid(struct ecnt_pcie_data *data) 
{ 	
	int idx = data->idx;	
	data->retValue = pcie_get_chipid(idx);	
	return 0; 
}

ecnt_ret_val ecnt_pcie_api_hook(struct ecnt_data *in_data)
{
	struct ecnt_pcie_data *data = (struct ecnt_pcie_data *)in_data ;	
	
	if(data->function_id >= PCIE_FUNCTION_MAX_NUM) {
		printk("pcie data->function_id is %d, exceed max number: %d", data->function_id, PCIE_FUNCTION_MAX_NUM);
 		return ECNT_HOOK_ERROR;
	}

	spin_lock(&pcie_api_lock);
	pcie_operation[data->function_id](data) ;
	spin_unlock(&pcie_api_lock);
	
	return ECNT_CONTINUE;
}

static long pcie_ioctl(struct file *filp, unsigned int cmd, unsigned long arg) 
{
	int ret = 0 ;
	struct ecnt_pcie_data data;
	struct ecnt_pcie_data* puser = (struct ecnt_pcie_data*)arg;

	if (cmd >= PCIE_FUNCTION_MAX_NUM)
		return -1;
	
	memset(&data,0,sizeof(struct ecnt_pcie_data));
	copy_from_user(&data, puser ,sizeof(struct ecnt_pcie_data));
	spin_lock(&pcie_api_lock);	
	ret = pcie_operation[data.function_id](&data);
	spin_unlock(&pcie_api_lock);
	copy_to_user(puser,&data,sizeof(struct ecnt_pcie_data));
	
	return ret;
}
#ifdef CONFIG_COMPAT
static long pcie_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg) 
{
	return pcie_ioctl(filp, cmd, (unsigned long)compat_ptr(arg));
}
#endif

int pcie_api_init(void)
{
	int ret;
	
	if(ecnt_register_hook(&ecnt_pcie_api_op)){
		printk("pcie ecnt_dev_fe_api_op register fail\n");
		return 0;
	}

	ret = register_chrdev(PCIE_MAJOR, "/dev/pcie", &pcie_fops);
	
	if (ret < 0) {
		printk(KERN_WARNING "pcie: can't get major %d\n", PCIE_MAJOR);
		return ret;
	}

	return 0;
}

#else

int pcie_api_init(void)
{
	return 0;
}

#endif

#endif

