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
	{ 0xa38064cc, "inet6_lookup_listener" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0xa95f1bb8, "udp6_lib_lookup" },
	{ 0x90542110, "__inet6_lookup_established" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xb1a1ad53, "inet_twsk_deschedule_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "78B6D521AF07AEC03CA54A4");
