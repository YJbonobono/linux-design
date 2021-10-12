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
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2292b333, "spi_setup" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad2s1210");
MODULE_ALIAS("of:N*T*Cadi,ad2s1210");
MODULE_ALIAS("of:N*T*Cadi,ad2s1210C*");

MODULE_INFO(srcversion, "6A3AB66E025D5D869212DBF");
