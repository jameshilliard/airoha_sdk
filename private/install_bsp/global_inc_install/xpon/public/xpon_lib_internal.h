/***************************************************************
Copyright Statement:

This software/firmware and related documentation (EcoNet Software) 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to EcoNet (HK) Limited (EcoNet) and/or 
its licensors. Without the prior written permission of EcoNet and/or its licensors, 
any reproduction, modification, use or disclosure of EcoNet Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (ECONET SOFTWARE) RECEIVED FROM ECONET 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN AS IS 
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVERS SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES 
MADE TO RECEIVERS SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
ECONET'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE ECONET 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT ECONET'S SOLE OPTION, TO 
REVISE OR REPLACE THE ECONET SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO ECONET FOR SUCH 
ECONET SOFTWARE.
***************************************************************/


#ifndef _XPON_LIB_INTERNAL_H
#define _XPON_LIB_INTERNAL_H

/**
* \file  xpon_lib_internal.h 
* \brief This file is xpon lib internal header file that will be exported for others to use.
* \author jun.wu
* \date     2020-09-22
* \version  A001 
* \copyright EcoNet Inc                                                              
*/

/************************************************************************
*		   I N C L U D E S
*************************************************************************
*/
#include "libcompileoption.h"


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

/**
 * \brief This function is used to get xpon lib debug level.
 *
 * This function is used to get xpon lib debug level. submit by Jun.Wu 2020.09.22
 * \param[in] void.	  
 * \retval	  debug level.
 * \retval	 -1	Fail.
 * \note
 *  Get xpon lib debug level.
 * \par Example
 * \snippet xpon_lib_dbg.c Get xpon lib debug level.
 */
int get_xpon_lib_dbg_level(void);

/**
 * \brief This function is used to output information to the serial port.
 *
 * This function is used to output information to the serial port. submit by Jun.Wu 2020.09.22
 * \param[in] fmt: format string.	  
 * \retval	  void.
 * \note
 *  Output information to the serial port.
 * \par Example
 * \snippet xpon_lib_dbg.c Output information to the serial port.
 */
void xpon_lib_printf(char *fmt,...);


typedef enum xpon_lib_debug_level_s
{
	XPON_DBG_ERROR  = 1 << 0,
	XPON_DBG_WARN   = 1 << 1,
	XPON_DBG_NOTICE = 1 << 2,
	XPON_DBG_DEBUG  = 1 << 3,
}xpon_lib_debug_level_t;


#define ECONET_E_SUCCESS	(0)
#define ECONET_E_FAIL	    (-1)


#define XPON_LIB_DBG_PRINT(level,fmt, ...) do{\
                                            if(get_xpon_lib_dbg_level() & (level))\
                                                xpon_lib_printf("[%s][%d]:" fmt,__FUNCTION__, __LINE__,##__VA_ARGS__);\
                                         }while(0)

#define LIB_XPON_ERROR(fmt, ...)     XPON_LIB_DBG_PRINT(XPON_DBG_ERROR, fmt, ##__VA_ARGS__)
#define LIB_XPON_WARN(fmt, ...)      XPON_LIB_DBG_PRINT(XPON_DBG_WARN, fmt, ##__VA_ARGS__)
#define LIB_XPON_NOTICE(fmt, ...)    XPON_LIB_DBG_PRINT(XPON_DBG_NOTICE, fmt,##__VA_ARGS__)
#define LIB_XPON_DEBUG(fmt, ...)     XPON_LIB_DBG_PRINT(XPON_DBG_DEBUG, fmt,##__VA_ARGS__)

#define PRINT_ARGS(fmt, ...)         XPON_LIB_DBG_PRINT(XPON_DBG_DEBUG, "[in args] "fmt,##__VA_ARGS__)

#define FUNC_TRACE_ENTER           LIB_XPON_DEBUG("===Enter===\n") 

#define RETURN_FAIL_MSG(fmt, ...)   \
    do{\
        LIB_XPON_ERROR("===Fail Exit==="fmt,##__VA_ARGS__); \
        return ECONET_E_FAIL; \
    }while(0)

#define RETURN_FAIL   \
    do{\
        LIB_XPON_DEBUG("===Fail Exit===\n"); \
        return ECONET_E_FAIL; \
    }while(0)

#define RETURN_SUCCESS \
    do{\
        LIB_XPON_DEBUG("===Success Exit===\n"); \
        return ECONET_E_SUCCESS; \
    }while(0)



#endif


