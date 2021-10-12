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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xaf53d7cf, "wm8350_set_bits" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa5868a47, "wm8350_reg_lock" },
	{ 0xc35e0472, "wm8350_reg_write" },
	{ 0xf20b396d, "wm8350_reg_unlock" },
	{ 0xe39e5238, "wm8350_read_auxadc" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb535c067, "wm8350_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E6D04D822FD426D3F420613");
