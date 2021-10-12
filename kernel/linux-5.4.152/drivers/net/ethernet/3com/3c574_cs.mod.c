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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b9f0ee0, "pcmcia_get_tuple" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0xb832485a, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x30c76023, "free_netdev" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0101c0574f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0556f*fn00pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "58BEA8886F42EA6B4AAB857");
