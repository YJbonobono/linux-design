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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0x85683c3f, "phy_support_asym_pause" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x46599119, "phy_stop" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001055d0000E420sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "63E0F0F26AD6F1F2A4FAB10");
