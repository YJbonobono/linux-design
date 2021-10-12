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
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xa8a2015b, "nfnl_ct_hook" },
	{ 0xca91f3d7, "nfnetlink_subsys_unregister" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xa82f2deb, "nfnetlink_subsys_register" },
	{ 0x7502679b, "nf_ct_iterate_cleanup_net" },
	{ 0xfe81e155, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9565e79, "__nf_ct_expect_find" },
	{ 0x91001d14, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4f315e9a, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xe532bc01, "nfnetlink_has_listeners" },
	{ 0xa78af27a, "nfnetlink_set_err" },
	{ 0xdc53a5bf, "nfnetlink_send" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xf105fed9, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xa97463c9, "__siphash_aligned" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe9bd875e, "nf_conntrack_free" },
	{ 0xac23bfd7, "__nf_ct_try_assign_helper" },
	{ 0x5e64f708, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7ab83cb9, "nf_conntrack_find_get" },
	{ 0x8865478c, "nf_ct_ext_add" },
	{ 0x1f245f63, "nf_ct_helper_ext_add" },
	{ 0x5a679dc3, "nf_conntrack_alloc" },
	{ 0x39aa961d, "nf_ct_remove_expectations" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x43e3cb9c, "nf_nat_hook" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0xfe1465ac, "__nf_conntrack_helper_find" },
	{ 0xa368acb4, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xede386a9, "nf_ct_expect_alloc" },
	{ 0x2233929b, "nf_ct_unlink_expect_report" },
	{ 0x970dbbc, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x22c35368, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0x53691287, "nf_ct_expect_register_notifier" },
	{ 0x77b5dac2, "nf_conntrack_register_notifier" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x847cc5d7, "nf_conntrack_unregister_notifier" },
	{ 0xc6518278, "nf_ct_expect_unregister_notifier" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0x3a5f8338, "nf_ct_get_id" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4e6f46de, "nf_connlabels_replace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4f259d65, "nf_ct_l4proto_find" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x94d9ccb0, "nf_ct_expect_put" },
	{ 0xa02323c5, "nf_ct_tcp_seqadj_set" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "358A9A136169047EE680B0D");
