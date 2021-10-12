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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa5ba9f14, "split_page" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x29361773, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ec3b84c, "vmbus_recvpacket" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37ea659f, "add_memory" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0x17994d70, "memhp_auto_online" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9ddf9803, "__online_page_free" },
	{ 0xcea2e8b6, "__online_page_increment_counters" },
	{ 0x99d729a6, "__online_page_set_limits" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x130b568, "wake_up_process" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0xbfe145b, "set_online_page_callback" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0x26520970, "vm_memory_committed" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbb8213ea, "restore_online_page_callback" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa63a07c, "bpf_trace_run6" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:dc7450528589e2468057a307dc18a502");

MODULE_INFO(srcversion, "0D0741497092589BD4E994A");
