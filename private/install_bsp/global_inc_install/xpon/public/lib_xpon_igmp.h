
/*
 ***************************************************************************
 * MediaTeK Inc.
 * 4F, No. 2 Technology	5th	Rd.
 * Science-based Industrial	Park
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
	xpon_igmp_lib.h
	
	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name				Date			Modification logs
	lidong.hu		2012/7/28	Create
*/
#ifndef _XPON_IGMP_LIB_H_
#define _XPON_IGMP_LIB_H_

/**
* \file  lib_xpon_igmp.h
* \brief This file is lib xpon igmp header file that will be exported for others to use.
* \author jun.wu
* \date     2020-09-22
* \version  A001 
* \copyright EcoNet Inc                                                              
*/

/************************************************************************
*		   I N C L U D E S
*************************************************************************
*/
#include <stdint.h>
#include "xpon_igmp_public.h"

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/

#define FWD_RULE_TYPE_ALL      0
#define FWD_RULE_TYPE_DYNAMIC  1
#define FWD_RULE_TYPE_STATIC   2

/************************************************************************
*		   D A T A   T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
typedef struct igmpRuleInfo_s
{
	uint8_t rowpart;
	uint16_t index;
	uint16_t type;
	uint16_t gem;
	uint16_t vid;
	uint8_t srcip[16];
	uint8_t startip[16];
	uint8_t endip[16];
	uint32_t band;
	uint16_t pre_len;
	uint16_t pre_rep_time;
	uint16_t pre_rep_cnt;
	uint16_t pre_rst_time;
}igmpRuleInfo_t, *igmpRuleInfo_Ptr;

typedef struct igmpActiveGroupInfo_s
{
	uint8_t srcip[16];
	uint8_t grpip[16];
	uint32_t bandwidth;
	uint8_t clientip[16];
	uint32_t times;
	uint16_t vid;
	uint16_t reserve;
}igmpActiveGroupInfo_t, *igmpActiveGroupInfo_Ptr;



/************************************************************************
*               F U N C T I O N   D E C L A R A T I O N S
                I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/

/**
 * \brief This function is used to get igmp version.
 *
 * This function is used to get igmp version. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp version.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp version.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp version.
 */
int igmp_get_ver(int port); 


/**
 * \brief This function is used to set igmp version.
 *
 * This function is used to set igmp version. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  ver: igmp version
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp version.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp version.
 */
int igmp_set_ver(int port ,int ver);


/**
 * \brief This function is used to get igmp work mode.
 *
 * This function is used to get igmp work mode. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp work mode.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp work mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp work mode.
 */ 
int igmp_get_func(int port);


/**
 * \brief This function is used to set igmp work mode.
 *
 * This function is used to set igmp work mode. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  mode: igmp work mode
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp work mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp work mode.
 */
int igmp_set_func(int port,int mode);


/**
 * \brief This function is used to get igmp fastleave.
 *
 * This function is used to get igmp fastleave. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp fastleave.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp fastleave.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp fastleave.
 */ 
int igmp_get_fastleave(int port);


/**
 * \brief This function is used to set igmp fastleave.
 *
 * This function is used to set igmp fastleave. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  mode: igmp fastleave
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp fastleave.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp fastleave.
 */
int igmp_set_fastleave(int port,int mode);


/**
 * \brief This function is used to get igmp upstream tci.
 *
 * This function is used to get igmp upstream tci. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp upstream tci.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp upstream tci.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp upstream tci.
 */ 
int igmp_get_up_tci(int port);


/**
 * \brief This function is used to set igmp upstream tci.
 *
 * This function is used to set igmp upstream tci. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  tci: igmp upstream tci
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp upstream tci.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp upstream tci.
 */
int igmp_set_up_tci(int port,int tci);


/**
 * \brief This function is used to get igmp upstream tagctrl.
 *
 * This function is used to get igmp upstream tagctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp upstream tagctrl.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp upstream tagctrl.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp upstream tagctrl.
 */ 
int igmp_get_up_tagctrl(int port);


/**
 * \brief This function is used to set igmp upstream tagctrl.
 *
 * This function is used to set igmp upstream tagctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  mode: igmp upstream tagctrl
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp upstream tagctrl.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp upstream tagctrl.
 */
int igmp_set_up_tagctrl(int port,int mode);


/**
 * \brief This function is used to get igmp downstream tci.
 *
 * This function is used to get igmp downstream tci. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp downstream tci.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp downstream tci.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp downstream tci.
 */ 
int igmp_get_down_tci(int port);


/**
 * \brief This function is used to set igmp downstream tci.
 *
 * This function is used to set igmp downstream tci. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  tci: igmp downstream tci
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp downstream tci.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp downstream tci.
 */
int igmp_set_down_tci(int port,int tci);


/**
 * \brief This function is used to get igmp downstream tagctrl.
 *
 * This function is used to get igmp downstream tagctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp downstream tagctrl.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp downstream tagctrl.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp downstream tagctrl.
 */ 
int igmp_get_down_tagctrl(int port);


/**
 * \brief This function is used to set igmp downstream tagctrl.
 *
 * This function is used to set igmp downstream tagctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  mode: igmp downstream tagctrl
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp downstream tagctrl.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp downstream tagctrl.
 */
int igmp_set_down_tagctrl(int port,int mode);


/**
 * \brief This function is used to get igmp maxrate.
 *
 * This function is used to get igmp maxrate. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp maxrate.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp maxrate.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp maxrate.
 */ 
