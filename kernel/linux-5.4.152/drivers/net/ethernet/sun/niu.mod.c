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
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x55e77e8, "jiffies_64" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xef4b66f5, "pcie_capability_clear_and_set_word" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x581cf443, "skb_push" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x9b553753, "skb_pull" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb832485a, "consume_skb" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x60eeacfe, "netdev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABCDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD3C9BFB6472D9CC296F066");
