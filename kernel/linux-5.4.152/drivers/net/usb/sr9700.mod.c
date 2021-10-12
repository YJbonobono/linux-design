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
	{ 0xa6b7d7de, "usbnet_set_link_ksettings" },
	{ 0x4d56efa7, "usbnet_get_link_ksettings" },
	{ 0xb3960993, "usbnet_nway_reset" },
	{ 0xdfba52c2, "usbnet_set_msglevel" },
	{ 0x12507b64, "usbnet_get_msglevel" },
	{ 0x9fc3b382, "usbnet_get_drvinfo" },
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0xd2b1f19b, "usbnet_change_mtu" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfb3ec474, "usbnet_write_cmd" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5f74426b, "usbnet_link_change" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0xf5d680ae, "usbnet_write_cmd_async" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xaa9cb0bb, "mii_ethtool_gset" },
	{ 0xf6978b8b, "mii_check_media" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x9b553753, "skb_pull" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AE782D86ED08DFA1B1DDAA2");
