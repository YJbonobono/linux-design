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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6716c8a2, "snd_hdac_i915_set_bclk" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x38ce402b, "azx_interrupt" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x52dd0c09, "param_get_int" },
	{ 0x9c656500, "intel_nhlt_init" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4f21216a, "snd_hda_lock_devices" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x6071d0f5, "snd_hdac_bus_alloc_stream_pages" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xb573e098, "snd_hdac_set_codec_wakeup" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x1f95eb96, "azx_codec_configure" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x75d94971, "pci_match_id" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5f1525ac, "snd_pci_quirk_lookup" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x58af3961, "param_set_int" },
	{ 0xc0754af0, "snd_hdac_bus_parse_capabilities" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4a74ff87, "azx_stop_chip" },
	{ 0x4a00db8b, "snd_hdac_acomp_exit" },
	{ 0x5c879538, "snd_hda_set_power_save" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5f9cc1d0, "vga_switcheroo_register_audio_client" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x94a91aef, "vga_switcheroo_unregister_client" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x3f137654, "trace_define_field" },
	{ 0xacca5013, "snd_hdac_display_power" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x22783c8e, "azx_init_chip" },
	{ 0x4fc908f9, "snd_hda_load_patch" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x735604dd, "intel_nhlt_free" },
	{ 0x3ef0b130, "azx_free_streams" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xb94293ca, "azx_bus_init" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0xdc6d5d41, "azx_get_pos_posbuf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd23e07bf, "pci_pr3_present" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0xf8060b4f, "snd_hda_unlock_devices" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x51701184, "param_ops_bint" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x76a15328, "snd_hdac_i915_init" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76f26366, "pci_intx" },
	{ 0xecaa3d61, "azx_get_pos_lpib" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x43948c51, "snd_hdac_bus_exit" },
	{ 0x9bf29b40, "snd_hdac_bus_free_stream_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xfa50bb31, "azx_stop_all_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x61505190, "azx_init_streams" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa3c05ee8, "azx_probe_codecs" },
	{ 0x67847d10, "intel_nhlt_get_dmic_geo" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xf148b548, "snd_hdac_bus_enter_link_reset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3b557abe, "vga_switcheroo_get_client_state" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd-intel-nhlt,snd-pcm,snd");

MODULE_ALIAS("pci:v00008086d00001C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000811Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000080Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002284sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000284Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A6Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001002d0000437Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001457sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001487sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000793Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000960Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000970Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAD8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005461sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00006549d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00006549d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00005011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00001977sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001D17d00003288sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7012B79C4BFD87A9D4C0181");
