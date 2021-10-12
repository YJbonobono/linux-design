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
	{ 0x57dbcb92, "iw_handler_get_thrspy" },
	{ 0x3fea57d8, "iw_handler_set_thrspy" },
	{ 0x1604b82c, "iw_handler_get_spy" },
	{ 0x3fe0270d, "iw_handler_set_spy" },
	{ 0xbb068ab, "cfg80211_wext_giwname" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x8b2790e4, "libipw_xmit" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcc1156d, "libipw_set_geo" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x943dd9d, "libipw_networks_age" },
	{ 0x9601035f, "request_firmware" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x6833822f, "netif_rx" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0x64c70dee, "libipw_rx_mgt" },
	{ 0x1591204d, "libipw_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x5ccbaaf5, "libipw_txb_free" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x1d719025, "libipw_freq_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7d1aa43a, "libipw_wx_set_encode" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xb482e951, "libipw_wx_get_scan" },
	{ 0x1e65a399, "libipw_wx_get_encode" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb45adbb2, "libipw_wx_set_encodeext" },
	{ 0xe09fc282, "libipw_wx_get_encodeext" },
	{ 0x3a4dbb3d, "libipw_channel_to_index" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x198af49a, "wiphy_rfkill_set_hw_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0x349cba85, "strchr" },
	{ 0xa7772f61, "libipw_is_valid_channel" },
	{ 0x2a46d12, "libipw_get_geo" },
	{ 0x754d539c, "strlen" },
	{ 0xb832485a, "consume_skb" },
	{ 0x125cde80, "free_libipw" },
	{ 0xe296672d, "register_netdev" },
	{ 0x25a9cb, "alloc_libipw" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5850110, "printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,libipw");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002701bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002702bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002711bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002712bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002721bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002722bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002731bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002732bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv0000103Csd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002742bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002751bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002752bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002753bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002754bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002761bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002762bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004224sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "60237B8495EFF30A2F7123C");
