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
MADE TO RECEIVER锟斤拷S SPECIFICATION OR CONFORMING TO A PARTICULAR 
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
#include "hsgmii_lan_ic_dis.h"
#include "serdes.h"
#ifdef TCSUPPORT_BOARD_SELECT
#include <ecnt_event_global/ecnt_event_board.h>
#endif
#include <ecnt_hook/ecnt_hook_ether.h>
#include <ecnt_hook/ecnt_hook_fe.h>
#if defined(TCSUPPORT_ETHER_8811)
#include <ecnt_hook/ecnt_hook_air_en8811.h>
#endif
#if defined(TCSUPPORT_ETHER_AS21XX)
#include <ecnt_hook/ecnt_hook_as21xx.h>
#endif

#include "ecnt_event_global/ecnt_event_system.h"

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/


/************************************************************************
*                  M A C R O S
*************************************************************************
*/

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/

/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/
extern unsigned int hsgmii_pcie0_mode;
extern unsigned int hsgmii_pcie1_mode;
extern unsigned int hsgmii_usb_mode;
extern unsigned int hsgmii_eth_mode;

/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/
extern int xsi_check_index_valid(uint hsgmii_index);
#if SUPPORT_BOARD_SELECT
extern ECNT_EVENT_SYSTEM_SERDES_PHY_SEL_t get_serdes_phy_sel(uint8_t port_idx);
#else
extern ECNT_EVENT_SYSTEM_SERDES_PHY_SEL_t get_serdes_phy_sel(ECNT_EVENT_SYSTEM_SERDES_SEL_t port_idx);
#endif

/************************************************************************
*                  P U B L I C   D A T A
*************************************************************************
*/


/************************************************************************
*                  P R I V A T E   D A T A
*************************************************************************
*/

/************************************************************************
*                  F U N C T I O N   D E F I N I T I O N S
*************************************************************************
*/

/*
hsgmii index in mac driver:
#define	XSI_PCIE0_IDX	0
#define	XSI_PCIE1_IDX	1
#define	XSI_USB_IDX		2
#define XSI_AE_IDX		3
#define XSI_ETH_IDX		4

in put for phy api
typedef enum{
	ENUM_VERSION,
	ENUM_ETH_SERDES,
	ENUM_XPON_SERDES,
	ENUM_PCIE0_SERDES,
	ENUM_PCIE1_SERDES,
	ENUM_USB_SERDES,
	ENUM_UNKNOW_SERDES,
}xsgmii_serdes_inphy;	

xsgmii_speed :
typedef enum{
	USXGII_10G,
	USXGII_5G,
	USXGII_2p5G,
	USXGII_1G,
	USXGII_100M,
	HSGMII_2p5G,
	SGMII_1000M,
	SGMII_100M,
	SGMII_10M,
	SPEED_UNKNOW,
}xsgmii_speed_type;

mod:
0:force mode
1:an auto mode
2: linkst

an:
0: an disable
1: an enable

*/
int xsi_set_xsgmii_serdes_speed(uint hsgmii_index , uint xsgmii_speed, uint mod ,uint an )
{
	unsigned char serdes = 0,xsgmii = 0,  rate = 0;

	if(0 == xsi_check_index_valid(hsgmii_index))
		return -1;
	
	if(hsgmii_index == XSI_PCIE0_IDX){
		serdes = ENUM_PCIE0_SERDES;
		hsgmii_pcie0_mode = xsgmii_speed;
	}else if(hsgmii_index == XSI_PCIE1_IDX){
		serdes = ENUM_PCIE1_SERDES;
		hsgmii_pcie1_mode = xsgmii_speed;
	}else if(hsgmii_index == XSI_USB_IDX){
		serdes = ENUM_USB_SERDES;
		hsgmii_usb_mode = xsgmii_speed;
	}else if(hsgmii_index == XSI_AE_IDX){
		serdes = ENUM_XPON_SERDES;//lan driver not support set pon serdes
		return 0;
	}else if(hsgmii_index == XSI_ETH_IDX){
		serdes = ENUM_ETH_SERDES;
		hsgmii_eth_mode = xsgmii_speed;
	}else 
		return 0;

	if(xsgmii_speed == USXGII_10G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_10G;
	}else if(xsgmii_speed == USXGII_5G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_5G;
	}else if(xsgmii_speed == USXGII_2p5G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_2p5G;
	}else if(xsgmii_speed == USXGII_1G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_1G;
	}else if(xsgmii_speed == USXGII_100M){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_100M;
	}else if(xsgmii_speed == HSGMII_2p5G){
		xsgmii = HSGMII;
		rate = 0;/*hsgmii no need set rate*/
	}else if(xsgmii_speed == SGMII_1000M){
		xsgmii = SGMII;
		rate = ENUM_SGMII_1000M;
	}else if(xsgmii_speed == SGMII_100M){
		xsgmii = SGMII;
		rate = ENUM_SGMII_100M;
	}else if(xsgmii_speed == SGMII_10M){
		xsgmii = SGMII;
		rate = ENUM_SGMII_10M;
	}else 
		return 0;

	xsgmii_api(serdes,xsgmii,mod,rate,an);
	
	return 0 ;

}

