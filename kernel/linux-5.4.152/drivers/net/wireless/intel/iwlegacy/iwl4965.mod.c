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
	{ 0x24a34ef0, "il_init_channel_map" },
	{ 0xa3106f33, "ieee80211_rx_napi" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x7f97b454, "il_power_update_mode" },
	{ 0x6139a87c, "il_clear_ucode_stations" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9d64802, "il_get_free_ucode_key_idx" },
	{ 0x81fa749e, "il_send_cmd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x1b6837a1, "il_get_active_dwell_time" },
	{ 0xe8f5ccc, "il_dbgfs_unregister" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x924d91a2, "debugfs_create_u8" },
	{ 0x2e697772, "il_mac_change_interface" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x65d23960, "il_set_rate" },
	{ 0x58200e47, "il_rd_prph" },
	{ 0xc23f1ce5, "il_power_initialize" },
	{ 0x9745e854, "il_txq_update_write_ptr" },
	{ 0x565a4ec3, "il_free_geos" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x812a4e13, "il_wr_prph" },
	{ 0x70d2ebda, "il_send_lq_cmd" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29470c1c, "il_send_rxon_timing" },
	{ 0x1f118512, "il_write_targ_mem" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8395ecbe, "il_hdl_error" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6f126529, "il_get_passive_dwell_time" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x9cc714af, "il_bg_watchdog" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb2d8ad22, "il_init_geos" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x24b5c889, "il_set_rxon_hwcrypto" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xefe8d680, "il_connection_init_rx_config" },
	{ 0x1e77f609, "il_send_cmd_sync" },
	{ 0xaa56dbde, "il_force_reset" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0xcc86c8, "il_eeprom_query_addr" },
	{ 0xaff55441, "il_tx_queue_init" },
	{ 0x57d993df, "il_get_lowest_plcp" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfc40da7d, "ieee80211_stop_queue" },
	{ 0xe8a11324, "il_get_channel_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x517d5310, "il_tx_queue_unmap" },
	{ 0xa879bb9f, "il_hdl_pm_sleep" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x32df5a34, "il_fill_probe_req" },
	{ 0x1fcf717c, "il_mac_reset_tsf" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xad038dd8, "il_mac_conf_tx" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x477cece8, "il_cmd_queue_unmap" },
	{ 0xe4a323a1, "il_set_rxon_channel" },
	{ 0xb812226, "il_send_bt_config" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc7c7e91, "il_mac_tx_last_beacon" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdaa07a55, "il_tx_queue_free" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4f0ba18, "il_init_scan_params" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfd105716, "ieee80211_rate_control_register" },
	{ 0xb83dfc4c, "il_full_rxon_required" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0xc983f752, "il_rx_queue_update_write_ptr" },
	{ 0xc71039aa, "_il_grab_nic_access" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x63619e76, "il_mac_config" },
	{ 0xe25ad320, "il_clear_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6c77333f, "_il_poll_bit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfc89cba3, "il_leds_init" },
	{ 0x51900022, "ieee80211_sta_block_awake" },
	{ 0xc838035, "il_mac_sta_remove" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x517276e0, "il_set_tx_power" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6298e1cf, "il_mac_remove_interface" },
	{ 0xa471fd16, "il_set_decrypted_flag" },
	{ 0xb8b01f7d, "il_setup_rx_scan_handlers" },
	{ 0x54d1495b, "il_send_add_sta" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3576e49f, "il_dealloc_bcast_stations" },
	{ 0x7fb260c3, "il_mac_hw_scan" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x9e5a1308, "il_cancel_scan_deferred_work" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x66226295, "il_tx_queue_reset" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa4bb4a2e, "il_remove_station" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd82ab607, "il_set_flags_for_band" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2bf7eea6, "il_queue_space" },
	{ 0x6d6248c7, "il_eeprom_init" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x80686adc, "pci_disable_link_state" },
	{ 0x5b7ff4a3, "il_mac_add_interface" },
	{ 0xcd5120ad, "il_restore_stations" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb7bd33ff, "il_isr" },
	{ 0xc7749852, "il_leds_exit" },
	{ 0x5ef999e, "il_scan_cancel_timeout" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1feea542, "il_free_txq_mem" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6c20eaa4, "il_apm_init" },
	{ 0xd989c156, "il_cmd_queue_free" },
	{ 0xe1c54c3b, "il_add_beacon_time" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbf896d3e, "il_apm_stop" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4a8184b, "ieee80211_wake_queue" },
	{ 0xe0d03e21, "il_setup_watchdog" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x23681612, "ieee80211_rate_control_unregister" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x555ab32b, "ieee80211_restart_hw" },
	{ 0x4b7a3e88, "il_rx_queue_space" },
	{ 0xe6252e8c, "il_irq_handle_error" },
	{ 0x3521f68f, "il_check_rxon_cmd" },
	{ 0x980109db, "il_tx_cmd_complete" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0xc189f76, "il_tx_cmd_protection" },
	{ 0x227c79cb, "il_hdl_pm_debug_stats" },
	{ 0xe4d93697, "il_add_station_common" },
	{ 0x37a0cba, "kfree" },
	{ 0x58f76082, "il_dbgfs_register" },
	{ 0xb3b33a4d, "il_read_targ_mem" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd1735b40, "ieee80211_start_tx_ba_session" },
	{ 0x93ab8c95, "il_set_bit" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0xedc03953, "iounmap" },
	{ 0xf70a693b, "il_bcast_addr" },
	{ 0x3047dd89, "il_mac_flush" },
	{ 0xf47acc7f, "il_hdl_csa" },
	{ 0x839fbfe2, "il_free_channel_map" },
	{ 0xe71dae89, "il_scan_cancel" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xee1dc4e, "il_setup_scan_deferred_work" },
	{ 0x26e97bb8, "ieee80211_get_tkip_p2k" },
	{ 0x96848186, "scnprintf" },
	{ 0xb41fc396, "il_hdl_spectrum_measurement" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0xb604b36, "il_usecs_to_beacons" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb27a92a6, "il_is_ht40_tx_allowed" },
	{ 0xe1ea0094, "il_update_stats" },
	{ 0x207364c6, "il_alloc_txq_mem" },
	{ 0xc3108f85, "il_send_cmd_pdu" },
	{ 0xfa7ee533, "il_mac_bss_info_changed" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x36922df, "_il_apm_stop" },
	{ 0x3f44762b, "il_eeprom_query16" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc0da74b5, "il_chswitch_done" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x9d414f38, "il_prep_station" },
	{ 0x76e8e201, "ieee80211_chswitch_done" },
	{ 0xef77ff8c, "il_send_cmd_pdu_async" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7ed80c9d, "il_set_rxon_ht" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb6a01205, "il_rx_queue_alloc" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa1414741, "il_eeprom_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb03d07e3, "ieee80211_stop_tx_ba_session" },
	{ 0xe8843aa0, "il_pm_ops" },
	{ 0x77685c12, "il_send_stats_request" },
};

MODULE_INFO(depends, "iwlegacy,mac80211,cfg80211");

MODULE_ALIAS("pci:v00008086d00004229sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004230sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A35674D06A613A18A69A30F");
