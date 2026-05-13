/************************************************************************
 *
 *	Copyright (C) 2006 Trendchip Technologies, Corp.
 *	All Rights Reserved.
 *
 * Trendchip Confidential; Need to Know only.
 * Protected as an unpublished work.
 *
 * The computer program listings, specifications and documentation
 * herein are the property of Trendchip Technologies, Co. and shall
 * not be reproduced, copied, disclosed, or used in whole or in part
 * for any reason without the prior express written permission of
 * Trendchip Technologeis, Co.
 *
 *************************************************************************/
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <string.h>
#include <limits.h>
#include <tcversion.h>
#include "libcompileoption.h"

/* Define ioctl call for mulif , same as in sockios.h */
#define SIOCSIFSMUX	0x89C0
#define MAX_SIZE	16

enum mulif_proto_types {
	MULIF_PPPOE_PROTO,/*PPPoE Mode*/
  	MULIF_IPOE_PROTO,/*IPoE Mode*/
	MULIF_PPPOE_BI_PROTO,/*PPPoE Mode with bridge interface on*/
  	MULIF_IPOE_BI_PROTO,/*IPoE Mode with bridge interface on*/	
  	MULIF_BRIDGE_PROTO,/*Bridge Mode*/
  	MULIF_PROTO_NUM,/*Protocol num*/
};

enum mulif_ioctl_cmds {
	MULIF_ADDIF_CMD,/*add  interface*/
  	MULIF_REMIF_CMD,/*delete interface*/
  	MULIF_SETIFIPVERSION_CMD, /*Set interface ipversion*/
  	MULIF_ADDMVLAN_CMD, /*add mvlan*/
  	MULIF_DELMVLAN_CMD,/*del mvlan*/
  	MULIF_SHOWMVLAN_CMD,/*show mvlan*/
  	MULIF_SETOFFSET_CMD,/*set offset*/ // zdh: to fix FengHuo DHCP bug
  	MULIF_SETDSCP_DW_CMD, /*set down dscp remark value*/
	MULIF_SET_CMD,/*set multicast mode*/
  	MULIF_CMD_NUM,/*cmd num*/
};

enum multicast_ioctl_cmds {
	MULTICAST_PPP_to_IP_CMD,/*add  interface*/
  	MULTICAST_CMD_NUM,/*cmd num*/
};

#define MAX_VALID_VTAG_VID		4094
#define MIN_VALID_VTAG_VID		1
#define MAX_VALID_VTAG_PBIT		7

typedef enum {
	UNTAG_VTAG_MODE			= 1,
	TRANSPARENT_VTAG_MODE	= 2,
	TAG_VTAG_MODE			= 3,
	TAG_UNPIT_VTAG_MODE		= 4
} vtag_mode_t ;


#define VLAN_FIREST_OFFSET	(0)
#define VLAN_SECOND_OFFSET	(1)


struct mulif_ioctl_vtag_s {
	unsigned char	vlan_mode;
	unsigned short tci;
	#ifdef TCSUPPORT_FWC_VLAN_TAG
	unsigned short tci_sec;
	unsigned char  vlan_map;
	#endif
	unsigned short multicast_tci;
}; 

struct mulif_ioctl_args {
	int cmd; /* Value should be one of the mulif_ioctl_cmds enum defined above. */
  	int  proto;/* Value should be one of the mulif_proto_types enum defined above. */
  	char pvcname[IFNAMSIZ]; /* real device PVC name */
  	char ifname[IFNAMSIZ];	/*virtual device interface name*/
	struct mulif_ioctl_vtag_s	vtag;
	unsigned char mac_address[6];
	unsigned short ext_mvlan;
	int defaultGW;
	unsigned char mac_offset;
	char dscp_dw_flag;
	unsigned char dscp_dw_info;
	int mode;
	int value;
};

/* Define the cmd types */
static char mulifctl_cmds[][MAX_SIZE] = {
	"add",
	"rem",
	"ipversion",	
	"addmvlan",
	"delmvlan",
	"showmvlan",
	"setmacoffset",
	"setdscpdown",
	"set",
	"",
};

