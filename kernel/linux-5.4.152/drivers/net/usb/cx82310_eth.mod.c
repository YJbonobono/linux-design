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
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x581cf443, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5052ba6b, "usb_string" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x9b553753, "skb_pull" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BD2F6DAAA1EF783C5CC97F");
