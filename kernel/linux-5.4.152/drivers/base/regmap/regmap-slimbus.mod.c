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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0xed91baf7, "slim_read" },
	{ 0xe0311d3, "slim_write" },
	{ 0x3b569336, "__regmap_init" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "slimbus");


MODULE_INFO(srcversion, "E14778267700917DF46886E");
