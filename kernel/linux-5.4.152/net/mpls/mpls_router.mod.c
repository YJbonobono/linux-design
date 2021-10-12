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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xb5a5bf76, "dev_get_flags" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb0704523, "dst_release" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1049e87a, "rtnl_notify" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x36d51b6c, "ip_tunnel_encap_del_ops" },
	{ 0xeb09db31, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x5256c32a, "__skb_warn_lro_forwarding" },
	{ 0xcd279169, "nla_find" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x581cf443, "skb_push" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0xf3873d3d, "rtnl_af_unregister" },
	{ 0x41804f72, "nla_reserve_nohdr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0xc31f230d, "ipv6_stub" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x51c5c5ac, "ip_valid_fib_dump_req" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x47485d20, "rtnl_unicast" },
	{ 0xf8bab3a2, "rtnl_set_sk_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x5ef8daaa, "rtnl_af_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa8f76662, "neigh_xmit" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0xc8ee260a, "skb_gso_validate_network_len" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbb97305c, "ip_tunnel_encap_add_ops" },
	{ 0xced7af1d, "netlink_strict_get_check" },
};

MODULE_INFO(depends, "ip_tunnel");


MODULE_INFO(srcversion, "BE272100E9C9509C62694B7");
