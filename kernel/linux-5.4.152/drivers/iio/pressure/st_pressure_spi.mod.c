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
	{ 0xc83e4718, "st_press_common_probe" },
	{ 0xd1830036, "st_sensors_spi_configure" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xa925f32e, "st_press_get_settings" },
	{ 0xe70695f9, "st_press_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_pressure,st_sensors_spi,industrialio");

MODULE_ALIAS("spi:lps001wp");
MODULE_ALIAS("spi:lps25h");
MODULE_ALIAS("spi:lps331ap");
MODULE_ALIAS("spi:lps22hb");
MODULE_ALIAS("spi:lps33hw");
MODULE_ALIAS("spi:lps35hw");
MODULE_ALIAS("spi:lps22hh");

MODULE_INFO(srcversion, "DBB679D9BA69BCB98BE0BD0");
