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
	{ 0x6027f55b, "ip_tunnel_get_link_net" },
	{ 0x68dc74b4, "ip_tunnel_dellink" },
	{ 0xc5ec3e50, "ip_tunnel_get_iflink" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0xe309304c, "ip_tunnel_change_mtu" },
	{ 0x7a0e172c, "ip_tunnel_uninit" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0xb803929f, "xfrm4_protocol_deregister" },
	{ 0x27c733b8, "xfrm4_tunnel_deregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xa6822a08, "xfrm4_tunnel_register" },
	{ 0x9e32247, "xfrm4_protocol_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x95e63e22, "ip_tunnel_rcv" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0xb68bab54, "xfrm_input" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x17193a3a, "__icmp_send" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4a2b1256, "skb_scrub_packet" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc34540f0, "ip_route_output_key_hash" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb0704523, "dst_release" },
	{ 0x7d7dbcc3, "xfrm_lookup" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0x3b13bffb, "__xfrm_decode_session" },
	{ 0x32bab770, "ip_tunnel_init_net" },
	{ 0x51a63c94, "ip_tunnel_delete_nets" },
	{ 0x11b6a754, "ipv4_update_pmtu" },
	{ 0x556d02be, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xaf5f9ff4, "ipv4_redirect" },
	{ 0xc65b49bb, "xfrm_state_lookup" },
	{ 0x9c9e3fa0, "ip_tunnel_lookup" },
	{ 0x59b757d9, "ip_tunnel_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xae108feb, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf6661793, "ip_tunnel_setup" },
	{ 0x32bb3048, "ip_tunnel_newlink" },
	{ 0xf67a501f, "ip_tunnel_changelink" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "E0011F03B3DE39875F93978");
