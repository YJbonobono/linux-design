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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xcdfeb538, "mt76_get_min_avg_rssi" },
	{ 0x2a14f9be, "mt76_dma_attach" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x99d37a56, "mt76_rx_aggr_stop" },
	{ 0x3f2dbfa3, "__mt76_poll" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x3dbd7962, "mt76_sw_scan" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xfd205417, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1a081ea0, "mt76_rx_aggr_start" },
	{ 0x159589bb, "mt76_sw_scan_complete" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x27b1c769, "mt76_txq_schedule_all" },
	{ 0x852a0e55, "mt76_insert_ccmp_hdr" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x670534e6, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x356f95fc, "mt76_txq_init" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x729f49b4, "mt76_mcu_get_response" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0xaa0477ed, "mt76_tx_complete_skb" },
	{ 0xb7cc48e6, "mt76_sta_state" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x645126b7, "mt76_get_survey" },
	{ 0xe2a57e6b, "mt76_set_irq_mask" },
	{ 0x539bf561, "mt76_unregister_device" },
	{ 0xa25322ec, "mt76_eeprom_override" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0x2de8f3ed, "mt76_mmio_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x18229701, "__mt76_poll_msec" },
	{ 0xebd5814e, "mt76_set_channel" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xfa18a8e4, "mt76_set_tim" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0xcbf238a2, "mt76_register_device" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8c5dbb30, "mt76_eeprom_init" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0x9f13ad09, "mt76_tx_status_skb_done" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0xd59a07c2, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x30eb3cbc, "mt76_rx" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xfd0613ac, "mt76_free_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x197f5998, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe087cbb6, "mt76_csa_finish" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x40fd88f2, "mt76_tx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3877ad7, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfa43723, "mt76_register_debugfs" },
	{ 0x172e2fb5, "ieee80211_sta_set_buffered" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaee05e8a, "ieee80211_get_buffered_bc" },
	{ 0xeb1a64a4, "mt76_tx_status_check" },
	{ 0x8c2d0a87, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x6b4e3616, "mt76_dma_cleanup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x6be2d349, "mt76_mcu_rx_event" },
	{ 0x6d0f4e5e, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2bdfe17, "ieee80211_sta_eosp" },
	{ 0x37a0cba, "kfree" },
	{ 0x5efddb6d, "mt76_stop_tx_queues" },
	{ 0x2fc197f3, "ieee80211_tx_status_ext" },
	{ 0x8c7df27d, "mt76_wake_tx_queue" },
	{ 0x9097c8c, "mt76_get_rate" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x6376a512, "mt76_tx_status_skb_add" },
	{ 0xe0be550a, "mt76_csa_check" },
	{ 0x881f311a, "mt76_get_txpower" },
	{ 0x9601035f, "request_firmware" },
	{ 0x49a5d34b, "mt76_release_buffered_frames" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x475bf81, "mt76_tx_status_lock" },
	{ 0xbdaa0c89, "mt76_mcu_msg_alloc" },
	{ 0xad4f0bc2, "mt76_tx_status_skb_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb832485a, "consume_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x7d7af3b9, "mt76_txq_remove" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xefbf9789, "mt76_tx_status_unlock" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
};

MODULE_INFO(depends, "mt76,mac80211,cfg80211");

MODULE_ALIAS("pci:v000014C3d00007603sv*sd*bc*sc*i*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7628-wmac");
MODULE_ALIAS("of:N*T*Cmediatek,mt7628-wmacC*");

MODULE_INFO(srcversion, "EFD86E818F981FDF5547236");
