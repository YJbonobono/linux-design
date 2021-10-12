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
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x81b27b26, "wm8804_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfa28858, "wm8804_regmap_config" },
	{ 0x64a3deab, "wm8804_remove" },
	{ 0x50299d0b, "wm8804_pm" },
};

MODULE_INFO(depends, "snd-soc-wm8804");

MODULE_ALIAS("acpi*:1AEC8804:*");
MODULE_ALIAS("acpi*:10138804:*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "206FF811096C3E75AEFA13F");
