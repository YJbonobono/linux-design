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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x5e121547, "dev_close" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xb832485a, "consume_skb" },
	{ 0x6a53c86d, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x6e1be8c6, "pci_release_selected_regions" },
	{ 0x6c37202d, "pci_request_selected_regions" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x71dc307b, "__put_page" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007B0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4FD73F8C576AB4484B6CB8D");
