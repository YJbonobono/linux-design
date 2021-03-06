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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0x157e97e4, "__blkdev_issue_discard" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0x15e3da66, "__blkdev_issue_zeroout" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcd777941, "blkdev_issue_flush" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce544cea, "vfs_fsync" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1862c060, "iov_iter_bvec" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x486d7fab, "bio_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xffb7c514, "ida_free" },
	{ 0x13490dfa, "bio_chain" },
	{ 0x9166fada, "strncpy" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xbf36d05e, "blkdev_get_by_path" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2c541e7b, "radix_tree_next_chunk" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x81b59f6b, "configfs_register_subsystem" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x69e683de, "uuid_gen" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x4122186, "bio_put" },
	{ 0x284fe794, "percpu_ref_exit" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x994dbb68, "submit_bio" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x22422888, "vfs_fallocate" },
	{ 0x1953c958, "mempool_create" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1b5f4377, "trace_seq_putc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2d192c70, "sg_zero_buffer" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x3d9dd6d3, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x81d7c5b7, "percpu_ref_kill_and_confirm" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xeaac1cc3, "percpu_ref_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x1517bb37, "vfs_getattr" },
	{ 0x664f4f51, "config_group_init" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7bd2c122, "filp_open" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C8B1B7D0010C89AF7433F5");
