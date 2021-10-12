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
	{ 0x73df6006, "sdhci_remove_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa811d0e3, "sdhci_alloc_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4b9c3a43, "sdhci_resume_host" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe1a60dc2, "sdhci_add_host" },
	{ 0x35e9d90, "sdhci_free_host" },
	{ 0xbf161015, "sdhci_set_clock" },
	{ 0xc5850110, "printk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5cfd0c68, "sdhci_suspend_host" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x859d6e80, "sdhci_reset" },
	{ 0xa2ecd579, "sdhci_set_uhs_signaling" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x8df714b3, "sdhci_set_bus_width" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "sdhci");


MODULE_INFO(srcversion, "9A6755622115D453AEC8448");
