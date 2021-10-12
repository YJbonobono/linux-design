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
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2d6c2220, "eisa_driver_unregister" },
	{ 0x1ee2b308, "isa_unregister_driver" },
	{ 0x718a59be, "pnp_unregister_driver" },
	{ 0x1a7b45e0, "eisa_driver_register" },
	{ 0x4736d750, "isa_register_driver" },
	{ 0x7e1bb40c, "pnp_register_driver" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xcc4bab63, "pnp_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xefe74502, "netdev_boot_setup_check" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe296672d, "register_netdev" },
	{ 0x30c76023, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sTCM5090*");
MODULE_ALIAS("eisa:sTCM5091*");
MODULE_ALIAS("eisa:sTCM5092*");
MODULE_ALIAS("eisa:sTCM5093*");
MODULE_ALIAS("eisa:sTCM5094*");
MODULE_ALIAS("eisa:sTCM5095*");
MODULE_ALIAS("eisa:sTCM5098*");
MODULE_ALIAS("pnp:dTCM5090*");
MODULE_ALIAS("acpi*:TCM5090:*");
MODULE_ALIAS("pnp:dTCM5091*");
MODULE_ALIAS("acpi*:TCM5091:*");
MODULE_ALIAS("pnp:dTCM5094*");
MODULE_ALIAS("acpi*:TCM5094:*");
MODULE_ALIAS("pnp:dTCM5095*");
MODULE_ALIAS("acpi*:TCM5095:*");
MODULE_ALIAS("pnp:dTCM5098*");
MODULE_ALIAS("acpi*:TCM5098:*");
MODULE_ALIAS("pnp:dPNP80f7*");
MODULE_ALIAS("acpi*:PNP80F7:*");
MODULE_ALIAS("pnp:dPNP80f8*");
MODULE_ALIAS("acpi*:PNP80F8:*");

MODULE_INFO(srcversion, "943D464EAE9A2138BDD9278");
