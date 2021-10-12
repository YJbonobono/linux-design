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
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92ed2c1a, "acpi_device_hid" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0xc5850110, "printk" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf8c679e2, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:FUJ02BD:*");
MODULE_ALIAS("acpi*:FUJ02BF:*");

MODULE_INFO(srcversion, "E71E6D8DE4CB09ECEF39B41");
