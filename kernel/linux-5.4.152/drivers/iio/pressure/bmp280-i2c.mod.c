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
	{ 0xbd72167a, "bmp280_dev_pm_ops" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5eebbf7e, "bmp280_common_probe" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xbbd5f790, "bmp280_regmap_config" },
	{ 0x51532af2, "bmp180_regmap_config" },
	{ 0x58f6d5c8, "bmp280_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmp280");

MODULE_ALIAS("i2c:bmp280");
MODULE_ALIAS("i2c:bmp180");
MODULE_ALIAS("i2c:bmp085");
MODULE_ALIAS("i2c:bme280");
MODULE_ALIAS("acpi*:BMP0280:*");
MODULE_ALIAS("acpi*:BMP0180:*");
MODULE_ALIAS("acpi*:BMP0085:*");
MODULE_ALIAS("acpi*:BME0280:*");

MODULE_INFO(srcversion, "D09C6964593C901890BFA27");
