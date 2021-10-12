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
	{ 0x2d3385d3, "system_wq" },
	{ 0x3fea57d8, "iw_handler_set_thrspy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17726e51, "wiphy_free" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xc4464103, "cfg80211_inform_bss_data" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x92d103c9, "cfg80211_wext_siwscan" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x93ef1f45, "cfg80211_wext_giwretry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5a43712a, "cfg80211_wext_siwmode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x86d5e384, "wireless_spy_update" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x1604b82c, "iw_handler_get_spy" },
	{ 0x30c76023, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe296672d, "register_netdev" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0xf6f18d62, "ieee80211_get_channel" },
	{ 0x581cf443, "skb_push" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xda0d0863, "cfg80211_wext_giwfrag" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xccdca6cb, "cfg80211_wext_siwrts" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x57dbcb92, "iw_handler_get_thrspy" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xe08329c5, "cfg80211_wext_giwrange" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8158571c, "cfg80211_wext_giwmode" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x3fe0270d, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb068ab, "cfg80211_wext_giwname" },
	{ 0x69acdf38, "memcpy" },
	{ 0x985dd96b, "cfg80211_wext_giwscan" },
	{ 0x9601035f, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3ba2e2e5, "cfg80211_wext_giwrts" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62c7be8, "cfg80211_wext_siwfrag" },
	{ 0xb832485a, "consume_skb" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A3005614B229A4D8DB60F5D");
