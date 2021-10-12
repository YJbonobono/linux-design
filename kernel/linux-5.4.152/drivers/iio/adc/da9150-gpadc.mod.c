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
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xa4b53f23, "iio_map_array_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x29361773, "complete" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2494eaae, "da9150_bulk_read" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xe7cb3255, "da9150_reg_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x456150cf, "iio_map_array_unregister" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,da9150-core");


MODULE_INFO(srcversion, "D8A5B5E252DE3268BC6304F");
