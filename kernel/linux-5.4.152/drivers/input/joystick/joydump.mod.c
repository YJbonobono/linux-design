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
	{ 0x8f8867ab, "gameport_unregister_driver" },
	{ 0xcb23d352, "__gameport_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x903b919f, "gameport_open" },
	{ 0xc5850110, "printk" },
	{ 0x716cba27, "gameport_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "4CE059F4F1C795913010AF0");
