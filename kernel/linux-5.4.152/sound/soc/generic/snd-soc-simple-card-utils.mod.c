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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x79a8912, "snd_soc_of_parse_card_name" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5652d876, "devm_get_clk_from_child" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8e00cc9f, "snd_soc_dai_set_sysclk" },
	{ 0x973c0ac, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf7e65c0b, "snd_soc_of_parse_daifmt" },
	{ 0xb8dca6d7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "90C80A11B9E0DEA3BF3C689");
