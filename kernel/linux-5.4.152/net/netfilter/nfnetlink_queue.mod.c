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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xca91f3d7, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa82f2deb, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xaa563b43, "nf_queue_entry_release_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xed43bede, "nf_queue_entry_get_refs" },
	{ 0xacd3e017, "__skb_gso_segment" },
	{ 0xc5850110, "printk" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x6320deec, "nfnetlink_unicast" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0x895ea114, "skb_zerocopy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xfc1aa92b, "skb_zerocopy_headlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe943d71a, "skb_tx_error" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x924a79fd, "__nla_reserve" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1af6d6a0, "skb_ensure_writable" },
	{ 0xa8a2015b, "nfnl_ct_hook" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb83902cc, "nf_register_queue_handler" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x49dffa21, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x41657370, "nf_reinject" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1f0c266a, "nf_ct_hook" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C7D13EC4582B687F2AD48AA");
