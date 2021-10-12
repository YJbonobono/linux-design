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
	{ 0x5d14cd7, "regulator_map_voltage_linear_range" },
	{ 0x36a86a0d, "regulator_list_voltage_linear_range" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0xc7384e2b, "regulator_get_bypass_regmap" },
	{ 0xe31c087, "regulator_set_bypass_regmap" },
	{ 0x20b00ba6, "regulator_set_voltage_time_sel" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x109862e4, "palmas_ext_control_req_config" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-pmic");
MODULE_ALIAS("of:N*T*Cti,palmas-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmic");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmic");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmicC*");

MODULE_INFO(srcversion, "30BD7CA8532CD9C1BA336B4");
