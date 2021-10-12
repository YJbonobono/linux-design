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
	{ 0x138133c8, "param_ops_charp" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x2d6c2220, "eisa_driver_unregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x1a7b45e0, "eisa_driver_register" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xe296672d, "register_netdev" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sDEC4250*");

MODULE_INFO(srcversion, "B159578F3241B70F2BA52FB");
