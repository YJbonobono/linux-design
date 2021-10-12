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
	{ 0xb4facf8b, "simple_open" },
	{ 0xc34b242b, "default_llseek" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0xfd205417, "no_llseek" },
	{ 0x472b0d86, "adis_debugfs_reg_access" },
	{ 0x90d3b130, "adis_update_scan_mode" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xc794ef81, "adis_single_conversion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xebb7a8a2, "debugfs_create_file_unsafe" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x800e234d, "adis_initial_startup" },
	{ 0xf5c6f0d0, "adis_setup_buffer_and_trigger" },
	{ 0x67654214, "adis_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1cc54f67, "adis_read_reg" },
	{ 0x600ee56b, "adis_cleanup_buffer_and_trigger" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb934ead8, "adis_write_reg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adis_lib,industrialio");

MODULE_ALIAS("spi:adis16133");
MODULE_ALIAS("spi:adis16135");
MODULE_ALIAS("spi:adis16136");
MODULE_ALIAS("spi:adis16137");

MODULE_INFO(srcversion, "95960E64B58FD3EC16012CF");
