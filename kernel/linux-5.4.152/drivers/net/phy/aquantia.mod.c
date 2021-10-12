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
	{ 0xf9a482f9, "msleep" },
	{ 0x928c99f7, "phy_read_mmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0xcc64a6a3, "genphy_c45_pma_setup_forced" },
	{ 0xdd64e639, "strscpy" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11089ac7, "_ctype" },
	{ 0xfa32bd0b, "phy_modify_mmd_changed" },
	{ 0x412eedec, "phy_modify_mmd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc7cbbadb, "genphy_c45_check_and_restart_aneg" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd220966d, "phy_write_mmd" },
	{ 0xdfe0bbe8, "genphy_c45_an_config_aneg" },
	{ 0x4595241c, "genphy_c45_read_status" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x773e0ae6, "phy_set_max_speed" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000001110100001101101000100????");
MODULE_ALIAS("mdio:0000001110100001101101000110????");
MODULE_ALIAS("mdio:0000001110100001101101001010????");
MODULE_ALIAS("mdio:0000001110100001101101001101????");
MODULE_ALIAS("mdio:0000001110100001101101001110????");
MODULE_ALIAS("mdio:0000001110100001101101011100????");
MODULE_ALIAS("mdio:0000001110100001101101001011????");

MODULE_INFO(srcversion, "924ECAA489B0569CEE6662E");
