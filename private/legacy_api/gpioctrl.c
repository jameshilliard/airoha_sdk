#include <linux/err.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>
#include <linux/leds.h>
#include "linux/init.h"
#include <linux/slab.h>
#include <linux/signal.h>
#include <linux/sched.h>
#include <linux/fcntl.h>
#include <linux/kmod.h>
#include <linux/proc_fs.h>
#include <linux/version.h>
#include "tcversion.h"
#include <linux/mm.h>
#include <linux/string.h>
#include <linux/workqueue.h>
#include <linux/interrupt.h>
#include <asm/uaccess.h>
#include <linux/types.h>
//#include "ledctrl_kernel_api.h"
//#include "gpioIO.h"
#include <asm/tc3162/tc3162.h>
#include <asm/tc3162/ledcetrl.h>
#include <cpu/pkgid.h>
#include <linux/of.h>
#include <linux/property.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(5,4,0)
#include <linux/uaccess.h>
#endif
#include <linux/gpio.h>
#include <linux/gpio/consumer.h>
#include <linux/gpio/driver.h>
#include <linux/fwnode.h>


struct gpio_name_t {
	char *name;
	uint8 gpio;
};

struct gpio_name_t gpio_name_map[] = {
	{"gpon_Los"		, -1},
	{"xgspon_Los"	, -1},
	{"gpon_Dis"		, -1},
	{"xgspon_Dis"	, -1},
	{"pon_S_Sel"	, -1},
};

/*_____________________________________________________________________________
**		function name: gpioctl_show_gpio_map_proc
**		descriptions:
**			  When echo "show" > /proc/legacy_api/gpio_map, this function will
**								show the all mappings on gpio_name and gpio_no.
**____________________________________________________________________________
*/

static void gpioctl_show_map_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	int array_size = (sizeof(gpio_name_map) / sizeof(gpio_name_map[0]));
	int i;

	printk("%-16s	%-12s\n", "name", "gpio_no");
	printk("--------------------------------------\n");
	for(i=0; i<array_size; i++)
	{
		printk("%-16s	%-12d\n",
			gpio_name_map[i].name,
			gpio_name_map[i].gpio);
	}
	printk("\n");
}

/*_____________________________________________________________________________
**		function name: gpioctl_test_proc
**		descriptions:
**			  When echo "10 high" > /proc/legacy_api/gpio_test, this function will
**			  pull the GPIO10 to high.
**____________________________________________________________________________
*/

static int gpioctl_test_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char valStr[32];
	char nameStr[32];
	char opStr[32];

	if (count > sizeof(valStr) - 1)
		return -EINVAL;

	if (copy_from_user(valStr, buffer, count))
		return -EFAULT;
	
	valStr[count] = '\0';
	
	if (sscanf(valStr, "%s %s", nameStr, opStr) != 2) {
		printk("usage: <gpio_name> <high/low/input/get>\n");
		return count;
	}

	if(strcasecmp("high", opStr) == 0)
	{
		gpioctlSetOutput(nameStr, 1);
	}
	else if(strcasecmp("low", opStr) == 0)
	{
		gpioctlSetOutput(nameStr, 0);
	}
	else if(strcasecmp("input", opStr) == 0)
	{
		gpioctlSetInput(nameStr);
	}
	else if(strcasecmp("get", opStr) == 0)
	{
		printk("Get GPIO value = %d\n", gpioctlGetVal(nameStr));
	}
	else
	{
		printk("\nerror input, echo <gpio_name> <high/low/input/get> > /proc/legacy_api/gpio_test\n");
	}

	printk("GPIO test finish.\n");

	return count;
}

/*______________________________________________________________________________
**	gpioctlGetIdx
**____________________________________________________________________________*/

static int gpioctlGetIdx(char* gpio_name)
{
	int array_size = (sizeof(gpio_name_map) / sizeof(gpio_name_map[0]));
	int i;

	for(i=0; i<array_size; i++)
	{
		if(strcasecmp(gpio_name, gpio_name_map[i].name) == 0)
		{
			//printk("GPIO: \"%s\", index = %d.\n", gpio_name_map[i].name, gpio_name_map[i].gpio);
			return gpio_name_map[i].gpio;
		}
	}

	return -1;
}

/*______________________________________________________________________________
**	gpioctlSetOutput
**____________________________________________________________________________*/

void gpioctlSetOutput(char* gpio_name, int highLow)
{
	int gpio = gpioctlGetIdx(gpio_name);
	if(gpio != -1)
	{
		gpio_direction_output(gpio, highLow);
	}
}
EXPORT_SYMBOL(gpioctlSetOutput);

/*______________________________________________________________________________
**	gpioctlSetInput
**____________________________________________________________________________*/

void gpioctlSetInput(char* gpio_name)
{
	int gpio = gpioctlGetIdx(gpio_name);
	if(gpio != -1)
	{
		gpio_direction_input(gpio);
	}
}
EXPORT_SYMBOL(gpioctlSetInput);

/*______________________________________________________________________________
**	gpioctlSetVal
**____________________________________________________________________________*/

void gpioctlSetVal(char* gpio_name, int highLow)
{
	int gpio = gpioctlGetIdx(gpio_name);
	if(gpio != -1)
	{
		gpio_set_value(gpio, highLow);
	}
}
EXPORT_SYMBOL(gpioctlSetVal);

/*______________________________________________________________________________
**	gpioctlGetVal
**____________________________________________________________________________*/

int gpioctlGetVal(char* gpio_name)
{
	int gpio = gpioctlGetIdx(gpio_name);
	if(gpio != -1)
	{
		return gpio_get_value(gpio);
	}
	return -1;
}
EXPORT_SYMBOL(gpioctlGetVal);

/*______________________________________________________________________________
**	gpioctl_init
**____________________________________________________________________________*/

void gpioctl_init(void)
{
	int array_size = (sizeof(gpio_name_map) / sizeof(gpio_name_map[0]));
	int i;

	for(i=0; i<array_size; i++)
	{
		struct device_node *node_ptr_gpio;
		struct device_node *node_ptr_gpiochip;

		node_ptr_gpio = of_find_node_by_name(NULL, gpio_name_map[i].name);
		if (node_ptr_gpio == NULL) {
			printk("\nERROR(%s) node(%s) is NULL\n", __func__, gpio_name_map[i].name);
			continue;
		}
		of_property_read_u32(node_ptr_gpio, "gpio", &gpio_name_map[i].gpio);

		printk("gpio #%d: %s\n", gpio_name_map[i].gpio, gpio_name_map[i].name);
	}

	/* PROC */
	struct proc_dir_entry *gpio_proc;

	gpio_proc = create_proc_entry("legacy_api/gpio_test", 0, NULL);
	if(gpio_proc) {
		gpio_proc->read_proc  = gpioctl_show_map_proc;
		gpio_proc->write_proc = gpioctl_test_proc;
	}
}

/*______________________________________________________________________________
**	gpioctl_exit
**____________________________________________________________________________*/

void gpioctl_exit(void)
{
	remove_proc_entry("legacy_api/gpio_test", NULL);
}

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Legacy GPIO driver");
