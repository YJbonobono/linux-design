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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xaad38701, "rc_free_device" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x1a793c8b, "rc_keyup" },
	{ 0xea6545f4, "rc_keydown_notimeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf59a40d, "rc_g_keycode_from_table" },
	{ 0xf8c679e2, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1E56A1868D385D16F818F79");
