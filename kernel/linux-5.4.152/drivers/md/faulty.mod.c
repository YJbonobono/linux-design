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
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f7fe076, "unregister_md_personality" },
	{ 0x992c17e9, "bio_clone_fast" },
	{ 0xaa71e4c3, "disk_stack_limits" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x4122186, "bio_put" },
	{ 0x7302df31, "md_set_array_sectors" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6353f69c, "md_check_no_bitmap" },
	{ 0xbd74d856, "register_md_personality" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F95D2C120715FC3BE34CFD");
