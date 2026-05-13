#ifndef TR471_NPU_H_
#define	TR471_NPU_H_


#define		FUNC_TYPE_SET_SENDRATE		1
#define 	FUNC_TYPE_SET_MACADDR		2
#define 	FUNC_TYPE_SET_UDPIP4		3
#define 	FUNC_TYPE_SET_UDPIP6		4
#define 	FUNC_TYPE_START_TEST		5
#define 	FUNC_TYPE_STOP_TEST			6
#define 	FUNC_TYPE_GET_RXSTAT		7
#define 	FUNC_TYPE_SET_TIME			8
#define 	FUNC_TYPE_GET_TIME			9

typedef struct tr471_mail_data
{
	int func_type;
    char private[60];
}tr471_mail_data_t;

typedef struct send_rate_s
{
	int burst1;
	int payload1;
	int burst2;
	int payload2;
	int addon;
}send_rate_t;

typedef struct udp_ip_s
{
	int dip;
	int sip;
	short dport;
	short sport;
}udp_ip_t;

typedef struct udp_ip6_s
{
	char dip[16];
	char sip[16];
	short dport;
	short sport;
}udp_ip6_t;

typedef struct rx_stat_s
{
	unsigned int rxDatagrams;
	unsigned int rxBytes;
	
	unsigned int seqErrLoss;
	unsigned int seqErrOoo;
	
	unsigned int rttMinimum;
	unsigned int rttSample;
	unsigned int delayMinUpd;
	
	unsigned int clockDeltaMin;
	unsigned int delayVarMin;
	unsigned int delayVarMax;
	unsigned int delayVarSum;
	unsigned int delayVarCnt;	
}rx_stat_t;

struct curtime
{
    unsigned int time_sec;
	unsigned int time_nsec;
};


#endif

