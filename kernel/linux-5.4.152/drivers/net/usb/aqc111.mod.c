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
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xfcc291a3, "usbnet_read_cmd_nopm" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xea9cfac8, "usb_driver_set_configuration" },
	{ 0x37a0cba, "kfree" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0x56375e25, "usb_reset_configuration" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9fc3b382, "usbnet_get_drvinfo" },
	{ 0x7e9b03af, "usbnet_defer_kevent" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf5d680ae, "usbnet_write_cmd_async" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0x9b553753, "skb_pull" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x581cf443, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "BB8B3583DF6D104EA245BF4");
