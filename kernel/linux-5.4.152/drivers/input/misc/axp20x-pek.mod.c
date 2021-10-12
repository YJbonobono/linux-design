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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x4824868, "devm_request_any_context_irq" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf8c679e2, "input_event" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9166fada, "strncpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp20x-pek");
MODULE_ALIAS("platform:axp221-pek");

MODULE_INFO(srcversion, "D35F9A025CBAC73EF8C0B61");
