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
	{ 0x8902453d, "pm_genpd_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x48b62a57, "drm_dp_link_train_channel_eq_delay" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x4dd011cf, "drm_atomic_get_private_obj_state" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xf836c226, "drm_fb_helper_debug_enter" },
	{ 0xf0acb658, "drm_gem_map_dma_buf" },
	{ 0x14fecead, "drm_add_edid_modes" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf5c9131c, "drm_fb_helper_cfb_copyarea" },
	{ 0xce058c4, "drm_kms_helper_hotplug_event" },
	{ 0xf5d3f66d, "drm_atomic_private_obj_fini" },
	{ 0x2b1a3154, "drm_helper_resume_force_mode" },
	{ 0x23ffbb20, "drm_kms_helper_poll_fini" },
	{ 0xf4325b33, "drm_sched_increase_karma" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x620804f6, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0xedc03953, "iounmap" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x66696159, "drm_crtc_vblank_get" },
	{ 0xa3b53740, "single_release" },
	{ 0x9539023c, "simple_attr_read" },
	{ 0x7f88521, "drm_edid_is_valid" },
	{ 0xa508c46e, "dma_resv_reserve_shared" },
	{ 0x33a6d115, "drm_syncobj_find" },
	{ 0xf2ab010a, "remove_conflicting_pci_framebuffers" },
	{ 0xffb7c514, "ida_free" },
	{ 0xdd37784b, "drm_connector_set_vrr_capable_property" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x91143f17, "drm_syncobj_replace_fence" },
	{ 0x9f399b2a, "drm_gem_map_attach" },
	{ 0xed9f0e84, "ttm_tt_set_placement_caching" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xb9549b36, "drm_dev_dbg" },
	{ 0x84e1635d, "drm_modeset_lock_all" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x197631dc, "pci_bus_resource_n" },
	{ 0x754d539c, "strlen" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x3f5d50fd, "get_pid_task" },
	{ 0x4181722a, "drm_gem_fb_create_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7538003, "drm_handle_vblank" },
	{ 0x265f55e6, "seq_write" },
	{ 0x91e44cf7, "drm_kms_helper_poll_disable" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe8c2beb5, "sysfs_remove_file_ns" },
	{ 0x4b1c600f, "ttm_bo_move_to_lru_tail" },
	{ 0x25c5676f, "drm_property_create_range" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x1793a4b9, "drm_sched_entity_fini" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x52977a3a, "__class_create" },
	{ 0x6250a79f, "drm_crtc_init_with_planes" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb442129e, "backlight_force_update" },
	{ 0xf9f146a1, "drm_sched_fini" },
	{ 0xb17e3e22, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xabfd9390, "pci_enable_atomic_ops_to_root" },
	{ 0x4388929d, "drm_mode_object_find" },
	{ 0x4c848ac9, "drm_fb_helper_init" },
	{ 0xe0618aed, "drm_helper_connector_dpms" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x5c0ba327, "component_add" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x74f66a28, "drm_crtc_vblank_put" },
	{ 0x3c9b793c, "amd_iommu_set_invalid_ppr_cb" },
	{ 0xa8ad5d01, "drm_detect_hdmi_monitor" },
	{ 0x9bde364e, "drm_dp_cec_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0x76e7be9, "drm_crtc_helper_set_config" },
	{ 0x18288cc0, "drm_atomic_helper_set_config" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xc19833b3, "drm_framebuffer_unregister_private" },
	{ 0xaf070152, "ttm_dma_unpopulate" },
	{ 0xc0ecb01c, "drm_framebuffer_cleanup" },
	{ 0xf83f6a04, "dma_get_required_mask" },
	{ 0x294d30d4, "drm_gem_private_object_init" },
	{ 0xfd14eb2d, "pci_assign_unassigned_bus_resources" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xbd3998f2, "drm_dp_cec_set_edid" },
	{ 0xe579495a, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x2db4e288, "drm_prime_pages_to_sg" },
	{ 0x316d896, "drm_dev_register" },
	{ 0xbea059d6, "pci_release_resource" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb0b3134e, "drm_connector_list_iter_next" },
	{ 0x33774b9d, "request_firmware_direct" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8b649497, "drm_fb_helper_cfb_imageblit" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xa71b462b, "drm_crtc_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0x8c71201b, "drm_fb_helper_set_par" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x6d09f017, "drm_dev_printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x1daf5d44, "drm_fb_helper_blank" },
	{ 0x77e12038, "drm_dp_check_act_status" },
	{ 0xc324efb9, "drm_edid_to_sad" },
	{ 0x8511e5ce, "drm_gem_map_detach" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x60323538, "pm_genpd_remove_device" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xa99fcd93, "drm_encoder_init" },
	{ 0x35afae24, "__drm_puts_seq_file" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xcb4b405, "drm_sched_entity_destroy" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x1d6ed006, "drm_dp_mst_detect_port" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x77b1c51e, "drm_fb_helper_lastclose" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf1995e47, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x4b96b425, "drm_plane_create_color_properties" },
	{ 0xa01d3c05, "pci_resize_resource" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbab1b74b, "drm_dp_cec_register_connector" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x541745d, "simple_attr_open" },
	{ 0xfe12bcb9, "drm_dsc_compute_rc_parameters" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0xfab4c469, "kthread_unpark" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x67c8a5f7, "drm_helper_force_disable_all" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc343d1e8, "ttm_bo_evict_mm" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0xc60aef2d, "amd_iommu_init_device" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x440fd18, "drm_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x57bc19d2, "down_write" },
	{ 0x3bbfa5a6, "drm_dp_mst_hpd_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xa28ef56f, "amd_iommu_unbind_pasid" },
	{ 0x270805fc, "drm_vma_node_allow" },
	{ 0x5a6e1db6, "get_task_pid" },
	{ 0x988ed94d, "drm_crtc_accurate_vblank_count" },
	{ 0x90c76102, "drm_syncobj_get_fd" },
	{ 0x47b00ac0, "drm_connector_register" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x1000e51, "schedule" },
	{ 0xcc9a8401, "drm_modeset_unlock" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x2f113522, "drm_helper_disable_unused_functions" },
	{ 0xb44ff586, "drm_kms_helper_poll_enable" },
	{ 0x24df9857, "drm_dp_mst_put_port_malloc" },
	{ 0xa87b6fb1, "drm_atomic_helper_plane_destroy_state" },
	{ 0xf96ce6f9, "drm_atomic_helper_async_check" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x74d37097, "drm_send_event_locked" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x86010112, "drm_atomic_state_alloc" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x87d36c4f, "iommu_get_domain_for_dev" },
	{ 0xb15ab250, "dma_fence_array_create" },
	{ 0x142a57c3, "ttm_bo_kmap" },
	{ 0x899f60df, "drm_primary_helper_destroy" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x797c6466, "drm_crtc_cleanup" },
	{ 0xe03d4223, "get_task_mm" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x89e4bb2, "dma_resv_wait_timeout_rcu" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2d88ee71, "drm_dp_update_payload_part1" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x98aef30f, "drm_dp_update_payload_part2" },
	{ 0x411d4808, "dma_resv_test_signaled_rcu" },
	{ 0x4aca384e, "drm_atomic_helper_suspend" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xb646ac29, "drm_dp_aux_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x6006847, "current_task" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xb6127243, "drm_need_swiotlb" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x274f417d, "drm_dp_mst_topology_mgr_resume" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6136a436, "drm_atomic_add_affected_planes" },
	{ 0x42c70656, "drm_add_modes_noedid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c87bfde, "drm_sched_entity_set_priority" },
	{ 0x86221fbf, "perf_pmu_register" },
	{ 0x2a36fb0a, "put_pid" },
	{ 0x9d9784f5, "drm_fb_helper_cfb_fillrect" },
	{ 0x20645642, "drm_debug" },
	{ 0x9a55da0b, "dma_resv_add_shared_fence" },
	{ 0xaf8ebd4, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0xfa1abee1, "drm_gem_dmabuf_vunmap" },
	{ 0xd992acfc, "hmm_mirror_register" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd7933a37, "drm_dp_mst_topology_mgr_init" },
	{ 0x3dfd5574, "drm_dp_mst_get_edid" },
	{ 0x5ebf95d4, "drm_crtc_enable_color_mgmt" },
	{ 0xeaae942f, "drm_universal_plane_init" },
	{ 0x3cdfdaee, "drm_connector_init_with_ddc" },
	{ 0x1924f57c, "fd_install" },
	{ 0xfd205417, "no_llseek" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4dade965, "simple_attr_write" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8d817ccf, "sysfs_remove_file_from_group" },
	{ 0x11d29883, "vga_remove_vgacon" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0x3fa11c6, "drm_mode_is_420_only" },
	{ 0xa8cf10c1, "drm_gem_object_lookup" },
	{ 0x5c24cbb2, "drm_atomic_helper_commit_hw_done" },
	{ 0x64b470fa, "drm_dp_dpcd_read" },
	{ 0xa14e96ba, "sg_alloc_table_from_pages" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x419c118a, "hmm_range_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x21929ae, "drm_connector_list_iter_begin" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x885733eb, "pci_ignore_hotplug" },
	{ 0x2f164e53, "drm_fb_helper_initial_config" },
	{ 0xcc4c85f, "drm_dp_dpcd_write" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x86053823, "drm_dp_cec_unset_edid" },
	{ 0x27418c7d, "ttm_bo_bulk_move_lru_tail" },
	{ 0x265967f8, "drm_object_attach_property" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0x6314a41e, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xfdfb792f, "amd_iommu_pc_supported" },
	{ 0x2419583d, "ttm_bo_dma_acc_size" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0x91289a55, "ttm_eu_reserve_buffers" },
	{ 0x9489beae, "drm_sched_start" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xaaa4048e, "drm_encoder_cleanup" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x364850b1, "down_write_killable" },
	{ 0xa161ddfe, "drm_gem_unmap_dma_buf" },
	{ 0xb84f6412, "ttm_bo_kunmap" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4acd518e, "ttm_bo_unlock_delayed_workqueue" },
	{ 0xb96dd5c7, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0x94379ed8, "drm_mode_create_scaling_mode_property" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0xbc8870e8, "ttm_fbdev_mmap" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0xbc82c93, "pm_genpd_add_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe7a386be, "ttm_unmap_and_unpopulate_pages" },
	{ 0x38b265b0, "drm_atomic_helper_legacy_gamma_set" },
	{ 0x54b4fcdc, "drm_crtc_add_crc_entry" },
	{ 0x192e50c5, "ttm_tt_bind" },
	{ 0x38f3e6e4, "sysfs_add_file_to_group" },
	{ 0x684b4299, "ttm_bo_device_release" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xfef28022, "use_mm" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x19029c92, "dma_resv_add_excl_fence" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x407e8a8a, "drm_dev_unplug" },
	{ 0x1635bff1, "drm_dp_mst_allocate_vcpi" },
	{ 0x6e519bd1, "hmm_range_unregister" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x38669b22, "to_drm_sched_fence" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x95525e5e, "ttm_bo_mmap" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x16c66718, "drm_match_cea_mode" },
	{ 0xb43945e6, "drm_gem_dmabuf_release" },
	{ 0x5a4734d1, "drm_kms_helper_is_poll_worker" },
	{ 0xb7ce53d4, "__drm_atomic_helper_plane_reset" },
	{ 0x263c1f56, "drm_dp_find_vcpi_slots" },
	{ 0x329b9c74, "drm_dp_mst_dump_topology" },
	{ 0xedceb406, "pcie_get_speed_cap" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0xaaeeb19a, "drm_fb_helper_fill_info" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0x94819c12, "drm_gem_prime_import" },
	{ 0x270ac3e, "irq_set_chip_and_handler_name" },
	{ 0x4c16c081, "find_vma" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0xa5b4e96c, "ttm_dma_page_alloc_debugfs" },
	{ 0x1251a67f, "ttm_dma_tt_fini" },
	{ 0x5fd43696, "drm_vma_node_revoke" },
	{ 0xbdf8407b, "hmm_range_fault" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ec03055, "pcie_capability_read_dword" },
	{ 0x6c102259, "drm_fb_helper_ioctl" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x2a1db431, "drm_atomic_helper_check_modeset" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x51fdec59, "drm_dp_cec_unregister_connector" },
	{ 0xa4629fd6, "drm_kms_helper_poll_init" },
	{ 0x3ce0fa40, "node_data" },
	{ 0xad3e5fce, "drm_dp_stop_crc" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xec83044d, "drm_atomic_get_connector_state" },
	{ 0xfa9750f8, "vga_client_register" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x20978fb9, "idr_find" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc9a79b1f, "drm_dp_mst_topology_mgr_suspend" },
	{ 0xede2149c, "drm_color_lut_extract" },
	{ 0x5d66678e, "vga_switcheroo_fini_domain_pm_ops" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x8c519ada, "dma_buf_get" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x8fc460ee, "drm_vblank_init" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x722dc4a7, "drm_sched_resubmit_jobs" },
	{ 0x9166fada, "strncpy" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0x55d05b31, "drm_gem_fb_destroy" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x168d695f, "amd_iommu_free_device" },
	{ 0x36f76de8, "drm_debugfs_create_files" },
	{ 0xa164179, "fput" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x60947cd4, "ttm_bo_lock_delayed_workqueue" },
	{ 0x668b19a1, "down_read" },
	{ 0x72d81fef, "ttm_bo_put" },
	{ 0xd79579c3, "drm_plane_create_alpha_property" },
	{ 0x590118e, "pid_task" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xb8a800f7, "__get_task_comm" },
	{ 0xd859ece7, "drm_atomic_helper_shutdown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbbc06b77, "drm_calc_vbltimestamp_from_scanoutpos" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x7b735058, "drm_connector_unregister" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xf97ada41, "component_del" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x6e211c63, "drm_connector_attach_max_bpc_property" },
	{ 0x1068f94b, "ttm_eu_backoff_reservation" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x944c43f, "node_states" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0x425d970f, "ttm_bo_move_accel_cleanup" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x634c30a1, "vga_switcheroo_init_domain_pm_ops" },
	{ 0x2ed16956, "pcie_bandwidth_available" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x4efbfc6e, "drm_atomic_helper_cleanup_planes" },
	{ 0x91896b1c, "fget" },
	{ 0xf71ed3ee, "ttm_page_alloc_debugfs" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb0454a23, "drm_sched_job_cleanup" },
	{ 0x1f71f992, "drm_syncobj_get_handle" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xc5834f7b, "hmm_mirror_unregister" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xb86d02c7, "drm_mode_probed_add" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xcd6eae2f, "ww_mutex_lock" },
	{ 0x12d70b80, "drm_framebuffer_init" },
	{ 0x33f0768c, "cpufreq_quick_get_max" },
	{ 0x100bc016, "drm_dp_aux_register" },
	{ 0xec1964e8, "mmput" },
	{ 0xa70013ba, "drm_sched_stop" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0xdbb310da, "drm_connector_set_path_property" },
	{ 0x5da6ad41, "amd_iommu_set_invalidate_ctx_cb" },
	{ 0x95c0fe0e, "drm_atomic_helper_check_planes" },
	{ 0x51d58e8, "dma_fence_wait_any_timeout" },
	{ 0xa1bedd72, "amd_iommu_pc_get_max_counters" },
	{ 0xa312aada, "ttm_dma_populate" },
	{ 0xb251826c, "drm_atomic_helper_page_flip" },
	{ 0xa9c72303, "amd_iommu_pc_get_max_banks" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x75be9914, "drm_atomic_get_plane_state" },
	{ 0xf7334f11, "drm_fb_helper_debug_leave" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x349cba85, "strchr" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6dc713e9, "ttm_bo_mem_space" },
	{ 0x542f1983, "drm_dp_mst_connector_early_unregister" },
	{ 0x5d110daf, "drm_irq_install" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xa6ff9496, "drm_dp_link_train_clock_recovery_delay" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x5b2f27fb, "do_wait_intr" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0x37a0cba, "kfree" },
	{ 0xd09bc71f, "ww_mutex_lock_interruptible" },
	{ 0xebb7a8a2, "debugfs_create_file_unsafe" },
	{ 0x19ab1532, "pci_get_class" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x1ad307ec, "drm_syncobj_add_point" },
	{ 0xa7ef3bd5, "pcie_get_mps" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x900347a0, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x44370c1e, "ttm_eu_fence_buffer_objects" },
	{ 0xb177d101, "seq_printf" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xfff8ff75, "drm_fb_helper_check_var" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58d8fcaa, "drm_dsc_pps_payload_pack" },
	{ 0xe8b6e396, "ttm_bo_validate" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x845e8009, "drm_fb_helper_prepare" },
	{ 0x15d8aa41, "__drm_printfn_seq_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa47826e4, "drm_dp_calc_pbn_mode" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0x87ca1281, "drm_gem_handle_create" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x16ac2597, "drm_printf" },
	{ 0xb584d731, "drm_dp_start_crc" },
	{ 0xeab5b333, "drm_mode_object_put" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0xe8968291, "drm_helper_hpd_irq_event" },
	{ 0x5b5c6df, "drm_dp_mst_deallocate_vcpi" },
	{ 0x6e0bbabe, "drm_mm_print" },
	{ 0xd5b53788, "drm_atomic_helper_wait_for_flip_done" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x16b23d08, "drm_connector_list_iter_end" },
	{ 0x9fc796d4, "drm_sched_entity_flush" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0x9b00b1f7, "ttm_bo_device_init" },
	{ 0x410b9521, "drm_fb_helper_pan_display" },
	{ 0x39920a6c, "drm_sched_entity_init" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xea124bd1, "gcd" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x94a91aef, "vga_switcheroo_unregister_client" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc96df671, "drm_helper_mode_fill_fb_struct" },
	{ 0x5c23838c, "dma_resv_get_fences_rcu" },
	{ 0xebc4dc41, "sysfs_create_file_ns" },
	{ 0xef380228, "mmu_notifier_register" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0x6e9b46ef, "pcie_set_readrq" },
	{ 0x267c62a8, "ttm_bo_eviction_valuable" },
	{ 0x3850d449, "amd_iommu_bind_pasid" },
	{ 0x94953fe7, "drm_irq_uninstall" },
	{ 0x89df2557, "drm_dp_dpcd_read_link_status" },
	{ 0xa916b694, "strnlen" },
	{ 0xf8b7531, "drm_syncobj_find_fence" },
	{ 0xd19dd50a, "vga_switcheroo_register_handler" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xf9bd67b0, "ttm_bo_mem_put" },
	{ 0x73011db0, "drm_dp_bw_code_to_link_rate" },
	{ 0x750492d4, "pci_unmap_rom" },
	{ 0xab5802ee, "seq_hex_dump" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xce807a25, "up_write" },
	{ 0xca2a1c89, "drm_atomic_add_affected_connectors" },
	{ 0xeb86ed49, "drm_crtc_vblank_off" },
	{ 0xd7ca0ae0, "drm_atomic_helper_disable_plane" },
	{ 0x45afaa8e, "perf_event_update_userpage" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0x53b954a2, "up_read" },
	{ 0x537d7129, "drm_gem_prime_fd_to_handle" },
	{ 0xd0bd487b, "hdmi_drm_infoframe_pack_only" },
	{ 0x91922c6c, "drm_dp_mst_get_port_malloc" },
	{ 0xfbe6c70c, "ttm_bo_init_mm" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52e0a149, "drm_open" },
	{ 0xde039a55, "drm_gem_object_release" },
	{ 0xa95befbe, "dma_buf_put" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xcef10357, "drm_crtc_helper_set_mode" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x5a921311, "strncmp" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x2ee5dfde, "drm_fb_helper_alloc_fbi" },
	{ 0x3e7419d2, "drm_sched_job_init" },
	{ 0xe524bc82, "ttm_populate_and_map_pages" },
	{ 0xc089c5d2, "drm_mode_crtc_set_gamma_size" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4793e274, "pci_map_rom" },
	{ 0x817aeff4, "vga_switcheroo_client_fb_set" },
	{ 0xb0e602eb, "memmove" },
	{ 0x742f270b, "drm_sched_dependency_optimized" },
	{ 0xc0ec19a3, "ttm_bo_pipeline_move" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x9213f5c3, "drm_edid_to_speaker_allocation" },
	{ 0x5835c392, "drm_atomic_commit" },
	{ 0xe75fa8fc, "drm_connector_attach_vrr_capable_property" },
	{ 0x8a69ced4, "drm_gem_prime_handle_to_fd" },
	{ 0xff4588a, "ttm_bo_init_reserved" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x7fd77abd, "drm_plane_create_blend_mode_property" },
	{ 0xd547c01f, "drm_sched_init" },
	{ 0xc5c99a79, "drm_dp_get_adjust_request_voltage" },
	{ 0x9601035f, "request_firmware" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x87f894ba, "__drm_atomic_helper_connector_reset" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526f5e88, "drm_sched_suspend_timeout" },
	{ 0xb3b9c06d, "vga_switcheroo_register_client" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x3fec8eb4, "ttm_sg_tt_init" },
	{ 0x87a67f49, "single_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe8975106, "perf_pmu_unregister" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x96a5ea7c, "drm_crtc_vblank_count" },
	{ 0xadb6094e, "drm_sched_fault" },
	{ 0x582f248e, "drm_dp_get_adjust_request_pre_emphasis" },
	{ 0x9d384429, "ttm_bo_move_ttm" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xde2107a6, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x15c0a8de, "drm_sched_entity_push_job" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x1e56b64, "drm_crtc_vblank_on" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x27026afd, "drm_gem_prime_export" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13f26ae, "dma_fence_get_stub" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1242eb44, "vm_mmap" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x677bb5a8, "drm_cvt_mode" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8d701329, "drm_dp_clock_recovery_ok" },
	{ 0x204dcb99, "drm_prime_gem_destroy" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xc58bc186, "drm_modeset_lock" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0x617193dd, "drm_dev_alloc" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xa8796ba6, "drm_atomic_helper_resume" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xb17352cf, "ttm_bo_manager_func" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x6b8208a9, "__put_task_struct" },
	{ 0x99771c2f, "ttm_bo_move_memcpy" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x5f1fdc29, "drm_atomic_get_crtc_state" },
	{ 0x9730d0a0, "bpf_trace_run5" },
	{ 0x80bf52ff, "drm_gem_object_put" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xa63a07c, "bpf_trace_run6" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x2ae6b245, "drm_syncobj_create" },
	{ 0xad02d3c7, "drm_fb_helper_fini" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x9a797859, "sync_file_create" },
	{ 0xb6d2e74e, "drm_property_create_enum" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0xca9360b5, "rb_next" },
	{ 0xaf2a199, "mmu_notifier_put" },
	{ 0x136df6c7, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xb06e20fd, "drm_modeset_unlock_all" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xaab74be, "drm_dp_mst_topology_mgr_destroy" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xf7708df0, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x796645b6, "drm_gem_dmabuf_mmap" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xc2e6f7f4, "ww_mutex_unlock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xa15ec7a9, "ttm_bo_clean_mm" },
	{ 0xcefcfd47, "pcie_get_readrq" },
	{ 0xc06c2b68, "drm_fb_helper_unregister_fbi" },
	{ 0xc5850110, "printk" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x4110938b, "ttm_bo_add_to_lru" },
	{ 0x51d49c06, "__mmdrop" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xdd687603, "drm_fb_helper_output_poll_changed" },
	{ 0x3057735a, "iommu_iova_to_phys" },
	{ 0x6aa3c338, "drm_get_format_info" },
	{ 0x15f4a35b, "unuse_mm" },
	{ 0xa03ed16, "drm_connector_attach_encoder" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0x62d1fa65, "amd_iommu_device_info" },
	{ 0xec359bb0, "kthread_park" },
	{ 0xc81d0560, "drm_mode_duplicate" },
	{ 0xed335d4f, "drm_get_edid" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x480d1980, "drm_gem_dmabuf_vmap" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e51cd74, "swiotlb_nr_tbl" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xd6374150, "drm_crtc_handle_vblank" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x160fa4a1, "drm_dp_mst_connector_late_register" },
	{ 0xb0b57911, "drm_atomic_helper_update_plane" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x26aa2ef2, "drm_fb_helper_setcmap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a78a87, "drm_modeset_lock_all_ctx" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x12248fe8, "drm_is_current_master" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0x1989151b, "drm_dp_mst_reset_vcpi_slots" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x32fe7da2, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0x6e963410, "drm_atomic_private_obj_init" },
	{ 0xed3b6bc3, "drm_mode_is_420_also" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,gpu-sched,ttm,amd_iommu_v2,i2c-algo-bit");

MODULE_ALIAS("pci:v00001002d00006780sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006784sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006788sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000678Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006790sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006791sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006792sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006798sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006799sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006623sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006631sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006826sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006829sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006664sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006667sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000666Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001305sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001316sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001317sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006658sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009832sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009833sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009836sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009851sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009853sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009854sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009856sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009857sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009858sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009859sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006901sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006907sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006929sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006938sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006939sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000730Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009874sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009875sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009876sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000098E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067FFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006FDFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006986sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006987sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006995sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006997sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000699Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006860sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006861sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006862sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006863sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006864sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006867sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006868sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006869sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000687Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000734Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001636sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007362sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2D02B1039A5ED491F30F746");
