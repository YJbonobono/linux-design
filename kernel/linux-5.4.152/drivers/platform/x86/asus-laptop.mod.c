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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x6c64287b, "input_unregister_polled_device" },
	{ 0xf23af466, "input_free_polled_device" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x636964f5, "input_allocate_polled_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xc9f41342, "acpi_bus_get_status" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xf8c679e2, "input_event" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xb442129e, "backlight_force_update" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,sparse-keymap,video");

MODULE_ALIAS("acpi*:ATK0100:*");
MODULE_ALIAS("acpi*:ATK0101:*");

MODULE_INFO(srcversion, "99F250EC9C5B33B774C621D");
