#ifndef _LINUX_ECNT_KERNEL_PRINTK_H
#define _LINUX_ECNT_KERNEL_PRINTK_H

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CT_JOYME2)
extern void set_panic_log_buffer(va_list *args, const char *fmt);
#endif/*TCSUPPORT_COMPILE*/

static inline int ecnt_set_panic_log_buffer_hook(va_list *args, const char* fmt)
{
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CT_JOYME2)
	set_panic_log_buffer(args, fmt);
#endif/*TCSUPPORT_COMPILE*/
	return 0;
}
#endif

