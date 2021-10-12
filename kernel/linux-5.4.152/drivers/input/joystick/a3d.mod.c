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
	{ 0xc5850110, "printk" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x5b5b223, "__gameport_register_port" },
	{ 0x943487ca, "gameport_set_phys" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x903b919f, "gameport_open" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c679e2, "input_event" },
	{ 0x76431c45, "gameport_start_polling" },
	{ 0x6d45f081, "gameport_stop_polling" },
	{ 0x37a0cba, "kfree" },
	{ 0x716cba27, "gameport_close" },
	{ 0xf2081e5a, "gameport_unregister_port" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "82536951FD32739DB393461");