//enable phy interrput xsgmii_api(1,0,7,1,1)
int xsi_set_xsgmii_serdes_enable_interrupt(uint hsgmii_index)
{
	unsigned char serdes = 0,xsgmii = 0,  rate = 0;
	
	if(0 == xsi_check_index_valid(hsgmii_index))
		return -1;
	
	if(hsgmii_index == XSI_PCIE0_IDX){
		serdes = ENUM_PCIE0_SERDES;
	}else if(hsgmii_index == XSI_PCIE1_IDX){
		serdes = ENUM_PCIE1_SERDES;
	}else if(hsgmii_index == XSI_USB_IDX){
		serdes = ENUM_USB_SERDES;
	}else if(hsgmii_index == XSI_AE_IDX){
		serdes = ENUM_XPON_SERDES;//lan driver not support set pon serdes
		return 0;
	}else if(hsgmii_index == XSI_ETH_IDX){
		serdes = ENUM_ETH_SERDES;
	}else 
		return 0;

	xsgmii_api(serdes, USXGMII, 7, 1, 1);
	return 0;
}

//enable phy interrput xsgmii_api(1,0,252,11,1)
int xsi_set_xsgmii_serdes_aeonsemi_phy_preset(uint hsgmii_index)
{
	unsigned char serdes = 0,xsgmii = 0;
	
	if(0 == xsi_check_index_valid(hsgmii_index))
		return -1;
	
	if(hsgmii_index == XSI_PCIE0_IDX){
		serdes = ENUM_PCIE0_SERDES;
	}else if(hsgmii_index == XSI_PCIE1_IDX){
		serdes = ENUM_PCIE1_SERDES;
	}else if(hsgmii_index == XSI_USB_IDX){
		serdes = ENUM_USB_SERDES;
	}else if(hsgmii_index == XSI_AE_IDX){
		serdes = ENUM_XPON_SERDES;//lan driver not support set pon serdes
		return 0;
	}else if(hsgmii_index == XSI_ETH_IDX){
		serdes = ENUM_ETH_SERDES;
	}else 
		return 0;

	xsgmii_api(serdes, USXGMII, 252, 11, 1);
	return 0;
}


//normal mode force amd an disable
int xsi_set_xsgmii_serdes_speed_forcemode_andisable(uint hsgmii_index , uint xsgmii_speed )
{
	return xsi_set_xsgmii_serdes_speed(hsgmii_index, xsgmii_speed, 0,0);
}

//set phy force and an auto
int xsi_set_xsgmii_serdes_speed_forcemode_anauto(uint hsgmii_index , uint xsgmii_speed )
{
	return xsi_set_xsgmii_serdes_speed(hsgmii_index, xsgmii_speed, 1,0);
}

