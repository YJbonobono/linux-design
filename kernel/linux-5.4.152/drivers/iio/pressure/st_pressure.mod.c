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
	{ 0x73a92031, "st_sensors_set_dataready_irq" },
	{ 0xa9a2191b, "st_sensors_power_enable" },
	{ 0xd6ce0b5c, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc2e6f044, "st_sensors_deallocate_trigger" },
	{ 0xe88bb16b, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0x4a29be7, "st_sensors_allocate_trigger" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x28d685da, "st_sensors_validate_device" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0xfe397c03, "st_sensors_power_disable" },
	{ 0xaf78ff1c, "st_sensors_init_sensor" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4d882610, "st_sensors_debugfs_reg_access" },
	{ 0x294ff2d5, "st_sensors_get_settings_index" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0a9a94c, "st_sensors_set_odr" },
	{ 0x542874c, "st_sensors_verify_id" },
	{ 0xf8d9b474, "st_sensors_read_info_raw" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,st_sensors,industrialio");


MODULE_INFO(srcversion, "F7E30F2AE67F0B3B5292EBC");
