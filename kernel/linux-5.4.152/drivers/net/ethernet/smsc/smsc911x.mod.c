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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe296672d, "register_netdev" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf5401d2b, "device_get_mac_address" },
	{ 0x16b86d0f, "device_get_phy_mode" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xfedd2163, "clk_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xcdee9461, "regulator_bulk_get" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x85683c3f, "phy_support_asym_pause" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0xfa128dfb, "phy_find_first" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x46599119, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x5d3277e2, "regulator_bulk_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ARMH9118:*");

MODULE_INFO(srcversion, "7D25717AB7E67F47BCF02E0");
