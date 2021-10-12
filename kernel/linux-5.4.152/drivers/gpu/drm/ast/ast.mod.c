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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x76e7be9, "drm_crtc_helper_set_config" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x2b1a3154, "drm_helper_resume_force_mode" },
	{ 0xed335d4f, "drm_get_edid" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0xe834b9c5, "drm_vram_mm_file_operations_mmap" },
	{ 0x5aa906f0, "drm_gem_vram_kunmap" },
	{ 0x832a51ad, "drm_mode_config_cleanup" },
	{ 0xd77621c6, "drm_vram_helper_release_mm" },
	{ 0xa254e439, "drm_mode_config_reset" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xfd205417, "no_llseek" },
	{ 0x207721c7, "drm_helper_probe_single_connector_modes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa99fcd93, "drm_encoder_init" },
	{ 0x776ef587, "drm_gem_vram_mm_funcs" },
	{ 0xdc95d890, "drm_connector_cleanup" },
	{ 0xaa351017, "drm_fbdev_generic_setup" },
	{ 0xd2a65128, "drm_gem_vram_create" },
	{ 0x349c4501, "drm_connector_update_edid_property" },
	{ 0xe0618aed, "drm_helper_connector_dpms" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0xf10de535, "ioread8" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x9e77ad3e, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0x82479446, "drm_put_dev" },
	{ 0x4ace2007, "drm_gem_fb_create" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x14fecead, "drm_add_edid_modes" },
	{ 0x3cdfdaee, "drm_connector_init_with_ddc" },
	{ 0xf05c7a9, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xb44ff586, "drm_kms_helper_poll_enable" },
	{ 0xf76023cd, "drm_gem_vram_unpin" },
	{ 0xbd36008, "drm_gem_vram_kmap" },
	{ 0xf1995e47, "drm_fb_helper_set_suspend_unlocked" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0xa3f232, "drm_get_pci_dev" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xa03ed16, "drm_connector_attach_encoder" },
	{ 0xa8cf10c1, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa71b462b, "drm_crtc_init" },
	{ 0xdb4fbe8, "drm_gem_vram_offset" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0x7b735058, "drm_connector_unregister" },
	{ 0xaaa4048e, "drm_encoder_cleanup" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x797c6466, "drm_crtc_cleanup" },
	{ 0xc57f4b89, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0xd404016b, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xf9e54f62, "drm_gem_prime_mmap" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xeeb7266b, "drm_gem_vram_driver_dumb_create" },
	{ 0x47b00ac0, "drm_connector_register" },
	{ 0xc089c5d2, "drm_mode_crtc_set_gamma_size" },
	{ 0x91e44cf7, "drm_kms_helper_poll_disable" },
	{ 0x4388929d, "drm_mode_object_find" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0x52e0a149, "drm_open" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper,i2c-algo-bit");

MODULE_ALIAS("pci:v00001A03d00002000sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00001A03d00002010sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "217868C931F001805D5CC38");
