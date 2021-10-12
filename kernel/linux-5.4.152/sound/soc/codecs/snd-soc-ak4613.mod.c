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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6bd93a8c, "dev_get_regmap" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x22cbbafe, "snd_soc_component_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0x267bccb0, "regcache_cache_only" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak4613");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4613C*");
MODULE_ALIAS("i2c:ak4613");

MODULE_INFO(srcversion, "F82762331041317C035CF83");
