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
	{ 0x87b8798d, "sg_next" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbc954, "intel_th_msu_buffer_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x6778a849, "intel_th_msu_buffer_unregister" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x4dfd19c4, "intel_th_msc_window_unlock" },
};

MODULE_INFO(depends, "intel_th_msu");


MODULE_INFO(srcversion, "B139D1A16A7ADA72A9BCEFB");
