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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd9c0f981, "phylink_of_phy_connect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdccfdecd, "phylink_ethtool_ksettings_get" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb18f9eec, "phylink_ethtool_ksettings_set" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x72bbd7cb, "devm_clk_get_optional" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5e121547, "dev_close" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xed282188, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "phylink");

MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.aC*");

MODULE_INFO(srcversion, "A11D444F81DA9D4C561728E");
