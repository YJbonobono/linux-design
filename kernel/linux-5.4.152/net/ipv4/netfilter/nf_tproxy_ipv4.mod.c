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
	{ 0x1c733fe0, "inet_twsk_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xb1a1ad53, "inet_twsk_deschedule_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc970fff4, "udp4_lib_lookup" },
	{ 0xb80db073, "__inet_lookup_listener" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xf8eac455, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "696B0B6333AC5FE7C9D8A23");
