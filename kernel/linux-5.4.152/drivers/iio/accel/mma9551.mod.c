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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xacbe7b89, "mma9551_read_version" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0xe189f880, "mma9551_read_accel_chan" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x36fc27a3, "mma9551_read_status_byte" },
	{ 0x8495645f, "mma9551_gpio_config" },
	{ 0xeea8c4a5, "mma9551_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x149c7c8a, "mma9551_read_config_byte" },
	{ 0x2855bd5f, "mma9551_update_config_bits" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0xde39a9d9, "mma9551_set_device_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,mma9551_core");

MODULE_ALIAS("i2c:mma9551");
MODULE_ALIAS("acpi*:MMA9551:*");

MODULE_INFO(srcversion, "DF69C6D66B58D58E52A7B5B");
