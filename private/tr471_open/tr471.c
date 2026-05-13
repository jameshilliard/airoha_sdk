/*********************************************************************************
 * Speed Test module
 *
 * Copyright (C) 2016 Econet Technologies, Corp.
 * All Rights Reserved.
 *
 *********************************************************************************/

/************************************************************************
*                  I N C L U D E S
*************************************************************************
*/
#include <net/icmp.h>
#include <ecnt_hook/ecnt_hook_fe.h>
//#include <ecnt_hook/ecnt_hook_gpon_flow.h>
#include <ecnt_hook/ecnt_hook_ether.h>
#include <ecnt_hook/ecnt_hook_qdma.h>
#include <ecnt_hook/ecnt_hook_qdma_type.h>
#include <ecnt_hook/ecnt_hook_ifc.h>

#include "udpst_common.h"
#include "udpst_protocol.h"
#include "udpst.h"
#include "udpst_control.h"
#include "udpst_data.h"
#include "udpst_srates.h"

#include "tr471_npu.h"


#define ic_verify 0
#define ICMP_ECHOREPLY		0	/* Echo Reply			*/
/************************************************************************
*				   D A T A	 T Y P E S
*************************************************************************
*/

/************************************************************************
*				   G L O B A L	 V A R I A B L E	 D E F I N I T I O N
*************************************************************************
*/
struct sendingRate srtable[MAX_SENDING_RATES];
static char *boolText[] = {"Disabled", "Enabled"};

int macflag = 1;
int maclen = 0;
int isppp = 0;
int debugon = 0;
int curr_conn = -1;
int curr_tmp = -1;
int start_flag = 0;

/* IPv6 */
unsigned char ipv6_mode = 0;	/* 0: IPv4, 1: IPv6 */
struct in6_addr localip_v6[LOCAL_IP_MAX];
struct in6_addr targetip_v6;
struct in6_addr gateway_v6;
unsigned int mask_v6 = 0;
/* IPV4 */
unsigned int localip = 0;
unsigned int targetip = 0;
unsigned int gateway = 0;
unsigned int mask = 0;
unsigned short port_begin = 51200;


/* udp speedtest */
unsigned int udp_bandwidth = 1;	/*udp bandwidth for upload, unit Mbps */
unsigned int udp_cpu = 1;	/*udp send data bind cpu */
unsigned long send_pkt_per_time=0;
unsigned int curr_rate[20]={0};
unsigned int max_rate =0;
int thread_start = 0;
int end_flag = 0;
char wan_itf_alias_name[16];
struct net_device*  wan_dev = NULL;
struct net_device *pon_device = NULL;


unsigned int dscp_value = 0;		/*0-63*/
unsigned int eth_pri_value = 0;		/*0-7*/
unsigned char srcmac[6] = {0,};
unsigned char machdr[32] = {0,};
unsigned long time_start = 0;
struct timer_list tr471_measurement_timer;
/* for PON device statistic */
typedef struct {
    unchar						netIdx ;
    unchar						drvLb ;
    struct napi_struct  		napi ;
    struct net_device_stats		stats ;
} PWAN_NetPriv_T ;

int vlan_enable=0;
int npu_enable=0;
/************************************************************************
*				   E X T E R N A L	   F U N C T I O N	 D E C L A R A T I O N S
*************************************************************************
*/
extern int output_maxrate(int);

extern int (*wan_tr471_hook)(struct sk_buff*);
extern int (*wan_tr471_pinpong_handle_hook)(struct sk_buff*);

extern void tc3162wdog_kick(void);
extern uint32 update_time_interval(uint32 time_interval);
#if  SUPPORT_TR471_HW_FUNCTION
extern int tr471_hw_set_control(int payload_size, int pad_pattern, int patload_gen_enable, int packet_gen_enable);
extern void tr471_cal_parameter(void);
extern int tr471_hw_set_rx_ctrl(int rx_ring, int rx_par_en, int rx_acc_en);
#endif

extern int get_tr471_status_int(void);
extern void init_timer_clk(void);
extern struct timespec tr471_get_time(void);
extern int (*qdma_get_txring_unused_dscp_cnt_hook)(int ring_idx);

extern int one_us_tick ;
extern int one_ms_tick ;
extern int one_s_tick ;
extern struct net_device *pon_device ;
extern struct net_device*  wan_dev;



extern int tr471_set_udp_ip4(unsigned int sIPaddr, unsigned int dIPaddr, short sPort, short dPort);
extern 	int tr471_set_mac_addr(char* mac);
/************************************************************************
*				   E X T E R N A L	 D A TA  D E C L A R A T I O N S
*************************************************************************
*/
extern struct configuration conf;				   // Configuration data structure
extern struct repository repo; 				   // Repository of global data
extern struct connection *conn ;	// Connection table (array)
extern unsigned int udp_bandwidth;
extern int test_totallen;
extern int test_payload_len;
extern int test_payload_cnt ;

/************************************************************************
*				   F U N C T I O N	 D E C L A R A T I O N S
*************************************************************************
*/
void dump_skb(struct sk_buff *skb)
{
	char tmp[80];
	char *p = skb->data;
	char *t = tmp;
	int i, n = 0;
	printk("ERR skb=%08lx skb->head=%08lx \n data=%08lx len=%d mark=%08lX\n cb=%08lx \n",
		   (uint32) skb, (uint32) skb->head, (uint32) skb->data, skb->len, skb->mark,
		   *(unsigned long int *)(skb->cb));
	for (i = 0; i < skb->len; i++) {
		t += sprintf(t, "%02x ", *p++ & 0xff);
		if ((i & 0x0f) == 0x0f) {
			printk("%04x: %s\n", n, tmp);
			n += 16;
			t = tmp;
		}
	}
	if (i & 0x0f)
		printk("%04x: %s\n", n, tmp);
}

/*tr471 start*/
void tr471_set_sending_rate(int conn_idx) {
    struct sendingRate *sr;
#if  SUPPORT_TR471_HW_FUNCTION
    int i, var, var2, payload, ipv6add;
    char ipver[8];
    unsigned int dvar;
	int overload=0;

    if (conf.ipv6Only) {
        ipv6add = IPV6_ADDSIZE;
    } else {
        ipv6add = 0;
    }
	if(vlan_enable)
		overload=L0DG_OVERHEAD;
	else
		overload=L1DG_OVERHEAD;
	if(isppp)
		overload+=8;
    sr = &(conn[conn_idx].srStruct);
    var = var2 = 0;
    if (sr->burstSize1 > 0) {
        var     = (USECINSEC / sr->txInterval1) * sr->burstSize1;
        payload = (int) sr->udpPayload1;
        //
        // Truncate payload if it would cause oversized IPv6 jumbo packet
        //
        if (payload > MAX_JPAYLOAD_SIZE - ipv6add)
            payload = MAX_JPAYLOAD_SIZE - ipv6add;
        var *= payload + overload + ipv6add;
    }
    if (sr->burstSize2 > 0) {
        var2 = (USECINSEC / sr->txInterval2) * sr->burstSize2;
        var2 *= sr->udpPayload2 + overload + ipv6add;
    }
    if (sr->udpAddon2 > 0) {
        var2 += (USECINSEC / sr->txInterval2) * (sr->udpAddon2 + overload + ipv6add);
    }
    dvar = (unsigned int)(var + var2);
    //dvar *= 8;       // Convert to bits/sec
    //dvar /= 1000000; // Convert to Mbps
    dvar /= 125000;

    udp_bandwidth = dvar;

    set_tso_ratelimit(1, udp_bandwidth, 2, 4);
#else
#if TCSUPPORT_TR471_NPU_OFFLOAD
	if(npu_enable){
		sr = &(conn[conn_idx].srStruct);
		tr471_set_send_rate(sr->burstSize1,sr->udpPayload1,sr->burstSize2,sr->udpPayload2,sr->udpAddon2);
	}
#endif
#endif
	return ;
}


static inline int ipv6_addr_is_all_zero(const struct in6_addr *addr)
{
    return ((addr->s6_addr32[0] | addr->s6_addr32[1] | addr->s6_addr32[2] | addr->s6_addr32[3]) == 0);
}


static inline void ipv6_addr_copy(struct in6_addr *a1, const struct in6_addr *a2)
{
    memcpy(a1, a2, sizeof(struct in6_addr));
}


static int tr471_get_conn(void)
{
    int i = 0, k, j = 0;

    for (i = 0, k = curr_conn + 1; i < MAX_CONNECTIONS; i++, k++) {
        if (! conn[k % MAX_CONNECTIONS].state)
            break;
    }

    if (i < MAX_CONNECTIONS) {
        k = k % MAX_CONNECTIONS;
        memset(&conn[k], 0, sizeof(struct connection));

        /*random a local port from 51201~65535*/
        conn[k].locPort = (unsigned int)jiffies * 983 % (65535 - port_begin) + (port_begin + 1);
        conn[k].locPort = check_and_generate_lport(k, conn[k].locPort);

        if (ipv6_mode) {
            ipv6_addr_copy(&(conn[k].src_ipv6), &localip_v6[0]);
        } else {
            conn[k].src_ip = localip;
        }

        return k;
    }

    return  -1;
}

