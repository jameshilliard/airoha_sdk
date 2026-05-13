/***************************************************************
Copyright Statement:

This software/firmware and related documentation (隆掳EcoNet Software隆卤) 
are protected under relevant copyright laws. The information contained herein 
is confidential and proprietary to EcoNet (HK) Limited (隆掳EcoNet隆卤) and/or 
its licensors. Without the prior written permission of EcoNet and/or its licensors, 
any reproduction, modification, use or disclosure of EcoNet Software, and 
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
DOCUMENTATIONS (隆掳ECONET SOFTWARE隆卤) RECEIVED FROM ECONET 
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 隆掳AS IS隆卤 
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY 
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE. 
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
THAT IT IS RECEIVER隆炉S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES 
MADE TO RECEIVER隆炉S SPECIFICATION OR CONFORMING TO A PARTICULAR 
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
ECONET'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE ECONET 
SOFTWARE RELEASED HEREUNDER SHALL BE, AT ECONET'S SOLE OPTION, TO 
REVISE OR REPLACE THE ECONET SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO ECONET FOR SUCH 
ECONET SOFTWARE.
***************************************************************/

/************************************************************************
*                  I N C L U D E S
*************************************************************************
*/
#include "hsgmii_lan_mac.h"
#include "hsgmii_lan_api.h"
#include "hsgmii_lan_proc.h"
#include "serdes.h"
#include <linux/proc_fs.h>

//#include "hsgmii_lan_virtual_if.h"

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/

/************************************************************************
*                  M A C R O S
*************************************************************************
*/
#define RX_BUF_LEN 	(2048 - NET_SKB_PAD - 64 - (sizeof(struct skb_shared_info)))
#define CHK_BUF() {pos = begin + index; if (pos < off) { index = 0; begin = pos; }; if (pos > off + count) goto done;}

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
extern struct net_device *hsgmii_lan_dev;
//extern unsigned int LINK_MODE;
extern unsigned int hsgmii_pcie0_mode;
extern unsigned int hsgmii_pcie1_mode;
extern unsigned int hsgmii_usb_mode;
extern unsigned int hsgmii_eth_mode;

extern unsigned int pcie0_force_dstq;
extern unsigned int pcie1_force_dstq;
extern unsigned int usb_force_dstq;
extern unsigned int eth_force_dstq;

extern int use_unify_eth_name;


/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*                  P U B L I C   D A T A
*************************************************************************
*/
u8 hsgmii_lan_dbg_level = 0;

#if SUPPORT_QDMA_AUTOPATH
unsigned int fast_path_speed_threshold = USXGII_2p5G;
#else
unsigned int fast_path_speed_threshold = LINK_SPEED_MAX;
#endif
int hsgmii_fast_mode_flag = 0;

#ifdef CONFIG_TP_IMAGE
#define HSGMII_REUSE_LAN 0
#define HSGMII_REUSE_WAN 1
int hsmgii_lan_resuse = HSGMII_REUSE_LAN;
EXPORT_SYMBOL(hsmgii_lan_resuse);

#ifdef INCLUDE_ITTIM
int xsi_ether_fastpath = 1;
#endif /* INCLUDE_ITTIM */

#endif /* CONFIG_TP_IMAGE */

/************************************************************************
*                  P R I V A T E   D A T A
*************************************************************************
*/

/************************************************************************
*                  F U N C T I O N   D E F I N I T I O N S
*************************************************************************
*/

