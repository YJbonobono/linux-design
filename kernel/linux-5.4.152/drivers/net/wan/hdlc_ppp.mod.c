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
	{ 0xefa13920, "unregister_hdlc_protocol" },
	{ 0x3ae1884a, "register_hdlc_protocol" },
	{ 0x24d273d1, "add_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xe01c3b07, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "DD0BCA83D9662E5E0D04FF7");
