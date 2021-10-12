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
	{ 0x5afa1383, "iio_enum_available_read" },
	{ 0x2178290e, "iio_enum_write" },
	{ 0x31aad9b7, "iio_enum_read" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xe189f880, "mma9551_read_accel_chan" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0x74290751, "mma9551_read_status_word" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x82a10d75, "mma9551_write_config_words" },
	{ 0xc1abd332, "mma9551_app_reset" },
	{ 0x3002a5a4, "mma9551_read_config_words" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xacbe7b89, "mma9551_read_version" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x8495645f, "mma9551_gpio_config" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x9f673127, "mma9551_read_status_words" },
	{ 0xeea8c4a5, "mma9551_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36b9ff66, "mma9551_read_config_word" },
	{ 0xfe60365a, "mma9551_write_config_word" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0xde39a9d9, "mma9551_set_device_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,mma9551_core");

MODULE_ALIAS("i2c:mma9553");
MODULE_ALIAS("acpi*:MMA9553:*");

MODULE_INFO(srcversion, "95F24BB36AD7146CA405A25");
