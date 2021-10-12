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
	{ 0x3beb94b5, "tcf_em_unregister" },
	{ 0x4a756fc, "tcf_em_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x581cf443, "skb_push" },
	{ 0xe19b34f9, "ip_set_test" },
	{ 0x9b553753, "skb_pull" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf19aeebd, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0xadb3896f, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
