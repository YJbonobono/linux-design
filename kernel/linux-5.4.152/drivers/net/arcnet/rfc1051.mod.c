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
	{ 0xab8df857, "arcnet_unregister_proto" },
	{ 0xfd6d7133, "arc_proto_map" },
	{ 0xf8917b98, "arc_bcast_proto" },
	{ 0x2d01f21a, "arc_proto_default" },
	{ 0xc5850110, "printk" },
	{ 0x581cf443, "skb_push" },
	{ 0x6833822f, "netif_rx" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet");


MODULE_INFO(srcversion, "AC3E566B83900C67278E8D2");
