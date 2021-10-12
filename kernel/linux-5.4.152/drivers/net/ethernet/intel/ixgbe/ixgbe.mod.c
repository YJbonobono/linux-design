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
	{ 0x60443957, "mdio45_probe" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xfef1b78f, "dcb_ieee_setapp" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xbbe43b2, "dcb_ieee_delapp" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xb4ff527, "pci_sriov_set_totalvfs" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xdb8616f, "napi_consume_skb" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xc76eec56, "__napi_schedule_irqoff" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xb556c8fc, "dev_uc_add" },
	{ 0x7002bd8b, "napi_hash_del" },
	{ 0x9b60d980, "xdp_rxq_info_reg" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xad090817, "netdev_set_num_tc" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0xb63f7a28, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4186f5da, "xdp_rxq_info_unreg" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb6e93642, "pcie_print_link_status" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x38fe7997, "netdev_reset_tc" },
	{ 0x7e080d02, "xsk_set_tx_need_wakeup" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x89669af1, "netdev_bind_sb_channel_queue" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x181f4f1a, "__page_frag_cache_drain" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9b48007c, "netdev_walk_all_upper_dev_rcu" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x234afd94, "netdev_unbind_sb_channel" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xf4410b18, "xdp_return_frame_rx_napi" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x7033429a, "devm_mdiobus_alloc_size" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x1df393d9, "xsk_umem_discard_addr" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd4220e6a, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x96f9ba49, "dca3_get_tag" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x9b3d43bf, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x77ca08a5, "xsk_reuseq_prepare" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x908304ba, "dcb_getapp" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x7959c363, "netdev_set_sb_channel" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbb09085e, "dev_addr_del" },
	{ 0x155f002a, "xsk_umem_complete_tx" },
	{ 0x5df5485b, "netif_set_xps_queue" },
	{ 0xc5850110, "printk" },
	{ 0x975992d3, "eth_platform_get_mac_address" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xe296672d, "register_netdev" },
	{ 0x7a3bc212, "xsk_clear_rx_need_wakeup" },
	{ 0x5a921311, "strncmp" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x820426c4, "pcie_flr" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x1788200a, "dcb_ieee_getapp_mask" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x305bbf03, "xdp_return_frame" },
	{ 0xefcfa823, "dca_add_requester" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1387ccaf, "__skb_get_hash" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x466e1228, "build_skb" },
	{ 0x1651f144, "flow_block_cb_setup_simple" },
	{ 0xd3ab1669, "xsk_umem_peek_addr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda9d2b1e, "eth_get_headlen" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x58be53f5, "netdev_pick_tx" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x219ce549, "__hw_addr_unsync_dev" },
	{ 0xe348636, "dev_addr_add" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x39385f6d, "xsk_set_rx_need_wakeup" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x83af34b5, "ndo_dflt_fdb_add" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x987afca2, "xdp_rxq_info_reg_mem_model" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x38be204a, "xsk_umem_consume_tx" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcf1b822d, "netdev_features_change" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0xd7af6ca0, "xdp_rxq_info_unreg_mem_model" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0xb1712948, "xdp_do_redirect" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0xb3ab4ea9, "xdp_get_umem_from_qid" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x277b79a7, "dev_trans_start" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0xfc9a6fcf, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x2196534, "pci_prepare_to_sleep" },
	{ 0x15104c4d, "xsk_reuseq_swap" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7a4497db, "kzfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x667b72cb, "xdp_convert_zc_to_xdp_frame" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x9763df23, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x24a09bf3, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb832485a, "consume_skb" },
	{ 0x120cbdbb, "dca_remove_requester" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x9aaf2a13, "xsk_umem_consume_tx_done" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x242d6028, "xsk_umem_uses_need_wakeup" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe6c73091, "bpf_prog_put" },
	{ 0x1632f101, "pci_find_ext_capability" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x3b223a39, "pcie_capability_read_word" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x880a9eba, "dev_get_stats" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x9e0bcac1, "devm_mdiobus_free" },
	{ 0x104151fc, "xsk_reuseq_free" },
	{ 0x62aeb5fb, "secpath_set" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0xe589099e, "netdev_crit" },
};

MODULE_INFO(depends, "mdio,dca,xfrm_algo");

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001563sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F65B24C0F474D7616A10C06");
