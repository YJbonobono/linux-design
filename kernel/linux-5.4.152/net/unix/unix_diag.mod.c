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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0xad0f2b6c, "unix_table_lock" },
	{ 0x4df0d525, "sock_diag_put_meminfo" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x76d96d07, "sock_diag_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x685b2f7a, "sock_diag_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xe6c92e04, "unix_peer_get" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x5c7c12e9, "unix_inq_len" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8bc78fb7, "sock_diag_check_cookie" },
	{ 0x81b1031d, "unix_outq_len" },
	{ 0x4250b3eb, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0x7b2112df, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2F3B627F3E6AEC1D71F9A2D");
