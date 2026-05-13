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

#ifndef _LIBAPI_PONMGR_V2_H
#define _LIBAPI_PONMGR_V2_H

/**
* \file  libapi_ponmgr_v2.h
* \brief This file is lib ponmgr header file that will be exported for others to use.
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
#include "xpon_ioctl_if.h"


/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/
#define INVALID_TCONT       (0XFFFF)
#define MAX_IPC_PATH_LEN 64

#define	CONST_QUEUE_NUMBER          XPON_QUEUE_NUMBER
#define CONST_SHAPING_NUMBER        XPON_SHAPING_NUMBER

#define MAX_LLID                    65535

/************************************************************************
*		   D A T A   T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
typedef enum {
	MASK_OF_CongestTrtcmMode				= (1<<0) ,
	MASK_OF_CongestDeiDropMode				= (1<<1) ,
	MASK_OF_CongestThresholdMode			= (1<<2) ,
	MASK_OF_CongestScale					= (1<<3) ,
	MASK_OF_CongestDropProbability			= (1<<4) ,
	MASK_OF_CongestThreshold				= (1<<5)
} PWanCongestCfgMask_t;


#define PORT_ALL 	0xFF

typedef enum{
    BLACK_LIST_FILTER,
    WHITE_LIST_FILTER,
}Event_Filter_Type;

typedef enum{
    WAN_TX_CNT = 1,
    WAN_RX_CNT,
}WAN_TX_RX_SELECT_T,WAN_TX_RX_SELECT_t;

typedef enum{
    CONFIG_IPC_PATH = 1,
    /*add other config data mask here*/    
}gpon_lib_config_mask_t;
typedef struct{
    char ipc_path[MAX_IPC_PATH_LEN];
    /*add other config data here*/
}gpon_lib_config_t;


typedef void (*gpon_event_callback)(XPON_EVENT_t* event);

typedef enum{
	EVT_HANDLER_OMCI = 0,
	EVT_HANDLER_OAM,
	EVT_HANDLER_TEST,
	EVT_HANDLER_MAX_NUM
}evt_handler_id_t;



/************************************************************************
*               F U N C T I O N   D E C L A R A T I O N S
                I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/
/**
 * \brief This function is used to fetch the events from driver.
 *
 * This function is used to fetch the events from driver. submit by Taylor.Fang 2022.04.22
 * \param[in]  void
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *	Fetch the events from driver.
 * \par Example
 * \snippet api_lib_gponmgr.c  Fetch the events from driver.
 */
int ponmgr_lib_fetch_event_from_driver(int ponTrapFlag);

int ponmgr_lib_wait_queue_clear(void);

/**
 * \brief This function is used to get event block.
 *
 * This function is used to get event block. submit by Jun.Wu 2020.09.22
 * \param[out]  pevent: pointer to the struct type of XPON_EVENT_t
 * \param[in]  handler_id: 0: EVT_HANDLER_OMCI, 1: EVT_HANDLER_OAM
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get event block.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get event block.
 */
int ponmgr_lib_get_event_block(XPON_EVENT_t *pevent,evt_handler_id_t handler_id);


/**
 * \brief This function is used to register event handler.
 *
 * This function is used to register event handler. submit by Jun.Wu 2020.09.22
 * \param[in]  handler_id: 0: EVT_HANDLER_OMCI, 1: EVT_HANDLER_OAM
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Register event handler.
 * \par Example
 * \snippet api_lib_gponmgr.c  Register event handler.
 */
int ponmgr_lib_register_event_handler(evt_handler_id_t handler_id);


/**
 * \brief This function is used to get gpon gemport info.
 *
 * This function is used to get gpon gemport info. submit by Jun.Wu 2020.09.22
 * \param[in]  pgponGemInfo: pointer to the struct type of XMCS_GemPortInfo_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get gpon gemport info.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get gpon gemport info.
 */
int gponmgr_lib_get_gemport(struct XMCS_GemPortInfo_S *pgponGemInfo);


/**
 * \brief This function is used to get gpon omcc info.
 *
 * This function is used to get gpon omcc info. submit by Toby.Chen 2022.11.10
 * \param[in]  pgponOMCCInfo: pointer to the struct type of XMCS_OMCC_Info_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get gpon gemport info.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get gpon omcc info.
 */
int gponmgr_lib_get_omcc(struct XMCS_OMCC_Info_S *pgponOMCCInfo);


/**
 * \brief This function is used to assign gpon gemport.
 *
 * This function is used to assign gpon gemport. submit by Jun.Wu 2020.09.22
 * \param[in]  arg: pointer to gpon driver structure
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Assign gpon gemport.
 * \par Example
 * \snippet api_lib_gponmgr.c  Assign gpon gemport.
 */
int gponmgr_lib_gemport_assign(void * arg);


/**
 * \brief This function is used to unassign gpon gemport.
 *
 * This function is used to unassign gpon gemport. submit by Jun.Wu 2020.09.22
 * \param[in]  arg: pointer to gpon driver structure
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Unassign gpon gemport.
 * \par Example
 * \snippet api_lib_gponmgr.c  Unassign gpon gemport.
 */
int gponmgr_lib_gemport_unassign(void * arg);


/**
 * \brief This function is used to get onu mac address.
 *
 * This function is used to get onu mac address. submit by Jun.Wu 2020.09.22
 * \param[out]  devMac: pointer to the unsigned char type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get onu mac address.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get onu mac address.
 */
int gponmgr_lib_get_dev_mac(unsigned char * devMac);


/**
 * \brief This function is used to set gpon emergencystate.
 *
 * This function is used to set gpon emergencystate. submit by Jun.Wu 2020.09.22
 * \param[in]  EmergencyState: EmergencyState
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set gpon emergencystate.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set gpon emergencystate.
 */
int gponmgr_lib_set_emergency(unsigned char EmergencyState);


