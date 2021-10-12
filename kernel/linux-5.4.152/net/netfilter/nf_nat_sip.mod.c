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
	{ 0x534787e6, "nf_ct_helper_expectfn_register" },
	{ 0xea71e363, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc9250bab, "nf_ct_helper_expectfn_unregister" },
	{ 0x65f3d18f, "nf_nat_sip_hooks" },
	{ 0xa2397018, "nf_nat_helper_unregister" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0xe9597e78, "ct_sip_parse_numerical_param" },
	{ 0x4d43cf6b, "ct_sip_parse_request" },
	{ 0xf35fc298, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xb843979e, "ct_sip_parse_header_uri" },
	{ 0x91c9ebb4, "nf_ct_seqadj_set" },
	{ 0x367a46d0, "nf_ct_helper_log" },
	{ 0x2a4f1a31, "nf_ct_unexpect_related" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x335e9a2f, "ct_sip_get_header" },
	{ 0x102b61a6, "ct_sip_get_sdp_header" },
	{ 0x781b2332, "__nf_nat_mangle_tcp_packet" },
	{ 0x577d7318, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xdd35019a, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "C9C4A1ED825419B5DDFB7AE");