int igmp_get_maxrate(int port);


/**
 * \brief This function is used to set igmp maxrate.
 *
 * This function is used to set igmp maxrate. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  maxrate: igmp maxrate
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp maxrate.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp maxrate.
 */
int igmp_set_maxrate(int port,int maxRate);


/**
 * \brief This function is used to clear igmp maxrate.
 *
 * This function is used to clear igmp maxrate. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp maxrate.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp maxrate.
 */
int igmp_clear_maxrate(int port);


/**
 * \brief This function is used to get igmp robust.
 *
 * This function is used to get igmp robust. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp robust.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp robust.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp robust.
 */ 
int igmp_get_robust(int port);


/**
 * \brief This function is used to set igmp robust.
 *
 * This function is used to set igmp robust. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  robust: igmp robust
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp robust.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp robust.
 */
int igmp_set_robust(int port,int robust);


/**
 * \brief This function is used to get igmp unauthor.
 *
 * This function is used to get igmp unauthor. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp unauthor.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp unauthor.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp unauthor.
 */ 
int igmp_get_unauthor(int port);


/**
 * \brief This function is used to set igmp unauthor.
 *
 * This function is used to set igmp unauthor. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  unauthor: igmp unauthor
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp unauthor.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp unauthor.
 */
int igmp_set_unauthor(int port,int unauthor);


/**
 * \brief This function is used to get igmp query ip.
 *
 * This function is used to get igmp query ip. submit by Jun.Wu 2020.09.22
 * \param[in]    port: port id
 * \param[out]  queryip: the address of query ip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp query ip.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp query ip.
 */ 
int igmp_get_query_ip(int port,unsigned char* queryip);


/**
 * \brief This function is used to set igmp query ip.
 *
 * This function is used to set igmp query ip. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  queryip: the address of query ip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp query ip.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp query ip.
 */
int igmp_set_query_ip(int port,unsigned char* queryip);


/**
 * \brief This function is used to get igmp query interval.
 *
 * This function is used to get igmp query interval. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp query interval.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp query interval.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp query interval.
 */ 
int igmp_get_query_interval(int port);


/**
 * \brief This function is used to set igmp query interval.
 *
 * This function is used to set igmp query interval. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  interval: igmp query interval
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp query interval.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp query interval.
 */
int igmp_set_query_interval(int port,int interval);


/**
 * \brief This function is used to get igmp last interval.
 *
 * This function is used to get igmp last interval. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp last interval.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp last interval.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp last interval.
 */ 
int igmp_get_last_interval(int port);


/**
 * \brief This function is used to set igmp last interval.
 *
 * This function is used to set igmp last interval. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  interval: igmp last interval
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp last interval.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp last interval.
 */
int igmp_set_last_interval(int port,int interval);


/**
 * \brief This function is used to get igmp query maxresp.
 *
 * This function is used to get igmp query maxresp. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp query maxresp.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp query maxresp.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp query maxresp.
 */ 
int igmp_get_query_maxresp(int port);


/**
 * \brief This function is used to set igmp query maxresp.
 *
 * This function is used to set igmp query maxresp. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  maxresp: igmp query maxresp
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp query maxresp.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp query maxresp.
 */
int igmp_set_query_maxresp(int port,int maxresp);


/**
 * \brief This function is used to get igmp max playgroup.
 *
 * This function is used to get igmp max playgroup. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp max playgroup.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp max playgroup.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp max playgroup.
 */ 
int igmp_get_max_playgroup(int port);


/**
 * \brief This function is used to set igmp max playgroup.
 *
 * This function is used to set igmp max playgroup. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  maxgroup: igmp max playgroup
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp max playgroup.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp max playgroup.
 */
int igmp_set_max_playgroup(int port,int maxgroup);


/**
 * \brief This function is used to get igmp max bandwidth.
 *
 * This function is used to get igmp max bandwidth. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp max bandwidth.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp max bandwidth.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp max bandwidth.
 */ 
int igmp_get_max_bw(int port);


/**
 * \brief This function is used to set igmp max bandwidth.
 *
 * This function is used to set igmp max bandwidth. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  bw: igmp max bandwidth
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp max bandwidth.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp max bandwidth.
 */
int igmp_set_max_bw(int port,int bw);


/**
 * \brief This function is used to get igmp bandwidth enforcement.
 *
 * This function is used to get igmp bandwidth enforcement. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp bandwidth enforcement.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp bandwidth enforcement.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp bandwidth enforcement.
 */
int igmp_get_bwe(int port);


/**
 * \brief This function is used to set igmp bandwidth enforcement.
 *
 * This function is used to set igmp bandwidth enforcement. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  bwe: igmp bandwidth enforcement
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp bandwidth enforcement.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp bandwidth enforcement.
 */
int igmp_set_bwe(int port,unsigned char bwe);


/**
 * \brief This function is used to get igmp bandwidth exceeded counter.
 *
 * This function is used to get igmp bandwidth exceeded counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp bandwidth exceeded counter.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp bandwidth exceeded counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp bandwidth exceeded counter.
 */
int igmp_get_counter_bw_exceeded(int port);


/**
 * \brief This function is used to get igmp current mcast bandwidth.
 *
 * This function is used to get igmp current mcast bandwidth. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp current mcast bandwidth.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp current mcast bandwidth.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp current mcast bandwidth.
 */
int igmp_get_counter_curr_mcast_bw(int port);


