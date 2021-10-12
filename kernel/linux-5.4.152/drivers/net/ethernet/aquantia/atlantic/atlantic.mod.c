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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e121547, "dev_close" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf7419e8e, "dev_open" },
	{ 0x466e1228, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda9d2b1e, "eth_get_headlen" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001D6Ad00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000000B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000007B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000008B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000009B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000011B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000012B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000080B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000087B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000088B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000089B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000091B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000092B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F70B4C7EE549B6838896071");
