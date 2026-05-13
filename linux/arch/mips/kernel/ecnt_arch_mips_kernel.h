#ifndef _LINUX_ECNT_ARCH_MIPS_KERNEL_H
#define _LINUX_ECNT_ARCH_MIPS_KERNEL_H

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CT_JOYME2)
extern int panic_write(void);
extern int set_panic_log_flag(int panic_flag);
#endif/*TCSUPPORT_COMPILE*/

static inline int ecnt_panic_write_hook(void)
{
	int ret = -1;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CT_JOYME2)
	ret = panic_write();
#endif/*TCSUPPORT_COMPILE*/
	return ret;
}

static inline int ecnt_set_panic_log_flag_hook(int panic_flag)
{
	int ret = -1;
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CT_JOYME2)
	ret = set_panic_log_flag(panic_flag);
#endif/*TCSUPPORT_COMPILE*/
	return ret;
}


#endif