/* Define the protocol types of cmd */
static char mulifctl_protos[][MAX_SIZE] = {
	"pppoe",
	"ipoe",
    "pppoe_bi", //pppoe with bridge interface on
    "ipoe_bi", //ipoe with bridge interface on
	"bridge",
	"",
};

/* Define the args num of each cmd */
static int mulifctl_cmds_args[] = {
	9,
	3,
	4,	
	4,
	4,
	3,
	3,
	5,
	5,
};

void show_mulifctl_usage ()
{
	#ifdef TCSUPPORT_FWC_VLAN_TAG
		printf("Usage: smuxctl add  [pppoe | ipoe | bridge] pvc_name if_name vlan_mode[1~3:untag,transparent,tag] vid_fir pbit_fir vid_sec pbit_sec multicast_tci\n");
	#else
		if(TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL){
			if(TCSUPPORT_PON_ROSTELECOM_VAL)
				printf("Usage: smuxctl add  [pppoe | ipoe | bridge] pvc_name if_name defaultGw_flag vlan_mode[1~3:untag,transparent,tag] vid pbit multicast_tci\n");
			else
				printf("Usage: smuxctl add  [pppoe | ipoe | bridge] pvc_name if_name vlan_mode[1~3:untag,transparent,tag] vid pbit multicast_tci\n");
		}
		else if(TCSUPPORT_XPON_HAL_API_EXT_VAL)
			printf("Usage: smuxctl add  [pppoe | ipoe | bridge] pvc_name if_name mac_address\n");
		else
			printf("Usage: smuxctl add  [pppoe | ipoe | bridge] pvc_name if_name\n");
	#endif
	printf("       smuxctl rem if_name\n");
	if(TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL)
	{
		printf("       smuxctl ipversion if_name ipversion_index[0|1|2, 0 All, 1 IPv4 only, 2 IPv6 Only]\n");
	}
	printf("       smuxctl addmvlan if_name ext_mvlan\n");
	printf("       smuxctl delmvlan if_name ext_mvlan\n");
	printf("       smuxctl showmvlan if_name\n");
	printf("       smuxctl setmacoffset offset[0~1:normal,plus one]\n");//zdh: offset help
	printf("       smuxctl setdscpdown[flag:0 close 1 open, if_name, dscp_vlaue]\n");
	printf("	   smuxctl set if_name [mc_ppp_to_ip 1/0] \n");
}

int verify_param(char *param, char checkArray[][MAX_SIZE], int param_num)
{
	int retval = -1;
   	int i = 0;

   	for(i=0; strlen( checkArray[i] ); i++) {
   		if(strcmp(param, checkArray[i]) == 0) {
			retval = i;
			break;
		}
		/*To avoid infinite loop*/
		if(i >= param_num) {
			break;
		}		
  	}
  	return retval;
}/*end verify_param*/


