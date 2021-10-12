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
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xe5a01321, "device_register" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x28950169, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x335e4ce6, "device_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc1b5240e, "kernfs_notify" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3750a460, "get_device" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x51ce92, "device_unregister" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9410008010B6589756BF330");
