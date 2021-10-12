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
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0x97d2a31a, "ad_sd_validate_trigger" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x2b63a809, "ad_sd_setup_buffer_and_trigger" },
	{ 0xa410b4c8, "ad_sd_init" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x64ca762, "ad_sd_set_comm" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xfb3669f7, "ad_sigma_delta_single_conversion" },
	{ 0x680284ec, "ad_sd_write_reg" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xdeb5f3f3, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ad_sigma_delta");

MODULE_ALIAS("spi:ad7787");
MODULE_ALIAS("spi:ad7788");
MODULE_ALIAS("spi:ad7789");
MODULE_ALIAS("spi:ad7790");
MODULE_ALIAS("spi:ad7791");

MODULE_INFO(srcversion, "9B8234243961A05A4E1568B");
