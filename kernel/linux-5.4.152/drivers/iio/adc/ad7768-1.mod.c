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
	{ 0x8dd434ce, "iio_trigger_validate_own_device" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b347276, "__module_get" },
	{ 0x3750a460, "get_device" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x96848186, "scnprintf" },
	{ 0x29361773, "complete" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cadi,ad7768-1");
MODULE_ALIAS("of:N*T*Cadi,ad7768-1C*");
MODULE_ALIAS("spi:ad7768-1");

MODULE_INFO(srcversion, "187CE2E6F7C0898BABF908A");
