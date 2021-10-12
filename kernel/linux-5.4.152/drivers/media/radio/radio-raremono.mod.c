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
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xb53c1438, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "8EFE8E8C77BBA266902F62E");
