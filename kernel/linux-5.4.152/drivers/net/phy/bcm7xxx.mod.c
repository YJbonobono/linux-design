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
	{ 0x13564512, "bcm_phy_get_strings" },
	{ 0xaf31d5e7, "phy_drivers_unregister" },
	{ 0x7a6c2a5a, "phy_drivers_register" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa37e72f, "bcm_phy_enable_apd" },
	{ 0xb4ad9a96, "bcm_phy_r_rc_cal_reset" },
	{ 0x72c27e03, "bcm_phy_write_misc" },
	{ 0xe74ab5dc, "bcm_phy_28nm_a0b0_afe_config_init" },
	{ 0xa7f8d700, "bcm_phy_get_sset_count" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6c6b2034, "bcm_phy_get_stats" },
	{ 0x61f89b6c, "bcm_phy_downshift_get" },
	{ 0xccfd7114, "genphy_restart_aneg" },
	{ 0xdec50f04, "bcm_phy_set_eee" },
	{ 0xef70d3ec, "bcm_phy_downshift_set" },
	{ 0xc5850110, "printk" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100010010????");
MODULE_ALIAS("mdio:1010111000000010010100011001????");
MODULE_ALIAS("mdio:1010111000000010010100001001????");
MODULE_ALIAS("mdio:1010111000000010010100111011????");
MODULE_ALIAS("mdio:1010111000000010010100011010????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:1010111000000010010100101110????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");

MODULE_INFO(srcversion, "B5D6F2866B0E570DECC60D2");
