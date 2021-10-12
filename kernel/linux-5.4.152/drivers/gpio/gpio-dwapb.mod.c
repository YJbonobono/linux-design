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
	{ 0x1307c010, "irq_setup_alt_chip" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0x34add53d, "irq_set_chained_handler_and_data" },
	{ 0xbfe628d2, "handle_edge_irq" },
	{ 0x936448f7, "irq_gc_mask_clr_bit" },
	{ 0x1c9c55cf, "irq_gc_mask_set_bit" },
	{ 0xacab59fe, "irq_gc_ack_set_bit" },
	{ 0x50e9c5ab, "irq_get_domain_generic_chip" },
	{ 0x9ae02a2, "__irq_alloc_domain_generic_chips" },
	{ 0xf38a6078, "handle_level_irq" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0x960d69a7, "irq_generic_chip_ops" },
	{ 0xa4f03709, "bgpio_init" },
	{ 0x8d936dbf, "acpi_gpiochip_request_interrupts" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xaae6f75a, "__devm_reset_control_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xd10e621a, "acpi_gpiochip_free_interrupts" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4361ec56, "gpiochip_lock_as_irq" },
	{ 0x3352bf2b, "gpiochip_unlock_as_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gpio-generic");

MODULE_ALIAS("acpi*:HISI0181:*");
MODULE_ALIAS("acpi*:APMC0D07:*");
MODULE_ALIAS("acpi*:APMC0D81:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpio");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpioC*");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2C*");

MODULE_INFO(srcversion, "BE38CB4332C04E8C5CC0A38");
