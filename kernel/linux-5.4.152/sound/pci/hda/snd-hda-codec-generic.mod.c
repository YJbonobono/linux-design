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
	{ 0xe5a3a76a, "snd_hda_codec_get_pin_target" },
	{ 0x349cba85, "strchr" },
	{ 0xed964425, "snd_hda_multi_out_dig_prepare" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x46d19579, "snd_hda_mixer_amp_volume_put" },
	{ 0xfbb6c3d8, "snd_hdac_codec_read" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x27e7ec0b, "snd_hda_get_default_vref" },
	{ 0x7b062093, "snd_hda_enum_helper_info" },
	{ 0xd4549316, "snd_hda_apply_fixup" },
	{ 0x6e7dafca, "snd_hda_sync_vmaster_hook" },
	{ 0xdf0cacef, "snd_hda_codec_amp_stereo" },
	{ 0xed9356e5, "__snd_hda_add_vmaster" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0xba86f72b, "snd_hda_jack_add_kctls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x966bb776, "snd_hda_check_amp_list_power" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0xcbf38799, "snd_hda_mixer_amp_switch_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdf81ea90, "snd_hda_jack_detect_enable_callback" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x24383294, "snd_hda_check_amp_caps" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x27982393, "snd_hdac_regmap_write_raw" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8c2f99c5, "_snd_hda_set_pin_ctl" },
	{ 0xdefb0442, "snd_hda_attach_beep_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb23d007f, "snd_hda_codec_set_pin_target" },
	{ 0x2ec06040, "snd_hda_mixer_amp_switch_get" },
	{ 0x5270debc, "snd_hda_codec_set_power_to_all" },
	{ 0x93d37baf, "snd_hda_get_conn_list" },
	{ 0xa3180561, "snd_ctl_boolean_stereo_info" },
	{ 0x2e767781, "snd_hda_multi_out_analog_prepare" },
	{ 0x6145aee4, "snd_hda_multi_out_analog_cleanup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaa2b960, "is_jack_detectable" },
	{ 0xdaff1705, "snd_hda_create_spdif_in_ctls" },
	{ 0x394f47ae, "snd_hda_codec_amp_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0xe3a53f4c, "sort" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x290576aa, "snd_hda_get_int_hint" },
	{ 0x4ee0efe7, "snd_hda_jack_detect_state" },
	{ 0xc4dd48ae, "snd_hda_jack_tbl_get" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x22c42c1e, "snd_hda_find_mixer_ctl" },
	{ 0xe5b862a8, "snd_hda_create_spdif_share_sw" },
	{ 0x4c7cd3b3, "snd_hda_get_bool_hint" },
	{ 0x5ee36686, "snd_hda_multi_out_analog_open" },
	{ 0x16e915e1, "snd_hda_get_conn_index" },
	{ 0xf7c97290, "snd_hda_multi_out_dig_close" },
	{ 0x3fef43a8, "snd_hda_create_dig_out_ctls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0x3e6342c0, "snd_hda_correct_pin_ctl" },
	{ 0x9817cddc, "snd_hda_add_imux_item" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbf00cba6, "snd_hda_get_pin_label" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2e5ce795, "snd_hda_multi_out_dig_cleanup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdef8f970, "snd_ctl_sync_vmaster" },
	{ 0x2c4d41f7, "__snd_hda_codec_cleanup_stream" },
	{ 0x6662296, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a08591e, "snd_hda_add_vmaster_hook" },
	{ 0x69acdf38, "memcpy" },
	{ 0x298cb65b, "snd_hda_multi_out_dig_open" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x96848186, "scnprintf" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xabd36156, "snd_hda_codec_get_pincfg" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0xd4c05e21, "snd_hda_mixer_amp_switch_info" },
	{ 0x37bc1ee8, "snd_hda_codec_setup_stream" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xe80fa764, "query_amp_caps" },
	{ 0x888583ff, "hda_get_autocfg_input_label" },
	{ 0x51f8522e, "snd_hda_set_vmaster_tlv" },
	{ 0x8f2565e0, "snd_hda_codec_amp_init_stereo" },
	{ 0xf6a635a7, "snd_hda_get_connections" },
	{ 0x44ce5857, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x96f651c4, "snd_hda_codec_amp_update" },
	{ 0xd66e59a4, "snd_hda_apply_verbs" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "325D706A03C13DAB44263E1");
