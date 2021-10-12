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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x313d2de7, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x39ceed1, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x783b2043, "snd_soc_dapm_sync_unlocked" },
	{ 0x43a6f1ca, "snd_soc_jack_report" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("i2c:es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316C*");
MODULE_ALIAS("acpi*:ESSX8316:*");

MODULE_INFO(srcversion, "9844F9407BD8A643DB60E4C");
