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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0x4dade965, "simple_attr_write" },
	{ 0x9539023c, "simple_attr_read" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x30c76023, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x52977a3a, "__class_create" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x8a63c4a, "regulatory_hint" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xcc101780, "wiphy_apply_custom_regulatory" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe84d56d1, "device_bind_driver" },
	{ 0x9a9cd14e, "device_create" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x804a51b8, "ieee80211_csa_finish" },
	{ 0xdb77c2d4, "ieee80211_csa_is_complete" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0xcc522b1b, "ieee80211_probereq_get" },
	{ 0x2a4e02da, "ieee80211_get_tx_rates" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xd0f82e5e, "__skb_ext_put" },
	{ 0xb0704523, "dst_release" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x960f319c, "ieee80211_rx_irqsafe" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x51ce92, "device_unregister" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0x78381292, "init_net" },
	{ 0xcafc8f93, "genl_notify" },
	{ 0xf08dafbd, "ieee80211_remain_on_channel_expired" },
	{ 0x581cf443, "skb_push" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xf8fbbe75, "ieee80211_free_txskb" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0x754d539c, "strlen" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15107e07, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x98907646, "ieee80211_ready_on_channel" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xd183d0a9, "cfg80211_vendor_cmd_reply" },
	{ 0x7fd59392, "__cfg80211_alloc_reply_skb" },
	{ 0x676f7836, "__cfg80211_send_event_skb" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x82fa98c7, "__cfg80211_alloc_event_skb" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x670534e6, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x70a771be, "ieee80211_radar_detected" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb832485a, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "DF776BB6B52741426B7706E");
