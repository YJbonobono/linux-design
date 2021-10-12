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
	{ 0x782f7733, "nf_flow_offload_ipv6_hook" },
	{ 0x2d70a7a9, "nf_flow_table_free" },
	{ 0xa4371e7e, "nf_flow_table_init" },
	{ 0x1f992081, "nft_unregister_flowtable_type" },
	{ 0xd9c1cd98, "nft_register_flowtable_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");


MODULE_INFO(srcversion, "1D596E5DDE607E01CAE40FC");
