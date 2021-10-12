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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaa9cb0bb, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x46599119, "phy_stop" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5f74426b, "usbnet_link_change" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1c9d4d7e, "usbnet_update_max_qlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0xb3960993, "usbnet_nway_reset" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa6b7d7de, "usbnet_set_link_ksettings" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x975992d3, "eth_platform_get_mac_address" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0x4d56efa7, "usbnet_get_link_ksettings" },
	{ 0x9fc3b382, "usbnet_get_drvinfo" },
	{ 0x581cf443, "skb_push" },
	{ 0xfcc291a3, "usbnet_read_cmd_nopm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xee382bfe, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc66843c6, "usbnet_write_cmd_nopm" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xe6f817a0, "genphy_resume" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf6978b8b, "mii_check_media" },
	{ 0x12507b64, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x425f468b, "usbnet_unlink_rx_urbs" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf5d680ae, "usbnet_write_cmd_async" },
	{ 0xd2b1f19b, "usbnet_change_mtu" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xfb3ec474, "usbnet_write_cmd" },
	{ 0xdfba52c2, "usbnet_set_msglevel" },
	{ 0xed282188, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "mii,usbnet");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8436DF6FDF608921B29656D");
