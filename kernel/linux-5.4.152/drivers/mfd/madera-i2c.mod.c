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
	{ 0xbe380546, "cs47l15_16bit_i2c_regmap" },
	{ 0x69dd58bf, "cs47l92_16bit_i2c_regmap" },
	{ 0x1d695e4e, "cs47l90_16bit_i2c_regmap" },
	{ 0x4684e8b2, "cs47l85_16bit_i2c_regmap" },
	{ 0x74f673ca, "cs47l35_16bit_i2c_regmap" },
	{ 0xbe35d906, "cs47l15_32bit_i2c_regmap" },
	{ 0x69d084ff, "cs47l92_32bit_i2c_regmap" },
	{ 0x1d64820e, "cs47l90_32bit_i2c_regmap" },
	{ 0x468934f2, "cs47l85_32bit_i2c_regmap" },
	{ 0x74fbaf8a, "cs47l35_32bit_i2c_regmap" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x943c05f0, "madera_dev_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xebe384cb, "madera_name_from_type" },
	{ 0xf582d5da, "madera_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "madera");

MODULE_ALIAS("i2c:cs47l15");
MODULE_ALIAS("i2c:cs47l35");
MODULE_ALIAS("i2c:cs47l85");
MODULE_ALIAS("i2c:cs47l90");
MODULE_ALIAS("i2c:cs47l91");
MODULE_ALIAS("i2c:cs42l92");
MODULE_ALIAS("i2c:cs47l92");
MODULE_ALIAS("i2c:cs47l93");
MODULE_ALIAS("i2c:wm1840");

MODULE_INFO(srcversion, "A93539683DB2905A3C4FBF2");
