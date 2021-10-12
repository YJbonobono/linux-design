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
	{ 0xfb2b900, "kfree_skb" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xabb75299, "__udp4_lib_lookup" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d157202, "sock_diag_destroy" },
	{ 0x8bc78fb7, "sock_diag_check_cookie" },
	{ 0x2362fc0, "__udp6_lib_lookup" },
	{ 0x95a67b07, "udp_table" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0x2a647200, "inet_sk_diag_fill" },
	{ 0xae906a02, "inet_diag_bc_sk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x814c7f79, "netlink_net_capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "CBCB2C4EEA3B4E509A5A91C");
