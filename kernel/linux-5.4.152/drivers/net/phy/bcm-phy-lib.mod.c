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
	{ 0x928c99f7, "phy_read_mmd" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd220966d, "phy_write_mmd" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "772D797A7CE62B6695B5A79");
