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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x807799e, "generic_delete_inode" },
	{ 0xb177d101, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x2ad2af29, "block_read_full_page" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6006847, "current_task" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x425956b, "set_nlink" },
	{ 0xc72e906d, "sync_dirty_buffer" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xb56ea999, "__brelse" },
	{ 0x770771ff, "inode_init_once" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0x925e0252, "block_write_full_page" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5189d463, "generic_write_end" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x89b687f, "cont_write_begin" },
	{ 0xbabb6493, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0xdc6df216, "mark_buffer_dirty" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x42a8e072, "new_inode" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0xf232ac44, "setattr_prepare" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D9C3DDBDD875653F51F3C7E");
