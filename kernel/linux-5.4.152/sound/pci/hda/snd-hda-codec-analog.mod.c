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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x97339ec, "snd_hda_gen_free" },
	{ 0x46d19579, "snd_hda_mixer_amp_volume_put" },
	{ 0x7b062093, "snd_hda_enum_helper_info" },
	{ 0x76aec1d8, "snd_hda_gen_parse_auto_config" },
	{ 0xd4549316, "snd_hda_apply_fixup" },
	{ 0xf86f5032, "snd_hda_pick_fixup" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x32435397, "snd_hda_gen_build_pcms" },
	{ 0x1169d623, "snd_hda_override_conn_list" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0x9e71321f, "snd_hda_get_path_from_idx" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x27982393, "snd_hdac_regmap_write_raw" },
	{ 0x2029c761, "snd_hda_get_path_idx" },
	{ 0x6b3c424c, "snd_hda_gen_check_power_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71f0207b, "snd_hda_activate_path" },
	{ 0x57daede3, "snd_hda_gen_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x1ec15343, "snd_hda_override_amp_caps" },
	{ 0x7d54e4b8, "snd_hda_ctl_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0x3c826c2a, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x1088557d, "snd_hda_gen_add_kctl" },
	{ 0x2791349a, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0xd4c05e21, "snd_hda_mixer_amp_switch_info" },
	{ 0x80a66a1e, "snd_hda_gen_spec_init" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xb82b5129, "snd_hda_gen_build_controls" },
	{ 0xf6a635a7, "snd_hda_get_connections" },
	{ 0xfc8f7fcf, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");

MODULE_INFO(srcversion, "56A7ADA51C13EEBA3F90E17");
