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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x97d2a31a, "ad_sd_validate_trigger" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x815588a6, "clk_enable" },
	{ 0x542760a6, "ad_sd_read_reg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x447fde7d, "ad_sd_reset" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x2b63a809, "ad_sd_setup_buffer_and_trigger" },
	{ 0xa410b4c8, "ad_sd_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x22e72607, "ad_sd_calibrate_all" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xfb3669f7, "ad_sigma_delta_single_conversion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x680284ec, "ad_sd_write_reg" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xdeb5f3f3, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad_sigma_delta,industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad7190");
MODULE_ALIAS("of:N*T*Cadi,ad7190C*");
MODULE_ALIAS("of:N*T*Cadi,ad7192");
MODULE_ALIAS("of:N*T*Cadi,ad7192C*");
MODULE_ALIAS("of:N*T*Cadi,ad7193");
MODULE_ALIAS("of:N*T*Cadi,ad7193C*");
MODULE_ALIAS("of:N*T*Cadi,ad7195");
MODULE_ALIAS("of:N*T*Cadi,ad7195C*");
MODULE_ALIAS("spi:ad7190");
MODULE_ALIAS("spi:ad7192");
MODULE_ALIAS("spi:ad7193");
MODULE_ALIAS("spi:ad7195");

MODULE_INFO(srcversion, "FCB86A26961A371543B207B");
