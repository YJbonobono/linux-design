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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x87a67f49, "single_open" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0xb177d101, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x66130819, "drm_dev_fini" },
	{ 0x392872de, "drm_fb_memcpy" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0xce4bdba1, "drm_simple_display_pipe_init" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa33ab01d, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc81d0560, "drm_mode_duplicate" },
	{ 0x8f22182b, "drm_gem_fb_get_obj" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6154269c, "drm_fb_swab16" },
	{ 0x8c25b715, "drm_gem_fb_create_with_dirty" },
	{ 0x5933e066, "drm_atomic_helper_damage_merged" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x20645642, "drm_debug" },
	{ 0x8cace268, "dma_buf_begin_cpu_access" },
	{ 0x6d09f017, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xb86d02c7, "drm_mode_probed_add" },
	{ 0x5368be74, "dma_buf_end_cpu_access" },
	{ 0x8c46f18b, "drm_plane_enable_fb_damage_clips" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x468b3bc7, "drm_dev_enter" },
	{ 0x63106ada, "drm_fb_xrgb8888_to_rgb565" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "21DDC0E5D6780DEBA566D41");
