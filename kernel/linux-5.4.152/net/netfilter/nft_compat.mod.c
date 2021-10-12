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
	{ 0xca91f3d7, "nfnetlink_subsys_unregister" },
	{ 0x88fd53df, "nft_unregister_expr" },
	{ 0xa82f2deb, "nfnetlink_subsys_register" },
	{ 0xa616e404, "nft_register_expr" },
	{ 0xc5850110, "printk" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdd1e9617, "xt_check_match" },
	{ 0xaf239b10, "xt_check_target" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x864d886c, "xt_request_find_match" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd05151c0, "xt_request_find_target" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "50821B82D885461FA5A76CF");
