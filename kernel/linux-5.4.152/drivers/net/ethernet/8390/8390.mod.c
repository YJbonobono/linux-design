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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x1946ceb0, "netdev_notice" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x84dc229, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x277b79a7, "dev_trans_start" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x83b05a16, "param_ops_uint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A61B405AD9078134C95AD74");
