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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("acpi*:AANT1280:*");
MODULE_ALIAS("spi:adc128s052");
MODULE_ALIAS("spi:adc122s021");
MODULE_ALIAS("spi:adc122s051");
MODULE_ALIAS("spi:adc122s101");
MODULE_ALIAS("spi:adc124s021");
MODULE_ALIAS("spi:adc124s051");
MODULE_ALIAS("spi:adc124s101");
MODULE_ALIAS("of:N*T*Cti,adc128s052");
MODULE_ALIAS("of:N*T*Cti,adc128s052C*");
MODULE_ALIAS("of:N*T*Cti,adc122s021");
MODULE_ALIAS("of:N*T*Cti,adc122s021C*");
MODULE_ALIAS("of:N*T*Cti,adc122s051");
MODULE_ALIAS("of:N*T*Cti,adc122s051C*");
MODULE_ALIAS("of:N*T*Cti,adc122s101");
MODULE_ALIAS("of:N*T*Cti,adc122s101C*");
MODULE_ALIAS("of:N*T*Cti,adc124s021");
MODULE_ALIAS("of:N*T*Cti,adc124s021C*");
MODULE_ALIAS("of:N*T*Cti,adc124s051");
MODULE_ALIAS("of:N*T*Cti,adc124s051C*");
MODULE_ALIAS("of:N*T*Cti,adc124s101");
MODULE_ALIAS("of:N*T*Cti,adc124s101C*");

MODULE_INFO(srcversion, "A33F426A1E5E3EDBDB95768");
