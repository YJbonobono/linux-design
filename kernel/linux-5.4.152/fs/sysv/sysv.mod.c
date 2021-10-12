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
	{ 0x3b8788a, "iget_failed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6512816f, "drop_nlink" },
	{ 0xc79a390a, "mark_buffer_dirty_inode" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x2d829b1, "__mark_inode_dirty" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x855bf0f0, "block_write_begin" },
	{ 0x39c3a2ee, "pagecache_get_page" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x66c9a3b6, "__lock_page" },
	{ 0x22257d99, "__lock_buffer" },
	{ 0x589bfe31, "inc_nlink" },
	{ 0x2ad2af29, "block_read_full_page" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0xd287299c, "__getblk_gfp" },
	{ 0x22a76a4c, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5c2cb524, "truncate_setsize" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0xfb578fc5, "memset" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeba488c2, "from_kgid" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x425956b, "set_nlink" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x52506422, "setattr_copy" },
	{ 0x33ab50e9, "page_symlink" },
	{ 0xc72e906d, "sync_dirty_buffer" },
	{ 0xec0188f0, "truncate_pagecache" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xb56ea999, "__brelse" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfd57e0bd, "invalidate_inode_buffers" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0x925e0252, "block_write_full_page" },
	{ 0x9bd57f6b, "block_write_end" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5189d463, "generic_write_end" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2028c76, "inode_newsize_ok" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x1893b59f, "generic_file_write_iter" },
	{ 0x23e606a9, "iput" },
	{ 0x923a593d, "read_cache_page" },
	{ 0xbabb6493, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a86ab41, "page_get_link" },
	{ 0xc12615a6, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0xcfdc5c1d, "block_truncate_page" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x7d41e117, "__bforget" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x92f3694c, "__block_write_begin" },
	{ 0xdc6df216, "mark_buffer_dirty" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0xd0bb6a6b, "write_one_page" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x42a8e072, "new_inode" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0x71dc307b, "__put_page" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0xf232ac44, "setattr_prepare" },
	{ 0x131ceac8, "generic_fillattr" },
	{ 0x5d084a0b, "inode_init_owner" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xdf929370, "fs_overflowgid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B91687765C98A6D100185C5");
