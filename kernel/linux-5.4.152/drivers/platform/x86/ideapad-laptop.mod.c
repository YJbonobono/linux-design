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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb442129e, "backlight_force_update" },
	{ 0x4fdee897, "i8042_command" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5850110, "printk" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,video,sparse-keymap");

MODULE_ALIAS("acpi*:VPC2004:*");

MODULE_INFO(srcversion, "56D69188220DADCA7EA8359");
