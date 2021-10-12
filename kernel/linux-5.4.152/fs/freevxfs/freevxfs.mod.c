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
	{ 0x6a4e640, "sb_min_blocksize" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2ad2af29, "block_read_full_page" },
	{ 0xbee38071, "mount_bdev" },
	{ 0x777d43a5, "page_symlink_inode_operations" },
	{ 0x4f55bfb3, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xaa838af5, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x425956b, "set_nlink" },
	{ 0x7b791c26, "kmem_cache_create_usercopy" },
	{ 0x4c85aee1, "generic_ro_fops" },
	{ 0x7a948e69, "simple_symlink_inode_operations" },
	{ 0x537f7b31, "unlock_page" },
	{ 0xbf6fb058, "inode_nohighmem" },
	{ 0xb56ea999, "__brelse" },
	{ 0x770771ff, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xf715046b, "truncate_inode_pages_final" },
	{ 0x18b2697a, "make_kuid" },
	{ 0x24cedf52, "unlock_new_inode" },
	{ 0x65db5f7, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x23e606a9, "iput" },
	{ 0x923a593d, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x391fa9d8, "d_splice_alias" },
	{ 0x387247fd, "sync_filesystem" },
	{ 0x43a93a0, "sb_set_blocksize" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9922ca61, "init_special_inode" },
	{ 0x42a8e072, "new_inode" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x71dc307b, "__put_page" },
	{ 0x910ccf75, "generic_block_bmap" },
	{ 0xe59ffd0c, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0692DB6D9E0CCB54D2F575");