static int xsi_macN_dbg_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data, uint hsgmii_index)
{
	int index = 0;
	off_t begin = 0;
	off_t pos = 0;
	
/*xsi cnt*/
    index += sprintf(buf+index, "\nXSI MAC debug cnt:\n");
    CHK_BUF();
    index += sprintf(buf+index, "TX_OCTETS_CNT\t\t\t= 0x%08lx, ", xsiGetTxBytes(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TX_PKT_CNT\t\t\t= 0x%08lx\n", xsiGetTxPktCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TXMBI_ETH_CNT\t\t\t= 0x%08lx, ", xsiGetTxMbiEthCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TXMBI_UCETH_CNT\t\t\t= 0x%08lx\n", xsiGetTxMbiUcEthCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TXMBI_MCETH_CNT\t\t\t= 0x%08lx, ", xsiGetTxMbiMcEthCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TXMBI_BCETH_CNT\t\t\t= 0x%08lx\n", xsiGetTxMbiBcEthCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TXMBI_PAUSEON_CNT\t\t= 0x%08lx, ", xsiGetTxMbiPauseOnCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "TXMBI_PAUSEOFF_CNT\t\t= 0x%08lx\n", xsiGetTxMbiPauseOffCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_OCTETS_CNT\t\t\t= 0x%08lx, ", xsiGetRxBytes(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_PKT_CNT\t\t\t= 0x%08lx\n", xsiGetRxPktCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_ETH_CNT\t\t\t= 0x%08lx, ", xsiGetRxEthCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RXMBI_ETH_CNT\t\t\t= 0x%08lx\n", xsiGetRxMbiPktCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_PAUSEON_CNT\t\t\t= 0x%08lx, ", xsiGetRxPauseOnCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_PAUSEOFF_CNT\t\t\t= 0x%08lx\n", xsiGetRxPauseOffCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_LENERR_CNT\t\t\t= 0x%08lx, ", xsiGetRxLenErrCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_FRAGERR_CNT\t\t\t= 0x%08lx\n", xsiGetRxFragErrCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_CRCERR_CNT\t\t\t= 0x%08lx, ", xsiGetRxCrcErrCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_CODINGERR_CNT\t\t\t= 0x%08lx\n", xsiGetRxCodingErrCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RXMBI_ERRDROP_CNT\t\t= 0x%08lx, ", xsiGetRxMbiErrDropCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RXMBI_SOFDROP_CNT\t\t\t= 0x%08lx\n", xsiGetRxMbiSofDropCnt(hsgmii_index));
    CHK_BUF();
    index += sprintf(buf+index, "RX_FRAME_CNT\t\t\t= 0x%08lx\n", xsiGetRxFrameCnt(hsgmii_index));
    CHK_BUF();
 
/*itf status*/
    index += sprintf(buf+index, "\nXSI MAC interface status:\n");
    CHK_BUF();
    index += sprintf(buf+index, "TX_MBI_ITF %s\n", (xsiGetTxmbiStopSts(hsgmii_index) ? "Disable" : "Enable"));
    CHK_BUF();
    index += sprintf(buf+index, "TX_MPI_ITF %s\n", (xsiGetTxmpiStopSts(hsgmii_index) ? "Disable" : "Enable"));
    CHK_BUF();
    index += sprintf(buf+index, "RX_MBI_ITF %s\n", (xsiGetRxmbiStopSts(hsgmii_index) ? "Disable" : "Enable"));
    CHK_BUF();
    index += sprintf(buf+index, "RX_MPI_ITF %s\n", (xsiGetRxmpiStopSts(hsgmii_index) ? "Disable" : "Enable"));
    CHK_BUF();
    index += sprintf(buf+index, "TX_MPI_MASK %s\n",(xsiIsTxmpiIdle(hsgmii_index) ? "Idle" : "Normal"));
    CHK_BUF();

/*FC enable/disable status*/
    index += sprintf(buf+index, "\nXSI MAC flow control status:\n");
    CHK_BUF();
	index += sprintf(buf+index, "Tx FC %s\n",(xsiIsTxFcOn(hsgmii_index) ? "Enable" : "Disable"));
    CHK_BUF();
    index += sprintf(buf+index, "Rx FC %s\n",(xsiIsRxFcOn(hsgmii_index) ? "Enable" : "Disable"));
    CHK_BUF();

/*debug level dump*/
    index += sprintf(buf+index, "\nXsi dbg level = %d\n",hsgmii_lan_dbg_level);
    CHK_BUF();

/*Xsi mode dump*/
	if(hsgmii_index == XSI_PCIE0_IDX)
    	index += sprintf(buf+index, "\nHsgmii mode = %d\n",hsgmii_pcie0_mode);
	else if (hsgmii_index == XSI_PCIE1_IDX)
		index += sprintf(buf+index, "\nHsgmii mode = %d\n",hsgmii_pcie1_mode);
	else if (hsgmii_index == XSI_USB_IDX)
		index += sprintf(buf+index, "\nHsgmii mode = %d\n",hsgmii_usb_mode);
	else if (hsgmii_index == XSI_ETH_IDX)
		index += sprintf(buf+index, "\nHsgmii mode = %d\n",hsgmii_eth_mode);
    CHK_BUF();

	*eof = 1;

done:
	*start = buf + (off - begin);
	index -= (off - begin);
	if (index<0) 
		index = 0;
	if (index>count) 
		index = count;
	return index;

}

static int xsi_macN_dbg_write_proc(struct file *file, const char *buffer, unsigned long count, void *data, uint hsgmii_index)
{
	char val_string[32] = {0}, subcmd[32] = {0}, param[32] ={0};
	unsigned int value = 0, force_mode = 0, an_mode = 0 ;

	if (count > sizeof(val_string) - 1)
		return -EINVAL ;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT ;

	sscanf(val_string, "%s %s %d %d %d", subcmd, param, &value, &force_mode, &an_mode);
	
	XSI_MSG(XSI_DBG_ERR,"%s %s %d %d %d\n", subcmd, param, value, force_mode, an_mode);
	
	if(!strcmp(subcmd, "cnt")){
		if(!strcmp(param, "clear"))
			xsiClearAllCnt(hsgmii_index);
		else
			goto USAGE;
	}else if(!strcmp(subcmd, "itf")){	
		if(!strcmp(param, "tx_mbi")){
			if(value == 0)
				xsiSetTxmbiDisable(hsgmii_index);
			else if(value == 1)
				xsiSetTxmbiEnable(hsgmii_index);
			else
				goto USAGE;
		}else if(!strcmp(param, "tx_mpi")){
			if(value == 0)
				xsiSetTxmpiDisable(hsgmii_index);
			else if(value == 1)
				xsiSetTxmpiEnable(hsgmii_index);
			else
				goto USAGE;
		}else if(!strcmp(param, "rx_mbi")){
			if(value == 0)
				xsiSetRxmbiDisable(hsgmii_index);
			else if(value == 1)
				xsiSetRxmbiEnable(hsgmii_index);
			else
				goto USAGE;
		}else if(!strcmp(param, "rx_mpi")){		
			if(value == 0)
				xsiSetRxmpiDisable(hsgmii_index);
			else if(value == 1)
				xsiSetRxmpiEnable(hsgmii_index);
			else
				goto USAGE;
		}else if(!strcmp(param, "tx_mpi_idle")){
			if(value == 0)
				xsiSetTxmpiNormal(hsgmii_index);
			else if(value == 1)
				xsiSetTxmpiIdle(hsgmii_index);
			else
				goto USAGE;
		}
	}
	else if(!strcmp(subcmd, "fc")){
		if(!strcmp(param, "tx")){
			if(value == 0)
				xsiSetTxFcDisable(hsgmii_index);
			else if(value == 1)
				xsiSetTxFcEnable(hsgmii_index);
			else
				goto USAGE;
		}else if(!strcmp(param, "rx")){
			if(value == 0)
				xsiSetRxFcDisable(hsgmii_index);
			else if(value == 1)
				xsiSetRxFcEnable(hsgmii_index);
			else
				goto USAGE;
		}
	}else if(!strcmp(subcmd, "debug")){
		if(!strcmp(param, "level")){
			if(value>=0 && value<=3)
				hsgmii_lan_dbg_level = value;
			else
				goto USAGE;
		}else
			goto USAGE;
	}else if(!strcmp(subcmd, "fragment")){
		if(!strcmp(param, "tx")){
			xsi_mac_set_tx_frag_len(hsgmii_index, value);
		}else if(!strcmp(param, "rx")){
			xsi_mac_set_rx_frag_len(hsgmii_index, value);
		}
		else
			goto USAGE;
	}else if(!strcmp(subcmd, "lpbk")){
		if(!strcmp(param, "enable")){
			xsi_mac_set_lpbk_enable(hsgmii_index, value);
		}
		else
			goto USAGE;
	}else if(!strcmp(subcmd, "ipg")){
		if(!strcmp(param, "config")){
			xsi_mac_set_ipg(hsgmii_index, value);
		}
		else
			goto USAGE;
	}else if(!strcmp(subcmd, "lpi")){
		if(!strcmp(param, "set")){
			xsi_mac_set_lpi(hsgmii_index, value, force_mode);
		}
		else if(!strcmp(param, "get")){
			xsi_mac_get_lpi(hsgmii_index, force_mode);
		}
		else
			goto USAGE;
	}else if(!strcmp(subcmd, "phy")){
		if(!strcmp(param, "up")){
			xsi_mac_api_set_xsgmii_phy_linkstats(hsgmii_index, 1);
		}
		else if(!strcmp(param, "down")){
			xsi_mac_api_set_xsgmii_phy_linkstats(hsgmii_index, 0);
		}
		else
			goto USAGE;
	}else if(!strcmp(subcmd, "change")){
		if(!strcmp(param, "mode")){
			if(value>=USXGII_10G&& value<SPEED_UNKNOW){

				if(hsgmii_index == XSI_PCIE0_IDX){
					hsgmii_pcie0_mode = value;
					xsi_set_xsgmii_serdes_speed(XSI_PCIE0_IDX,hsgmii_pcie0_mode, force_mode, an_mode);
				}else if(hsgmii_index == XSI_PCIE1_IDX){
					hsgmii_pcie1_mode = value;
					xsi_set_xsgmii_serdes_speed(XSI_PCIE1_IDX,hsgmii_pcie1_mode, force_mode, an_mode);

				}else if(hsgmii_index == XSI_USB_IDX){
					hsgmii_usb_mode = value;
					
					xsi_set_xsgmii_serdes_speed(XSI_USB_IDX,hsgmii_usb_mode, force_mode, an_mode);
					
				}else if(hsgmii_index == XSI_ETH_IDX){
					hsgmii_eth_mode = value;
					xsi_set_xsgmii_serdes_speed(XSI_ETH_IDX,hsgmii_eth_mode, force_mode, an_mode);
				}
				
			}else
				goto USAGE;
		}else
			goto USAGE;
	}else
		goto USAGE;
	
	return count ;
	
USAGE:
	XSI_MSG(XSI_DBG_ERR,"echo cnt clear > proc/tc3162/hsgmii_pcie0_mac_dbg \n");
	XSI_MSG(XSI_DBG_ERR,"echo itf [tx_mbi|tx_mpi|rx_mbi|rx_mpi|tx_mpi_idle] [0|1] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");
	XSI_MSG(XSI_DBG_ERR,"echo fc [tx|rx] [0|1] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");
	XSI_MSG(XSI_DBG_ERR,"echo debug level [0|1|2|3] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");
	XSI_MSG(XSI_DBG_ERR,"echo fragment [tx|rx] [value] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");	
	XSI_MSG(XSI_DBG_ERR,"echo lpbk enable [0|1] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");	
	XSI_MSG(XSI_DBG_ERR,"echo ipg config [value] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");	
	XSI_MSG(XSI_DBG_ERR,"echo lpi [get|set] [value] dir[0:TX|1:RX] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");
	XSI_MSG(XSI_DBG_ERR,"echo phy [up|down] > proc/tc3162/hsgmii_pcie0_mac_dbg \n");
	XSI_MSG(XSI_DBG_ERR,"echo change mode [0|1|2|3|4|5] [force 0|1] [an 0|1] > proc/tc3162/hsgmii_pcie0_mac_dbg \n \
						Mode = 0, USXGII_10G.\n\
						Mode = 1, USXGII_5G.\n\
						Mode = 2, USXGII_2p5G.\n\
						Mode = 3, USXGII_1G.\n\
						Mode = 4, USXGII_100M.\n\
						Mode = 5, HSGMII_2p5G.\n\
						Mode = 6, SGMII_1000M.\n\
						Mode = 8, SGMII_100M.\n\
						Mode = 7, SGMII_10M.\n");

	return count ;
}


int hsgmii_force_dstq_mode_read_proc(char *buf, char **start, off_t off, int count,
                 int *eof, void *data)
{
	printk("pcie0_force_dstq = %d\n", pcie0_force_dstq);
	printk("pcie1_force_dstq = %d\n", pcie1_force_dstq);
	printk("usb_force_dstq = %d\n", usb_force_dstq);
	printk("eth_force_dstq = %d\n", eth_force_dstq);
	return 0;
}

int hsgmii_force_dstq_mode_write_proc(struct file *file, const char *buffer,
	unsigned long count, void *data)
{
	char val_string[32] = {0}, cmd[32] = {0};
	unsigned int value = 0,xsi_force_dstq_mode = 0 ;

	if (count > sizeof(val_string) - 1){
		printk("Input Value [0/1/2]\n");
		return -EINVAL;
	}
	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	val_string[count] = '\0';
	sscanf(val_string, "%s %d", cmd, &xsi_force_dstq_mode);
	
	XSI_MSG(XSI_DBG_ERR,"%s %d\n", cmd, xsi_force_dstq_mode);
	
	if(!strcmp(cmd, "pcie0")){
		pcie0_force_dstq = xsi_force_dstq_mode;
	}else if(!strcmp(cmd, "pcie1")){
		pcie1_force_dstq = xsi_force_dstq_mode;
	}else if(!strcmp(cmd, "usb")){
		usb_force_dstq = xsi_force_dstq_mode;
	}else if(!strcmp(cmd, "eth")){
		eth_force_dstq = xsi_force_dstq_mode;
	}else
		goto USAGE;

	return count;

USAGE:
	printk("echo [serdes] [mode] > proc/tc3162/hsgmii_force_dstq_mode \n"\
           "serdes:  pcie0/pcie1/usb/eth \n"\
           "mode:    0: default, linkrate=10G-down stream to gdm\n"\
           "                     linkrate<10G-down stream to qdma\n"\
           "         1: down stream to gdm \n"\
           "         2: down stream to qdma\n"\
           "example: echo pcie0 1 > proc/tc3162/hsgmii_force_dstq_mode\n");

	return count;
}

int hsgmii_pcie0_mac_dbg_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return xsi_macN_dbg_read_proc(buf, start, off, count, eof, data, XSI_PCIE0_IDX);
}

