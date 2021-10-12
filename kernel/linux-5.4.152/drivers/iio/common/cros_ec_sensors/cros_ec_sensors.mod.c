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
	{ 0x6e18f817, "cros_ec_sensors_core_read_avail" },
	{ 0x80e1be7f, "cros_ec_sensors_pm_ops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe59cefd1, "cros_ec_sensors_core_read" },
	{ 0xe1688e64, "cros_ec_motion_send_host_cmd" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xca5c0aaf, "cros_ec_sensors_core_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0x9971dac4, "cros_ec_sensors_capture" },
	{ 0x7d54cce5, "cros_ec_sensors_read_lpc" },
	{ 0xfb255cdf, "cros_ec_sensors_read_cmd" },
	{ 0xc1a93865, "cros_ec_sensors_ext_info" },
	{ 0x710544d, "cros_ec_sensors_core_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec_sensors_core,industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("platform:cros-ec-accel");
MODULE_ALIAS("platform:cros-ec-gyro");
MODULE_ALIAS("platform:cros-ec-mag");

MODULE_INFO(srcversion, "EB40D3F4AE31E1FD7AA49FB");
