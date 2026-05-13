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
#ifndef _XPON_BLAPI_H
#define _XPON_BLAPI_H  

/**
* \file  blapi_xpon.h  
* \brief This file is blapi xpon header file of business logic APIs that will be exported for others to use.
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
#include "xpon_public_const.h"

/************************************************************************
*		   D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/
typedef struct ponLinkUpInfo_s{
    unsigned char sn[GPON_SN_LENS];
    char password[GPON_PASSWD_LENS];
    char reg_id[GPON_REG_ID_LENS];
}ponLinkUpInfo_t;

/************************************************************************
*		   M A C R O S
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
*		   F U N C T I O N   D E C L A R A T I O N S
		   I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/

/**
 * \brief This function is used to send OAM Update config.
 *
 * This function is used to send OAM Update config. submit by Jun.Wu 2020.09.22
 * \param[in]	void.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Send OAM Update config.
 * \par Example
 * \snippet blapi_xpon.c Send OAM Update config.
 */
int blapi_pon_sendOamUpdateConf(void);

/**
 * \brief This function is used to send OAM Traffic Down.
 *
 * This function is used to send OAM Traffic Down. submit by Jun.Wu 2020.09.22
 * \param[in]	void.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Send OAM Traffic Down.
 * \par Example
 * \snippet blapi_xpon.c Send OAM Traffic Down.
 */
int blapi_pon_sendOamTrafficDown(void);

/**
 * \brief This function is used to send OAM PMMGR REINIT.
 *
 * This function is used to send OAM PMMGR REINIT. submit by Jun.Wu 2020.09.22
 * \param[in]	void.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Send OAM PMMGR REINIT.
 * \par Example
 * \snippet blapi_xpon.c Send OAM PMMGR REINIT.
 */
int blapi_pon_sendPmmgrReInit(void);

/**
 * \brief This function is used to send OAM MPCP WAN RESET.
 *
 * This function is used to send OAM MPCP WAN RESET. submit by Jun.Wu 2020.09.22
 * \param[in]	void.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Send OAM MPCP WAN RESET.
 * \par Example
 * \snippet blapi_xpon.c Send OAM MPCP WAN RESET.
 */
int blapi_pon_sendMpcpWanReset(void);

/**
 * \brief This function is used to get the onu mode from MAC driver.
 *
 * This function is used to get the onu mode from MAC driver. submit by Jun.Wu 2020.09.22
 * \param[out]	ONU mode: For EN752x series products, 0:Auto Mode, 1:GPON Mode and 2:EPON  Mode.
 * 				For EN758x series products, the ONU mode maybe 1:GPON Mode, 3:XEPON-ASY Mode, 
 *				4:XEPON-SYM Mode, 5:XEPON-1G Mode, 6:XGPON Mode, 7:XGSPON Mode, 
 *				8:NGPON2-10G-SYM Mode, 9:NGPON2-10G-ASY Mode and 10:NGPON2-2G-SYM Mode.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get the onu mode from MAC driver.
 * \par Example
 * \snippet blapi_xpon.c Get the onu mode from MAC driver.
 */
int blapi_pon_get_onuMode_after_PON_Start(int * onuMode);

/**
 * \brief This function is used to get the onu mode from flash.
 *
 * This function is used to get the onu mode from flash. submit by Jun.Wu 2020.09.22
 * \param[out]	ONU mode: 1:GPON Mode, 3:XEPON-ASY Mode, 
 *				4:XEPON-SYM Mode, 5:XEPON-1G Mode, 6:XGPON Mode, 7:XGSPON Mode, 
 *				8:NGPON2-10G-SYM Mode, 9:NGPON2-10G-ASY Mode and 10:NGPON2-2G-SYM Mode.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get the onu mode from flash.
 * \par Example
 * \snippet blapi_xpon.c Get the onu mode from flash.
 */
int blapi_pon_get_onuMode_from_flash(int * onuMode);

/**
 * \brief This function is used to set port map.
 *
 * This function is used to set port map.
 * \param[in]	port_num:  port num
 * \param[in]	port_map:  port map
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set port map.
 * \par Example
 * \snippet blapi_xpon.c Set port map.
 */
int blapi_pon_set_port_map_info(int port_num, void *port_map);

/**
 * \brief This function is used to set XPON link state.
 *
 * This function is used to set XPON link state. submit by Jun.Wu 2020.09.22
 * \param[in]	state:   0:XPON_DISABLE,  1:XPON_ENABLE, 2:XPON_POWER_DOWN
 * \param[in]	onuMode: 0~2 for EN752x series products, 1,3~10 for EN758x series products
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set XPON link state.
 * \par Example
 * \snippet blapi_xpon.c Set XPON link state.
 */
int blapi_pon_set_link_state(int state, int onuMode);

/**
 * \brief This function is used to set pon link up.
 *
 * This function is used to set pon link up. submit by Jun.Wu 2020.09.22
 * \param[in]	onuMode: 0~2 for EN752x series products, 1,3~10 for EN758x series products  
 * \param[in]	regInfo: The struct include sn, password, reg_id.
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set pon link up.
 * \par Example
 * \snippet blapi_xpon.c Set pon link up.
 */
int blapi_pon_set_link_up(int onuMode, ponLinkUpInfo_t regInfo);

/**
 * \brief This function is used to get the temperature of transceiver.
 *
 * This function is used to get the temperature of transceiver. submit by Jun.Wu 2020.09.22
 * \param[out] PhyTransTemp: The addr of temperature of transceiver.	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get the temperature of transceiver.
 * \par Example
 * \snippet blapi_xpon.c Get the temperature of transceiver.
 */
