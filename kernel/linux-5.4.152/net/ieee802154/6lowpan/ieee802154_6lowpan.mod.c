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
	{ 0xee5296e0, "neigh_lookup" },
	{ 0xa474bb00, "inet_frag_kill" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xb0704523, "dst_release" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x6a5d16e5, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x18dd4dee, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5c2c3b45, "inet_frag_find" },
	{ 0xfdef96fc, "inet_frag_reasm_prepare" },
	{ 0x6833822f, "netif_rx" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xa9d23fce, "inet_frags_fini" },
	{ 0xc0201a9f, "ieee802154_hdr_peek" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0x44548a37, "nd_tbl" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x4f661f7f, "lowpan_header_decompress" },
	{ 0x16e097dd, "fqdir_init" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x64bfcd8b, "inet_frag_reasm_finish" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x4cc651ab, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd186b480, "lowpan_unregister_netdevice" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2c74e81, "ieee802154_hdr_peek_addrs" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x7116ba95, "lowpan_register_netdevice" },
	{ 0x8998bd1b, "inet_frags_init" },
	{ 0x7494c519, "inet_frag_queue_insert" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154");


MODULE_INFO(srcversion, "CA07D658CDB046FA03041C1");
