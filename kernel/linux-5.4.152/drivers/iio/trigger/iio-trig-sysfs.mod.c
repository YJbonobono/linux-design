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
	{ 0x1a23b21c, "iio_bus_type" },
	{ 0x51ce92, "device_unregister" },
	{ 0x335e4ce6, "device_add" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x6b347276, "__module_get" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "E828613F92FEE907C98F600");
