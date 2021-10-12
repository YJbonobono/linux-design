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
	{ 0x45b06668, "can_change_mtu" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x96f8c098, "open_candev" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0xb832485a, "consume_skb" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xfd99eba1, "can_free_echo_skb" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x285da97a, "free_candev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0AB4p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AB4p0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F563AB217B3351A1AFC6868");
