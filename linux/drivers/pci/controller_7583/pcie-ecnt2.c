// SPDX-License-Identifier: GPL-2.0
/*
 * MediaTek PCIe host controller driver.
 *
 * Copyright (c) 2020 MediaTek Inc.
 * Author: Jianjun Wang <jianjun.wang@mediatek.com>
 */

#include <linux/clk.h>
#include <linux/delay.h>
#include <linux/iopoll.h>
#include <linux/irq.h>
#include <linux/irqchip/chained_irq.h>
#include <linux/irqdomain.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/msi.h>
#include <linux/pci.h>
#include <linux/phy/phy.h>
#include <linux/platform_device.h>
#include <linux/pm_domain.h>
#include <linux/pm_runtime.h>
#include <linux/reset.h>
#include <linux/of_pci.h>

#include "../pci.h"
#include <ecnt_event_global/ecnt_event_system.h>
#include "asm/tc3162/tc3162.h"

#define PCIE_MSI_SET_NUM		8
#define PCIE_MSI_IRQS_PER_SET		32
#define PCIE_MSI_IRQS_NUM \
	(PCIE_MSI_IRQS_PER_SET * PCIE_MSI_SET_NUM)

extern void set_np_scu_data(u32 reg, u32 val);
extern u32 get_np_scu_data(u32 reg);

/*===========for PCIe pbus setting begin============================================ */
extern u32 GET_PBUS_PCIE1_BASE(void);
extern void SET_PBUS_PCIE1_BASE(u32 val);
extern u32 GET_PBUS_PCIE1_MASK(void);
extern void SET_PBUS_PCIE1_MASK(u32 val);
/*===========for PCIe pbus setting end============================================ */


void __iomem *mac1_base; /* PCIe Mac1 base virtual address */
phys_addr_t mac1_addr; /* PCIe Mac1 base physical address */
int irq1 = 0; /* PCIe Port1 irq */


/*====================regs==================*/
u32 get_pcie_mac1_data(u32 reg)
{
	return readl(mac1_base+ reg);
}

void set_pcie_mac1_data(u32 reg, u32 val)
{
	writel(val, mac1_base + reg); 
}

u32 regRead_PCIe1(u32 reg)		
{	
	u32 val;

	switch(reg&0xfffff000)
		{
		case 0x1fb00000:
			val=get_np_scu_data(reg&0xfff);
			break;
		case 0x1fa92000:
			val=get_pcie_mac1_data(reg&0xfff);
			break;
		}
	return val;		  
}		
void regWrite_PCIe1(u32 reg, u32 val)	
{                                                	
    
	switch(reg&0xfffff000)
		{
		case 0x1fb00000:
			set_np_scu_data(reg&0xfff,val);
			break;		
		case 0x1fa92000:
			set_pcie_mac1_data(reg&0xfff,val);
			break;
		}
}

EXPORT_SYMBOL(regRead_PCIe1);
EXPORT_SYMBOL(regWrite_PCIe1);


/*====================regs==================*/
/*====================conf access ecnt==================*/
//#define isRC0_LINKUP		((regRead_PCIe(0x1fa91804) & 0x400) ? 1 : 0)  
#define isRC1_LINKUP		((regRead_PCIe1(0x1fa92804) & 0x400) ? 1 : 0)

int get_rc_port1(unsigned char bus,unsigned char dev)
{
	int rc = 4;

	if ((bus == 0) && (dev < 2))
    {
    	rc = dev;
    }
    else if ((bus == 1) && (dev == 0))
    {           
        rc = 0;
    }
    else if ((bus == 2) && (dev == 0) )
    {
        rc = 1;
    }
    
	return rc;
}

int pcie_write_config_word_extend1(unsigned char bus, unsigned char dev,unsigned char func, unsigned int reg, unsigned long int value)
{
	unsigned int val,rc;
	unsigned long flags;
	void __iomem *offset=NULL;	

	rc = get_rc_port1(bus,dev);

	if(rc == 1){		
		offset = mac1_base;	
	}else{		
		return 0xffffffff;	
	}

	//7552 bus/dev remap //RC:bus0 dev0;EP:bus1 dev0;domain_nr distinguish RC0/1
	if (0 == bus)
		dev = 0;
	else
		bus = 1;

	/*fmt=2|type=4|length=1 */
	val = (2 << 29) | (4 << 24) | 1;  

	 /* write TLP Header offset 0-3 */
	 writel_relaxed(val, 0x460+offset); 


	/*write requester ID */
	val = (rc<<19) | 0x070f;						

	/*write TLP Header offset 4-7 */
	writel_relaxed(val, 0x464+offset); 
	
	val = (bus << 24) | (dev << 19) |(func << 16) | reg;

	 /*write TLP Header offset 8-11 */
	 writel_relaxed(val, 0x468+offset); 

	/*write TLP data */
	writel_relaxed(value, 0x470+offset);    

	/*start TLP Requuest */
	writel_relaxed(1, 0x488+offset); 

	mdelay(1);

	val = 0;

	/*polling TLP Request status */
	while((val++)<10)             
	{
	 	/*TLP Request finished or timeout */
		if ((readl_relaxed(0x488+offset)&0x1)==0)  
			break;
		mdelay(1);
	}

	if (val==10)
		printk("\nPCIE Write Err: bus = %d, dev = %d Reg = %d \n",bus,dev,reg);

 	return 0;

}
EXPORT_SYMBOL(pcie_write_config_word_extend1);

