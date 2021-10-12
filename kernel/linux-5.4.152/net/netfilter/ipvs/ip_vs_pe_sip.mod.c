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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3b3baa1e, "unregister_ip_vs_pe" },
	{ 0xabed9cf8, "register_ip_vs_pe" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x335e9a2f, "ct_sip_get_header" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x85432b67, "ip_vs_new_conn_out" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_conntrack_sip");


MODULE_INFO(srcversion, "C9C76B0127BA9FB1A4B93EC");
