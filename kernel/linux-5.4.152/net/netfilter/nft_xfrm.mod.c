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
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xe08a837, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x520437a6, "nft_dump_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "DE82AEE28D6DCB74CDB83A0");
