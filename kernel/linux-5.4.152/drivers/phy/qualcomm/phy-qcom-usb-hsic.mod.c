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
	{ 0xa7f834ea, "ulpi_unregister_driver" },
	{ 0xb5c2e79a, "__ulpi_register_driver" },
	{ 0xd78696a, "pinctrl_select_state" },
	{ 0x371e8a2a, "pinctrl_lookup_state" },
	{ 0x2cb5acf8, "ulpi_write" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d41e04e, "__devm_of_phy_provider_register" },
	{ 0x9d3155c8, "of_phy_simple_xlate" },
	{ 0x85eaa0e9, "devm_phy_create" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x5d7d2894, "devm_pinctrl_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("of:N*T*Cqcom,usb-hsic-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-hsic-phyC*");

MODULE_INFO(srcversion, "79925B2C4A8C0142BDB5479");
