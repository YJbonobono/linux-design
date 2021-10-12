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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x468df55d, "usb_sg_wait" },
	{ 0x9385fd16, "usb_sg_init" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd4ffb6b5, "input_mt_get_slot_by_key" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6f1d6ff7, "vb2_wait_for_all_buffers" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x636964f5, "input_allocate_polled_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf23af466, "input_free_polled_device" },
	{ 0x6c64287b, "input_unregister_polled_device" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg,input-polldev");

MODULE_ALIAS("usb:v045Ep0775d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FC6EFC683AAD674BE9614C0");
