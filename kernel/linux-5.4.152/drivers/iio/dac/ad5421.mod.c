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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "270C001A5C0789C2BBC8964");