/**
 * \brief This function is used to configure QoS scheduler.
 *
 * This function is used to configure QoS scheduler. submit by Jun.Wu 2020.09.22
 * \param[in]  pwanChannelQos: pointer to the struct type of XMCS_ChannelQoS_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Configure QoS scheduler.
 * \par Example
 * \snippet api_lib_gponmgr.c  Configure QoS scheduler.
 */
int gponmgr_lib_set_qos_scheduler(struct XMCS_ChannelQoS_S *pwanChannelQos);


/**
 * \brief This function is used to configure QoS weight configuration.
 *
 * This function is used to configure QoS weight configuration. submit by Jun.Wu 2020.09.22
 * \param[in]  pwanQosWeightCfg: pointer to the struct type of XMCS_QoSWeightConfig_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Configure QoS weight configuration.
 * \par Example
 * \snippet api_lib_gponmgr.c  Configure QoS weight configuration.
 */
int gponmgr_lib_set_qos_weight_cfg(struct XMCS_QoSWeightConfig_S *pwanQosWeightCfg);


/**
 * \brief This function is used to configure congest.
 *
 * This function is used to configure congest. submit by Jun.Wu 2020.09.22
 * \param[in]  cmd: cmd
 * \param[in]  pwanCongest: pointer to the struct type of XMCS_TxQueueCongestion_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Configure congest.
 * \par Example
 * \snippet api_lib_gponmgr.c  Configure congest.
 */
int gponmgr_lib_set_congest_config(unsigned int cmd, struct XMCS_TxQueueCongestion_S *pwanCongest);


/**
 * \brief This function is used to configure trtcm parameter.
 *
 * This function is used to configure trtcm parameter. submit by Jun.Wu 2020.09.22
 * \param[in]  pwanTrtcmParameters: pointer to the struct type of XMCS_TxQueueTrtcm_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Configure trtcm parameter.
 * \par Example
 * \snippet api_lib_gponmgr.c  Configure trtcm parameter.
 */
int gponmgr_lib_set_trtcm_para(struct XMCS_TxQueueTrtcm_S *pwanTrtcmParameters);


/**
 * \brief This function is used to set tod time.
 *
 * This function is used to set tod time. submit by Jun.Wu 2020.09.22
 * \param[in]  pgponTodCfg: pointer to the struct type of XMCS_GponTodCfg_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set tod time.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set tod time.
 */
int gponmgr_lib_set_tod_time(struct XMCS_GponTodCfg_S *pgponTodCfg);


/**
 * \brief This function is used to get onu type.
 *
 * This function is used to get onu type. submit by Jun.Wu 2020.09.22
 * \param[out]  OnuType: pointer to the int type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get onu type.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get onu type.
 */
int gponmgr_lib_get_onu_type(int *OnuType);

/**
 * \brief This function is used to get onu type.
 *
 * This function is used to get onu type. submit by Yucheng.Yin 2022.04.22
 * \param[out]  bbf247: pointer to the bbf247 flag
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get bbf247 flag.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get bbf247 flag.
 */
int gponmgr_lib_get_bbf247_flag(int *bbf247);


/**
 * \brief This function is used to get QoS scheduler information.
 *
 * This function is used to get QoS scheduler information. submit by Jun.Wu 2020.09.22
 * \param[in]  channel: channel
 * \param[out]  pwanChannelQos: pointer to the struct type of XMCS_ChannelQoS_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get QoS scheduler information.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get QoS scheduler information.
 */
int gponmgr_lib_get_qos_scheduler(unsigned char channel,struct XMCS_ChannelQoS_S *pwanChannelQos);


/**
 * \brief This function is used to get congest information.
 *
 * This function is used to get congest information. submit by Jun.Wu 2020.09.22
 * \param[out]  pwanCongest: pointer to the struct type of XMCS_TxQueueCongestion_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get congest information.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get congest information.
 */
int gponmgr_lib_get_congest_config(struct XMCS_TxQueueCongestion_S *pwanCongest);

/**
 * \brief This function is used to get xpon online duration.
 *
 * This function is used to get congest information. submit by Jun.Wu 2020.09.22
 * \param[out]  durationPtr: pointer to the duration value
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get xpon online duration.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get xpon online duration.
 */
int gponmgr_lib_get_xpon_online_duration(unsigned long* durationPtr);


/**
 * \brief This function is used to get the current ToD.
 *
 * This function is used to get the current ToD. submit by Jun.Wu 2020.09.22
 * \param[out]  pgponTodCfg: pointer to the struct type of XMCS_GponTodCfg_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the current ToD.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get the current ToD.
 */
int gponmgr_lib_get_current_tod(struct XMCS_GponTodCfg_S *pgponTodCfg);

/**
 * \brief This function is used to initialize gpon manager lib.
 *
 * This function is used to initialize gpon manager lib. submit by Taylor.Fang 2022.04.22
 * \param[in]  void
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Initialize gpon manager lib.
 * \par Example
 * \snippet api_lib_gponmgr.c  Initialize gpon manager lib.
 */
int gponmgr_lib_init(void);

/**
 * \brief This function is used to config ipc path and initialize gpon manager lib.
 *
 * This function is used to config ipc path and initialize gpon manager lib. submit by Taylor.Fang 2022.04.22
 * \param[in]  data:ipc path   mask:CONFIG_IPC_PATH:config ipc path   size:size of ipc path
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Initialize gpon manager lib.
 * \par Example
 * \snippet api_lib_gponmgr.c  Initialize gpon manager lib.
 */
int gponmgr_lib_advanced_init(gpon_lib_config_t * data,int mask,unsigned int size);

/**
 * \brief This function is used to deinitialize gpon manager lib.
 *
 * This function is used to deinitialize gpon manager lib. submit by Taylor.Fang 2022.04.22
 * \param[in]  void
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Deinitialize gpon manager lib.
 * \par Example
 * \snippet api_lib_gponmgr.c  Deinitialize gpon manager lib.
 */
int gponmgr_lib_deinit(void);

