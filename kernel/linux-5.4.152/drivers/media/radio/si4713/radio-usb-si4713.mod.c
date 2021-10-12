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
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xfcfef8e1, "v4l2_i2c_new_subdev_board" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0xb53c1438, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v10C4p8244d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "960EE7CAACEAD481A0BE1D9");
