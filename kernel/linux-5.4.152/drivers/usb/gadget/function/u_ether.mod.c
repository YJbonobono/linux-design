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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x349cba85, "strchr" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x754d539c, "strlen" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5d258514, "dev_set_mac_address" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "8773B92497744E6337D9201");
