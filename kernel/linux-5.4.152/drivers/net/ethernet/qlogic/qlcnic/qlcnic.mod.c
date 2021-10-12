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
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xcbd5c266, "device_remove_bin_file" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0x6f846d3c, "dcbnl_cee_notify" },
	{ 0xf18898ab, "sysfs_remove_bin_file" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xce661d31, "dev_mc_add_excl" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xe5a1dd33, "dev_uc_add_excl" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xee25e17e, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf4d03bfe, "in_dev_finish_destroy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x1fa2a96e, "pci_reset_function" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x908304ba, "dcb_getapp" },
	{ 0x9cf2a998, "dcb_setapp" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x14a9fd4d, "ndo_dflt_fdb_del" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x90c5fce9, "dev_mc_del" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x79c231b3, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe70ff90d, "vlan_dev_real_dev" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x83af34b5, "ndo_dflt_fdb_add" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x7bf3c757, "device_create_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x16a2895a, "dev_uc_del" },
	{ 0x9601035f, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x24a09bf3, "pci_vfs_assigned" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1632f101, "pci_find_ext_capability" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001077d00008020sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008030sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008430sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008830sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008C30sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008040sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00001077d00008440sv*sd*bc02sc00i00*");

MODULE_INFO(srcversion, "CBCF5A21B159C56C3FAA7E0");
