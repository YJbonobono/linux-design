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
	{ 0x39aa961d, "nf_ct_remove_expectations" },
	{ 0x2a4f1a31, "nf_ct_unexpect_related" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x35d2f400, "nf_conntrack_helper_register" },
	{ 0x454659a7, "__nf_ct_refresh_acct" },
	{ 0x401b7ded, "nf_conntrack_helper_unregister" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb9968c4d, "nf_ct_expect_init" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x509dd233, "nf_ip_route" },
	{ 0xaad7e5fc, "nf_conntrack_helpers_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x94d9ccb0, "nf_ct_expect_put" },
	{ 0xede386a9, "nf_ct_expect_alloc" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x493640d6, "nf_ct_expect_related_report" },
	{ 0xb0efefdd, "nf_conntrack_helpers_unregister" },
	{ 0x9565e79, "__nf_ct_expect_find" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x367a46d0, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8bba228a, "__nf_ip6_route" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A5BC75D5FDF3ED009BF6294");
