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
	{ 0x13caabab, "noop_llseek" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x1a30f5d9, "i8042_install_filter" },
	{ 0xff282521, "rfkill_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x4297c00d, "proc_create_data" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xdef7d90d, "iio_device_alloc" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x87a67f49, "single_open" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x45081703, "ec_get_handle" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4791395b, "i8042_remove_filter" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x2823c374, "iio_device_free" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x93082893, "misc_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xf30b2255, "led_classdev_notify_brightness_hw_changed" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x2d721cca, "sysfs_update_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video,industrialio,sparse-keymap,wmi");

MODULE_ALIAS("acpi*:TOS6200:*");
MODULE_ALIAS("acpi*:TOS6207:*");
MODULE_ALIAS("acpi*:TOS6208:*");
MODULE_ALIAS("acpi*:TOS1900:*");

MODULE_INFO(srcversion, "5BD5AE8677804BAF9A55395");
