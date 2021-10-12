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
	{ 0x813cd640, "nf_nat_ipv4_unregister_fn" },
	{ 0xb4e08aef, "nf_nat_ipv4_register_fn" },
	{ 0x191e7b22, "nf_nat_ipv6_unregister_fn" },
	{ 0x36ad8c7f, "nf_nat_ipv6_register_fn" },
	{ 0xb48a6318, "nft_unregister_chain_type" },
	{ 0xe68de579, "nft_register_chain_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcca9bb9c, "nft_do_chain" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0x2267e838, "nf_nat_inet_register_fn" },
	{ 0xecf9136b, "nf_nat_inet_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "7B048E7CFFAE7B385609255");
