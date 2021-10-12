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
	{ 0xf67c83aa, "snd_pcm_hw_constraint_msbits" },
	{ 0x3550732e, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0xfc34f89c, "rt5663_sel_asrc_clk_src" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdb3bb5e8, "snd_jack_set_key" },
	{ 0x99228b98, "hdac_hdmi_jack_port_init" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x851a3f84, "snd_soc_dapm_ignore_suspend" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x169eedce, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0xddafcd16, "hdac_hdmi_jack_init" },
	{ 0xb8dca6d7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-rt5663,snd,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "ED20C2A37AE7417CBBE41A4");
