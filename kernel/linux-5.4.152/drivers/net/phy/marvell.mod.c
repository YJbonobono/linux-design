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
	{ 0xe567fe78, "genphy_loopback" },
	{ 0x4648b2aa, "phy_gbit_fibre_features" },
	{ 0x2385dabb, "genphy_read_status" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0xdcf6d9bb, "genphy_update_link" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc05e3b5c, "genphy_setup_forced" },
	{ 0xccfd7114, "genphy_restart_aneg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf85dc596, "__phy_modify" },
	{ 0xee986b15, "phy_save_page" },
	{ 0xecff76fb, "phy_read_paged" },
	{ 0xd89bd8f5, "phy_modify_paged" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ba0b748, "phy_ethtool_get_eee" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x81050a49, "phy_write_paged" },
	{ 0x80652c75, "genphy_soft_reset" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x975bbf99, "genphy_suspend" },
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb71487b1, "__mdiobus_write" },
	{ 0xf9fe41c6, "phy_restore_page" },
	{ 0x164975a6, "__mdiobus_read" },
	{ 0x37b2a4ba, "phy_select_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011110100????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");

MODULE_INFO(srcversion, "CCBD3F6AEAA62EFC4435BA1");