/**
 * \brief This function is used to get igmp join messages counter.
 *
 * This function is used to get igmp join messages counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp join messages counter.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp join messages counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp join messages counter.
 */
int igmp_get_counter_join_msg(int port);


/**
 * \brief This function is used to get igmp user subscribe counter.
 *
 * This function is used to get igmp user subscribe counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp user subscribe counter.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp user subscribe counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp user subscribe counter.
 */
int igmp_get_user_subscribe_cnt(int port);


/**
 * \brief This function is used to get igmp user subscribe by index.
 *
 * This function is used to get igmp user subscribe by index. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: index id
 * \param[out]  src_ip: src ip
 * \param[out]  program_ip: program ip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp user subscribe by index.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp user subscribe by index.
 */
int igmp_get_user_subscribe_by_index(int port, int index, char * src_ip, char * program_ip);


/**
 * \brief This function is used to set igmp downstream mcast bandwidth rate limit ctrl.
 *
 * This function is used to set igmp downstream mcast bandwidth rate limit ctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  val: 0: Disable   1:Enable
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp downstream mcast bandwidth rate limit ctrl.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp downstream mcast bandwidth rate limit ctrl.
 */
int igmp_set_xpon_ds_bw_ctrl(int val);



/**
 * \brief This function is used to get igmp tagstrip.
 *
 * This function is used to get igmp tagstrip. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp tagstrip.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp mtagstrip.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp tagstrip.
 */ 
int igmp_get_tagstrip(int port);


/**
 * \brief This function is used to set igmp tagstrip.
 *
 * This function is used to set igmp tagstrip. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  mode: igmp tagstrip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp tagstrip.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp tagstrip.
 */
int igmp_set_tagstrip(int port,int mode);


/**
 * \brief This function is used to get igmp fastleave ctc.
 *
 * This function is used to get igmp fastleave ctc. submit by Jun.Wu 2020.09.22
 * \param[in]  void: the port id is 1
 * \retval	  igmp fastleave ctc.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp fastleave ctc.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp fastleave ctc.
 */ 
int igmp_get_fastleave_ctc(void);


/**
 * \brief This function is used to set igmp fastleave ctc.
 *
 * This function is used to set igmp fastleave ctc. submit by Jun.Wu 2020.09.22
 * \param[in]  fastleave: igmp fastleave
 * \retval	  0	
 * \note
 *  Set igmp fastleave ctc.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp fastleave ctc.
 */
int igmp_set_fastleave_ctc(int fastleave);


/**
 * \brief This function is used to get igmp fastleave ability.
 *
 * This function is used to get igmp fastleave ability. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp fastleave ability.
 * \note
 *  Get igmp fastleave ability.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp fastleave ability.
 */
int igmp_get_fastleave_ability(void);


//hybridmode
int igmp_get_veip_acl(void);
int igmp_set_veip_acl(int veip_acl);
int igmp_get_emptry_dynlist_pass(void);
int igmp_set_emptry_dynlist_pass(int empty_dynlist_pass);

////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief This function is used to get igmp dynamic whitelist.
 *
 * This function is used to get igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  maxlen: max length
 * \param[out]  num: pointer to the type of int
 * \param[out]  val: pointer to the type of unsigned char
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp dynamic whitelist.
 */
int igmp_get_dyctrlist(int port, int maxlen, int*  num, unsigned char* val);


/**
 * \brief This function is used to set igmp dynamic whitelist.
 *
 * This function is used to set igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  ptr: pointer to the void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp dynamic whitelist.
 */
int igmp_set_dyctrlist(int port, void*  ptr);


/**
 * \brief This function is used to delete igmp dynamic whitelist.
 *
 * This function is used to delete igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: index id
 * \retval	  0	
 * \note
 *  Delete igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp dynamic whitelist.
 */
int igmp_del_dyctrlist(int port, int index);


/**
 * \brief This function is used to clear igmp dynamic whitelist.
 *
 * This function is used to clear igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	
 * \note
 *  Clear igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp dynamic whitelist.
 */
int igmp_clear_dyctrlist(int port);


/**
 * \brief This function is used to get igmp static whitelist.
 *
 * This function is used to get igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  maxlen: max length
 * \param[out]  num: pointer to the type of int
 * \param[out]  val: pointer to the type of unsigned char
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp static whitelist.
 */
int igmp_get_staticlist(int port, int maxlen, int*  num, unsigned char* val);


/**
 * \brief This function is used to set igmp static whitelist.
 *
 * This function is used to set igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  ptr: pointer to the void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp static whitelist.
 */
int igmp_set_staticlist(int port, void* ptr);


/**
 * \brief This function is used to delete igmp static whitelist.
 *
 * This function is used to delete igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: index id
 * \retval	  0	
 * \note
 *  Delete igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp static whitelist.
 */
int igmp_del_staticlist(int port, int index);


/**
 * \brief This function is used to clear igmp static whitelist.
 *
 * This function is used to clear igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	
 * \note
 *  Clear igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp static whitelist.
 */
int igmp_clear_staticlist(int port);

/////////////////////////////////////////////////////////////////////////////////////////////
/**
 * \brief This function is used to add igmp port vlan.
 *
 * This function is used to add igmp port vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  vid: vlan id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add igmp port vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Add igmp port vlan.
 */
int igmp_add_portvlan(int port,int vid);


/**
 * \brief This function is used to delete igmp port vlan.
 *
 * This function is used to delete igmp port vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  vid: vlan id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete igmp port vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp port vlan.
 */
