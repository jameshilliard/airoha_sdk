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
	libepon.h

	Abstract:

	Revision History:
	Who			When			What
	--------	----------		----------------------------------------------
	Name		Date			Modification logs
	JQ.zhu		2012/7/20	Create
*/


#ifndef _EPON_LIB_H_
#define _EPON_LIB_H_

/**
* \file  libepon.h
* \brief This file is lib epon header file that will be exported for others to use.
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
#include <asm/ioctl.h>
#include <sys/ioctl.h>
#include <stdint.h>
#include "libcompileoption.h"
#include "xpon_ioctl_if.h"

/*
**********************************************************************************
epon mac ioctl data structure.
**********************************************************************************
*/

/************************************************************************
*		   D E F I N E S	&	C O N S T A N T S
*************************************************************************
*/

/************************************************************************
* 		   M A C R O S
*************************************************************************
*/
#ifdef TCSUPPORT_EPON_CTC_POWERSAVING
#define EPON_PS_CMD_SLP_CTL  0
#define EPON_PS_CMD_CFG_GET  1
#define EPON_PS_CMD_CFG_SET  2

typedef struct eponPsIoctl_s{
	uint8_t cmdType;
	uint32_t  startTime;  // timestamp(TQ)
	uint32_t  sleepDuration;  // the duration of the sleep period
	uint32_t  wakeDuration;
	uint8_t sleepFlag;
	uint8_t sleepMode;
	uint8_t earlyWakeup;
	uint8_t sleepDurationMax[6];
}eponPsIoctl_t, *eponPsIoctl_Ptr;
int eponApiCtlPs(eponPsIoctl_Ptr cscp);
#endif


#define EPONOAM_MQ_FLAG_PATH                    "/tmp/epon_oam/epon_oam_cmd_queue"
#define EPONOAM_PROJID                          10
#define EPONOAM_CMD_INFO_LEN                    128

#define EPONOAM_CMD_TYPE_DEBUGLEVEL			    1
#define EPONOAM_CMD_TYPE_INIT					2
#define EPONOAM_CMD_TYPE_STOP				    3
#define EPONOAM_CMD_TYPE_DESTORY			    4
#define EPONOAM_CMD_TYPE_SHOW_STATUS		    5
#define EPONOAM_CMD_TYPE_STOPPDUTM			    6
#define EPONOAM_CMD_TYPE_SEND_NORMAL_PDU	    7
#define EPONOAM_CMD_TYPE_SEND_CRITICAL_PDU	    8
#define EPONOAM_CMD_TYPE_LOCALSATISFY		    9

#define EPONOAM_CMD_TYPE_CTC_DBG_LVL 			10
#define EPONOAM_CMD_TYPE_CTC_SET_DSCVY_STATE 	11
#define EPONOAM_CMD_TYPE_OAM_ALARM   			12

#define EPONOAM_CMD_TYPE_LAN_DBG		        15
#define EPONOAM_CMD_TYPE_TMSENDINFO		        16
#define EPONOAM_CMD_TYPE_SEND_DYGASP	        17
#define EPONOAM_CMD_TYPE_LOSTTMOUT              18
#define EPONOAM_CMD_TYPE_MAXPDUNUMPERSEC        19
#define EPONOAM_CMD_DRIVER_EVENT                20 // ltm new
#define EPONOAM_CMD_TYPE_RESTART                21
#define EPONOAM_CMD_TYPE_SAVECFG                22
#define EPONOAM_CMD_TYPE_LOADCFG                23
#define EPONOAM_CMD_TYPE_UPDATACFG              24
#define EPONOAM_CMD_TYPE_ONUTYPE                25
#define EPONOAM_CMD_TYPE_SET_TRAFFIC_DOWN	    26
#define EPONOAM_CMD_TYPE_PMMGR_REINIT	        27
#define EPONOAM_CMD_TYPE_MPCP_WANRESET	        28
#define EPONOAM_CMD_TYPE_DPOE_KEY               29





