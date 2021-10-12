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
	{ 0xc5850110, "printk" },
	{ 0xa82f2deb, "nfnetlink_subsys_register" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x693c3961, "nf_ct_helper_hash" },
	{ 0xc40f284c, "nf_ct_helper_hsize" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x35d2f400, "nf_conntrack_helper_register" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x401b7ded, "nf_conntrack_helper_unregister" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x5a921311, "strncmp" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "494B64826EE6B23E8E278DA");
