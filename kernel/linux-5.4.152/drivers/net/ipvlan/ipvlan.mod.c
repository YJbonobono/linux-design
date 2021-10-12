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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x42f914b7, "dev_forward_skb" },
	{ 0x7f697ce0, "dev_change_flags" },
	{ 0x1c1468b3, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xade7390c, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x90e81c4a, "dev_set_allmulti" },
	{ 0xca695152, "vlan_vid_del" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xe2d6fc3b, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4a2b1256, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x6833822f, "netif_rx" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xad3b2879, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xff94df87, "nf_unregister_net_hooks" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0xea29a0bd, "netif_stacked_transfer_operstate" },
	{ 0x9b553753, "skb_pull" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x37531052, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0xa29b7d3f, "nf_register_net_hooks" },
	{ 0xa5c2eea9, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9dc5663c, "eth_header_parse" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xa4068433, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x4efaedf0, "dev_uc_unsync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0xd23d0972, "eth_header_cache" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6131b104, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6848f13, "ip6_local_out" },
	{ 0xb832485a, "consume_skb" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x6d384c63, "netdev_is_rx_handler_busy" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd596d6d4, "dev_mc_sync" },
	{ 0x21f74183, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7f26f600, "ip6_route_input_lookup" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "212B3D0C11545A5CB3F5A03");
