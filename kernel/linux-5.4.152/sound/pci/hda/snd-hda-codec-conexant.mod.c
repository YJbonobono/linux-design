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
	{ 0x45934086, "snd_hda_gen_fixup_micmute_led" },
	{ 0x97339ec, "snd_hda_gen_free" },
	{ 0xe5a3a76a, "snd_hda_codec_get_pin_target" },
	{ 0x46d19579, "snd_hda_mixer_amp_volume_put" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x76aec1d8, "snd_hda_gen_parse_auto_config" },
	{ 0xf33b8ea0, "snd_hda_add_verbs" },
	{ 0xd4549316, "snd_hda_apply_fixup" },
	{ 0xf86f5032, "snd_hda_pick_fixup" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0x32435397, "snd_hda_gen_build_pcms" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x22e279e3, "snd_hda_gen_update_outputs" },
	{ 0x9e71321f, "snd_hda_get_path_from_idx" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x27982393, "snd_hdac_regmap_write_raw" },
	{ 0x6b3c424c, "snd_hda_gen_check_power_status" },
	{ 0xb23d007f, "snd_hda_codec_set_pin_target" },
	{ 0xb72fc125, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x87e0be66, "snd_hda_gen_add_micmute_led" },
	{ 0x71f0207b, "snd_hda_activate_path" },
	{ 0x57daede3, "snd_hda_gen_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0x918f2406, "snd_hda_jack_set_gating_jack" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x1ec15343, "snd_hda_override_amp_caps" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x4ee0efe7, "snd_hda_jack_detect_state" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0x3c826c2a, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74cfe73f, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1088557d, "snd_hda_gen_add_kctl" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x2791349a, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0x3f2f95cb, "snd_hda_add_new_path" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0xd4c05e21, "snd_hda_mixer_amp_switch_info" },
	{ 0x80a66a1e, "snd_hda_gen_spec_init" },
	{ 0x1feb96b6, "snd_hdac_regmap_read_raw" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xe80fa764, "query_amp_caps" },
	{ 0x9d048ab8, "snd_hda_gen_mic_autoswitch" },
	{ 0xb82b5129, "snd_hda_gen_build_controls" },
	{ 0x44ce5857, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v14F11F86r*a01*");
MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F120D0r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "979E783B2108649C73DE8C8");