unsigned int pcie_read_config_word_extend1(unsigned char bus,unsigned char dev,unsigned char func ,unsigned int reg)
{
	unsigned long flags;
	unsigned int val,rc;
	void __iomem *offset=NULL; 
	
	rc = get_rc_port1(bus,dev);

	if(rc == 1){		
		offset = mac1_base;	
	}else{		
		return 0xffffffff;	
	}

	//7552 bus/dev remap //RC:bus0 dev0;EP:bus1 dev0;domain_nr distinguish RC0/1
	if (0 == bus)
		dev = 0;
	else
		bus = 1;

	/* iniitialize the data reg */
	//writel(0xffffffff, 0x48c+offset); 


	/*fmt=2|type=4|length=1 */
	if((bus==0&&dev==0)||(bus==0&&dev==1))
	val = (4 << 24) | 1;  
	else
	val = (5 << 24) | 1;  	
	/*write TLP Header offset 0-3 */
	writel_relaxed(val, 0x460+offset); 

	/*write requester ID */
	val = (rc<<19) | 0x070f;//RC0/RC1											
	/*write TLP Header offset 4-7*/
	writel_relaxed(val, 0x464+offset); 

	val = (bus << 24) | (dev << 19) | (func << 16) | reg;
	/*write TLP Header offset 8-11*/
	writel_relaxed(val, 0x468+offset); 

	/*start TLP Requuest*/
	writel_relaxed(1, 0x488+offset); 

	mdelay(1);

	val = 0;

	/*polling TLP Request status */
	while((val++)<10)           
	{
		/*TLP Request finished or timeout*/
		if ((readl_relaxed(0x488+offset)&0x1)==0)  
			break;
		mdelay(1);
	}

	if (val==10)
	{
		printk("\n pcie_read_timeout: bus = %d, dev = %d, func = %d,reg = %x val = %x\n",bus,dev,func,reg,0xffffffff);
		return 0xffffffff;
	}

	/*return the data from data reg*/
	val = readl_relaxed(0x48c+offset);      


	return val;
}
EXPORT_SYMBOL(pcie_read_config_word_extend1);

/*====================conf access ecnt==================*/


/**
 * struct mtk_msi_set1 - MSI information for each set
 * @base: IO mapped register base
 * @msg_addr: MSI message address
 * @saved_irq_state: IRQ enable state saved at suspend time
 */
struct mtk_msi_set1 {
	void __iomem *base;
	phys_addr_t msg_addr;
	u32 saved_irq_state;
};


/**
 * struct mtk_pcie_port1 - PCIe port information
 * @dev: pointer to PCIe device
 * @base: IO mapped register base
 * @reg_base: physical register base
 * @irq: PCIe controller interrupt number
 * @saved_irq_state: IRQ enable state saved at suspend time
 * @irq_lock: lock protecting IRQ register access
 * @intx_domain: legacy INTx IRQ domain
 * @msi_domain: MSI IRQ domain
 * @msi_bottom_domain: MSI IRQ bottom domain
 * @msi_sets: MSI sets information
 * @lock: lock protecting IRQ bit map
 * @msi_irq_in_use: bit map for assigned MSI IRQ
 */
struct mtk_pcie_port1 {
	struct device *dev;
	void __iomem *base;
	//struct list_head list;
	phys_addr_t reg_base;
	unsigned int busnr;
	//struct mtk_pcie *pcie;
	//u32 slot;

	int irq;
	u32 saved_irq_state;
	raw_spinlock_t irq_lock;
	struct irq_domain *intx_domain;
	struct irq_domain *msi_domain;
	struct irq_domain *msi_bottom_domain;
	struct mtk_msi_set1 msi_sets[PCIE_MSI_SET_NUM];
	struct mutex lock;
	DECLARE_BITMAP(msi_irq_in_use, PCIE_MSI_IRQS_NUM);
};

/* PCIe V2 configuration transaction header */
#define PCIE_CFG_HEADER0	0x460
#define PCIE_CFG_HEADER1	0x464
#define PCIE_CFG_HEADER2	0x468
#define PCIE_CFG_WDATA		0x470
#define PCIE_APP_TLP_REQ	0x488
#define PCIE_CFG_RDATA		0x48c
#define APP_CFG_REQ		BIT(0)
#define APP_CPL_STATUS		GENMASK(7, 5)

