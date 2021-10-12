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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17726e51, "wiphy_free" },
	{ 0x4288e22b, "cfg80211_connect_done" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x706bd795, "regulatory_set_wiphy_regd" },
	{ 0x9fdbd66, "cfg80211_radar_event" },
	{ 0x9e1fd719, "cfg80211_shutdown_all_interfaces" },
	{ 0xc4464103, "cfg80211_inform_bss_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3afe5f, "cfg80211_rx_mgmt" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0x7b8e87cc, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0xd063626f, "cfg80211_del_sta_sinfo" },
	{ 0xf6f18d62, "ieee80211_get_channel" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcc101780, "wiphy_apply_custom_regulatory" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbaaabf1a, "cfg80211_get_drvinfo" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xfe75cdbf, "cfg80211_check_combinations" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x716ca28a, "cfg80211_ch_switch_notify" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xd98972de, "cfg80211_disconnected" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xe8dde4f1, "cfg80211_new_sta" },
	{ 0x6439af62, "cfg80211_chandef_valid" },
	{ 0xcf647aea, "cfg80211_external_auth_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a63c4a, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x9b862add, "cfg80211_cac_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb832485a, "consume_skb" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "D5C9F5156134915B73CEE2B");
