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
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xec0c7ec2, "v4l2_ctrl_add_handler" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xcc3d41cb, "v4l2_spi_new_subdev" },
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0x39a24b60, "v4l2_ctrl_find" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0xb53c1438, "video_devdata" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1DF7p2500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD300d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "18815E987F64CEACA26E804");
