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
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd0b081d6, "devm_regmap_field_alloc" },
	{ 0xe7612615, "regmap_field_read" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7bc9f415, "regmap_field_update_bits_base" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "2943E2A842139EADFBDBF29");
