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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0xbcee4e46, "es8328_probe" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67754bea, "es8328_regmap_config" },
};

MODULE_INFO(depends, "snd-soc-es8328");

MODULE_ALIAS("of:N*T*Ceverest,es8328");
MODULE_ALIAS("of:N*T*Ceverest,es8328C*");
MODULE_ALIAS("of:N*T*Ceverest,es8388");
MODULE_ALIAS("of:N*T*Ceverest,es8388C*");
MODULE_ALIAS("i2c:es8328");
MODULE_ALIAS("i2c:es8388");

MODULE_INFO(srcversion, "F085535CDF0F20C4E52EB24");
