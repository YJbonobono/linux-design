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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf100ca99, "mtd_point" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x70a9708a, "vmf_insert_mixed" },
	{ 0xad8b0f6e, "get_tree_bdev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x777d43a5, "page_symlink_inode_operations" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4c85aee1, "generic_ro_fops" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xf22de3fd, "wait_on_page_bit" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xd5903255, "generic_file_read_iter" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf38c523d, "kill_mtd_super" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x886d193f, "logfc" },
	{ 0x1e133a9d, "generic_file_readonly_mmap" },
	{ 0x118f972c, "mtd_unpoint" },
	{ 0x923a593d, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x60ff9dc3, "get_tree_mtd" },
	{ 0x28c41657, "generic_file_splice_read" },
	{ 0x71dc307b, "__put_page" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "B70DDCA38FD0722D56ABA8B");
