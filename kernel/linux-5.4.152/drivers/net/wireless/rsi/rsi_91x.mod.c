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
	{ 0x960f319c, "ieee80211_rx_irqsafe" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4c08dac2, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15107e07, "ieee80211_scan_completed" },
	{ 0xabe27a37, "wiphy_rfkill_start_polling" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0x98907646, "ieee80211_ready_on_channel" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfc40da7d, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf8fbbe75, "ieee80211_free_txskb" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf08dafbd, "ieee80211_remain_on_channel_expired" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x45655ad3, "wiphy_rfkill_stop_polling" },
	{ 0xe3a53f4c, "sort" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd59a07c2, "wiphy_to_ieee80211_hw" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4a8184b, "ieee80211_wake_queue" },
	{ 0x8b1797e, "ieee80211_generic_frame_duration" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd1735b40, "ieee80211_start_tx_ba_session" },
	{ 0x9601035f, "request_firmware" },
	{ 0xcc522b1b, "ieee80211_probereq_get" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xd6c50eb7, "rsi_bt_ops" },
	{ 0xe1edb9f, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,cfg80211,btrsi");


MODULE_INFO(srcversion, "1C69A5F6D7ADD223075E6FC");
