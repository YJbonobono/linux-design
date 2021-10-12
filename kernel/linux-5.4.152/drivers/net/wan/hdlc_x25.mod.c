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
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x8b897fd6, "lapb_data_received" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x581cf443, "skb_push" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xe01c3b07, "attach_hdlc_protocol" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd2e0803f, "lapb_disconnect_request" },
	{ 0xe77e29f7, "lapb_data_request" },
	{ 0x9b553753, "skb_pull" },
	{ 0xcc909f08, "lapb_connect_request" },
	{ 0xb832485a, "consume_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xa80de877, "dev_queue_xmit_nit" },
	{ 0x7ec0f4c0, "dev_nit_active" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x762957a1, "lapb_register" },
	{ 0xdd4650f0, "lapb_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc,lapb");


MODULE_INFO(srcversion, "263405533C578E957FAE507");
