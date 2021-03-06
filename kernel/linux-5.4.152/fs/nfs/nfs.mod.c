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
	{ 0xe7750f8, "kobject_put" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8b0e8948, "__fscache_acquire_cookie" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd6eec034, "set_wb_congested" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x13e3d9d6, "__fscache_disable_cookie" },
	{ 0xd39fe2eb, "set_anon_super" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x1f680c61, "__fscache_wait_on_page_write" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x72704326, "d_invalidate" },
	{ 0xf2364f1c, "__set_page_dirty_nobuffers" },
	{ 0xf6fe70e2, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x37e0db3, "mntget" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc7a5e0f2, "generic_write_checks" },
	{ 0x320fbc9a, "iov_iter_revert" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x387bab50, "proc_symlink" },
	{ 0x754d539c, "strlen" },
	{ 0xeea51364, "nlmclnt_done" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf86f5edc, "filemap_write_and_wait_range" },
	{ 0x47709e42, "free_anon_bdev" },
	{ 0xc2362304, "iget5_locked" },
	{ 0x593ed44f, "migrate_page" },
	{ 0x1d0c5c24, "iov_iter_get_pages_alloc" },
	{ 0x441c2c3d, "nlmclnt_init" },
	{ 0x118a6fbe, "dget_parent" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x1f70c5ef, "rpc_clnt_xprt_switch_has_addr" },
	{ 0x8962d1a6, "seq_escape" },
	{ 0x9951c67d, "_proc_mkdir" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x275f43ba, "is_bad_inode" },
	{ 0x39c3a2ee, "pagecache_get_page" },
	{ 0xb2aa21a2, "cred_fscmp" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x628fb489, "__fscache_invalidate" },
	{ 0x66c9a3b6, "__lock_page" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0x9808f3ae, "filemap_write_and_wait" },
	{ 0xeeed8e0c, "rpc_clnt_swap_deactivate" },
	{ 0x2008d696, "put_rpccred" },
	{ 0x7092be58, "deactivate_locked_super" },
	{ 0x6d56f8ac, "__page_file_mapping" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf0b7775d, "rpc_init_wait_queue" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x23f7d6b9, "dput" },
	{ 0xb177d101, "seq_printf" },
	{ 0x2e6a2148, "__fscache_write_page" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd642b00f, "invalidate_inode_pages2" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x4875b1c2, "security_inode_notifysecctx" },
	{ 0xb48d4d22, "security_sb_eat_lsm_opts" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x5581846a, "security_sb_remount" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x38b51d52, "add_to_page_cache_lru" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd75ca577, "__fscache_register_netfs" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ec78bdd, "rename_lock" },
	{ 0x70d701b9, "d_add" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x85574852, "redirty_page_for_writepage" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x596c50d1, "__put_net" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x663df432, "__fscache_uncache_page" },
	{ 0xc87d5c7d, "set_page_dirty" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4841bdee, "strnchr" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xb2f0bcdf, "xdr_reserve_space" },
	{ 0x668b19a1, "down_read" },
	{ 0x326a8b9e, "rpc_killall_tasks" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x8848c1e8, "end_page_writeback" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0xcf10a603, "d_delete" },
	{ 0xece784c2, "rb_first" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xcc4f1a29, "rpc_exit" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x48711f9d, "xdr_init_decode_pages" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xd1bd6545, "rpc_put_task_async" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x376b633c, "rpc_call_sync" },
	{ 0xe4377217, "__fscache_read_or_alloc_page" },
	{ 0x4c599e7f, "__fscache_uncache_all_inode_pages" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x2c5b8573, "d_obtain_root" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x8a518e5b, "finish_no_open" },
	{ 0x6006847, "current_task" },
	{ 0xc84e582f, "rpc_create" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd872b583, "d_rehash" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3f5772a2, "__fscache_enable_cookie" },
	{ 0xb39ad48b, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6ff2122, "write_inode_now" },
	{ 0xf3063b8d, "sget" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x3f9a2b0b, "rpcauth_get_gssinfo" },
	{ 0x933c1a39, "rpc_clnt_swap_activate" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x1d7d6c62, "__fscache_maybe_release_page" },
	{ 0x63325b11, "rpc_proc_unregister" },
	{ 0x1208a414, "seq_putc" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0x448bfc53, "d_move" },
	{ 0x9bc3ecfd, "rpc_max_payload" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x632e290a, "write_cache_pages" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42192bc, "dec_node_page_state" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x9f192829, "wait_on_page_writeback" },
	{ 0x10760bff, "kobj_sysfs_ops" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xc96f912f, "rpc_peeraddr2str" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x24c744c2, "inc_node_page_state" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xeea43e4b, "rpc_clone_client_set_auth" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x78381292, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x6fcb715f, "security_d_instantiate" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xcee467f3, "xprt_load_transport" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xcb60c3d7, "__lock_page_killable" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x575e7f0e, "ilookup5" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xdbff6629, "__fscache_unregister_netfs" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x769f6e64, "errseq_check" },
	{ 0x198620d7, "security_add_mnt_opt" },
	{ 0xc555d817, "file_write_and_wait_range" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x4b23519e, "rpc_setbufsize" },
	{ 0x3912ea06, "__rpc_wait_for_completion_task" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x419343f7, "simple_nosetlease" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc6c13f8b, "generic_perform_write" },
	{ 0xa916b694, "strnlen" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0xa5b339a1, "__filemap_set_wb_err" },
	{ 0xdde959c2, "net_ns_type_operations" },
	{ 0x5198bc49, "fs_kobj" },
	{ 0x2dc96937, "d_alloc" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad755fc2, "param_get_uint" },
	{ 0x1000e51, "schedule" },
	{ 0x1953c958, "mempool_create" },
	{ 0x78fe7e60, "__d_lookup_done" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x9db4ac04, "deactivate_super" },
	{ 0x575a8329, "d_drop" },
	{ 0x2028c76, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x1d0ee33d, "locks_lock_inode_wait" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb594e05f, "clear_page_dirty_for_io" },
	{ 0x4bc66972, "rpc_run_task" },
	{ 0x2ec09e4e, "rpc_sleep_on" },
	{ 0xfd880970, "clear_wb_congested" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfd3dcf07, "read_cache_pages" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x75a80a33, "__fscache_relinquish_cookie" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xfce8d1fc, "d_lookup" },
	{ 0x33c3d277, "rpc_restart_call_prepare" },
	{ 0xe66a47be, "remove_proc_subtree" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x1d724fbf, "__test_set_page_writeback" },
	{ 0xf36b350b, "rpc_wake_up_queued_task" },
	{ 0x21e07a4d, "I_BDEV" },
	{ 0xccf9ef6f, "rpc_pton" },
	{ 0x57ec259, "iter_file_splice_write" },
	{ 0xf6eb661e, "blockdev_superblock" },
	{ 0x72b6d245, "security_sb_clone_mnt_opts" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x23e606a9, "iput" },
	{ 0x6628d473, "finish_open" },
	{ 0x923a593d, "read_cache_page" },
	{ 0x97328b65, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x2232afdb, "generic_permission" },
	{ 0x87447f1e, "inode_dio_wait" },
	{ 0xc12615a6, "ihold" },
	{ 0x37e9b999, "unmap_mapping_range" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x69acdf38, "memcpy" },
	{ 0xead48a8b, "__sb_end_write" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x5180b0bf, "generic_error_remove_page" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0xc809e9e0, "wait_on_page_bit_killable" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0xf0033743, "invalidate_mapping_pages" },
	{ 0xdc91b8f2, "__sb_start_write" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x59d29599, "filemap_fdatawrite_range" },
	{ 0xfcb35011, "vfs_submount" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x4dd46f5b, "security_sb_set_mnt_opts" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcc0b1178, "xdr_inline_decode" },
	{ 0xc9c397fe, "filemap_map_pages" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6e3773d2, "rpc_clnt_show_stats" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x49a9dbff, "lookup_one_len" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x954355c9, "mnt_set_expiry" },
	{ 0xc4dbc0f7, "rpc_shutdown_client" },
	{ 0xf2e5bd87, "security_free_mnt_opts" },
	{ 0x102f99d3, "rpc_proc_register" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0xd14dc988, "grab_cache_page_write_begin" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdc5235bb, "__fscache_read_or_alloc_pages" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x9f7f625e, "__fscache_wait_on_invalidate" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x87f437d8, "xdr_set_scratch_buffer" },
	{ 0x3c185c61, "page_put_link" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1f5bdf9a, "d_alloc_parallel" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xea3c0a19, "file_check_and_advance_wb_err" },
	{ 0x4c029823, "clear_nlink" },
	{ 0x8056dbb2, "vfs_fsync_range" },
	{ 0xbcb28906, "__d_drop" },
	{ 0x131ceac8, "generic_fillattr" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4bcdf5c0, "noop_backing_dev_info" },
	{ 0xfaf93596, "__page_file_index" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x2afa0d59, "posix_test_lock" },
	{ 0x4fe8c9be, "super_setup_bdi_name" },
	{ 0x9980ad30, "generic_shutdown_super" },
	{ 0x39efd39c, "rpc_put_task" },
};

MODULE_INFO(depends, "fscache,sunrpc,lockd");


MODULE_INFO(srcversion, "7554E803804AF697207B90B");