static int tr471_get_localip_mac(void)
{
    struct in_device *in_dev;
    struct in_ifaddr **ifap = NULL;
    struct in_ifaddr *ifa = NULL;

    struct inet6_dev *in6_dev;
    struct inet6_ifaddr *ifp6 = NULL;
    int local_ip_index = 0;

    if ((wan_dev == NULL) || !(wan_dev->flags & IFF_UP))
        return 0;

    if (ipv6_mode) {
        if ((in6_dev = wan_dev->ip6_ptr) != NULL) {
            read_lock_bh(&in6_dev->lock);
            list_for_each_entry(ifp6, &in6_dev->addr_list, if_list) {
                if (debugon > 0) {
                    printk("debug index=%d: %X:%X:%X:%X:%X:%X:%X:%X scope:%X\n", local_ip_index, ifp6->addr.s6_addr16[0], ifp6->addr.s6_addr16[1],
                           ifp6->addr.s6_addr16[2], ifp6->addr.s6_addr16[3], ifp6->addr.s6_addr16[4], ifp6->addr.s6_addr16[5],
                           ifp6->addr.s6_addr16[6], ifp6->addr.s6_addr16[7], ifp6->scope);
                }
                if ((ifp6->scope == IPV6_ADDR_ANY) && (local_ip_index < LOCAL_IP_MAX)) { /* Scope: Global */
                    printk("ipv6_addr added\n");
                    ipv6_addr_copy(&localip_v6[local_ip_index++], &(ifp6->addr));
                }
            }
            read_unlock_bh(&in6_dev->lock);
        } else {
            printk("speed_test_get_localip_mac: wan_dev->ip6_ptr is NULL\n");
        }
        //if (ifp6 != NULL)
        //ipv6_addr_copy(&localip_v6, &(ifp6->addr));
    } else {
        if ((in_dev = wan_dev->ip_ptr) != NULL) {
            for (ifap = &in_dev->ifa_list; (ifa = *ifap) != NULL; ifap = &ifa->ifa_next) {
                if (0 < strlen(wan_itf_alias_name)) {
                    if (strcmp(wan_itf_alias_name, ifa->ifa_label) == 0) {
                        break;
                    }
                } else {
                    if (strcmp(wan_dev->name, ifa->ifa_label) == 0) {
                        break;
                    }
                }
            }
        }
        if (ifa != NULL) {
            localip = ntohl(ifa->ifa_local);
        }
    }
    memcpy(srcmac, wan_dev->dev_addr, 6);

    if (curr_conn < 0)
        return 0;

    if (ipv6_mode) {
        printk("ipv6_addr_copy\n");
        ipv6_addr_copy(&(conn[curr_conn].src_ipv6), &localip_v6[0]);
    } else {
        conn[curr_conn].src_ip = localip;
        if (mask) {
            if ((localip & mask) == (targetip & mask)) {
                arp_send(0x01, 0x0806, htonl(targetip), wan_dev, htonl(conn[curr_conn].src_ip),
                         NULL, srcmac, NULL);
                arp_send(0x01, 0x0806, htonl(targetip), wan_dev, htonl(conn[curr_conn].src_ip),
                         NULL, srcmac, NULL);
            } else {
                arp_send(0x01, 0x0806, htonl(gateway), wan_dev, htonl(conn[curr_conn].src_ip),
                         NULL, srcmac, NULL);
                arp_send(0x01, 0x0806, htonl(gateway), wan_dev, htonl(conn[curr_conn].src_ip),
                         NULL, srcmac, NULL);
            }
        }
    }
    return 0;
}

static int tr471_update_conn(void)
{

    struct connection*  pconn;
    if (! conn[curr_conn].remPort)
        return 0;
    if (! conn[curr_conn].locPort)
        return 0;
    if (ipv6_mode) {
        if (ipv6_addr_is_all_zero(&(conn[curr_conn].dst_ipv6)))
            return 0;
        if (ipv6_addr_is_all_zero(&conn[curr_conn].src_ipv6))
            return 0;
    } else {
        if (! conn[curr_conn].dst_ip)
            return 0;
        if (! conn[curr_conn].src_ip)
            return 0;
    }

    if (maclen != 14 && maclen != 18 && maclen != 22 && maclen != 26 && maclen != 12) {
        conn[curr_conn].state != 0;
        return 0;
    }
    if (wan_dev == NULL)
        return 0;
    pconn = &conn[curr_conn];
    conn[curr_conn].state = 1;

    if (ipv6_mode) {
        ipv6_addr_copy(&(pconn->src_ipv6), &localip_v6[0]);
    } else {
        pconn->src_ip = localip;
    }
    curr_tmp = curr_conn;
    curr_conn = tr471_get_conn();

    return 0;
}

static int tr471_set_gateway(char* val)
{
    int tmp[8] = {0};
    int idx = 0;

    if (ipv6_mode) {
        sscanf(val, "%X:%X:%X:%X:%X:%X:%X:%X", &tmp[0], &tmp[1], &tmp[2], &tmp[3], &tmp[4], &tmp[5], &tmp[6], &tmp[7]);
        for (idx = 0 ; idx < 8 ; idx++) {
            gateway_v6.s6_addr16[idx] = htons(tmp[idx]);
        }
    } else {
        sscanf(val, "%d.%d.%d.%d", &tmp[0], &tmp[1], &tmp[2], &tmp[3]);
        gateway  = (tmp[0] << 24) | (tmp[1] << 16) | (tmp[2] << 8) | tmp[3];
    }
    return 0;
}

static int tr471_set_destip(char* val)
{
    int tmp[8] = {0};
    int idx = 0;

    if (curr_conn < 0) {
        curr_conn = tr471_get_conn();
    }
    if (curr_conn < 0)
        return 0;
    macflag = 1;

    if (ipv6_mode) {
        sscanf(val, "%X:%X:%X:%X:%X:%X:%X:%X", &tmp[0], &tmp[1], &tmp[2], &tmp[3], &tmp[4], &tmp[5], &tmp[6], &tmp[7]);
        for (idx = 0 ; idx < 8 ; idx++) {
            targetip_v6.s6_addr16[idx] = htons(tmp[idx]);
        }
        ipv6_addr_copy(&(repo.serverIp6), &targetip_v6);
        ipv6_addr_copy(&(conn[curr_conn].dst_ipv6), &targetip_v6);

        printk("ipv6=");
        for (idx = 0 ; idx < 8 ; idx++) {
            printk(" %X", targetip_v6.s6_addr16[idx]);
        }
        printk("\n");
    } else {
        sscanf(val, "%d.%d.%d.%d", &tmp[0], &tmp[1], &tmp[2], &tmp[3]);
        targetip = (tmp[0] << 24) | (tmp[1] << 16) | (tmp[2] << 8) | tmp[3];
        repo.serverIp = targetip;
        conn[curr_conn].dst_ip = targetip;
        //printk("ipv4=%x\n", repo.serverIp);
    }
    tr471_update_conn();
    tr471_get_localip_mac();
    return 0;
}
static int tr471_set_mask(char* val)
{
    int tmp[4];

    if (ipv6_mode) {
        sscanf(val, "%d", &mask_v6);
    } else {
        sscanf(val, "%d.%d.%d.%d", &tmp[0], &tmp[1], &tmp[2], &tmp[3]);
        mask  = (tmp[0] << 24) | (tmp[1] << 16) | (tmp[2] << 8) | tmp[3];
    }
    return 0;
}
static int tr471_set_udp_bandwidth(char *  val)
{
    int bandwidth_value = 0;
    sscanf(val, "%d", &bandwidth_value);

    udp_bandwidth = bandwidth_value;
    return 0;
}


int tr471_set_udp_bind_cpu(char* val)
{
    int cpu_id = 0;
    sscanf(val, "%d", &cpu_id);
    udp_cpu = cpu_id;

    return 0;
}

int  tr471_parameter_init(void)
{
    int i = 0;
    //
    // Continue to initialize non-zero configuration data
    //
    printk("tr471_parameter_init\n");

    repo.sendingRates = srtable;

    conf.addrFamily  = AF_UNSPEC;
    conf.errSuppress = TRUE;
    conf.jumboStatus = DEF_JUMBO_STATUS;
    conf.useOwDelVar = DEF_USE_OWDELVAR;
    conf.debug = FALSE;
    conf.subIntPeriod	= DEF_SUBINT_PERIOD;
    conf.controlPort	= DEF_CONTROL_PORT;
    conf.sockSndBuf 	= DEF_SOCKET_BUF;
    conf.sockRcvBuf 	= DEF_SOCKET_BUF;
    conf.lowThresh		= DEF_LOW_THRESH;
    conf.upperThresh	= DEF_UPPER_THRESH;
    conf.trialInt		= DEF_TRIAL_INT;
    conf.slowAdjThresh	= DEF_SLOW_ADJ_TH;
    conf.highSpeedDelta = DEF_HS_DELTA;
    conf.seqErrThresh	= DEF_SEQ_ERR_TH;
    conf.logFileMax 	= DEF_LOGFILE_MAX * 1000;
    conf.ipTosByte   = DEF_IPTOS_BYTE;
    conf.srIndexConf = DEF_SRINDEX_CONF;
    conf.testIntTime = DEF_TESTINT_TIME;
    conf.verbose = FALSE;

    for (i = 0; i < MAX_CONNECTIONS; i++) {
        init_conn(i, 1);
    }

    repo.systemClock = tr471_get_time();

    return 0;
}

int tr471_reset(void)
{
    int k;

    tr471_parameter_init();
	tr471_init_hw_cnt();
    memset(machdr, 0, sizeof(machdr));
    thread_start = 0;
    macflag = 1;
    maclen = 0;
    isppp = 0;
    debugon = 0;
    curr_conn = -1;
    localip = 0;
    targetip = 0;
    gateway = 0;
    mask = 0;
    udp_bandwidth = 1000000;
	vlan_enable=0;
    /* IPv6 */
    ipv6_mode = 0;	/* 0: IPv4, 1: IPv6 */
    for (k = 0; k < LOCAL_IP_MAX; k++) {
        memset(&localip_v6[k], 0, sizeof(struct in6_addr));
    }
    memset(&targetip_v6, 0, sizeof(struct in6_addr));

	memset(curr_rate,0,20*sizeof(unsigned int));
	max_rate=0;
	dscp_value = 0;		/*0-63*/
    eth_pri_value = 0; 	/*0-7*/
    time_start = 0;
	vlan_enable=0;
	tr471_set_test(0);
	end_flag = 0;
	start_flag = 0;
#if TCSUPPORT_TR471_NPU_OFFLOAD
	if(npu_enable)
		tr471_stop_test();
	npu_enable=0;
#endif
	del_timer_sync(&tr471_measurement_timer);
    printk("Reset successfully!!\n");
    return 0;
}


