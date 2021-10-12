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
	{ 0xf88db369, "nf_unregister_net_hook" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x59c4dd2c, "netlink_kernel_release" },
	{ 0xd5548c70, "nf_register_net_hook" },
	{ 0xc5850110, "printk" },
	{ 0x7c3896cb, "__netlink_kernel_create" },
	{ 0x78381292, "init_net" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf45855f7, "netlink_ack" },
	{ 0x893a5c26, "netlink_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "845D14D18B308CCE32AB266");