typedef struct eponOamCmdMsg_s{
	uint32_t cmdType;
	uint32_t cmdSeq;
	uint8_t cmdInfo[EPONOAM_CMD_INFO_LEN];
}eponOamCmdMsg_t;

typedef struct eponOamIpcCmdMsg_s{
	long msgType;
	eponOamCmdMsg_t msg;
}eponOamIpcCmdMsg_t;


/************************************************************************
*		   D A T A	 T Y P E S
*************************************************************************
*/

/************************************************************************
*		   D A T A	 D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*				F U N C T I O N   D E C L A R A T I O N S
				I N L I N E  F U N C T I O N  D E F I N I T I O N S
*************************************************************************
*/

/**
 * \brief This function is used to set epon onu mpcp time.
 *
 * This function is used to set epon onu mpcp time. submit by Jun.Wu 2020.09.22
 * \param[in]  time: time
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set epon onu mpcp time.
 * \par Example
 * \snippet libepon.c  Set epon onu mpcp time.
 */
int eponApiSetOnuMpcpTime(uint16_t time );

/**
 * \brief This function is used to get epon onu mpcp time.
 *
 * This function is used to get epon onu mpcp time. submit by Jun.Wu 2020.09.22
 * \param[in]  time: time
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get epon onu mpcp time.
 * \par Example
 * \snippet libepon.c  Get epon onu mpcp time.
 */
int eponApiGetOnuMpcpTime(uint16_t *time );

/**
 * \brief This function is used to set mpcp discovery request ack.
 *
 * This function is used to set mpcp discovery request ack. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index
 * \param[in]  ackFlag: ack flag
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set mpcp discovery request ack.
 * \par Example
 * \snippet libepon.c  Set mpcp discovery request ack.
 */
int eponApiSetMpcpDiscvRgstAck(int llidIdx, int ackFlag);

/**
 * \brief This function is used to set local deregister.
 *
 * This function is used to set local deregister. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set local deregister.
 * \par Example
 * \snippet libepon.c  Set local deregister.
 */
int eponApiSetMpcpLocalDeReg(int llidIdx);

/**
 * \brief This function is used to set mac reset.
 *
 * This function is used to set mac reset. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set mac reset.
 * \par Example
 * \snippet libepon.c  Set mac reset.
 */
int eponApiSetMacReset();

/**
 * \brief This function is used to set onu holdover cfg.
 *
 * This function is used to set onu holdover cfg. submit by Jun.Wu 2020.09.22
 * \param[in]  enable: enable
 * \param[in]  time: time
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Set onu holdover cfg.
 * \par Example
 * \snippet libepon.c  Set onu holdover cfg.
 */
int eponApiSetOnuHoldoverCfg(uint8_t enable,uint16_t time );

/**
 * \brief This function is used to get onu holdover cfg.
 *
 * This function is used to get onu holdover cfg. submit by Jun.Wu 2020.09.22
 * \param[in]  enable: enable
 * \param[in]  time: time
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Get onu holdover cfg.
 * \par Example
 * \snippet libepon.c  Get onu holdover cfg.
 */
int eponApiGetOnuHoldoverCfg(uint8_t *enable, uint16_t *time );

/**
 * \brief This function is used to clear onu tx and rx counter.
 *
 * This function is used to clear onu tx and rx counter. submit by Jun.Wu 2020.09.22
 * \param[in]  clearTx: clear tx counter
 * \param[in]  clearRx: clear rx counter
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 *  Clear onu tx and rx counter.
 * \par Example
 * \snippet libepon.c  Clear onu tx and rx counter.
 */
int eponApiClearOnuTxRxCnt(uint8_t clearTx, uint8_t clearRx );

/**
 * \brief This function is used to get onu tx  counter.
 *
 * This function is used to get onu tx  counter. submit by Jun.Wu 2020.09.22
 * \param[in]  clearTx: clear tx counter
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Get onu tx  counter.
 * \par Example
 * \snippet libepon.c  Get onu tx counter.
 */
