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
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x67d5f30, "iio_read_channel_average_raw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x3b947043, "iio_channel_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7cca1b34, "iio_channel_release" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "31F2698E892FDCB6AEC30FF");
