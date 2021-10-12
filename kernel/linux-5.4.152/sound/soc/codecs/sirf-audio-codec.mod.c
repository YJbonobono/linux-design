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
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xeb746335, "__devm_regmap_init_mmio_clk" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Csirf,prima2-audio-codec");
MODULE_ALIAS("of:N*T*Csirf,prima2-audio-codecC*");
MODULE_ALIAS("of:N*T*Csirf,atlas6-audio-codec");
MODULE_ALIAS("of:N*T*Csirf,atlas6-audio-codecC*");

MODULE_INFO(srcversion, "292F36DBF8825CACE5F35B9");
