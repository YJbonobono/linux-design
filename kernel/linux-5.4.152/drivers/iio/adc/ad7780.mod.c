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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xfb3669f7, "ad_sigma_delta_single_conversion" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x2b63a809, "ad_sd_setup_buffer_and_trigger" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xa410b4c8, "ad_sd_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xdeb5f3f3, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad_sigma_delta,industrialio");

MODULE_ALIAS("spi:ad7170");
MODULE_ALIAS("spi:ad7171");
MODULE_ALIAS("spi:ad7780");
MODULE_ALIAS("spi:ad7781");

MODULE_INFO(srcversion, "B0BCC8811AAA7C97A921356");
