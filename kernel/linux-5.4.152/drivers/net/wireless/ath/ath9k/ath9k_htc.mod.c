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
	{ 0xa3106f33, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x20a9ef14, "ath9k_hw_set_txq_props" },
	{ 0x804a51b8, "ieee80211_csa_finish" },
	{ 0xa93a3d5b, "ath9k_hw_init" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9500a876, "ath9k_cmn_get_channel" },
	{ 0xa0bb5268, "ath9k_hw_deinit" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x47e87d65, "ath9k_hw_set_gpio" },
	{ 0xaf0888a6, "ath9k_cmn_init_crypto" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0xc3ccdf1d, "ath9k_cmn_process_rate" },
	{ 0xdb77c2d4, "ieee80211_csa_is_complete" },
	{ 0x638473e9, "ath9k_hw_btcoex_enable" },
	{ 0x553df429, "ath9k_hw_wait" },
	{ 0x1154d004, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x8cc79b1d, "ath9k_hw_stopdmarecv" },
	{ 0x211a5621, "ath_key_delete" },
	{ 0x86c0a922, "ath9k_cmn_update_txpow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0xe12acdff, "ath9k_hw_gpio_get" },
	{ 0x1db26282, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x670534e6, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xdaf9c5b7, "ath9k_hw_setrxfilter" },
	{ 0xf4ad594d, "ath9k_hw_get_txq_props" },
	{ 0xc040eb46, "ath9k_hw_releasetxqueue" },
	{ 0xbb92d99d, "ath9k_hw_reset_tsf" },
	{ 0x11b2f99d, "ath9k_cmn_spectral_init_debug" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xabe27a37, "wiphy_rfkill_start_polling" },
	{ 0x97da3b07, "usb_get_urb" },
	{ 0xfdcb31ff, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x30504286, "ath9k_cmn_spectral_deinit_debug" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2e3f91f8, "ath9k_cmn_init_channels_rates" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xe61135ed, "ieee80211_tx_status" },
	{ 0xd7724805, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc37f3ef9, "ath9k_hw_setopmode" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5d305cae, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2dbce864, "ath9k_hw_resettxqueue" },
	{ 0xb428b020, "ath9k_hw_gettsf64" },
	{ 0xd44aad8e, "ath_cmn_process_fft" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xcd0d1d23, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xe298ce12, "ath9k_hw_set_tsfadjust" },
	{ 0x273cc34c, "ath9k_cmn_beacon_config_ap" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0xb76fccc7, "ath9k_cmn_debug_stat_rx" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5b929738, "ath9k_hw_btcoex_disable" },
	{ 0x2dbfd70, "ath9k_hw_getrxfilter" },
	{ 0xe0663b94, "ath9k_hw_ani_monitor" },
	{ 0x457cd903, "ath_is_mybeacon" },
	{ 0x951ac2e1, "ath9k_cmn_beacon_config_adhoc" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xac68e2a0, "ath9k_cmn_process_rssi" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x30357696, "ath9k_cmn_debug_base_eeprom" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5776b96e, "ath9k_cmn_debug_recv" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x45655ad3, "wiphy_rfkill_stop_polling" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7afe0743, "ath9k_hw_write_associd" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xdfe1ea72, "ath_reg_notifier_apply" },
	{ 0xd59a07c2, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1a29e0b2, "ath9k_hw_init_btcoex_hw" },
	{ 0x6a4e3f81, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xf472e0f, "ath9k_cmn_debug_phy_err" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x33c0c61b, "ath9k_hw_beaconq_setup" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xadaec007, "ath9k_hw_name" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x37678d54, "ath9k_cmn_spectral_scan_trigger" },
	{ 0x82ffbed, "ath9k_hw_init_global_settings" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x7784fa28, "ath9k_hw_settsf64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xe9cbe004, "ath9k_hw_beaconinit" },
	{ 0xa518601e, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaee05e8a, "ieee80211_get_buffered_bc" },
	{ 0x9916e34c, "usb_interrupt_msg" },
	{ 0x3d98164f, "ath9k_hw_gpio_free" },
	{ 0xc78d5a2d, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6986a834, "ath9k_hw_setrxabort" },
	{ 0x84425102, "ath9k_cmn_beacon_config_sta" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc5d5b0c1, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdf0c742a, "ath9k_cmn_rx_skb_postprocess" },
	{ 0xbefdb5ca, "ath9k_hw_phy_disable" },
	{ 0x8a4aeaff, "__ieee80211_get_radio_led_name" },
	{ 0x6d0f4e5e, "ieee80211_get_hdrlen_from_skb" },
	{ 0x23d59944, "ath9k_hw_setpower" },
	{ 0xdc0282eb, "__ieee80211_create_tpt_led_trigger" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x4a74fe65, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a63c4a, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9dccd32c, "ath9k_hw_setmcastfilter" },
	{ 0xd1735b40, "ieee80211_start_tx_ba_session" },
	{ 0x30782044, "ath9k_hw_gpio_request_out" },
	{ 0xeeaa5bd6, "ath9k_hw_startpcureceive" },
	{ 0x998faff9, "ath9k_hw_setuptxqueue" },
	{ 0x96848186, "scnprintf" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0xe3236a08, "ath9k_hw_reset" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x95d4c66e, "ath9k_cmn_rx_accept" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x44bff846, "ath9k_hw_btcoex_init_3wire" },
	{ 0xc6bd4037, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd60c37ad, "ath9k_cmn_debug_modal_eeprom" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x7fbcc5cc, "ath9k_hw_reset_calvalid" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9cefe590, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E69DFD901A88D4F6DC75DB0");
