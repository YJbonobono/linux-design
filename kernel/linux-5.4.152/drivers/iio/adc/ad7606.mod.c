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
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x10a4894b, "devm_gpiod_get_array_optional" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8dd434ce, "iio_trigger_validate_own_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x29361773, "complete" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc0f53de7, "gpiod_set_array_value" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "48342A4841B6A9835BFD131");
