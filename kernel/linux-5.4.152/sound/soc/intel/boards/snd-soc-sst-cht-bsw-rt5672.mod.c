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
	{ 0x2007cb35, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0xdb62d8f1, "rt5670_jack_resume" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x53df861e, "snd_soc_dai_set_pll" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdb3bb5e8, "snd_jack_set_key" },
	{ 0x5a2e039b, "rt5670_sel_asrc_clk_src" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5a921311, "strncmp" },
	{ 0xb0c22b7e, "rt5670_jack_suspend" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0x3f3d1616, "snd_soc_dai_set_fmt" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0xb8dca6d7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbe8a2fef, "rt5670_set_jack_detect" },
	{ 0x4de1a90, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5670,snd,snd-pcm");


MODULE_INFO(srcversion, "199CA71C10CE3233E83EC7F");
