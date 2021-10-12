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
	{ 0x7fccc244, "ip6_tnl_get_link_net" },
	{ 0xa2e95eb7, "ip6_tnl_get_iflink" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0xb1faca26, "inet6_del_protocol" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x51f66efe, "inet6_add_protocol" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x17193a3a, "__icmp_send" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0x5ff143f3, "ip6_tnl_xmit_ctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xee82c453, "skb_checksum" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xb25ac27d, "ip6_tnl_xmit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xceef35d4, "ip6_tnl_rcv" },
	{ 0x378a48b7, "metadata_dst_alloc" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1d8f8e31, "ip6_update_pmtu" },
	{ 0x57ecc6d0, "ip6_redirect" },
	{ 0x30f56db1, "gre_parse_header" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0x618a23fa, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0x581cf443, "skb_push" },
	{ 0x8752c142, "ip6_tnl_encap_setup" },
	{ 0xcffab6e6, "ip6_tnl_change_mtu" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x78381292, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x30c76023, "free_netdev" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xb0704523, "dst_release" },
	{ 0xccb160ce, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x81a920c8, "ip6_tnl_get_cap" },
	{ 0x34af6819, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,gre");


MODULE_INFO(srcversion, "6CEE490078B344B8E06524E");
