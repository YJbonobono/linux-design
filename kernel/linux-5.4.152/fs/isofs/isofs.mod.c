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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x3b8788a, "iget_failed" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6a4e640, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc2362304, "iget5_locked" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x39c3a2ee, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x1d68837c, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xb177d101, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x777d43a5, "page_symlink_inode_operations" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xd287299c, "__getblk_gfp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x904f372d, "mpage_readpages" },
	{ 0xb4119302, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6006847, "current_task" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xb39ad48b, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x425956b, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x34f2bd25, "__wait_on_buffer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4c85aee1, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xb56ea999, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x18b2697a, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb58b489a, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x23e606a9, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x4a942e77, "ioctl_by_bdev" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x71dc307b, "__put_page" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "13942283618F61B3CB5144F");
