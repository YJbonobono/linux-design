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
	{ 0x4acfa28c, "inet_diag_unregister" },
	{ 0x8b8fc331, "inet_diag_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdc2ab322, "inet_diag_dump_icsk" },
	{ 0x9afd2e73, "inet_diag_dump_one_icsk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa9e4afc0, "tcp_get_info" },
	{ 0x34d1fcca, "sock_gen_put" },
	{ 0x1d157202, "sock_diag_destroy" },
	{ 0xa060fa81, "inet_diag_find_one_icsk" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "F6A6B780EA285E138B299C8");
