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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x43e3cb9c, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x1f051a99, "nf_ct_kill_acct" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd4452a9b, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ef7ddc, "__skb_checksum" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb15b4109, "crc32c" },
	{ 0x596c50d1, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf81df080, "inet_proto_csum_replace16" },
	{ 0x139dd68d, "nf_ct_iterate_destroy" },
	{ 0xe1cf7dd0, "nf_ip_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xee82c453, "skb_checksum" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x60100dfa, "inet_select_addr" },
	{ 0xff94df87, "nf_unregister_net_hooks" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0xefa474e2, "nf_hook_entries_delete_raw" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3db0b8af, "ip_route_me_harder" },
	{ 0x8c7e786a, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd926240, "ipv6_dev_get_saddr" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa29b7d3f, "nf_register_net_hooks" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7502679b, "nf_ct_iterate_cleanup_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6dd42790, "nf_conntrack_tuple_taken" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x726b6514, "ip6_route_me_harder" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf3367427, "nf_ct_extend_unregister" },
	{ 0x534787e6, "nf_ct_helper_expectfn_register" },
	{ 0xa73cbbd0, "nf_ct_extend_register" },
	{ 0x3b13bffb, "__xfrm_decode_session" },
	{ 0xc9250bab, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x91c9ebb4, "nf_ct_seqadj_set" },
	{ 0x7d7dbcc3, "xfrm_lookup" },
	{ 0xb630b9ab, "nf_hook_entries_insert_raw" },
	{ 0x5bb0c85f, "nf_ip6_checksum" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xf105fed9, "__do_once_done" },
	{ 0x8865478c, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");


MODULE_INFO(srcversion, "199532747F3A7E060EBCE17");