unsigned int xsi_get_xsgmii_serdes_linkstats(uint hsgmii_index)
{
	unsigned char serdes = 0,xsgmii = 0,  rate = 0;
	unsigned int xsgmii_speed = 0, linkstats = 0;
    unsigned int rate_tmp = 0, duplex = 0, is_an8811 = 0;
    Serdes_id_t an8811_serdes = INVALID_SERDES_ID;

	if(0 == xsi_check_index_valid(hsgmii_index))
		return 0;
	
	if(hsgmii_index == XSI_PCIE0_IDX){
		serdes = ENUM_PCIE0_SERDES;
		xsgmii_speed = hsgmii_pcie0_mode;
        if(get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_WIFI1) == ECNT_EVENT_SERDES_PHY_AN8811){
            is_an8811 = 1;
            an8811_serdes = SERDES_PCIE0_IDX;
        }
	}else if(hsgmii_index == XSI_PCIE1_IDX){
		serdes = ENUM_PCIE1_SERDES;
		xsgmii_speed = hsgmii_pcie1_mode;
        if(get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_WIFI2) == ECNT_EVENT_SERDES_PHY_AN8811){
            is_an8811 = 1;
            an8811_serdes = SERDES_PCIE1_IDX;
        }
	}else if(hsgmii_index == XSI_USB_IDX){
		serdes = ENUM_USB_SERDES;
		xsgmii_speed = hsgmii_usb_mode;
        if(get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_USB1) == ECNT_EVENT_SERDES_PHY_AN8811){
            is_an8811 = 1;
            an8811_serdes = SERDES_USB_IDX;
        }
	}else if(hsgmii_index == XSI_AE_IDX){
		serdes = ENUM_XPON_SERDES;//lan driver not support set pon serdes
		return 0;
	}else if(hsgmii_index == XSI_ETH_IDX){
		serdes = ENUM_ETH_SERDES;
		xsgmii_speed = hsgmii_eth_mode;
        if(get_serdes_phy_sel(ECNT_EVENT_SERDES_SEL_ETHER) == ECNT_EVENT_SERDES_PHY_AN8811){
            is_an8811 = 1;
            an8811_serdes = SERDES_ETH_IDX;
        }
	}else 
		return 0;


	if(xsgmii_speed == USXGII_10G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_10G;
	}else if(xsgmii_speed == USXGII_5G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_5G;
	}else if(xsgmii_speed == USXGII_2p5G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_2p5G;
	}else if(xsgmii_speed == USXGII_1G){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_1G;
	}else if(xsgmii_speed == USXGII_100M){
		xsgmii = USXGMII;
		rate = ENUM_USXGII_100M;
	}else if(xsgmii_speed == HSGMII_2p5G){
		xsgmii = HSGMII;
		rate = 0;/*hsgmii no need set rate*/
#if defined(TCSUPPORT_ETHER_8811)
        if(is_an8811)
        {
            EN8811_MULTI_GET_LINK_RATE(an8811_serdes,&rate_tmp, &duplex);
            if(rate_tmp){
                linkstats = 1;//if en8811 link up
            }else{
                linkstats = 0;//if en8811 link down
            }
            return linkstats;
        }
#endif
	}else if(xsgmii_speed == SGMII_1000M){
		xsgmii = SGMII;
		rate = ENUM_SGMII_1000M;
	}else if(xsgmii_speed == SGMII_100M){
		xsgmii = SGMII;
		rate = ENUM_SGMII_100M;
	}else if(xsgmii_speed == SGMII_10M){
		xsgmii = SGMII;
		rate = ENUM_SGMII_10M;
	}else 
		return 0;

	linkstats = xsgmii_api(serdes,xsgmii,2,rate,0);
	
	return linkstats ;

}

//set phy A through mdio
int xsi_set_mdio(void)
{	
	ETHER_MDIO_WRITE(0,0x1f,0);
	ETHER_MDIO_WRITE(0,0xd,4);
	ETHER_MDIO_WRITE(0,0xe,0xc441);
	ETHER_MDIO_WRITE(0,0xd,0x8004);
	ETHER_MDIO_WRITE(0,0xe,0x8);
	return 0;
}

int xsi_get_xsgmii_sfp_linkstatus(uint hsgmii_index)
{
	unsigned int linkstatus = 0;
	linkstatus= (xsgmii_api(ENUM_ETH_SERDES,USXGMII,3,1,0)&0x8000)>>15;

	return linkstatus;
}

