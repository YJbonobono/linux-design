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
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfc2497e3, "regulator_is_enabled" },
	{ 0xc8946c77, "regulator_count_voltages" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc13b99b, "devm_regulator_get_exclusive" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9f9e6624, "regulator_set_voltage" },
	{ 0xf4c39d96, "regulator_list_voltage" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18BAD9A75D8B3563FC92F3E");
