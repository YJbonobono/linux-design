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
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad5721");
MODULE_ALIAS("spi:ad5721r");
MODULE_ALIAS("spi:ad5761");
MODULE_ALIAS("spi:ad5761r");

MODULE_INFO(srcversion, "F486F0AF9359C6408D5F127");
