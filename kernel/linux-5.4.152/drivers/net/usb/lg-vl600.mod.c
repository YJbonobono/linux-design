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
	{ 0x4b7cd54b, "usbnet_cdc_status" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x60617788, "usbnet_cdc_bind" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3cc60cb5, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0xb832485a, "consume_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x9b553753, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x581cf443, "skb_push" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cdc_ether,usbnet");

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "65838F3ED38F36951C1D174");