int eponApiGetOnuTxCnt(eponTxCnt_t *txCnt );

/**
 * \brief This function is used to get onu rx counter.
 *
 * This function is used to get onu rx counter. submit by Jun.Wu 2020.09.22
 * \param[in]  clearRx: clear rx counter
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Get onu rx counter.
 * \par Example
 * \snippet libepon.c  Get onu rx counter.
 */
int eponApiGetOnuRxCnt(eponRxCnt_t *rxCnt );

/**
 * \brief This function is used to get onu mpcp counter.
 *
 * This function is used to get onu mpcp counter. 
 * \param[in]  llidIdx, mpcp_counter
 * \retval	   0  Success.
 * \retval	  -1  Fail.
 * \note
 * Get onu mpcp counter.
 * \par Example
 * \snippet libepon.c  Get onu mpcp counter.
 */
int blapi_pon_get_mpcp_cnt(uint8_t llidIdx, eponMpcpCnt_t *mpcp_counter);

/**
 * \brief This function is used to get onu DDM.
 *
 * This function is used to get onu DDM. 
 * \param[in]  onuDDM
 * \retval	   0  Success.
 * \retval	  -1  Fail.
 * \note
 * Get onu DDM.
 * \par Example
 * \snippet libepon.c  Get onu DDM.
 */
int blapi_pon_get_onu_DDM(onuDDM_t *onuDDM);

/**
 * \brief This function is used to set led status.
 *
 * This function is used to set led status. 
 * \param[in]  ledStatus
 * \retval	   0  Success.
 * \retval	  -1  Fail.
 * \note
 * Set led status.
 * \par Example
 * \snippet libepon.c  Set led status.
 */
int blapi_pon_set_led_status(uint8_t ledStatus);

/**
 * \brief This function is used to set clear statistic.
 *
 * This function is used to set clear statistic. 
 * \param[in]  isClearSta
 * \retval	   0  Success.
 * \retval	  -1  Fail.
 * \note
 * Set clear statistic.
 * \par Example
 * \snippet libepon.c  Set clear statistic.
 */
int blapi_pon_set_clear_statistic(uint8_t isClearSta);

/**
 * \brief This function is used to get llid key.
 *
 * This function is used to get llid key. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  keyIndex: key index
 * \param[in]  key: pointer to key value
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Get llid key.
 * \par Example
 * \snippet libepon.c  Get llid key.
 */
int eponApiGetLlidkey(uint8_t llidIdx, uint8_t keyIndex, uint8_t *key);

/**
 * \brief This function is used to set llid key.
 *
 * This function is used to set llid key. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  keyIndex: key index
 * \param[in]  key: pointer to key value
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Set llid key.
 * \par Example
 * \snippet libepon.c  Set llid key.
 */
int eponApiSetLlidkey(uint8_t llidIdx, uint8_t keyIndex, uint8_t *key);
/**
 * \brief This function is used to set MACSec info.
 *
 * This function is used to set MACSec key. submit by Jun.Wu 2020.09.22
 * \param[in]  info: pointer to macsec info
 * \retval	   0  Success.
 * \retval	  -1 Fail.
 * \note
 * Set MACSec info.
 * \par Example
 * \snippet libepon.c  Set MACSec Info.
 */
int eponApiSetMacSecInfo(unsigned char* info);

/**
 * \brief This function is used to set epon llid enable mask.
 *
 * This function is used to set epon llid enable mask. submit by Jun.Wu 2020.09.22
 * \param[in]  mask: nable mask
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set epon llid enable mask.
 * \par Example
 * \snippet libepon.c  Set epon llid enable mask.
 */
int eponCmdSetLlidMask(uint32_t mask);

/**
 * \brief This function is used to set epon llid dba threshold num.
 *
 * This function is used to set epon llid dba threshold num. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  num: number
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set epon llid dba threshold num.
 * \par Example
 * \snippet libepon.c  Set epon llid dba threshold num.
 */