//get xsgmii linkrate
int xsi_get_xsgmii_serdes_linkrate(uint hsgmii_index)
{
	unsigned int rate = 0, rate_tmp = 0, duplex = 0;

	if(0 == xsi_check_index_valid(hsgmii_index))
		return 0;

	switch (hsgmii_index)
	{
		case XSI_PCIE0_IDX:
		{
			if((hsgmii_pcie0_mode <= USXGII_100M) && (hsgmii_pcie0_mode >= USXGII_10G))
			{
				//0:10g, 1:5g, 2:2.5g, 3: 1g, 4:100M
				rate = xsgmii_api(ENUM_PCIE0_SERDES,USXGMII,3,0,1);
			}
			else if(hsgmii_pcie0_mode == HSGMII_2p5G)
			{
				//2:2.5g
				rate = 2;
#if defined(TCSUPPORT_ETHER_8811)
				EN8811_MULTI_GET_LINK_RATE(XSI_PCIE0_IDX,&rate_tmp, &duplex);
				if(rate_tmp){
				    rate = rate_tmp; //if en8811 link up
				}
#endif
			}
			else if((hsgmii_pcie0_mode > HSGMII_2p5G) && (hsgmii_pcie0_mode <= SGMII_10M))
			{
				//3:1g, 4:100M, 5:10M
				rate = xsgmii_api(ENUM_PCIE0_SERDES,SGMII,4,0,3) + 3;
			}
		}
		break;
		
		case XSI_PCIE1_IDX:
		{
			if((hsgmii_pcie1_mode <= USXGII_100M) && (hsgmii_pcie1_mode >= USXGII_10G))
			{
				//0:10g, 1:5g, 2:2.5g, 3: 1g, 4:100M
				rate = xsgmii_api(ENUM_PCIE1_SERDES,USXGMII,3,0,1);
			}
			else if(hsgmii_pcie1_mode == HSGMII_2p5G)
			{
				//2:2.5g
				rate = 2;
#if defined(TCSUPPORT_ETHER_8811)
				EN8811_MULTI_GET_LINK_RATE(XSI_PCIE1_IDX,&rate_tmp, &duplex);
				if(rate_tmp){
				    rate = rate_tmp; //if en8811 link up
				}
#endif
			}
			else if((hsgmii_pcie1_mode > HSGMII_2p5G) && (hsgmii_pcie1_mode <= SGMII_10M))
			{
				//3:1g, 4:100M, 5:10M
				rate = xsgmii_api(ENUM_PCIE1_SERDES,SGMII,4,0,3) + 3;
			}
		}
		break;

		case XSI_USB_IDX:
		{
			if(hsgmii_usb_mode == HSGMII_2p5G)
			{
				//2:2.5g
				rate = 2;
#if defined(TCSUPPORT_ETHER_8811)
				EN8811_MULTI_GET_LINK_RATE(XSI_USB_IDX,&rate_tmp, &duplex);
				if(rate_tmp){
				    rate = rate_tmp; //if en8811 link up
				}
#endif
			}
			else if((hsgmii_usb_mode > HSGMII_2p5G) && (hsgmii_usb_mode <= SGMII_10M))
			{
				//3:1g, 4:100M, 5:10M
				rate = xsgmii_api(ENUM_USB_SERDES,SGMII,4,0,3) + 3;
			}
		}
		break;

		case XSI_ETH_IDX:
		{
			if((hsgmii_eth_mode <= USXGII_100M) && (hsgmii_eth_mode >= USXGII_10G))
			{
				//0:10g, 1:5g, 2:2.5g, 3: 1g, 4:100M
				rate = xsgmii_api(ENUM_ETH_SERDES,USXGMII,3,0,1);
			}
			else if(hsgmii_eth_mode == HSGMII_2p5G)
			{
				//2:2.5g
				rate = 2;
#if defined(TCSUPPORT_ETHER_8811)
				EN8811_MULTI_GET_LINK_RATE(XSI_ETH_IDX,&rate_tmp, &duplex);
				if(rate_tmp){
					rate = rate_tmp; //if en8811 link up
				}
#endif
			}
			else if((hsgmii_eth_mode > HSGMII_2p5G) && (hsgmii_eth_mode <= SGMII_10M))
			{
				//3:1g, 4:100M, 5:10M
				rate = xsgmii_api(ENUM_ETH_SERDES,SGMII,4,0,3) + 3;
			}

		}
		break;

		default :
			break;
	}

	if(rate > 5){
		XSI_MSG(XSI_DBG_MSG,"%s:%d error rate:%d!\n",__FUNCTION__,__LINE__,rate);
		return 0;
	}
	return rate ;

}

