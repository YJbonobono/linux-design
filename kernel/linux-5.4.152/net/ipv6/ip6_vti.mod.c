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
	{ 0x7fccc244, "ip6_tnl_get_link_net" },
	{ 0xa2e95eb7, "ip6_tnl_get_iflink" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x990e0ff9, "xfrm6_protocol_deregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xee93ff7, "xfrm6_protocol_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x89c8b798, "xfrm6_rcv_tnl" },
	{ 0xdd92951d, "ip6_tnl_rcv_ctl" },
	{ 0x57ecc6d0, "ip6_redirect" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d8f8e31, "ip6_update_pmtu" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4a2b1256, "skb_scrub_packet" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x17193a3a, "__icmp_send" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5ff143f3, "ip6_tnl_xmit_ctl" },
	{ 0x7d7dbcc3, "xfrm_lookup" },
	{ 0xc34540f0, "ip_route_output_key_hash" },
	{ 0x3b13bffb, "__xfrm_decode_session" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x78381292, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb0704523, "dst_release" },
	{ 0xccb160ce, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x81a920c8, "ip6_tnl_get_cap" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel");


MODULE_INFO(srcversion, "329B293DFE665EC11A3E789");
