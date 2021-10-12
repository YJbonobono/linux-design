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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xb4ff527, "pci_sriov_set_totalvfs" },
	{ 0xdb8616f, "napi_consume_skb" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0xb63f7a28, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe9737013, "flow_rule_match_vlan" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x181f4f1a, "__page_frag_cache_drain" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x96f9ba49, "dca3_get_tag" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x9b3d43bf, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x975992d3, "eth_platform_get_mac_address" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x131ae927, "pci_device_is_present" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xefcfa823, "dca_add_requester" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x4ea5d10, "ksize" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x466e1228, "build_skb" },
	{ 0xd59ddfce, "flow_rule_match_basic" },
	{ 0x1651f144, "flow_block_cb_setup_simple" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda9d2b1e, "eth_get_headlen" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x219ce549, "__hw_addr_unsync_dev" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x83af34b5, "ndo_dflt_fdb_add" },
	{ 0x600f472a, "pm_schedule_suspend" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xdcc32c42, "ptp_find_pin" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x277b79a7, "dev_trans_start" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0x860a1ab5, "flow_rule_match_eth_addrs" },
	{ 0xfc9a6fcf, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x24a09bf3, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xb832485a, "consume_skb" },
	{ 0x120cbdbb, "dca_remove_requester" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x911c9e1e, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x3b223a39, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "dca,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "43E2BAC727B5B812AE6D20D");
