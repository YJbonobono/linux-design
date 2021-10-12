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
	{ 0x1d716f2, "__fib_lookup" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xa2099c6a, "inet_dev_addr_type" },
	{ 0xc5edc989, "nft_fib_validate" },
	{ 0x262d6d90, "nft_fib_store_result" },
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfba971ba, "fib_info_nh_uses_dev" },
	{ 0x5abbaa89, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc4f8c159, "fib_table_lookup" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xe4168b2e, "nft_fib_dump" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "210EF046EC2824F4622D288");
