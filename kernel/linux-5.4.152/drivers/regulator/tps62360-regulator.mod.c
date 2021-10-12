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
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps62360");
MODULE_ALIAS("i2c:tps62361");
MODULE_ALIAS("i2c:tps62362");
MODULE_ALIAS("i2c:tps62363");

MODULE_INFO(srcversion, "3CDBFEC520733D678E4C707");
