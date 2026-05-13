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
	libgponmap.h

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	andy.Yi		2012/7/20	Create
*/
#ifndef _LIBGPONMAP_H_
#define _LIBGPONMAP_H_

/**
* \file  libgponmap.h
* \brief This file is lib gponmap header file that will be exported for others to use.
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
#include "xpon_map_public.h"

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/
#define DISABLE 0
#define ENABLE 1
#define DS_TRTCM_ENABLE 2

/*
**********************************************************************************
GEM port to priority queue mapping entry ioctl data structure.
**********************************************************************************
*/
#define TRAFFIC_SCHEDULER_SPECIFIC_QUEUE_MODE 	0
#define TRAFFIC_SCHEDULER_MULTI_QUEUE_MODE 		1    
#define GEM_TYPE_UNICAST						0
#define GEM_TYPE_MULTICAST						1

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

/* -----------------------------OUT Interfaces----------------------------- */
int setPortMapInfo(int port_num, uni_port_info_t *port_map);


/**
 * \brief This function is used to add gemport mapping rule.
 *
 * This function is used to add gemport mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  tableEntry: pointer to the struct type of gemPortMappingIoctl_t
 * \retval	  0	Success.
 * \note
 *  Add gemport mapping rule.
 * \par Example
 * \snippet libgponmap.c  Add gemport mapping rule.
 */
int addGemPortMappingRule(gemPortMappingIoctl_t *tableEntry);


/**
 * \brief This function is used to delete gemport mapping rule.
 *
 * This function is used to delete gemport mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  tableEntry: pointer to the struct type of gemPortMappingIoctl_t
 * \retval	  0	Success.
 * \note
 *  Delete gemport mapping rule.
 * \par Example
 * \snippet libgponmap.c  Delete gemport mapping rule.
 */
int delGemPortMappingRule(gemPortMappingIoctl_t *tableEntry);


/**
 * \brief This function is used to add queue mapping rule.
 *
 * This function is used to add queue mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  tableEntry: pointer to the struct type of gponQueueMappingIoctl_t
 * \retval	  0	Success.
 * \note
 *  Add queue mapping rule.
 * \par Example
 * \snippet libgponmap.c  Add queue mapping rule.
 */
int addQueueMappingRule(gponQueueMappingIoctl_t *tableEntry);


/**
 * \brief This function is used to delete queue mapping rule.
 *
 * This function is used to delete queue mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  tableEntry: pointer to the struct type of gponQueueMappingIoctl_t
 * \retval	  0	Success.
 * \note
 *  Delete queue mapping rule.
 * \par Example
 * \snippet libgponmap.c  Delete queue mapping rule.
 */
int delQueueMappingRule(gponQueueMappingIoctl_t *tableEntry);


/**
 * \brief This function is used to display all gemport mapping rule.
 *
 * This function is used to display all gemport mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \note
 *  Display all gemport mapping rule.
 * \par Example
 * \snippet libgponmap.c  Display all gemport mapping rule.
 */
int displayAllGemPortMappingRule(void);


/**
 * \brief This function is used to display all queue mapping rule.
 *
 * This function is used to display all queue mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \note
 *  Display all queue mapping rule.
 * \par Example
 * \snippet libgponmap.c  Display all queue mapping rule.
 */
int displayAllQueueMappingRule(void);


/**
 * \brief This function is used to get queue mapping rule by gemId.
 *
 * This function is used to get queue mapping rule. submit by Yucheng.Yin 2021.03.10
 * \param[in]  tableEntry: pointer to the struct type of gponQueueMappingIoctl_t
 * \retval	  0	Success.
 * \note
 * get one queue mapping rule according to gem port.
 * \par Example
 * \snippet libgponmap.c  get queue mapping rule.
 */
int getQueueMappingRule(gponQueueMappingIoctl_t *tableEntry);


/**
 * \brief This function is used to reconfig queue mapping rule, update queue id.
 *
 * This function is used to get queue mapping rule. submit by Yucheng.Yin 2021.03.10
 * \param[in]  tableEntry: pointer to the struct type of gponQueueMappingIoctl_t
 * \retval	  0	Success.
 * \note
 * reconfigure one queue mapping rule , can modify queue id.
 * \par Example
 * \snippet libgponmap.c  reconfig queue mapping rule.
 */
int recfgQueueMappingRule(gponQueueMappingIoctl_t *tableEntry);


/**
 * \brief This function is used to enable downstream mapping.
 *
 * This function is used to display all queue mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  modeSwitch
 * \retval	  0	Success.
 * \note
 *  Enable downstream mapping.
 * \par Example
 * \snippet libgponmap.c   Enable downstream mapping.
 */
int enableDownMapping(uint8_t modeSwitch);
/**
 * \brief This function is used to disable down mapping.
 *
 * This function is used to display all queue mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \note
 *  Disable down mapping.
 * \par Example
 * \snippet libgponmap.c   Disable down mapping.
 */
int disableDownstreamMapping();


/**
 * \brief This function is used to add gemport downstream mapping rule.
 *
 * This function is used to add gemport downstream mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  data: the struct type of gpon_downstream_mapping_ioctl
 * \retval	  0	Success.
 * \note
 *  Add gemport downstream mapping rule.
 * \par Example
 * \snippet libgponmap.c  Add gemport downstream mapping rule.
 */
int addGemDownstreamMappingRule(gpon_downstream_mapping_ioctl data);


/**
 * \brief This function is used to delete gemport downstream mapping rule.
 *
 * This function is used to delete gemport downstream mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  gemport: gemport id
 * \retval	  0	Success.
 * \note
 *  Delete gemport downstream mapping rule.
 * \par Example
 * \snippet libgponmap.c  Delete gemport downstream mapping rule.
 */
int delGemDownstreamMappingRule(int gemport);

/**
 * \brief This function is used to clean gemport downstream mapping rule.
 *
 * This function is used to clean gemport downstream mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \note
 *  Clean gemport downstream mapping rule.
 * \par Example
 * \snippet libgponmap.c  Clean gemport downstream mapping rule.
 */
int cleanGemDownstreamMappingRule();


/**
 * \brief This function is used to show gemport downstream mapping rule.
 *
 * This function is used to show gemport downstream mapping rule. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  0	Success.
 * \note
 *  Show gemport downstream mapping rule.
 * \par Example
 * \snippet libgponmap.c  Show gemport downstream mapping rule.
 */
int showGemDownstreamMappingRule();

#endif
