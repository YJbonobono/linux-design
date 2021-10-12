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
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa1955693, "__usb_create_hcd" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0xb77889a2, "xhci_init_driver" },
	{ 0x63b3c8bd, "usb_hcd_is_primary_hcd" },
	{ 0x2ed9000a, "xhci_run" },
	{ 0xaf0371de, "xhci_resume" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x689288c8, "devm_usb_get_phy_by_phandle" },
	{ 0xb4c5213d, "xhci_gen_setup" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa393c8eb, "xhci_suspend" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xa3c35c26, "usb_hcd_platform_shutdown" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0D10:*");

MODULE_INFO(srcversion, "ACB77E03C1EFBC34CE67230");