int igmp_del_portvlan(int port,int vid);


/**
 * \brief This function is used to clear igmp port vlan.
 *
 * This function is used to clear igmp port vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp port vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp port vlan.
 */
int igmp_clear_portvlan(int port);


/**
 * \brief This function is used to get igmp port vlan counter.
 *
 * This function is used to get igmp port vlan counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp port vlan counter.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp port vlan counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp port vlan counter.
 */
int igmp_get_portvlan_cnt(int port);


/**
 * \brief This function is used to get igmp port vlan id.
 *
 * This function is used to get igmp port vlan id. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  idx:  index id	
 * \param[out]  vid: vlan id
 * \param[out]  newid: new vlan id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp port vlan id.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp port vlan id.
 */
int igmp_get_portvlan_id(int port,int idx,int* vid,int* newid);


/**
 * \brief This function is used to set igmp port vlan switch vlan id.
 *
 * This function is used to set igmp port vlan switch vlan id. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  vid:  vlan id	
 * \param[in]  newvid: new vlan id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp port vlan switch vlan id.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp port vlan switch vlan id.
 */
int igmp_set_portvlan_switchid(int port,int vid,int newvid);


/**
 * \brief This function is used to get igmp port vlan switch vlan counter.
 *
 * This function is used to get igmp port vlan switch vlan counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  port vlan switch vlan counter.
 * \note
 *  Get igmp port vlan switch vlan counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp port vlan switch vlan counter.
 */
int igmp_get_portvlan_switchcnt(int port);


/**
 * \brief This function is used to get igmp port vlan switch vlan id.
 *
 * This function is used to get igmp port vlan switch vlan id. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[out]  vid:  pointer to the type of int	
 * \param[out]  newid: pointer to the type of int
 * \retval	  0
 * \note
 *  Get igmp port vlan switch vlan id.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp port vlan switch vlan id.
 */
int igmp_get_portvlan_switchid(int port,int idx,int* vid,int* newid);


/**
 * \brief This function is used to set igmp port vlan flag.
 *
 * This function is used to set igmp port vlan flag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  vflag:  vlan flag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp port vlan flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp port vlan flag.
 */
int igmp_set_portvlan_flag(int port,int vflag);


////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief This function is used to get igmp foward mode.
 *
 * This function is used to get igmp foward mode. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  foward mode.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp foward mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp foward mode.
 */
int igmp_get_fwdmode(void);


/**
 * \brief This function is used to set igmp foward mode.
 *
 * This function is used to set igmp foward mode. submit by Jun.Wu 2020.09.22
 * \param[in]  mode: mode
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp foward mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp foward mode.
 */
int igmp_set_fwdmode(int mode);


/**
 * \brief This function is used to add igmp foward entry.
 *
 * This function is used to add igmp foward entry. submit by Jun.Wu 2020.09.22
 * \param[in]  type: type
 * \param[in]  port: port id
 * \param[in]  vid:  vlan id
 * \param[in]  grp_addr: pointer to the unsigned char type
 * \param[in]  src_ip: pointer to the unsigned char type
 * \retval	  0	Success.
 * \retval	 -1	Fail.	
 * \note
 *  Add igmp foward entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  Add igmp foward entry.
 */
int igmp_add_fwdentry(int type,int port,int vid, unsigned char* grp_addr,unsigned char* src_ip);


/**
 * \brief This function is used to delete igmp foward entry.
 *
 * This function is used to delete igmp foward entry. submit by Jun.Wu 2020.09.22
 * \param[in]  type: type
 * \param[in]  port: port id
 * \param[in]  vid:  vlan id
 * \param[in]  grp_addr: pointer to the unsigned char type
 * \param[in]  src_ip: pointer to the unsigned char type
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete igmp foward entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp foward entry.
 */
int igmp_del_fwdentry(int type,int port,int vid, unsigned char* grp_addr,unsigned char* src_ip);


/**
 * \brief This function is used to get igmp foward entry counter.
 *
 * This function is used to get igmp foward entry counter. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp foward entry counter.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp foward entry counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp foward entry counter.
 */ 
int igmp_get_fwdentry_cnt(void);


/**
 * \brief This function is used to clear igmp foward entry.
 *
 * This function is used to clear igmp foward entry. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0 Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp foward entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp foward entry.
 */ 
int igmp_clear_fwdentry(void);

int igmp_clear_fwdentry_by_type(int type);

/**
 * \brief This function is used to get igmp foward entry.
 *
 * This function is used to get igmp foward entry. submit by Jun.Wu 2020.09.22
 * \param[in]  idx: index
 * \param[out]  type: the address of entry type
 * \param[out]  port: the address of entry port id
 * \param[out]  vid: the address of entry vlan id
 * \param[out]  grp_addr: pointer to the unsigned char type
 * \param[out]  src_ip: pointer to the unsigned char type
 * \param[out]  client_ip: pointer to the unsigned char type
 * \param[out]  join_time_sec: the address of entry join time
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp foward entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp foward entry.
 */ 
int igmp_get_fwdentry(int idx,int* type,int* port,int* vid, unsigned char* grp_addr,unsigned char* src_ip,unsigned char* client_ip,int* join_time_sec);


