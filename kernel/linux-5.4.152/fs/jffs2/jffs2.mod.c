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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x3b8788a, "iget_failed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0xf100ca99, "mtd_point" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x53b954a2, "up_read" },
	{ 0xd1e7356e, "mtd_block_isbad" },
	{ 0x1962661a, "make_bad_inode" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x4551977, "dequeue_signal" },
	{ 0x72704326, "d_invalidate" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0x365fd502, "generic_fh_to_parent" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x275f43ba, "is_bad_inode" },
	{ 0xc3c3de5, "generic_file_open" },
	{ 0x15e2d504, "posix_acl_access_xattr_handler" },
	{ 0xe7e97240, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x17e50a0a, "d_instantiate_new" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x53bf8b09, "mtd_write" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x2b94f87d, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9d0c3ed, "posix_acl_chmod" },
	{ 0x9affeec9, "mtd_read" },
	{ 0xb39ad48b, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xeba488c2, "from_kgid" },
	{ 0x95f2ae09, "security_inode_init_security" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x1a70de86, "mtd_write_oob" },
	{ 0xd6ec21f4, "insert_inode_locked" },
	{ 0x7e589b16, "set_cached_acl" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x64e55052, "mtd_block_markbad" },
	{ 0xdd59b276, "posix_acl_create" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xc555d817, "file_write_and_wait_range" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xba24342a, "ilookup" },
	{ 0xa916b694, "strnlen" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf38c523d, "kill_mtd_super" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd47dbe02, "simple_get_link" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x6fc72bd3, "fs_parse" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x886d193f, "logfc" },
	{ 0x1e133a9d, "generic_file_readonly_mmap" },
	{ 0x118f972c, "mtd_unpoint" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x23e606a9, "iput" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x923a593d, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xc12615a6, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0x787c882b, "lzo1x_1_compress" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0xfd474e0a, "posix_acl_default_xattr_handler" },
	{ 0xca9360b5, "rb_next" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0xcaef8ead, "mtd_kmalloc_up_to" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x60ff9dc3, "get_tree_mtd" },
	{ 0x29361773, "complete" },
	{ 0x857b28ab, "mtd_writev" },
	{ 0x42a8e072, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x9639ad3b, "generic_fh_to_dentry" },
	{ 0xd14dc988, "grab_cache_page_write_begin" },
	{ 0x6390dbec, "mtd_read_oob" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x71dc307b, "__put_page" },
	{ 0x4c029823, "clear_nlink" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0xe914e41e, "strcpy" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "9313A5D4F5BFEB175D879F2");
