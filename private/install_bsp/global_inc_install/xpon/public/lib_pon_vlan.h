/*
 ***************************************************************************
 * MediaTeK Inc.
 * 4F, No. 2 Technology	5th	Rd.
 * Science-based Industrial	Park
 * Hsin-chu, Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2012, MTK.
 *
 * All rights reserved.	MediaTeK's source	code is	an unpublished work	and	the
 * use of a	copyright notice does not imply	otherwise. This	source code
 * contains	confidential trade secret material of MediaTeK Tech. Any attemp
 * or participation	in deciphering,	decoding, reverse engineering or in	any
 * way altering	the	source code	is stricitly prohibited, unless	the	prior
 * written consent of MediaTeK, Inc. is obtained.
 ***************************************************************************

	Module Name:
	lib_pon_vlan.h

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	Reid.Ma		2013/2/4	Create
*/


#ifndef _LIB_PON_VLAN_H
#define _LIB_PON_VLAN_H

/**
* \file  lib_pon_vlan.h
* \brief This file is lib pon vlan header file that will be exported for others to use.
* \author jun.wu
* \date     2020-09-22
* \version  A001 
* \copyright EcoNet Inc                                                              
*/

/************************************************************************
*		   I N C L U D E S
*************************************************************************
*/
#include <asm/types.h>
#include <stdint.h>
#include "xpon_pon_vlan_public.h"
#include "xpon_ioctl_if.h"

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/
#define RULE_LIMIT              32
#define MAX_VLAN_RUELS_NUM      33

/************************************************************************
*		   D A T A   T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A   D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*               F U N C T I O N   D E C L A R A T I O N S
                I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/


/**
 * \brief This function is used to enable pon vlan operation rule.
 *
 * This function is used to enable pon vlan operation rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan operation rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan operation rule.
 */
int pon_enable_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to disable pon vlan operation rule.
 *
 * This function is used to disable pon vlan operation rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan operation rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan operation rule.
 */
int pon_disable_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to enable pon vlan veip operation rule.
 *
 * This function is used to enable pon vlan veip operation rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan veip operation rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan veip operation rule.
 */
int pon_enable_veip_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to disable pon vlan veip operation rule.
 *
 * This function is used to disable pon vlan veip operation rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan veip operation rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan veip operation rule.
 */
int pon_disable_veip_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to get pon vlan status.
 *
 * This function is used to get pon vlan status. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	pon vlan disable.
 * \retval	  1	pon vlan enable.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan status.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan status.
 */
int pon_get_vlan_status(void);//0:disable 1:enable -1:error


/**
 * \brief This function is used to add pon vlan operation rule on one port.
 *
 * This function is used to add pon vlan operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  rule: the struct type of pon_vlan_rule
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan operation rule on one port.
 */
int pon_add_vlan_rule(int port, pon_vlan_rule rule);//0:success -1:error


/**
 * \brief This function is used to delete pon vlan operation rule on one port.
 *
 * This function is used to delete pon vlan operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  index: index id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete pon vlan operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Delete pon vlan operation rule on one port.
 */
int pon_del_vlan_rule(int port, int index);//0:success -1:error index:0~31


/**
 * \brief This function is used to clean pon vlan operation rule on one port.
 *
 * This function is used to clean pon vlan operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean pon vlan operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean pon vlan operation rule on one port.
 */
int pon_clean_vlan_rule(int port);//0:success -1:error


/**
 * \brief This function is used to clean hw_nat rule.
 *
 * This function is used to clean hw_nat rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean hw_nat rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean hw_nat rule.
 */
int pon_clean_hwnat(void);//0:success -1:error


/**
 * \brief This function is used to clean all pon vlan operation rule.
 *
 * This function is used to clean all pon vlan operation rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean all pon vlan operation rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean all pon vlan operation rule.
 */
int pon_clean_all_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to show pon vlan operation rule on one port.
 *
 * This function is used to show pon vlan operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Show pon vlan operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Show pon vlan operation rule on one port.
 */
int pon_show_port_vlan_rule(int port);


/**
 * \brief This function is used to set pon vlan if vlan switch.
 *
 * This function is used to set pon vlan if vlan switch. submit by Jun.Wu 2020.09.22
 * \param[in]  switchFlag: pon vlan if vlan switch flag.  0:disable 1:enable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan if vlan switch.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan if vlan switch.
 */
