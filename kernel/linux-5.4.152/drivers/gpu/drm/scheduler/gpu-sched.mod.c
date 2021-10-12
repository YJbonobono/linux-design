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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfab4c469, "kthread_unpark" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x3b20fb95, "dma_fence_remove_callback" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xec359bb0, "kthread_park" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xfb7543f9, "sched_setscheduler" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x37a0cba, "kfree" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "751D8D57119445070A52AE7");
