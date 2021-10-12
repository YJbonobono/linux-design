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
	{ 0xf11f616d, "release_sock" },
	{ 0xdf1c5bc, "sctp_transport_lookup_process" },
	{ 0x4acfa28c, "inet_diag_unregister" },
	{ 0x29799f58, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x6d25c2dc, "inet_diag_msg_common_fill" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9dbbc3e6, "sctp_for_each_transport" },
	{ 0x8bc78fb7, "sock_diag_check_cookie" },
	{ 0x4250b3eb, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x8b8fc331, "inet_diag_register" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x696729db, "sctp_get_sctp_info" },
	{ 0xb25a2abf, "sctp_for_each_endpoint" },
	{ 0x814c7f79, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "962A2627821D2FBB4A1FC57");
