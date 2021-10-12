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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x51e394bb, "iio_trigger_using_own" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x94372789, "pm_runtime_autosuspend_expiration" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "4FEBA882C862892BA7C1951");
