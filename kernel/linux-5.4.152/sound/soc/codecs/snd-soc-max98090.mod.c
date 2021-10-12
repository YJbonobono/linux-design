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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xf67c83aa, "snd_pcm_hw_constraint_msbits" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x840d9db, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x87966057, "snd_soc_dapm_add_routes" },
	{ 0x6bba86a2, "snd_soc_put_volsw_range" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9261b3f5, "snd_soc_add_component_controls" },
	{ 0x6d9c9ccd, "snd_soc_info_volsw_range" },
	{ 0x52a53ab7, "snd_soc_bytes_info" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0xbe6e3fce, "snd_soc_get_volsw_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0xbc79545c, "snd_soc_bytes_get" },
	{ 0x715324b3, "snd_soc_bytes_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x43a6f1ca, "snd_soc_jack_report" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:193C9890:*");
MODULE_ALIAS("i2c:max98090");
MODULE_ALIAS("i2c:max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98090");
MODULE_ALIAS("of:N*T*Cmaxim,max98090C*");
MODULE_ALIAS("of:N*T*Cmaxim,max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98091C*");

MODULE_INFO(srcversion, "0A4445314D0DB9763585375");
