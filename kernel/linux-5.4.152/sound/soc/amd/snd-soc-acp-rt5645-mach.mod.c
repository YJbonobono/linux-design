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
	{ 0x3550732e, "snd_soc_pm_ops" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x53df861e, "snd_soc_dai_set_pll" },
	{ 0x40d065d6, "rt5645_set_jack_detect" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0xee821553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5645");

MODULE_ALIAS("acpi*:AMDI1002:*");

MODULE_INFO(srcversion, "1603D57A51646C7EB39DE46");
