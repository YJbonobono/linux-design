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
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x510f56d8, "gro_find_receive_by_type" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbf713d69, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x66628bf3, "ip_tunnel_metadata_cnt" },
	{ 0xb0704523, "dst_release" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x311432c7, "udp_tunnel_xmit_skb" },
	{ 0xb5fa172e, "dst_cache_set_ip6" },
	{ 0x6dd2ce44, "udp_tun_rx_dst" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc0643d68, "dst_cache_get_ip4" },
	{ 0x12a01365, "dst_cache_get_ip6" },
	{ 0x4a2b1256, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x67a22961, "udp_sock_create6" },
	{ 0xd3fdc74, "setup_udp_tunnel_sock" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x34649007, "udp_tunnel_sock_release" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xab025801, "udp_tunnel_push_rx_port" },
	{ 0x30c76023, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc287d58e, "gro_cells_receive" },
	{ 0xda187b96, "gro_find_complete_by_type" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xc31f230d, "ipv6_stub" },
	{ 0x1387ccaf, "__skb_get_hash" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x3959cd5b, "rtnl_configure_link" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xc79bf770, "udp_tunnel_notify_add_rx_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xa1ca13bd, "udp_tunnel_drop_rx_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x93645de7, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x34af6819, "gro_cells_init" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xccb160ce, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x7516656e, "udp_tunnel6_xmit_skb" },
	{ 0xdad6c464, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf651c990, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb832485a, "consume_skb" },
	{ 0xe7d1af6d, "ip6_dst_hoplimit" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "AC7E2217DC6F78BA3DBA44C");
