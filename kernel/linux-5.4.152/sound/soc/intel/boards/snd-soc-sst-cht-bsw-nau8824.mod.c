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
	{ 0x2007cb35, "devm_snd_soc_register_card" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x53df861e, "snd_soc_dai_set_pll" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdb3bb5e8, "snd_jack_set_key" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0xdc4e6de7, "nau8824_enable_jack_detect" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0xb8dca6d7, "snd_soc_dai_set_tdm_slot" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-soc-nau8824,snd-pcm");


MODULE_INFO(srcversion, "12D09031DF0D1FF556889D0");
