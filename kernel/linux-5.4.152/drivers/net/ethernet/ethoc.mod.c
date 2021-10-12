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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfa128dfb, "phy_find_first" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0xb832485a, "consume_skb" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xe484e35f, "ioread32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x485fe47, "mdiobus_get_phy" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,ethoc");
MODULE_ALIAS("of:N*T*Copencores,ethocC*");

MODULE_INFO(srcversion, "1C74460F2175405504A9D89");
