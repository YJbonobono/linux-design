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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x6e9b46ef, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xd9da003, "netdev_alert" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x5a921311, "strncmp" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e121547, "dev_close" },
	{ 0x60eeacfe, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x705a73e5, "napi_get_frags" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x71dc307b, "__put_page" },
	{ 0x6f920789, "napi_gro_frags" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe589099e, "netdev_crit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001077d00008012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B85435CADDCD713ECAB26A5");
