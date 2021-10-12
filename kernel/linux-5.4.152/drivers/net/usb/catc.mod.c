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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x30c76023, "free_netdev" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA5A7A34D39E81F002254C9");
