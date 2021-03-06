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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x227b1718, "tboot" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x9c42de04, "kvm_lapic_hv_timer_in_use" },
	{ 0x8c4c5ce8, "kvm_apic_write_nodecode" },
	{ 0xa975020d, "kvm_mmu_set_mask_ptes" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3c13a5ca, "kvm_complete_insn_gp" },
	{ 0xa7efac17, "kvm_vcpu_write_guest" },
	{ 0x7991fd8d, "crash_vmclear_loaded_vmcss" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xfee845d9, "kvm_cpu_get_interrupt" },
	{ 0x56f45eb5, "kvm_mmu_sync_roots" },
	{ 0x814af6f0, "kvm_mmu_load" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xbbc3e57b, "kvm_release_page_dirty" },
	{ 0x9db6b837, "kvm_inject_page_fault" },
	{ 0x791272aa, "kvm_skip_emulated_instruction" },
	{ 0xba2c071e, "kvm_require_dr" },
	{ 0xdd9e7aeb, "kvm_set_shared_msr" },
	{ 0x15f5cf6a, "__tracepoint_kvm_nested_vmexit_inject" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x17add64b, "gdt_page" },
	{ 0x6c259e66, "perf_event_release_kernel" },
	{ 0xb359aabd, "kvm_intr_is_single_vcpu" },
	{ 0xe740b58a, "hv_vp_assist_page" },
	{ 0x62d62e0a, "kvm_set_msr_common" },
	{ 0xf28210df, "kvm_fast_pio" },
	{ 0x4ec3a01f, "kvm_mmu_invlpg" },
	{ 0x7ad60076, "kvm_inject_realmode_interrupt" },
	{ 0xeb8be59e, "kvm_vcpu_kick" },
	{ 0x895ec8e9, "kvm_vcpu_init" },
	{ 0x74da8085, "kvm_apic_set_eoi_accelerated" },
	{ 0x3731b704, "kvm_emulate_wrmsr" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb0591d2c, "kvm_emulate_cpuid" },
	{ 0x888d979f, "__tracepoint_kvm_exit" },
	{ 0xad2951a9, "ex_handler_rdmsr_unsafe" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x1adb6f82, "current_vcpu" },
	{ 0xfde6a7e3, "kvm_queue_exception_e" },
	{ 0x485cd7f6, "kvm_rebooting" },
	{ 0x396e2fd7, "ms_hyperv" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x77eb2fe7, "__hrtimer_get_remaining" },
	{ 0xd532aaf3, "kvm_read_guest" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x37f5f795, "kvm_vcpu_on_spin" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe5a1acda, "kvm_mmu_unload" },
	{ 0xf0eea1ac, "kvm_vcpu_read_guest" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0x187a4ecd, "__tracepoint_read_msr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x956a1640, "kvm_get_apic_mode" },
	{ 0x7c726808, "kvm_mmu_reset_context" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcb166679, "kvm_mtrr_get_guest_memory_type" },
	{ 0xccea4e34, "perf_get_x86_pmu_capability" },
	{ 0x134ce9ff, "ex_handler_clear_fs" },
	{ 0x7117497c, "kvm_can_post_timer_interrupt" },
	{ 0xefb53fc2, "kvm_emulate_instruction" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x8a4ca7be, "hyperv_flush_guest_mapping_range" },
	{ 0x5ce36eba, "kvm_put_guest_xcr0" },
	{ 0x18b3d1e, "intel_pt_validate_cap" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9024f443, "mds_user_clear" },
	{ 0x999e8297, "vfree" },
	{ 0xe8074250, "kvm_mmu_page_fault" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x59cd9c3f, "kvm_get_dr" },
	{ 0x5cdef429, "kvm_set_cr8" },
	{ 0x85493c9, "__alloc_pages_nodemask" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xf2d09902, "kvm_set_cr0" },
	{ 0x3bc6c708, "__x86_set_memory_region" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x881e90d4, "get_cpu_entry_area" },
	{ 0x2d82cc24, "kvm_spec_ctrl_test_value" },
	{ 0xee7a74a2, "kvm_handle_page_fault" },
	{ 0x486f2cb7, "kvm_set_cr4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaa2f52af, "pdptrs_changed" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x28411ed7, "kvm_max_tsc_scaling_ratio" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xf7f42f00, "x86_set_memory_region" },
	{ 0xfb578fc5, "memset" },
	{ 0x3542230f, "kvm_vcpu_read_guest_page" },
	{ 0xe3ccde2b, "x86_fpu_cache" },
	{ 0x96dbe382, "kvm_mpx_supported" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x772f9b1f, "load_pdptrs" },
	{ 0x6b8ebc04, "kvm_get_msr" },
	{ 0x6006847, "current_task" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0xaa8c4c8c, "kvm_get_linear_rip" },
	{ 0xd0459e67, "kvm_has_tsc_control" },
	{ 0xc5850110, "printk" },
	{ 0x709cd8cb, "kvm_spurious_fault" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc3edf6aa, "save_fsgs_for_kvm" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x44bb881a, "kvm_emulate_hypercall" },
	{ 0x243a5a9d, "kvm_set_msi_irq" },
	{ 0xfe40d3a8, "kvm_set_dr" },
	{ 0x3e1f72e0, "kvm_vcpu_cache" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7d658035, "vcpu_load" },
	{ 0x941280f0, "kvm_x86_ops" },
	{ 0x6636c3c9, "irq_set_vcpu_affinity" },
	{ 0xa872d4f5, "kvm_get_cr8" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x38e3dfc9, "kvm_lapic_switch_to_sw_timer" },
	{ 0x3b91db5b, "intel_pt_handle_vmx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x696d7e0b, "l1tf_mitigation" },
	{ 0x1a446c05, "kvm_set_cr3" },
	{ 0x98f4d306, "hyperv_flush_guest_mapping" },
	{ 0x13bcb78, "kvm_emulate_wbinvd" },
	{ 0x3ce7234, "sched_smt_present" },
	{ 0xb36bb7a7, "kvm_init_mmu" },
	{ 0x1634d9c4, "kvm_apic_update_irr" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x2410c338, "x86_virt_spec_ctrl" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x196db543, "kvm_apic_update_ppr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6243ac82, "__kvm_apic_update_irr" },
	{ 0xf0b2970b, "cpuid_query_maxphyaddr" },
	{ 0x15a6574c, "kvm_cpu_has_interrupt" },
	{ 0xc4690dae, "kvm_mmu_invpcid_gva" },
	{ 0xfa541ffc, "__tracepoint_kvm_inj_virq" },
	{ 0x85cf2552, "kvm_read_l1_tsc" },
	{ 0x52ba6e8b, "kvm_mmu_slot_set_dirty" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0x6a261b78, "irq_stat" },
	{ 0x5362ef87, "kvm_mmu_free_roots" },
	{ 0xbfc61ecf, "__tracepoint_kvm_page_fault" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x246df185, "hyperv_fill_flush_guest_mapping_list" },
	{ 0xd8f4740, "kvm_mce_cap_supported" },
	{ 0x1235000a, "kvm_tsc_scaling_ratio_frac_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x21e79d1d, "kvm_mmu_slot_leaf_clear_dirty" },
	{ 0x8c1dfbb3, "kvm_set_rflags" },
	{ 0xbedf7f56, "kvm_valid_efer" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xbaf9d785, "__tss_limit_invalid" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xc287d96a, "kvm_set_posted_intr_wakeup_handler" },
	{ 0x7b44c2f3, "kvm_write_guest_page" },
	{ 0xf3a29016, "kvm_vcpu_unmap" },
	{ 0x618911fc, "numa_node" },
	{ 0xd8ae2ac3, "__tracepoint_kvm_pi_irte_update" },
	{ 0x92a387dc, "kvm_vcpu_is_reset_bsp" },
	{ 0xcab0c0a4, "__tracepoint_kvm_write_tsc_offset" },
	{ 0xce5d33bd, "kvm_emulate_rdmsr" },
	{ 0x27258fa, "cpu_tlbstate" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x4b7f4b69, "kvm_lapic_switch_to_hv_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x86de8ccf, "kvm_queue_exception" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x44a1a89a, "kvm_lapic_set_eoi" },
	{ 0x42313219, "kvm_read_and_reset_pf_reason" },
	{ 0x732140a9, "kvm_lmsw" },
	{ 0x64379bef, "kvm_requeue_exception_e" },
	{ 0x849344cc, "__tracepoint_kvm_pml_full" },
	{ 0x227b0b24, "kvm_init_shadow_ept_mmu" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xaa80bbf3, "kvm_require_cpl" },
	{ 0xaaf935, "kvm_disable_tdp" },
	{ 0x11956d01, "kvm_load_guest_xcr0" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x43d84934, "kvm_mmu_clear_dirty_pt_masked" },
	{ 0x6ada8f59, "kvm_mmu_set_mmio_spte_mask" },
	{ 0xa7b7f597, "kvm_io_bus_write" },
	{ 0x3cc82f45, "__tracepoint_kvm_cr" },
	{ 0x6b9bd7d6, "kvm_write_guest" },
	{ 0x31560a1, "kvm_vcpu_gfn_to_page" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3d74bd01, "kvm_read_guest_virt" },
	{ 0x8ce4f3ab, "kvm_enable_tdp" },
	{ 0x39e3c030, "do_trace_read_msr" },
	{ 0xa4a3889, "kvm_task_switch" },
	{ 0x1e149ea2, "kvm_find_cpuid_entry" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x47ffb376, "kvm_write_guest_virt_system" },
	{ 0xbe55088d, "perf_event_read_value" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xecad1d91, "reprogram_gp_counter" },
	{ 0xd72240a0, "kvm_wait_lapic_expire" },
	{ 0x658fb3e0, "kvm_set_xcr" },
	{ 0x66c4423a, "kvm_define_shared_msr" },
	{ 0x593696f4, "kvm_lapic_find_highest_irr" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5bcf2ca, "kvm_vcpu_map" },
	{ 0x8f38d383, "ex_handler_default" },
	{ 0x27a5c3f9, "kvm_set_apic_base" },
	{ 0xe64c7433, "kvm_emulate_halt" },
	{ 0x4390901e, "kvm_hv_get_assist_page" },
	{ 0x874b77b, "kvm_arch_has_noncoherent_dma" },
	{ 0x7812c047, "__vmalloc" },
	{ 0xf5ad5bd2, "kvm_vcpu_uninit" },
	{ 0x65ece2a2, "__tracepoint_kvm_fast_mmio" },
	{ 0x37a0cba, "kfree" },
	{ 0x440d9b42, "kvm_mmu_slot_largepage_remove_write_access" },
	{ 0xaf12963c, "kvm_get_msr_common" },
	{ 0x7763a671, "__tracepoint_kvm_nested_vmenter_failed" },
	{ 0x8c81448d, "reprogram_fixed_counter" },
	{ 0xf906560a, "handle_ud" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xf47e3dba, "kvm_no_apic_vcpu" },
	{ 0xadb8f873, "do_machine_check" },
	{ 0xea949339, "kvm_vcpu_write_guest_page" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x657e9331, "gfn_to_page" },
	{ 0x5edf7d54, "kvm_lapic_expired_hv_timer" },
	{ 0x3fc8017b, "__kvm_request_immediate_exit" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xf881cecd, "load_fixmap_gdt" },
	{ 0x1d013832, "kvm_enable_efer_bits" },
	{ 0x1db1c372, "enable_vmware_backdoor" },
	{ 0x53c47c53, "apic" },
	{ 0x91d4d992, "__tracepoint_kvm_nested_vmexit" },
	{ 0x63270977, "kvm_default_tsc_scaling_ratio" },
	{ 0xdcb1e268, "kvm_deliver_exception_payload" },
	{ 0xdedf760d, "kvm_set_msr" },
	{ 0xf767ca35, "fixed_percpu_data" },
	{ 0xc659b63b, "kvm_init" },
	{ 0x27046576, "kvm_exit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd279001c, "reprogram_counter" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2aff68f9, "perf_guest_get_msrs" },
	{ 0x20de5193, "kvm_disable_largepages" },
	{ 0x55f431de, "kvm_requeue_exception" },
	{ 0xa851e181, "kvm_clear_guest_page" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0x7db8e0cf, "kvm_vcpu_halt" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x71dc307b, "__put_page" },
	{ 0x50e0cecb, "kvm_vcpu_mark_page_dirty" },
	{ 0x7a2dc786, "kvm_rdpmc" },
	{ 0x61b4c42f, "kvm_arch_has_assigned_device" },
	{ 0x3957e4d0, "vcpu_put" },
	{ 0x4587a161, "kvm_mmu_new_cr3" },
	{ 0xca3ab5ad, "__tracepoint_kvm_ple_window_update" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "kvm");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0085*");

MODULE_INFO(srcversion, "55F7AB532C2D14A1BC79F7E");