/**
 * \brief This function is used to create the socket of OMCI.
 *
 * This function is used to create the socket of OMCI. submit by Taylor.Fang 2022.04.22
 * \param[in]  void
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Create the socket of OMCI.
 * \par Example
 * \snippet api_lib_gponmgr.c  Create the socket of OMCI.
 */
int gponmgr_lib_init_omci_socket(int * socket_f);

/**
 * \brief This function is used to receive OMCI packets from socket.
 *
 * This function is used to receive OMCI packets from socket. submit by Taylor.Fang 2022.04.22
 * \param[in]  socket:the socket of omci msg_len:max length of omci packet
 * \param[out]  msg:omci packet data
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Receive OMCI packets from socket.
 * \par Example
 * \snippet api_lib_gponmgr.c  Receive OMCI packets from socket.
 */
int gponmgr_lib_omci_receive_msg_block(int socket, unsigned char * msg,
    unsigned int *msg_len);

/**
 * \brief This function is used to create the socket of OMCI and receive OMCI packets from socket.
 *
 * This function is used to create the socket of OMCI and receive OMCI packets from socket. submit by Taylor.Fang 2022.04.22
 * \param[in]  msg_len:max length of omci packet
 * \param[out]  msg:omci packet data
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Create the socket of OMCI and receive OMCI packets from socket.
 * \par Example
 * \snippet api_lib_gponmgr.c  Create the socket of OMCI and receive OMCI packets from socket.
 */
int gponmgr_lib_omci_receive_block(unsigned char * msg, unsigned int *msg_len);

/**
 * \brief This function is used to send OMCI packets.
 *
 * This function is used to send OMCI packets. submit by Taylor.Fang 2022.04.22
 * \param[in]  socket:the socket of omci  msg:omci packet data  msg_len:max length of omci packet
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Send OMCI packets.
 * \par Example
 * \snippet api_lib_gponmgr.c  Send OMCI packets.
 */
int gponmgr_lib_omci_send_msg_block(int socket, unsigned char * msg,
    unsigned int msg_len);

/**
 * \brief This function is used to send OMCI packets.
 *
 * This function is used to send OMCI packets. submit by Taylor.Fang 2022.04.22
 * \param[in]  msg:omci packet data  msg_len:max length of omci packet
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Send OMCI packets.
 * \par Example
 * \snippet api_lib_gponmgr.c  Send OMCI packets.
 */
int gponmgr_lib_omci_send_block(unsigned char * msg, unsigned int msg_len);

/**
 * \brief This function is used to bind tcont to alloc ID.
 *
 * This function is used to bind tcont to alloc ID. submit by Taylor.Fang 2022.04.22
 * \param[in]  tcont:TCONT ID  allocid:alloc ID
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Bind tcont to alloc ID.
 * \par Example
 * \snippet api_lib_gponmgr.c  Bind tcont to alloc ID.
 */
int gponmgr_lib_bind_tcont_to_allocid(unsigned short tcont, unsigned short allocid);

/**
 * \brief This function is used to unbind tcont to alloc ID.
 *
 * This function is used to unbind tcont to alloc ID. submit by Taylor.Fang 2022.04.22
 * \param[in]  tcont:TCONT ID
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Unbind tcont to alloc ID.
 * \par Example
 * \snippet api_lib_gponmgr.c  Unbind tcont to alloc ID.
 */
int gponmgr_lib_unbind_tcont_to_allocid(unsigned short tcont);

/**
 * \brief This function is used to delete TCONT.
 *
 * This function is used to delete TCONT. submit by Taylor.Fang 2022.04.22
 * \param[in]  tcont:TCONT ID
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Delete TCONT.
 * \par Example
 * \snippet api_lib_gponmgr.c  Delete TCONT.
 */
int gponmgr_lib_delete_tcont(unsigned short tcont);

/**
 * \brief This function is used to add TCONT.
 *
 * This function is used to add TCONT. submit by Taylor.Fang 2022.04.22
 * \param[in]  allocId: alloc ID  tcont:TCONT ID  tcontPolicy: the policy of TCONT
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Add TCONT.
 * \par Example
 * \snippet api_lib_gponmgr.c  Add TCONT.
 */
int gponmgr_lib_add_tcont(unsigned short allocId, unsigned char tcontId, unsigned char tcontPolicy);

/**
 * \brief This function is used to config gemport by TCONT.
 *
 * This function is used to config gemport by TCONT. submit by Taylor.Fang 2022.04.22
 * \param[in]  portid:GEM port ID  type:unicast or multicast  GEM port   tcont:TCONT ID encrypt:encrypted or not
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Config gemport by TCONT.
 * \par Example
 * \snippet api_lib_gponmgr.c  Config gemport by TCONT.
 */
int gponmgr_lib_config_gemport_by_tcont(unsigned short portid, GPON_GemType_t type, unsigned short tcont, int encrypt);

/**
 * \brief This function is used to config gemport by allocid.
 *
 * This function is used to config gemport by allocid. submit by Jun.Wu 2020.09.22
 * \param[in]  gponGemCreate:the struct type of XMCS_GemPortCreate_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Config gemport by allocid.
 * \par Example
 * \snippet api_lib_gponmgr.c  Config gemport by allocid.
 */
int gponmgr_lib_config_gemport_by_allocId(struct XMCS_GemPortCreate_S gponGemCreate);

/**
 * \brief This function is used to set the encryption of xgem.
 *
 * This function is used to set the encryption of xgem. submit by Taylor.Fang 2022.04.22
 * \param[in]  gponGemCreate: the info of GEM port
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set the encryption of xgem.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set the encryption of xgem.
 */
int gponmgr_lib_set_xgem_encrypt(struct XMCS_GemPortCreate_S gponGemCreate);

/**
 * \brief This function is used to get gemport statistic.
 *
 * This function is used to get gemport statistic. submit by Jun.Wu 2020.09.22
 * \param[in]  gemPortId:gemport ID 
 * \param[in]  statistic:pointer to the struct GEM_STATISTIC_t
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Get gemport statistic.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get gemport statistic.
 */