/**
 * \brief This function is used to get igmp foward entry ext.
 *
 * This function is used to get igmp foward entry ext. submit by Jun.Wu 2020.09.22
 * \param[in]  idx: index
 * \param[out]  type: the address of entry type
 * \param[out]  port: the address of entry port id
 * \param[out]  vid: the address of entry vlan id
 * \param[out]  grp_addr: pointer to the unsigned char type
 * \param[out]  src_ip: pointer to the unsigned char type
 * \param[out]  flag: pointer to the int
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp foward entry ext.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp foward entry ext.
 */ 
int igmp_get_fwdentry_ext(int idx,int* type,int* port,int* vid,int *ruleType, unsigned char* grp_addr,unsigned char* src_ip,int* flag);

/////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * \brief This function is used to add igmp multicast vlan.
 *
 * This function is used to add igmp multicast vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add igmp multicast vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Add igmp multicast vlan.
 */
int igmp_add_mulvlan(int vid);


/**
 * \brief This function is used to delete igmp multicast vlan.
 *
 * This function is used to delete igmp multicast vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete igmp multicast vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp multicast vlan.
 */
int igmp_del_mulvlan(int vid);


/**
 * \brief This function is used to clear igmp multicast vlan.
 *
 * This function is used to clear igmp multicast vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp multicast vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp multicast vlan.
 */
int igmp_clear_mulvlan(void);


/**
 * \brief This function is used to get igmp multicast vlan counter.
 *
 * This function is used to get igmp multicast vlan counter. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp multicast vlan counter.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp multicast vlan counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp multicast vlan counter.
 */
int igmp_get_mulvlan_cnt(void);


/**
 * \brief This function is used to set igmp multicast vlan flag.
 *
 * This function is used to set igmp multicast vlan flag. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \param[in]  flag: flag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp multicast vlan flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp multicast vlan flag.
 */
int igmp_se_mulvlan_flag(int vid,int flag);
	

/**
 * \brief This function is used to get igmp multicast vlan flag.
 *
 * This function is used to get igmp multicast vlan flag. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \retval	  igmp multicast vlan flag.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp multicast vlan flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp multicast vlan flag.
 */
int igmp_ge_mulvlan_flag(int vid);
	

/**
 * \brief This function is used to get igmp multicast vlan id.
 *
 * This function is used to get igmp multicast vlan id. submit by Jun.Wu 2020.09.22
 * \param[in]  idx: index
 * \retval	  igmp multicast vlan id.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp multicast vlan id.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp multicast vlan fidlag.
 */
int igmp_get_mulvlan_id(int idx);

///////////////////////////////////////////////////////////////////////////////////////////////////
/**
 * \brief This function is used to set igmp epon mode.
 *
 * This function is used to set igmp epon mode. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp epon mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp epon mode.
 */
int igmp_set_epon_mode(void); 


/**
 * \brief This function is used to set igmp xpon mode.
 *
 * This function is used to set igmp xpon mode. submit by Jun.Wu 2020.09.22
 * \param[in]  mode: mode
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp xpon mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp xpon mode.
 */
int igmp_set_xpon_mode(int mode);


/**
 * \brief This function is used to get igmp onu type.
 *
 * This function is used to get igmp onu type. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp onu type.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp onu type.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp onu type.
 */
int igmp_get_onu_type(void);


/**
 * \brief This function is used to set igmp xpon debug.
 *
 * This function is used to set igmp xpon debug. submit by Jun.Wu 2020.09.22
 * \param[in]  val: debug level
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp xpon debug.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp xpon debug.
 */
int igmp_set_xpon_debug(int val);

/**
 * \brief This function is used to show igmp hw entry.
 *
 * This function is used to show igmp hw entry. submit by Yucheng.Yin 2022.05.01
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  show igmp hw entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  show igmp hw entry.
 */
int igmp_show_hw_entry(void);

/**
 * \brief This function is used to clear igmp hw entry.
 *
 * This function is used to clear igmp hw entry. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp hw entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp hw entry.
 */
int igmp_clear_hw_entry(void);


/**
 * \brief This function is used to clear igmp hw drop entry.
 *
 * This function is used to clear igmp hw drop entry. submit by Jun.Wu 2020.09.22
 * \param[in]  grp_ip: group ip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp hw drop entry.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp hw drop entry.
 */
int igmp_clear_hw_drop_entry(unsigned int grp_ip);


/**
 * \brief This function is used to set igmp care version dynamic static list.
 *
 * This function is used to set igmp care version dynamic static list. submit by Jun.Wu 2020.09.22
 * \param[in]  val: val
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp care version dynamic static list.
 * \par Example
 * \snippet lib_xpon_igmp.c   Set igmp care version dynamic static list.
 */
int igmp_set_care_ver_dy_stalist(int val);


/**
 * \brief This function is used to set igmp clear all.
 *
 * This function is used to set igmp clear all. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp clear all.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp clear all.
 */
int igmp_set_clear_all(void);


/**
 * \brief This function is used to set igmp onu gpon mode.
 *
 * This function is used to set igmp onu gpon mode. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp onu gpon mode.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp onu gpon mode.
 */
int igmpONUSetGponMode(void);


/**
 * \brief This function is used to set igmp version.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp version. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  ver: igmp version
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp version.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp version.
 */
int igmpONUSetVer (uint16_t port,uint8_t ver);


/**
 * \brief This function is used to set igmp work mode.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp work mode. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  func: igmp work mode
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp work mode.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp work mode.
 */
int igmpONUSetFunc(uint16_t port,uint8_t func);