int hsgmii_pcie1_mac_dbg_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return xsi_macN_dbg_read_proc(buf, start, off, count, eof, data, XSI_PCIE1_IDX);
}
int hsgmii_usb_mac_dbg_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return xsi_macN_dbg_read_proc(buf, start, off, count, eof, data, XSI_USB_IDX);
}

int hsgmii_eth_mac_dbg_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return xsi_macN_dbg_read_proc(buf, start, off, count, eof, data, XSI_ETH_IDX);
}
	



int hsgmii_pcie0_mac_dbg_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	return xsi_macN_dbg_write_proc(file, buffer, count, data, XSI_PCIE0_IDX);
}

int hsgmii_pcie1_mac_dbg_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	return xsi_macN_dbg_write_proc(file, buffer, count, data, XSI_PCIE1_IDX);
}
int hsgmii_usb_mac_dbg_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	return xsi_macN_dbg_write_proc(file, buffer, count, data, XSI_USB_IDX);
}

int hsgmii_eth_mac_dbg_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	return xsi_macN_dbg_write_proc(file, buffer, count, data, XSI_ETH_IDX);
}



static int hsgmii_ratelimit_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return 0;			
}

static int hsgmii_ratelimit_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	int gdm_rc_cfg_id = -1;
	uint8_t byte_mode = 0;
	uint8_t val_string[64] = {0};
	unsigned int ratelimit_value = 0;
	ECNT_HSGMII_Data_s xsi_data ={0};

	if (count > (sizeof(val_string) - 1))
		return -EINVAL;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;
	
	sscanf(val_string, "%d %d %d %d", &xsi_data.hsgmii_index,&gdm_rc_cfg_id, &xsi_data.xsi_private.rate_cfg.rate,&xsi_data.xsi_private.rate_cfg.mode);
	printk("set gdm_sel= %d, gdm_rc_cfg_id=%d, rateLimit_value=%d, byte_mode=%d\n", xsi_data.hsgmii_index,gdm_rc_cfg_id, 
		xsi_data.xsi_private.rate_cfg.rate, xsi_data.xsi_private.rate_cfg.mode);
	
	if (HSGMII_RX_UC_RATE == gdm_rc_cfg_id)
	{
		xsi_mac_api_set_rxuc_rate(&xsi_data);
	}
	else if (HSGMII_RX_BC_RATE == gdm_rc_cfg_id)
	{
		xsi_mac_api_set_rxbc_rate(&xsi_data);
	}
	else if (HSGMII_RX_MC_RATE == gdm_rc_cfg_id)
	{
		xsi_mac_api_set_rxmc_rate(&xsi_data);
	}
	else if (HSGMII_RX_TOTAL_RATE == gdm_rc_cfg_id)
	{
		xsi_mac_api_set_rxtotal_rate(&xsi_data);
	}
	else if (HSGMII_TX_TOTAL_RATE == gdm_rc_cfg_id)
	{
		xsi_mac_api_set_txtotal_rate(&xsi_data);
	}
	else
	{
		printk("error gdm_rc_cfg_id %d, return. \n", gdm_rc_cfg_id);
		return -EINVAL ;
	}
	
	return count;
}
/******************************************************************************
******************************************************************************/