#if ic_verify
int test_set_tr471_parament(struct connection  *c)
{
    unsigned char mactmp[14] = {0x3c, 0x7c, 0x3f, 0x3c, 0x9a, 0xa1, 0x00, 0x77, 0x00, 0x88, 0x00, 0x99, 0x08, 0x00};
    if (ipv6_mode) {
        mactmp[12] = 0x86;
        mactmp[13] = 0xdd;
    }
    printk("set init parament\n");
    maclen = 14;
    memcpy(machdr, mactmp, maclen);
    c->testAction = TEST_ACT_TEST;
    c->rxStoppedLoc = FALSE;
    c->spduSeqErr = 0x1789;
    c->spduTime.tv_sec = 0x2367;
    c->spduTime.tv_nsec = 0x8965;
    c->lpduSeqNo = 0;
    c->remPort = 25000;
    c->locPort = 45000;
    c->src_ip = 0xc0a80b03;
    c->dst_ip = 0xc0a80b02;
    return 1;
}

#endif



#if SUPPORT_TR471_HW_FUNCTION

int tr471_init_udphdr_to_qbi(struct connection*  pconn, struct udphdr* phdr, int remPort, int locPort, int length)
{
    memset(phdr, 0, sizeof(struct udphdr));
    phdr->dest = htons(remPort);
    phdr->source = htons(locPort);
    phdr->len = htons(length + sizeof(struct udphdr));
    return 0;
}


__IMEM  int tr471_ipv6_send_to_qbi(struct connection*	pconn, struct sk_buff* skb)
{
    struct ipv6hdr hdr;
    memset(&hdr, 0, sizeof(struct ipv6hdr));
    hdr.version = 6;
    hdr.payload_len = htons(skb->len);
    hdr.nexthdr = 17;
    hdr.hop_limit = 255;
    ipv6_addr_copy(&(hdr.saddr), &(pconn->src_ipv6));
    ipv6_addr_copy(&(hdr.daddr), &(pconn->dst_ipv6));
    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 1) {
        skb->mark |= (eth_pri_value << 21);
        skb->mark |= (1 << 20);
    }

    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 0 && TCSUPPORT_FWC_ENV_VAL == 0 && TCSUPPORT_XPON_HAL_API_VAL == 0)
        skb->mark |= (eth_pri_value << 8);

    skb->mark |= 0x10;
    skb_push(skb, 40);
    memcpy(skb->data, &hdr, 40);
    skb_reset_network_header(skb);
    skb->protocol = htons(0x86dd);

    /* only send loadpdu to qbi */
    skb_push(skb, maclen);
    memcpy(skb->data, machdr, maclen);
    //dump_skb(skb);
    if (skb->len == 90) {
        if (ra_sw_nat_hook_set_magic) {
            ra_sw_nat_hook_set_magic(skb, FOE_MAGIC_TR471_HW_TEST_UPSTREAM);
        }
        if (ra_sw_nat_hook_sendto_ppe) {

            if (1 == ra_sw_nat_hook_sendto_ppe(skb)) {

                return 0;
            }
        }
    }

#if  0
    //dump_skb(skb);
    if (offload_eth_fast_tx_hook) {
        offload_eth_fast_tx_hook(skb, 0);
        return 0;
    }
#endif

    return tr471_dev_send(skb);
}

__IMEM  int tr471_ip_send_to_qbi(struct connection*  pconn, struct sk_buff* skb)
{
    struct iphdr hdr;
    static int udp_ip_id = 1;
    memset(&hdr, 0, sizeof(struct iphdr));

    if (debugon > 2) {
        printk("%s, enter\n", __func__);
    }
    hdr.version = 4;
    hdr.ihl = 5;
    hdr.ttl = 255;
    hdr.protocol = 17;
    hdr.tot_len = htons(skb->len + 20);
    hdr.saddr = htonl(pconn->src_ip);
    hdr.daddr = htonl(pconn->dst_ip);
    hdr.id = htons(udp_ip_id++);
    hdr.tos = (dscp_value << 2);
    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 1) {
        skb->mark |= (eth_pri_value << 21);
        skb->mark |= (1 << 20);
    }
    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 0 && TCSUPPORT_FWC_ENV_VAL == 0 && TCSUPPORT_XPON_HAL_API_VAL == 0)
        skb->mark |= (eth_pri_value << 8);

    skb->mark |= 0x10;

    hdr.check = ip_fast_csum(&hdr, 5);

    skb_push(skb, 20);
    memcpy(skb->data, &hdr, 20);
    skb_reset_network_header(skb);
    skb->protocol = htons(0x0800);

    /* Upstream: data packet go offload */
        skb_push(skb, maclen);

        memcpy(skb->data, machdr, maclen);
        skb_reset_mac_header(skb);

    if (maclen > 20) {
        *(short*)(skb->data + maclen - 4) = hdr.tot_len + 2;
    }
    if (skb->len == 70) {
        //if (0) {
        //dump_skb(skb);
        if (ra_sw_nat_hook_set_magic) {
            ra_sw_nat_hook_set_magic(skb, FOE_MAGIC_TR471_HW_TEST_UPSTREAM);
        }
        if (ra_sw_nat_hook_sendto_ppe) {
            if (debugon > 2) {
                printk("%s, start to send packet to PPE\n", __func__);
            }

            if (1 == ra_sw_nat_hook_sendto_ppe(skb)) {
                /* for offload packet, calculate the statistic counters to PON device */
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,35)
				pon_device =  dev_get_by_name(&init_net, DEFAULT_PON_ITF);
#else
				pon_device =  dev_get_by_name(DEFAULT_PON_ITF);
#endif
                if (pon_device) {
                    PWAN_NetPriv_T *pNetPriv ;
                    pNetPriv = (PWAN_NetPriv_T *)netdev_priv(pon_device) ;
                    pNetPriv->stats.tx_packets++ ;
                    pNetPriv->stats.tx_bytes += skb->len + ETH_HLEN ;
                } else {
                    if (debugon > 0) {
                        printk("%s, pon_device = NULL\n", __func__);
                    }
                }
				if(pon_device != NULL){
					dev_put(pon_device);
					pon_device = NULL;
				}
                return 0;
            }
        }
    }

#if 0
    if (ra_sw_nat_hook_set_magic) {
        ra_sw_nat_hook_set_magic(skb, FOE_MAGIC_TR471_HW_TEST_UPSTREAM);
    }
    //dump_skb(skb);
    if (offload_eth_fast_tx_hook) {
        offload_eth_fast_tx_hook(skb, 7);
        return 0;
    }
#endif

    return tr471_dev_send(skb);
}

__IMEM  int tr471_send_to_qbi(struct connection*  pconn, struct udphdr * pudphdr, char* data, int len)
{
    struct sk_buff* skb;
    int send;
    struct udphdr* ptmp;
    struct ipv6hdr hdr;

    skb = skbmgr_alloc_skb2k();
    if (skb == NULL) {
        return -1;
    }
    skb_reserve(skb, 100);

    send = len ;
    if (data) {
        memcpy(skb->data, data, send);
        data += send;
    }

    if (send)
        skb_put(skb, send);
    skb_push(skb, sizeof(struct udphdr));

    memcpy(skb->data, pudphdr, sizeof(struct udphdr));

    ptmp = (struct udphdr*) skb->data;


#if 1
    skb->ppe_magic = FOE_MAGIC_TR471_HW_TEST_UPSTREAM;
#else
    /*enable software checksum*/
    ptmp->check = csum_tcpudp_magic(htonl(pconn->src_ip), htonl(pconn->dst_ip), send + 8, IPPROTO_UDP, csum_partial(skb->data, send + 8, 0));
#endif
    if (ipv6_mode) {
        tr471_ipv6_send_to_qbi(pconn, skb);
    } else {
        tr471_ip_send_to_qbi(pconn, skb);
    }

    return 0;
}


int test_udp_send_date_to_qbi(struct connection  *c)
{
    struct udphdr hdr;
    unsigned int pktcount = 0;
    unsigned int  sec = 0, usec = 0;
    char option[2048] = {};
    struct timeval udp_data_time;
    struct loadHdr lHdr;
    int uvar;
    struct sendingRate *sr;
    unsigned int total_len;
    memset(option, 0, 2048);
    memset(&lHdr, 0, sizeof(struct loadHdr));

    repo.systemClock = tr471_get_current_time();
    lHdr.loadId  = htons(LOAD_ID);
    lHdr.testAction = (uint8_t) c->testAction;
    lHdr.rxStopped	= (uint8_t) c->rxStoppedLoc;
    // lpduSeqNo set below
    // udpPayload set below
    lHdr.spduSeqErr = htons((uint16_t) c->spduSeqErr);
    //
    lHdr.spduTime_sec	= htonl((uint32_t) c->spduTime.tv_sec);
    lHdr.spduTime_nsec = htonl((uint32_t) c->spduTime.tv_nsec);
    lHdr.lpduTime_sec	= htonl((uint32_t) repo.systemClock.tv_sec);
    lHdr.lpduTime_nsec = htonl((uint32_t) repo.systemClock.tv_nsec);
    if (c->lpduSeqNo == 0) {
        c->lpduSeqNo++;
    }
    lHdr.lpduSeqNo = htonl((uint32_t) c->lpduSeqNo);

    c->lpduSeqNo = c->lpduSeqNo + test_payload_cnt;
    //c->lpduSeqNo=lpduSeqNo;
    uvar = sizeof(struct loadHdr);

    //
    // Setup corresponding message structure
    //
    total_len = test_totallen;
    if (total_len > 65535) {
        printk("total_len error!\n");
        return 0;
    }

    lHdr.udpPayload = htons((uint16_t) total_len);

    memcpy(option, &lHdr, sizeof(struct loadHdr));
    tr471_init_udphdr_to_qbi(c, &hdr, c->remPort, c->locPort, uvar);
    return tr471_send_to_qbi(c, &hdr, option, uvar);
    return 0;
}

