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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe296672d, "register_netdev" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x9601035f, "request_firmware" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x754d539c, "strlen" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8D87F7CC5737A47E9D22582");
