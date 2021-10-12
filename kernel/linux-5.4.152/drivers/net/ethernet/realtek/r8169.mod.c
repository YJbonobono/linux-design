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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x46599119, "phy_stop" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xdb8616f, "napi_consume_skb" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xc24be6a4, "phy_resume" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x6e9b46ef, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x928c99f7, "phy_read_mmd" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0x81050a49, "phy_write_paged" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xef4b66f5, "pcie_capability_clear_and_set_word" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x7033429a, "devm_mdiobus_alloc_size" },
	{ 0x8ba0b748, "phy_ethtool_get_eee" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x63200ae6, "phy_start_aneg" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x8e9644da, "phy_mac_interrupt" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfbf6bc53, "phy_modify" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x975992d3, "eth_platform_get_mac_address" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe296672d, "register_netdev" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xab615ac1, "phy_speed_down" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd89bd8f5, "phy_modify_paged" },
	{ 0x60eeacfe, "netdev_printk" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9012c871, "phy_suspend" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x2c603c73, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x80686adc, "pci_disable_link_state" },
	{ 0x618911fc, "numa_node" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0x604b238a, "phy_speed_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x600f472a, "pm_schedule_suspend" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x80652c75, "genphy_soft_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xecff76fb, "phy_read_paged" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xd220966d, "phy_write_mmd" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x489865d4, "pci_dev_run_wake" },
	{ 0x422dad30, "phy_ethtool_set_eee" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x15af7f4, "system_state" },
	{ 0x9601035f, "request_firmware" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0xa18a4ee5, "pcim_set_mwi" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "54BE0BF4BB6C0188704459F");
