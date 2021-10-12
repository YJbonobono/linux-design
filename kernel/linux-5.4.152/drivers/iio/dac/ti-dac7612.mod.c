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
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,dac7612");
MODULE_ALIAS("of:N*T*Cti,dac7612C*");
MODULE_ALIAS("of:N*T*Cti,dac7612u");
MODULE_ALIAS("of:N*T*Cti,dac7612uC*");
MODULE_ALIAS("of:N*T*Cti,dac7612ub");
MODULE_ALIAS("of:N*T*Cti,dac7612ubC*");
MODULE_ALIAS("spi:ti-dac7612");

MODULE_INFO(srcversion, "A380C8726B0C6A08C8F8AF8");
