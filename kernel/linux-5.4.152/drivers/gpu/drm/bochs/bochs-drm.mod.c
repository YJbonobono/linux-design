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
	{ 0x440fd18, "drm_release" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x316d896, "drm_dev_register" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x617193dd, "drm_dev_alloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x75970d9, "drm_mode_config_helper_resume" },
	{ 0xe834b9c5, "drm_vram_mm_file_operations_mmap" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0xd77621c6, "drm_vram_helper_release_mm" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0x9d279d71, "drm_atomic_helper_connector_reset" },
	{ 0x8d312b66, "drm_set_preferred_mode" },
	{ 0xfd205417, "no_llseek" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf2ab010a, "remove_conflicting_pci_framebuffers" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x776ef587, "drm_gem_vram_mm_funcs" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0x4609a743, "drm_do_get_edid" },
	{ 0xce4bdba1, "drm_simple_display_pipe_init" },
	{ 0x1ce1f27a, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xaa351017, "drm_fbdev_generic_setup" },
	{ 0xd32c6412, "drm_connector_attach_edid_property" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0xe0618aed, "drm_helper_connector_dpms" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x31423ba3, "drm_dev_unregister" },
	{ 0x9e77ad3e, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0x4ace2007, "drm_gem_fb_create" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x14fecead, "drm_add_edid_modes" },
	{ 0xf05c7a9, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0x11d29883, "vga_remove_vgacon" },
	{ 0xd8e2fda8, "drm_mode_config_helper_suspend" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xa60fc19c, "drm_connector_init" },
	{ 0xf76023cd, "drm_gem_vram_unpin" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x953c7065, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc7f07286, "drm_atomic_helper_check" },
	{ 0x4f894459, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb7e56484, "drm_crtc_send_vblank_event" },
	{ 0x42c70656, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xd859ece7, "drm_atomic_helper_shutdown" },
	{ 0xd404016b, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xf9e54f62, "drm_gem_prime_mmap" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xeeb7266b, "drm_gem_vram_driver_dumb_create" },
	{ 0x47b00ac0, "drm_connector_register" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x52e0a149, "drm_open" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper");

MODULE_ALIAS("pci:v00001234d00001111sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001234d00001111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "588F7631D99E87406C42AC5");
