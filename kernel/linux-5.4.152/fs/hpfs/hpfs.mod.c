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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x1962661a, "make_bad_inode" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb177d101, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x777d43a5, "page_symlink_inode_operations" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0xd287299c, "__getblk_gfp" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0x904f372d, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0xb4119302, "mpage_readpage" },
	{ 0x6006847, "current_task" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0xb766fd94, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xeba488c2, "from_kgid" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x34f2bd25, "__wait_on_buffer" },
	{ 0x52506422, "setattr_copy" },
	{ 0xc72e906d, "sync_dirty_buffer" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xb56ea999, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xc555d817, "file_write_and_wait_range" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x368d7d14, "generic_block_fiemap" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0x925e0252, "block_write_full_page" },
	{ 0x2da32b75, "sync_blockdev" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5189d463, "generic_write_end" },
	{ 0xb0f93065, "__breadahead" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2028c76, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x23e606a9, "iput" },
	{ 0x89b687f, "cont_write_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x30186494, "__find_get_block" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xdc6df216, "mark_buffer_dirty" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x42a8e072, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0x4c029823, "clear_nlink" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6894275D7F956A98B4A6CAB");