#define CFG_WRRD_TYPE_0		4
#define CFG_WR_FMT		2
#define CFG_RD_FMT		0

#define CFG_DW0_LENGTH(length)	((length) & GENMASK(9, 0))
#define CFG_DW0_TYPE(type)	(((type) << 24) & GENMASK(28, 24))
#define CFG_DW0_FMT(fmt)	(((fmt) << 29) & GENMASK(31, 29))
#define CFG_DW2_REGN(regn)	((regn) & GENMASK(11, 2))
#define CFG_DW2_FUN(fun)	(((fun) << 16) & GENMASK(18, 16))
#define CFG_DW2_DEV(dev)	(((dev) << 19) & GENMASK(23, 19))
#define CFG_DW2_BUS(bus)	(((bus) << 24) & GENMASK(31, 24))
#define CFG_HEADER_DW0(type, fmt) \
	(CFG_DW0_LENGTH(1) | CFG_DW0_TYPE(type) | CFG_DW0_FMT(fmt))
#define CFG_HEADER_DW1(where, size) \
	(GENMASK(((size) - 1), 0) << ((where) & 0x3))
#define CFG_HEADER_DW2(regn, fun, dev, bus) \
	(CFG_DW2_REGN(regn) | CFG_DW2_FUN(fun) | \
	CFG_DW2_DEV(dev) | CFG_DW2_BUS(bus))

static int mtk_pcie_check_cfg_cpld(void __iomem * offset)
{
	u32 val;
	int err;

	err = readl_poll_timeout_atomic(offset + PCIE_APP_TLP_REQ, val,
					!(val & APP_CFG_REQ), 10,
					100 * USEC_PER_MSEC);
	if (err)
		return PCIBIOS_SET_FAILED;

	if (readl_relaxed(offset + PCIE_APP_TLP_REQ) & APP_CPL_STATUS)
		return PCIBIOS_SET_FAILED;

	return PCIBIOS_SUCCESSFUL;
}

static int mtk_pcie_hw_rd_cfg(void __iomem * offset, u32 bus, u32 devfn,
			      int where, int size, u32 *val)
{
	u32 tmp;

	/* Write PCIe configuration transaction header for Cfgrd */
	writel_relaxed(CFG_HEADER_DW0(CFG_WRRD_TYPE_0, CFG_RD_FMT),
	       offset + PCIE_CFG_HEADER0);
	writel_relaxed(CFG_HEADER_DW1(where, size), offset + PCIE_CFG_HEADER1);
	writel_relaxed(CFG_HEADER_DW2(where, PCI_FUNC(devfn), PCI_SLOT(devfn), bus),
	       offset + PCIE_CFG_HEADER2);

	/* Trigger h/w to transmit Cfgrd TLP */
	tmp = readl_relaxed(offset + PCIE_APP_TLP_REQ);
	tmp |= APP_CFG_REQ;
	writel_relaxed(tmp, offset + PCIE_APP_TLP_REQ);

	/* Check completion status */
	if (mtk_pcie_check_cfg_cpld(offset))
		return PCIBIOS_SET_FAILED;

	/* Read cpld payload of Cfgrd */
	*val = readl_relaxed(offset + PCIE_CFG_RDATA);

	if (size == 1)
		*val = (*val >> (8 * (where & 3))) & 0xff;
	else if (size == 2)
		*val = (*val >> (8 * (where & 3))) & 0xffff;

	return PCIBIOS_SUCCESSFUL;
}

static int mtk_pcie_hw_wr_cfg(void __iomem * offset, u32 bus, u32 devfn,
			      int where, int size, u32 val)
{
	/* Write PCIe configuration transaction header for Cfgwr */
	writel_relaxed(CFG_HEADER_DW0(CFG_WRRD_TYPE_0, CFG_WR_FMT),
	       offset + PCIE_CFG_HEADER0);
	writel_relaxed(CFG_HEADER_DW1(where, size), offset + PCIE_CFG_HEADER1);
	writel_relaxed(CFG_HEADER_DW2(where, PCI_FUNC(devfn), PCI_SLOT(devfn), bus),
	       offset + PCIE_CFG_HEADER2);

	/* Write Cfgwr data */
	val = val << 8 * (where & 3);
	writel_relaxed(val, offset + PCIE_CFG_WDATA);

	/* Trigger h/w to transmit Cfgwr TLP */
	val = readl_relaxed(offset + PCIE_APP_TLP_REQ);
	val |= APP_CFG_REQ;
	writel_relaxed(val, offset + PCIE_APP_TLP_REQ);

	/* Check completion status */
	return mtk_pcie_check_cfg_cpld(offset);
}

static void __iomem *mtk_pcie_find_port_offset(struct pci_bus * bus,	unsigned int devfn)
{
	unsigned int rc;
	void __iomem *offset=NULL; 
	struct mtk_pcie_port1 *port = bus->sysdata;		

	offset=port->base;

	return offset;
}

