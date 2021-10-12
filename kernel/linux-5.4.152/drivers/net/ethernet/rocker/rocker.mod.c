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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x7ed78d03, "netdev_walk_all_lower_dev" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb786a461, "arp_tbl" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x90605836, "__neigh_create" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4ecee62a, "__neigh_event_send" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfc3bba0f, "unregister_fib_notifier" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x55521c7d, "fib4_rule_default" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x78381292, "init_net" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3c8cacf1, "free_fib_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x6cff3b90, "register_fib_notifier" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0x1bdcc606, "call_switchdev_notifiers" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x71044428, "pci_msix_vec_count" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B36d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2B81450988B5449985276D");
