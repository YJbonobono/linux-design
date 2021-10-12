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
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3c6296fe, "bme680_core_probe" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0x6743c75f, "bme680_regmap_config" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2292b333, "spi_setup" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bme680_core");

MODULE_ALIAS("of:N*T*Cbosch,bme680");
MODULE_ALIAS("of:N*T*Cbosch,bme680C*");
MODULE_ALIAS("acpi*:BME0680:*");
MODULE_ALIAS("spi:bme680");

MODULE_INFO(srcversion, "292B1299DBC9A1C05478477");
