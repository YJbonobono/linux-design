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
	{ 0x2cb31b6a, "mei_cldev_driver_unregister" },
	{ 0x11853f, "__mei_cldev_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4993673a, "component_master_add_with_match" },
	{ 0x28e7e49c, "component_match_add_typed" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9a6314f6, "mei_cldev_enable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x14342502, "mei_cldev_recv" },
	{ 0x19fb8c1b, "mei_cldev_send" },
	{ 0x377c9043, "component_bind_all" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe1f89a0b, "component_unbind_all" },
	{ 0xa110af89, "mei_cldev_disable" },
	{ 0x61f9822a, "mei_cldev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x41c8dc97, "component_master_del" },
	{ 0xdf8a7f4a, "mei_cldev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:b638ab7e-94e2-4ea2-a552-d1c54b627f04:*:*");

MODULE_INFO(srcversion, "604EADB816C38ABA40B9C1C");
