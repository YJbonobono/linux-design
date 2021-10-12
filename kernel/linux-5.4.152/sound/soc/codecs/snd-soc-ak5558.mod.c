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
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak5558");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak5558C*");

MODULE_INFO(srcversion, "2E5AB61FE0B0237300B5533");
