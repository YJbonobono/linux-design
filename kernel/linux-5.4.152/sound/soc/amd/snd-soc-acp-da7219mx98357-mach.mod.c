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
	{ 0x2007cb35, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3550732e, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x53df861e, "snd_soc_dai_set_pll" },
	{ 0x25e095ad, "da7219_aad_jack_det" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdb3bb5e8, "snd_jack_set_key" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xea74f232, "bt_uart_enable" },
	{ 0xf36d80ec, "device_property_present" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-da7219,snd,acp_audio_dma");

MODULE_ALIAS("acpi*:AMD7219:*");

MODULE_INFO(srcversion, "A60419CD54A47300891482F");
