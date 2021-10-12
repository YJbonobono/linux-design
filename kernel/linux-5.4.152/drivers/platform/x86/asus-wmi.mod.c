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
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x7e29d54c, "pci_scan_single_device" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x87a67f49, "single_open" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x3705fed7, "battery_hook_unregister" },
	{ 0x65b4695, "wmi_get_acpi_device_uid" },
	{ 0x2930376, "pci_stop_and_remove_bus_device" },
	{ 0xa3b53740, "single_release" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0x9cab34a6, "rfkill_set_led_trigger_name" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0xb177d101, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbfb9dc69, "debugfs_create_x32" },
	{ 0xff282521, "rfkill_register" },
	{ 0xc93b9041, "pci_bus_assign_resources" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x6683ba0c, "battery_hook_register" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x6c4b4c21, "__pci_hp_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91565caa, "pci_hp_deregister" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x15e30e24, "pci_find_bus" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x528251a, "pci_bus_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x25d44e5e, "__platform_create_bundle" },
	{ 0x53ca4226, "input_free_device" },
	{ 0xf30b2255, "led_classdev_notify_brightness_hw_changed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb442129e, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7901f831, "pci_bus_add_device" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "F9552BDB9D7BEED35963943");
