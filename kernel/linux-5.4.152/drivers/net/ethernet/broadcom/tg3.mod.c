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
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0xc5850110, "printk" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x975992d3, "eth_platform_get_mac_address" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa916b694, "strnlen" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0x3b223a39, "pcie_capability_read_word" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8665082f, "pci_read_vpd" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x466e1228, "build_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1304e4e7, "phy_set_asym_pause" },
	{ 0x554b21fa, "phy_validate_pause" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x24d273d1, "add_timer" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x911c9e1e, "pcie_capability_write_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x131ae927, "pci_device_is_present" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0xacd3e017, "__skb_gso_segment" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb832485a, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0x85683c3f, "phy_support_asym_pause" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x74c13f64, "phy_ethtool_ksettings_set" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xef4b66f5, "pcie_capability_clear_and_set_word" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6006847, "current_task" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaffbbaa8, "phy_ethtool_ksettings_get" },
	{ 0x46599119, "phy_stop" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x63200ae6, "phy_start_aneg" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5792f848, "strlcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0x5e121547, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC0F3C21B2F5BC4435374D7");
