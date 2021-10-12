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
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0xdf2e67b3, "snd_tea575x_exit" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x1b6c5c18, "snd_tea575x_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x165d087d, "v4l2_device_set_name" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9916e34c, "usb_interrupt_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x42226c72, "snd_tea575x_set_freq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,tea575x");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "A2D17FB56137A7A22C79EDC");
