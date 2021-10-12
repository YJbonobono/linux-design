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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x6833822f, "netif_rx" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0x96f8c098, "open_candev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfd99eba1, "can_free_echo_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x285da97a, "free_candev" },
	{ 0x7089480, "unregister_candev" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v04D8p0A30d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8F6034A177D400E6210A27A");
