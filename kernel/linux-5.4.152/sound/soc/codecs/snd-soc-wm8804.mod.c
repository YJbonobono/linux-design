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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0xfc295eb6, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd5161328, "devm_regulator_register_notifier" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xcf50f71e, "snd_soc_component_test_bits" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "D2403AD73256C0D4A3B2B9D");
