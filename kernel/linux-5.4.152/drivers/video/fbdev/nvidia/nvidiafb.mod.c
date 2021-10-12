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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x77baea14, "fb_bl_default_curve" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x4351577a, "fb_parse_edid" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6513a3fa, "fb_get_color_depth" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x62458a2a, "fb_firmware_edid" },
	{ 0x6db25140, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x686de290, "restore_vga" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x4e1c5e54, "fb_get_mode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x61ea189b, "fb_pad_aligned_buffer" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x65c5cc34, "fb_ddc_read" },
	{ 0x4755bb62, "fb_validate_mode" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
};

MODULE_INFO(depends, "vgastate,i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "EAD57A29745A433ECAA8391");
