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
	{ 0x50877b9, "dmi_first_match" },
	{ 0x2007cb35, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0xcf01e53d, "device_match_name" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb3bb5e8, "snd_jack_set_key" },
	{ 0x87966057, "snd_soc_dapm_add_routes" },
	{ 0x386d0f54, "i2c_bus_type" },
	{ 0x5625ddc1, "device_add_properties" },
	{ 0x74d36c3b, "bus_find_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4958b4be, "devm_acpi_dev_add_driver_gpios" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0x169eedce, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xba88a4e8, "snd_soc_card_jack_new" },
	{ 0x3f3d1616, "snd_soc_dai_set_fmt" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0x4debdc27, "gpiod_get_index" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xb8dca6d7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0x4de1a90, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "5C7B1137603A1212DF87121");
