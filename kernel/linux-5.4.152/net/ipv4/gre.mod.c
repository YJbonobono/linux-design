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
	{ 0x83f1927e, "inet_del_protocol" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0x7968d4e2, "inet_add_protocol" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x9483792a, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BE25230FC1D2CCD81B52E92");