/**
 * \brief This function is used to set igmp fastleave.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp fastleave. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  fast: igmp fastleave
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp fastleave.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp fastleave.
 */
int igmpONUSetFastLeave(uint16_t port,uint8_t fast);


/**
 * \brief This function is used to set igmp upstream tci.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp upstream tci. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  tci: igmp upstream tci
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp upstream tci.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp upstream tci.
 */
int igmpONUSetUpstreamTCI(uint16_t port,uint16_t tci);


/**
 * \brief This function is used to set igmp upstream tagctrl.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp upstream tagctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  mode: igmp upstream tagctrl
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp upstream tagctrl.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp upstream tagctrl.
 */
int igmpONUSetTagCtrl (uint16_t port,uint8_t tag);


/**
 * \brief This function is used to clear igmp maxrate.
 *         This function is provide to omci for use.
 *
 * This function is used to clear igmp maxrate. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp maxrate.
 * \par Example
 * \snippet xpon_igmp_omci.c  Clear igmp maxrate.
 */
int igmpONUClearMaxRate(uint16_t port);


/**
 * \brief This function is used to set igmp maxrate.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp maxrate. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rate: igmp maxrate
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp maxrate.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp maxrate.
 */
int igmpONUSetMaxRate (uint16_t port,uint32_t rate);


/**
 * \brief This function is used to set igmp dynamic whitelist.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rulePtr: pointer to the struct type of igmpRuleInfo_t
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp dynamic whitelist.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp dynamic whitelist.
 */
int igmpONUSetDyCtrList(uint16_t port, igmpRuleInfo_t* rulePtr);


/**
 * \brief This function is used to delete igmp dynamic whitelist.
 *         This function is provide to omci for use.
 *
 * This function is used to delete igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rowKey: index id
 * \retval	  0	
 * \note
 *  Delete igmp dynamic whitelist.
 * \par Example
 * \snippet xpon_igmp_omci.c  Delete igmp dynamic whitelist.
 */
int igmpONUDelDyCtrList(uint16_t port, uint16_t rowKey);


/**
 * \brief This function is used to clear igmp dynamic whitelist.
 *         This function is provide to omci for use.
 *
 * This function is used to clear igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	
 * \note
 *  Clear igmp dynamic whitelist.
 * \par Example
 * \snippet xpon_igmp_omci.c  Clear igmp dynamic whitelist.
 */
int igmpONUClearDyCtrList(uint16_t port);


/**
 * \brief This function is used to set igmp static whitelist.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rulePtr: pointer to the struct type of igmpRuleInfo_t
 * \retval	  0/1	
 * \note
 *  Set igmp static whitelist.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp static whitelist.
 */
int igmpONUSetStaticCtrList(uint16_t port, igmpRuleInfo_t* rulePtr);


/**
 * \brief This function is used to delete igmp static whitelist.
 *         This function is provide to omci for use.
 *
 * This function is used to delete igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rowKey: index id
 * \retval	  0	
 * \note
 *  Delete igmp static whitelist.
 * \par Example
 * \snippet xpon_igmp_omci.c  Delete igmp static whitelist.
 */
int igmpONUDelStaticCtrList(uint16_t port, uint16_t rowKey);


/**
 * \brief This function is used to clear igmp static whitelist.
 *         This function is provide to omci for use.
 *
 * This function is used to clear igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	
 * \note
 *  Clear igmp static whitelist.
 * \par Example
 * \snippet xpon_igmp_omci.c  Clear igmp static whitelist.
 */
int igmpONUClearStaticCtrList(uint16_t port);


/**
 * \brief This function is used to set igmp robust.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp robust. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  robust: igmp robust
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp robust.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp robust.
 */
int igmpONUSetRobustness(uint16_t port,uint8_t robust);


/**
 * \brief This function is used to set igmp query ip.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp query ip. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  ip: the address of query ip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp query ip.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp query ip.
 */
int igmpONUSetQueryIp(uint16_t port,uint8_t* ip);


/**
 * \brief This function is used to set igmp query interval.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp query interval. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  interval: igmp query interval
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp query interval.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp query interval.
 */
int igmpONUSetQueryInterval(uint16_t port,uint32_t interval);


/**
 * \brief This function is used to set igmp query maxresp.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp query maxresp. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  respTime: igmp query maxresp
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp query maxresp.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp query maxresp.
 */
int igmpONUSetQueryMaxRespTime(uint16_t port,uint32_t respTime);


/**
 * \brief This function is used to set igmp last interval.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp last interval. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  interval: igmp last interval
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp last interval.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp last interval.
 */
int igmpONUSetLastQueryInterval(uint16_t port,uint32_t interval);


/**
 * \brief This function is used to set igmp unauthor.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp unauthor. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  unauthor: igmp unauthor
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp unauthor.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp unauthor.
 */
int igmpONUSetUnauthorized(uint16_t port,uint8_t author);


/**
 * \brief This function is used to set igmp downstream tci and tagctrl.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp downstream tci and tagctrl. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  tci: igmp downstream tci
 * \param[in]  type: igmp downstream tagctrl
 * \retval	  0	
 * \note
 *  Set igmp downstream tci and tagctrl.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp downstream tci and tagctrl.
 */
int igmpONUSetDownTCIType(uint16_t port, uint8_t type,uint16_t tci);


/**
 * \brief This function is used to set igmp max playgroup.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp max playgroup. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  num: igmp max playgroup
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp max playgroup.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp max playgroup.
 */
int igmpONUSetMaxPlayNum(uint16_t port,uint16_t num);


