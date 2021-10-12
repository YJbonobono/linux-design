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
	{ 0xc7384e2b, "regulator_get_bypass_regmap" },
	{ 0xe31c087, "regulator_set_bypass_regmap" },
	{ 0x5d14cd7, "regulator_map_voltage_linear_range" },
	{ 0x36a86a0d, "regulator_list_voltage_linear_range" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x1a9f6087, "platform_unregister_drivers" },
	{ 0x3c1c3d30, "__platform_register_drivers" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xa80a6d9b, "gpiod_get_optional" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xfbb7a3a6, "rdev_get_regmap" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D9354DD7EB5580D396759DD");