static int mtk_pcie_config_read1(struct pci_bus *bus, unsigned int devfn,
				int where, int size, u32 *val)
{
	u32 bn = bus->number;
	int ret;
	void __iomem *offset=NULL; 

	if(PCI_SLOT(devfn)>0)
		return 0;

	offset = mtk_pcie_find_port_offset(bus, devfn);
	//printk("\n===========mtk_pcie_config_read=====bn===%x==dev=%x====offset=%x========\n",bn,PCI_SLOT(devfn),offset);
	
	if (0xffffffff==offset) {
		*val = ~0;
		return PCIBIOS_DEVICE_NOT_FOUND;
	}

	ret = mtk_pcie_hw_rd_cfg(offset, bn, devfn, where, size, val);
	if (ret)
		*val = ~0;

	return ret;
}

static int mtk_pcie_config_write1(struct pci_bus *bus, unsigned int devfn,
				 int where, int size, u32 val)
{
	u32 bn = bus->number;
	void __iomem *offset=NULL; 

	offset = mtk_pcie_find_port_offset(bus, devfn);
	if (0xffffffff==offset) {
		return PCIBIOS_DEVICE_NOT_FOUND;
	}

	return mtk_pcie_hw_wr_cfg(offset, bn, devfn, where, size, val);
}

static struct pci_ops mtk_pcie_ops1 = {
	.read  = mtk_pcie_config_read1,
	.write = mtk_pcie_config_write1,
};

/********************PCIe MSI API begin**************************************/
#ifdef TCSUPPORT_PCIE_MSI
/** 
* ecnt_msi_teardown_irq - Destroy the MSI 
* @chip: MSI Chip descriptor 
* @irq: MSI IRQ to destroy 
*/
void ecnt_msi_teardown_irq1(struct msi_controller *chip, unsigned int irq)
{	
printk("=========== ecnt_msi_teardown_irq1 \n");
}
/** 
* ecnt_pcie_msi_setup_irq - Setup MSI request 
* @chip: MSI chip pointer 
* @pdev: PCIe device pointer 
* @desc: MSI descriptor pointer 
* 
* Return: '0' on success and error value on failure 
*/
int ecnt_pcie_msi_setup_irqs1(struct msi_controller *chip,struct pci_dev *pdev, int nvec, int type)
{	
	unsigned int irq;// = pdev->irq + 1;	
	struct msi_msg msg;		
	struct msi_desc *desc;	
	phys_addr_t msg_addr;	
	int i, ret;

	printk("=========== ecnt_pcie_msi_setup_irqs1 enter \n");	

    //all port
	irq = pdev->irq;

	printk("\n===========ecnt_pcie_msi_setup_irqs1 irq:%d===\n",irq);

	desc = list_entry(pdev->dev.msi_list.next, struct msi_desc, list);	
	for (i = 0; i < nvec; i++) 
		{		
			if (irq_set_msi_desc_off(irq, i, desc)) 
				{			
				/* TODO: clear */			
				return -EINVAL;		
				}	
		}	
	desc->nvec_used = nvec;	
	desc->msi_attrib.multiple = order_base_2(nvec);	

    //all port
	msg_addr = mac1_addr + 0xc0; //	0x1fa920c0

	msg.address_hi = 0;	
	msg.address_lo = msg_addr;	
	msg.data = 0;		
	pci_write_msi_msg(irq, &msg);	
	printk("\n===========RC1 msg_addr:%x===\n",msg_addr);
	printk("=========== ecnt_pcie_msi_setup_irqs1 end \n");	
	return 0;
}

/* MSI Chip Descriptor */
struct msi_controller ecnt_pcie_msi_controller1 = {	
		.setup_irqs = ecnt_pcie_msi_setup_irqs1,	
		.teardown_irq = ecnt_msi_teardown_irq1,
	};
#endif
/********************PCIe MSI API end**************************************/

#if 0
void mt7512_pcie_reset(void)
{
	unsigned int tmp;

	/*before reset host,need to pull device low*/
	//port0 port1 0x1fb00088 bit29 bit 26
	tmp = regRead_PCIe(0x1fb00088);
	regWrite_PCIe(0x1fb00088, (tmp & (~((1<<29) | (1<<26)))));
	mdelay(1);

	/* enabled PCIe port 1 */
	tmp = regRead_PCIe(0x1fb00088);
	regWrite_PCIe(0x1fb00088, (tmp | (1<<22)));
	mdelay(1);

    tmp = regRead_PCIe(0x1fb00834);
    regWrite_PCIe(0x1fb00834, (tmp & (~( (1<<26) | (1<<27) | (1<<29)))));
    mdelay(1);

    tmp = regRead_PCIe(0x1fb00834);
    regWrite_PCIe(0x1fb00834, (tmp | ( (1<<26) | (1<<27) | (1<<29))));
    mdelay(100);



	
	/*first reset to default*///0xbfb00834-pulse-0000_11111_0000
    
    //hostcontroller port0 port1 0x1fb00834 bit29 bit26 bit27
    tmp = regRead_PCIe(0x1fb00834);
    regWrite_PCIe(0x1fb00834, (tmp & (~( (1<<26) | (1<<27) | (1<<29)))));
    mdelay(5);

    /*release device*///0xbfb00088-0000_11111
    tmp = regRead_PCIe(0x1fb00088);
    regWrite_PCIe(0x1fb00088, (tmp & (~((1<<29) | (1<<26)))));
    mdelay(1);

    tmp = regRead_PCIe(0x1fb00088);
    regWrite_PCIe(0x1fb00088, (tmp | ((1<<29) | (1<<26))));
	mdelay(1);


	/*wait link up*/
	//mdelay(10000); 
	mdelay(250);

	return ;
}
#endif

