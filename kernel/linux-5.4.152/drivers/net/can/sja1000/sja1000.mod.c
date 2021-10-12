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
	{ 0x9eb9d1af, "register_candev" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0x77d59f8f, "close_candev" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x285da97a, "free_candev" },
	{ 0x45b06668, "can_change_mtu" },
	{ 0x546a033e, "can_change_state" },
	{ 0x7089480, "unregister_candev" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x96f8c098, "open_candev" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0xfd99eba1, "can_free_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "1ABD1673B7AD907210ABCBF");
