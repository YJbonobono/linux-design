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
	{ 0x7e6ed27, "get_acl" },
	{ 0x8b0ff7f0, "vfs_create" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0xceab0311, "strchrnul" },
	{ 0x72704326, "d_invalidate" },
	{ 0x349cba85, "strchr" },
	{ 0x9b56afe2, "inode_permission" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x47709e42, "free_anon_bdev" },
	{ 0xc2362304, "iget5_locked" },
	{ 0x919d12af, "kill_anon_super" },
	{ 0x118a6fbe, "dget_parent" },
	{ 0x2665db8c, "posix_acl_to_xattr" },
	{ 0x9ff4299c, "vfs_link" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x87fa361e, "vfs_tmpfile" },
	{ 0x8962d1a6, "seq_escape" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x3ea541b1, "vfs_llseek" },
	{ 0xe0548c5a, "lookup_one_len_unlocked" },
	{ 0x78dc3754, "vfs_clone_file_range" },
	{ 0x9808f3ae, "filemap_write_and_wait" },
	{ 0x48a4a1d4, "touch_atime" },
	{ 0x807799e, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x5451b572, "take_dentry_name_snapshot" },
	{ 0x23f7d6b9, "dput" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x77b429c, "dentry_open" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x7d1d842b, "vfs_mknod" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce544cea, "vfs_fsync" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x3504cdf1, "igrab" },
	{ 0x70cbad58, "vfs_symlink" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xe4c5d00d, "noop_direct_IO" },
	{ 0x78704039, "mount_nodev" },
	{ 0x8ccd38e9, "security_dentry_create_files_as" },
	{ 0x894ed320, "override_creds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd7c05bf6, "mnt_drop_write" },
	{ 0x7e494363, "security_inode_copy_up" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6f11d922, "vfs_rmdir" },
	{ 0x4e7e2acd, "unlock_rename" },
	{ 0x4568a1e2, "open_with_fake_path" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0x111eb445, "inode_owner_or_capable" },
	{ 0x2eba0f5e, "vfs_iter_write" },
	{ 0xabebbde2, "vfs_fadvise" },
	{ 0x76106cb6, "kern_path" },
	{ 0x2d994605, "security_inode_copy_up_xattr" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf3a57892, "release_dentry_name_snapshot" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcb0a3360, "file_remove_privs" },
	{ 0x6fffa1b5, "vfs_getxattr" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x1208a414, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x4fcd680c, "lock_rename" },
	{ 0x425956b, "set_nlink" },
	{ 0x283e5d4a, "vfs_whiteout" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb84554f9, "exportfs_encode_fh" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0x5edb9016, "vfs_get_link" },
	{ 0xdd59b276, "posix_acl_create" },
	{ 0x611bf0f1, "prepare_creds" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x575e7f0e, "ilookup5" },
	{ 0x61651be, "strcat" },
	{ 0x770771ff, "inode_init_once" },
	{ 0xb2d70012, "mntput" },
	{ 0xa75114ac, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe77f7a02, "do_clone_file_range" },
	{ 0xb96855ae, "capable_wrt_inode_uidgid" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x6a6bebcb, "mnt_want_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x82d07ae7, "posix_acl_from_xattr" },
	{ 0x22422888, "vfs_fallocate" },
	{ 0xb10761cc, "vfs_iter_read" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0xff84f30d, "mnt_want_write_file" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xa4ca2e33, "exportfs_decode_fh" },
	{ 0x575a8329, "d_drop" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe7a4a9ba, "vfs_statfs" },
	{ 0xdb51b81f, "vfs_mkdir" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x72b89024, "vfs_setpos" },
	{ 0xb7907991, "vfs_copy_file_range" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1742734a, "path_put" },
	{ 0x859508d8, "ns_capable_noaudit" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6d3e1645, "vfs_unlink" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x6206703a, "do_splice_direct" },
	{ 0x57ec259, "iter_file_splice_write" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x23e606a9, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x2232afdb, "generic_permission" },
	{ 0xfc31972b, "d_find_any_alias" },
	{ 0xc12615a6, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xead48a8b, "__sb_end_write" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0xdc91b8f2, "__sb_start_write" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x2aa01812, "is_subdir" },
	{ 0x7e300384, "inode_set_flags" },
	{ 0x2b41589a, "d_instantiate_anon" },
	{ 0x16bfa5cc, "iterate_dir" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42a8e072, "new_inode" },
	{ 0x6b121919, "inode_insert5" },
	{ 0xb0e602eb, "memmove" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x49a9dbff, "lookup_one_len" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x371e755b, "clone_private_mount" },
	{ 0x391101d0, "vfs_ioctl" },
	{ 0x4f950c6d, "vfs_rename" },
	{ 0x1517bb37, "vfs_getattr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xde1ea1cc, "d_alloc_anon" },
	{ 0xa1818fa6, "notify_change" },
	{ 0xff4910ec, "vfs_setxattr" },
	{ 0x326a0a4c, "vfs_dedupe_file_range_one" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0xc228129e, "revert_creds" },
	{ 0xb65d0bed, "vfs_listxattr" },
	{ 0x4c029823, "clear_nlink" },
	{ 0x80ceb3de, "vfs_removexattr" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0x8056dbb2, "vfs_fsync_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x5d084a0b, "inode_init_owner" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2EBBC11AEEF918764E9C1A2");
