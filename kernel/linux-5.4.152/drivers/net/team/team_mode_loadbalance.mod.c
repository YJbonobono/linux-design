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
	{ 0xf5bcff7e, "team_mode_unregister" },
	{ 0xae28e132, "team_mode_register" },
	{ 0x4d3ea097, "team_options_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x64cd0b1e, "netpoll_send_skb_on_dev" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb96bb606, "bpf_prog_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd72baae5, "bpf_prog_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f2bd27, "team_options_unregister" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xfda9bcfb, "team_options_change_check" },
	{ 0xcf4e7ac2, "team_option_inst_set_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "41020897F74DA156F24210E");
