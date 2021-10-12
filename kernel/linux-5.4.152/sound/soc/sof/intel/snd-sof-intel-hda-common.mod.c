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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xa2f0b887, "snd_soc_acpi_intel_hda_machines" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xc90180f, "snd_sof_pcm_period_elapsed" },
	{ 0x56826ae3, "sof_io_write" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x51fd2e93, "hda_codec_i915_init" },
	{ 0x9c656500, "intel_nhlt_init" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x592bd96d, "snd_hdac_ext_bus_get_link" },
	{ 0x14fc55be, "snd_dma_alloc_pages" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x1d4362a1, "snd_hdac_ext_bus_link_put" },
	{ 0x94f10cf7, "snd_sof_dsp_panic" },
	{ 0x9a75278e, "snd_hdac_ext_link_set_stream_id" },
	{ 0x73611676, "snd_sof_load_firmware_raw" },
	{ 0x45c023ad, "snd_hdac_ext_link_clear_stream_id" },
	{ 0xcfdc5f98, "sof_ipc_tx_message" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4d1dda3e, "snd_hdac_ext_bus_get_ml_capabilities" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85df9b6c, "strsep" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xcc55ef23, "snd_sof_ipc_reply" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xc2bd7629, "sof_io_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7052240, "snd_hdac_bus_init_cmd_io" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x59c9b03b, "sof_fw_ready" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcc332e86, "snd_sof_pci_update_bits" },
	{ 0x3fb5cfb4, "snd_sof_dsp_update_bits" },
	{ 0xd99022b9, "snd_hdac_bus_stop_cmd_io" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x860a6708, "snd_sof_dsp_update_bits_unlocked" },
	{ 0xca357c27, "snd_hdac_ext_link_stream_reset" },
	{ 0x735604dd, "intel_nhlt_free" },
	{ 0x846bb319, "snd_soc_dpcm_get_substream" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7da63d01, "snd_sof_ipc_msgs_rx" },
	{ 0xfd2d9395, "snd_hdac_ext_stream_release" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x358a2bd4, "snd_sof_dsp_update_bits_forced" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0xb0414f51, "sof_mailbox_read" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d059e01, "snd_hdac_ext_bus_link_power_down" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xab4a7e29, "sof_mailbox_write" },
	{ 0xa1f56cad, "hda_codec_i915_put" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb10b9ac, "sof_io_read64" },
	{ 0x36b289b9, "snd_sof_get_status" },
	{ 0x981a02bf, "snd_hdac_ext_stream_decouple" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc03415f, "sof_block_write" },
	{ 0xe4e8963d, "snd_hdac_ext_bus_exit" },
	{ 0x5d0ab309, "devm_kstrdup" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe48ede9b, "snd_dma_free_pages" },
	{ 0xbcf0f4c2, "hda_codec_i915_exit" },
	{ 0x20f03797, "snd_hdac_ext_link_stream_start" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2d9c2813, "snd_soc_hdac_hda_get_ops" },
	{ 0xdfcf815f, "snd_hdac_ext_bus_device_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1af97799, "snd_hdac_link_free_all" },
	{ 0x7a08191c, "snd_hdac_ext_link_stream_setup" },
	{ 0xed45d60a, "snd_hdac_ext_bus_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5617326, "hda_codec_jack_wake_enable" },
	{ 0xedc03953, "iounmap" },
	{ 0xaff5b027, "sof_io_write64" },
	{ 0x39835b06, "hda_codec_probe_bus" },
	{ 0x6741a0df, "snd_hdac_ext_link_stream_clear" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb6961348, "snd_hdac_bus_update_rirb" },
	{ 0xb8dca6d7, "snd_soc_dai_set_tdm_slot" },
	{ 0x67847d10, "intel_nhlt_get_dmic_geo" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd896140f, "snd_hdac_ext_bus_link_power_down_all" },
	{ 0x19a1274b, "sof_block_read" },
	{ 0x8d2751e3, "hda_codec_jack_check" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-pcm,snd-sof,snd-sof-intel-hda,snd-intel-nhlt,snd-hda-ext-core,snd-hda-core,snd-soc-core,snd-soc-hdac-hda");


MODULE_INFO(srcversion, "4AD4006CA8F753CA019749D");