int serdes_init(void)
{
	//7581 workaround release pcie0 scu reset, use logic reset
	if(XSI_RST_ERR)
	{
		xsi_mac_api_release(XSI_PCIE0_IDX);
		xsimaclogicrst(XSI_PCIE0_IDX);
	}
	if(PCIE0_VALID){
		if(hsgmii_pcie0_mode == HSGMII_2p5G)
		{
			if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI1) ==ECNT_EVENT_SERDES_WIFI1_HSGMII)
			{
				hsgmii_pcie0_mode = HSGMII_2p5G;
			}
			else if((get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI1) ==ECNT_EVENT_SERDES_WIFI1_USXGMII)  || (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI1) ==ECNT_EVENT_SERDES_WIFI1_XFI))
			{
				hsgmii_pcie0_mode = USXGII_10G;
			}
			else
			{
				printk("not hsgmii/usxgmii/xfi mode!\n");
				return 0;
			}
		}
		serdes_phy_init(XSI_PCIE0_IDX);

		xsimaclogicrstenable(XSI_PCIE0_IDX);
	}

	if(PCIE1_VALID){
		if(hsgmii_pcie1_mode == HSGMII_2p5G)
		{
			if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI2) ==ECNT_EVENT_SERDES_WIFI2_HSGMII)
			{
				hsgmii_pcie1_mode = HSGMII_2p5G;
			}
			else if((get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI2) ==ECNT_EVENT_SERDES_WIFI2_USXGMII)  || (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_WIFI2) ==ECNT_EVENT_SERDES_WIFI2_XFI))
			{
				hsgmii_pcie1_mode = USXGII_10G;
			}
			else
			{
				printk("not hsgmii/usxgmii/xfi mode!\n");
				return 0;
			}
		}	
		serdes_phy_init(XSI_PCIE1_IDX);

		xsi_mac_api_release(XSI_PCIE1_IDX);
	}

	if(USB_VALID){
		if(hsgmii_usb_mode == HSGMII_2p5G)
		{
			if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_USB1) ==ECNT_EVENT_SERDES_USB1_HSGMII)
			{
				hsgmii_usb_mode = HSGMII_2p5G;
			}
			else
			{
				printk("not hsgmii mode!\n");
				return 0;
			}
		}
		serdes_phy_init(XSI_USB_IDX);
		
		xsi_mac_api_release(XSI_USB_IDX);
	}

	if(ETH_VALID){
		if(hsgmii_eth_mode == USXGII_10G)
		{
			if(get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_ETHER) ==ECNT_EVENT_SERDES_ETHER_HSGMII)
			{
				hsgmii_eth_mode = HSGMII_2p5G;
			}
			else if((get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_ETHER) ==ECNT_EVENT_SERDES_ETHER_XFI) || (get_serdes_interface_sel(ECNT_EVENT_SERDES_SEL_ETHER) ==ECNT_EVENT_SERDES_ETHER_USXGMII))
			{
				hsgmii_eth_mode = USXGII_10G;
			}
			else
			{
				printk("not hsgmii/usxgmii/xfi mode!\n");
				return 0;
			}
		}
		serdes_phy_init(XSI_ETH_IDX);

		xsi_mac_api_release(XSI_ETH_IDX);
	}
	return 0;
}

