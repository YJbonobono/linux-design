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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xeb746335, "__devm_regmap_init_mmio_clk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2eed4747, "syscon_regmap_lookup_by_phandle" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Crockchip,rk3328-codec");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-codecC*");

MODULE_INFO(srcversion, "D728D93BAF6212011A96C31");