#define K_GBL_1			0x000
#define K_CONF_FUNC0_1		0x104
#define PCIE_INT_MASK		0x420
#define INTX_MASK		GENMASK(19, 16)
#define PCIE_LINK_STATUS_V2	0x804
#define PCIE_PORT_LINKUP_V2	BIT(10)
#define PCIE_AHB_TRANS_BASE0_L	0x438
#define PCIE_AHB_TRANS_BASE0_H	0x43c
#define PCIE_AXI_WINDOW0	0x448

#define PCIE_MMIO_CTRL	0x564

#define AHB2PCIE_SIZE(x)	((x) & GENMASK(4, 0))

#ifdef TCSUPPORT_PCIE_MSI
#define PCIE_IMSI_ADDR		0x430
#define MSI_MASK		BIT(23)
#endif

#if  1
extern void PCIe_LTSSM_Monitor_Port(u32 port);
extern void PCIe_Link_Status_Check_Port(u32 port);
extern void Get_PCIe_Debug_Selector(u32 port);
extern bool PCIe_GDMP_Config(u32 port);

void mt7512_pcie_reset1(void)
{
	unsigned int tmp;
	void *virtAddr1;
	//for relink
	unsigned int tmp1, tmp2;
	void * virtAddr;
	u32 retry_cnt = 0;
	uint8_t serdes_ret=0;
	
	if(!isFPGA)
	{
		Get_PCIe_Debug_Selector(1);
	}
	
	tmp = regRead_PCIe1(0x1fb00834);
	regWrite_PCIe1(0x1fb00834, (tmp | ( 1<<27)));//bit 27 pcie1
	mdelay(100);
	
	/*before reset host,need to pull device low*/
	//port0 port1 0x1fb00088 bit29 bit 26
	tmp = regRead_PCIe1(0x1fb00088);
	regWrite_PCIe1(0x1fb00088, (tmp & (~(1<<26))));//bit 26 pcie1
	mdelay(1);
		
	if(!isFPGA)
	{
		//phy setting follow 7581
		pcie_phy_init(1);
	}
		
	mdelay(30);//fix 7916 pbus timeout
	/*first reset to default*///0xbfb00834-pulse-0000_11111_0000
		
	//hostcontroller port0 port1 0x1fb00834 bit29 bit26 bit27
	tmp = regRead_PCIe1(0x1fb00834);
	regWrite_PCIe1(0x1fb00834, (tmp & (~(1<<27))));//bit 27 pcie1
		
	//mdelay(1000);
	
	/*release device*///0xbfb00088-0000_11111
	tmp = regRead_PCIe1(0x1fb00088);
	regWrite_PCIe1(0x1fb00088, (tmp | (1<<26)));//bit 26 pcie1
	
	if(!isFPGA)
	{
		PCIe_LTSSM_Monitor_Port(1);//monitor LTSSM		
		/*wait link up*/
		mdelay(400); 		
		PCIe_Link_Status_Check_Port(1);//Link status reg
		PCIe_GDMP_Config(1);					
	}
	else
	{
		/*wait link up*/
		mdelay(10000); 
	}
	
		return ;
	}

#endif

