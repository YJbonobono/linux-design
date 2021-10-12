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
	{ 0x66d230ae, "param_ops_string" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xf340f416, "deregister_mtd_blktrans" },
	{ 0x5adf15ce, "register_mtd_blktrans" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xa68bcdfb, "add_mtd_blktrans_dev" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xd1e7356e, "mtd_block_isbad" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9abab5df, "mtd_blktrans_cease_background" },
	{ 0x53bf8b09, "mtd_write" },
	{ 0x6390dbec, "mtd_read_oob" },
	{ 0xfb578fc5, "memset" },
	{ 0xece784c2, "rb_first" },
	{ 0x9affeec9, "mtd_read" },
	{ 0x1a70de86, "mtd_write_oob" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x760a0f4f, "yield" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b94f87d, "mtd_erase" },
	{ 0x64e55052, "mtd_block_markbad" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x87a67f49, "single_open" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x26634b72, "del_mtd_blktrans_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "55E2920964B9B27CB84736E");
