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
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x3f2dbfa3, "__mt76_poll" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x3dbd7962, "mt76_sw_scan" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x9f3a980c, "mt76x02_conf_tx" },
	{ 0xcb330c48, "mt76x02_ampdu_action" },
	{ 0x4acf3041, "mt76x02_mcu_cleanup" },
	{ 0xe8a9664, "mt76x02_tx_prepare_skb" },
	{ 0xc6c0ca8d, "mt76x02_add_interface" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xfee7cf0d, "mt76x02_bss_info_changed" },
	{  0x67c76, "mt76x0_init_hardware" },
	{ 0x94d1a6f6, "mt76x02_mcu_msg_send" },
	{ 0xb7cc48e6, "mt76_sta_state" },
	{ 0xb4ac3919, "mt76x02_tx_complete_skb" },
	{ 0x1e47e02a, "mt76x02_set_rts_threshold" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x645126b7, "mt76_get_survey" },
	{ 0x3a59beec, "mt76x0_mac_stop" },
	{ 0x539bf561, "mt76_unregister_device" },
	{ 0xd78e77b4, "mt76x02_sta_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc34e4d85, "mt76x02_sta_remove" },
	{ 0x2de8f3ed, "mt76_mmio_init" },
	{ 0xb37a0d3f, "mt76x02_tx" },
	{ 0x18229701, "__mt76_poll_msec" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0x3a7ce08a, "mt76x02_sw_scan_complete" },
	{ 0xfa18a8e4, "mt76_set_tim" },
	{ 0x13eb1c80, "mt76x0_phy_calibrate" },
	{ 0x8d4de297, "mt76x02_rx_poll_complete" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1c4b6604, "mt76x0_register_device" },
	{ 0xa37919db, "mt76x0_config" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x3784a748, "mt76x02_queue_rx_skb" },
	{ 0xcb4bfaeb, "mt76x0_chip_onoff" },
	{ 0xfd0613ac, "mt76_free_device" },
	{ 0x3be2e19d, "mt76x02_configure_filter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x70b63050, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6e404767, "mt76x02_set_coverage_class" },
	{ 0x8c2d0a87, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb222268b, "mt76x02_dma_cleanup" },
	{ 0xd14fa47b, "mt76x02_sta_rate_tbl_update" },
	{ 0x1e6ce5a0, "mt76x02_sta_ps" },
	{ 0xba500b8d, "mt76x02e_init_beacon_config" },
	{ 0x8c7df27d, "mt76_wake_tx_queue" },
	{ 0x5de9a007, "mt76x02_dma_disable" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x881f311a, "mt76_get_txpower" },
	{ 0x9601035f, "request_firmware" },
	{ 0x49a5d34b, "mt76_release_buffered_frames" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x6c8821b3, "mt76x02_set_key" },
	{ 0x86e85c0a, "mt76x02_set_ethtool_fwver" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8d9351b6, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76x0-common,mac80211");

MODULE_ALIAS("pci:v000014C3d00007630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007650sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D62B9C57FFA9D3B3E4ABA9F");
