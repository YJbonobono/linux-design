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
	{ 0x275fd8ef, "xfrm6_rcv" },
	{ 0xb68bab54, "xfrm_input" },
	{ 0xfb6362a4, "xfrm4_rcv" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0xfeea1bce, "xfrm_if_register_cb" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xee93ff7, "xfrm6_protocol_register" },
	{ 0x9e32247, "xfrm4_protocol_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x11b6a754, "ipv4_update_pmtu" },
	{ 0xaf5f9ff4, "ipv4_redirect" },
	{ 0x57ecc6d0, "ip6_redirect" },
	{ 0x1d8f8e31, "ip6_update_pmtu" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc5850110, "printk" },
	{ 0x4b049dca, "icmpv6_ndo_send" },
	{ 0x1705ef45, "icmp_ndo_send" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc34540f0, "ip_route_output_key_hash" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x76589e98, "xfrm_lookup_with_ifid" },
	{ 0x3b13bffb, "__xfrm_decode_session" },
	{ 0xb0704523, "dst_release" },
	{ 0x8251e2f1, "__skb_ext_del" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x990e0ff9, "xfrm6_protocol_deregister" },
	{ 0xb803929f, "xfrm4_protocol_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x34af6819, "gro_cells_init" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9197F1CC9DFF9D24761A837");
