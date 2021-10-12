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
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0x354ea44, "iio_buffer_init" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf5f515cb, "devres_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x9d9b10aa, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "871F3FA78BEF416AEE28AE8");
