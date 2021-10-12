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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x8ba0b748, "phy_ethtool_get_eee" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa8629c87, "phy_init_eee" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x451ba912, "phy_get_eee_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfedd2163, "clk_get" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0x422dad30, "phy_ethtool_set_eee" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xed282188, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,sxgbe-v2.0a");
MODULE_ALIAS("of:N*T*Csamsung,sxgbe-v2.0aC*");

MODULE_INFO(srcversion, "824C6D7E2815955325D8EB4");
