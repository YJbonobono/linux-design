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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1dc0dc58, "netlink_has_listeners" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0xefb22ee3, "usb_enable_autosuspend" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7c3896cb, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc06ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc06ip*in*");

MODULE_INFO(srcversion, "012D0A23B1669E80C756DD1");
