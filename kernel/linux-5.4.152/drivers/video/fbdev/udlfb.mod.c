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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x7bf3c757, "device_create_bin_file" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x563ff186, "fb_sys_read" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xfcf2878, "usb_get_descriptor" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0xcbd5c266, "device_remove_bin_file" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x6626afca, "down" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0xb8449468, "fb_sys_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xc01232b9, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x38b008a8, "fb_deferred_io_cleanup" },
	{ 0x4313e3f3, "sys_fillrect" },
	{ 0xac588b7c, "sys_copyarea" },
	{ 0x5127158b, "sys_imageblit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcf2a6966, "up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "599124F8EAE3CE25D7860C3");
