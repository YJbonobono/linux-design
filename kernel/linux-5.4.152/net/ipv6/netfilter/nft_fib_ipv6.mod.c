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
	{ 0x7ce93bb, "ipv6_chk_addr" },
	{ 0xb0704523, "dst_release" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xc5edc989, "nft_fib_validate" },
	{ 0x262d6d90, "nft_fib_store_result" },
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2abfbbe3, "ip6_route_lookup" },
	{ 0x5abbaa89, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8bba228a, "__nf_ip6_route" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xe4168b2e, "nft_fib_dump" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "4913CECBDD4FE4DCF997055");
