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
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x29361773, "complete" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:adc12130");
MODULE_ALIAS("spi:adc12132");
MODULE_ALIAS("spi:adc12138");

MODULE_INFO(srcversion, "84FD1BC6134433A000D6E5B");
