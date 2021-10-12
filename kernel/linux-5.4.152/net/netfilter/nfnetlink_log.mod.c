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
	{ 0xfe874c71, "nf_log_unregister" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xca91f3d7, "nfnetlink_subsys_unregister" },
	{ 0xf9673c1c, "nf_log_register" },
	{ 0xa82f2deb, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xde51542f, "from_kgid_munged" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x754d539c, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x2c5e2f36, "nf_log_bind_pf" },
	{ 0xa8a2015b, "nfnl_ct_hook" },
	{ 0x6e6eb4bd, "nf_log_unbind_pf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb177d101, "seq_printf" },
	{ 0x6214d8da, "proc_set_user" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0x1744657b, "nf_log_unset" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x596c50d1, "__put_net" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6320deec, "nfnetlink_unicast" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "B4945DED14D3CF32396A6CB");
