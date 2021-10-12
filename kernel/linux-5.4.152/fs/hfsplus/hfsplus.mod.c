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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0x3b8788a, "iget_failed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x6a4e640, "sb_min_blocksize" },
	{ 0xca33cc1a, "submit_bio_wait" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x8962d1a6, "seq_escape" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xcd777941, "blkdev_issue_flush" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x9808f3ae, "filemap_write_and_wait" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x23f7d6b9, "dput" },
	{ 0xb177d101, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x2ad2af29, "block_read_full_page" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x777d43a5, "page_symlink_inode_operations" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc87d5c7d, "set_page_dirty" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0x111eb445, "inode_owner_or_capable" },
	{ 0xfb578fc5, "memset" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0x24f83cd4, "inode_add_bytes" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb766fd94, "mpage_writepages" },
	{ 0x31eb008f, "blkdev_issue_zeroout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xeba488c2, "from_kgid" },
	{ 0x1208a414, "seq_putc" },
	{ 0x95f2ae09, "security_inode_init_security" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x52506422, "setattr_copy" },
	{ 0x33ab50e9, "page_symlink" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x71124846, "vfs_ioc_setflags_prepare" },
	{ 0x4e3567f7, "match_int" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4122186, "bio_put" },
	{ 0xaa3b63e6, "mark_page_accessed" },
	{ 0xc555d817, "file_write_and_wait_range" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa75114ac, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0xee205836, "pagecache_write_end" },
	{ 0x925e0252, "block_write_full_page" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xde5434bb, "try_to_free_buffers" },
	{ 0xde5b054e, "generic_cont_expand_simple" },
	{ 0xb58b489a, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x5189d463, "generic_write_end" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0xff84f30d, "mnt_want_write_file" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x9af0e9ef, "inode_set_bytes" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc68c10be, "sync_inode_metadata" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x23e606a9, "iput" },
	{ 0x89b687f, "cont_write_begin" },
	{ 0x923a593d, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x87447f1e, "inode_dio_wait" },
	{ 0xc12615a6, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x962f4536, "load_nls_default" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x68ccf3e, "__blockdev_direct_IO" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7e300384, "inode_set_flags" },
	{ 0x4a942e77, "ioctl_by_bdev" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x42a8e072, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0xb3c90bbd, "pagecache_write_begin" },
	{ 0x71dc307b, "__put_page" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0x4c029823, "clear_nlink" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0x131ceac8, "generic_fillattr" },
	{ 0x5d084a0b, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "91AD428875335DD2CE0B69A");
