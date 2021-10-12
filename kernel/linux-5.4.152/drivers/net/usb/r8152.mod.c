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
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0xc2c5802, "work_busy" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5d258514, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x25de87c5, "usb_autopm_get_interface_async" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xacd3e017, "__skb_gso_segment" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf9386b0, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x7b956d58, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xea9cfac8, "usb_driver_set_configuration" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x30c76023, "free_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x825f1409, "usb_queue_reset_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x71dc307b, "__put_page" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb832485a, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "4D12B49CB062E106BCE9729");
