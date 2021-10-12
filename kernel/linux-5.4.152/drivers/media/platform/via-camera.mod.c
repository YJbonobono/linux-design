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
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xcd538333, "viafb_irq_enable" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc5850110, "printk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb4f863e6, "viafb_pm_register" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfcfef8e1, "v4l2_i2c_new_subdev_board" },
	{ 0xc19ca042, "viafb_find_i2c_adapter" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfff2dfd2, "viafb_gpio_lookup" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcaefb732, "viafb_release_dma" },
	{ 0x92909cec, "_vb2_fop_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x31469540, "viafb_pm_unregister" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0x30cc9311, "viafb_request_dma" },
	{ 0x6f70e4ae, "v4l2_fh_is_singular" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xe1cee08, "viafb_dma_copy_out_sg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdd64e639, "strscpy" },
	{ 0x126e5333, "v4l2_g_parm_cap" },
	{ 0xcda41881, "v4l2_s_parm_cap" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x49960010, "v4l2_s_ctrl" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb4606f8d, "viafb_irq_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,viafb,videobuf2-dma-sg,videobuf2-common");


MODULE_INFO(srcversion, "03293ECCB9165392C6E418C");
