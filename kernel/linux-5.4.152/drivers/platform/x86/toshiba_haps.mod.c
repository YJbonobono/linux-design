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
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xc5850110, "printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:TOS620A:*");

MODULE_INFO(srcversion, "808B5A33CE6A749928EFB05");
