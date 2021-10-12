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
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x85683c3f, "phy_support_asym_pause" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0xfa128dfb, "phy_find_first" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x46d47fc1, "phy_register_fixup_for_uid" },
	{ 0xe296672d, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x63200ae6, "phy_start_aneg" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb832485a, "consume_skb" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0x30c76023, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9125DB506D30BF89D51DE45");
