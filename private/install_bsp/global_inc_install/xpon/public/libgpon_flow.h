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
	libgpon_flow.h

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	Xi.Wang		2018/9/5	Create
*/

#ifndef _GPONIOCTL_APP_H
#define _GPONIOCTL_APP_H

/**
* \file  libgpon_flow.h 
* \brief This file is lib gpon flow header file that will be exported for others to use.
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
#include <sys/ioctl.h>
#include <stdint.h>
#include "gpon_flow_public.h"

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/

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

/*
 * gpon_flow module ioctl generic data interface
 */

/**
 * \brief This function is used to gpon flow import me data.
 *
 * This function is used to gpon flow import me data. submit by Jun.Wu 2020.09.22
 * \param[in] omciMsg: Pointer the struct type of FlowRawData_s.	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Gpon flow import me data.
 * \par Example
 * \snippet gpon_flow_lib.c Gpon flow import me data.
 */
int gpon_flow_ioctl_import_me_data(FlowRawData_p omciMsg);

/**
 * \brief This function is used to gpon flow cfg data.
 *
 * This function is used to gpon flow cfg data. submit by Jun.Wu 2020.09.22
 * \param[in] cfg_data_ptr:  pointer the struct type of FlowCfgData_s.	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Gpon flow cfg data.
 * \par Example
 * \snippet gpon_flow_lib.c Gpon flow cfg data.
 */
int gpon_flow_ioctl_cfg_data(FlowCfgData_p cfg_data_ptr);

/**
 * \brief This function is used to gpon flow clean all me inst.
 *
 * This function is used to gpon flow clean all me inst. submit by Jun.Wu 2020.09.22
 * \param[in] void.	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Gpon flow clean all me inst.
 * \par Example
 * \snippet gpon_flow_lib.c Gpon flow clean all me inst.
 */
int gpon_flow_ioctl_clean_all(void);

#endif
