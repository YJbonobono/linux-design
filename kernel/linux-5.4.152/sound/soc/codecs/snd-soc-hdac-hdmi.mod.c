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
	{ 0x4495480b, "snd_soc_dapm_kcontrol_widget" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0x8cecd19b, "hdac_get_device_id" },
	{ 0x9ff62009, "device_link_add" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xfbb6c3d8, "snd_hdac_codec_read" },
	{ 0xe20e2858, "snd_soc_dapm_get_enum_double" },
	{ 0x592bd96d, "snd_hdac_ext_bus_get_link" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xb087808b, "snd_soc_add_card_controls" },
	{ 0x1d4362a1, "snd_hdac_ext_bus_link_put" },
	{ 0xc6db689f, "snd_soc_dapm_info_pin_switch" },
	{ 0x87c306f2, "snd_soc_dapm_put_pin_switch" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0x53440aa3, "snd_hdac_get_sub_nodes" },
	{ 0x840d9db, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb80f870a, "snd_hda_ext_driver_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe7f44645, "snd_pcm_hw_constraint_eld" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe4ac3583, "snd_hdac_check_power_state" },
	{ 0xa01fec53, "snd_soc_info_enum_double" },
	{ 0x87966057, "snd_soc_dapm_add_routes" },
	{ 0x2327a578, "snd_pcm_hw_constraint_mask64" },
	{ 0xc5fdb63, "snd_hda_ext_driver_register" },
	{ 0xacca5013, "snd_hdac_display_power" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x53b5b3c8, "snd_hdac_acomp_get_eld" },
	{ 0x39b54e2d, "dapm_kcontrol_get_value" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xee1456cf, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x643d3e60, "snd_hdac_ext_bus_link_get" },
	{ 0xfac83e14, "snd_hdac_register_chmap_ops" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x950d4935, "snd_hdac_read_parm_uncached" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0x130fadce, "snd_hdac_acomp_register_notifier" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x25292959, "snd_soc_dapm_get_pin_switch" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5cb8a6e, "_snd_hdac_read_parm" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0x7eb1a8ef, "snd_soc_dapm_new_widgets" },
	{ 0x29e1e204, "hdmi_audio_infoframe_pack" },
	{ 0x3c4268be, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x982ab40d, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc74c4482, "snd_hdac_refresh_widgets" },
	{ 0xedf7e879, "snd_hdac_query_supported_pcm" },
	{ 0x7e1a57e0, "snd_soc_dapm_disable_pin" },
	{ 0xdd09ce04, "snd_soc_dapm_enable_pin" },
	{ 0xe35ce0bb, "snd_hdac_codec_write" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0x994f4347, "snd_hdac_channel_allocation" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x43a6f1ca, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6904f978, "snd_hdac_add_chmap_ctls" },
	{ 0xabcd5b12, "snd_hdac_sync_power_state" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7380d7d0, "snd_hdac_get_connections" },
	{ 0xa3a8b817, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm");

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Fr00100000a02*");

MODULE_INFO(srcversion, "754B1FB7B26A2630D8B73E8");
