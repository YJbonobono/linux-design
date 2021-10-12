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
	{ 0x7e0e09dd, "transport_class_register" },
	{ 0xe3b66737, "class_find_device" },
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49a9e1e0, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf6514726, "scsi_host_lookup" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28c8899d, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x481a80a5, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x77df663a, "scsi_scan_target" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xe5a01321, "device_register" },
	{ 0x62d42a7a, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xea58b78a, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe8498de, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x59c4dd2c, "netlink_kernel_release" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x856b5228, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x335e4ce6, "device_add" },
	{ 0x9b553753, "skb_pull" },
	{ 0x5d28af9b, "transport_class_unregister" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x78381292, "init_net" },
	{ 0x94567929, "__class_register" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x893a5c26, "netlink_capable" },
	{ 0xc8362787, "scsi_target_unblock" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xd6762310, "scsi_host_get" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebeb1328, "transport_setup_device" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x191e562, "__scsi_init_queue" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x7c3896cb, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x51ce92, "device_unregister" },
	{ 0x84ed005, "transport_remove_device" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0147577, "scsi_target_block" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x37c7ad2e, "bsg_job_done" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xc66a63ca, "bsg_remove_queue" },
	{ 0xaec0f069, "bsg_setup_queue" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "209828E011A85230631405C");
