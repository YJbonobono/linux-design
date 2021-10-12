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
	{ 0x88de71dd, "madera_pm_ops" },
	{ 0xfd00c40a, "cs47l15_16bit_spi_regmap" },
	{ 0x2ae599f3, "cs47l92_16bit_spi_regmap" },
	{ 0x5e519f02, "cs47l90_16bit_spi_regmap" },
	{ 0x5bc29fe, "cs47l85_16bit_spi_regmap" },
	{ 0x37ceb286, "cs47l35_16bit_spi_regmap" },
	{ 0xfd0d184a, "cs47l15_32bit_spi_regmap" },
	{ 0x2ae845b3, "cs47l92_32bit_spi_regmap" },
	{ 0x5e5c4342, "cs47l90_32bit_spi_regmap" },
	{ 0x5b1f5be, "cs47l85_32bit_spi_regmap" },
	{ 0x37c36ec6, "cs47l35_32bit_spi_regmap" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x943c05f0, "madera_dev_init" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xebe384cb, "madera_name_from_type" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xf582d5da, "madera_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "madera");

MODULE_ALIAS("spi:cs47l15");
MODULE_ALIAS("spi:cs47l35");
MODULE_ALIAS("spi:cs47l85");
MODULE_ALIAS("spi:cs47l90");
MODULE_ALIAS("spi:cs47l91");
MODULE_ALIAS("spi:cs42l92");
MODULE_ALIAS("spi:cs47l92");
MODULE_ALIAS("spi:cs47l93");
MODULE_ALIAS("spi:wm1840");

MODULE_INFO(srcversion, "02BA7533B3BFFF01FEFB4DC");
