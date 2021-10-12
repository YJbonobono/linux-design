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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x8bba1bd3, "phy_driver_unregister" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xbae615c2, "phy_driver_register" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0x3750a460, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x77733870, "skb_queue_head" },
	{ 0xdcc32c42, "ptp_find_pin" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x90c5fce9, "dev_mc_del" },
	{ 0x3331bd4f, "dev_mc_add" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80652c75, "genphy_soft_reset" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xbe824665, "skb_complete_tx_timestamp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9b3d43bf, "ptp_clock_event" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0010000000000000010111001110????");

MODULE_INFO(srcversion, "110ADE3AB0661924CA2127F");
