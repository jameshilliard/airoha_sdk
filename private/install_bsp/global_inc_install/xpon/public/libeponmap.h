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
	libeponmap.h

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	Lightman		2012/7/20	Create
*/

#ifndef LIBPONQOS_H_
#define LIBPONQOS_H_

/**
* \file  libeponmap.h
* \brief This file is lib epon map header file that will be exported for others to use.
* \author jun.wu
* \date     2020-09-22
* \version  A001 
* \copyright EcoNet Inc                                                              
*/

/************************************************************************
*		   I N C L U D E S
*************************************************************************
*/
#include <sys/types.h>
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

/************************************************************************
*		   D A T A	 T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A	 D E C L A R A T I O N S
*************************************************************************
*/

/* -----------------------------OUT Interfaces----------------------------- */

/************************************************************************
*				F U N C T I O N   D E C L A R A T I O N S
				I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/
/**
 * \brief This function is used to set debug level.
 *
 * This function is used to set debug level. submit by Jun.Wu 2020.09.22
 * \param[in]  lvl: level
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set debug level.
 * \par Example
 * \snippet libeponmap.c  Set debug level.
 */
int eponmapSetDbgLevel(uint8_t lvl);

/**
 * \brief This function is used to set classify enable.
 *
 * This function is used to set classify enable. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port
 * \param[in]  enable: enable
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set classify enable.
 * \par Example
 * \snippet libeponmap.c  Set classify enable.
 */
int eponmapSetClsfyEnable(uint8_t port, int enable);

/**
 * \brief This function is used to set classify enable.
 *
 * This function is used to set classify enable. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port
 * \param[in]  enable: enable
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set classify enable.
 * \par Example
 * \snippet libeponmap.c  Set classify enable.
 */
int eponmapSetPortLlidMap(uint8_t enable, uint8_t port, uint32_t llid_mask, uint8_t default_llid);

/**
 * \brief This function is used to delete epon map classify rule.
 *
 * This function is used to delete epon map classify rule. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \param[in]  pResult: pointer to the struct type of qosResult_s
 * \param[in]  matchNum: match num
 * \param[in]  pRules: pointer to the struct type of qosMatchRule_s
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Delete epon map classify rule.
 * \par Example
 * \snippet libeponmap.c  Delete epon map classify rule.
 */
int eponmapDeleteClsfyRule(uint8_t portId, QosResult_Ptr pResult, uint8_t matchNum, QosMatchRule_Ptr pRules);


/**
 * \brief This function is used to insert epon map classify rule.
 *
 * This function is used to insert epon map classify rule. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \param[in]  pResult: pointer to the struct type of qosResult_s
 * \param[in]  matchNum: match num
 * \param[in]  pRules: pointer to the struct type of qosMatchRule_s
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Insert epon map classify rule.
 * \par Example
 * \snippet libeponmap.c  Insert epon map classify rule.
 */
int eponmapInsertClsfyRule(uint8_t portId, QosResult_Ptr pResult, uint8_t matchNum, QosMatchRule_Ptr pRules);


/**
 * \brief This function is used to get epon map classify rule.
 *
 * This function is used to get epon map classify rule. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \param[in]  index: index id
 * \param[out]  pResult: pointer to the struct type of qosResult_s
 * \param[out]  pmatchNum: pointer to the uint8_t type
 * \param[out]  pRules: pointer to the struct type of qosMatchRule_s
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon map classify rule.
 * \par Example
 * \snippet libeponmap.c  Get epon map classify rule.
 */
int eponmapGetClsfyRule(uint8_t portId, uint8_t index, QosResult_Ptr pResult, uint8_t *pmatchNum, QosMatchRule_Ptr pRules);


/**
 * \brief This function is used to get epon map classify rules num.
 *
 * This function is used to get epon map classify rules num. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \retval	   the port's classify rules num.
 * \retval	  -1 Fail.
 * \note
 *  Get epon map classify rules num.
 * \par Example
 * \snippet libeponmap.c  Get epon map classify rules num.
 */
int eponmapGetClsfyRulesNum(uint8_t portId);

/**
 * \brief This function is used to show epon map classify rules.
 *
 * This function is used to show epon map classify rules. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \retval	  void.
 * \note
 *  Show epon map classify rules.
 * \par Example
 * \snippet libeponmap.c  Show epon map classify rules.
 */
void eponmapShowClsfyRules(uint8_t portId);


/**
 * \brief This function is used to clear epon map classify rules.
 *
 * This function is used to clear epon map classify rules. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Clear epon map classify rules.
 * \par Example
 * \snippet libeponmap.c  Clear epon map classify rules.
 */
int eponmapClearClsfyRules(uint8_t portId);

/**
 * \brief This function is used to add epon map rules.
 *
 * This function is used to add epon map rule. submit by Jun.Wu 2020.09.22
 * \param[in]  data: pointer to the struct type of QosIOCtl_t
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Add epon map rules.
 * \par Example
 * \snippet libeponmap.c  Add epon map rules.
 */
int eponmapAddMapRule(QosIOCtl_t *data);

/**
 * \brief This function is used to detele epon map rules.
 *
 * This function is used to detele epon map rule. submit by Jun.Wu 2020.09.22
 * \param[in]  data: pointer to the struct type of QosIOCtl_t
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Detele epon map rules.
 * \par Example
 * \snippet libeponmap.c  Detele epon map rules.
 */
int eponmapDelMapRule(QosIOCtl_t *data);


/**
 * \brief This function is used to reset epon map.
 *
 * This function is used to reset epon map. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Reset epon map.
 * \par Example
 * \snippet libeponmap.c  Reset epon map.
 */
int eponmapReset();

/* ----------------------LlidQueueMapping and weight---------------------- */


/**
 * \brief This function is used to get epon map llid queue mapping.
 *
 * This function is used to get epon map llid queue mapping. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \param[out]  queueNum: pointer to the uint8_t type
 * \param[out]  pRules: pointer to the struct type of queueWeight_s
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon map llid queue mapping.
 * \par Example
 * \snippet libeponmap.c  Get epon map llid queue mapping.
 */
int eponmapGetLlidQueueMapping(uint8_t llid, uint8_t *queueNum, QueueWeight_Ptr pQWeights);


/**
 * \brief This function is used to set epon map llid queue mapping.
 *
 * This function is used to set epon map llid queue mapping. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \param[in]  queueNum: queue num
 * \param[out]  pQWeights: pointer to the struct type of queueWeight_s
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon map llid queue mapping.
 * \par Example
 * \snippet libeponmap.c  Set epon map llid queue mapping.
 */
int eponmapSetLlidQueueMapping(uint8_t llid, uint8_t queueNum, QueueWeight_Ptr pQWeights);

/**
 * \brief This function is used to clear epon map llid queue mapping.
 *
 * This function is used to clear epon map llid queue mapping. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Clear epon map llid queue mapping.
 * \par Example
 * \snippet libeponmap.c  Clear epon map llid queue mapping.
 */
int eponmapClearLlidQueueMapping(uint8_t llid);

/**
 * \brief This function is used to show epon map llid queue mapping.
 *
 * This function is used to show epon map llid queue mapping. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Show epon map llid queue mapping.
 * \par Example
 * \snippet libeponmap.c  Show epon map llid queue mapping.
 */
int eponmapShowLlidQueueMapping(uint8_t llid);

#endif
