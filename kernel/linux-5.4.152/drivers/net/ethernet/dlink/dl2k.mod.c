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
	{ 0x138133c8, "param_ops_charp" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb832485a, "consume_skb" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe296672d, "register_netdev" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xc5534d64, "ioread16" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001186d00004000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F0d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F0d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F0d00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00009021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "61882F321014274B3C74862");
