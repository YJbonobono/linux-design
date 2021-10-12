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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x8096ab55, "ptp_schedule_worker" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x36e03f58, "phy_ethtool_get_wol" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x85683c3f, "phy_support_asym_pause" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7033429a, "devm_mdiobus_alloc_size" },
	{ 0x8ba0b748, "phy_ethtool_get_eee" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x63200ae6, "phy_start_aneg" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bc9a9db, "phy_remove_link_mode" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xfa128dfb, "phy_find_first" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe296672d, "register_netdev" },
	{ 0xbd6841d4, "crc16" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2c603c73, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa8629c87, "phy_init_eee" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x83a6a7df, "eth_prepare_mac_addr_change" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x43df2fa3, "phy_ethtool_set_wol" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x2196534, "pci_prepare_to_sleep" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x422dad30, "phy_ethtool_set_eee" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A3F69931C9DF3A77FC98F18");
