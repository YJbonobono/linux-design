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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc9250bab, "nf_ct_helper_expectfn_unregister" },
	{ 0x534787e6, "nf_ct_helper_expectfn_register" },
	{ 0x1b64f61d, "nat_q931_hook" },
	{ 0x28b75b62, "nat_callforwarding_hook" },
	{ 0xaa9adc56, "nat_h245_hook" },
	{ 0x4a46ecab, "nat_t120_hook" },
	{ 0x2c6bace7, "nat_rtp_rtcp_hook" },
	{ 0x4d56ed02, "set_ras_addr_hook" },
	{ 0xe35aa75b, "set_sig_addr_hook" },
	{ 0x79379e50, "set_h225_addr_hook" },
	{ 0xacb361a0, "set_h245_addr_hook" },
	{ 0x2a4f1a31, "nf_ct_unexpect_related" },
	{ 0x9a846792, "get_h225_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x781b2332, "__nf_nat_mangle_tcp_packet" },
	{ 0x577d7318, "nf_nat_mangle_udp_packet" },
	{ 0xd85c5f24, "nf_nat_follow_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd35019a, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