int pon_set_if_vlan_switch(int switchFlag);


/**
 * \brief This function is used to set pon vlan if vlan.
 *
 * This function is used to set pon vlan if vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \param[in]  dev_name: device name
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan if vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan if vlan.
 */
int pon_set_if_vlan(uint16_t vid, char *dev_name);


/**
 * \brief This function is used to set pon vlan debug level.
 *
 * This function is used to set pon vlan debug level. submit by Jun.Wu 2020.09.22
 * \param[in]  level: debug level
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan debug level.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan debug level.
 */
int pon_set_vlan_debug_level(int level);


/**
 * \brief This function is used to set pon vlan trace pkt info.
 *
 * This function is used to set pon vlan trace pkt info. submit by Jun.Wu 2020.09.22
 * \param[in]  trace_pkt_info: the struct type of pon_vlan_trace_drop.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan trace pkt info.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan trace pkt info.
 */
int pon_set_vlan_trace_pkt(pon_vlan_trace_drop trace_pkt_info);

extern int hy_enable;		//enable hybrid mode
extern char hy_sfu_br_wan[PON_VLAN_ITF_NAME_SIZE]; //set bridge wan for hybrid mode
extern char hy_sfu_lan[PON_VLAN_ITF_NAME_SIZE];	//set lan interface which in SFU mode
extern unsigned int hy_port_mask;	//for get,	the port mask which enable hybrid

/**
 * \brief This function is used to set pon vlan filter debug level.
 *
 * This function is used to set pon vlan filter debug level. submit by Jun.Wu 2020.09.22
 * \param[in]  level: pon vlan filter debug level.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan filter debug level.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan filter debug level.
 */
int pon_set_vlan_filter_debug_level(uint8_t level);


/**
 * \brief This function is used to set pon vlan uni filter switch.
 *
 * This function is used to set pon vlan uni filter switch. submit by Jun.Wu 2020.09.22
 * \param[in]  switchFlag: 0:disable 1:enable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan uni filter switch.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan uni filter switch.
 */
int pon_set_vlan_uni_filter_switch(int switchFlag);


//this func will write data directly,it will cause error when rule pointer to the area which size less than 32*sizeof(pon_vlan_rule)


/**
 * \brief This function is used to get pon vlan operation rule on one port.
 *
 * This function is used to get pon vlan operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[out]  rule: pointer to the struct type of pon_vlan_rule
 * \retval	  rule conuter.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan operation rule on one port.
 */
int pon_get_vlan_rule(int port,pon_vlan_rule * rule);//0~32:rule num -1:error


/**
 * \brief This function is used to get pon vlan operation rule index on one port.
 *
 * This function is used to get pon vlan operation rule index on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[out]  rule: pointer to the struct type of pon_vlan_rule
 * \retval	  index 0~31:rule index, 32:no rule.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan operation rule index on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan operation rule index on one port.
 */
int pon_get_vlan_rule_index(int port,pon_vlan_rule * rule);//0~31:rule index,32:no rule -1:error


/**
 * \brief This function is used to set pon vlan downstream working mode of one port.
 *
 * This function is used to set pon vlan downstream working mode of one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  mode: 0:transparent  1:inverse of upstream  2:strip the outer tag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan downstream working mode of one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan downstream working mode of one port.
 */
int pon_set_vlan_downstream_mode(int port,int mode);//0:success -1:error


/**
 * \brief This function is used to get pon vlan downstream working mode of one port.
 *
 * This function is used to get pon vlan downstream working mode of one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	 mode 0:transparent  1:inverse of upstream  2:strip the outer tag.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan downstream working mode of one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan downstream working mode of one port.
 */
int pon_get_vlan_downstream_mode(int port);//0~1:mode -1:error


/**
 * \brief This function is used to enable pon vlan downstream packet forward of one port.
 *
 * This function is used to enable pon vlan downstream packet forward of one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan downstream packet forward of one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan downstream packet forward of one port.
 */
int pon_enable_vlan_downstream_forward(int port); 


/**
 * \brief This function is used to disable pon vlan downstream packet forward of one port.
 *
 * This function is used to disable pon vlan downstream packet forward of one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan downstream packet forward of one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan downstream packet forward of one portt.
 */
int pon_disable_vlan_downstream_forward(int port);


