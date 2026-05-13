#ifndef VTAG_H_
#define VTAG_H_
#include <linux/types.h>
#include <linux/if_vlan.h>

#define VTAG_DBG_NONE		0
#define VTAG_DBG_ERROR		1
#define VTAG_DBG_WARNING	2
#define VTAG_DBG_TRACE		3

#define VTAG_DBG
#ifdef VTAG_DBG
#define VTAG_PRINT(level, fmt, args...) { if (vtag_dbg_level >= level) printk("[%d]VLAN-TAG: %s: "fmt,__LINE__, __FUNCTION__, ##args);}
#else
#define VTAG_PRINT(level, fmt, args...) {}
#endif

#if defined(CONFIG_TP_IMAGE) && defined(INCLUDE_ITTIM)
#define TOS_DSCP_MASK 0XFC
#define TOS_DSCP_SHIFT 2
#endif
enum vtag_result_status {
	VTAG_SUCCESS	=0,
	VTAG_FAIL		=1,
	VTAG_DROP_PKT	=2
}vtag_result_status_t;

typedef enum {
	VTAG_DISABLE = 0,
	VTAG_ENABLE = 1
} vtag_switch_t ;

typedef enum {
	UNTAG_VTAG_MODE			= 1,
	TRANSPARENT_VTAG_MODE	= 2,
	TAG_VTAG_MODE			= 3,
	TAG_UNPIT_VTAG_MODE		= 4
} vtag_mode_t ;

typedef enum {
	VTAG_SELE_IFC_SUCCESS	= 0,
	VTAG_SELE_IFC_FAIL		= 1 
} vtag_sele_wan_ifc_t ;

#define 	VTAG_DISABLE_MULTICAST_VLAN	0

#ifdef TCSUPPORT_FWC_VLAN_TAG
#define VLAN_FIREST_OFFSET	(0)
#define VLAN_SECOND_OFFSET	(1)
#endif


#define 	VTAG_VID_MASK   		0xfff
#define 	VTAG_TCI_MASK   		0xefff //no include CFI

#define 	VTAG_GET_VID(tci)   	((tci) & VLAN_VID_MASK)
#endif
