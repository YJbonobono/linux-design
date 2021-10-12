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
	{ 0x5170e7f3, "nft_meta_policy" },
	{ 0xab9b1a1f, "nft_meta_get_dump" },
	{ 0x5175d72f, "nft_meta_set_validate" },
	{ 0x856c10cd, "nft_meta_set_dump" },
	{ 0x3c11fb08, "nft_meta_set_destroy" },
	{ 0x9963a275, "nft_meta_set_init" },
	{ 0x6f308782, "nft_meta_set_eval" },
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6ed5c09, "br_vlan_get_pvid_rcu" },
	{ 0x7ad685a5, "nft_meta_get_eval" },
	{ 0x1d93dd98, "br_vlan_get_proto" },
	{ 0x51b12cb8, "br_vlan_enabled" },
	{ 0x9166fada, "strncpy" },
	{ 0xef109c1a, "netdev_master_upper_dev_get_rcu" },
	{ 0x6a4d0dd5, "nft_meta_get_init" },
	{ 0xe08a837, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "F61D317F57AF807E1DA077A");
