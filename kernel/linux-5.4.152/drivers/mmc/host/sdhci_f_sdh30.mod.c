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
	{ 0xa2ecd579, "sdhci_set_uhs_signaling" },
	{ 0x8df714b3, "sdhci_set_bus_width" },
	{ 0xbf161015, "sdhci_set_clock" },
	{ 0xca500a9a, "sdhci_pltfm_pmops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe1a60dc2, "sdhci_add_host" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x5bbfc3fa, "mmc_of_parse" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xa811d0e3, "sdhci_alloc_host" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x859d6e80, "sdhci_reset" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x35e9d90, "sdhci_free_host" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x73df6006, "sdhci_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm");

MODULE_ALIAS("acpi*:SCX0002:*");

MODULE_INFO(srcversion, "28C24B93F07378A982C5B8D");
