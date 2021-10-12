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
	{ 0x31a4dee5, "get_next_bframe" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x416d8e47, "recv_Bchannel" },
	{ 0xfc396865, "bchannel_get_rxbuf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7e6a3684, "mISDN_ctrl_bchannel" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9cc93f3a, "mISDN_clear_bchannel" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe64b92b6, "mISDN_initbchannel" },
	{ 0xc3b456ac, "bchannel_senddata" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "7F7E51DFD6A8431FC5DDEB7");
