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
	{ 0x13caabab, "noop_llseek" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x6006847, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd4fdc31, "usb_register_dev" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4f37f769, "usb_deregister_dev" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v055FpA800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AFB302C75936D22F1E64051");
