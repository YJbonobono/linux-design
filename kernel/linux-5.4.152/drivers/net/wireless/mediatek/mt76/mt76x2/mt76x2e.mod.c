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
	{ 0x74d8e7f9, "mt76x02_remove_interface" },
	{ 0x5e50561b, "mt76x02_mac_start" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xa5406674, "mt76x2_phy_set_txpower" },
	{ 0xd222b06d, "mt76x2_phy_set_txpower_regs" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x72c9e216, "mt76x2_read_rx_gain" },
	{ 0x3f2dbfa3, "__mt76_poll" },
	{ 0xf17c2d4e, "mt76x02_mac_wcid_setup" },
	{ 0x16243e4d, "mt76x2_get_temp_comp" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x3dbd7962, "mt76_sw_scan" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x5e51500c, "mt76x02_mcu_function_select" },
	{ 0x9f3a980c, "mt76x02_conf_tx" },
	{ 0x9cd51672, "mt76x02_mcu_calibrate" },
	{ 0xcb330c48, "mt76x02_ampdu_action" },
	{ 0x4acf3041, "mt76x02_mcu_cleanup" },
	{ 0xe8a9664, "mt76x02_tx_prepare_skb" },
	{ 0xb5dc962, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x77b67640, "mt76x02_dfs_init_params" },
	{ 0xc6c0ca8d, "mt76x02_add_interface" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x27b1c769, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x51d84d5d, "mt76x2_phy_update_channel_gain" },
	{ 0x917437ed, "mt76x02_init_agc_gain" },
	{ 0xfee7cf0d, "mt76x02_bss_info_changed" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0xa5c54a47, "mt76x2_phy_tssi_compensate" },
	{ 0x94d1a6f6, "mt76x02_mcu_msg_send" },
	{ 0xb7cc48e6, "mt76_sta_state" },
	{ 0xb4ac3919, "mt76x02_tx_complete_skb" },
	{ 0x1e47e02a, "mt76x02_set_rts_threshold" },
	{ 0x7cda4194, "mt76x2_mcu_init_gain" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x645126b7, "mt76_get_survey" },
	{ 0x3b0dfa36, "mt76x02_init_debugfs" },
	{ 0x8ecdd6f2, "mt76x2_init_txpower" },
	{ 0x48526443, "mt76x2_mcu_load_cr" },
	{ 0x539bf561, "mt76_unregister_device" },
	{ 0xd78e77b4, "mt76x02_sta_add" },
	{ 0xd8ca26b6, "mt76x2_eeprom_init" },
	{ 0xf208b16e, "mt76x02_edcca_init" },
	{ 0xc34e4d85, "mt76x02_sta_remove" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0x2de8f3ed, "mt76_mmio_init" },
	{ 0xb37a0d3f, "mt76x02_tx" },
	{ 0x18229701, "__mt76_poll_msec" },
	{ 0xe6fe376e, "mt76x02_init_device" },
	{ 0xebd5814e, "mt76_set_channel" },
	{ 0x3c544593, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0x2724b7f3, "mt76x02_phy_set_bw" },
	{ 0x3a7ce08a, "mt76x02_sw_scan_complete" },
	{ 0xfa18a8e4, "mt76_set_tim" },
	{ 0xcbf238a2, "mt76_register_device" },
	{ 0xaddc8e2, "mt76x02_mac_setaddr" },
	{ 0x8d4de297, "mt76x02_rx_poll_complete" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x3784a748, "mt76x02_queue_rx_skb" },
	{ 0xfd0613ac, "mt76_free_device" },
	{ 0x3be2e19d, "mt76x02_configure_filter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x792dd7d8, "mt76_pci_disable_aspm" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa8b2bf0f, "mt76x2_configure_tx_delay" },
	{ 0x70b63050, "mt76x02_update_channel" },
	{ 0x48c9fee9, "mt76x02_set_tx_ackto" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ee5de2c, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6e404767, "mt76x02_set_coverage_class" },
	{ 0x4dcb201a, "mt76x02_ext_pa_enabled" },
	{ 0x40d2cff5, "mt76x02_mac_shared_key_setup" },
	{ 0x8c2d0a87, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xd14fa47b, "mt76x02_sta_rate_tbl_update" },
	{ 0xb222268b, "mt76x02_dma_cleanup" },
	{ 0x1e6ce5a0, "mt76x02_sta_ps" },
	{ 0xddf42a0a, "mt76x2_apply_gain_adj" },
	{ 0xc8d196ea, "mt76_set_stream_caps" },
	{ 0xba500b8d, "mt76x02e_init_beacon_config" },
	{ 0x8c7df27d, "mt76_wake_tx_queue" },
	{ 0x9abf90cc, "mt76x02_mcu_set_radio_state" },
	{ 0x5de9a007, "mt76x02_dma_disable" },
	{ 0xa547e002, "mt76x2_mcu_set_channel" },
	{ 0xe84e8532, "mt76x2_reset_wlan" },
	{ 0x9d79e2a8, "mt76_write_mac_initvals" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x881f311a, "mt76_get_txpower" },
	{ 0x9601035f, "request_firmware" },
	{ 0x49a5d34b, "mt76_release_buffered_frames" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x6c8821b3, "mt76x02_set_key" },
	{ 0x399a43b4, "mt76x02_tx_set_txpwr_auto" },
	{ 0x86e85c0a, "mt76x02_set_ethtool_fwver" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8d9351b6, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74286626530837B22A3A2B5");
