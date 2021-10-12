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
	{ 0xa474bb00, "inet_frag_kill" },
	{ 0xffda8933, "pskb_trim_rcsum_slow" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x18dd4dee, "fqdir_exit" },
	{ 0x5c2c3b45, "inet_frag_find" },
	{ 0xfdef96fc, "inet_frag_reasm_prepare" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xff94df87, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xa9d23fce, "inet_frags_fini" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x78381292, "init_net" },
	{ 0x16e097dd, "fqdir_init" },
	{ 0xa29b7d3f, "nf_register_net_hooks" },
	{ 0x64bfcd8b, "inet_frag_reasm_finish" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x4cc651ab, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x47cffc20, "inet_frag_pull_head" },
	{ 0x8998bd1b, "inet_frags_init" },
	{ 0x7494c519, "inet_frag_queue_insert" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x4db0ba1, "icmp6_send" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "529E0694C49601ED89FB521");
