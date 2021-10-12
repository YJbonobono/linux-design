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
	{ 0x97fcc7f9, "hid_sensor_pm_ops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x159cc9b6, "sensor_hub_register_callback" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x7415f584, "hid_sensor_setup_trigger" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x7f7621ec, "hid_sensor_format_scale" },
	{ 0x9a16a31e, "sensor_hub_input_get_attribute_info" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3943cf18, "hid_sensor_parse_common_attributes" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x21b3305a, "sensor_hub_input_attr_get_raw_value" },
	{ 0x7df660c0, "hid_sensor_power_state" },
	{ 0xd0e5de05, "hid_sensor_read_samp_freq_value" },
	{ 0x4235a29a, "hid_sensor_read_raw_hyst_value" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4a0e463, "hid_sensor_write_samp_freq_value" },
	{ 0xd4eb9170, "hid_sensor_write_raw_hyst_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x3ec4ec3d, "hid_sensor_remove_trigger" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x562b46b0, "sensor_hub_remove_callback" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-trigger,hid-sensor-hub,industrialio,industrialio-triggered-buffer,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-200041");

MODULE_INFO(srcversion, "16E7D561437318BCC56BD21");