int serdes_phy_init(uint hsgmii_index)
{
	ECNT_EVENT_SYSTEM_SERDES_PHY_SEL_t phy_sel = ECNT_EVENT_SERDES_PHY_AN8811;
#ifdef TCSUPPORT_BOARD_SELECT
	ECNT_EVENT_SYSTEM_SERDES_SEL_t serdes_port = get_serdes_port_count();
#else
	ECNT_EVENT_SYSTEM_SERDES_SEL_t serdes_port = ECNT_EVENT_SERDES_SEL_MAX;
#endif
	int hsgmii_mode = 0;

	if(hsgmii_index == XSI_PCIE0_IDX)
	{
		hsgmii_mode = hsgmii_pcie0_mode;
		serdes_port = ECNT_EVENT_SERDES_SEL_WIFI1;
	}
	else if(hsgmii_index == XSI_PCIE1_IDX)
	{
		hsgmii_mode = hsgmii_pcie1_mode;
		serdes_port = ECNT_EVENT_SERDES_SEL_WIFI2;
	}
	else if(hsgmii_index == XSI_USB_IDX)
	{
		hsgmii_mode = hsgmii_usb_mode;
		serdes_port = ECNT_EVENT_SERDES_SEL_USB1;
	}
	else if(hsgmii_index == XSI_ETH_IDX)
	{
		hsgmii_mode = hsgmii_eth_mode;
		serdes_port = ECNT_EVENT_SERDES_SEL_ETHER;
	}
	else 
	{
		printk("hsgmii_index input error, hsgmii_index = %d\n",hsgmii_index);
	}

	phy_sel = get_serdes_phy_sel(serdes_port);
	
	switch (phy_sel){
		case ECNT_EVENT_SERDES_PHY_AN8811:
			xsi_set_xsgmii_serdes_speed_forcemode_andisable(hsgmii_index, hsgmii_mode);
			break;
		case ECNT_EVENT_SERDES_PHY_A:/*usxgmii*/
			//set phy A through mdio
			xsi_set_mdio();
			//xsgmii_api(1,0,7,1,1)
			xsi_set_xsgmii_serdes_enable_interrupt(hsgmii_index);
			//set phy an auto
			xsi_set_xsgmii_serdes_speed_forcemode_anauto(hsgmii_index, hsgmii_mode);
			break;
		case ECNT_EVENT_SERDES_PHY_B:/*xfi*/
			//xsgmii_api(1,0,7,1,1)
			xsi_set_xsgmii_serdes_enable_interrupt(hsgmii_index);
			//set phy an disable
			xsi_set_xsgmii_serdes_speed_forcemode_andisable(hsgmii_index, hsgmii_mode);
			break;
		case ECNT_EVENT_SERDES_PHY_C:/*usxgmii*/
			//set phy an auto
			xsi_set_xsgmii_serdes_speed_forcemode_anauto(hsgmii_index, hsgmii_mode);
			break;
		case ECNT_EVENT_SERDES_PHY_D:/*usxgmii*/
			//xsgmii_api(1,0,7,1,1)
			xsi_set_xsgmii_serdes_enable_interrupt(hsgmii_index);
			//set phy an auto
			xsi_set_xsgmii_serdes_speed_forcemode_anauto(hsgmii_index, hsgmii_mode);
			break;
		case ECNT_EVENT_SERDES_PHY_E:/*usxgmii*/
			xsi_set_xsgmii_serdes_speed_forcemode_anauto(hsgmii_index, hsgmii_mode);
			break;
		case ECNT_EVENT_SERDES_PHY_F:/*usxgmii*/
			//xsgmii_api(1,0,252,11,1)
			printk("eth serdes interrupt\n");
			xsgmii_api(1,0,7,1,1);
			xsgmii_api(1,0,7,1,5);
			xsi_set_xsgmii_serdes_aeonsemi_phy_preset(hsgmii_index);
			xsi_set_xsgmii_serdes_speed_forcemode_anauto(hsgmii_index, hsgmii_mode);
#if SUPPORT_AS21xx
			AS21XX_AN_RESTART();
#endif
			break;
		default:
			printk("use default setting, force mode an disable, phy_sel=%d\n",phy_sel);
			xsi_set_xsgmii_serdes_speed_forcemode_andisable(hsgmii_index, hsgmii_mode);
			break;

	}
	return 0;
}

