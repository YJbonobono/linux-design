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
	{ 0x294f2cff, "spmi_register_read" },
	{ 0xd50ece46, "spmi_register_zero_write" },
	{ 0x338c33e4, "spmi_ext_register_write" },
	{ 0x3b569336, "__regmap_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1d617251, "spmi_register_write" },
	{ 0xd056ea6b, "spmi_ext_register_readl" },
	{ 0x7b95d601, "spmi_ext_register_read" },
	{ 0x3f58ece0, "spmi_ext_register_writel" },
};

MODULE_INFO(depends, "spmi");


MODULE_INFO(srcversion, "1E3246823CE1A9B76C01ADA");
