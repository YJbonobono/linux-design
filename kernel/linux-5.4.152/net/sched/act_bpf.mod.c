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
	{ 0xf1cf7179, "tcf_unregister_action" },
	{ 0xc6d3c7ab, "tcf_register_action" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xfb9ae09d, "tcf_action_set_ctrlact" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb96bb606, "bpf_prog_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb0f5e59f, "bpf_prog_get_type_dev" },
	{ 0xc7539d63, "tcf_idr_cleanup" },
	{ 0x7fa68ab7, "tcf_idr_create" },
	{ 0x63109fd0, "__tcf_idr_release" },
	{ 0xa672ce62, "tcf_chain_put_by_act" },
	{ 0x91f4559e, "tcf_action_check_ctrlact" },
	{ 0xbd50b5d, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x45d7658c, "tcf_idr_search" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd72baae5, "bpf_prog_destroy" },
	{ 0xe6c73091, "bpf_prog_put" },
	{ 0xb1375a6b, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2eae7c54, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "06D73F3743A1E1AAA4EA326");
