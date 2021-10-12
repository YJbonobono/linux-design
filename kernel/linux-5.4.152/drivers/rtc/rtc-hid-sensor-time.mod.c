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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x6626afca, "down" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0xcf2a6966, "up" },
	{ 0x3a40c53f, "sensor_hub_device_open" },
	{ 0x159cc9b6, "sensor_hub_register_callback" },
	{ 0x9a16a31e, "sensor_hub_input_get_attribute_info" },
	{ 0x3943cf18, "hid_sensor_parse_common_attributes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0x21b3305a, "sensor_hub_input_attr_get_raw_value" },
	{ 0x562b46b0, "sensor_hub_remove_callback" },
	{ 0xa620df52, "sensor_hub_device_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-hub,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-2000a0");

MODULE_INFO(srcversion, "A37FBDCC8787EEC8969008B");
