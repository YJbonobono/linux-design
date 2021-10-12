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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xfb578fc5, "memset" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3030e457, "skb_copy_and_csum_dev" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe296672d, "register_netdev" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x30c76023, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb832485a, "consume_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcf2a6966, "up" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x5792f848, "strlcpy" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000016C6d00008841sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C6d00008842sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BD18F79B032A247EBEA8866");
