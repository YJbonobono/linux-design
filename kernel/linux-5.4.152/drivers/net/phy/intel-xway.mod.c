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
	{ 0xd220966d, "phy_write_mmd" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000011000000100110000011010001");
MODULE_ALIAS("mdio:00000011000000100110000011100001");
MODULE_ALIAS("mdio:11010101011001011010010000000000");
MODULE_ALIAS("mdio:11010101011001011010010000010000");
MODULE_ALIAS("mdio:11010101011001011010010000000001");
MODULE_ALIAS("mdio:11010101011001011010010000010001");
MODULE_ALIAS("mdio:11010101011001011010010000001000");
MODULE_ALIAS("mdio:11010101011001011010010000011000");
MODULE_ALIAS("mdio:11010101011001011010010000001001");
MODULE_ALIAS("mdio:11010101011001011010010000011001");

MODULE_INFO(srcversion, "47CBE8A24A08422505414E4");
