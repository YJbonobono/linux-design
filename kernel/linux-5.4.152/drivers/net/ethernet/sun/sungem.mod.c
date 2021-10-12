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
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8e0642a1, "sungem_phy_probe" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x750492d4, "pci_unmap_rom" },
	{ 0x4793e274, "pci_map_rom" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc5850110, "printk" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sungem_phy");

MODULE_ALIAS("pci:v0000108Ed00002BADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Ed00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000006Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "780951E1574574D6D82E063");
