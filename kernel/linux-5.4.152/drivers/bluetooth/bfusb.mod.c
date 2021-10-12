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
	{ 0x581cf443, "skb_push" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9601035f, "request_firmware" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CF624B3F05A1D418436FDB");
