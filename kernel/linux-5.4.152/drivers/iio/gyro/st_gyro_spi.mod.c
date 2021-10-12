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
	{ 0xb638e439, "st_gyro_common_probe" },
	{ 0xd1830036, "st_sensors_spi_configure" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x8e17ae07, "st_gyro_get_settings" },
	{ 0x838ebe27, "st_gyro_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_gyro,st_sensors_spi,industrialio");

MODULE_ALIAS("spi:l3g4200d");
MODULE_ALIAS("spi:lsm330d_gyro");
MODULE_ALIAS("spi:lsm330dl_gyro");
MODULE_ALIAS("spi:lsm330dlc_gyro");
MODULE_ALIAS("spi:l3gd20");
MODULE_ALIAS("spi:l3gd20h");
MODULE_ALIAS("spi:l3g4is_ui");
MODULE_ALIAS("spi:lsm330_gyro");
MODULE_ALIAS("spi:lsm9ds0_gyro");

MODULE_INFO(srcversion, "C2B9741BCA0F5B09E462FBE");
