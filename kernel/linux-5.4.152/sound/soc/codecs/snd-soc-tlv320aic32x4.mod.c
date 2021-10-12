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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x1912be44, "clk_hw_register_clkdev" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0xf4bf417, "devm_clk_register" },
	{ 0xc5850110, "printk" },
	{ 0x9261b3f5, "snd_soc_add_component_controls" },
	{ 0x6bd93a8c, "dev_get_regmap" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x97ca9237, "devm_clk_bulk_get" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "45326D9424CCB3CCCFFDE2B");
