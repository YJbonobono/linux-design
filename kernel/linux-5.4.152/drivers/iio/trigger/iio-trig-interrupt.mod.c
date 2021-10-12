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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "E884F791907F8E3D70DA65B");
