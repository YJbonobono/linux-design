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
	{ 0x1cc79b3c, "devlink_port_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfef1b78f, "dcb_ieee_setapp" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x145cb4f8, "devlink_port_params_register" },
	{ 0xbbe43b2, "dcb_ieee_delapp" },
	{ 0x179185c9, "__page_pool_put_page" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x976a8c2b, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x234cf416, "devlink_fmsg_string_pair_put" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0x7002bd8b, "napi_hash_del" },
	{ 0x9b60d980, "xdp_rxq_info_reg" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x75eab318, "page_pool_unmap_page" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xad090817, "netdev_set_num_tc" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x378a48b7, "metadata_dst_alloc" },
	{ 0xe468a63d, "tcp_gro_complete" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbd3acca9, "page_pool_alloc_pages" },
	{ 0x4186f5da, "xdp_rxq_info_unreg" },
	{ 0xe9737013, "flow_rule_match_vlan" },
	{ 0xb6e93642, "pcie_print_link_status" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xcae66e13, "bpf_prog_add" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x394116a5, "flow_rule_match_enc_ports" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x43688b2c, "devlink_alloc" },
	{ 0x850bb6db, "devlink_health_reporter_destroy" },
	{ 0x2a8aa780, "devlink_params_register" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x38fe7997, "netdev_reset_tc" },
	{ 0x6dda5adb, "rps_may_expire_flow" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xf4410b18, "xdp_return_frame_rx_napi" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4220e6a, "netdev_set_tc_queue" },
	{ 0x5972ee75, "flow_rule_match_ipv6_addrs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x386b34cb, "flow_rule_match_ports" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0x13272446, "page_pool_create" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x1692d910, "devlink_params_publish" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe296672d, "register_netdev" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x820426c4, "pcie_flr" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e121547, "dev_close" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x4b9ff8e3, "devlink_port_params_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x305bbf03, "xdp_return_frame" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa5194d1b, "devlink_port_unregister" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x466e1228, "build_skb" },
	{ 0xd59ddfce, "flow_rule_match_basic" },
	{ 0x1651f144, "flow_block_cb_setup_simple" },
	{ 0xa42bd62a, "xdp_rxq_info_is_reg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda9d2b1e, "eth_get_headlen" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x70eae732, "flow_rule_match_enc_ipv4_addrs" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f52071a, "net_dim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe40bb23e, "devlink_health_reporter_priv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x8b3bcaf3, "flow_rule_match_icmp" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x987afca2, "xdp_rxq_info_reg_mem_model" },
	{ 0xe4bb162f, "netdev_port_same_parent_id" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x8a7a4f7d, "flow_rule_match_ipv4_addrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0xc80afa88, "devlink_free" },
	{ 0xb1712948, "xdp_do_redirect" },
	{ 0x6cfa3e0a, "page_pool_destroy" },
	{  0xbcc7a, "devlink_register" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x93edef07, "devlink_health_report" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x53320146, "devlink_port_attrs_set" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0x860a1ab5, "flow_rule_match_eth_addrs" },
	{ 0xfc9a6fcf, "pci_num_vf" },
	{ 0xfec4b9c6, "devlink_params_unregister" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7e90032c, "devlink_health_reporter_create" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x9763df23, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0x893abbdd, "devlink_fmsg_u32_pair_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x24a09bf3, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x6b6e4fab, "devlink_unregister" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xe6c73091, "bpf_prog_put" },
	{ 0x1632f101, "pci_find_ext_capability" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xfc5f5c3a, "flow_rule_match_enc_keyid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x53e947e9, "devlink_port_type_eth_set" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7296727E01B7108DDB73E7E");
