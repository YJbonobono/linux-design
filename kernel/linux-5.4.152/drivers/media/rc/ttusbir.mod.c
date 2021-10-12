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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaad38701, "rc_free_device" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x6b7e0565, "ir_raw_event_store_with_filter" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xddbba1fb, "led_classdev_suspend" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xcf4d6597, "led_classdev_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1B23091F6DC142D7B5200FF");
