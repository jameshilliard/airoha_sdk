#include <linux/types.h>
#include <linux/fs.h>
#include "do_mounts.h"
#include "ecnt_init_ext.h"

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CF_UNIFIED_PLATFORM)
#include <modules/unified_platform_param_def.h>
#endif/*TCSUPPORT_COMPILE*/
/**************************************************************************************************/
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CF_UNIFIED_PLATFORM)
static int __init do_mount_slave_rootfs(char *name, char *fs, int flags, void *data);
#endif/*TCSUPPORT_COMPILE*/
/**************************************************************************************************/
int __init ecnt_do_mount_root_hook(char *name, char *fs, int flags, void *data, int*err)
{
	if(*err)
	{
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CF_UNIFIED_PLATFORM)
		*err = do_mount_slave_rootfs(name, fs, flags, data);

	}
	else
	{
		unified_platform_param_t *to_kernel_env_addr = (unified_platform_param_t *)FH_UNIFIED_PLATFORM_BOOT2KRENEL_ENV_ADDR;
	
		if(E_FH_UNIFIED_PLATFORM_START_UP_B == to_kernel_env_addr->rootfs_boot)
		{
			to_kernel_env_addr->rootfs_commit = E_FH_UNIFIED_PLATFORM_START_UP_B;
		}
		else
		{
			to_kernel_env_addr->rootfs_commit = E_FH_UNIFIED_PLATFORM_START_UP_A;
		}
		printk(KERN_INFO"\n\n====rootfs_commit =%d\n\n",to_kernel_env_addr->rootfs_commit);
#endif/*TCSUPPORT_COMPILE*/		
	}
	
	return *err;
}

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CF_UNIFIED_PLATFORM)
dev_t ROOT_DEV_SLAVE;
static int __init do_mount_slave_rootfs(char *name, char *fs, int flags, void *data)
{
    int err = 0;
	unified_platform_param_t *to_kernel_env_addr = (unified_platform_param_t *)FH_UNIFIED_PLATFORM_BOOT2KRENEL_ENV_ADDR;

	sys_umount("/root",MNT_DETACH);
	create_dev("/dev/root_slave", ROOT_DEV_SLAVE);
	err = sys_mount("/dev/root_slave", "/root", fs, flags, data);
	
	if (0 == err)
	{
		if(E_FH_UNIFIED_PLATFORM_START_UP_B == to_kernel_env_addr->rootfs_boot)
		{
			to_kernel_env_addr->rootfs_commit = E_FH_UNIFIED_PLATFORM_START_UP_A;
		}
		else
		{
			to_kernel_env_addr->rootfs_commit = E_FH_UNIFIED_PLATFORM_START_UP_B;
		}
		printk(KERN_INFO"\n\n====rootfs_commit =%d\n\n",to_kernel_env_addr->rootfs_commit);
	}

	return err;
}

#endif/*TCSUPPORT_COMPILE*/

