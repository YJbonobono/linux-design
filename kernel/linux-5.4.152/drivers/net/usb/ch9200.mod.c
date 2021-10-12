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
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7e9b03af, "usbnet_defer_kevent" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xaa9cb0bb, "mii_ethtool_gset" },
	{ 0xf6978b8b, "mii_check_media" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0488E44AF73C8D569D5D565");
