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
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");


MODULE_INFO(srcversion, "26F3243B941D19655257690");
