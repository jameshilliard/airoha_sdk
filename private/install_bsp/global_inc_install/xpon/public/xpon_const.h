/***************************************************************
Copyright Statement:

This software/firmware and related documentation (揈coNet Software? 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to EcoNet (HK) Limited (揈coNet? and/or 
its licensors. Without the prior written permission of EcoNet and/or its licensors, 
any reproduction, modification, use or disclosure of EcoNet Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (揈CONET SOFTWARE? RECEIVED FROM ECONET 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 揂S IS?
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVER扴 SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES 
MADE TO RECEIVER扴 SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
ECONET'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE ECONET 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT ECONET'S SOLE OPTION, TO 
REVISE OR REPLACE THE ECONET SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO ECONET FOR SUCH 
ECONET SOFTWARE.
***************************************************************/
#ifndef _XPON_CONST_H_
#define _XPON_CONST_H_

/**
* \file  xpon_const.h
* \brief This file is xpon const header file that will be exported for others to use.
* \author jun.wu
* \date     2020-09-22
* \version  A001 
* \copyright EcoNet Inc                                                              
*/

/************************************************************************
*		   I N C L U D E S
*************************************************************************
*/
#include "xpon_public_const.h"

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/
#define SC_PLOAM_NUM_DELIMITER_BYTES 3

#define XPON_QUEUE_NUMBER			8
#define XPON_SHAPING_NUMBER			(32)

#define XPON_CHANNEL_NUMBER		    (32)
#define GPON_OMCI_INTERFACE	        (0x1FF)
#define GPON_MAX_ANI_INTERFACE	    (256)
#define GPON_ALARM_MAX_NUM			(15)


#define EPON_1G_MAX_LLID_NUM        8
#define EPON_LLID_MAX_NUM		32



/************************************************************************
*		   D A T A   T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
typedef enum {
	GPON_INT_PLOAMD_RECV = 0,	/* 0 */
	GPON_INT_PLOAMU_SEND,
	GPON_INT_SN_REQ_RECV,
	GPON_INT_SN_ONU_SEND_O3,
	GPON_INT_RANGING_REQ_RECV,
	GPON_INT_ONU_SEND_O4,		/* 5 */
	GPON_INT_SN_REQ_CRS,
	GPON_INT_LOS_GEN_DEL,
	GPON_INT_AES_KEY_SWITCH_DONE,
	GPON_INT_TOD_UPDATE_DONE,
	GPON_INT_TOD_1PPS,			/* 10 */
	GPON_INT_DYING_GASP_SEND,
	GPON_INT_RX_ERR = 16,		/* 16 */
	GPON_INT_FIFO_ERR,
	GPON_INT_BST_SGL_DIFF,
	GPON_INT_TX_LATE_START,
	GPON_INT_RX_EOF_ERR,
	GPON_INT_RX_GEM_INTLV_ERR,	/* 21 */
	GPON_INT_BFIFO_FULL,		/* 22 */
	GPON_INT_SFIFO_FULL,		/* 23 */
	GPON_INT_O5_EQD_ADJ_DONE,	/* 24 */
	GPON_INT_OLT_DS_FEC_CHG,	/* 25 */
	GPON_INT_ONU_US_FEC_CHG,	/* 26 */
	GPON_INT_POP_UP_RECV_IN_O6,
	GPON_INT_FWI,
	GPON_INT_LWI,
	GPON_INT_BWM_STOP_TIME_ERR,	/* 30 */
} GPON_INTERRUPT_MASK_T ;


typedef enum {
	GPON_EQD_OFFSET_FLAG_ADD = 0,
	GPON_EQD_OFFSET_FLAG_SUBTRACT,
} GPON_EQD_OFFSET_FLAG_t ;

/************************************************************************
*               F U N C T I O N   D E C L A R A T I O N S
                I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/

#endif /*_XPON_CONST_H_ */

