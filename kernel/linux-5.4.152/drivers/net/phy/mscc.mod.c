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
	{ 0xad76fa2b, "genphy_aneg_done" },
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x975bbf99, "genphy_suspend" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0xccfd7114, "genphy_restart_aneg" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2385dabb, "genphy_read_status" },
	{ 0x5792f848, "strlcpy" },
	{ 0xecff76fb, "phy_read_paged" },
	{ 0x80652c75, "genphy_soft_reset" },
	{ 0xf9fe41c6, "phy_restore_page" },
	{ 0x37b2a4ba, "phy_select_page" },
	{ 0xd89bd8f5, "phy_modify_paged" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x164975a6, "__mdiobus_read" },
	{ 0xb71487b1, "__mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111000001100111????");
MODULE_ALIAS("mdio:0000000000000111000001010110????");
MODULE_ALIAS("mdio:0000000000000111000001010111????");
MODULE_ALIAS("mdio:0000000000000111000001110110????");
MODULE_ALIAS("mdio:0000000000000111000001110111????");
MODULE_ALIAS("mdio:0000000000000111000001001010????");
MODULE_ALIAS("mdio:0000000000000111000001111100????");

MODULE_INFO(srcversion, "C045801CC83F31A52AECBCA");
