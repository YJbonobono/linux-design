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
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb832485a, "consume_skb" },
	{ 0xe296672d, "register_netdev" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc76eec56, "__napi_schedule_irqoff" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xe484e35f, "ioread32" },
	{ 0x9601035f, "request_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FF2975815BA735D50618C96");
