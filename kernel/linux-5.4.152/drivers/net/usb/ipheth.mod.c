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
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x30c76023, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xe296672d, "register_netdev" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe324b8b8, "usb_altnum_to_altsetting" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "CDE0E520FDE6798B0EBF396");
