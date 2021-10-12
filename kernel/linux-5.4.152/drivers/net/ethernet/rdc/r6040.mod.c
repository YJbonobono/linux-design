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
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x46599119, "phy_stop" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb832485a, "consume_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0xe296672d, "register_netdev" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0xfa128dfb, "phy_find_first" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf10de535, "ioread8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc76eec56, "__napi_schedule_irqoff" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5534d64, "ioread16" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017F3d00006040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "01C55EAC77212EEAD740AE2");
