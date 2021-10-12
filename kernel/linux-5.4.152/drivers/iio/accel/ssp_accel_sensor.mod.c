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
	{ 0x76699d56, "ssp_common_buffer_postdisable" },
	{ 0xb1b43b7e, "ssp_common_buffer_postenable" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6d4d3ff3, "ssp_common_process_data" },
	{ 0x9851d224, "ssp_get_sensor_delay" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1f8a12b0, "ssp_change_delay" },
	{ 0xf1de96cf, "ssp_register_consumer" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x6009b351, "iio_device_attach_buffer" },
	{ 0x67031ec1, "devm_iio_kfifo_allocate" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ssp_iio,sensorhub,industrialio,kfifo_buf");


MODULE_INFO(srcversion, "C131F8CF7BC2810777FF01B");
