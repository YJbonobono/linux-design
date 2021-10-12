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
	{ 0xcdcb1d8a, "hmc5843_common_resume" },
	{ 0x3f88c74, "hmc5843_common_suspend" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x4b7b81d2, "hmc5843_common_probe" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x2292b333, "spi_setup" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xad64299c, "hmc5843_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hmc5843_core");

MODULE_ALIAS("spi:hmc5983");

MODULE_INFO(srcversion, "73FB57466AB3F6EBF7DB8AF");
