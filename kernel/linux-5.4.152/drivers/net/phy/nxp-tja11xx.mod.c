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
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x975bbf99, "genphy_suspend" },
	{ 0x4437de01, "phy_basic_t1_features" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0xdcf6d9bb, "genphy_update_link" },
	{ 0x80652c75, "genphy_soft_reset" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000110000000110111000100????");
MODULE_ALIAS("mdio:0000000110000000110111010000????");

MODULE_INFO(srcversion, "9E0BCA4F63061AAAD15C779");