/**
 * \brief This function is used to add pon vlan special tpid.
 *
 * This function is used to add pon vlan special tpid. submit by Jun.Wu 2020.09.22
 * \param[in]  TPID:  range:0~65535 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan special tpid.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan special tpid.
 */
int pon_add_special_tpid(uint16_t TPID);


/**
 * \brief This function is used to delete pon vlan special tpid.
 *
 * This function is used to delete pon vlan special tpid. submit by Jun.Wu 2020.09.22
 * \param[in]  TPID:  range:0~65535 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete pon vlan special tpid.
 * \par Example
 * \snippet lib_pon_vlan.c  Delete pon vlan special tpid.
 */
int pon_del_special_tpid(uint16_t TPID);


/**
 * \brief This function is used to set pon vlan input tpid and output tpid for one port.
 *
 * This function is used to set pon vlan input tpid and output tpid for one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  inTPID:  range:0~65535 
 * \param[in]  outTPID:  range:0~65535 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan input tpid and output tpid for one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan input tpid and output tpid for one port.
 */
int pon_set_vlan_tpid(int port,uint16_t inTPID, uint16_t outTPID);//0:success -1:error


/**
 * \brief This function is used to get pon vlan input tpid for one port.
 *
 * This function is used to get pon vlan input tpid for one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	 input tpid  range:0~65535  tpid value: 0x8100,0x88a8,0x9100
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan input tpid for one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan input tpid for one port.
 */
int pon_get_vlan_input_tpid(int port);//0x8100,0x88a8,0x9100:tpid value -1:error


/**
 * \brief This function is used to get pon vlan output tpid for one port.
 *
 * This function is used to get pon vlan output tpid for one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	 output tpid  range:0~65535  tpid value: 0x8100,0x88a8,0x9100
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan output tpid for one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan output tpid for one port.
 */
int pon_get_vlan_output_tpid(int port);//0x8100,0x88a8,0x9100:tpid value -1:error


/**
 * \brief This function is used to set pon vlan rule for dscp map to pbit on one port.
 *
 * This function is used to set pon vlan rule for dscp map to pbit on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  map:  pointer to the type of uint32_t
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan rule for dscp map to pbit on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan rule for dscp map to pbit on one port.
 */
int pon_set_vlan_dscp_map(int port, uint32_t * map);//0:success -1:error


/**
 * \brief This function is used to get pon vlan rule for dscp map to pbit on one port.
 *
 * This function is used to get pon vlan rule for dscp map to pbit on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[out]  map:  pointer to the type of uint32_t
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan rule for dscp map to pbit on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan rule for dscp map to pbit on one port.
 */
int pon_get_vlan_dscp_map(int port, uint32_t * map);//0:success -1:error


/**
 * \brief This function is used to enable pon vlan the effect of default rule on one port.
 *
 * This function is used to enable pon vlan the effect of default rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan the effect of default rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan the effect of default rule on one port.
 */
int pon_enable_default_vlan_rule(int port);//0:success -1:error (port can't be 40)


/**
 * \brief This function is used to disable pon vlan the effect of default rule on one port.
 *
 * This function is used to disable pon vlan the effect of default rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan the effect of default rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan the effect of default rule on one port.
 */
int pon_disable_default_vlan_rule(int port);//0:success -1:error (port can't be 40)


/**
 * \brief This function is used to get pon default vlan status on one port.
 *
 * This function is used to get pon default vlan status on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	pon default vlan disable.
 * \retval	  1	pon default vlan enable.
 * \retval	 -1	Fail.
 * \note
 *  Get pon default vlan status on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon default vlan status on one port.
 */
int pon_get_default_vlan_status(int port);//0,1:status  -1:error


/**
 * \brief This function is used to enable pon vlan igmp rule.
 *
 * This function is used to enable pon vlan igmp rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan igmp rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan igmp rule.
 */
int pon_enable_igmp_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to disable pon vlan igmp rule.
 *
 * This function is used to disable pon vlan igmp rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan igmp rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan igmp rule.
 */
int pon_disable_igmp_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to get pon vlan igmp status.
 *
 * This function is used to get pon vlan igmp status. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	pon  vlan igmp disable.
 * \retval	  1	pon  vlan igmp enable.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan igmp status.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan igmp status.
 */
int pon_get_igmp_vlan_status(void);//0,1:status -1:error


