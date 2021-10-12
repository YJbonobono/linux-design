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
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcbdddc27, "regulator_set_active_discharge_regmap" },
	{ 0x12a38747, "usleep_range" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x658e8c93, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps65132");

MODULE_INFO(srcversion, "745552D831257AF69B88F55");
