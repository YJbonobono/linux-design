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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xfb578fc5, "memset" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x72b243d4, "free_dma" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xe296672d, "register_netdev" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5534d64, "ioread16" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccirrus,cs8900");
MODULE_ALIAS("of:N*T*Ccirrus,cs8900C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs8920");
MODULE_ALIAS("of:N*T*Ccirrus,cs8920C*");

MODULE_INFO(srcversion, "B73172F8F8F1F07BB9E0658");
