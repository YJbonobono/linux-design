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
	{ 0x3bcbf347, "sk_free" },
	{ 0x1d157202, "sock_diag_destroy" },
	{ 0x2a647200, "inet_sk_diag_fill" },
	{ 0xae906a02, "inet_diag_bc_sk" },
	{ 0x814c7f79, "netlink_net_capable" },
	{ 0xb510c250, "raw_v4_hashinfo" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb8d4a34a, "__raw_v4_lookup" },
	{ 0x1d85729a, "__raw_v6_lookup" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xed7c7b91, "raw_v6_hashinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "4E5A931CEBE4664E5012A22");
