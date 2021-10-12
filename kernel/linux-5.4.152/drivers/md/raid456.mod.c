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
	{ 0xafb84c13, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe516dae9, "bio_split" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8fc9e71a, "__cpuhp_remove_state" },
	{ 0xca33cc1a, "submit_bio_wait" },
	{ 0xdfd19a2d, "bio_devname" },
	{ 0xea3ae175, "async_raid6_datap_recov" },
	{ 0x18abba37, "blk_queue_io_opt" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0x2f7bfb86, "rdev_set_badblocks" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xd8ed941c, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x355aa170, "mddev_suspend" },
	{ 0xcd777941, "blkdev_issue_flush" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0xaf244b4e, "md_bitmap_endwrite" },
	{ 0xb5126fb6, "md_check_recovery" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xbac71768, "blk_queue_io_min" },
	{ 0xb8373de2, "md_write_end" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0xacf7679, "dma_issue_pending_all" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xcf5c535d, "async_syndrome_val" },
	{ 0xa922fe0c, "md_new_event" },
	{ 0x582aac6d, "bioset_init" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97ce074e, "md_bitmap_unplug" },
	{ 0x4fdc9b13, "blk_queue_max_write_zeroes_sectors" },
	{ 0x3f7fe076, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xd1fe8f1d, "md_write_inc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x30bbb4b6, "bio_reset" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2b30f429, "raid6_call" },
	{ 0x91b42f02, "md_register_thread" },
	{ 0x486d7fab, "bio_init" },
	{ 0x51d5cd98, "md_flush_request" },
	{ 0x48c093fb, "_atomic_dec_and_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5abd715f, "md_update_sb" },
	{ 0x686b3805, "md_bitmap_end_sync" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0x1b289cd0, "md_do_sync" },
	{ 0xbf7a197e, "async_raid6_2data_recov" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x992c17e9, "bio_clone_fast" },
	{ 0x97f83bd4, "async_trigger_callback" },
	{ 0x5565078d, "__cpuhp_state_add_instance" },
	{ 0xaa71e4c3, "disk_stack_limits" },
	{ 0x31eb008f, "blkdev_issue_zeroout" },
	{ 0x13490dfa, "bio_chain" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x29252e74, "__tracepoint_block_unplug" },
	{ 0x4f530362, "mddev_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6fdd9a88, "async_memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd8a14513, "__cpuhp_setup_state" },
	{ 0x3aa0225d, "md_wait_for_blocked_rdev" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x4122186, "bio_put" },
	{ 0xa1ccb4be, "md_done_sync" },
	{ 0x3ef358d4, "bioset_exit" },
	{ 0xfab4c469, "kthread_unpark" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x994dbb68, "submit_bio" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x485253c2, "async_xor_val" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x4685c0ce, "async_xor" },
	{ 0x618911fc, "numa_node" },
	{ 0x69049cd2, "radix_tree_replace_slot" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x1865f7cc, "md_write_start" },
	{ 0xe4b54517, "bdevname" },
	{ 0xa00e9da3, "__trace_note_message" },
	{ 0x4d8f01c3, "async_tx_quiesce" },
	{ 0x41efdeaf, "radix_tree_lookup_slot" },
	{ 0x1c3a6d22, "rdev_clear_badblocks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d3ca75, "md_allow_write" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7302df31, "md_set_array_sectors" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x544ebe79, "__cpuhp_state_remove_instance" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe89408aa, "sysfs_notify" },
	{ 0x7062c854, "bio_clone_blkg_association" },
	{ 0xb3528552, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc1b5240e, "kernfs_notify" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x944c43f, "node_states" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xec359bb0, "kthread_park" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52c4c2ba, "md_bitmap_close_sync" },
	{ 0x435f054, "sync_page_io" },
	{ 0x99d797cf, "md_unregister_thread" },
	{ 0x8940c1ce, "async_gen_syndrome" },
	{ 0xc54ea3e7, "md_finish_reshape" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8fdc4be5, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x6222ef14, "md_error" },
	{ 0x8934940d, "md_bitmap_cond_end_sync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x26d60cae, "md_bitmap_start_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7741e001, "mddev_resume" },
	{ 0xbb08ff5b, "md_find_rdev_rcu" },
	{ 0xa37748be, "mddev_init_writes_pending" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x5c32d7b5, "md_bitmap_resize" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xac7647e6, "blk_queue_max_write_same_sectors" },
	{ 0x71dc307b, "__put_page" },
	{ 0xbd74d856, "register_md_personality" },
	{ 0x19f1f7cc, "set_disk_ro" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "async_raid6_recov,async_pq,libcrc32c,raid6_pq,async_tx,async_memcpy,async_xor");


MODULE_INFO(srcversion, "11A07078A31473FADB93DC4");
