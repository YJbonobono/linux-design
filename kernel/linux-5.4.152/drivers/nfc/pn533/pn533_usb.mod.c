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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa2486ae3, "pn533_recv_frame" },
	{ 0x285eb6dd, "pn533_finalize_setup" },
	{ 0x55682175, "pn533_unregister_device" },
	{ 0xdecfd339, "pn533_rx_frame_is_ack" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc2ceeac5, "pn533_register_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "pn533");

MODULE_ALIAS("usb:v04CCp2533d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p5591d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp02E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v072Fp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "524EB48D4D31F9A1C8B1F39");
