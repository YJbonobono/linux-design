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
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0xfd205417, "no_llseek" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc5850110, "printk" },
	{ 0xf4b754fd, "acpi_resources_are_enforced" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xebb7a8a2, "debugfs_create_file_unsafe" },
	{ 0xbfb9dc69, "debugfs_create_x32" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK0110:*");

MODULE_INFO(srcversion, "1CD208372FDA54408BCDDD4");
