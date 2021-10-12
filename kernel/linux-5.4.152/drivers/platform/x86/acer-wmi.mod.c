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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x4de1a90, "acpi_dev_get_first_match_dev" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0x5220ece5, "rfkill_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x118e2cce, "sparse_keymap_report_event" },
	{ 0xdbe14a86, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "6E4B1884F1F8B2E14BCCF8D");
