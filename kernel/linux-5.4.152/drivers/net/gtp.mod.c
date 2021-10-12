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
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x311432c7, "udp_tunnel_xmit_skb" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xb832485a, "consume_skb" },
	{ 0x1705ef45, "icmp_ndo_send" },
	{ 0xb0704523, "dst_release" },
	{ 0x581cf443, "skb_push" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x6833822f, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd3fdc74, "setup_udp_tunnel_sock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa164179, "fput" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x596c50d1, "__put_net" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x8dc7b82c, "get_net_ns_by_fd" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xf11f616d, "release_sock" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udp_tunnel");


MODULE_INFO(srcversion, "A9DB006861B03D315B91740");
