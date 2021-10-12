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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x815588a6, "clk_enable" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x7033429a, "devm_mdiobus_alloc_size" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xfa128dfb, "phy_find_first" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe8498de, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe296672d, "register_netdev" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x3b939e3d, "phy_attached_print" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3750a460, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0xf5401d2b, "device_get_mac_address" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb832485a, "consume_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xccfd7114, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emac");
MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emacC*");
MODULE_ALIAS("acpi*:QCOM8070:*");

MODULE_INFO(srcversion, "7A0A955CAE832CA6C26E792");