/**
 * \brief This function is used to set pon vlan igmp mode on one port.
 *
 * This function is used to set pon vlan igmp mode on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  mode: mode
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan igmp mode on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan igmp mode on one port.
 */
int pon_set_igmp_vlan_mode(int port, int mode);//0:success -1:error (port can't be 40)


/**
 * \brief This function is used to get pon vlan igmp mode on one port.
 *
 * This function is used to get pon vlan igmp mode on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	 mode igmp mode.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan igmp mode on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan igmp mode on one port.
 */
int pon_get_igmp_vlan_mode(int port);//0~3:mode  -1:error


/**
 * \brief This function is used to set pon vlan igmp tci on one port.
 *
 * This function is used to set pon vlan igmp tci on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \param[in]  tci: tci
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan igmp tci on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan igmp tci on one port.
 */
int pon_set_igmp_vlan_tci(int port, uint16_t tci);//0:success -1:error (port can't be 40)


/**
 * \brief This function is used to get pon vlan igmp tci on one port.
 *
 * This function is used to get pon vlan igmp tci on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	 tci  igmp tci value 0~0xFF.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan igmp tci on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan igmp tci on one port.
 */
int pon_get_igmp_vlan_tci(int port);//0~0xFF:tci value -1:error


/**
 * \brief This function is used to set pon vlan defualt on one port.
 *
 * This function is used to set pon vlan defualt on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan defualt on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan defualt on one port.
 */
int pon_vlan_set_default(int port);//0:success -1:error


/**
 * \brief This function is used to set pon vlan igmp defualt on one port.
 *
 * This function is used to set pon vlan igmp defualt on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan igmp defualt on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan igmp defualt on one port.
 */
int pon_igmp_set_default(int port);//0:success -1:error (port can't be 40)


/**
 * \brief This function is used to enable pon vlan interface bind vlan.
 *
 * This function is used to enable pon vlan interface bind vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan interface bind vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan interface bind vlan.
 */
int pon_enable_interface_bind_vlan();//0:success -1:error


/**
 * \brief This function is used to disable pon vlan interface bind vlan.
 *
 * This function is used to disable pon vlan interface bind vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan interface bind vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan interface bind vlan.
 */
int pon_disable_interface_bind_vlan();//0:success -1:error


/**
 * \brief This function is used to set pon vlan interface vlan.
 *
 * This function is used to set pon vlan interface vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  ifname: interface name
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan interface vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan interface vlan.
 */
int pon_set_interface_vlan(char * ifname,int vid);//0:success -1:error


/**
 * \brief This function is used to get pon vlan interface vlan.
 *
 * This function is used to get pon vlan interface vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  ifname: interface name
 * \retval	  vlan id.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan interface vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan interface vlan.
 */
int pon_get_interface_vlan(char * ifname);//-1:error 0-4095:vid 4096:transparent 4097:block


/**
 * \brief This function is used to set pon vlan pcp mode.
 *
 * This function is used to set pon vlan pcp mode. submit by Jun.Wu 2020.09.22
 * \param[in]  mode: mode
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan pcp mode.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan pcp mode.
 */
int pon_set_pcp_mode(int mode);//0:success -1:error


/**
 * \brief This function is used to get pon vlan pcp mode.
 *
 * This function is used to get pon vlan pcp mode. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	 mode 0~3.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan pcp mode.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan pcp mode.
 */
int pon_get_pcp_mode(void);//-1:error  0~3:mode


/**
 * \brief This function is used to enable pon vlan mac bind vlan.
 *
 * This function is used to enable pon vlan mac bind vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan mac bind vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan mac bind vlan.
 */
int pon_enable_mac_vlan(int port);//0:success -1:error


/**
 * \brief This function is used to disable pon vlan mac bind vlan.
 *
 * This function is used to disable pon vlan mac bind vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port index
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan mac bind vlan.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan mac bind vlan.
 */
int pon_disable_mac_vlan(int port);//0:success -1:error


/**
 * \brief This function is used to get pon vlan mac bind vlan status.
 *
 * This function is used to get pon vlan mac bind vlan status. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	pon vlan mac bind vlan disable.
 * \retval	  1	pon vlan mac bind vlan enable.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan mac bind vlan status.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan mac bind vlan status.
 */
int pon_get_mac_vlan_status(int port);//0,1:status -1:error


