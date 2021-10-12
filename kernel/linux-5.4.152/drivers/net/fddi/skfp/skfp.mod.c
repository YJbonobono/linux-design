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
	{ 0x77733870, "skb_queue_head" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x6833822f, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xba9110aa, "alloc_fddidev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xb832485a, "consume_skb" },
	{ 0xcd656909, "fddi_type_trans" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001148d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29D4AF2AFFB5402D399073F");