int main(int argc, char **argv)
{
	struct mulif_ioctl_args ifr;
  	int fd;
  	int cmdID = -1;
  	int protoID = -1;
	unsigned short tempVid = 0;
	unsigned short tempPbit = 0;

	int i = 0;
	int mac_tmp[6];
	int base = 0;
	char cmd[20]={0};
	
	init_compileoption_val();
	
	if(TCSUPPORT_PON_ROSTELECOM_VAL)
		base = 1;

	#ifdef TCSUPPORT_FWC_VLAN_TAG
		mulifctl_cmds_args[0] = 9;
	
	#else
		if(TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL){
			if(TCSUPPORT_PON_ROSTELECOM_VAL)
				mulifctl_cmds_args[0] = 10;
			else
				mulifctl_cmds_args[0] = 9;
		}
		else if(TCSUPPORT_XPON_HAL_API_EXT_VAL)
			mulifctl_cmds_args[0] = 6;
		else
			mulifctl_cmds_args[0] = 5;
	#endif
	/*The args num must not less than 3*/
	if(argc == 2){
		if(!strcmp(argv[1],"version")){
			printf("\r\n smuxctl version: %s\n",MODULE_VERSION_SMUXCTL);
			return 0;
		}
	}
	
  	if (argc < 3) {
  		goto show_usage;
  	}
  	memset(&ifr, 0, sizeof(struct mulif_ioctl_args));

  	/*Check cmd type, add or rem */
  	cmdID = verify_param(*(++argv), mulifctl_cmds, MULIF_CMD_NUM);
  	if(cmdID >= 0)
  		ifr.cmd = cmdID;
  	else
  		goto show_usage;

  	/*Check args num. Add cmd must has 5 args, and Rem cmd must has 3 args
     * e.g. smuxctl add pppoe nas0 nas0_1
     *	    smuxctl rem nas0_1	
	 */
    
    #ifndef TCSUPPORT_FWC_VLAN_TAG
	  	if(argc != mulifctl_cmds_args[cmdID])
	  		goto show_usage;
    
	#else
		if(argc != mulifctl_cmds_args[cmdID] && argc != (mulifctl_cmds_args[cmdID]+2))
		  	goto show_usage;
	
	#endif
  	if(cmdID == MULIF_ADDIF_CMD) {
  		/*Check protocol type*/
  		protoID = verify_param(*(++argv), mulifctl_protos, MULIF_PROTO_NUM);
		if(protoID >= 0) {
			ifr.proto = protoID;
			strncpy(ifr.pvcname, argv[1], sizeof(ifr.pvcname) - 1);
			strncpy(ifr.ifname, argv[2], sizeof(ifr.ifname) - 1);
			if((TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL) && TCSUPPORT_PON_ROSTELECOM_VAL)
				ifr.defaultGW = atoi(argv[3]);
			else
				ifr.defaultGW = 0;
			
		if(TCSUPPORT_XPON_HAL_API_EXT_VAL)
		{
			memset(mac_tmp,0,24);
			sscanf(argv[3],"%x:%x:%x:%x:%x:%x",&(mac_tmp[0]),&(mac_tmp[1]),&(mac_tmp[2]),
			&(mac_tmp[3]),&(mac_tmp[4]),&(mac_tmp[5]));

			for(i = 0;i < 6;i++)
				ifr.mac_address[i] = mac_tmp[i]&0xff;
		}

			if(TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL){
				if(!TCSUPPORT_FWC_VLAN_TAG_VAL)
				{
					ifr.vtag.vlan_mode = atoi(argv[(base+3)]);
					if((ifr.vtag.vlan_mode < UNTAG_VTAG_MODE) || (ifr.vtag.vlan_mode > TAG_UNPIT_VTAG_MODE)){
						goto show_usage;
					}
					
					ifr.vtag.tci = 0;
					if(ifr.vtag.vlan_mode == TAG_VTAG_MODE || TAG_UNPIT_VTAG_MODE == ifr.vtag.vlan_mode){
						tempVid = atoi(argv[(base+4)]);
						if((tempVid < MIN_VALID_VTAG_VID) || (tempVid > MAX_VALID_VTAG_VID)){
							goto show_usage;
						}
						tempPbit= atoi(argv[(base+5)]);
						if(tempPbit > MAX_VALID_VTAG_PBIT){
							goto show_usage;
						}				
						ifr.vtag.tci = ((tempPbit<<13)|tempVid);				
					}

					tempVid = atoi(argv[(base+6)]);			
					if(tempVid > MAX_VALID_VTAG_VID){ // 0:disable multicast vid function, valid value:1~4094
						goto show_usage;
					}
					ifr.vtag.multicast_tci = tempVid;
				}
				else
				{
					char **argv_tmp = argv + 3;
					ifr.vtag.vlan_mode = atoi(*(argv_tmp++));
					if((ifr.vtag.vlan_mode < UNTAG_VTAG_MODE) || (ifr.vtag.vlan_mode > TAG_UNPIT_VTAG_MODE)){
						goto show_usage;
					}
					
					ifr.vtag.tci = 0;
					if(ifr.vtag.vlan_mode == TAG_VTAG_MODE || TAG_UNPIT_VTAG_MODE == ifr.vtag.vlan_mode){
						tempVid = atoi(*(argv_tmp++));
						if((tempVid < MIN_VALID_VTAG_VID) || (tempVid > MAX_VALID_VTAG_VID)){
							goto show_usage;
						}
						tempPbit= atoi(*(argv_tmp++));
						if(tempPbit > MAX_VALID_VTAG_PBIT){
							goto show_usage;
						}				
						ifr.vtag.tci = ((tempPbit<<13)|tempVid);
						
						#ifdef TCSUPPORT_FWC_VLAN_TAG
							ifr.vtag.vlan_map |= (1<<VLAN_FIREST_OFFSET);

							if(argc == (mulifctl_cmds_args[cmdID]+2))
							{
								tempVid  = 0;
								tempPbit = 0;
								tempVid = atoi(*(argv_tmp++));
								if((tempVid < MIN_VALID_VTAG_VID) || (tempVid > MAX_VALID_VTAG_VID)){
									goto show_usage;
								}
								tempPbit= atoi(*(argv_tmp++));
								if(tempPbit > MAX_VALID_VTAG_PBIT){
									goto show_usage;
								}				
								ifr.vtag.tci_sec = ((tempPbit<<13)|tempVid);	
								ifr.vtag.vlan_map |= (1<<VLAN_SECOND_OFFSET);
								
							}
						#endif
						
					}

					tempVid = atoi(*(argv_tmp));			
					if(tempVid > MAX_VALID_VTAG_VID){ // 0:disable multicast vid function, valid value:1~4094
						goto show_usage;
					}
					ifr.vtag.multicast_tci = tempVid;
				}
			}
			
		}
		else {
			goto show_usage;
		}
  	}
  	else if(ifr.cmd == MULIF_REMIF_CMD) {
    		strncpy(ifr.ifname, argv[1], sizeof(ifr.ifname) - 1);
  	}
	else if((TCSUPPORT_CT_VLAN_TAG_VAL || TCSUPPORT_OPENWRT_MULTI_WAN_VAL) && ifr.cmd == MULIF_SETIFIPVERSION_CMD) {
    		strncpy(ifr.ifname, argv[1], sizeof(ifr.ifname) - 1);
			ifr.proto = atoi(argv[2]);
  	}
	else if((ifr.cmd == MULIF_ADDMVLAN_CMD)||(ifr.cmd == MULIF_DELMVLAN_CMD)) {
    		strncpy(ifr.ifname, argv[1], sizeof(ifr.ifname) - 1);
		tempVid = atoi(argv[2]);
		if(tempVid > MAX_VALID_VTAG_VID)
		{ 
			goto show_usage;
		}
		ifr.ext_mvlan= atoi(argv[2]);
  	}
	else if(ifr.cmd == MULIF_SHOWMVLAN_CMD) {
		strncpy(ifr.ifname, argv[1], sizeof(ifr.ifname) - 1);
  	}else if(ifr.cmd == MULIF_SET_CMD){
  	    strncpy(ifr.ifname, argv[1], sizeof(ifr.ifname) - 1);
  	    strncpy(cmd, argv[2], sizeof(cmd) - 1);
  	    if(strncmp(cmd, "mc_ppp_to_ip", strlen(cmd)) == 0){
  	      	ifr.mode = MULTICAST_PPP_to_IP_CMD;
  	      	ifr.value = atoi(argv[3]);
  	    }
  	}
	else if(MULIF_SETOFFSET_CMD == ifr.cmd)
	{
		if(atoi(argv[1]) == 0 || atoi(argv[1]) == 1)
		{
			ifr.mac_offset = (unsigned char) atoi(argv[1]);
		}
		else{
			goto show_usage;
		}
	
	}
	else if(MULIF_SETDSCP_DW_CMD == ifr.cmd)
	{
		if(atoi(argv[1]) == 0 || atoi(argv[1]) == 1)
		{
			ifr.dscp_dw_flag = (char)atoi(argv[1]);
		}
		else
			goto show_usage;
		strncpy(ifr.ifname, argv[2], sizeof(ifr.ifname) - 1);
		ifr.dscp_dw_info = (unsigned char)atoi(argv[3]);
	}
  	/*Open socket and do ioctl*/
  	if (((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		|| (ioctl(fd, SIOCSIFSMUX, &ifr) < 0)) {
			printf("\n==>Error, socket or ioctl error for mulifctl\n");
			return -1;	
  	}

  	return 0;

show_usage:
	show_mulifctl_usage();
	return -1;

}
