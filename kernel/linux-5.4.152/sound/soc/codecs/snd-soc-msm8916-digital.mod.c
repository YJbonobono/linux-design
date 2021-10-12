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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x62b5e295, "snd_soc_get_volsw_sx" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8e125690, "snd_soc_info_volsw_sx" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0xeb746335, "__devm_regmap_init_mmio_clk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xedd15687, "snd_soc_put_volsw_sx" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codec");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codecC*");

MODULE_INFO(srcversion, "89A3861A00AD0319890150B");
