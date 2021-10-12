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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcbe3e2b, "iio_channel_release_all" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0x354ea44, "iio_buffer_init" },
	{ 0xe6c648ce, "iio_update_buffers" },
	{ 0xf5f515cb, "devres_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3a1ff13c, "iio_channel_get_all" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d9b10aa, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "FDADE3D25FB1900198AE832");
