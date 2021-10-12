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
	{ 0x40a09deb, "skb_trim" },
	{ 0x9b553753, "skb_pull" },
	{ 0xf5d680ae, "usbnet_write_cmd_async" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xfb3ec474, "usbnet_write_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x581cf443, "skb_push" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E7AAEE8F61A6962EDB9E7BA");
