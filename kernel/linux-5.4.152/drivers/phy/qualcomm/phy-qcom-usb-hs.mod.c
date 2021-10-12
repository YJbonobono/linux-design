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
	{ 0xe40e364d, "extcon_register_notifier" },
	{ 0xb1ff0942, "extcon_get_state" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x9f9e6624, "regulator_set_voltage" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x67481332, "regulator_set_load" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d41e04e, "__devm_of_phy_provider_register" },
	{ 0x9d3155c8, "of_phy_simple_xlate" },
	{ 0x17aff18e, "extcon_get_edev_by_phandle" },
	{ 0x85eaa0e9, "devm_phy_create" },
	{ 0xaae6f75a, "__devm_reset_control_get" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xe5f42e41, "extcon_unregister_notifier" },
	{ 0x2cb5acf8, "ulpi_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("of:N*T*Cqcom,usb-hs-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-hs-phyC*");

MODULE_INFO(srcversion, "76A2088D3C1B32B420C4F3E");
