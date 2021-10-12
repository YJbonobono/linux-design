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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0x754d539c, "strlen" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x6006847, "current_task" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x285da97a, "free_candev" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x45b06668, "can_change_mtu" },
	{ 0x546a033e, "can_change_state" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7089480, "unregister_candev" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x96f8c098, "open_candev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xe4c60f13, "alloc_canfd_skb" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xfd99eba1, "can_free_echo_skb" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6089865790B83AF9D4A39FA");
