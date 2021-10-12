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
	{ 0x801ded15, "kxsd9_dev_pm_ops" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb5c3aae4, "kxsd9_common_probe" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x697cf80c, "kxsd9_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kxsd9");

MODULE_ALIAS("of:N*T*Ckionix,kxsd9");
MODULE_ALIAS("of:N*T*Ckionix,kxsd9C*");
MODULE_ALIAS("spi:kxsd9");

MODULE_INFO(srcversion, "692FE5F8CC94E74C00AFC7C");
