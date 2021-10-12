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
	{ 0x9e10e0e, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0x1c1468b3, "dev_mc_unsync" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7a189d11, "dev_disable_lro" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1c42d1e5, "vlan_uses_dev" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x90e81c4a, "dev_set_allmulti" },
	{ 0xca695152, "vlan_vid_del" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d6fc3b, "vlan_vid_add" },
	{ 0x27876dec, "__netpoll_setup" },
	{ 0x2c8debd4, "vlan_vids_del_by_dev" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x1c6f9dc2, "vlan_vids_add_by_dev" },
	{ 0x4bb3bc45, "netdev_master_upper_dev_link" },
	{ 0x2d658281, "netdev_lower_state_changed" },
	{ 0xa821529c, "netdev_change_features" },
	{ 0x64cd0b1e, "netpoll_send_skb_on_dev" },
	{ 0x5d27c445, "netdev_has_upper_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5d258514, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0xad3b2879, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5e121547, "dev_close" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xc2648797, "dev_mc_flush" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xf7419e8e, "dev_open" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6f9b9aa6, "dev_uc_flush" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7d731517, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x4efaedf0, "dev_uc_unsync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8cb12717, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xc49f5a16, "dev_uc_sync_multiple" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x9bd88516, "__netpoll_free" },
	{ 0xb832485a, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x1425ab24, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0FB371AE979AB1EDE69796C");
