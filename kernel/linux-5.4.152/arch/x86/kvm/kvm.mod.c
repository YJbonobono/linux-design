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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x4513e93e, "yield_to" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x8a11f608, "vma_kernel_pagesize" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d0c5c5, "kvm_async_pf_task_wait" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb9f93763, "eventfd_ctx_fileget" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x8fc9e71a, "__cpuhp_remove_state" },
	{ 0x2a36fb0a, "put_pid" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x498d872e, "cpufreq_get_policy" },
	{ 0x92141343, "kvm_async_pf_task_wake" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe83eba32, "itlb_multihit_kvm_mitigation" },
	{ 0xfa35044a, "alternatives_patched" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x5a6e1db6, "get_task_pid" },
	{ 0xa123a51, "bpf_trace_run7" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0x6c259e66, "perf_event_release_kernel" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x947b40c6, "cpu_smt_possible" },
	{ 0xc132d849, "preempt_notifier_unregister" },
	{ 0xcdaeb45e, "pid_vnr" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x888c5be5, "irq_bypass_register_consumer" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xfd205417, "no_llseek" },
	{ 0x5f2da8c4, "check_tsc_unstable" },
	{ 0xef380228, "mmu_notifier_register" },
	{ 0x32bc0fcf, "preempt_notifier_dec" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x7452adff, "user_return_notifier_register" },
	{ 0x77eb2fe7, "__hrtimer_get_remaining" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x550ce709, "pat_enabled" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x23f7d6b9, "dput" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x65d9e877, "cpufreq_register_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x304f24dd, "__get_user_pages_fast" },
	{ 0x7021842c, "get_user_pages_unlocked" },
	{ 0xccea4e34, "perf_get_x86_pmu_capability" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7eee721c, "kthread_destroy_worker" },
	{ 0x32e3b076, "mxcsr_feature_mask" },
	{ 0xec1964e8, "mmput" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x6923ce63, "irq_work_sync" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xb4b97c90, "pvclock_gtod_register_notifier" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xaa6a50f9, "__static_key_deferred_flush" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7c46233a, "cpufreq_quick_get" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x51d49c06, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x9539023c, "simple_attr_read" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x6214aef2, "cpufreq_unregister_notifier" },
	{ 0x4248ae3c, "single_task_running" },
	{ 0xc361dee8, "follow_pte" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x71e49f45, "prepare_to_swait_exclusive" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb60ca09, "synchronize_srcu_expedited" },
	{ 0x41ed3cec, "eventfd_ctx_remove_wait_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x3fe35aea, "irq_bypass_unregister_consumer" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x7b64d81, "hyperv_stop_tsc_emulation" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xede98ec5, "intel_pt_validate_hw_cap" },
	{ 0x68952493, "rcu_note_context_switch" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x75792186, "get_xsave_addr" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xeee667d3, "fpregs_assert_state_consistent" },
	{ 0xab9bd884, "perf_register_guest_info_callbacks" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf47e020f, "cleanup_srcu_struct" },
	{ 0x995d1071, "prof_on" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x5916aa17, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfac19588, "__clear_user" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xffb7349e, "preempt_notifier_register" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xa1403485, "fixup_user_fault" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb005422, "finish_swait" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0xf8fe3986, "pat_pfn_immune_to_uc_mtrr" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xa4dac27f, "task_cputime_adjusted" },
	{ 0xad5d6c0f, "dentry_path_raw" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x7b791c26, "kmem_cache_create_usercopy" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x402cbbf, "preempt_notifier_inc" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd8a14513, "__cpuhp_setup_state" },
	{ 0xe7232e0f, "user_return_notifier_unregister" },
	{ 0xa164179, "fput" },
	{ 0x4688d7ec, "pvclock_gtod_unregister_notifier" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x565c8b0a, "init_srcu_struct" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xaa3b63e6, "mark_page_accessed" },
	{ 0xe314cc54, "debugfs_lookup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x51701184, "param_ops_bint" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xfab4c469, "kthread_unpark" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda1f78ee, "clear_hv_tscchange_cb" },
	{ 0x4c16c081, "find_vma" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x85efc7e0, "zero_pfn" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa7da0c9e, "kthread_queue_work" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa944103a, "get_user_pages" },
	{ 0xaa230f88, "perf_unregister_guest_info_callbacks" },
	{ 0xad755fc2, "param_get_uint" },
	{ 0x6f5129d4, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf6230e49, "fpregs_mark_activate" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x130b568, "wake_up_process" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xa6420af4, "get_user_pages_remote" },
	{ 0xc6b10427, "ex_handler_fprestore" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xbe55088d, "perf_event_read_value" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xec359bb0, "kthread_park" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x619b14da, "fpstate_init" },
	{ 0x4d924f20, "memremap" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x1cbd92b0, "cpu_mitigations_off" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x9258937a, "e820__mapped_raw_any" },
	{ 0x8f38d383, "ex_handler_default" },
	{ 0x4e532767, "send_sig_mceerr" },
	{ 0x1242eb44, "vm_mmap" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e8fae7c, "smp_ops" },
	{ 0xb83b70f2, "housekeeping_enabled" },
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x1924f57c, "fd_install" },
	{ 0x9a45f14d, "param_set_uint" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0xe1aa2d62, "set_hv_tscchange_cb" },
	{ 0xf74e7c93, "jump_label_rate_limit" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xcd81a945, "switch_fpu_return" },
	{ 0x3ba01b47, "get_compat_sigset" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x64bdcaa8, "hv_get_tsc_page" },
	{ 0x3dbbb79, "set_user_nice" },
	{ 0x79cf1043, "fpu_kernel_xstate_size" },
	{ 0x6b8208a9, "__put_task_struct" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x466c14a7, "__delay" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3f5d50fd, "get_pid_task" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5b56860c, "vm_munmap" },
	{ 0xa63a07c, "bpf_trace_run6" },
	{ 0x7d1bfe34, "param_get_bool" },
	{ 0x55e7fd2e, "cgroup_attach_task_all" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x874ec359, "perf_event_create_kernel_counter" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x9241b358, "__static_key_slow_dec_deferred" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0x67955ce6, "profile_hits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0x5ee22e2b, "kthread_flush_work" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x93082893, "misc_deregister" },
	{ 0x41ddd40e, "kthread_create_worker" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7676d951, "anon_inode_getfile" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x71dc307b, "__put_page" },
	{ 0x4dade965, "simple_attr_write" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0xc80ab559, "swake_up_one" },
	{ 0xe914e41e, "strcpy" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xef464c28, "getboottime64" },
	{ 0x196614ce, "hw_breakpoint_restore" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DB067666CA04BFD82038E47");
