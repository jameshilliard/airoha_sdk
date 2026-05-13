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

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
#define I2C_NUM 2

/************************************************************************
*                  M A C R O S
*************************************************************************
*/


/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/
struct ecnt_i2c {
	struct device *dev;
	void __iomem *base;
};

/************************************************************************
*                  STATIC VARIABLE DECLARATIONS
*************************************************************************
*/
struct ecnt_i2c *ecnt_i2c_array[I2C_NUM] = {NULL, NULL};

static unsigned int index = 0;

static const struct of_device_id ecnt_i2c_of_id[] = {
    { .compatible = "econet,ecnt-i2c"},
    { /* sentinel */}
};
MODULE_DEVICE_TABLE(of, ecnt_i2c_of_id);


/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/


/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/
unsigned long GET_I2C_BASEADDR(void)
{
    if(!ecnt_i2c_array[0])
        return 0;
    return (unsigned long)ecnt_i2c_array[0]->base;
}
EXPORT_SYMBOL(GET_I2C_BASEADDR);

unsigned long GET_I2C_BASEADDR1(void)
{
    if(!ecnt_i2c_array[1])
        return 0;
    return (unsigned long)ecnt_i2c_array[1]->base;
}
EXPORT_SYMBOL(GET_I2C_BASEADDR1);

static int ecnt_i2c_drv_probe(struct platform_device *pdev)
{
    struct resource *res = NULL;
    int ret = 0;

    printk("[i2c] ecnt_i2c_drv_probe\n");
    if (!pdev->dev.of_node) {
        dev_err(&pdev->dev, "No i2c DT node found");
        ret = -EINVAL;
        goto END;
    }

    if(index >= I2C_NUM)
    {
        printk("[i2c] Invalid index = %d\n", index);
        ret = -EINVAL;
        goto END;
    }

    /* I2C allocate memory */
    ecnt_i2c_array[index] = devm_kzalloc(&pdev->dev, sizeof(struct ecnt_i2c), GFP_KERNEL);
    if (!ecnt_i2c_array[index])
    {
        ret = -ENOMEM;
        goto END;
    }

    platform_set_drvdata(pdev, ecnt_i2c_array[index]);

    /* get i2c base address */
    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    ecnt_i2c_array[index]->base = devm_ioremap_resource(&pdev->dev, res);

    if (IS_ERR(ecnt_i2c_array[index]->base))
    {
        ret = PTR_ERR(ecnt_i2c_array[index]->base);
        goto END;
    }

#if 0
    printk("[i2c] res->name:%s\n", res->name);
    printk("[i2c] res->start:0x%llx ===\n", res->start);
    printk("[i2c] res->end:0x%llx ===\n", res->end);
    printk("[i2c] ecnt_i2c[%d]->base:0x%lx\n", index, (unsigned long)ecnt_i2c_array[0]->base);
#endif

END:
    index++;

    return ret;
}

static int ecnt_i2c_drv_remove(struct platform_device *pdev)
{
    printk("[i2c] ecnt_i2c_drv_remove\n");
    return 0;
}

/************************************************************************
*      P L A T F O R M   D R I V E R S   D E C L A R A T I O N S
*************************************************************************
*/

static struct platform_driver ecnt_i2c_driver = {
    .probe = ecnt_i2c_drv_probe,
    .remove = ecnt_i2c_drv_remove,
    .driver = {
        .name = "ecnt-i2c",
        .of_match_table = ecnt_i2c_of_id
    },
};
module_platform_driver(ecnt_i2c_driver);
MODULE_DESCRIPTION("EcoNet i2c Driver");


