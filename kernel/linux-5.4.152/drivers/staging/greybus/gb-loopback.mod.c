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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3ee945e, "gb_connection_latency_tag_disable" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xf78267bd, "gb_connection_latency_tag_enable" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xa3b53740, "single_release" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x98121044, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xf6f17fec, "gb_operation_request_send" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x74957e8f, "greybus_register_driver" },
	{ 0x5191cd36, "greybus_deregister_driver" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x94567929, "__class_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x73916598, "gb_operation_request_send_sync_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f8c37ba, "gb_operation_result" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5ad2fb4e, "gb_operation_response_alloc" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51ce92, "device_unregister" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdd92a2e8, "gb_operation_get_payload_size_max" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa63dbd09, "gb_operation_put" },
	{ 0xa76db6a, "gb_operation_create_flags" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "7EE7B96CFB826A1157CE79A");