#endif


unsigned short check_and_generate_lport(int k, unsigned short lport)
{
    int i = 0;
    int gen_lport = 0;
    unsigned char match = 0;
    unsigned short check_lport  = 0;
    unsigned int offset = 0;
    unsigned long srand_jiffies = 0;
    check_lport = lport;

match_lport:
    for (i = 0; i < k; i++) {
        if (check_lport == conn[i].locPort) {
            match = 1;
            break;
        }
    }

    if (1 == match) {
        match = 0;
        if (0 == gen_lport) {
            offset = (prandom_u32() % 100);
        }
        offset    += gen_lport;
        gen_lport += 1;
        srand_jiffies = jiffies + offset;
        check_lport = (unsigned int)srand_jiffies * 983 % (65535 - port_begin) + (port_begin + 1);
        goto match_lport;
    }

    return check_lport;
}

int tr471_set_wandev(char* val)
{
    char name[16];
    if (1 != sscanf(val, "%15s", name))
        return -1;
    wan_dev = dev_get_by_name(&init_net, name);
    if (wan_dev)
        dev_put(wan_dev);
    return 0;
}

__IMEM  int tr471_dev_send(struct sk_buff* skb)
{
    skb->dev = wan_dev;
    if (debugon > 2) {
        printk("%s, enter\n", __func__);
    }

    if (wan_dev && (wan_dev->flags & IFF_UP)) {
        if (debugon > 2) {
            printk("%s, start dev_queue_xmit, dev=%s\n", __func__, wan_dev->name);
        }
        skb->dev = wan_dev;
        if (debugon > 2) {
            dump_skb(skb);
        }
        dev_queue_xmit(skb);
    } else {
        if (debugon > 0) {
            printk("%s, free skb 1\n", __func__);
        }
        dev_kfree_skb(skb);
    }
    return 0;
}


__IMEM  int tr471_ipv6_send(struct connection*	pconn, struct sk_buff* skb)
{
    struct ipv6hdr hdr;
    memset(&hdr, 0, sizeof(struct ipv6hdr));
    hdr.version = 6;
    hdr.payload_len = htons(skb->len);
    hdr.nexthdr = 17;
    hdr.hop_limit = 255;
    ipv6_addr_copy(&(hdr.saddr), &(pconn->src_ipv6));
    ipv6_addr_copy(&(hdr.daddr), &(pconn->dst_ipv6));
    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 1) {
        skb->mark |= (eth_pri_value << 21);
        skb->mark |= (1 << 20);
    }

    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 0 && TCSUPPORT_FWC_ENV_VAL == 0 && TCSUPPORT_XPON_HAL_API_VAL == 0)
        skb->mark |= (eth_pri_value << 8);

    skb->mark |= 0x10;
    skb_push(skb, 40);
    memcpy(skb->data, &hdr, 40);
    skb_reset_network_header(skb);
    skb->protocol = htons(0x86dd);


    if (skb->len > 210) {
        if (ra_sw_nat_hook_set_magic) {

            ra_sw_nat_hook_set_magic(skb, FOE_MAGIC_TR471_TEST_UPSTREAM);
        }
        if (ra_sw_nat_hook_sendto_ppe) {

            if (1 == ra_sw_nat_hook_sendto_ppe(skb)) {

                return 0;
            }
        }
    }

    if (!isppp) {
        skb_push(skb, maclen);
        memcpy(skb->data, machdr, maclen);
    }
    return tr471_dev_send(skb);
}

__IMEM  int tr471_ip_send(struct connection*  pconn, struct sk_buff* skb)
{
    struct iphdr hdr;
    static int udp_ip_id = 1;
    memset(&hdr, 0, sizeof(struct iphdr));

    if (debugon > 2) {
        printk("%s, enter\n", __func__);
    }
    hdr.version = 4;
    hdr.ihl = 5;
    hdr.ttl = 255;
    hdr.protocol = 17;
    hdr.tot_len = htons(skb->len + 20);
    hdr.saddr = htonl(pconn->src_ip);
    hdr.daddr = htonl(pconn->dst_ip);
    hdr.id = htons(udp_ip_id++);
    hdr.tos = (dscp_value << 2);
    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 1) {
        skb->mark |= (eth_pri_value << 21);
        skb->mark |= (1 << 20);
    }
    if (TCSUPPORT_XPON_HAL_API_EXT_VAL == 0 && TCSUPPORT_FWC_ENV_VAL == 0 && TCSUPPORT_XPON_HAL_API_VAL == 0)
        skb->mark |= (eth_pri_value << 8);

    skb->mark |= 0x10;

    hdr.check = ip_fast_csum(&hdr, 5);

    skb_push(skb, 20);
    memcpy(skb->data, &hdr, 20);
    skb_reset_network_header(skb);
    skb->protocol = htons(0x0800);


    /* Upstream: data packet go offload */
    if (skb->len > 200) {
        if (ra_sw_nat_hook_set_magic) {
            ra_sw_nat_hook_set_magic(skb, FOE_MAGIC_TR471_TEST_UPSTREAM);
        }
        if (ra_sw_nat_hook_sendto_ppe) {
            if (debugon > 2) {
                printk("%s, start to send packet to PPE\n", __func__);
            }

            if (1 == ra_sw_nat_hook_sendto_ppe(skb)) {
                /* for offload packet, calculate the statistic counters to PON device */
				
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,35)
				pon_device =  dev_get_by_name(&init_net, DEFAULT_PON_ITF);
#else
				pon_device =  dev_get_by_name(DEFAULT_PON_ITF);
#endif
                if (pon_device) {
                    PWAN_NetPriv_T *pNetPriv ;
                    pNetPriv = (PWAN_NetPriv_T *)netdev_priv(pon_device) ;
                    pNetPriv->stats.tx_packets++ ;
                    pNetPriv->stats.tx_bytes += skb->len + ETH_HLEN ;
                } else {
                    if (debugon > 0) {
                        printk("%s, pon_device = NULL\n", __func__);
                    }
                }
				if(pon_device != NULL){
					dev_put(pon_device);
					pon_device = NULL;
				}
                return 0;
            }
        }
    }
    if (!isppp) {
        skb_push(skb, maclen);

        memcpy(skb->data, machdr, maclen);
        skb_reset_mac_header(skb);
    }

    if (maclen > 20)
        *(short*)(skb->data + maclen - 4) = hdr.tot_len + 2;

    return tr471_dev_send(skb);
}

int tr471_timeout(void)
{
    printk("tr471_timeout\n");
	
   	tr471_set_test(0);
#if TCSUPPORT_TR471_NPU_OFFLOAD
	if(conf.usTesting == TRUE && npu_enable)
		tr471_stop_test();
#endif
    curr_conn=-1;
    return 0;
}



__IMEM  int tr471_send(struct connection*  pconn, struct udphdr * pudphdr, char* data, int len)
{
    struct sk_buff* skb;
    int send;
    struct udphdr* ptmp;
    struct ipv6hdr hdr;

    if (debugon > 2) {
        printk("%s, enter\n", __func__);
    }
    skb = skbmgr_alloc_skb2k();
    if (skb == NULL) {
        return -1;
    }
    skb_reserve(skb, 100);

    send = len ;

    if (data) {
        memcpy(skb->data, data, send);
        data += send;
    }

    if (send)
        skb_put(skb, send);
    skb_push(skb, sizeof(struct udphdr));

    memcpy(skb->data, pudphdr, sizeof(struct udphdr));

    ptmp = (struct udphdr*) skb->data;
    //dump_skb(skb);

#if 1
    skb->ppe_magic = FOE_MAGIC_TR471_TEST_UPSTREAM;
#else
    /*enable software checksum*/
    ptmp->check = csum_tcpudp_magic(htonl(pconn->src_ip), htonl(pconn->dst_ip), send + 8, IPPROTO_UDP, csum_partial(skb->data, send + 8, 0));
#endif
    if (ipv6_mode) {
        tr471_ipv6_send(pconn, skb);
    } else {
        tr471_ip_send(pconn, skb);
    }

    return 0;
}

int tr471_init_udphdr(struct udphdr* phdr, int remPort, int locPort, int length)
{
    memset(phdr, 0, sizeof(struct udphdr));
    phdr->dest = htons(remPort);
    phdr->source = htons(locPort);

    phdr->len = htons(length + sizeof(struct udphdr));  /*can modify the payload length*/
    return 0;
}


void tr471_set_general_config(void)
{
    //
    // Print banner
    //
    printk("\nSoftware Ver: %s, Protocol Ver: %d, Built: " __DATE__ " " __TIME__ "\n",
           SOFTWARE_VER, PROTOCOL_VER);
    printk("Mode: Client, Jumbo Datagrams: %s\n", boolText[conf.jumboStatus]);

    tr471_cal_parameter();
    send_setupreq(curr_conn);
    time_start = jiffies;
	tr471_init_time();


    return;

}

