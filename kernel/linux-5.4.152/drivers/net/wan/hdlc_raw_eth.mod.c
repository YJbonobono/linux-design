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
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xefa13920, "unregister_hdlc_protocol" },
	{ 0x3ae1884a, "register_hdlc_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xe01c3b07, "attach_hdlc_protocol" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "F0EAA38DA293A762A3FE9B9");
