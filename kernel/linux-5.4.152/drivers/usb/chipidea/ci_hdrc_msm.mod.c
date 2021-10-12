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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x17138045, "pm_runtime_no_callbacks" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x45df5bc9, "ci_hdrc_add_device" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9e31320e, "devm_reset_controller_register" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xaae6f75a, "__devm_reset_control_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc57b77a7, "phy_exit" },
	{ 0xd758ff97, "phy_power_off" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x6f8257de, "phy_power_on" },
	{ 0xc166ae1c, "phy_init" },
	{ 0x6ed63584, "hw_phymode_configure" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcbe9d14a, "ci_hdrc_remove_device" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ci_hdrc");

MODULE_ALIAS("of:N*T*Cqcom,ci-hdrc");
MODULE_ALIAS("of:N*T*Cqcom,ci-hdrcC*");

MODULE_INFO(srcversion, "6A1B7E08251D1670176A563");
