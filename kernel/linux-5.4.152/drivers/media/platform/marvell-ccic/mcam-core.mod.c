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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92909cec, "_vb2_fop_release" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x46573150, "v4l2_async_notifier_cleanup" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x9bbfcb27, "v4l2_async_notifier_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xf1de5892, "v4l2_async_notifier_add_subdev" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf4bf417, "devm_clk_register" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x49960010, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x2f10c851, "v4l2_async_notifier_register" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0x6f70e4ae, "v4l2_fh_is_singular" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x126e5333, "v4l2_g_parm_cap" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xee69c99a, "vb2_dma_contig_memops" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xbfac8b49, "v4l2_async_notifier_unregister" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xcda41881, "v4l2_s_parm_cap" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common,videobuf2-dma-contig,videobuf2-dma-sg");


MODULE_INFO(srcversion, "322E0BB8FB465C597034E0E");
