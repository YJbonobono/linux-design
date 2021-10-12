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
	{ 0x3b84ced7, "lwtunnel_encap_del_ops" },
	{ 0x5f895271, "lwtunnel_encap_add_ops" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x630bfabd, "nla_put_labels" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x945ccc3, "lwtunnel_state_alloc" },
	{ 0xe413b0a4, "nla_get_labels" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x5256c32a, "__skb_warn_lro_forwarding" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa8f76662, "neigh_xmit" },
	{ 0x911851ee, "mpls_stats_inc_outucastpkts" },
	{ 0x581cf443, "skb_push" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x80ba18c8, "mpls_pkt_too_big" },
	{ 0xb6ae45cf, "mpls_dev_mtu" },
	{ 0x54303617, "mpls_output_possible" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mpls_router");


MODULE_INFO(srcversion, "048A96D3F8D47F731D4293C");
