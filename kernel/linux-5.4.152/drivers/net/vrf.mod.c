#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x60100dfa, "inet_select_addr" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd3b8c111, "ip6_dst_lookup_flow" },
	{ 0x412eff53, "nf_hook_slow" },
	{ 0xf591753d, "nf_hooks_needed" },
	{ 0xc31f230d, "ipv6_stub" },
	{ 0xb832485a, "consume_skb" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0xb786a461, "arp_tbl" },
	{ 0x69acdf38, "memcpy" },
	{ 0x90605836, "__neigh_create" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44548a37, "nd_tbl" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa80de877, "dev_queue_xmit_nit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x581cf443, "skb_push" },
	{ 0x8edb56df, "ip6_dst_alloc" },
	{ 0x5bb7c1d7, "fib6_new_table" },
	{ 0x642a25bb, "rt_dst_alloc" },
	{ 0xc98cc930, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x4bb3bc45, "netdev_master_upper_dev_link" },
	{ 0x35eaa2ea, "netdev_master_upper_dev_get" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xce1951b0, "netdev_lower_get_next" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x7f697ce0, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb0704523, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2f78040d, "ip6_pol_route" },
	{ 0xe4dbd01c, "fib_nl_delrule" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xfafed02d, "fib_nl_newrule" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E50365000B7584B6D19238D");
