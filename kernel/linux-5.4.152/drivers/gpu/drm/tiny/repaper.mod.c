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
	{ 0xe1170c67, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
	{ 0x8c25b715, "drm_gem_fb_create_with_dirty" },
	{ 0x440fd18, "drm_release" },
	{ 0x52e0a149, "drm_open" },
	{ 0xd025eede, "drm_gem_cma_mmap" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x8ac84381, "drm_gem_cma_dumb_create" },
	{ 0xf9e54f62, "drm_gem_prime_mmap" },
	{ 0x421a2739, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0x537d7129, "drm_gem_prime_fd_to_handle" },
	{ 0x8a69ced4, "drm_gem_prime_handle_to_fd" },
	{ 0xe0d0f815, "drm_cma_gem_create_object_default_funcs" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x5368be74, "dma_buf_end_cpu_access" },
	{ 0xf222794c, "drm_fb_xrgb8888_to_gray8" },
	{ 0x8cace268, "dma_buf_begin_cpu_access" },
	{ 0x5ad5f70, "thermal_zone_get_temp" },
	{ 0x468b3bc7, "drm_dev_enter" },
	{ 0x3527208f, "drm_fb_cma_get_gem_obj" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5933e066, "drm_atomic_helper_damage_merged" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf1cf1d7, "thermal_zone_get_zone_by_name" },
	{ 0x6d09f017, "drm_dev_printk" },
	{ 0xaa351017, "drm_fbdev_generic_setup" },
	{ 0x316d896, "drm_dev_register" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0xce4bdba1, "drm_simple_display_pipe_init" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0xec4a32ae, "devm_drm_dev_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x66130819, "drm_dev_fini" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xb86d02c7, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xc81d0560, "drm_mode_duplicate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x407e8a8a, "drm_dev_unplug" },
	{ 0xd859ece7, "drm_atomic_helper_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "DCE22FE386A77C9AA01E15A");
