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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeddddc33, "dm_get_device" },
	{ 0x54fa2920, "dm_io" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x999e8297, "vfree" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xaa4b4d90, "dm_put_device" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4C3C188A854285CDBE23BA6");
