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
	{ 0xf9a482f9, "msleep" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb63f7a28, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe296672d, "register_netdev" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x618911fc, "numa_node" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000019E5d00001822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d00000205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d00000210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EFE0D7A3F269E400E693345");
