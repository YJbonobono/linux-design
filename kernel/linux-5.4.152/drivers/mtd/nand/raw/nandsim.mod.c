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
	{ 0x430143ad, "param_ops_byte" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x41509bb8, "mtd_device_parse_register" },
	{ 0x64e55052, "mtd_block_markbad" },
	{ 0xfa97a46e, "nand_create_bbt" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7bd2c122, "filp_open" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe997d403, "nand_release" },
	{ 0xc1e34ea0, "nand_scan_with_ids" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x257d4615, "kernel_write" },
	{ 0xc78529be, "kernel_read" },
	{ 0x6006847, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x6ff2122, "write_inode_now" },
	{ 0x537f7b31, "unlock_page" },
	{ 0x39c3a2ee, "pagecache_get_page" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xc35aa4ba, "filp_close" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,nand");


MODULE_INFO(srcversion, "818BB99526E015E0E3110A7");
