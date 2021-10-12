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
	{ 0x80652c75, "genphy_soft_reset" },
	{ 0xdf63358c, "genphy_write_mmd_unsupported" },
	{ 0xc9061781, "genphy_read_mmd_unsupported" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3ab184d7, "phy_init_hw" },
	{ 0x2385dabb, "genphy_read_status" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0xa0ec8714, "genphy_read_abilities" },
	{ 0xccfd7114, "genphy_restart_aneg" },
	{ 0x928c99f7, "phy_read_mmd" },
	{ 0xd220966d, "phy_write_mmd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x975bbf99, "genphy_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:????????????0010000101100001000?");
MODULE_ALIAS("mdio:????????00100010000101100010????");
MODULE_ALIAS("mdio:????????00100010000101100100????");
MODULE_ALIAS("mdio:????????0010001000010110000110??");
MODULE_ALIAS("mdio:????????00100010000101110010????");
MODULE_ALIAS("mdio:????????001000100001010101010101");
MODULE_ALIAS("mdio:????????001000100001010101010110");
MODULE_ALIAS("mdio:????????00100010000101010001????");
MODULE_ALIAS("mdio:????????00100010000101010101????");
MODULE_ALIAS("mdio:????????00100010000101010111????");
MODULE_ALIAS("mdio:????????00100010000101010110????");
MODULE_ALIAS("mdio:????????00001110011100100011????");
MODULE_ALIAS("mdio:????????00100010000101000011????");

MODULE_INFO(srcversion, "3AA6BFC67032210AED23402");
