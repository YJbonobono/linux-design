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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0x313d2de7, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x6dd78478, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x39ceed1, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x783b2043, "snd_soc_dapm_sync_unlocked" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x43a6f1ca, "snd_soc_jack_report" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-rl6231");

MODULE_ALIAS("acpi*:10EC5651:*");
MODULE_ALIAS("acpi*:10EC5640:*");
MODULE_ALIAS("i2c:rt5651");

MODULE_INFO(srcversion, "E0106B234679603E9570000");
