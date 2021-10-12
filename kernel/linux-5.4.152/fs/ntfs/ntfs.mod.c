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
	{ 0x6a4e640, "sb_min_blocksize" },
	{ 0x53b954a2, "up_read" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0x1962661a, "make_bad_inode" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc2362304, "iget5_locked" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x365fd502, "generic_fh_to_parent" },
	{ 0x1f38af11, "block_is_partially_uptodate" },
	{ 0x275f43ba, "is_bad_inode" },
	{ 0x39c3a2ee, "pagecache_get_page" },
	{ 0xc3c3de5, "generic_file_open" },
	{ 0x66c9a3b6, "__lock_page" },
	{ 0x22257d99, "__lock_buffer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb177d101, "seq_printf" },
	{ 0x6ace695f, "buffer_migrate_page" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x70d701b9, "d_add" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xd287299c, "__getblk_gfp" },
	{ 0x3504cdf1, "igrab" },
	{ 0x22a76a4c, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x82016237, "__insert_inode_hash" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x93476009, "d_add_ci" },
	{ 0x6006847, "current_task" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xb39ad48b, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x425956b, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x34f2bd25, "__wait_on_buffer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xc72e906d, "sync_dirty_buffer" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xb56ea999, "__brelse" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x676334ea, "generic_file_mmap" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0xc6888be9, "create_empty_buffers" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xb58b489a, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xd1cc92c3, "submit_bh" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x23e606a9, "iput" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x923a593d, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xc12615a6, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x962f4536, "load_nls_default" },
	{ 0x5180b0bf, "generic_error_remove_page" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x9c38db21, "end_buffer_read_sync" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xdc6df216, "mark_buffer_dirty" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x42a8e072, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x9639ad3b, "generic_fh_to_dentry" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85AB47266579179E0C8D4F7");
