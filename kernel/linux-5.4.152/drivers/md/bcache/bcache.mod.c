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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xafb84c13, "blkdev_issue_discard" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe516dae9, "bio_split" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2491a84f, "kobject_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0xc29bf967, "strspn" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9803a617, "generic_end_io_acct" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x7b553c70, "bd_link_disk_holder" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf31357c9, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x582aac6d, "bioset_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb95c551c, "bio_advance" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x999e8297, "vfree" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x55aea56, "bio_free_pages" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6bbb9bc3, "lookup_bdev" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x30bbb4b6, "bio_reset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x36f3be67, "__blkdev_driver_ioctl" },
	{ 0x486d7fab, "bio_init" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2cda8018, "bd_unlink_disk_holder" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xcce31aa4, "blk_alloc_queue" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6006847, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0xd105ab12, "zero_fill_bio_iter" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x992c17e9, "bio_clone_fast" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xbf36d05e, "blkdev_get_by_path" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xfb481954, "vprintk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x6626afca, "down" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0xf58ddd4a, "generic_start_io_acct" },
	{ 0x57bc19d2, "down_write" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x4122186, "bio_put" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x3ef358d4, "bioset_exit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x994dbb68, "submit_bio" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x5198bc49, "fs_kobj" },
	{ 0xe4b54517, "bdevname" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x861cd726, "put_disk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7062c854, "bio_clone_blkg_association" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x6b347276, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xeaf3cb23, "crc64_be" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x146eb90a, "blk_queue_write_cache" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0x7c914fde, "kobject_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0xcea5ff79, "__bio_clone_fast" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93170790, "blk_fill_rwbs" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x6c45747b, "set_blocksize" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7a57020a, "bio_copy_data" },
	{ 0xd7e56a4e, "simple_strtoll" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xffd8dda9, "bdput" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "crc64");


MODULE_INFO(srcversion, "2A9A3EAE73F3390E4EC3764");
