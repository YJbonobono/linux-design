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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xe3a53f4c, "sort" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E841B7C10033B5CC1C57C57");
