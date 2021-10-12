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
	{ 0xf340f416, "deregister_mtd_blktrans" },
	{ 0x5adf15ce, "register_mtd_blktrans" },
	{ 0x9affeec9, "mtd_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53bf8b09, "mtd_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xa68bcdfb, "add_mtd_blktrans_dev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x26634b72, "del_mtd_blktrans_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "2DCF772C4F5112B976A05F0");
