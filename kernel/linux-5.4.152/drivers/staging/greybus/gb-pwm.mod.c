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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9c30bd95, "gb_gbphy_register_driver" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x8bfe857e, "pwmchip_remove" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xfbe8a140, "gb_gbphy_deregister_driver" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x119d2abe, "pwmchip_add" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "22334B503E3282D0160633A");
