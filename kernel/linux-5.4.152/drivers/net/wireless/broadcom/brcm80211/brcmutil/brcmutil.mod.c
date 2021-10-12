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
	{ 0x77733870, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x49e1cb7e, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3F119D70FB75A37C52A13E");
