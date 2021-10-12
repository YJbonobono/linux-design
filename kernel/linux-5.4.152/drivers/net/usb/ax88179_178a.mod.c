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
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xb3960993, "usbnet_nway_reset" },
	{ 0xdfba52c2, "usbnet_set_msglevel" },
	{ 0x12507b64, "usbnet_get_msglevel" },
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xaa9cb0bb, "mii_ethtool_gset" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf5d680ae, "usbnet_write_cmd_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5f74426b, "usbnet_link_change" },
	{ 0x1c9d4d7e, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc66843c6, "usbnet_write_cmd_nopm" },
	{ 0xfb3ec474, "usbnet_write_cmd" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfcc291a3, "usbnet_read_cmd_nopm" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0x9b553753, "skb_pull" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x581cf443, "skb_push" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0606E7209157EB190A7AA55");
