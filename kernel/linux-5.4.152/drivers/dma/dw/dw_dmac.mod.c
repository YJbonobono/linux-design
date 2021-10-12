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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb966828e, "idma32_dma_probe" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1526e183, "dw_dma_probe" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x573a3736, "dw_dma_remove" },
	{ 0x12411378, "do_dw_dma_enable" },
	{ 0x9bd6911, "acpi_dma_controller_register" },
	{ 0xef125518, "acpi_dma_controller_free" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0xd0287a42, "acpi_dma_simple_xlate" },
	{ 0x9b0685cc, "dw_dma_filter" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x597e5d3, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x29270be8, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("acpi*:INTL9C60:*");
MODULE_ALIAS("acpi*:80862286:*");
MODULE_ALIAS("acpi*:808622C0:*");
MODULE_ALIAS("acpi*:80864BB4:*");
MODULE_ALIAS("acpi*:80864BB5:*");
MODULE_ALIAS("acpi*:80864BB6:*");

MODULE_INFO(srcversion, "53594F06DF3BBF59152E294");
