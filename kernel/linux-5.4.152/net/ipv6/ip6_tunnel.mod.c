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
	{ 0xe9fc50c1, "xfrm6_tunnel_deregister" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x754d539c, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb0704523, "dst_release" },
	{ 0x378a48b7, "metadata_dst_alloc" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb5fa172e, "dst_cache_set_ip6" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x17193a3a, "__icmp_send" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x4a2b1256, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x57ecc6d0, "ip6_redirect" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x73d36341, "dst_cache_get" },
	{ 0x581cf443, "skb_push" },
	{ 0xc287d58e, "gro_cells_receive" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd926240, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x37531052, "ip_route_input_noref" },
	{ 0xec3196b3, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x1d8f8e31, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x34af6819, "gro_cells_init" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xccb160ce, "rt6_lookup" },
	{ 0xd1d77222, "ip6tun_encaps" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x6848f13, "ip6_local_out" },
	{ 0xb832485a, "consume_skb" },
	{ 0xe7d1af6d, "ip6_dst_hoplimit" },
	{ 0xabcc8326, "xfrm6_tunnel_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7d7dbcc3, "xfrm_lookup" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xf90eef53, "ipv6_push_frag_opts" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "72975F0B31CD1FE9C134FB1");
