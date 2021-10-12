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
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92ed2c1a, "acpi_device_hid" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x894e7523, "devm_led_classdev_unregister" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf8c679e2, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK4001:*");
MODULE_ALIAS("acpi*:ATK4002:*");

MODULE_INFO(srcversion, "913FBDC88F43454A51F783C");
