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
	{ 0x8ee34296, "rt2x00mac_get_antenna" },
	{ 0x30cea0ce, "rt2x00mac_set_antenna" },
	{ 0xf43b34e1, "rt2x00mac_flush" },
	{ 0x7e3690ec, "rt2x00mac_rfkill_poll" },
	{ 0x4539c5e5, "rt2x00mac_conf_tx" },
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
	{ 0xff75c4cf, "rt2x00usb_flush_queue" },
	{ 0x950e7f1b, "rt2x00usb_kick_queue" },
	{ 0xf87c48d, "rt2x00usb_watchdog" },
	{ 0xcfebc423, "rt2x00usb_clear_entry" },
	{ 0x62f8c1d9, "rt2x00usb_uninitialize" },
	{ 0x49aa1b59, "rt2x00usb_initialize" },
	{ 0x9ab7c009, "rt2x00usb_resume" },
	{ 0x835cce80, "rt2x00usb_suspend" },
	{ 0xfdf18ca9, "rt2x00usb_disconnect" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa37c3bd6, "rt2x00lib_set_mac_address" },
	{ 0x2c36a676, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2673085c, "rt2x00usb_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf330c779, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x581cf443, "skb_push" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb832485a, "consume_skb" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c350c3c, "rt2x00usb_vendor_request_buff" },
	{ 0x3b639ad0, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C9B29288CE51AC926D77AF");
