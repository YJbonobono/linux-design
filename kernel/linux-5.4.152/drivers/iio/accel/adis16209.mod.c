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
	{ 0x90d3b130, "adis_update_scan_mode" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc794ef81, "adis_single_conversion" },
	{ 0x1cc54f67, "adis_read_reg" },
	{ 0xb934ead8, "adis_write_reg" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x800e234d, "adis_initial_startup" },
	{ 0xf5c6f0d0, "adis_setup_buffer_and_trigger" },
	{ 0x67654214, "adis_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x600ee56b, "adis_cleanup_buffer_and_trigger" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adis_lib,industrialio");


MODULE_INFO(srcversion, "A9A93DEB81E09516679A052");
