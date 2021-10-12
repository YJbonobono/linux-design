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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcc806c8b, "flow_offload_free" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xb0704523, "dst_release" },
	{ 0x470ade92, "flow_offload_add" },
	{ 0x7258d527, "flow_offload_alloc" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xe6c182f3, "nf_flow_table_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb7d203b5, "nf_route" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0xe3970a61, "nft_flowtable_lookup" },
	{ 0x16bcd47, "nf_tables_deactivate_flowtable" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "3C3344C4382BF4A10ABEAC6");