static int hsgmii_fast_slow_write_proc(struct file *file, const char *buffer,unsigned long count, void *data)	
{
	char val_string[96] = {0}, cmd[32]={0}, subcmd[32]={0};
	// int value = 0;

	if (count > sizeof(val_string) - 1)
		return -EINVAL;
	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	// sscanf(val_string, "%d", &value);
	sscanf(val_string, "%31s %31s", cmd, subcmd) ;
	val_string[count] = '\0';
	if(!strcmp(cmd, "fast")){
		if(!strcmp(subcmd, "enable") || !strcmp(subcmd, "1")) {
			hsgmii_fast_mode_flag = 1;
		} else {
			hsgmii_fast_mode_flag = 0;
		}
	} else{
	
	}
	
	// printk("fast_mode value is written %d\n", fast_mode);
	return count;
}


/******************************************************************************
******************************************************************************/

static int hsgmii_lan_link_status_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data, int hsgmii_index)
{
    int index = 0;
    off_t begin = 0;
    off_t pos = 0;

	int sync = 0;
	unsigned int link_mode = 0, link_stats = 0, link_rate = 0;

	if(hsgmii_index == XSI_PCIE0_IDX){
		link_mode = hsgmii_pcie0_mode;
	}else if(hsgmii_index == XSI_PCIE1_IDX){
		link_mode = hsgmii_pcie1_mode;
	}else if(hsgmii_index == XSI_USB_IDX){
		link_mode = hsgmii_usb_mode;
	}else if(hsgmii_index == XSI_AE_IDX){
		return 0;
	}else if(hsgmii_index == XSI_ETH_IDX){
		link_mode = hsgmii_eth_mode;
	}else 
		return 0;
	link_stats = xsi_get_xsgmii_serdes_linkstats(hsgmii_index);
	link_rate = xsi_get_xsgmii_serdes_linkrate(hsgmii_index);

	sync = link_stats&1;
	

    index += sprintf(buf+index, "hsgmii_lan_phy_link_status = %s\n", sync==1?"up":"down");
    CHK_BUF();
    index += sprintf(buf+index, "hsgmii_lan_phy_mode = %d\n", link_mode);
    CHK_BUF();
	index += sprintf(buf+index, "hsgmii_lan_linkrate = %d\n", link_rate);
    CHK_BUF();

    *eof = 1;


done:
   *start = buf + (off - begin);
   index -= (off - begin);
   if (index<0) 
       index = 0;
   if (index>count) 
       index = count;
   return index;

}


