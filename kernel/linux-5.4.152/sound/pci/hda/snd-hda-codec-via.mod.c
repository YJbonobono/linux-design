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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf365321b, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x97339ec, "snd_hda_gen_free" },
	{ 0x46d19579, "snd_hda_mixer_amp_volume_put" },
	{ 0xfbb6c3d8, "snd_hdac_codec_read" },
	{ 0x7b062093, "snd_hda_enum_helper_info" },
	{ 0x76aec1d8, "snd_hda_gen_parse_auto_config" },
	{ 0xf33b8ea0, "snd_hda_add_verbs" },
	{ 0xd4549316, "snd_hda_apply_fixup" },
	{ 0xf86f5032, "snd_hda_pick_fixup" },
	{ 0x63c96f63, "snd_hda_mixer_amp_tlv" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x32435397, "snd_hda_gen_build_pcms" },
	{ 0x1169d623, "snd_hda_override_conn_list" },
	{ 0x966bb776, "snd_hda_check_amp_list_power" },
	{ 0xe972886d, "snd_hda_jack_unsol_event" },
	{ 0xc14029f5, "snd_hda_codec_set_pincfg" },
	{ 0xcbf38799, "snd_hda_mixer_amp_switch_put" },
	{ 0xa3e272a0, "snd_hda_mixer_amp_volume_get" },
	{ 0x8f978a8d, "snd_hda_codec_set_name" },
	{ 0x2ec06040, "snd_hda_mixer_amp_switch_get" },
	{ 0x57daede3, "snd_hda_gen_init" },
	{ 0xe539eb7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd8a48a07, "__hda_codec_driver_register" },
	{ 0x1ec15343, "snd_hda_override_amp_caps" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x4c7cd3b3, "snd_hda_get_bool_hint" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0x3c826c2a, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x1088557d, "snd_hda_gen_add_kctl" },
	{ 0x2791349a, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0xabd36156, "snd_hda_codec_get_pincfg" },
	{ 0xaa365b3e, "hda_codec_driver_unregister" },
	{ 0xd4c05e21, "snd_hda_mixer_amp_switch_info" },
	{ 0x80a66a1e, "snd_hda_gen_spec_init" },
	{ 0x1feb96b6, "snd_hdac_regmap_read_raw" },
	{ 0x59e24cc1, "snd_hda_mixer_amp_volume_info" },
	{ 0xb82b5129, "snd_hda_gen_build_controls" },
	{ 0xf6a635a7, "snd_hda_get_connections" },
	{ 0xfc8f7fcf, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");

MODULE_INFO(srcversion, "7D8CABFDE732CA74C6B8D81");