int blapi_pon_get_phy_trans_temperature(int *PhyTransTemp);
/*************************************************************
**************************************************************/
int blapi_get_pon_stat(WAN_STATISTIC_t* pWanCntStats);
/**
 * \brief This function is used to pon secure boot.
 *
 * This function is used to pon secure boot. submit by Jun.Wu 2020.09.22
 * \param[in] image_path: The path of fw.	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Pon secure boot.
 * \par Example
 * \snippet blapi_xpon.c Pon secure boot.
 */
int blapi_pon_secure_boot(char* image_path);

/**
 * \brief This function is used to get oam ping value.
 *
 * This function is used to get oam ping value. submit by Jun.Wu 2020.09.22
 * \param[in] info1.	
 * \param[in] info2.	 
 * \param[in] type.	 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get oam ping value.
 * \par Example
 * \snippet blapi_xpon.c Get oam ping value.
 */
int blapi_pon_get_oam_ping_value(const char *info1, const char *info2, const int type);

/**
 * \brief This function is used to get bootflag.
 *
 * This function is used to get bootflag. submit by Jun.Wu 2020.09.22
 * \param[out] bootflag: The addr of bootflag.	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get bootflag.
 * \par Example
 * \snippet blapi_xpon.c  Get bootflag.
 */
int blapi_pon_get_boot_flag(uint8_t * bootflag);

/**
 * \brief This function is used to set bootflag to flash.
 *
 * This function is used to set bootflag to flash. submit by Jun.Wu 2020.09.22
 * \param[in] bootflag: 0 or 1	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set bootflag to flash.
 * \par Example
 * \snippet blapi_xpon.c  Set bootflag to flash.
 */
int blapi_pon_set_bootFlag_to_flash(int bootFlag);

/**
 * \brief This function is used to get EPON llid max num.
 *
 * This function is used to get EPON llid max num. submit by Jun.Wu 2020.09.22
 * \param[in] void.	  
 * \retval	  EPON LLID MAX NUM
 * \note
 *  Get EPON llid max num.
 * \par Example
 * \snippet blapi_xpon.c  Get EPON llid max num.
 */
int blapi_pon_MAX_EPON_LLID_NUM(void);

/**
 * \brief This function is used to set OLT type.
 *
 * This function is used to set OLT type. submit by Jun.Wu 2020.09.22
 * \param[in] type: 0:Geneal OLT type, 1:FIBERHOME 551601, 2:DASAN	  
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set OLT type.
 * \par Example
 * \snippet blapi_xpon.c  Set OLT type.
 */
int blapi_pon_set_olt_type(uint type);

/**
 * \brief This function is used to delete the portbind group.
 *
 * This function is used to delete the portbind group. submit by Taylor.Fang 2022.04.22
 * \param[in] grpId: the index of protbind group
 * \retval	  0.
 * \note
 *  Delete the portbind group.
 * \par Example
 * \snippet blapi_xpon.c  Delete the portbind group.
 */
int blapi_pon_del_portbind_grp(uint grpId);

/**
 * \brief This function is used to start oam process.
 *
 * This function is used to start oam process. submit by Jun.Wu 2020.09.22
 * \param[in] void.	  
 * \retval	 void.
 * \note
 *  Start oam process.
 * \par Example
 * \snippet blapi_xpon.c  Start oam process.
 */
void blapi_pon_start_oam_process(void);

/**
 * \brief This function is used to get the link status of phy.
 *
 * This function is used to get the link status of phy. submit by Jun.Wu 2020.09.22
 * \param[out] buffer: used to store the link status of phy
 * \param[in] buffLength: used to indicate the buffer size, it cannot be less than 5 bytes
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get the link status of phy.
 * \par Example
 * \snippet blapi_xpon.c  Get the link status of phy.
 */
int blapi_pon_get_phy_link_status(char *buffer, int buffLength);

/**
 * \brief This function is used to set the status of PON LED.
 *
 * This function is used to set the status of PON LED. submit by Jun.Wu 2020.09.22
 * \param[in] ledStatus: ledStatus="0" : PON LED off
 *					 ledStatus="1" : PON LED flashing. Note that phy must be up at this time
 *					 ledStatus="2" : PON LED on. Note that phy must be up at this time
 *					 ledStatus="3" : Software upgrading. Note that phy must be up at this time 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set the status of PON LED.
 * \par Example
 * \snippet blapi_xpon.c  Set the status of PON LED.
 */
int blapi_pon_set_pon_led_status(char *ledStatus);

#define BLAPI_GET_MAX_LLID_NUM      blapi_pon_MAX_EPON_LLID_NUM()

/**
 * \brief This function is used to reboot the ONU.
 *
 * This function is used to reboot the ONU. submit by Taylor.Fang 2022.04.22
 * \param[in] void.	  
 * \retval	 void.
 * \note
 *  Reboot the ONU.
 * \par Example
 * \snippet blapi_xpon.c  Reboot the ONU.
 */
void blapi_pon_reboot_action(void);

/**
 * \brief This function is used to get OLT Distance .
 *
 * This function is used to get OLT Distance. submit by Fran.Lu 2022.12.19
 * \param[out]  distance: pinter to int
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get OLT Distance
 * \par Example
 * \snippet blapi_xpon.c  Get OLT Distance.
 */
int blapi_pon_get_OLT_distance(int* distance);
#endif
