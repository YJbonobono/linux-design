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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xa6b7d7de, "usbnet_set_link_ksettings" },
	{ 0x4d56efa7, "usbnet_get_link_ksettings" },
	{ 0xee382bfe, "usbnet_get_link" },
	{ 0xb3960993, "usbnet_nway_reset" },
	{ 0xdfba52c2, "usbnet_set_msglevel" },
	{ 0x12507b64, "usbnet_get_msglevel" },
	{ 0x9fc3b382, "usbnet_get_drvinfo" },
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x581cf443, "skb_push" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9c530a24, "usbnet_get_endpoints" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xd2b1f19b, "usbnet_change_mtu" },
	{ 0xaa9cb0bb, "mii_ethtool_gset" },
	{ 0xf6978b8b, "mii_check_media" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcc291a3, "usbnet_read_cmd_nopm" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc66843c6, "usbnet_write_cmd_nopm" },
	{ 0xfb3ec474, "usbnet_write_cmd" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x9b553753, "skb_pull" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x7e9b03af, "usbnet_defer_kevent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4719B5814D5DD873FF2C36F");
