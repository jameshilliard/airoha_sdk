#ifndef __VOIP_PROC_H
#define __VOIP_PROC_H

#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_CT_VOIP_QOS)
extern void ecnt_voip_qos_proc_init(void);
extern void ecnt_voip_qos_proc_dest(void);
#endif/*TCSUPPORT_COMPILE*/
#endif
