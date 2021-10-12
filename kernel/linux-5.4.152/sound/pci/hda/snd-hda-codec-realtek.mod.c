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
	{ 0xf365321b, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45934086, "snd_hda_gen_fixup_micmute_led" },
	{ 0x97339ec, "snd_hda_gen_free" },
	{ 0xe5a3a76a, "snd_hda_codec_get_pin_target" },
	{ 0x46d19579, "snd_hda_mixer_amp_volume_put" },
	{ 0xfbb6c3d8, "snd_hdac_codec_read" },
	{ 0x76aec1d8, "snd_hda_gen_parse_auto_config" },
	{ 0xd4549316, "snd_hda_apply_fixup" },
	{ 0xf33b8ea0, "snd_hda_add_verbs" },
	{ 0xf86f5032, "snd_hda_pick_fixup" },
	{ 0x5f1525ac, "snd_pci_quirk_lookup" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x32435397, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x1169d623, "snd_hda_override_conn_list" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xc14029f5, "snd_hda_codec_set_pincfg" },
	{ 0xcbf38799, "snd_hda_mixer_amp_switch_put" },
	{ 0x22e279e3, "snd_hda_gen_update_outputs" },
	{ 0xdf81ea90, "snd_hda_jack_detect_enable_callback" },
	{ 0xf8c679e2, "input_event" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x8f978a8d, "snd_hda_codec_set_name" },
	{ 0x27982393, "snd_hdac_regmap_write_raw" },
	{ 0x8c2f99c5, "_snd_hda_set_pin_ctl" },
	{ 0x5790f36f, "snd_hda_gen_hp_automute" },
	{ 0x6b3c424c, "snd_hda_gen_check_power_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb23d007f, "snd_hda_codec_set_pin_target" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x2ec06040, "snd_hda_mixer_amp_switch_get" },
	{ 0x87e0be66, "snd_hda_gen_add_micmute_led" },
	{ 0x9803ec7f, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6df74326, "snd_hda_gen_path_power_filter" },
	{ 0xaa2b960, "is_jack_detectable" },
	{ 0x57daede3, "snd_hda_gen_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0x918f2406, "snd_hda_jack_set_gating_jack" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1ec15343, "snd_hda_override_amp_caps" },
	{ 0x4ee0efe7, "snd_hda_jack_detect_state" },
	{ 0x22c42c1e, "snd_hda_find_mixer_ctl" },
	{ 0xa4a20c4, "snd_hda_sequence_write" },
	{ 0x4c7cd3b3, "snd_hda_get_bool_hint" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb1464cba, "snd_hdac_override_parm" },
	{ 0xd6cb785e, "snd_hda_pick_pin_fixup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0x3c826c2a, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74cfe73f, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x673be579, "snd_hda_jack_add_kctl" },
	{ 0x1088557d, "snd_hda_gen_add_kctl" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x2791349a, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0xabd36156, "snd_hda_codec_get_pincfg" },
	{ 0xc652ef3c, "snd_hda_apply_pincfgs" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0xd4c05e21, "snd_hda_mixer_amp_switch_info" },
	{ 0x80a66a1e, "snd_hda_gen_spec_init" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xe80fa764, "query_amp_caps" },
	{ 0xb82b5129, "snd_hda_gen_build_controls" },
	{ 0x49ece300, "snd_hdac_power_up_pm" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd66e59a4, "snd_hda_apply_verbs" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xfc8f7fcf, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0222r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0230r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0245r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0287r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0623r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0711r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0897r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC0B00r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");

MODULE_INFO(srcversion, "972FB4A44B797C6C7DE0B3A");
