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
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x35472a72, "pcm179x_common_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x621e08bf, "pcm179x_regmap_config" },
};

MODULE_INFO(depends, "snd-soc-pcm179x-codec");

MODULE_ALIAS("of:N*T*Cti,pcm1792a");
MODULE_ALIAS("of:N*T*Cti,pcm1792aC*");
MODULE_ALIAS("spi:pcm179x");

MODULE_INFO(srcversion, "97338EEB8F88E27BC312FB6");