/**
 * \brief This function is used to set igmp max bandwidth.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp max bandwidth. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  bw: igmp max bandwidth
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp max bandwidth.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp max bandwidth.
 */
int igmpONUSetMaxBW(uint16_t port,uint32_t bw);


/**
 * \brief This function is used to set igmp bandwidth enforcement.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp bandwidth enforcement. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  bwe: igmp bandwidth enforcement
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp bandwidth enforcement.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp bandwidth enforcement.
 */
int igmpONUSetMaxEnforcement(uint16_t port,uint8_t bwe);


/**
 * \brief This function is used to get igmp current mcast bandwidth.
 *         This function is provide to omci for use.
 *
 * This function is used to get igmp current mcast bandwidth. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[out]  cmbw: the address of current mcast bandwidth
 * \retval	  0
 * \note
 *  Get igmp current mcast bandwidth.
 * \par Example
 * \snippet xpon_igmp_omci.c  Get igmp current mcast bandwidth.
 */
int igmpOnuGetCurrMultiBW(int port,uint32_t* cmbw);


/**
 * \brief This function is used to get igmp join messages counter.
 *         This function is provide to omci for use.
 *
 * This function is used to get igmp join messages counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[out]  joinNum: the address of join messages counter
 * \retval	  0
 * \note
 *  Get igmp join messages counter.
 * \par Example
 * \snippet xpon_igmp_omci.c  Get igmp join messages counter.
 */
int igmpOnuGetJoinMessCounter(int port,uint32_t* joinNum);


/**
 * \brief This function is used to get igmp bandwidth exceeded counter.
 *         This function is provide to omci for use.
 *
 * This function is used to get igmp bandwidth exceeded counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[out]  bwexNum: the address of bandwidth exceeded counter
 * \retval	  0
 * \note
 *  Get igmp bandwidth exceeded counter.
 * \par Example
 * \snippet xpon_igmp_omci.c  Get igmp bandwidth exceeded counter.
 */
int igmpOnuGetBWExceCounter(int port,uint32_t* bwexNum);


/**
 * \brief This function is used to get igmp foward entry.
 *         This function is provide to omci for use.
 *
 * This function is used to get igmp foward entry. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  protocol
 * \param[in]  maxlen
 * \param[in]  type
 * \param[out]  ruleNum: the address of rule num
 * \param[out]  rulePtr: pointer to the struct type of igmpActiveGroupInfo_t
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp foward entry.
 * \par Example
 * \snippet xpon_igmp_omci.c  Get igmp foward entry.
 */ 
int igmpONUGetActiveGroupList(uint16_t port,uint8_t protocol,uint16_t maxlen,uint8_t type,uint8_t *ruleNum,igmpActiveGroupInfo_t* rulePtr );


/**
 * \brief This function is used to set igmp clear all.
 *         This function is provide to omci for use.
 *
 * This function is used to set igmp clear all. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp clear all.
 * \par Example
 * \snippet xpon_igmp_omci.c  Set igmp clear all.
 */
int igmpONUClearAll(void);


/**
 * \brief This function is used to set igmp port flag.
 *
 * This function is used to set igmp port flag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  flag: flag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp port flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp port flag.
 */
int igmp_set_port_flag(int port,int flag);


/**
 * \brief This function is used to get igmp port flag.
 *
 * This function is used to get igmp port flag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  igmp port flag.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp port flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp port flag.
 */
int igmp_get_port_flag(int port);


/**
 * \brief This function is used to get igmp flag.
 *
 * This function is used to get igmp flag. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp flag.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp flag.
 */
int igmp_get_igmp_flag(void);


/**
 * \brief This function is used to set igmp flag.
 *
 * This function is used to set igmp flag. submit by Jun.Wu 2020.09.22
 * \param[in]  flag: flag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp flag.
 */
int igmp_set_igmp_flag(int flag);


/**
 * \brief This function is used to get igmp xpon mode.
 *
 * This function is used to get igmp xpon mode. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp xpon mode.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp xpon mode.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp xpon mode.
 */
int igmp_get_xpon_mode(void);


/**
 * \brief This function is used to add igmp dynamic whitelist.
 *
 * This function is used to add igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  rule: pointer to the struct type of igmpRuleInfo_t
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Add igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Add igmp dynamic whitelist.
 */
int igmp_add_dyn_whitelist(int port,igmpRuleInfo_t* rule);


/**
 * \brief This function is used to delete igmp dynamic whitelist.
 *
 * This function is used to delete igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: index id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Delete igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp dynamic whitelist.
 */
int igmp_del_dyn_whitelist(int port,int index);


/**
 * \brief This function is used to clear igmp dynamic whitelist.
 *
 * This function is used to clear igmp dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp dynamic whitelist.
 */
int igmp_clear_dyn_whitelist(int port);


/**
 * \brief This function is used to get dynamic whitelist counter.
 *
 * This function is used to get dynamic whitelist counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  dynamic whitelist counter.
 * \retval	 -1	Fail.
 * \note
 *  Get dynamic whitelist counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get dynamic whitelist counter.
 */ 
int igmp_get_dyn_whitelist_cnt(int port);


/**
 * \brief This function is used to get dynamic whitelist.
 *
 * This function is used to get dynamic whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  idx: index id
 * \param[out]  rule: pointer to the struct type of igmpRuleInfo_t
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get dynamic whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get dynamic whitelist.
 */ 