/**
 * \brief This function is used to set pon vlan mac bind vlan time.
 *
 * This function is used to set pon vlan mac bind vlan time. submit by Jun.Wu 2020.09.22
 * \param[in]  time: time
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan mac bind vlan time.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan mac bind vlan time.
 */
int pon_set_mac_vlan_time(int time);//0:success -1:error


/**
 * \brief This function is used to get pon vlan mac bind vlan time.
 *
 * This function is used to get pon vlan mac bind vlan time. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  time 0~3600.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan mac bind vlan time.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan mac bind vlan time.
 */
int pon_get_mac_vlan_time();//0~3600:time -1:error


/**
 * \brief This function is used to enable pon vlan user group.
 *
 * This function is used to enable pon vlan user group. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable pon vlan user group.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable pon vlan user group.
 */
int pon_enable_user_group(void);//-1:error


/**
 * \brief This function is used to disable pon vlan user group.
 *
 * This function is used to disable pon vlan user group. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disable pon vlan user group.
 * \par Example
 * \snippet lib_pon_vlan.c  Disable pon vlan user group.
 */
int pon_disable_user_group(void);//-1:error


/**
 * \brief This function is used to get pon vlan user group status.
 *
 * This function is used to get pon vlan user group status. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	pon vlan user group disable.
 * \retval	  1	pon vlan user group enable.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan user group status.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan user group status.
 */
int pon_user_group_get_status(void);//-1:error 0:disable 1:enable


/**
 * \brief This function is used to set pon vlan user group.
 *
 * This function is used to set pon vlan user group. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id, port:0~3:lan port1~4
 * \param[in]  group: 0~0xffff instanceID,0xffffffff not in a group
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan user group.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan user group.
 */
int pon_set_user_group(uint8_t port,uint32_t group);//port:0~3:lan port1~4  group:0~0xffff instanceID,0xffffffff not in a group


/**
 * \brief This function is used to get pon vlan user group.
 *
 * This function is used to get pon vlan user group. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id, port:0~3:lan port1~4
 * \param[out]  group: pointer to the type of uint32_t 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan user group.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan user group.
 */
int pon_get_user_group(uint8_t port,uint32_t * group);


/**
 * \brief This function is used to clean pon vlan all user group.
 *
 * This function is used to clean pon vlan all user group. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean pon vlan all user group.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean pon vlan all user group.
 */
int pon_clean_all_user_group(void);//-1:error

//for hybridMode
/**
 * \brief This function is used to enable hybrid mode.
 *
 * This function is used to enable hybrid mode. submit by Taylor.Fang 2022.04.22
 * \param[in]  flag: 0:disable 1:enable
 * \retval	  0.
 * \note
 *  Enable hybrid mode.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable hybrid mode.
 */
int pon_hybrid_enable(int flag);

/**
 * \brief This function is used to set hybrid SFU birdge wan.
 *
 * This function is used to set hybrid SFU birdge wan. submit by Taylor.Fang 2022.04.22
 * \param[in]  wan_if: the name of wan interface
 * \retval	  0.
 * \note
 *  Set hybrid SFU birdge wan.
 * \par Example
 * \snippet lib_pon_vlan.c  Set hybrid SFU birdge wan.
 */
int pon_set_hybrid_sfu_br_wan(char *wan_if);

/**
 * \brief This function is used to add hybrid SFU LAN port.
 *
 * This function is used to add hybrid SFU LAN port. submit by Taylor.Fang 2022.04.22
 * \param[in]  lan_if: the name of LAN interface
 * \retval	  0.
 * \note
 *  Add hybrid SFU LAN port.
 * \par Example
 * \snippet lib_pon_vlan.c  Add hybrid SFU LAN port.
 */
int pon_add_hybrid_sfu_lan(char *lan_if);

/**
 * \brief This function is used to delete hybrid SFU LAN port.
 *
 * This function is used to delete hybrid SFU LAN port. submit by Taylor.Fang 2022.04.22
 * \param[in]  lan_if: the name of LAN interface
 * \retval	  0.
 * \note
 *  Delete hybrid SFU LAN port.
 * \par Example
 * \snippet lib_pon_vlan.c  Delete hybrid SFU LAN port.
 */
int pon_del_hybrid_sfu_lan(char *lan_if);

