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
	{ 0x6a5fa363, "sigprocmask" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8b0e8948, "__fscache_acquire_cookie" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x3b8788a, "iget_failed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xd39fe2eb, "set_anon_super" },
	{ 0x80d98361, "iov_iter_npages" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x15c387a5, "iterate_supers_type" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x1f680c61, "__fscache_wait_on_page_write" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x72704326, "d_invalidate" },
	{ 0xf2364f1c, "__set_page_dirty_nobuffers" },
	{ 0xdb3b9bb6, "key_invalidate" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0xf6fe70e2, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x87a67f49, "single_open" },
	{ 0x37e0db3, "mntget" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc7a5e0f2, "generic_write_checks" },
	{ 0x320fbc9a, "iov_iter_revert" },
	{ 0xa123a51, "bpf_trace_run7" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0xb5681bb6, "locks_delete_block" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc29bf967, "strspn" },
	{ 0x313ba90b, "__generic_file_write_iter" },
	{ 0xc2362304, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x50948280, "prepare_kernel_cred" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x1d0c5c24, "iov_iter_get_pages_alloc" },
	{ 0x919d12af, "kill_anon_super" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0x8962d1a6, "seq_escape" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x39c3a2ee, "pagecache_get_page" },
	{ 0x168f64f8, "truncate_inode_pages_range" },
	{ 0xc3c3de5, "generic_file_open" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x64aff8b2, "sock_release" },
	{ 0x66c9a3b6, "__lock_page" },
	{ 0xe0548c5a, "lookup_one_len_unlocked" },
	{ 0x9808f3ae, "filemap_write_and_wait" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x48a4a1d4, "touch_atime" },
	{ 0x7092be58, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x23f7d6b9, "dput" },
	{ 0x202b6156, "sock_recvmsg" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2e6a2148, "__fscache_write_page" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0xd642b00f, "invalidate_inode_pages2" },
	{ 0x4bdabf0a, "request_key_tag" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9c8f4b1b, "filemap_fdatawait_range" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd75ca577, "__fscache_register_netfs" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ec78bdd, "rename_lock" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x70d701b9, "d_add" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xd2b39846, "super_setup_bdi" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x85574852, "redirty_page_for_writepage" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x596c50d1, "__put_net" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x894ed320, "override_creds" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x663df432, "__fscache_uncache_page" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0xf00790fb, "copy_page_from_iter" },
	{ 0xc87d5c7d, "set_page_dirty" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4841bdee, "strnchr" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0xf4393483, "lru_cache_add_file" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x8848c1e8, "end_page_writeback" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0xece784c2, "rb_first" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9c23d3bb, "key_revoke" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0x1862c060, "iov_iter_bvec" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0xe4377217, "__fscache_read_or_alloc_page" },
	{ 0x4c599e7f, "__fscache_uncache_all_inode_pages" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x105b595, "des_encrypt" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8a518e5b, "finish_no_open" },
	{ 0x6006847, "current_task" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbcfc07e6, "copy_page_to_iter" },
	{ 0x9e08118e, "file_modified" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xea916907, "iov_iter_get_pages" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x6c62f5a7, "sock_sendmsg" },
	{ 0x696b6957, "generic_writepages" },
	{ 0xf3063b8d, "sget" },
	{ 0x5e71d44b, "timespec64_trunc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x1d7d6c62, "__fscache_maybe_release_page" },
	{ 0xeba488c2, "from_kgid" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x1208a414, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x52506422, "setattr_copy" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x9f192829, "wait_on_page_writeback" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xdd5a9f5e, "unlock_two_nondirectories" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0xe9c81f27, "init_uts_ns" },
	{ 0x8e9b5148, "user_describe" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x7b791c26, "kmem_cache_create_usercopy" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2aa0843e, "mempool_resize" },
	{ 0xdcb2dc92, "key_type_logon" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x8feff2f3, "crypto_req_done" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0x2e34de37, "find_get_pages_range_tag" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x75e60613, "key_put" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xd84a2dc8, "dns_query" },
	{ 0xdbff6629, "__fscache_unregister_netfs" },
	{ 0x61651be, "strcat" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xc555d817, "file_write_and_wait_range" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xa75114ac, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0xb5f4ce31, "simple_dir_operations" },
	{ 0xa5b339a1, "__filemap_set_wb_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd5416356, "generic_setlease" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xb58b489a, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x1953c958, "mempool_create" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x78fe7e60, "__d_lookup_done" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0xff84f30d, "mnt_want_write_file" },
	{ 0x9db4ac04, "deactivate_super" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x575a8329, "d_drop" },
	{ 0xf8aa49e9, "lock_two_nondirectories" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x1d0ee33d, "locks_lock_inode_wait" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x7974e61a, "__module_put_and_exit" },
	{ 0x130b568, "wake_up_process" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x72b89024, "vfs_setpos" },
	{ 0x6ef064cc, "keyring_alloc" },
	{ 0xb594e05f, "clear_page_dirty_for_io" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x75a80a33, "__fscache_relinquish_cookie" },
	{ 0x6b347276, "__module_get" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0xdc6477f7, "add_to_page_cache_locked" },
	{ 0xee912a02, "d_hash_and_lookup" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x1d724fbf, "__test_set_page_writeback" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0x57ec259, "iter_file_splice_write" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x23e606a9, "iput" },
	{ 0x6628d473, "finish_open" },
	{ 0x564dc1cc, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x75d8cfbc, "__fscache_readpages_cancel" },
	{ 0x34bd3cf, "iunique" },
	{ 0x34af4a72, "truncate_pagecache_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2232afdb, "generic_permission" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x962f4536, "load_nls_default" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x6b8208a9, "__put_task_struct" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x7a4497db, "kzfree" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0xfcb35011, "vfs_submount" },
	{ 0xa63a07c, "bpf_trace_run6" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xc9c397fe, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e78d1ad, "fiemap_check_flags" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x67ef21a2, "__break_lease" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x51463ae5, "proc_create" },
	{ 0x954355c9, "mnt_set_expiry" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd14dc988, "grab_cache_page_write_begin" },
	{ 0xdc5235bb, "__fscache_read_or_alloc_pages" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc228129e, "revert_creds" },
	{ 0x1f5bdf9a, "d_alloc_parallel" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0xe978992c, "__sock_create" },
	{ 0x4c029823, "clear_nlink" },
	{ 0x8056dbb2, "vfs_fsync_range" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0x131ceac8, "generic_fillattr" },
	{ 0x7ec13deb, "filemap_fdatawrite" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe4070659, "generic_copy_file_range" },
	{ 0x484f6edf, "ktime_get_coarse_real_ts64" },
	{ 0x44ddd799, "truncate_inode_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x2afa0d59, "posix_test_lock" },
};

MODULE_INFO(depends, "fscache,libdes,libarc4");


MODULE_INFO(srcversion, "7396CCF01C6FA24CA64E823");
