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
	{ 0xf67c83aa, "snd_pcm_hw_constraint_msbits" },
	{ 0x3550732e, "snd_soc_pm_ops" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x53df861e, "snd_soc_dai_set_pll" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x99228b98, "hdac_hdmi_jack_port_init" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0xddafcd16, "hdac_hdmi_jack_init" },
	{ 0x9c02c68b, "snd_soc_dapm_force_enable_pin" },
	{ 0x7ed8611e, "snd_soc_jack_add_gpios" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "DDDC4DE516E9F062F8A97E8");
