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
	{ 0x6e724099, "param_array_ops" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe296672d, "register_netdev" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0x30c76023, "free_netdev" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001050d00000840sv*sd00008153bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00002011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8625B7CF56631348D7AB34E");
