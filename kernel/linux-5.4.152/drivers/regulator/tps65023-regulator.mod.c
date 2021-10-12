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
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0x9fcad55d, "regulator_map_voltage_ascend" },
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps65023");
MODULE_ALIAS("i2c:tps65021");
MODULE_ALIAS("i2c:tps65020");
MODULE_ALIAS("of:N*T*Cti,tps65020");
MODULE_ALIAS("of:N*T*Cti,tps65020C*");
MODULE_ALIAS("of:N*T*Cti,tps65021");
MODULE_ALIAS("of:N*T*Cti,tps65021C*");
MODULE_ALIAS("of:N*T*Cti,tps65023");
MODULE_ALIAS("of:N*T*Cti,tps65023C*");

MODULE_INFO(srcversion, "76D0BF41C62B7A8CAA3D3A1");