int gponmgr_lib_get_gemport_statistic(unsigned short gemPortId, GEM_STATISTIC_t* statistic);

/**
 * \brief This function is used to get tcont statistic.
 *
 * This function is used to get tcont statistic. submit by Jun.Wu 2020.09.22
 * \param[in]  tcontId:tcont ID 
 * \param[in]  statistic:pointer to the struct GEM_STATISTIC_t
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Get tcont statistic.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get tcont statistic.
 */
int gponmgr_lib_get_tcont_statistic(unsigned char tcontId, GEM_STATISTIC_t* statistic);


/**
 * \brief This function is used to get wan statistics.
 *
 * This function is used to get wan statistics. submit by Jun.Wu 2020.09.22
 * \param[out]  pWanCntStats: pointer to the struct type of WAN_STATISTIC_t
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get wan statistics.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get wan statistics.
 */
int gponmgr_lib_get_wan_statistic(WAN_STATISTIC_t * pWanCntStats);


/**
 * \brief This function is used to get sys link config.
 *
 * This function is used to get sys link config. submit by Jun.Wu 2020.09.22
 * \param[out]  sysLinkCfg: pointer to the struct type of WAN_LINKCFG_t 
 *					     this struct contain information about sys link config
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get sys link config.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get sys link config.
 */
int gponmgr_lib_get_sys_link_cfg( WAN_LINKCFG_t *sysLinkCfg);


/**
 * \brief This function is used to get gpon detail information.
 *
 * This function is used to get gpon detail information. submit by Jun.Wu 2020.09.22
 * \param[out]  gponOnuInfo: pointer to the struct type of GPON_ONU_INFO_t 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get gpon detail information.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get gpon detail information.
 */
int gponmgr_lib_get_info(GPON_ONU_INFO_t*gponOnuInfo);


/**
 * \brief This function is used to get phy trans params.
 *
 * This function is used to get phy trans params. submit by Jun.Wu 2020.09.22
 * \param[out]  pPhyTransParams: pointer to the struct type of PHY_PARAMS_t 
 *							this struct contain information about bosa		
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get phy trans params.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get phy trans params.
 */
int gponmgr_lib_get_phy_trans_params(PHY_PARAMS_t*pPhyTransParams);


/**
 * \brief This function is used to get phy rx fec config.
 *
 * This function is used to get phy rx fec config. submit by Jun.Wu 2020.09.22
 * \param[out]  phyFecConfig: pointer to the struct type of PHY_FECCONFIG_t 
 *						this struct contain information about rx fec config	
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get phy rx fec config.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get phy rx fec config.
 */
int gponmgr_lib_get_phy_rx_fec_cfg( PHY_FECCONFIG_t *phyFecConfig);


/**
 * \brief This function is used to get the PHY Rx FEC counter information.
 *
 * This function is used to get the PHY Rx FEC counter information. submit by Jun.Wu 2020.09.22
 * \param[out]  pPhyRxFecConfig: pointer to the struct type of PHY_FECCONFIG_t 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the PHY Rx FEC counter information.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get the PHY Rx FEC counter information.
 */
int gponmgr_lib_get_phy_fec_cnt(PHY_FECCONFIG_t *pPhyRxFecConfig);


/**
 * \brief This function is used to set gpon silence.
 *
 * This function is used to set gpon silence. submit by Jun.Wu 2020.09.22
 * \param[in]  flag: 1:start timer,  0:stop timer
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set gpon silence.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set gpon silence.
 */
int gponmgr_lib_set_silence(unsigned int flag);


/**
 * \brief This function is used to get the GPON GEM counter information.
 *
 * This function is used to get the GPON GEM counter information. submit by Jun.Wu 2020.09.22
 * \param[in]  gemPortId: gemPort Id
 * \param[out]  pgponGemCounter: pointer to the struct type of GEM_STATISTIC_t 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the GPON GEM counter information.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get the GPON GEM counter information.
 */
int gponmgr_lib_get_gemcounter(unsigned short gemPortId, GEM_STATISTIC_t *pgponGemCounter);


/**
 * \brief This function is used to get the GPON response time.
 *
 * This function is used to get the GPON response time. submit by Jun.Wu 2020.09.22
 * \param[out]  time: pointer to the unsigned short type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the GPON response time.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get the GPON response time.
 */
int gponmgr_lib_get_response_time(unsigned short *time);


/**
 * \brief This function is used to set mib flag.
 *
 * This function is used to set mib flag. submit by Jun.Wu 2020.09.22
 * \param[in]  mibFlag: mib Flag
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set mib flag.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set mib flag.
 */
int gponmgr_lib_set_mib_flag(unsigned int mibFlag);


/**
 * \brief This function is used to set the ctc private ME 65528 loop detection message frequency.
 *
 * This function is used to set the ctc private ME 65528 loop detection message frequency. submit by Jun.Wu 2020.09.22
 * \param[in]  detectFrequency: used to set the send ploamu wait mode
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set the ctc private ME 65528 loop detection message frequency.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set the ctc private ME 65528 loop detection message frequency.
 */
int gponmgr_lib_set_loop_detect_msg_freq(unsigned short detectFrequency);


/**
 * \brief This function is used to set the ctc private ME 65528 loop detection receive interval.
 *
 * This function is used to set the ctc private ME 65528 loop detection receive interval. submit by Jun.Wu 2020.09.22
 * \param[in]  recvInterval: receive interval
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set the ctc private ME 65528 loop detection receive interval.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set the ctc private ME 65528 loop detection receive interval.
 */
int gponmgr_lib_set_loop_Recv_Interval(unsigned short recvInterval);


/**
 * \brief This function is used to get tcont index information.
 *
 * This function is used to get tcont index information. submit by Jun.Wu 2020.09.22
 * \param[out]  tcontInfo: pointer to the struct type of XMCS_GponTcontInfo_S 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get tcont index information.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get tcont index information.
 */
