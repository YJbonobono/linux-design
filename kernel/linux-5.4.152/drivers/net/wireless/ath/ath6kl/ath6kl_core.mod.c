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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc4464103, "cfg80211_inform_bss_data" },
	{ 0x40b1d758, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcaac5422, "cfg80211_chandef_create" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3afe5f, "cfg80211_rx_mgmt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9db2be18, "cfg80211_check_station_change" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xde2b23f1, "cfg80211_mgmt_tx_status" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xd48734ec, "cfg80211_pmksa_candidate_notify" },
	{ 0xfb578fc5, "memset" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x6006847, "current_task" },
	{ 0x7b8e87cc, "cfg80211_get_bss" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd063626f, "cfg80211_del_sta_sinfo" },
	{ 0xf6f18d62, "ieee80211_get_channel" },
	{ 0x5792f848, "strlcpy" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc7ee435f, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x7dd510e4, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbaaabf1a, "cfg80211_get_drvinfo" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x716ca28a, "cfg80211_ch_switch_notify" },
	{ 0xc62f2f96, "cfg80211_roamed" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xe0194214, "cfg80211_ready_on_channel" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd98972de, "cfg80211_disconnected" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xad98dfa, "netdev_set_default_ethtool_ops" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xe8dde4f1, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a63c4a, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x605840c3, "cfg80211_remain_on_channel_expired" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0x30e007fb, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3efa5bed, "cfg80211_cqm_txe_notify" },
	{ 0xd052b5e7, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "06870E093B845425E8D6243");
