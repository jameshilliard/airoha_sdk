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
	lib_pon_mac_filter.h

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	Reid.Ma		2013/2/4	Create
*/


#ifndef _LIB_PON_MAC_FILTER_H
#define _LIB_PON_MAC_FILTER_H

/**
* \file  lib_pon_mac_filter.h
* \brief This file is lib pon mac filter header file that will be exported for others to use.
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
#include "xpon_mac_filter_public.h"

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/

/************************************************************************
*		   D A T A	 T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A	 D E C L A R A T I O N S
*************************************************************************
*/

typedef struct pon_mac_action_info_s{
    uint8_t action;
    uint8_t port;
    uint8_t type;
    uint8_t dir;
    uint8_t index;
}pon_mac_action_info_t;

/************************************************************************
*				F U N C T I O N   D E C L A R A T I O N S
				I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/

/**
 * \brief This function is used to add pon mac filter rule.
 *
 * This function is used to add pon mac filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  ifindex: port id
 * \param[in]  type: 0->9.3.6  1->9.3.7
 * \param[in]  rule: pointer to the struct type of pon_mac_filter_rule
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Add pon mac filter rule.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Add pon mac filter rule.
 */
int pon_add_mac_filter_rule(uint8_t ifindex,uint8_t type,pon_mac_filter_rule * rule);//type: 0->9.3.6  1->9.3.7


/**
 * \brief This function is used to get pon mac filter rule.
 *
 * This function is used to get pon mac filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  ifindex: port id
 * \param[in]  type: 0->9.3.6  1->9.3.7
 * \param[out]  rule: pointer to the struct type of pon_mac_filter_rule
 * \retval	  rule counter.
 * \retval	  -1 Fail.
 * \note
 *  Get pon mac filter rule.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Get pon mac filter rule.
 */
int pon_get_mac_filter_rule(uint8_t ifindex,uint8_t type,pon_mac_filter_rule * rule);


/**
 * \brief This function is used to delete pon mac filter rule.
 *
 * This function is used to delete pon mac filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  ifindex: port id
 * \param[in]  type: 0->9.3.6  1->9.3.7
 * \param[in]  index: index id
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Delete pon mac filter rule.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Delete pon mac filter rule.
 */
int pon_del_mac_filter_rule(uint8_t ifindex, uint8_t type,uint8_t index);


/**
 * \brief This function is used to clean pon mac filter rule.
 *
 * This function is used to clean pon mac filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  ifindex: port id
 * \param[in]  type: 0->9.3.6  1->9.3.7
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Clean pon mac filter rule.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Clean pon mac filter rule.
 */
int pon_clean_mac_filter_rule(uint8_t ifindex,uint8_t type);


/**
 * \brief This function is used to clean all pon mac filter rule.
 *
 * This function is used to clean all pon mac filter rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Clean all pon mac filter rule.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Clean all pon mac filter rule.
 */
int pon_clean_all_mac_filter_rule(void);


/**
 * \brief This function is used to set pon mac filter debug level.
 *
 * This function is used to set pon mac filter debug level. submit by Jun.Wu 2020.09.22
 * \param[in]  level: debug level
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Set pon mac filter debug level.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Set pon mac filter debug level.
 */
int pon_mac_filter_set_debug_level(int level);


/**
 * \brief This function is used to set pon mac filter switch flag.
 *
 * This function is used to set pon mac filter switch flag. submit by Jun.Wu 2020.09.22
 * \param[in]  switchFlag: Pon mac filter switch flag.  0:disable 1:enable
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Set pon mac filter switch flag.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Set pon mac filter switch flag.
 */
int pon_set_mac_filter_switch(int switchFlag);


/**
 * \brief This function is pon mac filter genenal action.
 *
 * This function is pon mac filter genenal action. submit by Jun.Wu 2020.09.22
 * \param[in]  actionInfo: the struct type of pon_mac_action_info_t
 * \param[in]  rule: pointer to the struct type of pon_mac_filter_rule
 * \retval	  0
 * \retval	  -1 Fail.
 * \note
 *  Pon mac filter genenal action.
 * \par Example
 * \snippet lib_pon_mac_filter.c  Pon mac filter genenal action.
 */
int pon_action_mac_filter_genenal_func(pon_mac_action_info_t actionInfo, pon_mac_filter_rule * rule);


#endif

