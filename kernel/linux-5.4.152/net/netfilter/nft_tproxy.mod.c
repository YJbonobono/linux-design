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
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xb8803b4c, "nf_tproxy_handle_time_wait4" },
	{ 0xc9d3f60b, "nf_tproxy_handle_time_wait6" },
	{ 0x34d1fcca, "sock_gen_put" },
	{ 0x5dd77dcb, "sock_edemux" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1861779, "nf_tproxy_laddr6" },
	{ 0x92bedd33, "nf_tproxy_get_sock_v6" },
	{ 0x3c3595cb, "nf_tproxy_laddr4" },
	{ 0xa057d8b0, "nf_tproxy_get_sock_v4" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdb046f59, "nf_defrag_ipv6_enable" },
	{ 0xa3fc8437, "nf_defrag_ipv4_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x520437a6, "nft_dump_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv6,nf_defrag_ipv4");


MODULE_INFO(srcversion, "B7C929F4B3451AE627F2DED");
