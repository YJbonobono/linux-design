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
	{ 0xfbb6c3d8, "snd_hdac_codec_read" },
	{ 0x76aec1d8, "snd_hda_gen_parse_auto_config" },
	{ 0xd4549316, "snd_hda_apply_fixup" },
	{ 0xf86f5032, "snd_hda_pick_fixup" },
	{ 0x32435397, "snd_hda_gen_build_pcms" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0xc14029f5, "snd_hda_codec_set_pincfg" },
	{ 0x22e279e3, "snd_hda_gen_update_outputs" },
	{ 0xdf81ea90, "snd_hda_jack_detect_enable_callback" },
	{ 0x8c2f99c5, "_snd_hda_set_pin_ctl" },
	{ 0xff9d8c3e, "snd_hda_gen_fix_pin_power" },
	{ 0x57daede3, "snd_hda_gen_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x1ec15343, "snd_hda_override_amp_caps" },
	{ 0x4ee0efe7, "snd_hda_jack_detect_state" },
	{ 0x22c42c1e, "snd_hda_find_mixer_ctl" },
	{ 0xa4a20c4, "snd_hda_sequence_write" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x1088557d, "snd_hda_gen_add_kctl" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0xabd36156, "snd_hda_codec_get_pincfg" },
	{ 0xc652ef3c, "snd_hda_apply_pincfgs" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0x80a66a1e, "snd_hda_gen_spec_init" },
	{ 0xe80fa764, "query_amp_caps" },
	{ 0xb82b5129, "snd_hda_gen_build_controls" },
	{ 0xfc8f7fcf, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-core,snd-hda-codec");

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "340FCE51E5A5CC155024B1D");
