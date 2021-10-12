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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x654d105d, "snd_soc_dapm_get_volsw" },
	{ 0xf96fbbdd, "regmap_multi_reg_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x54da765d, "snd_soc_put_volsw" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x1ce2758c, "snd_soc_get_volsw" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa921126b, "snd_soc_dapm_put_volsw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf3964cfc, "snd_soc_info_volsw" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x39ceed1, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x7ed8611e, "snd_soc_jack_add_gpios" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:14F10720:*");
MODULE_ALIAS("i2c:cx20721");
MODULE_ALIAS("i2c:cx20723");

MODULE_INFO(srcversion, "C50A2DDB7C70933C270A51B");
