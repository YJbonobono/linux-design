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
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1c1f001, "spi_controller_suspend" },
	{ 0x8d58bdcd, "spi_controller_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-qspi-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-qspi-1.0C*");

MODULE_INFO(srcversion, "35897034B343FE9C4A70DAA");
