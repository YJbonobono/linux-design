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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0x440fd18, "drm_release" },
	{ 0x52e0a149, "drm_open" },
	{ 0x2fe1ba36, "drm_gem_shmem_mmap" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x1e7ee202, "drm_gem_shmem_dumb_create" },
	{ 0xf9e54f62, "drm_gem_prime_mmap" },
	{ 0x3f2add45, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x537d7129, "drm_gem_prime_fd_to_handle" },
	{ 0x8a69ced4, "drm_gem_prime_handle_to_fd" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
	{ 0x8c25b715, "drm_gem_fb_create_with_dirty" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xaa351017, "drm_fbdev_generic_setup" },
	{ 0x316d896, "drm_dev_register" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0xce4bdba1, "drm_simple_display_pipe_init" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0xe677f7c5, "drm_dev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x14fecead, "drm_add_edid_modes" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6d09f017, "drm_dev_printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xb145e1c0, "drm_gem_shmem_vunmap" },
	{ 0x5368be74, "dma_buf_end_cpu_access" },
	{ 0x8cace268, "dma_buf_begin_cpu_access" },
	{ 0x50cd3e6e, "drm_gem_shmem_vmap" },
	{ 0x66130819, "drm_dev_fini" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5933e066, "drm_atomic_helper_damage_merged" },
	{ 0x8ecd87eb, "drm_mode_object_get" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0x407e8a8a, "drm_dev_unplug" },
	{ 0xeab5b333, "drm_mode_object_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "43A54364B5059ADD66213BB");
