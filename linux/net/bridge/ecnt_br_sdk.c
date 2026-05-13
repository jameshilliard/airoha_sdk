/*****************************************************************************
 * Airoha (HK) Limited  Airoha. ALL RIGHTS RESERVED.
 * 
 * BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY 
 * ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS 
 * DOCUMENTATIONS (锟斤拷Airoha SOFTWARE锟斤拷) RECEIVED FROM Airoha 
 * AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 锟斤拷AS IS锟斤拷 
 * BASIS ONLY. Airoha EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, 
 * WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, 
 * OR NON-INFRINGEMENT. NOR DOES Airoha PROVIDE ANY WARRANTY 
 * WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH 
 * MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE Airoha SOFTWARE. 
 * RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL 
 * WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES 
 * THAT IT IS RECEIVER锟斤拷S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD 
 * PARTY ALL PROPER LICENSES CONTAINED IN Airoha SOFTWARE.
 * 
 * Airoha SHALL NOT BE RESPONSIBLE FOR ANY Airoha SOFTWARE RELEASES 
 * MADE TO RECEIVER锟斤拷S SPECIFICATION OR CONFORMING TO A PARTICULAR 
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND 
 * Airoha'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE Airoha 
 * SOFTWARE RELEASED HEREUNDER SHALL BE, AT Airoha'S SOLE OPTION, TO 
 * REVISE OR REPLACE THE Airoha SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE 
 * LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO Airoha FOR SUCH 
 * Airoha SOFTWARE.
 *
 *****************************************************************************/

/****************************************************************************
**function name
	 get_fdb_by_skb
**description:
	get net bridge fdb entry by skb information
**return 
	dst: if find match entry
	NULL: if not find match entry
**parameter:
	skb: the packet information
****************************************************************************/
struct net_bridge_fdb_entry *get_fdb_by_skb(struct sk_buff *skb)
{
	unsigned char dest[6] = {0};
	struct net_bridge_fdb_entry *dst = NULL;
	struct net_bridge_port *p = br_port_get_rcu(skb->dev);
	struct net_bridge *br;

	if (!p || p->state == BR_STATE_DISABLED)
	{
		return NULL;
	}

	memcpy(dest, skb->data, sizeof(dest));
	if(is_broadcast_ether_addr(dest))
	{
		if(get_client_mac_from_dhcp_packet(skb, dest) == -1)
		{
			return dst;
		}

	}

	br = p->br;
	dst = __br_fdb_get(br, dest,0);
	return dst;
}
EXPORT_SYMBOL(get_fdb_by_skb);


#if defined(TCSUPPORT_CT)
/* add/delete pair MAC to/from bridge table. 
for pppoe-relay upstream go through hwnat. */
struct relay_mac_info
{
	uint8_t eth_lan[6];
	uint8_t eth_wan[6];
};
#define	MAX_RELAY_MAC_CNT	16
struct relay_mac_info relay_macs[MAX_RELAY_MAC_CNT];

int arht_relay_macs_is_match(unsigned char *lan_mac, unsigned char *wan_mac)
{
	int idx = 0;
	unsigned char *s_lan = NULL, *s_wan = NULL;

	if ( !lan_mac || !wan_mac )
	{
		return 0;
	}

	/* check exist */
	for ( idx = 0; idx < MAX_RELAY_MAC_CNT; idx ++ )
	{
		s_lan = relay_macs[idx].eth_lan;
		s_wan = relay_macs[idx].eth_wan;

		if ( ether_addr_equal(s_lan, lan_mac) && ether_addr_equal(s_wan, wan_mac) )
		{
			return 1;
		}
	}

	return 0;
}