int hsgmii_pcie0_lan_link_status_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return hsgmii_lan_link_status_read_proc(buf, start, off, count, eof, data, XSI_PCIE0_IDX);
}

int hsgmii_pcie1_lan_link_status_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return hsgmii_lan_link_status_read_proc(buf, start, off, count, eof, data, XSI_PCIE1_IDX);
}
int hsgmii_usb_lan_link_status_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return hsgmii_lan_link_status_read_proc(buf, start, off, count, eof, data, XSI_USB_IDX);
}

int hsgmii_eth_lan_link_status_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	return hsgmii_lan_link_status_read_proc(buf, start, off, count, eof, data, XSI_ETH_IDX);
}
	

static int hsgmii_use_unify_eth_name_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	int index = 0;
	off_t begin = 0;
	off_t pos = 0;

	index += sprintf(buf+index, "%d\n", use_unify_eth_name);
	CHK_BUF();

	*eof = 1;

done:
	*start = buf + (off - begin);
	index -= (off - begin);
	if (index<0) 
		index = 0;
	if (index>count) 
		index = count;
	return index;			
}

static int board_args_hsgmii_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{	
	int len = 0;
	char tmp[64] = {0};
	int tmp_len = 0;
	int i;

	if (0 != get_board_flag()) {
		for(i=0;i<8;i++)
		{
			len += sprintf(buf+len, "%02x ", get_lan_info(i));
			if(check_lanport_type(i))
				tmp_len += sprintf(tmp+tmp_len, "eth0.%d ", i+1);
		}
	}
	len += sprintf(buf+len, "%s", tmp);
	len -= off;
	*start = buf + off;
	if (len > count)
		len = count;
	else
		*eof = 1;
	if (len < 0)
		len = 0;
	return len;
}

