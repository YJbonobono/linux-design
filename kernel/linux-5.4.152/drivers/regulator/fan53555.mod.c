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
	{ 0x20b00ba6, "regulator_set_voltage_time_sel" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:fan53526");
MODULE_ALIAS("i2c:fan53555");
MODULE_ALIAS("i2c:syr827");
MODULE_ALIAS("i2c:syr828");
MODULE_ALIAS("of:N*T*Cfcs,fan53526");
MODULE_ALIAS("of:N*T*Cfcs,fan53526C*");
MODULE_ALIAS("of:N*T*Cfcs,fan53555");
MODULE_ALIAS("of:N*T*Cfcs,fan53555C*");
MODULE_ALIAS("of:N*T*Csilergy,syr827");
MODULE_ALIAS("of:N*T*Csilergy,syr827C*");
MODULE_ALIAS("of:N*T*Csilergy,syr828");
MODULE_ALIAS("of:N*T*Csilergy,syr828C*");

MODULE_INFO(srcversion, "CB02964B00E678C939C3911");
