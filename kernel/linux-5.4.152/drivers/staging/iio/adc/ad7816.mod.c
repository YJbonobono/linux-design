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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad7816");
MODULE_ALIAS("spi:ad7817");
MODULE_ALIAS("spi:ad7818");
MODULE_ALIAS("of:N*T*Cadi,ad7816");
MODULE_ALIAS("of:N*T*Cadi,ad7816C*");
MODULE_ALIAS("of:N*T*Cadi,ad7817");
MODULE_ALIAS("of:N*T*Cadi,ad7817C*");
MODULE_ALIAS("of:N*T*Cadi,ad7818");
MODULE_ALIAS("of:N*T*Cadi,ad7818C*");

MODULE_INFO(srcversion, "CA2CC14CD1311A6E179108E");
