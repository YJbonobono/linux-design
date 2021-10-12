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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x87a67f49, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0xa3b53740, "single_release" },
	{ 0x563ff186, "fb_sys_read" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0xb177d101, "seq_printf" },
	{ 0xe0851549, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xac588b7c, "sys_copyarea" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0xc2a9a188, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbe66444d, "hid_hw_close" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x62e68a9e, "hid_hw_open" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd10064f9, "lcd_device_unregister" },
	{ 0x99baad52, "hid_set_field" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xa0cbd462, "hid_alloc_report_buf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4313e3f3, "sys_fillrect" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x5127158b, "sys_imageblit" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb8449468, "fb_sys_write" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0x38b008a8, "fb_deferred_io_cleanup" },
	{ 0xc01232b9, "fb_deferred_io_init" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xa6f6e71b, "lcd_device_register" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xd4c9d9b8, "ir_raw_event_store" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad1c0db0, "hid_output_report" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
};

MODULE_INFO(depends, "rc-core,hid,fb_sys_fops,syscopyarea,lcd,sysfillrect,sysimgblt");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "BFCC6567328883AFE97C9D5");
