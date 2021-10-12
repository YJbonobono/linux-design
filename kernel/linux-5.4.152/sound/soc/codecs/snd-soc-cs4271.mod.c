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
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x1d864272, "devm_gpio_request" },
	{ 0x9f09f6f3, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");


MODULE_INFO(srcversion, "C449E6DCEBC4D03AAB30350");