static int hsgmii_idx_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{	
	int len = 0;

	len += sprintf(buf+len, "usb_hsgmii_idx = %d\n", get_hsgmii_idx(0));
	len += sprintf(buf+len, "pcie0_hsgmii_idx = %d\n", get_hsgmii_idx(1));
	len += sprintf(buf+len, "pcie1_hsgmii_idx = %d\n", get_hsgmii_idx(2));
	len += sprintf(buf+len, "eth_hsgmii_idx = %d\n", get_hsgmii_idx(3));
	len -= off;
	*start = buf + off;
	if (len > count)
		len = count;
	else
		*eof = 1;
	if (len < 0)
		len = 0;
	return len;
}

int fast_path_speed_threshold_read_proc(char *buf, char **start, off_t off, int count,
                 int *eof, void *data)
{
	int index = 0;
	off_t pos = 0;
	off_t begin = 0;

  	index += sprintf(buf+index, "%d\n", fast_path_speed_threshold);
	CHK_BUF();

	*eof = 1;

done:
	*start = buf + (off - begin);
	index -= (off - begin);
	if (index<0) 
		index = 0;
	if (index>count) 
		index = count;
	return index;
}

int fast_path_speed_threshold_write_proc(struct file *file, const char *buffer,
	unsigned long count, void *data)
{
	char val_string[4];

	if (count > sizeof(val_string) - 1)
		return -EINVAL;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	val_string[count] = '\0';
	fast_path_speed_threshold = simple_strtoul(val_string, NULL, 10);	

	return count;
}
/*****************************************************************************
******************************************************************************/

static int hsgmii_fast_slow_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data){
	if (hsgmii_fast_mode_flag) {
		printk("hsgmii_fast_mode_flag value is %d, hsgmii down stream fast mode enable\n", hsgmii_fast_mode_flag);
	} else {
		printk("hsgmii_fast_mode_flag value is %d, hsgmii down stream fast mode disable\n", hsgmii_fast_mode_flag);
	}
	return 0;
}


/*****************************************************************************
******************************************************************************/

#ifdef CONFIG_TP_IMAGE

int hsgmii_lan_reuse_read_proc(char *buf, char **start, off_t off, int count,
				 int *eof, void *data)
{
	int index = 0;
	off_t pos = 0;
	off_t begin = 0;

	if(0 == hsmgii_lan_resuse)
	{
		index += sprintf(buf+index, "%s\n", "lan");
	}
	else
	{
		index += sprintf(buf+index, "%s\n", "wan");
	}
	
	CHK_BUF();

	*eof = 1;

done:
	*start = buf + (off - begin);
	index -= (off - begin);
	if (index<0) 
		index = 0;
	if (index>count) 
		index = count;
	return index;
}

int hsgmii_lan_reuse_write_proc(struct file *file, const char *buffer,
	unsigned long count, void *data)
{
	char val_string[16];

	if (count > sizeof(val_string) - 1)
		return -EINVAL;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	val_string[count] = '\0';

	if(!strncmp(val_string, "lan", strlen("lan")))
	{
		hsmgii_lan_resuse = HSGMII_REUSE_LAN;

		/* we use GDM ratelimit to set lan ratelimit,so we recover ratelimit*/
		xsi_ratelimit_set_tp(0);
	}
	else if(!strncmp(val_string, "wan", strlen("wan")))
	{
		hsmgii_lan_resuse = HSGMII_REUSE_WAN;
	}
	else
	{
		printk("val_string:%s not invalid\n",val_string);
		return -EINVAL;
	}
	
	return count;
}


