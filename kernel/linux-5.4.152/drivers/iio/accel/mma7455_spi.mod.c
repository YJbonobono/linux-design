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
	{ 0x59b1e142, "mma7455_core_probe" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x66a2a76d, "mma7455_core_regmap" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x37c839ad, "mma7455_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mma7455_core");

MODULE_ALIAS("spi:mma7455");
MODULE_ALIAS("spi:mma7456");

MODULE_INFO(srcversion, "D3E005012D44BEEA8EA82EE");
