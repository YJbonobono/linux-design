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
	{ 0xea71e363, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x826acfed, "nf_nat_ftp_hook" },
	{ 0xa2397018, "nf_nat_helper_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a4f1a31, "nf_ct_unexpect_related" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x367a46d0, "nf_ct_helper_log" },
	{ 0x781b2332, "__nf_nat_mangle_tcp_packet" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0xd85c5f24, "nf_nat_follow_master" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_ftp,nf_nat");


MODULE_INFO(srcversion, "F9A32D380E8A2CDEAEF0581");