int igmp_get_dyn_whitelist(int port,int idx,igmpRuleInfo_t* rule);


/**
 * \brief This function is used to add igmp static whitelist.
 *
 * This function is used to add igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: index id
 * \param[in]  type:  type
 * \param[in]  gem: gem id
 * \param[in]  vid: vlan id
 * \param[in]  band: bandwidth
 * \param[in]  srcip: pointer to the unsigned char type
 * \param[in]  endip: pointer to the unsigned char type
 * \retval	  0	Success.
 * \retval	 -1	Fail.	
 * \note
 *  Add igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Add igmp static whitelist.
 */
int igmp_add_sta_whitelist(int port,int index,int type,int gem,int vid,int band,unsigned char* srcip,unsigned char* startip,unsigned char* endip);


/**
 * \brief This function is used to delete igmp static whitelist.
 *
 * This function is used to delete igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  index: index id
 * \retval	  0	Success.
 * \retval	 -1	Fail.	
 * \note
 *  Delete igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Delete igmp static whitelist.
 */
int igmp_del_sta_whitelist(int port,int index);


/**
 * \brief This function is used to clear igmp static whitelist.
 *
 * This function is used to clear igmp static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  0	Success.
 * \retval	 -1	Fail.		
 * \note
 *  Clear igmp static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp static whitelist.
 */
int igmp_clear_sta_whitelist(int port);


/**
 * \brief This function is used to get static whitelist counter.
 *
 * This function is used to get static whitelist counter. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  static whitelist counter.
 * \retval	 -1	Fail.
 * \note
 *  Get static whitelist counter.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get static whitelist counter.
 */ 
int igmp_get_sta_whitelist_cnt(int port);


/**
 * \brief This function is used to get static whitelist.
 *
 * This function is used to get static whitelist. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \param[in]  idx: index id
 * \param[out]  index: index id
 * \param[out]  type: type
 * \param[out]  gem: gem id
 * \param[out]  vid: vlan id
 * \param[out]  band: band
 * \param[out]  srcip: source ip
 * \param[out]  startip: start ip
 * \param[out]  endip: end ip
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get static whitelist.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get static whitelist.
 */ 
int igmp_get_sta_whitelist(int port,int idx,int* index,int* type,int* gem,int* vid,int* band,unsigned char* srcip,unsigned char* startip,unsigned char* endip);


/**
 * \brief This function is used to get igmp port vlan flag.
 *
 * This function is used to get igmp port vlan flag. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	  port vlan flag.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp port vlan flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp port vlan flag.
 */
int igmp_ge_portvlan_flag(int port);


/**
 * \brief This function is used to clear igmp onu multicast vlan.
 *
 * This function is used to clear igmp onu multicast vlan. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Clear igmp onu multicast vlan.
 * \par Example
 * \snippet lib_xpon_igmp.c  Clear igmp onu multicast vlan.
 */
int igmpONU_ClearMulVLan(void);


/**
 * \brief This function is used to get igmp multicast vlan flag.
 *
 * This function is used to get igmp multicast vlan flag. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \retval	  igmp multicast vlan flag.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp multicast vlan flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp multicast vlan flag.
 */
int igmp_get_mulvlan_flag(int vid);


/**
 * \brief This function is used to set igmp multicast vlan flag.
 *
 * This function is used to set igmp multicast vlan flag. submit by Jun.Wu 2020.09.22
 * \param[in]  vid: vlan id
 * \param[in]  flag: flag
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp multicast vlan flag.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp multicast vlan flag.
 */
int igmp_set_mulvlan_flag(int vid,int flag);


/**
 * \brief This function is used to get igmp xpon group number.
 *
 * This function is used to get igmp xpon group number. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  igmp xpon group number.
 * \retval	 -1	Fail.
 * \note
 *  Get igmp xpon group number.
 * \par Example
 * \snippet lib_xpon_igmp.c  Get igmp xpon group number.
 */
int igmp_get_xpon_groupNum(void);


/**
 * \brief This function is used to set igmp xpon group number.
 *
 * This function is used to set igmp xpon group number. submit by Jun.Wu 2020.09.22
 * \param[in]  num: group number
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set igmp xpon group number.
 * \par Example
 * \snippet lib_xpon_igmp.c  Set igmp xpon group number.
 */
int igmp_set_xpon_groupNum(int num);

/**
 * \brief This function is used to set last query cnt.
 *
 * This function is used to set last query cnt. 
 * \param[in]  cnt
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set last query cnt.
 * \par Example
 * \snippet lib_xpon_igmp.c Set last query cnt.
 */
int igmp_set_last_query_cnt(int cnt);

/**
 * \brief This function is used to get last query cnt.
 *
 * This function is used to get last query cnt. 
 * \param[in]  void
 * \retval	  cnt
 * \retval	 -1	Fail.
 * \note
 *  Get last query cnt.
 * \par Example
 * \snippet lib_xpon_igmp.c Get last query cnt.
 */
int igmp_get_last_query_cnt(void);

/**
 * \brief This function is used to get igmp group.
 *
 * This function is used to get igmp group. 
 * \param[in]  OutFwdtbl
 * \retval	  OutFwdtbl
 * \retval	 -1	Fail.
 * \note
 *  Get igmp group
 * \par Example
 * \snippet lib_xpon_igmp.c Get igmp group.
 */
int igmp_get_igmp_group(struct out_fwdtbl_s OutFwdtbl[]);


#endif
