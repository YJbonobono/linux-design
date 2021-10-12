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
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x488fd56c, "netdev_emerg" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb832485a, "consume_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xe296672d, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x30c76023, "free_netdev" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001039d00000190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000191sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "410B592D8FDA479DCB27BE4");
