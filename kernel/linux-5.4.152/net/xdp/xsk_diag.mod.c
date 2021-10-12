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
	{ 0x40a09deb, "skb_trim" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4df0d525, "sock_diag_put_meminfo" },
	{ 0x4250b3eb, "sock_diag_save_cookie" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2D52CC4394C211C0B6FF44");
