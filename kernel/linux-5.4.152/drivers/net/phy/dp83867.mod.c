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
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x975bbf99, "genphy_suspend" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd220966d, "phy_write_mmd" },
	{ 0x412eedec, "phy_modify_mmd" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0x928c99f7, "phy_read_mmd" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0010000000000000101000100011????");

MODULE_INFO(srcversion, "45BBE5AE22789FFE514E9AF");
