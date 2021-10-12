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
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7b6f9536, "acpi_register_wakeup_handler" },
	{ 0xdd86eed3, "gpiochip_set_chained_irqchip" },
	{ 0x69ba222, "gpiochip_irqchip_add_key" },
	{ 0xbfe628d2, "handle_edge_irq" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x8a45a555, "acpi_unregister_wakeup_handler" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT0002:*");

MODULE_INFO(srcversion, "9530040D725F012B21BB782");
