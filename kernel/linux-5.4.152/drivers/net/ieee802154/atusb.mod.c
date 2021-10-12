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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa81af661, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x4817b006, "ieee802154_alloc_hw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0x9dd70d96, "ieee802154_xmit_complete" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x5ce926f6, "ieee802154_wake_queue" },
	{ 0x7e21bbe, "ieee802154_rx_irqsafe" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeac25319, "ieee802154_free_hw" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x3d5d6c8, "ieee802154_unregister_hw" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x80c2404b, "usb_get_from_anchor" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "685927A201D20DF9B7FB05D");