int hsgmii_lan_qdma_txratelimit_write_proc(struct file *file, const char *buffer,
	unsigned long count, void *data)
{
	char val_string[16];
	int txratelimit = 0;

	if (count > sizeof(val_string) - 1)
		return -EINVAL;

	if (copy_from_user(val_string, buffer, count))
		return -EFAULT;

	val_string[count] = '\0';

	/*recover ratelimit*/
	
	txratelimit = simple_strtoul(val_string, NULL, 10);	

	xsi_ratelimit_set_tp(txratelimit);
	
	return count;
}

#if defined(INCLUDE_ITTIM)
static int xsi_ether_fastpath_read_proc(char *buf, char **start, off_t off, int count,
	int *eof, void *data)
{
	int index = 0;
	off_t begin = 0;
	off_t pos = 0;

	index += sprintf(buf+index, "xsi_ether_fastpath=%d\n", xsi_ether_fastpath);

	CHK_BUF();

	*eof = 1;

done:
	*start = buf + (off - begin);
	index -= (off - begin);
	if (index<0) 
		index = 0;
	if (index>count) 
		index = count;
	return index;
}
#endif /* INCLUDE_ITTIM */

#endif /* CONFIG_TP_IMAGE */

int hsgmii_lan_proc_init(void)
{
    struct proc_dir_entry *xsi_proc;
#if 0
    xsi_proc = create_proc_entry("tc3162/xsi_test", 0, NULL);
    xsi_proc->read_proc = xsi_test_read_proc;
    xsi_proc->write_proc = xsi_test_write_proc;  
#endif
	xsi_proc = create_proc_entry("tc3162/hsgmii_fastmode", 0, NULL);
	if(xsi_proc){
		xsi_proc->read_proc = hsgmii_fast_slow_read_proc;
		xsi_proc->write_proc = hsgmii_fast_slow_write_proc;  
	}

	if(PCIE0_VALID){
		xsi_proc = create_proc_entry("tc3162/hsgmii_pcie0_mac_dbg", 0, NULL);
		if(xsi_proc){
			xsi_proc->read_proc = hsgmii_pcie0_mac_dbg_read_proc;
			xsi_proc->write_proc = hsgmii_pcie0_mac_dbg_write_proc;  
		}

		
		xsi_proc = create_proc_entry("tc3162/hsgmii_pcie0_lan_link_status", 0, NULL);
		if(xsi_proc) 
		{
			xsi_proc->read_proc = hsgmii_pcie0_lan_link_status_read_proc;
			xsi_proc->write_proc = NULL;  
		}
	}
	if(PCIE1_VALID){
		xsi_proc = create_proc_entry("tc3162/hsgmii_pcie1_mac_dbg", 0, NULL);
		if(xsi_proc){
			xsi_proc->read_proc = hsgmii_pcie1_mac_dbg_read_proc;
			xsi_proc->write_proc = hsgmii_pcie1_mac_dbg_write_proc; 
		}
		
		xsi_proc = create_proc_entry("tc3162/hsgmii_pcie1_lan_link_status", 0, NULL);
		if(xsi_proc) 
		{
			xsi_proc->read_proc = hsgmii_pcie1_lan_link_status_read_proc;
			xsi_proc->write_proc = NULL;  
		}
	}

	if(USB_VALID){
		xsi_proc = create_proc_entry("tc3162/hsgmii_usb_mac_dbg", 0, NULL);
		if(xsi_proc){
			xsi_proc->read_proc = hsgmii_usb_mac_dbg_read_proc;
			xsi_proc->write_proc = hsgmii_usb_mac_dbg_write_proc; 
		}

		xsi_proc = create_proc_entry("tc3162/hsgmii_usb_lan_link_status", 0, NULL);
		if(xsi_proc) 
		{
			xsi_proc->read_proc = hsgmii_usb_lan_link_status_read_proc;
			xsi_proc->write_proc = NULL;  
		}
	}

	if(ETH_VALID){
		xsi_proc = create_proc_entry("tc3162/hsgmii_eth_mac_dbg", 0, NULL);
		if(xsi_proc){
			xsi_proc->read_proc = hsgmii_eth_mac_dbg_read_proc;
			xsi_proc->write_proc = hsgmii_eth_mac_dbg_write_proc;  
		}
		
		xsi_proc = create_proc_entry("tc3162/hsgmii_eth_lan_link_status", 0, NULL);
		if(xsi_proc) 
		{
			xsi_proc->read_proc = hsgmii_eth_lan_link_status_read_proc;
			xsi_proc->write_proc = NULL;  
		}
		
	}


	xsi_proc = create_proc_entry("tc3162/hsgmii_lan_ratelimit", 0, NULL);
	if(xsi_proc) 
	{
		xsi_proc->read_proc = hsgmii_ratelimit_read_proc;
		xsi_proc->write_proc = hsgmii_ratelimit_write_proc;
	}

	xsi_proc = create_proc_entry("tc3162/hsgmii_lan_use_unify_eth_name", 0, NULL);
	if(xsi_proc) 
	{
		xsi_proc->read_proc = hsgmii_use_unify_eth_name_read_proc;
	}

	xsi_proc = create_proc_entry("tc3162/hsgmii_force_dstq_mode", 0, NULL);
	if(xsi_proc) 
	{
		xsi_proc->read_proc = hsgmii_force_dstq_mode_read_proc;
		xsi_proc->write_proc = hsgmii_force_dstq_mode_write_proc;
	}
	xsi_proc = create_proc_entry("tc3162/board_args_hsgmii", 0, NULL);
	if(xsi_proc) 
	{
		xsi_proc->read_proc = board_args_hsgmii_read_proc;
		xsi_proc->write_proc = NULL;  
	}

	xsi_proc = create_proc_entry("tc3162/hsgmii_idx", 0, NULL);
	if(xsi_proc) 
	{
		xsi_proc->read_proc = hsgmii_idx_read_proc;
		xsi_proc->write_proc = NULL;  
	}

	xsi_proc = create_proc_entry("tc3162/fast_path_speed_threshold", 0, NULL);
	if (xsi_proc) {
		xsi_proc->read_proc = fast_path_speed_threshold_read_proc;  
		xsi_proc->write_proc = fast_path_speed_threshold_write_proc;
	}

#ifdef CONFIG_TP_IMAGE
	
	xsi_proc = create_proc_entry("tc3162/hsgmii_lan_reuse", 0, NULL);
	if (xsi_proc) {
		xsi_proc->read_proc = hsgmii_lan_reuse_read_proc;	
		xsi_proc->write_proc = hsgmii_lan_reuse_write_proc;
	}
	xsi_proc = create_proc_entry("tc3162/hsgmii_lan_qdma_txratelimit", 0, NULL);
	if (xsi_proc) {
		xsi_proc->write_proc = hsgmii_lan_qdma_txratelimit_write_proc;
	}

	#if defined(INCLUDE_ITTIM)
	xsi_proc = create_proc_entry("tc3162/xsi_ether_fastpath", 0, NULL);
	if (xsi_proc)
	{
		xsi_proc->read_proc = xsi_ether_fastpath_read_proc;
		xsi_proc->write_proc = NULL;
	}
	#endif /* INCLUDE_ITTIM */
	
#endif /* CONFIG_TP_IMAGE */
	return 0;
}

