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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x2d6c2220, "eisa_driver_unregister" },
	{ 0x1a7b45e0, "eisa_driver_register" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x581cf443, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6833822f, "netif_rx" },
	{ 0xcd656909, "fddi_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3750a460, "get_device" },
	{ 0xe296672d, "register_netdev" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xba9110aa, "alloc_fddidev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x30c76023, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xa3ff2039, "eisa_bus_type" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sDEC3001*");
MODULE_ALIAS("eisa:sDEC3002*");
MODULE_ALIAS("eisa:sDEC3003*");
MODULE_ALIAS("eisa:sDEC3004*");
MODULE_ALIAS("pci:v00001011d0000000Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6CB544E86EC0421E44120D0");