int tr471_pingpong_handle(struct sk_buff * skb)
{
    struct iphdr *iphdr;

    struct port_info pinfo;
    memset(&pinfo, 0x0, sizeof(pinfo));


    if (debugon > 2) {
        printk("%s, enter\n", __func__);
    }
    skb_reset_network_header(skb);
    iphdr = (struct iphdr *)skb_network_header(skb);
    skb_set_transport_header(skb, iphdr->ihl * 4);

    if (!isppp) {
        skb_push(skb, maclen);

        memcpy(skb->data, machdr, maclen);
        skb_reset_mac_header(skb);
    }

    if (maclen > 20)
        *(short*)(skb->data + maclen - 4) = iphdr->tot_len + 2;

#if TCSUPPORT_TR471_NPU_OFFLOAD
	if(npu_enable){
        if (ra_sw_nat_hook_set_magic) {
            ra_sw_nat_hook_set_magic(skb, FOE_MAGIC_TR471_NPU_UPSTREAM);
        }
		skb->ppe_magic = FOE_MAGIC_TR471_NPU_UPSTREAM;
	}
#endif
    return tr471_dev_send(skb);
}

int test_udp_send_date(struct connection  *c, int index)
{
    //register struct connection *c = &conn[connindex];
    struct udphdr hdr;
    unsigned int pktcount = 0;
    unsigned int  sec = 0, usec = 0;
    char option[2048] = {};
    struct timeval udp_data_time;
    struct loadHdr lHdr;
    int uvar = 0;


    if (index == 1) {
        uvar = c->srStruct.udpPayload1;
    } else if (index == 2) {
        uvar = c->srStruct.udpPayload2;
    } else if (index == 3) {
        uvar = c->srStruct.udpAddon2;
    }

    if (uvar == 0) {
        return 0;
    }
    if (ipv6_mode) {
        if (uvar > MAX_PAYLOAD_SIZE - IPV6_ADDSIZE)
            uvar = MAX_PAYLOAD_SIZE - IPV6_ADDSIZE;
    }

    memset(option, 0, 2048);
    memset(&lHdr, 0, sizeof(struct loadHdr));

    repo.systemClock = tr471_get_current_time();
    lHdr.loadId  = htons(LOAD_ID);
    lHdr.testAction = (uint8_t) c->testAction;
    lHdr.rxStopped	= (uint8_t) c->rxStoppedLoc;
    // lpduSeqNo set below
    // udpPayload set below
    lHdr.spduSeqErr = htons((uint16_t) c->spduSeqErr);
    //
    lHdr.spduTime_sec	= htonl((uint32_t) c->spduTime.tv_sec);
    lHdr.spduTime_nsec = htonl((uint32_t) c->spduTime.tv_nsec);
    lHdr.lpduTime_sec	= htonl((uint32_t) repo.systemClock.tv_sec);
    lHdr.lpduTime_nsec = htonl((uint32_t) repo.systemClock.tv_nsec);
    lHdr.lpduSeqNo = htonl((uint32_t) ++c->lpduSeqNo);
    lHdr.udpPayload = htons((uint16_t) uvar);

    //
    // Setup corresponding message structure
    //
    memcpy(option, &lHdr, sizeof(struct loadHdr));

    tr471_init_udphdr(&hdr, c->remPort, c->locPort, uvar);
    return tr471_send(c, &hdr, option, uvar);

}
#if SUPPORT_TR471_HW_FUNCTION
#if 0
static int tr471_send_data_up_thread(void)
{
    uint32 time_interval = 0;
    uint32 pkt_send_tun = 1, kickdog_tun = 0, timer1 = 0;
    int i = 0;
    register struct connection *c = &conn[curr_conn];
    uint32 tun1 = 0, tun2 = 0;


    /*init timer*/
   	init_timer_clk();
    /*default rate=1*/
    set_tso_ratelimit(1, 1, 2, 4);

    while (1) {
        time_interval = update_time_interval(time_interval);

        if (start_flag) {
            if (qdma_get_txring_unused_dscp_cnt_hook(7) > 110) {
                test_udp_send_date_to_qbi(&conn[0]);
            }
            if (time_interval > timer1) {
                tc3162wdog_kick();

                if (pkt_send_tun > conf.testIntTime ) {
                    end_flag = 1;
                    start_flag = 0;
                    printk("end_flag = 1\n");
                }
                pkt_send_tun = pkt_send_tun + 1;
				timer1 = time_interval +  one_s_tick;
            }
        } else if (time_interval > timer1) {
            tc3162wdog_kick();
            kickdog_tun = kickdog_tun + 1;
            if (kickdog_tun > conf.testIntTime ) {
                end_flag = 1;
                start_flag = 0;
                printk("end_flag = 1\n");
            }
            timer1 = timer1 +  one_s_tick;
        }

        if (end_flag == 1) {
            printk("UP_test finished\n");
            break;
        }
    }
    return 0;
}
#else
/*hw gen packet*/
static int tr471_send_data_up_thread(void)
{
    uint32 time_interval = 0;
    uint32 pkt_send_tun = 1, kickdog_tun = 1;
    int i = 0, unused=0;
    register struct connection *c = &conn[curr_conn];
    uint32 tick_number1 = 0, timer1 = 0;
    uint32 tick_number2 = 0, timer2 = 0;
    uint32 tmp = 0;
    struct sendingRate sr ; // Set to connection structure

    /*init timer*/
    init_timer_clk();
    set_tso_ratelimit(1, 1, 2, 4);

    //send_pkt_per_mstime = udp_bandwidth /udp_buffer_len/8 /1000; //packets per ms
    //send_pkt_per_time = (uint32)(udp_bandwidth / udp_buffer_len / 8 *  udp_send_timeinterval	/ 1000);
    /*gen pkt per udp_send_timeinterval ms and kik dog*/
    while (1) {
		if(qdma_get_txring_unused_dscp_cnt_hook)
		unused =qdma_get_txring_unused_dscp_cnt_hook(7);
			
        tick_number1 = (uint32)(one_us_tick * sr.txInterval1);
        tick_number2 = (uint32)(one_us_tick * sr.txInterval2);
        time_interval = update_time_interval(time_interval);

        if (unused && start_flag) {
			memcpy(&sr,&c->srStruct, sizeof(struct sendingRate));
            if (tick_number1 && time_interval > timer1) {
                test_payload_len = sr.udpPayload1;
                tmp = sr.burstSize1;

                while (tmp > TR471_GEN_MAX_PKT) {
                    test_payload_cnt = TR471_GEN_MAX_PKT;
                    test_totallen = test_payload_len * test_payload_cnt;
					tr471_hw_set_control(test_payload_len,0,1,1);
                    test_udp_send_date_to_qbi(&conn[0]);
                    tmp = tmp - TR471_GEN_MAX_PKT;
                }
                if (tmp > 0) {
                    test_payload_cnt = tmp;
                    test_totallen = test_payload_len*test_payload_cnt;
					tr471_hw_set_control(test_payload_len,0,1,1);
                    test_udp_send_date_to_qbi(&conn[0]);
                }
                timer1 = time_interval + tick_number1;
            }
            if (tick_number2 && time_interval > timer2) {
                test_totallen = sr.burstSize2  * sr.udpPayload2 + sr.udpAddon2;
				if(sr.udpPayload2 ==0){
					test_payload_len=sr.udpAddon2;
				}else{
					test_payload_len = sr.udpPayload2;
				}
				tr471_hw_set_control(test_payload_len,0,1,1);
				tr471_cal_parameter();
                test_udp_send_date_to_qbi(&conn[0]);
                timer2 = time_interval + tick_number2;
            }

            
                }
            if (time_interval > kickdog_tun * one_s_tick) {
                tc3162wdog_kick();
                kickdog_tun = kickdog_tun + 1;
            if (kickdog_tun > conf.testIntTime + 3) {
                    end_flag = 1;
                    start_flag = 0;
                    printk("end_flag = 1\n");
                }
            }
    
        if (end_flag == 1) {
			set_tso_ratelimit(0, 1, 2, 4);
            printk("UP_test finished\n");
            break;
        }
    }
    return 0;
}
#endif
#else
static int tr471_send_data_up_thread(void)
{
    uint32 time_interval = 0;
    uint32 pkt_send_tun = 1, kickdog_tun = 1;
    int i = 0;
    register struct connection *c = &conn[curr_conn];
    uint32 tick_number1 = 0, timer1 = 0;
    uint32 tick_number2 = 0, timer2 = 0;


    /*init timer*/
    init_timer_clk();

    //send_pkt_per_mstime = udp_bandwidth /udp_buffer_len/8 /1000; //packets per ms
    //send_pkt_per_time = (uint32)(udp_bandwidth / udp_buffer_len / 8 *  udp_send_timeinterval	/ 1000);
    /*gen pkt per udp_send_timeinterval ms and kik dog*/
    while (1) {
        tick_number1 = (uint32)(one_us_tick * c->srStruct.txInterval1);
        tick_number2 = (uint32)(one_us_tick * c->srStruct.txInterval2);
        time_interval = update_time_interval(time_interval);

        if (start_flag) {
            if (tick_number1 && time_interval > timer1) {
                for (i = 0; i < c->srStruct.burstSize1; i ++) {
                    test_udp_send_date(&conn[0], 1);
                }
                timer1 = time_interval + tick_number1;
            }
            if (tick_number2 && time_interval > timer2) {
                for (i = 0; i < c->srStruct.burstSize2; i ++) {
                    test_udp_send_date(&conn[0], 2);
                }
                if (c->srStruct.udpAddon2) {
                    test_udp_send_date(&conn[0], 3);
                }
                timer2 = time_interval + tick_number2;
            }
        }
		
        if (time_interval > kickdog_tun * one_s_tick) {
			
            tc3162wdog_kick();
            kickdog_tun = kickdog_tun + 1;
            if (kickdog_tun > conf.testIntTime + 3) {
                end_flag = 1;
                start_flag = 0;
                printk("end_flag = 1\n");
            }
        }

		
        if (end_flag == 1) {
            printk("UP_test finished\n");
            break;
        }
    }
    return 0;
}
#endif

