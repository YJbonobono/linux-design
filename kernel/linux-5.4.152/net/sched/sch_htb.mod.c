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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x608833c0, "unregister_qdisc" },
	{ 0x4f809a98, "register_qdisc" },
	{ 0xbd181d44, "__qdisc_calculate_pkt_len" },
	{ 0x3ac7d4fe, "tcf_classify" },
	{ 0x5dc2c1cf, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0xd29d3368, "qdisc_class_hash_grow" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a05650, "qdisc_warn_nonwc" },
	{ 0xa7ce8d16, "qdisc_watchdog_schedule_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbb47c4c3, "noop_qdisc" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x1cd14e21, "qdisc_create_dflt" },
	{ 0xa72a4a77, "pfifo_qdisc_ops" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf411afa6, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdeb8a84f, "gnet_stats_copy_app" },
	{ 0xed0857ed, "gnet_stats_copy_queue" },
	{ 0x3f722575, "gnet_stats_copy_rate_est" },
	{ 0x32d4847b, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbe42ca64, "tcf_block_get" },
	{ 0xb2d09f8e, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4855dc76, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb7367557, "qdisc_watchdog_cancel" },
	{ 0x9afcd044, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x3159b167, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x4e15be72, "qdisc_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5f39266a, "__netif_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B93A428CA6D03CDE9F4471");
