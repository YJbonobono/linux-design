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
	{ 0x57dbcb92, "iw_handler_get_thrspy" },
	{ 0x3fea57d8, "iw_handler_set_thrspy" },
	{ 0x1604b82c, "iw_handler_get_spy" },
	{ 0x3fe0270d, "iw_handler_set_spy" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x754d539c, "strlen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,cfg80211");

MODULE_ALIAS("pcmcia:mD601c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "34A332AA1F6DE6B66EA3706");