int gponmgr_lib_get_tcont_index(struct XMCS_GponTcontInfo_S *tcontInfo);


/**
 * \brief This function is used to set tx rate limit.
 *
 * This function is used to set tx rate limit. submit by Jun.Wu 2020.09.22
 * \param[in]  txRateLimitdata: pointer to the struct type of XMCS_GponTxRateLimit_S 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set tx rate limit.
 * \par Example
 * \snippet api_lib_gponmgr.c  Set tx rate limit.
 */
int gponmgr_lib_set_tx_rate_limit(struct XMCS_GponTxRateLimit_S *txRateLimitdata);

/**
 * \brief
 * This function is used to get the physical media operational.
 * \param[in]	pPhyMedOpe:			pointer of physical media operational 
 * \retval		ECONET_E_SUCCESS:	success
 * \retval		ECONET_E_FAIL:		fail
 * \note
 *  Get the physical media operational.
 */
int gponmgr_lib_get_phy_media_operational(int *pPhyMedOpe);


/**
 * \brief
 * This function is used to get the physical media administrative state.
 * \param[in]	pAdminState:		pointer of physical media administrative state 
 * \retval		ECONET_E_SUCCESS:	success
 * \retval		ECONET_E_FAIL:		fail
 * \note
 *  Get the physical media administrative state.
 */
int gponmgr_lib_get_phy_media_admin_state(int *pAdminState);


/**
 * \brief
 * This function is used to set the physical media administrative state.
 * \param[in]	adminState:			value of physical media administrative state 
 * \retval		ECONET_E_SUCCESS:	success
 * \retval		ECONET_E_FAIL:		fail
 * \note
 *  Set the physical media operational.
 */
int gponmgr_lib_set_phy_media_admin_state(int adminState);


/**
 * \brief
 * This function is used to get the physical media module informations.
 * \param[in]	pPhyMedModule:		pointer of physical module informations 
 * \retval		ECONET_E_SUCCESS:	success
 * \retval		ECONET_E_FAIL:		fail
 * \note
 *  Get the physical media module informations.
 */
int gponmgr_lib_get_phy_media_module(phyMedModule_t *pPhyMedModule);

int gponmgr_lib_clear_tcontcounter(uint8_t tcontId);

/**
 * \brief This function is used to get distance .
 *
 * This function is used to get distance. submit by Wei.Sun 2022.05.24
 * \param[in]  distance: distance ptr 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get distance.
 * \par Example
 * \snippet api_lib_gponmgr.c  Get distance
 */
int gponmgr_lib_get_OLT_distance(int* distance);

/**
 * \brief This function is used to get xgpon detail information.
 *
 * This function is used to get xgpon detail information. submit by Jun.Wu 2020.09.22
 * \param[out]  pxgponOnuInfo: pointer to the struct type of XGMCS_XgponOnuInfo_S 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get xgpon detail information.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Get xgpon detail information.
 */
int xgponmgr_lib_get_info(struct XGMCS_XgponOnuInfo_S *pxgponOnuInfo);


/**
 * \brief This function is used to get the xgpon onu response time.
 *
 * This function is used to get the xgpon onu response time. submit by Jun.Wu 2020.09.22
 * \param[out]  onuRespTime: pointer to the unsigned short type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the xgpon onu response time.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Get the xgpon onu response time.
 */
int xgponmgr_lib_get_onuRespTime(unsigned short *onuRespTime);


/**
 * \brief This function is used to set xgpon master session key.
 *
 * This function is used to set xgpon master session key. submit by Jun.Wu 2020.09.22
 * \param[in]  msk: master session key 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set xgpon master session key.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Set xgpon master session key.
 */
int xgponmgr_lib_set_msk(unsigned char *msk);


/**
 * \brief This function is used to set xgpon omci broadcast key.
 *
 * This function is used to set xgpon omci broadcast key. submit by Jun.Wu 2020.09.22
 * \param[in]  key: pointer to the uint8_t type 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set xgpon omci broadcast key.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Set xgpon omci broadcast key.
 */
int xgponmgr_lib_set_omci_broadcast_key(uint8_t *key);


/**
 * \brief This function is used to clean xgpon omci broadcast key .
 *
 * This function is used to clean xgpon omci broadcast key. submit by Jun.Wu 2020.09.22
 * \param[in]  key: pointer to the uint8_t type 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Clean xgpon omci broadcast key.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Clean xgpon omci broadcast key.
 */
int xgponmgr_lib_clean_omci_broadcast_key(uint8_t *key);


/**
 * \brief This function is used to get 10G GPON TC counter.
 *
 * This function is used to get 10G GPON TC counter. submit by Jun.Wu 2020.09.22
 * \param[out]  xgponTCCounter: pointer to the struct type of GPON_10G_TC_COUNTER_T 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get 10G GPON TC counter.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Get 10G GPON TC counter.
 */
int xgponmgr_lib_get_TC_counter(GPON_10G_TC_COUNTER_T *xgponTCCounter);


/**
 * \brief This function is used to get 10G GPON downstream ploam counter.
 *
 * This function is used to get 10G GPON downstream ploam counter. submit by Jun.Wu 2020.09.22
 * \param[out]  xgponDsMgntCounter: pointer to the struct type of GPON_10G_DS_MGNT_COUNTER_T 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get 10G GPON downstream ploam counter.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Get 10G GPON downstream ploam counter.
 */
int xgponmgr_lib_get_ds_mgnt_counter(GPON_10G_DS_MGNT_COUNTER_T *xgponDsMgntCounter);


/**
 * \brief This function is used to get 10G GPON upstream ploam counter.
 *
 * This function is used to get 10G GPON upstream ploam counter. submit by Jun.Wu 2020.09.22
 * \param[out]  xgponUsMgntCounter: pointer to the struct type of GPON_10G_US_MGNT_COUNTER_T 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get 10G GPON upstream ploam counter.
 * \par Example
 * \snippet api_lib_xgponmgr.c  Get 10G GPON upstream ploam counter.
 */