#if 1
static int tr471_send_data_down_thread(void)
{
	uint32 time_interval=0;
    uint32  kickdog_tun = 1;
    int i = 0;
    uint32 tick_number1 = 0, timer1 = 0;
#if SUPPORT_TR471_HW_FUNCTION
	tr471_hw_set_rx_ctrl(ring_idx, 1, 1);
#endif
    /*init timer*/
    init_timer_clk();

	tick_number1=(uint32)(one_ms_tick * get_tr471_status_int());
    while (1) {
		tr471_get_current_time();
		
        time_interval = update_time_interval(time_interval);
        if (start_flag) {
            if (tick_number1 && time_interval > timer1) {
				send_statuspdu(curr_conn);
                timer1 = time_interval + tick_number1;
            }
			
        }

        if (time_interval > kickdog_tun * one_s_tick) {
            tc3162wdog_kick();
            kickdog_tun = kickdog_tun + 1;
            if (kickdog_tun > conf.testIntTime + 3) {
                end_flag = 1;
                start_flag = 0;
                printk("end_flag = 1\n");
            }
        }

        if (end_flag == 1) {
			tr471_del_ifc(conn[curr_conn].locPort,conn[curr_conn].remPort);
#if SUPPORT_TR471_HW_FUNCTION
			tr471_hw_set_rx_ctrl(ring_idx, 0, 0);
#endif
            printk("DOWN_test finished\n");
            break;
        }
		
    }
    return 0;
}

#else
static int tr471_send_data_down_thread(void)
{
	int time_interval=0;
    uint32  kickdog_tun = 1;
    int i = 0;
	
    uint32 tick_number1 = 0, timer1 = 0;
#if SUPPORT_TR471_HW_FUNCTION
	tr471_hw_set_rx_ctrl(ring_idx, 1, 1);
#endif
    while (1) {
		repo.systemClock = tr471_get_current_time();
		
        if (start_flag) {
            send_statuspdu(curr_conn);
        }
        if (time_interval > kickdog_tun * 1000/get_tr471_status_int()) {
            tc3162wdog_kick();
          
            if (kickdog_tun > conf.testIntTime+3) {
                end_flag = 1;
            }
			 kickdog_tun = kickdog_tun + 1;
        }
        if (end_flag == 1) {
			tr471_del_ifc(conn[curr_conn].locPort,conn[curr_conn].remPort);
#if SUPPORT_TR471_HW_FUNCTION
			tr471_hw_set_rx_ctrl(ring_idx, 0, 0);
#endif
            printk("DOWN_test finished\n");
            break;
        }
        time_interval ++;
		tr471_delay1ms(get_tr471_status_int());
		
    }
    return 0;
}
#endif
static int tr471_send_data_thread(void)
{
    int i = 0, j = 0;
    uint32 time_interval = 0;
	struct curtime cur_t;
    if (conf.usTesting) {
		if(npu_enable)
			return 0;
        tr471_send_data_up_thread();
    } else if (conf.dsTesting) {
#if 0// TCSUPPORT_TR471_NPU_OFFLOAD
		if(npu_enable){
			repo.systemClock = tr471_get_current_time();
			cur_t.time_sec=repo.systemClock.tv_sec;
			cur_t.time_nsec=(unsigned int)repo.systemClock.tv_nsec;
			tr471_set_current_time(&cur_t,2*sizeof(unsigned int));	
		}
#endif
        tr471_send_data_down_thread();
    }

    return 0 ;

}
int tr471_read_npu_statistics(struct connection* c)
{
#if TCSUPPORT_TR471_NPU_OFFLOAD
	rx_stat_t  buff;

    struct timespec tspecvar;
	memset(&buff,0,sizeof(rx_stat_t));
	mod_tr471_get_rxstat( &buff);

    c->tiRxDatagrams = buff.rxDatagrams;
    c->sisAct.rxDatagrams += buff.rxDatagrams;

    c->tiRxBytes = buff.rxBytes;
    c->sisAct.rxBytes += buff.rxBytes;

    c->seqErrLoss = buff.seqErrLoss;
    c->sisAct.seqErrLoss += buff.seqErrLoss;


    c->seqErrOoo = buff.seqErrOoo;
    c->sisAct.seqErrOoo += buff.seqErrOoo;    

    c->rttMinimum = buff.rttMinimum;

    c->rttSample = buff.rttSample;
    if (c->sisAct.rttMinimum > buff.rttSample)
       c->sisAct.rttMinimum = buff.rttSample;

    if (c->sisAct.rttMaximum < buff.rttSample)
       c->sisAct.rttMaximum = buff.rttSample;

    c->delayMinUpd = buff.delayMinUpd;

    c->clockDeltaMin = buff.clockDeltaMin;


    c->delayVarMin = buff.delayVarMin;
    if (c->sisAct.delayVarMin > buff.delayVarMin)
        c->sisAct.delayVarMin = buff.delayVarMin;

    c->delayVarMax = buff.delayVarMax;
    if (c->sisAct.delayVarMax < buff.delayVarMax)
        c->sisAct.delayVarMax = buff.delayVarMax;

  
    c->delayVarSum = buff.delayVarSum;
    c->sisAct.delayVarSum += buff.delayVarSum;

    c->delayVarCnt = buff.delayVarCnt;
    c->sisAct.delayVarCnt += buff.delayVarCnt;
    c->lpduSeqNo = 1;

    tspeccpy(&c->pduRxTime, &repo.systemClock); 
    tspecvar.tv_sec  = TIMEOUT_NOTRAFFIC;
    tspecvar.tv_nsec = 0;
    tspecplus(&repo.systemClock, &tspecvar, &c->endTime);
#if 0
    printk("%u  %u    %u  %u  %u  %u  %u  %u  %u  %u  %u  %u \n",c->tiRxDatagrams,
      c->tiRxBytes,c->seqErrLoss,c->seqErrOoo,c->rttMinimum,c->rttSample,c->delayMinUpd,
      c->clockDeltaMin,c->delayVarMin,c->delayVarMax,c->delayVarSum,c->delayVarCnt);
#endif
#endif
	return 0;
}

struct timespec tr471_read_npu_time(void)
{
	struct timespec ts;
	struct curtime time;
#if TCSUPPORT_TR471_NPU_OFFLOAD
	
	tr471_get_npu_time(& time);
	ts.tv_sec=time.time_sec;
	ts.tv_nsec=time.time_nsec;

#endif
	return ts;
}

/*tr471 SPEED TEST TASK INIT */
int tr471_init_task(void)
{
    struct task_struct	*thread = NULL;


    if (!thread_start) {

        thread_start = 1;
        thread = kthread_create(tr471_send_data_thread, NULL, "tr471_test");
        if (!thread) {
            printk("create thread fail \n");
            return -1;
        }
        kthread_bind(thread, udp_cpu);
        wake_up_process(thread);
    } else {
        printk("thread alread created!\n");
    }
    return 0;

}


__IMEM  int tr471_handle_v6(struct sk_buff * skb)
{
    unsigned short* proto;
    unsigned char* eth;
    struct in6_addr  srcip6, dstip6;
    unsigned  short srcport, dstport;
    struct ipv6hdr* pip6hdr;
    struct udphdr * pudphdr;
    int datalen, vlan_layer = 0, i = 0;
    bool localip_v6_flag = false;
    unsigned char* udppayload;
	unsigned char* data;
	struct port_info pinfo;
	memset(&pinfo,0x0,sizeof(pinfo));
    if(curr_conn<0)
       return -1;

    if (skb == NULL)
        return -1;

    proto = (unsigned short*)(skb->data - 2);
    while ((*proto) == htons(0x8100) || (*proto) == htons(0x88a8)) {
        proto += 2;
        vlan_layer += 4;
    }

    if ((*proto) == htons(0x8864)) {
        proto += 4;
        if ((*proto) != htons(0x0057))
            return ERR;
    } else {
        if ((*proto) != htons(0x86dd))
            return ERR;
    }
    pip6hdr = (struct ipv6hdr*)(proto + 1);
    ipv6_addr_copy(&srcip6, &(pip6hdr->saddr));
    ipv6_addr_copy(&dstip6, &(pip6hdr->daddr));
    if ((pip6hdr->nexthdr == 0x3a) && macflag) { /* ICMPv6 */
        if (debugon > 0) {
            printk("tr471_handle_v6: get a ICMPv6 packet, payload_len=%d, Type=%d\n", pip6hdr->payload_len, *(unsigned char*)(proto + 21));
        }
        if ((pip6hdr->payload_len > 0) && (*(unsigned char*)(proto + 21) == 0x81)) { /* catch a echo(ping) reply */
            for (i = 0; i < LOCAL_IP_MAX; i++) {
                if (ipv6_addr_equal(&dstip6, &localip_v6[i])) {
                    localip_v6_flag = true;
                    break;
                }
            }
            if (ipv6_addr_equal(&srcip6, &targetip_v6) && (localip_v6_flag == true)) {
                eth = skb_mac_header(skb);
                if (eth) {
                    maclen = 0;
                    memcpy(machdr, eth + ETH_ALEN, ETH_ALEN);
                    maclen += ETH_ALEN;
                    memcpy(machdr + maclen, eth, ETH_ALEN);
                    maclen += ETH_ALEN;
                    machdr[maclen] = 0x86;
                    machdr[maclen + 1] = 0xdd;
                    maclen += 2;
                    macflag = 0;
                    printk("tr471_handle_v6: ICMPv6 packet received\n");
                }
            }
        }
        return ERR;
    }
    if (pip6hdr->nexthdr != 0x11) /* only handle IPv6 UDP packet */
        return ERR;

    pudphdr = (struct tcphdr *)((unsigned char*)pip6hdr + 40);
    srcport = ntohs(pudphdr->source);
    dstport = ntohs(pudphdr->dest);

    datalen = ntohs(pip6hdr->payload_len) - sizeof(struct udphdr);

    if (datalen < 0)
        return ERR;

    udppayload = (char *)pudphdr ;   //loadpdu offset=8
    udppayload = udppayload + 8;
    proto = (unsigned short*)(udppayload);

    if ((*proto) == htons(CHSR_ID)) {
		if(vlan_layer)
			vlan_enable=1;
        //service setup response received from server
        service_setupresp(curr_conn, udppayload);
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    } else if ((*proto) == htons(CHTA_ID)) {
        //service test activation response from server
        service_actresp(curr_conn, udppayload);
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    } else if ((*proto) == htons(STATUS_ID)) {
        // Service incoming status PDUs
        service_statuspdu(curr_conn, udppayload);
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    } else if (conf.dsTesting && (*proto) == htons(LOAD_ID)) {
        //Service incoming load PDUs
        service_loadpdu(curr_conn, udppayload);
#if TCSUPPORT_TR471_NPU_OFFLOAD
    	if(npu_enable){
			 pinfo.tsid = 0x7f;
			 if(isppp){
				vlan_layer+=6; /*remore pppoe header*/
			 }
			 if(vlan_layer){
				 skb_pull(skb,vlan_layer);
				 memmove(skb->data -2 -MAC_LEN,skb->data -2- MAC_LEN - vlan_layer,MAC_LEN);
				 //dump_skb(skb);
			 }
			 if(isppp){
				data= skb->data-2;
				data[0]=0x86;
				data[1]=0xdd;
			 }
			 skb_push(skb,MAC_LEN+2);
			 if (0 == ra_sw_nat_hook_tx(skb,&pinfo,FOE_MAGIC_TR471_NPU_DOWNSTREAM))
			 {
				 return ECNT_CONTINUE;
			 }
            skb_pull(skb, MAC_LEN + 2);
		 }
#endif
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    }

    return  ERR;

}

