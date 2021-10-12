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
	{ 0xf9a482f9, "msleep" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x70a2e2f5, "regmap_register_patch" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x6bba86a2, "snd_soc_put_volsw_range" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6d9c9ccd, "snd_soc_info_volsw_range" },
	{ 0x52a53ab7, "snd_soc_bytes_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xbe6e3fce, "snd_soc_get_volsw_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x233c83ec, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0xbc79545c, "snd_soc_bytes_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x22cbbafe, "snd_soc_component_read" },
	{ 0x715324b3, "snd_soc_bytes_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ctempo,tscs454");
MODULE_ALIAS("of:N*T*Ctempo,tscs454C*");
MODULE_ALIAS("i2c:tscs454");

MODULE_INFO(srcversion, "1CCCAC66C2C7EBD78C86FB3");
