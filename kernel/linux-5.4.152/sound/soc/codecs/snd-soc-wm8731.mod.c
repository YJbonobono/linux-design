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
	{ 0x815588a6, "clk_enable" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x982ab40d, "snd_soc_dapm_sync" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Cwlf,wm8731");
MODULE_ALIAS("of:N*T*Cwlf,wm8731C*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "FFC351CEAD4422DF4DD96C8");
