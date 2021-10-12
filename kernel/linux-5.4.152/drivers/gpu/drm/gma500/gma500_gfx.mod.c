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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x440fd18, "drm_release" },
	{ 0x8c71201b, "drm_fb_helper_set_par" },
	{ 0x6c102259, "drm_fb_helper_ioctl" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x76e7be9, "drm_crtc_helper_set_config" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x53b954a2, "up_read" },
	{ 0x2b1a3154, "drm_helper_resume_force_mode" },
	{ 0x4c5d9020, "drm_gem_put_pages" },
	{ 0xed335d4f, "drm_get_edid" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x9d9784f5, "drm_fb_helper_cfb_fillrect" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x2f164e53, "drm_fb_helper_initial_config" },
	{ 0xc5e74216, "release_resource" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x750492d4, "pci_unmap_rom" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0x70a9708a, "vmf_insert_mixed" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0x4181722a, "drm_gem_fb_create_handle" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x74f86e9, "drm_mode_destroy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x25c5676f, "drm_property_create_range" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xf7334f11, "drm_fb_helper_debug_leave" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0xeb86ed49, "drm_crtc_vblank_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc875ef08, "drm_gem_free_mmap_offset" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x8fc460ee, "drm_vblank_init" },
	{ 0xd0c7e96a, "set_pages_array_wc" },
	{ 0xa99fcd93, "drm_encoder_init" },
	{ 0xced6311e, "drm_object_property_set_value" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6aa3c338, "drm_get_format_info" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x668b19a1, "down_read" },
	{ 0xc06c2b68, "drm_fb_helper_unregister_fbi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x410b9521, "drm_fb_helper_pan_display" },
	{ 0xf7538003, "drm_handle_vblank" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0xe0618aed, "drm_helper_connector_dpms" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5d110daf, "drm_irq_install" },
	{ 0xf5c9131c, "drm_fb_helper_cfb_copyarea" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xc96df671, "drm_helper_mode_fill_fb_struct" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x265967f8, "drm_object_attach_property" },
	{ 0xc81d0560, "drm_mode_duplicate" },
	{ 0x82479446, "drm_put_dev" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x87ca1281, "drm_gem_handle_create" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x4793e274, "pci_map_rom" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0xde039a55, "drm_gem_object_release" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x14fecead, "drm_add_edid_modes" },
	{ 0x1fe100e2, "drm_property_add_enum" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce807a25, "up_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0x845e8009, "drm_fb_helper_prepare" },
	{ 0xf3219852, "drm_gem_vm_open" },
	{ 0x129cf3a6, "drm_gem_vm_close" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7dec7ee8, "drm_helper_crtc_in_use" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0xdd687603, "drm_fb_helper_output_poll_changed" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x106a0828, "drm_gem_mmap" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe6a07ae9, "set_pages_array_wb" },
	{ 0xb6090661, "i2c_add_numbered_adapter" },
	{ 0x94379ed8, "drm_mode_create_scaling_mode_property" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0xc19833b3, "drm_framebuffer_unregister_private" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfff8ff75, "drm_fb_helper_check_var" },
	{ 0x294d30d4, "drm_gem_private_object_init" },
	{ 0xf2632691, "drm_object_property_get_value" },
	{ 0x1daf5d44, "drm_fb_helper_blank" },
	{ 0xa3f232, "drm_get_pci_dev" },
	{ 0xcef10357, "drm_crtc_helper_set_mode" },
	{ 0x521c94e8, "drm_mode_debug_printmodeline" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x970fe5da, "set_pages_wb" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xa03ed16, "drm_connector_attach_encoder" },
	{ 0xa8cf10c1, "drm_gem_object_lookup" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x2ee5dfde, "drm_fb_helper_alloc_fbi" },
	{ 0xa8ad5d01, "drm_detect_hdmi_monitor" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa71b462b, "drm_crtc_init" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b735058, "drm_connector_unregister" },
	{ 0x7d570964, "drm_gem_object_init" },
	{ 0xaaa4048e, "drm_encoder_cleanup" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xaaeeb19a, "drm_fb_helper_fill_info" },
	{ 0x797c6466, "drm_crtc_cleanup" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8968291, "drm_helper_hpd_irq_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x8b649497, "drm_fb_helper_cfb_imageblit" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xec606497, "set_pages_uc" },
	{ 0xad02d3c7, "drm_fb_helper_fini" },
	{ 0x84e1635d, "drm_modeset_lock_all" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0xb86d02c7, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb06e20fd, "drm_modeset_unlock_all" },
	{ 0x2f113522, "drm_helper_disable_unused_functions" },
	{ 0x26aa2ef2, "drm_fb_helper_setcmap" },
	{ 0x7224f7cd, "drm_property_create" },
	{ 0x77b1c51e, "drm_fb_helper_lastclose" },
	{ 0x12d70b80, "drm_framebuffer_init" },
	{ 0xa4629fd6, "drm_kms_helper_poll_init" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x2b907b1a, "i2c_get_adapter" },
	{ 0x2e7782c2, "drm_gem_get_pages" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x47b00ac0, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xc089c5d2, "drm_mode_crtc_set_gamma_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdb18e0e8, "vmf_insert_pfn" },
	{ 0xf836c226, "drm_fb_helper_debug_enter" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0x4c848ac9, "drm_fb_helper_init" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x52e0a149, "drm_open" },
	{ 0x23ffbb20, "drm_kms_helper_poll_fini" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x55d05b31, "drm_gem_fb_destroy" },
	{ 0xc0ecb01c, "drm_framebuffer_cleanup" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,video,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C5ED1E296F9631422047177");
