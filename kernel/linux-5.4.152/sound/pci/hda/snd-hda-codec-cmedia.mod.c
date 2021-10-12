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
	{ 0x76aec1d8, "snd_hda_gen_parse_auto_config" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0x32435397, "snd_hda_gen_build_pcms" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x57daede3, "snd_hda_gen_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x1088557d, "snd_hda_gen_add_kctl" },
	{ 0xabd36156, "snd_hda_codec_get_pincfg" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0x80a66a1e, "snd_hda_gen_spec_init" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xb82b5129, "snd_hda_gen_build_controls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec");

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");

MODULE_INFO(srcversion, "144507900D8D18ED56A1341");
