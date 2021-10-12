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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7033429a, "devm_mdiobus_alloc_size" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe296672d, "register_netdev" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2c603c73, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x84dc229, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb832485a, "consume_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.bC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.aC*");

MODULE_INFO(srcversion, "23DE55E770A9B959957EDDA");