int xgponmgr_lib_get_us_mgnt_counter(GPON_10G_US_MGNT_COUNTER_T *xgponUsMgntCounter);
int xgponmgr_lib_set_onu_up_AES_mode(UPAES_Mode_t mode);


/**
 * \brief This function is used to get epon onu mac address.
 *
 * This function is used to get epon onu mac address. submit by Jun.Wu 2020.09.22
 * \param[out]  devMac: pointer to the unsigned uint8_t type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon onu mac address.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get epon onu mac address.
 */
int eponmgr_lib_get_dev_mac(uint8_t *devMac);


/**
 * \brief This function is used to get epon onu type.
 *
 * This function is used to get epon onu type. submit by Jun.Wu 2020.09.22
 * \param[out]  onuType: pointer to the struct type of XMCSIF_OnuType_t 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon onu type.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get epon onu type.
 */
int eponmgr_lib_get_onu_type(XMCSIF_OnuType_t * onuType);


/**
 * \brief This function is used to get epon phy transceiver information(temperature,voltage,txCurrent,txPower rxPower).
 *
 * This function is used to get epon phy transceiver information. submit by Jun.Wu 2020.09.22
 * \param[out]  info: pointer to the struct type of PHY_PARAMS_t 
 *							this struct contain information about bosa		
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon phy transceiver information.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get epon phy transceiver information.
 */
int eponmgr_lib_get_transceiver_info(PHY_PARAMS_t * info);

/**
 * \brief This function is used to set epon llid.
 *
 * This function is used to set epon llid. submit by Toby.Chen 2022.11.15
 * \param[in]  eponLlidInfoConfig: pointer to the llid info
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon llid.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon llid.
 */
int eponmgr_lib_get_llid_info(struct XMCS_EponLlidInfo_S * eponLlidInfoConfig);

/**
 * \brief This function is used to set epon llid.
 *
 * This function is used to set epon llid. submit by Toby.Chen 2022.11.15
 * \param[in]  llididx: index of the llid info; llid: value of llid
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon llid.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon llid.
 */
int eponmgr_lib_set_llid(unsigned char llididx, unsigned short llid);

/**
 * \brief This function is used to set epon rx config.
 *
 * This function is used to set epon rx config. submit by Jun.Wu 2020.09.22
 * \param[in]  eponRxConfig: pointer to the struct type of EponRxConfig_t 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon rx config.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon rx config.
 */
int eponmgr_lib_set_rx_config(EponRxConfig_t * eponRxConfig);


/**
 * \brief This function is used to set epon tx config.
 *
 * This function is used to set epon tx config. submit by Jun.Wu 2020.09.22
 * \param[in]  eponTxConfig: pointer to the struct type of EponTxConfig_t 
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon tx config.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon tx config.
 */
int eponmgr_lib_set_tx_config(EponTxConfig_t * eponTxConfig);


/**
 * \brief This function is used to epon configure congest.
 *
 * This function is used to epon configure congest. submit by Jun.Wu 2020.09.22
 * \param[in]  mask: mask
 * \param[in]  pwanCongest: pointer to the struct type of XMCS_TxQueueCongestion_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  EPON configure congest.
 * \par Example
 * \snippet api_lib_eponmgr.c  EPON configure congest.
 */
int eponmgr_lib_set_congest_config(unsigned int mask, struct XMCS_TxQueueCongestion_S *pwanCongest);


/**
 * \brief This function is used to epon configure trtcm parameter.
 *
 * This function is used to epon configure trtcm parameter. submit by Jun.Wu 2020.09.22
 * \param[in]  pwanTrtcmParameters: pointer to the struct type of XMCS_TxQueueTrtcm_S
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  EPON configure trtcm parameter.
 * \par Example
 * \snippet api_lib_eponmgr.c  EPON configure trtcm parameter.
 */
int eponmgr_lib_set_trtcm_params(struct XMCS_TxQueueTrtcm_S * pwanTrtcmParameters);


/**
 * \brief This function is used to set epon phy power disable time.
 *
 * This function is used to set epon phy power disable time. submit by Jun.Wu 2020.09.22
 * \param[in]  time: time
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon phy power disable time.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon phy power disable time.
 */
int eponmgr_lib_set_phy_power_disable_time(uint32_t time);

/**
 * \brief This function is used to init event.
 *
 * This function is used to init event. submit by Jun.Wu 2020.09.22
 * \param[in]  pf_mpcp_state_callback: pointer to the callback
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Init event.
 * \par Example
 * \snippet api_lib_eponmgr.c  Init event.
 */
int eponmgr_lib_event_init(void* pf_mpcp_state_callback);


/**
 * \brief This function is used to set epon auth fail.
 *
 * This function is used to set epon auth fail. submit by Jun.Wu 2020.09.22
 * \param[in]  authStatus: authStatus
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon auth fail.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon pauth fail.
 */
int eponmgr_lib_set_auth_status(uint8_t authStatus);

/**
 * \brief This function is used to get llid value.
 *
 * This function is used to get llid value. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index
 * \param[in]  value: pointer to the value of llid
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get llid value.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get llid value.
 */
int eponmgr_lib_get_llid_value(uint8_t llidIdx, uint16_t * value);



/**
 * \brief This function is used to set 1g EPON llid key.
 *
 * This function is used to set 1g EPON llid key. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  keyIndex: keyIndex
 * \param[in]  key: key value
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set 1g EPON llid key.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set 1g EPON llid key.
 */
int eponmgr_lib_set_1g_llid_key(uint8_t llidIdx, uint8_t keyIndex, uint8_t *key);



/**
 * \brief This function is used to set 10g EPON llid key.
 *
 * This function is used to set 10g EPON llid key. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  keyIndex: keyIndex
 * \param[in]  key: key value
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set 10g EPON llid key.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set 10g EPON llid key.
 */
int eponmgr_lib_set_10g_llid_key(uint8_t llidIdx, uint8_t keyIndex, uint8_t *key);

