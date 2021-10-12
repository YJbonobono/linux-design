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
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x1a9f6087, "platform_unregister_drivers" },
	{ 0x3c1c3d30, "__platform_register_drivers" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf607927f, "lp8788_update_bits" },
	{ 0x291ef64a, "gpiod_get_index_optional" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92ffec8, "lp8788_read_byte" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8818D9921D2350F0C800DDE");
