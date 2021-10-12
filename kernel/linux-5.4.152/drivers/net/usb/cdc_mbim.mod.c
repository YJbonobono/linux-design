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
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0xc4f30978, "cdc_ncm_change_mtu" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x35524d9a, "usb_match_id" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x93f150f8, "usb_cdc_wdm_register" },
	{ 0x89e0d554, "cdc_ncm_bind_common" },
	{ 0x67ab91e3, "cdc_ncm_select_altsetting" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0xdee7d707, "cdc_ncm_unbind" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0xee25e17e, "__vlan_find_dev_deep_rcu" },
	{ 0xbbdf56f8, "in6_dev_finish_destroy" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc31f230d, "ipv6_stub" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6a07bcda, "cdc_ncm_rx_verify_ndp16" },
	{ 0x99f3a297, "cdc_ncm_rx_verify_nth16" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7642b6ff, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b553753, "skb_pull" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "3408E4C15EEDF2ED3B4C99E");
