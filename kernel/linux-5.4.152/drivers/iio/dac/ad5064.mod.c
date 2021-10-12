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
	{ 0x5afa1383, "iio_enum_available_read" },
	{ 0x2178290e, "iio_enum_write" },
	{ 0x31aad9b7, "iio_enum_read" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:ad5625");
MODULE_ALIAS("i2c:ad5625r-1v25");
MODULE_ALIAS("i2c:ad5625r-2v5");
MODULE_ALIAS("i2c:ad5627");
MODULE_ALIAS("i2c:ad5627r-1v25");
MODULE_ALIAS("i2c:ad5627r-2v5");
MODULE_ALIAS("i2c:ad5629-1");
MODULE_ALIAS("i2c:ad5629-2");
MODULE_ALIAS("i2c:ad5629-3");
MODULE_ALIAS("i2c:ad5645r-1v25");
MODULE_ALIAS("i2c:ad5645r-2v5");
MODULE_ALIAS("i2c:ad5665");
MODULE_ALIAS("i2c:ad5665r-1v25");
MODULE_ALIAS("i2c:ad5665r-2v5");
MODULE_ALIAS("i2c:ad5667");
MODULE_ALIAS("i2c:ad5667r-1v25");
MODULE_ALIAS("i2c:ad5667r-2v5");
MODULE_ALIAS("i2c:ad5669-1");
MODULE_ALIAS("i2c:ad5669-2");
MODULE_ALIAS("i2c:ad5669-3");
MODULE_ALIAS("i2c:ltc2606");
MODULE_ALIAS("i2c:ltc2607");
MODULE_ALIAS("i2c:ltc2609");
MODULE_ALIAS("i2c:ltc2616");
MODULE_ALIAS("i2c:ltc2617");
MODULE_ALIAS("i2c:ltc2619");
MODULE_ALIAS("i2c:ltc2626");
MODULE_ALIAS("i2c:ltc2627");
MODULE_ALIAS("i2c:ltc2629");
MODULE_ALIAS("i2c:ltc2631-l12");
MODULE_ALIAS("i2c:ltc2631-h12");
MODULE_ALIAS("i2c:ltc2631-l10");
MODULE_ALIAS("i2c:ltc2631-h10");
MODULE_ALIAS("i2c:ltc2631-l8");
MODULE_ALIAS("i2c:ltc2631-h8");
MODULE_ALIAS("i2c:ltc2633-l12");
MODULE_ALIAS("i2c:ltc2633-h12");
MODULE_ALIAS("i2c:ltc2633-l10");
MODULE_ALIAS("i2c:ltc2633-h10");
MODULE_ALIAS("i2c:ltc2633-l8");
MODULE_ALIAS("i2c:ltc2633-h8");
MODULE_ALIAS("i2c:ltc2635-l12");
MODULE_ALIAS("i2c:ltc2635-h12");
MODULE_ALIAS("i2c:ltc2635-l10");
MODULE_ALIAS("i2c:ltc2635-h10");
MODULE_ALIAS("i2c:ltc2635-l8");
MODULE_ALIAS("i2c:ltc2635-h8");
MODULE_ALIAS("spi:ad5024");
MODULE_ALIAS("spi:ad5025");
MODULE_ALIAS("spi:ad5044");
MODULE_ALIAS("spi:ad5045");
MODULE_ALIAS("spi:ad5064");
MODULE_ALIAS("spi:ad5064-1");
MODULE_ALIAS("spi:ad5065");
MODULE_ALIAS("spi:ad5628-1");
MODULE_ALIAS("spi:ad5628-2");
MODULE_ALIAS("spi:ad5648-1");
MODULE_ALIAS("spi:ad5648-2");
MODULE_ALIAS("spi:ad5666-1");
MODULE_ALIAS("spi:ad5666-2");
MODULE_ALIAS("spi:ad5668-1");
MODULE_ALIAS("spi:ad5668-2");
MODULE_ALIAS("spi:ad5668-3");

MODULE_INFO(srcversion, "0E90652E5C70E840249C89A");
