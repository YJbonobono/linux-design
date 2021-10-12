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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x5959909c, "hwmon_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9166fada, "strncpy" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x3750a460, "get_device" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000D:*");

MODULE_INFO(srcversion, "BADC79C9C252224E3DA0239");
