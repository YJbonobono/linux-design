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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x8b1161dc, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdd945e7a, "rt2x00lib_dmastart" },
	{ 0xb6454633, "rt2x00queue_flush_queue" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xd418ab8f, "rt2x00queue_for_each_entry" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe624829e, "rt2x00queue_start_queue" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbe43d05d, "rt2x00lib_remove_dev" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x99c91bb9, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0x55dcae53, "rt2x00lib_rxdone" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0xcddd8df5, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x21a5eb6d, "rt2x00lib_dmadone" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xd8f4c316, "rt2x00lib_probe_dev" },
	{ 0xa1470a19, "rt2x00queue_stop_queue" },
	{ 0xe76f58d4, "rt2x00lib_suspend" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "8EEEEC015EE0B18A21ED01F");
