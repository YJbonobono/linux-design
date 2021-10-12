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
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp9218d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9219d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp921Cd*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp921Dd*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9222d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9226d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9236d*dc*dsc*dp*ic03isc*ip00in*");

MODULE_INFO(srcversion, "2B56BBE1915BB03D8416D35");