static int arht_add_new_relay_macs(unsigned char *lan_mac, unsigned char *wan_mac)
{
	unsigned char u_Z_MAC[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int idx = 0, free_entry = -1;
	unsigned char *s_lan = NULL, *s_wan = NULL;

	if ( !lan_mac || !wan_mac )
	{
		return -1;
	}

	/* check exist */
	for ( idx = 0; idx < MAX_RELAY_MAC_CNT; idx ++ )
	{
		s_lan = relay_macs[idx].eth_lan;
		s_wan = relay_macs[idx].eth_wan;

		if ( ether_addr_equal(s_lan, lan_mac) && ether_addr_equal(s_wan, wan_mac) )
		{
			return 0;
		}
		else if ( ether_addr_equal(u_Z_MAC, s_lan) )
		{
			if ( -1 == free_entry )
			{
				free_entry = idx;
			}
		}
	}

	if ( -1 == free_entry )
	{
		/* FULL? always replace 1st MAC. */
		s_lan = relay_macs[0].eth_lan;
		s_wan = relay_macs[0].eth_wan;
		ether_addr_copy(s_lan, lan_mac);
		ether_addr_copy(s_wan, wan_mac);
	}
	else
	{
		s_lan = relay_macs[free_entry].eth_lan;
		s_wan = relay_macs[free_entry].eth_wan;
		ether_addr_copy(s_lan, lan_mac);
		ether_addr_copy(s_wan, wan_mac);
	}

	return 0;
}

static int arht_del_relay_macs(unsigned char *lan_mac, unsigned char *wan_mac)
{
	unsigned char u_Z_MAC[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int idx = 0;
	unsigned char *s_lan = NULL, *s_wan = NULL;

	if ( !lan_mac || !wan_mac )
	{
		return -1;
	}

	/* check exist */
	for ( idx = 0; idx < MAX_RELAY_MAC_CNT; idx ++ )
	{
		s_lan = relay_macs[idx].eth_lan;
		s_wan = relay_macs[idx].eth_wan;

		if ( ether_addr_equal(s_lan, lan_mac) && ether_addr_equal(s_wan, wan_mac) )
		{
			ether_addr_copy(s_lan, u_Z_MAC);
			ether_addr_copy(s_wan, u_Z_MAC);

			return 0;
		}
	}

	return 0;
}

static int arht_br_static_mac_read_proc(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
	int pos = 0, idx = 0;
	unsigned char *s_lan = NULL, *s_wan = NULL;

	pos += sprintf(buf + pos, "%-12s <--> %12s\n"
					, "     LAN", "WAN     ");

	for ( idx = 0; idx < MAX_RELAY_MAC_CNT; idx ++ )
	{
		s_lan = relay_macs[idx].eth_lan;
		s_wan = relay_macs[idx].eth_wan;
		pos += sprintf(buf + pos, "%02X%02X%02X%02X%02X%02X <--> %02X%02X%02X%02X%02X%02X\n"
						, s_lan[0], s_lan[1], s_lan[2], s_lan[3], s_lan[4], s_lan[5]
						, s_wan[0], s_wan[1], s_wan[2], s_wan[3], s_wan[4], s_wan[5]);
	}

	if ( pos <= off + count )
		*eof = 1;
	*start = buf + off;
	pos -= off;
	if ( pos > count )
		pos = count;
	if ( pos < 0 )
		pos = 0;
	return pos;
}

static int arht_br_static_mac_write_proc(struct file *file, const char *buffer, unsigned long count, void *data)
{
	char cmd_buf[256] = {0}, action[12] = {0}, mac_buf[64] = {0};
	int ret = 0, i_action  = 0;
	unsigned char tmp[12];
	memset(cmd_buf, 0, sizeof(cmd_buf));
	memset(action, 0, sizeof(action));
	memset(mac_buf, 0, sizeof(mac_buf));
	memset(tmp, 0, sizeof(tmp));
	if ( count > sizeof(cmd_buf) - 1 )
		return -EINVAL;
	if ( copy_from_user(cmd_buf, buffer, count))
		return -EFAULT;
	ret = sscanf(cmd_buf, "%10s %60s", action, mac_buf);
	if ( 2 == ret )
	{
		ret = sscanf(mac_buf, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx:%hhx:%hhx:%hhx:%hhx:%hhx:%hhx",
					&tmp[0], &tmp[1], &tmp[2], &tmp[3], &tmp[4], &tmp[5],
					&tmp[6], &tmp[7], &tmp[8], &tmp[9], &tmp[10], &tmp[11]);
	}

	if ( 'A' == action[0] || 'a' == action[0] )
	{
		i_action = 1;
	}
	else if ( 'D' == action[0] || 'd' == action[0] )
	{
		i_action = 2;
	}

	if ( i_action )
	{
		if ( 1 == i_action ) /* add */
		{
			arht_add_new_relay_macs(&tmp[0], &tmp[6]);
		}
		else if ( 2 == i_action ) /* delete */
		{
			arht_del_relay_macs(&tmp[0], &tmp[6]);
		}

	}
	return count;
}
#endif

void arht_br_sdk_proc_init_hook(void)
{
	struct proc_dir_entry *proc = NULL;

#if defined(TCSUPPORT_CT)
	memset(&relay_macs, 0, sizeof(relay_macs));
	proc = create_proc_entry("tc3162/br_static_mac", 0, NULL);
	if( !proc )
	{
		printk("ERROR!Create proc entry br_static_mac fail!\n");
		return;
	}
	proc->read_proc = arht_br_static_mac_read_proc;
	proc->write_proc = arht_br_static_mac_write_proc;
#endif

	return;
}