/**
 * \brief This function is used to reset hybrid.
 *
 * This function is used to reset hybrid. submit by Taylor.Fang 2022.04.22
 * \param[in]  void
 * \retval	  0.
 * \note
 *  Reset hybrid.
 * \par Example
 * \snippet lib_pon_vlan.c  Reset hybrid.
 */
int pon_reset_hybrid(void);

/**
 * \brief This function is used to display hybrid info.
 *
 * This function is used to display hybrid info. submit by Taylor.Fang 2022.04.22
 * \param[in]  void
 * \retval	  0.
 * \note
 *  Display hybrid info.
 * \par Example
 * \snippet lib_pon_vlan.c  Display hybrid info.
 */
int pon_display_hybrid(void);

/**
 * \brief This function is used to get the mask of the hybrid ports.
 *
 * This function is used to get the mask of the hybrid ports. submit by Taylor.Fang 2022.04.22
 * \param[out]  mask: the mask of the hybrid ports
 * \retval	  0.
 * \note
 *  Get the mask of the hybrid ports.
 * \par Example
 * \snippet lib_pon_vlan.c  Get the mask of the hybrid ports.
 */
int pon_get_hybrid_port_masks(unsigned int *mask);

/*enableFlag = 0:Disable, 1:Enable      returnValue = 0:success, -1:error*/

/**
 * \brief This function is used to set pon vlan multicast filter enable switch.
 *
 * This function is used to set pon vlan multicast filter enable switch. submit by Jun.Wu 2020.09.22
 * \param[in]  enableFlag:  0:disable 1:enable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan multicast filter enable switch.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan multicast filter enable switch.
 */
int pon_multicast_filter_enable_switch(uint8_t * enableFlag);

/* -----------------------------OUT Interfaces----------------------------- */


/**
 * \brief This function is used to add pon vlan filter rule on one port.
 *
 * This function is used to add pon vlan filter rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  vlanFilterRule_ptr: pointer to the struct type of gponVlanFilterIoctl_s
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan filter rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan filter rule on one port.
 */
int addGponVlanFilterRule(gponVlanFilterIoctl_ptr vlanFilterRule_ptr);


/**
 * \brief This function is used to get pon vlan filter rule on one port.
 *
 * This function is used to get pon vlan filter rule on one port. submit by Jun.Wu 2020.09.22
 * \param[out]  vlanFilterRule_ptr: pointer to the struct type of gponVlanFilterIoctl_s
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan filter rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan filter rule on one port.
 */
int getGponVlanFilterRule(gponVlanFilterIoctl_ptr vlanFilterRule_ptr);


/**
 * \brief This function is used to delete pon vlan filter rule on one port.
 *
 * This function is used to delete pon vlan filter rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  portType: 0:LAN port 1:ANI port
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete pon vlan filter rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Delete pon vlan filter rule on one port.
 */
int delGponVlanFilterRule(uint16_t port, uint8_t portType);


/**
 * \brief This function is used to clean all pon vlan filter rule.
 *
 * This function is used to clean all pon vlan filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean all pon vlan filter rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean all pon vlan filter rule.
 */
int cleanAllGponVlanFilterRule(void);


/**
 * \brief This function is used to disaply all pon vlan filter rule.
 *
 * This function is used to disaply all pon vlan filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Disaply all pon vlan filter rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Disaply all pon vlan filter rule.
 */
int displayAllGponVlanFilterRule(void);


/**
 * \brief This function is used to set pon vlan xpon mode.
 *
 * This function is used to set pon vlan xpon mode. submit by Jun.Wu 2020.09.22
 * \param[in]  xpon_mode: 2: mpde_epon
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan xpon mode.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan xpon mode.
 */
int ponvlan_set_mode(uint16_t xpon_mode);


/**
 * \brief This function is used to add pon vlan gpon ani map.
 *
 * This function is used to add pon vlan gpon ani map. submit by Jun.Wu 2020.09.22
 * \param[in]  arg: pointer to the struct type of XMCS_GemPortAssign_S
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan gpon ani map.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan gpon ani map.
 */
int gpon_ani_map_add(struct XMCS_GemPortAssign_S* arg);


/**
 * \brief This function is used to delete pon vlan gpon ani map.
 *
 * This function is used to delete pon vlan gpon ani map. submit by Jun.Wu 2020.09.22
 * \param[in]  arg: pointer to the struct type of XMCS_GemPortAssign_S
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete pon vlan gpon ani map.
 * \par Example
 * \snippet lib_pon_vlan.c  Delete pon vlan gpon ani map.
 */
