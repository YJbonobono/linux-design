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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x55353855, "bus_register" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x34e0549f, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x13eeb542, "tracepoint_srcu" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x24d273d1, "add_timer" },
	{ 0x335e4ce6, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8821021D87EB974ABDE063");
