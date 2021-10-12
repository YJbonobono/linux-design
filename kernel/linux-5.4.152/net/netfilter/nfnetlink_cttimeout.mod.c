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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xca91f3d7, "nfnetlink_subsys_unregister" },
	{ 0x61c933fd, "nf_ct_timeout_put_hook" },
	{ 0x1ce0b444, "nf_ct_timeout_find_get_hook" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xa82f2deb, "nfnetlink_subsys_register" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x4f259d65, "nf_ct_l4proto_find" },
	{ 0x11618247, "nf_ct_unconfirmed_destroy" },
	{ 0x6f4790bd, "nf_ct_untimeout" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x5a921311, "strncmp" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "628D0A61B5290AA6E8EA4DC");
