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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0xc5ec3e50, "ip_tunnel_get_iflink" },
	{ 0xb0704523, "dst_release" },
	{ 0x378a48b7, "metadata_dst_alloc" },
	{ 0x11b6a754, "ipv4_update_pmtu" },
	{ 0x9c9e3fa0, "ip_tunnel_lookup" },
	{ 0xb741cfd4, "__ip_tunnel_change_mtu" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x17193a3a, "__icmp_send" },
	{ 0x92ceb1d3, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1c666ac0, "inetdev_by_index" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0xf6661793, "ip_tunnel_setup" },
	{ 0x68dc74b4, "ip_tunnel_dellink" },
	{ 0xee82c453, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x51a63c94, "ip_tunnel_delete_nets" },
	{ 0xcefee04e, "gre_add_protocol" },
	{ 0x32bb3048, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x7a0e172c, "ip_tunnel_uninit" },
	{ 0x30c76023, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x48582366, "gre_del_protocol" },
	{ 0x581cf443, "skb_push" },
	{ 0x59b757d9, "ip_tunnel_init" },
	{ 0x6027f55b, "ip_tunnel_get_link_net" },
	{ 0x9b553753, "skb_pull" },
	{ 0x1387ccaf, "__skb_get_hash" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xae108feb, "ip_tunnel_ioctl" },
	{ 0xc2ee4381, "__ip_mc_dec_group" },
	{ 0xd1469be1, "ip_md_tunnel_xmit" },
	{ 0xf67a501f, "ip_tunnel_changelink" },
	{ 0x3959cd5b, "rtnl_configure_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xaf5f9ff4, "ipv4_redirect" },
	{ 0x43a011a0, "ip_mc_inc_group" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x32bab770, "ip_tunnel_init_net" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x93645de7, "rtnl_create_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xda87b901, "ip6_err_gen_icmpv6_unreach" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x7b2452f8, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe309304c, "ip_tunnel_change_mtu" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x30f56db1, "gre_parse_header" },
	{ 0x95e63e22, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre");


MODULE_INFO(srcversion, "5E62233EB33855A5BBF351A");
