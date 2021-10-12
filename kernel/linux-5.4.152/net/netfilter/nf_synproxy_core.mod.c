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
	{ 0x16a87d8a, "nf_ct_tmpl_alloc" },
	{ 0x57c11a6e, "nf_ct_seqadj_init" },
	{ 0xc75d5660, "nf_ct_tmpl_free" },
	{ 0xade7390c, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd4452a9b, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xff94df87, "nf_unregister_net_hooks" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0x3db0b8af, "ip_route_me_harder" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0x71f6670b, "__cookie_v6_check" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xa29b7d3f, "nf_register_net_hooks" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8bba228a, "__nf_ip6_route" },
	{ 0xf3367427, "nf_ct_extend_unregister" },
	{ 0x6a5e2bde, "__cookie_v6_init_sequence" },
	{ 0xa73cbbd0, "nf_ct_extend_register" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0x6848f13, "ip6_local_out" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x7d7dbcc3, "xfrm_lookup" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x8865478c, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "639797C1095DC63D1B50EE1");
