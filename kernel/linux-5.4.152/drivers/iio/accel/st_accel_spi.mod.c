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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x18699bbb, "st_accel_common_probe" },
	{ 0xd1830036, "st_sensors_spi_configure" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xaf41d960, "st_accel_get_settings" },
	{ 0xa8093077, "st_accel_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_accel,st_sensors_spi,industrialio");

MODULE_ALIAS("spi:lis3dh");
MODULE_ALIAS("spi:lsm330d_accel");
MODULE_ALIAS("spi:lsm330dl_accel");
MODULE_ALIAS("spi:lsm330dlc_accel");
MODULE_ALIAS("spi:lis331dlh");
MODULE_ALIAS("spi:lsm330_accel");
MODULE_ALIAS("spi:lsm303agr_accel");
MODULE_ALIAS("spi:lis2dh12_accel");
MODULE_ALIAS("spi:lis3l02dq");
MODULE_ALIAS("spi:lng2dm");
MODULE_ALIAS("spi:h3lis331dl_accel");
MODULE_ALIAS("spi:lis331dl_accel");
MODULE_ALIAS("spi:lis3lv02dl_accel");
MODULE_ALIAS("spi:lis2dw12");
MODULE_ALIAS("spi:lis3dhh");
MODULE_ALIAS("spi:lis3de");

MODULE_INFO(srcversion, "F27C2EE3F9989C22A7B81B6");
