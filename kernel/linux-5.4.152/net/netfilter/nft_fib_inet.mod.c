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
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xc5edc989, "nft_fib_validate" },
	{ 0xe4168b2e, "nft_fib_dump" },
	{ 0x5abbaa89, "nft_fib_init" },
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xb940841c, "nft_fib4_eval" },
	{ 0xa2afd4a3, "nft_fib4_eval_type" },
	{ 0x97a08fe, "nft_fib6_eval" },
	{ 0x2151577d, "nft_fib6_eval_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv4,nft_fib_ipv6");


MODULE_INFO(srcversion, "9AF03F781A1B911701D7206");
