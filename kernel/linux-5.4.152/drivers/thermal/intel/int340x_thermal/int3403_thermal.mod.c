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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x31f05acc, "int340x_thermal_read_trips" },
	{ 0x667f43dc, "thermal_zone_device_update" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d482986, "thermal_cooling_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x324f4314, "int340x_thermal_zone_add" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa5e841e1, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x48241b4e, "thermal_cooling_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3403:*");

MODULE_INFO(srcversion, "E39AA3B79E24225DE6C5F55");
