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
	{ 0x76d96d07, "sock_diag_unregister" },
	{ 0x685b2f7a, "sock_diag_register" },
	{ 0x28a84f57, "tipc_sk_fill_sock_diag" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0xb2bd0f8c, "tipc_dump_done" },
	{ 0xf44ddb97, "tipc_dump_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4250b3eb, "sock_diag_save_cookie" },
	{ 0x472855cf, "tipc_nl_sk_walk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tipc");


MODULE_INFO(srcversion, "32C14C1555B35FB7AA2E946");
