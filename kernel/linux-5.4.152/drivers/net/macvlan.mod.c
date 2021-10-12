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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x42f914b7, "dev_forward_skb" },
	{ 0x1c1468b3, "dev_mc_unsync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb556c8fc, "dev_uc_add" },
	{ 0xcf106e7f, "__dev_forward_skb" },
	{ 0xce661d31, "dev_mc_add_excl" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xe5a1dd33, "dev_uc_add_excl" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x90e81c4a, "dev_set_allmulti" },
	{ 0xca695152, "vlan_vid_del" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0xe2d6fc3b, "vlan_vid_add" },
	{ 0x27876dec, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x6833822f, "netif_rx" },
	{ 0x64cd0b1e, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x5d258514, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x23008cee, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xad3b2879, "__ethtool_get_link_ksettings" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x90c5fce9, "dev_mc_del" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0x79c231b3, "ndo_dflt_fdb_dump" },
	{ 0xea29a0bd, "netif_stacked_transfer_operstate" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x78381292, "init_net" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa5c2eea9, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0x9dc5663c, "eth_header_parse" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7d731517, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4068433, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x4efaedf0, "dev_uc_unsync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x8cb12717, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc6baa6d, "dev_change_proto_down_generic" },
	{ 0xd23d0972, "eth_header_cache" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x16a2895a, "dev_uc_del" },
	{ 0x6131b104, "dev_uc_sync" },
	{ 0x9bd88516, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0xcd84e6a1, "dev_queue_xmit_accel" },
	{ 0x6d384c63, "netdev_is_rx_handler_busy" },
	{ 0xd596d6d4, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x1425ab24, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D37EBBED69D1EBDA3940F8");