static int mtk_pcie_startup_port1(struct mtk_pcie_port1 *port)
{
	struct resource_entry *entry;
	struct pci_host_bridge *host = pci_host_bridge_from_priv(port);
	unsigned int table_index = 0;
	int err;
	u32 val;

		/* Set as RC mode */
		val = 0x804201;
		writel_relaxed(val, port->base + K_GBL_1);;//set as RC Mode
			
		/* Set class code */
		val = 0x06040001;
		writel_relaxed(val, port->base + K_CONF_FUNC0_1);//class code &reversion id

		/* Set INTx mask */
#ifdef TCSUPPORT_PCIE_MSI
		writel_relaxed(0x1fa920c0, port->base+PCIE_IMSI_ADDR);  //RC1 MSI
		val = readl_relaxed(port->base + PCIE_INT_MASK);
		val &= ~MSI_MASK;
		writel_relaxed(val, port->base + PCIE_INT_MASK);
#else
		val = readl_relaxed(port->base + PCIE_INT_MASK);
		val &= ~INTX_MASK;
		writel_relaxed(val, port->base + PCIE_INT_MASK);
#endif

	/* 100ms timeout value should be enough for Gen1/2 training */
	err = readl_poll_timeout(port->base + PCIE_LINK_STATUS_V2, val,
				 !!(val & PCIE_PORT_LINKUP_V2), 20,
				 100 * USEC_PER_MSEC);
	if (err)
	{
		dev_err(port->dev, "PCIe link down\n");
		return -ETIMEDOUT;
	}
	
	dev_info(port->dev, "pcie rc 1 linkup success\n");

	/* Set PCIe translation windows */
	resource_list_for_each_entry(entry, &host->windows) {
		struct resource *res = entry->res;
		unsigned long type = resource_type(res);
		resource_size_t cpu_addr;
		resource_size_t pci_addr;
		resource_size_t size;
		const char *range_type;

		if (type == IORESOURCE_IO) {
			cpu_addr = pci_pio_to_address(res->start);
			range_type = "IO";
		} else if (type == IORESOURCE_MEM) {
			cpu_addr = res->start;
			range_type = "MEM";
		} else {
			continue;
		}

		/* Set AHB to PCIe translation windows */
		size = resource_size(res);
		val = lower_32_bits(cpu_addr) | AHB2PCIE_SIZE(fls(size));
		writel_relaxed(val, port->base + PCIE_AHB_TRANS_BASE0_L);
		val = upper_32_bits(cpu_addr);
		writel_relaxed(val, port->base + PCIE_AHB_TRANS_BASE0_H);


		pci_addr = res->start - entry->offset;

		dev_info(port->dev, "set %s trans window[%d]: cpu_addr = %#llx, pci_addr = %#llx, size = %#llx\n",
			range_type, table_index, (unsigned long long)cpu_addr,
			(unsigned long long)pci_addr, (unsigned long long)size);

		table_index++;
	}

	/* Set PCIe to AXI translation memory space.*/
	val=0x80;
	writel_relaxed(val, port->base + PCIE_AXI_WINDOW0);

	/* 7563+kite coherence bugfix.*/
	val = readl_relaxed(port->base + PCIE_MMIO_CTRL);
	dev_info(port->dev, "======orig===PCIE_MMIO_CTRL %x\n", val);
	val |= 1;
	writel_relaxed(val, port->base + PCIE_MMIO_CTRL);
	val = readl_relaxed(port->base + PCIE_MMIO_CTRL);
	dev_info(port->dev, "======after===PCIE_MMIO_CTRL %x\n", val);

	return 0;
}

static int mtk_pcie_setup_irq1(struct mtk_pcie_port1 *port)
{
	struct device *dev = port->dev;
	struct platform_device *pdev = to_platform_device(dev);
	int err;
#ifdef TCSUPPORT_PCIE_MSI	
	int i =0, irq_msi;
#endif

	port->irq = platform_get_irq(pdev, 0);
	irq1 = port->irq;

#ifdef TCSUPPORT_PCIE_MSI	
	for(i = 1; i < 8; i++)				
	{					
		irq_msi = platform_get_irq(pdev, i);		
		printk("=======pcie_setup_irq1: i = %d, irq_msi = %d \n", i, irq_msi);				
	}
#endif
	return 0;
}

static int mtk_pcie_parse_port1(struct mtk_pcie_port1 *port)
{
	struct device *dev = port->dev;
	struct platform_device *pdev = to_platform_device(dev);
	struct resource *regs;

	regs = platform_get_resource_byname(pdev, IORESOURCE_MEM, "pcie-mac");
	port->base = devm_ioremap_resource(dev, regs);
	if (IS_ERR(port->base)) {
		dev_err(dev, "failed to map register base\n");
		return PTR_ERR(port->base);
	}

	port->reg_base = regs->start;
	
	printk("=====pcie_parse_port=11=====port1->reg_base=%x===========\n",port->reg_base);

	mac1_base = port->base;
#ifdef TCSUPPORT_PCIE_MSI
	mac1_addr = port->reg_base;
#endif

	printk("\n=====pcie_parse_port=22==mac1_base==%lx=========\n",mac1_base);

	return 0;
}

static int mtk_pcie_setup1(struct mtk_pcie_port1 *port)
{
	struct device *dev = port->dev;
	struct pci_host_bridge *host = pci_host_bridge_from_priv(port);
	struct list_head *windows = &host->windows;
	struct resource *bus;
	int err;
	u32 tmp_reg;

	err = pci_parse_request_of_pci_ranges(dev, windows, &bus);
	if (err)
		return err;

	port->busnr = bus->start;

	err = mtk_pcie_parse_port1(port);
	if (err)
		return err;

	/* Try link up */

	printk("===AN7583 PCIe port1 init0424===\n");
	mt7512_pcie_reset1();

	err = mtk_pcie_startup_port1(port);
	if (err)
		return err;

	err = mtk_pcie_setup_irq1(port);
	if (err)
		return err;

	return 0;
}



