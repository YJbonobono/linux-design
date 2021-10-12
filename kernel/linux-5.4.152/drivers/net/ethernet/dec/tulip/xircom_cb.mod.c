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
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xf10de535, "ioread8" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe296672d, "register_netdev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000115Dd00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "80B87C9303F632D119D9B12");
