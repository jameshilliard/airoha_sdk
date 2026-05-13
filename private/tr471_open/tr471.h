
#ifndef TR471_H_
#define	TR471_H_

#include <linux/version.h>
#include <linux/skbuff.h>
#include <linux/time.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/udp.h>
#include <linux/tcp.h>
#include <linux/version.h>
#include <linux/fs.h>
#include <linux/in.h>
#include <net/ip.h>
#include <linux/ip.h>
#include <linux/if_packet.h>
#include <linux/inetdevice.h>
#include <linux/if_arp.h>
#include <net/ipv6.h>
#include <net/if_inet6.h>
#include <net/ndisc.h>
#include <linux/jiffies.h>
#include <linux/libcompileoption.h>
#include <linux/atomic.h>
#include <net/tcp.h>
#include <asm/tc3162/tc3162.h>

#ifndef TCSUPPORT_CPU_ARMV8
#include <asm/tc3162/tc3182_int_source.h>
#else
#include <asm/tc3162/ecnt_timer.h>
#include <asm/div64.h>
#endif
#include <linux/kthread.h>
#include <linux/timer.h>
#include <linux/bvec.h>
#include <linux/proc_fs.h>

#define INET6_ADDRSTRLEN 46

#define UINT8_MAX 255
#define UINT16_MAX 65535

#define SUCCESS  0
#define ERR      1

#define LOCAL_IP_MAX			(8)
#define MEASUREMENT_TIME_SLICE_RATIO	(1)	/*1: 10ms, 10: 100ms, 100: 1s*/


#define MEASUREMENT_TIME_SLICE_RATIO	(1)	/*1: 10ms, 10: 100ms, 100: 1s*/
#define MEASUREMENT_TIME_MAX_RECORD		(300*(100/MEASUREMENT_TIME_SLICE_RATIO))

#define DEFAULT_WAN_ITF		"nas0_0"
#define DEFAULT_PON_ITF		"pon"
#define MAC_LEN				12


/************************************************************************
*                  E X T E R N A L	 D A TA	 D E C L A R A T I O N S
*************************************************************************
*/
#if defined(TCSUPPORT_CPU_AN7583)
#define SUPPORT_TR471_HW_FUNCTION 1
#else
#define SUPPORT_TR471_HW_FUNCTION 0
#endif

/*
#if defined(TCSUPPORT_CPU_EN7581)
#define SUPPORT_TR471_NPU_OFFLOAD		1
#else
#define SUPPORT_TR471_NPU_OFFLOAD		0
#endif
*/
#define TR471_GEN_MAX_PKT		50

extern int macflag;
extern int maclen;
extern int isppp;
extern int debugon;
extern int curr_conn;
extern int curr_tmp;
extern int start_flag;

/* IPv6 */
extern unsigned char ipv6_mode;	/* 0: IPv4, 1: IPv6 */
extern struct in6_addr localip_v6[LOCAL_IP_MAX];
extern struct in6_addr targetip_v6;
extern struct in6_addr gateway_v6;
extern unsigned int mask_v6;
/* IPV4 */
extern unsigned int localip;
extern unsigned int targetip;
extern unsigned int gateway;
extern unsigned int mask;
extern unsigned short port_begin;


/* udp speedtest */
extern unsigned int udp_bandwidth;	/*udp bandwidth for upload, unit Mbps */
extern unsigned int udp_cpu;	/*udp send data bind cpu */
extern unsigned long send_pkt_per_time;
extern unsigned int curr_rate[20];
extern unsigned int max_rate;
extern int thread_start;
extern char wan_itf_alias_name[16];
extern struct net_device*  wan_dev;
extern struct net_device *pon_device;



extern unsigned int dscp_value ;		/*0-63*/
extern unsigned int eth_pri_value;		/*0-7*/
extern unsigned char srcmac[6];
extern unsigned char machdr[32];
extern unsigned long time_start;

extern int ring_idx;


/************************************************************************
*				   E X T E R N A L	   F U N C T I O N	 D E C L A R A T I O N S
*************************************************************************
*/
extern struct timespec tr471_get_current_time(void);
extern struct timespec tr471_read_npu_time(void);
extern int tr471_set_wandev(char* val);
extern unsigned short check_and_generate_lport(int k, unsigned short lport);
extern int tr471_add_ifc(int locPort,int remPort);
extern int tr471_del_ifc(int locPort,int remPort);
extern void tr471_init_hw_cnt(void);
extern void tr471_delay1ms(int ms);
extern void tr471_init_time(void);
//----------------------------------------------------------------------------


#endif

