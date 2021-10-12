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
	{ 0xb2ca2239, "snd_hdac_power_up" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x82cb692d, "snd_hda_codec_load_dsp_prepare" },
	{ 0xed964425, "snd_hda_multi_out_dig_prepare" },
	{ 0x46d19579, "snd_hda_mixer_amp_volume_put" },
	{ 0xfbb6c3d8, "snd_hdac_codec_read" },
	{ 0xdf0cacef, "snd_hda_codec_amp_stereo" },
	{ 0x5a6e0fb7, "snd_hda_codec_load_dsp_trigger" },
	{ 0xed9356e5, "__snd_hda_add_vmaster" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5f1525ac, "snd_pci_quirk_lookup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0xba86f72b, "snd_hda_jack_add_kctls" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbf38799, "snd_hda_mixer_amp_switch_put" },
	{ 0xdf81ea90, "snd_hda_jack_detect_enable_callback" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x8f978a8d, "snd_hda_codec_set_name" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x8c2f99c5, "_snd_hda_set_pin_ctl" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ec06040, "snd_hda_mixer_amp_switch_get" },
	{ 0x9803ec7f, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdaff1705, "snd_hda_create_spdif_in_ctls" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1ec15343, "snd_hda_override_amp_caps" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x4ee0efe7, "snd_hda_jack_detect_state" },
	{ 0xc4dd48ae, "snd_hda_jack_tbl_get" },
	{ 0xa4a20c4, "snd_hda_sequence_write" },
	{ 0xe5b862a8, "snd_hda_create_spdif_share_sw" },
	{ 0x7d54e4b8, "snd_hda_ctl_add" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf7c97290, "snd_hda_multi_out_dig_close" },
	{ 0x3fef43a8, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xe1c08014, "snd_hda_codec_update_widgets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2e5ce795, "snd_hda_multi_out_dig_cleanup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x2c4d41f7, "__snd_hda_codec_cleanup_stream" },
	{ 0x6662296, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x298cb65b, "snd_hda_multi_out_dig_open" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0x9601035f, "request_firmware" },
	{ 0xc652ef3c, "snd_hda_apply_pincfgs" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0xd4c05e21, "snd_hda_mixer_amp_switch_info" },
	{ 0x3343be0, "snd_pcm_add_chmap_ctls" },
	{ 0xd6ae906, "snd_hdac_power_down" },
	{ 0x37bc1ee8, "snd_hda_codec_setup_stream" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x52500bd8, "snd_hda_codec_load_dsp_cleanup" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xdb68826f, "snd_hda_jack_report_sync" },
	{ 0x51f8522e, "snd_hda_set_vmaster_tlv" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x49ece300, "snd_hdac_power_up_pm" },
	{ 0x44ce5857, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x96f651c4, "snd_hda_codec_amp_update" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-pcm");

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "BDF44BA86198378805B2659");
