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
	{ 0xa5f71562, "nft_reject_policy" },
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xd492645a, "nf_reject_ip_tcphdr_put" },
	{ 0x2e51799e, "nf_reject_ip_tcphdr_get" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x7a343afe, "nf_reject_ip6_tcphdr_put" },
	{ 0x844f454d, "nf_reject_ip6_tcphdr_get" },
	{ 0x2124474, "ip_send_check" },
	{ 0xa6b4d0c4, "nf_reject_iphdr_put" },
	{ 0xe1cf7dd0, "nf_ip_checksum" },
	{ 0xffda8933, "pskb_trim_rcsum_slow" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x410f3e87, "br_forward" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf4a2f27a, "nf_reject_ip6hdr_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x5bb0c85f, "nf_ip6_checksum" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0x9b553753, "skb_pull" },
	{ 0x581cf443, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge");


MODULE_INFO(srcversion, "443BE7A938A7A786F1CE19B");
