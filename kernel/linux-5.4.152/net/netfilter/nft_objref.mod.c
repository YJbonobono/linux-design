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
	{ 0x520437a6, "nft_dump_register" },
	{ 0x76accdb9, "nf_tables_bind_set" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x7850f359, "nft_set_lookup_global" },
	{ 0xdfed86f3, "nf_tables_deactivate_set" },
	{ 0x898d721d, "nf_tables_destroy_set" },
	{ 0xf774e174, "nft_obj_lookup" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "46A376CA5295D497EAF6DA0");
