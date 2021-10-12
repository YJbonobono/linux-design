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
	{ 0xc5ec3e50, "ip_tunnel_get_iflink" },
	{ 0xd362bb6, "ip_tunnel_get_stats64" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xa6822a08, "xfrm4_tunnel_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x27c733b8, "xfrm4_tunnel_deregister" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0xdad6c464, "dst_cache_set_ip4" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5f567c9b, "iptunnel_xmit" },
	{ 0xa2a883b7, "iptun_encaps" },
	{ 0xb832485a, "consume_skb" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0xc0643d68, "dst_cache_get_ip4" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0x1b1741a9, "ipv6_chk_prefix" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x6833822f, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaacc3aac, "ipv6_chk_custom_prefix" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xb0704523, "dst_release" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x95e63e22, "ip_tunnel_rcv" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x2b2e880, "__iptunnel_pull_header" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x92ceb1d3, "ip_tunnel_xmit" },
	{ 0x32926df, "iptunnel_handle_offloads" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x78381292, "init_net" },
	{ 0x7b2452f8, "ip_tunnel_encap_setup" },
	{ 0x30c76023, "free_netdev" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaf5f9ff4, "ipv4_redirect" },
	{ 0xda87b901, "ip6_err_gen_icmpv6_unreach" },
	{ 0x11b6a754, "ipv4_update_pmtu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "8421261265AB8DCE89397D0");
