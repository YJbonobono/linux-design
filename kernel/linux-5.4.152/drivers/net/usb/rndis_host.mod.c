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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3cc60cb5, "usbnet_cdc_unbind" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x9d3ab37, "usbnet_generic_cdc_bind" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0xd9afef59, "usb_driver_release_interface" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9916e34c, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xb0e602eb, "memmove" },
	{ 0xbc0dde71, "eth_mac_addr" },
};

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "BDB493A4DD5AF0D404D25A9");
