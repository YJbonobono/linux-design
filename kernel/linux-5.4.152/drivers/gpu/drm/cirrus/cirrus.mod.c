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
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5933e066, "drm_atomic_helper_damage_merged" },
	{ 0xf10de535, "ioread8" },
	{ 0xaa351017, "drm_fbdev_generic_setup" },
	{ 0x316d896, "drm_dev_register" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0xce4bdba1, "drm_simple_display_pipe_init" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe677f7c5, "drm_dev_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x11d29883, "vga_remove_vgacon" },
	{ 0xf2ab010a, "remove_conflicting_pci_framebuffers" },
	{ 0xf3ab6c51, "drm_fb_xrgb8888_to_rgb565_dstclip" },
	{ 0x161c5d62, "drm_fb_memcpy_dstclip" },
	{ 0xb51a629d, "drm_fb_xrgb8888_to_rgb888_dstclip" },
	{ 0xb145e1c0, "drm_gem_shmem_vunmap" },
	{ 0x50cd3e6e, "drm_gem_shmem_vmap" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8d312b66, "drm_set_preferred_mode" },
	{ 0x42c70656, "drm_add_modes_noedid" },
	{ 0x8c25b715, "drm_gem_fb_create_with_dirty" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0x31423ba3, "drm_dev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("pci:v00001013d000000B8sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv00005853sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "DEC12B4F2FC442A6445B8F1");