int eponApiSetLlidDBAThrshldNum(uint8_t llidIdx, uint8_t num);

/**
 * \brief This function is used to get epon llid dba threshold num.
 *
 * This function is used to get epon llid dba threshold num. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  num: number
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get epon llid dba threshold num.
 * \par Example
 * \snippet libepon.c  Get epon llid dba threshold num.
 */
int eponApiGetLlidDBAThrshldNum(uint8_t llidIdx, uint8_t *num);

/**
 * \brief This function is used to set epon llid dba threshold .
 *
 * This function is used to set epon llid dba threshold. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  thrshldIndex: threshold index 
 * \param[in]  mask: mask
 * \param[in]  threshold: pointer to the threshold
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Set epon llid dba threshold.
 * \par Example
 * \snippet libepon.c  Set epon llid dba threshold.
 */
int eponApiSetLlidDBAThrshld(uint8_t llidIdx, uint8_t thrshldIndex, uint8_t mask,uint16_t *threshold );

/**
 * \brief This function is used to get epon llid dba threshold .
 *
 * This function is used to get epon llid dba threshold. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  thrshldIndex: threshold index 
 * \param[in]  mask: mask
 * \param[in]  threshold: pointer to the threshold
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Get epon llid dba threshold.
 * \par Example
 * \snippet libepon.c  Get epon llid dba threshold.
 */
int eponApiGetLlidDBAThrshld(uint8_t llidIdx, uint8_t thrshldIndex, uint8_t mask,uint16_t *threshold );

/**
 * \brief This function is used to set epon phy power.
 *
 * This function is used to set epon phy power. submit by Jun.Wu 2020.09.22
 * \param[in]  time: time 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 * Set epon phy power.
 * \par Example
 * \snippet libepon.c  Set epon phy power.
 */
int eponApiSetPhyPower(unsigned int time);

/**
 * \brief This function is used to set authentication fail.
 *
 * This function is used to set authentication fail. submit by Jun.Wu 2020.09.22
 * \param[in]  isAuthFail:  authentication fail
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 * Set authentication fail.
 * \par Example
 * \snippet libepon.c  Set authentication fail.
 */
int eponApiSetAuthFail(uint8_t isAuthFail);

/**
 * \brief This function is used to set 10G llid key.
 *
 * This function is used to set 10G llid key. submit by Jun.Wu 2020.09.22
 * \param[in]  llidIdx: llid index 
 * \param[in]  keyIndex: key index
 * \param[in]  key: pointer to key value
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 * Set 10G llid key.
 * \par Example
 * \snippet libepon.c  Set 10G llid key.
 */
int eponApiSet10GLlidKey(uint8_t llidIdx, uint8_t keyIndex, uint8_t *key);


/**
 * \brief This function is used to get epon mode.
 *
 * This function is used to get epon mode. submit by Jun.Wu 2020.09.22
 * \param[in]  void
 * \retval	  epon mode:  0: RATE_1G_1G, 1: RATE_10G_1G_ASYM, 2: RATE_10G_10G_SYM
 * \note
 *  Get epon mode.
 * \par Example
 * \snippet libepon.c  Get epon mode.
 */
uint8_t eponApiGetEponMode(void);

/**
 * \brief This function is used to send epon oam cmd message.
 *
 * This function is used to send epon oam cmd message. submit by Jun.Wu 2020.09.22
 * \param[in]  msgType:message type
 * \param[in]  buf: pointer to the buf
 * \param[in]  len:length
 * \param[in]  cmdSeqOut:pointer to the cmdSeqOut 
 * \retval	  0	Success.
 * \retval	 -1	Fail.
 * \note
 *  Send epon oam cmd message.
 * \par Example
 * \snippet libepon.c  Send epon oam cmd message.
 */
int sendEponOamCmdMsg(uint32_t msgType, uint8_t *buf, uint32_t len , uint32_t *cmdSeqOut);


#endif /* _EPON_LIB_H_ */

