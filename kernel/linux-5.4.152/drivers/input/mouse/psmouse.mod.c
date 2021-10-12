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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x9b9e828, "device_add_groups" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x7b3e315b, "serio_unregister_driver" },
	{ 0xd54dc076, "ps2_handle_ack" },
	{ 0xacb32e93, "ps2_sendbyte" },
	{ 0xe16c0a90, "ps2_handle_response" },
	{ 0x6655278e, "input_mt_report_finger_count" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6df62db0, "ps2_end_command" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7abc9a75, "i2c_for_each_dev" },
	{ 0x1870812b, "__ps2_command" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1dbad49c, "i2c_verify_adapter" },
	{ 0x85df9b6c, "strsep" },
	{ 0x49c89b60, "serio_interrupt" },
	{ 0x9ce620ed, "i2c_new_probed_device" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x189141ca, "ps2_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2459cf37, "input_mt_report_pointer_emulation" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xf8c679e2, "input_event" },
	{ 0xa9eb0278, "serio_unregister_child_port" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfe603e90, "__serio_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x386d0f54, "i2c_bus_type" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x64b0469f, "serio_close" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0xc500f45a, "serio_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x736825ad, "i2c_adapter_type" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8f93a6a3, "bus_register_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0x203f6d87, "ps2_command" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7560da75, "ps2_sliced_command" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x735cfc28, "input_mt_drop_unused" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x187f34ba, "ps2_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x86c2589a, "serio_reconnect" },
	{ 0x55d56a61, "__serio_register_port" },
	{ 0x945a6e76, "device_remove_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x7ff96fdf, "serio_rescan" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0x2b46ac15, "ps2_cmd_aborted" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0xf56864ac, "i2c_client_type" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9377148b, "bus_unregister_notifier" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc291a68c, "ps2_begin_command" },
	{ 0xc85b1578, "input_mt_assign_slots" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "1FB14D15776813B0E83D122");
