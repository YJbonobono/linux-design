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
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xee3b4fd8, "spi_finalize_current_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x1c1f001, "spi_controller_suspend" },
	{ 0x8d58bdcd, "spi_controller_resume" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,zynq-spi-r1p6");
MODULE_ALIAS("of:N*T*Cxlnx,zynq-spi-r1p6C*");
MODULE_ALIAS("of:N*T*Ccdns,spi-r1p6");
MODULE_ALIAS("of:N*T*Ccdns,spi-r1p6C*");

MODULE_INFO(srcversion, "EB8FEC1FF7D60E2FC6085C0");
