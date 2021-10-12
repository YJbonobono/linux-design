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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4df0d525, "sock_diag_put_meminfo" },
	{ 0x754d539c, "strlen" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x76d96d07, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x685b2f7a, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdeb9613f, "sock_diag_unregister_inet_compat" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x49b8930d, "inet6_lookup" },
	{ 0x34d1fcca, "sock_gen_put" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bc78fb7, "sock_diag_check_cookie" },
	{ 0x4250b3eb, "sock_diag_save_cookie" },
	{ 0xb80db073, "__inet_lookup_listener" },
	{ 0x23c3ecc1, "sock_diag_register_inet_compat" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0x7b2112df, "__netlink_dump_start" },
	{ 0x814c7f79, "netlink_net_capable" },
	{ 0xf8eac455, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B613E0DC44B9C115592F3C");
