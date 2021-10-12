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
	{ 0x608833c0, "unregister_qdisc" },
	{ 0x4f809a98, "register_qdisc" },
	{ 0xacd3e017, "__skb_gso_segment" },
	{ 0x64c159b7, "netif_skb_features" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3ac7d4fe, "tcf_classify" },
	{ 0xa7ce8d16, "qdisc_watchdog_schedule_ns" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf411afa6, "qdisc_tree_reduce_backlog" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xed0857ed, "gnet_stats_copy_queue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbe42ca64, "tcf_block_get" },
	{ 0xb2d09f8e, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xbd9e155, "nf_ct_get_tuple_skb" },
	{ 0xafa375ab, "flow_hash_from_keys" },
	{ 0x976a8c2b, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3159b167, "tcf_block_put" },
	{ 0xb7367557, "qdisc_watchdog_cancel" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "904A594B36F621A51754D58");
