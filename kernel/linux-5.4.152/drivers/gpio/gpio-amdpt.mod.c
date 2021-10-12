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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0xa4f03709, "bgpio_init" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gpio-generic");

MODULE_ALIAS("acpi*:AMDF030:*");
MODULE_ALIAS("acpi*:AMDIF030:*");

MODULE_INFO(srcversion, "F1E3139D916479DE288048D");
