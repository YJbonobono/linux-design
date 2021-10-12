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
	{ 0x7b3e315b, "serio_unregister_driver" },
	{ 0xfe603e90, "__serio_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf8c679e2, "input_event" },
	{ 0xc5850110, "printk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc500f45a, "serio_open" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x64b0469f, "serio_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr08id*ex*");

MODULE_INFO(srcversion, "71D2DD2AB2F935C9A6C1020");
