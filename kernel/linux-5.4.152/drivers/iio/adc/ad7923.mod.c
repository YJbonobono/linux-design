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
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7904");
MODULE_ALIAS("spi:ad7914");
MODULE_ALIAS("spi:ad7923");
MODULE_ALIAS("spi:ad7924");

MODULE_INFO(srcversion, "A6E946CF705DADE24ABB93D");
