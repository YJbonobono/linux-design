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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x440fd18, "drm_release" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x316d896, "drm_dev_register" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x4c5d9020, "drm_gem_put_pages" },
	{ 0x727d4127, "drm_calc_timestamping_constants" },
	{ 0xb0b57911, "drm_atomic_helper_update_plane" },
	{ 0x6da86c61, "drm_crtc_arm_vblank_event" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0x5c24cbb2, "drm_atomic_helper_commit_hw_done" },
	{ 0x8d312b66, "drm_set_preferred_mode" },
	{ 0xb251826c, "drm_atomic_helper_page_flip" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xfd205417, "no_llseek" },
	{ 0xd6374150, "drm_crtc_handle_vblank" },
	{ 0xda4a487a, "__drm_atomic_helper_crtc_reset" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0xeb86ed49, "drm_crtc_vblank_off" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8fc460ee, "drm_vblank_init" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xa99fcd93, "drm_encoder_init" },
	{ 0x66130819, "drm_dev_fini" },
	{ 0xb17e3e22, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xeaae942f, "drm_universal_plane_init" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x136df6c7, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xde2107a6, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x18288cc0, "drm_atomic_helper_set_config" },
	{ 0xa1d63c07, "drm_gem_fb_prepare_fb" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x31423ba3, "drm_dev_unregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6250a79f, "drm_crtc_init_with_planes" },
	{ 0x1d267627, "drm_atomic_helper_check_plane_state" },
	{ 0x8f22182b, "drm_gem_fb_get_obj" },
	{ 0x4ace2007, "drm_gem_fb_create" },
	{ 0x87ca1281, "drm_gem_handle_create" },
	{ 0xeb818c9d, "vmap" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0x1e56b64, "drm_crtc_vblank_on" },
	{ 0x83726580, "shmem_read_mapping_page_gfp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xde039a55, "drm_gem_object_release" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x52af637e, "drm_atomic_helper_fake_vblank" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0xf3219852, "drm_gem_vm_open" },
	{ 0x129cf3a6, "drm_gem_vm_close" },
	{ 0x5f1fdc29, "drm_atomic_get_crtc_state" },
	{ 0x1d5e0fd3, "drm_plane_cleanup" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0x106a0828, "drm_gem_mmap" },
	{ 0x2da261bd, "drm_atomic_helper_wait_for_vblanks" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0x532f170c, "__drm_atomic_helper_plane_destroy_state" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe677f7c5, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x988ed94d, "drm_crtc_accurate_vblank_count" },
	{ 0xdf1f61a9, "drm_atomic_helper_commit_modeset_disables" },
	{ 0xa03ed16, "drm_connector_attach_encoder" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0x66696159, "drm_crtc_vblank_get" },
	{ 0xeab5b333, "drm_mode_object_put" },
	{ 0x42c70656, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d570964, "drm_gem_object_init" },
	{ 0xaaa4048e, "drm_encoder_cleanup" },
	{ 0x797c6466, "drm_crtc_cleanup" },
	{ 0xa26a55a0, "drm_atomic_helper_commit_planes" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ecd87eb, "drm_mode_object_get" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x4efbfc6e, "drm_atomic_helper_cleanup_planes" },
	{ 0xd859ece7, "drm_atomic_helper_shutdown" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xd7ca0ae0, "drm_atomic_helper_disable_plane" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6136a436, "drm_atomic_add_affected_planes" },
	{ 0x2e7782c2, "drm_gem_get_pages" },
	{ 0x9ea89fa1, "drm_atomic_helper_commit_modeset_enables" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0x52e0a149, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x54b4fcdc, "drm_crtc_add_crc_entry" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "4206DCFC7C756F83B3057DC");