int mt7512_pcie_get_pos(char bus,char dev)
{
	unsigned int val,pos;

	val = pcie_read_config_word_extend1(bus,dev,0,0x34);
	pos = val&0xff;
	while(pos && pos != 0xff)
	{
		val = pcie_read_config_word_extend1(bus,dev,0,pos);
		if ( (val&0xff) == 0x10)
			return pos;
		pos = (val >> 0x08) & 0xff;
	}
	return 0;
}

int  mt7512_pcie_rc1_retrain(void)
{
	unsigned int pos = 0, ppos = 0,bus;
	unsigned int  linkcap, plinkcap,plinksta;

	ppos = mt7512_pcie_get_pos(0,1);
	bus =  2;
	
	pos = mt7512_pcie_get_pos(bus,0);
	
	if (pos <0x40 || ppos < 0x40)
		return 0;
	
	plinkcap =  pcie_read_config_word_extend1(0,1,0,ppos+0x0c);
	linkcap = pcie_read_config_word_extend1(bus,0,0,pos+0x0c);
	
	printk("\n mt7512_pcie_rc1_retrain: %x = %08x %x = %08x \n",pos,linkcap,ppos,plinkcap);
	
	if ((linkcap&0x0f)== 1 || (plinkcap&0x0f)==1)
		return 0;
	
	plinksta = pcie_read_config_word_extend1(0,1,0,ppos+0x10);
	if( ((plinksta>>16)&0x0f) ==  (plinkcap&0x0f))
		return 0;

	plinksta =  pcie_read_config_word_extend1(0,1,0,ppos+0x10);
	plinksta |= 0x20;
	pcie_write_config_word_extend1(0,1,0,ppos+0x10,plinksta);
	
	mdelay(1000); 
	
	plinksta =  pcie_read_config_word_extend1(0,1,0,ppos+0x10);
	
	printk("\nRC1 Link Traing Result: %08x \n",plinksta);
	
	return 1;
}

void mt7512_pcie_fixup_rc1(void)
{
	unsigned int val = 0,tmp = 0 ,i = 0;
	
	if (isRC1_LINKUP)
	{
	
		val =  pcie_read_config_word_extend1(0,1,0,0x20);
		tmp = ((val&0xffff)<<16);
		val = (val&0xffff0000) + 0x100000;
		val = val - tmp;
		i = 0;
		while(i < 32)
		{
			if((1<<i) >= val)
				break;
			i++;
		}
		regWrite_PCIe1(0x1fa92438,tmp | i);   //config RC1 to EP Addr window
		mdelay(1);
		regWrite_PCIe1(0x1fa92448,0x80);     //enable EP to RC1 access
		printk("mt7512_pcie_fixup: 0x2438 = %x \n",tmp | i);
		
		mt7512_pcie_rc1_retrain();
	}

	return ;
}
EXPORT_SYMBOL(mt7512_pcie_fixup_rc1);


#if 1
/*=================7583 PCIe serdes description==============================*/
/*
	ECNT_EVENT_SERDES_SEL_WIFI1	//7583 serdes IF 2 //PCIe0
	or ECNT_EVENT_SERDES_PORT_2
	
	ECNT_EVENT_SERDES_SEL_WIFI2	//7583 serdes IF 3 //PCIe1
	or ECNT_EVENT_SERDES_PORT_3
*/
/* SerDes-WiFi1 //ECNT_EVENT_SYSTEM_SERDES_WIFI1_SEL_t
	ECNT_EVENT_SERDES_WIFI1_PCIE0_2LANE = 0,	
	ECNT_EVENT_SERDES_WIFI1_PCIE0_1LANE,
	ECNT_EVENT_SERDES_WIFI1_HSGMII,
	ECNT_EVENT_SERDES_WIFI1_USXGMII,
	ECNT_EVENT_SERDES_WIFI1_XFI,
	ECNT_EVENT_SERDES_WIFI1_NONE,
	ECNT_EVENT_SERDES_WIFI1_MAX,
*/	
/* SerDes-WiFi2 //ECNT_EVENT_SYSTEM_SERDES_WIFI2_SEL_t
	ECNT_EVENT_SERDES_WIFI2_PCIE0_2LANE = 0,	
	ECNT_EVENT_SERDES_WIFI2_PCIE1_1LANE,
	ECNT_EVENT_SERDES_WIFI2_HSGMII,
	ECNT_EVENT_SERDES_WIFI2_USXGMII,
	ECNT_EVENT_SERDES_WIFI2_XFI,
	ECNT_EVENT_SERDES_WIFI2_NONE,
	ECNT_EVENT_SERDES_WIFI2_MAX,;
*/
/*=================7583 PCIe serdes description==============================*/

