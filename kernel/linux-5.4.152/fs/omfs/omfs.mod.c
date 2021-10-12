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
	{ 0x3b8788a, "iget_failed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1962661a, "make_bad_inode" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x855bf0f0, "block_write_begin" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb177d101, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x2ad2af29, "block_read_full_page" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0x904f372d, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6006847, "current_task" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb766fd94, "mpage_writepages" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x52506422, "setattr_copy" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xc72e906d, "sync_dirty_buffer" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xb56ea999, "__brelse" },
	{ 0xa916b694, "strnlen" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0x925e0252, "block_write_full_page" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5189d463, "generic_write_end" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2028c76, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x23e606a9, "iput" },
	{ 0xbabb6493, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xdc6df216, "mark_buffer_dirty" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x42a8e072, "new_inode" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0x4c029823, "clear_nlink" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0x5d084a0b, "inode_init_owner" },
};

MODULE_INFO(depends, "crc-itu-t");


MODULE_INFO(srcversion, "C24FEBAB97DD9FFB830CD4C");
