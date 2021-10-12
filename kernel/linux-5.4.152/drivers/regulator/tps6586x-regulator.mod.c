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
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0x9fcad55d, "regulator_map_voltage_ascend" },
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x57d0ab0, "tps6586x_write" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xb3905e4f, "tps6586x_clr_bits" },
	{ 0x5e79c2ec, "tps6586x_set_bits" },
	{ 0x70299c53, "tps6586x_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8382bd5b, "tps6586x_get_version" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "907F5DCE5398BF370406046");
