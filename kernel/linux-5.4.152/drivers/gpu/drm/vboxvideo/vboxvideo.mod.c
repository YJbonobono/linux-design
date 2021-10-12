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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x899f60df, "drm_primary_helper_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x440fd18, "drm_release" },
	{ 0x8c71201b, "drm_fb_helper_set_par" },
	{ 0x6c102259, "drm_fb_helper_ioctl" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x316d896, "drm_dev_register" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0xb0b57911, "drm_atomic_helper_update_plane" },
	{ 0xdffa1be6, "drm_atomic_helper_crtc_duplicate_state" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x75970d9, "drm_mode_config_helper_resume" },
	{ 0xe834b9c5, "drm_vram_mm_file_operations_mmap" },
	{ 0x5aa906f0, "drm_gem_vram_kunmap" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0x7d0ba682, "gen_pool_virt_to_phys" },
	{ 0xd77621c6, "drm_vram_helper_release_mm" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0xb251826c, "drm_atomic_helper_page_flip" },
	{ 0x74f86e9, "drm_mode_destroy" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xf7334f11, "drm_fb_helper_debug_leave" },
	{ 0xfd205417, "no_llseek" },
	{ 0x677bb5a8, "drm_cvt_mode" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xce058c4, "drm_kms_helper_hotplug_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa99fcd93, "drm_encoder_init" },
	{ 0xced6311e, "drm_object_property_set_value" },
	{ 0xb0b3134e, "drm_connector_list_iter_next" },
	{ 0x19b65155, "drm_atomic_helper_crtc_reset" },
	{ 0xeaae942f, "drm_universal_plane_init" },
	{ 0x776ef587, "drm_gem_vram_mm_funcs" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0xc06c2b68, "drm_fb_helper_unregister_fbi" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x410b9521, "drm_fb_helper_pan_display" },
	{ 0x18288cc0, "drm_atomic_helper_set_config" },
	{ 0xd2a65128, "drm_gem_vram_create" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0x5d110daf, "drm_irq_install" },
	{ 0x31423ba3, "drm_dev_unregister" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9e77ad3e, "drm_gem_vram_pin" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc96df671, "drm_helper_mode_fill_fb_struct" },
	{ 0xc5850110, "printk" },
	{ 0x265967f8, "drm_object_attach_property" },
	{ 0x6250a79f, "drm_crtc_init_with_planes" },
	{ 0x44f550b5, "drm_atomic_helper_plane_reset" },
	{ 0x1d267627, "drm_atomic_helper_check_plane_state" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc06abf4a, "drm_read" },
	{ 0xf05c7a9, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xd8e2fda8, "drm_mode_config_helper_suspend" },
	{ 0x59758741, "pci_iomap_range" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0xcc9a8401, "drm_modeset_unlock" },
	{ 0xc58bc186, "drm_modeset_lock" },
	{ 0xf76023cd, "drm_gem_vram_unpin" },
	{ 0xbd36008, "drm_gem_vram_kmap" },
	{ 0x1d5e0fd3, "drm_plane_cleanup" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0xe7626c6d, "drm_fb_helper_sys_imageblit" },
	{ 0xf0b42357, "drm_atomic_helper_plane_duplicate_state" },
	{ 0x16b23d08, "drm_connector_list_iter_end" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
	{ 0xc19833b3, "drm_framebuffer_unregister_private" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfff8ff75, "drm_fb_helper_check_var" },
	{ 0x1daf5d44, "drm_fb_helper_blank" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x94953fe7, "drm_irq_uninstall" },
	{ 0xe677f7c5, "drm_dev_init" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x486075c8, "gen_pool_dma_alloc" },
	{ 0xa03ed16, "drm_connector_attach_encoder" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0xa8cf10c1, "drm_gem_object_lookup" },
	{ 0x42c70656, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x2ee5dfde, "drm_fb_helper_alloc_fbi" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb4fbe8, "drm_gem_vram_offset" },
	{ 0x7b735058, "drm_connector_unregister" },
	{ 0xaaa4048e, "drm_encoder_cleanup" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x38b008a8, "fb_deferred_io_cleanup" },
	{ 0xc01232b9, "fb_deferred_io_init" },
	{ 0x7606ee27, "drm_fb_helper_fbdev_setup" },
	{ 0xaaeeb19a, "drm_fb_helper_fill_info" },
	{ 0x21929ae, "drm_connector_list_iter_begin" },
	{ 0x797c6466, "drm_crtc_cleanup" },
	{ 0xede1cec9, "drm_atomic_helper_crtc_destroy_state" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xc008782, "drm_mode_create_suggested_offset_properties" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8348e6f3, "drm_fb_helper_deferred_io" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xad02d3c7, "drm_fb_helper_fini" },
	{ 0xd404016b, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xf9e54f62, "drm_gem_prime_mmap" },
	{ 0xd7ca0ae0, "drm_atomic_helper_disable_plane" },
	{ 0xc0a29bea, "drm_fb_helper_sys_fillrect" },
	{ 0xb86d02c7, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x26aa2ef2, "drm_fb_helper_setcmap" },
	{ 0x77b1c51e, "drm_fb_helper_lastclose" },
	{ 0x12d70b80, "drm_framebuffer_init" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xa8fc0c03, "drm_fb_helper_sys_copyarea" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeeb7266b, "drm_gem_vram_driver_dumb_create" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xc089c5d2, "drm_mode_crtc_set_gamma_size" },
	{ 0xf836c226, "drm_fb_helper_debug_enter" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0x52e0a149, "drm_open" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xa87b6fb1, "drm_atomic_helper_plane_destroy_state" },
	{ 0xc0ecb01c, "drm_framebuffer_cleanup" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_vram_helper");

MODULE_ALIAS("pci:v000080EEd0000BEEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B08504C91765A11A42524D7");
