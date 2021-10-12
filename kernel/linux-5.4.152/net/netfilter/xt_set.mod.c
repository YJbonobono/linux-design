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
	{ 0x962ac2cf, "xt_unregister_targets" },
	{ 0x4553243b, "xt_unregister_matches" },
	{ 0x8bd53b5a, "xt_register_targets" },
	{ 0xdbad52b, "xt_register_matches" },
	{ 0xe19b34f9, "ip_set_test" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1ced5ba, "ip_set_del" },
	{ 0xac5802ea, "ip_set_add" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf19aeebd, "ip_set_nfnl_get_byindex" },
	{ 0xadb3896f, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
