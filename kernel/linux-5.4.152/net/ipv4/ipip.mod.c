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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x6027f55b, "ip_tunnel_get_link_net" },
	{ 0x68dc74b4, "ip_tunnel_dellink" },
	{ 0xc5ec3e50, "ip_tunnel_get_iflink" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0xe309304c, "ip_tunnel_change_mtu" },
	{ 0x7a0e172c, "ip_tunnel_uninit" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x27c733b8, "xfrm4_tunnel_deregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xa6822a08, "xfrm4_tunnel_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x95e63e22, "ip_tunnel_rcv" },
	{ 0x378a48b7, "metadata_dst_alloc" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0x32bab770, "ip_tunnel_init_net" },
	{ 0x51a63c94, "ip_tunnel_delete_nets" },
	{ 0xaf5f9ff4, "ipv4_redirect" },
	{ 0x11b6a754, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9c9e3fa0, "ip_tunnel_lookup" },
	{ 0x59b757d9, "ip_tunnel_init" },
	{ 0x92ceb1d3, "ip_tunnel_xmit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd1469be1, "ip_md_tunnel_xmit" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xae108feb, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf6661793, "ip_tunnel_setup" },
	{ 0x32bb3048, "ip_tunnel_newlink" },
	{ 0xf67a501f, "ip_tunnel_changelink" },
	{ 0x7b2452f8, "ip_tunnel_encap_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "55E70B4184606B39B33BD93");
