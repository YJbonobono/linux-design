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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xdf4b72f1, "rt2x00mac_tx_frames_pending" },
	{ 0x16a88f4b, "rt2x00mac_get_ringparam" },
	{ 0xf43b34e1, "rt2x00mac_flush" },
	{ 0x7e3690ec, "rt2x00mac_rfkill_poll" },
	{ 0xa1d2e15, "rt2800_get_survey" },
	{ 0xadd52083, "rt2800_ampdu_action" },
	{ 0xd3623b74, "rt2800_get_tsf" },
	{ 0x3d16e2f2, "rt2800_conf_tx" },
	{ 0x81f269ca, "rt2800_sta_remove" },
	{ 0x4135683, "rt2800_sta_add" },
	{ 0x35b8ff21, "rt2800_set_rts_threshold" },
	{ 0x9bc15f1a, "rt2800_get_key_seq" },
	{ 0x9e31fcd6, "rt2x00mac_get_stats" },
	{ 0x38fc7bac, "rt2x00mac_sw_scan_complete" },
	{ 0x2cabd75d, "rt2x00mac_sw_scan_start" },
	{ 0x5b8fd86d, "rt2x00mac_set_key" },
	{ 0x8279d3f5, "rt2x00mac_set_tim" },
	{ 0xc68bcf91, "rt2x00mac_configure_filter" },
	{ 0xa9dde37b, "rt2x00mac_bss_info_changed" },
	{ 0x38c7ea7d, "rt2x00mac_config" },
	{ 0x76587cdf, "rt2x00mac_remove_interface" },
	{ 0x93b2745f, "rt2x00mac_add_interface" },
	{ 0x26066346, "rt2x00mac_stop" },
	{ 0x44e1911, "rt2x00mac_start" },
	{ 0x8382022a, "rt2x00mac_tx" },
	{ 0x1489080c, "rt2x00usb_regbusy_read" },
	{ 0x7b842ca7, "rt2800_pre_reset_hw" },
	{ 0xbe04a2f8, "rt2800_config" },
	{ 0xd9daf2a6, "rt2800_config_ant" },
	{ 0xad628b1c, "rt2800_config_erp" },
	{ 0x82ceca3c, "rt2800_config_intf" },
	{ 0xb3a49d0f, "rt2800_config_filter" },
	{ 0x712ee783, "rt2800_config_pairwise_key" },
	{ 0xee55dae2, "rt2800_config_shared_key" },
	{ 0xa2cf0a75, "rt2800_clear_beacon" },
	{ 0xd2eabff7, "rt2800_write_beacon" },
	{ 0x9b6581, "rt2800_write_tx_data" },
	{ 0xff75c4cf, "rt2x00usb_flush_queue" },
	{ 0x950e7f1b, "rt2x00usb_kick_queue" },
	{ 0x4c7485df, "rt2800_watchdog" },
	{ 0xc330db0b, "rt2800_vco_calibration" },
	{ 0x230abf28, "rt2800_gain_calibration" },
	{ 0x5032f2a, "rt2800_link_tuner" },
	{ 0x6501c1f9, "rt2800_reset_tuner" },
	{ 0x96f728b6, "rt2800_link_stats" },
	{ 0x9828e12d, "rt2800_rfkill_poll" },
	{ 0xcfebc423, "rt2x00usb_clear_entry" },
	{ 0x62f8c1d9, "rt2x00usb_uninitialize" },
	{ 0x49aa1b59, "rt2x00usb_initialize" },
	{ 0xffb2e2e1, "rt2800_load_firmware" },
	{ 0xbd983b5c, "rt2800_check_firmware" },
	{ 0x9ab7c009, "rt2x00usb_resume" },
	{ 0x835cce80, "rt2x00usb_suspend" },
	{ 0xfdf18ca9, "rt2x00usb_disconnect" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x219bd4ca, "rt2800_disable_radio" },
	{ 0xb15d00c2, "rt2800_enable_radio" },
	{ 0xf58bf7e8, "rt2800_wait_wpdma_ready" },
	{ 0xa8466ea3, "rt2800_mcu_request" },
	{ 0xa946facd, "rt2800_get_txwi_rxwi_size" },
	{ 0x3b894aef, "rt2800_probe_hw" },
	{ 0xdf8f877d, "rt2800_txdone_nostatus" },
	{ 0x96051861, "rt2800_txdone" },
	{ 0x361f6ebe, "rt2800_efuse_detect" },
	{ 0x84888d0d, "rt2800_read_eeprom_efuse" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x3ae3faf2, "rt2800_txstatus_pending" },
	{ 0xcedbfac4, "rt2800_txstatus_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4791558f, "rt2x00usb_register_read_async" },
	{ 0x640d8baa, "rt2800_process_rxwi" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x9b553753, "skb_pull" },
	{ 0xf330c779, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x81118a38, "rt2800_wait_csr_ready" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c350c3c, "rt2x00usb_vendor_request_buff" },
	{ 0x37a0cba, "kfree" },
	{ 0x2673085c, "rt2x00usb_vendor_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x99c91bb9, "rt2x00queue_get_entry" },
	{ 0x3b639ad0, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2x00usb");

MODULE_ALIAS("usb:v07B8p2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1482p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C5p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0740d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1732d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1742d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1784d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1761p0B05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3247d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3273d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp8053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp805Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp815Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp825Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp825Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp935Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp935Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p015Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p016Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01EEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01FDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C15d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C16d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3317d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp7712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pB307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p4085d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7717d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7718d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp1480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp14A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9708d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9709d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0945d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0947d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0948d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0162d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0163d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0164d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0166d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3871d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6899d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p870Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p899Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75pA200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20B8p8888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A32p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p2018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap6618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap8522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0164d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p5257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3416d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3418d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p343Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp945Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p20DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp8070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0163d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0165d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0744d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0761d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p179Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v167Bp4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0944d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7733d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ADd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148FpF301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7733d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp094Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3365d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C15d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp1801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp1800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp23F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2126d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5372d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0253d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p724Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3073d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E0Bp9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E0Bp9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p166Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1760d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1761d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17A7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3262d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p012Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0148d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp14A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148FpF101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp094Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A6p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08B9p1197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApD522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0254d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vF201p5370d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "56A706FA135C50CEDE128AC");
