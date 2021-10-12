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
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x81d3a650, "iio_read_mount_matrix" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbec2fb57, "iio_show_mount_matrix" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "3789A73A8956846C55D449A");
