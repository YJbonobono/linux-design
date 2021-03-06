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
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xe08a837, "nft_validate_register_store" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0x9166fada, "strncpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x520437a6, "nft_dump_register" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "58116387A5880BB14975DC2");
