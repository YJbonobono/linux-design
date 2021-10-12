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
	{ 0x2292b333, "spi_setup" },
	{ 0xfb38fc46, "tlv320aic23_probe" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x5824e82d, "tlv320aic23_regmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "snd-soc-tlv320aic23");


MODULE_INFO(srcversion, "4BE6F330562CBF976CFD1BC");
