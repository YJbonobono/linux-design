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
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xb0e602eb, "memmove" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xb832485a, "consume_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x78381292, "init_net" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110");
MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110C*");
MODULE_ALIAS("pci:v00001106d00003119sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B5B5E0233D9D0857B5B2703");
