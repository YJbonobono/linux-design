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
	{ 0x62b5e295, "snd_soc_get_volsw_sx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x1d1ef0d0, "snd_soc_dapm_del_routes" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x8e125690, "snd_soc_info_volsw_sx" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x87966057, "snd_soc_dapm_add_routes" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xedd15687, "snd_soc_put_volsw_sx" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs35l33");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l33C*");
MODULE_ALIAS("i2c:cs35l33");

MODULE_INFO(srcversion, "8145BB798F0E40EFF0DC065");