int gpon_ani_map_delete(struct XMCS_GemPortAssign_S* arg);


/**
 * \brief This function is used to clean pon vlan gpon ani map.
 *
 * This function is used to clean pon vlan gpon ani map. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean pon vlan gpon ani map.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean pon vlan gpon ani map.
 */
int gpon_ani_map_clean(void);


/**
 * \brief This function is used to get pon vlan gpon ani map.
 *
 * This function is used to get pon vlan gpon ani map. submit by Jun.Wu 2020.09.22
 * \param[in]  gemId: GEM Port-id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan gpon ani map.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan gpon ani map.
 */
int gpon_ani_map_get(__u16 gemId);


/**
 * \brief This function is used to display pon vlan gpon ani map.
 *
 * This function is used to display pon vlan gpon ani map. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Display pon vlan gpon ani map.
 * \par Example
 * \snippet lib_pon_vlan.c  Display pon vlan gpon ani map.
 */
int gpon_ani_map_display(void);


/**
 * \brief This function is used to set pon vlan gpon ani map debug level.
 *
 * This function is used to set pon vlan gpon ani map debug level. submit by Jun.Wu 2020.09.22
 * \param[in]  dbgLevel: debug level
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan gpon ani map debug level.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan gpon ani map debug level.
 */
int gpon_ani_map_dbg_level(__u32 dbgLevel);


/**
 * \brief This function is used to set pon vlan gpon ani map enable flag.
 *
 * This function is used to set pon vlan gpon ani map enable flag. submit by Jun.Wu 2020.09.22
 * \param[in]  enFlag: 0:disable 1:enable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan gpon ani map enable flag.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan gpon ani map enable flag.
 */
int gpon_ani_map_enable(int enFlag);

/**
 * \brief This function is used to enable the 1toN function of downstream broadcast.
 *
 * This function is used to enable the 1toN function of downstream broadcast. submit by Taylor.Fang 2022.04.22
 * \param[in]  enable: 0:disable 1:enable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Enable the 1toN function of downstream broadcast.
 * \par Example
 * \snippet lib_pon_vlan.c  Enable the 1toN function of downstream broadcast.
 */
int gpon_ds_bcast_1toN_enable(uint8_t enable);


/**
 * \brief This function is used to add pon vlan epon operation rule on one port.
 *
 * This function is used to add pon vlan epon operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rule: the struct type of pon_vlan_epon_ioctl
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan epon operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan epon operation rule on one port.
 */
int epon_add_vlan_rule(int port, pon_vlan_epon_ioctl rule);//0:success -1:error


/**
 * \brief This function is used to delete pon vlan epon operation rule on one port.
 *
 * This function is used to delete pon vlan epon operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: 0~31
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete pon vlan epon operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Delete pon vlan epon operation rule on one port.
 */
int epon_del_vlan_rule(int port, int index);//0:success -1:error index:0~31


/**
 * \brief This function is used to clean pon vlan epon operation rule on one port.
 *
 * This function is used to clean pon vlan epon operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean pon vlan epon operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean pon vlan epon operation rule on one port.
 */
int epon_clean_vlan_rule(int port);//0:success -1:error


/**
 * \brief This function is used to clean epon hw_nat rule.
 *
 * This function is used to clean epon hw_nat rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean epon hw_nat rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean epon hw_nat rule.
 */
int epon_clean_hwnat(void);//0:success -1:error


/**
 * \brief This function is used to clean epon all vlan rule.
 *
 * This function is used to clean epon all vlan rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean epon all vlan rule.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean epon all vlan rule.
 */
int epon_clean_all_vlan_rule(void);//0:success -1:error


/**
 * \brief This function is used to set pon vlan epon vlan transparent.
 *
 * This function is used to set pon vlan epon vlan transparent. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan epon vlan transparent.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan epon vlan transparent.
 */
int epon_set_vlan_transparent(int port);//0:success -1:error

// support EPON OAM 


/**
 * \brief This function is used to clean pon vlan epon operation rule on one port.
 *
 * This function is used to clean pon vlan epon operation rule on one port. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clean pon vlan epon operation rule on one port.
 * \par Example
 * \snippet lib_pon_vlan.c  Clean pon vlan epon operation rule on one port.
 */
