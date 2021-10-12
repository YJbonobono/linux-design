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
	{ 0x8c44ba97, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcb1354de, "snd_soc_component_update_bits" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x6bba86a2, "snd_soc_put_volsw_range" },
	{ 0x6d9c9ccd, "snd_soc_info_volsw_range" },
	{ 0xbe6e3fce, "snd_soc_get_volsw_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xa91402fd, "snd_soc_get_enum_double" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x7cc0bb91, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:tas5707");
MODULE_ALIAS("i2c:tas5711");
MODULE_ALIAS("i2c:tas5717");
MODULE_ALIAS("i2c:tas5719");
MODULE_ALIAS("i2c:tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5707");
MODULE_ALIAS("of:N*T*Cti,tas5707C*");
MODULE_ALIAS("of:N*T*Cti,tas5711");
MODULE_ALIAS("of:N*T*Cti,tas5711C*");
MODULE_ALIAS("of:N*T*Cti,tas5717");
MODULE_ALIAS("of:N*T*Cti,tas5717C*");
MODULE_ALIAS("of:N*T*Cti,tas5719");
MODULE_ALIAS("of:N*T*Cti,tas5719C*");
MODULE_ALIAS("of:N*T*Cti,tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5721C*");

MODULE_INFO(srcversion, "428D1FF2A96BBA33C7C54FB");
