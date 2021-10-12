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
	{ 0x2d3385d3, "system_wq" },
	{ 0x765c1cff, "target_tpg_has_node_acl" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0xf0734b7e, "target_setup_cmd_from_cdb" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xfa040e24, "transport_deregister_session" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0xcf56df01, "target_register_template" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4e110c57, "target_show_dynamic_sessions" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x397e9775, "__transport_register_session" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0x202b6156, "sock_recvmsg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x86437c7e, "target_get_sess_cmd" },
	{ 0x94bfb1fe, "transport_handle_cdb_direct" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xcd2dc184, "transport_wait_for_tasks" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd264fd59, "crypto_shash_finup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa50335f4, "sbitmap_finish_wait" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x999e8297, "vfree" },
	{ 0x2313214e, "core_tmr_alloc_req" },
	{ 0x44a60ad2, "kernel_listen" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc1165dcf, "core_tpg_check_initiator_node_acl" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcba83c13, "transport_lookup_cmd_lun" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9fead42e, "crypto_ahash_final" },
	{ 0xfd94814e, "complete_all" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xf472488c, "crypto_ahash_finup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xac65c263, "core_tpg_set_initiator_node_tag" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x6c62f5a7, "sock_sendmsg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd1313788, "inet_pton_with_scope" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x5a921311, "strncmp" },
	{ 0x761648a3, "transport_deregister_session_configfs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x35f11661, "set_cpus_allowed_ptr" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x78381292, "init_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x565db21d, "flush_signals" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe38941da, "transport_free_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xef1135da, "transport_send_check_condition_and_sense" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x326a25d2, "transport_init_se_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd32694be, "sbitmap_prepare_to_wait" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb7071977, "transport_alloc_session" },
	{ 0xb1b25d41, "transport_alloc_session_tags" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x130b568, "wake_up_process" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3c709394, "transport_lookup_tmr_lun" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x49aa1280, "transport_generic_handle_tmr" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc7f15403, "core_tpg_set_initiator_node_queue_depth" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xd0bac3ee, "kernel_accept" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x9e3d3f75, "sock_create" },
	{ 0xcf2a6966, "up" },
	{ 0xcd187846, "kernel_bind" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xb1f6030c, "transport_generic_new_cmd" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x64eb99b3, "core_alua_check_nonop_delay" },
	{ 0xe914e41e, "strcpy" },
	{ 0x82eef861, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "A04CC5C99F79F902E9C6EE5");
