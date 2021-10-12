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
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc76eec56, "__napi_schedule_irqoff" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x63200ae6, "phy_start_aneg" },
	{ 0x1304e4e7, "phy_set_asym_pause" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x98141b8e, "softnet_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xe296672d, "register_netdev" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7033429a, "devm_mdiobus_alloc_size" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x46599119, "phy_stop" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x30c76023, "free_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caurora,nb8800");
MODULE_ALIAS("of:N*T*Caurora,nb8800C*");
MODULE_ALIAS("of:N*T*Csigma,smp8642-ethernet");
MODULE_ALIAS("of:N*T*Csigma,smp8642-ethernetC*");
MODULE_ALIAS("of:N*T*Csigma,smp8734-ethernet");
MODULE_ALIAS("of:N*T*Csigma,smp8734-ethernetC*");

MODULE_INFO(srcversion, "0909ACB1BBC693BC055F556");
