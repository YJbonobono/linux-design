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
	{ 0x1749a360, "hid_add_device" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x74bfc54c, "hid_parse_report" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x4f37f769, "usb_deregister_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x40ab1465, "input_ff_create" },
	{ 0xe0851549, "__hid_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5495392, "hid_debug" },
	{ 0x155a6f99, "hid_input_report" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x804b255f, "usb_block_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5052ba6b, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbe66444d, "hid_hw_close" },
	{ 0xf9386b0, "usb_autopm_put_interface_async" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8d252fac, "usb_unpoison_urb" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0x2e3375df, "hid_check_keys_pressed" },
	{ 0xd4fdc31, "usb_register_dev" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62e68a9e, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x99baad52, "hid_set_field" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa0cbd462, "hid_alloc_report_buf" },
	{ 0x825f1409, "usb_queue_reset_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x25de87c5, "usb_autopm_get_interface_async" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3ef9e067, "usb_find_interface" },
	{ 0x9916e34c, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8135f4a4, "hid_destroy_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9958798, "hid_allocate_device" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb55d1186, "usb_autopm_get_interface_no_resume" },
	{ 0x17e58227, "usb_autopm_put_interface_no_suspend" },
	{ 0x58e1e9ac, "hidinput_count_leds" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xcf2a6966, "up" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x39a5dd0a, "hid_lookup_quirk" },
	{ 0xad1c0db0, "hid_output_report" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "6EBF9957776CB64F748827B");
