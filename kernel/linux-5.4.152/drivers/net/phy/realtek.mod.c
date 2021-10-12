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
	{ 0xdf63358c, "genphy_write_mmd_unsupported" },
	{ 0xc9061781, "genphy_read_mmd_unsupported" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0xf9fe41c6, "phy_restore_page" },
	{ 0xf85dc596, "__phy_modify" },
	{ 0x37b2a4ba, "phy_select_page" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x81050a49, "phy_write_paged" },
	{ 0xa0ec8714, "genphy_read_abilities" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0xf58cda59, "phy_modify_paged_changed" },
	{ 0x2385dabb, "genphy_read_status" },
	{ 0xecff76fb, "phy_read_paged" },
	{ 0x975bbf99, "genphy_suspend" },
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x164975a6, "__mdiobus_read" },
	{ 0xb71487b1, "__mdiobus_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "F658EA91F2472E94B73D666");
