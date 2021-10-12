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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "86CB5C24FDE76A5A2A41AD0");
