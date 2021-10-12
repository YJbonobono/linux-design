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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x87a67f49, "single_open" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xd80065df, "seq_open" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb63f7a28, "__hw_addr_sync_dev" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x1208a414, "seq_putc" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x93b68215, "pcie_relaxed_ordering_enabled" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x705a73e5, "napi_get_frags" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x87d372fa, "seq_release" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x71dc307b, "__put_page" },
	{ 0x6f920789, "napi_gro_frags" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001425d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005813sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000581Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000581Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005889sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005891sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005892sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005893sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005894sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005895sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005896sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005897sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005898sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005899sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000680Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006889sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000688Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000688Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006892sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "41B4BC7299161C1C38D75ED");
