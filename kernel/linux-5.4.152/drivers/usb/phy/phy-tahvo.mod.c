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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x1cb8f314, "usb_add_phy" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe6dfb004, "usb_remove_phy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa074c8b6, "retu_write" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0x5aab6723, "usb_gadget_vbus_disconnect" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xff47930e, "usb_phy_set_event" },
	{ 0x9c50cfce, "usb_gadget_vbus_connect" },
	{ 0x56d1a8c5, "retu_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "retu-mfd,udc-core");


MODULE_INFO(srcversion, "B67FA513BDF2E01F301B1A7");
