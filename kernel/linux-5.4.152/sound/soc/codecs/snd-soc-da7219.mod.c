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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x66c0bbb9, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3074b82d, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x6bba86a2, "snd_soc_put_volsw_range" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf4bf417, "devm_clk_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6d9c9ccd, "snd_soc_info_volsw_range" },
	{ 0x306a8430, "device_property_read_string_array" },
	{ 0x6dd78478, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0xbe6e3fce, "snd_soc_get_volsw_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x982ab40d, "snd_soc_dapm_sync" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x9c02c68b, "snd_soc_dapm_force_enable_pin" },
	{ 0x7e1a57e0, "snd_soc_dapm_disable_pin" },
	{ 0xcb33e804, "regcache_sync_region" },
	{ 0x6fb0aca0, "regmap_raw_read" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x43a6f1ca, "snd_soc_jack_report" },
	{ 0x3a83d5aa, "snd_soc_component_read32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:DLGS7219:*");
MODULE_ALIAS("i2c:da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219C*");

MODULE_INFO(srcversion, "6DA7CFCF5D9593DAAF54ABE");
