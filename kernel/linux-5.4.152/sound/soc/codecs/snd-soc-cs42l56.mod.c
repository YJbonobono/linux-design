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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x62b5e295, "snd_soc_get_volsw_sx" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x8e125690, "snd_soc_info_volsw_sx" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0xf8c679e2, "input_event" },
	{ 0x6bba86a2, "snd_soc_put_volsw_range" },
	{ 0x6d9c9ccd, "snd_soc_info_volsw_range" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0xbe6e3fce, "snd_soc_get_volsw_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x982ab40d, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x7e1a57e0, "snd_soc_dapm_disable_pin" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xdd09ce04, "snd_soc_dapm_enable_pin" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xedd15687, "snd_soc_put_volsw_sx" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs42l56");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l56C*");
MODULE_ALIAS("i2c:cs42l56");

MODULE_INFO(srcversion, "A6A54DA4A8F56F57E255B35");
