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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x6f7065a7, "kmem_cache_alloc_node" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x648b5826, "blk_mq_run_hw_queues" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x5c418515, "blkcg_policy_register" },
	{ 0xb177d101, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe618982e, "elv_rb_latter_request" },
	{ 0x99498302, "blkg_conf_prep" },
	{ 0xa6250185, "blkg_print_stat_ios" },
	{ 0xf1c3f8c5, "elv_rqhash_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0xb7bcbeac, "elv_rb_del" },
	{ 0xffee2e9b, "elv_rb_find" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x461d82ed, "blk_mq_sched_try_insert_merge" },
	{ 0x5cc2101a, "elevator_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf02d78ff, "elv_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe32fbd7e, "blkg_conf_finish" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ba2890a, "blk_mq_sched_request_inserted" },
	{ 0x8a14e88c, "elv_rqhash_add" },
	{ 0x9451462b, "blkcg_root" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4610a94, "of_css" },
	{ 0x4f3e491e, "ioc_lookup_icq" },
	{ 0xf4dacaeb, "elv_register" },
	{ 0x707e67d3, "blkg_print_stat_bytes" },
	{ 0xecc5c3f9, "kthread_blkcg" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0x1374ef2d, "blk_mq_free_request" },
	{ 0xb0b70d19, "elv_bio_merge_ok" },
	{ 0xa00e9da3, "__trace_note_message" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a720c31, "blkg_lookup_slowpath" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7822895a, "blkg_print_stat_bytes_recursive" },
	{ 0x7de6cc23, "io_cgrp_subsys_on_dfl_key" },
	{ 0x578a6276, "blkcg_policy_unregister" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x230e5e94, "blkg_print_stat_ios_recursive" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ecdc492, "blkcg_deactivate_policy" },
	{ 0xa1ee063a, "__blkg_prfill_u64" },
	{ 0x30ef3ebd, "blkcg_print_blkgs" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x7b4c9ba9, "sbitmap_queue_min_shallow_depth" },
	{ 0x3adcb68c, "kernfs_path_from_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xdcbaaeef, "elv_rb_former_request" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa16cd00, "wbt_disable_default" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{  0xe3e0f, "blk_mq_sched_try_merge" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5bd627e8, "blkcg_activate_policy" },
	{ 0x2b12db90, "elv_rb_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B0A2C3050A2264956DF31D2");
