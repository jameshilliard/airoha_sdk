#include <linux/kernel.h> 
#include <linux/module.h> 
#include <linux/spi/spi.h> 
#include <linux/slab.h>
#include <linux/mtd/map.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>
#include <linux/memblock.h>
#include <uapi/linux/magic.h>


#define  NFI_BASE                        0x1FA11000
#define  _SPI_NFI_REGS_SNF_NFI_CNFG      0x055C
#define  _SPI_CONTROLLER_REGS_BASE       0x1FA10000
#define  _SPI_CONTROLLER_REGS_SFC_STRAP  0x0114

typedef enum {
	SPI_NFI_SPI=0,
	SPI_NFI_PARALLEL,
	SPI_NFI_EMMC,
} SPI_NFI_TYPE_T;


DEFINE_SEMAPHORE(SPI_SEM);//Make sure all related SPI operations are atomic

SPI_NFI_TYPE_T nfi_type(void)
{
	u32 val;
	if(GET_NP_SCU_EMMC()) {
		return SPI_NFI_EMMC;
	} else {
		void __iomem *reg = ioremap((NFI_BASE + _SPI_NFI_REGS_SNF_NFI_CNFG),4);
		val = readl(reg);
		iounmap(reg);
		if((val & 0x4) == 0) {
			return SPI_NFI_PARALLEL;
		} else {
			return SPI_NFI_SPI;
		}
	}
}
EXPORT_SYMBOL(nfi_type);

typedef enum{
	SPI_CONTROLLER_SPI_NAND=0,
	SPI_CONTROLLER_SPI_NOR,
	SPI_CONTROLLER_PARALLEL_NAND,
	SPI_CONTROLLER_EMMC,
} SPI_CONTROLLER_SPI_TYPE_T;

SPI_CONTROLLER_SPI_TYPE_T spi_type(void)
{
	u32 val;
	if(GET_NP_SCU_EMMC()) {
		return SPI_CONTROLLER_EMMC;
	} else {
		void __iomem *reg = ioremap((_SPI_CONTROLLER_REGS_BASE + _SPI_CONTROLLER_REGS_SFC_STRAP),4);
		val = readl(val);
		iounmap(reg);
		if(val & 0x2) {
			return SPI_CONTROLLER_SPI_NAND;
		} else {
			return SPI_CONTROLLER_SPI_NOR;
		}
	}
}
EXPORT_SYMBOL(spi_type);

DEFINE_SEMAPHORE(SPI_SEM);
EXPORT_SYMBOL(SPI_SEM);

/* old API support start */
unsigned char ReadSPIByte(unsigned long index)
{
	unsigned char buf[2] = {0};
	size_t retlen;
	index &= 0x03FFFFFF;
#ifdef TCSUPPORT_BB_256KB
	/* The mi.conf has new offset(0x3FE00) in 256KB tcboot.bin,
	 * The mi.conf offset is 0xFF00 in 128KB tcboot.bin.
	 */
	if(index >= 0xFF00 && index <= 0xFFFF) {
		index += 0x2FF00;
	}
#endif
	struct mtd_info *mtd = get_mtd_device(NULL,0);
	mtd_read(mtd, (loff_t)index, 1, &retlen, buf);
	return buf[0];
}
EXPORT_SYMBOL(ReadSPIByte);