/**
 * \brief This function is used to set dpoe llid key.
 *
 * This function is used to set dpoe llid key. submit by weifeng 2021.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  keyIndex: keyIndex
 * \param[in]  key: key value
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set dpoe llid key.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set dpoe llid key. */

int eponmgr_lib_set_DPOE_llid_key(uint8_t llidIdx, uint8_t keyIndex, uint8_t *key);


/**
 * \brief This function is used to get epon llid tx fec.
 *
 * This function is used to get epon llid tx fec. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[out]  fec_tx: pointer to the unsigned char type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon llid tx fec.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get epon llid tx fec.
 */
int eponmgr_lib_get_llid_tx_fec(uint8_t llidIdx, unsigned char * fec_tx);


/**
 * \brief This function is used to set epon llid tx fec.
 *
 * This function is used to set epon llid tx fec. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  fecFlag: fec Flag
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon llid tx fec.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon llid tx fec.
 */
int eponmgr_lib_set_llid_tx_fec(uint8_t llidIdx, uint8_t fecFlag);

/**
 * \brief This function is used to set epon txoamfav.
 *
 * This function is used to set epon txoamfav. submit by Toby.Chen 2022.12.07
 * \param[in]  value: 0|1 for setting 25th bit
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon txoamfav.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon txoamfav.
 */
int eponmgr_lib_set_txoamfav(unsigned char value);

/**
 * \brief This function is used to set epon txoamfav.
 *
 * This function is used to set epon txoamfav. submit by Toby.Chen 2022.12.07
 * \param[in]  value: 0|1 for setting 25th bit
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon txoamfav.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon txoamfav.
 */
int eponmgr_lib_set_autoSwitchOamFav(unsigned char value);

/**
 * \brief This function is used to get llid rx fec.
 *
 * This function is used to get llid rx fec. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  fec_rx: pointer to the vlaue of rx fec.
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get llid rx fec.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get llid rx fec.
 */
int eponmgr_lib_get_llid_rx_fec(uint8_t llidIdx, unsigned char *fec_rx);

/**
 * \brief This function is used to set epon llid tx fec.
 *
 * This function is used to set epon llid tx fec. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  fecFlag: fec Flag
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon llid tx fec.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon llid tx fec.
 */
int eponmgr_lib_set_llid_tx_fec(uint8_t llidIdx, uint8_t fecFlag);

/**
 * \brief This function is used to set epon llid rx fec.
 *
 * This function is used to set epon llid rx fec. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llidIdx
 * \param[in]  fecFlag: fec Flag
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon llid rx fec.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set epon llid rx fec.
 */
int eponmgr_lib_set_llid_rx_fec(uint8_t llidIdx, uint8_t fecFlag);


/**
 * \brief This function is used to set the queue sets number of a certain LLID.
 *
 * This function is used to set the queue sets number of a certain LLID. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \param[in]  QueueSetNum: queue sets number
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set the queue sets number of a certain LLID.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set the queue sets number of a certain LLID.
 */
int eponmgr_lib_set_llid_queue_sets_num(uint8_t llid, unsigned char QueueSetNum);



/**
 * \brief This function is used to get the number of queue sets of a certain LLID.
 *
 * This function is used to get the number of queue sets of a certain LLID. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIndex: llidIndex
 * \param[out]  queueSetNum: queue sets number
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the number of queue sets of a certain LLID.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get the number of queue sets of a certain LLID.
 */
int eponmgr_lib_get_llid_queue_sets_num(uint8_t llidIndex, uint8_t *queueSetNum);


/**
 * \brief This function is used to set the epon llid DBA thrshld.
 *
 * This function is used to set the epon llid DBA thrshld. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \param[in]  threshold: pointer to the uint16_t type
 * \param[in]  bitmap: bitmap
 * \param[in]  queueSetIdx: queueSetIdx
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set the epon llid DBA thrshld.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set the epon llid DBA thrshld.
 */
int eponmgr_lib_set_llid_DBA_thrshld(uint8_t llid, uint16_t *threshold, uint8_t bitmap, uint8_t queueSetIdx);


/**
 * \brief This function is used to get the epon llid DBA thrshld.
 *
 * This function is used to get the epon llid DBA thrshld. submit by Jun.Wu 2020.09.22
 * \param[in]  llid: llid
 * \param[out]  threshold: pointer to the uint16_t type
 * \param[out]  bitmap: pointer to the uint8_t type
 * \param[out]  queueSetIdx: pointer to the uint8_t type
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get the epon llid DBA thrshld.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get the epon llid DBA thrshld.
 */
int eponmgr_lib_get_llid_DBA_thrshld(uint8_t llidIndex, uint16_t *threshold,  uint8_t *bitmap, uint8_t queueSetIndex);


/**
 * \brief This function is used to set onu hold over cfg.
 *
 * This function is used to set onu hold over cfg. submit by Jun.Wu 2020.09.22
 * \param[in]  enable: enable
 * \param[in]  time: time
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set onu hold over cfg.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set onu hold over cfg.
 */
int eponmgr_lib_set_onu_hold_over_cfg(uint8_t enable, uint16_t time);


/**
 * \brief This function is used to set port loop detect.
 *
 * This function is used to set port loop detect. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \param[in]  active: active/deactive
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set port loop detect.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set port loop detect.
 */
int setPortLoopDetect(uint8_t portId, uint32_t active);


/**
 * \brief This function is used to set port disable looped.
 *
 * This function is used to set port disable looped. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \param[in]  active: active/deactive
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set port disable looped.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set port disable looped.
 */
int setPortDisableLooped(uint8_t portId, uint32_t active);


/**
 * \brief This function is used to set port loop parameter config.
 *
 * This function is used to set port loop parameter config. submit by Jun.Wu 2020.09.22
 * \param[in]  portId: port id
 * \param[in]  detectFrequency: detectFrequency
 * \param[in]  recoInterval: recoInterval
 * \param[in]  svlan: svlan
 * \param[in]  cvlan: cvlan
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set port loop parameter config.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set port loop parameter config.
 */