int hsgmii_lan_proc_exit(void)
{
    //remove_proc_entry("tc3162/xsi_test", 0);
    remove_proc_entry("tc3162/hsgmii_fastmode", 0);
    if(PCIE0_VALID){
		remove_proc_entry("tc3162/hsgmii_pcie0_mac_dbg", 0);
		remove_proc_entry("tc3162/hsgmii_pcie0_lan_link_status", 0);
    }
	if(PCIE1_VALID){
		remove_proc_entry("tc3162/hsgmii_pcie1_mac_dbg", 0);
		remove_proc_entry("tc3162/hsgmii_pcie1_lan_link_status", 0);
	}
	if(USB_VALID){
		remove_proc_entry("tc3162/hsgmii_usb_mac_dbg", 0);
		remove_proc_entry("tc3162/hsgmii_usb_lan_link_status", 0);
	}

	if(ETH_VALID){
		remove_proc_entry("tc3162/hsgmii_eth_mac_dbg", 0);
		remove_proc_entry("tc3162/hsgmii_eth_lan_link_status", 0);
	}
	remove_proc_entry("tc3162/hsgmii_lan_ratelimit", 0);

	remove_proc_entry("tc3162/hsgmii_lan_use_unify_eth_name", 0);

	remove_proc_entry("tc3162/hsgmii_force_dstq_mode", 0);

	remove_proc_entry("tc3162/board_args_hsgmii", 0);
	remove_proc_entry("tc3162/hsgmii_idx", 0);

	remove_proc_entry("tc3162/fast_path_speed_threshold", 0);

#ifdef CONFIG_TP_IMAGE

	remove_proc_entry("tc3162/hsgmii_lan_reuse", 0);
	remove_proc_entry("tc3162/hsgmii_lan_qdma_txratelimit", 0);

  #if defined(INCLUDE_ITTIM)
	remove_proc_entry("tc3162/xsi_ether_fastpath", 0);
  #endif /* INCLUDE_ITTIM */

#endif /* CONFIG_TP_IMAGE */

    return 0;
}