__IMEM  int tr471_handle(struct sk_buff * skb)
{
    unsigned short* proto;
    unsigned char* eth;
    unsigned int srcip, dstip;
    unsigned  short srcport, dstport;
    struct iphdr* piphdr;
    struct udphdr * pudphdr;
	struct icmphdr *icmph;
    int datalen, vlan_layer = 0;
    unsigned char* udppayload;
	unsigned char* data;
    struct arphdr* parphdr;
    int i = 0;
	bool localip_v4_flag = false;
    struct connection*  udppconn;
	struct port_info pinfo;
	memset(&pinfo,0x0,sizeof(pinfo));
    
    if(curr_conn<0)
        return -1;

    if (skb == NULL)
        return -1;

    if (ipv6_mode)
        return tr471_handle_v6(skb);
    udppconn = &conn[0];
    proto = (unsigned short*)(skb->data - 2);
    while ((*proto) == htons(0x8100) || (*proto) == htons(0x88a8)) {
        proto += 2;
        vlan_layer += 4;
    }
    if ((*proto) == htons(0x8864)) {
        proto += 4;
        if ((*proto) != htons(0x0021))
            return ERR;
    } else if ((*proto) == htons(0x0806) && macflag) { /*if arp reply set machdr*/
        parphdr = (struct arphdr *)(proto + 1);

        if (ntohs(parphdr->ar_op) != 2)
            return ERR;

        if ((localip & mask) == (targetip & mask)) {			/*local ip and target ip is in the same subnet*/
            if (*(int*)(proto + 8) != htonl(targetip)) {
                return ERR;
            }
        } else {
            if (*(int*)(proto + 8) != htonl(gateway)) {
                return ERR;
            }
        }

        eth = skb_mac_header(skb);
        if (eth) {
            maclen = 0;
            memcpy(machdr, eth + ETH_ALEN, ETH_ALEN);
            maclen += ETH_ALEN;
            memcpy(machdr + maclen, eth, ETH_ALEN);
            maclen += ETH_ALEN;
            machdr[maclen] = 0x08;
            machdr[maclen + 1] = 0x00;
            maclen += 2;
            macflag = 0;
            printk("arp received!\n");
        }
    } else {
        if ((*proto) != htons(0x0800))
            return ERR;
    }
    piphdr = (struct iphdr *)(proto + 1);
    srcip = ntohl(piphdr->saddr);
    dstip = ntohl(piphdr->daddr);
	if ((piphdr->protocol == 0x01) && macflag) { /* ICMPv4 */
        if (debugon > 0) {
            printk("tr471_handle: get a ICMP packet\n");
        }
		icmph = (struct icmphdr *)((char*)piphdr + (piphdr->ihl * 4));
        if ( (icmph->type == ICMP_ECHOREPLY)) { /* catch a echo(ping) reply */
			if (dstip == localip) {
				localip_v4_flag = true;
			}
            if ((srcip == targetip) && (localip_v4_flag == true)) {
                eth = skb_mac_header(skb);
                if (eth) {
                    maclen = 0;
                    memcpy(machdr, eth + ETH_ALEN, ETH_ALEN);
                    maclen += ETH_ALEN;
                    memcpy(machdr + maclen, eth, ETH_ALEN);
                    maclen += ETH_ALEN;
                    machdr[maclen] = 0x08;
                    machdr[maclen + 1] = 0x00;
                    maclen += 2;
                    macflag = 0;
                    printk("tr471_handle: ICMP packet received\n");
                }
            }
        }
        return ERR;
    }
    if (piphdr->protocol != 0x11)
        return ERR;

    pudphdr = (struct udphdr *)((char*)piphdr + (piphdr->ihl * 4));
 //   srcip = ntohl(piphdr->saddr);
 //   dstip = ntohl(piphdr->daddr);
    srcport = ntohs(pudphdr->source);
    dstport = ntohs(pudphdr->dest);

    datalen = ntohs(piphdr->tot_len) - (piphdr->ihl) * 4 - sizeof(struct udphdr);
    udppayload = (char *)pudphdr ;   //loadpdu offset=8
    udppayload = udppayload + 8;

    if (datalen < 0)
        return ERR;
    repo.rcvDataSize = datalen;

    //repo.systemClock = tr471_get_current_time();
    proto = (unsigned short*)(udppayload);
    //CHSR_ID
    if ((*proto) == htons(CHSR_ID)) {
		if(vlan_layer>0)
			vlan_enable=1;
        //service setup response received from server
        service_setupresp(curr_conn, udppayload);
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    } else if ((*proto) == htons(CHTA_ID)) {
        //service test activation response from server
        service_actresp(curr_conn, udppayload);
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    } else if ((*proto) == htons(STATUS_ID)) {
        // Service incoming status PDUs
        service_statuspdu(curr_conn, udppayload);
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    } else if (conf.dsTesting && (*proto) == htons(LOAD_ID)) {
        //Service incoming load PDUs
        service_loadpdu(curr_conn, udppayload);
#if TCSUPPORT_TR471_NPU_OFFLOAD
    	if(npu_enable){
			 pinfo.tsid = 0x7f;
			 if(isppp){
				vlan_layer+=6; /*remore pppoe header*/
			 }
			 if(vlan_layer){
				 skb_pull(skb,vlan_layer);
				 memmove(skb->data -2 -MAC_LEN,skb->data -2- MAC_LEN - vlan_layer,MAC_LEN);
				 //dump_skb(skb);
			 }
			 if(isppp){
				data= skb->data-2;
				data[0]=0x08;
				data[1]=0x00;
			 }
			 skb_push(skb,MAC_LEN+2);
			 if (0 == ra_sw_nat_hook_tx(skb,&pinfo,FOE_MAGIC_TR471_NPU_DOWNSTREAM))
			 {
				 return ECNT_CONTINUE;
			 }
		 }
#endif		 
        if (skb) {
            kfree_skb(skb);
        }
        return SUCCESS;
    }

    return ERR;

}

void tr471_npu_set_parameter(void){
#if TCSUPPORT_TR471_NPU_OFFLOAD

	struct connection * p = &conn[curr_conn];
    struct sendingRate *sr;

	if(!ipv6_mode){
		printk("ipv4_mode\n");
		tr471_set_udp_ip4(p->src_ip,p->dst_ip,p->locPort,p->remPort);
	}
	else{
		printk("ipv6_mode\n");
		tr471_set_udp_ip6(&(p->src_ipv6),&(p->dst_ipv6),p->locPort,p->remPort);
	}
	
	tr471_set_mac_addr(machdr);	
	
	sr = &(p->srStruct);
	tr471_set_send_rate(sr->burstSize1,sr->udpPayload1,sr->burstSize2,sr->udpPayload2,sr->udpAddon2);
#endif	
	return;
}



int tr471_set_test(int enable)
{
#if TCSUPPORT_TR471_NPU_OFFLOAD
	struct connection * p = &conn[curr_conn];
	if(npu_enable){
		if(enable){	
			//printk("%x,%x ,%d,%d\n",p->src_ip,p->dst_ip,p->locPort,p->remPort);
			tr471_npu_set_parameter();
			tr471_start_test(conf.usTesting,ipv6_mode);
			start_flag=1;
			end_flag =0;
		}
		else{
			//tr471_stop_test();
			start_flag=0;
			end_flag =1;
		}
	}else
#endif
	{
	if(enable){
		start_flag=1;
		end_flag =0;
	}else{
		start_flag=0;
		end_flag =1;
		}
	}
    return 0;
}

#ifdef CONFIG_TP_IMAGE
int tr471_finish_read_proc(char *page, char **start, off_t off, int count, int *eof, void *data)
{	
    int len = 0;

    len = sprintf(page, "isFinish:%d\n", end_flag);

    len -= off;
    *start = page + off;
    if (len > count){
        len = count;
    }
    else {
        *eof = 1;
    }

    if (len < 0){
        len = 0;
    }

    return len;
}

#endif /* CONFIG_TP_IMAGE */

