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
	{ 0x2d3385d3, "system_wq" },
	{ 0x598afda2, "hid_sensor_batch_mode_supported" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0x5e5ce8ed, "sensor_hub_get_feature" },
	{ 0x3a40c53f, "sensor_hub_device_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x19a7413f, "hid_sensor_read_poll_value" },
	{ 0xa620df52, "sensor_hub_device_close" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf04c8e7f, "hid_sensor_get_usage_index" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x767e5feb, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x1063b5b5, "iio_buffer_set_attrs" },
	{ 0xef4fc1a1, "hid_sensor_set_report_latency" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1e5b53e8, "hid_sensor_get_report_latency" },
};

MODULE_INFO(depends, "hid-sensor-iio-common,industrialio,hid-sensor-hub");


MODULE_INFO(srcversion, "4AFA9D771A29970676E7FF4");
