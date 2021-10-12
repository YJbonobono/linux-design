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
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0x86209ca7, "genphy_c45_read_mdix" },
	{ 0xe3abea46, "genphy_c45_read_pma" },
	{ 0x1b7f0461, "phy_resolve_aneg_linkmode" },
	{ 0xa3fb1cc3, "genphy_c45_read_lpa" },
	{ 0x23c0c6b9, "genphy_c45_read_link" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbfd7afeb, "genphy_c45_pma_read_abilities" },
	{ 0xcc64a6a3, "genphy_c45_pma_setup_forced" },
	{ 0xc7cbbadb, "genphy_c45_check_and_restart_aneg" },
	{ 0xfa32bd0b, "phy_modify_mmd_changed" },
	{ 0xdfe0bbe8, "genphy_c45_an_config_aneg" },
	{ 0xd220966d, "phy_write_mmd" },
	{ 0x412eedec, "phy_modify_mmd" },
	{ 0xe9413012, "genphy_c45_aneg_done" },
	{ 0x928c99f7, "phy_read_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000101011000010011010????");
MODULE_ALIAS("mdio:0000000000101011000010011011????");

MODULE_INFO(srcversion, "FC53AFC51E4CBF536EB9A87");