int tr471_result_read_proc(char *page, char **start, off_t off, int count, int *eof, void *data)
{
	int len = 0;
	int i = 0;


	len = sprintf(page, "%s\n", ipv6_mode?"IPv6":"IPv4");


	len += sprintf(page+len, "\nmax_rate:%d",max_rate);

	for(i=0;i<conf.testIntTime;i++){
		len += sprintf(page+len, "\nindex:%d",i);
		len += sprintf(page+len, " %d",curr_rate[i]);
	}
	
	len -= off;
	*start = page + off;
	if (len > count)
		len = count;
	else
		*eof = 1;

	if (len < 0)
		len = 0;

	return len;
}

int tr471_read_proc(char *page, char **start, off_t off, int count, int *eof, void *data)
{
    printk( "%s\n", ipv6_mode ? "IPv6" : "IPv4");
	output_maxrate(curr_conn);
    return 0;
}
int tr471_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
    char val_string[512];
    int i = 0, j = 0, k = 0;
    char action[16] = {'\0'};
    unsigned int ratelimit = 0;
	int flag=0;
	struct connection * p = &conn[curr_conn];

    if (count > sizeof(val_string) - 1)
        return -EINVAL;
    if (copy_from_user(val_string, buffer, count))
        return -EFAULT;

    val_string[count] = '\0';

    if (memcmp(val_string, "up", 2) == 0) {
        conf.usTesting = TRUE;
        conf.dsTesting = FALSE;
        repo.isServer = FALSE;
        printk("usTesting=True\n");
    } else if (memcmp(val_string, "down", 4) == 0) {
        conf.dsTesting = TRUE;
        conf.usTesting = FALSE;
        repo.isServer = FALSE;
        printk("dsTesting = TRUE\n");
    } else if (memcmp(val_string, "destip4", 7) == 0) {
        ipv6_mode = 0;
		conf.ipv6Only=0;
        tr471_set_destip(&val_string[7]);
    } else if (memcmp(val_string, "oneway", 6) == 0) {
        sscanf(&val_string[6], "%d", &(flag));
		if (flag==0){
			conf.useOwDelVar=FALSE;
			printk("false\n");
		}
		else if(flag ==1 ){
			conf.useOwDelVar=TRUE;
			printk("true\n");
		}
    } else if (memcmp(val_string, "destip6", 7) == 0) {
        ipv6_mode = 1;
		conf.ipv6Only=1;
        tr471_set_destip(&val_string[7]);
    } else if (memcmp(val_string, "wandev", 6) == 0) {
        tr471_set_wandev(&val_string[6]);
    } else if (memcmp(val_string, "time", 4) == 0) {
        sscanf(&val_string[4], "%d", &(conf.testIntTime));
		if(conf.testIntTime>15)
			conf.testIntTime=15;
    } else if (memcmp(val_string, "gateway", 7) == 0) {
        tr471_set_gateway(&val_string[7]);
    } else if (memcmp(val_string, "mask", 4) == 0) {
        tr471_set_mask(&val_string[4]);
    } else if (memcmp(val_string, "start", 5) == 0) {
    	if(start_flag){
			printk("ERROR:The test has started!\n");
		}else if (!macflag || ipv6_mode) {
			sr_copy(&conn[curr_conn].srStruct, &repo.sendingRates[0], FALSE);
			tr471_set_general_config();
			
        } else {
            printk("wait for arp...\n");
        }
    } else if (memcmp(val_string, "show", 4) == 0) {
        show_sending_rates();
    } else if (memcmp(val_string, "jumbo", 5) == 0) {
        sscanf(&val_string[5], "%d", &(conf.jumboStatus));
        printk("jumboStatus is : %d\n", (conf.jumboStatus));
        repo.maxSendingRates = 0;
        if (def_sending_rates() == 0) {
            printk("Define sending rate table \n");
        }
    } else if (memcmp(val_string, "verbose", 7) == 0) {
        sscanf(&val_string[7], "%d", &(conf.verbose));
        printk("verbose is : %d\n", (conf.verbose));
    } else if (memcmp(val_string, "reset", 5) == 0) {
        tr471_reset();
    } else if (memcmp(val_string, "cpu", 3) == 0) {
        tr471_set_udp_bind_cpu(&val_string[3]);
        printk("cpu= %d\n", udp_cpu);
    }  else if (memcmp(val_string, "bandwidth", 9) == 0) {
        tr471_set_udp_bandwidth(&val_string[9]);
        printk("udp_bandwitch is %d\n", udp_bandwidth);
    }  else if (memcmp(val_string, "thread", 6) == 0) {
        if (!macflag || ipv6_mode) {
            tr471_init_task();
        }
    } else if (memcmp(val_string, "debugon", 7) == 0) {
        sscanf(&val_string[7], "%d", &(debugon));
        printk("debugon=%d\n", debugon);
    } else if (memcmp(val_string, "debug", 5) == 0) {
        sscanf(&val_string[5], "%d", &(conf.debug));
        printk("debug=%d\n", conf.debug);
    } else if (memcmp(val_string, "errthresh", 9) == 0) {
        sscanf(&val_string[9], "%d", &(conf.seqErrThresh));
        printk("seqErrThresh=%d\n", conf.seqErrThresh);
    } else if (memcmp(val_string, "stop", 4) == 0) {
        printk("stop\n");
		tr471_set_test(0);
    } else if (memcmp(val_string, "ppp", 3) == 0) {
        sscanf(&val_string[3], "%d", &(isppp));
        printk("isppp=%d\n", isppp);
    }
#if  SUPPORT_TR471_HW_FUNCTION
    else if (memcmp(val_string, "tpayload", 8) == 0) {
        sscanf(&val_string[8], "%d", &(test_payload_len));
        printk("testpayload=%d\n", test_payload_len);
        tr471_hw_set_control(test_payload_len, 0, 1, 1);
		tr471_cal_parameter();
    } else if (memcmp(val_string, "totallen", 8) == 0) {
        sscanf(&val_string[8], "%d", &(test_totallen));
        printk("test_totallen=%d\n", test_totallen);
		tr471_cal_parameter();
    } else if (memcmp(val_string, "ring", 4) == 0) {
        sscanf(&val_string[4], "%d", &(ring_idx));
        printk("ring_idx=%d\n", ring_idx);
    }
#endif
#if TCSUPPORT_TR471_NPU_OFFLOAD
    else if (memcmp(val_string, "npu", 3) == 0) {
        sscanf(&val_string[3], "%d", &(npu_enable));
        printk("npu_enable=%d\n", npu_enable);
		if(npu_enable)
			tr471_npu_set_parameter();
    }
#endif
#if ic_verify
     else if (memcmp(val_string, "dump", 4) == 0) {
        printk("dump info \n");
        tr471_dump_info(&val_string[4]);
    } else if (memcmp(val_string, "rate", 4) == 0) {
        sscanf(&val_string[4], "%d", &(ratelimit));
		printk("ratelimit =%d\n",ratelimit);
		set_tso_ratelimit(1, ratelimit, 2, 4);
    } else if (memcmp(val_string, "test", 4) == 0) {
        /*debug*/
        curr_conn = 0;
        test_set_tr471_parament(&conn[0]);
        printk("configure\n");
       	tr471_cal_parameter();
        test_udp_send_date_to_qbi(&conn[0]);
    } else if (memcmp(val_string, "sthread", 7) == 0) {
    	printk("thread start\n");
        test_set_tr471_parament(&conn[0]);
        tr471_init_task();
    } else if (memcmp(val_string, "sflag", 5) == 0) {
       	tr471_cal_parameter();
        start_flag = 1;
    }
#endif

    else {
        printk("ERROR COMMAND\n ");
    }
    return count;
}

int tr471_ctrl_itf_init(void)
{
    struct proc_dir_entry *tr471Proc = NULL;

    conn = (struct connection *)kmalloc(MAX_CONNECTIONS * sizeof(struct connection), GFP_KERNEL);
    //memset(repo.sendingRates,0,MAX_SENDING_RATES*sizeof(struct sendingRate));
    memset(conn, 0, MAX_CONNECTIONS * sizeof(struct connection));

    memset(&repo, 0, sizeof(struct repository));
    memset(&conf, 0, sizeof(struct configuration));

    tr471_reset();

    if (def_sending_rates() == 0) {
        printk("Define sending rate table \n");
    }
    tr471Proc = create_proc_entry("tc3162/tr471", 0, NULL);
    if (!tr471Proc) {
        printk(" create proc for tr471 \n");
        return -ENOMEM;
    }
    tr471Proc->read_proc = tr471_read_proc;
    tr471Proc->write_proc = tr471_write_proc;


    tr471Proc = create_proc_entry("tc3162/tr471_result", 0, NULL);
    if (!tr471Proc) {
        printk(" create proc for tr471 \n");
        return -ENOMEM;
    }
    tr471Proc->read_proc = tr471_result_read_proc;

#ifdef CONFIG_TP_IMAGE
        tr471Proc = create_proc_entry("tc3162/is_tr471_finish", 0, NULL);
        if (!tr471Proc) {
                printk(" create proc for tr471 \n");
                return -ENOMEM;
        }
        tr471Proc->read_proc = tr471_finish_read_proc;
#endif /* CONFIG_TP_IMAGE */

	/*default*/
	tr471_set_wandev(DEFAULT_WAN_ITF);

	wan_tr471_hook=tr471_handle;
	wan_tr471_pinpong_handle_hook=tr471_pingpong_handle;

	timer_setup(&tr471_measurement_timer, tr471_timeout, 0);

    return 0;
}


int tr471_ctrl_itf_deinit(void)
{

    kfree(conn);
    remove_proc_entry("tc3162/tr471", 0);
	remove_proc_entry("tc3162/tr471_result", 0);

#ifdef CONFIG_TP_IMAGE
	remove_proc_entry("tc3162/is_tr471_finish", 0);
#endif /* CONFIG_TP_IMAGE */

    wan_tr471_hook=NULL;
    wan_tr471_pinpong_handle_hook= NULL;
    return 0;
}

module_init(tr471_ctrl_itf_init);
module_exit(tr471_ctrl_itf_deinit);


