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
	{ 0xbfbd6b66, "adxl372_readable_noinc_reg" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x716ad259, "adxl372_probe" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adxl372");

MODULE_ALIAS("of:N*T*Cadi,adxl372");
MODULE_ALIAS("of:N*T*Cadi,adxl372C*");
MODULE_ALIAS("spi:adxl372");

MODULE_INFO(srcversion, "DDAF8EEB3186A44C09A2305");
