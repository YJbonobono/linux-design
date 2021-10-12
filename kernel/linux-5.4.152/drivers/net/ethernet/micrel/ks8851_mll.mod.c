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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe296672d, "register_netdev" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xf10de535, "ioread8" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb832485a, "consume_skb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5534d64, "ioread16" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");


MODULE_INFO(srcversion, "525A4CBE1D7E1B0D8EC2F4A");
