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
	{ 0xb0704523, "dst_release" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x241d32, "__pskb_copy_fclone" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x6848f13, "ip6_local_out" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BA193ED1C706091CA2EA4D");
