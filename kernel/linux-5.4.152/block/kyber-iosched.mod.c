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
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x12159760, "blk_mq_debugfs_rq_show" },
	{ 0xf02d78ff, "elv_unregister" },
	{ 0xf4dacaeb, "elv_register" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ba2890a, "blk_mq_sched_request_inserted" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7b4c9ba9, "sbitmap_queue_min_shallow_depth" },
	{ 0x2fb72e9b, "sbitmap_init_node" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7562ca03, "blk_stat_enable_accounting" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x9ae4191f, "sbitmap_queue_init_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5cc2101a, "elevator_alloc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd9d5d879, "sbitmap_queue_resize" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40b43bd0, "sbitmap_add_wait_queue" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x162a9e58, "blk_mq_run_hw_queue" },
	{ 0x3c212744, "sbitmap_del_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe6f100ac, "blk_mq_bio_list_merge" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x42230915, "sbitmap_any_bit_set" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa323b846, "sbitmap_queue_show" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xb177d101, "seq_printf" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xa123a51, "bpf_trace_run7" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x5792f848, "strlcpy" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3f137654, "trace_define_field" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "106E65FB2A04C1C3CE0A300");
