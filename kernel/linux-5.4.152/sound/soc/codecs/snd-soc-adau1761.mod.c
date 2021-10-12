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
	{ 0x6e95394f, "adau17x1_precious_register" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x44d8fe23, "adau17x1_add_widgets" },
	{ 0xb85785da, "adau17x1_resume" },
	{ 0x840d9db, "snd_soc_dapm_new_controls" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x87966057, "snd_soc_dapm_add_routes" },
	{ 0x9261b3f5, "snd_soc_add_component_controls" },
	{ 0x91e1df04, "adau17x1_probe" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x954af126, "adau17x1_volatile_register" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x7eeebd4d, "adau17x1_dai_ops" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0xd875958f, "adau17x1_readable_register" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x1bcc9a88, "adau17x1_add_routes" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-adau17x1,snd-soc-core");


MODULE_INFO(srcversion, "3BE60EF996A73FA0FEB2F6C");
