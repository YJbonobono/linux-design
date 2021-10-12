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
	{ 0x3f2dbfa3, "__mt76_poll" },
	{ 0x3dbd7962, "mt76_sw_scan" },
	{ 0x9f3a980c, "mt76x02_conf_tx" },
	{ 0xcb330c48, "mt76x02_ampdu_action" },
	{ 0x18da1370, "mt76u_stop_rx" },
	{ 0xddebdcad, "mt76x02u_exit_beacon_config" },
	{ 0xc6c0ca8d, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6647c88f, "mt76u_vendor_request" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0x51bba8fd, "mt76x02u_init_beacon_config" },
	{ 0x6f74234a, "mt76u_stop_tx" },
	{ 0x834c9cc8, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x377e44e6, "mt76x0_mac_start" },
	{ 0xfee7cf0d, "mt76x02_bss_info_changed" },
	{  0x67c76, "mt76x0_init_hardware" },
	{ 0xb7cc48e6, "mt76_sta_state" },
	{ 0x1e47e02a, "mt76x02_set_rts_threshold" },
	{ 0xf5d67600, "mt76x02u_tx_prepare_skb" },
	{ 0x1e73bd29, "mt76x02u_init_mcu" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x645126b7, "mt76_get_survey" },
	{ 0x7f1ca3c7, "mt76u_init" },
	{ 0x8e060525, "mt76x02u_mcu_fw_send_data" },
	{ 0x3a59beec, "mt76x0_mac_stop" },
	{ 0xd78e77b4, "mt76x02_sta_add" },
	{ 0x2727315f, "mt76x02_tx_status_data" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc34e4d85, "mt76x02_sta_remove" },
	{ 0xb37a0d3f, "mt76x02_tx" },
	{ 0x18229701, "__mt76_poll_msec" },
	{ 0x3a7ce08a, "mt76x02_sw_scan_complete" },
	{ 0xfa18a8e4, "mt76_set_tim" },
	{ 0x13eb1c80, "mt76x0_phy_calibrate" },
	{ 0x4eb3497a, "mt76x02u_mcu_fw_reset" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1c4b6604, "mt76x0_register_device" },
	{ 0xa37919db, "mt76x0_config" },
	{ 0x3057d1d2, "ieee80211_queue_delayed_work" },
	{ 0xe10e1977, "mt76u_queues_deinit" },
	{ 0x3784a748, "mt76x02_queue_rx_skb" },
	{ 0xcb4bfaeb, "mt76x0_chip_onoff" },
	{ 0x3be2e19d, "mt76x02_configure_filter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x70b63050, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c2d0a87, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd14fa47b, "mt76x02_sta_rate_tbl_update" },
	{ 0xf72b4305, "mt76u_resume_rx" },
	{ 0x1e6ce5a0, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c7df27d, "mt76_wake_tx_queue" },
	{ 0x881f311a, "mt76_get_txpower" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x49a5d34b, "mt76_release_buffered_frames" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x6c8821b3, "mt76x02_set_key" },
	{ 0x3c6e6305, "firmware_request_nowarn" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x66e46050, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "13DBD37545D52ED76C7B512");
