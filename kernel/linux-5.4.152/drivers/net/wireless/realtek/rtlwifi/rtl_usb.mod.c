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
	{ 0xa3106f33, "ieee80211_rx_napi" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa14993d5, "rtl_deinit_deferred_work" },
	{ 0x2a53bcef, "rtl_deinit_core" },
	{ 0x80c2404b, "usb_get_from_anchor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf4996ae5, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x441beb7a, "rtl_action_proc" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xd6eaa441, "rtl_init_rx_config" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0xf35faea9, "rtl_ops" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x8ae578ca, "rtl_beacon_statistic" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "D4E0FACB56D933F77934FAB");
