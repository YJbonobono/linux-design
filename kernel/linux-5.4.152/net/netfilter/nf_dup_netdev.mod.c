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
	{ 0xd6af1248, "skb_clone" },
	{ 0x581cf443, "skb_push" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E7643430CCEB7CEA9A734D7");
