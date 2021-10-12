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
	{ 0xc4645755, "pcm512x_regmap" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xa47d0911, "pcm512x_pm_ops" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x6740732c, "pcm512x_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe0bf627b, "pcm512x_remove" },
};

MODULE_INFO(depends, "snd-soc-pcm512x");

MODULE_ALIAS("spi:pcm5121");
MODULE_ALIAS("spi:pcm5122");
MODULE_ALIAS("spi:pcm5141");
MODULE_ALIAS("spi:pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5121");
MODULE_ALIAS("of:N*T*Cti,pcm5121C*");
MODULE_ALIAS("of:N*T*Cti,pcm5122");
MODULE_ALIAS("of:N*T*Cti,pcm5122C*");
MODULE_ALIAS("of:N*T*Cti,pcm5141");
MODULE_ALIAS("of:N*T*Cti,pcm5141C*");
MODULE_ALIAS("of:N*T*Cti,pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5142C*");

MODULE_INFO(srcversion, "3E582D8F25D0DB751B7EAEC");
