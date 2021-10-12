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
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0x5afa1383, "iio_enum_available_read" },
	{ 0x2178290e, "iio_enum_write" },
	{ 0x31aad9b7, "iio_enum_read" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad5504");
MODULE_ALIAS("spi:ad5501");

MODULE_INFO(srcversion, "E15ACA1AA7C4B50030674DE");
