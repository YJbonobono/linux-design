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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7205708e, "xt_unregister_table" },
	{ 0x24c8e482, "xt_copy_counters_from_user" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaf239b10, "xt_check_target" },
	{ 0xdbad52b, "xt_register_matches" },
	{ 0x245cd3fe, "xt_compat_match_offset" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xa10ed526, "xt_compat_target_to_user" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x4fc33ab3, "xt_proto_fini" },
	{ 0xc150cd69, "xt_table_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b5a75eb, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd25d2d75, "xt_find_table_lock" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0x12d35aa4, "xt_replace_table" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x61af3fe1, "xt_proto_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf401df5b, "xt_register_table" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbd2a3bbb, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0x67a2ac33, "xt_compat_match_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0xff94df87, "nf_unregister_net_hooks" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x8bd53b5a, "xt_register_targets" },
	{ 0x31973c5c, "xt_compat_target_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x1f31e1b5, "nf_log_trace" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x962ac2cf, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xa29b7d3f, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf4fed4, "nf_unregister_sockopt" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x864d886c, "xt_request_find_match" },
	{ 0x64dd3ac1, "xt_request_find_table_lock" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4553243b, "xt_unregister_matches" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd05151c0, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x81cd442e, "xt_compat_match_from_user" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdd1e9617, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x552b967, "xt_check_table_hooks" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x5ac71858, "nf_register_sockopt" },
	{ 0xc75d5ab2, "xt_alloc_table_info" },
	{ 0x385aea49, "xt_match_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x881df2ef, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "65107AAFE01F3E182EA3778");
