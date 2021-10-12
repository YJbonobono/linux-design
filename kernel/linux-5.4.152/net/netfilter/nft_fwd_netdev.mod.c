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
	{ 0xa8f76662, "neigh_xmit" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xd8c78469, "nf_fwd_netdev_egress" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x520437a6, "nft_dump_register" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xd206940a, "nft_fwd_dup_netdev_offload" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_dup_netdev");


MODULE_INFO(srcversion, "8E94A360851C4B783861B2C");
