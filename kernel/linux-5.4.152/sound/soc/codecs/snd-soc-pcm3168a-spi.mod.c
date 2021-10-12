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
	{ 0x1f4d4837, "pcm3168a_probe" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x67d4c74e, "pcm3168a_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbe6b46d2, "pcm3168a_pm_ops" },
	{ 0xb027f910, "pcm3168a_regmap" },
};

MODULE_INFO(depends, "snd-soc-pcm3168a");

MODULE_ALIAS("spi:pcm3168a");
MODULE_ALIAS("of:N*T*Cti,pcm3168a");
MODULE_ALIAS("of:N*T*Cti,pcm3168aC*");

MODULE_INFO(srcversion, "6307A6C06CE8C6EA6302B20");
