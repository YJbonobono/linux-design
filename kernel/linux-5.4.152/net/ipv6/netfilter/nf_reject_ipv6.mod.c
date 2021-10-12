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
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0xbe2ab6b8, "nf_ct_attach" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xec27e816, "l3mdev_master_ifindex_rcu" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x6848f13, "ip6_local_out" },
	{ 0xe7d1af6d, "ip6_dst_hoplimit" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x7d7dbcc3, "xfrm_lookup" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x5bb0c85f, "nf_ip6_checksum" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE3C9ED3747E193AAFF85F7");