static int wifi_serdes_select1(void)
{	
	int ret=0;
	uint8_t serdes_ret=0;	
	unsigned int tmp;

	printk("7583 wifi_serdes_select: enter PCIe_port_num=0 !\n");

			serdes_ret = get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI2);
			if((0==serdes_ret) || (1==serdes_ret))
				{
				printk("7583 wifi_serdes_select: for pcie serdes_ret=%d !\n",serdes_ret);			
				}
			else
				{
				ret = 1;
				printk("7583 wifi_serdes_select: !!!not for pcie serdes_ret=%d !\n",serdes_ret);
				}	

	printk("7583 wifi_serdes_select: exit serdes_ret=%d ret=%d !\n",serdes_ret,ret);


	return ret;
}

#endif


int pcibios_map_irq1(const struct pci_dev *dev, u8 slot, u8 pin)
{
	
	printk("\n========pcibios_map_irq1 ===  irq1=%d ===========", irq1);		
	
	return irq1;	
}

static int mtk_pcie_probe1(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	struct mtk_pcie_port1 *port;
	struct pci_host_bridge *host;
	int err;
	int value=0;
	u32 check_reg;
	
	u32 tmp_reg,val;

	if(!isFPGA)		
	{			
		err = wifi_serdes_select1();			
		if (err)
			return err;		
	}

	host = devm_pci_alloc_host_bridge(dev, sizeof(*port));
	if (!host)
		return -ENOMEM;

	port = pci_host_bridge_priv(host);

	port->dev = dev;
	platform_set_drvdata(pdev, port);

	err = mtk_pcie_setup1(port);
  	//work around for accidental calltrace when NPU access port1 mac register but only port0 linkup
	//if (err)
	//	goto release_resource;

#ifdef TCSUPPORT_PCIE_MSI
	host->msi = &ecnt_pcie_msi_controller1;
	printk("===============pcie_probe=====for msi kernel API===========\n");
#endif

	//check whether PCIe exsits or not
	check_reg = regRead_PCIe1(0x1fa92100);
	printk("===============PCIe check===tmp_reg=========%x===========\n",check_reg);

	if(0x081114c3!=check_reg)
		return 0;

	host->busnr = port->busnr;
	host->dev.parent = port->dev;
	host->ops = &mtk_pcie_ops1;
//	host->map_irq = of_irq_parse_and_map_pci;
	
	host->map_irq = pcibios_map_irq1;
	host->swizzle_irq = pci_common_swizzle;
	host->sysdata = port;

	err = pci_host_probe(host);

	//port1
	mt7512_pcie_fixup_rc1();

	//for irq
	value=pcie_read_config_word_extend1(0,1,0,0x3c);
	value|= port->irq;
	printk("========pcie_probe1====for_irq====value=%x=====\n",value);
	pcie_write_config_word_extend1(0,1,0, 0x3c,value);
	pcie_write_config_word_extend1(2,0,0, 0x3c,value);

	value=pcie_read_config_word_extend1(0,1,0,0x3c);
	printk("========pcie_probe1====for_irq==RC==value=%x======\n",value);
	value=pcie_read_config_word_extend1(2,0,0,0x3c);
	printk("========pcie_probe1====for_irq==EP==value=%x======\n",value);

	//for PCIe pbus setting
	printk("===AN7583 Pbus 1 for PCIe init===\n");
	val = regRead_PCIe1(0x1fa92000 + PCIE_AHB_TRANS_BASE0_L);
	tmp_reg = GET_PBUS_PCIE1_BASE();
	printk("========pcie_probe1====0x1fbe3408=%x===========\n",tmp_reg);
	SET_PBUS_PCIE1_BASE(val & 0xffffff80);
	tmp_reg = GET_PBUS_PCIE1_MASK();
	printk("========pcie_probe1====0x1fbe340c=%x===========\n",tmp_reg);
	val = val & 0x1f;
	SET_PBUS_PCIE1_MASK(0xffffffff << val);
	printk("========pcie_probe1====after pbus setting=======\n");
	tmp_reg = GET_PBUS_PCIE1_BASE();
	printk("========pcie_probe1====0x1fbe3408=%x===========\n",tmp_reg);
	tmp_reg = GET_PBUS_PCIE1_MASK();
	printk("========pcie_probe1====0x1fbe340c=%x===========\n",tmp_reg);


	if (err)
		goto release_resource;

	pcie_api_init();

	return 0;

release_resource:
	pci_free_resource_list(&host->windows);

	return err;
}

static const struct of_device_id mtk_pcie_of_match1[] = {
	{ .compatible = "ecnt,pcie1-ecnt" },
	{},
};

static struct platform_driver mtk_pcie_driver1 = {
	.probe = mtk_pcie_probe1,
	.driver = {
		.name = "mtk-pcie1",
		.of_match_table = mtk_pcie_of_match1,
	},
};

builtin_platform_driver(mtk_pcie_driver1);
