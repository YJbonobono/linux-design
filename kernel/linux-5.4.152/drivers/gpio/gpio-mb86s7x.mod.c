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
	{ 0x8d936dbf, "acpi_gpiochip_request_interrupts" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0xd10e621a, "acpi_gpiochip_free_interrupts" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SCX0007:*");
MODULE_ALIAS("of:N*T*Cfujitsu,mb86s70-gpio");
MODULE_ALIAS("of:N*T*Cfujitsu,mb86s70-gpioC*");

MODULE_INFO(srcversion, "54457AAB66FB9F7D1CC9315");
