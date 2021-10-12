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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xce1cbc2c, "mc13xxx_common_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfcce6790, "mc13xxx_common_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("of:N*T*Cfsl,mc13892");
MODULE_ALIAS("of:N*T*Cfsl,mc13892C*");
MODULE_ALIAS("of:N*T*Cfsl,mc34708");
MODULE_ALIAS("of:N*T*Cfsl,mc34708C*");
MODULE_ALIAS("i2c:mc13892");
MODULE_ALIAS("i2c:mc34708");

MODULE_INFO(srcversion, "FB9407E56F6FAFA7496F34B");