int eponClearVlanRules(int port);


/**
 * \brief This function is used to set pon vlan epon vlan transparent.
 *
 * This function is used to set pon vlan epon vlan transparent. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan epon vlan transparent.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan epon vlan transparent.
 */
int eponSetVlanTransparent(int port);


/**
 * \brief This function is used to block  pon vlan epon all vlan tag.
 *
 * This function is used to block pon vlan epon  epon all vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Block pon vlan epon all vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Block pon vlan epon  epon all vlan tag.
 */
int eponBlockAllVlanTag(int port);


/**
 * \brief This function is used to set pon vlan epon default vlan tag.
 *
 * This function is used to set pon vlan epon default vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  tag: tag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon vlan epon default vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan epon default vlan tag.
 */
int eponSetDefVlanTag(int port, uint tag);


/**
 * \brief This function is used to get pon vlan epon default vlan tag.
 *
 * This function is used to get pon vlan epon default vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[out]  tag: pointer to the type of uint
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan epon default vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan epon default vlan tag.
 */
int eponGetDefVlanTag(int port, uint *tag);


/**
 * \brief This function is used to add pon vlan epon translate vlan tag.
 *
 * This function is used to add pon vlan epon translate vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  old_tag: old tag
 * \param[in]  new_tag: new tag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan epon translate vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan epon translate vlan tag.
 */
int eponAddTranslateVlanTag(int port, uint old_tag, uint new_tag);


/**
 * \brief This function is used to get pon vlan epon translate vlan tag.
 *
 * This function is used to get pon vlan epon translate vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  num: rule num
 * \param[out]  old_tags: pointer to the type of uint
 * \param[out]  new_tags: pointer to the type of uint
 * \retval	  0	Success.
 * \retval	  rule num.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan epon translate vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan epon translate vlan tag.
 */
int eponGetTranslateVlanTag(int port, uint8_t num, uint *old_tags, uint *new_tags);


/**
 * \brief This function is used to add pon vlan epon N:1translate vlan tag.
 *
 * This function is used to add pon vlan epon N:1 translate vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  num: vlan num
 * \param[in]  old_tag: pointer to the type of uint
 * \param[in]  new_tag: new tag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan epon N:1 translate vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan epon N:1 translate vlan tag.
 */
int eponAddN1TranslateVlanTag(int port, uint8_t num, uint *old_tags, uint new_tag);


/**
 * \brief This function is used to get pon vlan epon N:1translate vlan tag.
 *
 * This function is used to get pon vlan epon N:1 translate vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]   port: port id
 * \param[out]  old_nums: pointer to the type of uint
 * \param[out]  old_tags: pointer to the type of uint
 * \param[out]  new_num:  pointer to the type of uint
 * \param[out]  new_tags: pointer to the type of uint
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan epon N:1 translate vlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan epon N:1 translate vlan tag.
 */
int eponGetN1TranslateVlanTag(int port, uint *old_nums, uint *old_tags, uint *new_num, uint *new_tags);


/**
 * \brief This function is used to add pon vlan epon trunk vlan tag.
 *
 * This function is used to add pon vlan epon trunk vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  tag: vlan tag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add pon vlan epon trunkvlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Add pon vlan epon trunkvlan tag.
 */
int eponAddTrunkVlanTag(int port, uint tag);


/**
 * \brief This function is used to get pon vlan epon trunk vlan tag.
 *
 * This function is used to get pon vlan epon trunk vlan tag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  num:  rule num
 * \param[out]  tags: pointer to the type of uint
 * \retval	  0	Success.
 * \retval	  rule num.
 * \retval	 -1	Fail.
 * \note
 *  Get pon vlan epon trunkvlan tag.
 * \par Example
 * \snippet lib_pon_vlan.c  Get pon vlan epon trunkvlan tag.
 */
int eponGetTrunkVlanTag(int port, uint8_t num, uint *tags);

/**
 * \brief This function is used to set pon vlan resort enable flag.
 *
 * This function is used to set pon vlan resort enable flag. submit by fran.lu 2023.09.22
 * \param[in]  enable:enable flag,1 enable,0 disable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *   set pon vlan resort enable flag
 * \par Example
 * \snippet lib_pon_vlan.c  Set pon vlan resort enable flag.
 */
int pon_enable_resort(int enable);

#endif

