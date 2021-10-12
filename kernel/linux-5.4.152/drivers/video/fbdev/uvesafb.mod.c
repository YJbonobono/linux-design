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
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xf093382a, "param_ops_invbool" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x69be0126, "cn_add_callback" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc6c115cb, "fb_find_mode" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4e1c5e54, "fb_get_mode" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0x4755bb62, "fb_validate_mode" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x77358855, "iomem_resource" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCB568C40893687BDCBC8A9");
