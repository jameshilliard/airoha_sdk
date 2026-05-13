/*
 ***************************************************************************
 * MediaTeK Inc.
 * 4F, No. 2 Technology	5th	Rd.
 * Science-based Industrial	Park
 *
 * (c) Copyright 2002-2022, MTK.
 *
 * All rights reserved.	MediaTeK's source	code is	an unpublished work	and	the
 * use of a	copyright notice does not imply	otherwise. This	source code
 * contains	confidential trade secret material of MediaTeK Tech. Any attemp
 * or participation	in deciphering,	decoding, reverse engineering or in	any
 * way altering	the	source code	is stricitly prohibited, unless	the	prior
 * written consent of MediaTeK, Inc. is obtained.
 ***************************************************************************
	Module Name:
	lib_bbf247.h
	
	Abstract: This file is lib bbf247 head file that will be exported for others to use

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name				Date			Modification logs
	Yucheng.Yin		2020-09-22	Create
*/
#ifndef _BBF247_LIB_H_
#define _BBF247_LIB_H_


/************************************************************************
*		   I N C L U D E S
*************************************************************************
*/
#include <stdint.h>

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/
#ifndef BBF247_DIR_UP
#define BBF247_DIR_UP   0
#define BBF247_DIR_DN   1
#endif
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
 * \brief This function is used to get qos flag which based on dei.
 *
 * This function is used to get bbf247 dei-based qos flag
 * \param[in]   dir : direction , up/dn
 	[in][out]	enable: enable flag
 * \retval	  bbf247 dei-based qos flag
 * \retval	 -1	Fail.
 * \note
 *  Get bbf247 dei-based qos flag.
 */
int bbf247_get_dei_qos_flag(int dir,int *enable);


/**
 * \brief This function is used to set qos flag which based on dei.
 *
 * This function is used to set bbf247 dei-based qos flag
 * \param[in]   dir : direction , up/dn
 				enable: enable flag
 * \retval	  bbf247 dei-based qos flag
 * \retval	 -1	Fail.
 * \note
 *  Set bbf247 dei-based qos flag.
 */

int bbf247_set_dei_qos_flag(int dir,int enable);

/**
 * \brief This function is used to set mac learn id.
 *
 * This function is used to set bbf247 mac learn id flag
 * \param[in]   maclearn_flag : 0/1
 * \retval	  bbf247 mac learn id
 * \retval	 -1	Fail.
 * \note
 *  Set bbf247 mac learn id.
 */
int bbf247_set_maclearn_flag(int maclearn_flag);

#endif
