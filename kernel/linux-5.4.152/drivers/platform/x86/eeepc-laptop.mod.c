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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6c4b4c21, "__pci_hp_register" },
	{ 0x15e30e24, "pci_find_bus" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xc9f41342, "acpi_bus_get_status" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x91565caa, "pci_hp_deregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7901f831, "pci_bus_add_device" },
	{ 0xc93b9041, "pci_bus_assign_resources" },
	{ 0x7e29d54c, "pci_scan_single_device" },
	{ 0x2930376, "pci_stop_and_remove_bus_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0x528251a, "pci_bus_read_config_dword" },
	{ 0x626a408b, "acpi_get_pci_dev" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xb442129e, "backlight_force_update" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,video");

MODULE_ALIAS("acpi*:ASUS010:*");

MODULE_INFO(srcversion, "A52E93EA49186A3634DAC84");