int setPortLoopParameterConfig(uint8_t portId, uint16_t detectFrequency,uint16_t recoInterval,uint16_t svlan,uint16_t cvlan);


/**
 * \brief This function is used to get port loop detect.
 *
 * This function is used to get port loop detect. submit by Jun.Wu 2020.09.22
 * \param[in]  port: port id
 * \retval	   Success:return active/deactive
 * \retval	  -1 Fail.
 * \note
 *  Get port loop detect.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get port loop detect.
 */
int getLoopStatus(int port);

/**
 * \brief This function is used to get gnx MD5 key.
 *
 * This function is used to get gnx MD5 key. submit by Jun.Wu 2020.09.22
 * \param[in]  data: pointer to the value
 * \retval	   Success:return active/deactive
 * \retval	  -1 Fail.
 * \note
 * Get gnx MD5 key.
 * \par Example
 * \snippet api_lib_eponmgr.c  Get gnx MD5 key.
 */
int eponmgr_lib_get_gnx_MD5_data(unsigned char *data);

int ponmgr_lib_set_auto_mode_flag(AutoMode_Combo_Type_t isAutoMode);

/**
 * \brief This function is used to get physical media alarm.
 *
 * This function is used to get physical media alarm. 
 * \param[in]  alarminfo: pointer to the value
 * \retval	   Success:return alarm bit
 * \retval	  -1 Fail.
  * \note
 * Get alarm info.
 */
int gponmgr_lib_get_alarm(GPON_Alarm_T *alarminfo);
/**
 * \brief This function is used to get the status of phy.
 *
 * This function is used to get the status of phy. 
 * \param[in]  phyStat: pointer to the value
 * \retval	   Success:return phy status
 * \retval	  -1 Fail.
  * \note
 * Get the status of phy.
 */
int gponmgr_lib_get_phy_status(PHY_STATUS_t * phyStat);

/**
 * \brief This function is used to set the signal fail threshold of phy.
 *
 * This function is used to set the signal fail threshold of phy. 
 * \param[in]  threshold: the value of threshold
 * \retval	   Success:0
 * \retval	  -1 Fail.
  * \note
 * Set the signal fail threshold of phy.
 */
int gponmgr_lib_set_phy_signal_fail_threshold(unsigned int threshold);

/**
 * \brief This function is used to get the signal fail threshold of phy.
 *
 * This function is used to get the signal fail threshold of phy. 
 * \param[out]  threshold: the value of threshold
 * \retval	   Success:0
 * \retval	  -1 Fail.
  * \note
 * Get the signal fail threshold of phy.
 */
int gponmgr_lib_get_phy_signal_fail_threshold(unsigned int * threshold);

/**
 * \brief This function is used to set the signal degrade threshold of phy.
 *
 * This function is used to set the signal degrade threshold of phy. 
 * \param[in]  threshold: the value of threshold
 * \retval	   Success:0
 * \retval	  -1 Fail.
  * \note
 * Set the signal degrade threshold of phy.
 */
int gponmgr_lib_set_phy_signal_degrade_threshold(unsigned int threshold);

/**
 * \brief This function is used to get the signal degrade threshold of phy.
 *
 * This function is used to get the signal degrade threshold of phy. 
 * \param[out]  threshold: the value of threshold
 * \retval	   Success:0
 * \retval	  -1 Fail.
  * \note
 * Get the signal degrade threshold of phy.
 */
int gponmgr_lib_get_phy_signal_degrade_threshold(unsigned int * threshold);

/**
 * \brief This function is used to get ploam activation counter.
 *
 * This function is used to get ploam activation counter. 
 * \param[in]  activationCnt: pointer to the value
 * \retval	   Success:return activationcounter
 * \retval	  -1 Fail.
  * \note
 * Get ploam activation counter.
 */
int gponmgr_lib_get_activation_counter(uint32_t *activationCnt);
/**
 * \brief This function is used to get ploam message counter.
 *
 * This function is used to get ploam message counter. 
 * \param[in]  activationCnt: pointer to the value
 * \retval	   Success:return message counter
 * \retval	  -1 Fail.
  * \note
 * Get ploam message counter.
 */
int gponmgr_lib_get_ploamMsg_counter(GPON_PLOAM_CNT_T* msgCnt);
/**
 * \brief This function is used to get omci message counter.
 *
 * This function is used to get omci message counter. 
 * \param[in]  activationCnt: pointer to the value
 * \retval	   Success:return message counter
 * \retval	  -1 Fail.
  * \note
 * Get omci message counter.
 */
int gponmgr_lib_get_omciMsg_counter(GPON_OMCI_CNT_T * counter);
/**
 * \brief This function is used to get omci baseline message counter.
 *
 * This function is used to get omci baseline message counter.
 * \param[in]  activationCnt: pointer to the value
 * \retval	   Success:return message counter
 * \retval	  -1 Fail.
  * \note
 * Get omci externed message counter.
 */
int gponmgr_lib_get_omciMsg_base_counter(GPON_OMCI_CNT_T * counter);
/**
 * \brief This function is used to get omci externed message counter.
 *
 * This function is used to get omci externed message counter.
 * \param[in]  activationCnt: pointer to the value
 * \retval	   Success:return message counter
 * \retval	  -1 Fail.
  * \note
 * Get omci externed message counter.
 */
int gponmgr_lib_get_omciMsg_ext_counter(GPON_OMCI_CNT_T * counter);

/**
 * \brief This function is used to set xpon_led.
 *
 * This function is used to set xpon_led. 
 * \param[in]  data: led mode
 * \retval	   Success:return 0
 * \retval	  -1 Fail.
 * \note
 *  Set xpon_led.
 * \par Example
 * \snippet api_lib_eponmgr.c  Set xpon_led.
 */
int eponmgr_lib_set_xpon_led(uint32_t mode);
#endif
