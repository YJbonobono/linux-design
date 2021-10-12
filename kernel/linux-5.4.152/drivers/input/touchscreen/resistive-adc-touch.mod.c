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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x47a05ddd, "iio_channel_get_all_cb" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xd2362958, "devm_iio_channel_get_all" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0xf8c679e2, "input_event" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-buffer-cb,industrialio");

MODULE_ALIAS("of:N*T*Cresistive-adc-touch");
MODULE_ALIAS("of:N*T*Cresistive-adc-touchC*");

MODULE_INFO(srcversion, "EF0C5003722401D9CD7B5F6");
