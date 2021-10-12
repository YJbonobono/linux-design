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
	{ 0x2d3385d3, "system_wq" },
	{ 0x960f319c, "ieee80211_rx_irqsafe" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5dfc4ec, "cfg80211_unlink_bss" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4b92b149, "ieee80211_resume_disconnect" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x30c2c078, "freq_reg_info" },
	{ 0xabe27a37, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7b8e87cc, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfd105716, "ieee80211_rate_control_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcc101780, "wiphy_apply_custom_regulatory" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x45655ad3, "wiphy_rfkill_stop_polling" },
	{ 0xd59a07c2, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6d0f4e5e, "ieee80211_get_hdrlen_from_skb" },
	{ 0x23681612, "ieee80211_rate_control_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd1735b40, "ieee80211_start_tx_ba_session" },
	{ 0x9601035f, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x3673df37, "ieee80211_connection_loss" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "D1B33136B4B0EFB728421DD");
