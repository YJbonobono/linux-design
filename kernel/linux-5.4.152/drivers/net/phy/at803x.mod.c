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
	{ 0x9f4e5992, "phy_resolve_aneg_pause" },
	{ 0xccd1f6ef, "genphy_read_lpa" },
	{ 0xdcf6d9bb, "genphy_update_link" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5d316cd5, "mdio_device_reset" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xad76fa2b, "genphy_aneg_done" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd220966d, "phy_write_mmd" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:000000000100110111010000011?0100");
MODULE_ALIAS("mdio:000000000100110111010000011?0010");

MODULE_INFO(srcversion, "5D2B7989C0CCFABE8A09D1C");
