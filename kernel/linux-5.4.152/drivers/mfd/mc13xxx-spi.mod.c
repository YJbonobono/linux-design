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
	{ 0xaf206556, "mc13xxx_variant_mc34708" },
	{ 0xfd95db1e, "mc13xxx_variant_mc13892" },
	{ 0xbd2f903e, "mc13xxx_variant_mc13783" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xce1cbc2c, "mc13xxx_common_init" },
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0x2292b333, "spi_setup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xfcce6790, "mc13xxx_common_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("of:N*T*Cfsl,mc13783");
MODULE_ALIAS("of:N*T*Cfsl,mc13783C*");
MODULE_ALIAS("of:N*T*Cfsl,mc13892");
MODULE_ALIAS("of:N*T*Cfsl,mc13892C*");
MODULE_ALIAS("of:N*T*Cfsl,mc34708");
MODULE_ALIAS("of:N*T*Cfsl,mc34708C*");
MODULE_ALIAS("spi:mc13783");
MODULE_ALIAS("spi:mc13892");
MODULE_ALIAS("spi:mc34708");

MODULE_INFO(srcversion, "9ECF0B518300BFB2FBFF8D1");
