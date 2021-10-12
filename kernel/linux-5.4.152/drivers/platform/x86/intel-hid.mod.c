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
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x6bdef35c, "acpi_ec_mark_gpe_for_wake" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xc5850110, "printk" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xf8c679e2, "input_event" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0xdbe14a86, "sparse_keymap_entry_from_scancode" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfa59c532, "acpi_create_platform_device" },
	{ 0x33e615c1, "acpi_match_device_ids" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:INT33D5:*");

MODULE_INFO(srcversion, "4A8F7D12F85F63BA88BA6ED");
