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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x17726e51, "wiphy_free" },
	{ 0x4288e22b, "cfg80211_connect_done" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3afe5f, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x26280d16, "cfg80211_stop_iface" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xde2b23f1, "cfg80211_mgmt_tx_status" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7b8e87cc, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0xf6f18d62, "ieee80211_get_channel" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9b553753, "skb_pull" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe0194214, "cfg80211_ready_on_channel" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xd98972de, "cfg80211_disconnected" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x9601035f, "request_firmware" },
	{ 0x605840c3, "cfg80211_remain_on_channel_expired" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb832485a, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xfe713ff5, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "18B8AA463EBF66FA8F8B106");
