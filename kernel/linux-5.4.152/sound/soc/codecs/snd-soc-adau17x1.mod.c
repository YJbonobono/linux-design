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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1d1ef0d0, "snd_soc_dapm_del_routes" },
	{ 0xecb9389b, "devm_sigmadsp_init_regmap" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x840d9db, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe0360a18, "sigmadsp_attach" },
	{ 0xae620be9, "adau_calc_pll_cfg" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0xfc295eb6, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x87966057, "snd_soc_dapm_add_routes" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9261b3f5, "snd_soc_add_component_controls" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b6e356f, "sigmadsp_setup" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0xccb36cbe, "sigmadsp_restrict_params" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf50f71e, "snd_soc_component_test_bits" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x84a258c0, "snd_soc_dapm_mux_update_power" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-sigmadsp-regmap,snd-soc-sigmadsp,snd-soc-adau-utils");


MODULE_INFO(srcversion, "BC8B7DBEA3E9ECDAB434156");
